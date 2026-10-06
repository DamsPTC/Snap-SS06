/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006993ec; end: 10069941b;  */

long FUN_1006993ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010528f59c(param_1);
  }
  return param_1;
}



/* Entry: 10069941c; end: 100699423;  */

void FUN_10069941c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x0001006a0e58();
  }
  return;
}



/* Entry: 100699424; end: 100699487;  */

long * FUN_100699424(long *param_1)

{
  FUN_10069941c();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100699488; end: 10069948f;  */

undefined1 * FUN_100699488(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000048;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000048;
}



/* Entry: 100699490; end: 100699517;  */

void FUN_100699490(undefined8 param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001006991bc();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  param_2[2] = extraout_x8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x0001006994c8(&uStack_38);
  return;
}



/* Entry: 100699518; end: 100699523;  */

void FUN_100699518(void)

{
  return;
}



/* Entry: 100699524; end: 100699567;  */

long * FUN_100699524(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100699568; end: 10069957b;  */

void FUN_100699568(void)

{
  return;
}



/* Entry: 10069957c; end: 1006995a3;  */

void FUN_10069957c(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1006995a4();
  return;
}



/* Entry: 1006995a4; end: 1006995db;  */

void FUN_1006995a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 1006995dc; end: 100699897;  */

void FUN_1006995dc(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  long *extraout_x8_00;
  ulong uVar9;
  long *extraout_x10;
  undefined **ppuVar10;
  ulong uVar11;
  ulong *puVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000010;
  undefined1 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  func_0x0001006995c0();
  FUN_100699898();
  iVar5 = *(int *)(param_1 + 0x38);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (undefined4 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  in_stack_00000018 = 0;
  if (iVar5 != 0) {
    FUN_1006998b8();
    lVar13 = unaff_x19[1];
    lVar1 = lVar13 + (long)iVar5 * 0x18;
    for (lVar16 = (long)iVar5 * 0x18; lVar16 != 0; lVar16 = lVar16 + -0x18) {
      FUN_100699954(lVar13,&stack0x00000040);
      lVar13 = lVar13 + 0x18;
    }
    unaff_x19[1] = lVar1;
  }
  in_stack_00000018 = 1;
  FUN_1006999f4(&stack0x00000010);
  FUN_1002920a0(&stack0x00000040);
  FUN_1002920a0(&stack0x00000028);
  bVar7 = *(undefined ***)(unaff_x20 + 0x78) == (undefined **)0x0;
  ppuVar4 = &PTR_PTR_113280b68;
  if (!bVar7) {
    ppuVar4 = *(undefined ***)(unaff_x20 + 0x78);
  }
  FUN_100697858(ppuVar4);
  plVar18 = extraout_x8_00;
  if (!bVar7) {
    plVar18 = extraout_x10;
  }
  plVar2 = plVar18 + (int)extraout_x8_00[1];
  do {
    if (plVar18 == plVar2) {
      return;
    }
    uVar6 = *(uint *)(*plVar18 + 0x20);
    if ((int)uVar6 < (int)*(uint *)(unaff_x20 + 0x38)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(unaff_x20 + 0x30);
      puVar3 = (ulong *)(unaff_x20 + 0x30);
      if ((uVar11 & 1) != 0) {
        puVar3 = (ulong *)(uVar11 + (long)(int)uVar6 * 8 + 7);
      }
      plVar17 = (long *)(*unaff_x19 + (long)(int)uVar6 * 0x18);
      puVar12 = (ulong *)(*puVar3 + 0x10);
      uVar11 = *puVar12;
      if ((uVar11 & 1) != 0) {
        puVar12 = (ulong *)(uVar11 + 7);
      }
      ppuVar10 = *(undefined ***)(*plVar18 + 0x18);
      ppuVar4 = &PTR_PTR_1133ae720;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar4 = ppuVar10;
      }
      for (; (long)*(int *)(*puVar3 + 0x18) * 8 - uVar9 != 0; uVar9 = uVar9 + 8) {
        if (*(undefined4 **)(*(long *)((long)puVar12 + uVar9) + 0x40) == (undefined4 *)ppuVar4[2]) {
          puVar14 = (undefined4 *)plVar17[1];
          uVar19 = (undefined4)(uVar9 >> 3);
          if (puVar14 < (undefined4 *)plVar17[2]) {
            puVar15 = puVar14 + 1;
            *puVar14 = uVar19;
          }
          else {
            plVar8 = plVar17;
            FUN_1006601e8(plVar17,((long)puVar14 - *plVar17 >> 2) + 1);
            func_0x000100161bec(&stack0x00000040,plVar8,plVar17[1] - *plVar17 >> 2,plVar17 + 2);
            *in_stack_00000050 = uVar19;
            in_stack_00000050 = in_stack_00000050 + 1;
            FUN_100161c3c(plVar17,&stack0x00000040);
            puVar15 = (undefined4 *)plVar17[1];
            FUN_100161cc4(&stack0x00000040);
          }
          plVar17[1] = (long)puVar15;
          goto LAB_100699830;
        }
      }
      in_stack_00000040 = (ulong)uVar6;
      in_stack_00000048 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = (undefined4 *)ppuVar4[2];
      FUN_1003a91d4(&UNK_10f4be05c);
      FUN_1003a9204(&stack0x00000010);
    }
    else {
      in_stack_00000040 = (ulong)uVar6;
      in_stack_00000048 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = (undefined4 *)(ulong)*(uint *)(unaff_x20 + 0x38);
      FUN_1003a91d4(&UNK_10f4be014);
      FUN_1003a9204(&stack0x00000010);
    }
    func_0x000107c60ca0(&stack0x00000010);
LAB_100699830:
    plVar18 = plVar18 + 1;
  } while( true );
}



/* Entry: 100699898; end: 1006998b7;  */

void FUN_100699898(void)

{
  return;
}



/* Entry: 1006998b8; end: 1006998e3;  */

long FUN_1006998b8(long param_1)

{
  undefined1 in_CY;
  
  func_0x0001006998a4();
  if (!(bool)in_CY) {
    FUN_1006998e4();
    FUN_10069991c();
    FUN_100699940();
    return param_1;
  }
  func_0x000105290c20();
  return param_1 + 0x10;
}



/* Entry: 1006998e4; end: 1006998ef;  */

long FUN_1006998e4(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 1006998f0; end: 10069991b;  */

void FUN_1006998f0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006998f0();
  return;
}



/* Entry: 10069991c; end: 10069993f;  */

void FUN_10069991c(void)

{
  FUN_1006998f0();
  return;
}



/* Entry: 100699940; end: 100699953;  */

void FUN_100699940(long param_1,long param_2)

{
  long *unaff_x19;
  
  *unaff_x19 = param_1;
  unaff_x19[1] = param_1;
  unaff_x19[2] = param_1 + param_2 * 0x18;
  return;
}



/* Entry: 100699954; end: 10069997b;  */

void FUN_100699954(void)

{
  func_0x000100632cd8();
  FUN_10069997c();
  return;
}



/* Entry: 10069997c; end: 1006999f3;  */

void FUN_10069997c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_100291c58(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      func_0x000107c610b8(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1006999f4; end: 100699a1b;  */

void FUN_1006999f4(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010069b268();
  }
  return;
}



/* Entry: 100699a1c; end: 100699a73;  */

void FUN_100699a1c(void)

{
  return;
}



/* Entry: 100699a74; end: 100699c8f;  */

void FUN_100699a74(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x9;
  undefined **ppuVar7;
  long *extraout_x10;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [44];
  byte bStack_a4;
  byte bStack_9c;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100699898();
  iVar4 = *(int *)(param_1 + 0xc0);
  if (iVar4 == 0xe) {
    func_0x000107c33fa8();
    func_0x000107c34074(*(undefined4 *)(unaff_x20 + 0xc0));
    if ((bStack_a4 & 1) == 0) {
      bStack_a4 = 1;
    }
    func_0x000107c33ff8();
  }
  else {
    if (iVar4 != 0xd) {
      bVar6 = iVar4 == 0xb;
      if (bVar6) {
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_58 = 0;
        func_0x000107c34044(*(undefined8 *)(unaff_x20 + 0xb8));
        uVar1 = extraout_x9;
        if (!bVar6) {
          uVar1 = extraout_x8;
        }
        FUN_100697858(uVar1);
        plVar2 = extraout_x8_00;
        if (!bVar6) {
          plVar2 = extraout_x10;
        }
        for (lVar8 = (long)(int)extraout_x8_00[1] << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
          ppuVar7 = *(undefined ***)(*plVar2 + 0x18);
          ppuVar3 = &PTR_PTR_1133ae720;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar3 = ppuVar7;
          }
          puStack_90 = ppuVar3[2];
          uStack_88 = *(undefined4 *)(*plVar2 + 0x20);
          func_0x00010527f438(&uStack_58,&puStack_90);
          plVar2 = plVar2 + 1;
        }
        func_0x000107c33fa8();
        ppuVar3 = *(undefined ***)(unaff_x20 + 0xb8);
        if (*(int *)(unaff_x20 + 0xc0) != 0xb) {
          ppuVar3 = &PTR_PTR_113280c08;
        }
        uVar5 = *(undefined1 *)(ppuVar3 + 4);
        func_0x000108684a98(&uStack_110,&uStack_58);
        uStack_e0 = uStack_108;
        uStack_e8 = uStack_110;
        uStack_d8 = uStack_100;
        auStack_f0[0] = uVar5;
        func_0x00010069925c();
        func_0x000107c2a178(auStack_d0,auStack_f0);
        func_0x000107c33ff8();
        func_0x000107c34060();
        func_0x000104be1498(&puStack_90);
        func_0x000104be14c8(&uStack_e8);
        func_0x000104be14c8(&uStack_110);
        func_0x000107c3402c();
        func_0x000104be14c8(&uStack_58);
        return;
      }
      *unaff_x19 = 0;
      unaff_x19[0x38] = 0;
      return;
    }
    func_0x000107c33fa8();
    func_0x000107c34074(*(undefined4 *)(unaff_x20 + 0xc0));
    if ((bStack_9c & 1) == 0) {
      bStack_9c = 1;
    }
    func_0x000107c33ff8();
  }
  func_0x000107c34060();
  func_0x000104be1498(&puStack_90);
  func_0x000107c3402c();
  return;
}



/* Entry: 100699c90; end: 100699c9b;  */

long FUN_100699c90(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_10068f86c(&PTR_DAT_110a91e60);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10068e734(0,*(undefined8 *)(param_2 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 100699c9c; end: 100699cb7;  */

void FUN_100699c9c(long param_1)

{
  FUN_100699c90();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100699cb8; end: 100699d23;  */

long FUN_100699cb8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_10068f86c(&PTR_DAT_110a91e60);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10068e734(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 100699d24; end: 100699d2f;  */

void FUN_100699d24(void)

{
  undefined1 *unaff_x19;
  
  *unaff_x19 = 0;
  unaff_x19[0x20] = 0;
  return;
}



/* Entry: 100699d30; end: 100699d9f;  */

void FUN_100699d30(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  if ((*(char *)(param_2 + 0x28) == '\x01') && ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
    func_0x000107c3403c(*(undefined8 *)(param_2 + 0x18));
    func_0x000107c34078();
    func_0x000107c33fe4();
    uStack_28 = 0;
    func_0x000105290cc4(param_1,auStack_40);
    func_0x000107c33ff0();
    func_0x000107c33fb8();
  }
  else {
    FUN_100699d24();
  }
  return;
}



/* Entry: 100699da0; end: 100699db3;  */

void FUN_100699da0(void)

{
  return;
}



/* Entry: 100699db4; end: 100699ddb;  */

void FUN_100699db4(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_100699edc();
  return;
}



/* Entry: 100699ddc; end: 100699edb;  */

undefined8 *
FUN_100699ddc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined2 param_9,undefined4 param_10,undefined8 param_11,undefined8 *param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  *(undefined4 *)(param_1 + 3) = param_3;
  FUN_100699db4(param_1 + 4,param_4);
  FUN_100699ef0(param_1 + 8,param_5);
  FUN_10069957c(param_1 + 0xc,param_6);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = *param_7;
  param_1[0x11] = param_7[1];
  param_1[0x10] = uVar1;
  param_1[0x12] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  FUN_100699f5c(param_1 + 0x13,param_8);
  *(undefined2 *)(param_1 + 0x5b) = param_9;
  FUN_100699f98(param_1 + 0x5c,param_11);
  uVar1 = *param_12;
  uVar3 = param_12[3];
  uVar2 = param_12[2];
  param_1[0x65] = param_12[1];
  param_1[100] = uVar1;
  param_1[0x67] = uVar3;
  param_1[0x66] = uVar2;
  FUN_100699fd4(param_1 + 0x68,param_13);
  FUN_10069a010(param_1 + 0x6e,param_14);
  return param_1;
}



/* Entry: 100699edc; end: 100699eef;  */

void FUN_100699edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 100699ef0; end: 100699f17;  */

void FUN_100699ef0(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_100699f18();
  return;
}



/* Entry: 100699f18; end: 100699f5b;  */

void FUN_100699f18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 100699f5c; end: 100699f83;  */

void FUN_100699f5c(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x238) = 0;
  FUN_100699f84();
  return;
}



/* Entry: 100699f84; end: 100699f97;  */

void FUN_100699f84(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    func_0x000104be6f50();
    *(undefined1 *)(param_1 + 0x238) = 1;
    return;
  }
  return;
}



/* Entry: 100699f98; end: 100699fbf;  */

void FUN_100699f98(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_100699fc0();
  return;
}



/* Entry: 100699fc0; end: 100699fd3;  */

void FUN_100699fc0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x000104be7250();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 100699fd4; end: 100699ffb;  */

void FUN_100699fd4(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_100699ffc();
  return;
}



/* Entry: 100699ffc; end: 10069a00f;  */

void FUN_100699ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 5) == '\x01') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(char *)(param_2 + 3) == '\x01') {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  return;
}



/* Entry: 10069a010; end: 10069a037;  */

void FUN_10069a010(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10069a038();
  return;
}



/* Entry: 10069a038; end: 10069a057;  */

void FUN_10069a038(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000104be7364();
    func_0x000104be80a4();
    return;
  }
  return;
}



