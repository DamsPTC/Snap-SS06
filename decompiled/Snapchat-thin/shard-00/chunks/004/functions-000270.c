/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005fde6c; end: 1005fde8b;  */

void FUN_1005fde6c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005fde74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}



/* Entry: 1005fde8c; end: 1005fdec3;  */

void FUN_1005fde8c(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x00010054e698();
  uVar1 = 0x1a0;
  func_0x000107c60e20();
  FUN_1005fded0();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1005fdec4; end: 1005fdecf;  */

void FUN_1005fdec4(void)

{
  return;
}



/* Entry: 1005fded0; end: 1005fe0fb;  */

undefined8 * FUN_1005fded0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  long lVar6;
  undefined4 uVar7;
  undefined4 extraout_w9;
  undefined4 extraout_w11;
  undefined8 uVar8;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  lVar6 = param_2[1];
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(uint *)((long)param_1 + 0xfc) = param_3;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1005fdec4();
  if (param_3 < 0x18) {
    uVar7 = *(undefined4 *)(&UNK_10df41514 + (ulong)param_3 * 4);
    uVar5 = *(undefined4 *)(&UNK_10df41574 + (ulong)param_3 * 4);
  }
  else {
    uVar7 = 0x1e9;
    uVar5 = 0x1e9;
  }
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  *(ulong *)((long)param_1 + 0xe4) = CONCAT44(uStack_40,uStack_44);
  *(undefined8 *)((long)param_1 + 0xdc) = uStack_4c;
  param_1[0x1e] = uStack_38;
  param_1[0x1d] = CONCAT44(uStack_3c,uStack_40);
  FUN_1005fdec4(uVar5);
  *(undefined4 *)(param_1 + 0x17) = extraout_w8;
  *(ulong *)((long)param_1 + 0xc4) = CONCAT44(uStack_40,uStack_44);
  *(undefined8 *)((long)param_1 + 0xbc) = uStack_4c;
  param_1[0x1a] = uStack_38;
  param_1[0x19] = CONCAT44(uStack_3c,uStack_40);
  if (param_3 != 2) {
    if (param_3 < 0x18) {
      uVar7 = *(undefined4 *)(&UNK_10df415d4 + (ulong)param_3 * 4);
      uVar5 = *(undefined4 *)(&UNK_10df416f4 + (ulong)param_3 * 4);
    }
    else {
      uVar7 = 0x1e9;
      uVar5 = 0x1e9;
    }
    *(undefined4 *)(param_1 + 0x1f) = uVar7;
    FUN_1005fdec4(uVar5);
    *(undefined4 *)(param_1 + 0xf) = extraout_w11;
    *(ulong *)((long)param_1 + 0x84) = CONCAT44(uStack_40,uStack_44);
    *(undefined8 *)((long)param_1 + 0x7c) = uStack_4c;
    param_1[0x12] = uStack_38;
    param_1[0x11] = CONCAT44(uStack_3c,uStack_40);
    FUN_1005fdec4();
    *(undefined4 *)(param_1 + 0xb) = extraout_w9;
    *(ulong *)((long)param_1 + 100) = CONCAT44(uStack_40,uStack_44);
    *(undefined8 *)((long)param_1 + 0x5c) = uStack_4c;
    param_1[0xe] = uStack_38;
    param_1[0xd] = CONCAT44(uStack_3c,uStack_40);
    FUN_1005fdec4();
    *(undefined4 *)(param_1 + 7) = extraout_w8_00;
    *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_40,uStack_44);
    *(undefined8 *)((long)param_1 + 0x3c) = uStack_4c;
    param_1[10] = uStack_38;
    param_1[9] = CONCAT44(uStack_3c,uStack_40);
    uVar4 = param_3;
    FUN_1005fe0fc();
    *(uint *)(param_1 + 2) = uVar4;
    FUN_1005fdec4();
    if (param_3 < 0x18) {
      uVar7 = *(undefined4 *)(&UNK_10df41754 + (ulong)param_3 * 4);
      uVar5 = *(undefined4 *)(&UNK_10df417b4 + (ulong)param_3 * 4);
    }
    else {
      uVar7 = 0x1e9;
      uVar5 = 0x1e9;
    }
    *(undefined4 *)(param_1 + 0x13) = uVar7;
    *(ulong *)((long)param_1 + 0xa4) = CONCAT44(uStack_40,uStack_44);
    *(undefined8 *)((long)param_1 + 0x9c) = uStack_4c;
    param_1[0x16] = uStack_38;
    param_1[0x15] = CONCAT44(uStack_3c,uStack_40);
    FUN_1005fdec4(uVar5);
    *(undefined4 *)(param_1 + 3) = extraout_w8_01;
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_40,uStack_44);
    *(undefined8 *)((long)param_1 + 0x1c) = uStack_4c;
    param_1[6] = uStack_38;
    param_1[5] = CONCAT44(uStack_3c,uStack_40);
    FUN_1004b4eb0(param_1 + 4);
  }
  return param_1;
}



/* Entry: 1005fe0fc; end: 1005fe147;  */

undefined4 FUN_1005fe0fc(uint param_1)

{
  if (param_1 < 0x18) {
    return *(undefined4 *)(&UNK_10df414b4 + (ulong)param_1 * 4);
  }
  return 0x1e9;
}



/* Entry: 1005fe148; end: 1005fe18b;  */

void FUN_1005fe148(long param_1)

{
  func_0x0001005fe13c();
  FUN_1004b4eb0(param_1 + 0xe0);
  FUN_1005fe18c();
  func_0x0001005fe198();
  func_0x0001005fe1a4();
  FUN_1005fe1e0();
  return;
}



/* Entry: 1005fe18c; end: 1005fe1b3;  */

void FUN_1005fe18c(void)

{
  undefined1 *puVar1;
  long unaff_x19;
  
  puVar1 = &stack0x00000008;
  FUN_10055056c();
  FUN_1005505d0(&UNK_110a60998);
  *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1005fe1b4; end: 1005fe1df;  */

void FUN_1005fe1b4(void)

{
  long extraout_x8;
  
  FUN_1005e3578();
  FUN_1005f4a10();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 8))();
  return;
}



/* Entry: 1005fe1e0; end: 1005fe253;  */

undefined1 * FUN_1005fe1e0(void)

