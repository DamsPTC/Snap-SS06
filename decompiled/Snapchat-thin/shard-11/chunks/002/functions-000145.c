/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082b4aa8; end: 1082b4b33;  */

void FUN_1082b4aa8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082b59c4();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *unaff_x19 = param_1;
  FUN_1082b489c(unaff_x20 + 0x18);
  func_0x0001082b5690(unaff_x20 + 8);
  return;
}



/* Entry: 1082b4b34; end: 1082b4bb7;  */

void FUN_1082b4b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w11;
  int extraout_w12;
  
  lVar1 = param_1;
  func_0x0001082b5a2c();
  if (lVar1 == 0) {
    FUN_1082b49f8(param_1,param_2,param_3);
    lVar1 = param_1;
  }
  if (*(long *)(lVar1 + 0x50) != 0) {
    do {
      func_0x0001082b5958();
    } while (extraout_w11 != 0);
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    do {
      func_0x0001082b599c();
    } while (extraout_w12 != 0);
  }
  func_0x0001082b5910();
  func_0x0001082b5a08();
  return;
}



/* Entry: 1082b4bb8; end: 1082b4c07;  */

void FUN_1082b4bb8(void)

{
  undefined1 *unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x0001082b58c8();
  func_0x0001082b5944();
  func_0x0001082b5900(auStack_48);
  func_0x0001082b58e4();
  func_0x0001082b5928();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4c08; end: 1082b4c4f;  */

void FUN_1082b4c08(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1082a38f4();
  FUN_1082b4b34(param_1,param_2,param_3,param_4);
  *param_2 = 0;
  return;
}



/* Entry: 1082b4c50; end: 1082b4cbb;  */

void FUN_1082b4c50(void)

{
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x0001082b58c8();
  func_0x0001082b5944();
  func_0x0001082b5984();
  func_0x0001082b58e4();
  func_0x0001082b5928();
  if (*unaff_x20 == 0) {
    func_0x0001082b5900(auStack_48);
    func_0x0001082b58e4();
    func_0x0001082b5928();
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4cbc; end: 1082b4d3b;  */

void FUN_1082b4cbc(void)

{
  undefined1 *unaff_x19;
  long *unaff_x20;
  long lStack_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  long lStack_38;
  
  func_0x0001082b58c8();
  func_0x0001082b5984();
  if (lStack_48 == 0) {
    func_0x0001082b5900();
  }
  else {
    *unaff_x20 = lStack_48;
    *(undefined4 *)(unaff_x20 + 1) = uStack_40;
    *(undefined2 *)((long)unaff_x20 + 0xc) = uStack_3c;
    unaff_x20[2] = lStack_38;
  }
  func_0x0001082b5928();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4d3c; end: 1082b4d8b;  */

void FUN_1082b4d3c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  
  func_0x0001082b5994();
  puVar1 = unaff_x19 + 8;
  FUN_1082b54d0(puVar1,param_2);
  if (puVar1 != (undefined1 *)0x0) {
    FUN_1082b5168(unaff_x19 + 8,param_2);
    func_0x0001082b59d0();
    func_0x0001082b5a14();
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4d8c; end: 1082b500b;  */

undefined8 **
FUN_1082b4d8c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  int *piVar6;
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w12;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long *plStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined8 *puStack_e8;
  int aiStack_e0 [2];
  undefined1 auStack_d8 [88];
  char cStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  FUN_10828aae8(aiStack_e0,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8),param_3,1);
  if (aiStack_e0[0] == 0) {
    puStack_108 = (undefined8 *)0x0;
    plStack_100 = (long *)0x0;
    uStack_f8 = 0;
    uStack_f4 = 0x3210;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined2 *)((long)param_1 + 0xc) = 0x3210;
    param_1[2] = 0;
    FUN_1082764bc(&plStack_100);
    ppuVar5 = &puStack_108;
    FUN_1082764bc();
  }
  else {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    piVar6 = (int *)(puVar3 + 1);
    *piVar6 = 1;
    *puVar3 = &PTR_DAT_110a36d90;
    puVar3[2] = 0;
    uStack_118 = 0x100000000;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_e8 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x10;
    puStack_128 = puVar3;
    puStack_110 = puVar3;
    __Znwm();
    puStack_128 = (undefined8 *)0x0;
    *puVar4 = &PTR_SUB_110a36dd0;
    puVar4[1] = puVar3;
    puStack_e8 = puVar4;
    FUN_1082a58e8(&plStack_120,uVar7,&plStack_100,auStack_d8,param_4,1,0,&uStack_118,0,param_6,1,1);
    FUN_10827683c(&plStack_100);
    FUN_108287b84(&puStack_128);
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8);
    func_0x00010828a9ac(uVar7,auStack_d8,aiStack_e0[0]);
    plStack_100 = plStack_120;
    plStack_120 = (long *)0x0;
    if (plStack_100 != (long *)0x0) {
      plStack_100 = (long *)((long)plStack_100 + *(long *)(*plStack_100 + -0x18));
    }
    uStack_130 = 0;
    uStack_f4 = (undefined2)uVar7;
    uStack_f8 = param_5;
    if (plStack_100 != (long *)0x0) {
      do {
        func_0x0001082b599c();
      } while (extraout_w12 != 0);
    }
    func_0x0001082b5910();
    uVar7 = 0;
    if (puStack_110 != (undefined8 *)0x0) {
      do {
        func_0x0001082b5958();
        uVar7 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[2] = uVar7;
    FUN_1082764bc(&plStack_100);
    FUN_1082764bc(&uStack_130);
    func_0x0001082764f4(&plStack_120);
    ppuVar5 = &puStack_110;
    FUN_108287b84();
  }
  if (cStack_80 == '\x01') {
    func_0x0001082b5968();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001082764f4(&plStack_120);
    FUN_108287b84(&puStack_110);
    if (cStack_80 == '\x01') {
      func_0x0001082b5968();
    }
    __Unwind_Resume(ppuVar5);
    FUN_1082b5030();
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 1082b500c; end: 1082b502f;  */

undefined8 FUN_1082b500c(undefined8 param_1)

{
  FUN_1082b5030(param_1,0);
  return param_1;
}



/* Entry: 1082b5030; end: 1082b5077;  */

void FUN_1082b5030(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082b5078; end: 1082b508b;  */

void FUN_1082b5078(void)

{
  FUN_1082b508c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b508c; end: 1082b514f;  */

undefined8 * FUN_1082b508c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a36d90;
  func_0x00010827aaa0(param_1 + 2);
  return param_1;
}



/* Entry: 1082b5150; end: 1082b5167;  */

void FUN_1082b5150(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082b5168; end: 1082b524f;  */

byte FUN_1082b5168(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  
  iVar10 = 0;
  uVar4 = *(uint *)*param_2;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  iVar8 = param_1[1];
  uVar2 = iVar8 - 1U & uVar4;
  while( true ) {
    bVar9 = iVar10 < iVar8;
    if (iVar8 <= iVar10) break;
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    uVar5 = *puVar1;
    if (uVar5 == 0) break;
    if (uVar4 == uVar5) {
      puVar6 = param_2;
      FUN_1082a5e3c(param_2,*(long *)(puVar1 + 2) + 0x18);
      if (((ulong)puVar6 & 1) != 0) {
        FUN_1082b5250(param_1,uVar2);
        uVar4 = param_1[1];
        if ((4 < (int)uVar4) && (*param_1 * 4 <= (int)uVar4)) {
          FUN_1082b52f4(param_1,uVar4 >> 1);
        }
        bVar9 = true;
        bVar7 = 1;
        goto LAB_1082b51fc;
      }
      iVar8 = param_1[1];
    }
    iVar3 = 0;
    if ((int)uVar2 < 1) {
      iVar3 = iVar8;
    }
    uVar2 = (uVar2 + iVar3) - 1;
    iVar10 = iVar10 + 1;
  }
  bVar7 = 0;
LAB_1082b51fc:
  return bVar9 & bVar7;
}



/* Entry: 1082b5250; end: 1082b52f3;  */

void FUN_1082b5250(int *param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  *param_1 = *param_1 + -1;
  do {
    lVar5 = *(long *)(param_1 + 2);
    iVar4 = (int)param_2;
    piVar1 = (int *)(lVar5 + (long)iVar4 * 0x10);
    do {
      uVar3 = (int)param_2 - 1;
      if ((int)param_2 < 1) {
        uVar3 = param_1[1] + uVar3;
      }
      param_2 = (ulong)uVar3;
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | param_2 << 4));
      if (uVar2 == 0) {
        if (*piVar1 != 0) {
          *piVar1 = 0;
        }
        return;
      }
      uVar2 = param_1[1] - 1U & uVar2;
    } while (((int)uVar3 <= (int)uVar2 && (int)uVar2 < iVar4) ||
            ((iVar4 < (int)uVar3 && ((int)uVar2 < iVar4 || (int)uVar3 <= (int)uVar2))));
    FUN_1082b53d8(piVar1,lVar5 + (long)(int)uVar3 * 0x10);
  } while( true );
}



/* Entry: 1082b52f4; end: 1082b53d7;  */

void FUN_1082b52f4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar4 = (long *)(param_1 + 2);
  lStack_38 = *plVar4;
  *plVar4 = 0;
  puVar2 = (undefined8 *)((long)param_2 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 0x10) || param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar3 = (long)param_2 << 4;
    do {
      puVar2 = puVar2 + 2;
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  FUN_1082b5150(plVar4);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 4 != lVar3;
      lVar3 = lVar3 + 0x10) {
    if (*(int *)(lStack_38 + lVar3) != 0) {
      FUN_1082b5414(param_1,lStack_38 + lVar3 + 8);
    }
  }
  FUN_1082b500c(&lStack_38);
  return;
}



/* Entry: 1082b53d8; end: 1082b5413;  */

void FUN_1082b53d8(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (*param_1 == 0) {
      if (iVar1 == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    }
    else if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      iVar1 = *param_2;
    }
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 1082b5414; end: 1082b54cf;  */

void FUN_1082b5414(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong extraout_x8;
  ulong uVar5;
  uint extraout_w9;
  undefined8 *puVar6;
  uint unaff_w22;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  puVar6 = (undefined8 *)(*param_2 + 0x18);
  func_0x0001082b59ac(*puVar6);
  uVar8 = extraout_w9 & unaff_w22;
  uVar5 = extraout_x8;
  while( true ) {
    if ((int)uVar5 <= iVar7) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar8 * 0x10);
    uVar2 = *puVar1;
    if (uVar2 == 0) break;
    if (unaff_w22 == uVar2) {
      puVar3 = puVar6;
      FUN_1082a5e3c(puVar6,*(long *)(puVar1 + 2) + 0x18);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x0001082b5a38();
        return;
      }
      uVar5 = (ulong)(uint)param_1[1];
    }
    iVar4 = 0;
    if ((int)uVar8 < 1) {
      iVar4 = (int)uVar5;
    }
    uVar8 = (uVar8 + iVar4) - 1;
    iVar7 = iVar7 + 1;
  }
  func_0x0001082b5a38();
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1082b54d0; end: 1082b54eb;  */

void FUN_1082b54d0(void)

{
  FUN_1082b54ec();
  return;
}



/* Entry: 1082b54ec; end: 1082b5583;  */

uint * FUN_1082b54ec(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong extraout_x8;
  ulong uVar4;
  uint extraout_w9;
  ulong unaff_x19;
  long unaff_x20;
  int iVar5;
  uint unaff_w22;
  uint uVar6;
  
  func_0x0001082b59c4();
  iVar5 = 0;
  func_0x0001082b59ac(*param_2);
  uVar6 = extraout_w9 & unaff_w22;
  uVar4 = extraout_x8;
  while( true ) {
    if ((int)uVar4 <= iVar5) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar6 * 0x10);
    uVar2 = *puVar1;
    if (uVar2 == 0) break;
    if (unaff_w22 == uVar2) {
      uVar4 = unaff_x19;
      FUN_1082a5e3c();
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
      uVar4 = (ulong)*(uint *)(unaff_x20 + 4);
    }
    iVar3 = 0;
    if ((int)uVar6 < 1) {
      iVar3 = (int)uVar4;
    }
    uVar6 = (uVar6 + iVar3) - 1;
    iVar5 = iVar5 + 1;
  }
  return (uint *)0x0;
}



/* Entry: 1082b5584; end: 1082b55eb;  */

undefined8 * FUN_1082b5584(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  int extraout_w11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x0001082b59c4();
  FUN_10840f8d0();
  lVar2 = unaff_x20[1];
  unaff_x20[1] = (long)(param_1 + 0xd);
  param_1[0xd] = FUN_1082b55fc;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = lVar4 + 8;
  *(char *)(lVar4 + 8) = (char)param_1 - (char)(int)lVar2;
  *unaff_x20 = unaff_x20[1] + 1;
  unaff_x20[1] = unaff_x20[1] + 1;
  uVar3 = *unaff_x19;
  plVar1 = (long *)unaff_x19[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1082aa5ac(param_1 + 3,uVar3);
  uVar3 = 0;
  if (*plVar1 != 0) {
    do {
      func_0x0001082b5958();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[10] = uVar3;
  lVar2 = plVar1[1];
  *(undefined2 *)((long)param_1 + 0x5c) = *(undefined2 *)((long)plVar1 + 0xc);
  *(int *)(param_1 + 0xb) = (int)lVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 1082b55ec; end: 1082b55fb;  */

undefined8 * FUN_1082b55ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  int extraout_w11;
  
  uVar3 = *param_1;
  plVar1 = (long *)param_1[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1082aa5ac(param_2 + 3,uVar3);
  uVar3 = 0;
  if (*plVar1 != 0) {
    do {
      func_0x0001082b5958();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_2[10] = uVar3;
  lVar2 = plVar1[1];
  *(undefined2 *)((long)param_2 + 0x5c) = *(undefined2 *)((long)plVar1 + 0xc);
  *(int *)(param_2 + 0xb) = (int)lVar2;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return param_2;
}



/* Entry: 1082b55fc; end: 1082b562f;  */

long FUN_1082b55fc(long param_1)

{
  func_0x0001082b4ae4(param_1 + -0x71);
  func_0x00010827a384(param_1 + -0x59);
  return param_1 + -0x71;
}



/* Entry: 1082b5630; end: 1082b5717;  */

undefined8 * FUN_1082b5630(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1082aa5ac(param_1 + 3);
  uVar2 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001082b5958();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[10] = uVar2;
  lVar1 = param_3[1];
  *(undefined2 *)((long)param_1 + 0x5c) = *(undefined2 *)((long)param_3 + 0xc);
  *(int *)(param_1 + 0xb) = (int)lVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 1082b5718; end: 1082b572b;  */

void FUN_1082b5718(void)

{
  func_0x0001082b56ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b572c; end: 1082b576f;  */

void FUN_1082b572c(long param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_SUB_110a36dd0;
  uVar2 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    do {
      func_0x0001082b5958();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082b5770; end: 1082b57bb;  */

void FUN_1082b5770(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 unaff_x30;
  
  *param_2 = &PTR_SUB_110a36dd0;
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    do {
      func_0x0001082b5958(unaff_x30);
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082b57bc; end: 1082b589f;  */

void FUN_1082b57bc(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plStack_28;
  
  if (((*param_3 == 0) ||
      (plVar4 = *(long **)(*(long *)(param_2 + 8) + 0x10), plVar4 == (long *)0x0)) ||
     (plVar4 = *(long **)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x10), plVar4 == (long *)0x0))
  {
    plStack_28 = (long *)0x0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    FUN_10826b5e8(&plStack_28);
  }
  else {
    (**(code **)(*plVar4 + 0x58))();
    if (plVar4 != (long *)0x0) {
      piVar1 = (int *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_28 = plVar4;
    FUN_1082b1840(param_1,&plStack_28);
    FUN_108283764(&plStack_28);
  }
  return;
}



/* Entry: 1082b58a0; end: 1082b5a4b;  */

undefined ** FUN_1082b58a0(void)

{
  return &PTR_DAT_110a36e30;
}



/* Entry: 1082b5a4c; end: 1082b5a8f;  */

void FUN_1082b5a4c(long param_1,long param_2)

{
  FUN_1082a96fc(param_2,*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_2 + 0x70),
                *(undefined4 *)(param_2 + 0x70),1,1);
  *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
  return;
}



/* Entry: 1082b5a90; end: 1082b5b27;  */

undefined8 FUN_1082b5a90(long param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_28;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x160);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = *(undefined4 *)(param_1 + 0xa0);
    uVar3 = *(undefined4 *)(param_1 + 0xa4);
    lStack_28 = *(long *)(param_1 + 0xa8);
    if (lStack_28 != 0) {
      piVar1 = (int *)(lStack_28 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10829faa0(uVar8,lVar9,uVar4,uVar5,uVar2,uVar3,&lStack_28,*(undefined8 *)(param_1 + 0xb0));
    FUN_10826b598(&lStack_28);
  }
  return uVar8;
}



/* Entry: 1082b5b28; end: 1082b5b2b;  */

undefined8 * FUN_1082b5b28(undefined8 *param_1)

{
  FUN_10826b598(param_1 + 0x15);
  FUN_1082764bc(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b5b2c; end: 1082b5b3f;  */

void FUN_1082b5b2c(void)

{
  FUN_1082b5b58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b5b40; end: 1082b5b57;  */

undefined8 FUN_1082b5b40(void)

{
  return 0;
}



/* Entry: 1082b5b58; end: 1082b5b87;  */

undefined8 * FUN_1082b5b58(undefined8 *param_1)

{
  FUN_10826b598(param_1 + 0x15);
  FUN_1082764bc(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b5b88; end: 1082b5c23;  */

undefined8 * FUN_1082b5b88(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_DAT_110a36ee8;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0x100000000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_1082b5c24(param_1 + 4,param_3,0);
  FUN_1082b6314(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 1082b5c24; end: 1082b5c83;  */

undefined8 FUN_1082b5c24(undefined8 *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  if ((param_2 != param_1[1]) && (param_3 != 1 || (ulong)param_1[1] < param_2)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2;
      FUN_1082b630c(param_2);
    }
    FUN_108262bb8(param_1,uVar1);
    param_1[1] = param_2;
  }
  return *param_1;
}



/* Entry: 1082b5c84; end: 1082b5d1b;  */

undefined8
FUN_1082b5c84(long param_1,undefined2 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (param_5 - 5U < 8) {
      while (0 < param_4) {
        *param_2 = (short)*param_3;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + -1;
      }
    }
    else {
      if (6 < param_5 - 0x14U) goto LAB_1082b5cf4;
      while (0 < param_4) {
        FUN_10840ff34(*param_3);
        *param_2 = (short)param_1;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + -1;
      }
    }
    uVar1 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(param_2,param_3,(long)(param_4 << 2));
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1082b5d1c; end: 1082b5d4f;  */

void FUN_1082b5d1c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((-1 < param_2) && (func_0x0001082b6590(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6464();
    func_0x0001082b65a4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5d50);
  (*pcVar1)();
}



/* Entry: 1082b5d50; end: 1082b5d9b;  */

void FUN_1082b5d50(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b65a4();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5d9c);
  (*pcVar1)();
}



/* Entry: 1082b5d9c; end: 1082b5dcf;  */

void FUN_1082b5d9c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((-1 < param_2) && (func_0x0001082b6590(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6464();
    func_0x0001082b65a4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5dd0);
  (*pcVar1)();
}



/* Entry: 1082b5dd0; end: 1082b5e1b;  */

void FUN_1082b5dd0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b65a4();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5e1c);
  (*pcVar1)();
}



/* Entry: 1082b5e1c; end: 1082b5e67;  */

void FUN_1082b5e1c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  int unaff_w22;
  
  func_0x0001082b6504();
  if ((param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5e64);
    (*pcVar1)();
  }
  func_0x0001082b6464();
  func_0x0001082b656c();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b656c();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5eb4);
  (*pcVar1)();
}



/* Entry: 1082b5e68; end: 1082b5eb3;  */

void FUN_1082b5e68(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b656c();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5eb4);
  (*pcVar1)();
}



/* Entry: 1082b5eb4; end: 1082b5eff;  */

void FUN_1082b5eb4(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  int unaff_w22;
  
  func_0x0001082b6504();
  if ((param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5efc);
    (*pcVar1)();
  }
  func_0x0001082b6464();
  func_0x0001082b656c();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b656c();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5f4c);
  (*pcVar1)();
}



/* Entry: 1082b5f00; end: 1082b5f4b;  */

void FUN_1082b5f00(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b656c();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5f4c);
  (*pcVar1)();
}



/* Entry: 1082b5f4c; end: 1082b5f9b;  */

void FUN_1082b5f4c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  int unaff_w22;
  
  func_0x0001082b6504();
  if ((param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5f98);
    (*pcVar1)();
  }
  func_0x0001082b6464();
  func_0x0001082b6574();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b6574();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5fe8);
  (*pcVar1)();
}



/* Entry: 1082b5f9c; end: 1082b5fe7;  */

void FUN_1082b5f9c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b6574();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b5fe8);
  (*pcVar1)();
}



/* Entry: 1082b5fe8; end: 1082b6037;  */

void FUN_1082b5fe8(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  int unaff_w22;
  
  func_0x0001082b6504();
  if ((param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6034);
    (*pcVar1)();
  }
  func_0x0001082b6464();
  func_0x0001082b6574();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b6574();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6084);
  (*pcVar1)();
}



/* Entry: 1082b6038; end: 1082b6083;  */

void FUN_1082b6038(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int unaff_w22;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b648c();
    for (; unaff_w22 != 0; unaff_w22 = unaff_w22 + -1) {
      func_0x0001082b64e0();
      func_0x0001082b6574();
      func_0x0001082b6560();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6084);
  (*pcVar1)();
}



/* Entry: 1082b6084; end: 1082b60cf;  */

long FUN_1082b6084(long param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar4;
  undefined8 extraout_x8;
  undefined2 *puVar5;
  int iVar6;
  
  func_0x0001082b6504();
  if (((int)param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b60cc);
    (*pcVar3)();
  }
  func_0x0001082b6464();
  func_0x0001082b65b4();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 < 0) {
LAB_1082b6100:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b6104);
    (*pcVar3)();
  }
  func_0x0001082b6590();
  if ((bool)in_ZR || in_NG != in_OV) goto LAB_1082b6100;
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (param_2 & 0x7fffffff) * 4);
  iVar1 = (int)uVar2 >> 0x18;
  puVar5 = (undefined2 *)(*(long *)(param_1 + 0x20) + ((ulong)uVar2 & 0xffffff));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar6 = param_3 << 2;
    if (iVar1 - 5U < 8) {
      while (0 < iVar6) {
        *puVar5 = (short)*param_4;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      }
    }
    else {
      if (6 < iVar1 - 0x14U) goto LAB_1082b5cf4;
      while (0 < iVar6) {
        FUN_10840ff34(*param_4);
        *puVar5 = (short)param_1;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      }
    }
    lVar4 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(puVar5,param_4,(long)(param_3 << 4));
    lVar4 = 4;
  }
  return lVar4;
}



/* Entry: 1082b60d0; end: 1082b6103;  */

undefined8 FUN_1082b60d0(long param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (((int)param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b6104);
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (param_2 & 0x7fffffff) * 4);
  iVar1 = (int)uVar2 >> 0x18;
  puVar5 = (undefined2 *)(*(long *)(param_1 + 0x20) + ((ulong)uVar2 & 0xffffff));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar6 = param_3 << 2;
    if (iVar1 - 5U < 8) {
      while (0 < iVar6) {
        *puVar5 = (short)*param_4;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      }
    }
    else {
      if (6 < iVar1 - 0x14U) goto LAB_1082b5cf4;
      while (0 < iVar6) {
        FUN_10840ff34(*param_4);
        *puVar5 = (short)param_1;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      }
    }
    uVar4 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(puVar5,param_4,(long)(param_3 << 4));
    uVar4 = 4;
  }
  return uVar4;
}



/* Entry: 1082b6104; end: 1082b614f;  */

long FUN_1082b6104(long param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined2 *puVar6;
  int iVar7;
  
  func_0x0001082b6504();
  if (((int)param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b614c);
    (*pcVar3)();
  }
  func_0x0001082b6464();
  func_0x0001082b65b4();
  func_0x0001082b64cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar5 = param_2 & 0xffffffff;
  if ((int)param_2 < 0) {
LAB_1082b6188:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b618c);
    (*pcVar3)();
  }
  func_0x0001082b6590();
  if ((bool)in_ZR || in_NG != in_OV) goto LAB_1082b6188;
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (uVar5 & 0x7fffffff) * 4);
  iVar1 = (int)uVar2 >> 0x18;
  puVar6 = (undefined2 *)(*(long *)(param_1 + 0x20) + ((ulong)uVar2 & 0xffffff));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar7 = param_3 << 2;
    if (iVar1 - 5U < 8) {
      while (0 < iVar7) {
        *puVar6 = (short)*param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      }
    }
    else {
      if (6 < iVar1 - 0x14U) goto LAB_1082b5cf4;
      while (0 < iVar7) {
        FUN_10840ff34(*param_4);
        *puVar6 = (short)param_1;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      }
    }
    lVar4 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(puVar6,param_4,(long)(param_3 << 4));
    lVar4 = 4;
  }
  return lVar4;
}



/* Entry: 1082b6150; end: 1082b619b;  */

undefined8 FUN_1082b6150(long param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  uVar5 = (ulong)param_2;
  if (((int)param_2 < 0) || (func_0x0001082b6590(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b618c);
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (uVar5 & 0x7fffffff) * 4);
  iVar1 = (int)uVar2 >> 0x18;
  puVar6 = (undefined2 *)(*(long *)(param_1 + 0x20) + ((ulong)uVar2 & 0xffffff));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar7 = param_3 << 2;
    if (iVar1 - 5U < 8) {
      while (0 < iVar7) {
        *puVar6 = (short)*param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      }
    }
    else {
      if (6 < iVar1 - 0x14U) goto LAB_1082b5cf4;
      while (0 < iVar7) {
        FUN_10840ff34(*param_4);
        *puVar6 = (short)param_1;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      }
    }
    uVar4 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(puVar6,param_4,(long)(param_3 << 4));
    uVar4 = 4;
  }
  return uVar4;
}



/* Entry: 1082b619c; end: 1082b6207;  */

void FUN_1082b619c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6514();
    for (; unaff_x23 != unaff_x24; unaff_x23 = unaff_x23 + 1) {
      lVar2 = 2;
      do {
        func_0x0001082b65c0();
        func_0x0001082b656c();
        func_0x0001082b6560();
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6208);
  (*pcVar1)();
}



/* Entry: 1082b6208; end: 1082b621f;  */

void FUN_1082b6208(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6514();
    for (; unaff_x23 != unaff_x24; unaff_x23 = unaff_x23 + 1) {
      lVar2 = 2;
      do {
        func_0x0001082b65c0();
        func_0x0001082b656c();
        func_0x0001082b6560();
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6208);
  (*pcVar1)();
}



/* Entry: 1082b6220; end: 1082b628b;  */

void FUN_1082b6220(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6514();
    for (; unaff_x23 != unaff_x24; unaff_x23 = unaff_x23 + 1) {
      lVar2 = 3;
      do {
        func_0x0001082b65c0();
        func_0x0001082b6574();
        func_0x0001082b6560();
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b628c);
  (*pcVar1)();
}



/* Entry: 1082b628c; end: 1082b62f7;  */

void FUN_1082b628c(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  
  if ((-1 < param_2) && (func_0x0001082b64f4(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001082b6514();
    for (; unaff_x23 != unaff_x24; unaff_x23 = unaff_x23 + 1) {
      lVar2 = 3;
      do {
        func_0x0001082b65c0();
        func_0x0001082b6574();
        func_0x0001082b6560();
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b628c);
  (*pcVar1)();
}



/* Entry: 1082b62f8; end: 1082b630b;  */

void FUN_1082b62f8(void)

{
  func_0x000108270ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b630c; end: 1082b6313;  */

/* WARNING: Removing unreachable block (ram,0x00010841082c) */

undefined8 FUN_1082b630c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _malloc();
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 1082b6314; end: 1082b639b;  */

long FUN_1082b6314(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x0001082b6350(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 4;
}



/* Entry: 1082b639c; end: 1082b640f;  */

void FUN_1082b639c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 2);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 2;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082b6410; end: 1082b6463;  */

void FUN_1082b6410(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1082b6434;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 4;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 1082b6464; end: 1082b65d3;  */

void FUN_1082b6464(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1082b65d4; end: 1082b6653;  */

float * FUN_1082b65d4(long param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 extraout_x8;
  float *pfVar12;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar7 = param_1;
    pfVar11 = param_3;
    FUN_10828782c();
    if ((int)lVar7 != 0) {
      if (param_3 != (float *)0x0) {
        *param_3 = 1.0;
      }
      return (float *)0x1;
    }
    lVar7 = param_1;
    func_0x0001083a630c();
    if ((int)lVar7 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar5 = (undefined1)uVar1;
      uVar13 = (undefined1)((uint)uVar1 >> 8);
      uVar14 = (undefined1)((uint)uVar1 >> 0x10);
      uVar15 = (undefined1)((uint)uVar1 >> 0x18);
      puVar2 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar2 + -0x30) = unaff_d9;
        *(ulong *)(puVar2 + -0x28) = unaff_d8;
        *(float **)(puVar2 + -0x20) = unaff_x20;
        *(float **)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
        *(code **)(puVar2 + -8) = unaff_x30;
        uVar6 = CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar5)));
        unaff_d8 = (ulong)uVar6;
        pfVar8 = param_2;
        pfVar9 = param_3;
        func_0x00010834ac2c();
        *(undefined8 *)(puVar2 + -0x38) = extraout_x8;
        FUN_10828e338();
        if (((ulong)pfVar8 & 1) == 0) {
          *(uint *)(puVar2 + -0x48) = uVar6;
          *(undefined4 *)(puVar2 + -0x44) = 0;
          *(undefined4 *)(puVar2 + -0x40) = 0;
          *(uint *)(puVar2 + -0x3c) = uVar6;
          pfVar9 = (float *)(puVar2 + -0x58);
          pfVar11 = (float *)(puVar2 + -0x48);
          pfVar8 = param_2;
          FUN_108364dd8();
          fVar19 = ABS(*(float *)(puVar2 + -0x58));
          fVar16 = ABS(*(float *)(puVar2 + -0x54));
          uVar15 = (undefined1)((uint)fVar19 >> 0x18);
          uVar14 = (undefined1)((uint)fVar19 >> 0x10);
          uVar13 = (undefined1)((uint)fVar19 >> 8);
          uVar5 = SUB41(fVar19,0);
          if (fVar16 <= fVar19) {
            uVar5 = SUB41(fVar16,0);
            uVar13 = (undefined1)((uint)fVar16 >> 8);
            uVar14 = (undefined1)((uint)fVar16 >> 0x10);
            uVar15 = (undefined1)((uint)fVar16 >> 0x18);
            fVar16 = fVar19;
          }
          fVar16 = fVar16 + (float)CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar5))) * 0.5;
          fVar17 = ABS(*(float *)(puVar2 + -0x50));
          fVar19 = ABS(*(float *)(puVar2 + -0x4c));
          fVar18 = fVar17;
          if (fVar19 <= fVar17) {
            fVar18 = fVar19;
            fVar19 = fVar17;
          }
          fVar19 = fVar19 + fVar18 * 0.5;
          bVar3 = false;
          bVar4 = true;
          if (fVar19 <= 1.0) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar16)) {
              bVar3 = fVar16 == 1.0;
              bVar4 = 1.0 <= fVar16;
            }
          }
          pfVar12 = (float *)(ulong)(!bVar4 || bVar3);
          if ((param_3 != (float *)0x0) && (!bVar4 || bVar3)) {
            *param_3 = (fVar16 + fVar19) * 0.5;
          }
        }
        else {
          pfVar12 = (float *)0x0;
        }
        uVar5 = *(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x38);
        if ((bool)uVar5) {
          return pfVar12;
        }
        ___stack_chk_fail();
        *(undefined8 *)(puVar2 + -0xa0) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x98) = unaff_x27;
        *(float **)(puVar2 + -0x90) = unaff_x22;
        *(float **)(puVar2 + -0x88) = unaff_x21;
        *(float **)(puVar2 + -0x80) = param_2;
        *(float **)(puVar2 + -0x78) = param_3;
        *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x68) = FUN_108349d24;
        unaff_x29 = puVar2 + -0x70;
        pfVar10 = (float *)(puVar2 + -0xbc0);
        func_0x00010834ac2c();
        *(undefined8 *)(puVar2 + -0xa8) = extraout_x8_00;
        func_0x00010834ace8();
        unaff_x19 = pfVar8;
        pfVar12 = pfVar9;
        param_3 = pfVar11;
        unaff_x20 = param_2;
        if ((extraout_x8_01 & 1) == 0) {
          pfVar12 = pfVar11;
          FUN_108349e68(pfVar11,*(undefined8 *)(pfVar8 + 0xe),puVar2 + -0xb80);
          uVar5 = *(long *)pfVar11 == 0;
          uVar6 = (uint)pfVar12;
          if (!(bool)uVar5) {
            uVar6 = 1;
          }
          unaff_x20 = pfVar8;
          unaff_x21 = pfVar9;
          if ((((uVar6 & 1) == 0) && (uVar5 = ((uint)pfVar11[0x12] & 0xc0) == 0, (bool)uVar5)) &&
             (*(long *)(pfVar11 + 4) != 0)) {
            *(undefined4 *)(puVar2 + -0xb90) = 0;
            *(undefined8 *)(puVar2 + -0xba8) = 0;
            *(undefined8 *)(puVar2 + -0xbb0) = 0;
            *(undefined8 *)(puVar2 + -0xb98) = 0;
            *(undefined8 *)(puVar2 + -0xba0) = 0;
            *(undefined8 *)(puVar2 + -3000) = 0;
            *(undefined8 *)(puVar2 + -0xbc0) = 0;
            pfVar12 = pfVar9;
            FUN_1083857ec(pfVar9,*(undefined8 *)(pfVar8 + 0xe),puVar2 + -0xbc0);
            if ((int)pfVar12 != 0) {
              func_0x00010834acac(puVar2 + -0xb80,pfVar8,0);
              unaff_x22 = *(float **)(pfVar11 + 4);
              param_3 = *(float **)(pfVar8 + 0xe);
              FUN_108362dd8();
              unaff_x19 = unaff_x22;
              func_0x00010834ac3c(puVar2 + -0xb80);
              pfVar12 = pfVar10;
              if (((ulong)unaff_x22 & 1) != 0) goto LAB_108349db4;
            }
          }
          FUN_108376ad8(puVar2 + -0xb80);
          FUN_10837816c(puVar2 + -0xb80,pfVar9,0);
          pfVar12 = (float *)(puVar2 + -0xb80);
          func_0x00010834ac0c(pfVar8);
          unaff_x19 = *(float **)(puVar2 + -0xb80);
          FUN_10837ca5c();
          param_3 = pfVar11;
        }
LAB_108349db4:
        param_2 = pfVar12;
        func_0x00010834ac18(*(undefined8 *)(puVar2 + -0xa8));
        if ((bool)uVar5) {
          return unaff_x19;
        }
        ___stack_chk_fail();
        pfVar9 = unaff_x19;
        func_0x00010834ac3c(puVar2 + -0xb80);
        unaff_x30 = FUN_108349e68;
        func_0x00010834ac60();
        if (((uint)pfVar9[0x12] & 0xc0) != 0x40) {
          return (float *)0x0;
        }
        fVar19 = pfVar9[0x10];
        uVar5 = SUB41(fVar19,0);
        uVar13 = (undefined1)((uint)fVar19 >> 8);
        uVar14 = (undefined1)((uint)fVar19 >> 0x10);
        uVar15 = (undefined1)((uint)fVar19 >> 0x18);
        if (fVar19 == 0.0) {
          *param_3 = 1.0;
          return (float *)0x1;
        }
        puVar2 = puVar2 + -0xbc0;
        pfVar11 = param_3;
        if (((uint)pfVar9[0x12] & 1) == 0) {
          return (float *)0x0;
        }
      } while( true );
    }
  }
  return (float *)0x0;
}