/* Entry: 10069a058; end: 10069a0f7;  */

void FUN_10069a058(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010069a04c();
  FUN_10069a114();
  func_0x00010069a138();
  FUN_100699db4();
  FUN_100699ef0(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_10069957c(unaff_x19 + 0x60,unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  FUN_100699f5c(unaff_x19 + 0x98,unaff_x20 + 0x98);
  *(undefined2 *)(unaff_x19 + 0x2d8) = *(undefined2 *)(unaff_x20 + 0x2d8);
  FUN_100699f98(unaff_x19 + 0x2e0,unaff_x20 + 0x2e0);
  uVar1 = *(undefined8 *)(unaff_x20 + 800);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x330);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined8 *)(unaff_x19 + 800) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x338) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x330) = uVar2;
  FUN_100699fd4(unaff_x19 + 0x340,unaff_x20 + 0x340);
  FUN_10069a010(unaff_x19 + 0x370,unaff_x20 + 0x370);
  return;
}



/* Entry: 10069a0f8; end: 10069a113;  */

void FUN_10069a0f8(long param_1)

{
  FUN_10069a058();
  *(undefined1 *)(param_1 + 0x398) = 1;
  return;
}



/* Entry: 10069a114; end: 10069a14b;  */

void FUN_10069a114(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 10069a14c; end: 10069a743;  */

void FUN_10069a14c(long param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  bool bVar3;
  long extraout_x8;
  long *extraout_x8_00;
  undefined **ppuVar4;
  long *extraout_x10;
  long *extraout_x10_00;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  char cStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 uStack_130;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  FUN_10066e1d8();
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  FUN_10069a744(&uStack_1a8,param_1 + 0x48);
  FUN_10069a744(&uStack_1c0,param_1 + 0x60);
  FUN_10069a744(&uStack_1d8,param_1 + 0x78);
  FUN_10069a744(&uStack_1f0,param_1 + 0x90);
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0;
  plVar5 = (long *)(param_1 + 0xc0);
  FUN_1006974ec();
  if (!(bool)in_ZR) {
    plVar5 = extraout_x10;
  }
  for (lVar7 = (long)*(int *)(param_1 + 200) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    lVar6 = *plVar5;
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar6 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x18);
    }
    FUN_100696384(auStack_220,ppuVar1);
    ppuVar1 = &PTR_PTR_11326ae28;
    if (*(undefined ***)(lVar6 + 0x20) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x20);
    }
    func_0x000107c29e38(&uStack_2a0,ppuVar1);
    uStack_240 = *(undefined8 *)(lVar6 + 0x28);
    uStack_268 = uStack_298;
    uStack_270 = uStack_2a0;
    uStack_260 = uStack_260 & 0xffffffffffffff00;
    uStack_248 = cStack_278 == '\x01';
    if ((bool)uStack_248) {
      uStack_258 = uStack_288;
      uStack_260 = uStack_290;
      uStack_250 = uStack_280;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_290 = 0;
    }
    uStack_238 = 1;
    uStack_230 = 1;
    func_0x00010529e3c0(&uStack_190,auStack_220,&uStack_270);
    func_0x0001052932d4(&uStack_208,&uStack_190);
    func_0x000104be1474(&uStack_190);
    FUN_1001148fc(&uStack_260);
    FUN_1001148fc(&uStack_290);
    FUN_100100fec(auStack_220);
    plVar5 = plVar5 + 1;
  }
  bVar3 = *(long *)(param_1 + 0x120) == 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  FUN_1006974ec();
  plVar5 = extraout_x8_00;
  if (!bVar3) {
    plVar5 = extraout_x10_00;
  }
  uStack_b0 = uStack_208;
  uStack_a8 = uStack_200;
  uStack_a0 = uStack_1f8;
  uStack_98 = uStack_1f0;
  uStack_90 = uStack_1e8;
  uStack_88 = uStack_1e0;
  uStack_80 = uStack_1d8;
  uStack_78 = uStack_1d0;
  uStack_70 = uStack_1c8;
  uStack_68 = uStack_1c0;
  uStack_60 = uStack_1b8;
  uStack_58 = uStack_1b0;
  uStack_50 = uStack_1a8;
  uStack_48 = uStack_1a0;
  uStack_40 = uStack_198;
  for (lVar7 = (long)(int)extraout_x8_00[1] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    lVar6 = *plVar5;
    ppuVar4 = *(undefined ***)(lVar6 + 0x18);
    ppuVar1 = &PTR_PTR_11326cb58;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    uStack_208 = uStack_b0;
    uStack_200 = uStack_a8;
    uStack_1f8 = uStack_a0;
    uStack_1f0 = uStack_98;
    uStack_1e8 = uStack_90;
    uStack_1e0 = uStack_88;
    uStack_1d8 = uStack_80;
    uStack_1d0 = uStack_78;
    uStack_1c8 = uStack_70;
    uStack_1c0 = uStack_68;
    uStack_1b8 = uStack_60;
    uStack_1b0 = uStack_58;
    uStack_1a8 = uStack_50;
    uStack_1a0 = uStack_48;
    uStack_198 = uStack_40;
    FUN_100696384(&uStack_120,ppuVar1);
    uStack_178 = *(undefined4 *)(lVar6 + 0x20);
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    uStack_180 = uStack_110;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    FUN_100100fec(&uStack_120);
    func_0x0001052936a8(&uStack_2b8,&uStack_190);
    FUN_100100fec(&uStack_190);
    plVar5 = plVar5 + 1;
    uStack_b0 = uStack_208;
    uStack_a8 = uStack_200;
    uStack_a0 = uStack_1f8;
    uStack_98 = uStack_1f0;
    uStack_90 = uStack_1e8;
    uStack_88 = uStack_1e0;
    uStack_80 = uStack_1d8;
    uStack_78 = uStack_1d0;
    uStack_70 = uStack_1c8;
    uStack_68 = uStack_1c0;
    uStack_60 = uStack_1b8;
    uStack_58 = uStack_1b0;
    uStack_50 = uStack_1a8;
    uStack_48 = uStack_1a0;
    uStack_40 = uStack_198;
  }
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2e8 = 0;
  uStack_198 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uVar2 = *(undefined1 *)(param_1 + 0x140);
  uStack_360 = uStack_b0;
  uStack_358 = uStack_a8;
  uStack_350 = uStack_a0;
  uStack_348 = uStack_98;
  uStack_340 = uStack_90;
  uStack_338 = uStack_88;
  uStack_330 = uStack_80;
  uStack_328 = uStack_78;
  uStack_320 = uStack_70;
  uStack_318 = uStack_68;
  uStack_310 = uStack_60;
  uStack_308 = uStack_58;
  uStack_300 = uStack_50;
  uStack_2f8 = uStack_48;
  uStack_2f0 = uStack_40;
  FUN_10069a7a4(&uStack_380,&uStack_2b8);
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  auStack_d8[0] = 0;
  uStack_b8 = 0;
  uStack_e8 = uStack_378;
  uStack_f0 = uStack_380;
  uStack_e0 = uStack_370;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  uStack_f8 = 0;
  uStack_190 = uStack_190 & 0xffffffffffffff00;
  uStack_130 = 0;
  FUN_10069a860(extraout_x8,&uStack_20,&uStack_38,&uStack_50,&uStack_68,&uStack_80,&uStack_98,
                &uStack_b0,uVar2);
  FUN_10069aadc(&uStack_190);
  FUN_10069ab0c(&uStack_120);
  FUN_10069ab2c(&uStack_f0);
  FUN_10069ab7c(auStack_d8);
  FUN_10069ab9c(&uStack_b0);
  func_0x0001005fb56c(&uStack_98);
  func_0x0001005fb56c(&uStack_80);
  func_0x0001005fb56c(&uStack_68);
  func_0x0001005fb56c(&uStack_50);
  FUN_10069abec();
  func_0x0001005fb56c(&uStack_20);
  FUN_10069ab2c(&uStack_380);
  FUN_10069ab9c(&uStack_360);
  func_0x0001005fb56c(&uStack_348);
  func_0x0001005fb56c(&uStack_330);
  func_0x0001005fb56c(&uStack_318);
  func_0x0001005fb56c(&uStack_300);
  func_0x0001005fb56c(&uStack_2e8);
  func_0x0001005fb56c(&uStack_2d0);
  FUN_10069abf4(&uStack_190,param_1);
  FUN_10069acec(extraout_x8 + 0x118,&uStack_190);
  FUN_10069ab0c(&uStack_190);
  FUN_10069ab2c(&uStack_2b8);
  FUN_10069ab9c(&uStack_208);
  func_0x0001005fb56c(&uStack_1f0);
  func_0x0001005fb56c(&uStack_1d8);
  func_0x0001005fb56c(&uStack_1c0);
  func_0x0001005fb56c(&uStack_1a8);
  return;
}



