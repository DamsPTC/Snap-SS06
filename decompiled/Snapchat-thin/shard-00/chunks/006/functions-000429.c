/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008dd748; end: 1008dd74b;  */

long FUN_1008dd748(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008dd74c; end: 1008dd817;  */

undefined1  [16] FUN_1008dd74c(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *param_1;
  (**(code **)(**(long **)(lVar2 + 8) + 8))();
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined ***)(lVar2 + 0x10) = &PTR_PTR_1130a64a0;
  (**(code **)(PTR_PTR_1130a64a0 + 8))(&PTR_PTR_1130a64a0);
  (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
  puVar1 = (undefined1 *)*param_1;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *puVar1 = 1;
  FUN_1008dd8a4();
  (**(code **)(PTR_PTR_1130a64a0 + 8))(&PTR_PTR_1130a64a0);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1008dd818; end: 1008dd847;  */

long FUN_1008dd818(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008dd848; end: 1008dd8a3;  */

void FUN_1008dd848(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    uStack_30 = 0;
    lVar1 = *(long *)(param_2 + 0x10);
    lStack_20 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    uStack_28 = 0;
    param_1[1] = lVar1;
    param_1[2] = lStack_20;
  }
  else {
    uStack_30 = 0x36;
    *(undefined8 *)(param_2 + 8) = 0x36;
  }
  uStack_18 = 1;
  *param_1 = lVar2;
  *(undefined4 *)(param_1 + 3) = 1;
  FUN_1008dd99c(&uStack_30);
  return;
}



/* Entry: 1008dd8a4; end: 1008dd993;  */

undefined1  [16] FUN_1008dd8a4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 auStack_50 [32];
  
  (*(code *)**(undefined8 **)param_1[1])(auStack_50);
  FUN_1008dda80(&lStack_70,auStack_50);
  FUN_1008dd99c(auStack_50);
  uVar2 = uStack_68;
  lVar1 = lStack_70;
  if (iStack_58 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    if (iStack_58 != 1) {
      func_0x000104a71e10();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008dd970);
      (*pcVar3)();
    }
    if (lStack_70 == 0) {
      uStack_68 = 0;
      uStack_78 = uStack_60;
      uStack_80 = uVar2;
    }
    else {
      lStack_70 = 0x36;
    }
    lStack_88 = lVar1;
    plVar4 = &lStack_88;
    FUN_1008ddae0(plVar4,param_1);
    uVar6 = (ulong)param_1 & 0xffffffff00000000;
    FUN_1008dcf5c(&lStack_88);
    uVar5 = (ulong)param_1 & 0xffffffff;
    param_1 = plVar4;
  }
  FUN_1008dd99c(&lStack_70);
  auVar7._8_8_ = uVar6 | uVar5;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1008dd994; end: 1008dd99b;  */

ulong * FUN_1008dd994(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_2;
}



/* Entry: 1008dd99c; end: 1008dd9f3;  */

long FUN_1008dd99c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c6790)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 1008dd9f4; end: 1008dda7f;  */

void FUN_1008dd9f4(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c6790)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c6810)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1008dda80; end: 1008ddab3;  */

undefined1 * FUN_1008dda80(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1008dd9f4();
  return param_1;
}



/* Entry: 1008ddab4; end: 1008ddadf;  */

void FUN_1008ddab4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    *param_2 = *param_3;
    *param_3 = 0x36;
    return;
  }
  lVar1 = param_3[1];
  param_2[2] = param_3[2];
  param_2[1] = lVar1;
  param_3[1] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1008ddae0; end: 1008ddb2b;  */

void FUN_1008ddae0(long *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (*param_1 == 0) {
    FUN_1008ddb34(&uStack_18,param_1);
  }
  else {
    func_0x000104a91cc8(auStack_20,param_1);
  }
  return;
}



/* Entry: 1008ddb2c; end: 1008ddb33;  */

ulong * FUN_1008ddb2c(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return (ulong *)(param_1 + 8);
}



/* Entry: 1008ddb34; end: 1008ddc23;  */