/* Entry: 1082b6654; end: 1082b66bf;  */

undefined8 * FUN_1082b6654(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    (**(code **)(*(long *)*param_1 + 0x50))
              ((long *)*param_1,*(int *)((long)param_1 + 0x2c) - *(int *)(param_1 + 5),param_1[2]);
    iVar1 = *(int *)(param_1[1] + 0x18);
    if (iVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082b66bc);
      (*pcVar2)();
    }
    *(undefined4 *)(*(long *)(param_1[1] + 0x10) + (long)iVar1 * 0x10 + -8) =
         *(undefined4 *)(param_1 + 5);
  }
  return param_1;
}



/* Entry: 1082b66c0; end: 1082b6793;  */

undefined8 FUN_1082b66c0(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(int *)(*(long *)(lVar5 + 0x10) + (long)*(int *)(lVar5 + 0x18) * 0x10 + -8) = (int)param_1[5];
  }
  *(undefined4 *)(param_1 + 5) = 0;
  plVar2 = (long *)(lVar5 + 0x10);
  FUN_1082b6794();
  iVar1 = param_2;
  if (param_2 <= (int)param_1[3]) {
    iVar1 = (int)param_1[3];
  }
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x28))
            (plVar3,param_1[2],iVar1,iVar1,plVar2,(long)plVar2 + 0xc,(long)param_1 + 0x2c);
  param_1[4] = (long)plVar3;
  if (((plVar3 == (long *)0x0) || (*plVar2 == 0)) || (*(int *)((long)param_1 + 0x2c) < param_2)) {
    FUN_10841076c(&UNK_10f483c92);
    FUN_1082b67b4(param_1[1] + 0x10);
    uVar4 = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    *(int *)(param_1 + 3) = (int)param_1[3] << 1;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1082b6794; end: 1082b67b3;  */

void FUN_1082b6794(undefined8 *param_1)

{
  func_0x0001082b67f8(param_1,1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1082b67b4; end: 1082b687f;  */

void FUN_1082b67b4(long *param_1)

{
  code *pcVar1;
  
  if ((int)param_1[1] != 0) {
    FUN_1082647e4(*param_1 + (long)(int)param_1[1] * 0x10 + -0x10);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b67f8);
  (*pcVar1)();
}



/* Entry: 1082b6880; end: 1082b68f3;  */

void FUN_1082b6880(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 4);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082b68f4; end: 1082b6947;  */

void FUN_1082b68f4(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1082b6918;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 0x10;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 1082b6948; end: 1082b698b;  */

void FUN_1082b6948(long param_1,long param_2)

{
  FUN_1082a96fc(param_2,*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_2 + 0x70),
                *(undefined4 *)(param_2 + 0x70),1,1);
  *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
  return;
}



/* Entry: 1082b698c; end: 1082b69eb;  */

undefined8 FUN_1082b698c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 < *(int *)(param_1 + 0x90); lVar1 = lVar1 + 1) {
    if (*(long *)(*(long *)(param_1 + 0x88) + lVar1 * 8) != 0) {
      (**(code **)(**(long **)(param_2 + 0x160) + 0x68))();
    }
  }
  return 1;
}



/* Entry: 1082b69ec; end: 1082b69ef;  */

undefined8 * FUN_1082b69ec(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 0x13);
  FUN_108294bf0(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b69f0; end: 1082b6a03;  */

void FUN_1082b69f0(void)

{
  FUN_1082b6a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b6a04; end: 1082b6a1b;  */

undefined8 FUN_1082b6a04(void)

{
  return 0;
}



/* Entry: 1082b6a1c; end: 1082b6a4b;  */

undefined8 * FUN_1082b6a1c(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 0x13);
  FUN_108294bf0(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b6a4c; end: 1082b6b0b;  */

void FUN_1082b6a4c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x230;
  __Znwm();
  *param_3 = 0;
  FUN_1082b6b0c();
  *param_1 = uVar1;
  FUN_1082b6f20();
  return;
}



/* Entry: 1082b6b0c; end: 1082b6bff;  */

undefined8 *
FUN_1082b6b0c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  FUN_1082a8654();
  *puVar1 = &PTR_FUN_110a37078;
  puVar2 = puVar1 + 0x11;
  *puVar2 = 0;
  *(undefined4 *)(puVar1 + 0x42) = 0;
  puVar1[0x43] = param_4;
  puVar1[0x44] = param_5;
  *(undefined4 *)(puVar1 + 0x45) = param_6;
  *(undefined4 *)((long)puVar1 + 0x22c) = param_7;
  *param_3 = 0;
  FUN_1082a8d24();
  FUN_1082b6f20();
  FUN_1082b6c00(puVar2,param_9);
  FUN_1082b6cc4(param_8,param_9,*puVar2);
  return param_1;
}



/* Entry: 1082b6c00; end: 1082b6cc3;  */

void FUN_1082b6c00(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  for (uVar2 = uVar4 + (long)(int)param_1[0x31] * 0x18; uVar4 < uVar2; uVar2 = uVar2 - 0x18) {
    func_0x0001078bddf8(uVar2 - 8);
  }
  if ((uint)param_1[0x31] == param_2) {
    puVar1 = (ulong *)*param_1;
  }
  else {
    if (0x10 < (int)(uint)param_1[0x31]) {
      _free(*param_1);
    }
    if ((int)param_2 < 0x11) {
      puVar1 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar1 = (ulong *)0x0;
      }
    }
    else {
      puVar1 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar1,0x18);
    }
    *param_1 = (ulong)puVar1;
    *(uint *)(param_1 + 0x31) = param_2;
  }
  puVar3 = puVar1 + (long)(int)param_2 * 3;
  for (; puVar1 < puVar3; puVar1 = puVar1 + 3) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}