{
  undefined **ppuStack0000000000000008;
  
  ppuStack0000000000000008 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(&stack0x00000010);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 1005fe254; end: 1005fe28f;  */

undefined8 * FUN_1005fe254(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  return puVar1;
}



/* Entry: 1005fe290; end: 1005fe2d3;  */

void FUN_1005fe290(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1005fe2d4; end: 1005fe37b;  */

undefined8 *
FUN_1005fe2d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_10002b838(auStack_48,&UNK_10f4ba25d);
  uStack_50 = *param_3;
  *param_3 = 0;
  FUN_1005fe37c(param_1,auStack_48,param_2,&uStack_50);
  FUN_1005fe494(&uStack_50);
  func_0x000107c60ca0(auStack_48);
  *param_1 = &PTR_DAT_110a6c288;
  param_1[0xd] = *param_4;
  *param_4 = 0;
  return param_1;
}



/* Entry: 1005fe37c; end: 1005fe47b;  */

undefined8 * FUN_1005fe37c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a6d608;
  func_0x000107c60c94(param_1 + 3);
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *param_4;
  *param_4 = 0;
  param_1[0xb] = lVar4;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = &PTR_PTR_11326a5e8;
  param_1[9] = 0;
  if (lVar4 == 0) {
    func_0x000107c2980c(&uStack_48);
    uVar5 = uStack_48;
    uStack_48 = 0;
    FUN_1005fe47c(param_1 + 0xb,uVar5);
    FUN_1005fe494(&uStack_48);
  }
  return param_1;
}



/* Entry: 1005fe47c; end: 1005fe493;  */

void FUN_1005fe47c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1006a5ca8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005fe494; end: 1005fe4b7;  */

undefined8 FUN_1005fe494(undefined8 param_1)

{
  FUN_1005fe47c(param_1,0);
  return param_1;
}



/* Entry: 1005fe4b8; end: 1005fe4e7;  */

undefined8 * FUN_1005fe4b8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x29;
  
  puVar4 = (undefined8 *)(unaff_x29 + -0x38);
  plVar6 = (long *)*puVar4;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar4);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar4;
}



/* Entry: 1005fe4e8; end: 1005fe54f;  */

undefined8 * FUN_1005fe4e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      FUN_100564108();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001005fe52c(&uStack_30);
  return param_1;
}



/* Entry: 1005fe550; end: 1005fe557;  */

