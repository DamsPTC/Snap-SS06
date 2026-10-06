/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082db368; end: 1082db3cb;  */

void FUN_1082db368(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_28;
  
  if (*(int *)*param_2 != 0) {
    return;
  }
  FUN_1082dbb0c(&lStack_28,param_1,0,param_3,1);
  lVar1 = *param_2;
  if (lVar1 != lStack_28) {
    *param_2 = lStack_28;
    lStack_28 = lVar1;
  }
  FUN_1083a3ca0(lStack_28);
  return;
}



/* Entry: 1082db3cc; end: 1082db45b;  */

void FUN_1082db3cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  *(int *)(param_1 + 0x87) = (int)param_1[0x87] + 1;
  plVar1 = param_1;
  func_0x0001082dc1b8();
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001082db458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4,param_5,param_6,param_1[2]);
  return;
}



/* Entry: 1082db45c; end: 1082db4ff;  */

void FUN_1082db45c(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_3 + 0x30);
  FUN_1082db500();
  if ((uVar1 >> 5 & 1) == 0) {
    if (param_2 == 0) {
      puVar2 = &UNK_10f486bb0;
      goto LAB_1082db4e0;
    }
  }
  else if (param_2 != 0) {
    puVar2 = &UNK_10f486b96;
    goto LAB_1082db4e0;
  }
  puVar2 = &UNK_10f486ba5;
LAB_1082db4e0:
  FUN_1083d4028(param_1,puVar2);
  return;
}



/* Entry: 1082db500; end: 1082db547;  */

byte FUN_1082db500(long param_1,long param_2)

{
  byte bVar1;
  long lStack_18;
  
  param_1 = param_1 + 0x440;
  lStack_18 = param_2;
  FUN_1082dc0b4(param_1,&lStack_18);
  if (param_1 == 0) {
    bVar1 = (*(byte *)(lStack_18 + 0x30) & 0x18) != 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  return bVar1 & 1;
}



/* Entry: 1082db548; end: 1082dba4f;  */

void FUN_1082db548(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  code *extraout_x8_00;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  long lStack_d8;
  long *aplStack_d0 [3];
  undefined4 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_70;
  
  plVar14 = param_1;
  plVar8 = param_2;
  func_0x0001082dc240();
  uVar2 = *(uint *)(plVar8 + 6);
  plVar8 = plVar14 + 0x3d;
  uStack_70 = extraout_x8;
  FUN_1082dba50((long)plVar8 + *(long *)(plVar14[0x3d] + -0x18));
  lVar17 = 0;
  do {
    *(undefined1 *)((long)auStack_e0 + lVar17 + -8) = 0;
    *(undefined4 *)((long)auStack_e0 + lVar17 + -4) = 0;
    *(undefined4 *)((long)auStack_e0 + lVar17) = 0;
    *(undefined8 *)((long)&lStack_d8 + lVar17) = 0x1138270b0;
    *(undefined8 *)((long)aplStack_d0 + lVar17) = 0x1138270b0;
    lVar13 = lVar17 + 0x28;
    *(undefined8 *)((long)aplStack_d0 + lVar17 + 8) = 0x1138270b0;
    lVar17 = lVar13;
  } while (lVar13 != 0x78);
  puVar1 = &UNK_10f486bc1;
  if ((uVar2 & 0x20) != 0) {
    puVar1 = &UNK_10f486bbc;
  }
  func_0x0001082dc2a0(&uStack_120,puVar1);
  plVar7 = aplStack_d0[1];
  plVar14 = aplStack_d0[0];
  lVar17 = lStack_d8;
  uStack_e8 = uStack_120;
  auStack_e0[0] = plStack_118._0_4_;
  if (lStack_d8 != lStack_110) {
    lStack_d8 = lStack_110;
    lStack_110 = lVar17;
  }
  if (aplStack_d0[0] != plStack_108) {
    aplStack_d0[0] = plStack_108;
    plStack_108 = plVar14;
  }
  if (aplStack_d0[1] != (long *)puStack_100) {
    aplStack_d0[1] = (long *)puStack_100;
    puStack_100 = (undefined *)plVar7;
  }
  func_0x0001082dc208();
  if ((*(byte *)(param_2 + 6) >> 5 & 1) == 0) {
    uVar15 = 1;
  }
  else {
    func_0x0001082dc2a0(&uStack_120,&UNK_10f486bb7);
    puVar16 = puStack_a0;
    plVar14 = plStack_a8;
    lVar17 = lStack_b0;
    aplStack_d0[2] = uStack_120;
    uStack_b8 = plStack_118._0_4_;
    if (lStack_b0 != lStack_110) {
      lStack_b0 = lStack_110;
      lStack_110 = lVar17;
    }
    if (plStack_a8 != plStack_108) {
      plStack_a8 = plStack_108;
      plStack_108 = plVar14;
    }
    if (puStack_a0 != puStack_100) {
      puStack_a0 = puStack_100;
      puStack_100 = puVar16;
    }
    func_0x0001082dc208();
    uVar15 = 2;
  }
  plVar14 = (long *)param_1[0x89];
  if ((plVar14 != (long *)0x0) && (param_1[0x8b] != 0)) {
    plVar7 = param_1 + 0x8b;
    FUN_10829e88c(plVar7,param_2);
    uVar9 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar7 & uVar9);
    }
    else {
      plVar10 = plVar7;
      if (plVar14 <= plVar7) {
        uVar4 = 0;
        if (plVar14 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar14;
        }
        plVar10 = (long *)((long)plVar7 - uVar4 * (long)plVar14);
      }
    }
    plVar11 = *(long **)(param_1[0x88] + (long)plVar10 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1082db760;
          plVar12 = (long *)plVar11[1];
          if (plVar12 != plVar7) break;
          if ((long *)plVar11[2] == param_2) {
            if (*(char *)(plVar11 + 8) == '\x01') {
              func_0x0001082dc1a0();
              FUN_10827535c(auStack_e0 + uVar15 * 10 + -2,&uStack_120);
              goto LAB_1082db784;
            }
            FUN_108275af8(&uStack_120,plVar11 + 3);
            if ((char)uStack_120 == '\x0e') {
              puVar16 = (undefined *)(lStack_110 + 8);
            }
            else {
              puVar16 = &UNK_10f486bc8;
              if ((char)uStack_120 == '\x0f') {
                FUN_10828bae8((long)plVar8 + *(long *)(*plVar8 + -0x18),&UNK_10f486bd0);
              }
            }
            func_0x0001082dc208();
            goto LAB_1082db794;
          }
        }
        if (((ulong)plVar14 & uVar9) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar9);
        }
        else if (plVar14 <= plVar12) {
          uVar4 = 0;
          if (plVar14 != (long *)0x0) {
            uVar4 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar4 * (long)plVar14);
        }
      } while (plVar12 == plVar10);
    }
  }
LAB_1082db760:
  if ((*(byte *)(param_2 + 6) & 0x18) != 0) {
    func_0x0001082dc1a0();
    FUN_10827535c(auStack_e0 + uVar15 * 10 + -2,&uStack_120);
LAB_1082db784:
    uVar15 = (ulong)((int)uVar15 + 1);
    func_0x0001082dc208();
  }
  puVar16 = &UNK_10f486bc8;
LAB_1082db794:
  uStack_120 = (long *)((ulong)uStack_120._4_4_ << 0x20);
  FUN_1081f82c8(param_1 + 0x93,&uStack_120);
  for (lVar17 = 0; lVar17 < *(int *)(param_3 + 0x18); lVar17 = lVar17 + 1) {
    if (*(long *)(*(long *)(param_3 + 0x10) + lVar17 * 8) != 0) {
      if ((int)param_2[4] <= lVar17) goto LAB_1082db9f0;
      FUN_1082db548(param_1,*(undefined8 *)(param_2[3] + lVar17 * 8));
      if ((int)param_1[0x94] == 0) goto LAB_1082db9f0;
      lVar13 = param_1[0x93] + (long)(int)param_1[0x94] * 4;
      *(int *)(lVar13 + -4) = *(int *)(lVar13 + -4) + 1;
    }
  }
  if ((int)param_1[0x94] != 0) {
    *(int *)(param_1 + 0x94) = (int)param_1[0x94] + -1;
    plVar14 = param_1;
    (**(code **)(*param_1 + 0x18))();
    (**(code **)(*param_1 + 0x10))();
    lStack_110 = param_1[2];
    puStack_f8 = &UNK_10f486bb7;
    uStack_120 = plVar8;
    plStack_118 = plVar14;
    plStack_108 = param_2;
    puStack_100 = puVar1;
    puStack_f0 = puVar16;
    func_0x0001082dc2ac();
    (*extraout_x8_00)(param_3,&uStack_120);
    lVar17 = *(long *)(*plVar8 + -0x18);
    plVar14 = plStack_108;
    (**(code **)(*plStack_108 + 0x10))();
    FUN_1082dc6a0(&lStack_128,(long)plVar8 + lVar17,plVar14);
    lVar17 = *(long *)(param_3 + 8);
    if (lVar17 != lStack_128) {
      *(long *)(param_3 + 8) = lStack_128;
      lStack_128 = lVar17;
    }
    FUN_1083a3ca0(lStack_128);
    lVar13 = *(long *)(*plVar8 + -0x18);
    lVar17 = *(long *)(param_3 + 8);
    plVar14 = (long *)((long)plVar8 + lVar13);
    func_0x00010828bb68();
    FUN_1082dc7a8((long)plVar8 + lVar13,0x17,lVar17 + 8,&uStack_e8,uVar15,*plVar14 + 8);
    lVar17 = *(long *)(*plVar8 + -0x18);
    iVar3 = *(int *)((long)plVar8 + lVar17 + 0xa8);
    if (iVar3 != 0) {
      FUN_1083a3c7c(*(long *)((long)plVar8 + lVar17 + 0xa0) + (long)iVar3 * 8 + -8);
      *(int *)((long)plVar8 + lVar17 + 0xa8) = *(int *)((long)plVar8 + lVar17 + 0xa8) + -1;
      *(int *)((long)plVar8 + lVar17 + 0x1d0) = *(int *)((long)plVar8 + lVar17 + 0x1d0) + -1;
      lVar17 = 0x50;
      do {
        func_0x00010827024c();
        lVar17 = lVar17 + -0x28;
        bVar6 = lVar17 == -0x28;
      } while (!bVar6);
      func_0x0001082dc1c4(uStack_70);
      if (bVar6) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001082dc208();
      lVar17 = 0x50;
      do {
        lVar13 = (long)auStack_e0 + lVar17 + -8;
        func_0x00010827024c();
        lVar17 = lVar17 + -0x28;
      } while (lVar17 != -0x28);
      func_0x0001082dc198();
      FUN_1082dbd2c(lVar13 + 0xa0);
      *(int *)(lVar13 + 0x1d0) = *(int *)(lVar13 + 0x1d0) + 1;
      return;
    }
  }
LAB_1082db9f0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1082db9f4);
  (*pcVar5)();
}



/* Entry: 1082dba50; end: 1082dba7b;  */

void FUN_1082dba50(long param_1)

{
  FUN_1082dbd2c(param_1 + 0xa0);
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  return;
}



/* Entry: 1082dba7c; end: 1082dbb0b;  */

void FUN_1082dba7c(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x0001082dc25c();
  FUN_1083a394c();
  for (lVar1 = (long)*(int *)(unaff_x20 + 0x4a0) << 2; lVar1 != 0; lVar1 = lVar1 + -4) {
    FUN_1083a3a90();
  }
  return;
}



/* Entry: 1082dbb0c; end: 1082dbbd3;  */

void FUN_1082dbb0c(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_38 [8];
  
  func_0x0001082dc25c();
  if (param_2 == 0) {
    func_0x0001083a3534();
  }
  else {
    FUN_1083a394c();
  }
  if (param_4 != 0) {
    FUN_1082dba7c(auStack_38);
    FUN_1082dbbd4();
    FUN_1083a3a90();
    func_0x0001082dc210();
  }
  return;
}



/* Entry: 1082dbbd4; end: 1082dbbdf;  */

void FUN_1082dbbd4(void)

{
  _strlen();
  return;
}



/* Entry: 1082dbbe0; end: 1082dbcb3;  */

void FUN_1082dbbe0(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001082dbc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 1082dbcb4; end: 1082dbcb7;  */

void FUN_1082dbcb4(void)

{
  return;
}



/* Entry: 1082dbcb8; end: 1082dbcfb;  */

void FUN_1082dbcb8(undefined8 *param_1)

{
  func_0x0001082dbcdc();
  *param_1 = &PTR_FUN_110a38cf0;
  return;
}



/* Entry: 1082dbcfc; end: 1082dbd03;  */

void FUN_1082dbcfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dbd00);
  (*pcVar1)();
}



/* Entry: 1082dbd04; end: 1082dbd2b;  */

long FUN_1082dbd04(long param_1)

{
  func_0x00010827024c(param_1 + 0x28);
  func_0x00010829e920(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10829e48c(param_1,0);
  return param_1;
}



/* Entry: 1082dbd2c; end: 1082dbd4f;  */

void FUN_1082dbd2c(undefined8 *param_1)

{
  FUN_1082dbd50(param_1,1);
  *param_1 = 0x1138270b0;
  return;
}



/* Entry: 1082dbd50; end: 1082dbe03;  */

long FUN_1082dbd50(long *param_1,int param_2)

{
  long lVar1;
  
  FUN_1082826ac(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 8;
}



/* Entry: 1082dbe04; end: 1082dbe2b;  */

undefined8 FUN_1082dbe04(undefined8 param_1)

{
  func_0x0001082dbd88(param_1,0);
  return param_1;
}



/* Entry: 1082dbe2c; end: 1082dbe3f;  */

void FUN_1082dbe2c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1082dbe40; end: 1082dbebf;  */

void FUN_1082dbe40(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1082dbec0; end: 1082dbf3b;  */

undefined1  [16] FUN_1082dbec0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010826dca8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1082dbf3c; end: 1082dbf43;  */

void FUN_1082dbf3c(void)

{
  return;
}



/* Entry: 1082dbf44; end: 1082dbf7f;  */

void FUN_1082dbf44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a38c28;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1082dbf80; end: 1082dbfb7;  */

void FUN_1082dbf80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a38c28;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082dbfb8; end: 1082dc06f;  */

void FUN_1082dbfb8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar2;
  undefined2 uStack_3a;
  long lStack_38;
  
  if (*(int *)(param_2 + 8) == 0x2d) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)**(undefined8 **)(param_1 + 8);
    FUN_1083a3c34(&lStack_38,&UNK_10f486b84);
    *(int *)**(undefined8 **)(param_1 + 8) = *(int *)**(undefined8 **)(param_1 + 8) + 1;
    uStack_3a = *(undefined2 *)(param_2 + 0x4c);
    FUN_1082db3cc(uVar1,*(long *)(param_2 + 0x40) + 0x20,*(undefined8 *)(param_2 + 0x50),
                  *(undefined8 *)(param_2 + 0x58),&uStack_3a,lStack_38 + 8,in_x6,in_x7,uVar2);
    if ((int)uVar1 == -1) {
      **(undefined1 **)(param_1 + 0x18) = 0;
    }
    else {
      *(int *)(param_3 + 0x30) = (int)uVar1;
    }
    func_0x0001082dc210();
  }
  return;
}



/* Entry: 1082dc070; end: 1082dc0a7;  */

long FUN_1082dc070(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a38c88);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082dc0a8; end: 1082dc0b3;  */

undefined ** FUN_1082dc0a8(void)

{
  return &PTR_DAT_110a38c88;
}



/* Entry: 1082dc0b4; end: 1082dc173;  */

long FUN_1082dc0b4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_10829e884();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar2 != plVar6) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 1082dc174; end: 1082dc2cb;  */

void FUN_1082dc174(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082dc17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082dc2cc; end: 1082dc34f;  */

void FUN_1082dc2cc(long *param_1,ulong param_2,undefined1 (*param_3) [16],long param_4,ulong param_5
                  ,long param_6,undefined8 *param_7,long param_8)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  long lStack_18;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar8 = *param_3;
  pauVar1 = param_3 + 1;
  auVar11 = NEON_ext(*pauVar1,auVar8,4,1);
  auVar15._4_12_ = auVar11._4_12_;
  auVar15._0_4_ = auVar11._4_4_;
  auVar13._0_8_ = auVar15._0_8_;
  auVar13._8_4_ = auVar11._12_4_;
  auVar13._12_4_ = auVar11._12_4_;
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._4_4_ = auVar8._4_4_;
  auVar12._0_4_ = auVar11._4_4_;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_4_ = auVar8._12_4_;
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  auVar8 = NEON_ext(auVar8,*pauVar1,4,1);
  auVar11._4_12_ = auVar8._4_12_;
  auVar11._0_4_ = auVar8._4_4_;
  auVar10._0_8_ = auVar11._0_8_;
  auVar10._8_4_ = auVar8._12_4_;
  auVar10._12_4_ = auVar8._12_4_;
  auVar9._8_8_ = auVar10._8_8_;
  auVar9._4_4_ = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar9._0_4_ = auVar8._4_4_;
  auVar8._0_12_ = auVar9._0_12_;
  auVar8._12_4_ = (int)((ulong)*(undefined8 *)(param_3[1] + 8) >> 0x20);
  auVar8 = NEON_ext(auVar8,auVar8,8,1);
  uStack_24 = auVar8._8_8_;
  uStack_2c = auVar8._0_8_;
  uStack_34 = auVar15._8_8_;
  uStack_3c = auVar15._0_8_;
  uStack_1c = *(undefined4 *)param_3[2];
  param_2 = param_2 & 0xffffffff;
  puVar4 = &uStack_3c;
  (**(code **)(*param_1 + 0x98))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = (undefined8 *)0x0;
  uVar5 = 0;
  puVar7 = (undefined4 *)(param_2 + 0x1c);
  do {
    if (puVar4 == puVar6) {
      return;
    }
    if (param_7 == (undefined8 *)0x0) {
LAB_1082dc3bc:
      if (param_5 <= uVar5) {
LAB_1082dc428:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
        (*pcVar3)();
      }
      uVar2 = uVar5 + 1;
      if ((uint)puVar7[-1] < 0xb) {
        (**(code **)(*param_1 + *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar7[-1] * 8)))
                  (param_1,*(undefined4 *)(param_4 + uVar5 * 4),*puVar7,
                   param_8 + *(long *)(puVar7 + -3));
      }
    }
    else {
      if (param_7 <= puVar6) goto LAB_1082dc428;
      uVar2 = uVar5;
      if ((*(byte *)(param_6 + (long)puVar6) & 1) == 0) goto LAB_1082dc3bc;
    }
    uVar5 = uVar2;
    puVar6 = (undefined8 *)((long)puVar6 + 1);
    puVar7 = puVar7 + 10;
  } while( true );
}