/* Entry: 1082b6cc4; end: 1082b6ce3;  */

long FUN_1082b6cc4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x18;
  FUN_1082b6e2c(param_1,lVar1);
  return lVar1;
}



/* Entry: 1082b6ce4; end: 1082b6d3b;  */

void FUN_1082b6ce4(long param_1,long param_2)

{
  code *pcVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_1082a96fc(param_2,**(undefined8 **)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x70),
                  *(undefined4 *)(param_2 + 0x70),1,1);
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6d3c);
  (*pcVar1)();
}



/* Entry: 1082b6d3c; end: 1082b6d4f;  */

undefined8 FUN_1082b6d3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  param_3[1] = *(undefined8 *)(param_1 + 0x220);
  *param_3 = uVar1;
  return 1;
}



/* Entry: 1082b6d50; end: 1082b6dbb;  */

undefined8 FUN_1082b6d50(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x30) < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b6dbc);
    (*pcVar1)();
  }
  lVar2 = *(long *)(**(long **)(param_1 + 0x28) + 0x10);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x160);
    FUN_10829f560(uVar3,lVar2,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                  *(undefined4 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x228),
                  *(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x210),0);
    return uVar3;
  }
  return 0;
}



/* Entry: 1082b6dbc; end: 1082b6dbf;  */

