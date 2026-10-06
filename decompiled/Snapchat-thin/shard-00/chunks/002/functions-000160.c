/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003b7344; end: 1003b7363;  */

void FUN_1003b7344(void)

{
  func_0x0001003b7214();
  FUN_1003b7364();
  FUN_1003b725c();
  return;
}



/* Entry: 1003b7364; end: 1003b7393;  */

void FUN_1003b7364(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  long *extraout_x8;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
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



/* Entry: 1003b7394; end: 1003b73ef;  */

void FUN_1003b7394(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b73f0; end: 1003b7453;  */

void FUN_1003b73f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1003b7080();
  uStack_28 = extraout_x8;
  FUN_1003b7208();
  FUN_1003b7474();
  FUN_1003b7554(uStack_30,param_2);
  func_0x0001003b7270();
  func_0x0001003b7c64();
  func_0x0001003b7298(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c351f4();
  func_0x0001003b7c64();
  func_0x000107c351e8();
  pcStack_48 = FUN_1003b7454;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003b73f0(&uStack_51,uStack_30);
  return;
}



/* Entry: 1003b7454; end: 1003b7473;  */

void FUN_1003b7454(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1003b73f0(&uStack_11,param_1);
  return;
}



/* Entry: 1003b7474; end: 1003b7493;  */

void FUN_1003b7474(void)

{
  func_0x0001003b7214();
  FUN_1003b7494();
  FUN_1003b725c();
  return;
}



/* Entry: 1003b7494; end: 1003b74bb;  */

void FUN_1003b7494(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  long *extraout_x8;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
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



/* Entry: 1003b74bc; end: 1003b74cb;  */

void FUN_1003b74bc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b74cc; end: 1003b7553;  */

undefined8 * FUN_1003b74cc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1003b74bc();
    } while (extraout_w10 != 0);
  }
  FUN_1003b7608(param_1 + 4,param_2);
  func_0x0001003b7c24(param_1 + 6);
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 1003b7554; end: 1003b758b;  */

undefined8 * FUN_1003b7554(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cca028;
  FUN_1003b74cc(param_1 + 3);
  return param_1;
}



/* Entry: 1003b758c; end: 1003b759b;  */

void FUN_1003b758c(void)

{
  return;
}



/* Entry: 1003b759c; end: 1003b7607;  */

void FUN_1003b759c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1003b758c();
  uStack_28 = extraout_x8;
  FUN_1003b7654(auStack_40,1);
  FUN_1003b7854(uStack_30,param_2);
  func_0x0001003b7bd4();
  func_0x0001003b7bec();
  func_0x0001003b7bfc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c351cc();
  func_0x0001003b7bec();
  func_0x000107c351b4();
  pcStack_48 = FUN_1003b7608;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003b759c(&uStack_51,uStack_30);
  return;
}



/* Entry: 1003b7608; end: 1003b7653;  */

void FUN_1003b7608(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1003b759c(&uStack_11,param_1);
  return;
}



/* Entry: 1003b7654; end: 1003b767b;  */

long FUN_1003b7654(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001003b7628();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003b767c; end: 1003b7683;  */

void FUN_1003b767c(void)

{
  return;
}



/* Entry: 1003b7684; end: 1003b7853;  */

undefined8 * FUN_1003b7684(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110cca6d0;
  param_1[1] = puVar4;
  puVar4[3] = &PTR_DAT_110cca638;
  *param_1 = puVar4 + 3;
  uVar5 = 0x60;
  func_0x000107c60e20();
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001003b78dc();
  param_1[2] = uVar5;
  FUN_1003b7950(&uStack_50);
  FUN_1003b7950(&puStack_40);
  puVar4 = (undefined8 *)0x50;
  func_0x000107c60e20();
  *puVar4 = 0x32aaaba7;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[9] = 0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  param_1[3] = puVar4;
  FUN_1003b79a8(&puStack_40);
  puVar4 = (undefined8 *)0x8;
  func_0x000107c60e20();
  *puVar4 = &PTR_DAT_110cc8fc8;
  param_1[4] = puVar4;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  puVar4[2] = 0;
  puVar4[3] = 0x32aaaba7;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0x3cb0b1bb;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  *puVar4 = &PTR_DAT_110cca738;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 0x11) = 8;
  puStack_40 = puVar4;
  FUN_1003b79d8();
  FUN_1003b7a4c(&puStack_40);
  param_1[5] = puVar4;
  lVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = uVar5;
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
  FUN_1003b7a94(param_1 + 8);
  return param_1;
}



/* Entry: 1003b7854; end: 1003b788f;  */

undefined8 * FUN_1003b7854(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cc95f0;
  FUN_1003b7684(param_1 + 3);
  return param_1;
}