/* Entry: 1082dc350; end: 1082dc42b;  */

void FUN_1082dc350(long *param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7,long param_8)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  puVar5 = (undefined4 *)(param_2 + 0x1c);
  do {
    if (param_3 == uVar4) {
      return;
    }
    if (param_7 == 0) {
LAB_1082dc3bc:
      if (param_5 <= uVar3) {
LAB_1082dc428:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
        (*pcVar2)();
      }
      uVar1 = uVar3 + 1;
      if ((uint)puVar5[-1] < 0xb) {
        (**(code **)(*param_1 + *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar5[-1] * 8)))
                  (param_1,*(undefined4 *)(param_4 + uVar3 * 4),*puVar5,
                   param_8 + *(long *)(puVar5 + -3));
      }
    }
    else {
      if (param_7 <= uVar4) goto LAB_1082dc428;
      uVar1 = uVar3;
      if ((*(byte *)(param_6 + uVar4) & 1) == 0) goto LAB_1082dc3bc;
    }
    uVar3 = uVar1;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 10;
  } while( true );
}



/* Entry: 1082dc42c; end: 1082dc5d7;  */

undefined8 * FUN_1082dc42c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  
  *param_1 = &PTR_DAT_110a38b70;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  plVar2 = param_1 + 0x14;
  *plVar2 = (long)(param_1 + 5);
  param_1[0x15] = 0x1e00000000;
  param_1[0x16] = 0x1138270b0;
  param_1[0x17] = 0x1138270b0;
  param_1[0x18] = 0x1138270b0;
  param_1[0x1b] = param_1 + 0x19;
  param_1[0x1c] = 0x400000000;
  func_0x0001082dd624(param_1 + 0x1d);
  func_0x0001082dd624(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x36] = 0x200000000;
  param_1[0x38] = param_1 + 0x37;
  param_1[0x39] = 0x200000000;
  *(undefined4 *)(param_1 + 0x3a) = 9;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  iVar3 = 10;
  do {
    FUN_1082dbd2c(plVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x15) < 9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dc560);
    (*pcVar1)();
  }
  func_0x0001083a3534(*plVar2 + 0x40,&UNK_10f486d0d);
  return param_1;
}



/* Entry: 1082dc5d8; end: 1082dc63b;  */

void FUN_1082dc5d8(long param_1)

{
  func_0x0001082dd670();
  func_0x0001082dd5d0();
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  FUN_1082b07dc();
  func_0x0001082dd638();
  func_0x0001082dd578();
  return;
}



/* Entry: 1082dc63c; end: 1082dc69f;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3774) */
/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082dc63c(void)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 *puVar7;
  uint *puVar8;
  long unaff_x19;
  ulong uVar9;
  undefined1 auStack_58 [8];
  
  func_0x0001082dd670();
  func_0x0001082dd5a4();
  if ((1 < *(int *)(unaff_x19 + 0xa8)) && (FUN_1082b07dc(), 1 < *(int *)(unaff_x19 + 0xa8))) {
    plVar1 = (long *)(*(long *)(unaff_x19 + 0xa0) + 8);
    plVar6 = plVar1;
    FUN_1083a3d50();
    if (plVar6 != (long *)0x0) {
      uVar9 = (ulong)*(uint *)*plVar1;
      plVar3 = (long *)(uVar9 ^ 0xffffffff);
      if ((long)plVar6 + uVar9 >> 0x20 == 0) {
        plVar3 = plVar6;
      }
      if (plVar3 != (long *)0x0) {
        uVar2 = (long)plVar3 + uVar9;
        if (((uint *)*plVar1)[1] == 1 && (uVar2 ^ uVar9) < 4) {
          plVar6 = plVar1;
          func_0x0001083a3dbc(plVar1,0xffffffffffffffff,&UNK_10f486d1f);
          func_0x0001083a3dd4((long)plVar6 + uVar9);
          *(undefined1 *)((long)plVar6 + uVar2) = 0;
          *(int *)*plVar1 = (int)uVar2;
        }
        else {
          puVar7 = auStack_58;
          FUN_1083a3310(puVar7,(long)plVar3 + (ulong)*(uint *)*plVar1);
          func_0x0001083a3de0();
          if (uVar9 != 0) {
            func_0x0001083a3d9c(puVar7,*plVar1 + 8);
          }
          func_0x0001083a3dd4(puVar7 + uVar9);
          puVar8 = (uint *)*plVar1;
          lVar4 = *puVar8 - uVar9;
          if (uVar9 <= *puVar8 && lVar4 != 0) {
            _memcpy(puVar7 + uVar9 + (long)plVar3,(long)puVar8 + uVar9 + 8,lVar4);
            puVar8 = (uint *)*plVar1;
          }
          func_0x0001083a3cdc(puVar8);
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1082dc6a0);
  (*pcVar5)();
}



/* Entry: 1082dc6a0; end: 1082dc6b3;  */

void FUN_1082dc6a0(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [8];
  
  iVar1 = 0;
  func_0x0001082dc25c(*(undefined8 *)(param_1 + 8));
  if (iVar1 == 0) {
    func_0x0001083a3534();
  }
  else {
    FUN_1083a394c();
  }
  FUN_1082dba7c(auStack_38);
  FUN_1082dbbd4();
  FUN_1083a3a90();
  func_0x0001082dc210();
  return;
}



/* Entry: 1082dc6b4; end: 1082dc7a7;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3774) */
/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082dc6b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_58 [8];
  
  if (7 < *(int *)(param_1 + 0xa8)) {
    lVar9 = *(long *)(param_1 + 0xa0);
    func_0x000108395460();
    FUN_1083a3a90(lVar9 + 0x38,&UNK_10f486d21);
    for (lVar9 = 0; param_5 != lVar9; lVar9 = lVar9 + 1) {
      if (lVar9 != 0) {
        if (*(int *)(param_1 + 0xa8) < 8) goto LAB_1082dc7a4;
        FUN_10818f348(*(long *)(param_1 + 0xa0) + 0x38,&UNK_10f486d28);
      }
      lVar5 = *(long *)(param_1 + 8);
      func_0x0001082dd5a4();
      if (*(int *)(param_1 + 0xa8) < 8) goto LAB_1082dc7a4;
      FUN_1082b07dc(param_4,*(undefined8 *)(lVar5 + 0x10),*(long *)(param_1 + 0xa0) + 0x38);
      param_4 = param_4 + 0x28;
    }
    if (7 < *(int *)(param_1 + 0xa8)) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 0x38);
      plVar6 = plVar1;
      FUN_1083a3d50();
      if (plVar6 != (long *)0x0) {
        uVar10 = (ulong)*(uint *)*plVar1;
        plVar3 = (long *)(uVar10 ^ 0xffffffff);
        if ((long)plVar6 + uVar10 >> 0x20 == 0) {
          plVar3 = plVar6;
        }
        if (plVar3 != (long *)0x0) {
          uVar2 = (long)plVar3 + uVar10;
          if (((uint *)*plVar1)[1] == 1 && (uVar2 ^ uVar10) < 4) {
            plVar6 = plVar1;
            func_0x0001083a3dbc(plVar1,0xffffffffffffffff,&UNK_10f486d2b);
            func_0x0001083a3dd4((long)plVar6 + uVar10);
            *(undefined1 *)((long)plVar6 + uVar2) = 0;
            *(int *)*plVar1 = (int)uVar2;
          }
          else {
            puVar7 = auStack_58;
            FUN_1083a3310(puVar7,(long)plVar3 + (ulong)*(uint *)*plVar1);
            func_0x0001083a3de0();
            if (uVar10 != 0) {
              func_0x0001083a3d9c(puVar7,*plVar1 + 8);
            }
            func_0x0001083a3dd4(puVar7 + uVar10);
            puVar8 = (uint *)*plVar1;
            lVar9 = *puVar8 - uVar10;
            if (uVar10 <= *puVar8 && lVar9 != 0) {
              _memcpy(puVar7 + uVar10 + (long)plVar3,(long)puVar8 + uVar10 + 8,lVar9);
              puVar8 = (uint *)*plVar1;
            }
            func_0x0001083a3cdc(puVar8);
          }
        }
      }
      return;
    }
  }
LAB_1082dc7a4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1082dc7a8);
  (*pcVar4)();
}



/* Entry: 1082dc7a8; end: 1082dc7ef;  */

void FUN_1082dc7a8(long param_1)

{
  code *pcVar1;
  
  FUN_1082dc6b4();
  if (7 < *(int *)(param_1 + 0xa8)) {
    func_0x0001082dd630(*(undefined8 *)(param_1 + 0xa0));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dc7f0);
  (*pcVar1)();
}



/* Entry: 1082dc7f0; end: 1082dc867;  */

void FUN_1082dc7f0(long param_1)

{
  code *pcVar1;
  
  if (7 < *(int *)(param_1 + 0xa8)) {
    func_0x0001082dd630(*(undefined8 *)(param_1 + 0xa0),param_1,&UNK_10f486d36);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dc82c);
  (*pcVar1)();
}



/* Entry: 1082dc868; end: 1082dc8d3;  */

void FUN_1082dc868(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  uint unaff_w20;
  undefined8 unaff_x22;
  
  FUN_1082dc8d4(*(undefined8 *)(param_1 + 8),param_3);
  FUN_1083a3a90(param_2,&UNK_10f486d48);
  uVar2 = *(ulong *)(param_1 + 8);
  FUN_1082dc96c(uVar2,param_3);
  func_0x0001082dd670(param_2,uVar2 & 0xffff);
  uVar1 = (uint)param_2;
  FUN_10828aa20();
  if ((uVar1 & 0xffff) != (unaff_w20 & 0xffff)) {
    FUN_1083212bc(&stack0xffffffffffffffd0,&stack0xffffffffffffffde);
    FUN_1083a3a90(unaff_x19,&UNK_10f486e82);
    FUN_1083a3ca0(unaff_x22);
  }
  return;
}



/* Entry: 1082dc8d4; end: 1082dc8f3;  */

void FUN_1082dc8d4(void)

{
  long extraout_x8;
  
  func_0x0001082dd550();
  func_0x0001082dd67c();
                    /* WARNING: Could not recover jumptable at 0x0001082dd608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 1082dc8f4; end: 1082dc96b;  */

void FUN_1082dc8f4(uint param_1)

{
  uint unaff_w20;
  undefined8 uStack_30;
  undefined2 uStack_22;
  
  func_0x0001082dd670();
  uStack_22 = (undefined2)unaff_w20;
  FUN_10828aa20();
  if ((param_1 & 0xffff) != (unaff_w20 & 0xffff)) {
    FUN_1083212bc(&uStack_30,&uStack_22);
    FUN_1083a3a90();
    FUN_1083a3ca0(uStack_30);
  }
  return;
}



/* Entry: 1082dc96c; end: 1082dc98b;  */

void FUN_1082dc96c(void)

{
  long extraout_x8;
  
  func_0x0001082dd550();
  func_0x0001082dd67c();
                    /* WARNING: Could not recover jumptable at 0x0001082dd608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x40))();
  return;
}



/* Entry: 1082dc98c; end: 1082dc9df;  */

void FUN_1082dc98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  
  func_0x0001082dd5d0();
  FUN_1082dc868();
  FUN_1082dc9e0(param_1,uStack_28 + 8,param_4);
  func_0x0001082dd578();
  return;
}



/* Entry: 1082dc9e0; end: 1082dca23;  */

void FUN_1082dc9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x0001082dd5d0(param_1,param_2,param_2,param_3);
  FUN_1082dcb88();
  func_0x0001082dd664(uStack_28);
  func_0x0001082dd578();
  return;
}



/* Entry: 1082dca24; end: 1082dcad3;  */

void FUN_1082dca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lStack_48;
  
  func_0x0001082dd5d0();
  FUN_10831fba4();
  func_0x0001082dd638();
  FUN_1082dc868(param_1,&lStack_48,param_4,param_5);
  FUN_1082dc9e0(param_1,lStack_48 + 8,param_6);
  func_0x0001082dd638();
  func_0x0001082dd578();
  return;
}



/* Entry: 1082dcad4; end: 1082dcb47;  */

void FUN_1082dcad4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  FUN_1082dcb48(*(undefined8 *)(param_1 + 8),param_2);
  uStack_28 = 0x1138270b0;
  func_0x0001082dd580();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x0001082dcb68(uVar1,param_2);
  FUN_1082dc8f4(&uStack_28,uVar1 & 0xffff);
  func_0x0001082dd664(uStack_28);
  func_0x0001082dd578();
  return;
}



/* Entry: 1082dcb48; end: 1082dcb87;  */

void FUN_1082dcb48(void)

{
  long extraout_x8;
  
  func_0x0001082dd550();
  func_0x0001082dd67c();
                    /* WARNING: Could not recover jumptable at 0x0001082dd608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x48))();
  return;
}



/* Entry: 1082dcb88; end: 1082dcf53;  */

long * FUN_1082dcb88(long param_1,long *param_2,undefined8 *param_3,long **param_4,ulong param_5,
                    int param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long **pplVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long alStack_130 [5];
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *aplStack_90 [5];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  pplVar8 = param_4;
  if ((param_4 == (long **)0x0) ||
     (pplVar4 = param_4, FUN_1082c7054(), unaff_x23 = param_1, (int)pplVar4 != 0)) {
    func_0x0001082dd590(uStack_68);
    param_1 = unaff_x23;
    if ((bool)in_ZR) {
      FUN_1083a3348(&stack0xffffffffffffffd8,param_3);
      lVar9 = *param_2;
      if (lVar9 != unaff_x21) {
        *param_2 = unaff_x21;
        unaff_x21 = lVar9;
      }
      FUN_1083a3ca0(unaff_x21);
      return param_2;
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0x18))();
    unaff_x19 = (long *)0x1138270b0;
    plStack_98 = plVar5;
    if (*(char *)((long)param_4 + 0xd) == '\x01') {
      param_5 = (ulong)*(uint *)param_4;
      func_0x0001082dd5f4();
      unaff_x19 = aplStack_90[0];
      if (aplStack_90[0] != (long *)0x1138270b0) {
        aplStack_90[0] = (long *)0x1138270b0;
      }
      func_0x0001082dd5e0();
    }
    unaff_x20 = (long *)0x1138270b0;
    if (*(char *)((long)param_4 + 0xf) == '\x01') {
      param_5 = (ulong)*(uint *)(param_4 + 1);
      func_0x0001082dd5f4();
      unaff_x20 = aplStack_90[0];
      if (aplStack_90[0] != (long *)0x1138270b0) {
        aplStack_90[0] = (long *)0x1138270b0;
      }
      func_0x0001082dd5e0();
    }
    unaff_x24 = 0x1138270b0;
    if (*(char *)((long)param_4 + 0xe) == '\x01') {
      func_0x0001082dd5b0();
      (**(code **)(*plVar5 + 0x18))(plVar5,*(uint *)((long)param_4 + 4));
      uStack_a0 = 0x1138270b0;
      plStack_c0 = plVar5;
      FUN_1083a3a90(&uStack_a0,&UNK_10f486d88);
      FUN_10818f348(&uStack_a0,&UNK_10f486aa9);
      func_0x0001082dd658();
      unaff_x24 = lStack_a8;
      if (lStack_a8 != 0x1138270b0) {
        lStack_a8 = 0x1138270b0;
      }
      func_0x0001082dd5e0();
      func_0x0001082dd650(param_1,0x10,unaff_x24 + 8,aplStack_90);
      func_0x0001082dd640();
      func_0x0001082dd648();
    }
    func_0x0001082dd5b0();
    uStack_a0 = 0x1138270b0;
    if (*(char *)((long)param_4 + 0xc) == '\x01') {
      func_0x0001082dd61c();
    }
    if (*(char *)((long)param_4 + 0xd) == '\x01') {
      plVar5 = unaff_x19 + 1;
      plStack_c0 = plVar5;
      func_0x0001082dd588();
      plStack_c0 = plVar5;
      func_0x0001082dd588();
      plStack_c0 = plVar5;
      func_0x0001082dd588();
    }
    if (*(char *)((long)param_4 + 0xe) == '\x01') {
      plStack_c0 = (long *)(unaff_x24 + 8);
      func_0x0001082dd588();
    }
    if (*(char *)((long)param_4 + 0xf) == '\x01') {
      plVar5 = unaff_x20 + 1;
      plStack_c0 = plVar5;
      func_0x0001082dd588();
      plStack_c0 = plVar5;
      func_0x0001082dd588();
      plStack_c0 = plVar5;
      func_0x0001082dd588();
    }
    uVar3 = *(char *)(param_4 + 2) == '\x01';
    if ((bool)uVar3) {
      func_0x0001082dd61c();
    }
    func_0x0001082dd61c();
    func_0x0001082dd658();
    puVar7 = (undefined8 *)(lStack_a8 + 8);
    pplVar8 = aplStack_90;
    param_6 = (int)uStack_a0 + 8;
    func_0x0001082dd650(param_1,0x17);
    plStack_c0 = (long *)(lStack_a8 + 8);
    puStack_b8 = param_3;
    FUN_1083a3a90(param_2,&UNK_10f486e44);
    FUN_1083a3ca0(lStack_a8);
    func_0x0001082dd640();
    func_0x0001082dd648();
    FUN_1083a3ca0(unaff_x24);
    FUN_1083a3ca0(unaff_x20);
    plVar5 = unaff_x19;
    FUN_1083a3ca0(unaff_x19);
    func_0x0001082dd590(uStack_68);
    if ((bool)uVar3) {
      return plVar5;
    }
  }
  ___stack_chk_fail();
  func_0x0001082dd60c();
  func_0x0001082dd640();
  func_0x0001082dd648();
  FUN_1083a3ca0(unaff_x24);
  FUN_1083a3ca0(unaff_x20);
  FUN_1083a3ca0(unaff_x19);
  __Unwind_Resume(param_2);
  pcStack_c8 = FUN_1082dcf54;
  lStack_100 = unaff_x24;
  lStack_f8 = param_1;
  puStack_f0 = param_3;
  plStack_e8 = param_2;
  plStack_e0 = unaff_x20;
  plStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x0001082dd670();
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10829de5c(alStack_130,&DAT_10f62b0e2,0xd,0);
  (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,param_5);
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd5ec();
  func_0x0001082dd5ec();
  uVar3 = param_6 - 1U == 4;
  if (param_6 - 1U < 4) {
    func_0x0001082dd5ec();
  }
  func_0x0001082dd5ec();
  FUN_1082dc6a0(unaff_x19,unaff_x20,pplVar8);
  uVar6 = 0xd;
  func_0x0001082dd650(unaff_x20,0xd,*unaff_x19 + 8,alStack_130);
  func_0x0001082dd578();
  plVar5 = alStack_130;
  func_0x00010827024c();
  func_0x0001082dd590(uStack_108);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_1083a3c7c(unaff_x19);
  func_0x0001082dd578();
  func_0x00010827024c(alStack_130);
  __Unwind_Resume();
  uVar1 = *(uint *)(plVar5 + 0x33);
  if ((uVar1 & uVar6) == 0) {
    if ((int)plVar5[0x15] < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dd188);
      (*pcVar2)();
    }
    FUN_1083a3a90(plVar5[0x14],&UNK_10f486e4b);
    *(uint *)(plVar5 + 0x33) = *(uint *)(plVar5 + 0x33) | uVar6;
  }
  return (long *)(ulong)((uVar1 & uVar6) == 0);
}