/* Entry: 10069a744; end: 10069a7a3;  */

void FUN_10069a744(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  for (lVar2 = (long)(int)param_2[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    func_0x0001006b78ec(*puVar1);
    func_0x000107c33fac();
    func_0x0001006b78f4();
    puVar1 = puVar1 + 1;
  }
  return;
}



/* Entry: 10069a7a4; end: 10069a7c7;  */

void FUN_10069a7a4(void)

{
  func_0x000100632cd8();
  FUN_100632de4();
  FUN_10069a7c8();
  return;
}



/* Entry: 10069a7c8; end: 10069a80f;  */

void FUN_10069a7c8(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    func_0x000108684d8c();
    func_0x0001006a00c4();
    func_0x000108684db8();
  }
  FUN_100632d78();
  FUN_10069a810();
  return;
}



/* Entry: 10069a810; end: 10069a837;  */

void FUN_10069a810(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010069ab50();
  }
  return;
}



/* Entry: 10069a838; end: 10069a85f;  */

void FUN_10069a838(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10069aa50();
  return;
}



/* Entry: 10069a860; end: 10069aa4f;  */

undefined8 *
FUN_10069a860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 *param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24,
             undefined4 param_25,undefined8 param_26)

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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar1;
  param_1[0xb] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = *param_7;
  param_1[0x10] = param_7[1];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = *param_8;
  param_1[0x13] = param_8[1];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  *(undefined1 *)(param_1 + 0x15) = param_9;
  param_1[0x17] = param_12;
  param_1[0x16] = param_11;
  param_1[0x18] = param_13;
  *(undefined1 *)(param_1 + 0x19) = (undefined1)param_14;
  *(undefined1 *)((long)param_1 + 0xc9) = param_14._1_1_;
  *(undefined1 *)((long)param_1 + 0xca) = param_14._2_1_;
  *(undefined1 *)((long)param_1 + 0xcb) = param_14._3_1_;
  *(undefined1 *)((long)param_1 + 0xcc) = (undefined1)param_15;
  *(undefined1 *)((long)param_1 + 0xcd) = param_15._1_1_;
  *(undefined1 *)((long)param_1 + 0xce) = param_15._2_1_;
  FUN_10069a838(param_1 + 0x1a,param_16);
  param_1[0x1f] = param_17;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar1 = *param_18;
  param_1[0x21] = param_18[1];
  param_1[0x20] = uVar1;
  param_1[0x22] = param_18[2];
  *param_18 = 0;
  param_18[1] = 0;
  param_18[2] = 0;
  FUN_10069aa64(param_1 + 0x23,param_19);
  *(undefined4 *)(param_1 + 0x29) = param_20;
  *(undefined8 *)((long)param_1 + 0x14c) = param_22;
  *(undefined8 *)((long)param_1 + 0x154) = param_23;
  *(undefined1 *)((long)param_1 + 0x15c) = (undefined1)param_24;
  *(undefined1 *)((long)param_1 + 0x15d) = param_24._1_1_;
  FUN_10069aaa0(param_1 + 0x2c,param_26);
  return param_1;
}