/* Entry: 1003b7890; end: 1003b78b3;  */

void FUN_1003b7890(undefined8 *param_1)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1003b78b4; end: 1003b7923;  */

long FUN_1003b78b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1003b7890();
  FUN_1003b7924(lVar1 + 0x40);
  return param_1;
}



/* Entry: 1003b7924; end: 1003b794f;  */

void FUN_1003b7924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1003b7950; end: 1003b799f;  */

long FUN_1003b7950(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003b79a0; end: 1003b79a7;  */

void FUN_1003b79a0(void)

{
  return;
}



/* Entry: 1003b79a8; end: 1003b79cf;  */

long FUN_1003b79a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003b79d0; end: 1003b79d7;  */

void FUN_1003b79d0(void)

{
  return;
}



/* Entry: 1003b79d8; end: 1003b7a3f;  */

void FUN_1003b79d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  
  func_0x000107c60d88(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
    return;
  }
  func_0x00010538ceb0(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b7a30);
  (*pcVar4)();
}



/* Entry: 1003b7a40; end: 1003b7a4b;  */

undefined8 FUN_1003b7a40(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1003b7a4c; end: 1003b7a83;  */

void FUN_1003b7a4c(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  FUN_1003b7a40();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      FUN_1003b7a84();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x000107c35210();
    }
  }
  return;
}



/* Entry: 1003b7a84; end: 1003b7a93;  */

void FUN_1003b7a84(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + -1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b7a94; end: 1003b7b37;  */

undefined8 * FUN_1003b7a94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)0xe8;
  func_0x000107c60e20();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  *puVar1 = &PTR_DAT_110ccb700;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 8;
  puStack_28 = puVar1;
  FUN_1003b79d8();
  FUN_1003b7b38(&puStack_28);
  *param_1 = puVar1;
  puStack_28 = (undefined8 *)0x0;
  FUN_1003b7b84(&puStack_28);
  return param_1;
}



/* Entry: 1003b7b38; end: 1003b7b7b;  */

long * FUN_1003b7b38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      func_0x000107c35240();
    }
  }
  return param_1;
}



/* Entry: 1003b7b7c; end: 1003b7b83;  */

void FUN_1003b7b7c(void)

{
  return;
}



/* Entry: 1003b7b84; end: 1003b7bc3;  */

long * FUN_1003b7b84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      func_0x000107c35240();
    }
  }
  return param_1;
}



/* Entry: 1003b7bc4; end: 1003b7c8f;  */

void FUN_1003b7bc4(void)

{
  return;
}



/* Entry: 1003b7c90; end: 1003b7cfb;  */

void FUN_1003b7c90(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    FUN_1003b7cfc(param_2,&uStack_20);
    func_0x0001003b7d70(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1003b7cfc; end: 1003b7d97;  */

undefined8 * FUN_1003b7cfc(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001003b7d48(&uStack_30);
  return param_1;
}



/* Entry: 1003b7d98; end: 1003b7da7;  */

void FUN_1003b7d98(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1003b7da8; end: 1003b7e9f;  */

void FUN_1003b7da8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1003b6920(auStack_40,param_1 + 8,&uStack_50);
  FUN_1003b6980(&puStack_30,auStack_40);
  FUN_1003b6664(auStack_40);
  FUN_1003b665c();
  puVar1 = puStack_30;
  func_0x000107c60d88(puStack_30 + 9);
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x000107c2be70(puVar1,param_2);
  }
  else {
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  plVar2 = (long *)puVar1[0x12];
  puVar1[0x12] = 0;
  func_0x000107c60d8c(puVar1 + 9);
  if (plVar2 == (long *)0x0) {
    func_0x000107c60d48(puVar1 + 3);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,&puStack_30);
    func_0x0001003b8480();
  }
  func_0x0001003b8278();
  return;
}



/* Entry: 1003b7ea0; end: 1003b7ef7;  */

void FUN_1003b7ea0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10 != 0);
  }
  FUN_1003b7ef8(param_1 + 8);
  FUN_1003b665c();
  return;
}



/* Entry: 1003b7ef8; end: 1003b81ef;  */