/* Entry: 1082dcf54; end: 1082dd113;  */

undefined1 *
FUN_1082dcf54(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  func_0x0001082dd670();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10829de5c(auStack_70,&DAT_10f62b0e2,0xd,0);
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_5);
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd580();
  func_0x0001082dd5ec();
  func_0x0001082dd5ec();
  uVar3 = param_6 - 1U == 4;
  if (param_6 - 1U < 4) {
    func_0x0001082dd5ec();
  }
  func_0x0001082dd5ec();
  FUN_1082dc6a0();
  uVar5 = 0xd;
  func_0x0001082dd650();
  func_0x0001082dd578();
  puVar4 = auStack_70;
  func_0x00010827024c();
  func_0x0001082dd590(uStack_48);
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_1083a3c7c();
  func_0x0001082dd578();
  func_0x00010827024c(auStack_70);
  __Unwind_Resume();
  uVar1 = *(uint *)(puVar4 + 0x198);
  if ((uVar1 & uVar5) == 0) {
    if (*(int *)(puVar4 + 0xa8) < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dd188);
      (*pcVar2)();
    }
    FUN_1083a3a90(*(undefined8 *)(puVar4 + 0xa0),&UNK_10f486e4b);
    *(uint *)(puVar4 + 0x198) = *(uint *)(puVar4 + 0x198) | uVar5;
  }
  return (undefined1 *)(ulong)((uVar1 & uVar5) == 0);
}



/* Entry: 1082dd114; end: 1082dd23f;  */

bool FUN_1082dd114(long param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 0x198) & param_2;
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0xa8) < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dd188);
      (*pcVar2)();
    }
    FUN_1083a3a90(*(undefined8 *)(param_1 + 0xa0),&UNK_10f486e4b);
    *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x198) | param_2;
  }
  return uVar1 == 0;
}



/* Entry: 1082dd240; end: 1082dd24f;  */

long * FUN_1082dd240(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x10);
  *param_1 = *param_2 + 0x10;
  param_1[1] = lVar1;
  FUN_1082dd50c();
  return param_1;
}



/* Entry: 1082dd250; end: 1082dd2cf;  */

long * FUN_1082dd250(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = (int)param_1[2] + 0x28;
  *(int *)(param_1 + 2) = iVar1;
  if (*(int *)((long)param_1 + 0x14) < iVar1) {
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
    }
    param_1[1] = lVar3;
    FUN_1082dd50c(param_1);
  }
  return param_1;
}



/* Entry: 1082dd2d0; end: 1082dd3f7;  */

void FUN_1082dd2d0(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  do {
    if (lVar3 == 2) {
      return;
    }
    lVar4 = param_1 + 0x1a8 + lVar3 * 0x18;
    iVar1 = *(int *)(lVar4 + 8);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0xa8) < 4) || (iVar1 < 1)) {
LAB_1082dd3f4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dd3f8);
        (*pcVar2)();
      }
      FUN_1083a3a90(*(long *)(param_1 + 0xa0) + 0x18,&UNK_10f486e6a);
      for (lVar5 = 1; lVar5 < *(int *)(lVar4 + 8); lVar5 = lVar5 + 1) {
        if (*(int *)(param_1 + 0xa8) < 4) goto LAB_1082dd3f4;
        FUN_1083a3a90(*(long *)(param_1 + 0xa0) + 0x18,&UNK_10f486e74);
      }
      if (*(int *)(param_1 + 0xa8) < 4) goto LAB_1082dd3f4;
      FUN_1083a3a90(*(long *)(param_1 + 0xa0) + 0x18,&UNK_10f486e79);
    }
    lVar3 = lVar3 + 1;
  } while( true );
}



/* Entry: 1082dd3f8; end: 1082dd50b;  */

void FUN_1082dd3f8(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  
  FUN_1082dd2d0();
  if (((4 < (int)param_1[0x15]) &&
      (FUN_1082dbbe0(param_1[1],param_2,param_1[0x14] + 0x20), 5 < (int)param_1[0x15])) &&
     (func_0x0001082dd188(param_1,param_1 + 0x1d,param_1[0x14] + 0x28), 6 < (int)param_1[0x15])) {
    func_0x0001082dd188(param_1,param_1 + 0x28,param_1[0x14] + 0x30);
    (**(code **)(*param_1 + 0x10))(param_1);
    func_0x00010828bb68(param_1);
    FUN_10818f348();
    lVar3 = 0;
    while( true ) {
      if ((int)param_1[0x3a] < lVar3) {
        *(undefined1 *)((long)param_1 + 0x1d4) = 1;
        return;
      }
      if ((int)param_1[0x15] <= lVar3) break;
      puVar2 = *(undefined4 **)(param_1[0x14] + lVar3 * 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1 + 2,puVar2 + 2,*puVar2);
      lVar3 = lVar3 + 1;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dd4e4);
  (*pcVar1)();
}



/* Entry: 1082dd50c; end: 1082dd687;  */

void FUN_1082dd50c(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  do {
    if (plVar2 == (long *)0x0) {
      iVar1 = 0;
      uVar3 = 0;
LAB_1082dd548:
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(int *)((long)param_1 + 0x14) = iVar1;
      return;
    }
    iVar1 = *(int *)(plVar2 + 3);
    if (iVar1 != 0) {
      uVar3 = 0x20;
      goto LAB_1082dd548;
    }
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    if (plVar2 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    param_1[1] = lVar4;
  } while( true );
}



/* Entry: 1082dd688; end: 1082dd753;  */

void FUN_1082dd688(ulong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int iVar6;
  undefined8 *unaff_x24;
  ulong uVar7;
  
  FUN_1082dd754();
  uVar7 = param_1;
  do {
    iVar6 = (int)uVar7;
    uVar7 = (ulong)(iVar6 - 1);
    if (iVar6 < 1) {
      func_0x0001082dd780();
      return;
    }
    func_0x0001082dd7bc(*(undefined8 *)(*unaff_x22 + 0x30));
  } while ((*(long *)(param_1 + 0x30) != unaff_x21) || (func_0x0001082dd770(), (param_1 & 1) == 0));
  uVar4 = *unaff_x24;
  *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x24 + 1);
  *unaff_x19 = uVar4;
  lVar5 = unaff_x24[2];
  if (lVar5 != 0 && lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[2] = lVar5;
  lVar5 = unaff_x24[3];
  if ((lVar5 != 0) && (lVar5 != 0x1138270b0)) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[3] = lVar5;
  lVar5 = unaff_x24[4];
  if (lVar5 != 0 && lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[4] = lVar5;
  return;
}



/* Entry: 1082dd754; end: 1082dd7c7;  */

void FUN_1082dd754(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082dd76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 1082dd7c8; end: 1082dd867;  */

void FUN_1082dd7c8(long param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  auStack_48[0] = *param_2;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  FUN_1082dd868(param_1,*(long *)(param_2 + 0x10) + 8,auStack_48);
  FUN_10828bae8(*(long *)(param_1 + 0x1b0) + 8,&UNK_10f487016);
  FUN_10828bae8(*(long *)(param_1 + 0x1b0) + 0x1e8 +
                *(long *)(*(long *)(*(long *)(param_1 + 0x1b0) + 0x1e8) + -0x18),&UNK_10f487016);
  return;
}



/* Entry: 1082dd868; end: 1082dd983;  */

void FUN_1082dd868(long param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long lStack_48;
  
  puVar2 = (undefined1 *)(param_1 + 8);
  FUN_1082dd984();
  *puVar2 = *param_3;
  lVar3 = *(long *)(param_1 + 0x1b0);
  func_0x0001082ddfd8();
  if (param_4 == 0) {
    bVar4 = 0;
  }
  else if (param_4 == 2) {
    bVar4 = 1;
  }
  else {
    if (param_4 != 1) {
      FUN_10841076c(&UNK_10f487034);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082dd984);
      (*pcVar1)();
    }
    bVar4 = *(byte *)(*(long *)(lVar3 + 0x10) + 0x5d);
  }
  puVar2[1] = bVar4 & 1;
  FUN_1082dbb0c(&lStack_48,*(undefined8 *)(param_1 + 0x1b0),0x76,param_2,1);
  lVar3 = *(long *)(puVar2 + 8);
  if (lVar3 != lStack_48) {
    *(long *)(puVar2 + 8) = lStack_48;
    lStack_48 = lVar3;
  }
  FUN_1083a3ca0(lStack_48);
  iVar5 = *(int *)(param_3 + 4);
  lVar3 = *(long *)(puVar2 + 8);
  if (iVar5 != 2) {
    *(long *)(param_3 + 8) = lVar3 + 8;
    *(undefined4 *)(puVar2 + 0x10) = 1;
    if (iVar5 == 1) {
      return;
    }
    iVar5 = 3;
  }
  *(long *)(param_3 + 0x10) = lVar3 + 8;
  *(int *)(puVar2 + 0x10) = iVar5;
  return;
}



/* Entry: 1082dd984; end: 1082dd9a3;  */

void FUN_1082dd984(long param_1)

{
  func_0x0001082ddf20();
  *(undefined8 *)(param_1 + 8) = 0x1138270b0;
  return;
}



/* Entry: 1082dd9a4; end: 1082dda3f;  */

void FUN_1082dd9a4(undefined8 param_1,long param_2)

{
  long alStack_38 [3];
  
  FUN_10829e390(alStack_38,param_2 + 0x10);
  while (alStack_38[0] != 0) {
    func_0x0001082de040();
    func_0x0001082de024();
    func_0x0001082de018();
    func_0x0001082de010();
    FUN_10829e258(alStack_38);
  }
  FUN_10829e390(alStack_38,param_2 + 0x28);
  while (alStack_38[0] != 0) {
    func_0x0001082de040();
    func_0x0001082de024();
    func_0x0001082de018();
    func_0x0001082de010();
    FUN_10829e258(alStack_38);
  }
  return;
}



/* Entry: 1082dda40; end: 1082ddb6b;  */

void FUN_1082dda40(long param_1,long param_2)

{
  ulong uVar1;
  long alStack_58 [2];
  int iStack_48;
  long alStack_40 [2];
  int iStack_30;
  long lStack_28;
  
  lStack_28 = param_1 + 0x50;
  FUN_1082760b8(alStack_40,&lStack_28);
  func_0x000108276118(alStack_58,0,0);
  while ((alStack_58[0] != alStack_40[0] || ((alStack_58[0] != 0 && (iStack_48 != iStack_30))))) {
    uVar1 = alStack_40[0] + iStack_30 + 0x10;
    FUN_1083a3440(uVar1,param_2 + 0x10);
    if ((uVar1 & 1) != 0) {
      return;
    }
    func_0x0001082760c8(alStack_40);
  }
  func_0x0001082ddadc(param_1 + 0x50,param_2);
  return;
}



/* Entry: 1082ddb6c; end: 1082dddf7;  */

void FUN_1082ddb6c(long *param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *apuStack_a8 [2];
  int iStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  func_0x0001082ddf6c(&puStack_90,param_1 + 3,param_1[3]);
  func_0x0001082ddf6c(apuStack_a8,0,0);
  while (iVar5 = iStack_80,
        apuStack_a8[0] != puStack_90 ||
        apuStack_a8[0] != (undefined8 *)0x0 && iStack_98 != iStack_80) {
    pcVar2 = (char *)((long)puStack_90 + (long)iStack_80);
    puVar8 = &DAT_10f48702d;
    if ((pcVar2[1] & 1U) == 0) {
      puVar8 = (undefined *)param_1[0x37];
    }
    uVar7 = *(uint *)(pcVar2 + 0x10);
    if ((uVar7 & 1) != 0) {
      uStack_b0 = 0x1138270b0;
      FUN_1083a3348(&uStack_b8,puVar8);
      plVar6 = param_1 + 0x15;
      func_0x0001082da520(plVar6);
      lStack_68 = *(long *)(pcVar2 + 8);
      if (lStack_68 != 0 && lStack_68 != 0x1138270b0) {
        piVar1 = (int *)(lStack_68 + 4);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      cVar3 = *pcVar2;
      FUN_1083a33c4(auStack_70,&uStack_b0);
      FUN_1083a33c4(auStack_78,&uStack_b8);
      FUN_108275984(plVar6,&lStack_68,(long)cVar3,1,0,auStack_70,auStack_78);
      func_0x0001082ddfe4();
      func_0x0001082ddfec();
      func_0x0001082de038();
      func_0x0001082de000();
      func_0x0001082de030();
      uVar7 = *(uint *)(pcVar2 + 0x10);
    }
    if ((uVar7 >> 1 & 1) != 0) {
      FUN_1083a3348(&uStack_b0,*(long *)(pcVar2 + 8) + 8);
      uStack_b8 = 0x1138270b0;
      FUN_1083a3348(&uStack_c0,puVar8);
      plVar6 = param_1 + 0x20;
      func_0x0001082da520(plVar6);
      FUN_1083a33c4(&lStack_68,&uStack_b0);
      cVar3 = *pcVar2;
      FUN_1083a33c4(auStack_70,&uStack_b8);
      FUN_1083a33c4(auStack_78,&uStack_c0);
      FUN_108275984(plVar6,&lStack_68,(long)cVar3,2,0,auStack_70,auStack_78);
      func_0x0001082ddfe4();
      func_0x0001082ddfec();
      func_0x0001082de038();
      FUN_1083a3ca0(uStack_c0);
      func_0x0001082de000();
      func_0x0001082de030();
    }
    iStack_80 = iVar5 + 0x18;
    if (iStack_7c < iStack_80) {
      puStack_90 = puStack_88;
      if (puStack_88 != (undefined8 *)0x0) {
        puStack_88 = (undefined8 *)*puStack_88;
      }
      func_0x0001082ddf94(&puStack_90);
    }
  }
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 1082dddf8; end: 1082ddeaf;  */

void FUN_1082dddf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long alStack_68 [2];
  int iStack_58;
  long alStack_50 [2];
  int iStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  FUN_1082dd240(alStack_50,&uStack_38);
  func_0x0001082dd4e4(alStack_68,0,0);
  while ((alStack_68[0] != alStack_50[0] || ((alStack_68[0] != 0 && (iStack_58 != iStack_40))))) {
    lVar1 = alStack_50[0] + iStack_40;
    lVar2 = *(long *)(param_1 + 0x1b0);
    func_0x0001082ddfd8();
    FUN_1082b07dc(lVar1,*(undefined8 *)(lVar2 + 0x10),param_3);
    FUN_10818f348(param_3,&UNK_10f487032);
    FUN_1082dd250(alStack_50);
  }
  return;
}



/* Entry: 1082ddeb0; end: 1082ddf93;  */

void FUN_1082ddeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long alStack_68 [2];
  int iStack_58;
  long alStack_50 [2];
  int iStack_40;
  long lStack_38;
  
  FUN_1082dddf8(param_1,param_1 + 0x50,param_2);
  lStack_38 = param_1 + 0xa8;
  FUN_1082dd240(alStack_50,&lStack_38);
  func_0x0001082dd4e4(alStack_68,0,0);
  while ((alStack_68[0] != alStack_50[0] || ((alStack_68[0] != 0 && (iStack_58 != iStack_40))))) {
    lVar1 = alStack_50[0] + iStack_40;
    lVar2 = *(long *)(param_1 + 0x1b0);
    func_0x0001082ddfd8();
    FUN_1082b07dc(lVar1,*(undefined8 *)(lVar2 + 0x10),param_3);
    FUN_10818f348(param_3,&UNK_10f487032);
    FUN_1082dd250(alStack_50);
  }
  return;
}



/* Entry: 1082ddf94; end: 1082de04b;  */

void FUN_1082ddf94(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  do {
    if (plVar2 == (long *)0x0) {
      iVar1 = 0;
      uVar3 = 0;
LAB_1082ddfd0:
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(int *)((long)param_1 + 0x14) = iVar1;
      return;
    }
    iVar1 = *(int *)(plVar2 + 3);
    if (iVar1 != 0) {
      uVar3 = 0x20;
      goto LAB_1082ddfd0;
    }
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    if (plVar2 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    param_1[1] = lVar4;
  } while( true );
}



/* Entry: 1082de04c; end: 1082de16b;  */

void FUN_1082de04c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x3f0) + 0x88) + 0x40) >> 3 & 1) == 0)
  {
    if (param_4 == 0xf) {
      puVar1 = &UNK_10f487138;
    }
    else {
      puVar1 = &UNK_10f48714f;
    }
    FUN_1083a3a90(param_2,puVar1);
    return;
  }
  if (param_4 == 0xf) {
    puVar1 = &UNK_10f4870be;
  }
  else {
    puVar1 = &UNK_10f4870de;
  }
  FUN_1083a3a90(param_2,puVar1);
  FUN_1083a3ab4(param_2,&UNK_10f4870f4,&stack0x00000000);
  return;
}



/* Entry: 1082de16c; end: 1082de16f;  */