/* Entry: 10069aa50; end: 10069aa63;  */

void FUN_10069aa50(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000104be7394();
    func_0x000104be80a4();
    return;
  }
  return;
}



/* Entry: 10069aa64; end: 10069aa8b;  */

void FUN_10069aa64(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10069aa8c();
  return;
}



/* Entry: 10069aa8c; end: 10069aa9f;  */

void FUN_10069aa8c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000104be73b4();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10069aaa0; end: 10069aac7;  */

void FUN_10069aaa0(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_10069aac8();
  return;
}



/* Entry: 10069aac8; end: 10069aadb;  */

void FUN_10069aac8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x000104be7128();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 10069aadc; end: 10069ab0b;  */

long FUN_10069aadc(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000104be12f8(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 10069ab0c; end: 10069ab2b;  */

void FUN_10069ab0c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10069ab2c; end: 10069ab7b;  */

void FUN_10069ab2c(void)

{
  FUN_100292090();
  func_0x00010069ab50();
  return;
}



/* Entry: 10069ab7c; end: 10069ab9b;  */

void FUN_10069ab7c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10069ab9c; end: 10069abeb;  */

void FUN_10069ab9c(void)

{
  FUN_100292090();
  func_0x00010069abc0();
  return;
}



/* Entry: 10069abec; end: 10069abf3;  */

void FUN_10069abec(void)

{
  long unaff_x29;
  
  FUN_100292090(unaff_x29 + -0x88);
  FUN_1005fb5c8();
  return;
}



/* Entry: 10069abf4; end: 10069acb7;  */

void FUN_10069abf4(undefined1 *param_1,long param_2)

{
  undefined **ppuVar1;
  long extraout_x8;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_1006b78d8(*(undefined8 *)(*(long *)(param_2 + 0x108) + 0x18));
    func_0x000107c29eb0(auStack_40);
    if ((bStack_28 & 1) == 0) {
      *param_1 = 0;
      param_1[0x28] = 0;
    }
    else {
      FUN_10054f8dc(auStack_90,auStack_40);
      ppuVar1 = &PTR_PTR_113284250;
      if (*(undefined ***)(param_2 + 0x108) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x108);
      }
      func_0x000107c34078(ppuVar1);
      uStack_60 = uStack_80;
      func_0x000107c33fe4();
      uStack_58 = *(ulong *)(extraout_x8 + 0x20) & 0xffffffff;
      uStack_50 = *(ulong *)(extraout_x8 + 0x20) >> 0x20;
      func_0x00010528d870(param_1,auStack_70);
      func_0x000107c33ff0();
      func_0x000107c33fb8();
    }
    FUN_1005fce88(auStack_40);
  }
  return;
}