void FUN_1005fe550(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  FUN_100562400();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005fe558; end: 1005fe57b;  */

void FUN_1005fe558(long param_1)

{
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005fe57c; end: 1005fe5b3;  */

void FUN_1005fe57c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000048;
  FUN_100563630();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005fe5b4; end: 1005fe867;  */

long * FUN_1005fe5b4(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  int extraout_w10;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *in_stack_00000000;
  long in_stack_00000020;
  byte in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined1 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  func_0x0001005fe598();
  FUN_100563d9c();
  uVar3 = *(char *)(param_1 + 0x40) == '\x01';
  in_stack_00000068 = extraout_x8;
  if ((bool)uVar3) {
    func_0x000107c33428();
    func_0x000107c28b28();
    func_0x000107c33428();
    in_stack_00000030 = in_stack_00000030 & 0xffffffffffffff00;
    in_stack_00000058 = 0;
    FUN_1006a2aac();
    FUN_1006a5b38(&stack0x00000030);
    plVar4 = (long *)*param_2;
    (**(code **)(*plVar4 + 0x30))(plVar4,0xb);
    plVar7 = (long *)0x0;
    goto LAB_1005fe6a4;
  }
  func_0x000107c60c94(&stack0x00000008,*param_2 + 0x18);
  FUN_1005fe880();
  plVar4 = *(long **)(param_1 + 0x18) + *(ulong *)(param_1 + 0x20) * 5;
  uVar3 = in_stack_00000000 == plVar4;
  plVar7 = (long *)(ulong)(byte)uVar3;
  if ((bool)uVar3) {
    in_stack_00000020 = 0;
    plVar9 = *(long **)(param_1 + 0x18);
    uVar2 = *(ulong *)(param_1 + 0x20);
    while (plVar1 = plVar9, uVar2 != 0) {
      uVar10 = uVar2 >> 1;
      plVar9 = plVar1 + uVar10 * 5;
      plVar5 = plVar9;
      func_0x000100125af4(plVar9,&stack0x00000008);
      plVar9 = plVar9 + 5;
      uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
      if (-1 < (char)plVar5) {
        plVar9 = plVar1;
        uVar2 = uVar10;
      }
    }
    uVar3 = plVar1 == plVar4;
    if ((bool)uVar3) {
      in_stack_00000028 = 1;
    }
    else {
      plVar4 = (long *)&stack0x00000008;
      func_0x000100125af4(plVar4,plVar1);
      in_stack_00000028 = (byte)((uint)plVar4 >> 7) & 1;
      if (((uint)plVar4 >> 7 & 1) == 0) {
        lVar6 = param_2[1];
        lVar8 = *param_2;
        if (param_2[1] != 0) {
          do {
            FUN_100564108();
          } while (extraout_w10 != 0);
        }
        in_stack_00000038 = plVar1[4];
        in_stack_00000030 = plVar1[3];
        plVar1[4] = lVar6;
        plVar1[3] = lVar8;
        func_0x000107c33398();
        goto LAB_1005fe6a0;
      }
    }
    lVar8 = *(long *)(param_1 + 0x20);
    uVar3 = *(long *)(param_1 + 0x28) == lVar8;
    if ((bool)uVar3) {
      plVar4 = &stack0x00000020;
      FUN_1005fe93c(plVar4,param_1 + 0x18,plVar1,param_2,&stack0x00000008);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x18);
      plVar4 = (long *)(lVar6 + lVar8 * 0x28);
      uVar3 = plVar4 == plVar1;
      if ((bool)uVar3) {
        FUN_1008720b8();
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      else {
        plVar4[1] = plVar4[-4];
        *plVar4 = plVar4[-5];
        plVar4[2] = plVar4[-3];
        plVar4[-5] = 0;
        plVar4[-4] = 0;
        plVar4[4] = plVar4[-1];
        plVar4[3] = plVar4[-2];
        plVar4[-3] = 0;
        plVar4[-2] = 0;
        plVar4[-1] = 0;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        lVar8 = lVar6 + lVar8 * 0x28 + -0x50;
        while( true ) {
          uVar3 = (long *)(lVar8 + 0x28) == plVar1;
          if ((bool)uVar3) break;
          FUN_100850044((long *)(lVar8 + 0x28),lVar8);
          lVar8 = lVar8 + -0x28;
        }
        FUN_1008720b8(&stack0x00000030);
        FUN_100850044(plVar1,&stack0x00000030);
        plVar4 = (long *)&stack0x00000030;
        FUN_1006aea04();
      }
    }
  }
  else {
    func_0x000107c33428();
    func_0x000107c28b28();
    func_0x000107c33428();
    in_stack_00000030 = in_stack_00000030 & 0xffffffffffffff00;
    in_stack_00000058 = 0;
    FUN_1006a2aac();
    FUN_1006a5b38(&stack0x00000030);
    plVar4 = (long *)*param_2;
    (**(code **)(*plVar4 + 0x30))(plVar4,6);
  }
LAB_1005fe6a0:
  FUN_1005feba8();
LAB_1005fe6a4:
  func_0x000100564028(in_stack_00000068);
  if (!(bool)uVar3) {
    func_0x000107c60e78();
    FUN_1005feba8();
    func_0x000107c33350();
    return plVar4;
  }
  return plVar7;
}



/* Entry: 1005fe868; end: 1005fe87f;  */

void FUN_1005fe868(void)

{
  return;
}



/* Entry: 1005fe880; end: 1005fe917;  */

void FUN_1005fe880(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_1005fe868();
  lVar4 = *param_2;
  uVar2 = param_2[1];
  while (lVar1 = lVar4, uVar2 != 0) {
    uVar5 = uVar2 >> 1;
    lVar4 = lVar1 + uVar5 * 0x28;
    lVar3 = lVar4;
    func_0x000100125af4(lVar4,param_3);
    lVar4 = lVar4 + 0x28;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    if (-1 < (char)lVar3) {
      lVar4 = lVar1;
      uVar2 = uVar5;
    }
  }
  *param_1 = lVar1;
  lVar4 = *param_2 + param_2[1] * 0x28;
  if ((lVar1 != lVar4) && (func_0x000100125af4(param_3,lVar1), ((uint)param_3 >> 7 & 1) != 0)) {
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 1005fe918; end: 1005fe93b;  */

void FUN_1005fe918(void)

{
  return;
}



/* Entry: 1005fe93c; end: 1005feac7;  */

long * FUN_1005fe93c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_90;
  long lStack_78;
  long lStack_70;
  
  plVar6 = &lStack_90;
  plVar7 = &lStack_90;
  puVar8 = param_3;
  if ((ulong)((param_2[1] + 1) - param_2[2]) <= 0x333333333333333 - param_2[2]) {
    func_0x0001005fe930();
    if (extraout_x10 >> 0x3d == 0) {
      uVar9 = (extraout_x10 << 3) / 5;
    }
    else {
      uVar9 = extraout_x10 << 3;
      if (4 < extraout_x10 >> 0x3d) {
        uVar9 = 0xffffffffffffffff;
      }
    }
    if (0x333333333333332 < uVar9) {
      uVar9 = 0x333333333333333;
    }
    uVar1 = extraout_x9;
    if (extraout_x9 <= uVar9) {
      uVar1 = uVar9;
    }
    if (extraout_x9 <= extraout_x8) {
      lVar10 = *unaff_x20;
      lVar4 = uVar1 * 0x28;
      func_0x000107c60e20();
      lVar2 = *unaff_x20;
      lVar3 = unaff_x20[1];
      lVar5 = lVar2;
      lStack_90 = lVar4;
      lStack_78 = lVar4;
      FUN_1005feac8(lVar2,param_3,lVar4);
      lStack_70 = lVar5;
      FUN_1005feb08();
      FUN_1005feac8(param_3,lVar2 + lVar3 * 0x28,lVar5 + 0x28);
      lStack_78 = 0;
      lStack_70 = 0;
      func_0x0001005feb40(&lStack_78);
      lStack_90 = 0;
      if (lVar2 != 0) {
        func_0x0001006aea2c();
        func_0x000107c60e14(*unaff_x20);
      }
      *unaff_x20 = lVar4;
      unaff_x20[1] = unaff_x20[1] + 1;
      unaff_x20[2] = uVar1;
      func_0x0001005feb80(&lStack_90);
      *unaff_x19 = (long)param_3 + (*unaff_x20 - lVar10);
      return plVar6;
    }
  }
  func_0x00010772e1f8(&UNK_10f424dbf);
  func_0x0001005feb80();
  func_0x000107c33350();
  for (; plVar7 != param_2; plVar7 = plVar7 + 5) {
    uVar12 = plVar7[1];
    uVar11 = *plVar7;
    puVar8[2] = plVar7[2];
    puVar8[1] = uVar12;
    *puVar8 = uVar11;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    uVar11 = plVar7[3];
    puVar8[4] = plVar7[4];
    puVar8[3] = uVar11;
    plVar7[3] = 0;
    plVar7[4] = 0;
    puVar8 = puVar8 + 5;
  }
  return puVar8;
}



/* Entry: 1005feac8; end: 1005feb07;  */

undefined8 * FUN_1005feac8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    uVar2 = param_1[1];
    uVar1 = *param_1;
    param_3[2] = param_1[2];
    param_3[1] = uVar2;
    *param_3 = uVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar1 = param_1[3];
    param_3[4] = param_1[4];
    param_3[3] = uVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* Entry: 1005feb08; end: 1005feba7;  */

void FUN_1005feb08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x000107c60c94();
  lVar1 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100564108();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1005feba8; end: 1005febb7;  */

void FUN_1005feba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1005febb8; end: 1005fec1f;  */

void FUN_1005febb8(long *param_1)

{
  long *plVar1;
  
  if ((int)param_1[0xc] != 2) {
    if ((int)param_1[0xc] == 1) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    param_1[9] = param_1[9] + 1;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x18))();
    if (((ulong)plVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005fec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1005fec20; end: 1005fec27;  */

undefined8 FUN_1005fec20(void)

{
  return 0;
}



/* Entry: 1005fec28; end: 1005fec63;  */

undefined8 * FUN_1005fec28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_90;
  
  lVar5 = param_2[1];
  *param_1 = *param_2;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  lVar5 = 0;
  func_0x00010527822c();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005fec28(&uStack_1a0,lVar5 + 8);
  lStack_190 = lVar5;
  FUN_1005fec28(&puStack_1c0,lVar5 + 8);
  puStack_178 = (undefined8 *)lStack_1b8;
  puStack_180 = puStack_1c0;
  lStack_1b0 = lVar5;
  if (lStack_1b8 != 0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10 != 0);
  }
  lStack_170 = lStack_1b0;
  func_0x0001005ff0d0(&ppuStack_c0);
  puStack_160 = ppuStack_c0[0x4b];
  puStack_168 = ppuStack_c0[0x4a];
  if (ppuStack_c0[0x4b] != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_00 != 0);
  }
  uStack_158 = *(undefined4 *)(*(long *)(lVar5 + 0x58) + 0xfc);
  func_0x000100564164(&ppuStack_c0);
  puStack_120 = &UNK_10876c748;
  ppuStack_118 = &PTR_FUN_110a6c428;
  plVar6 = (long *)0x30;
  func_0x000107c60e20();
  plVar6[1] = (long)puStack_178;
  *plVar6 = (long)puStack_180;
  if (puStack_178 != (undefined8 *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_01 != 0);
  }
  plVar6[3] = (long)puStack_168;
  plVar6[2] = lStack_170;
  plVar6[4] = (long)puStack_160;
  if (puStack_160 != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(plVar6 + 5) = uStack_158;
  uVar1 = *(undefined8 *)(lVar5 + 8);
  lVar2 = *(long *)(lVar5 + 0x10);
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  plStack_110 = plVar6;
  if (lVar2 == 0) {
    uStack_1d8 = *(undefined8 *)(lVar5 + 0x58);
  }
  else {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_03 != 0);
    uStack_1d8 = *(undefined8 *)(lVar5 + 0x58);
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_04 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  uStack_150 = uVar1;
  lStack_148 = lVar2;
  func_0x000107c60e20();
  plVar6 = puVar7 + 1;
  *plVar6 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110a6c2e8;
  ppuStack_c0 = (undefined **)FUN_10084faa8;
  ppuStack_b8 = &PTR_FUN_110a6c328;
  uStack_150 = 0;
  lStack_148 = 0;
  pcStack_f0 = FUN_10084fb6c;
  ppuStack_e8 = &PTR_FUN_110a6c340;
  if (lStack_198 == 0) {
    ppuVar8 = &PTR_FUN_110a6c428;
  }
  else {
    plVar9 = (long *)(lStack_198 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar8 = ppuStack_118;
    } while (cVar3 != '\0');
  }
  lStack_d0 = lStack_190;
  puVar7[3] = &PTR_DAT_110a6c3f0;
  puVar7[4] = FUN_10084fb6c;
  puVar7[5] = &PTR_FUN_110a6c340;
  puVar7[7] = lStack_198;
  puVar7[6] = uStack_1a0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar7[8] = lStack_190;
  puVar7[10] = &UNK_10876c748;
  (*(code *)ppuVar8[2])(puVar7 + 0xb,&ppuStack_118);
  puVar7[3] = &PTR_DAT_110a6c368;
  puVar7[0x10] = FUN_10084faa8;
  puVar7[0x11] = &PTR_FUN_110a6c328;
  puVar7[0x12] = uVar1;
  puVar7[0x13] = lVar2;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar7[0x16] = uStack_1d8;
  FUN_1005fe558(&uStack_e0);
  func_0x0001005fe52c(&uStack_b0);
  func_0x0001005fe52c(&uStack_150);
  uStack_140 = 0;
  uStack_138 = 0;
  puStack_1d0 = puVar7 + 3;
  puStack_1c8 = puVar7;
  FUN_1005ff144(&uStack_140);
  func_0x0001005fe52c(&uStack_130);
  (*(code *)*ppuStack_118)(&ppuStack_118);
  FUN_1005ff194(&puStack_180);
  ppuStack_c0 = &PTR_DAT_110a987f0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0001005ff0d0(&puStack_180);
  FUN_1005f6fa4(&pcStack_f0,puStack_180 + 3);
  uStack_b0 = uStack_b0 | 1;
  if (uStack_a8 == 0) {
    ppuVar8 = ppuStack_b8;
    if (((ulong)ppuStack_b8 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_b8 & 0xfffffffffffffffe);
    }
    func_0x0001005ff1bc();
    uStack_a8 = (ulong)ppuVar8;
  }
  FUN_1005ff214();
  FUN_1005f73a4(&pcStack_f0);
  func_0x000100564164(&puStack_180);
  func_0x0001005ff0d0(&pcStack_f0);
  plVar9 = *(long **)(pcStack_f0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = *plVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_180 = puVar7 + 3;
  puStack_178 = puVar7;
  (**(code **)(*plVar9 + 0x88))(plVar9,&ppuStack_c0,&puStack_180);
  FUN_10061dd10(&puStack_180);
  func_0x000100564164(&pcStack_f0);
  FUN_10061dd40(&ppuStack_c0);
  FUN_1005ff144(&puStack_1d0);
  FUN_1005fe558(&puStack_1c0);
  puVar7 = &uStack_1a0;
  FUN_1005fe558(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    func_0x000107c60e78();
    FUN_1005f73a4(&pcStack_f0);
    func_0x000100564164(&puStack_180);
    FUN_10061dd40(&ppuStack_c0);
    FUN_1005ff144(&puStack_1d0);
    FUN_1005fe558(&puStack_1c0);
    do {
      FUN_1005fe558(&uStack_1a0);
      func_0x000107c332e4();
    } while( true );
  }
  return puVar7;
}



/* Entry: 1005fec64; end: 1005ff0bf;  */

void FUN_1005fec64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005fec28(&uStack_180,param_1 + 8);
  lStack_170 = param_1;
  FUN_1005fec28(&puStack_1a0,param_1 + 8);
  puStack_158 = (undefined8 *)lStack_198;
  puStack_160 = puStack_1a0;
  lStack_190 = param_1;
  if (lStack_198 != 0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10 != 0);
  }
  lStack_150 = lStack_190;
  func_0x0001005ff0d0(&ppuStack_a0);
  puStack_140 = ppuStack_a0[0x4b];
  puStack_148 = ppuStack_a0[0x4a];
  if (ppuStack_a0[0x4b] != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_00 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000100564164(&ppuStack_a0);
  puStack_100 = &UNK_10876c748;
  ppuStack_f8 = &PTR_FUN_110a6c428;
  plVar5 = (long *)0x30;
  func_0x000107c60e20();
  plVar5[1] = (long)puStack_158;
  *plVar5 = (long)puStack_160;
  if (puStack_158 != (undefined8 *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_01 != 0);
  }
  plVar5[3] = (long)puStack_148;
  plVar5[2] = lStack_150;
  plVar5[4] = (long)puStack_140;
  if (puStack_140 != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(plVar5 + 5) = uStack_138;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar1;
  lStack_108 = lVar2;
  plStack_f0 = plVar5;
  if (lVar2 == 0) {
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_03 != 0);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_04 != 0);
  }
  puVar6 = (undefined8 *)0xb8;
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  func_0x000107c60e20();
  plVar5 = puVar6 + 1;
  *plVar5 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110a6c2e8;
  ppuStack_a0 = (undefined **)FUN_10084faa8;
  ppuStack_98 = &PTR_FUN_110a6c328;
  uStack_130 = 0;
  lStack_128 = 0;
  pcStack_d0 = FUN_10084fb6c;
  ppuStack_c8 = &PTR_FUN_110a6c340;
  if (lStack_178 == 0) {
    ppuVar7 = &PTR_FUN_110a6c428;
  }
  else {
    plVar8 = (long *)(lStack_178 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_f8;
    } while (cVar3 != '\0');
  }
  lStack_b0 = lStack_170;
  puVar6[3] = &PTR_DAT_110a6c3f0;
  puVar6[4] = FUN_10084fb6c;
  puVar6[5] = &PTR_FUN_110a6c340;
  puVar6[7] = lStack_178;
  puVar6[6] = uStack_180;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar6[8] = lStack_170;
  puVar6[10] = &UNK_10876c748;
  (*(code *)ppuVar7[2])(puVar6 + 0xb,&ppuStack_f8);
  puVar6[3] = &PTR_DAT_110a6c368;
  puVar6[0x10] = FUN_10084faa8;
  puVar6[0x11] = &PTR_FUN_110a6c328;
  puVar6[0x12] = uVar1;
  puVar6[0x13] = lVar2;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar6[0x16] = uStack_1b8;
  FUN_1005fe558(&uStack_c0);
  func_0x0001005fe52c(&uStack_90);
  func_0x0001005fe52c(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_1b0 = puVar6 + 3;
  puStack_1a8 = puVar6;
  FUN_1005ff144(&uStack_120);
  func_0x0001005fe52c(&uStack_110);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_1005ff194(&puStack_160);
  ppuStack_a0 = &PTR_DAT_110a987f0;
  ppuStack_98 = (undefined **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x0001005ff0d0(&puStack_160);
  FUN_1005f6fa4(&pcStack_d0,puStack_160 + 3);
  uStack_90 = uStack_90 | 1;
  if (uStack_88 == 0) {
    ppuVar7 = ppuStack_98;
    if (((ulong)ppuStack_98 & 1) != 0) {
      ppuVar7 = *(undefined ***)((ulong)ppuStack_98 & 0xfffffffffffffffe);
    }
    func_0x0001005ff1bc();
    uStack_88 = (ulong)ppuVar7;
  }
  FUN_1005ff214();
  FUN_1005f73a4(&pcStack_d0);
  func_0x000100564164(&puStack_160);
  func_0x0001005ff0d0(&pcStack_d0);
  plVar8 = *(long **)(pcStack_d0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = *plVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_160 = puVar6 + 3;
  puStack_158 = puVar6;
  (**(code **)(*plVar8 + 0x88))(plVar8,&ppuStack_a0,&puStack_160);
  FUN_10061dd10(&puStack_160);
  func_0x000100564164(&pcStack_d0);
  FUN_10061dd40(&ppuStack_a0);
  FUN_1005ff144(&puStack_1b0);
  FUN_1005fe558(&puStack_1a0);
  FUN_1005fe558(&uStack_180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    FUN_1005f73a4(&pcStack_d0);
    func_0x000100564164(&puStack_160);
    FUN_10061dd40(&ppuStack_a0);
    FUN_1005ff144(&puStack_1b0);
    FUN_1005fe558(&puStack_1a0);
    do {
      FUN_1005fe558(&uStack_180);
      func_0x000107c332e4();
    } while( true );
  }
  return;
}



/* Entry: 1005ff0c0; end: 1005ff0d7;  */

void FUN_1005ff0c0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005ff0d8; end: 1005ff123;  */

void FUN_1005ff0d8(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_2 + 0x30);
  (**(code **)(*plVar3 + 0x108))();
  lVar4 = plVar3[1];
  lVar5 = *plVar3;
  param_1[1] = plVar3[1];
  *param_1 = lVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 1005ff124; end: 1005ff143;  */

void FUN_1005ff124(void)

{
  return;
}



/* Entry: 1005ff144; end: 1005ff16b;  */

long FUN_1005ff144(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005ff16c; end: 1005ff173;  */

void FUN_1005ff16c(void)

{
  return;
}



/* Entry: 1005ff174; end: 1005ff193;  */

void FUN_1005ff174(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005ff194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005ff194; end: 1005ff1ff;  */

undefined8 FUN_1005ff194(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_100563770(param_1 + 0x18);
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1005ff200; end: 1005ff213;  */

void FUN_1005ff200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 1005ff214; end: 1005ff297;  */

long FUN_1005ff214(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    uVar5 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_2 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
    }
    else {
      func_0x000107c2a2ec(param_1);
    }
  }
  return param_1;
}



/* Entry: 1005ff298; end: 1005ff2ab;  */

void FUN_1005ff298(void)

{
  return;
}



/* Entry: 1005ff2ac; end: 1005ff343;  */

void FUN_1005ff2ac(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  FUN_1005ff298();
  FUN_1005ff344();
  func_0x0001005ff368();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a7b878;
  func_0x0001005ff370();
  if (unaff_x22 != 0) {
    do {
      func_0x0001005ff384();
    } while (extraout_w11 != 0);
  }
  func_0x0001005ff394();
  if (extraout_x9 != 0) {
    do {
      func_0x0001005ff384();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x0001005ff3b0();
  FUN_1005ff3d8();
  FUN_10061dcd0(&stack0x00000018);
  FUN_10061dcf4();
  return;
}



/* Entry: 1005ff344; end: 1005ff3d7;  */

void FUN_1005ff344(void)

{
  return;
}



/* Entry: 1005ff3d8; end: 1005ff4e3;  */

void FUN_1005ff3d8(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x0001005ff3c4();
  FUN_1005ff4e4();
  func_0x0001005ff4fc();
  if (param_1 == 0) {
    func_0x000107c34aa8();
    func_0x000107c34a84();
    func_0x000107c34aa4();
    func_0x000107c34aa0();
    func_0x000107c34b10();
    func_0x000107c34a88();
    func_0x000107c34af4();
    func_0x000107c34af0();
    func_0x000107c34af8();
  }
  else {
    func_0x000100601cc4();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000100601cd4();
    func_0x000100601cdc();
    func_0x000100601ce8(&PTR_DAT_110a99d10);
    if (lVar1 != 0) {
      do {
        func_0x000100601cf4();
      } while (extraout_w10 != 0);
      do {
        func_0x000100601cf4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100601d04();
    FUN_100601d40(&PTR_DAT_110a99d60);
    func_0x000100601d58();
    FUN_10061dc6c();
    func_0x00010061dc74();
    FUN_10061dc88(&stack0x00000158);
    FUN_10061dcac();
  }
  func_0x00010061dcb4();
  return;
}



/* Entry: 1005ff4e4; end: 1005ff517;  */

void FUN_1005ff4e4(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  return;
}



/* Entry: 1005ff518; end: 1005ff707;  */

long * FUN_1005ff518(undefined8 param_1,long *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int aiStack_140 [16];
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined8 uStack_58;
  
  plVar3 = param_2;
  func_0x0001005ff508();
  *param_4 = 1;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar3 + 0x28))();
  uVar2 = (uint)plVar3 == 0x17;
  if ((uint)plVar3 < 0x18) {
    (**(code **)(*plRam0000000113815c70 + 0x148))(&lStack_c0);
    puVar1 = auStack_b8 + 1;
    if (lStack_c0 != 0) {
      puVar1 = puStack_b0;
    }
    FUN_1006017a8(param_2,puVar1);
    plVar3 = (long *)(auStack_b8 + 1 + ((ulong)auStack_b8 & 0xff));
    if (lStack_c0 != 0) {
      plVar3 = (long *)(puStack_b0 + (long)auStack_b8);
    }
    uVar2 = plVar3 == param_2;
    if (!(bool)uVar2) {
      func_0x000107c35010(plRam0000000113815c70);
      (*extraout_x8_00)();
    }
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0xf0))(plRam0000000113815c70,&lStack_c0,1);
    auStack_d8[0] = *param_3;
    *param_3 = plVar3;
    (**(code **)(*plRam0000000113815c70 + 0x1b0))();
    func_0x000100601a44();
    FUN_100601aa4(auStack_d8);
    plVar3 = &lStack_c0;
    FUN_100601aec(plVar3);
  }
  else {
    FUN_1006af6cc(&lStack_c0,param_3,0x100000,plVar3);
    FUN_1006af788(param_2,&lStack_c0);
    if ((int)param_2 == 0) {
      FUN_10002d4d8(auStack_d8,"Failed to serialize message");
      func_0x000107c3501c(param_1);
      func_0x000107c60ca0(auStack_d8);
    }
    else {
      FUN_1006b0de0();
      (**(code **)(extraout_x8_01 + 0x1b0))();
      func_0x000100601a44();
    }
    plVar3 = &lStack_c0;
    FUN_1006b0df4(plVar3);
  }
  func_0x000100601c78(uStack_58);
  if ((bool)uVar2) {
    return plVar3;
  }
  func_0x000107c60e78();
  func_0x000107c35014();
  func_0x000107c60ca0();
  FUN_1006b0df4(&lStack_c0);
  func_0x000107c3500c();
  pcStack_e8 = FUN_1005ff708;
  puStack_100 = param_3;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_1005ff518(aiStack_140);
  FUN_100601c8c(aiStack_140);
  return (long *)(ulong)(aiStack_140[0] == 0);
}



/* Entry: 1005ff708; end: 1005ff747;  */

bool FUN_1005ff708(undefined8 param_1,undefined8 param_2)

{
  int aiStack_60 [15];
  undefined1 uStack_21;
  
  FUN_1005ff518(aiStack_60,param_1,param_2,&uStack_21);
  FUN_100601c8c(aiStack_60);
  return aiStack_60[0] == 0;
}



/* Entry: 1005ff748; end: 1005ff80f;  */

void FUN_1005ff748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0) {
    FUN_10054c714(param_1);
    lVar2 = *(long *)(param_1 + 0x80);
  }
  func_0x000107c61360(lVar2,param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar2 != 5) {
    if ((int)lVar2 == 1) {
      lVar2 = *(long *)(param_1 + 0x80);
      if (lVar2 == 0) {
        FUN_10054c714(param_1);
        lVar2 = *(long *)(param_1 + 0x80);
      }
      func_0x000107c61358(lVar2,param_2);
      func_0x000107c4d960(puVar1);
      func_0x000107c61180();
    }
    else {
      lVar2 = *(long *)(param_1 + 0x80);
      if (lVar2 == 0) {
        FUN_10054c714(param_1);
        lVar2 = *(long *)(param_1 + 0x80);
      }
      func_0x000107c61354(lVar2,param_2);
      func_0x000107c4d954(puVar1);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005ff810; end: 1005ff91f;  */

undefined1 *
FUN_1005ff810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126eb068;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x000107c40794();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      func_0x000107c61170(uVar3);
      uVar2 = param_3;
      func_0x000107c40794();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      func_0x000107c61170(uVar3);
      uVar2 = param_4;
      func_0x000107c40794();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      func_0x000107c61170(uVar3);
      uVar2 = param_5;
      func_0x000107c40794();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      func_0x000107c61170(uVar3);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 1005ff920; end: 1005ff927;  */

void FUN_1005ff920(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10054a7b8(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != *(long *)(unaff_x19 + 0x48)) {
    if (*(char *)(lVar1 + 0x17) < '\0') {
      if (*(long *)(lVar1 + 8) == 0) goto LAB_10054a7a4;
    }
    else if (*(char *)(lVar1 + 0x17) == '\0') goto LAB_10054a7a4;
    FUN_10054cd94();
  }
LAB_10054a7a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 1005ff928; end: 1005ffa8f; -[SCSqliteConnection commitTransaction] */

/* WARNING: Possible PIC construction at 0x0001005ffa4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005ffa50) */

void FUN_1005ff928(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_68 = &UNK_105277f7c;
  ppuStack_60 = &PTR_DAT_110873830;
  iVar3 = 0xf29b0dd;
  uVar4 = 0x13;
  FUN_1004c3d34(*(undefined8 *)(param_1 + 0x20),"COMMIT TRANSACTION;",0x13,1,&puStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_10054ccf8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if ((iVar3 == 0) || (iVar3 != 1)) {
      func_0x000107c60bd8();
      func_0x000107c61174(uVar4);
      puVar2 = *(undefined **)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x30) = uVar4;
    }
    else {
      func_0x000107c60e38();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c42a58(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c61180();
      func_0x000107c54654(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1005ffa90; end: 1005ffabf; -[SCSqliteConnection setError:] */

void FUN_1005ffa90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005ffac0; end: 1005ffb73;  */

/* WARNING: Possible PIC construction at 0x0001005ffb38: Changing call to branch */

void FUN_1005ffac0(long param_1,long param_2,ulong param_3)

{
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x18) != '\x01')) {
      func_0x000107c61174(param_2);
      if (param_2 != 0) {
        func_0x000107c611ec(param_1 + 0x50);
        func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x38));
        func_0x000107c3d798(*(undefined8 *)(param_1 + 0x30));
        func_0x000107c611f0(param_1 + 0x50);
      }
    }
    else {
      func_0x000107c611f0(param_1 + 0x4c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005ffb74; end: 1005ffbb7; +[SCResult successWithObject:] */

void FUN_1005ffb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005ffbb8; end: 1005ffc3b; -[SCResult matchSuccess:failure:] */

/* WARNING: Possible PIC construction at 0x0001005ffc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005ffc28) */

void FUN_1005ffbb8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1005ffc20;
    lVar1 = 0x18;
    param_3 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1005ffc20;
    lVar1 = 0x10;
  }
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + lVar1));
LAB_1005ffc20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005ffc3c; end: 1005ffc73;  */

void FUN_1005ffc3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005ffc74; end: 1005ffff7; -[SCFideliusEncryptedDatabaseV2 _toDecryptedUserIdentity:] */

void FUN_1005ffc74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30d85a;
  FUN_1000ba800(&UNK_10f30d85a);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 8);
  }
  func_0x000107c61174(uVar3);
  lVar2 = param_1;
  func_0x000107c3b468();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 8);
    }
    func_0x000107c61174(uVar3);
    func_0x000107c51804(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c3be18(param_1);
  }
  else {
    if (param_3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x10);
    }
    func_0x000107c61174(lVar4);
    func_0x000107c61170(lVar4);
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(param_1 + 0x10);
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_3 + 0x10);
      }
      func_0x000107c61174(uVar3);
      FUN_10060011c(puVar5,uVar3,0);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (puVar5 != (undefined *)0x0) {
        if (param_3 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(param_3 + 0x18);
        }
        func_0x000107c61174(lVar4);
        func_0x000107c61170(lVar4);
        if (lVar4 == 0) {
LAB_1005ffecc:
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (param_3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(param_3 + 0x18);
          }
          func_0x000107c61174(uVar3);
          func_0x000107c51804(puVar6);
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          func_0x000107c3be18(param_1);
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar6 = *(undefined **)(param_1 + 0x10);
          if (param_3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(param_3 + 0x18);
          }
          func_0x000107c61174(uVar3);
          FUN_10060011c(puVar6,uVar3,0);
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (puVar6 == (undefined *)0x0) goto LAB_1005ffecc;
          puVar7 = PTR_PTR_1126c03c8;
          func_0x000107c610f4(PTR_PTR_1126c03c8);
          uVar3 = *(undefined8 *)(param_1 + 0x10);
          func_0x000107c3e684(uVar3);
          func_0x000107c61180();
          if (param_3 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(param_3 + 0x20);
          }
          func_0x000107c61174(uVar8);
          func_0x000107c49820(uVar8);
          func_0x000107c46c94(puVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar3);
        }
        func_0x000107c61170(puVar6);
        goto LAB_1005fff34;
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 0x10);
    }
    func_0x000107c61174(uVar3);
    func_0x000107c51804(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c3be18(param_1);
  }
  puVar7 = (undefined *)0x0;