undefined8 * FUN_1082de16c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110a38b70;
  lVar1 = 0x1c0;
  do {
    FUN_10815dbb8((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 400);
  FUN_108270090(param_1 + 0x28);
  FUN_108270090(param_1 + 0x1d);
  FUN_1082da480(param_1 + 0x1b);
  FUN_1083a3c7c(param_1 + 0x18);
  FUN_1083a3c7c(param_1 + 0x17);
  FUN_1083a3c7c(param_1 + 0x16);
  FUN_10815dbb8(param_1 + 0x14);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1082de170; end: 1082de183;  */

void FUN_1082de170(void)

{
  func_0x0001082da088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082de184; end: 1082de1af;  */

long * FUN_1082de184(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  if (lVar1 == 0) {
    *(long **)(param_1 + 0x20) = plVar2;
  }
  else {
    *(long **)(lVar1 + 8) = plVar2;
  }
  if (plVar2 == (long *)0x0) {
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    *plVar2 = lVar1;
  }
  return param_2;
}



/* Entry: 1082de1b0; end: 1082de5c3;  */

int ** FUN_1082de1b0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined4 param_5,
                    byte *param_6,undefined8 param_7,long param_8,uint param_9,uint param_10,
                    long *param_11)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined8 uVar4;
  int **ppiVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  long lStack_230;
  int *piStack_228;
  int aiStack_220 [64];
  undefined1 auStack_120 [40];
  long lStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar6 = (int)param_4;
  iVar7 = 0;
  if (param_8 != 0) {
    iVar7 = 2;
  }
  uVar1 = iVar6 * 5 + iVar7 + 4;
  piVar12 = (int *)(long)(int)uVar1;
  if (uVar1 < 0x41) {
    piVar3 = (int *)0x0;
    if (uVar1 != 0) {
      piVar3 = aiStack_220;
    }
  }
  else {
    piVar3 = piVar12;
    FUN_10840ffdc(piVar12,4);
  }
  *piVar3 = iVar6;
  piStack_228 = piVar3;
  _memcpy(piVar3 + 1,param_2,
          -(param_4 >> 0x1f & 1) & 0xfffffff000000000 | (param_4 & 0xffffffff) << 4);
  puVar8 = (uint *)((long)piVar3 + (((long)iVar6 << 0x22) >> 0x1e) + 0x10);
  for (lVar11 = 1; lVar11 < iVar6 + -1; lVar11 = lVar11 + 1) {
    puVar8[-3] = *(uint *)(param_3 + lVar11 * 4);
    puVar8 = puVar8 + 1;
  }
  puVar8[-3] = param_10;
  puVar8[-2] = param_9;
  bVar2 = param_6[1];
  puVar8[-1] = (uint)*param_6;
  *puVar8 = (uint)bVar2;
  puVar8[1] = (uint)param_6[2];
  if (param_8 != 0) {
    puVar8[2] = *(uint *)(param_8 + 8);
    puVar8[3] = *(uint *)(param_8 + 4);
  }
  lStack_230 = param_1;
  func_0x0001081efc58(param_1);
  piVar3 = piStack_228;
  lVar11 = (long)piVar12 * 4;
  puVar9 = (undefined8 *)(param_1 + 0x20);
  puVar13 = puVar9;
  do {
    puVar13 = (undefined8 *)*puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      uStack_240 = CONCAT44(param_10,param_9);
      uStack_238 = (ulong)*(uint *)(param_1 + 0x18) | 0x100000000;
      uStack_248 = 0;
      FUN_108330980(param_11,&uStack_248);
      FUN_108186568(auStack_e8,0);
      puStack_80 = auStack_a0;
      uStack_78 = 0x400000000;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_f8 = param_11[1];
      uStack_f0 = 0;
      puStack_c8 = auStack_e8;
      FUN_108387820(&puStack_c8,0x11,0);
      func_0x00010815f6c0(auStack_120,1.0 / (float)(int)param_11[5]);
      FUN_108387e90(&puStack_c8,auStack_e8,auStack_120);
      FUN_1083bf814(&puStack_c8,auStack_e8,param_2,param_3,param_4);
      FUN_1083bfb74(&puStack_c8,auStack_e8,param_5,param_6,param_7,param_8);
      func_0x000108388378(&puStack_c8,(int)param_11[4],&lStack_f8);
      FUN_108388618(&puStack_c8,0,0,(long)(int)param_11[5],1);
      FUN_10821a944(&puStack_80);
      FUN_10840f740(auStack_e8);
      if (*param_11 != 0) {
        *(undefined1 *)(*param_11 + 0x59) = 2;
      }
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
        lVar14 = *(long *)(param_1 + 0x28);
        FUN_1082de5f8();
        if (lVar14 != 0) {
          _free(*(undefined8 *)(lVar14 + 0x10));
          func_0x000108330548(lVar14 + 0x20);
        }
        __ZdlPv(lVar14);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      }
      puVar13 = (undefined8 *)0x58;
      __Znwm();
      *puVar13 = 0;
      puVar13[1] = 0;
      FUN_10833043c(puVar13 + 4,param_11);
      lVar14 = lVar11;
      FUN_108410808(lVar11,2);
      puVar13[2] = lVar14;
      puVar13[3] = lVar11;
      _memcpy();
      puVar9 = (undefined8 *)*puVar9;
      *puVar13 = 0;
      puVar13[1] = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x28) = puVar13;
      }
      else {
        *puVar9 = puVar13;
      }
      *(undefined8 **)(param_1 + 0x20) = puVar13;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_10810a400(&uStack_248);
LAB_1082de518:
      FUN_1081efc78(&lStack_230);
      ppiVar5 = &piStack_228;
      FUN_1082de5c4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        FUN_1081efc78(&lStack_230);
        FUN_1082de5c4(&piStack_228);
        __Unwind_Resume();
        if ((int **)*ppiVar5 != ppiVar5 + 1) {
          _free();
        }
        return ppiVar5;
      }
      return ppiVar5;
    }
    if (puVar13[3] == lVar11) {
      uVar4 = puVar13[2];
      _memcmp(uVar4,piVar3,lVar11);
      if ((int)uVar4 == 0) {
        if (param_11 != (long *)0x0) {
          func_0x000108330578(param_11,puVar13 + 4);
        }
        FUN_1082de5f8();
        puVar10 = *(undefined8 **)(param_1 + 0x20);
        *puVar13 = 0;
        puVar13[1] = puVar10;
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined8 **)(param_1 + 0x28) = puVar13;
        }
        else {
          *puVar10 = puVar13;
        }
        *puVar9 = puVar13;
        goto LAB_1082de518;
      }
    }
    puVar13 = puVar13 + 1;
  } while( true );
}



/* Entry: 1082de5c4; end: 1082de5f7;  */

long * FUN_1082de5c4(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  return param_1;
}



/* Entry: 1082de5f8; end: 1082de603;  */

void FUN_1082de5f8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x23;
  
  lVar1 = *unaff_x23;
  plVar2 = (long *)unaff_x23[1];
  if (lVar1 == 0) {
    *(long **)(unaff_x19 + 0x20) = plVar2;
  }
  else {
    *(long **)(lVar1 + 8) = plVar2;
  }
  if (plVar2 == (long *)0x0) {
    *(long *)(unaff_x19 + 0x28) = lVar1;
  }
  else {
    *plVar2 = lVar1;
  }
  return;
}



/* Entry: 1082de604; end: 1082de703;  */

uint FUN_1082de604(int param_1,long param_2,long param_3,uint param_4,long param_5,long param_6,
                  long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float in_s3;
  undefined8 in_d4;
  undefined8 in_register_00005088;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  lVar6 = 0;
  uVar5 = 0;
  do {
    pfVar4 = (float *)(param_3 + 4 + lVar6 * 4);
    puVar2 = (undefined8 *)(param_2 + lVar6 * 0x10);
    do {
      puVar3 = puVar2;
      if (param_1 + -1 <= lVar6 || param_4 <= uVar5) {
        uVar1 = 0;
        if (param_1 + -1 <= lVar6) {
          uVar1 = uVar5;
        }
        return uVar1;
      }
      lVar6 = lVar6 + 1;
      fVar14 = pfVar4[-1];
      fVar15 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      puVar2 = puVar3 + 2;
    } while (ABS(fVar15 - fVar14) <= 0.00024414062);
    uVar12 = puVar3[1];
    uVar10 = *puVar3;
    uVar7 = puVar3[2];
    fVar8 = (float)uVar10;
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    FUN_1082de704(CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar11,(float)uVar7 - fVar8),
                  fVar15 - fVar14);
    fVar9 = (float)uVar10;
    func_0x0001082dff58();
    uVar7 = in_d4;
    uVar10 = in_d4;
    uVar13 = in_register_00005088;
    func_0x0001082de710();
    puVar2 = (undefined8 *)(param_5 + (ulong)uVar5 * 0x10);
    puVar2[1] = in_register_00005088;
    *puVar2 = in_d4;
    puVar2 = (undefined8 *)(param_6 + (ulong)uVar5 * 0x10);
    puVar2[1] = CONCAT44((float)((ulong)uVar12 >> 0x20) - in_s3,(float)uVar12 - fVar9);
    *puVar2 = CONCAT44(fVar11 - (float)uVar7,fVar8 - fVar14);
    *(float *)(param_7 + (ulong)uVar5 * 4) = fVar15;
    uVar5 = uVar5 + 1;
    in_d4 = uVar10;
    in_register_00005088 = uVar13;
  } while( true );
}



/* Entry: 1082de704; end: 1082de717;  */

float FUN_1082de704(float param_1,float param_2)

{
  return param_1 / param_2;
}