/* Entry: 10069acb8; end: 10069aceb;  */

void FUN_10069acb8(void)

{
  return;
}



/* Entry: 10069acec; end: 10069ad0f;  */

undefined8 FUN_10069acec(undefined8 param_1)

{
  func_0x00010069acc4();
  return param_1;
}



/* Entry: 10069ad10; end: 10069ad67;  */

int FUN_10069ad10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 - 1U < 2) {
    return iVar1;
  }
  if (iVar1 != -0x80000000 && iVar1 != 3) {
    if (iVar1 == 4) {
      return 5;
    }
    if (iVar1 != 0x7fffffff) {
      return 0;
    }
  }
  return 3;
}



/* Entry: 10069ad68; end: 10069adcb;  */

undefined8 FUN_10069ad68(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010069ad58();
  if ((param_1 & 1) == 0) {
    func_0x000107c33fe8();
    if ((param_1 & 1) == 0) {
      func_0x000107c33fe8();
      if ((param_1 & 1) == 0) {
        func_0x000107c33fe8();
        uVar1 = 3;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10069adcc; end: 10069add3;  */

void FUN_10069adcc(void)

{
  return;
}



/* Entry: 10069add4; end: 10069adf3;  */

void FUN_10069add4(void)

{
  FUN_10028af84();
  FUN_10069adf4();
  return;
}



/* Entry: 10069adf4; end: 10069ae0b;  */

void FUN_10069adf4(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  
  uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(unaff_x19 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10069ae0c; end: 10069aeef;  */

long FUN_10069ae0c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010069ae08();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar3 = *param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_3[1];
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined8 *)(lVar2 + 0x30) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10069af18(lVar2 + 0x38,param_4);
  FUN_10069af70(param_1 + 0x3d8,param_5);
  *(undefined4 *)(param_1 + 0x5a0) = param_6;
  *(undefined4 *)(param_1 + 0x5a4) = param_7;
  *(undefined1 *)(param_1 + 0x5a8) = 0;
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar4 = param_8[1];
    uVar3 = *param_8;
    *(undefined8 *)(param_1 + 0x5b8) = param_8[2];
    *(undefined8 *)(param_1 + 0x5b0) = uVar4;
    *(undefined8 *)(param_1 + 0x5a8) = uVar3;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 0x5c0) = 1;
  }
  uVar1 = *(undefined4 *)(param_8 + 4);
  *(undefined1 *)(param_1 + 0x5cc) = *(undefined1 *)((long)param_8 + 0x24);
  *(undefined4 *)(param_1 + 0x5c8) = uVar1;
  *(undefined8 *)(param_1 + 0x5d0) = param_9;
  return param_1;
}



/* Entry: 10069aef0; end: 10069af17;  */

void FUN_10069aef0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10069af18; end: 10069af3f;  */

void FUN_10069af18(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x398) = 0;
  FUN_10069af40();
  return;
}



/* Entry: 10069af40; end: 10069af53;  */

void FUN_10069af40(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x398) == '\x01') {
    FUN_10069a058();
    *(undefined1 *)(param_1 + 0x398) = 1;
    return;
  }
  return;
}