undefined1  [16] FUN_1008ddb34(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined **ppuStack_38;
  
  lVar4 = *param_1;
  (**(code **)(**(long **)(lVar4 + 8) + 8))();
  plVar2 = (long *)(lVar4 + 0x18);
  FUN_1008ddc24(&ppuStack_38,plVar2,param_2);
  plVar1 = *(long **)(lVar4 + 0x30);
  if (plVar1 == plVar2) {
    lVar4 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1008ddba4;
    lVar4 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_1008ddba4:
  puVar3 = (undefined1 *)*param_1;
  *(undefined ***)(puVar3 + 8) = ppuStack_38;
  ppuStack_38 = &PTR_PTR_1130a5848;
  *puVar3 = 2;
  FUN_1008ddcbc();
  (**(code **)(*ppuStack_38 + 8))();
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1008ddc24; end: 1008ddc47;  */

undefined1  [16] FUN_1008ddc24(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  int *piVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar15;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar4 = &stack0xfffffffffffffff0;
  puVar11 = &stack0xfffffffffffffff0;
  if (*param_3 == 0) {
    plVar12 = param_3 + 1;
    puVar4 = (undefined1 *)register0x00000008;
    param_3 = param_2;
    puVar11 = unaff_x29;
  }
  else {
    unaff_x30 = FUN_1008ddc48;
    plVar12 = param_3;
    func_0x000107c2b9e8();
    param_1 = extraout_x8;
  }
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar11;
  *(code **)(puVar4 + -8) = unaff_x30;
  lVar14 = *plVar12;
  *plVar12 = 0;
  *(long *)(puVar4 + -0x28) = plVar12[1];
  *(long *)(puVar4 + -0x30) = lVar14;
  plVar5 = (long *)param_3[3];
  if (plVar5 != (long *)0x0) {
    puVar11 = puVar4 + -0x30;
    (**(code **)(*plVar5 + 0x30))(puVar4 + -0x38,plVar5,puVar11);
    *param_1 = *(undefined8 *)(puVar4 + -0x38);
    ppuVar6 = &PTR_PTR_1130a5848;
    *(undefined ***)(puVar4 + -0x38) = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    auVar16._8_8_ = puVar11;
    auVar16._0_8_ = ppuVar6;
    return auVar16;
  }
  func_0x000104a71f98();
  func_0x000104bd46a0();
  puVar11 = puVar4 + -0x70;
  *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x48) = FUN_1008ddcbc;
  puVar7 = (undefined8 *)plVar5[1];
  (**(code **)*puVar7)();
  *(undefined8 **)(puVar4 + -0x70) = puVar7;
  *(long **)(puVar4 + -0x68) = plVar12;
  puVar7 = (undefined8 *)(puVar4 + -0x60);
  FUN_100616694();
  if ((*(ulong *)(puVar4 + -0x58) & 0xfffffffe) == 0) {
    auVar17._0_8_ = *(undefined8 *)(puVar4 + -0x60);
    auVar17._8_8_ = *(ulong *)(puVar4 + -0x58) & 0xffffffff;
    return auVar17;
  }
  func_0x000104a71e10();
  *(undefined8 *)(puVar4 + -0x90) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x88) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x50;
  *(code **)(puVar4 + -0x78) = FUN_1008ddd0c;
  if (*(char *)(puVar7 + 0xc5) == '\0') {
    if (((*(byte *)(param_4 + 0x10) & 1) == 0) ||
       ((*(byte *)(**(long **)(param_4 + 8) + 1) >> 3 & 1) == 0)) {
      if (((*(byte *)(param_4 + 0x10) >> 1 & 1) == 0) ||
         ((*(byte *)(*(long *)(*(long *)(param_4 + 8) + 0x18) + 1) >> 3 & 1) == 0))
      goto LAB_1008ddd50;
    }
    else {
      func_0x000107c2c290();
    }
    func_0x000107c2c28c();
    func_0x000104bd46a0();
    FUN_1004bdf74(puVar4 + -0x98);
    puVar10 = puVar7;
    func_0x000107c60bd8();
    *(undefined8 *)(puVar4 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar4 + -200) = unaff_x21;
    *(undefined8 *)(puVar4 + -0xc0) = unaff_x20;
    *(undefined8 **)(puVar4 + -0xb8) = puVar7;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
    *(code **)(puVar4 + -0xa8) = FUN_1008dddc8;
    uVar9 = puVar10[0x11];
    uVar15 = puVar10[5];
    if (uVar15 != 0) {
      *(ulong *)(puVar4 + -0xd8) = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar13 = (int *)(uVar15 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104a97f00(uVar9,puVar4 + -0xd8,0);
      if ((uVar15 & 1) != 0) {
        FUN_10084dad0(uVar15);
      }
    }
    if (*(char *)(puVar10 + 6) != '\0') {
      uVar8 = puVar10[7];
      *(undefined8 *)(uVar9 + 0x2d8) = puVar10[8];
      *(undefined8 *)(uVar9 + 0x2d0) = uVar8;
    }
    if (puVar10[0xc] != 0) {
      func_0x0001008dbda0(*(undefined8 *)(uVar9 + 0x10));
    }
    if (puVar10[0xd] != 0) {
      FUN_1005a6208(*(undefined8 *)(uVar9 + 0x10));
    }
    if (puVar10[0xe] != 0 || puVar10[0xf] != 0) {
      func_0x000104a9a3ac(uVar9);
      FUN_1007474b0(uVar9,0x10);
    }
    lVar14 = puVar10[1];
    if (lVar14 != 0) {
      uVar1 = *(undefined4 *)(puVar10 + 2);
      puVar10[1] = 0;
      *(long *)(puVar4 + -0xe0) = lVar14;
      FUN_1008de004(uVar9 + 0x2e0,uVar1,puVar4 + -0xe0);
      puVar7 = *(undefined8 **)(puVar4 + -0xe0);
      *(undefined8 *)(puVar4 + -0xe0) = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)();
      }
    }
    if (puVar10[3] != 0) {
      func_0x000104add5ec(uVar9 + 0x2e0);
    }
    uVar15 = puVar10[4];
    if (uVar15 != 0) {
      *(ulong *)(puVar4 + -0xe8) = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar13 = (int *)(uVar15 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104a97f00(uVar9,puVar4 + -0xe8,1);
      if ((uVar15 & 1) != 0) {
        FUN_10084dad0(uVar15);
      }
      uVar15 = puVar10[4];
      *(ulong *)(puVar4 + -0xf0) = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar13 = (int *)(uVar15 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104a98258(uVar9,puVar4 + -0xf0);
      if ((*(ulong *)(puVar4 + -0xf0) & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar8 = *puVar10;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    FUN_1004bd7e8(puVar4 + -0xf1,uVar8,puVar4 + -0x100);
    uVar15 = *(ulong *)(puVar4 + -0x100);
    if ((uVar15 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar12 = (long *)(uVar9 + 8);
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 != 0) && (lVar14 == 1)) {
      func_0x000104a96f9c(uVar9);
      func_0x000107c60e14();
      uVar15 = uVar9;
    }
    auVar19._8_8_ = uVar8;
    auVar19._0_8_ = uVar15;
    return auVar19;
  }
LAB_1008ddd50:
  plVar12 = *(long **)(puVar11 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 **)(param_4 + 0x18) = puVar11;
  uVar8 = puVar7[0xf];
  lVar14 = param_4 + 0x20;
  *(code **)(param_4 + 0x28) = FUN_1008de290;
  *(long *)(param_4 + 0x30) = param_4;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + -0x98) = 0;
  FUN_10074775c(uVar8,lVar14,puVar4 + -0x98);
  uVar9 = *(ulong *)(puVar4 + -0x98);
  if ((uVar9 & 1) != 0) {
    FUN_10084dad0();
  }
  auVar18._8_8_ = lVar14;
  auVar18._0_8_ = uVar9;
  return auVar18;
}



/* Entry: 1008ddc48; end: 1008ddcbb;  */

undefined1  [16] FUN_1008ddc48(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uStack_100;
  undefined1 uStack_f1;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_98;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  plVar3 = *(long **)(param_2 + 0x18);
  if (plVar3 != (long *)0x0) {
    puVar6 = &uStack_30;
    (**(code **)(*plVar3 + 0x30))(&ppuStack_38,plVar3,puVar6);
    *param_1 = ppuStack_38;
    ppuVar4 = &PTR_PTR_1130a5848;
    ppuStack_38 = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    auVar13._8_8_ = puVar6;
    auVar13._0_8_ = ppuVar4;
    return auVar13;
  }
  func_0x000104a71f98();
  func_0x000104bd46a0();
  ppuVar8 = &puStack_70;
  pcStack_48 = FUN_1008ddcbc;
  puVar5 = (undefined8 *)plVar3[1];
  puStack_50 = &stack0xfffffffffffffff0;
  (**(code **)*puVar5)();
  puVar6 = &uStack_60;
  puStack_70 = puVar5;
  puStack_68 = param_3;
  FUN_100616694();
  if ((uStack_58 & 0xfffffffe) == 0) {
    auVar14._8_8_ = uStack_58 & 0xffffffff;
    auVar14._0_8_ = uStack_60;
    return auVar14;
  }
  func_0x000104a71e10();
  if (*(char *)(puVar6 + 0xc5) == '\0') {
    if (((*(byte *)(param_4 + 0x10) & 1) == 0) ||
       ((*(byte *)(**(long **)(param_4 + 8) + 1) >> 3 & 1) == 0)) {
      if (((*(byte *)(param_4 + 0x10) >> 1 & 1) == 0) ||
         ((*(byte *)(*(long *)(*(long *)(param_4 + 8) + 0x18) + 1) >> 3 & 1) == 0))
      goto LAB_1008ddd50;
    }
    else {
      func_0x000107c2c290();
    }
    func_0x000107c2c28c();
    func_0x000104bd46a0();
    FUN_1004bdf74(&uStack_98);
    func_0x000107c60bd8();
    uVar11 = puVar6[0x11];
    uVar12 = puVar6[5];
    if (uVar12 != 0) {
      if ((uVar12 & 1) != 0) {
        piVar9 = (int *)(uVar12 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_d8 = uVar12;
      func_0x000104a97f00(uVar11,&uStack_d8,0);
      if ((uVar12 & 1) != 0) {
        FUN_10084dad0(uVar12);
      }
    }
    if (*(char *)(puVar6 + 6) != '\0') {
      uVar7 = puVar6[7];
      *(undefined8 *)(uVar11 + 0x2d8) = puVar6[8];
      *(undefined8 *)(uVar11 + 0x2d0) = uVar7;
    }
    if (puVar6[0xc] != 0) {
      func_0x0001008dbda0(*(undefined8 *)(uVar11 + 0x10));
    }
    if (puVar6[0xd] != 0) {
      FUN_1005a6208(*(undefined8 *)(uVar11 + 0x10));
    }
    if (puVar6[0xe] != 0 || puVar6[0xf] != 0) {
      func_0x000104a9a3ac(uVar11);
      FUN_1007474b0(uVar11,0x10);
    }
    puVar5 = (undefined8 *)puVar6[1];
    if (puVar5 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      puStack_e0 = puVar5;
      FUN_1008de004(uVar11 + 0x2e0,*(undefined4 *)(puVar6 + 2),&puStack_e0);
      puVar5 = puStack_e0;
      puStack_e0 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
    if (puVar6[3] != 0) {
      func_0x000104add5ec(uVar11 + 0x2e0);
    }
    uVar12 = puVar6[4];
    if (uVar12 != 0) {
      if ((uVar12 & 1) != 0) {
        piVar9 = (int *)(uVar12 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_e8 = uVar12;
      func_0x000104a97f00(uVar11,&uStack_e8,1);
      if ((uVar12 & 1) != 0) {
        FUN_10084dad0(uVar12);
      }
      uStack_f0 = puVar6[4];
      if ((uStack_f0 & 1) != 0) {
        piVar9 = (int *)(uStack_f0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104a98258(uVar11,&uStack_f0);
      if ((uStack_f0 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar7 = *puVar6;
    uStack_100 = 0;
    FUN_1004bd7e8(&uStack_f1,uVar7,&uStack_100);
    uVar12 = uStack_100;
    if ((uStack_100 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar3 = (long *)(uVar11 + 8);
    do {
      lVar10 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uVar11 != 0) && (lVar10 == 1)) {
      func_0x000104a96f9c(uVar11);
      func_0x000107c60e14();
      uVar12 = uVar11;
    }
    auVar16._8_8_ = uVar7;
    auVar16._0_8_ = uVar12;
    return auVar16;
  }
LAB_1008ddd50:
  plVar3 = *(long **)((long)ppuVar8 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined8 ***)(param_4 + 0x18) = ppuVar8;
  uVar7 = puVar6[0xf];
  lVar10 = param_4 + 0x20;
  *(code **)(param_4 + 0x28) = FUN_1008de290;
  *(long *)(param_4 + 0x30) = param_4;
  *(undefined8 *)(param_4 + 0x38) = 0;
  uStack_98 = 0;
  FUN_10074775c(uVar7,lVar10,&uStack_98);
  if ((uStack_98 & 1) != 0) {
    FUN_10084dad0();
  }
  auVar15._8_8_ = lVar10;
  auVar15._0_8_ = uStack_98;
  return auVar15;
}



/* Entry: 1008ddcbc; end: 1008ddd0b;  */

undefined1  [16] FUN_1008ddcbc(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_c0;
  undefined1 uStack_b1;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  ulong uStack_58;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  ppuVar6 = &puStack_30;
  puVar3 = *(undefined8 **)(param_1 + 8);
  (**(code **)*puVar3)();
  puVar4 = &uStack_20;
  puStack_30 = puVar3;
  uStack_28 = param_2;
  FUN_100616694();
  if ((uStack_18 & 0xfffffffe) == 0) {
    auVar12._8_8_ = uStack_18 & 0xffffffff;
    auVar12._0_8_ = uStack_20;
    return auVar12;
  }
  func_0x000104a71e10();
  if (*(char *)(puVar4 + 0xc5) == '\0') {
    if (((*(byte *)(param_3 + 0x10) & 1) == 0) ||
       ((*(byte *)(**(long **)(param_3 + 8) + 1) >> 3 & 1) == 0)) {
      if (((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) ||
         ((*(byte *)(*(long *)(*(long *)(param_3 + 8) + 0x18) + 1) >> 3 & 1) == 0))
      goto LAB_1008ddd50;
    }
    else {
      func_0x000107c2c290();
    }
    func_0x000107c2c28c();
    func_0x000104bd46a0();
    FUN_1004bdf74(&uStack_58);
    func_0x000107c60bd8();
    uVar10 = puVar4[0x11];
    uVar11 = puVar4[5];
    if (uVar11 != 0) {
      if ((uVar11 & 1) != 0) {
        piVar8 = (int *)(uVar11 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_98 = uVar11;
      func_0x000104a97f00(uVar10,&uStack_98,0);
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0(uVar11);
      }
    }
    if (*(char *)(puVar4 + 6) != '\0') {
      uVar5 = puVar4[7];
      *(undefined8 *)(uVar10 + 0x2d8) = puVar4[8];
      *(undefined8 *)(uVar10 + 0x2d0) = uVar5;
    }
    if (puVar4[0xc] != 0) {
      func_0x0001008dbda0(*(undefined8 *)(uVar10 + 0x10));
    }
    if (puVar4[0xd] != 0) {
      FUN_1005a6208(*(undefined8 *)(uVar10 + 0x10));
    }
    if (puVar4[0xe] != 0 || puVar4[0xf] != 0) {
      func_0x000104a9a3ac(uVar10);
      FUN_1007474b0(uVar10,0x10);
    }
    puVar3 = (undefined8 *)puVar4[1];
    if (puVar3 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      puStack_a0 = puVar3;
      FUN_1008de004(uVar10 + 0x2e0,*(undefined4 *)(puVar4 + 2),&puStack_a0);
      puVar3 = puStack_a0;
      puStack_a0 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    if (puVar4[3] != 0) {
      func_0x000104add5ec(uVar10 + 0x2e0);
    }
    uVar11 = puVar4[4];
    if (uVar11 != 0) {
      if ((uVar11 & 1) != 0) {
        piVar8 = (int *)(uVar11 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_a8 = uVar11;
      func_0x000104a97f00(uVar10,&uStack_a8,1);
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0(uVar11);
      }
      uStack_b0 = puVar4[4];
      if ((uStack_b0 & 1) != 0) {
        piVar8 = (int *)(uStack_b0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104a98258(uVar10,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar5 = *puVar4;
    uStack_c0 = 0;
    FUN_1004bd7e8(&uStack_b1,uVar5,&uStack_c0);
    uVar11 = uStack_c0;
    if ((uStack_c0 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar7 = (long *)(uVar10 + 8);
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uVar10 != 0) && (lVar9 == 1)) {
      func_0x000104a96f9c(uVar10);
      func_0x000107c60e14();
      uVar11 = uVar10;
    }
    auVar14._8_8_ = uVar5;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_1008ddd50:
  plVar7 = *(long **)((long)ppuVar6 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined8 ***)(param_3 + 0x18) = ppuVar6;
  uVar5 = puVar4[0xf];
  lVar9 = param_3 + 0x20;
  *(code **)(param_3 + 0x28) = FUN_1008de290;
  *(long *)(param_3 + 0x30) = param_3;
  *(undefined8 *)(param_3 + 0x38) = 0;
  uStack_58 = 0;
  FUN_10074775c(uVar5,lVar9,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_10084dad0();
  }
  auVar13._8_8_ = lVar9;
  auVar13._0_8_ = uStack_58;
  return auVar13;
}



/* Entry: 1008ddd0c; end: 1008dddc7;  */

void FUN_1008ddd0c(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_90;
  undefined1 uStack_81;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  ulong uStack_28;
  
  if (*(char *)(param_1 + 0xc5) == '\0') {
    if (((*(byte *)(param_3 + 0x10) & 1) == 0) ||
       ((*(byte *)(**(long **)(param_3 + 8) + 1) >> 3 & 1) == 0)) {
      if (((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) ||
         ((*(byte *)(*(long *)(*(long *)(param_3 + 8) + 0x18) + 1) >> 3 & 1) == 0))
      goto LAB_1008ddd50;
    }
    else {
      func_0x000107c2c290();
    }
    func_0x000107c2c28c();
    func_0x000104bd46a0();
    FUN_1004bdf74(&uStack_28);
    func_0x000107c60bd8();
    lVar8 = param_1[0x11];
    uVar9 = param_1[5];
    if (uVar9 != 0) {
      if ((uVar9 & 1) != 0) {
        piVar5 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_68 = uVar9;
      func_0x000104a97f00(lVar8,&uStack_68,0);
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
    }
    if (*(char *)(param_1 + 6) != '\0') {
      uVar3 = param_1[7];
      *(undefined8 *)(lVar8 + 0x2d8) = param_1[8];
      *(undefined8 *)(lVar8 + 0x2d0) = uVar3;
    }
    if (param_1[0xc] != 0) {
      func_0x0001008dbda0(*(undefined8 *)(lVar8 + 0x10));
    }
    if (param_1[0xd] != 0) {
      FUN_1005a6208(*(undefined8 *)(lVar8 + 0x10));
    }
    if (param_1[0xe] != 0 || param_1[0xf] != 0) {
      func_0x000104a9a3ac(lVar8);
      FUN_1007474b0(lVar8,0x10);
    }
    puVar6 = (undefined8 *)param_1[1];
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = 0;
      puStack_70 = puVar6;
      FUN_1008de004(lVar8 + 0x2e0,*(undefined4 *)(param_1 + 2),&puStack_70);
      puVar6 = puStack_70;
      puStack_70 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
    }
    if (param_1[3] != 0) {
      func_0x000104add5ec(lVar8 + 0x2e0);
    }
    uVar9 = param_1[4];
    if (uVar9 != 0) {
      if ((uVar9 & 1) != 0) {
        piVar5 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_78 = uVar9;
      func_0x000104a97f00(lVar8,&uStack_78,1);
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
      uStack_80 = param_1[4];
      if ((uStack_80 & 1) != 0) {
        piVar5 = (int *)(uStack_80 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104a98258(lVar8,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uStack_90 = 0;
    FUN_1004bd7e8(&uStack_81,*param_1,&uStack_90);
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar4 = (long *)(lVar8 + 8);
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar8 != 0) && (lVar7 == 1)) {
      func_0x000104a96f9c(lVar8);
      func_0x000107c60e14();
    }
    return;
  }
LAB_1008ddd50:
  plVar4 = *(long **)(param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(long *)(param_3 + 0x18) = param_2;
  uVar3 = param_1[0xf];
  *(code **)(param_3 + 0x28) = FUN_1008de290;
  *(long *)(param_3 + 0x30) = param_3;
  *(undefined8 *)(param_3 + 0x38) = 0;
  uStack_28 = 0;
  FUN_10074775c(uVar3,param_3 + 0x20,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008dddc8; end: 1008de003;  */

void FUN_1008dddc8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  lVar7 = param_1[0x11];
  uVar8 = param_1[5];
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar4 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar8;
    func_0x000104a97f00(lVar7,&uStack_38,0);
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0(uVar8);
    }
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar9 = param_1[7];
    *(undefined8 *)(lVar7 + 0x2d8) = param_1[8];
    *(undefined8 *)(lVar7 + 0x2d0) = uVar9;
  }
  if (param_1[0xc] != 0) {
    func_0x0001008dbda0(*(undefined8 *)(lVar7 + 0x10));
  }
  if (param_1[0xd] != 0) {
    FUN_1005a6208(*(undefined8 *)(lVar7 + 0x10));
  }
  if (param_1[0xe] != 0 || param_1[0xf] != 0) {
    func_0x000104a9a3ac(lVar7);
    FUN_1007474b0(lVar7,0x10);
  }
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)0x0) {
    param_1[1] = 0;
    puStack_40 = puVar5;
    FUN_1008de004(lVar7 + 0x2e0,*(undefined4 *)(param_1 + 2),&puStack_40);
    puVar5 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  if (param_1[3] != 0) {
    func_0x000104add5ec(lVar7 + 0x2e0);
  }
  uVar8 = param_1[4];
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar4 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_48 = uVar8;
    func_0x000104a97f00(lVar7,&uStack_48,1);
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0(uVar8);
    }
    uStack_50 = param_1[4];
    if ((uStack_50 & 1) != 0) {
      piVar4 = (int *)(uStack_50 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a98258(lVar7,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  uStack_60 = 0;
  FUN_1004bd7e8(&uStack_51,*param_1,&uStack_60);
  if ((uStack_60 & 1) != 0) {
    FUN_10084dad0();
  }
  plVar1 = (long *)(lVar7 + 8);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar7 != 0) && (lVar6 == 1)) {
    func_0x000104a96f9c(lVar7);
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1008de004; end: 1008de0bf;  */

void FUN_1008de004(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != param_2) {
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,iVar1,param_1 + 0x10);
  }
  if (iVar1 != 4) {
    puStack_40 = (undefined8 *)*param_3;
    *param_3 = 0;
    puStack_38 = puStack_40;
    FUN_1008de0c0(param_1 + 0x18,&puStack_40,&puStack_40);
    puVar2 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  return;
}



/* Entry: 1008de0c0; end: 1008de17b;  */

undefined1  [16] FUN_1008de0c0(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_1008de164;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1008de128;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1008de128:
  plVar1 = (long *)0x30;
  func_0x000107c60e20();
  lVar6 = param_3[1];
  lVar5 = *param_3;
  param_3[1] = 0;
  plVar1[5] = lVar6;
  plVar1[4] = lVar5;
  FUN_1008de17c(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1008de164:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = plVar3;
  return auVar7;
}



/* Entry: 1008de17c; end: 1008de1cf;  */

void FUN_1008de17c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1008de1d0; end: 1008de28f;  */

void FUN_1008de1d0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd7e8(&uStack_21,uVar4,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((*(ulong *)(param_1 + 0x50) & 1) != 0) {
    FUN_10084dad0();
  }
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    FUN_10084dad0();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  func_0x000107c60e14(param_1);
  return;
}



/* Entry: 1008de290; end: 1008dea7f;  */

void FUN_1008de290(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  byte *unaff_x23;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_d9;
  ulong auStack_d8 [4];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)param_2[3];
  puVar21 = (undefined8 *)param_2[1];
  lVar18 = puVar17[1];
  *puVar17 = puVar21[0x14];
  *(byte *)(puVar17 + 0x10e) = *(byte *)(param_2 + 2) >> 7;
  puVar20 = (ulong *)*param_2;
  if (puVar20 != (ulong *)0x0) {
    *puVar20 = 0x10000;
    puVar20[3] = 0;
  }
  puStack_a0 = puVar20;
  if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
    uVar19 = puVar21[0x13];
    if ((uVar19 & 1) != 0) {
      piVar9 = (int *)(uVar19 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = *piVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar8 = puVar17;
    uStack_a8 = uVar19;
    func_0x000104a989e8(lVar18,puVar17,&uStack_a8);
    param_3 = (int)puVar8;
    if ((uVar19 & 1) != 0) {
      FUN_10084dad0(uVar19);
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    if ((*(char *)(lVar18 + 0x628) != '\0') && (*(long *)(lVar18 + 0xce8) != 0)) {
      FUN_1008dea80();
    }
    if (puVar17[0x15] != 0) {
      func_0x000107c2c2b0();
      goto LAB_1008de9c0;
    }
    *puVar20 = (*puVar20 | 1) + 0x10000;
    puVar17[0x15] = puVar20;
    puVar13 = (uint *)*puVar21;
    puVar17[0x14] = puVar13;
    cVar4 = *(char *)(lVar18 + 0x628);
    uVar2 = *puVar13;
    if (cVar4 != '\0') {
      if ((uVar2 >> 0xb & 1) == 0) {
        lVar16 = 0x7fffffffffffffff;
      }
      else {
        lVar16 = *(long *)(puVar13 + 0x60);
      }
      if ((long)puVar17[0xda] <= lVar16) {
        lVar16 = puVar17[0xda];
      }
      puVar17[0xda] = lVar16;
    }
    if (((uVar2 >> 10 & 1) != 0) && (puVar13[0x62] != 0)) {
      *(undefined1 *)((long)puVar17 + 0x16b) = 1;
    }
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      if (cVar4 == '\0') {
        if (*(int *)((long)puVar17 + 0x9c) == 0) {
          func_0x000107c2c2a8();
          goto LAB_1008de9c0;
        }
        if (*(long *)(lVar18 + 0x98) == 0) {
          lVar16 = lVar18;
          puVar8 = puVar17;
          FUN_1008df064();
          param_3 = (int)puVar8;
          if ((int)lVar16 != 0) {
            plVar14 = (long *)puVar17[2];
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (((*(byte *)(param_2 + 2) >> 2 & 1) == 0) || ((*(byte *)(param_2[1] + 0x30) & 1) == 0)) {
          param_3 = 3;
          FUN_1007474b0(lVar18);
        }
      }
      else if (*(long *)(lVar18 + 0x98) == 0) {
        if (*(int *)((long)puVar17 + 0x9c) != 0) {
          func_0x000107c2c2ac();
          goto LAB_1008de9c0;
        }
        puVar8 = puVar17;
        FUN_1008deab8(lVar18);
        param_3 = (int)puVar8;
        FUN_1008deaf0(lVar18);
      }
      else {
        *(uint *)(puVar17 + 0x73) = *(uint *)(puVar17 + 0x73) | 0x1000000;
        *(undefined1 *)(puVar17 + 0x7a) = 0;
        func_0x000104aba878(&uStack_b8,2,"Transport closed",0x10,&puStack_98,1);
        func_0x000104abaa50(&uStack_b0,&uStack_b8,3,0xe);
        puVar8 = puVar17;
        func_0x000104a989e8(lVar18,puVar17,&uStack_b0);
        param_3 = (int)puVar8;
        if ((uStack_b0 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_b8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
    }
    else {
      puVar17[0x14] = 0;
      param_3 = 0xf2353a9;
      func_0x000104aba878(auStack_d8 + 3,2,
                          "Attempt to send initial metadata after stream was closed",0x38,
                          &puStack_98,1,puVar17 + 0x2f);
      FUN_1008df0bc(lVar18);
      if ((auStack_d8[3] & 1) != 0) {
        FUN_10084dad0();
      }
    }
    if ((long *)puVar21[2] != (long *)0x0) {
      plVar14 = (long *)(lVar18 + 0x18);
      if (*(char *)(lVar18 + 0x2f) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      *(long *)puVar21[2] = (long)plVar14;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 2 & 1) != 0) {
    *(int *)(lVar18 + 0xcf0) = *(int *)(lVar18 + 0xcf0) + 1;
    *puVar20 = *puVar20 | 1;
    plVar14 = (long *)*param_2;
    *plVar14 = *plVar14 + 0x10000;
    puVar17[0x1c] = plVar14;
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      uVar2 = *(uint *)(puVar21 + 6);
      unaff_x23 = (byte *)(puVar17 + 0xe5);
      param_3 = 5;
      pbVar7 = unaff_x23;
      func_0x0001008e01c0();
      *pbVar7 = (byte)(uVar2 >> 0x1f);
      lVar16 = *(long *)(puVar21[5] + 0x20);
      uVar12 = (uint)lVar16;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      *(uint *)(pbVar7 + 1) = uVar12 >> 0x10 | uVar12 << 0x10;
      lVar10 = puVar17[0x1a];
      lVar16 = lVar10 + puVar17[0xe9] + lVar16;
      puVar17[0x19] = lVar16;
      bVar5 = (uVar2 & 1) != 0;
      if (bVar5) {
        lVar16 = lVar16 - (ulong)*(uint *)(lVar18 + 0x758);
        puVar17[0x19] = lVar16;
      }
      *(bool *)((long)puVar17 + 0x16c) = bVar5;
      lVar15 = *(long *)(puVar21[5] + 0x10);
      if (lVar15 != 0) {
        plVar14 = *(long **)(puVar21[5] + 8);
        plVar1 = plVar14 + lVar15 * 4;
        do {
          plVar11 = (long *)*plVar14;
          if ((long *)0x1 < plVar11) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lStack_88 = plVar14[1];
          param_1 = *plVar14;
          lStack_78 = plVar14[3];
          lStack_80 = plVar14[2];
          param_3 = (int)&lStack_90;
          lStack_90 = param_1;
          FUN_1005a70c4(unaff_x23);
          plVar14 = plVar14 + 4;
        } while (plVar14 != plVar1);
        lVar16 = puVar17[0x19];
        lVar10 = puVar17[0x1a];
      }
      if (lVar10 < lVar16) {
        plVar14 = *(long **)(lVar18 + 0xac8);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x18;
          FUN_100460200();
        }
        else {
          *(long *)(lVar18 + 0xac8) = plVar14[2];
        }
        *plVar14 = lVar16;
        plVar14[1] = puVar17[0x1c];
        puVar17[0x1c] = 0;
        lVar16 = 0x850;
        if ((uVar2 & 4) != 0) {
          lVar16 = 0x858;
        }
        plVar14[2] = *(long *)((long)puVar17 + lVar16);
        *(long **)((long)puVar17 + lVar16) = plVar14;
      }
      else {
        auStack_d8[1] = 0;
        FUN_1008df0bc(lVar18);
      }
      if ((*(int *)((long)puVar17 + 0x9c) != 0) &&
         ((*(char *)((long)puVar17 + 0x16c) == '\0' ||
          ((ulong)*(uint *)(lVar18 + 0x758) < (ulong)puVar17[0xe9])))) {
        if ((*(long *)(lVar18 + 0x98) == 0) &&
           (lVar16 = lVar18, FUN_1008df064(lVar18,puVar17), (int)lVar16 != 0)) {
          plVar14 = (long *)puVar17[2];
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        param_3 = 2;
        FUN_1007474b0(lVar18);
      }
    }
    else {
      *(undefined1 *)(param_2[1] + 0x34) = 1;
      auStack_d8[2] = 0;
      FUN_1008df0bc(lVar18);
    }
  }
  if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
    if (puVar17[0x18] != 0) {
      func_0x000107c2c2a4();
      goto LAB_1008de9c0;
    }
    *puVar20 = (*puVar20 | 1) + 0x10000;
    puVar17[0x18] = puVar20;
    param_1 = puVar21[3];
    puVar17[0x17] = puVar21[4];
    puVar17[0x16] = param_1;
    *(undefined1 *)((long)puVar17 + 0x16c) = 0;
    if (((*(byte *)(param_1 + 1) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x188) != 0)) {
      *(undefined1 *)((long)puVar17 + 0x16b) = 1;
    }
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      if (*(int *)((long)puVar17 + 0x9c) != 0) {
        if ((*(long *)(lVar18 + 0x98) == 0) &&
           (lVar16 = lVar18, FUN_1008df064(lVar18,puVar17), (int)lVar16 != 0)) {
          plVar14 = (long *)puVar17[2];
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        param_3 = 4;
        FUN_1007474b0(lVar18);
      }
    }
    else {
      puVar17[0x16] = 0;
      puVar17[0x17] = 0;
      if ((**(int **)(param_2[1] + 0x18) == 0) &&
         ((lVar16 = *(long *)(*(int **)(param_2[1] + 0x18) + 0x7e), lVar16 == 0 ||
          (*(long *)(lVar16 + 8) == 0)))) {
        auStack_d8[0] = 0;
        unaff_x23 = (byte *)0x1;
      }
      else {
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        param_3 = 0xf235410;
        func_0x000104ab5920(auStack_d8,2,"Attempt to send trailing metadata after stream was closed"
                            ,0x39,&uStack_d9,&uStack_f8);
        unaff_x23 = (byte *)0x0;
      }
      FUN_1008df0bc(lVar18);
      if ((int)unaff_x23 == 0) {
        if ((auStack_d8[0] & 1) != 0) {
          FUN_10084dad0();
        }
        puStack_98 = &uStack_f8;
        func_0x000100482b64(&puStack_98);
      }
      else if ((auStack_d8[0] & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  bVar3 = *(byte *)(param_2 + 2);
  if ((bVar3 >> 3 & 1) != 0) {
    if (puVar17[0x1e] != 0) {
      func_0x000107c2c2a0();
      goto LAB_1008de9c0;
    }
    puVar17[0x1d] = puVar21[7];
    param_1 = puVar21[9];
    puVar17[0x1f] = puVar21[10];
    puVar17[0x1e] = param_1;
    if ((long *)puVar21[0xb] != (long *)0x0) {
      plVar14 = (long *)(lVar18 + 0x18);
      if (*(char *)(lVar18 + 0x2f) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      *(long *)puVar21[0xb] = (long)plVar14;
    }
    puVar8 = puVar17;
    FUN_1008e2ad4(lVar18);
    param_3 = (int)puVar8;
    bVar3 = *(byte *)(param_2 + 2);
  }
  if ((bVar3 >> 4 & 1) != 0) {
    if (puVar17[0x23] != 0) {
      func_0x000107c2c29c();
      goto LAB_1008de9c0;
    }
    puVar17[0x23] = puVar21[0xf];
    lVar16 = puVar21[0xc];
    puVar17[0x20] = lVar16;
    FUN_100614b50(lVar16);
    func_0x0001004b800c(lVar16);
    *(undefined1 *)(lVar16 + 0x128) = 1;
    param_1 = puVar21[0xd];
    puVar17[0x22] = puVar21[0xe];
    puVar17[0x21] = param_1;
    puVar8 = puVar17;
    FUN_1008e2dcc(lVar18);
    param_3 = (int)puVar8;
    bVar3 = *(byte *)(param_2 + 2);
  }
  if ((bVar3 >> 5 & 1) == 0) {
LAB_1008de914:
    if (puVar20 != (ulong *)0x0) {
      FUN_1008df0bc(lVar18);
    }
    plVar14 = (long *)puVar17[2];
    do {
      lVar18 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 + -1 == 0) {
      FUN_100836ca4();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      func_0x000107c60e78();
      if (param_3 != 0) {
        func_0x000104bd46a0();
        if (((ulong)unaff_x23 & 1) == 0) {
          FUN_1004bdf74(auStack_d8);
          puStack_98 = &uStack_f8;
          func_0x000100482b64(&puStack_98);
        }
        else {
          FUN_1004bdf74(auStack_d8);
        }
      }
      func_0x000107c60bd8();
      plVar1 = plVar14 + 7;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      func_0x000100467750();
      plVar14[0xd] = param_1;
      return;
    }
    return;
  }
  if (puVar17[0x26] == 0) {
    puVar17[0x26] = puVar21[0x11];
    if (puVar17[0x25] == 0) {
      puVar17[0x25] = puVar21[0x12];
      puVar17[0x24] = puVar21[0x10];
      *(undefined1 *)(puVar17 + 0x31) = 1;
      puVar21 = puVar17;
      FUN_1008e2dcc(lVar18);
      param_3 = (int)puVar21;
      goto LAB_1008de914;
    }
    func_0x000107c2c294();
  }
  else {
    func_0x000107c2c298();
  }
LAB_1008de9c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008de9c4);
  (*pcVar6)();
}



/* Entry: 1008dea80; end: 1008deab7;  */

void FUN_1008dea80(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_2 + 0x38);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100467750();
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 1008deab8; end: 1008deaef;  */

void FUN_1008deab8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 0x98) >> 4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(long *)(param_2 + 0x90) = lVar2;
    plVar1 = (long *)(param_1 + 0xe8);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x88);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0xf0) = param_2;
    *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 0x10;
  }
  return;
}



/* Entry: 1008deaf0; end: 1008ded93;  */

ulong FUN_1008deaf0(ulong param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  uVar8 = *(ulong *)(param_1 + 0x760);
  if (uVar8 == 0) {
    if (-1 < *(int *)(param_1 + 0x7e4)) {
      do {
        uVar8 = param_1 + 0xf8;
        FUN_1008ded94();
        if ((*(uint *)(param_1 + 0x77c) <= uVar8) ||
           (uVar8 = param_1, func_0x0001008deda0(param_1,&lStack_60), (int)uVar8 == 0)) {
          if (*(uint *)(param_1 + 0x7e4) < 0x7fffffff) {
            return uVar8;
          }
          break;
        }
        if (*(int *)(lStack_60 + 0x9c) != 0) {
          func_0x000107c2c288();
          func_0x000104bd46a0();
          func_0x000104bd46a0();
          FUN_1004bdf74(&uStack_68);
          func_0x000107c60bd8();
          return *(long *)(uVar8 + 0x10) - *(long *)(uVar8 + 0x18);
        }
        iVar1 = *(int *)(param_1 + 0x7e4);
        *(int *)(lStack_60 + 0x9c) = iVar1;
        *(uint *)(param_1 + 0x7e4) = iVar1 + 2U;
        if (0x7ffffffe < iVar1 + 2U) {
          func_0x00010047ad8c(&puStack_58,0xe,"Transport Stream IDs exhausted",0x1e);
          FUN_1004c0918(param_1 + 0x2e0,3,&puStack_58,"no_more_stream_ids");
          if (((ulong)puStack_58 & 1) != 0) {
            FUN_10084dad0();
          }
          iVar1 = *(int *)(lStack_60 + 0x9c);
        }
        FUN_1008deda8(param_1 + 0xf8,iVar1);
        FUN_1008dee98(param_1);
        lVar4 = lStack_60;
        if ((*(long *)(param_1 + 0x98) == 0) &&
           (uVar8 = param_1, FUN_1008df064(param_1,lStack_60), (int)uVar8 != 0)) {
          plVar7 = *(long **)(lVar4 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_1007474b0(param_1,1);
      } while (-1 < *(int *)(param_1 + 0x7e4));
    }
    uVar5 = param_1;
    func_0x0001008deda0(param_1,&lStack_60);
    if ((int)uVar5 != 0) {
      do {
        lVar4 = lStack_60;
        *(uint *)(lStack_60 + 0x398) = *(uint *)(lStack_60 + 0x398) | 0x1000000;
        *(undefined1 *)(lStack_60 + 0x3d0) = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        func_0x000104ab5920(&uStack_78,2,"Stream IDs exhausted",0x14,&uStack_79,&uStack_98);
        func_0x000104abaa50(&uStack_70,&uStack_78,3,0xe);
        func_0x000104a989e8(param_1,lVar4,&uStack_70);
        if ((uStack_70 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_78 & 1) != 0) {
          FUN_10084dad0();
        }
        puStack_58 = &uStack_98;
        func_0x000100482b64(&puStack_58);
        uVar5 = param_1;
        func_0x0001008deda0(param_1,&lStack_60);
      } while ((uVar5 & 1) != 0);
    }
  }
  else {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_68 = uVar8;
    func_0x000104a97b40(param_1,&uStack_68);
    uVar5 = param_1;
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0(uVar8);
      uVar5 = uVar8;
    }
  }
  return uVar5;
}



/* Entry: 1008ded94; end: 1008deda7;  */

long FUN_1008ded94(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
}



/* Entry: 1008deda8; end: 1008dee97;  */

void FUN_1008deda8(undefined8 *param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long *plStack_98;
  
  plVar7 = (long *)param_1[1];
  uVar9 = param_1[2];
  puVar12 = (undefined4 *)*param_1;
  if ((uVar9 == 0) || ((uint)puVar12[uVar9 - 1] < param_2)) {
    if (uVar9 == param_1[4]) {
      if (uVar9 >> 2 < (ulong)param_1[3]) {
        plVar14 = plVar7;
        uVar5 = uVar9;
        puVar1 = puVar12;
        uVar9 = 0;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          lVar11 = *plVar14;
          if (lVar11 != 0) {
            puVar12[uVar9] = *puVar1;
            plVar7[uVar9] = lVar11;
            uVar9 = uVar9 + 1;
          }
          puVar1 = puVar1 + 1;
          plVar14 = plVar14 + 1;
        }
        param_1[3] = 0;
      }
      else {
        param_1[4] = uVar9 << 1;
        FUN_1004689e4(puVar12,uVar9 << 3);
        *param_1 = puVar12;
        FUN_1004689e4(plVar7,uVar9 << 4);
        param_1[1] = plVar7;
      }
    }
    puVar12[uVar9] = param_2;
    plVar7[uVar9] = param_3;
    param_1[2] = uVar9 + 1;
    return;
  }
  func_0x000107c2c2dc();
  if (*(char *)((long)param_1 + 0xb51) == '\0') {
    *(undefined1 *)((long)param_1 + 0xb51) = 1;
    plVar7 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = param_1[6];
    FUN_100460448(lVar11 + 0x40);
    if (*(char *)(lVar11 + 0x80) != '\0') {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                    ,0x13a,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008deffc);
      (*pcVar6)();
    }
    lVar13 = *(long *)(lVar11 + 0x18);
    plVar7 = (long *)0x18;
    func_0x000107c60e20();
    uVar2 = *(undefined8 *)(lVar13 + 0x50);
    lVar10 = *(long *)(lVar13 + 0x58);
    if (lVar10 != 0) {
      plVar14 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar14 = plVar7 + 1;
    *plVar14 = 1;
    *plVar7 = (long)&PTR_SUB_1107c5d60;
    puVar8 = (undefined8 *)0x20;
    func_0x000107c60e20();
    *puVar8 = &PTR_DAT_1107c4220;
    puVar8[1] = uVar2;
    puVar8[2] = lVar10;
    puVar8[3] = param_1;
    plVar7[2] = (long)puVar8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_98 = plVar7;
    FUN_1004bc2ec(lVar13 + 0x50,&plStack_98);
    if (plStack_98 != (long *)0x0) {
      plVar14 = plStack_98 + 1;
      do {
        lVar10 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plStack_98 + 0x10))();
      }
    }
    FUN_1004bc3ac(lVar11 + 0xa0,plVar7);
    func_0x000100466b80(lVar11 + 0x40);
  }
  return;
}



/* Entry: 1008dee98; end: 1008df063;  */

void FUN_1008dee98(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plStack_58;
  
  if (*(char *)(param_1 + 0xb51) == '\0') {
    *(undefined1 *)(param_1 + 0xb51) = 1;
    plVar5 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(param_1 + 0x30);
    FUN_100460448(lVar8 + 0x40);
    if (*(char *)(lVar8 + 0x80) != '\0') {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                    ,0x13a,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008deffc);
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar8 + 0x18);
    plVar5 = (long *)0x18;
    func_0x000107c60e20();
    uVar1 = *(undefined8 *)(lVar9 + 0x50);
    lVar7 = *(long *)(lVar9 + 0x58);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = plVar5 + 1;
    *plVar10 = 1;
    *plVar5 = (long)&PTR_SUB_1107c5d60;
    puVar6 = (undefined8 *)0x20;
    func_0x000107c60e20();
    *puVar6 = &PTR_DAT_1107c4220;
    puVar6[1] = uVar1;
    puVar6[2] = lVar7;
    puVar6[3] = param_1;
    plVar5[2] = (long)puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar5;
    FUN_1004bc2ec(lVar9 + 0x50,&plStack_58);
    if (plStack_58 != (long *)0x0) {
      plVar10 = plStack_58 + 1;
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
    FUN_1004bc3ac(lVar8 + 0xa0,plVar5);
    func_0x000100466b80(lVar8 + 0x40);
  }
  return;
}



/* Entry: 1008df064; end: 1008df0bb;  */

undefined8 * FUN_1008df064(undefined8 *param_1,long param_2,undefined8 *param_3,ulong *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (*(int *)(param_2 + 0x9c) != 0) {
    bVar2 = *(byte *)(param_2 + 0x98);
    if ((bVar2 & 1) == 0) {
      lVar10 = param_1[0x16];
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(long *)(param_2 + 0x50) = lVar10;
      plVar1 = param_1 + 0x15;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 0x48);
      }
      *plVar1 = param_2;
      param_1[0x16] = param_2;
      *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 1;
    }
    return (undefined8 *)(ulong)((bVar2 & 1) == 0);
  }
  func_0x000107c2c2d4();
  puVar11 = (ulong *)*param_3;
  *param_3 = 0;
  if (puVar11 == (ulong *)0x0) {
    return param_1;
  }
  uVar7 = *puVar11 - 0x10000;
  *puVar11 = uVar7;
  puVar6 = param_1;
  if (*param_4 == 0) goto LAB_1008df2cc;
  func_0x0001004bd8dc(&puStack_50,puVar11[3]);
  if (puStack_50 == (undefined8 *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    func_0x000104ab5920(&puStack_58,2,"Error in HTTP transport completing operation",0x2c,&uStack_59
                        ,&uStack_78);
    puVar6 = puStack_50;
    if (puStack_58 == puStack_50) {
LAB_1008df158:
      if (((ulong)puVar6 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      puStack_50 = puStack_58;
      puStack_58 = (undefined8 *)0x36;
      if (((ulong)puVar6 & 1) != 0) {
        FUN_10084dad0();
        puVar6 = puStack_58;
        goto LAB_1008df158;
      }
    }
    puStack_48 = &uStack_78;
    func_0x000100482b64(&puStack_48);
    puStack_80 = puStack_50;
    if (((ulong)puStack_50 & 1) != 0) {
      piVar8 = (int *)((long)puStack_50 + -1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((char)*(byte *)((long)param_1 + 0x2f) < '\0') {
      puVar6 = (undefined8 *)param_1[3];
      uVar7 = param_1[4];
    }
    else {
      puVar6 = param_1 + 3;
      uVar7 = (ulong)*(byte *)((long)param_1 + 0x2f);
    }
    FUN_10084caf8(&puStack_48,&puStack_80,4,puVar6,uVar7);
    puVar6 = puStack_50;
    if (puStack_48 == puStack_50) {
LAB_1008df1dc:
      if (((ulong)puVar6 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      puStack_50 = puStack_48;
      puStack_48 = (undefined8 *)0x36;
      if (((ulong)puVar6 & 1) != 0) {
        FUN_10084dad0();
        puVar6 = puStack_48;
        goto LAB_1008df1dc;
      }
    }
    if (((ulong)puStack_80 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  puStack_88 = puStack_50;
  if (((ulong)puStack_50 & 1) != 0) {
    piVar8 = (int *)((long)puStack_50 + -1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = *param_4;
  if ((uStack_90 & 1) != 0) {
    piVar8 = (int *)(uStack_90 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1008306c4(&puStack_48,&puStack_88,&uStack_90);
  puVar6 = puStack_50;
  if (puStack_48 == puStack_50) {
LAB_1008df264:
    if (((ulong)puVar6 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    puStack_50 = puStack_48;
    puStack_48 = (undefined8 *)0x36;
    if (((ulong)puVar6 & 1) != 0) {
      FUN_10084dad0();
      puVar6 = puStack_48;
      goto LAB_1008df264;
    }
  }
  if ((uStack_90 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)puStack_88 & 1) != 0) {
    FUN_10084dad0();
  }
  puStack_98 = puStack_50;
  if (((ulong)puStack_50 & 1) != 0) {
    piVar8 = (int *)((long)puStack_50 + -1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuVar5 = &puStack_98;
  func_0x0001004bd890();
  puVar11[3] = (ulong)ppuVar5;
  if (((ulong)puStack_98 & 1) != 0) {
    FUN_10084dad0();
  }
  puVar6 = puStack_50;
  if (((ulong)puStack_50 & 1) != 0) {
    FUN_10084dad0();
  }
  uVar7 = *puVar11;
LAB_1008df2cc:
  if (uVar7 >> 0x10 == 0) {
    if (((uVar7 & 1) == 0) || (*(int *)(param_1 + 0x12) == 0)) {
      func_0x0001004bd8dc(&puStack_48,puVar11[3]);
      puVar11[3] = 0;
      puStack_a0 = puStack_48;
      if (((ulong)puStack_48 & 1) != 0) {
        piVar8 = (int *)((long)puStack_48 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = *piVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_1004bd7e8(&puStack_50,puVar11,&puStack_a0);
      if (((ulong)puStack_a0 & 1) != 0) {
        FUN_10084dad0();
      }
      puVar6 = puStack_48;
      if (((ulong)puStack_48 & 1) != 0) {
        FUN_10084dad0();
        puVar6 = puStack_48;
      }
    }
    else {
      *puVar11 = 0;
      if (param_1[0x168] == 0) {
        puVar9 = param_1 + 0x168;
      }
      else {
        puVar9 = (undefined8 *)param_1[0x169];
      }
      *puVar9 = puVar11;
      param_1[0x169] = puVar11;
    }
  }
  return puVar6;
}



/* Entry: 1008df0bc; end: 1008df42f;  */

void FUN_1008df0bc(long param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar8 = (ulong *)*param_3;
  *param_3 = 0;
  if (puVar8 == (ulong *)0x0) {
    return;
  }
  uVar5 = *puVar8 - 0x10000;
  *puVar8 = uVar5;
  if (*param_4 == 0) goto LAB_1008df2cc;
  func_0x0001004bd8dc(&puStack_40,puVar8[3]);
  if (puStack_40 == (undefined8 *)0x0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    func_0x000104ab5920(&puStack_48,2,"Error in HTTP transport completing operation",0x2c,&uStack_49
                        ,&uStack_68);
    puVar7 = puStack_40;
    if (puStack_48 == puStack_40) {
LAB_1008df158:
      if (((ulong)puVar7 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      puStack_40 = puStack_48;
      puStack_48 = (undefined8 *)0x36;
      if (((ulong)puVar7 & 1) != 0) {
        FUN_10084dad0();
        puVar7 = puStack_48;
        goto LAB_1008df158;
      }
    }
    puStack_38 = &uStack_68;
    func_0x000100482b64(&puStack_38);
    puStack_70 = puStack_40;
    if (((ulong)puStack_40 & 1) != 0) {
      piVar6 = (int *)((long)puStack_40 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if ((char)*(byte *)(param_1 + 0x2f) < '\0') {
      lVar4 = *(long *)(param_1 + 0x18);
      uVar5 = *(ulong *)(param_1 + 0x20);
    }
    else {
      lVar4 = param_1 + 0x18;
      uVar5 = (ulong)*(byte *)(param_1 + 0x2f);
    }
    FUN_10084caf8(&puStack_38,&puStack_70,4,lVar4,uVar5);
    puVar7 = puStack_40;
    if (puStack_38 == puStack_40) {
LAB_1008df1dc:
      if (((ulong)puVar7 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      puStack_40 = puStack_38;
      puStack_38 = (undefined8 *)0x36;
      if (((ulong)puVar7 & 1) != 0) {
        FUN_10084dad0();
        puVar7 = puStack_38;
        goto LAB_1008df1dc;
      }
    }
    if (((ulong)puStack_70 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  puStack_78 = puStack_40;
  if (((ulong)puStack_40 & 1) != 0) {
    piVar6 = (int *)((long)puStack_40 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_80 = *param_4;
  if ((uStack_80 & 1) != 0) {
    piVar6 = (int *)(uStack_80 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1008306c4(&puStack_38,&puStack_78,&uStack_80);
  puVar7 = puStack_40;
  if (puStack_38 == puStack_40) {
LAB_1008df264:
    if (((ulong)puVar7 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    puStack_40 = puStack_38;
    puStack_38 = (undefined8 *)0x36;
    if (((ulong)puVar7 & 1) != 0) {
      FUN_10084dad0();
      puVar7 = puStack_38;
      goto LAB_1008df264;
    }
  }
  if ((uStack_80 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)puStack_78 & 1) != 0) {
    FUN_10084dad0();
  }
  puStack_88 = puStack_40;
  if (((ulong)puStack_40 & 1) != 0) {
    piVar6 = (int *)((long)puStack_40 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar3 = &puStack_88;
  func_0x0001004bd890();
  puVar8[3] = (ulong)ppuVar3;
  if (((ulong)puStack_88 & 1) != 0) {
    FUN_10084dad0();
  }
  if (((ulong)puStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  uVar5 = *puVar8;
LAB_1008df2cc:
  if (uVar5 >> 0x10 == 0) {
    if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
      func_0x0001004bd8dc(&puStack_38,puVar8[3]);
      puVar8[3] = 0;
      puStack_90 = puStack_38;
      if (((ulong)puStack_38 & 1) != 0) {
        piVar6 = (int *)((long)puStack_38 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_1004bd7e8(&puStack_40,puVar8,&puStack_90);
      if (((ulong)puStack_90 & 1) != 0) {
        FUN_10084dad0();
      }
      if (((ulong)puStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *puVar8 = 0;
      if (*(long *)(param_1 + 0xb40) == 0) {
        puVar7 = (undefined8 *)(param_1 + 0xb40);
      }
      else {
        puVar7 = *(undefined8 **)(param_1 + 0xb48);
      }
      *puVar7 = puVar8;
      *(ulong **)(param_1 + 0xb48) = puVar8;
    }
  }
  return;
}



/* Entry: 1008df430; end: 1008df48f;  */

void FUN_1008df430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [56];
  
  FUN_1008df490(auStack_58,param_2,param_1);
  FUN_1008df7a8(param_3,auStack_58);
  func_0x0001008e1910(auStack_58,1);
  return;
}



/* Entry: 1008df490; end: 1008df493;  */

uint * FUN_1008df490(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  ulong uStack_138;
  uint *puStack_130;
  uint *puStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [32];
  long lStack_e8;
  uint *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  long lStack_78;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  uint auStack_48 [2];
  undefined1 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 5);
  *(char *)((long)param_1 + 10) = (char)param_2[1];
  param_1[3] = *param_2;
  *(uint **)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = param_3;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  uStack_40 = 9;
  puVar6 = auStack_48;
  FUN_1005a7ec4(param_4,puVar6);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x20);
  *(uint **)(param_1 + 10) = param_4;
  *(undefined8 *)(param_1 + 0xc) = uVar11;
  cVar2 = *(char *)(*(long *)(param_1 + 8) + 4);
  *(undefined1 *)(*(long *)(param_1 + 8) + 4) = 0;
  if (cVar2 != '\0') {
    param_4 = param_1;
    func_0x000104a9e2a4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  uStack_58 = 0x1008df558;
  uVar10 = *param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((uVar10 & 1) == 0) {
    puVar5 = param_4;
    if ((uVar10 >> 1 & 1) == 0) goto LAB_1008df578;
LAB_1008df600:
    puVar5 = puVar6;
    FUN_1008e074c(puVar6,param_4 + 0x6c);
    uVar10 = *param_4;
    if ((uVar10 >> 2 & 1) != 0) goto LAB_1008df614;
LAB_1008df57c:
    if ((uVar10 >> 3 & 1) == 0) goto LAB_1008df580;
LAB_1008df628:
    puVar5 = puVar6;
    func_0x000104a9e6c4(puVar6,param_4[0x69]);
    uVar10 = *param_4;
    if ((uVar10 >> 4 & 1) != 0) goto LAB_1008df63c;
LAB_1008df584:
    if ((uVar10 >> 5 & 1) == 0) goto LAB_1008df588;
LAB_1008df650:
    puVar5 = puVar6;
    FUN_1008e09e4(puVar6,param_4[0x67]);
    uVar10 = *param_4;
    if ((uVar10 >> 6 & 1) != 0) goto LAB_1008df664;
LAB_1008df58c:
    if ((uVar10 >> 7 & 1) == 0) goto LAB_1008df590;
LAB_1008df678:
    puVar5 = puVar6;
    func_0x000104a9eeb0(puVar6,param_4[0x65]);
    uVar10 = *param_4;
    if ((uVar10 >> 8 & 1) != 0) goto LAB_1008df68c;
LAB_1008df594:
    if ((uVar10 >> 9 & 1) == 0) goto LAB_1008df598;
LAB_1008df6a0:
    puVar5 = puVar6;
    FUN_1008e0d50(puVar6,(char)param_4[99]);
    uVar10 = *param_4;
    if ((uVar10 >> 10 & 1) != 0) goto LAB_1008df6b4;
LAB_1008df59c:
    if ((uVar10 >> 0xb & 1) == 0) goto LAB_1008df5a0;
LAB_1008df6c8:
    puVar5 = puVar6;
    func_0x000104a9e84c(puVar6,*(undefined8 *)(param_4 + 0x60));
    uVar10 = *param_4;
    if ((uVar10 >> 0xc & 1) != 0) goto LAB_1008df6dc;
LAB_1008df5a4:
    if ((uVar10 >> 0xd & 1) == 0) goto LAB_1008df5a8;
LAB_1008df6f0:
    puVar5 = puVar6;
    func_0x000104aa80c0(puVar6,param_4 + 0x5c);
    uVar10 = *param_4;
    if ((uVar10 >> 0xe & 1) != 0) goto LAB_1008df704;
LAB_1008df5ac:
    if ((uVar10 >> 0xf & 1) == 0) goto LAB_1008df5b0;
LAB_1008df718:
    puVar5 = puVar6;
    func_0x000104aa8228(puVar6,param_4 + 0x4c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x10 & 1) != 0) goto LAB_1008df72c;
LAB_1008df5b4:
    if ((uVar10 >> 0x11 & 1) == 0) goto LAB_1008df5b8;
LAB_1008df740:
    puVar5 = puVar6;
    func_0x000104aa8460(puVar6,param_4 + 0x3c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x12 & 1) != 0) goto LAB_1008df754;
LAB_1008df5bc:
    if ((uVar10 >> 0x13 & 1) == 0) goto LAB_1008df5c0;
LAB_1008df768:
    puVar5 = puVar6;
    func_0x000104a9e350(puVar6,param_4 + 0x2c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x14 & 1) != 0) goto LAB_1008df77c;
LAB_1008df5c4:
    if ((uVar10 >> 0x15 & 1) == 0) goto LAB_1008df5c8;
LAB_1008df790:
    func_0x000107c60ebc();
  }
  else {
    puVar5 = puVar6;
    FUN_1008df850(puVar6,param_4 + 0x74);
    uVar10 = *param_4;
    if ((uVar10 >> 1 & 1) != 0) goto LAB_1008df600;
LAB_1008df578:
    if ((uVar10 >> 2 & 1) == 0) goto LAB_1008df57c;
LAB_1008df614:
    puVar5 = puVar6;
    FUN_1008e0808(puVar6,param_4[0x6a]);
    uVar10 = *param_4;
    if ((uVar10 >> 3 & 1) != 0) goto LAB_1008df628;
LAB_1008df580:
    if ((uVar10 >> 4 & 1) == 0) goto LAB_1008df584;
LAB_1008df63c:
    puVar5 = puVar6;
    FUN_1008e097c(puVar6,param_4[0x68]);
    uVar10 = *param_4;
    if ((uVar10 >> 5 & 1) != 0) goto LAB_1008df650;
LAB_1008df588:
    if ((uVar10 >> 6 & 1) == 0) goto LAB_1008df58c;
LAB_1008df664:
    puVar5 = puVar6;
    FUN_1008e0c78(puVar6,(char)param_4[0x66]);
    uVar10 = *param_4;
    if ((uVar10 >> 7 & 1) != 0) goto LAB_1008df678;
LAB_1008df590:
    if ((uVar10 >> 8 & 1) == 0) goto LAB_1008df594;
LAB_1008df68c:
    puVar5 = puVar6;
    func_0x000104aa7df0(puVar6,param_4 + 100);
    uVar10 = *param_4;
    if ((uVar10 >> 9 & 1) != 0) goto LAB_1008df6a0;
LAB_1008df598:
    if ((uVar10 >> 10 & 1) == 0) goto LAB_1008df59c;
LAB_1008df6b4:
    puVar5 = puVar6;
    func_0x000104a9ebec(puVar6,param_4[0x62]);
    uVar10 = *param_4;
    if ((uVar10 >> 0xb & 1) != 0) goto LAB_1008df6c8;
LAB_1008df5a0:
    if ((uVar10 >> 0xc & 1) == 0) goto LAB_1008df5a4;
LAB_1008df6dc:
    puVar5 = puVar6;
    func_0x000104aa7f58(puVar6,param_4 + 0x5e);
    uVar10 = *param_4;
    if ((uVar10 >> 0xd & 1) != 0) goto LAB_1008df6f0;
LAB_1008df5a8:
    if ((uVar10 >> 0xe & 1) == 0) goto LAB_1008df5ac;
LAB_1008df704:
    puVar5 = puVar6;
    FUN_1008e0f7c(puVar6,param_4 + 0x54);
    uVar10 = *param_4;
    if ((uVar10 >> 0xf & 1) != 0) goto LAB_1008df718;
LAB_1008df5b0:
    if ((uVar10 >> 0x10 & 1) == 0) goto LAB_1008df5b4;
LAB_1008df72c:
    puVar5 = puVar6;
    func_0x000104aa834c(puVar6,param_4 + 0x44);
    uVar10 = *param_4;
    if ((uVar10 >> 0x11 & 1) != 0) goto LAB_1008df740;
LAB_1008df5b8:
    if ((uVar10 >> 0x12 & 1) == 0) goto LAB_1008df5bc;
LAB_1008df754:
    puVar5 = puVar6;
    func_0x000104aa8574(puVar6,param_4 + 0x34);
    uVar10 = *param_4;
    if ((uVar10 >> 0x13 & 1) != 0) goto LAB_1008df768;
LAB_1008df5c0:
    if ((uVar10 >> 0x14 & 1) == 0) goto LAB_1008df5c4;
LAB_1008df77c:
    puVar5 = puVar6;
    func_0x000104a9e5e8(puVar6,param_4 + 0x24);
    uVar10 = *param_4;
    if ((uVar10 >> 0x15 & 1) != 0) goto LAB_1008df790;
LAB_1008df5c8:
    if ((uVar10 >> 0x16 & 1) != 0) {
      puVar5 = param_4 + 0x18;
      func_0x000104aa8688(puVar5,puVar6);
      uVar10 = *param_4;
    }
    if ((uVar10 >> 0x17 & 1) == 0) {
      return puVar5;
    }
  }
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = (uint *)0x1;
  uStack_90 = 8;
  pcStack_88 = "lb-token";
  plVar12 = *(long **)(param_4 + 0x10);
  if ((long *)0x1 < plVar12) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = *(undefined8 *)(param_4 + 0x12);
  plStack_c0 = *(long **)(param_4 + 0x10);
  uStack_a8 = *(undefined8 *)(param_4 + 0x16);
  uStack_b0 = *(undefined8 *)(param_4 + 0x14);
  ppuVar9 = &puStack_98;
  FUN_1008e1568(puVar6,ppuVar9,&plStack_c0);
  iVar8 = (int)ppuVar9;
  if ((long *)0x1 < plStack_c0) {
    do {
      lVar13 = *plStack_c0;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar4) {
        *plStack_c0 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  puVar6 = puStack_98;
  if ((uint *)0x1 < puStack_98) {
    do {
      lVar13 = *(long *)puStack_98;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_98,0x10);
      if (bVar4) {
        *(long *)puStack_98 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(puStack_98 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_c0);
    FUN_1004b6d90(&puStack_98);
  }
  puVar5 = puVar6;
  __Unwind_Resume();
  puStack_c8 = &SUB_104aa89c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(puVar5 + 4);
  *(undefined8 *)(lVar13 + 0xb0) = 0;
  if (*(undefined1 **)(lVar13 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar13 + 0xb8) = 1;
    *(undefined8 *)(lVar13 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar13 + 0x6f1) = 1;
  *(undefined1 *)(lVar13 + 0x16e) = 1;
  lVar15 = *(long *)(puVar5 + 2);
  puStack_d8 = puVar6;
  ppuStack_d0 = &puStack_60;
  if (*(char *)(lVar15 + 0x628) == '\0') {
    if (*(char *)(lVar13 + 0x169) == '\0') {
      func_0x000104a9d33c(auStack_108,*(undefined4 *)(lVar13 + 0x9c),0,lVar13 + 0x150);
      FUN_1005a70c4(lVar15 + 0x310,auStack_108);
      lVar15 = *(long *)(puVar5 + 2);
      lVar13 = *(long *)(puVar5 + 4);
      bVar4 = *(char *)(lVar15 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  puStack_110 = (uint *)0x0;
  func_0x000104a997b0(lVar15,lVar13,bVar4,1,&puStack_110);
  puVar6 = puStack_110;
  if (((ulong)puStack_110 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
  __Unwind_Resume();
  puStack_118 = &LAB_104aa8adc;
  puStack_130 = puVar5;
  puStack_128 = puVar6;
  pppuStack_120 = &ppuStack_d0;
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if ((*(long *)(puVar7 + 2) == 4) && (**(int **)puVar7 == 0x78696e75)) goto code_r0x000104aa8b70;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\x04' && *puVar7 == 0x78696e75) {
code_r0x000104aa8b70:
    uVar1 = *(ulong *)(puVar7 + 0xe);
    puVar6 = *(uint **)(puVar7 + 0xc);
    if (-1 < (char)*(byte *)((long)puVar7 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)puVar7 + 0x47);
      puVar6 = puVar7 + 0xc;
    }
    func_0x000104aa8c68(&uStack_138,puVar6,uVar1,lVar13);
    bVar4 = uStack_138 == 0;
    if (uStack_138 == 0) {
      return (uint *)0x1;
    }
    uStack_158 = uStack_138;
    if ((uStack_138 & 1) != 0) {
      piVar14 = (int *)(uStack_138 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(auStack_150,&uStack_158);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,0x38,2,"%s");
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if ((uStack_158 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_138 & 1) == 0) {
      return (uint *)(ulong)bVar4;
    }
    FUN_10084dad0();
    return (uint *)(ulong)bVar4;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (uint *)0x0;
}



/* Entry: 1008df494; end: 1008df7a7;  */

uint * FUN_1008df494(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  ulong uStack_138;
  uint *puStack_130;
  uint *puStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [32];
  long lStack_e8;
  uint *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  long lStack_78;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  uint auStack_48 [2];
  undefined1 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 5);
  *(char *)((long)param_1 + 10) = (char)param_2[1];
  param_1[3] = *param_2;
  *(uint **)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = param_3;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  uStack_40 = 9;
  puVar6 = auStack_48;
  FUN_1005a7ec4(param_4,puVar6);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x20);
  *(uint **)(param_1 + 10) = param_4;
  *(undefined8 *)(param_1 + 0xc) = uVar11;
  cVar2 = *(char *)(*(long *)(param_1 + 8) + 4);
  *(undefined1 *)(*(long *)(param_1 + 8) + 4) = 0;
  if (cVar2 != '\0') {
    param_4 = param_1;
    func_0x000104a9e2a4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  uStack_58 = 0x1008df558;
  uVar10 = *param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((uVar10 & 1) == 0) {
    puVar5 = param_4;
    if ((uVar10 >> 1 & 1) == 0) goto LAB_1008df578;
LAB_1008df600:
    puVar5 = puVar6;
    FUN_1008e074c(puVar6,param_4 + 0x6c);
    uVar10 = *param_4;
    if ((uVar10 >> 2 & 1) != 0) goto LAB_1008df614;
LAB_1008df57c:
    if ((uVar10 >> 3 & 1) == 0) goto LAB_1008df580;
LAB_1008df628:
    puVar5 = puVar6;
    func_0x000104a9e6c4(puVar6,param_4[0x69]);
    uVar10 = *param_4;
    if ((uVar10 >> 4 & 1) != 0) goto LAB_1008df63c;
LAB_1008df584:
    if ((uVar10 >> 5 & 1) == 0) goto LAB_1008df588;
LAB_1008df650:
    puVar5 = puVar6;
    FUN_1008e09e4(puVar6,param_4[0x67]);
    uVar10 = *param_4;
    if ((uVar10 >> 6 & 1) != 0) goto LAB_1008df664;
LAB_1008df58c:
    if ((uVar10 >> 7 & 1) == 0) goto LAB_1008df590;
LAB_1008df678:
    puVar5 = puVar6;
    func_0x000104a9eeb0(puVar6,param_4[0x65]);
    uVar10 = *param_4;
    if ((uVar10 >> 8 & 1) != 0) goto LAB_1008df68c;
LAB_1008df594:
    if ((uVar10 >> 9 & 1) == 0) goto LAB_1008df598;
LAB_1008df6a0:
    puVar5 = puVar6;
    FUN_1008e0d50(puVar6,(char)param_4[99]);
    uVar10 = *param_4;
    if ((uVar10 >> 10 & 1) != 0) goto LAB_1008df6b4;
LAB_1008df59c:
    if ((uVar10 >> 0xb & 1) == 0) goto LAB_1008df5a0;
LAB_1008df6c8:
    puVar5 = puVar6;
    func_0x000104a9e84c(puVar6,*(undefined8 *)(param_4 + 0x60));
    uVar10 = *param_4;
    if ((uVar10 >> 0xc & 1) != 0) goto LAB_1008df6dc;
LAB_1008df5a4:
    if ((uVar10 >> 0xd & 1) == 0) goto LAB_1008df5a8;
LAB_1008df6f0:
    puVar5 = puVar6;
    func_0x000104aa80c0(puVar6,param_4 + 0x5c);
    uVar10 = *param_4;
    if ((uVar10 >> 0xe & 1) != 0) goto LAB_1008df704;
LAB_1008df5ac:
    if ((uVar10 >> 0xf & 1) == 0) goto LAB_1008df5b0;
LAB_1008df718:
    puVar5 = puVar6;
    func_0x000104aa8228(puVar6,param_4 + 0x4c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x10 & 1) != 0) goto LAB_1008df72c;
LAB_1008df5b4:
    if ((uVar10 >> 0x11 & 1) == 0) goto LAB_1008df5b8;
LAB_1008df740:
    puVar5 = puVar6;
    func_0x000104aa8460(puVar6,param_4 + 0x3c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x12 & 1) != 0) goto LAB_1008df754;
LAB_1008df5bc:
    if ((uVar10 >> 0x13 & 1) == 0) goto LAB_1008df5c0;
LAB_1008df768:
    puVar5 = puVar6;
    func_0x000104a9e350(puVar6,param_4 + 0x2c);
    uVar10 = *param_4;
    if ((uVar10 >> 0x14 & 1) != 0) goto LAB_1008df77c;
LAB_1008df5c4:
    if ((uVar10 >> 0x15 & 1) == 0) goto LAB_1008df5c8;
LAB_1008df790:
    func_0x000107c60ebc();
  }
  else {
    puVar5 = puVar6;
    FUN_1008df850(puVar6,param_4 + 0x74);
    uVar10 = *param_4;
    if ((uVar10 >> 1 & 1) != 0) goto LAB_1008df600;
LAB_1008df578:
    if ((uVar10 >> 2 & 1) == 0) goto LAB_1008df57c;
LAB_1008df614:
    puVar5 = puVar6;
    FUN_1008e0808(puVar6,param_4[0x6a]);
    uVar10 = *param_4;
    if ((uVar10 >> 3 & 1) != 0) goto LAB_1008df628;
LAB_1008df580:
    if ((uVar10 >> 4 & 1) == 0) goto LAB_1008df584;
LAB_1008df63c:
    puVar5 = puVar6;
    FUN_1008e097c(puVar6,param_4[0x68]);
    uVar10 = *param_4;
    if ((uVar10 >> 5 & 1) != 0) goto LAB_1008df650;
LAB_1008df588:
    if ((uVar10 >> 6 & 1) == 0) goto LAB_1008df58c;
LAB_1008df664:
    puVar5 = puVar6;
    FUN_1008e0c78(puVar6,(char)param_4[0x66]);
    uVar10 = *param_4;
    if ((uVar10 >> 7 & 1) != 0) goto LAB_1008df678;
LAB_1008df590:
    if ((uVar10 >> 8 & 1) == 0) goto LAB_1008df594;
LAB_1008df68c:
    puVar5 = puVar6;
    func_0x000104aa7df0(puVar6,param_4 + 100);
    uVar10 = *param_4;
    if ((uVar10 >> 9 & 1) != 0) goto LAB_1008df6a0;
LAB_1008df598:
    if ((uVar10 >> 10 & 1) == 0) goto LAB_1008df59c;
LAB_1008df6b4:
    puVar5 = puVar6;
    func_0x000104a9ebec(puVar6,param_4[0x62]);
    uVar10 = *param_4;
    if ((uVar10 >> 0xb & 1) != 0) goto LAB_1008df6c8;
LAB_1008df5a0:
    if ((uVar10 >> 0xc & 1) == 0) goto LAB_1008df5a4;
LAB_1008df6dc:
    puVar5 = puVar6;
    func_0x000104aa7f58(puVar6,param_4 + 0x5e);
    uVar10 = *param_4;
    if ((uVar10 >> 0xd & 1) != 0) goto LAB_1008df6f0;
LAB_1008df5a8:
    if ((uVar10 >> 0xe & 1) == 0) goto LAB_1008df5ac;
LAB_1008df704:
    puVar5 = puVar6;
    FUN_1008e0f7c(puVar6,param_4 + 0x54);
    uVar10 = *param_4;
    if ((uVar10 >> 0xf & 1) != 0) goto LAB_1008df718;
LAB_1008df5b0:
    if ((uVar10 >> 0x10 & 1) == 0) goto LAB_1008df5b4;
LAB_1008df72c:
    puVar5 = puVar6;
    func_0x000104aa834c(puVar6,param_4 + 0x44);
    uVar10 = *param_4;
    if ((uVar10 >> 0x11 & 1) != 0) goto LAB_1008df740;
LAB_1008df5b8:
    if ((uVar10 >> 0x12 & 1) == 0) goto LAB_1008df5bc;
LAB_1008df754:
    puVar5 = puVar6;
    func_0x000104aa8574(puVar6,param_4 + 0x34);
    uVar10 = *param_4;
    if ((uVar10 >> 0x13 & 1) != 0) goto LAB_1008df768;
LAB_1008df5c0:
    if ((uVar10 >> 0x14 & 1) == 0) goto LAB_1008df5c4;
LAB_1008df77c:
    puVar5 = puVar6;
    func_0x000104a9e5e8(puVar6,param_4 + 0x24);
    uVar10 = *param_4;
    if ((uVar10 >> 0x15 & 1) != 0) goto LAB_1008df790;
LAB_1008df5c8:
    if ((uVar10 >> 0x16 & 1) != 0) {
      puVar5 = param_4 + 0x18;
      func_0x000104aa8688(puVar5,puVar6);
      uVar10 = *param_4;
    }
    if ((uVar10 >> 0x17 & 1) == 0) {
      return puVar5;
    }
  }
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = (uint *)0x1;
  uStack_90 = 8;
  pcStack_88 = "lb-token";
  plVar12 = *(long **)(param_4 + 0x10);
  if ((long *)0x1 < plVar12) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = *(undefined8 *)(param_4 + 0x12);
  plStack_c0 = *(long **)(param_4 + 0x10);
  uStack_a8 = *(undefined8 *)(param_4 + 0x16);
  uStack_b0 = *(undefined8 *)(param_4 + 0x14);
  ppuVar9 = &puStack_98;
  FUN_1008e1568(puVar6,ppuVar9,&plStack_c0);
  iVar8 = (int)ppuVar9;
  if ((long *)0x1 < plStack_c0) {
    do {
      lVar13 = *plStack_c0;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar4) {
        *plStack_c0 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  puVar6 = puStack_98;
  if ((uint *)0x1 < puStack_98) {
    do {
      lVar13 = *(long *)puStack_98;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_98,0x10);
      if (bVar4) {
        *(long *)puStack_98 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(puStack_98 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_c0);
    FUN_1004b6d90(&puStack_98);
  }
  puVar5 = puVar6;
  __Unwind_Resume();
  puStack_c8 = &SUB_104aa89c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(puVar5 + 4);
  *(undefined8 *)(lVar13 + 0xb0) = 0;
  if (*(undefined1 **)(lVar13 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar13 + 0xb8) = 1;
    *(undefined8 *)(lVar13 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar13 + 0x6f1) = 1;
  *(undefined1 *)(lVar13 + 0x16e) = 1;
  lVar15 = *(long *)(puVar5 + 2);
  puStack_d8 = puVar6;
  ppuStack_d0 = &puStack_60;
  if (*(char *)(lVar15 + 0x628) == '\0') {
    if (*(char *)(lVar13 + 0x169) == '\0') {
      func_0x000104a9d33c(auStack_108,*(undefined4 *)(lVar13 + 0x9c),0,lVar13 + 0x150);
      FUN_1005a70c4(lVar15 + 0x310,auStack_108);
      lVar15 = *(long *)(puVar5 + 2);
      lVar13 = *(long *)(puVar5 + 4);
      bVar4 = *(char *)(lVar15 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  puStack_110 = (uint *)0x0;
  func_0x000104a997b0(lVar15,lVar13,bVar4,1,&puStack_110);
  puVar6 = puStack_110;
  if (((ulong)puStack_110 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
  __Unwind_Resume();
  puStack_118 = &LAB_104aa8adc;
  puStack_130 = puVar5;
  puStack_128 = puVar6;
  pppuStack_120 = &ppuStack_d0;
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if ((*(long *)(puVar7 + 2) == 4) && (**(int **)puVar7 == 0x78696e75)) goto code_r0x000104aa8b70;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\x04' && *puVar7 == 0x78696e75) {
code_r0x000104aa8b70:
    uVar1 = *(ulong *)(puVar7 + 0xe);
    puVar6 = *(uint **)(puVar7 + 0xc);
    if (-1 < (char)*(byte *)((long)puVar7 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)puVar7 + 0x47);
      puVar6 = puVar7 + 0xc;
    }
    func_0x000104aa8c68(&uStack_138,puVar6,uVar1,lVar13);
    bVar4 = uStack_138 == 0;
    if (uStack_138 == 0) {
      return (uint *)0x1;
    }
    uStack_158 = uStack_138;
    if ((uStack_138 & 1) != 0) {
      piVar14 = (int *)(uStack_138 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(auStack_150,&uStack_158);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,0x38,2,"%s");
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if ((uStack_158 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_138 & 1) == 0) {
      return (uint *)(ulong)bVar4;
    }
    FUN_10084dad0();
    return (uint *)(ulong)bVar4;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (uint *)0x0;
}



/* Entry: 1008df7a8; end: 1008df84f;  */

void FUN_1008df7a8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001008df558();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_1008df7e0:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_1008e134c(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_1008e134c(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_1008df7e0;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 1008df850; end: 1008df86f;  */

ulong * FUN_1008df850(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ulong **ppuVar8;
  ulong **ppuVar9;
  long **pplVar10;
  long **pplVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  uint *unaff_x21;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  uint uStack_29c;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int iStack_230;
  int iStack_22c;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long lStack_1c8;
  ulong **ppuStack_1c0;
  ulong *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  ulong *puStack_1a0;
  uint *puStack_198;
  undefined8 *puStack_190;
  ulong *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long *plStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar13 = param_1[4];
  puVar1 = (undefined8 *)(uVar13 + 0x1a8);
  pplVar11 = (long **)0x5;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)*param_2;
  uVar12 = *(uint *)(param_2 + 1) & 0xff;
  if (plVar14 != (long *)0x0) {
    uVar12 = *(uint *)(param_2 + 1);
  }
  uVar12 = uVar12 + 0x25;
  if (uVar12 < 0x10000) {
    uVar16 = param_1[4];
    unaff_x21 = (uint *)(uVar16 + 8);
    puVar18 = (ulong *)*puVar1;
    puVar19 = *(ulong **)(uVar13 + 0x1b0);
    if (puVar18 == puVar19) {
LAB_1008dfa00:
      puVar6 = unaff_x21;
      FUN_1008dfcf0(unaff_x21,uVar12);
      plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,(int)puVar6);
      plStack_150 = (long *)0x1;
      uStack_148 = 5;
      puStack_140 = &DAT_10f760227;
      plVar14 = (long *)*param_2;
      if ((long *)0x1 < plVar14) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_168 = param_2[1];
      plStack_170 = (long *)*param_2;
      uStack_158 = param_2[3];
      uStack_160 = param_2[2];
      FUN_1008dfe64(param_1,&plStack_150,&plStack_170);
      if ((long *)0x1 < plStack_170) {
        do {
          lVar15 = *plStack_170;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
          if (bVar4) {
            *plStack_170 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plStack_170[1])();
        }
      }
      if ((long *)0x1 < plStack_150) {
        do {
          lVar15 = *plStack_150;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
          if (bVar4) {
            *plStack_150 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plStack_150[1])();
        }
      }
      plVar14 = (long *)*param_2;
      if ((long *)0x1 < plVar14) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_88 = param_2[1];
      puStack_90 = (ulong *)*param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      ppuVar8 = &puStack_90;
      pplVar11 = &plStack_b0;
      FUN_1008e048c(puVar1);
      puVar18 = puStack_90;
      if ((ulong *)0x1 < puStack_90) {
        do {
          uVar13 = *puStack_90;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar4) {
            *puStack_90 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puStack_90[1])();
        }
      }
    }
    else {
      uStack_88 = param_2[1];
      puStack_90 = (ulong *)*param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_a8 = puVar18[1];
      plStack_b0 = (long *)*puVar18;
      uStack_98 = puVar18[3];
      uStack_a0 = puVar18[2];
      ppuVar8 = &puStack_90;
      func_0x0001008e12a4(ppuVar8,&plStack_b0);
      iVar5 = (int)ppuVar8;
      while (puVar20 = puVar18, iVar5 == 0) {
        puVar18 = puVar20 + 5;
        if (puVar18 == *(ulong **)(uVar13 + 0x1b0)) goto LAB_1008dfa00;
        uStack_88 = param_2[1];
        puStack_90 = (ulong *)*param_2;
        uStack_78 = param_2[3];
        uStack_80 = param_2[2];
        uStack_a8 = puVar20[6];
        plStack_b0 = (long *)*puVar18;
        uStack_98 = puVar20[8];
        uStack_a0 = puVar20[7];
        ppuVar8 = &puStack_90;
        func_0x0001008e12a4(ppuVar8,&plStack_b0);
        puVar19 = puVar20;
        iVar5 = (int)ppuVar8;
      }
      if (*unaff_x21 < (uint)puVar20[4]) {
        ppuVar8 = (ulong **)
                  (ulong)((*unaff_x21 - (uint)puVar20[4]) + *(int *)(uVar16 + 0x10) + 0x3e);
        puVar18 = param_1;
        func_0x000104a9d968();
      }
      else {
        puVar6 = unaff_x21;
        FUN_1008dfcf0(unaff_x21,uVar12);
        *(uint *)(puVar20 + 4) = (uint)puVar6;
        puStack_110 = (ulong *)0x1;
        uStack_108 = 5;
        puStack_100 = &DAT_10f760227;
        plVar14 = (long *)*param_2;
        if ((long *)0x1 < plVar14) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_128 = param_2[1];
        plStack_130 = (long *)*param_2;
        uStack_118 = param_2[3];
        uStack_120 = param_2[2];
        ppuVar8 = &puStack_110;
        pplVar11 = &plStack_130;
        FUN_1008dfe64(param_1);
        if ((long *)0x1 < plStack_130) {
          do {
            lVar15 = *plStack_130;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
            if (bVar4) {
              *plStack_130 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 + -1 == 0) {
            (*(code *)plStack_130[1])();
          }
        }
        puVar18 = puStack_110;
        if ((ulong *)0x1 < puStack_110) {
          do {
            uVar16 = *puStack_110;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puStack_110,0x10);
            if (bVar4) {
              *puStack_110 = uVar16 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar16 - 1 == 0) {
            (*(code *)puStack_110[1])();
          }
        }
      }
      if (puVar19 != *(ulong **)(uVar13 + 0x1b0)) {
        uVar17 = *puVar19;
        uStack_80 = puVar19[3];
        uStack_88 = puVar19[2];
        puStack_90 = (ulong *)puVar19[1];
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        uVar16 = puVar19[4];
        uVar26 = *puVar20;
        uVar24 = puVar20[3];
        uVar22 = puVar20[2];
        puVar19[1] = puVar20[1];
        *puVar19 = uVar26;
        puVar19[3] = uVar24;
        puVar19[2] = uVar22;
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        *(uint *)(puVar19 + 4) = (uint)puVar20[4];
        *puVar20 = uVar17;
        puVar20[3] = uStack_80;
        puVar20[2] = uStack_88;
        puVar20[1] = (ulong)puStack_90;
        *(uint *)(puVar20 + 4) = (uint)uVar16;
        puVar19 = *(ulong **)(uVar13 + 0x1b0);
      }
      if ((ulong *)*puVar1 != puVar19) {
        do {
          if (*unaff_x21 < (uint)puVar19[-1]) break;
          puVar19 = puVar19 + -5;
          puVar18 = puVar19;
          FUN_1004b6d90();
          *(ulong **)(uVar13 + 0x1b0) = puVar19;
        } while (puVar19 != (ulong *)*puVar1);
      }
    }
  }
  else {
    puStack_d0 = (ulong *)0x1;
    uStack_c8 = 5;
    puStack_c0 = &DAT_10f760227;
    if ((long *)0x1 < plVar14) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_e8 = param_2[1];
    plStack_f0 = (long *)*param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    ppuVar8 = &puStack_d0;
    pplVar11 = &plStack_f0;
    FUN_1008e1568(param_1);
    if ((long *)0x1 < plStack_f0) {
      do {
        lVar15 = *plStack_f0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
        if (bVar4) {
          *plStack_f0 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_f0[1])();
      }
    }
    puVar18 = puStack_d0;
    if ((ulong *)0x1 < puStack_d0) {
      do {
        uVar13 = *puStack_d0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
        if (bVar4) {
          *puStack_d0 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (*(code *)puStack_d0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar18;
  }
  func_0x000107c60e78();
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_130);
    FUN_1004b6d90(&puStack_110);
  }
  puVar19 = puVar18;
  func_0x000107c60bd8();
  pcStack_178 = FUN_1008dfcf0;
  uVar12 = *(uint *)((long)puVar19 + 0xc);
  puStack_180 = &stack0xfffffffffffffff0;
  puStack_188 = puVar18;
  puStack_198 = unaff_x21;
  puStack_190 = param_2;
  puStack_1a0 = param_1;
  if ((ulong **)(ulong)*(uint *)((long)puVar19 + 4) < ppuVar8) {
    while (uVar12 != 0) {
      func_0x000104a9f374(puVar19);
      uVar12 = *(uint *)((long)puVar19 + 0xc);
    }
    puVar6 = (uint *)0x0;
  }
  else {
    uVar13 = *puVar19;
    uVar2 = (uint)puVar19[1];
    puVar18 = puVar19;
    ppuVar9 = ppuVar8;
    uVar16 = (ulong)uVar2;
    if ((ulong **)(ulong)*(uint *)((long)puVar19 + 4) < (ulong **)((ulong)uVar12 + (long)ppuVar8)) {
      do {
        puVar18 = puVar19;
        func_0x000104a9f374();
        uVar12 = *(uint *)((long)puVar19 + 0xc);
      } while ((ulong)*(uint *)((long)puVar19 + 4) < (ulong)uVar12 + (long)ppuVar8);
      uVar16 = (ulong)(uint)puVar19[1];
    }
    uVar17 = puVar19[2] >> 1;
    if (uVar17 <= uVar16) {
      func_0x000107c2c2d0();
      pcStack_1a8 = FUN_1008dfdbc;
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar25 = ppuVar9[1];
      puVar23 = *ppuVar9;
      puVar21 = ppuVar9[3];
      puVar20 = ppuVar9[2];
      ppuVar9[1] = (ulong *)0x0;
      *ppuVar9 = (ulong *)0x0;
      ppuVar9[3] = (ulong *)0x0;
      ppuVar9[2] = (ulong *)0x0;
      puVar18[1] = (ulong)puVar25;
      *puVar18 = (ulong)puVar23;
      puVar18[3] = (ulong)puVar21;
      puVar18[2] = (ulong)puVar20;
      if (*puVar18 == 0) {
        uVar12 = (uint)(byte)puVar18[1];
      }
      else {
        uVar12 = (uint)puVar18[1];
      }
      *(uint *)(puVar18 + 4) = uVar12;
      uVar16 = (ulong)(uVar12 - 0x7f);
      ppuStack_1c0 = ppuVar8;
      puStack_1b8 = puVar19;
      ppuStack_1b0 = &puStack_180;
      if (uVar12 < 0x7f) {
        uVar16 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      *(uint *)((long)puVar18 + 0x24) = (uint)uVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
        return puVar18;
      }
      func_0x000107c60e78();
      FUN_1004b6d90(puVar18);
      uVar17 = uVar16;
      func_0x000107c60bd8();
      pplVar10 = &plStack_300;
      pcStack_1f8 = FUN_1008dfe64;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_268 = ppuVar9[1];
      puStack_270 = *ppuVar9;
      puStack_258 = ppuVar9[3];
      puStack_260 = ppuVar9[2];
      ppuVar9[1] = (ulong *)0x0;
      *ppuVar9 = (ulong *)0x0;
      ppuVar9[3] = (ulong *)0x0;
      ppuVar9[2] = (ulong *)0x0;
      uStack_220 = (ulong)uVar2;
      uStack_218 = (ulong)(uint)uVar13;
      uStack_210 = uVar16;
      puStack_208 = puVar18;
      pppuStack_200 = &ppuStack_1b0;
      FUN_1008dfdbc(&puStack_250,&puStack_270);
      if ((ulong *)0x1 < puStack_270) {
        do {
          uVar13 = *puStack_270;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
          if (bVar4) {
            *puStack_270 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puStack_270[1])();
        }
      }
      uVar13 = (ulong)(iStack_22c + 1);
      FUN_1008e016c(uVar17,uVar13);
      *(ulong *)(*(long *)(uVar17 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar17 + 0x18) + 0x10) + uVar13;
      puVar7 = *(undefined1 **)(uVar17 + 0x10);
      func_0x0001008e01c0(puVar7,uVar13);
      *puVar7 = 0x40;
      if (iStack_22c == 1) {
        puVar7[1] = (char)iStack_230;
      }
      else {
        puVar7[1] = 0x7f;
        func_0x0001008e18a4(iStack_230 + -0x7f,puVar7 + 2,iStack_22c + -1);
      }
      uStack_288 = uStack_248;
      puStack_290 = puStack_250;
      uStack_278 = uStack_238;
      uStack_280 = uStack_240;
      uStack_248 = 0;
      puStack_250 = (ulong *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      FUN_1008e025c(uVar17,&puStack_290);
      if ((ulong *)0x1 < puStack_290) {
        do {
          uVar13 = *puStack_290;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_290,0x10);
          if (bVar4) {
            *puStack_290 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puStack_290[1])();
        }
      }
      plStack_2d8 = pplVar11[1];
      plStack_2e0 = *pplVar11;
      plStack_2c8 = pplVar11[3];
      plStack_2d0 = pplVar11[2];
      pplVar11[1] = (long *)0x0;
      *pplVar11 = (long *)0x0;
      pplVar11[3] = (long *)0x0;
      pplVar11[2] = (long *)0x0;
      FUN_1008e03e4(&plStack_2c0,&plStack_2e0);
      if ((long *)0x1 < plStack_2e0) {
        do {
          lVar15 = *plStack_2e0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
          if (bVar4) {
            *plStack_2e0 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plStack_2e0[1])();
        }
      }
      uVar13 = (ulong)uStack_29c;
      FUN_1008e016c(uVar17,uVar13);
      *(ulong *)(*(long *)(uVar17 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar17 + 0x18) + 0x10) + uVar13;
      puVar7 = *(undefined1 **)(uVar17 + 0x10);
      func_0x0001008e01c0(puVar7,uVar13);
      if (uStack_29c == 1) {
        *puVar7 = (char)iStack_2a0;
      }
      else {
        *puVar7 = 0x7f;
        func_0x0001008e18a4(iStack_2a0 + -0x7f,puVar7 + 1,uStack_29c - 1);
      }
      uStack_2f8 = uStack_2b8;
      plStack_300 = plStack_2c0;
      uStack_2e8 = uStack_2a8;
      uStack_2f0 = uStack_2b0;
      uStack_2b8 = 0;
      plStack_2c0 = (long *)0x0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      FUN_1008e025c(uVar17);
      if ((long *)0x1 < plStack_300) {
        do {
          lVar15 = *plStack_300;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
          if (bVar4) {
            *plStack_300 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plStack_300[1])();
        }
      }
      if ((long *)0x1 < plStack_2c0) {
        do {
          lVar15 = *plStack_2c0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_2c0,0x10);
          if (bVar4) {
            *plStack_2c0 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plStack_2c0[1])();
        }
      }
      puVar18 = puStack_250;
      if ((ulong *)0x1 < puStack_250) {
        do {
          uVar13 = *puStack_250;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_250,0x10);
          if (bVar4) {
            *puStack_250 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puStack_250[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        func_0x000107c60e78();
        if ((int)pplVar10 != 0) {
          func_0x000104bd46a0();
          FUN_1004b6d90(&plStack_300);
          FUN_1004b6d90(&plStack_2c0);
          FUN_1004b6d90(&puStack_250);
        }
        func_0x000107c60bd8();
        puVar19 = puVar18;
        if ((undefined1 *)*puVar18 <
            (undefined1 *)((long)pplVar10 + (*(long *)(puVar18[2] + 0x20) - puVar18[6]))) {
          uVar13 = 0;
          func_0x0001008e1910();
          func_0x000104a9d8f8();
          puVar18[5] = (ulong)puVar19;
          puVar18[6] = uVar13;
        }
        return puVar19;
      }
      return puVar18;
    }
    puVar6 = (uint *)(ulong)((uint)uVar13 + uVar2 + 1);
    uVar13 = 0;
    if (uVar17 != 0) {
      uVar13 = (ulong)puVar6 / uVar17;
    }
    puVar18 = puVar19 + 3;
    if ((puVar19[2] & 1) != 0) {
      puVar18 = (ulong *)*puVar18;
    }
    *(short *)((long)puVar18 + ((long)puVar6 - uVar13 * uVar17) * 2) = (short)ppuVar8;
    *(uint *)(puVar19 + 1) = (int)uVar16 + 1;
    *(uint *)((long)puVar19 + 0xc) = uVar12 + (int)ppuVar8;
  }
  return (ulong *)puVar6;
}



/* Entry: 1008df870; end: 1008dfcef;  */

ulong * FUN_1008df870(undefined8 *param_1,undefined8 param_2,long **param_3,undefined8 *param_4,
                     ulong *param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  long **pplVar9;
  long **pplVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  uint *unaff_x21;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  uint uStack_29c;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int iStack_230;
  int iStack_22c;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long lStack_1c8;
  ulong **ppuStack_1c0;
  ulong *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  ulong *puStack_1a0;
  uint *puStack_198;
  undefined8 *puStack_190;
  ulong *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long **pplStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  long **pplStack_108;
  undefined8 uStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  long *plStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_4;
  uVar11 = *(uint *)(param_4 + 1) & 0xff;
  if (plVar12 != (long *)0x0) {
    uVar11 = *(uint *)(param_4 + 1);
  }
  uVar11 = (int)param_3 + uVar11 + 0x20;
  if (uVar11 < 0x10000) {
    uVar14 = param_5[4];
    unaff_x21 = (uint *)(uVar14 + 8);
    puVar17 = (ulong *)*param_1;
    puVar18 = (ulong *)param_1[1];
    if (puVar17 == puVar18) {
LAB_1008dfa00:
      puVar5 = unaff_x21;
      FUN_1008dfcf0(unaff_x21,uVar11);
      plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,(int)puVar5);
      plStack_150 = (long *)0x1;
      plVar12 = (long *)*param_4;
      if ((long *)0x1 < plVar12) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_168 = param_4[1];
      plStack_170 = (long *)*param_4;
      uStack_158 = param_4[3];
      uStack_160 = param_4[2];
      pplStack_148 = param_3;
      uStack_140 = param_2;
      FUN_1008dfe64(param_5,&plStack_150,&plStack_170);
      if ((long *)0x1 < plStack_170) {
        do {
          lVar13 = *plStack_170;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
          if (bVar3) {
            *plStack_170 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_170[1])();
        }
      }
      if ((long *)0x1 < plStack_150) {
        do {
          lVar13 = *plStack_150;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
          if (bVar3) {
            *plStack_150 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_150[1])();
        }
      }
      plVar12 = (long *)*param_4;
      if ((long *)0x1 < plVar12) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_88 = param_4[1];
      puStack_90 = (ulong *)*param_4;
      uStack_78 = param_4[3];
      uStack_80 = param_4[2];
      ppuVar7 = &puStack_90;
      pplVar10 = &plStack_b0;
      FUN_1008e048c(param_1);
      puVar17 = puStack_90;
      if ((ulong *)0x1 < puStack_90) {
        do {
          uVar14 = *puStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar3) {
            *puStack_90 = uVar14 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_90[1])();
        }
      }
    }
    else {
      uStack_88 = param_4[1];
      puStack_90 = (ulong *)*param_4;
      uStack_78 = param_4[3];
      uStack_80 = param_4[2];
      uStack_a8 = puVar17[1];
      plStack_b0 = (long *)*puVar17;
      uStack_98 = puVar17[3];
      uStack_a0 = puVar17[2];
      ppuVar7 = &puStack_90;
      pplVar10 = param_3;
      func_0x0001008e12a4(ppuVar7,&plStack_b0);
      iVar4 = (int)ppuVar7;
      while (puVar19 = puVar17, iVar4 == 0) {
        puVar17 = puVar19 + 5;
        if (puVar17 == (ulong *)param_1[1]) goto LAB_1008dfa00;
        uStack_88 = param_4[1];
        puStack_90 = (ulong *)*param_4;
        uStack_78 = param_4[3];
        uStack_80 = param_4[2];
        uStack_a8 = puVar19[6];
        plStack_b0 = (long *)*puVar17;
        uStack_98 = puVar19[8];
        uStack_a0 = puVar19[7];
        ppuVar7 = &puStack_90;
        func_0x0001008e12a4(ppuVar7,&plStack_b0);
        puVar18 = puVar19;
        iVar4 = (int)ppuVar7;
      }
      if (*unaff_x21 < (uint)puVar19[4]) {
        ppuVar7 = (ulong **)
                  (ulong)((*unaff_x21 - (uint)puVar19[4]) + *(int *)(uVar14 + 0x10) + 0x3e);
        puVar17 = param_5;
        func_0x000104a9d968();
      }
      else {
        puVar5 = unaff_x21;
        FUN_1008dfcf0(unaff_x21,uVar11);
        *(uint *)(puVar19 + 4) = (uint)puVar5;
        puStack_110 = (ulong *)0x1;
        plVar12 = (long *)*param_4;
        if ((long *)0x1 < plVar12) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_128 = param_4[1];
        plStack_130 = (long *)*param_4;
        uStack_118 = param_4[3];
        uStack_120 = param_4[2];
        ppuVar7 = &puStack_110;
        pplVar10 = &plStack_130;
        pplStack_108 = param_3;
        uStack_100 = param_2;
        FUN_1008dfe64(param_5);
        if ((long *)0x1 < plStack_130) {
          do {
            lVar13 = *plStack_130;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
            if (bVar3) {
              *plStack_130 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_130[1])();
          }
        }
        puVar17 = puStack_110;
        if ((ulong *)0x1 < puStack_110) {
          do {
            uVar14 = *puStack_110;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puStack_110,0x10);
            if (bVar3) {
              *puStack_110 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (*(code *)puStack_110[1])();
          }
        }
      }
      if (puVar18 != (ulong *)param_1[1]) {
        uVar15 = *puVar18;
        uStack_80 = puVar18[3];
        uStack_88 = puVar18[2];
        puStack_90 = (ulong *)puVar18[1];
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        uVar14 = puVar18[4];
        uVar24 = *puVar19;
        uVar22 = puVar19[3];
        uVar16 = puVar19[2];
        puVar18[1] = puVar19[1];
        *puVar18 = uVar24;
        puVar18[3] = uVar22;
        puVar18[2] = uVar16;
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        *(uint *)(puVar18 + 4) = (uint)puVar19[4];
        *puVar19 = uVar15;
        puVar19[3] = uStack_80;
        puVar19[2] = uStack_88;
        puVar19[1] = (ulong)puStack_90;
        *(uint *)(puVar19 + 4) = (uint)uVar14;
        puVar18 = (ulong *)param_1[1];
      }
      if ((ulong *)*param_1 != puVar18) {
        do {
          if (*unaff_x21 < (uint)puVar18[-1]) break;
          puVar18 = puVar18 + -5;
          puVar17 = puVar18;
          FUN_1004b6d90();
          param_1[1] = puVar18;
        } while (puVar18 != (ulong *)*param_1);
      }
    }
  }
  else {
    puStack_d0 = (ulong *)0x1;
    if ((long *)0x1 < plVar12) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e8 = param_4[1];
    plStack_f0 = (long *)*param_4;
    uStack_d8 = param_4[3];
    uStack_e0 = param_4[2];
    ppuVar7 = &puStack_d0;
    pplVar10 = &plStack_f0;
    pplStack_c8 = param_3;
    uStack_c0 = param_2;
    FUN_1008e1568(param_5);
    if ((long *)0x1 < plStack_f0) {
      do {
        lVar13 = *plStack_f0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
        if (bVar3) {
          *plStack_f0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_f0[1])();
      }
    }
    puVar17 = puStack_d0;
    if ((ulong *)0x1 < puStack_d0) {
      do {
        uVar14 = *puStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
        if (bVar3) {
          *puStack_d0 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (*(code *)puStack_d0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar17;
  }
  func_0x000107c60e78();
  if ((int)ppuVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_130);
    FUN_1004b6d90(&puStack_110);
  }
  puVar18 = puVar17;
  func_0x000107c60bd8();
  pcStack_178 = FUN_1008dfcf0;
  uVar11 = *(uint *)((long)puVar18 + 0xc);
  puStack_180 = &stack0xfffffffffffffff0;
  puStack_188 = puVar17;
  puStack_198 = unaff_x21;
  puStack_1a0 = param_5;
  puStack_190 = param_4;
  if ((ulong **)(ulong)*(uint *)((long)puVar18 + 4) < ppuVar7) {
    while (uVar11 != 0) {
      func_0x000104a9f374(puVar18);
      uVar11 = *(uint *)((long)puVar18 + 0xc);
    }
    puVar5 = (uint *)0x0;
  }
  else {
    uVar14 = *puVar18;
    uVar1 = (uint)puVar18[1];
    puVar17 = puVar18;
    ppuVar8 = ppuVar7;
    uVar15 = (ulong)uVar1;
    if ((ulong **)(ulong)*(uint *)((long)puVar18 + 4) < (ulong **)((ulong)uVar11 + (long)ppuVar7)) {
      do {
        puVar17 = puVar18;
        func_0x000104a9f374();
        uVar11 = *(uint *)((long)puVar18 + 0xc);
      } while ((ulong)*(uint *)((long)puVar18 + 4) < (ulong)uVar11 + (long)ppuVar7);
      uVar15 = (ulong)(uint)puVar18[1];
    }
    uVar16 = puVar18[2] >> 1;
    if (uVar16 <= uVar15) {
      func_0x000107c2c2d0();
      pcStack_1a8 = FUN_1008dfdbc;
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar23 = ppuVar8[1];
      puVar21 = *ppuVar8;
      puVar20 = ppuVar8[3];
      puVar19 = ppuVar8[2];
      ppuVar8[1] = (ulong *)0x0;
      *ppuVar8 = (ulong *)0x0;
      ppuVar8[3] = (ulong *)0x0;
      ppuVar8[2] = (ulong *)0x0;
      puVar17[1] = (ulong)puVar23;
      *puVar17 = (ulong)puVar21;
      puVar17[3] = (ulong)puVar20;
      puVar17[2] = (ulong)puVar19;
      if (*puVar17 == 0) {
        uVar11 = (uint)(byte)puVar17[1];
      }
      else {
        uVar11 = (uint)puVar17[1];
      }
      *(uint *)(puVar17 + 4) = uVar11;
      uVar15 = (ulong)(uVar11 - 0x7f);
      ppuStack_1c0 = ppuVar7;
      puStack_1b8 = puVar18;
      ppuStack_1b0 = &puStack_180;
      if (uVar11 < 0x7f) {
        uVar15 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      *(uint *)((long)puVar17 + 0x24) = (uint)uVar15;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
        return puVar17;
      }
      func_0x000107c60e78();
      FUN_1004b6d90(puVar17);
      uVar16 = uVar15;
      func_0x000107c60bd8();
      pplVar9 = &plStack_300;
      pcStack_1f8 = FUN_1008dfe64;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_268 = ppuVar8[1];
      puStack_270 = *ppuVar8;
      puStack_258 = ppuVar8[3];
      puStack_260 = ppuVar8[2];
      ppuVar8[1] = (ulong *)0x0;
      *ppuVar8 = (ulong *)0x0;
      ppuVar8[3] = (ulong *)0x0;
      ppuVar8[2] = (ulong *)0x0;
      uStack_220 = (ulong)uVar1;
      uStack_218 = (ulong)(uint)uVar14;
      uStack_210 = uVar15;
      puStack_208 = puVar17;
      pppuStack_200 = &ppuStack_1b0;
      FUN_1008dfdbc(&puStack_250,&puStack_270);
      if ((ulong *)0x1 < puStack_270) {
        do {
          uVar14 = *puStack_270;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
          if (bVar3) {
            *puStack_270 = uVar14 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_270[1])();
        }
      }
      uVar14 = (ulong)(iStack_22c + 1);
      FUN_1008e016c(uVar16,uVar14);
      *(ulong *)(*(long *)(uVar16 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar16 + 0x18) + 0x10) + uVar14;
      puVar6 = *(undefined1 **)(uVar16 + 0x10);
      func_0x0001008e01c0(puVar6,uVar14);
      *puVar6 = 0x40;
      if (iStack_22c == 1) {
        puVar6[1] = (char)iStack_230;
      }
      else {
        puVar6[1] = 0x7f;
        func_0x0001008e18a4(iStack_230 + -0x7f,puVar6 + 2,iStack_22c + -1);
      }
      uStack_288 = uStack_248;
      puStack_290 = puStack_250;
      uStack_278 = uStack_238;
      uStack_280 = uStack_240;
      uStack_248 = 0;
      puStack_250 = (ulong *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      FUN_1008e025c(uVar16,&puStack_290);
      if ((ulong *)0x1 < puStack_290) {
        do {
          uVar14 = *puStack_290;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_290,0x10);
          if (bVar3) {
            *puStack_290 = uVar14 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_290[1])();
        }
      }
      plStack_2d8 = pplVar10[1];
      plStack_2e0 = *pplVar10;
      plStack_2c8 = pplVar10[3];
      plStack_2d0 = pplVar10[2];
      pplVar10[1] = (long *)0x0;
      *pplVar10 = (long *)0x0;
      pplVar10[3] = (long *)0x0;
      pplVar10[2] = (long *)0x0;
      FUN_1008e03e4(&plStack_2c0,&plStack_2e0);
      if ((long *)0x1 < plStack_2e0) {
        do {
          lVar13 = *plStack_2e0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
          if (bVar3) {
            *plStack_2e0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_2e0[1])();
        }
      }
      uVar14 = (ulong)uStack_29c;
      FUN_1008e016c(uVar16,uVar14);
      *(ulong *)(*(long *)(uVar16 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar16 + 0x18) + 0x10) + uVar14;
      puVar6 = *(undefined1 **)(uVar16 + 0x10);
      func_0x0001008e01c0(puVar6,uVar14);
      if (uStack_29c == 1) {
        *puVar6 = (char)iStack_2a0;
      }
      else {
        *puVar6 = 0x7f;
        func_0x0001008e18a4(iStack_2a0 + -0x7f,puVar6 + 1,uStack_29c - 1);
      }
      uStack_2f8 = uStack_2b8;
      plStack_300 = plStack_2c0;
      uStack_2e8 = uStack_2a8;
      uStack_2f0 = uStack_2b0;
      uStack_2b8 = 0;
      plStack_2c0 = (long *)0x0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      FUN_1008e025c(uVar16);
      if ((long *)0x1 < plStack_300) {
        do {
          lVar13 = *plStack_300;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
          if (bVar3) {
            *plStack_300 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_300[1])();
        }
      }
      if ((long *)0x1 < plStack_2c0) {
        do {
          lVar13 = *plStack_2c0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2c0,0x10);
          if (bVar3) {
            *plStack_2c0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_2c0[1])();
        }
      }
      puVar17 = puStack_250;
      if ((ulong *)0x1 < puStack_250) {
        do {
          uVar14 = *puStack_250;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_250,0x10);
          if (bVar3) {
            *puStack_250 = uVar14 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_250[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        func_0x000107c60e78();
        if ((int)pplVar9 != 0) {
          func_0x000104bd46a0();
          FUN_1004b6d90(&plStack_300);
          FUN_1004b6d90(&plStack_2c0);
          FUN_1004b6d90(&puStack_250);
        }
        func_0x000107c60bd8();
        puVar18 = puVar17;
        if ((undefined1 *)*puVar17 <
            (undefined1 *)((long)pplVar9 + (*(long *)(puVar17[2] + 0x20) - puVar17[6]))) {
          uVar14 = 0;
          func_0x0001008e1910();
          func_0x000104a9d8f8();
          puVar17[5] = (ulong)puVar18;
          puVar17[6] = uVar14;
        }
        return puVar18;
      }
      return puVar17;
    }
    puVar5 = (uint *)(ulong)((uint)uVar14 + uVar1 + 1);
    uVar14 = 0;
    if (uVar16 != 0) {
      uVar14 = (ulong)puVar5 / uVar16;
    }
    puVar17 = puVar18 + 3;
    if ((puVar18[2] & 1) != 0) {
      puVar17 = (ulong *)*puVar17;
    }
    *(short *)((long)puVar17 + ((long)puVar5 - uVar14 * uVar16) * 2) = (short)ppuVar7;
    *(uint *)(puVar18 + 1) = (int)uVar15 + 1;
    *(uint *)((long)puVar18 + 0xc) = uVar11 + (int)ppuVar7;
  }
  return (ulong *)puVar5;
}



/* Entry: 1008dfcf0; end: 1008dfdbb;  */

uint * FUN_1008dfcf0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long **pplVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  uint uStack_12c;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  uint *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  undefined8 *puStack_50;
  uint *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar12 = param_1[3];
  if ((undefined8 *)(ulong)param_1[1] < param_2) {
    while (uVar12 != 0) {
      func_0x000104a9f374(param_1);
      uVar12 = param_1[3];
    }
    puVar6 = (uint *)0x0;
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    puVar6 = param_1;
    puVar10 = param_2;
    uVar14 = (ulong)uVar2;
    if ((undefined8 *)(ulong)param_1[1] < (undefined8 *)((ulong)uVar12 + (long)param_2)) {
      do {
        puVar6 = param_1;
        func_0x000104a9f374();
        uVar12 = param_1[3];
      } while ((ulong)param_1[1] < (ulong)uVar12 + (long)param_2);
      uVar14 = (ulong)param_1[2];
    }
    uVar15 = *(ulong *)(param_1 + 4) >> 1;
    if (uVar15 <= uVar14) {
      func_0x000107c2c2d0();
      pcStack_38 = FUN_1008dfdbc;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      uVar18 = puVar10[3];
      uVar17 = puVar10[2];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      *(undefined8 *)(puVar6 + 2) = uVar20;
      *(undefined8 *)puVar6 = uVar19;
      *(undefined8 *)(puVar6 + 6) = uVar18;
      *(undefined8 *)(puVar6 + 4) = uVar17;
      if (*(long *)puVar6 == 0) {
        uVar12 = (uint)(byte)puVar6[2];
      }
      else {
        uVar12 = (uint)*(undefined8 *)(puVar6 + 2);
      }
      puVar6[8] = uVar12;
      uVar14 = (ulong)(uVar12 - 0x7f);
      puStack_50 = param_2;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar12 < 0x7f) {
        uVar14 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      puVar6[9] = (uint)uVar14;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return puVar6;
      }
      func_0x000107c60e78();
      FUN_1004b6d90(puVar6);
      uVar15 = uVar14;
      func_0x000107c60bd8();
      pplVar11 = &plStack_190;
      pcStack_88 = FUN_1008dfe64;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_f8 = puVar10[1];
      plStack_100 = (long *)*puVar10;
      uStack_e8 = puVar10[3];
      uStack_f0 = puVar10[2];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      uStack_b0 = (ulong)uVar2;
      uStack_a8 = (ulong)uVar1;
      uStack_a0 = uVar14;
      puStack_98 = puVar6;
      ppuStack_90 = &puStack_40;
      FUN_1008dfdbc(&puStack_e0,&plStack_100);
      if ((long *)0x1 < plStack_100) {
        do {
          lVar13 = *plStack_100;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
          if (bVar4) {
            *plStack_100 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_100[1])();
        }
      }
      uVar14 = (ulong)(iStack_bc + 1);
      FUN_1008e016c(uVar15,uVar14);
      *(ulong *)(*(long *)(uVar15 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar15 + 0x18) + 0x10) + uVar14;
      puVar7 = *(undefined1 **)(uVar15 + 0x10);
      func_0x0001008e01c0(puVar7,uVar14);
      *puVar7 = 0x40;
      if (iStack_bc == 1) {
        puVar7[1] = (char)iStack_c0;
      }
      else {
        puVar7[1] = 0x7f;
        func_0x0001008e18a4(iStack_c0 + -0x7f,puVar7 + 2,iStack_bc + -1);
      }
      uStack_118 = uStack_d8;
      puStack_120 = puStack_e0;
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      uStack_d8 = 0;
      puStack_e0 = (ulong *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_1008e025c(uVar15,&puStack_120);
      if ((ulong *)0x1 < puStack_120) {
        do {
          uVar14 = *puStack_120;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_120,0x10);
          if (bVar4) {
            *puStack_120 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_120[1])();
        }
      }
      uStack_168 = param_3[1];
      plStack_170 = (long *)*param_3;
      uStack_158 = param_3[3];
      uStack_160 = param_3[2];
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      FUN_1008e03e4(&plStack_150,&plStack_170);
      if ((long *)0x1 < plStack_170) {
        do {
          lVar13 = *plStack_170;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
          if (bVar4) {
            *plStack_170 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_170[1])();
        }
      }
      uVar14 = (ulong)uStack_12c;
      FUN_1008e016c(uVar15,uVar14);
      *(ulong *)(*(long *)(uVar15 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar15 + 0x18) + 0x10) + uVar14;
      puVar7 = *(undefined1 **)(uVar15 + 0x10);
      func_0x0001008e01c0(puVar7,uVar14);
      if (uStack_12c == 1) {
        *puVar7 = (char)iStack_130;
      }
      else {
        *puVar7 = 0x7f;
        func_0x0001008e18a4(iStack_130 + -0x7f,puVar7 + 1,uStack_12c - 1);
      }
      uStack_188 = uStack_148;
      plStack_190 = plStack_150;
      uStack_178 = uStack_138;
      uStack_180 = uStack_140;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      FUN_1008e025c(uVar15);
      if ((long *)0x1 < plStack_190) {
        do {
          lVar13 = *plStack_190;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
          if (bVar4) {
            *plStack_190 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_190[1])();
        }
      }
      if ((long *)0x1 < plStack_150) {
        do {
          lVar13 = *plStack_150;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
          if (bVar4) {
            *plStack_150 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_150[1])();
        }
      }
      puVar8 = puStack_e0;
      if ((ulong *)0x1 < puStack_e0) {
        do {
          uVar14 = *puStack_e0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_e0,0x10);
          if (bVar4) {
            *puStack_e0 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (*(code *)puStack_e0[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
        return (uint *)puVar8;
      }
      func_0x000107c60e78();
      if ((int)pplVar11 != 0) {
        func_0x000104bd46a0();
        FUN_1004b6d90(&plStack_190);
        FUN_1004b6d90(&plStack_150);
        FUN_1004b6d90(&puStack_e0);
      }
      func_0x000107c60bd8();
      puVar9 = puVar8;
      if ((undefined1 *)*puVar8 <
          (undefined1 *)((long)pplVar11 + (*(long *)(puVar8[2] + 0x20) - puVar8[6]))) {
        uVar14 = 0;
        func_0x0001008e1910();
        func_0x000104a9d8f8();
        puVar8[5] = (ulong)puVar9;
        puVar8[6] = uVar14;
      }
      return (uint *)puVar9;
    }
    puVar6 = (uint *)(ulong)(uVar1 + uVar2 + 1);
    uVar5 = 0;
    if (uVar15 != 0) {
      uVar5 = (ulong)puVar6 / uVar15;
    }
    puVar16 = param_1 + 6;
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      puVar16 = *(uint **)puVar16;
    }
    *(short *)((long)puVar16 + ((long)puVar6 - uVar5 * uVar15) * 2) = (short)param_2;
    param_1[2] = (int)uVar14 + 1;
    param_1[3] = uVar12 + (int)param_2;
  }
  return puVar6;
}



/* Entry: 1008dfdbc; end: 1008dfe63;  */

long * FUN_1008dfdbc(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  uint uStack_fc;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  long lStack_88;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_2[1];
  lVar13 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[1] = lVar14;
  *param_1 = lVar13;
  param_1[3] = lVar12;
  param_1[2] = lVar11;
  if (*param_1 == 0) {
    uVar8 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar8 = (uint)param_1[1];
  }
  *(uint *)(param_1 + 4) = uVar8;
  uVar3 = (ulong)(uVar8 - 0x7f);
  if (uVar8 < 0x7f) {
    uVar3 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  *(int *)((long)param_1 + 0x24) = (int)uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(param_1);
  func_0x000107c60bd8();
  pplVar7 = &plStack_160;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = param_2[1];
  plStack_d0 = (long *)*param_2;
  lStack_b8 = param_2[3];
  lStack_c0 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_1008dfdbc(&puStack_b0,&plStack_d0);
  if ((long *)0x1 < plStack_d0) {
    do {
      lVar9 = *plStack_d0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
      if (bVar2) {
        *plStack_d0 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_d0[1])();
    }
  }
  uVar10 = (ulong)(iStack_8c + 1);
  FUN_1008e016c(uVar3,uVar10);
  *(ulong *)(*(long *)(uVar3 + 0x18) + 0x10) = *(long *)(*(long *)(uVar3 + 0x18) + 0x10) + uVar10;
  puVar4 = *(undefined1 **)(uVar3 + 0x10);
  func_0x0001008e01c0(puVar4,uVar10);
  *puVar4 = 0x40;
  if (iStack_8c == 1) {
    puVar4[1] = (char)iStack_90;
  }
  else {
    puVar4[1] = 0x7f;
    func_0x0001008e18a4(iStack_90 + -0x7f,puVar4 + 2,iStack_8c + -1);
  }
  uStack_e8 = uStack_a8;
  puStack_f0 = puStack_b0;
  uStack_d8 = uStack_98;
  uStack_e0 = uStack_a0;
  uStack_a8 = 0;
  puStack_b0 = (ulong *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  FUN_1008e025c(uVar3,&puStack_f0);
  if ((ulong *)0x1 < puStack_f0) {
    do {
      uVar10 = *puStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_f0,0x10);
      if (bVar2) {
        *puStack_f0 = uVar10 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_f0[1])();
    }
  }
  uStack_138 = param_3[1];
  plStack_140 = (long *)*param_3;
  uStack_128 = param_3[3];
  uStack_130 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_1008e03e4(&plStack_120,&plStack_140);
  if ((long *)0x1 < plStack_140) {
    do {
      lVar9 = *plStack_140;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
      if (bVar2) {
        *plStack_140 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_140[1])();
    }
  }
  uVar10 = (ulong)uStack_fc;
  FUN_1008e016c(uVar3,uVar10);
  *(ulong *)(*(long *)(uVar3 + 0x18) + 0x10) = *(long *)(*(long *)(uVar3 + 0x18) + 0x10) + uVar10;
  puVar4 = *(undefined1 **)(uVar3 + 0x10);
  func_0x0001008e01c0(puVar4,uVar10);
  if (uStack_fc == 1) {
    *puVar4 = (char)iStack_100;
  }
  else {
    *puVar4 = 0x7f;
    func_0x0001008e18a4(iStack_100 + -0x7f,puVar4 + 1,uStack_fc - 1);
  }
  uStack_158 = uStack_118;
  plStack_160 = plStack_120;
  uStack_148 = uStack_108;
  uStack_150 = uStack_110;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_1008e025c(uVar3);
  if ((long *)0x1 < plStack_160) {
    do {
      lVar9 = *plStack_160;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
      if (bVar2) {
        *plStack_160 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_160[1])();
    }
  }
  if ((long *)0x1 < plStack_120) {
    do {
      lVar9 = *plStack_120;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar2) {
        *plStack_120 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  puVar5 = puStack_b0;
  if ((ulong *)0x1 < puStack_b0) {
    do {
      uVar3 = *puStack_b0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_b0,0x10);
      if (bVar2) {
        *puStack_b0 = uVar3 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar3 - 1 == 0) {
      (*(code *)puStack_b0[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (long *)puVar5;
  }
  func_0x000107c60e78();
  if ((int)pplVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_160);
    FUN_1004b6d90(&plStack_120);
    FUN_1004b6d90(&puStack_b0);
  }
  func_0x000107c60bd8();
  puVar6 = puVar5;
  if ((undefined1 *)*puVar5 <
      (undefined1 *)((long)pplVar7 + (*(long *)(puVar5[2] + 0x20) - puVar5[6]))) {
    uVar3 = 0;
    func_0x0001008e1910();
    func_0x000104a9d8f8();
    puVar5[5] = (ulong)puVar6;
    puVar5[6] = uVar3;
  }
  return (long *)puVar6;
}



/* Entry: 1008dfe64; end: 1008e016b;  */

void FUN_1008dfe64(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long **pplVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  pplVar6 = &plStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_1008dfdbc(&puStack_60,&plStack_80);
  if ((long *)0x1 < plStack_80) {
    do {
      lVar7 = *plStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar2) {
        *plStack_80 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar8 = (ulong)(iStack_3c + 1);
  FUN_1008e016c(param_1,uVar8);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar8
  ;
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar3,uVar8);
  *puVar3 = 0x40;
  if (iStack_3c == 1) {
    puVar3[1] = (char)iStack_40;
  }
  else {
    puVar3[1] = 0x7f;
    func_0x0001008e18a4(iStack_40 + -0x7f,puVar3 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  puStack_a0 = puStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  puStack_60 = (ulong *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1008e025c(param_1,&puStack_a0);
  if ((ulong *)0x1 < puStack_a0) {
    do {
      uVar8 = *puStack_a0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_a0,0x10);
      if (bVar2) {
        *puStack_a0 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_a0[1])();
    }
  }
  uStack_e8 = param_3[1];
  plStack_f0 = (long *)*param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_1008e03e4(&plStack_d0,&plStack_f0);
  if ((long *)0x1 < plStack_f0) {
    do {
      lVar7 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  uVar8 = (ulong)uStack_ac;
  FUN_1008e016c(param_1,uVar8);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar8
  ;
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar3,uVar8);
  if (uStack_ac == 1) {
    *puVar3 = (char)iStack_b0;
  }
  else {
    *puVar3 = 0x7f;
    func_0x0001008e18a4(iStack_b0 + -0x7f,puVar3 + 1,uStack_ac - 1);
  }
  uStack_108 = uStack_c8;
  plStack_110 = plStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  FUN_1008e025c(param_1);
  if ((long *)0x1 < plStack_110) {
    do {
      lVar7 = *plStack_110;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar2) {
        *plStack_110 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if ((long *)0x1 < plStack_d0) {
    do {
      lVar7 = *plStack_d0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
      if (bVar2) {
        *plStack_d0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_d0[1])();
    }
  }
  puVar4 = puStack_60;
  if ((ulong *)0x1 < puStack_60) {
    do {
      uVar8 = *puStack_60;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_60,0x10);
      if (bVar2) {
        *puStack_60 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_60[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if ((int)pplVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_110);
    FUN_1004b6d90(&plStack_d0);
    FUN_1004b6d90(&puStack_60);
  }
  func_0x000107c60bd8();
  if ((undefined1 *)*puVar4 <
      (undefined1 *)((long)pplVar6 + (*(long *)(puVar4[2] + 0x20) - puVar4[6]))) {
    uVar8 = 0;
    func_0x0001008e1910();
    puVar5 = puVar4;
    func_0x000104a9d8f8();
    puVar4[5] = (ulong)puVar5;
    puVar4[6] = uVar8;
  }
  return;
}



/* Entry: 1008e016c; end: 1008e025b;  */

void FUN_1008e016c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*param_1 < (*(long *)(param_1[2] + 0x20) + param_2) - param_1[6]) {
    uVar2 = 0;
    func_0x0001008e1910();
    puVar1 = param_1;
    func_0x000104a9d8f8();
    param_1[5] = (ulong)puVar1;
    param_1[6] = uVar2;
  }
  return;
}



/* Entry: 1008e025c; end: 1008e03e3;  */

undefined1  [16] FUN_1008e025c(long *param_1,long **param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long lStack_168;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_58;
  undefined1 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_1;
  pplVar5 = param_2;
  while( true ) {
    if (*param_2 == (long *)0x0) {
      plVar7 = (long *)(ulong)*(byte *)(param_2 + 1);
    }
    else {
      plVar7 = param_2[1];
    }
    if (plVar7 == (long *)0x0) goto LAB_1008e0384;
    plVar11 = (long *)param_1[2];
    lVar8 = param_1[3];
    plVar10 = (long *)((param_1[6] - plVar11[4]) + *param_1);
    if (plVar7 <= plVar10) break;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + (long)plVar10;
    func_0x000104ad79f8(&plStack_c0,param_2);
    lVar8 = param_1[2];
    plStack_d8 = param_2[1];
    plStack_e0 = *param_2;
    plStack_c8 = param_2[3];
    plStack_d0 = param_2[2];
    param_2[1] = (long *)0x0;
    *param_2 = (long *)0x0;
    param_2[3] = (long *)0x0;
    param_2[2] = (long *)0x0;
    FUN_1005a70c4(lVar8,&plStack_e0);
    plVar14 = param_2[1];
    plVar10 = *param_2;
    plVar7 = param_2[3];
    plVar11 = param_2[2];
    param_2[1] = plStack_b8;
    *param_2 = plStack_c0;
    param_2[3] = plStack_a8;
    param_2[2] = plStack_b0;
    plStack_c0 = plVar10;
    plStack_b8 = plVar14;
    plStack_b0 = plVar11;
    plStack_a8 = plVar7;
    func_0x0001008e1910(param_1,0);
    lVar8 = param_1[2];
    plStack_58 = (long *)0x0;
    uStack_50 = 9;
    pplVar5 = &plStack_58;
    FUN_1005a7ec4();
    lVar13 = *(long *)(param_1[2] + 0x20);
    param_1[5] = lVar8;
    param_1[6] = lVar13;
    plVar11 = plStack_c0;
    if ((long *)0x1 < plStack_c0) {
      do {
        lVar8 = *plStack_c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar4) {
          *plStack_c0 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + (long)plVar7;
  plStack_98 = param_2[1];
  plStack_a0 = *param_2;
  plStack_88 = param_2[3];
  plStack_90 = param_2[2];
  param_2[1] = (long *)0x0;
  *param_2 = (long *)0x0;
  param_2[3] = (long *)0x0;
  param_2[2] = (long *)0x0;
  pplVar5 = &plStack_a0;
  FUN_1005a70c4();
LAB_1008e0384:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar21._8_8_ = pplVar5;
    auVar21._0_8_ = plVar11;
    return auVar21;
  }
  func_0x000107c60e78();
  if ((int)pplVar5 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_c0);
  }
  func_0x000107c60bd8();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = pplVar5[1];
  plVar14 = *pplVar5;
  plVar10 = pplVar5[3];
  plVar7 = pplVar5[2];
  pplVar5[1] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)0x0;
  plVar11[1] = (long)plVar16;
  *plVar11 = (long)plVar14;
  plVar11[3] = (long)plVar10;
  plVar11[2] = (long)plVar7;
  if (*plVar11 == 0) {
    uVar6 = (uint)*(byte *)(plVar11 + 1);
  }
  else {
    uVar6 = (uint)plVar11[1];
  }
  *(uint *)(plVar11 + 4) = uVar6;
  plVar7 = (long *)(ulong)(uVar6 - 0x7f);
  if (uVar6 < 0x7f) {
    plVar7 = (long *)0x1;
  }
  else {
    FUN_1008e186c();
  }
  *(int *)((long)plVar11 + 0x24) = (int)plVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar22._8_8_ = pplVar5;
    auVar22._0_8_ = plVar11;
    return auVar22;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(plVar11);
  func_0x000107c60bd8();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar7 + 2;
  plVar11 = (long *)plVar7[1];
  if (plVar11 < (long *)*plVar10) {
    plVar14 = pplVar5[1];
    plVar10 = *pplVar5;
    plVar17 = pplVar5[3];
    plVar16 = pplVar5[2];
    pplVar5[1] = (long *)0x0;
    *pplVar5 = (long *)0x0;
    pplVar5[3] = (long *)0x0;
    pplVar5[2] = (long *)0x0;
    uVar2 = *param_3;
    plVar11[1] = (long)plVar14;
    *plVar11 = (long)plVar10;
    plVar11[3] = (long)plVar17;
    plVar11[2] = (long)plVar16;
    *(undefined4 *)(plVar11 + 4) = uVar2;
    plVar11 = plVar11 + 5;
    plVar7[1] = (long)plVar11;
  }
  else {
    lVar8 = (long)plVar11 - *plVar7 >> 3;
    uVar1 = lVar8 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) goto LAB_1008e05d0;
    lVar13 = *plVar10 - *plVar7 >> 3;
    uVar12 = lVar13 * -0x6666666666666666;
    if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
      uVar12 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    plStack_1b8 = plVar10;
    FUN_1008e05ec();
    plStack_1d0 = plVar10 + lVar8;
    plStack_1c0 = plVar10 + uVar12 * 5;
    plVar14 = pplVar5[1];
    plVar11 = *pplVar5;
    plVar17 = pplVar5[3];
    plVar16 = pplVar5[2];
    pplVar5[1] = (long *)0x0;
    *pplVar5 = (long *)0x0;
    pplVar5[3] = (long *)0x0;
    pplVar5[2] = (long *)0x0;
    uVar2 = *param_3;
    plStack_1d0[1] = (long)plVar14;
    *plStack_1d0 = (long)plVar11;
    plStack_1d0[3] = (long)plVar17;
    plStack_1d0[2] = (long)plVar16;
    *(undefined4 *)(plStack_1d0 + 4) = uVar2;
    plStack_1c8 = plStack_1d0 + 5;
    pplVar5 = &plStack_1d8;
    plStack_1d8 = plVar10;
    FUN_1008e0630(plVar7);
    plVar11 = (long *)plVar7[1];
    FUN_1008e0700(&plStack_1d8);
  }
  plVar7[1] = (long)plVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    auVar23._0_8_ = plVar11 + -5;
    auVar23._8_8_ = pplVar5;
    return auVar23;
  }
  func_0x000107c60e78();
LAB_1008e05d0:
  func_0x000104a9f310();
  FUN_1008e0700(&plStack_1d8);
  func_0x000107c60bd8();
  if (pplVar5 < (long **)0x666666666666667) {
    lVar8 = (long)pplVar5 * 0x28;
    func_0x000107c60e20(lVar8);
    auVar24._8_8_ = pplVar5;
    auVar24._0_8_ = lVar8;
    return auVar24;
  }
  func_0x000104a7757c();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *plVar7;
  plVar11 = pplVar5[1];
  for (lVar13 = plVar7[1]; lVar13 != lVar8; lVar13 = lVar13 + -0x28) {
    lVar18 = *(long *)(lVar13 + -0x10);
    lVar15 = *(long *)(lVar13 + -0x18);
    lVar20 = *(long *)(lVar13 + -0x20);
    lVar19 = *(long *)(lVar13 + -0x28);
    *(undefined8 *)(lVar13 + -0x20) = 0;
    *(undefined8 *)(lVar13 + -0x28) = 0;
    *(undefined8 *)(lVar13 + -0x10) = 0;
    *(undefined8 *)(lVar13 + -0x18) = 0;
    plVar11[-4] = lVar20;
    plVar11[-5] = lVar19;
    plVar11[-2] = lVar18;
    plVar11[-3] = lVar15;
    *(undefined4 *)(plVar11 + -1) = *(undefined4 *)(lVar13 + -8);
    plVar11 = plVar11 + -5;
  }
  pplVar5[1] = plVar11;
  plVar10 = (long *)*plVar7;
  *plVar7 = (long)plVar11;
  pplVar5[1] = plVar10;
  plVar11 = (long *)plVar7[1];
  plVar7[1] = (long)pplVar5[2];
  pplVar5[2] = plVar11;
  plVar11 = (long *)plVar7[2];
  plVar7[2] = (long)pplVar5[3];
  pplVar5[3] = plVar11;
  *pplVar5 = pplVar5[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    func_0x000107c60e78();
    lVar8 = plVar7[1];
    lVar13 = plVar7[2];
    while (lVar13 != lVar8) {
      plVar7[2] = lVar13 + -0x28;
      FUN_1004b6d90();
      lVar13 = plVar7[2];
    }
    if (*plVar7 != 0) {
      func_0x000107c60e14();
    }
    auVar26._8_8_ = pplVar5;
    auVar26._0_8_ = plVar7;
    return auVar26;
  }
  auVar25._8_8_ = pplVar5;
  auVar25._0_8_ = plVar7;
  return auVar25;
}



/* Entry: 1008e03e4; end: 1008e048b;  */

undefined1  [16] FUN_1008e03e4(long *param_1,long **param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_88;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2[1];
  plVar7 = *param_2;
  plVar8 = param_2[3];
  plVar3 = param_2[2];
  param_2[1] = (long *)0x0;
  *param_2 = (long *)0x0;
  param_2[3] = (long *)0x0;
  param_2[2] = (long *)0x0;
  param_1[1] = (long)plVar11;
  *param_1 = (long)plVar7;
  param_1[3] = (long)plVar8;
  param_1[2] = (long)plVar3;
  if (*param_1 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar4 = (uint)param_1[1];
  }
  *(uint *)(param_1 + 4) = uVar4;
  plVar3 = (long *)(ulong)(uVar4 - 0x7f);
  if (uVar4 < 0x7f) {
    plVar3 = (long *)0x1;
  }
  else {
    FUN_1008e186c();
  }
  *(int *)((long)param_1 + 0x24) = (int)plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(param_1);
  func_0x000107c60bd8();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar3 + 2;
  plVar8 = (long *)plVar3[1];
  if (plVar8 < (long *)*plVar7) {
    plVar11 = param_2[1];
    plVar7 = *param_2;
    plVar14 = param_2[3];
    plVar12 = param_2[2];
    param_2[1] = (long *)0x0;
    *param_2 = (long *)0x0;
    param_2[3] = (long *)0x0;
    param_2[2] = (long *)0x0;
    uVar2 = *param_3;
    plVar8[1] = (long)plVar11;
    *plVar8 = (long)plVar7;
    plVar8[3] = (long)plVar14;
    plVar8[2] = (long)plVar12;
    *(undefined4 *)(plVar8 + 4) = uVar2;
    plVar8 = plVar8 + 5;
    plVar3[1] = (long)plVar8;
  }
  else {
    lVar5 = (long)plVar8 - *plVar3 >> 3;
    uVar1 = lVar5 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) goto LAB_1008e05d0;
    lVar10 = *plVar7 - *plVar3 >> 3;
    uVar9 = lVar10 * -0x6666666666666666;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_d8 = plVar7;
    FUN_1008e05ec();
    plStack_f0 = plVar7 + lVar5;
    plStack_e0 = plVar7 + uVar9 * 5;
    plVar11 = param_2[1];
    plVar8 = *param_2;
    plVar14 = param_2[3];
    plVar12 = param_2[2];
    param_2[1] = (long *)0x0;
    *param_2 = (long *)0x0;
    param_2[3] = (long *)0x0;
    param_2[2] = (long *)0x0;
    uVar2 = *param_3;
    plStack_f0[1] = (long)plVar11;
    *plStack_f0 = (long)plVar8;
    plStack_f0[3] = (long)plVar14;
    plStack_f0[2] = (long)plVar12;
    *(undefined4 *)(plStack_f0 + 4) = uVar2;
    plStack_e8 = plStack_f0 + 5;
    param_2 = &plStack_f8;
    plStack_f8 = plVar7;
    FUN_1008e0630(plVar3);
    plVar8 = (long *)plVar3[1];
    FUN_1008e0700(&plStack_f8);
  }
  plVar3[1] = (long)plVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar19._0_8_ = plVar8 + -5;
    auVar19._8_8_ = param_2;
    return auVar19;
  }
  func_0x000107c60e78();
LAB_1008e05d0:
  func_0x000104a9f310();
  FUN_1008e0700(&plStack_f8);
  func_0x000107c60bd8();
  if (param_2 < (long **)0x666666666666667) {
    lVar5 = (long)param_2 * 0x28;
    func_0x000107c60e20(lVar5);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar5;
    return auVar20;
  }
  func_0x000104a7757c();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *plVar3;
  plVar8 = param_2[1];
  for (lVar10 = plVar3[1]; lVar10 != lVar5; lVar10 = lVar10 + -0x28) {
    lVar15 = *(long *)(lVar10 + -0x10);
    lVar13 = *(long *)(lVar10 + -0x18);
    lVar17 = *(long *)(lVar10 + -0x20);
    lVar16 = *(long *)(lVar10 + -0x28);
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x28) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    plVar8[-4] = lVar17;
    plVar8[-5] = lVar16;
    plVar8[-2] = lVar15;
    plVar8[-3] = lVar13;
    *(undefined4 *)(plVar8 + -1) = *(undefined4 *)(lVar10 + -8);
    plVar8 = plVar8 + -5;
  }
  param_2[1] = plVar8;
  plVar7 = (long *)*plVar3;
  *plVar3 = (long)plVar8;
  param_2[1] = plVar7;
  plVar8 = (long *)plVar3[1];
  plVar3[1] = (long)param_2[2];
  param_2[2] = plVar8;
  plVar8 = (long *)plVar3[2];
  plVar3[2] = (long)param_2[3];
  param_2[3] = plVar8;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = plVar3;
    return auVar21;
  }
  func_0x000107c60e78();
  lVar5 = plVar3[1];
  lVar10 = plVar3[2];
  while (lVar10 != lVar5) {
    plVar3[2] = lVar10 + -0x28;
    FUN_1004b6d90();
    lVar10 = plVar3[2];
  }
  if (*plVar3 != 0) {
    func_0x000107c60e14();
  }
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = plVar3;
  return auVar22;
}



/* Entry: 1008e048c; end: 1008e05eb;  */

undefined1  [16] FUN_1008e048c(long *param_1,long **param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1 + 2;
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)*plVar5) {
    plVar9 = param_2[1];
    plVar5 = *param_2;
    plVar12 = param_2[3];
    plVar10 = param_2[2];
    param_2[1] = (long *)0x0;
    *param_2 = (long *)0x0;
    param_2[3] = (long *)0x0;
    param_2[2] = (long *)0x0;
    uVar2 = *param_3;
    plVar6[1] = (long)plVar9;
    *plVar6 = (long)plVar5;
    plVar6[3] = (long)plVar12;
    plVar6[2] = (long)plVar10;
    *(undefined4 *)(plVar6 + 4) = uVar2;
    plVar6 = plVar6 + 5;
    param_1[1] = (long)plVar6;
  }
  else {
    lVar3 = (long)plVar6 - *param_1 >> 3;
    uVar1 = lVar3 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) goto LAB_1008e05d0;
    lVar8 = *plVar5 - *param_1 >> 3;
    uVar7 = lVar8 * -0x6666666666666666;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_88 = plVar5;
    FUN_1008e05ec();
    plStack_a0 = plVar5 + lVar3;
    plStack_90 = plVar5 + uVar7 * 5;
    plVar9 = param_2[1];
    plVar6 = *param_2;
    plVar12 = param_2[3];
    plVar10 = param_2[2];
    param_2[1] = (long *)0x0;
    *param_2 = (long *)0x0;
    param_2[3] = (long *)0x0;
    param_2[2] = (long *)0x0;
    uVar2 = *param_3;
    plStack_a0[1] = (long)plVar9;
    *plStack_a0 = (long)plVar6;
    plStack_a0[3] = (long)plVar12;
    plStack_a0[2] = (long)plVar10;
    *(undefined4 *)(plStack_a0 + 4) = uVar2;
    plStack_98 = plStack_a0 + 5;
    param_2 = &plStack_a8;
    plStack_a8 = plVar5;
    FUN_1008e0630(param_1);
    plVar6 = (long *)param_1[1];
    FUN_1008e0700(&plStack_a8);
  }
  param_1[1] = (long)plVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar16._0_8_ = plVar6 + -5;
    auVar16._8_8_ = param_2;
    return auVar16;
  }
  func_0x000107c60e78();
LAB_1008e05d0:
  func_0x000104a9f310();
  FUN_1008e0700(&plStack_a8);
  func_0x000107c60bd8();
  if (param_2 < (long **)0x666666666666667) {
    lVar3 = (long)param_2 * 0x28;
    func_0x000107c60e20(lVar3);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar3;
    return auVar17;
  }
  func_0x000104a7757c();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *param_1;
  plVar6 = param_2[1];
  for (lVar8 = param_1[1]; lVar8 != lVar3; lVar8 = lVar8 + -0x28) {
    lVar13 = *(long *)(lVar8 + -0x10);
    lVar11 = *(long *)(lVar8 + -0x18);
    lVar15 = *(long *)(lVar8 + -0x20);
    lVar14 = *(long *)(lVar8 + -0x28);
    *(undefined8 *)(lVar8 + -0x20) = 0;
    *(undefined8 *)(lVar8 + -0x28) = 0;
    *(undefined8 *)(lVar8 + -0x10) = 0;
    *(undefined8 *)(lVar8 + -0x18) = 0;
    plVar6[-4] = lVar15;
    plVar6[-5] = lVar14;
    plVar6[-2] = lVar13;
    plVar6[-3] = lVar11;
    *(undefined4 *)(plVar6 + -1) = *(undefined4 *)(lVar8 + -8);
    plVar6 = plVar6 + -5;
  }
  param_2[1] = plVar6;
  plVar5 = (long *)*param_1;
  *param_1 = (long)plVar6;
  param_2[1] = plVar5;
  plVar6 = (long *)param_1[1];
  param_1[1] = (long)param_2[2];
  param_2[2] = plVar6;
  plVar6 = (long *)param_1[2];
  param_1[2] = (long)param_2[3];
  param_2[3] = plVar6;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  func_0x000107c60e78();
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  while (lVar8 != lVar3) {
    param_1[2] = lVar8 + -0x28;
    FUN_1004b6d90();
    lVar8 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
  return auVar19;
}



/* Entry: 1008e05ec; end: 1008e062f;  */

undefined1  [16] FUN_1008e05ec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    func_0x000107c60e20(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000104a7757c();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *param_1;
  lVar1 = param_2[1];
  for (lVar4 = param_1[1]; lVar4 != lVar2; lVar4 = lVar4 + -0x28) {
    uVar6 = *(undefined8 *)(lVar4 + -0x10);
    uVar5 = *(undefined8 *)(lVar4 + -0x18);
    uVar8 = *(undefined8 *)(lVar4 + -0x20);
    uVar7 = *(undefined8 *)(lVar4 + -0x28);
    *(undefined8 *)(lVar4 + -0x20) = 0;
    *(undefined8 *)(lVar4 + -0x28) = 0;
    *(undefined8 *)(lVar4 + -0x10) = 0;
    *(undefined8 *)(lVar4 + -0x18) = 0;
    *(undefined8 *)(lVar1 + -0x20) = uVar8;
    *(undefined8 *)(lVar1 + -0x28) = uVar7;
    *(undefined8 *)(lVar1 + -0x10) = uVar6;
    *(undefined8 *)(lVar1 + -0x18) = uVar5;
    *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar4 + -8);
    lVar1 = lVar1 + -0x28;
  }
  param_2[1] = lVar1;
  lVar2 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  func_0x000107c60e78();
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar2) {
    param_1[2] = lVar4 + -0x28;
    FUN_1004b6d90();
    lVar4 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 1008e0630; end: 1008e06ff;  */

long * FUN_1008e0630(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *param_1;
  lVar1 = param_2[1];
  for (lVar4 = param_1[1]; lVar4 != lVar3; lVar4 = lVar4 + -0x28) {
    uVar6 = *(undefined8 *)(lVar4 + -0x10);
    uVar5 = *(undefined8 *)(lVar4 + -0x18);
    uVar8 = *(undefined8 *)(lVar4 + -0x20);
    uVar7 = *(undefined8 *)(lVar4 + -0x28);
    *(undefined8 *)(lVar4 + -0x20) = 0;
    *(undefined8 *)(lVar4 + -0x28) = 0;
    *(undefined8 *)(lVar4 + -0x10) = 0;
    *(undefined8 *)(lVar4 + -0x18) = 0;
    *(undefined8 *)(lVar1 + -0x20) = uVar8;
    *(undefined8 *)(lVar1 + -0x28) = uVar7;
    *(undefined8 *)(lVar1 + -0x10) = uVar6;
    *(undefined8 *)(lVar1 + -0x18) = uVar5;
    *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar4 + -8);
    lVar1 = lVar1 + -0x28;
  }
  param_2[1] = lVar1;
  lVar3 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_1;
  }
  func_0x000107c60e78();
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar3) {
    param_1[2] = lVar4 + -0x28;
    FUN_1004b6d90();
    lVar4 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1008e0700; end: 1008e074b;  */

long * FUN_1008e0700(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    FUN_1004b6d90();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1008e074c; end: 1008e076b;  */

ulong * FUN_1008e074c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ulong **ppuVar8;
  ulong **ppuVar9;
  long **pplVar10;
  long **pplVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  uint *unaff_x21;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  uint uStack_29c;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int iStack_230;
  int iStack_22c;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long lStack_1c8;
  ulong **ppuStack_1c0;
  ulong *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  ulong *puStack_1a0;
  uint *puStack_198;
  undefined8 *puStack_190;
  ulong *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long *plStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar15 = param_1[4];
  puVar1 = (undefined8 *)(uVar15 + 0x1c0);
  pplVar11 = (long **)0xa;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*param_2;
  uVar12 = *(uint *)(param_2 + 1) & 0xff;
  if (plVar13 != (long *)0x0) {
    uVar12 = *(uint *)(param_2 + 1);
  }
  uVar12 = uVar12 + 0x2a;
  if (uVar12 < 0x10000) {
    uVar16 = param_1[4];
    unaff_x21 = (uint *)(uVar16 + 8);
    puVar18 = (ulong *)*puVar1;
    puVar19 = *(ulong **)(uVar15 + 0x1c8);
    if (puVar18 == puVar19) {
LAB_1008dfa00:
      puVar6 = unaff_x21;
      FUN_1008dfcf0(unaff_x21,uVar12);
      plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,(int)puVar6);
      plStack_150 = (long *)0x1;
      uStack_148 = 10;
      puStack_140 = &DAT_10f760214;
      plVar13 = (long *)*param_2;
      if ((long *)0x1 < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_168 = param_2[1];
      plStack_170 = (long *)*param_2;
      uStack_158 = param_2[3];
      uStack_160 = param_2[2];
      FUN_1008dfe64(param_1,&plStack_150,&plStack_170);
      if ((long *)0x1 < plStack_170) {
        do {
          lVar14 = *plStack_170;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
          if (bVar4) {
            *plStack_170 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_170[1])();
        }
      }
      if ((long *)0x1 < plStack_150) {
        do {
          lVar14 = *plStack_150;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
          if (bVar4) {
            *plStack_150 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_150[1])();
        }
      }
      plVar13 = (long *)*param_2;
      if ((long *)0x1 < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_88 = param_2[1];
      puStack_90 = (ulong *)*param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      ppuVar8 = &puStack_90;
      pplVar11 = &plStack_b0;
      FUN_1008e048c(puVar1);
      puVar18 = puStack_90;
      if ((ulong *)0x1 < puStack_90) {
        do {
          uVar15 = *puStack_90;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar4) {
            *puStack_90 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puStack_90[1])();
        }
      }
    }
    else {
      uStack_88 = param_2[1];
      puStack_90 = (ulong *)*param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_a8 = puVar18[1];
      plStack_b0 = (long *)*puVar18;
      uStack_98 = puVar18[3];
      uStack_a0 = puVar18[2];
      ppuVar8 = &puStack_90;
      func_0x0001008e12a4(ppuVar8,&plStack_b0);
      iVar5 = (int)ppuVar8;
      while (puVar20 = puVar18, iVar5 == 0) {
        puVar18 = puVar20 + 5;
        if (puVar18 == *(ulong **)(uVar15 + 0x1c8)) goto LAB_1008dfa00;
        uStack_88 = param_2[1];
        puStack_90 = (ulong *)*param_2;
        uStack_78 = param_2[3];
        uStack_80 = param_2[2];
        uStack_a8 = puVar20[6];
        plStack_b0 = (long *)*puVar18;
        uStack_98 = puVar20[8];
        uStack_a0 = puVar20[7];
        ppuVar8 = &puStack_90;
        func_0x0001008e12a4(ppuVar8,&plStack_b0);
        puVar19 = puVar20;
        iVar5 = (int)ppuVar8;
      }
      if (*unaff_x21 < (uint)puVar20[4]) {
        ppuVar8 = (ulong **)
                  (ulong)((*unaff_x21 - (uint)puVar20[4]) + *(int *)(uVar16 + 0x10) + 0x3e);
        puVar18 = param_1;
        func_0x000104a9d968();
      }
      else {
        puVar6 = unaff_x21;
        FUN_1008dfcf0(unaff_x21,uVar12);
        *(uint *)(puVar20 + 4) = (uint)puVar6;
        puStack_110 = (ulong *)0x1;
        uStack_108 = 10;
        puStack_100 = &DAT_10f760214;
        plVar13 = (long *)*param_2;
        if ((long *)0x1 < plVar13) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_128 = param_2[1];
        plStack_130 = (long *)*param_2;
        uStack_118 = param_2[3];
        uStack_120 = param_2[2];
        ppuVar8 = &puStack_110;
        pplVar11 = &plStack_130;
        FUN_1008dfe64(param_1);
        if ((long *)0x1 < plStack_130) {
          do {
            lVar14 = *plStack_130;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
            if (bVar4) {
              *plStack_130 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plStack_130[1])();
          }
        }
        puVar18 = puStack_110;
        if ((ulong *)0x1 < puStack_110) {
          do {
            uVar16 = *puStack_110;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puStack_110,0x10);
            if (bVar4) {
              *puStack_110 = uVar16 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar16 - 1 == 0) {
            (*(code *)puStack_110[1])();
          }
        }
      }
      if (puVar19 != *(ulong **)(uVar15 + 0x1c8)) {
        uVar17 = *puVar19;
        uStack_80 = puVar19[3];
        uStack_88 = puVar19[2];
        puStack_90 = (ulong *)puVar19[1];
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        uVar16 = puVar19[4];
        uVar26 = *puVar20;
        uVar24 = puVar20[3];
        uVar22 = puVar20[2];
        puVar19[1] = puVar20[1];
        *puVar19 = uVar26;
        puVar19[3] = uVar24;
        puVar19[2] = uVar22;
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        *(uint *)(puVar19 + 4) = (uint)puVar20[4];
        *puVar20 = uVar17;
        puVar20[3] = uStack_80;
        puVar20[2] = uStack_88;
        puVar20[1] = (ulong)puStack_90;
        *(uint *)(puVar20 + 4) = (uint)uVar16;
        puVar19 = *(ulong **)(uVar15 + 0x1c8);
      }
      if ((ulong *)*puVar1 != puVar19) {
        do {
          if (*unaff_x21 < (uint)puVar19[-1]) break;
          puVar19 = puVar19 + -5;
          puVar18 = puVar19;
          FUN_1004b6d90();
          *(ulong **)(uVar15 + 0x1c8) = puVar19;
        } while (puVar19 != (ulong *)*puVar1);
      }
    }
  }
  else {
    puStack_d0 = (ulong *)0x1;
    uStack_c8 = 10;
    puStack_c0 = &DAT_10f760214;
    if ((long *)0x1 < plVar13) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_e8 = param_2[1];
    plStack_f0 = (long *)*param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    ppuVar8 = &puStack_d0;
    pplVar11 = &plStack_f0;
    FUN_1008e1568(param_1);
    if ((long *)0x1 < plStack_f0) {
      do {
        lVar14 = *plStack_f0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
        if (bVar4) {
          *plStack_f0 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_f0[1])();
      }
    }
    puVar18 = puStack_d0;
    if ((ulong *)0x1 < puStack_d0) {
      do {
        uVar15 = *puStack_d0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
        if (bVar4) {
          *puStack_d0 = uVar15 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar15 - 1 == 0) {
        (*(code *)puStack_d0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar18;
  }
  func_0x000107c60e78();
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_130);
    FUN_1004b6d90(&puStack_110);
  }
  puVar19 = puVar18;
  func_0x000107c60bd8();
  pcStack_178 = FUN_1008dfcf0;
  uVar12 = *(uint *)((long)puVar19 + 0xc);
  puStack_180 = &stack0xfffffffffffffff0;
  puStack_188 = puVar18;
  puStack_198 = unaff_x21;
  puStack_190 = param_2;
  puStack_1a0 = param_1;
  if ((ulong **)(ulong)*(uint *)((long)puVar19 + 4) < ppuVar8) {
    while (uVar12 != 0) {
      func_0x000104a9f374(puVar19);
      uVar12 = *(uint *)((long)puVar19 + 0xc);
    }
    puVar6 = (uint *)0x0;
  }
  else {
    uVar15 = *puVar19;
    uVar2 = (uint)puVar19[1];
    puVar18 = puVar19;
    ppuVar9 = ppuVar8;
    uVar16 = (ulong)uVar2;
    if ((ulong **)(ulong)*(uint *)((long)puVar19 + 4) < (ulong **)((ulong)uVar12 + (long)ppuVar8)) {
      do {
        puVar18 = puVar19;
        func_0x000104a9f374();
        uVar12 = *(uint *)((long)puVar19 + 0xc);
      } while ((ulong)*(uint *)((long)puVar19 + 4) < (ulong)uVar12 + (long)ppuVar8);
      uVar16 = (ulong)(uint)puVar19[1];
    }
    uVar17 = puVar19[2] >> 1;
    if (uVar17 <= uVar16) {
      func_0x000107c2c2d0();
      pcStack_1a8 = FUN_1008dfdbc;
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar25 = ppuVar9[1];
      puVar23 = *ppuVar9;
      puVar21 = ppuVar9[3];
      puVar20 = ppuVar9[2];
      ppuVar9[1] = (ulong *)0x0;
      *ppuVar9 = (ulong *)0x0;
      ppuVar9[3] = (ulong *)0x0;
      ppuVar9[2] = (ulong *)0x0;
      puVar18[1] = (ulong)puVar25;
      *puVar18 = (ulong)puVar23;
      puVar18[3] = (ulong)puVar21;
      puVar18[2] = (ulong)puVar20;
      if (*puVar18 == 0) {
        uVar12 = (uint)(byte)puVar18[1];
      }
      else {
        uVar12 = (uint)puVar18[1];
      }
      *(uint *)(puVar18 + 4) = uVar12;
      uVar16 = (ulong)(uVar12 - 0x7f);
      ppuStack_1c0 = ppuVar8;
      puStack_1b8 = puVar19;
      ppuStack_1b0 = &puStack_180;
      if (uVar12 < 0x7f) {
        uVar16 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      *(uint *)((long)puVar18 + 0x24) = (uint)uVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
        return puVar18;
      }
      func_0x000107c60e78();
      FUN_1004b6d90(puVar18);
      uVar17 = uVar16;
      func_0x000107c60bd8();
      pplVar10 = &plStack_300;
      pcStack_1f8 = FUN_1008dfe64;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_268 = ppuVar9[1];
      puStack_270 = *ppuVar9;
      puStack_258 = ppuVar9[3];
      puStack_260 = ppuVar9[2];
      ppuVar9[1] = (ulong *)0x0;
      *ppuVar9 = (ulong *)0x0;
      ppuVar9[3] = (ulong *)0x0;
      ppuVar9[2] = (ulong *)0x0;
      uStack_220 = (ulong)uVar2;
      uStack_218 = (ulong)(uint)uVar15;
      uStack_210 = uVar16;
      puStack_208 = puVar18;
      pppuStack_200 = &ppuStack_1b0;
      FUN_1008dfdbc(&puStack_250,&puStack_270);
      if ((ulong *)0x1 < puStack_270) {
        do {
          uVar15 = *puStack_270;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
          if (bVar4) {
            *puStack_270 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puStack_270[1])();
        }
      }
      uVar15 = (ulong)(iStack_22c + 1);
      FUN_1008e016c(uVar17,uVar15);
      *(ulong *)(*(long *)(uVar17 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar17 + 0x18) + 0x10) + uVar15;
      puVar7 = *(undefined1 **)(uVar17 + 0x10);
      func_0x0001008e01c0(puVar7,uVar15);
      *puVar7 = 0x40;
      if (iStack_22c == 1) {
        puVar7[1] = (char)iStack_230;
      }
      else {
        puVar7[1] = 0x7f;
        func_0x0001008e18a4(iStack_230 + -0x7f,puVar7 + 2,iStack_22c + -1);
      }
      uStack_288 = uStack_248;
      puStack_290 = puStack_250;
      uStack_278 = uStack_238;
      uStack_280 = uStack_240;
      uStack_248 = 0;
      puStack_250 = (ulong *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      FUN_1008e025c(uVar17,&puStack_290);
      if ((ulong *)0x1 < puStack_290) {
        do {
          uVar15 = *puStack_290;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_290,0x10);
          if (bVar4) {
            *puStack_290 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puStack_290[1])();
        }
      }
      plStack_2d8 = pplVar11[1];
      plStack_2e0 = *pplVar11;
      plStack_2c8 = pplVar11[3];
      plStack_2d0 = pplVar11[2];
      pplVar11[1] = (long *)0x0;
      *pplVar11 = (long *)0x0;
      pplVar11[3] = (long *)0x0;
      pplVar11[2] = (long *)0x0;
      FUN_1008e03e4(&plStack_2c0,&plStack_2e0);
      if ((long *)0x1 < plStack_2e0) {
        do {
          lVar14 = *plStack_2e0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
          if (bVar4) {
            *plStack_2e0 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_2e0[1])();
        }
      }
      uVar15 = (ulong)uStack_29c;
      FUN_1008e016c(uVar17,uVar15);
      *(ulong *)(*(long *)(uVar17 + 0x18) + 0x10) =
           *(long *)(*(long *)(uVar17 + 0x18) + 0x10) + uVar15;
      puVar7 = *(undefined1 **)(uVar17 + 0x10);
      func_0x0001008e01c0(puVar7,uVar15);
      if (uStack_29c == 1) {
        *puVar7 = (char)iStack_2a0;
      }
      else {
        *puVar7 = 0x7f;
        func_0x0001008e18a4(iStack_2a0 + -0x7f,puVar7 + 1,uStack_29c - 1);
      }
      uStack_2f8 = uStack_2b8;
      plStack_300 = plStack_2c0;
      uStack_2e8 = uStack_2a8;
      uStack_2f0 = uStack_2b0;
      uStack_2b8 = 0;
      plStack_2c0 = (long *)0x0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      FUN_1008e025c(uVar17);
      if ((long *)0x1 < plStack_300) {
        do {
          lVar14 = *plStack_300;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
          if (bVar4) {
            *plStack_300 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_300[1])();
        }
      }
      if ((long *)0x1 < plStack_2c0) {
        do {
          lVar14 = *plStack_2c0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_2c0,0x10);
          if (bVar4) {
            *plStack_2c0 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_2c0[1])();
        }
      }
      puVar18 = puStack_250;
      if ((ulong *)0x1 < puStack_250) {
        do {
          uVar15 = *puStack_250;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puStack_250,0x10);
          if (bVar4) {
            *puStack_250 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puStack_250[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        func_0x000107c60e78();
        if ((int)pplVar10 != 0) {
          func_0x000104bd46a0();
          FUN_1004b6d90(&plStack_300);
          FUN_1004b6d90(&plStack_2c0);
          FUN_1004b6d90(&puStack_250);
        }
        func_0x000107c60bd8();
        puVar19 = puVar18;
        if ((undefined1 *)*puVar18 <
            (undefined1 *)((long)pplVar10 + (*(long *)(puVar18[2] + 0x20) - puVar18[6]))) {
          uVar15 = 0;
          func_0x0001008e1910();
          func_0x000104a9d8f8();
          puVar18[5] = (ulong)puVar19;
          puVar18[6] = uVar15;
        }
        return puVar19;
      }
      return puVar18;
    }
    puVar6 = (uint *)(ulong)((uint)uVar15 + uVar2 + 1);
    uVar15 = 0;
    if (uVar17 != 0) {
      uVar15 = (ulong)puVar6 / uVar17;
    }
    puVar18 = puVar19 + 3;
    if ((puVar19[2] & 1) != 0) {
      puVar18 = (ulong *)*puVar18;
    }
    *(short *)((long)puVar18 + ((long)puVar6 - uVar15 * uVar17) * 2) = (short)ppuVar8;
    *(uint *)(puVar19 + 1) = (int)uVar16 + 1;
    *(uint *)((long)puVar19 + 0xc) = uVar12 + (int)ppuVar8;
  }
  return (ulong *)puVar6;
}



/* Entry: 1008e076c; end: 1008e0807;  */

void FUN_1008e076c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_3 == 0) {
    uVar2 = (ulong)(param_1[3] * 3) >> 1;
    param_1[3] = uVar2;
    plVar3 = (long *)*param_1;
    lVar1 = uVar2 << 5;
    if (plVar3 == param_1 + 5) {
      FUN_100460200();
      *param_1 = lVar1;
      func_0x000107c610b4();
      plVar3 = (long *)*param_1;
    }
    else {
      FUN_1004689e4();
      *param_1 = (long)plVar3;
    }
    param_1[1] = (long)plVar3;
  }
  else {
    func_0x000107c610b8(*param_1,param_1[1],param_1[2] << 5);
    param_1[1] = *param_1;
  }
  return;
}



/* Entry: 1008e0808; end: 1008e097b;  */

void FUN_1008e0808(long param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long *plStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = 0x83;
  switch(param_2) {
  case 1:
    uVar6 = 0x82;
  case 0:
    FUN_1008e016c(param_1,1);
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + 1;
    func_0x0001008e01c0(puVar4,1);
    *puVar4 = uVar6;
    break;
  case 2:
    plStack_48 = (long *)0x1;
    uStack_40 = 7;
    puStack_38 = &DAT_10f76021f;
    plStack_68 = (long *)0x1;
    uStack_60 = 3;
    puStack_58 = &DAT_10f2d965f;
    FUN_1008e1568(param_1,&plStack_48,&plStack_68);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar5 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    if ((long *)0x1 < plStack_48) {
      do {
        lVar5 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plStack_48[1])();
      }
    }
    break;
  case 3:
    goto code_r0x0001008e093c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
code_r0x0001008e093c:
  func_0x000107c2c2cc();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008e0944);
  (*pcVar3)();
}



/* Entry: 1008e097c; end: 1008e09e3;  */

void FUN_1008e097c(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = 0x87;
      goto LAB_1008e09b0;
    }
    if (param_2 != 2) {
      return;
    }
    func_0x000107c2c2c8();
  }
  uVar2 = 0x86;
LAB_1008e09b0:
  FUN_1008e016c(param_1,1);
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + 1;
  func_0x0001008e01c0(puVar1,1);
  *puVar1 = uVar2;
  return;
}



/* Entry: 1008e09e4; end: 1008e0af7;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */

undefined1  [16]
FUN_1008e09e4(uint *param_1,uint **param_2,char *param_3,undefined8 param_4,uint **param_5,
             ulong param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  uint *puVar10;
  uint **ppuVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  uint **ppuVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint **unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  uint **unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint *puStack_340;
  uint *puStack_338;
  uint *puStack_330;
  uint *puStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_2f8;
  undefined8 *****pppppuStack_2f0;
  undefined8 uStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  uint *puStack_2b0;
  uint *puStack_2a8;
  uint *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  uint *puStack_260;
  uint *puStack_258;
  uint *puStack_250;
  uint *puStack_248;
  long lStack_228;
  undefined8 uStack_220;
  char *pcStack_218;
  uint **ppuStack_210;
  uint *puStack_208;
  undefined8 *****pppppuStack_200;
  code *pcStack_1f8;
  undefined1 uStack_1e1;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long lStack_158;
  uint **ppuStack_150;
  uint *puStack_148;
  undefined8 *****pppppuStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [8];
  uint *puStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long lStack_108;
  uint **ppuStack_100;
  uint *puStack_f8;
  undefined8 *****pppppuStack_f0;
  code *pcStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined1 **ppuStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *****pppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *puStack_48;
  
  puVar6 = auStack_50;
  ppppppuVar21 = (undefined8 ******)&stack0xfffffffffffffff0;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 == 0) {
    param_2 = (uint **)(*(long *)(param_1 + 8) + 0x124);
    puStack_48 = (uint *)0x1;
    param_3 = "content-type";
    param_5 = &puStack_48;
    param_4 = 0xc;
    param_6 = 0x3c;
    FUN_1008e0af8();
    param_1 = puStack_48;
    if ((uint *)0x1 < puStack_48) {
      do {
        lVar16 = *(long *)puStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
        if (bVar2) {
          *(long *)puStack_48 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_48 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      auVar26._8_8_ = param_2;
      auVar26._0_8_ = param_1;
      return auVar26;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    uVar14 = 0x199;
    puStack_48 = *(uint **)PTR____stack_chk_guard_11034bdc0;
    plVar7 = (long *)0x2;
    func_0x0001004686b8();
    if ((int)plVar7 != 0) {
      puVar8 = &stack0xffffffffffffff78;
      func_0x000107c616d0(puVar8,0x40,"Not encoding bad content-type header",&stack0x00000000);
      if ((int)(uint)puVar8 < 0) {
        plVar9 = (long *)0x0;
        plVar7 = (long *)0x0;
      }
      else if ((uint)puVar8 < 0x40) {
        plVar7 = (long *)0x0;
        plVar9 = (long *)&stack0xffffffffffffff78;
      }
      else {
        plVar7 = (long *)(((ulong)puVar8 & 0xffffffff) + 1);
        FUN_100460200();
        func_0x000107c616d0();
        plVar9 = plVar7;
      }
      uVar14 = 0x199;
      func_0x000104a6e9e0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                          ,0x199,2,plVar9);
      FUN_100460314();
    }
    if (*(uint **)PTR____stack_chk_guard_11034bdc0 == puStack_48) {
      auVar23._8_8_ = uVar14;
      auVar23._0_8_ = plVar7;
      return auVar23;
    }
    func_0x000107c60e78();
    uStack_b0 = 0x199;
    pcStack_a8 = (char *)0x2;
    pcStack_98 = FUN_1004687d0;
    ppuStack_c0 = &puStack_a0;
    puStack_a0 = &stack0xfffffffffffffff0;
    if (uVar14 >> 0x3d == 0) {
      lVar17 = uVar14 << 3;
      func_0x000107c60e20(lVar17);
      auVar24._8_8_ = uVar14;
      auVar24._0_8_ = lVar17;
      return auVar24;
    }
    func_0x000104a7757c();
    puStack_d0 = (uint *)0x199;
    puStack_c8 = (uint *)0x2;
    puStack_b8 = (uint *)0x100468804;
    lVar17 = plVar7[1];
    lVar16 = plVar7[2];
    while (lVar16 != lVar17) {
      plVar7[2] = lVar16 + -8;
      plVar9 = *(long **)(lVar16 + -8);
      *(undefined8 *)(lVar16 + -8) = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      lVar16 = plVar7[2];
    }
    if (*plVar7 != 0) {
      func_0x000107c60e14();
    }
    auVar25._8_8_ = uVar14;
    auVar25._0_8_ = plVar7;
    return auVar25;
  }
  func_0x000107c60e78();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_48);
  }
  puVar18 = param_1;
  func_0x000107c60bd8();
  pcStack_58 = FUN_1008e0af8;
  pcStack_98 = *(code **)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (uint *)(*(long *)(puVar18 + 8) + 8);
  pppppuStack_60 = ppppppuVar21;
  if (*puVar10 < *(uint *)param_2) {
    ppuVar11 = param_2;
    if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_98) {
      iVar13 = (*puVar10 - *(uint *)param_2) + *(int *)(*(long *)(puVar18 + 8) + 0x10);
      pcVar5 = FUN_1008e0af8;
      goto SUB_104a9d968;
    }
  }
  else {
    FUN_1008dfcf0(puVar10,param_6 & 0xffffffff);
    *(uint *)param_2 = (uint)puVar10;
    puStack_b8 = (uint *)0x1;
    uStack_b0 = param_4;
    pcStack_a8 = param_3;
    puStack_d8 = param_5[1];
    puStack_e0 = *param_5;
    puStack_c8 = param_5[3];
    puStack_d0 = param_5[2];
    param_5[1] = (uint *)0x0;
    *param_5 = (uint *)0x0;
    param_5[3] = (uint *)0x0;
    param_5[2] = (uint *)0x0;
    ppuVar11 = &puStack_b8;
    FUN_1008dfe64(puVar18,ppuVar11,&puStack_e0);
    if ((uint *)0x1 < puStack_e0) {
      do {
        lVar17 = *(long *)puStack_e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_e0,0x10);
        if (bVar2) {
          *(long *)puStack_e0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_e0 + 2))();
      }
    }
    puVar10 = puStack_b8;
    if ((uint *)0x1 < puStack_b8) {
      do {
        lVar17 = *(long *)puStack_b8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_b8,0x10);
        if (bVar2) {
          *(long *)puStack_b8 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_b8 + 2))();
      }
    }
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_98) {
      auVar27._8_8_ = ppuVar11;
      auVar27._0_8_ = puVar10;
      return auVar27;
    }
  }
  iVar13 = (int)ppuVar11;
  func_0x000107c60e78();
  if (iVar13 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_e0);
    FUN_1004b6d90(&puStack_b8);
  }
  puVar18 = puVar10;
  func_0x000107c60bd8();
  puVar6 = auStack_130;
  pcStack_e8 = FUN_1008e0c78;
  ppppppuVar21 = &pppppuStack_f0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = unaff_x20;
  puStack_f8 = puVar10;
  pppppuStack_f0 = &pppppuStack_60;
  if (iVar13 != 0) {
    func_0x000107c2c2c4();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008e0d2c);
    (*pcVar5)();
  }
  ppuVar11 = (uint **)(*(long *)(puVar18 + 8) + 0x120);
  puStack_128 = (uint *)0x1;
  uStack_120 = 8;
  pcStack_118 = "trailers";
  FUN_1008e0af8();
  puVar19 = puStack_128;
  if ((uint *)0x1 < puStack_128) {
    do {
      lVar17 = *(long *)puStack_128;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_128,0x10);
      if (bVar2) {
        *(long *)puStack_128 = lVar17 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(puStack_128 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    auVar28._8_8_ = ppuVar11;
    auVar28._0_8_ = puVar19;
    return auVar28;
  }
  func_0x000107c60e78();
  puVar18 = puVar19;
  param_1 = puVar10;
  if ((int)ppuVar11 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_128);
    puVar18 = puVar19;
    func_0x000107c60bd8();
    param_1 = puVar19;
  }
  func_0x000107c60bd8();
  pcStack_138 = FUN_1008e0d50;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(puVar18 + 8);
  uVar4 = *(uint *)(lVar17 + 0x178);
  ppuStack_150 = unaff_x20;
  puStack_148 = param_1;
  pppppuStack_140 = ppppppuVar21;
  if (((uVar4 == 0) || ((uint)*(byte *)(lVar17 + 0x17c) != ((uint)ppuVar11 & 0xff))) ||
     (uVar4 <= *(uint *)(lVar17 + 8))) {
    puStack_180 = (uint *)0x1;
    uStack_178 = 0x14;
    pcStack_170 = "grpc-accept-encoding";
    uStack_1e1 = (char)ppuVar11;
    FUN_10061b500(&plStack_1a0,&uStack_1e1);
    uVar4 = (uint)uStack_198 & 0xff;
    if (plStack_1a0 != (long *)0x0) {
      uVar4 = (uint)uStack_198;
    }
    lVar17 = *(long *)(puVar18 + 8) + 8;
    FUN_1008dfcf0(lVar17,uVar4 + 0x34);
    lVar16 = *(long *)(puVar18 + 8);
    *(int *)(lVar16 + 0x178) = (int)lVar17;
    *(char *)(lVar16 + 0x17c) = (char)ppuVar11;
    uStack_1b8 = uStack_178;
    puStack_1c0 = puStack_180;
    uStack_1a8 = uStack_168;
    pcStack_1b0 = pcStack_170;
    uStack_178 = 0;
    puStack_180 = (uint *)0x0;
    uStack_168 = 0;
    pcStack_170 = (char *)0x0;
    uStack_1d8 = uStack_198;
    plStack_1e0 = plStack_1a0;
    uStack_1c8 = uStack_188;
    uStack_1d0 = uStack_190;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    ppuVar15 = &puStack_1c0;
    FUN_1008dfe64(puVar18,ppuVar15,&plStack_1e0);
    if ((long *)0x1 < plStack_1e0) {
      do {
        lVar17 = *plStack_1e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
        if (bVar2) {
          *plStack_1e0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_1e0[1])();
      }
    }
    if ((uint *)0x1 < puStack_1c0) {
      do {
        lVar17 = *(long *)puStack_1c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_1c0,0x10);
        if (bVar2) {
          *(long *)puStack_1c0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_1c0 + 2))();
      }
    }
    if ((long *)0x1 < plStack_1a0) {
      do {
        lVar17 = *plStack_1a0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
        if (bVar2) {
          *plStack_1a0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_1a0[1])();
      }
    }
    puVar18 = puStack_180;
    if ((uint *)0x1 < puStack_180) {
      do {
        lVar17 = *(long *)puStack_180;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_180,0x10);
        if (bVar2) {
          *(long *)puStack_180 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_180 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      auVar29._8_8_ = ppuVar15;
      auVar29._0_8_ = puVar18;
      return auVar29;
    }
  }
  else {
    ppuVar15 = ppuVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      iVar13 = (*(uint *)(lVar17 + 8) - uVar4) + *(int *)(lVar17 + 0x10);
      pcVar5 = FUN_1008e0d50;
SUB_104a9d968:
      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
      *(uint ***)(puVar6 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
      *(char **)(puVar6 + -0x28) = unaff_x21;
      *(uint ***)(puVar6 + -0x20) = unaff_x20;
      *(uint **)(puVar6 + -0x18) = param_1;
      *(undefined8 *******)(puVar6 + -0x10) = ppppppuVar21;
      *(code **)(puVar6 + -8) = pcVar5;
      uVar4 = iVar13 - 0x41;
      if (iVar13 + 0x3eU < 0x7f) {
        uVar14 = 1;
      }
      else {
        uVar14 = CONCAT44(0,uVar4);
        FUN_1008e186c();
      }
      FUN_1008e016c(puVar18,uVar14 & 0xffffffff);
      pbVar12 = *(byte **)(puVar18 + 4);
      *(ulong *)(*(long *)(puVar18 + 6) + 0x10) =
           *(long *)(*(long *)(puVar18 + 6) + 0x10) + (uVar14 & 0xffffffff);
      func_0x0001008e01c0(pbVar12,uVar14 & 0xffffffff);
      if ((int)uVar14 == 1) {
        *pbVar12 = (byte)(iVar13 + 0x3eU) | 0x80;
        auVar34._8_8_ = pbVar12;
        auVar34._0_8_ = pbVar12;
        return auVar34;
      }
      auVar33._8_8_ = pbVar12 + 1;
      *pbVar12 = 0xff;
      uVar3 = (int)uVar14 - 2;
      switch((ulong)uVar3) {
      case 4:
        pbVar12[5] = (byte)(uVar4 >> 0x1c) | 0x80;
      case 3:
        pbVar12[4] = (byte)(uVar4 >> 0x15) | 0x80;
      case 2:
        pbVar12[3] = (byte)(uVar4 >> 0xe) | 0x80;
      case 1:
        pbVar12[2] = (byte)(uVar4 >> 7) | 0x80;
      case 0:
        *auVar33._8_8_ = (byte)uVar4 | 0x80;
      default:
        auVar33._8_8_[uVar3] = auVar33._8_8_[uVar3] & 0x7f;
        auVar33._0_8_ = CONCAT44(0,uVar4);
        return auVar33;
      }
    }
  }
  func_0x000107c60e78();
  if ((int)ppuVar15 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_1e0);
    FUN_1004b6d90(&puStack_1c0);
    FUN_1004b6d90(&plStack_1a0);
    FUN_1004b6d90(&puStack_180);
  }
  puVar10 = puVar18;
  func_0x000107c60bd8();
  uStack_220 = unaff_x22;
  pcStack_218 = unaff_x21;
  ppuStack_210 = ppuVar11;
  puStack_208 = puVar18;
  pppppuStack_200 = &pppppuStack_140;
  pcStack_1f8 = FUN_1008e0f7c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = *ppuVar15;
  if ((puVar18 == (uint *)0x0) || (ppuVar15[1] < (uint *)0x10000)) {
    lVar17 = *(long *)(puVar10 + 8);
    puStack_258 = ppuVar15[1];
    puStack_260 = *ppuVar15;
    puStack_248 = ppuVar15[3];
    puStack_250 = ppuVar15[2];
    uStack_278 = *(undefined8 *)(lVar17 + 400);
    uStack_280 = *(undefined8 *)(lVar17 + 0x188);
    uStack_268 = *(undefined8 *)(lVar17 + 0x1a0);
    uStack_270 = *(undefined8 *)(lVar17 + 0x198);
    ppuVar11 = &puStack_260;
    func_0x0001008e1208(ppuVar11,&uStack_280);
    if ((int)ppuVar11 == 0) {
      puVar18 = *ppuVar15;
      if ((uint *)0x1 < puVar18) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar2) {
            *(long *)puVar18 = *(long *)puVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar18 = *ppuVar15;
      }
      puStack_250 = ppuVar15[3];
      puVar22 = ppuVar15[2];
      puVar20 = ppuVar15[1];
      lVar17 = *(long *)(puVar10 + 8);
      plVar7 = *(long **)(lVar17 + 0x188);
      puVar19 = *(uint **)(lVar17 + 0x1a0);
      puStack_258 = *(uint **)(lVar17 + 0x198);
      puStack_260 = *(uint **)(lVar17 + 400);
      *(uint **)(lVar17 + 0x188) = puVar18;
      *(uint **)(lVar17 + 0x198) = puVar22;
      *(uint **)(lVar17 + 400) = puVar20;
      *(uint **)(lVar17 + 0x1a0) = puStack_250;
      puStack_250 = puVar19;
      if ((long *)0x1 < plVar7) {
        do {
          lVar17 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar17 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar17 + -1 == 0) {
          (*(code *)plVar7[1])();
        }
      }
      lVar17 = *(long *)(puVar10 + 8);
      *(undefined4 *)(lVar17 + 0x128) = 0;
    }
    else {
      lVar17 = *(long *)(puVar10 + 8);
    }
    ppuVar11 = (uint **)(lVar17 + 0x128);
    puVar18 = *ppuVar15;
    if ((uint *)0x1 < puVar18) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar18,0x10);
        if (bVar2) {
          *(long *)puVar18 = *(long *)puVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar18 = *ppuVar15;
    }
    puStack_2d8 = ppuVar15[1];
    puStack_2e0 = *ppuVar15;
    puStack_2c8 = ppuVar15[3];
    puStack_2d0 = ppuVar15[2];
    uVar4 = *(uint *)(ppuVar15 + 1) & 0xff;
    if (puVar18 != (uint *)0x0) {
      uVar4 = *(uint *)(ppuVar15 + 1);
    }
    FUN_1008e0af8(puVar10,ppuVar11,&DAT_10f740723,10,&puStack_2e0,uVar4 + 0x2a);
    puVar18 = puStack_2e0;
    if ((uint *)0x1 < puStack_2e0) {
      do {
        lVar17 = *(long *)puStack_2e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_2e0,0x10);
        if (bVar2) {
          *(long *)puStack_2e0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_2e0 + 2))();
      }
    }
  }
  else {
    puStack_2a0 = (uint *)0x1;
    uStack_298 = 10;
    puStack_290 = &DAT_10f740723;
    if ((uint *)0x1 < puVar18) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar18,0x10);
        if (bVar2) {
          *(long *)puVar18 = *(long *)puVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_2b8 = ppuVar15[1];
    puStack_2c0 = *ppuVar15;
    puStack_2a8 = ppuVar15[3];
    puStack_2b0 = ppuVar15[2];
    ppuVar11 = &puStack_2a0;
    FUN_1008e1568(puVar10,ppuVar11,&puStack_2c0);
    if ((uint *)0x1 < puStack_2c0) {
      do {
        lVar17 = *(long *)puStack_2c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_2c0,0x10);
        if (bVar2) {
          *(long *)puStack_2c0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_2c0 + 2))();
      }
    }
    puVar18 = puStack_2a0;
    if ((uint *)0x1 < puStack_2a0) {
      do {
        lVar17 = *(long *)puStack_2a0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_2a0,0x10);
        if (bVar2) {
          *(long *)puStack_2a0 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(puStack_2a0 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    auVar30._8_8_ = ppuVar11;
    auVar30._0_8_ = puVar18;
    return auVar30;
  }
  func_0x000107c60e78();
  if ((int)ppuVar11 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_2e0);
  }
  func_0x000107c60bd8();
  ppuVar15 = &puStack_340;
  pppppuStack_2f0 = &pppppuStack_200;
  uStack_2e8 = 0x1008e1208;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)puVar18 == 0) || (*ppuVar11 == (uint *)0x0)) {
    lStack_318 = *(long *)(puVar18 + 2);
    lStack_320 = *(long *)puVar18;
    lStack_308 = *(long *)(puVar18 + 6);
    lStack_310 = *(long *)(puVar18 + 4);
    puStack_338 = ppuVar11[1];
    puStack_340 = *ppuVar11;
    puStack_328 = ppuVar11[3];
    puStack_330 = ppuVar11[2];
    plVar7 = &lStack_320;
  }
  else {
    if (*(uint **)(puVar18 + 2) == ppuVar11[1]) {
      plVar7 = (long *)(ulong)(*(uint **)(puVar18 + 4) == ppuVar11[2]);
    }
    else {
      plVar7 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      auVar31._8_8_ = ppuVar11;
      auVar31._0_8_ = plVar7;
      return auVar31;
    }
    func_0x000107c60e78();
    ppuVar15 = ppuVar11;
  }
  lVar17 = *plVar7;
  if (lVar17 == 0) {
    puVar10 = (uint *)(ulong)*(byte *)(plVar7 + 1);
    puVar18 = puVar10;
  }
  else {
    puVar10 = (uint *)plVar7[1];
    puVar18 = (uint *)(ulong)((uint)puVar10 & 0xff);
  }
  puVar19 = *ppuVar15;
  if (puVar19 == (uint *)0x0) {
    puVar20 = (uint *)(ulong)*(byte *)(ppuVar15 + 1);
  }
  else {
    puVar20 = ppuVar15[1];
  }
  if (puVar10 != puVar20) {
    uVar14 = 0;
    goto LAB_1008e1344;
  }
  if (lVar17 == 0) {
    if ((int)puVar18 == 0) goto LAB_1008e1340;
    lVar16 = (long)plVar7 + 9;
    if (puVar19 == (uint *)0x0) goto LAB_1008e1320;
LAB_1008e12fc:
    ppuVar15 = (uint **)ppuVar15[2];
  }
  else {
    if (plVar7[1] == 0) {
LAB_1008e1340:
      uVar14 = 1;
      goto LAB_1008e1344;
    }
    puVar18 = (uint *)(ulong)((uint)plVar7[1] & 0xff);
    lVar16 = plVar7[2];
    if (puVar19 != (uint *)0x0) goto LAB_1008e12fc;
LAB_1008e1320:
    ppuVar15 = (uint **)((long)ppuVar15 + 9);
  }
  if (lVar17 != 0) {
    puVar18 = (uint *)plVar7[1];
  }
  func_0x000107c610b0(lVar16,ppuVar15,puVar18);
  uVar14 = (ulong)((int)lVar16 == 0);
LAB_1008e1344:
  auVar32._8_8_ = ppuVar15;
  auVar32._0_8_ = uVar14;
  return auVar32;
}



/* Entry: 1008e0af8; end: 1008e0c77;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */
/* WARNING: Type propagation algorithm not settling */

uint * FUN_1008e0af8(uint *param_1,uint **param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint **ppuVar8;
  long *plVar9;
  int iVar10;
  uint **ppuVar11;
  byte *pbVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  uint **unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  code *unaff_x30;
  uint *puVar18;
  uint *puStack_2f0;
  uint *puStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2a8;
  undefined1 ****ppppuStack_2a0;
  undefined8 uStack_298;
  uint *puStack_290;
  uint *puStack_288;
  uint *puStack_280;
  uint *puStack_278;
  uint *puStack_270;
  uint *puStack_268;
  uint *puStack_260;
  uint *puStack_258;
  uint *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  uint *puStack_1f8;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint **ppuStack_1c0;
  uint *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined1 uStack_191;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint *puStack_170;
  undefined8 uStack_168;
  char *pcStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 *puStack_100;
  uint *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *puStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  long lStack_b8;
  undefined8 *puStack_b0;
  uint *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (uint *)(*(long *)(param_1 + 8) + 8);
  if (*puVar7 < *(uint *)param_2) {
    ppuVar8 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      iVar10 = (*puVar7 - *(uint *)param_2) + *(int *)(*(long *)(param_1 + 8) + 0x10);
      puVar6 = (undefined1 *)register0x00000008;
      goto SUB_104a9d968;
    }
  }
  else {
    FUN_1008dfcf0(puVar7,param_6);
    *(uint *)param_2 = (uint)puVar7;
    puStack_68 = (uint *)0x1;
    uStack_88 = param_5[1];
    plStack_90 = (long *)*param_5;
    uStack_78 = param_5[3];
    uStack_80 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    ppuVar8 = &puStack_68;
    uStack_60 = param_4;
    uStack_58 = param_3;
    FUN_1008dfe64(param_1,ppuVar8,&plStack_90);
    if ((long *)0x1 < plStack_90) {
      do {
        lVar13 = *plStack_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar2) {
          *plStack_90 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
    puVar7 = puStack_68;
    if ((uint *)0x1 < puStack_68) {
      do {
        lVar13 = *(long *)puStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_68,0x10);
        if (bVar2) {
          *(long *)puStack_68 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_68 + 2))();
      }
    }
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar7;
    }
  }
  iVar10 = (int)ppuVar8;
  func_0x000107c60e78();
  if (iVar10 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_90);
    FUN_1004b6d90(&puStack_68);
  }
  puVar14 = puVar7;
  func_0x000107c60bd8();
  puVar6 = auStack_e0;
  pcStack_98 = FUN_1008e0c78;
  unaff_x29 = &puStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = unaff_x20;
  puStack_a8 = puVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (iVar10 != 0) {
    func_0x000107c2c2c4();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008e0d2c);
    (*pcVar5)();
  }
  ppuVar8 = (uint **)(*(long *)(puVar14 + 8) + 0x120);
  puStack_d8 = (uint *)0x1;
  uStack_d0 = 8;
  pcStack_c8 = "trailers";
  FUN_1008e0af8();
  puVar14 = puStack_d8;
  if ((uint *)0x1 < puStack_d8) {
    do {
      lVar13 = *(long *)puStack_d8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_d8,0x10);
      if (bVar2) {
        *(long *)puStack_d8 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(puStack_d8 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar14;
  }
  func_0x000107c60e78();
  param_1 = puVar14;
  unaff_x19 = puVar7;
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_d8);
    param_1 = puVar14;
    func_0x000107c60bd8();
    unaff_x19 = puVar14;
  }
  func_0x000107c60bd8();
  pcStack_e8 = FUN_1008e0d50;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar13 + 0x178);
  puStack_100 = unaff_x20;
  puStack_f8 = unaff_x19;
  ppuStack_f0 = unaff_x29;
  if (((uVar4 == 0) || ((uint)*(byte *)(lVar13 + 0x17c) != ((uint)ppuVar8 & 0xff))) ||
     (uVar4 <= *(uint *)(lVar13 + 8))) {
    puStack_130 = (uint *)0x1;
    uStack_128 = 0x14;
    pcStack_120 = "grpc-accept-encoding";
    uStack_191 = (char)ppuVar8;
    FUN_10061b500(&plStack_150,&uStack_191);
    uVar4 = (uint)uStack_148 & 0xff;
    if (plStack_150 != (long *)0x0) {
      uVar4 = (uint)uStack_148;
    }
    lVar13 = *(long *)(param_1 + 8) + 8;
    FUN_1008dfcf0(lVar13,uVar4 + 0x34);
    lVar16 = *(long *)(param_1 + 8);
    *(int *)(lVar16 + 0x178) = (int)lVar13;
    *(char *)(lVar16 + 0x17c) = (char)ppuVar8;
    uStack_168 = uStack_128;
    puStack_170 = puStack_130;
    uStack_158 = uStack_118;
    pcStack_160 = pcStack_120;
    uStack_128 = 0;
    puStack_130 = (uint *)0x0;
    uStack_118 = 0;
    pcStack_120 = (char *)0x0;
    uStack_188 = uStack_148;
    plStack_190 = plStack_150;
    uStack_178 = uStack_138;
    uStack_180 = uStack_140;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    ppuVar11 = &puStack_170;
    FUN_1008dfe64(param_1,ppuVar11,&plStack_190);
    if ((long *)0x1 < plStack_190) {
      do {
        lVar13 = *plStack_190;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
        if (bVar2) {
          *plStack_190 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_190[1])();
      }
    }
    if ((uint *)0x1 < puStack_170) {
      do {
        lVar13 = *(long *)puStack_170;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_170,0x10);
        if (bVar2) {
          *(long *)puStack_170 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_170 + 2))();
      }
    }
    if ((long *)0x1 < plStack_150) {
      do {
        lVar13 = *plStack_150;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
        if (bVar2) {
          *plStack_150 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_150[1])();
      }
    }
    param_1 = puStack_130;
    if ((uint *)0x1 < puStack_130) {
      do {
        lVar13 = *(long *)puStack_130;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_130,0x10);
        if (bVar2) {
          *(long *)puStack_130 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_130 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return param_1;
    }
  }
  else {
    ppuVar11 = ppuVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      iVar10 = (*(uint *)(lVar13 + 8) - uVar4) + *(int *)(lVar13 + 0x10);
      unaff_x30 = FUN_1008e0d50;
SUB_104a9d968:
      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
      *(uint ***)(puVar6 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar6 + -0x20) = unaff_x20;
      *(uint **)(puVar6 + -0x18) = unaff_x19;
      *(undefined1 ***)(puVar6 + -0x10) = unaff_x29;
      *(code **)(puVar6 + -8) = unaff_x30;
      uVar4 = iVar10 - 0x41;
      if (iVar10 + 0x3eU < 0x7f) {
        puVar7 = (uint *)0x1;
      }
      else {
        puVar7 = (uint *)(ulong)uVar4;
        FUN_1008e186c();
      }
      FUN_1008e016c(param_1,(ulong)puVar7 & 0xffffffff);
      puVar14 = *(uint **)(param_1 + 4);
      *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
           *(long *)(*(long *)(param_1 + 6) + 0x10) + ((ulong)puVar7 & 0xffffffff);
      func_0x0001008e01c0(puVar14,(ulong)puVar7 & 0xffffffff);
      if ((int)puVar7 != 1) {
        pbVar12 = (byte *)((long)puVar14 + 1);
        *(byte *)puVar14 = 0xff;
        uVar3 = (int)puVar7 - 2;
        switch((ulong)uVar3) {
        case 4:
          *(byte *)((long)puVar14 + 5) = (byte)(uVar4 >> 0x1c) | 0x80;
        case 3:
          *(byte *)(puVar14 + 1) = (byte)(uVar4 >> 0x15) | 0x80;
        case 2:
          *(byte *)((long)puVar14 + 3) = (byte)(uVar4 >> 0xe) | 0x80;
        case 1:
          *(byte *)((long)puVar14 + 2) = (byte)(uVar4 >> 7) | 0x80;
        case 0:
          *pbVar12 = (byte)uVar4 | 0x80;
        default:
          pbVar12[uVar3] = pbVar12[uVar3] & 0x7f;
          return (uint *)(ulong)uVar4;
        }
      }
      *(byte *)puVar14 = (byte)(iVar10 + 0x3eU) | 0x80;
      return puVar14;
    }
  }
  func_0x000107c60e78();
  if ((int)ppuVar11 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_190);
    FUN_1004b6d90(&puStack_170);
    FUN_1004b6d90(&plStack_150);
    FUN_1004b6d90(&puStack_130);
  }
  puVar7 = param_1;
  func_0x000107c60bd8();
  uStack_1d0 = unaff_x22;
  uStack_1c8 = unaff_x21;
  ppuStack_1c0 = ppuVar8;
  puStack_1b8 = param_1;
  pppuStack_1b0 = &ppuStack_f0;
  pcStack_1a8 = FUN_1008e0f7c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = *ppuVar11;
  if ((puVar14 == (uint *)0x0) || (ppuVar11[1] < (uint *)0x10000)) {
    lVar13 = *(long *)(puVar7 + 8);
    puStack_208 = ppuVar11[1];
    puStack_210 = *ppuVar11;
    puStack_1f8 = ppuVar11[3];
    puStack_200 = ppuVar11[2];
    uStack_228 = *(undefined8 *)(lVar13 + 400);
    uStack_230 = *(undefined8 *)(lVar13 + 0x188);
    uStack_218 = *(undefined8 *)(lVar13 + 0x1a0);
    uStack_220 = *(undefined8 *)(lVar13 + 0x198);
    ppuVar8 = &puStack_210;
    func_0x0001008e1208(ppuVar8,&uStack_230);
    if ((int)ppuVar8 == 0) {
      puVar14 = *ppuVar11;
      if ((uint *)0x1 < puVar14) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar2) {
            *(long *)puVar14 = *(long *)puVar14 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar14 = *ppuVar11;
      }
      puStack_200 = ppuVar11[3];
      puVar18 = ppuVar11[2];
      puVar17 = ppuVar11[1];
      lVar13 = *(long *)(puVar7 + 8);
      plVar9 = *(long **)(lVar13 + 0x188);
      puVar15 = *(uint **)(lVar13 + 0x1a0);
      puStack_208 = *(uint **)(lVar13 + 0x198);
      puStack_210 = *(uint **)(lVar13 + 400);
      *(uint **)(lVar13 + 0x188) = puVar14;
      *(uint **)(lVar13 + 0x198) = puVar18;
      *(uint **)(lVar13 + 400) = puVar17;
      *(uint **)(lVar13 + 0x1a0) = puStack_200;
      puStack_200 = puVar15;
      if ((long *)0x1 < plVar9) {
        do {
          lVar13 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plVar9[1])();
        }
      }
      lVar13 = *(long *)(puVar7 + 8);
      *(undefined4 *)(lVar13 + 0x128) = 0;
    }
    else {
      lVar13 = *(long *)(puVar7 + 8);
    }
    ppuVar8 = (uint **)(lVar13 + 0x128);
    puVar14 = *ppuVar11;
    if ((uint *)0x1 < puVar14) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar2) {
          *(long *)puVar14 = *(long *)puVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar14 = *ppuVar11;
    }
    puStack_288 = ppuVar11[1];
    puStack_290 = *ppuVar11;
    puStack_278 = ppuVar11[3];
    puStack_280 = ppuVar11[2];
    uVar4 = *(uint *)(ppuVar11 + 1) & 0xff;
    if (puVar14 != (uint *)0x0) {
      uVar4 = *(uint *)(ppuVar11 + 1);
    }
    FUN_1008e0af8(puVar7,ppuVar8,&DAT_10f740723,10,&puStack_290,uVar4 + 0x2a);
    puVar7 = puStack_290;
    if ((uint *)0x1 < puStack_290) {
      do {
        lVar13 = *(long *)puStack_290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_290,0x10);
        if (bVar2) {
          *(long *)puStack_290 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_290 + 2))();
      }
    }
  }
  else {
    puStack_250 = (uint *)0x1;
    uStack_248 = 10;
    puStack_240 = &DAT_10f740723;
    if ((uint *)0x1 < puVar14) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar2) {
          *(long *)puVar14 = *(long *)puVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_268 = ppuVar11[1];
    puStack_270 = *ppuVar11;
    puStack_258 = ppuVar11[3];
    puStack_260 = ppuVar11[2];
    ppuVar8 = &puStack_250;
    FUN_1008e1568(puVar7,ppuVar8,&puStack_270);
    if ((uint *)0x1 < puStack_270) {
      do {
        lVar13 = *(long *)puStack_270;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
        if (bVar2) {
          *(long *)puStack_270 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_270 + 2))();
      }
    }
    puVar7 = puStack_250;
    if ((uint *)0x1 < puStack_250) {
      do {
        lVar13 = *(long *)puStack_250;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_250,0x10);
        if (bVar2) {
          *(long *)puStack_250 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(puStack_250 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar7;
  }
  func_0x000107c60e78();
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_290);
  }
  func_0x000107c60bd8();
  ppuVar11 = &puStack_2f0;
  ppppuStack_2a0 = &pppuStack_1b0;
  uStack_298 = 0x1008e1208;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)puVar7 == 0) || (*ppuVar8 == (uint *)0x0)) {
    lStack_2c8 = *(long *)(puVar7 + 2);
    lStack_2d0 = *(long *)puVar7;
    lStack_2b8 = *(long *)(puVar7 + 6);
    lStack_2c0 = *(long *)(puVar7 + 4);
    puStack_2e8 = ppuVar8[1];
    puStack_2f0 = *ppuVar8;
    puStack_2d8 = ppuVar8[3];
    puStack_2e0 = ppuVar8[2];
    puVar7 = (uint *)&lStack_2d0;
  }
  else {
    if (*(uint **)(puVar7 + 2) == ppuVar8[1]) {
      puVar7 = (uint *)(ulong)(*(uint **)(puVar7 + 4) == ppuVar8[2]);
    }
    else {
      puVar7 = (uint *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return puVar7;
    }
    func_0x000107c60e78();
    ppuVar11 = ppuVar8;
  }
  lVar13 = *(long *)puVar7;
  if (lVar13 == 0) {
    puVar15 = (uint *)(ulong)(byte)puVar7[2];
    puVar14 = puVar15;
  }
  else {
    puVar15 = *(uint **)(puVar7 + 2);
    puVar14 = (uint *)(ulong)((uint)puVar15 & 0xff);
  }
  if (*ppuVar11 == (uint *)0x0) {
    puVar17 = (uint *)(ulong)*(byte *)(ppuVar11 + 1);
  }
  else {
    puVar17 = ppuVar11[1];
  }
  if (puVar15 == puVar17) {
    if (lVar13 == 0) {
      if ((int)puVar14 == 0) {
        return (uint *)0x1;
      }
      lVar16 = (long)puVar7 + 9;
    }
    else {
      if (*(long *)(puVar7 + 2) == 0) {
        return (uint *)0x1;
      }
      puVar14 = (uint *)(ulong)((uint)*(long *)(puVar7 + 2) & 0xff);
      lVar16 = *(long *)(puVar7 + 4);
    }
    if (*ppuVar11 == (uint *)0x0) {
      puVar15 = (uint *)((long)ppuVar11 + 9);
    }
    else {
      puVar15 = ppuVar11[2];
    }
    if (lVar13 != 0) {
      puVar14 = *(uint **)(puVar7 + 2);
    }
    func_0x000107c610b0(lVar16,puVar15,puVar14);
    return (uint *)(ulong)((int)lVar16 == 0);
  }
  return (uint *)0x0;
}



/* Entry: 1008e0c78; end: 1008e0d4f;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1008e0c78(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  byte **ppbVar7;
  long *plVar8;
  byte **ppbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_218;
  undefined1 ***pppuStack_210;
  undefined8 uStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  long lStack_148;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 uStack_101;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  byte *pbStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    func_0x000107c2c2c4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008e0d2c);
    (*pcVar6)();
  }
  ppbVar9 = (byte **)(*(long *)(param_1 + 0x20) + 0x120);
  pbStack_48 = (byte *)0x1;
  uStack_40 = 8;
  pcStack_38 = "trailers";
  FUN_1008e0af8(param_1,ppbVar9,&DAT_10f466389,2,&pbStack_48,0x2a);
  pbVar10 = pbStack_48;
  if ((byte *)0x1 < pbStack_48) {
    do {
      lVar11 = *(long *)pbStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbStack_48,0x10);
      if (bVar4) {
        *(long *)pbStack_48 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(pbStack_48 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pbVar10;
  }
  func_0x000107c60e78();
  if ((int)ppbVar9 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pbStack_48);
    func_0x000107c60bd8();
  }
  func_0x000107c60bd8();
  pcStack_58 = FUN_1008e0d50;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(pbVar10 + 0x20);
  uVar2 = *(uint *)(lVar12 + 0x178);
  puStack_60 = &stack0xfffffffffffffff0;
  if (((uVar2 == 0) || ((uint)*(byte *)(lVar12 + 0x17c) != ((uint)ppbVar9 & 0xff))) ||
     (uVar2 <= *(uint *)(lVar12 + 8))) {
    pbStack_a0 = (byte *)0x1;
    uStack_98 = 0x14;
    uStack_101 = (char)ppbVar9;
    FUN_10061b500(&plStack_c0,&uStack_101);
    uVar2 = (uint)uStack_b8 & 0xff;
    if (plStack_c0 != (long *)0x0) {
      uVar2 = (uint)uStack_b8;
    }
    lVar12 = *(long *)(pbVar10 + 0x20) + 8;
    FUN_1008dfcf0(lVar12,uVar2 + 0x34);
    lVar13 = *(long *)(pbVar10 + 0x20);
    *(int *)(lVar13 + 0x178) = (int)lVar12;
    *(char *)(lVar13 + 0x17c) = (char)ppbVar9;
    uStack_d8 = uStack_98;
    pbStack_e0 = pbStack_a0;
    pcStack_d0 = "grpc-accept-encoding";
    uStack_98 = 0;
    pbStack_a0 = (byte *)0x0;
    uStack_f8 = uStack_b8;
    plStack_100 = plStack_c0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_b8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    ppbVar9 = &pbStack_e0;
    FUN_1008dfe64(pbVar10,ppbVar9,&plStack_100);
    if ((long *)0x1 < plStack_100) {
      do {
        lVar12 = *plStack_100;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
        if (bVar4) {
          *plStack_100 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_100[1])();
      }
    }
    if ((byte *)0x1 < pbStack_e0) {
      do {
        lVar12 = *(long *)pbStack_e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_e0,0x10);
        if (bVar4) {
          *(long *)pbStack_e0 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(pbStack_e0 + 8))();
      }
    }
    if ((long *)0x1 < plStack_c0) {
      do {
        lVar12 = *plStack_c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar4) {
          *plStack_c0 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
    pbVar10 = pbStack_a0;
    if ((byte *)0x1 < pbStack_a0) {
      do {
        lVar12 = *(long *)pbStack_a0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_a0,0x10);
        if (bVar4) {
          *(long *)pbStack_a0 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(pbStack_a0 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return pbVar10;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    iVar1 = (*(uint *)(lVar12 + 8) - uVar2) + *(int *)(lVar12 + 0x10);
    uVar2 = iVar1 + 0x3e;
    pcStack_58 = FUN_1008e0d50;
    uVar5 = iVar1 - 0x41;
    if (uVar2 < 0x7f) {
      pbVar16 = (byte *)0x1;
    }
    else {
      pbVar16 = (byte *)(ulong)uVar5;
      FUN_1008e186c();
    }
    FUN_1008e016c(pbVar10,(ulong)pbVar16 & 0xffffffff);
    pbVar14 = *(byte **)(pbVar10 + 0x10);
    *(ulong *)(*(long *)(pbVar10 + 0x18) + 0x10) =
         *(long *)(*(long *)(pbVar10 + 0x18) + 0x10) + ((ulong)pbVar16 & 0xffffffff);
    func_0x0001008e01c0(pbVar14,(ulong)pbVar16 & 0xffffffff);
    if ((int)pbVar16 != 1) {
      pbVar10 = pbVar14 + 1;
      *pbVar14 = 0xff;
      uVar2 = (int)pbVar16 - 2;
      switch((ulong)uVar2) {
      case 4:
        pbVar14[5] = (byte)(uVar5 >> 0x1c) | 0x80;
      case 3:
        pbVar14[4] = (byte)(uVar5 >> 0x15) | 0x80;
      case 2:
        pbVar14[3] = (byte)(uVar5 >> 0xe) | 0x80;
      case 1:
        pbVar14[2] = (byte)(uVar5 >> 7) | 0x80;
      case 0:
        *pbVar10 = (byte)uVar5 | 0x80;
      default:
        pbVar10[uVar2] = pbVar10[uVar2] & 0x7f;
        return (byte *)(ulong)uVar5;
      }
    }
    *pbVar14 = (byte)uVar2 | 0x80;
    return pbVar14;
  }
  func_0x000107c60e78();
  if ((int)ppbVar9 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_100);
    FUN_1004b6d90(&pbStack_e0);
    FUN_1004b6d90(&plStack_c0);
    FUN_1004b6d90(&pbStack_a0);
  }
  func_0x000107c60bd8();
  ppuStack_120 = &puStack_60;
  pcStack_118 = FUN_1008e0f7c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar16 = *ppbVar9;
  if ((pbVar16 == (byte *)0x0) || (ppbVar9[1] < (byte *)0x10000)) {
    lVar11 = *(long *)(pbVar10 + 0x20);
    pbStack_178 = ppbVar9[1];
    pbStack_180 = *ppbVar9;
    pbStack_168 = ppbVar9[3];
    pbStack_170 = ppbVar9[2];
    uStack_198 = *(undefined8 *)(lVar11 + 400);
    uStack_1a0 = *(undefined8 *)(lVar11 + 0x188);
    uStack_188 = *(undefined8 *)(lVar11 + 0x1a0);
    uStack_190 = *(undefined8 *)(lVar11 + 0x198);
    ppbVar7 = &pbStack_180;
    func_0x0001008e1208(ppbVar7,&uStack_1a0);
    if ((int)ppbVar7 == 0) {
      pbVar16 = *ppbVar9;
      if ((byte *)0x1 < pbVar16) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar16,0x10);
          if (bVar4) {
            *(long *)pbVar16 = *(long *)pbVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pbVar16 = *ppbVar9;
      }
      pbStack_170 = ppbVar9[3];
      pbVar17 = ppbVar9[2];
      pbVar15 = ppbVar9[1];
      lVar11 = *(long *)(pbVar10 + 0x20);
      plVar8 = *(long **)(lVar11 + 0x188);
      pbVar14 = *(byte **)(lVar11 + 0x1a0);
      pbStack_178 = *(byte **)(lVar11 + 0x198);
      pbStack_180 = *(byte **)(lVar11 + 400);
      *(byte **)(lVar11 + 0x188) = pbVar16;
      *(byte **)(lVar11 + 0x198) = pbVar17;
      *(byte **)(lVar11 + 400) = pbVar15;
      *(byte **)(lVar11 + 0x1a0) = pbStack_170;
      pbStack_170 = pbVar14;
      if ((long *)0x1 < plVar8) {
        do {
          lVar11 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plVar8[1])();
        }
      }
      lVar11 = *(long *)(pbVar10 + 0x20);
      *(undefined4 *)(lVar11 + 0x128) = 0;
    }
    else {
      lVar11 = *(long *)(pbVar10 + 0x20);
    }
    ppbVar7 = (byte **)(lVar11 + 0x128);
    pbVar16 = *ppbVar9;
    if ((byte *)0x1 < pbVar16) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar16,0x10);
        if (bVar4) {
          *(long *)pbVar16 = *(long *)pbVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pbVar16 = *ppbVar9;
    }
    pbStack_1f8 = ppbVar9[1];
    pbStack_200 = *ppbVar9;
    pbStack_1e8 = ppbVar9[3];
    pbStack_1f0 = ppbVar9[2];
    uVar2 = *(uint *)(ppbVar9 + 1) & 0xff;
    if (pbVar16 != (byte *)0x0) {
      uVar2 = *(uint *)(ppbVar9 + 1);
    }
    FUN_1008e0af8(pbVar10,ppbVar7,&DAT_10f740723,10,&pbStack_200,uVar2 + 0x2a);
    pbVar10 = pbStack_200;
    if ((byte *)0x1 < pbStack_200) {
      do {
        lVar11 = *(long *)pbStack_200;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_200,0x10);
        if (bVar4) {
          *(long *)pbStack_200 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(pbStack_200 + 8))();
      }
    }
  }
  else {
    pbStack_1c0 = (byte *)0x1;
    uStack_1b8 = 10;
    puStack_1b0 = &DAT_10f740723;
    if ((byte *)0x1 < pbVar16) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar16,0x10);
        if (bVar4) {
          *(long *)pbVar16 = *(long *)pbVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pbStack_1d8 = ppbVar9[1];
    pbStack_1e0 = *ppbVar9;
    pbStack_1c8 = ppbVar9[3];
    pbStack_1d0 = ppbVar9[2];
    ppbVar7 = &pbStack_1c0;
    FUN_1008e1568(pbVar10,ppbVar7,&pbStack_1e0);
    if ((byte *)0x1 < pbStack_1e0) {
      do {
        lVar11 = *(long *)pbStack_1e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_1e0,0x10);
        if (bVar4) {
          *(long *)pbStack_1e0 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(pbStack_1e0 + 8))();
      }
    }
    pbVar10 = pbStack_1c0;
    if ((byte *)0x1 < pbStack_1c0) {
      do {
        lVar11 = *(long *)pbStack_1c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_1c0,0x10);
        if (bVar4) {
          *(long *)pbStack_1c0 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(pbStack_1c0 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    func_0x000107c60e78();
    if ((int)ppbVar7 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&pbStack_200);
    }
    func_0x000107c60bd8();
    ppbVar9 = &pbStack_260;
    pppuStack_210 = &ppuStack_120;
    uStack_208 = 0x1008e1208;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(long *)pbVar10 == 0) || (*ppbVar7 == (byte *)0x0)) {
      lStack_238 = *(long *)(pbVar10 + 8);
      lStack_240 = *(long *)pbVar10;
      lStack_228 = *(long *)(pbVar10 + 0x18);
      lStack_230 = *(long *)(pbVar10 + 0x10);
      pbStack_258 = ppbVar7[1];
      pbStack_260 = *ppbVar7;
      pbStack_248 = ppbVar7[3];
      pbStack_250 = ppbVar7[2];
      pbVar10 = (byte *)&lStack_240;
    }
    else {
      if (*(byte **)(pbVar10 + 8) == ppbVar7[1]) {
        pbVar10 = (byte *)(ulong)(*(byte **)(pbVar10 + 0x10) == ppbVar7[2]);
      }
      else {
        pbVar10 = (byte *)0x0;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        return pbVar10;
      }
      func_0x000107c60e78();
      ppbVar9 = ppbVar7;
    }
    lVar11 = *(long *)pbVar10;
    if (lVar11 == 0) {
      pbVar14 = (byte *)(ulong)pbVar10[8];
      pbVar16 = pbVar14;
    }
    else {
      pbVar14 = *(byte **)(pbVar10 + 8);
      pbVar16 = (byte *)(ulong)((uint)pbVar14 & 0xff);
    }
    if (*ppbVar9 == (byte *)0x0) {
      pbVar15 = (byte *)(ulong)*(byte *)(ppbVar9 + 1);
    }
    else {
      pbVar15 = ppbVar9[1];
    }
    if (pbVar14 == pbVar15) {
      if (lVar11 == 0) {
        if ((int)pbVar16 == 0) {
          return (byte *)0x1;
        }
        pbVar14 = pbVar10 + 9;
      }
      else {
        if (*(long *)(pbVar10 + 8) == 0) {
          return (byte *)0x1;
        }
        pbVar16 = (byte *)(ulong)((uint)*(long *)(pbVar10 + 8) & 0xff);
        pbVar14 = *(byte **)(pbVar10 + 0x10);
      }
      if (*ppbVar9 == (byte *)0x0) {
        pbVar15 = (byte *)((long)ppbVar9 + 9);
      }
      else {
        pbVar15 = ppbVar9[2];
      }
      if (lVar11 != 0) {
        pbVar16 = *(byte **)(pbVar10 + 8);
      }
      func_0x000107c610b0(pbVar14,pbVar15,pbVar16);
      return (byte *)(ulong)((int)pbVar14 == 0);
    }
    return (byte *)0x0;
  }
  return pbVar10;
}



/* Entry: 1008e0d50; end: 1008e0f7b;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1008e0d50(byte *param_1,byte **param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  byte **ppbVar6;
  long *plVar7;
  byte **ppbVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x20);
  uVar2 = *(uint *)(lVar11 + 0x178);
  if (((uVar2 == 0) || ((uint)*(byte *)(lVar11 + 0x17c) != ((uint)param_2 & 0xff))) ||
     (uVar2 <= *(uint *)(lVar11 + 8))) {
    pbStack_50 = (byte *)0x1;
    uStack_48 = 0x14;
    uStack_b1 = (char)param_2;
    FUN_10061b500(&plStack_70,&uStack_b1);
    uVar2 = (uint)uStack_68 & 0xff;
    if (plStack_70 != (long *)0x0) {
      uVar2 = (uint)uStack_68;
    }
    lVar11 = *(long *)(param_1 + 0x20) + 8;
    FUN_1008dfcf0(lVar11,uVar2 + 0x34);
    lVar12 = *(long *)(param_1 + 0x20);
    *(int *)(lVar12 + 0x178) = (int)lVar11;
    *(char *)(lVar12 + 0x17c) = (char)param_2;
    uStack_88 = uStack_48;
    pbStack_90 = pbStack_50;
    pcStack_80 = "grpc-accept-encoding";
    uStack_48 = 0;
    pbStack_50 = (byte *)0x0;
    uStack_a8 = uStack_68;
    plStack_b0 = plStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_68 = 0;
    plStack_70 = (long *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
    param_2 = &pbStack_90;
    FUN_1008dfe64(param_1,param_2,&plStack_b0);
    if ((long *)0x1 < plStack_b0) {
      do {
        lVar11 = *plStack_b0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar4) {
          *plStack_b0 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
    if ((byte *)0x1 < pbStack_90) {
      do {
        lVar11 = *(long *)pbStack_90;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_90,0x10);
        if (bVar4) {
          *(long *)pbStack_90 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(pbStack_90 + 8))();
      }
    }
    if ((long *)0x1 < plStack_70) {
      do {
        lVar11 = *plStack_70;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar4) {
          *plStack_70 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    param_1 = pbStack_50;
    if ((byte *)0x1 < pbStack_50) {
      do {
        lVar11 = *(long *)pbStack_50;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_50,0x10);
        if (bVar4) {
          *(long *)pbStack_50 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(pbStack_50 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return param_1;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    iVar1 = (*(uint *)(lVar11 + 8) - uVar2) + *(int *)(lVar11 + 0x10);
    uVar2 = iVar1 + 0x3e;
    uVar5 = iVar1 - 0x41;
    if (uVar2 < 0x7f) {
      pbVar15 = (byte *)0x1;
    }
    else {
      pbVar15 = (byte *)(ulong)uVar5;
      FUN_1008e186c();
    }
    FUN_1008e016c(param_1,(ulong)pbVar15 & 0xffffffff);
    pbVar13 = *(byte **)(param_1 + 0x10);
    *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
         *(long *)(*(long *)(param_1 + 0x18) + 0x10) + ((ulong)pbVar15 & 0xffffffff);
    func_0x0001008e01c0(pbVar13,(ulong)pbVar15 & 0xffffffff);
    if ((int)pbVar15 != 1) {
      pbVar9 = pbVar13 + 1;
      *pbVar13 = 0xff;
      uVar2 = (int)pbVar15 - 2;
      switch((ulong)uVar2) {
      case 4:
        pbVar13[5] = (byte)(uVar5 >> 0x1c) | 0x80;
      case 3:
        pbVar13[4] = (byte)(uVar5 >> 0x15) | 0x80;
      case 2:
        pbVar13[3] = (byte)(uVar5 >> 0xe) | 0x80;
      case 1:
        pbVar13[2] = (byte)(uVar5 >> 7) | 0x80;
      case 0:
        *pbVar9 = (byte)uVar5 | 0x80;
      default:
        pbVar9[uVar2] = pbVar9[uVar2] & 0x7f;
        return (byte *)(ulong)uVar5;
      }
    }
    *pbVar13 = (byte)uVar2 | 0x80;
    return pbVar13;
  }
  func_0x000107c60e78();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_b0);
    FUN_1004b6d90(&pbStack_90);
    FUN_1004b6d90(&plStack_70);
    FUN_1004b6d90(&pbStack_50);
  }
  func_0x000107c60bd8();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_1008e0f7c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar15 = *param_2;
  if ((pbVar15 == (byte *)0x0) || (param_2[1] < (byte *)0x10000)) {
    lVar10 = *(long *)(param_1 + 0x20);
    pbStack_128 = param_2[1];
    pbStack_130 = *param_2;
    pbStack_118 = param_2[3];
    pbStack_120 = param_2[2];
    uStack_148 = *(undefined8 *)(lVar10 + 400);
    uStack_150 = *(undefined8 *)(lVar10 + 0x188);
    uStack_138 = *(undefined8 *)(lVar10 + 0x1a0);
    uStack_140 = *(undefined8 *)(lVar10 + 0x198);
    ppbVar6 = &pbStack_130;
    func_0x0001008e1208(ppbVar6,&uStack_150);
    if ((int)ppbVar6 == 0) {
      pbVar15 = *param_2;
      if ((byte *)0x1 < pbVar15) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar15,0x10);
          if (bVar4) {
            *(long *)pbVar15 = *(long *)pbVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pbVar15 = *param_2;
      }
      pbStack_120 = param_2[3];
      pbVar14 = param_2[2];
      pbVar9 = param_2[1];
      lVar10 = *(long *)(param_1 + 0x20);
      plVar7 = *(long **)(lVar10 + 0x188);
      pbVar13 = *(byte **)(lVar10 + 0x1a0);
      pbStack_128 = *(byte **)(lVar10 + 0x198);
      pbStack_130 = *(byte **)(lVar10 + 400);
      *(byte **)(lVar10 + 0x188) = pbVar15;
      *(byte **)(lVar10 + 0x198) = pbVar14;
      *(byte **)(lVar10 + 400) = pbVar9;
      *(byte **)(lVar10 + 0x1a0) = pbStack_120;
      pbStack_120 = pbVar13;
      if ((long *)0x1 < plVar7) {
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plVar7[1])();
        }
      }
      lVar10 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(lVar10 + 0x128) = 0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x20);
    }
    ppbVar6 = (byte **)(lVar10 + 0x128);
    pbVar15 = *param_2;
    if ((byte *)0x1 < pbVar15) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar15,0x10);
        if (bVar4) {
          *(long *)pbVar15 = *(long *)pbVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pbVar15 = *param_2;
    }
    pbStack_1a8 = param_2[1];
    pbStack_1b0 = *param_2;
    pbStack_198 = param_2[3];
    pbStack_1a0 = param_2[2];
    uVar2 = *(uint *)(param_2 + 1) & 0xff;
    if (pbVar15 != (byte *)0x0) {
      uVar2 = *(uint *)(param_2 + 1);
    }
    FUN_1008e0af8(param_1,ppbVar6,&DAT_10f740723,10,&pbStack_1b0,uVar2 + 0x2a);
    pbVar15 = pbStack_1b0;
    if ((byte *)0x1 < pbStack_1b0) {
      do {
        lVar10 = *(long *)pbStack_1b0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_1b0,0x10);
        if (bVar4) {
          *(long *)pbStack_1b0 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(pbStack_1b0 + 8))();
      }
    }
  }
  else {
    pbStack_170 = (byte *)0x1;
    uStack_168 = 10;
    puStack_160 = &DAT_10f740723;
    if ((byte *)0x1 < pbVar15) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar15,0x10);
        if (bVar4) {
          *(long *)pbVar15 = *(long *)pbVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pbStack_188 = param_2[1];
    pbStack_190 = *param_2;
    pbStack_178 = param_2[3];
    pbStack_180 = param_2[2];
    ppbVar6 = &pbStack_170;
    FUN_1008e1568(param_1,ppbVar6,&pbStack_190);
    if ((byte *)0x1 < pbStack_190) {
      do {
        lVar10 = *(long *)pbStack_190;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_190,0x10);
        if (bVar4) {
          *(long *)pbStack_190 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(pbStack_190 + 8))();
      }
    }
    pbVar15 = pbStack_170;
    if ((byte *)0x1 < pbStack_170) {
      do {
        lVar10 = *(long *)pbStack_170;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbStack_170,0x10);
        if (bVar4) {
          *(long *)pbStack_170 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(pbStack_170 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    func_0x000107c60e78();
    if ((int)ppbVar6 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&pbStack_1b0);
    }
    func_0x000107c60bd8();
    ppbVar8 = &pbStack_210;
    ppuStack_1c0 = &puStack_d0;
    uStack_1b8 = 0x1008e1208;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(long *)pbVar15 == 0) || (*ppbVar6 == (byte *)0x0)) {
      lStack_1e8 = *(long *)(pbVar15 + 8);
      lStack_1f0 = *(long *)pbVar15;
      lStack_1d8 = *(long *)(pbVar15 + 0x18);
      lStack_1e0 = *(long *)(pbVar15 + 0x10);
      pbStack_208 = ppbVar6[1];
      pbStack_210 = *ppbVar6;
      pbStack_1f8 = ppbVar6[3];
      pbStack_200 = ppbVar6[2];
      pbVar15 = (byte *)&lStack_1f0;
    }
    else {
      if (*(byte **)(pbVar15 + 8) == ppbVar6[1]) {
        pbVar15 = (byte *)(ulong)(*(byte **)(pbVar15 + 0x10) == ppbVar6[2]);
      }
      else {
        pbVar15 = (byte *)0x0;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        return pbVar15;
      }
      func_0x000107c60e78();
      ppbVar8 = ppbVar6;
    }
    lVar10 = *(long *)pbVar15;
    if (lVar10 == 0) {
      pbVar9 = (byte *)(ulong)pbVar15[8];
      pbVar13 = pbVar9;
    }
    else {
      pbVar9 = *(byte **)(pbVar15 + 8);
      pbVar13 = (byte *)(ulong)((uint)pbVar9 & 0xff);
    }
    if (*ppbVar8 == (byte *)0x0) {
      pbVar14 = (byte *)(ulong)*(byte *)(ppbVar8 + 1);
    }
    else {
      pbVar14 = ppbVar8[1];
    }
    if (pbVar9 == pbVar14) {
      if (lVar10 == 0) {
        if ((int)pbVar13 == 0) {
          return (byte *)0x1;
        }
        pbVar9 = pbVar15 + 9;
      }
      else {
        if (*(long *)(pbVar15 + 8) == 0) {
          return (byte *)0x1;
        }
        pbVar13 = (byte *)(ulong)((uint)*(long *)(pbVar15 + 8) & 0xff);
        pbVar9 = *(byte **)(pbVar15 + 0x10);
      }
      if (*ppbVar8 == (byte *)0x0) {
        pbVar14 = (byte *)((long)ppbVar8 + 9);
      }
      else {
        pbVar14 = ppbVar8[2];
      }
      if (lVar10 != 0) {
        pbVar13 = *(byte **)(pbVar15 + 8);
      }
      func_0x000107c610b0(pbVar9,pbVar14,pbVar13);
      return (byte *)(ulong)((int)pbVar9 == 0);
    }
    return (byte *)0x0;
  }
  return pbVar15;
}



/* Entry: 1008e0f7c; end: 1008e1207;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */

long * FUN_1008e0f7c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)*param_2;
  if ((plVar7 == (long *)0x0) || ((ulong)param_2[1] < 0x10000)) {
    lVar8 = *(long *)(param_1 + 0x20);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_88 = *(undefined8 *)(lVar8 + 400);
    uStack_90 = *(undefined8 *)(lVar8 + 0x188);
    uStack_78 = *(undefined8 *)(lVar8 + 0x1a0);
    uStack_80 = *(undefined8 *)(lVar8 + 0x198);
    puVar4 = &uStack_70;
    func_0x0001008e1208(puVar4,&uStack_90);
    if ((int)puVar4 == 0) {
      plVar7 = (long *)*param_2;
      if ((long *)0x1 < plVar7) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar7 = (long *)*param_2;
      }
      uVar11 = param_2[3];
      uVar15 = param_2[2];
      uVar14 = param_2[1];
      lVar8 = *(long *)(param_1 + 0x20);
      plVar12 = *(long **)(lVar8 + 0x188);
      uStack_60 = *(undefined8 *)(lVar8 + 0x1a0);
      uStack_68 = *(undefined8 *)(lVar8 + 0x198);
      uStack_70 = *(undefined8 *)(lVar8 + 400);
      *(long **)(lVar8 + 0x188) = plVar7;
      *(undefined8 *)(lVar8 + 0x198) = uVar15;
      *(ulong *)(lVar8 + 400) = uVar14;
      *(undefined8 *)(lVar8 + 0x1a0) = uVar11;
      if ((long *)0x1 < plVar12) {
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (*(code *)plVar12[1])();
        }
      }
      lVar8 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(lVar8 + 0x128) = 0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x20);
    }
    pplVar5 = (long **)(lVar8 + 0x128);
    plVar7 = (long *)*param_2;
    if ((long *)0x1 < plVar7) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = (long *)*param_2;
    }
    uStack_e8 = param_2[1];
    plStack_f0 = (long *)*param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    uVar1 = *(uint *)(param_2 + 1) & 0xff;
    if (plVar7 != (long *)0x0) {
      uVar1 = *(uint *)(param_2 + 1);
    }
    FUN_1008e0af8(param_1,pplVar5,&DAT_10f740723,10,&plStack_f0,uVar1 + 0x2a);
    plVar7 = plStack_f0;
    if ((long *)0x1 < plStack_f0) {
      do {
        lVar8 = *plStack_f0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
        if (bVar3) {
          *plStack_f0 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_f0[1])();
      }
    }
  }
  else {
    plStack_b0 = (long *)0x1;
    uStack_a8 = 10;
    puStack_a0 = &DAT_10f740723;
    if ((long *)0x1 < plVar7) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_c8 = param_2[1];
    plStack_d0 = (long *)*param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    pplVar5 = &plStack_b0;
    FUN_1008e1568(param_1,pplVar5,&plStack_d0);
    if ((long *)0x1 < plStack_d0) {
      do {
        lVar8 = *plStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
        if (bVar3) {
          *plStack_d0 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_d0[1])();
      }
    }
    plVar7 = plStack_b0;
    if ((long *)0x1 < plStack_b0) {
      do {
        lVar8 = *plStack_b0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar3) {
          *plStack_b0 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  func_0x000107c60e78();
  if ((int)pplVar5 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_f0);
  }
  func_0x000107c60bd8();
  pplVar6 = &plStack_150;
  puStack_100 = &stack0xfffffffffffffff0;
  uStack_f8 = 0x1008e1208;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*plVar7 == 0) || (*pplVar5 == (long *)0x0)) {
    lStack_128 = plVar7[1];
    lStack_130 = *plVar7;
    lStack_118 = plVar7[3];
    lStack_120 = plVar7[2];
    plStack_148 = pplVar5[1];
    plStack_150 = *pplVar5;
    plStack_138 = pplVar5[3];
    plStack_140 = pplVar5[2];
    plVar7 = &lStack_130;
  }
  else {
    if ((long *)plVar7[1] == pplVar5[1]) {
      plVar7 = (long *)(ulong)((long *)plVar7[2] == pplVar5[2]);
    }
    else {
      plVar7 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return plVar7;
    }
    func_0x000107c60e78();
    pplVar6 = pplVar5;
  }
  lVar8 = *plVar7;
  if (lVar8 == 0) {
    plVar9 = (long *)(ulong)*(byte *)(plVar7 + 1);
    plVar12 = plVar9;
  }
  else {
    plVar9 = (long *)plVar7[1];
    plVar12 = (long *)(ulong)((uint)plVar9 & 0xff);
  }
  if (*pplVar6 == (long *)0x0) {
    plVar13 = (long *)(ulong)*(byte *)(pplVar6 + 1);
  }
  else {
    plVar13 = pplVar6[1];
  }
  if (plVar9 == plVar13) {
    if (lVar8 == 0) {
      if ((int)plVar12 == 0) {
        return (long *)0x1;
      }
      lVar10 = (long)plVar7 + 9;
    }
    else {
      if (plVar7[1] == 0) {
        return (long *)0x1;
      }
      plVar12 = (long *)(ulong)((uint)plVar7[1] & 0xff);
      lVar10 = plVar7[2];
    }
    if (*pplVar6 == (long *)0x0) {
      plVar9 = (long *)((long)pplVar6 + 9);
    }
    else {
      plVar9 = pplVar6[2];
    }
    if (lVar8 != 0) {
      plVar12 = (long *)plVar7[1];
    }
    func_0x000107c610b0(lVar10,plVar9,plVar12);
    return (long *)(ulong)((int)lVar10 == 0);
  }
  return (long *)0x0;
}



/* Entry: 1008e1208; end: 1008e134b;  */

/* WARNING: Possible PIC construction at 0x0001008e1270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e1274) */

long * FUN_1008e1208(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_18;
  
  plVar2 = &lStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    lStack_38 = param_1[1];
    lStack_40 = *param_1;
    lStack_28 = param_1[3];
    lStack_30 = param_1[2];
    lStack_58 = param_2[1];
    lStack_60 = *param_2;
    lStack_48 = param_2[3];
    lStack_50 = param_2[2];
    plVar1 = &lStack_40;
  }
  else {
    if (param_1[1] == param_2[1]) {
      plVar1 = (long *)(ulong)(param_1[2] == param_2[2]);
    }
    else {
      plVar1 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return plVar1;
    }
    func_0x000107c60e78();
    plVar2 = param_2;
  }
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    uVar4 = (ulong)*(byte *)(plVar1 + 1);
    uVar7 = uVar4;
  }
  else {
    uVar4 = plVar1[1];
    uVar7 = (ulong)((uint)uVar4 & 0xff);
  }
  if (*plVar2 == 0) {
    uVar8 = (ulong)*(byte *)(plVar2 + 1);
  }
  else {
    uVar8 = plVar2[1];
  }
  if (uVar4 == uVar8) {
    if (lVar6 == 0) {
      if ((int)uVar7 == 0) {
        return (long *)0x1;
      }
      lVar5 = (long)plVar1 + 9;
    }
    else {
      if (plVar1[1] == 0) {
        return (long *)0x1;
      }
      uVar7 = (ulong)((uint)plVar1[1] & 0xff);
      lVar5 = plVar1[2];
    }
    if (*plVar2 == 0) {
      puVar3 = (undefined1 *)((long)plVar2 + 9);
    }
    else {
      puVar3 = (undefined1 *)plVar2[2];
    }
    if (lVar6 != 0) {
      uVar7 = plVar1[1];
    }
    func_0x000107c610b0(lVar5,puVar3,uVar7);
    return (long *)(ulong)((int)lVar5 == 0);
  }
  return (long *)0x0;
}



/* Entry: 1008e134c; end: 1008e1567;  */

long * FUN_1008e134c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_160;
  uint uStack_15c;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  int iStack_ec;
  long lStack_e8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar8 = &plStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  uVar12 = param_2[1] & 0xff;
  if (plVar9 != (long *)0x0) {
    uVar12 = param_2[1];
  }
  if (3 < uVar12) {
    lVar10 = (long)param_2 + 9;
    if (plVar9 != (long *)0x0) {
      lVar10 = param_2[2];
    }
    if (*(int *)(uVar12 + lVar10 + -4) == 0x6e69622d) {
      if ((long *)0x1 < plVar9) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_48 = param_2[1];
      plStack_50 = (long *)*param_2;
      uStack_38 = param_2[3];
      uStack_40 = param_2[2];
      plVar9 = (long *)*param_3;
      if ((long *)0x1 < plVar9) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_68 = param_3[1];
      plStack_70 = (long *)*param_3;
      uStack_58 = param_3[3];
      uStack_60 = param_3[2];
      pplVar7 = &plStack_50;
      pplVar8 = &plStack_70;
      func_0x000104a9da10();
      if ((long *)0x1 < plStack_70) {
        do {
          lVar10 = *plStack_70;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
          if (bVar3) {
            *plStack_70 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_70[1])();
        }
      }
      plVar9 = plStack_50;
      if ((long *)0x1 < plStack_50) {
        do {
          lVar10 = *plStack_50;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
          if (bVar3) {
            *plStack_50 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_50[1])();
        }
      }
      goto LAB_1008e14f0;
    }
  }
  if ((long *)0x1 < plVar9) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = param_2[1];
  plStack_90 = (long *)*param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  plVar9 = (long *)*param_3;
  if ((long *)0x1 < plVar9) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a8 = param_3[1];
  plStack_b0 = (long *)*param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  pplVar7 = &plStack_90;
  FUN_1008e1568();
  if ((long *)0x1 < plStack_b0) {
    do {
      lVar10 = *plStack_b0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
      if (bVar3) {
        *plStack_b0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_b0[1])();
    }
  }
  plVar9 = plStack_90;
  if ((long *)0x1 < plStack_90) {
    do {
      lVar10 = *plStack_90;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar3) {
        *plStack_90 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
LAB_1008e14f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar9;
  }
  func_0x000107c60e78();
  if ((int)pplVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_b0);
    FUN_1004b6d90(&plStack_90);
  }
  func_0x000107c60bd8();
  iVar6 = (int)&plStack_1c0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_128 = pplVar7[1];
  plStack_130 = *pplVar7;
  plStack_118 = pplVar7[3];
  plStack_120 = pplVar7[2];
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  FUN_1008dfdbc(&plStack_110,&plStack_130);
  if ((long *)0x1 < plStack_130) {
    do {
      lVar10 = *plStack_130;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
      if (bVar3) {
        *plStack_130 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_130[1])();
    }
  }
  uVar12 = (ulong)(iStack_ec + 1);
  FUN_1008e016c(plVar9,uVar12);
  *(ulong *)(plVar9[3] + 0x10) = *(long *)(plVar9[3] + 0x10) + uVar12;
  puVar5 = (undefined1 *)plVar9[2];
  func_0x0001008e01c0(puVar5,uVar12);
  *puVar5 = 0;
  if (iStack_ec == 1) {
    puVar5[1] = (char)iStack_f0;
  }
  else {
    puVar5[1] = 0x7f;
    func_0x0001008e18a4(iStack_f0 + -0x7f,puVar5 + 2,iStack_ec + -1);
  }
  uStack_148 = uStack_108;
  plStack_150 = plStack_110;
  uStack_138 = uStack_f8;
  uStack_140 = uStack_100;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  FUN_1008e025c(plVar9,&plStack_150);
  if ((long *)0x1 < plStack_150) {
    do {
      lVar10 = *plStack_150;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar3) {
        *plStack_150 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  plStack_198 = pplVar8[1];
  plStack_1a0 = *pplVar8;
  plStack_188 = pplVar8[3];
  plStack_190 = pplVar8[2];
  pplVar8[1] = (long *)0x0;
  *pplVar8 = (long *)0x0;
  pplVar8[3] = (long *)0x0;
  pplVar8[2] = (long *)0x0;
  FUN_1008e03e4(&plStack_180,&plStack_1a0);
  if ((long *)0x1 < plStack_1a0) {
    do {
      lVar10 = *plStack_1a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
      if (bVar3) {
        *plStack_1a0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_1a0[1])();
    }
  }
  uVar12 = (ulong)uStack_15c;
  FUN_1008e016c(plVar9,uVar12);
  *(ulong *)(plVar9[3] + 0x10) = *(long *)(plVar9[3] + 0x10) + uVar12;
  puVar5 = (undefined1 *)plVar9[2];
  func_0x0001008e01c0(puVar5,uVar12);
  if (uStack_15c == 1) {
    *puVar5 = (char)iStack_160;
  }
  else {
    *puVar5 = 0x7f;
    func_0x0001008e18a4(iStack_160 + -0x7f,puVar5 + 1,uStack_15c - 1);
  }
  uStack_1b8 = uStack_178;
  plStack_1c0 = plStack_180;
  uStack_1a8 = uStack_168;
  uStack_1b0 = uStack_170;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  FUN_1008e025c(plVar9);
  if ((long *)0x1 < plStack_1c0) {
    do {
      lVar10 = *plStack_1c0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
      if (bVar3) {
        *plStack_1c0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_1c0[1])();
    }
  }
  if ((long *)0x1 < plStack_180) {
    do {
      lVar10 = *plStack_180;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_180,0x10);
      if (bVar3) {
        *plStack_180 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_180[1])();
    }
  }
  plVar9 = plStack_110;
  if ((long *)0x1 < plStack_110) {
    do {
      lVar10 = *plStack_110;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar3) {
        *plStack_110 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar9;
  }
  func_0x000107c60e78();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_1c0);
    FUN_1004b6d90(&plStack_180);
    FUN_1004b6d90(&plStack_110);
  }
  func_0x000107c60bd8();
  uVar11 = 5;
  if (((ulong)plVar9 >> 0x1c & 0xf) != 0) {
    uVar11 = 6;
  }
  uVar4 = (uint)plVar9;
  uVar1 = 4;
  if (0x1fffff < uVar4) {
    uVar1 = uVar11;
  }
  uVar11 = 3;
  if (0x3fff < uVar4) {
    uVar11 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar4) {
    uVar1 = uVar11;
  }
  return (long *)(ulong)uVar1;
}



/* Entry: 1008e1568; end: 1008e186b;  */

long * FUN_1008e1568(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  iVar7 = (int)&plStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_1008dfdbc(&plStack_60,&plStack_80);
  if ((long *)0x1 < plStack_80) {
    do {
      lVar8 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar10 = (ulong)(iStack_3c + 1);
  FUN_1008e016c(param_1,uVar10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar10;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar5,uVar10);
  *puVar5 = 0;
  if (iStack_3c == 1) {
    puVar5[1] = (char)iStack_40;
  }
  else {
    puVar5[1] = 0x7f;
    func_0x0001008e18a4(iStack_40 + -0x7f,puVar5 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1008e025c(param_1,&plStack_a0);
  if ((long *)0x1 < plStack_a0) {
    do {
      lVar8 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_e8 = param_3[1];
  plStack_f0 = (long *)*param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_1008e03e4(&plStack_d0,&plStack_f0);
  if ((long *)0x1 < plStack_f0) {
    do {
      lVar8 = *plStack_f0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar3) {
        *plStack_f0 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  uVar10 = (ulong)uStack_ac;
  FUN_1008e016c(param_1,uVar10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar10;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar5,uVar10);
  if (uStack_ac == 1) {
    *puVar5 = (char)iStack_b0;
  }
  else {
    *puVar5 = 0x7f;
    func_0x0001008e18a4(iStack_b0 + -0x7f,puVar5 + 1,uStack_ac - 1);
  }
  uStack_108 = uStack_c8;
  plStack_110 = plStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  FUN_1008e025c(param_1);
  if ((long *)0x1 < plStack_110) {
    do {
      lVar8 = *plStack_110;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar3) {
        *plStack_110 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if ((long *)0x1 < plStack_d0) {
    do {
      lVar8 = *plStack_d0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
      if (bVar3) {
        *plStack_d0 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d0[1])();
    }
  }
  plVar6 = plStack_60;
  if ((long *)0x1 < plStack_60) {
    do {
      lVar8 = *plStack_60;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
      if (bVar3) {
        *plStack_60 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_60[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  func_0x000107c60e78();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_110);
    FUN_1004b6d90(&plStack_d0);
    FUN_1004b6d90(&plStack_60);
  }
  func_0x000107c60bd8();
  uVar9 = 5;
  if (((ulong)plVar6 >> 0x1c & 0xf) != 0) {
    uVar9 = 6;
  }
  uVar4 = (uint)plVar6;
  uVar1 = 4;
  if (0x1fffff < uVar4) {
    uVar1 = uVar9;
  }
  uVar9 = 3;
  if (0x3fff < uVar4) {
    uVar9 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar4) {
    uVar1 = uVar9;
  }
  return (long *)(ulong)uVar1;
}



/* Entry: 1008e186c; end: 1008e1a2f;  */

undefined4 FUN_1008e186c(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 6;
  }
  uVar2 = (uint)param_1;
  uVar1 = 4;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 3;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 1008e1a30; end: 1008e1b17;  */

long * FUN_1008e1a30(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *param_1;
  plVar2 = param_1;
  lStack_38 = lVar4;
  func_0x0001008e19c8();
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((int)plVar2 != 0) {
    lVar3 = param_1[3];
    if (0 < lVar3) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) - lVar3;
      lVar3 = param_1[3];
    }
    lVar3 = lVar3 + ((ulong)plVar2 & 0xffffffff);
    param_1[3] = lVar3;
    if (0 < lVar3) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + lVar3;
    }
  }
  func_0x0001008e19c8();
  if ((int)param_1 == 0) {
    lStack_38 = 0;
    FUN_1008e1b18(&lStack_38);
    return plVar2;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/flow_control.cc"
                ,0x10f,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e1b04);
  (*pcVar1)();
}



/* Entry: 1008e1b18; end: 1008e1b6b;  */

void FUN_1008e1b18(long *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/flow_control.h"
                ,0xa5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e1b68);
  (*pcVar1)();
}



/* Entry: 1008e1b6c; end: 1008e1b8b;  */

void FUN_1008e1b6c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar4 = *(long **)(param_1 + 0x10);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    FUN_100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      FUN_1004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
    uStack_38 = 0;
    FUN_1004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  return;
}



/* Entry: 1008e1b8c; end: 1008e1f83;  */

void FUN_1008e1b8c(undefined8 *param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  char *pcStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [19];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1[2];
  lVar14 = *(long *)(lVar10 + 0x10);
  puStack_110 = param_1;
  if ((*(byte *)(lVar10 + 0xbc0) >> 1 & 1) == 0) {
    if ((((*(byte *)(lVar14 + 0x238) >> 3 & 1) != 0) || (*param_2 == 0)) ||
       ((*(ushort *)(lVar10 + 0xb50) >> 7 & 1) != 0)) {
      bVar1 = *(byte *)(param_1 + 5);
      if ((bVar1 & 1) != 0) {
        *(ushort *)(lVar10 + 0xb50) = *(ushort *)(lVar10 + 0xb50) | 2;
        bVar1 = *(byte *)(param_1 + 5);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        *(long *)(lVar10 + 0xb38) = *(long *)(lVar10 + 0xb38) + 1;
        bVar1 = *(byte *)(param_1 + 5);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(ushort *)(lVar10 + 0xb50) = *(ushort *)(lVar10 + 0xb50) | 8;
      }
      if ((*(byte *)(lVar14 + 0x238) >> 3 & 1) != 0) {
        lVar12 = *(long *)(param_1[2] + 0x10);
        bVar1 = *(byte *)(param_1 + 5);
        if ((bVar1 & 1) != 0) {
          FUN_10083228c(lVar12 + 0x2a0);
          FUN_1004e2b40(lVar12 + 0x490);
          bVar1 = *(byte *)(param_1 + 5);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          func_0x000104a87490(lVar12,*(long *)(param_1[2] + 0xb38) + -1);
          bVar1 = *(byte *)(param_1 + 5);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          FUN_10083228c(lVar12 + 0x4f8);
          FUN_1004e2b40(lVar12 + 0x6e8);
        }
      }
      auStack_f0[0] = 0;
      uVar11 = *param_2;
      if ((uVar11 & 1) != 0) {
        piVar6 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar13 = *(long *)(param_1[2] + 0x10);
      lVar12 = 0x1d8;
LAB_1008e1c94:
      plVar8 = *(long **)(lVar13 + lVar12);
      if (((plVar8 == (long *)0x0) || (lVar7 = *plVar8, lVar7 == 0)) ||
         (((*(byte *)(plVar8 + 2) ^ *(byte *)(param_1 + 5)) & 7) != 0)) goto LAB_1008e1cb8;
      if ((*(byte *)(param_1 + 5) >> 2 & 1) != 0) {
        *(undefined1 *)(plVar8[1] + 0x34) = *(undefined1 *)(param_1[4] + 0x34);
      }
      if ((uVar11 & 1) != 0) {
        piVar6 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_100 = "on_complete for pending batch";
      uStack_108 = uVar11;
      lStack_f8 = lVar7;
      FUN_1004dfd88(auStack_f0,&lStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_10084dad0();
      }
      **(undefined8 **)(lVar13 + lVar12) = 0;
      FUN_1008e1f84(lVar13);
joined_r0x0001008e1cc4:
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0(uVar11);
      }
      if ((*(ushort *)(lVar10 + 0xb50) >> 7 & 1) == 0) {
        lVar12 = param_1[2];
        lVar13 = *(long *)(lVar12 + 0x10);
        if ((*(ulong *)(lVar13 + 0x4b8) >> 1 <= *(ulong *)(lVar12 + 0xb30)) &&
           ((*(char *)(lVar13 + 0x4f0) == '\0' || ((*(ushort *)(lVar12 + 0xb50) >> 2 & 1) != 0)))) {
          lVar7 = 0;
          while( true ) {
            lVar9 = *(long *)(lVar13 + lVar7 + 0x1d8);
            if (((lVar9 != 0) && (*(char *)(lVar13 + lVar7 + 0x1e0) == '\0')) &&
               ((*(byte *)(lVar9 + 0x10) & 6) != 0)) break;
            lVar7 = lVar7 + 0x10;
            if (lVar7 == 0x60) goto LAB_1008e1df8;
          }
        }
        FUN_1004e1284(lVar12,auStack_f0);
      }
LAB_1008e1df8:
      FUN_1008e2028(lVar10);
      FUN_1004dffa0(auStack_f0,*(undefined8 *)(lVar14 + 0x1a0));
      puVar4 = auStack_f0;
      FUN_1004e0194();
      goto joined_r0x0001008e1e14;
    }
    func_0x000104a88cd0(lVar10 + 0xb78,&puStack_110,param_2);
    auStack_f0[0] = 0;
    uStack_118 = *param_2;
    if ((uStack_118 & 1) != 0) {
      piVar6 = (int *)(uStack_118 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a889ac(lVar10,&uStack_118,auStack_f0);
    FUN_1004bdf74(&uStack_118);
    if ((*(ushort *)(lVar10 + 0xb50) >> 6 & 1) == 0) {
      func_0x000104a88d34(lVar10,auStack_f0);
    }
    FUN_1004dffa0(auStack_f0,*(undefined8 *)(lVar14 + 0x1a0));
    puVar4 = auStack_f0;
    FUN_1004e0194();
    param_1 = puStack_110;
joined_r0x0001008e1e14:
    if (param_1 == (undefined8 *)0x0) goto LAB_1008e1e30;
  }
  else {
    puVar4 = *(undefined8 **)(lVar14 + 0x1a0);
    FUN_100612044(puVar4,"on_complete for abandoned attempt");
  }
  plVar8 = param_1 + 1;
  do {
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    (**(code **)*param_1)();
    puVar4 = param_1;
  }
LAB_1008e1e30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_118);
  FUN_1004e0194(auStack_f0);
  if (puStack_110 != (undefined8 *)0x0) {
    plVar8 = puStack_110 + 1;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = puStack_110;
    if (lVar10 + -1 == 0) goto LAB_1008e1f74;
  }
  do {
    puVar5 = puVar4;
    func_0x000107c60bd8();
LAB_1008e1f74:
    (**(code **)*puVar5)();
  } while( true );
LAB_1008e1cb8:
  lVar12 = lVar12 + 0x10;
  if (lVar12 == 0x238) goto joined_r0x0001008e1cc4;
  goto LAB_1008e1c94;
}



/* Entry: 1008e1f84; end: 1008e2027;  */

void FUN_1008e1f84(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if ((((*plVar2 == 0) &&
       ((bVar1 = *(byte *)(plVar2 + 2), (bVar1 >> 3 & 1) == 0 || (*(long *)(plVar2[1] + 0x48) == 0))
       )) && (((bVar1 >> 4 & 1) == 0 || (*(long *)(plVar2[1] + 0x78) == 0)))) &&
     (((bVar1 >> 5 & 1) == 0 || (*(long *)(plVar2[1] + 0x90) == 0)))) {
    bVar1 = *(byte *)(*param_2 + 0x10);
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfe;
      bVar1 = *(byte *)(*param_2 + 0x10);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfd;
      bVar1 = *(byte *)(*param_2 + 0x10);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfb;
    }
    *param_2 = 0;
    return;
  }
  return;
}



/* Entry: 1008e2028; end: 1008e20cb;  */

void FUN_1008e2028(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((((((*(byte *)(lVar5 + 0x238) >> 3 & 1) != 0) && (*(long *)(lVar5 + 0x1c8) == 0)) &&
       (*(char *)(param_1 + 0x90) == '\0')) &&
      ((*(ulong *)(lVar5 + 0x4b8) >> 1 <= *(ulong *)(param_1 + 0xb30) &&
       ((*(char *)(lVar5 + 0x4f0) == '\0' || ((*(ushort *)(param_1 + 0xb50) >> 2 & 1) != 0)))))) &&
     (*(long *)(param_1 + 0xbb0) == 0)) {
    func_0x000104a873d8(lVar5 + 0x1c8,param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0x10);
    plVar4 = *(long **)(lVar5 + 0x1c0);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
  }
  return;
}



/* Entry: 1008e20cc; end: 1008e2157;  */

undefined8 * FUN_1008e20cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c3050;
  plVar4 = *(long **)(*(long *)(param_1[2] + 0x10) + 0x198);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_100836ca4();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1008e2158; end: 1008e21d3;  */

undefined8 FUN_1008e2158(long param_1)

{
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x0001004bb09c();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x90));
    FUN_1008e2248();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a0);
  }
  else {
    FUN_100832d9c();
    func_0x000100832df8();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    *(undefined1 *)(unaff_x19 + 0x1a0) = *unaff_x21;
    FUN_1008e21e0();
    if ((int)unaff_x19 == 0) {
      return 0;
    }
    FUN_1008e2248(0);
  }
  FUN_100612124();
  func_0x000100834c68();
  return 1;
}



/* Entry: 1008e21d4; end: 1008e21df;  */

void FUN_1008e21d4(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0xe0) = 1;
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 200 + lVar1) = 0;
  }
  return;
}



/* Entry: 1008e21e0; end: 1008e2207;  */

undefined8 FUN_1008e21e0(void)

{
  code *extraout_x8;
  long lVar1;
  long unaff_x19;
  
  FUN_1008e21d4();
  FUN_100833448(unaff_x19 + 0x30,unaff_x19 + 0xc0);
  if (*(long *)(unaff_x19 + 0xf0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(unaff_x19 + 0xc0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_1004b972c(unaff_x19 + 0xc0);
  }
  return 0;
}



/* Entry: 1008e2208; end: 1008e2247;  */

void FUN_1008e2208(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x000100834b98();
  FUN_100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008e2248; end: 1008e2253;  */

void FUN_1008e2248(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x80);
  return;
}



/* Entry: 1008e2254; end: 1008e22df;  */

void FUN_1008e2254(long param_1,int param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    func_0x00010049380c(param_1,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
    func_0x000100493818((&PTR_DAT_110abdd18)[extraout_x8_00],&uStack_30);
  }
  else {
    uStack_28 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) != 0) {
      do {
        FUN_10048a5a8();
      } while (extraout_w10 != 0);
    }
    func_0x00010049380c();
    func_0x000100493818((&PTR_DAT_110abdc58)[extraout_x8],&uStack_30);
    func_0x0001004b6ee4(&uStack_30);
  }
  return;
}



/* Entry: 1008e22e0; end: 1008e254b;  */

undefined8 **
FUN_1008e22e0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  byte *unaff_x19;
  long *unaff_x23;
  long lVar7;
  long *plVar8;
  long lVar9;
  long alStack_108 [2];
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  
  func_0x0001004a4cd8();
  FUN_100489ca8();
  *param_5 = 4;
  lVar7 = *param_3;
  if (*(int *)(lVar7 + 0x94) - 1U < 2) {
    if (*(long *)(lVar7 + 0x18) != 0) {
      do {
        FUN_10048a5a8();
      } while (extraout_w10 != 0);
    }
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    func_0x000100492554();
    (*extraout_x8_00)();
    func_0x000107c34e08();
    FUN_10048b47c(&puStack_e0);
  }
  FUN_10049311c(alStack_108,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
  lVar9 = *unaff_x23;
  puVar5 = (undefined8 *)0xc8;
  func_0x000107c60e20();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110abdca0;
  puVar1 = puVar5 + 3;
  uVar4 = alStack_108[0] == 0;
  alStack_108[0] = 0;
  alStack_108[1] = 0;
  uStack_e8 = *(undefined8 *)(lVar9 + 8);
  puStack_e0 = *(undefined8 **)(lVar9 + 0x10);
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  FUN_1008e255c(puVar1,&stack0xffffffffffffff30,&puStack_e0,&uStack_e8,lVar7 + 0x20,
                *(undefined8 *)(lVar7 + 0x30),*(undefined1 *)(lVar7 + 0xa0));
  FUN_1004a5c90(&uStack_e8);
  if (puStack_e0 != (undefined8 *)0x0) {
    FUN_1008e319c();
  }
  FUN_1008e26b8(&stack0xffffffffffffff30);
  if ((puVar5[5] == 0) || (uVar4 = *(long *)(puVar5[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puStack_f8 = puVar1;
      puStack_f0 = puVar5;
      puStack_e0 = puVar1;
      puStack_d8 = puVar5;
    } while (cVar2 != '\0');
    do {
      func_0x000100493ce4();
    } while (extraout_w11 != 0);
    puVar5[4] = puVar1;
    puVar5[5] = puVar5;
    func_0x0001008e26dc(&stack0xffffffffffffff30);
    func_0x0001008e2700(&puStack_e0);
  }
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  *(undefined8 **)(lVar7 + 0xa8) = puVar1;
  *(undefined8 **)(lVar7 + 0xb0) = puVar5;
  func_0x0001008e2700(&stack0xffffffffffffff30);
  func_0x0001008e2700(&puStack_f8);
  func_0x0001004931cc();
  *(undefined4 *)(*(long *)(lVar7 + 0xa8) + 0xac) = *(undefined4 *)(lVar7 + 0xd8);
  FUN_1008e27c0();
  FUN_1004a56b8(lVar7,2);
  func_0x0001004a50e0((&PTR_DAT_110abdce0)[*unaff_x19],&stack0xffffffffffffff30);
  FUN_10048b398(extraout_x8);
  if ((bool)uVar4) {
    return (undefined8 **)0x1;
  }
  func_0x000107c60e78();
  func_0x000107c34e08();
  ppuVar6 = &puStack_e0;
  FUN_10048b47c(ppuVar6);
  func_0x000107c34d70();
  bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
  if (bVar3) {
    *extraout_x8_01 = *extraout_x8_01 + 1;
    ExclusiveMonitorsStatus();
  }
  return ppuVar6;
}



/* Entry: 1008e254c; end: 1008e255b;  */

void FUN_1008e254c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1008e255c; end: 1008e26b7;  */

undefined8 *
FUN_1008e255c(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110abdf80;
  lVar2 = param_2[1];
  lVar4 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = lVar4;
  if (lVar2 != 0) {
    do {
      FUN_1008e254c();
    } while (extraout_w10 != 0);
  }
  uVar1 = (undefined1)param_7;
  uVar3 = *param_4;
  *param_4 = 0;
  param_1[5] = uVar3;
  uVar3 = *param_3;
  *param_3 = 0;
  param_1[6] = uVar3;
  lVar2 = param_5[1];
  uVar3 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1008e254c();
      uVar1 = (undefined1)param_7;
    } while (extraout_w10_00 != 0);
  }
  param_1[10] = &PTR_DAT_110abed50;
  param_1[9] = param_6;
  param_1[0xb] = 0;
  param_1[0xc] = &DAT_11383d918;
  param_1[0xd] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = uVar1;
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  if (*param_2 == 0) {
    func_0x000107c2a8b4(0x4000e,1);
  }
  return param_1;
}



/* Entry: 1008e26b8; end: 1008e2723;  */

void FUN_1008e26b8(long param_1)

{
  FUN_1004a5624();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1008e2724; end: 1008e272f;  */

void FUN_1008e2724(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = *(undefined8 *)(unaff_x19 + 8);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if ((lVar1 == 0) || (func_0x000107c60d6c(), lVar1 == 0)) {
    func_0x00010527822c();
  }
  return;
}



/* Entry: 1008e2730; end: 1008e27bf;  */

void FUN_1008e2730(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1008e2724();
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  func_0x0001008e282c();
  *puVar1 = &PTR_DAT_110abdfd8;
  puVar1[5] = uStack_28;
  puVar1[4] = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001008e2700(&uStack_30);
  FUN_1008e2838(param_1 + 0x50);
  plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x50);
  return;
}



/* Entry: 1008e27c0; end: 1008e2823;  */

void FUN_1008e27c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1008e2730();
  if (((*(byte *)(*(long *)(param_1 + 0x48) + 0x80) & 1) == 0) &&
     ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    else {
      FUN_1008e2724();
      func_0x000107c2a92c(&uStack_40,param_1 + 0x18);
      puVar3 = (undefined8 *)0x40;
      func_0x000107c60e20();
      func_0x0001008e282c();
      uVar2 = uStack_48;
      uVar1 = uStack_50;
      *puVar3 = &PTR_DAT_110abe030;
      uStack_50 = 0;
      uStack_48 = 0;
      puVar3[5] = uVar2;
      puVar3[4] = uVar1;
      puVar3[7] = uStack_38;
      puVar3[6] = uStack_40;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x000107c2a930(&uStack_50);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x000107c34e64(*(undefined8 *)(param_1 + 0x80));
      (**(code **)(*(long *)(lVar4 + 8) + 0x10))
                ((long *)(lVar4 + 8),extraout_x8 + extraout_x9 * extraout_x10,unaff_x20);
    }
  }
  return;
}



/* Entry: 1008e2824; end: 1008e2837;  */

void FUN_1008e2824(void)

{
  return;
}



/* Entry: 1008e2838; end: 1008e287b;  */

void FUN_1008e2838(long param_1)

{
  ulong *puVar1;
  
  FUN_10029b2d4(param_1 + 0x10);
  FUN_10029b2d4(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1008e287c; end: 1008e2893;  */

void FUN_1008e287c(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  param_1 = param_1 + -0x10;
  func_0x0001008e2884();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000107c34e7c();
    func_0x000107c34e84();
    UNRECOVERED_JUMPTABLE = (code *)0x227;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x1e0) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    FUN_1008e28f4();
    *(undefined8 *)(unaff_x19 + 0x1b0) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x1c0) = unaff_x20;
  func_0x0001004b9444(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001004b9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008e2894; end: 1008e28f3;  */

void FUN_1008e2894(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001008e2884();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000107c34e7c();
    func_0x000107c34e84();
    UNRECOVERED_JUMPTABLE = (code *)0x227;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x1e0) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    FUN_1008e28f4();
    *(undefined8 *)(unaff_x19 + 0x1b0) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x1c0) = unaff_x20;
  func_0x0001004b9444(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001004b9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008e28f4; end: 1008e28ff;  */

void FUN_1008e28f4(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1008e2900; end: 1008e298f;  */

void FUN_1008e2900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  ulong uVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  FUN_1004b93b8();
  *(undefined1 *)(param_4 + 0x78) = 0;
  FUN_1008e2990();
  func_0x0001008e29ac();
  *(undefined8 *)(unaff_x19 + 0x70) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  *(undefined8 *)(unaff_x19 + 0x60) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2;
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  func_0x0001004b9514(unaff_x19 + 0x80);
  *(long *)(unaff_x19 + 0xa8) = unaff_x19 + 0x48;
  *(long *)(unaff_x19 + 0xb0) = unaff_x19;
  *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x138) = *(long *)(unaff_x19 + 0x20);
    *(long *)(unaff_x19 + 0x140) = unaff_x19 + 0x32;
  }
  uVar2 = unaff_x19 + 0x80;
  func_0x0001004b966c();
  if ((uVar2 & 1) == 0) {
    do {
      FUN_1004b60dc();
    } while (extraout_w10 != 0);
    iVar1 = (int)unaff_x19 + 0x80;
    FUN_1004b96a8();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x000107c34ea4();
                    /* WARNING: Could not recover jumptable at 0x000108c78f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008e2990; end: 1008e29df;  */

void FUN_1008e2990(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001008e29a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x120))
            (plRam0000000113815c70,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 1008e29e0; end: 1008e2a47;  */

void FUN_1008e29e0(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x23;
  long lStack_230;
  undefined1 auStack_228 [480];
  undefined8 uStack_48;
  
  plVar3 = &lStack_230;
  func_0x0001008e29b8();
  FUN_1006136e8();
  lVar1 = unaff_x19 + 0x18;
  puVar2 = auStack_228;
  FUN_1008e2a48();
  func_0x0001008e2a84();
  func_0x0001008e2a94();
  func_0x0001008e2ab0();
  if ((int)lVar1 != 0) {
    lVar1 = *unaff_x23;
    func_0x000107c34e6c();
  }
  FUN_1008e2f90(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  if ((*(long *)(lVar1 + 8) != 0) && ((*(byte *)(lVar1 + 0x19) & 1) == 0)) {
    lVar4 = *plVar3;
    *plVar3 = lVar4 + 1;
    puVar5 = (undefined8 *)(puVar2 + lVar4 * 0x50);
    *puVar5 = 5;
    puVar5[1] = 0;
    puVar5[2] = lVar1 + 0x10;
  }
  return;
}



/* Entry: 1008e2a48; end: 1008e2ad3;  */

void FUN_1008e2a48(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    lVar1 = *param_3;
    *param_3 = lVar1 + 1;
    puVar2 = (undefined8 *)(param_2 + lVar1 * 0x50);
    *puVar2 = 5;
    puVar2[1] = 0;
    puVar2[2] = param_1 + 0x10;
  }
  return;
}



/* Entry: 1008e2ad4; end: 1008e2b97;  */

/* WARNING: Removing unreachable block (ram,0x000104a989bc) */

void FUN_1008e2ad4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_2 + 0xf0);
  if ((*plVar5 != 0) && (*(int *)(param_2 + 0x180) != 0)) {
    if (*(char *)(param_2 + 0x16b) != '\0') {
      FUN_1005a7050(param_2 + 0x5a0);
    }
    FUN_1004e23e0(*(undefined8 *)(param_2 + 0xe8),param_2 + 400);
    puVar4 = *(uint **)(param_2 + 0xe8);
    *puVar4 = *puVar4 | 0x2000000;
    uVar1 = *(ulong *)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x2f);
      puVar2 = (undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 **)(puVar4 + 10) = puVar2;
    *(ulong *)(puVar4 + 0xc) = uVar1;
    if (((*(undefined1 **)(param_2 + 0xf8) != (undefined1 *)0x0) && (*(int *)(param_2 + 0x180) != 2)
        ) && (*(int *)(param_2 + 0x184) == 1)) {
      **(undefined1 **)(param_2 + 0xf8) = 1;
      *(undefined8 *)(param_2 + 0xf8) = 0;
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    FUN_1004bd7e8(&stack0xffffffffffffffdf,lVar3,&stack0xffffffffffffffd0);
    return;
  }
  return;
}



/* Entry: 1008e2b98; end: 1008e2dcb;  */

void FUN_1008e2b98(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  int iStack_40;
  uint uStack_34;
  
  if (*(long *)(param_2 + 0x118) == 0) {
    return;
  }
  uStack_50 = param_2 + 0x6f8;
  uStack_58 = *(undefined8 *)(param_2 + 0x6f8);
  if ((*(char *)(param_2 + 0x188) == '\0') || (*(char *)(param_2 + 0x16b) == '\0')) {
    if (*(long *)(param_2 + 0x5c0) == 0) {
      if (*(char *)(param_2 + 0x169) == '\0') {
        uVar8 = 0;
        *(undefined8 *)(param_2 + 0x700) = 5;
        goto LAB_1008e2d18;
      }
      goto LAB_1008e2c3c;
    }
    func_0x000104a9c574(&uStack_48,param_2,&uStack_34,*(undefined8 *)(param_2 + 0x100),
                        *(undefined8 *)(param_2 + 0x108));
    if (iStack_40 == 1) {
      if (uStack_48 == 0) {
LAB_1008e2cc0:
        if (*(long *)(param_1 + 0xce8) != 0) {
          func_0x000104aad580();
        }
        goto LAB_1008e2ccc;
      }
      if ((uStack_48 & 1) != 0) {
        piVar7 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (uStack_48 == 0) goto LAB_1008e2cc0;
      }
      *(undefined1 *)(param_2 + 0x16b) = 1;
      FUN_1005a7050(param_2 + 0x5a0);
      FUN_10047a9b8(&uStack_48);
      uVar8 = uStack_48;
      goto LAB_1008e2cf4;
    }
    if (iStack_40 != 0) {
      func_0x000104a71e10();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008e2d94);
      (*pcVar3)();
    }
    if (*(char *)(param_2 + 0x169) != '\0') {
      FUN_1005a7050(param_2 + 0x5a0);
      FUN_100614b50(*(undefined8 *)(param_2 + 0x100));
LAB_1008e2ccc:
      FUN_10047a9b8(&uStack_48);
      goto LAB_1008e2cd4;
    }
    *(ulong *)(uStack_50 + 8) = (ulong)uStack_34;
    FUN_10047a9b8(&uStack_48);
  }
  else {
    FUN_1005a7050(param_2 + 0x5a0);
LAB_1008e2c3c:
    FUN_100614b50(*(undefined8 *)(param_2 + 0x100));
LAB_1008e2cd4:
    if (*(char *)(*(long *)(param_2 + 0x100) + 0x128) == '\0') {
      uVar8 = 0;
LAB_1008e2cf4:
      if (*(int *)(param_2 + 0x184) != 0) {
        if (*(long *)(param_2 + 0x110) != 0) {
          *(bool *)*(long *)(param_2 + 0x110) = *(int *)(param_2 + 0x184) != 3;
        }
        func_0x000104a9898c(param_2 + 0x118);
      }
      goto LAB_1008e2d18;
    }
    func_0x000104a9898c(param_2 + 0x118);
  }
  uVar8 = 0;
LAB_1008e2d18:
  FUN_1008e2ea8(&uStack_58,*(undefined8 *)(param_2 + 0x5c0));
  uVar5 = uStack_50;
  uVar4 = uStack_58;
  uStack_58 = 0;
  uVar6 = 0;
  FUN_1008e2ed0(uVar4,0,0);
  FUN_1008e2f10(uVar5,uVar4,uVar6 & 0xffffffff);
  iStack_40 = (int)uVar4;
  uStack_48 = uVar5;
  FUN_100747370(&uStack_48,param_1,param_2);
  if ((uVar8 & 1) != 0) {
    FUN_10084dad0(uVar8);
  }
  FUN_1008e1b18(&uStack_58);
  return;
}



/* Entry: 1008e2dcc; end: 1008e2ea7;  */

/* WARNING: Removing unreachable block (ram,0x000104a989bc) */

void FUN_1008e2dcc(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  
  FUN_1008e2b98();
  if ((((*(long *)(param_2 + 0x128) != 0) && (*(char *)(param_2 + 0x169) != '\0')) &&
      (*(char *)(param_2 + 0x168) != '\0')) &&
     ((((*(char *)(param_2 + 0x16b) == '\0' && (*(char *)(param_1 + 0x628) != '\0')) ||
       (FUN_1005a7050(param_2 + 0x5a0), *(char *)(param_2 + 0x169) != '\0')) &&
      ((*(long *)(param_2 + 0x5c0) == 0 && (plVar1 = (long *)(param_2 + 0x128), *plVar1 != 0)))))) {
    func_0x000104adfb90(param_2 + 0x138,*(undefined8 *)(param_2 + 0x130));
    *(undefined8 *)(param_2 + 0x130) = 0;
    FUN_1004e23e0(*(undefined8 *)(param_2 + 0x120),param_2 + 0x398);
    puVar5 = *(uint **)(param_2 + 0x120);
    *puVar5 = *puVar5 | 0x2000000;
    uVar2 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x2f);
      puVar3 = (undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 **)(puVar5 + 10) = puVar3;
    *(ulong *)(puVar5 + 0xc) = uVar2;
    lVar4 = *plVar1;
    *plVar1 = 0;
    FUN_1004bd7e8(&stack0xffffffffffffffdf,lVar4,&stack0xffffffffffffffd0);
    return;
  }
  return;
}



/* Entry: 1008e2ea8; end: 1008e2ecf;  */

undefined1  [16] FUN_1008e2ea8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (-1 < (long)param_2) {
    lVar3 = *(long *)(param_1 + 8);
    *(ulong *)(lVar3 + 0x20) = param_2;
    *(undefined1 *)(lVar3 + 0x28) = 1;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  func_0x000107c2c2b4();
  uVar1 = *(long *)(param_1 + 200) + *(long *)(param_1 + 8);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  uVar2 = 0x100;
  if ((long)(uVar1 >> 1 & 0x7fffffff) <= *(long *)(param_1 + 0xd8)) {
    uVar2 = param_2 & 0xff00;
  }
  auVar5._0_8_ = uVar2 | param_2 & 0xffffffffffff00ff;
  auVar5._8_8_ = param_3 & 0xffffffff;
  return auVar5;
}



/* Entry: 1008e2ed0; end: 1008e2f0f;  */

undefined1  [16] FUN_1008e2ed0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(long *)(param_1 + 200) + *(long *)(param_1 + 8);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  uVar2 = 0x100;
  if ((long)(uVar1 >> 1 & 0x7fffffff) <= *(long *)(param_1 + 0xd8)) {
    uVar2 = param_2 & 0xff00;
  }
  auVar3._0_8_ = uVar2 | param_2 & 0xffffffffffff00ff;
  auVar3._8_8_ = param_3 & 0xffffffff;
  return auVar3;
}



/* Entry: 1008e2f10; end: 1008e2f8f;  */

undefined1  [16] FUN_1008e2f10(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  func_0x0001008e19c8();
  uVar2 = param_2;
  if ((uint)uVar1 != 0) {
    if (*(long *)(param_1 + 8) < 1) {
      if ((uint)uVar1 >> 0xd != 0) {
        uVar2 = 1;
        goto LAB_1008e2f74;
      }
    }
    else {
      uVar2 = 1;
      if (((uVar1 >> 0xd & 0x7ffff) != 0) || (*(long *)(param_1 + 0x18) < 0)) goto LAB_1008e2f74;
    }
    uVar2 = 2;
  }
LAB_1008e2f74:
  auVar3._8_8_ = param_3 & 0xffffffff;
  auVar3._0_8_ = param_2 & 0xffffffffffffff00 | uVar2 & 0xff;
  return auVar3;
}



/* Entry: 1008e2f90; end: 1008e2fbf;  */

void FUN_1008e2f90(void)

{
  return;
}



/* Entry: 1008e2fc0; end: 1008e3093;  */

void FUN_1008e2fc0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(*(long *)(param_1 + 0x48) + 0x80) & 1) == 0) &&
     (((param_2 & 1) != 0 || ((*(byte *)(param_1 + 0xa8) & 1) == 0)))) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    else {
      FUN_1008e2724();
      func_0x000107c2a92c(&uStack_40,param_1 + 0x18);
      puVar3 = (undefined8 *)0x40;
      func_0x000107c60e20();
      func_0x0001008e282c();
      uVar2 = uStack_48;
      uVar1 = uStack_50;
      *puVar3 = &PTR_DAT_110abe030;
      uStack_50 = 0;
      uStack_48 = 0;
      puVar3[5] = uVar2;
      puVar3[4] = uVar1;
      puVar3[7] = uStack_38;
      puVar3[6] = uStack_40;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x000107c2a930(&uStack_50);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x000107c34e64(*(undefined8 *)(param_1 + 0x80));
      (**(code **)(*(long *)(lVar4 + 8) + 0x10))
                ((long *)(lVar4 + 8),extraout_x8 + extraout_x9 * extraout_x10);
    }
  }
  return;
}



/* Entry: 1008e3094; end: 1008e309f;  */

void FUN_1008e3094(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (&stack0x00000008,param_2 + 0x50);
  return;
}



/* Entry: 1008e30a0; end: 1008e30cf;  */

undefined8 FUN_1008e30a0(void)

{
  FUN_1008e3094();
  FUN_10048aa48();
  FUN_10048aa74();
  return 1;
}



/* Entry: 1008e30d0; end: 1008e30ff;  */

undefined8 * FUN_1008e30d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abdc10;
  FUN_1004b6ec4(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  FUN_100450be4(param_1 + 1);
  return param_1;
}