LAB_1005fff34:
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1005ffff8; end: 10060011b; -[SCFideliusEncryptedDatabaseV2 _deterministicDecryptString:] */

void FUN_1005ffff8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30d9fd;
  FUN_1000ba800(&UNK_10f30d9fd);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    func_0x000107c45920();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      FUN_10060011c(lVar3,puVar2,0);
      func_0x000107c61180();
      if (lVar3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c610f4();
        func_0x000107c46368();
        if (puVar4 != (undefined *)0x0) {
          func_0x000107c61174(puVar4);
        }
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(puVar2);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10060011c; end: 10060030b;  */

void FUN_10060011c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  FUN_100588f2c();
  lVar2 = param_2;
  func_0x000107c5c27c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x000107c4adac(param_2);
    lVar3 = param_2;
    func_0x000107c5c27c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4adac();
    FUN_1005892b8();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar5 = lVar3;
      FUN_1005893fc(lVar3,lVar4);
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar6 = lVar1;
        FUN_100589080(lVar1,lVar5,param_3);
        func_0x000107c61180();
        if ((lVar6 == 0) || (lVar8 = lVar6, func_0x000107c49cf4(), (int)lVar8 == 0)) {
          lVar8 = 0;
        }
        else {
          func_0x000107c61174(lVar5);
          lVar8 = lVar5;
        }
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10060030c; end: 100600337;  */

void FUN_10060030c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10db0e2fc;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100600338; end: 100600443; -[SCFideliusUserIdentity initWithHashedBeta:outBeta:inBeta:iwek:version:] */

undefined1 *
FUN_100600338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126eafd0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c55064(puVar1);
    func_0x000107c57100(puVar1);
    func_0x000107c55334(puVar1);
    func_0x000107c5593c(puVar1);
    func_0x000107c5a4e0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c40948();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100600444; end: 10060045f;  */

void FUN_100600444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_release_110346be8)(param_1);
  return;
}