/* Entry: 10069af54; end: 10069af6f;  */

void FUN_10069af54(long param_1)

{
  FUN_10069a058();
  *(undefined1 *)(param_1 + 0x398) = 1;
  return;
}



/* Entry: 10069af70; end: 10069b137;  */

void FUN_10069af70(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010069a04c();
  FUN_10069a114();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 199) = *(undefined8 *)(param_2 + 199);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  FUN_10069a838(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  FUN_10069aa64(unaff_x19 + 0x118,unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x156) = *(undefined8 *)(unaff_x20 + 0x156);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar1;
  FUN_10069aaa0(unaff_x19 + 0x160,unaff_x20 + 0x160);
  return;
}



/* Entry: 10069b138; end: 10069b157;  */

void FUN_10069b138(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10069b158; end: 10069b1b3;  */

long FUN_10069b158(long param_1)

{
  long lStack_28;
  
  FUN_10069b138(param_1 + 0x370);
  func_0x00010069b1d4(param_1 + 0x340);
  func_0x00010069b1f4(param_1 + 0x2e0);
  FUN_10069b214(param_1 + 0x98);
  func_0x00010069b244(param_1 + 0x80);
  FUN_10069b294(param_1 + 0x60);
  FUN_10069b2d8(param_1 + 0x40);
  FUN_10069b324(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10069b1b4; end: 10069b213;  */

void FUN_10069b1b4(long param_1)

{
  if (*(char *)(param_1 + 0x398) == '\x01') {
    FUN_10069b158();
  }
  return;
}



/* Entry: 10069b214; end: 10069b293;  */

long FUN_10069b214(long param_1)

{
  if (*(char *)(param_1 + 0x238) == '\x01') {
    func_0x000104be1500(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10069b294; end: 10069b2b3;  */

void FUN_10069b294(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be1594();
  }
  return;
}



/* Entry: 10069b2b4; end: 10069b2d7;  */

void FUN_10069b2b4(void)

{
  FUN_100292090();
  FUN_10069b2f8();
  return;
}



/* Entry: 10069b2d8; end: 10069b2f7;  */

void FUN_10069b2d8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10069b2b4();
  }
  return;
}



/* Entry: 10069b2f8; end: 10069b323;  */

void FUN_10069b2f8(void)

{
  long extraout_x8;
  
  FUN_1005fb5b8();
  if (extraout_x8 != 0) {
    FUN_1006a0de8();
    FUN_10065c9dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10069b324; end: 10069b343;  */

void FUN_10069b324(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be1618();
  }
  return;
}



/* Entry: 10069b344; end: 10069b36f;  */

undefined8 FUN_10069b344(undefined8 param_1)

{
  func_0x000100690ae4();
  func_0x00010069b390(param_1);
  return param_1;
}



/* Entry: 10069b370; end: 10069b3ab;  */

void FUN_10069b370(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10069b344();
  }
  return;
}



/* Entry: 10069b3ac; end: 10069b3d7;  */

ulong FUN_10069b3ac(ulong param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x108) != 0 || *(int *)(param_2 + 0x38) != 2) {
    return 0;
  }
  lVar2 = param_3;
  func_0x00010069b3cc(param_1,param_2 + 0x18);
  FUN_10069b43c(*(undefined8 *)(lVar2 + 0x68));
  FUN_1006933e4();
  if ((int)param_1 != 0) {
    if (((*(byte *)(param_3 + 0x60) >> 2 & 1) == 0) ||
       (*(int *)(*(long *)(param_3 + 0x78) + 0xa8) != 1)) {
      param_1 = 0;
    }
    else {
      param_3 = param_3 + 0x50;
      func_0x000107c32558(param_3);
      uVar1 = (uint)param_3;
      func_0x000107c32434();
      param_1 = (ulong)(uVar1 ^ 1);
    }
  }
  return param_1;
}



/* Entry: 10069b3d8; end: 10069b43b;  */

void FUN_10069b3d8(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010069b3cc();
  FUN_10069b43c(*(undefined8 *)(lVar1 + 0x68));
  FUN_1006933e4();
  if (((param_1 != 0) && ((*(byte *)(param_3 + 0x60) >> 2 & 1) != 0)) &&
     (*(int *)(*(long *)(param_3 + 0x78) + 0xa8) == 1)) {
    func_0x000107c32558(param_3 + 0x50);
    func_0x000107c32434();
  }
  return;
}



/* Entry: 10069b43c; end: 10069b487;  */

void FUN_10069b43c(void)

{
  return;
}



/* Entry: 10069b488; end: 10069b4bf;  */

bool FUN_10069b488(long param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x00010069b474();
  if (unaff_x19 == param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
  }
  return bVar1;
}



/* Entry: 10069b4c0; end: 10069b563;  */

long FUN_10069b4c0(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000107c33d38(), extraout_x8 != 0)) {
    func_0x000107c33cf4();
    func_0x000107c33d0c();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000107c33d34();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000107c33d3c();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107c33d30();
        if (!(bool)uVar1) break;
        func_0x000107c33cf0();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000107c33d2c();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 10069b564; end: 10069b5a3;  */

long FUN_10069b564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  FUN_10069b4c0();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x28;
    func_0x000107c29d78(lVar1,param_3);
    if (lVar1 != 0) {
      param_1 = *(long *)(lVar1 + 0x18);
    }
  }
  return param_1;
}