undefined8 * FUN_1082b6dbc(undefined8 *param_1)

{
  FUN_1082b6e04(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b6dc0; end: 1082b6dd3;  */

void FUN_1082b6dc0(void)

{
  FUN_1082b6ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b6dd4; end: 1082b6ddb;  */

undefined8 FUN_1082b6dd4(void)

{
  return 0;
}



/* Entry: 1082b6ddc; end: 1082b6e03;  */

undefined8 * FUN_1082b6ddc(undefined8 *param_1)

{
  FUN_1082b6e04(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b6e04; end: 1082b6e2b;  */

undefined8 FUN_1082b6e04(undefined8 param_1)

{
  FUN_1082b6c00(param_1,0);
  return param_1;
}



/* Entry: 1082b6e2c; end: 1082b6e57;  */

void FUN_1082b6e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1082b6e58(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1082b6e58; end: 1082b6eb3;  */

undefined1  [16] FUN_1082b6e58(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_1082b6eb4(lVar1,param_2);
    lVar1 = lVar1 + 0x18;
    param_4 = param_4 + 0x18;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1082b6eb4; end: 1082b6f1f;  */

undefined8 * FUN_1082b6eb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x0001082b6edc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1082b6f20; end: 1082b6f2f;  */

void FUN_1082b6f20(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  puVar3 = &stack0x00000008;
  func_0x000108276964();
  if (puVar3 != (undefined1 *)0x0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return;
}



/* Entry: 1082b6f30; end: 1082b6fc3;  */

void FUN_1082b6f30(long *param_1,undefined8 param_2,long *param_3,int *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar3 = (uint)bVar1;
  if ((param_4 != (int *)0x0) && (bVar1 != 0)) {
    uVar2 = 7;
    if (*param_4 != 0) {
      uVar2 = 3;
    }
    uVar3 = uVar2 | 8;
    if (param_5 == 0) {
      uVar3 = uVar2;
    }
  }
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,uVar3 | (uint)*(byte *)((long)param_1 + 0x11) << 4,&UNK_10f483cd0,7);
                    /* WARNING: Could not recover jumptable at 0x0001082b6fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  return;
}



/* Entry: 1082b6fc4; end: 1082b703b;  */

uint FUN_1082b6fc4(long *param_1,undefined8 param_2,int *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_1082ca844(param_2,param_3,param_4,param_5);
    uVar2 = (uint)param_2;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4);
    uVar2 = (uint)param_1;
  }
  uVar1 = uVar2 | 2;
  if (*param_3 != 0) {
    uVar1 = uVar2;
  }
  if (((uVar1 & 1) != 0) && (*(char *)(*(long *)(param_4 + 0x10) + 0x5c) == '\0')) {
    uVar1 = uVar1 | 0x30;
  }
  return uVar1;
}



/* Entry: 1082b703c; end: 1082b706b;  */

/* WARNING: Removing unreachable block (ram,0x0001082ca2c4) */

void FUN_1082b703c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7,int param_8,long param_9)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_6 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082b7048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_6)();
    return;
  }
  if (param_8 != 2) {
    if (((param_8 != 0) || ((*param_7 >> 1 & 1) == 0)) ||
       ((*(byte *)(param_9 + 0x1c) >> 4 & 1) == 0)) {
      *param_1 = 0;
      return;
    }
    func_0x0001082cac58();
    param_7[2] = 0x33;
    param_7[3] = 1;
    *(undefined2 *)(param_7 + 4) = 0;
    *(undefined ***)param_7 = &PTR_DAT_110a38308;
    uVar2 = 0x3c004002;
    goto LAB_1082ca800;
  }
  bVar1 = *(byte *)(*(long *)(param_9 + 0x10) + 4);
  if ((*param_7 & 1) == 0) {
    if ((bVar1 & 1) != 0) {
LAB_1082ca774:
      func_0x0001082cac58();
      param_7[2] = 0x33;
      param_7[3] = 1;
      *(undefined2 *)(param_7 + 4) = 0x100;
      *(undefined ***)param_7 = &PTR_DAT_110a38308;
      uVar2 = 0x24d04032;
      goto LAB_1082ca800;
    }
  }
  else {
    if ((bVar1 & 1) != 0) goto LAB_1082ca774;
    if ((*(byte *)(*(long *)(param_9 + 0x10) + 0x5c) & 1) == 0) {
      if ((*param_7 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        uStack_38 = *(undefined8 *)(param_7 + 3);
        uVar4 = *(undefined8 *)(param_7 + 1);
        uStack_40 = uVar4;
        FUN_10827f6c8(&uStack_40);
        uStack_40 = CONCAT44(param_3,(int)uVar4);
        uStack_38 = CONCAT44(0x3f800000,param_4);
        puVar3 = (undefined8 *)0x28;
        FUN_1082a37b0();
        puVar3[1] = 0x100000032;
        *(undefined2 *)(puVar3 + 2) = 0x100;
        *puVar3 = &PTR_DAT_110a381a0;
        *(undefined8 *)((long)puVar3 + 0x1c) = uStack_38;
        *(undefined8 *)((long)puVar3 + 0x14) = uStack_40;
        *(undefined4 *)((long)puVar3 + 0x24) = param_5;
        uStack_48 = 0;
        FUN_1082a3670(&uStack_48);
      }
      *param_1 = puVar3;
      return;
    }
  }
  func_0x0001082cac58();
  param_7[2] = 0x38;
  param_7[3] = 1;
  *(undefined2 *)(param_7 + 4) = 0x101;
  *(undefined ***)param_7 = &PTR_DAT_110a38378;
  uVar2 = 3;
LAB_1082ca800:
  param_7[5] = uVar2;
  *param_1 = param_7;
  FUN_1082a3670(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1082b706c; end: 1082b71fb;  */

void FUN_1082b706c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  
  if ((*(byte *)(param_2[3] + 0x10) & 1) == 0) {
    if ((param_2[5] != 0) && ((*(byte *)(param_2[3] + 0x11) & 1) != 0)) {
      FUN_10828bae8(*param_2 + *(long *)(*(long *)*param_2 + -0x18),&UNK_10f483dc5);
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    goto LAB_1082b71c8;
  }
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  plVar4 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  if ((int)param_2[8] == -1) {
    if ((*(byte *)(param_2[2] + 100) & 1) == 0) goto LAB_1082b716c;
    puVar5 = &UNK_10f483d11;
    FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f483d20);
    bVar3 = true;
  }
  else {
    if (param_2[5] != 0) {
      FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f483cd8);
    }
LAB_1082b716c:
    bVar3 = false;
    puVar5 = (undefined *)param_2[6];
  }
  (**(code **)(*param_1 + 0x18))
            (param_1,plVar1,lVar2,param_2[4],param_2[5],plVar4,puVar5,param_2[7],param_2[3]);
  if (bVar3) {
    FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f483d2a);
  }
LAB_1082b71c8:
                    /* WARNING: Could not recover jumptable at 0x0001082b71f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,*param_2,param_2 + 9,param_2[6],param_2[7]);
  return;
}



/* Entry: 1082b71fc; end: 1082b72c3;  */

void FUN_1082b71fc(uint param_1,long *param_2,ushort *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  FUN_10828aa20();
  if ((uint)*param_3 != (param_1 & 0xffff)) {
    lVar1 = *(long *)(*param_2 + -0x18);
    func_0x0001082b73e0();
    FUN_10828bae8((long)param_2 + lVar1,&UNK_10f483d33);
    func_0x0001082b73f4();
    if (param_5 != 0) {
      lVar1 = *(long *)(*param_2 + -0x18);
      func_0x0001082b73e0();
      FUN_10828bae8((long)param_2 + lVar1,&UNK_10f483d33);
      func_0x0001082b73f4();
    }
  }
  return;
}



/* Entry: 1082b72c4; end: 1082b7377;  */

void FUN_1082b72c4(long *param_1,long param_2)

{
  long in_x5;
  
  if (param_2 != 0) {
    if (*(char *)(in_x5 + 0x11) == '\x01') {
      func_0x0001082b73fc(*(undefined8 *)(*param_1 + -0x18),param_1,&UNK_10f483d3f);
    }
    func_0x0001082b73fc(*(undefined8 *)(*param_1 + -0x18));
    if (*(char *)(in_x5 + 0x11) == '\x01') {
      func_0x0001082b73fc(*(undefined8 *)(*param_1 + -0x18));
    }
  }
  return;
}



/* Entry: 1082b7378; end: 1082b73cf;  */

void FUN_1082b7378(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f483de8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b73a4);
  (*pcVar1)();
}