void FUN_1003b7ef8(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 extraout_w8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10 != 0);
    do {
      func_0x0001003b6610();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  func_0x000107c60d28(lVar2);
  puStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1003b6920(&puStack_60,&uStack_c0,&uStack_70);
  FUN_1003b6980(&puStack_50,&puStack_60);
  FUN_1003b6664(&puStack_60);
  FUN_1003b6664(&uStack_70);
  puVar4 = puStack_50;
  puStack_60 = puStack_50 + 9;
  uStack_58 = 1;
  func_0x000107c60d88();
  puStack_80 = puVar4;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10_01 != 0);
  }
  while (puVar5 = puVar4, func_0x0001003b6c8c(), ((ulong)puVar5 & 1) == 0) {
    func_0x000107c60d4c(puVar4 + 3,&puStack_60);
  }
  FUN_1003b6664(&puStack_80);
  if (puVar4[0x11] != 0) {
    func_0x000107c60c14(auStack_88);
    func_0x000107c60e08(auStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b80c4);
    (*pcVar1)();
  }
  uStack_98 = *puVar4;
  uStack_90 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1000df5a0(&puStack_60);
  func_0x0001003b69c4();
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    if (*(char *)(lVar3 + 0x50) == '\x01') {
      func_0x000107c2be70(lVar3 + 0x40,&uStack_98);
    }
    else {
      func_0x000107c60c18(lVar3 + 0x40);
      FUN_1003b81f0();
    }
  }
  else {
    FUN_1003b81f0();
    *(undefined1 *)(lVar3 + 0x58) = extraout_w8;
  }
  FUN_1003b8204(&uStack_98);
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x60);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x70);
  puVar5 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  puStack_b0 = puVar4;
  puStack_a8 = puVar5;
  func_0x000107c60d2c(lVar2);
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    (**(code **)*puVar4)();
  }
  FUN_1003b8240(&puStack_b0);
  FUN_1003b6cd8();
  func_0x0001003b8278();
  func_0x0001003b8370(param_1[2]);
  return;
}



/* Entry: 1003b81f0; end: 1003b8203;  */

void FUN_1003b81f0(void)

{
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  
  *(undefined8 *)(unaff_x21 + 0x40) = unaff_x22;
  *(undefined8 *)(unaff_x21 + 0x48) = unaff_x23;
  *(undefined1 *)(unaff_x21 + 0x50) = 1;
  return;
}



/* Entry: 1003b8204; end: 1003b8227;  */

void FUN_1003b8204(long param_1)