/* Entry: 10069b5a4; end: 10069b5c3;  */

void FUN_10069b5a4(void)

{
  return;
}



/* Entry: 10069b5c4; end: 10069b647;  */

bool FUN_10069b5c4(long param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010069317c();
  bVar2 = ((uint)lVar3 & 0xfffffffb) == 1;
  if (bVar2) {
    func_0x00010069316c(*(undefined8 *)(param_1 + 0x28));
    lVar3 = extraout_x9;
    if (!bVar2) {
      lVar3 = extraout_x8;
    }
    if (*(int *)(lVar3 + 0xac) == 4) {
      ppuVar1 = &PTR_PTR_113286e08;
      if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_1 + 0x30);
      }
      if (((ulong)ppuVar1[2] & 1) != 0) {
        if ((*(byte *)(lVar3 + 0x10) >> 6 & 1) == 0) {
          return true;
        }
        return *(int *)(*(long *)(lVar3 + 0x98) + 0x1c) != 1;
      }
    }
  }
  return false;
}



/* Entry: 10069b648; end: 10069b653;  */

void FUN_10069b648(void)

{
  return;
}



/* Entry: 10069b654; end: 10069b72b;  */

undefined4 FUN_10069b654(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 auStack_60 [32];
  
  uVar5 = *(undefined ***)(param_2 + 0x80) == (undefined **)0x0;
  ppuVar2 = &PTR_PTR_113286e08;
  if (!(bool)uVar5) {
    ppuVar2 = *(undefined ***)(param_2 + 0x80);
  }
  ppuVar8 = ppuVar2 + 0x1e;
  FUN_10069b648(*ppuVar8);
  ppuVar3 = ppuVar8;
  if (!(bool)uVar5) {
    ppuVar3 = extraout_x9;
  }
  iVar4 = *(int *)(ppuVar2 + 0x1f);
  ppuVar1 = ppuVar3 + iVar4;
  FUN_1005f6fa4(auStack_60);
  for (lVar10 = (long)iVar4 << 3; ppuVar9 = ppuVar1, lVar10 != 0; lVar10 = lVar10 + -8) {
    FUN_10069c3b4(*ppuVar3);
    uVar7 = 0;
    if (!(bool)uVar5) {
      uVar7 = extraout_x8;
    }
    func_0x000107c32570();
    ppuVar9 = ppuVar3;
    if ((uVar7 & 1) != 0) break;
    ppuVar3 = ppuVar3 + 1;
  }
  FUN_10069b75c();
  FUN_10069b648(ppuVar2[0x1e]);
  if (!(bool)uVar5) {
    ppuVar8 = extraout_x9_00;
  }
  if (ppuVar9 == ppuVar8 + *(int *)(ppuVar2 + 0x1f)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*ppuVar9 + 0x20);
  }
  return uVar6;
}



/* Entry: 10069b72c; end: 10069b75b;  */

bool FUN_10069b72c(int param_1,undefined8 param_2,int param_3)

{
  if (param_3 != -1) {
    FUN_10069b654();
    return param_3 <= param_1;
  }
  return false;
}



/* Entry: 10069b75c; end: 10069b763;  */

void FUN_10069b75c(void)

{
  FUN_1001a3db4(&stack0x00000008);
  FUN_100067de0(&stack0x00000010);
  return;
}



/* Entry: 10069b764; end: 10069b79b;  */

bool FUN_10069b764(long param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x00010069b474();
  if (unaff_x19 == param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x18) == 1;
  }
  return bVar1;
}