/* Entry: 100600460; end: 1006004d7;  */

undefined1 FUN_100600460(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam000000011336c890 & 1) == 0) {
    FUN_1006004d8(0x11336c890);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      FUN_1005ec950();
      uRam000000011336c888 = uVar1;
      func_0x000107c60e4c(0x11336c890);
    }
  }
  return uRam000000011336c888;
}



/* Entry: 1006004d8; end: 1006004e3;  */

void FUN_1006004d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_acquire_110346be0)(param_1);
  return;
}



/* Entry: 1006004e4; end: 10060050f; +[SCGrapheneFideliusMetric dbv2OpsLatency] */

void FUN_1006004e4(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100600510; end: 10060053f; -[SCResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100600528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060052c) */

void FUN_100600510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100600540; end: 100600587; -[SQLFideliusUserIdentity .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100600558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100600570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060055c) */
/* WARNING: Removing unreachable block (ram,0x000100600574) */

void FUN_100600540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100600588; end: 100600667; -[SCFideliusUserDatabaseManager logDBLoadResult:isFileExist:isIdentityMissing:message:eventName:] */

void FUN_100600588(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10060aec4;
  puStack_78 = &UNK_1108c1158;
  uStack_70 = param_7;
  lStack_68 = param_1;
  uStack_60 = param_6;
  uStack_58 = param_3;
  uStack_57 = param_4;
  uStack_56 = param_5;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c4e524(uVar1,param_2,&puStack_90);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  return;
}



/* Entry: 100600668; end: 1006006bb; -[SCFideliusUserIdentity .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100600680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100600698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100600684) */
/* WARNING: Removing unreachable block (ram,0x00010060069c) */

void FUN_100600668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1006006bc; end: 100600727; -[SCEllipticCurveCrypto dealloc] */

void FUN_1006006bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  FUN_100414b38(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d2d0(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000107c4adac();
  if (lVar2 != 0) {
    func_0x000107c60ee4(uVar1,lVar2);
  }
  puStack_28 = PTR_PTR_1126eb090;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100600728; end: 100600763; -[SCEllipticCurveCrypto .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100600740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100600744) */

void FUN_100600728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 100600764; end: 1006007f3; -[SCFideliusUserDatabaseManager logDBSize:] */

void FUN_100600764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10060c818;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006007f4; end: 10060093f;  */

void FUN_1006007f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x000107c61174(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c4e524(uVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100600940; end: 1006009a3;  */

void FUN_100600940(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  return;
}



/* Entry: 1006009a4; end: 1006009af;  */

void FUN_1006009a4(void)

{
  return;
}



/* Entry: 1006009b0; end: 100600a4f;  */

undefined8 FUN_1006009b0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011383d708 & 1) == 0) {
    iVar1 = 0x1383d708;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100600a50(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam000000011383d700 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x11383d708);
    }
  }
  return 0x11383d700;
}



/* Entry: 100600a50; end: 100600c3b;  */

undefined8 * FUN_100600a50(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [144];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_f8,&UNK_10f770b87);
  FUN_10002b838(&uStack_110,"");
  FUN_10002b838(auStack_e0,&UNK_10f770ba6);
  FUN_100600c3c();
  FUN_100600c3c();
  FUN_100600c3c();
  FUN_100600c3c();
  FUN_100600c3c();
  FUN_100600c3c(auStack_e0);
  puVar1 = auStack_e0;
  FUN_1000e3098(&uStack_130,puVar1,7);
  param_1[1] = uStack_f0;
  *param_1 = uStack_f8;
  param_1[2] = uStack_e8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  param_1[4] = uStack_108;
  param_1[3] = uStack_110;
  param_1[5] = uStack_100;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  param_1[7] = uStack_128;
  param_1[6] = uStack_130;
  param_1[8] = uStack_120;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  FUN_1000e30f4(&uStack_130);
  lVar4 = 0x90;
  do {
    func_0x000107c60ca0(auStack_e0 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000107c60ca0(&uStack_110);
  puVar2 = &uStack_f8;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = auStack_50;
  lVar4 = -0xa8;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_110);
  func_0x000107c60ca0(&uStack_f8);
  func_0x000107c60bd8(puVar2);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar2,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 100600c3c; end: 100600c43;  */

void FUN_100600c3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100600c44; end: 100600ca7;  */

void FUN_100600c44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x128;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110cee0a0;
  FUN_100600da0(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 100600ca8; end: 100600cc7;  */

void FUN_100600ca8(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 100600cc8; end: 100600d03;  */

void FUN_100600cc8(void)

{
  FUN_100600ca8();
  FUN_100600ee0();
  FUN_100600f84();
  return;
}



/* Entry: 100600d04; end: 100600d9f;  */

long FUN_100600d04(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  FUN_100600cc8();
  FUN_10028b028(lVar1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_100600fec(param_1 + 0x58,param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x8d);
  *(undefined8 *)(param_1 + 0x95) = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x8d) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  FUN_10060114c(param_1 + 0xa0,param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar2;
  return param_1;
}



/* Entry: 100600da0; end: 100600edf;  */

undefined8 * FUN_100600da0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  float fStack_44;
  long lStack_40;
  float fStack_34;
  
  *param_1 = &PTR_DAT_110ced5a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100600d04(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1f) = param_3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(char *)((long)param_1 + 0xa4) == '\x01') {
    fStack_34 = *(float *)(param_1 + 0x14);
  }
  else {
    fStack_34 = 0.4;
  }
  FUN_1006011fc(&lStack_40,&fStack_34);
  lVar1 = lStack_40;
  lStack_40 = 0;
  lVar2 = param_1[0x20];
  param_1[0x20] = lVar1;
  if (lVar2 != 0) {
    func_0x000107c395d8();
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x000107c395d8();
    }
  }
  if (*(char *)((long)param_1 + 0xf4) == '\x01') {
    fStack_44 = *(float *)((long)param_1 + 0xec);
    if (fStack_44 <= 0.0) {
      fStack_44 = fStack_34;
    }
    FUN_1006011fc(&lStack_40,&fStack_44);
    lVar1 = lStack_40;
    lStack_40 = 0;
    lVar2 = param_1[0x21];
    param_1[0x21] = lVar1;
    if (lVar2 != 0) {
      func_0x000107c395d8();
      lVar1 = lStack_40;
      lStack_40 = 0;
      if (lVar1 != 0) {
        func_0x000107c395d8();
      }
    }
  }
  return param_1;
}



/* Entry: 100600ee0; end: 100600f77;  */

void FUN_100600ee0(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar7 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (plVar9 < param_2) {
LAB_100600f28:
    func_0x0001006315c0();
    if (plVar3 == (long *)0x0) {
      FUN_1006316b4(plVar7);
      plVar7[1] = 0;
    }
    else {
      plVar9 = plVar7 + 1;
      FUN_1006315cc(plVar9);
      FUN_1006316b4(plVar7,plVar9);
      plVar7[1] = (long)plVar3;
      lVar4 = *plVar7;
      for (plVar9 = (long *)0x0; plVar3 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
        *(undefined8 *)(lVar4 + (long)plVar9 * 8) = 0;
      }
      if (plVar7[2] != 0) {
        func_0x000107c359a8();
        func_0x000107c359a4();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9;
        uVar6 = extraout_x10;
        plVar9 = extraout_x11;
        while (plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar7[1];
          if (((ulong)plVar3 & uVar6) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar6);
          }
          else if (plVar3 <= plVar8) {
            uVar1 = 0;
            if (plVar3 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)plVar3;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
          }
          if (plVar8 != plVar9) {
            if (*(long *)(lVar4 + (long)plVar8 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar8 * 8) = plVar5;
              plVar9 = plVar8;
            }
            else {
              func_0x000107c35980();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x000107c3598c();
    if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
      func_0x000107c35984();
    }
    else {
      func_0x000107c60c44();
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (param_2 < plVar9) goto LAB_100600f28;
  }
  return;
}



/* Entry: 100600f78; end: 100600f83;  */

void FUN_100600f78(void)

{
  return;
}



/* Entry: 100600f84; end: 100600fc3;  */

void FUN_100600f84(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x000100650164(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 100600fc4; end: 100600feb;  */

void FUN_100600fc4(void)

{
  return;
}



/* Entry: 100600fec; end: 100601027;  */

void FUN_100600fec(void)

{
  func_0x000100600fcc();
  FUN_1001338e4();
  FUN_100601038();
  return;
}



/* Entry: 100601028; end: 100601037;  */

void FUN_100601028(void)

{
  return;
}



/* Entry: 100601038; end: 10060106f;  */

void FUN_100601038(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  FUN_100601028();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x0001004c3c54();
  }
  return;
}



/* Entry: 100601070; end: 100601083;  */

void FUN_100601070(void)

{
  return;
}



/* Entry: 100601084; end: 10060114b;  */

void FUN_100601084(long *param_1,ulong param_2)

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
      if (param_2 < uVar7) goto LAB_1006010cc;
    }
    return;
  }
LAB_1006010cc:
  if (param_2 == 0) {
    func_0x00010b49bb2c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    func_0x00010b49bb44(plVar2);
    func_0x00010b49bb2c(param_1,plVar2);
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



/* Entry: 10060114c; end: 1006011a7;  */

undefined8 * FUN_10060114c(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_100601084(param_1,*(undefined8 *)(param_2 + 8));
  FUN_1006011b4(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 1006011a8; end: 1006011b3;  */

void FUN_1006011a8(void)

{
  return;
}



/* Entry: 1006011b4; end: 1006011f3;  */

void FUN_1006011b4(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x000107c2fffc(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1006011f4; end: 1006011fb;  */

void FUN_1006011f4(void)

{
  return;
}



/* Entry: 1006011fc; end: 10060124b;  */

void FUN_1006011fc(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  func_0x000107c60e20();
  FUN_10060129c((double)*param_2,0);
  *param_1 = uVar1;
  return;
}



/* Entry: 10060124c; end: 10060129b;  */

undefined1  [16] FUN_10060124c(double param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 <= 0.0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (param_1 < 1.0) {
    dVar1 = 1.8446744073709552e+19;
    if ((double)(long)(1.0 / param_1) <= 1.8446744073709552e+19) {
      dVar1 = (double)(long)(1.0 / param_1);
    }
    auVar2._8_8_ = (long)dVar1;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  auVar3._8_8_ = 1;
  auVar3._0_8_ = 0x3ff0000000000000;
  return auVar3;
}



/* Entry: 10060129c; end: 1006012e3;  */

undefined8 * FUN_10060129c(undefined8 param_1,double param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_3 = &PTR_DAT_110ceff68;
  param_3[1] = param_2;
  *(uint *)(param_3 + 2) = (uint)(0.0 < param_2);
  param_3[3] = 0;
  param_3[4] = 0;
  puVar1 = param_3;
  FUN_10060124c();
  param_3[3] = puVar1;
  param_3[4] = param_4;
  return param_3;
}