/* Entry: 1082de718; end: 1082df80f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082de718(long *param_1,long *******param_2,long *******param_3,undefined8 param_4,
                  undefined8 *param_5,code *param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  float *pfVar3;
  code cVar4;
  byte bVar5;
  long ******pppppplVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *****ppppplVar17;
  float fVar18;
  int iVar19;
  long lVar20;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  float *pfVar21;
  ulong uVar22;
  long *******ppppppplVar23;
  code cVar24;
  code *pcVar25;
  long *******ppppppplVar26;
  uint unaff_w24;
  long *******unaff_x25;
  long *******unaff_x26;
  ulong unaff_x28;
  long *******ppppppplVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  long ******pppppplVar38;
  float fVar39;
  long ******pppppplVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  undefined4 uVar44;
  long ******pppppplVar45;
  long *plStack_ac0;
  long lStack_ab8;
  long *******ppppppplStack_ab0;
  long *******ppppppplStack_aa0;
  long lStack_a98;
  long *******ppppppplStack_a90;
  long lStack_a88;
  long *******ppppppplStack_a80;
  long lStack_a78;
  long *******ppppppplStack_a70;
  long lStack_a68;
  long *******ppppppplStack_a60;
  byte bStack_a52;
  char cStack_a51;
  long *******ppppppplStack_a48;
  long *******ppppppplStack_a40;
  undefined4 uStack_a38;
  undefined2 uStack_a34;
  long *******appppppplStack_a30 [8];
  long *******ppppppplStack_9f0;
  uint uStack_9e8;
  float *pfStack_9c0;
  ulong uStack_9b8;
  long *******ppppppplStack_9b0;
  undefined8 uStack_9a8;
  long ******pppppplStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_4b0;
  undefined8 *apuStack_4a8 [3];
  ulong uStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  ulong *puStack_468;
  undefined8 uStack_460;
  char cStack_458;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar26 = (long *******)*param_5;
  if (ppppppplVar26 == (long *******)0x0) {
LAB_1082dea78:
    *param_1 = 0;
    goto LAB_1082def4c;
  }
  pcVar7 = (code *)((long)param_2 + 0xc);
  if (param_6 != (code *)0x0) {
    pcVar7 = param_6;
  }
  *param_5 = 0;
  FUN_1083be44c(&uStack_4b0,param_4,pcVar7);
  if ((uStack_488 & 1) == 0) {
    uStack_8b0 = (long *******)((ulong)uStack_8b0 & 0xffffffffffffff00);
    uStack_8a8 = ppppppplVar26;
  }
  else {
    appppppplStack_a30[0] = ppppppplVar26;
    FUN_1082c8ba8(&ppppppplStack_9b0,&uStack_4b0,appppppplStack_a30);
    uStack_8b0 = (long *******)CONCAT71(uStack_8b0._1_7_,1);
    uStack_8a8 = ppppppplStack_9b0;
    if (appppppplStack_a30[0] != (long *******)0x0) {
      FUN_1082dfe2c();
    }
  }
  uStack_4b0 = (long *******)&bStack_a52;
  apuStack_4a8[0] = param_5;
  FUN_10827af78(&uStack_4b0,&uStack_8b0);
  ppppppplVar23 = uStack_8a8;
  uStack_8a8 = (long *******)0x0;
  if (ppppppplVar23 != (long *******)0x0) {
    FUN_1082dfe2c();
  }
  if ((bStack_a52 & 1) == 0) goto LAB_1082dea78;
  ppppppplVar23 = (long *******)appppppplStack_a30;
  FUN_1083bff2c(ppppppplVar23,param_2,*param_3[1],1);
  lStack_ab8 = (long)(int)uStack_9e8;
  unaff_w24 = 1;
  lVar20 = 0xc;
  for (uVar16 = (ulong)(uStack_9e8 & ((int)uStack_9e8 >> 0x1f ^ 0xffffffffU)); uVar16 != 0;
      uVar16 = uVar16 - 1) {
    if (unaff_w24 == 0) {
      unaff_w24 = 0;
    }
    else {
      unaff_w24 = (uint)(ABS(*(float *)((long)ppppppplStack_9f0 + lVar20) + -1.0) <= 0.00024414062);
    }
    lVar20 = lVar20 + 0x10;
  }
  fVar35 = pfStack_9c0[1];
  fVar41 = ABS(*pfStack_9c0 - fVar35);
  fVar43 = ABS(pfStack_9c0[lStack_ab8 + -2] - pfStack_9c0[lStack_ab8 + -1]);
  fVar18 = 0.00024414062;
  uVar44 = 0;
  pppppplVar45 = (long ******)0x0;
  lVar20 = 0x10;
  if (0.00024414062 < fVar41) {
    lVar20 = 0;
  }
  pcVar7 = (code *)((long)ppppppplStack_9f0 + lVar20);
  pfVar3 = pfStack_9c0 + 1;
  if (0.00024414062 < fVar41) {
    pfVar3 = pfStack_9c0;
    fVar35 = *pfStack_9c0;
  }
  iVar11 = (uStack_9e8 - (fVar41 <= 0.00024414062)) - (uint)(fVar43 <= 0.00024414062);
  ppppppplVar26 = ppppppplStack_9f0;
  ppppppplStack_aa0 = param_2;
  if (iVar11 == 2) {
    if ((bRam000000011372a640 & 1) == 0) {
      ppppppplVar23 = (long *******)0x11372a640;
      ___cxa_guard_acquire();
      if ((int)ppppppplVar23 != 0) {
        func_0x0001082dfe60();
        func_0x0001082dff0c();
        func_0x0001082dff38();
        func_0x0001082dfe48(0x11372a638);
      }
    }
    ppppppplVar12 = ppppppplRam000000011372a638;
    func_0x0001082dff40();
    func_0x0001082dfe78();
    pcVar13 = (code *)ppppppplVar23;
    if (ppppppplVar12 != (long *******)0x0) {
      do {
        func_0x0001082dfe38();
      } while (extraout_w10 != 0);
    }
    uStack_4b0 = ppppppplVar12;
    func_0x0001082dfe54();
    func_0x0001082dfe98();
    pppppplVar45 = *(long *******)pcVar7;
    ppppppplVar23[0xe] = *(long *******)(pcVar7 + 8);
    ppppppplVar23[0xd] = pppppplVar45;
    pppppplVar45 = *(long *******)(pcVar7 + 0x10);
    ppppppplVar23[0x10] = *(long *******)(pcVar7 + 0x18);
    ppppppplVar23[0xf] = pppppplVar45;
    unaff_x26 = ppppppplVar23;
    goto LAB_1082de930;
  }
  bVar5 = *(byte *)((long)(*param_3)[1][2][0x17][2] + 0x5f);
  iVar19 = 0x80;
  if (bVar5 == 0) {
    iVar19 = 0x10;
  }
  if (iVar19 < iVar11) goto LAB_1082deaac;
  if ((*(byte *)((long)(*param_3)[1][2][0x17][2] + 0x11) & 1) == 0) {
    iVar19 = iVar11;
    if (iVar11 < 2) {
      iVar19 = 1;
    }
    uVar16 = (ulong)(iVar19 - 1);
    pfVar21 = pfVar3;
    do {
      pfVar21 = pfVar21 + 1;
      if (uVar16 == 0) goto LAB_1082deb04;
      fVar35 = ABS(fVar35 - *pfVar21);
      uVar16 = uVar16 - 1;
      fVar43 = 0.00024414062;
      bVar10 = false;
      bVar8 = true;
      bVar9 = false;
      if (fVar35 <= 0.01) {
        bVar10 = false;
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar35)) {
          bVar10 = fVar35 < 0.00024414062;
          bVar8 = fVar35 == 0.00024414062;
          bVar9 = false;
        }
      }
      fVar35 = *pfVar21;
    } while (bVar8 || bVar10 != bVar9);
    goto LAB_1082deaac;
  }
LAB_1082deb04:
  if (iVar11 == 4) {
    fVar35 = pfVar3[1];
    if (0.00024414062 < ABS(fVar35 - pfVar3[2])) {
      if ((bVar5 & 1) == 0) goto LAB_1082df170;
LAB_1082defcc:
      pcVar13 = (code *)&ppppppplStack_9b0;
      _bzero(pcVar13,0x100);
      func_0x0001082dfeb8();
      FUN_1082de604();
      if ((int)pcVar13 < 1) {
        unaff_x26 = (long *******)0x0;
        plStack_ac0 = param_1;
        ppppppplStack_ab0 = param_3;
      }
      else {
        iVar11 = 1 << (ulong)(-(int)LZCOUNT((int)pcVar13 + -1) & 0x1f);
        if (iVar11 < 5) {
          iVar11 = 4;
        }
        uVar16 = ((ulong)pcVar13 & 0xffffffff) << 4;
        lVar20 = ((ulong)pcVar13 & 0xffffffff) << 2;
        uVar22 = ((ulong)pcVar13 & 0xffffffff) + 0xffffffff;
        ppppppplVar23 = (long *******)pcVar13;
        while (uVar15 = (uint)ppppppplVar23, (int)uVar15 < iVar11) {
          *(undefined4 *)((long)&ppppppplStack_9b0 + lVar20) =
               *(undefined4 *)((long)&ppppppplStack_9b0 + (uVar22 & 0xffffffff) * 4);
          uVar30 = (&uStack_4b0)[(uVar22 & 0xffffffff) * 2];
          *(undefined8 **)((long)apuStack_4a8 + uVar16) = apuStack_4a8[(uVar22 & 0xffffffff) * 2];
          *(undefined8 *)((long)&uStack_4b0 + uVar16) = uVar30;
          uVar30 = (&uStack_8b0)[(uVar22 & 0xffffffff) * 2];
          *(undefined8 *)((long)&uStack_8a8 + uVar16) = (&uStack_8a8)[(uVar22 & 0xffffffff) * 2];
          *(undefined8 *)((long)&uStack_8b0 + uVar16) = uVar30;
          uVar16 = uVar16 + 0x10;
          lVar20 = lVar20 + 4;
          uVar22 = uVar22 + 1;
          ppppppplVar23 = (long *******)(ulong)(uVar15 + 1);
        }
        uVar15 = uVar15 >> 2;
        if ((bRam000000011372a658 & 1) == 0) {
          pcVar13 = (code *)0x11372a658;
          ___cxa_guard_acquire();
          if ((int)pcVar13 != 0) {
            lVar20 = 0;
            do {
              *(undefined1 *)(lVar20 + 0x11372a710) = 0;
              lVar20 = lVar20 + 0x10;
            } while (lVar20 != 0x100);
            pcVar13 = (code *)0x11372a658;
            ___cxa_guard_release();
          }
        }
        iVar11 = (int)pcVar13;
        lVar20 = (ulong)(uVar15 - 1) * 0x10;
        pcVar1 = (char *)(lVar20 + 0x11372a710);
        cStack_a51 = *pcVar1;
        cVar14 = cStack_a51;
        if (cStack_a51 != '\0') goto LAB_1082df6e4;
        func_0x0001082dfe80();
        if (iVar11 == 0) {
          do {
            cVar14 = *pcVar1;
LAB_1082df6e4:
          } while (cVar14 != '\x02');
        }
        else {
          ppppppplStack_a48 = (long *******)0x1138270b0;
          FUN_1083a3a90(&ppppppplStack_a48,&UNK_10f48736b);
          func_0x0001082dff2c();
          func_0x0001082dff20();
          func_0x0001082dff18();
          ppppppplVar23 = ppppppplStack_a40;
          ppppppplStack_a40 = (long *******)0x0;
          *(long ********)(lVar20 + 0x11372a718) = ppppppplVar23;
          FUN_108154bd8(&ppppppplStack_a40);
          func_0x0001082dff50();
          *pcVar1 = '\x02';
        }
        ppppppplVar23 = *(long ********)(lVar20 + 0x11372a718);
        unaff_x26 = ppppppplVar23;
        FUN_108287aa8();
        func_0x0001082dfe78();
        if (ppppppplVar23 != (long *******)0x0) {
          do {
            func_0x0001082dfe38();
          } while (extraout_w10_02 != 0);
        }
        ppppppplStack_a40 = ppppppplVar23;
        func_0x0001082dfe54();
        FUN_108154c00(&ppppppplStack_a40);
        _memcpy(unaff_x26 + 0xd,&ppppppplStack_9b0,(ulong)uVar15 << 4);
        uVar16 = uVar16 & 0xffffffff0;
        func_0x0001082dfed4();
        pcVar13 = (code *)((long)(unaff_x26 + 0xd) + uVar16 + (ulong)uVar15 * 0x10);
        plStack_ac0 = param_1;
        ppppppplStack_ab0 = param_3;
LAB_1082df768:
        _memcpy(pcVar13,&uStack_8b0,uVar16);
      }
      goto LAB_1082df774;
    }
    pcVar13 = pcVar7 + 0x20;
    pcVar25 = pcVar7 + 0x30;
  }
  else {
    if (iVar11 != 3) {
      if ((bVar5 & 1) != 0) {
        if (0x80 < iVar11) goto LAB_1082deaac;
        goto LAB_1082defcc;
      }
      if (0x10 < iVar11) goto LAB_1082deaac;
LAB_1082df170:
      uStack_9a8 = (long ******)0x0;
      ppppppplStack_9b0 = (long *******)0x0;
      uStack_998 = 0;
      pppppplStack_9a0 = (long ******)0x0;
      func_0x0001082dfeb8();
      FUN_1082de604();
      pppppplVar38 = pppppplStack_9a0;
      pppppplVar45 = uStack_9a8;
      ppppppplVar12 = ppppppplStack_9b0;
      uVar16 = (ulong)((int)ppppppplVar23 - 1);
      if (0 < (int)ppppppplVar23) {
        ppppppplStack_ab0 = ppppppplStack_9b0;
        uVar44 = (undefined4)uStack_998;
        cStack_a51 = *(char *)(uVar16 + 0x11372a660);
        cVar14 = cStack_a51;
        if (cStack_a51 != '\0') goto LAB_1082df78c;
        ppppppplVar27 = ppppppplVar23;
        func_0x0001082dfe80();
        if ((int)ppppppplVar27 == 0) {
          do {
            cVar14 = *(char *)(uVar16 + 0x11372a660);
LAB_1082df78c:
          } while (cVar14 != '\x02');
        }
        else {
          ppppppplStack_a48 = (long *******)0x1138270b0;
          FUN_10818f348(&ppppppplStack_a48,&UNK_10f48757b);
          FUN_1083a3a90(&ppppppplStack_a48,&UNK_10f4875a8);
          FUN_1083a3a90(&ppppppplStack_a48,&UNK_10f4875c2);
          FUN_1083a3a90(&ppppppplStack_a48,&UNK_10f4875db);
          func_0x0001082dff2c();
          func_0x0001082dff20();
          func_0x0001082dff18();
          ppppppplVar27 = ppppppplStack_a40;
          ppppppplStack_a40 = (long *******)0x0;
          *(long ********)(uVar16 * 8 + 0x11372a6d0) = ppppppplVar27;
          FUN_108154bd8(&ppppppplStack_a40);
          func_0x0001082dff50();
          *(undefined1 *)(uVar16 + 0x11372a660) = 2;
        }
        ppppppplVar27 = *(long ********)(uVar16 * 8 + 0x11372a6d0);
        unaff_x26 = ppppppplVar27;
        FUN_108287aa8();
        func_0x0001082dfe78();
        if (ppppppplVar27 != (long *******)0x0) {
          do {
            func_0x0001082dfe38();
          } while (extraout_w10_03 != 0);
        }
        ppppppplStack_a40 = ppppppplVar27;
        func_0x0001082dfe54();
        FUN_108154c00(&ppppppplStack_a40);
        unaff_x26[0xe] = pppppplVar45;
        unaff_x26[0xd] = (long ******)ppppppplVar12;
        unaff_x26[0xf] = pppppplVar38;
        *(undefined4 *)(unaff_x26 + 0x10) = uVar44;
        uVar16 = ((ulong)ppppppplVar23 & 0xffffffff) << 4;
        *(undefined4 *)((long)unaff_x26 + 0x84) = 0;
        func_0x0001082dfed4();
        pcVar13 = (code *)(unaff_x26 + ((ulong)ppppppplVar23 & 0xffffffff) * 2 + 0x11);
        goto LAB_1082df768;
      }
      unaff_x26 = (long *******)0x0;
      pcVar13 = (code *)ppppppplVar23;
LAB_1082df774:
      if (unaff_x26 == (long *******)0x0) {
LAB_1082deaac:
        uVar16 = uStack_9b8;
        ppppplVar17 = *param_3[1];
        if ((bRam000000011372a678 & 1) == 0) {
          iVar11 = 0x1372a678;
          ___cxa_guard_acquire();
          if (iVar11 != 0) {
            uRam000000011372a6a0 = 1;
            uRam000000011372a6a4 = 0;
            uRam000000011372a6a8 = 0;
            uRam000000011372a6b8 = 0x100;
            uRam000000011372a6b0 = 0x2000000000;
            uRam000000011372a6c0 = 0;
            uRam000000011372a6c8 = 0;
            ___cxa_guard_release(0x11372a678);
          }
        }
        if (*(uint *)(param_3[1] + 2) < 0x24) {
          if ((1L << ((ulong)*(uint *)(param_3[1] + 2) & 0x3f) & 0xc7a00c3ffU) == 0) {
            FUN_10828a818(&uStack_4b0,(*param_3)[1][2][0x17],0x11,0);
            uVar44 = 0x10;
            if (uStack_4b0._4_1_ == '\0') {
              uVar44 = 4;
            }
            if (cStack_458 == '\x01') {
              (*(code *)*apuStack_4a8[0])(apuStack_4a8);
            }
          }
          else {
            uVar44 = 4;
          }
          uVar15 = 2;
          if (*(code *)(param_2 + 10) == (code)0x0) {
            uVar15 = 3;
          }
          unaff_x28 = (ulong)uVar15;
          uStack_480 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          apuStack_4a8[2] = (undefined8 *)0x0;
          apuStack_4a8[1] = (undefined8 *)0x0;
          apuStack_4a8[0] = (undefined8 *)0x0;
          uStack_4b0 = (long *******)0x0;
          FUN_1082de1b0(0x11372a6a0,ppppppplStack_9f0,pfStack_9c0,lStack_ab8,unaff_w24,param_2 + 10,
                        uVar16,ppppplVar17,uVar44,uVar15,&uStack_4b0);
          FUN_1082b8344(&uStack_8b0,(*param_3)[1],&uStack_4b0,&UNK_10f4878f2,0x15,0);
          ppppppplVar23 = uStack_8b0;
          uStack_8b0 = (long *******)0x0;
          ppppppplStack_9b0 = ppppppplVar23;
          uStack_9a8._0_6_ = SUB86(uStack_8a8,0);
          FUN_1082764bc(&uStack_8b0);
          if (ppppppplVar23 == (long *******)0x0) {
            FUN_10841076c(&UNK_10f487908);
            ppppppplStack_a48 = (long *******)0x0;
          }
          else {
            func_0x00010815f6c0(&uStack_8b0,(float)*(int *)(ppppppplVar23 + 0x12),0x3f800000);
            ppppppplStack_a40 = ppppppplStack_9b0;
            ppppppplStack_9b0 = (long *******)0x0;
            uStack_a38 = (undefined4)uStack_9a8;
            uStack_a34 = uStack_9a8._4_2_;
            FUN_1082cdd5c(&ppppppplStack_a48,&ppppppplStack_a40,unaff_x28,&uStack_8b0,1,0);
            FUN_1082764bc(&ppppppplStack_a40);
          }
          FUN_1082764bc(&ppppppplStack_9b0);
          FUN_108330548(&uStack_4b0);
          unaff_x25 = ppppppplStack_a48;
          goto LAB_1082decac;
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1082df4e0);
        (*pcVar7)();
      }
      goto LAB_1082de930;
    }
    pcVar13 = pcVar7 + 0x10;
    pcVar25 = pcVar7 + 0x20;
    fVar35 = pfVar3[1];
  }
  if ((bRam000000011372a650 & 1) == 0) {
    ppppppplVar23 = (long *******)0x11372a650;
    ___cxa_guard_acquire();
    if ((int)ppppppplVar23 != 0) {
      func_0x0001082dfe60();
      func_0x0001082dff0c();
      func_0x0001082dff38();
      func_0x0001082dfe48(0x11372a648);
    }
  }
  ppppppplVar12 = ppppppplRam000000011372a648;
  pppppplVar40 = *(long *******)(pcVar7 + 8);
  pppppplVar38 = *(long *******)pcVar7;
  uVar42 = *(undefined8 *)(pcVar7 + 0x10);
  uVar33 = *(undefined8 *)(pcVar13 + 8);
  uVar31 = *(undefined8 *)pcVar13;
  uVar32 = *(undefined8 *)pcVar25;
  uVar30 = uVar42;
  func_0x0001082dff40();
  func_0x0001082dfe78();
  fVar41 = (float)uVar30;
  pcVar13 = (code *)ppppppplVar23;
  if (ppppppplVar12 != (long *******)0x0) {
    do {
      func_0x0001082dfe38();
      fVar41 = (float)uVar30;
    } while (extraout_w10_01 != 0);
  }
  uStack_4b0 = ppppppplVar12;
  func_0x0001082dfe54();
  fVar36 = (float)uVar31;
  fVar39 = (float)((ulong)uVar31 >> 0x20);
  FUN_1082de704(CONCAT44((float)((ulong)uVar32 >> 0x20) - fVar39,(float)uVar32 - fVar36),
                1.0 - fVar35);
  func_0x0001082dff58();
  pppppplVar6 = (long ******)CONCAT44(uVar44,fVar18);
  fVar28 = fVar35;
  func_0x0001082de710();
  fVar34 = (float)((ulong)uVar33 >> 0x20) - fVar43;
  fVar29 = (float)uVar42 - SUB84(pppppplVar38,0);
  fVar37 = fVar35;
  FUN_1082de704();
  func_0x0001082dfe98();
  *(float *)(ppppppplVar23 + 0xd) = fVar29;
  *(float *)((long)ppppppplVar23 + 0x6c) = fVar37;
  *(int *)(ppppppplVar23 + 0xe) = (int)uVar31;
  *(float *)((long)ppppppplVar23 + 0x74) = fVar43;
  ppppppplVar23[0x10] = pppppplVar45;
  ppppppplVar23[0xf] = pppppplVar6;
  ppppppplVar23[0x12] = pppppplVar40;
  ppppppplVar23[0x11] = pppppplVar38;
  ppppppplVar23[0x14] = (long ******)CONCAT44(fVar34,(float)uVar33 - fVar41);
  ppppppplVar23[0x13] = (long ******)CONCAT44(fVar39 - fVar18,fVar36 - fVar28);
  *(float *)(ppppppplVar23 + 0x15) = fVar35;
  unaff_x26 = ppppppplVar23;
LAB_1082de930:
  unaff_x25 = (long *******)param_3[1];
  unaff_x28 = uStack_9b8;
  plStack_ac0 = param_1;
  ppppppplStack_ab0 = param_3;
  if ((bRam000000011372a670 & 1) == 0) goto LAB_1082df3c0;
  do {
    ppppppplVar23 = ppppppplRam000000011372a668;
    cVar24 = *(code *)(ppppppplStack_aa0 + 10);
    cVar4 = *(code *)((long)ppppppplStack_aa0 + 0x51);
    if (((byte)cVar4 < 0xb) && ((1 << (ulong)((byte)cVar4 & 0x1f) & 0x6fcU) != 0)) {
      ppppppplVar12 = ppppppplRam000000011372a668;
      FUN_108287aa8();
      func_0x0001082dfe78();
      if (ppppppplVar23 != (long *******)0x0) {
        do {
          func_0x0001082dfe38();
        } while (extraout_w10_00 != 0);
      }
      uStack_4b0 = ppppppplVar23;
      FUN_1082cc5c8(ppppppplVar12,&uStack_4b0,&UNK_10f4878e7,3);
      func_0x0001082dfe98();
      pcVar7 = (code *)((long)ppppppplVar12 + (ulong)*(uint *)(ppppppplVar12 + 10) + 0x68);
      *pcVar7 = (code)0x1;
      *(uint *)(ppppppplVar12 + 0xd) = (uint)(byte)cVar4;
      pcVar7[1] = (code)0x1;
      *(uint *)((long)ppppppplVar12 + 0x6c) = (uint)(byte)cVar24 & (unaff_w24 ^ 0xffffffff);
      uStack_8b0 = unaff_x26;
      FUN_1082cc550(ppppppplVar12,&uStack_8b0);
      pcVar13 = (code *)uStack_8b0;
      if (uStack_8b0 != (long *******)0x0) {
        FUN_1082dfe2c();
      }
      cVar24 = (code)0x0;
      unaff_x26 = ppppppplVar12;
    }
    ppppppplVar23 = (long *******)*unaff_x25;
    if ((long *******)*unaff_x25 == (long *******)0x0) {
      FUN_108343afc();
      ppppppplVar23 = (long *******)pcVar13;
    }
    uVar44 = 2;
    if (cVar24 == (code)0x0) {
      uVar44 = 3;
    }
    bVar10 = (unaff_w24 & 1) == 0;
    uVar2 = 3;
    if (bVar10) {
      uVar2 = uVar44;
    }
    uVar44 = 2;
    if (!bVar10) {
      uVar44 = 3;
    }
    uStack_4b0 = unaff_x26;
    FUN_10828b650(&ppppppplStack_9b0,&uStack_4b0,unaff_x28,uVar2,ppppppplVar23,uVar44);
    param_3 = ppppppplStack_ab0;
    param_1 = plStack_ac0;
    unaff_x25 = ppppppplStack_9b0;
    if (uStack_4b0 != (long *******)0x0) {
      FUN_1082dfe2c();
      unaff_x25 = ppppppplStack_9b0;
    }
LAB_1082decac:
    *param_1 = 0;
    if (unaff_x25 != (long *******)0x0) {
      switch(*(undefined4 *)((long)ppppppplStack_aa0 + 0x34)) {
      case 0:
        uStack_8a8 = (long *******)ppppppplVar26[1];
        uStack_8b0 = (long *******)*ppppppplVar26;
        uStack_898 = ppppppplVar26[lStack_ab8 * 2 + -1];
        uStack_8a0 = ppppppplVar26[lStack_ab8 * 2 + -2];
        FUN_108186568(&ppppppplStack_9b0,0);
        ppppppplVar26 = (long *******)&uStack_4b0;
        puStack_468 = &uStack_488;
        uStack_460 = 0x400000000;
        apuStack_4a8[0] = (undefined8 *)0x0;
        apuStack_4a8[2] = (undefined8 *)0x0;
        apuStack_4a8[1] = (undefined8 *)0x0;
        uStack_490 = uStack_490 & 0xffffffff00000000;
        ppppppplStack_a40 = (long *******)&uStack_8b0;
        uStack_a38 = 0;
        uStack_4b0 = (long *******)&ppppppplStack_9b0;
        FUN_108387820(&uStack_4b0,0x8d,&ppppppplStack_a40);
        FUN_1083bfb74(&uStack_4b0,&ppppppplStack_9b0,unaff_w24 & 1,ppppppplStack_aa0 + 10,uStack_9b8
                      ,*param_3[1]);
        FUN_108387820(&uStack_4b0,0x8f,&ppppppplStack_a40);
        FUN_108388618(&uStack_4b0,0,0,2,1);
        func_0x0001082dff6c();
        lStack_a88 = extraout_x8;
        ppppppplStack_a80 = unaff_x25;
        FUN_1082dfa24((ulong)uStack_8b0 & 0xffffffff,uStack_8b0._4_4_,(ulong)uStack_8a8 & 0xffffffff
                      ,uStack_8a8._4_4_,(undefined4)uStack_8a0,uStack_8a0._4_4_,
                      (undefined4)uStack_898,uStack_898._4_4_,&ppppppplStack_a48,&ppppppplStack_a80,
                      &lStack_a88,unaff_w24 & 1);
        *param_1 = (long)ppppppplStack_a48;
        if (lStack_a88 != 0) {
          FUN_1082dfe2c();
        }
        if (ppppppplStack_a80 != (long *******)0x0) {
          FUN_1082dfe2c();
        }
        FUN_10821a944(&puStack_468);
        FUN_10840f740(&ppppppplStack_9b0);
        goto LAB_1082def44;
      case 1:
        func_0x0001082dff6c();
        lStack_a68 = extraout_x8_02;
        ppppppplStack_a60 = unaff_x25;
        FUN_1082df810(&uStack_4b0,param_3,&ppppppplStack_a60,&lStack_a68,0,unaff_w24 & 1);
        *param_1 = (long)uStack_4b0;
        if (lStack_a68 != 0) {
          FUN_1082dfe2c();
        }
        ppppppplVar23 = ppppppplStack_a60;
        if (ppppppplStack_a60 == (long *******)0x0) goto LAB_1082def44;
        goto code_r0x0001082def28;
      case 2:
        func_0x0001082dff6c();
        lStack_a78 = extraout_x8_00;
        ppppppplStack_a70 = unaff_x25;
        FUN_1082df810(&uStack_4b0,param_3,&ppppppplStack_a70,&lStack_a78,1,unaff_w24 & 1);
        *param_1 = (long)uStack_4b0;
        ppppppplVar23 = ppppppplStack_a70;
        if (lStack_a78 != 0) {
          FUN_1082dfe2c();
          ppppppplVar23 = ppppppplStack_a70;
        }
        break;
      case 3:
        func_0x0001082dff6c();
        lStack_a98 = extraout_x8_01;
        ppppppplStack_a90 = unaff_x25;
        FUN_1082dfa24(0,0,0,0,0,0,0,0,&uStack_4b0,&ppppppplStack_a90,&lStack_a98,0);
        *param_1 = (long)uStack_4b0;
        ppppppplVar23 = ppppppplStack_a90;
        if (lStack_a98 != 0) {
          FUN_1082dfe2c();
          ppppppplVar23 = ppppppplStack_a90;
        }
        break;
      default:
        ppppplVar17 = (*unaff_x25)[1];
        ppppppplVar23 = unaff_x25;
        goto code_r0x0001082def40;
      }
      if (ppppppplVar23 != (long *******)0x0) {
code_r0x0001082def28:
        ppppplVar17 = (*ppppppplVar23)[1];
code_r0x0001082def40:
        (*(code *)ppppplVar17)(ppppppplVar23);
      }
    }
LAB_1082def44:
    FUN_1082dfdc4(appppppplStack_a30);
    unaff_x26 = ppppppplStack_aa0;
LAB_1082def4c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return;
    }
    ___stack_chk_fail();
LAB_1082df3c0:
    pcVar13 = (code *)0x11372a670;
    ___cxa_guard_acquire();
    if ((int)pcVar13 != 0) {
      func_0x0001082dfe60();
      pcVar13 = FUN_108394238;
      func_0x0001082dff38(FUN_108394238,&UNK_10f487858);
      func_0x0001082dfe48(0x11372a668);
    }
  } while( true );
}



/* Entry: 1082df810; end: 1082dfa23;  */