{
  FUN_1003b6d3c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1003b8228; end: 1003b823f;  */

void FUN_1003b8228(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1003b8240; end: 1003b826b;  */

undefined8 FUN_1003b8240(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1003b8228(&uStack_28);
  return param_1;
}



/* Entry: 1003b826c; end: 1003b828f;  */

void FUN_1003b826c(void)

{
  return;
}



/* Entry: 1003b8290; end: 1003b832b;  */

void FUN_1003b8290(undefined8 param_1,long *param_2)

{
  func_0x0001003b8280();
  func_0x0001003b83f4();
  func_0x0001003b8444();
  func_0x0001003b6c10();
  func_0x000107c60d88(0x38);
  uRam0000000000000000 = *(byte *)*param_2 | 0x100;
  func_0x0001003b844c();
  if (param_2 == (long *)0x0) {
    func_0x0001003b8460();
  }
  else {
    func_0x000104bf44a4(*(undefined8 *)(*param_2 + 0x10));
    func_0x000104bf42a4();
  }
  func_0x0001003b846c();
  return;
}



/* Entry: 1003b832c; end: 1003b8393;  */

void FUN_1003b832c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1003b8290(param_1,&uStack_18);
  return;
}



/* Entry: 1003b8394; end: 1003b83e7;  */

void FUN_1003b8394(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  func_0x000107c60dc8(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1003b83e8; end: 1003b83ff;  */

void FUN_1003b83e8(void)

{
  return;
}



/* Entry: 1003b8400; end: 1003b8437;  */

undefined8 * FUN_1003b8400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001003b6c10();
  return param_1;
}



/* Entry: 1003b8438; end: 1003b848f;  */

void FUN_1003b8438(void)

{
  return;
}



/* Entry: 1003b8490; end: 1003b84bb;  */

undefined8 * FUN_1003b8490(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc67c0;
  func_0x0001003b6d14(param_1 + 1);
  return param_1;
}



/* Entry: 1003b84bc; end: 1003b84cf;  */

void FUN_1003b84bc(void)

{
  FUN_1003b8490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1003b84d0; end: 1003b84db;  */

void FUN_1003b84d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003b84d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1003b84dc; end: 1003b8547;  */

undefined1 * FUN_1003b84dc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_100361c08(param_1,0,param_2);
    param_1[0x58] = 1;
  }
  return param_1;
}



/* Entry: 1003b8548; end: 1003b875f; -[SCSnapTokenManager _fetchAccessTokenFromStorageDoneForOp:token:] */

/* WARNING: Possible PIC construction at 0x0001003b85b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b86e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b864c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b8650) */
/* WARNING: Removing unreachable block (ram,0x0001003b8694) */
/* WARNING: Removing unreachable block (ram,0x0001003b8654) */
/* WARNING: Removing unreachable block (ram,0x0001003b8604) */
/* WARNING: Removing unreachable block (ram,0x0001003b862c) */
/* WARNING: Removing unreachable block (ram,0x0001003b860c) */
/* WARNING: Removing unreachable block (ram,0x0001003b85b8) */
/* WARNING: Removing unreachable block (ram,0x0001003b85e0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8678) */
/* WARNING: Removing unreachable block (ram,0x0001003b868c) */
/* WARNING: Removing unreachable block (ram,0x0001003b869c) */

void FUN_1003b8548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6eda17;
  FUN_1000ba800(&UNK_10f6eda17);
  if (*(char *)(param_4 + 0x58) == '\x01') {
    func_0x000107c4ce8c(param_3);
    func_0x000107c61180();
    func_0x000107c55588();
  }
  else {
    func_0x000107c3b898(param_1,param_2,param_3);
    func_0x0001000e2a84(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003b8760; end: 1003b87af; -[SCSnapTokenMetricsInfo setIsCacheHit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b8760(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e030;
  func_0x000107c61428(param_1 + _DAT_11307e030,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1003b87b0; end: 1003b890b; -[SCSnapTokenManager _accessTokenDoneWithSuccessForOp:accessToken:] */

/* WARNING: Possible PIC construction at 0x0001003b8844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b8848) */
/* WARNING: Removing unreachable block (ram,0x0001003b8884) */

void FUN_1003b87b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  FUN_1000ba800(&UNK_10f6edcab);
  puVar3 = (ulong *)(*(ulong *)(param_4 + 0x28) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar1 = puVar3;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4ce8c(param_3);
  func_0x000107c61180();
  func_0x000107c4b9b8(uVar4,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003b890c; end: 1003b8d4f; -[SCSnapTokenMainAppLogger logAccessTokenRetrievalSuccessLatencyWithMetricsInfo:token:] */

/* WARNING: Possible PIC construction at 0x0001003b89d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b8be0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b40) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b6c) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b74) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b78) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b7c) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b94) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b9c) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ba0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ba4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8bbc) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b44) */
/* WARNING: Removing unreachable block (ram,0x0001003b8afc) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b28) */
/* WARNING: Removing unreachable block (ram,0x0001003b8b00) */
/* WARNING: Removing unreachable block (ram,0x0001003b8a88) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ad4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ad8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8a30) */
/* WARNING: Removing unreachable block (ram,0x0001003b8be8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8c80) */
/* WARNING: Removing unreachable block (ram,0x0001003b8c44) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ca4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8c68) */
/* WARNING: Removing unreachable block (ram,0x0001003b8c74) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cac) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cb8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cd0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cd8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ce4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cec) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cf0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cf4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d00) */
/* WARNING: Removing unreachable block (ram,0x0001003b8a40) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d30) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d20) */
/* WARNING: Removing unreachable block (ram,0x0001003b89d4) */
/* WARNING: Removing unreachable block (ram,0x0001003b89f0) */
/* WARNING: Removing unreachable block (ram,0x0001003b89e0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d18) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d08) */

void FUN_1003b890c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3be90(param_1,param_2,param_3);
  lVar1 = param_3;
  func_0x000107c4414c();
  if (lVar1 == 2) {
    func_0x000107c3be58(param_1,param_2,param_3);
  }
  puVar2 = PTR_PTR_1126decc8;
  lVar1 = param_3;
  func_0x000107c4414c(param_3);
  func_0x000107c5c1fc(puVar2,param_2,lVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd360;
  func_0x000107c3ceec(param_3);
  func_0x000107c5aae8(puVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4c10c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1003b8d50; end: 1003b8e13; -[SCSnapTokenMainAppLogger _logTimeSinceLastAccessTokenNetworkRequest:] */

/* WARNING: Possible PIC construction at 0x0001003b8dfc: Changing call to branch */

void FUN_1003b8d50(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c4414c();
  if ((puVar2 == (undefined *)0x3) && (puVar2 = param_3, func_0x000107c4a9c8(), 0 < (long)puVar2)) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = param_3;
    func_0x000107c4a208();
    puVar2 = PTR_PTR_1126bd360;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
    if ((int)puVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
    }
    func_0x000107c3ceec(param_3);
    func_0x000107c5aae8(puVar2);
    func_0x000107c61180();
    func_0x000107c4a9c8(param_3);
    func_0x000107c2bbe4((double)(long)param_3,uVar4,ppuVar1,puVar2);
    param_3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003b8e14; end: 1003b8e57; -[SCSnapTokenMetricsInfo getMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b8e14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307e060;
  func_0x000107c61428(param_1 + _DAT_11307e060,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1003b8e58; end: 1003b8fc3; -[SCSnapTokenMainAppLogger _logKeychainLatency:] */

/* WARNING: Possible PIC construction at 0x0001003b8ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b8fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b8f98) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f84) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f88) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f90) */
/* WARNING: Removing unreachable block (ram,0x0001003b8ee8) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f04) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f50) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f38) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f58) */
/* WARNING: Removing unreachable block (ram,0x0001003b8fa8) */

void FUN_1003b8e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR_PTR_1126decc8;
  uVar1 = param_3;
  func_0x000107c4414c(param_3);
  func_0x000107c5c1fc(puVar2,param_2,uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd360;
  func_0x000107c3ceec(param_3);
  func_0x000107c5aae8(puVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4c10c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1003b8fc4; end: 1003b90bf;  */

void FUN_1003b8fc4(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      FUN_1000e2834();
      pcVar2 = "cache_hit_sync_read_from_memory";
      uVar3 = 0x1f;
    }
    else {
      if (param_1 != 1) {
LAB_1003b909c:
        lStack_28 = param_1;
        func_0x000107c60614(&UNK_110778db8,&lStack_28,&UNK_110778db8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b90c0);
        (*pcVar1)();
      }
      FUN_1000e2834(0);
      pcVar2 = "cache_hit_read_from_memory";
      uVar3 = 0x1a;
    }
  }
  else if (param_1 == 2) {
    FUN_1000e2834(0);
    pcVar2 = "cache_hit_load_from_disk";
    uVar3 = 0x18;
  }
  else if (param_1 == 3) {
    FUN_1000e2834(0);
    pcVar2 = "cache_miss_fetch_from_network";
    uVar3 = 0x1d;
  }
  else {
    if (param_1 != 4) goto LAB_1003b909c;
    FUN_1000e2834(0);
    pcVar2 = "unknown";
    uVar3 = 7;
  }
  func_0x000107c60124(pcVar2,uVar3,2);
  return;
}



/* Entry: 1003b90c0; end: 1003b90d7; +[SCSnapTokenGetModeUtil stringWithGetMode:] */

void FUN_1003b90c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003b8fc4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003b90d8; end: 1003b90e7; -[SCSnapTokenMetricsInfo accessType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b90d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307e018);
}



/* Entry: 1003b90e8; end: 1003b90f7; -[SCSnapTokenMetricsInfo isTrySyncFirst] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1003b90e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307e020);
}



/* Entry: 1003b90f8; end: 1003b9103; -[SCSnapTokenMetricsInfo referrer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b90f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e078);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1003b9104; end: 1003b9177;  */

void FUN_1003b9104(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1003b9178; end: 1003b91bb; -[SCSnapTokenMetricsInfo keychainLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b9178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307e050;
  func_0x000107c61428(param_1 + _DAT_11307e050,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1003b91bc; end: 1003b92b7;  */

/* WARNING: Possible PIC construction at 0x0001003b924c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b925c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b9250) */
/* WARNING: Removing unreachable block (ram,0x0001003b9260) */

void FUN_1003b91bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  if (param_2 != 0) {
    FUN_1003b92b8(param_2,param_3,param_4,param_5,param_6,param_7,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1003b92b8; end: 1003b9667;  */

/* WARNING: Possible PIC construction at 0x0001003b9360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b93a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b93f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b950c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b951c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b952c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b970c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b97a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b97f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b98a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b9898) */
/* WARNING: Removing unreachable block (ram,0x0001003b97f8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9824) */
/* WARNING: Removing unreachable block (ram,0x0001003b982c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9830) */
/* WARNING: Removing unreachable block (ram,0x0001003b9834) */
/* WARNING: Removing unreachable block (ram,0x0001003b984c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9854) */
/* WARNING: Removing unreachable block (ram,0x0001003b9858) */
/* WARNING: Removing unreachable block (ram,0x0001003b985c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9874) */
/* WARNING: Removing unreachable block (ram,0x0001003b97fc) */
/* WARNING: Removing unreachable block (ram,0x0001003b97a4) */
/* WARNING: Removing unreachable block (ram,0x0001003b97d0) */
/* WARNING: Removing unreachable block (ram,0x0001003b97d4) */
/* WARNING: Removing unreachable block (ram,0x0001003b9748) */
/* WARNING: Removing unreachable block (ram,0x0001003b98a0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9758) */
/* WARNING: Removing unreachable block (ram,0x0001003b9710) */
/* WARNING: Removing unreachable block (ram,0x0001003b9658) */
/* WARNING: Removing unreachable block (ram,0x0001003b9660) */
/* WARNING: Removing unreachable block (ram,0x0001003b9648) */
/* WARNING: Removing unreachable block (ram,0x0001003b9638) */
/* WARNING: Removing unreachable block (ram,0x0001003b9578) */
/* WARNING: Removing unreachable block (ram,0x0001003b9610) */
/* WARNING: Removing unreachable block (ram,0x0001003b9614) */
/* WARNING: Removing unreachable block (ram,0x0001003b9620) */
/* WARNING: Removing unreachable block (ram,0x0001003b9628) */
/* WARNING: Removing unreachable block (ram,0x0001003b9630) */
/* WARNING: Removing unreachable block (ram,0x0001003b9530) */
/* WARNING: Removing unreachable block (ram,0x0001003b9568) */
/* WARNING: Removing unreachable block (ram,0x0001003b9548) */
/* WARNING: Removing unreachable block (ram,0x0001003b9520) */
/* WARNING: Removing unreachable block (ram,0x0001003b9510) */
/* WARNING: Removing unreachable block (ram,0x0001003b9484) */
/* WARNING: Removing unreachable block (ram,0x0001003b94e8) */
/* WARNING: Removing unreachable block (ram,0x0001003b94f4) */
/* WARNING: Removing unreachable block (ram,0x0001003b94fc) */
/* WARNING: Removing unreachable block (ram,0x0001003b943c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9474) */
/* WARNING: Removing unreachable block (ram,0x0001003b945c) */
/* WARNING: Removing unreachable block (ram,0x0001003b947c) */
/* WARNING: Removing unreachable block (ram,0x0001003b93f4) */
/* WARNING: Removing unreachable block (ram,0x0001003b942c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9414) */
/* WARNING: Removing unreachable block (ram,0x0001003b9434) */
/* WARNING: Removing unreachable block (ram,0x0001003b93ac) */
/* WARNING: Removing unreachable block (ram,0x0001003b93e4) */
/* WARNING: Removing unreachable block (ram,0x0001003b93cc) */
/* WARNING: Removing unreachable block (ram,0x0001003b93ec) */
/* WARNING: Removing unreachable block (ram,0x0001003b9364) */
/* WARNING: Removing unreachable block (ram,0x0001003b939c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9384) */
/* WARNING: Removing unreachable block (ram,0x0001003b93a4) */
/* WARNING: Removing unreachable block (ram,0x0001003b98a8) */

void FUN_1003b92b8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if ((param_1 != 0) && (func_0x000107c61174(param_2), param_6 = param_2, param_2 != 0)) {
    func_0x000107c61178(param_2);
    func_0x000107c3ac4c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1003b9668; end: 1003b98cb; -[SCSnapTokenMainAppLogger _logSnapTokenPrefetchWithMetricsInfo:] */

/* WARNING: Possible PIC construction at 0x0001003b970c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b97a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b97f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b98a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b9898) */
/* WARNING: Removing unreachable block (ram,0x0001003b97f8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9824) */
/* WARNING: Removing unreachable block (ram,0x0001003b982c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9830) */
/* WARNING: Removing unreachable block (ram,0x0001003b9834) */
/* WARNING: Removing unreachable block (ram,0x0001003b984c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9854) */
/* WARNING: Removing unreachable block (ram,0x0001003b9858) */
/* WARNING: Removing unreachable block (ram,0x0001003b985c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9874) */
/* WARNING: Removing unreachable block (ram,0x0001003b97fc) */
/* WARNING: Removing unreachable block (ram,0x0001003b97a4) */
/* WARNING: Removing unreachable block (ram,0x0001003b97d0) */
/* WARNING: Removing unreachable block (ram,0x0001003b97d4) */
/* WARNING: Removing unreachable block (ram,0x0001003b9748) */
/* WARNING: Removing unreachable block (ram,0x0001003b98a0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9758) */
/* WARNING: Removing unreachable block (ram,0x0001003b9710) */
/* WARNING: Removing unreachable block (ram,0x0001003b98a8) */

void FUN_1003b9668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c4245c(param_3);
  puVar1 = PTR_PTR_1126decc8;
  func_0x000107c4414c(param_3);
  func_0x000107c5c1fc(puVar1);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3de5c(param_1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4fb5c(param_3);
  func_0x000107c61180();
  FUN_1003b9914(uVar3,lVar2,puVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003b98cc; end: 1003b9913; -[SCSnapTokenMetricsInfo elapsedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1003b98cc(double param_1,long param_2)

{
  double dVar1;
  
  func_0x000107c61174();
  func_0x000107c6071c();
  dVar1 = *(double *)(param_2 + _DAT_11307e038);
  func_0x000107c61170(param_2);
  return param_1 - dVar1;
}



/* Entry: 1003b9914; end: 1003b9bf7;  */

/* WARNING: Possible PIC construction at 0x0001003b99bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b9c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b9be8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bf0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9c3c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9c60) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bd8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9b34) */
/* WARNING: Removing unreachable block (ram,0x0001003b9ba8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bac) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bb8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bc0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bc8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9bd0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9af0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9b24) */
/* WARNING: Removing unreachable block (ram,0x0001003b9b08) */
/* WARNING: Removing unreachable block (ram,0x0001003b9ae0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a50) */
/* WARNING: Removing unreachable block (ram,0x0001003b9ab8) */
/* WARNING: Removing unreachable block (ram,0x0001003b9ac4) */
/* WARNING: Removing unreachable block (ram,0x0001003b9acc) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a08) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a40) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a28) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a48) */
/* WARNING: Removing unreachable block (ram,0x0001003b99c0) */
/* WARNING: Removing unreachable block (ram,0x0001003b99f8) */
/* WARNING: Removing unreachable block (ram,0x0001003b99e0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9a00) */
/* WARNING: Removing unreachable block (ram,0x0001003b9c68) */

void FUN_1003b9914(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a270);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_4 = param_2, param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1003b9bf8; end: 1003b9cab;  */

/* WARNING: Possible PIC construction at 0x0001003b9c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b9c68) */

void FUN_1003b9bf8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_2 != 0) {
    FUN_1003b9cac(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1003b9cac; end: 1003b9f8b;  */

/* WARNING: Removing unreachable block (ram,0x0001003b9f4c) */

void FUN_1003b9cac(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x24;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a2c0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_a0,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_3);
        puVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a2c0,&uStack_c0,param_5);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar7 = 0;
      puVar2 = (undefined *)puVar5;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar3 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    puVar4 = puVar3;
    func_0x000107c60bd8();
    pcStack_c8 = FUN_1003b9f8c;
    puStack_f0 = puVar3;
    puStack_e8 = param_4;
    puStack_e0 = param_3;
    puStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000107c61174(puVar2);
    lVar7 = *(long *)(puVar4 + 0x28);
    if ((lVar7 != 0) && (lVar6 = *(long *)(puVar4 + 0x18), lVar6 != 0)) {
      if (puVar4[8] == '\x01') {
        (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
      }
      else {
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_1003ba080;
        puStack_108 = &UNK_110841f80;
        puStack_100 = puVar4;
        func_0x000107c61174(puVar2);
        puStack_f8 = puVar2;
        FUN_10007380c(lVar6,&puStack_120);
        func_0x000107c61170(puStack_f8);
      }
    }
    func_0x000107c61170(puVar2);
    return;
  }
  return;
}



/* Entry: 1003b9f8c; end: 1003ba047; -[SCSnapTokenAccessTokenFetchOperation sendSuccess:] */

void FUN_1003b9f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
    if (*(char *)(param_1 + 8) == '\x01') {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1003ba080;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      func_0x000107c61174(param_3);
      uStack_38 = param_3;
      FUN_10007380c(lVar2,&puStack_60);
      func_0x000107c61170(uStack_38);
    }
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003ba048; end: 1003ba07f; -[SCSnapTokenManager _shouldPrefetchForToken:] */

undefined8 FUN_1003ba048(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x40);
  if ((lVar2 == 0) || (FUN_100361e80(), param_1 < lVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1003ba080; end: 1003ba0a3;  */

void FUN_1003ba080(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0001003ba08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1003ba0a4; end: 1003ba107;  */

void FUN_1003ba0a4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_1003b6a18();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000104bf336c();
    func_0x000107c60dfc(&ppuStack_28);
  }
  FUN_1003b6c64(unaff_x19 + 0x18);
  FUN_1003b6c64((long *)(param_1 + 8));
  return;
}



/* Entry: 1003ba108; end: 1003ba11b;  */

void FUN_1003ba108(void)

{
  FUN_1003ba0a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1003ba11c; end: 1003ba123;  */

long FUN_1003ba11c(long param_1)

{
  FUN_1003ba124(param_1 + 0x98);
  func_0x000107c60c18(param_1 + 0x90);
  func_0x000107c60d94(param_1 + 0x50);
  func_0x000107c60d50(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 1003ba124; end: 1003ba187;  */

void FUN_1003ba124(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001003b6ce0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_1003b84d0();
  }
  return;
}



/* Entry: 1003ba188; end: 1003ba19b;  */

void FUN_1003ba188(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1003ba19c; end: 1003ba263;  */

undefined1 * FUN_1003ba19c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *in_x4;
  long in_x5;
  undefined1 *puVar4;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_60 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x000100100dd8();
  if (alStack_60[0] != 0) {
    if (in_x5 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c39820(&uStack_80);
    }
    FUN_100060b18(auStack_e8,auStack_40);
    uVar2 = uStack_70;
    uVar1 = uStack_80;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_10011c010(uVar2,uVar1);
    func_0x00010011c04c();
    puVar4 = auStack_50;
    plVar3 = alStack_60;
    func_0x0001003ba2d4(puVar4,plVar3,auStack_d0);
    func_0x00010011c87c();
    FUN_10011494c();
    if (((ulong)plVar3 & 1) != 0) goto LAB_1003ba228;
  }
  puVar4 = (undefined1 *)*in_x4;
LAB_1003ba228:
  func_0x000100114954();
  return puVar4;
}



/* Entry: 1003ba264; end: 1003ba2eb;  */

void FUN_1003ba264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1003ba19c(0x40,1,param_1,param_2,&uStack_18,0);
  return;
}



/* Entry: 1003ba2ec; end: 1003ba373;  */

long FUN_1003ba2ec(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long *plVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  FUN_1003b6fb0(param_1 + 0x28);
  FUN_1003b6548();
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1003b6920(auStack_50,plVar2,&uStack_60);
    FUN_1003b6980(alStack_40,auStack_50);
    FUN_1003b6cd8();
    func_0x0001003b8278();
    lVar1 = alStack_40[0];
    func_0x000107c60d88(alStack_40[0] + 0x48);
    func_0x000107c60c1c(lVar1 + 0x88,auStack_68);
    plVar3 = *(long **)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    func_0x000107c60d8c(lVar1 + 0x48);
    if (plVar3 == (long *)0x0) {
      func_0x000107c60d48(lVar1 + 0x18);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,alStack_40);
      func_0x000107c35124();
    }
    func_0x0001003b6d74();
    func_0x000107c35120();
    func_0x000107c60dfc(&ppuStack_70);
    func_0x000107c60dfc(&ppuStack_78);
  }
  FUN_1003b6664(unaff_x19 + 0x18);
  FUN_1003b6664(plVar2);
  return unaff_x19;
}



/* Entry: 1003ba374; end: 1003ba383;  */

void FUN_1003ba374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1003ba384; end: 1003ba3a7;  */

void FUN_1003ba384(long param_1)

{
  FUN_1003ba374();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1003ba3a8; end: 1003ba3c3;  */

void FUN_1003ba3a8(void)

{
  return;
}



/* Entry: 1003ba3c4; end: 1003ba4e7; -[SCSystemContentDeliveryServices initWithContentDelivery:simpleContentFetcher:cacheController:bufferedContentFetcher:contentObjectResolver:] */

undefined1 *
FUN_1003ba3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_11270af90;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003ba4e8; end: 1003ba54b;  */

void FUN_1003ba4e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ba54c; end: 1003ba553;  */

void FUN_1003ba54c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ba554; end: 1003ba5a7;  */

void FUN_1003ba554(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ba5a8; end: 1003ba5b7;  */

void FUN_1003ba5a8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002bfb78();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar9 = PTR_PTR_1126a99e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f01adc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(lVar2 + 0x48) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ba9fc);
  (*pcVar1)();
}



/* Entry: 1003ba5b8; end: 1003ba9fb;  */

void FUN_1003ba5b8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002bfb78();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar8 = PTR_PTR_1126a99e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f01adc0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(param_2 + 0x48) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ba9fc);
  (*pcVar1)();
}



/* Entry: 1003ba9fc; end: 1003baa03;  */

void FUN_1003ba9fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003baa04; end: 1003baa57;  */

void FUN_1003baa04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003baa58; end: 1003bb50b;  */

void FUN_1003baa58(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_1002bcdc8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a99b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar20 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  uVar20 = uVar21;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01acd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x7672655373757472;
  func_0x000107c5fadc(0x7672655373757472,0xec00000073656369);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar23);
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f01ad00);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar23);
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  lVar22 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ad20);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uVar20);
  func_0x000107c3e740(uVar23);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar22 != 0) {
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    *(long *)(param_2 + 0xa0) = lVar22;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bb50c);
  (*pcVar1)();
}



/* Entry: 1003bb50c; end: 1003bb54f;  */

void FUN_1003bb50c(void)

{
  long unaff_x20;
  
  FUN_1003baa58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1003bb550; end: 1003bb557;  */

void FUN_1003bb550(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126b8258;
  func_0x000107c610f8();
  func_0x000107c45884();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(unaff_x20);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bb5b4);
  (*pcVar1)();
}