void FUN_1082df810(long *param_1,long *param_2,long *param_3,long *param_4,undefined4 param_5,
                  uint param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  int extraout_w10;
  long lVar8;
  long lVar9;
  long alStack_a0 [6];
  long lStack_70;
  long lStack_68;
  
  plVar6 = param_1;
  if ((bRam000000011372a688 & 1) == 0) {
    plVar6 = (long *)0x11372a688;
    ___cxa_guard_acquire();
    if ((int)plVar6 != 0) {
      alStack_a0[4] = 0;
      alStack_a0[1] = 0;
      alStack_a0[0] = 0;
      alStack_a0[3] = 0;
      alStack_a0[2] = 0;
      func_0x0001082dff0c();
      FUN_108287980();
      func_0x0001082dfe48(0x11372a680);
    }
  }
  lVar5 = lRam000000011372a680;
  uVar2 = *(uint *)(*param_4 + 0x30) & 2;
  uVar7 = 3;
  if ((param_6 & uVar2 >> 1) == 0) {
    uVar7 = 1;
  }
  bVar4 = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(*param_2 + 8) + 0x10) + 0xb8) + 0x10) +
                   0x1b);
  lVar9 = *param_3;
  *param_3 = 0;
  lVar8 = *param_4;
  *param_4 = 0;
  func_0x0001082dff40();
  func_0x0001082dfe78();
  if (lVar5 != 0) {
    do {
      func_0x0001082dfe38();
    } while (extraout_w10 != 0);
  }
  lStack_70 = lVar5;
  FUN_1082cc5c8(plVar6,&lStack_70,&UNK_10f487b44,uVar7);
  func_0x0001082dfeb0();
  uVar3 = *(uint *)(plVar6 + 10);
  lStack_68 = lVar9;
  func_0x0001082dff04(plVar6,&lStack_68);
  if (lStack_68 != 0) {
    func_0x0001082dfe2c();
  }
  alStack_a0[0] = lVar8;
  func_0x0001082dff04(plVar6,alStack_a0);
  if (alStack_a0[0] != 0) {
    func_0x0001082dfe2c();
  }
  puVar1 = (undefined1 *)((long)plVar6 + (ulong)uVar3 + 0x68);
  *puVar1 = 1;
  *(undefined4 *)(plVar6 + 0xd) = param_5;
  puVar1[1] = 1;
  *(uint *)((long)plVar6 + 0x6c) = uVar2 >> 1;
  puVar1[2] = 1;
  *(uint *)(plVar6 + 0xe) = (uint)bVar4;
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1082dfa24; end: 1082dfc57;  */

void FUN_1082dfa24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,
                  long *param_9,long *param_10,uint param_11)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  int extraout_w10;
  long lVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  long alStack_d0 [6];
  long lStack_a0;
  long lStack_98;
  
  if ((bRam000000011372a698 & 1) == 0) {
    iVar4 = 0x1372a698;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      alStack_d0[4] = 0;
      alStack_d0[1] = 0;
      alStack_d0[0] = 0;
      alStack_d0[3] = 0;
      alStack_d0[2] = 0;
      func_0x0001082dff0c();
      FUN_108287980();
      func_0x0001082dfe48(0x11372a690);
    }
  }
  lVar3 = lRam000000011372a690;
  uVar1 = *(uint *)(*param_10 + 0x30) & 2;
  uVar6 = 3;
  if ((param_11 & uVar1 >> 1) == 0) {
    uVar6 = 1;
  }
  lVar8 = *param_9;
  *param_9 = 0;
  lVar7 = *param_10;
  *param_10 = 0;
  lVar5 = lVar3;
  FUN_108287aa8();
  func_0x0001082dfe78();
  if (lVar3 != 0) {
    do {
      func_0x0001082dfe38();
    } while (extraout_w10 != 0);
  }
  lStack_a0 = lVar3;
  FUN_1082cc5c8(lVar5,&lStack_a0,&UNK_10f487d10,uVar6);
  func_0x0001082dfeb0();
  uVar2 = *(uint *)(lVar5 + 0x50);
  lStack_98 = lVar8;
  func_0x0001082dff04(lVar5,&lStack_98);
  if (lStack_98 != 0) {
    func_0x0001082dfe2c();
  }
  alStack_d0[0] = lVar7;
  func_0x0001082dff04(lVar5,alStack_d0);
  if (alStack_d0[0] != 0) {
    func_0x0001082dfe2c();
  }
  *(undefined4 *)(lVar5 + 0x68) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined4 *)(lVar5 + 0x6c) = param_1;
  *(undefined4 *)(lVar5 + 0x70) = param_2;
  *(undefined4 *)(lVar5 + 0x74) = param_3;
  *(undefined4 *)(lVar5 + 0x78) = param_4;
  *(undefined4 *)(lVar5 + 0x7c) = param_5;
  *(undefined4 *)(lVar5 + 0x80) = param_6;
  *(undefined4 *)(lVar5 + 0x84) = param_7;
  *(undefined1 *)(lVar5 + 0x68 + (ulong)uVar2 + 2) = 1;
  *(uint *)(lVar5 + 0x88) = uVar1 >> 1;
  *param_8 = lVar5;
  return;
}



/* Entry: 1082dfc58; end: 1082dfdc3;  */

void FUN_1082dfc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_80;
  long lStack_78;
  long alStack_70 [6];
  
  if ((bRam0000000113826c28 & 1) == 0) {
    uVar2 = 0x113826c28;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      alStack_70[4] = 0;
      alStack_70[1] = 0;
      alStack_70[0] = 0;
      alStack_70[3] = 0;
      alStack_70[2] = 0;
      func_0x0001082dff0c();
      FUN_108287980();
      uRam0000000113826c20 = uVar2;
      ___cxa_guard_release(0x113826c28);
    }
  }
  lStack_78 = 0;
  FUN_10829091c(alStack_70,uRam0000000113826c20,&UNK_10f4871c5,&lStack_78,2);
  lVar1 = lStack_78;
  lStack_78 = 0;
  if (lVar1 != 0) {
    FUN_1082dfe2c();
  }
  lStack_80 = alStack_70[0];
  alStack_70[0] = 0;
  FUN_1082de718(param_1,param_2,param_3,param_4,&lStack_80,0);
  lVar1 = lStack_80;
  lStack_80 = 0;
  if (lVar1 != 0) {
    FUN_1082dfe2c();
  }
  lVar1 = alStack_70[0];
  alStack_70[0] = 0;
  if (lVar1 != 0) {
    FUN_1082dfe2c();
  }
  return;
}



/* Entry: 1082dfdc4; end: 1082dfe2b;  */

long FUN_1082dfdc4(long param_1)

{
  FUN_10810a400(param_1 + 0x78);
  FUN_1081842d4(param_1 + 0x60);
  func_0x0001082dfdfc(param_1 + 0x40);
  return param_1;
}



/* Entry: 1082dfe2c; end: 1082dff77;  */

void FUN_1082dfe2c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082dfe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082dff78; end: 1082dffd7;  */

void FUN_1082dff78(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  uStack_30 = *param_2;
  *param_2 = 0;
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined2 *)((long)param_2 + 0xc);
  FUN_1082b2970(param_1,&uStack_30,param_3,1,param_4 == 2,param_5,param_6);
  func_0x0001082e2200();
  return;
}



/* Entry: 1082dffd8; end: 1082e00ab;  */

void FUN_1082dffd8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  int param_5)

{
  long *plVar1;
  undefined1 auStack_78 [56];
  
  if (param_5 == 0) {
    plVar1 = param_3 + 6;
    (**(code **)(*param_3 + 0x90))(param_3);
    FUN_10833043c(auStack_78,plVar1);
    FUN_1082b8344(param_1,param_2,auStack_78,&UNK_10f487d20,0x29,(uint)param_4 | (uint)param_3);
  }
  else {
    FUN_10833043c(auStack_78,param_3 + 6);
    FUN_1082b8914(param_1,param_2,auStack_78,param_4,1,param_5 != 1);
  }
  FUN_108330548(auStack_78);
  return;
}



/* Entry: 1082e00ac; end: 1082e0123;  */

ulong FUN_1082e00ac(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_98 [4];
  char cStack_94;
  char cStack_40;
  undefined8 uStack_28;
  
  func_0x0001082e2158();
  uStack_28 = extraout_x8;
  FUN_1082e0124();
  FUN_10828a818(auStack_98,param_1,param_2,0);
  if (cStack_40 == '\x01') {
    func_0x0001082e20b4();
  }
  bVar2 = cStack_94 == '\0';
  uVar4 = (uint)param_2;
  if (bVar2) {
    uVar4 = 5;
  }
  uVar3 = (ulong)uVar4;
  func_0x0001082e2070(uStack_28);
  if (bVar2) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar4 = (uint)uVar3;
  __Unwind_Resume();
  if (uVar4 < 0x1b) {
    return (ulong)*(uint *)(&UNK_10df16798 + (ulong)uVar4 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e0140);
  (*pcVar1)();
}



/* Entry: 1082e0124; end: 1082e013f;  */

undefined4 FUN_1082e0124(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df16798 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e0140);
  (*pcVar1)();
}



/* Entry: 1082e0140; end: 1082e0c37;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082e0140(long *param_1,long *******param_2,long *******param_3,undefined8 param_4,
                  ulong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 in_ZR;
  int iVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *plVar13;
  long *plVar14;
  long ******pppppplVar15;
  long *******ppppppplVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *******extraout_x8_03;
  code *extraout_x8_04;
  ulong uVar17;
  long ******extraout_x8_05;
  code *extraout_x8_06;
  ulong uVar18;
  long ******pppppplVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  long *****ppppplVar25;
  long *******ppppppplVar26;
  ulong uVar27;
  long ****pppplVar28;
  undefined4 uVar29;
  undefined8 *puVar30;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *******ppppppplStack_350;
  long *******ppppppplStack_348;
  long *plStack_340;
  long lStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  uint uStack_30c;
  long *******ppppppplStack_308;
  long *******ppppppplStack_300;
  undefined4 uStack_2f8;
  undefined2 uStack_2f4;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *******ppppppplStack_2e0;
  long *******ppppppplStack_2d8;
  long ******pppppplStack_2d0;
  long ******pppppplStack_2c8;
  long alStack_2c0 [7];
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *****ppppplStack_278;
  long ******pppppplStack_270;
  long ******pppppplStack_268;
  long *******ppppppplStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long ******apppppplStack_1f8 [4];
  long alStack_1d8 [2];
  long ******apppppplStack_1c8 [4];
  long lStack_1a8;
  long *******ppppppplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long ******pppppplStack_c8;
  undefined4 auStack_c0 [4];
  long *******ppppppplStack_b0;
  undefined4 uStack_a8;
  undefined2 auStack_a4 [26];
  undefined8 uStack_70;
  
  ppppppplVar16 = param_2;
  ppppppplVar26 = param_3;
  func_0x0001082e2158();
  ppppppplStack_288 = ppppppplVar26;
  ppppppplStack_280 = ppppppplVar16;
  uStack_70 = extraout_x8;
  FUN_10827a1fc(alStack_2c0);
  iVar23 = (int)param_4;
  if (iVar23 == 0) {
    uStack_198 = param_3[4];
    ppppppplStack_1a0 = (long *******)0x0;
    FUN_1082b7f98(alStack_2c0,*(undefined4 *)(param_3 + 5),&ppppppplStack_1a0);
    param_3 = ppppppplStack_288;
    param_2 = ppppppplStack_280;
  }
  ppppplVar25 = param_2[2][0x17];
  pppppplStack_2c8 = param_2[9];
  plStack_2e8 = alStack_2c0;
  ppppppplStack_2e0 = (long *******)&ppppppplStack_280;
  ppppppplStack_2d8 = (long *******)&ppppppplStack_288;
  pppppplStack_2d0 = (long ******)&pppppplStack_2c8;
  ppppplVar8 = ppppplVar25;
  FUN_1082e00ac(ppppplVar25,*(undefined4 *)(param_3 + 3));
  if (*(short *)(alStack_2c0[0] + 4) != 0) {
    FUN_1082a4c48(&ppppppplStack_b0,pppppplStack_2c8,alStack_2c0,1);
    if (ppppppplStack_b0 != (long *******)0x0) {
      ppppppplVar16 = (long *******)((long)ppppppplStack_b0 + (long)((*ppppppplStack_b0)[-3] + 4));
      func_0x00010828a9ac(ppppplVar25,ppppppplVar16,ppppplVar8);
      ppppppplVar26 = ppppppplStack_288;
      ppppplVar8 = ppppplVar25;
      if (ppppppplStack_288[6] != (long ******)0x0) {
        do {
          func_0x0001082e1fd0();
        } while (extraout_w10 != 0);
      }
      func_0x0001082e2168();
      (**(code **)(extraout_x8_00 + 0x10))();
      ppppplVar9 = ppppplVar8;
      func_0x0001082e2060();
      uVar29 = SUB84(ppppplVar9,0);
      if (((ulong)ppppplVar8 & 1) == 0) {
        uVar29 = 0;
      }
      else {
        if (ppppppplVar26[6] != (long ******)0x0) {
          do {
            func_0x0001082e1fd0();
            uVar29 = SUB84(ppppplVar9,0);
          } while (extraout_w10_00 != 0);
        }
        func_0x0001082e2168();
        (**(code **)(extraout_x8_01 + 0x50))();
        func_0x0001082e2060();
      }
      ppppppplVar26 = ppppppplStack_b0;
      ppppppplStack_b0 = (long *******)0x0;
      if (ppppppplVar26 == (long *******)0x0) {
        ppppppplVar26 = (long *******)0x0;
      }
      else {
        ppppppplVar26 = (long *******)((long)ppppppplVar26 + (long)(*ppppppplVar26)[-3]);
      }
      uStack_2f0 = 0;
      uStack_198._0_6_ = CONCAT24((short)ppppplVar25,uVar29);
      ppppppplStack_1a0 = ppppppplVar26;
      func_0x0001082e2210();
      if ((uint)param_5 == 0) {
LAB_1082e045c:
        ppppppplStack_1a0 = (long *******)0x0;
        *param_1 = (long)ppppppplVar26;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
        *(undefined2 *)((long)param_1 + 0xc) = uStack_198._4_2_;
      }
      else {
        if (ppppppplVar26 == (long *******)0x0) {
          iVar23 = 0;
        }
        else {
          (*(code *)(*ppppppplVar26)[3])();
          iVar23 = (int)ppppppplVar26;
        }
        FUN_1082b33e8();
        ppppppplVar26 = ppppppplStack_1a0;
        if (iVar23 != 0) goto LAB_1082e045c;
        if (ppppppplStack_1a0 != (long *******)0x0) {
          do {
            func_0x0001082e1fd0();
          } while (extraout_w10_04 != 0);
        }
        ppppppplStack_300 = ppppppplVar26;
        uStack_2f8 = (undefined4)uStack_198;
        uStack_2f4 = uStack_198._4_2_;
        ppppppplVar16 = (long *******)&ppppppplStack_300;
        FUN_1082b828c(&ppppppplStack_260);
        func_0x0001082e21ec();
        ppppppplVar12 = ppppppplStack_1a0;
        pppppplVar15 = pppppplStack_2c8;
        if (ppppppplStack_260 == (long *******)0x0) {
          ppppppplStack_1a0 = (long *******)0x0;
          *param_1 = (long)ppppppplVar12;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
        }
        else {
          if (ppppppplStack_1a0 == (long *******)0x0) {
            ppppppplVar16 = (long *******)0x0;
          }
          else {
            ppppppplVar16 = ppppppplStack_1a0;
            func_0x0001082e2220();
            (*extraout_x8_04)();
          }
          func_0x0001082a4a7c(pppppplVar15,ppppppplVar16);
          ppppppplVar16 = (long *******)&ppppppplStack_260;
          FUN_1082e0c38(&plStack_2e8);
          func_0x0001082e211c();
        }
        func_0x0001082e21b4();
      }
      func_0x0001082e21e4();
      func_0x0001082e21d4();
      goto LAB_1082e0a20;
    }
    func_0x0001082e21d4();
  }
  ppppppplVar26 = ppppppplStack_288;
  (*(code *)(*ppppppplStack_288)[0x1e])();
  ppppppplVar10 = ppppppplStack_280;
  ppppppplVar12 = ppppppplStack_288;
  in_ZR = (int)ppppppplVar26 == 3;
  if ((bool)in_ZR) {
    ppppppplVar26 = ppppppplStack_288;
    FUN_1083b7470(ppppppplStack_288);
    in_ZR = iVar23 == 1;
    ppppppplVar16 = (long *******)(ulong)!(bool)in_ZR;
    FUN_10830af78(&ppppppplStack_260,ppppppplVar10,ppppppplVar16,ppppppplVar12 + 2,0,0,ppppppplVar26
                  ,param_5,0);
    if (ppppppplStack_260 == (long *******)0x0) {
      func_0x0001082e1fe0();
    }
    else {
      ppppppplVar16 = ppppppplStack_260;
      FUN_1083b8df0();
      FUN_1083b74b8(ppppppplVar12,ppppppplVar16);
      FUN_10830ad7c(&ppppppplStack_b0,ppppppplStack_260);
      ppppppplVar16 = ppppppplStack_b0;
      if (ppppppplStack_b0 == (long *******)0x0) {
        func_0x0001082e1fe0();
      }
      else {
        do {
          func_0x0001082e1fd0();
        } while (extraout_w10_01 != 0);
        FUN_1082e0d0c(&ppppppplStack_1a0,ppppppplVar10);
        FUN_10829bb10(apppppplStack_1c8);
        if (ppppppplStack_1a0 != (long *******)0x0) {
          ppppppplVar26 = ppppppplStack_1a0 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
            if (bVar5) {
              *(int *)ppppppplVar26 = *(int *)ppppppplVar26 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *param_1 = (long)ppppppplStack_1a0;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
        *(undefined2 *)((long)param_1 + 0xc) = uStack_198._4_2_;
        func_0x0001082e21e4();
      }
      func_0x000106f47184(&ppppppplStack_b0);
    }
    func_0x000106f471d4(&ppppppplStack_260);
    ppppppplVar26 = ppppppplVar10;
    if (*param_1 != 0) {
      func_0x0001082e202c();
      goto LAB_1082e0a20;
    }
    func_0x0001082e2068();
  }
  else {
    if (ppppppplStack_288[6] != (long ******)0x0) {
      do {
        func_0x0001082e1fd0();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001082e2168();
    (**(code **)(extraout_x8_02 + 0x10))();
    func_0x0001082e2060();
    if ((int)ppppppplVar26 != 0) {
      ppppppplVar16 = (long *******)0x0;
      if (ppppppplStack_288[6] != (long ******)0x0) {
        do {
          func_0x0001082e1fd0();
          ppppppplVar16 = extraout_x8_03;
        } while (extraout_w10_03 != 0);
      }
      ppppppplStack_260 = ppppppplVar16 + 2;
      ppppppplStack_1a0 = ppppppplVar16;
      func_0x0001081efc58();
      ppppppplVar16 = ppppppplStack_280;
      FUN_1082e222c(param_1,ppppppplStack_1a0[1],ppppppplStack_280,ppppppplStack_288 + 2,param_5,
                    param_4);
      if (*param_1 != 0) {
        func_0x0001082e202c();
        func_0x0001082e2218();
        func_0x0001082e2060();
        goto LAB_1082e0a20;
      }
      func_0x0001082e2068();
      func_0x0001082e2218();
      func_0x0001082e2060();
    }
    ppppppplVar12 = ppppppplStack_280;
    if (((param_5 & 1) == 0) && ((*(byte *)((long)ppppppplStack_280[2] + 0x9d) & 1) == 0)) {
      pppppplVar15 = (long ******)0x0;
      ppppppplStack_308 = ppppppplStack_288;
      uStack_30c = (uint)param_5;
      for (uVar27 = 0; in_ZR = uVar27 == 0x10, !(bool)in_ZR; uVar27 = uVar27 + 4) {
        ppppppplVar16 = ppppppplVar12;
        func_0x0001082e2114(ppppppplVar12,0);
        ppppppplVar26 = ppppppplVar12;
        func_0x0001082e2114(ppppppplVar12,1);
        ppppppplVar10 = ppppppplVar12;
        func_0x0001082e2114(ppppppplVar12,2);
        ppppppplVar11 = ppppppplVar12;
        func_0x0001082e2114(ppppppplVar12,3);
        uVar17 = 1L << (uVar27 & 0x3f);
        if ((int)ppppppplVar16 == 0) {
          uVar17 = 0;
        }
        uVar18 = 1L << (uVar27 + 1 & 0x3f);
        if ((int)ppppppplVar26 == 0) {
          uVar18 = 0;
        }
        uVar20 = 1L << (uVar27 + 2 & 0x3f);
        if ((int)ppppppplVar10 == 0) {
          uVar20 = 0;
        }
        uVar21 = 1L << (uVar27 + 3 & 0x3f);
        if ((int)ppppppplVar11 == 0) {
          uVar21 = 0;
        }
        pppppplVar15 = (long ******)(uVar17 | uVar18 | uVar20 | uVar21 | (ulong)pppppplVar15);
      }
      pppppplStack_c8 = pppppplVar15;
      _bzero(&ppppppplStack_1a0,0xb8);
      uStack_e0 = 0;
      uStack_e8 = 0x10000001c;
      ppppppplVar16 = &pppppplStack_c8;
      FUN_1083b6ff4(&lStack_1a8,ppppppplStack_308,ppppppplVar16,&ppppppplStack_1a0);
      uVar3 = uStack_30c;
      if (lStack_1a8 != 0) {
        lVar22 = 0;
        do {
          *(undefined8 *)((long)&ppppppplStack_b0 + lVar22) = 0;
          *(undefined4 *)((long)auStack_a4 + lVar22 + -4) = 0;
          *(undefined2 *)((long)auStack_a4 + lVar22) = 0x3210;
          lVar22 = lVar22 + 0x10;
        } while (lVar22 != 0x40);
        lVar22 = 0;
        puVar30 = &uStack_190;
        ppppppplVar26 = (long *******)&ppppppplStack_b0;
LAB_1082e0654:
        iVar7 = (int)&ppppppplStack_1a0;
        FUN_1082e1a1c();
        lVar6 = lStack_1a8;
        ppppppplVar16 = ppppppplStack_308;
        if (lVar22 < iVar7) goto code_r0x0001082e0664;
        uVar27 = (ulong)*(uint *)(ppppppplStack_308 + 3);
        FUN_1082e0124(uVar27);
        alStack_1d8[1] = 0;
        ppppppplStack_260 = (long *******)ppppppplVar16[4];
        FUN_1082a0b14(apppppplStack_1c8,uVar27,2,alStack_1d8 + 1,&ppppppplStack_260);
        FUN_10810a400(alStack_1d8 + 1);
        ppppppplStack_260 = ppppppplVar12;
        FUN_1082a0b6c(apppppplStack_1f8,apppppplStack_1c8);
        uStack_31c = iVar23 != 1;
        uStack_320 = 0;
        ppppppplVar16 = apppppplStack_1f8;
        FUN_1082a77bc(alStack_1d8,&ppppppplStack_260,ppppppplVar16,&UNK_10f487d4a,0x24,1,1,0,0);
        func_0x00010828afb8(apppppplStack_1f8);
        if (alStack_1d8[0] == 0) {
          func_0x0001082e1fe0();
        }
        else {
          FUN_1082b744c(&ppppppplStack_260,auStack_f8,&ppppppplStack_b0,auStack_c0);
          FUN_1082cf550(&pppppplStack_268,&ppppppplStack_260,0,0x100000000,ppppppplVar12[2][0x17],
                        0x113254e20,0,0);
          pppppplStack_270 = (long ******)0x0;
          if (ppppppplStack_308[6] != (long ******)0x0) {
            do {
              func_0x0001082e1fd0();
              pppppplStack_270 = extraout_x8_05;
            } while (extraout_w10_05 != 0);
          }
          pppplVar28 = pppppplStack_270[1][1];
          FUN_1082e1adc(&pppppplStack_270);
          ppppplStack_278 = (long *****)pppppplStack_268;
          pppppplStack_268 = (long ******)0x0;
          FUN_10828b650(&pppppplStack_270,&ppppplStack_278,pppplVar28,1,ppppppplStack_308[2],1);
          pppppplVar15 = pppppplStack_268;
          pppppplStack_268 = pppppplStack_270;
          if (pppppplVar15 != (long ******)0x0) {
            func_0x0001082e1fc4();
          }
          ppppplVar8 = ppppplStack_278;
          ppppplStack_278 = (long *****)0x0;
          if (ppppplVar8 != (long *****)0x0) {
            func_0x0001082e1fc4();
          }
          pppppplStack_270 = pppppplStack_268;
          pppppplStack_268 = (long ******)0x0;
          ppppppplVar16 = &pppppplStack_270;
          FUN_1082bdc90(alStack_1d8[0]);
          pppppplVar15 = pppppplStack_270;
          pppppplStack_270 = (long ******)0x0;
          if (pppppplVar15 != (long ******)0x0) {
            func_0x0001082e1fc4();
          }
          pppppplVar15 = pppppplStack_268;
          lVar22 = *(long *)(alStack_1d8[0] + 0x10);
          if (lVar22 != 0) {
            piVar1 = (int *)(lVar22 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *param_1 = lVar22;
          uVar29 = *(undefined4 *)(alStack_1d8[0] + 0x18);
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)(alStack_1d8[0] + 0x1c);
          *(undefined4 *)(param_1 + 1) = uVar29;
          pppppplStack_268 = (long ******)0x0;
          if (pppppplVar15 != (long ******)0x0) {
            func_0x0001082e1fc4();
          }
          FUN_1082b777c(&ppppppplStack_260);
          lVar22 = alStack_1d8[0];
          alStack_1d8[0] = 0;
          if (lVar22 != 0) {
            func_0x0001082e1fc4();
          }
        }
        func_0x00010828afb8(apppppplStack_1c8);
LAB_1082e0960:
        lVar22 = 0x30;
        ppppppplVar26 = (long *******)&ppppppplStack_b0;
        do {
          FUN_1082764bc((long)ppppppplVar26 + lVar22);
          lVar22 = lVar22 + -0x10;
        } while (lVar22 != -0x10);
        in_ZR = 1;
        uVar3 = uStack_30c;
        goto LAB_1082e0980;
      }
      func_0x0001082e1fe0();
      ppppppplVar26 = (long *******)0x10;
LAB_1082e0980:
      param_5 = (ulong)uVar3;
      FUN_1082e1a40(&lStack_1a8);
      FUN_1081527b0(&ppppppplStack_1a0);
      if (*param_1 != 0) {
        func_0x0001082e202c();
        goto LAB_1082e0a20;
      }
      func_0x0001082e2068();
    }
    in_ZR = iVar23 == 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = (long ******)0x0;
    ppppppplStack_1a0 = (long *******)0x0;
    ppppppplVar16 = (long *******)0x0;
    ppppppplVar12 = ppppppplStack_288;
    (*(code *)(*ppppppplStack_288)[0x1a])(ppppppplStack_288,0,&ppppppplStack_1a0,!(bool)in_ZR);
    if ((int)ppppppplVar12 != 0) {
      in_ZR = iVar23 == 1;
      ppppppplVar16 = (long *******)&ppppppplStack_1a0;
      FUN_1082b8914(&ppppppplStack_260,ppppppplStack_280,ppppppplVar16,param_5,1,!(bool)in_ZR);
      func_0x0001082e211c();
      func_0x0001082e21b4();
      if (*param_1 != 0) {
        func_0x0001082e202c();
        func_0x0001082e21dc();
        goto LAB_1082e0a20;
      }
      func_0x0001082e2068();
    }
    func_0x0001082e21dc();
  }
  func_0x0001082e1fe0();
LAB_1082e0a20:
  plVar13 = alStack_2c0;
  func_0x00010827a384();
  func_0x0001082e2070(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppppplVar15 = pppppplStack_270;
    pppppplStack_270 = (long ******)0x0;
    if (pppppplVar15 != (long ******)0x0) {
      func_0x0001082e1fc4();
    }
    pppppplVar15 = pppppplStack_268;
    pppppplStack_268 = (long ******)0x0;
    if (pppppplVar15 != (long ******)0x0) {
      func_0x0001082e1fc4();
    }
    FUN_1082b777c(&ppppppplStack_260);
    lVar22 = alStack_1d8[0];
    alStack_1d8[0] = 0;
    if (lVar22 != 0) {
      func_0x0001082e1fc4();
    }
    func_0x00010828afb8(apppppplStack_1c8);
    lVar22 = 0x30;
    do {
      FUN_1082764bc((long)&ppppppplStack_b0 + lVar22);
      lVar22 = lVar22 + -0x10;
    } while (lVar22 != -0x10);
    FUN_1082e1a40(&lStack_1a8);
    FUN_1081527b0(&ppppppplStack_1a0);
    func_0x00010827a384(alStack_2c0);
    plVar14 = plVar13;
    __Unwind_Resume();
    pcStack_328 = FUN_1082e0c38;
    if (*(short *)(*(long *)*plVar14 + 4) != 0) {
      ppppppplStack_350 = ppppppplVar26;
      ppppppplStack_348 = (long *******)&ppppppplStack_b0;
      plStack_340 = plVar13;
      lStack_338 = lVar22;
      puStack_330 = &stack0xfffffffffffffff0;
      FUN_1082b8070(&uStack_358,(long *)*plVar14,
                    *(undefined4 *)(*(long *)(*(long *)plVar14[1] + 0x10) + 0xb0));
      uStack_360 = uStack_358;
      uStack_358 = 0;
      FUN_1083b718c(*(undefined8 *)plVar14[2],&uStack_360);
      FUN_1082b91e4(&uStack_360);
      uVar24 = *(undefined8 *)plVar14[3];
      lVar22 = *plVar14;
      pppppplVar15 = *ppppppplVar16;
      if (pppppplVar15 == (long ******)0x0) {
        pppppplVar15 = (long ******)0x0;
      }
      else {
        func_0x0001082e2220();
        (*extraout_x8_06)();
      }
      FUN_1082a49e8(uVar24,lVar22,pppppplVar15);
      FUN_1082b91e4(&uStack_358);
    }
    return;
  }
  return;
code_r0x0001082e0664:
  pppppplVar15 = (long ******)puVar30[2];
  pppppplVar19 = ppppppplStack_308[4];
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  ppppppplStack_260 = (long *******)0x0;
  uVar24 = puVar30[-2];
  uVar2 = puVar30[-1];
  FUN_1082a63ac(lStack_1a8);
  FUN_108330bac(&ppppppplStack_260,puVar30,uVar24,uVar2,0x1082e1a38,lVar6);
  if (ppppppplStack_260 != (long *******)0x0) {
    *(undefined1 *)((long)ppppppplStack_260 + 0x59) = 2;
  }
  FUN_1082b8914(apppppplStack_1c8,ppppppplVar12,&ppppppplStack_260,0,pppppplVar15 != pppppplVar19,1)
  ;
  ppppppplVar16 = apppppplStack_1c8;
  FUN_108279f20(ppppppplVar26);
  FUN_1082764bc(apppppplStack_1c8);
  pppppplVar15 = *ppppppplVar26;
  if (pppppplVar15 == (long ******)0x0) {
    func_0x0001082e1fe0();
  }
  else {
    uVar29 = (undefined4)uStack_240;
    FUN_1082e0124();
    auStack_c0[lVar22] = uVar29;
  }
  FUN_108330548(&ppppppplStack_260);
  lVar22 = lVar22 + 1;
  puVar30 = puVar30 + 5;
  ppppppplVar26 = ppppppplVar26 + 2;
  if (pppppplVar15 == (long ******)0x0) goto LAB_1082e0960;
  goto LAB_1082e0654;
}



/* Entry: 1082e0c38; end: 1082e0d0b;  */

void FUN_1082e0c38(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(short *)(*(long *)*param_1 + 4) != 0) {
    FUN_1082b8070(&uStack_38,(long *)*param_1,
                  *(undefined4 *)(*(long *)(*(long *)param_1[1] + 0x10) + 0xb0));
    uStack_40 = uStack_38;
    uStack_38 = 0;
    FUN_1083b718c(*(undefined8 *)param_1[2],&uStack_40);
    FUN_1082b91e4(&uStack_40);
    uVar3 = *(undefined8 *)param_1[3];
    uVar2 = *param_1;
    lVar1 = *param_2;
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0001082e2220();
      (*extraout_x8)();
    }
    FUN_1082a49e8(uVar3,uVar2,lVar1);
    FUN_1082b91e4(&uStack_38);
  }
  return;
}



/* Entry: 1082e0d0c; end: 1082e0e63;  */

void FUN_1082e0d0c(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *extraout_x8;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined1 auStack_78 [40];
  long lStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  if (param_2 == (long *)0x0) {
LAB_1082e0e54:
    func_0x0001082e1fe0();
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if (((*(byte *)(*(long *)(param_2[2] + 0xb8) + 0x18) >> 1 & 1) == 0) ||
     (uVar8 = param_4, (long)(int)param_3[4] * (long)(int)((ulong)param_3[4] >> 0x20) < 2)) {
    uVar8 = 0;
  }
  plVar4 = param_2;
  plVar6 = param_3;
  uVar5 = param_5;
  func_0x0001082e2138();
  if ((int)plVar4 != 0) {
    func_0x0001082e2138();
    if ((int)plVar4 != 1) {
      plVar4 = param_3;
      func_0x00010828f3d0();
      if ((int)plVar4 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x128);
        func_0x0001082e2178();
                    /* WARNING: Could not recover jumptable at 0x0001082e0dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      plVar4 = param_3;
      (**(code **)(*param_3 + 0x40))();
      if ((int)plVar4 != 0) {
        uVar5 = *(undefined8 *)(param_2[2] + 0xb8);
        FUN_1082e00ac(uVar5,(int)param_3[3]);
        FUN_1082e0140(&lStack_50,param_2,param_3,param_5,uVar8);
        lVar7 = lStack_50;
        lStack_50 = 0;
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 1) = uStack_48;
        *(undefined2 *)((long)param_1 + 0xc) = uStack_44;
        *(int *)(param_1 + 2) = (int)uVar5;
        func_0x0001082e2200();
        return;
      }
      goto LAB_1082e0e54;
    }
    param_2 = plVar6;
    func_0x0001082e2178();
    plVar6 = (long *)plVar4[0xd];
    param_3 = plVar4;
    uVar8 = param_4;
    param_5 = uVar5;
    param_1 = extraout_x8;
    if (plVar6 != (long *)0x0) {
      if ((int)uVar5 == 0) {
        lVar7 = *plVar6;
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *extraout_x8 = lVar7;
        lVar7 = plVar6[1];
        *(undefined2 *)((long)extraout_x8 + 0xc) = *(undefined2 *)((long)plVar6 + 0xc);
        *(int *)(extraout_x8 + 1) = (int)lVar7;
        *(undefined4 *)(extraout_x8 + 2) = *(undefined4 *)((long)plVar6 + 0x1c);
      }
      else {
        if (*plVar6 != 0) {
          piVar1 = (int *)(*plVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_1082dff78(&stack0xffffffffffffffd0,param_2,&stack0xffffffffffffffc0,0);
        lVar7 = plVar4[0xd];
        *extraout_x8 = unaff_x22;
        *(int *)(extraout_x8 + 1) = (int)unaff_x21;
        *(short *)((long)extraout_x8 + 0xc) = (short)((ulong)unaff_x21 >> 0x20);
        *(undefined4 *)(extraout_x8 + 2) = *(undefined4 *)(lVar7 + 0x1c);
        FUN_1082764bc(&stack0xffffffffffffffd0);
        FUN_1082764bc(&stack0xffffffffffffffc0);
      }
      return;
    }
  }
  if ((int)param_5 == 0) {
    plVar4 = param_3 + 6;
    (**(code **)(*param_3 + 0x90))(param_3);
    FUN_10833043c(auStack_78,plVar4);
    FUN_1082b8344(param_1,param_2,auStack_78,&UNK_10f487d20,0x29,(uint)uVar8 | (uint)param_3);
  }
  else {
    FUN_10833043c(auStack_78,param_3 + 6);
    FUN_1082b8914(param_1,param_2,auStack_78,uVar8,1,(int)param_5 != 1);
  }
  FUN_108330548(auStack_78);
  return;
}



/* Entry: 1082e0e64; end: 1082e128b;  */

void FUN_1082e0e64(undefined8 *param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  
  if (((param_2 == 0) || (lVar4 = *(long *)(param_2 + 8), lVar4 == 0)) ||
     ((*(char *)((long)param_4 + 4) == '\x01' &&
      ((*(float *)(param_4 + 1) < 0.0 || (*(float *)((long)param_4 + 0xc) < 0.0)))))) {
LAB_1082e10cc:
    *param_1 = 0;
  }
  else {
    if ((*(int *)((long)param_4 + 0x14) != 0) &&
       (((*(byte *)(*(long *)(*(long *)(lVar4 + 0x10) + 0xb8) + 0x18) >> 1 & 1) == 0 ||
        ((long)(int)param_3[4] * (long)(int)((ulong)param_3[4] >> 0x20) < 2)))) {
      *(int *)param_4 = 0;
      *(undefined1 *)((long)param_4 + 4) = 0;
      param_4[1] = 0;
      *(int *)((long)param_4 + 0x14) = 0;
    }
    lVar2 = param_2;
    func_0x0001082e2148();
    iVar1 = (int)lVar2;
    if ((iVar1 == 0) || (func_0x0001082e2148(), iVar1 == 1)) {
      iVar1 = (int)*param_4;
      lVar2 = *param_4;
      iVar6 = (int)param_4[1];
      iVar5 = *(int *)((long)param_4 + 0xc);
      func_0x0001082e209c();
      lStack_80 = lStack_a0;
      lStack_a0 = 0;
      uStack_78 = (undefined4)uStack_98;
      uStack_74 = uStack_98._4_2_;
      if (lStack_80 == 0) {
        *param_1 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0xb8);
        FUN_1082e15b8(*param_5);
        FUN_1082e15b8();
        if ((lVar2 & 0x100000000) == 0) {
          if (iVar1 == 0) {
            func_0x0001082e21cc();
          }
          else if ((*(byte *)(lVar4 + 0x18) >> 2 & 1) == 0) {
            func_0x0001082e21cc();
          }
          else {
            func_0x0001082e21cc();
            if (iVar1 < 2) {
              iVar1 = 1;
            }
            if (0x3ff < iVar1) {
              iVar1 = 0x400;
            }
            func_0x0001082e2190(iVar1);
          }
          if (param_7 == 0) {
            lStack_80 = 0;
            func_0x0001082e2038(&lStack_80);
            func_0x0001082e201c();
            FUN_1082cde38();
          }
          else {
            lStack_80 = 0;
            if (param_8 == 0) {
              func_0x0001082e2038(&lStack_80);
              func_0x0001082e201c();
              FUN_1082cdf08();
            }
            else {
              func_0x0001082e2038(&lStack_80);
              func_0x0001082e201c();
              FUN_1082cdf9c();
            }
          }
        }
        else if (param_7 == 0) {
          lStack_80 = 0;
          func_0x0001082e2000();
          func_0x0001082e201c();
          FUN_1082c5f28(iVar6,iVar5);
        }
        else {
          lStack_80 = 0;
          if (param_8 == 0) {
            func_0x0001082e2000();
            func_0x0001082e201c();
            FUN_1082c6024(iVar6,iVar5);
          }
          else {
            func_0x0001082e2000();
            func_0x0001082e201c();
            FUN_1082c612c(iVar6,iVar5);
          }
        }
        func_0x0001082e21ec();
      }
      plVar3 = &lStack_80;
    }
    else {
      plVar3 = param_3;
      func_0x00010828f3d0();
      if ((int)plVar3 != 0) {
        uStack_98 = param_4[1];
        lStack_a0 = *param_4;
        lStack_90 = param_4[2];
        (**(code **)(*param_3 + 0x130))
                  (param_1,param_3,param_2,&lStack_a0,param_5,param_6,param_7,param_8);
        return;
      }
      plVar3 = param_3;
      (**(code **)(*param_3 + 0x40))();
      if ((int)plVar3 == 0) goto LAB_1082e10cc;
      func_0x0001082e209c(*(int *)((long)param_4 + 0x14));
      lStack_b0 = lStack_a0;
      lStack_a0 = 0;
      uStack_a8 = (undefined4)uStack_98;
      uStack_a4 = uStack_98._4_2_;
      lStack_c8 = param_4[1];
      lStack_d0 = *param_4;
      lStack_c0 = param_4[2];
      FUN_1082e128c(param_1,lVar4,&lStack_b0,*(undefined4 *)((long)param_3 + 0x1c),&lStack_d0,
                    param_5,param_6,param_7,param_8);
      plVar3 = &lStack_b0;
    }
    FUN_1082764bc(plVar3);
    FUN_1082764bc(&lStack_a0);
  }
  return;
}



/* Entry: 1082e128c; end: 1082e15b7;  */

void FUN_1082e128c(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,int *param_5,
                  undefined4 *param_6,undefined8 param_7,long param_8,long param_9)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  long lStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  long lStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  long lStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  
  lVar6 = *param_3;
  if (lVar6 == 0) {
    *param_1 = 0;
    return;
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0xb8);
  FUN_1082e15b8(*param_6);
  uVar2 = (ulong)(uint)param_6[1];
  FUN_1082e15b8();
  iVar1 = (int)uVar2;
  if ((char)param_5[1] == '\x01') {
    if (param_8 == 0) {
      *param_3 = 0;
      uStack_88 = (undefined4)param_3[1];
      uStack_84 = *(undefined2 *)((long)param_3 + 0xc);
      lStack_90 = lVar6;
      func_0x0001082e1ff0(param_5[2],param_5[3],&lStack_90);
      FUN_1082c5f28();
      plVar3 = &lStack_90;
    }
    else {
      *param_3 = 0;
      if (param_9 == 0) {
        uStack_78 = (undefined4)param_3[1];
        uStack_74 = *(undefined2 *)((long)param_3 + 0xc);
        lStack_80 = lVar6;
        func_0x0001082e1ff0(param_5[2],param_5[3],&lStack_80);
        FUN_1082c6024();
        plVar3 = &lStack_80;
      }
      else {
        uStack_68 = (undefined4)param_3[1];
        uStack_64 = *(undefined2 *)((long)param_3 + 0xc);
        lStack_70 = lVar6;
        func_0x0001082e1ff0(param_5[2],param_5[3],&lStack_70);
        FUN_1082c612c();
        plVar3 = &lStack_70;
      }
    }
    goto LAB_1082e1548;
  }
  iVar4 = *param_5;
  if (iVar4 == 0) {
    func_0x0001082e2208();
    if ((uVar2 & 1) == 0) {
      iVar4 = 0;
      *param_5 = 0;
      *(undefined1 *)(param_5 + 1) = 0;
      param_5[2] = 0;
      param_5[3] = 0;
      goto LAB_1082e14a4;
    }
    iVar4 = *param_5;
    if (iVar4 != 0) goto LAB_1082e13ec;
  }
  else if ((*(byte *)(lVar5 + 0x18) >> 2 & 1) == 0) {
    func_0x0001082e2208();
    *param_5 = 0;
    iVar4 = 2;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    *(undefined1 *)(param_5 + 1) = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 1;
LAB_1082e14a4:
    param_5[5] = iVar4;
  }
  else {
LAB_1082e13ec:
    func_0x0001082e2208();
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    if (0x3ff < iVar4) {
      iVar4 = 0x400;
    }
    func_0x0001082e2190(iVar4);
  }
  if (param_8 == 0) {
    lStack_c0 = *param_3;
    *param_3 = 0;
    uStack_b8 = (undefined4)param_3[1];
    uStack_b4 = *(undefined2 *)((long)param_3 + 0xc);
    func_0x0001082e1ff0(&lStack_c0);
    FUN_1082cde38();
    plVar3 = &lStack_c0;
  }
  else {
    lVar6 = *param_3;
    *param_3 = 0;
    if (param_9 == 0) {
      uStack_a8 = (undefined4)param_3[1];
      uStack_a4 = *(undefined2 *)((long)param_3 + 0xc);
      lStack_b0 = lVar6;
      func_0x0001082e1ff0(&lStack_b0);
      FUN_1082cdf08();
      plVar3 = &lStack_b0;
    }
    else {
      uStack_98 = (undefined4)param_3[1];
      uStack_94 = *(undefined2 *)((long)param_3 + 0xc);
      lStack_a0 = lVar6;
      func_0x0001082e1ff0(&lStack_a0);
      FUN_1082cdf9c();
      plVar3 = &lStack_a0;
    }
  }
LAB_1082e1548:
  FUN_1082764bc(plVar3);
  return;
}



/* Entry: 1082e15b8; end: 1082e15c7;  */

void FUN_1082e15b8(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e15c8);
  (*pcVar1)();
}



/* Entry: 1082e15c8; end: 1082e1877;  */

void FUN_1082e15c8(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar8;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  long *plStack_c8;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  long alStack_78 [7];
  
  lVar6 = *param_3;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001082e2220();
    iVar5 = (int)lVar6;
    (*extraout_x8)();
    FUN_1082b33e8();
    if (iVar5 == 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x48);
      FUN_10827a1fc(alStack_78);
      uStack_a8 = *(undefined8 *)(*param_3 + 0x90);
      uStack_b0 = 0;
      FUN_1082b7f98(alStack_78,param_4,&uStack_b0);
      FUN_10827a1fc(&uStack_b0);
      if ((bRam000000011372a818 & 1) == 0) {
        iVar5 = 0x1372a818;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000108320d60();
          iRam000000011372a810 = iVar5;
          ___cxa_guard_release(0x11372a818);
        }
      }
      FUN_10827a280(&plStack_c8,&uStack_b0,iRam000000011372a810,
                    (int)((ulong)*(ushort *)(alStack_78[0] + 6) + 0x3fffffff8 >> 2) + 1);
      lVar6 = *plStack_c8;
      *(uint *)(lVar6 + 8) = (uint)*(ushort *)(alStack_78[0] + 4);
      _memcpy(lVar6 + 0xc,alStack_78[0] + 8,(ulong)*(ushort *)(alStack_78[0] + 6) - 8);
      uStack_80 = 0;
      FUN_10827a320(&plStack_c8);
      FUN_1082a4c48(&plStack_c8,uVar8,&uStack_b0,1);
      plVar7 = plStack_c8;
      if (plStack_c8 == (long *)0x0) {
        func_0x00010827aaa0(&plStack_c8);
        lStack_d8 = *param_3;
        if (lStack_d8 != 0) {
          piVar1 = (int *)(lStack_d8 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_d0 = (undefined4)param_3[1];
        uStack_cc = *(undefined2 *)((long)param_3 + 0xc);
        FUN_1082b828c(&plStack_c8,param_2,&lStack_d8,1);
        FUN_1082764bc(&lStack_d8);
        if (plStack_c8 == (long *)0x0) {
          lVar6 = *param_3;
          *param_3 = 0;
          *param_1 = lVar6;
          *(int *)(param_1 + 1) = (int)param_3[1];
          uStack_bc = *(undefined2 *)((long)param_3 + 0xc);
        }
        else {
          plVar7 = plStack_c8;
          func_0x0001082e2220();
          (*extraout_x8_00)();
          FUN_1082a49e8(uVar8,&uStack_b0,plVar7);
          plVar7 = plStack_c8;
          plStack_c8 = (long *)0x0;
          *param_1 = (long)plVar7;
          *(undefined4 *)(param_1 + 1) = uStack_c0;
        }
        *(undefined2 *)((long)param_1 + 0xc) = uStack_bc;
        func_0x0001082e2104();
      }
      else {
        plStack_c8 = (long *)0x0;
        lVar6 = param_3[1];
        uVar2 = *(undefined2 *)((long)param_3 + 0xc);
        uStack_b8 = 0;
        *param_1 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
        *(int *)(param_1 + 1) = (int)lVar6;
        *(undefined2 *)((long)param_1 + 0xc) = uVar2;
        FUN_1082764bc(&uStack_b8);
        func_0x00010827aaa0(&plStack_c8);
      }
      func_0x00010827a384(&uStack_b0);
      func_0x00010827a384(alStack_78);
      return;
    }
    lVar6 = *param_3;
  }
  *param_3 = 0;
  *param_1 = lVar6;
  *(int *)(param_1 + 1) = (int)param_3[1];
  *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_3 + 0xc);
  return;
}



/* Entry: 1082e1878; end: 1082e18e7;  */

undefined8 *
FUN_1082e1878(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_98 [4];
  byte bStack_94;
  char cStack_40;
  undefined8 uStack_28;
  
  func_0x0001082e2158();
  uStack_28 = extraout_x8;
  FUN_1082e1a68(param_2,param_3);
  uVar3 = (undefined4)param_2;
  puVar4 = (undefined8 *)0x0;
  func_0x00010828c694(auStack_98);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    func_0x0001082e20b4();
  }
  func_0x0001082e2070(uStack_28);
  if ((bool)uVar1) {
    return (undefined8 *)(ulong)bStack_94;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  uStack_f0 = *param_1;
  *param_1 = 0;
  FUN_108355ee8(&uStack_e8,0x2000000);
  uVar5 = uStack_e8;
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110a3ea18;
  uStack_e8 = 0;
  puVar2[2] = uVar5;
  uVar5 = *puVar4;
  puVar2[4] = puVar4[1];
  puVar2[3] = uVar5;
  *(undefined4 *)(puVar2 + 5) = param_4;
  FUN_1082e1f34(&uStack_e8);
  uVar5 = uStack_f0;
  *puVar2 = &PTR_SUB_110a38d30;
  puVar2[6] = &PTR_FUN_110a38d90;
  puVar2[7] = &PTR_DAT_110a38dd0;
  uStack_f0 = 0;
  puVar2[8] = uVar5;
  *(undefined4 *)(puVar2 + 9) = uVar3;
  FUN_10827f63c(&uStack_f0);
  uStack_e8 = 0;
  *extraout_x8_00 = puVar2;
  puVar4 = &uStack_e8;
  FUN_1082e19d4(puVar4);
  return puVar4;
}



/* Entry: 1082e18e8; end: 1082e19d3;  */

void FUN_1082e18e8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  uStack_50 = *param_2;
  *param_2 = 0;
  FUN_108355ee8(&uStack_48,0x2000000);
  uVar2 = uStack_48;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_DAT_110a3ea18;
  uStack_48 = 0;
  puVar1[2] = uVar2;
  uVar2 = *param_4;
  puVar1[4] = param_4[1];
  puVar1[3] = uVar2;
  *(undefined4 *)(puVar1 + 5) = param_5;
  FUN_1082e1f34(&uStack_48);
  uVar2 = uStack_50;
  *puVar1 = &PTR_SUB_110a38d30;
  puVar1[6] = &PTR_FUN_110a38d90;
  puVar1[7] = &PTR_DAT_110a38dd0;
  uStack_50 = 0;
  puVar1[8] = uVar2;
  *(undefined4 *)(puVar1 + 9) = param_3;
  FUN_10827f63c(&uStack_50);
  uStack_48 = 0;
  *param_1 = puVar1;
  FUN_1082e19d4(&uStack_48);
  return;
}



/* Entry: 1082e19d4; end: 1082e1a1b;  */

void FUN_1082e19d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x0001082e21a8();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1082e1a1c; end: 1082e1a3f;  */

undefined4 FUN_1082e1a1c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  bVar2 = true;
  bVar3 = false;
  if (0 < (int)*(undefined8 *)(param_1 + 0xa8)) {
    iVar4 = (int)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
    bVar3 = SBORROW4(iVar4,1);
    bVar2 = iVar4 + -1 < 0;
  }
  if (bVar2 != bVar3) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xb0) < 0xd) {
    return *(undefined4 *)(&UNK_10df07e60 + (ulong)*(uint *)(param_1 + 0xb0) * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a62b4);
  (*pcVar1)();
}



/* Entry: 1082e1a40; end: 1082e1a67;  */

void FUN_1082e1a40(long param_1)

{
  func_0x0001082e21a8();
  if (param_1 != 0) {
    func_0x0001082a61d0();
  }
  return;
}



/* Entry: 1082e1a68; end: 1082e1adb;  */

undefined4 FUN_1082e1a68(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 1:
    if (3 < param_1) {
      return 0;
    }
    puVar1 = &UNK_10df16804;
    goto code_r0x0001082e1ad0;
  case 2:
    if (3 < param_1) {
      return 0;
    }
    puVar1 = &UNK_10df16814;
    goto code_r0x0001082e1ad0;
  case 3:
    break;
  case 4:
    break;
  default:
    goto LAB_1082e210c;
  }
  if (3 < param_1) {
LAB_1082e210c:
    return 0;
  }
  puVar1 = &UNK_10df16750;
code_r0x0001082e1ad0:
  return *(undefined4 *)(puVar1 + (ulong)param_1 * 4);
}



/* Entry: 1082e1adc; end: 1082e1aff;  */

void FUN_1082e1adc(long param_1)

{
  func_0x0001082e21a8();
  if (param_1 != 0) {
    FUN_1082e1b00();
  }
  return;
}



/* Entry: 1082e1b00; end: 1082e1b33;  */

void FUN_1082e1b00(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_1082e1b34();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082e1b34; end: 1082e1b9f;  */

long FUN_1082e1b34(long param_1)

{
  FUN_108410074(param_1 + 0x10);
  FUN_10821e6bc(param_1 + 8);
  return param_1;
}


