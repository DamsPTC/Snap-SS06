/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107462460; end: 10746257f;  */

void FUN_107462460(long param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long lVar7;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  
  func_0x000107469330();
  uVar5 = *(ulong *)(param_1 + 8);
  bVar3 = (ulong)unaff_x19[2] <= uVar5;
  bVar4 = uVar5 == unaff_x19[2];
  if (bVar3) {
    lVar7 = *unaff_x19;
    func_0x0001074692ac(0x333333333333333);
    if (bVar3 && !bVar4) {
      FUN_1074625a0();
LAB_10746257c:
      func_0x000104bd35f4();
      func_0x000104c318bc();
      func_0x000107469810();
      return;
    }
    func_0x000107468f94();
    uVar1 = extraout_x10;
    if (0x199999999999998 < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_10746257c;
      lVar6 = uVar1 * 0x50;
      __Znwm();
    }
    lVar6 = lVar6 + (uVar5 - lVar7);
    FUN_107462580(lVar6);
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar9 = lVar6 + ((lVar2 - lVar8) / -0x50) * 0x50;
    for (lVar7 = lVar8; lVar7 != lVar2; lVar7 = lVar7 + 0x50) {
      FUN_107462580(lVar9,lVar7);
      lVar9 = lVar9 + 0x50;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0x50) {
      lVar9 = lVar8;
      func_0x000104c2f714();
    }
    lVar6 = lVar6 + 0x50;
    func_0x000107469824(0x50);
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  else {
    FUN_107462580();
    lVar6 = uVar5 + 0x50;
  }
  unaff_x19[1] = lVar6;
  return;
}



/* Entry: 107462580; end: 10746259f;  */

void FUN_107462580(void)

{
  func_0x000104c318bc();
  func_0x000107469810();
  return;
}



/* Entry: 1074625a0; end: 1074625ab;  */

/* WARNING: Possible PIC construction at 0x0001074625c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074625c4) */

long FUN_1074625a0(long param_1)

{
  func_0x000107468d68();
  func_0x000107468ef8(param_1 + 0x18);
  func_0x0001074625f8();
  return param_1;
}



/* Entry: 1074625ac; end: 10746262b;  */

/* WARNING: Possible PIC construction at 0x0001074625c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074625c4) */

long FUN_1074625ac(long param_1)

{
  func_0x000107468ef8(param_1 + 0x18);
  func_0x0001074625f8();
  return param_1;
}



/* Entry: 10746262c; end: 107462633;  */

void FUN_10746262c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107468f7c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x000104c2f714(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107462634; end: 10746266f;  */

void FUN_107462634(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107468f7c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x000104c2f714(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107462670; end: 1074627c7;  */

void FUN_107462670(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  plVar10 = param_1;
  func_0x00010746948c();
  plVar10[3] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = (long *)(param_2 + 0x10);
  uStack_48 = extraout_x8;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    uStack_a0 = plVar10[10];
    uStack_a8 = plVar10[9];
    if (plVar10[10] != 0) {
      do {
        func_0x000107469668();
      } while (extraout_w10 != 0);
    }
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x000107468fb0();
    func_0x0001074693f8();
  }
  plVar10 = (long *)(param_3 + 0x10);
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    uStack_a0 = plVar10[10];
    uStack_a8 = plVar10[9];
    if (plVar10[10] != 0) {
      do {
        func_0x000107469668();
      } while (extraout_w10_00 != 0);
    }
    uStack_58 = 0;
    uStack_50 = 1;
    func_0x000107468fb0();
    FUN_107463120();
  }
  lVar8 = param_4[1];
  for (lVar9 = *param_4; lVar9 != lVar8; lVar9 = lVar9 + 0x50) {
    func_0x00010746969c();
    uStack_50 = 0;
    func_0x000107468fb0();
    func_0x0001074693f8();
  }
  lVar8 = param_4[4];
  for (lVar9 = param_4[3]; bVar5 = lVar9 == lVar8, !bVar5; lVar9 = lVar9 + 0x50) {
    func_0x00010746969c();
    uStack_50 = 1;
    func_0x000107468fb0();
    func_0x0001074693f8();
  }
  func_0x0001074691cc(uStack_48);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_107463120(&uStack_a8);
  plVar10 = param_1;
  FUN_107462a28();
  func_0x000107469138();
  func_0x000107469330();
  plVar10 = (long *)plVar10[1];
  bVar4 = (long *)param_1[2] <= plVar10;
  bVar5 = plVar10 == (long *)param_1[2];
  if (bVar4) {
    lVar8 = *param_1;
    plVar6 = plVar10;
    func_0x0001074692ac(0xaaaaaaaaaaaaaaa);
    if (bVar4 && !bVar5) {
      FUN_107463114();
LAB_1074628e4:
      func_0x000104bd35f4();
      lVar9 = *plVar6;
      for (lVar8 = plVar6[1]; lVar8 != lVar9; lVar8 = lVar8 + -0x78) {
        FUN_107463120(lVar8 + -0x60);
      }
      plVar6[1] = lVar9;
      return;
    }
    func_0x000107468f94();
    uVar2 = extraout_x10;
    if (0x555555555555554 < extraout_x9) {
      uVar2 = extraout_x8_00;
    }
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      if (extraout_x8_00 < uVar2) goto LAB_1074628e4;
      lVar7 = uVar2 * 0x18;
      __Znwm();
    }
    lVar1 = (long)plVar10 + (lVar7 - lVar8);
    FUN_10739f390(lVar1,lVar9);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar8 = lVar1 + ((lVar3 - lVar7) / -0x18) * 0x18;
    for (lVar9 = lVar7; lVar9 != lVar3; lVar9 = lVar9 + 0x18) {
      FUN_10739f390(lVar8,lVar9);
      lVar8 = lVar8 + 0x18;
    }
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x18) {
      lVar8 = lVar7;
      func_0x00010724e5f4();
    }
    plVar10 = (long *)(lVar1 + 0x18);
    func_0x000107469824(0x18);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  else {
    FUN_10739f390(plVar10,lVar9);
    plVar10 = plVar10 + 3;
  }
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 1074627c8; end: 1074628e7;  */

void FUN_1074627c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long lVar9;
  long *unaff_x19;
  long lVar10;
  
  func_0x000107469330();
  plVar6 = *(long **)(param_1 + 8);
  bVar4 = (long *)unaff_x19[2] <= plVar6;
  bVar5 = plVar6 == (long *)unaff_x19[2];
  if (bVar4) {
    lVar9 = *unaff_x19;
    plVar7 = plVar6;
    func_0x0001074692ac(0xaaaaaaaaaaaaaaa);
    if (bVar4 && !bVar5) {
      FUN_107463114();
LAB_1074628e4:
      func_0x000104bd35f4();
      lVar9 = *plVar7;
      for (lVar8 = plVar7[1]; lVar8 != lVar9; lVar8 = lVar8 + -0x78) {
        FUN_107463120(lVar8 + -0x60);
      }
      plVar7[1] = lVar9;
      return;
    }
    func_0x000107468f94();
    uVar2 = extraout_x10;
    if (0x555555555555554 < extraout_x9) {
      uVar2 = extraout_x8;
    }
    if (uVar2 == 0) {
      lVar8 = 0;
    }
    else {
      if (extraout_x8 < uVar2) goto LAB_1074628e4;
      lVar8 = uVar2 * 0x18;
      __Znwm();
    }
    lVar1 = (long)plVar6 + (lVar8 - lVar9);
    FUN_10739f390(lVar1);
    lVar10 = *unaff_x19;
    lVar3 = unaff_x19[1];
    lVar8 = lVar1 + ((lVar3 - lVar10) / -0x18) * 0x18;
    for (lVar9 = lVar10; lVar9 != lVar3; lVar9 = lVar9 + 0x18) {
      FUN_10739f390(lVar8,lVar9);
      lVar8 = lVar8 + 0x18;
    }
    for (; lVar10 != lVar3; lVar10 = lVar10 + 0x18) {
      lVar8 = lVar10;
      func_0x00010724e5f4();
    }
    plVar6 = (long *)(lVar1 + 0x18);
    func_0x000107469824(0x18);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  else {
    FUN_10739f390();
    plVar6 = plVar6 + 3;
  }
  unaff_x19[1] = (long)plVar6;
  return;
}



/* Entry: 1074628e8; end: 107462923;  */

void FUN_1074628e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x78) {
    FUN_107463120(lVar2 + -0x60);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 107462924; end: 10746297b;  */

void FUN_107462924(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f88();
  func_0x0001074691fc();
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (uVar1 != 0xffffffff) {
    func_0x000107469714((&PTR_DAT_1109b2910)[uVar1]);
    *(uint *)(unaff_x19 + 0x58) = uVar1;
  }
  *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(unaff_x20 + 0x60);
  return;
}



/* Entry: 10746297c; end: 107462a27;  */

void FUN_10746297c(long param_1)

{
  ulong uVar1;
  
  FUN_107463120(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x27) * 8) +
                (*(ulong *)(param_1 + 0x20) % 0x27) * 0x68 + 8);
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x4d < uVar1) {
    func_0x000107469394(*(undefined8 *)(param_1 + 8));
    func_0x00010746949c();
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x27;
  }
  return;
}



/* Entry: 107462a28; end: 107462b3f;  */

void FUN_107462a28(long param_1)

{
  long *plVar1;
  ulong extraout_x8;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  func_0x00010746985c();
  plVar5 = (long *)(*(long *)(param_1 + 8) + (extraout_x8 / 0x27) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(*plVar5 + (extraout_x8 % 0x27) * 0x68);
  }
  plVar1 = unaff_x19;
  FUN_107462f18();
  do {
    plVar8 = plVar7 + -0x1fb;
    do {
      if (plVar7 == plVar1) {
        unaff_x19[5] = 0;
        puVar4 = (undefined8 *)unaff_x19[1];
        while( true ) {
          puVar6 = (undefined8 *)unaff_x19[2];
          uVar2 = (long)puVar6 - (long)puVar4 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(unaff_x19[1] + 8);
          unaff_x19[1] = (long)puVar4;
        }
        if (uVar2 == 1) {
          lVar3 = 0x13;
        }
        else {
          if (uVar2 != 2) goto LAB_107462b08;
          lVar3 = 0x27;
        }
        unaff_x19[4] = lVar3;
LAB_107462b08:
        while (puVar4 != puVar6) {
          func_0x000107469694();
        }
        lVar3 = unaff_x19[2];
        while (lVar3 != unaff_x19[1]) {
          lVar3 = lVar3 + -8;
          unaff_x19[2] = lVar3;
        }
        if (*unaff_x19 != 0) {
          __ZdlPv();
        }
        return;
      }
      func_0x0001074693f8();
      plVar8 = plVar8 + 0xd;
      plVar7 = plVar7 + 0xd;
    } while ((long *)*plVar5 != plVar8);
    plVar5 = plVar5 + 1;
    plVar7 = (long *)*plVar5;
  } while( true );
}



/* Entry: 107462b40; end: 107462bcb;  */

void FUN_107462b40(long param_1)

{
  long unaff_x19;
  
  func_0x0001074692a0();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 107462bcc; end: 107462be7;  */

long FUN_107462bcc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x27 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 107462be8; end: 107462f17;  */

void FUN_107462be8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  func_0x00010746985c();
  if (0x26 < extraout_x8) {
    unaff_x19[4] = extraout_x8 - 0x27;
    lVar7 = *(long *)unaff_x19[1];
    unaff_x19[1] = (long *)unaff_x19[1] + 1;
    puVar13 = unaff_x19;
    func_0x00010746988c();
    func_0x000107468f88();
    puVar10 = (undefined8 *)puVar13[2];
    bVar4 = (undefined8 *)puVar13[3] <= puVar10;
    bVar5 = puVar10 == (undefined8 *)puVar13[3];
    if (bVar5) {
      func_0x000107469368();
      if (!bVar4 || bVar5) {
        func_0x00010746935c();
        uVar8 = extraout_x8_00;
        if (bVar5) {
          uVar8 = 1;
        }
        FUN_107462fe0(&stack0x00000000,uVar8,uVar8 >> 2);
        FUN_1074630a0(&stack0x00000000,unaff_x19[1],unaff_x19[2]);
        func_0x000107468b68();
        func_0x000107463060();
        puVar10 = (undefined8 *)unaff_x19[2];
      }
      else {
        func_0x000107468bb8();
        if (!bVar5) {
          func_0x000107468d74();
          lVar7 = unaff_x19[1];
        }
        puVar10 = (undefined8 *)(unaff_x21 + unaff_x22);
        unaff_x19[1] = lVar7 + unaff_x23 * 8;
      }
    }
    *puVar10 = unaff_x20;
    unaff_x19[2] = puVar10 + 1;
    return;
  }
  puVar10 = (undefined8 *)unaff_x19[1];
  puVar13 = (undefined8 *)unaff_x19[2];
  puVar12 = (undefined8 *)*unaff_x19;
  puVar14 = unaff_x19 + 3;
  puVar11 = (undefined8 *)*puVar14;
  if ((ulong)((long)puVar13 - (long)puVar10) < (ulong)((long)puVar11 - (long)puVar12)) {
    uVar6 = 0xfd8;
    __Znwm();
    if (puVar11 == puVar13) {
      if (puVar10 == puVar12) {
        lVar7 = (long)puVar11 - (long)puVar10 >> 2;
        if (puVar13 == puVar10) {
          lVar7 = 1;
        }
        FUN_107462fe0(&puStack_90,lVar7,lVar7 + 3U >> 2,puVar14);
        FUN_1074630a0(&puStack_90,unaff_x19[1],unaff_x19[2]);
        puVar13 = (undefined8 *)unaff_x19[1];
        puVar10 = (undefined8 *)*unaff_x19;
        puVar11 = (undefined8 *)unaff_x19[3];
        puVar14 = (undefined8 *)unaff_x19[2];
        unaff_x19[1] = puStack_88;
        *unaff_x19 = puStack_90;
        unaff_x19[3] = puStack_78;
        unaff_x19[2] = puStack_80;
        puStack_90 = puVar10;
        puStack_88 = puVar13;
        puStack_80 = puVar14;
        puStack_78 = puVar11;
        func_0x000107469678();
        puVar10 = (undefined8 *)unaff_x19[1];
      }
      puVar10[-1] = uVar6;
      unaff_x19[1] = puVar10;
      FUN_107462f50();
    }
    else {
      *puVar13 = uVar6;
      unaff_x19[2] = puVar13 + 1;
    }
  }
  else {
    lVar7 = (long)puVar11 - (long)puVar12 >> 2;
    if (puVar11 == puVar12) {
      lVar7 = 1;
    }
    FUN_107462fe0(&puStack_b8,lVar7,(long)puVar13 - (long)puVar10 >> 3,puVar14);
    uVar6 = 0xfd8;
    __Znwm();
    puVar10 = puStack_b0;
    puStack_c8 = unaff_x19 + 5;
    uStack_c0 = 0x27;
    puVar13 = puStack_b8;
    puVar14 = puStack_a0;
    if (puStack_a8 == puStack_a0) {
      uStack_d0 = uVar6;
      if (puStack_b0 < puStack_b8 || (long)puStack_b0 - (long)puStack_b8 == 0) {
        uVar8 = (long)puStack_a8 - (long)puStack_b8 >> 2;
        if ((long)puStack_a8 - (long)puStack_b8 == 0) {
          uVar8 = 1;
        }
        FUN_107462fe0(&puStack_90,uVar8,uVar8 >> 2,uStack_98);
        FUN_1074630a0(&puStack_90,puStack_b0,puStack_a8);
        puVar14 = puStack_78;
        puVar11 = puStack_80;
        puVar13 = puStack_90;
        puStack_b0 = puStack_88;
        puStack_90 = puStack_b8;
        puStack_88 = puVar10;
        puStack_80 = puStack_a8;
        puStack_78 = puStack_a0;
        func_0x000107469678();
        puStack_a8 = puVar11;
      }
      else {
        puVar10 = puStack_b0 + (((long)puStack_b0 - (long)puStack_b8 >> 3) + 1) / -2;
        lVar7 = (long)puStack_a8 - (long)puStack_b0;
        if (lVar7 != 0) {
          _memmove(puVar10,puStack_b0,lVar7);
        }
        puStack_a8 = (undefined8 *)((long)puVar10 + lVar7);
        puStack_b0 = puVar10;
      }
    }
    puVar10 = puStack_a8 + 1;
    *puStack_a8 = uVar6;
    uStack_d0 = 0;
    puVar11 = (undefined8 *)unaff_x19[2];
    while (puVar12 = puStack_b0, puVar9 = (undefined8 *)unaff_x19[1], puVar11 != puVar9) {
      puVar9 = puStack_b0;
      if (puStack_b0 == puVar13) {
        if (puVar10 < puVar14) {
          lVar7 = (long)puVar10 - (long)puVar13;
          puVar12 = puVar10 + (((long)puVar14 - (long)puVar10 >> 3) + 1) / 2;
          puVar9 = (undefined8 *)((long)puVar12 - ((long)puVar10 - (long)puVar13));
          puVar10 = puVar12;
          if (lVar7 != 0) {
            _memmove(puVar9,puStack_b0,lVar7);
          }
        }
        else {
          lVar7 = (long)puVar14 - (long)puVar13 >> 2;
          if ((long)puVar14 - (long)puVar13 == 0) {
            lVar7 = 1;
          }
          FUN_107462fe0(&puStack_90,lVar7,lVar7 + 3U >> 2,uStack_98);
          FUN_1074630a0(&puStack_90,puVar13,puVar10);
          puVar3 = puStack_78;
          puVar2 = puStack_80;
          puVar9 = puStack_88;
          puVar1 = puStack_90;
          puStack_88 = puVar12;
          puStack_90 = puVar13;
          puStack_80 = puVar10;
          puStack_78 = puVar14;
          func_0x000107469678();
          puVar10 = puVar2;
          puVar13 = puVar1;
          puVar14 = puVar3;
        }
      }
      puVar11 = puVar11 + -1;
      puStack_b0 = puVar9 + -1;
      *puStack_b0 = *puVar11;
    }
    puStack_b8 = (undefined8 *)*unaff_x19;
    *unaff_x19 = puVar13;
    unaff_x19[1] = puStack_b0;
    puStack_a0 = (undefined8 *)unaff_x19[3];
    puStack_a8 = (undefined8 *)unaff_x19[2];
    unaff_x19[2] = puVar10;
    unaff_x19[3] = puVar14;
    puStack_b0 = puVar9;
    func_0x000107463038(&uStack_d0);
    func_0x000107463060(&puStack_b8);
  }
  return;
}



/* Entry: 107462f18; end: 107462f4f;  */

long FUN_107462f18(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x27) * 8) + (uVar1 % 0x27) * 0x68;
}



/* Entry: 107462f50; end: 107462fdf;  */

void FUN_107462f50(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010746988c();
  func_0x000107468f88();
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  bVar1 = *(undefined8 **)(param_1 + 0x18) <= puVar3;
  bVar2 = puVar3 == *(undefined8 **)(param_1 + 0x18);
  if (bVar2) {
    func_0x000107469368();
    if (!bVar1 || bVar2) {
      func_0x00010746935c();
      FUN_107462fe0();
      FUN_1074630a0();
      func_0x000107468b68();
      func_0x000107463060();
      puVar3 = *(undefined8 **)(unaff_x19 + 0x10);
    }
    else {
      func_0x000107468bb8();
      if (!bVar2) {
        func_0x000107468d74();
        param_2 = *(long *)(unaff_x19 + 8);
      }
      puVar3 = (undefined8 *)(unaff_x21 + unaff_x22);
      *(long *)(unaff_x19 + 8) = param_2 + unaff_x23 * 8;
    }
  }
  *puVar3 = unaff_x20;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar3 + 1;
  return;
}



/* Entry: 107462fe0; end: 107463037;  */

void FUN_107462fe0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107468f88();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      func_0x0001074692a0();
      *unaff_x19 = 0;
      if (param_1 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return;
}



/* Entry: 107463038; end: 10746309f;  */

void FUN_107463038(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074692a0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074630a0; end: 1074630c7;  */

void FUN_1074630a0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1074630c8; end: 107463113;  */

long FUN_1074630c8(long param_1)

{
  func_0x0001074630f4(param_1 + 8);
  *(undefined4 *)(param_1 + 0x58) = 1;
  return param_1;
}



/* Entry: 107463114; end: 10746311f;  */

void FUN_107463114(long param_1)

{
  undefined1 uStack_31;
  
  func_0x000107468d68();
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b2900)[*(uint *)(param_1 + 0x50)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 107463120; end: 107463173;  */

void FUN_107463120(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b2900)[*(uint *)(param_1 + 0x50)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 107463174; end: 10746319f;  */

void FUN_107463174(undefined8 param_1,long param_2)

{
  func_0x00010725c0a0();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074631a0; end: 10746336f;  */

void FUN_1074631a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  func_0x000107469330();
  puVar7 = (ulong *)(param_1 + 0x10);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if (puVar11 < (undefined8 *)*puVar7) {
    uVar14 = *unaff_x21;
    puVar11[1] = unaff_x21[1];
    *puVar11 = uVar14;
    FUN_107463370(puVar11 + 2,param_3);
    puVar11 = puVar11 + 0xf;
    unaff_x19[1] = (long)puVar11;
  }
  else {
    lVar13 = *unaff_x19;
    uVar1 = ((long)puVar11 - lVar13) / 0x78 + 1;
    if (0x222222222222222 < uVar1) {
      FUN_107463454();
LAB_107463350:
      func_0x000104bd35f4();
      FUN_107463408(&lStack_88);
      func_0x000107469138();
      func_0x000107468f88();
      func_0x0001074691fc();
      uVar4 = *(uint *)(param_1 + 0x58);
      if (uVar4 != 0xffffffff) {
        func_0x000107469714((&PTR_FUN_1109b2920)[uVar4]);
        *(uint *)(unaff_x19 + 0xb) = uVar4;
      }
      *(undefined1 *)(unaff_x19 + 0xc) = *(undefined1 *)(param_1 + 0x60);
      return;
    }
    uVar5 = ((long)*puVar7 - lVar13) / 0x78;
    uVar8 = uVar5 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x111111111111110 < uVar5) {
      uVar8 = 0x222222222222222;
    }
    puStack_68 = puVar7;
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      if (0x222222222222222 < uVar8) goto LAB_107463350;
      lVar10 = uVar8 * 0x78;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar10 + ((long)puVar11 - lVar13));
    lVar12 = lVar10 + uVar8 * 0x78;
    uVar14 = *unaff_x21;
    puVar2[1] = unaff_x21[1];
    *puVar2 = uVar14;
    lStack_88 = lVar10;
    puStack_80 = puVar2;
    puStack_78 = puVar2;
    lStack_70 = lVar12;
    FUN_107463370(puVar2 + 2,param_3);
    puVar9 = (undefined8 *)*unaff_x19;
    puVar3 = (undefined8 *)unaff_x19[1];
    lVar6 = ((long)puVar3 - (long)puVar9) / -0x78;
    lVar13 = (long)puVar11 + lVar10 + (lVar6 * 0x78 - lVar13) + 0x10;
    for (puVar11 = puVar9; puVar11 != puVar3; puVar11 = puVar11 + 0xf) {
      uVar14 = *puVar11;
      *(undefined8 *)(lVar13 + -8) = puVar11[1];
      *(undefined8 *)(lVar13 + -0x10) = uVar14;
      FUN_107462924(lVar13,puVar11 + 2);
      lVar13 = lVar13 + 0x78;
    }
    for (; puVar9 != puVar3; puVar9 = puVar9 + 0xf) {
      FUN_107463120(puVar9 + 3);
    }
    puVar11 = puVar2 + 0xf;
    lStack_88 = *unaff_x19;
    *unaff_x19 = (long)(puVar2 + lVar6 * 0xf);
    unaff_x19[1] = (long)puVar11;
    lStack_70 = unaff_x19[2];
    unaff_x19[2] = lVar12;
    puStack_80 = (undefined8 *)lStack_88;
    puStack_78 = (undefined8 *)lStack_88;
    FUN_107463408(&lStack_88);
  }
  unaff_x19[1] = (long)puVar11;
  return;
}



/* Entry: 107463370; end: 1074633d3;  */

void FUN_107463370(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f88();
  func_0x0001074691fc();
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (uVar1 != 0xffffffff) {
    func_0x000107469714((&PTR_FUN_1109b2920)[uVar1]);
    *(uint *)(unaff_x19 + 0x58) = uVar1;
  }
  *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(unaff_x20 + 0x60);
  return;
}



/* Entry: 1074633d4; end: 107463407;  */

void FUN_1074633d4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x000107469668(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107463408; end: 107463453;  */

long * FUN_107463408(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x78;
    FUN_107463120(lVar1 + -0x60);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107463454; end: 10746345f;  */

void FUN_107463454(ulong param_1)

{
  long *extraout_x8;
  long lVar1;
  
  func_0x000107468d68();
  lVar1 = param_1 << 3;
  if (param_1 >> 0x3d != 0) {
    lVar1 = -1;
  }
  __Znam();
  _bzero();
  *extraout_x8 = lVar1;
  return;
}



/* Entry: 107463460; end: 1074634a3;  */

void FUN_107463460(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_2 << 3;
  if (param_2 >> 0x3d != 0) {
    lVar1 = -1;
  }
  __Znam();
  _bzero();
  *param_1 = lVar1;
  return;
}



/* Entry: 1074634a4; end: 10746397f;  */

void FUN_1074634a4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  long lVar13;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar15;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar16;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  long *plVar17;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar18;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  ulong extraout_x14;
  ulong uVar20;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar21;
  int extraout_w16;
  long lVar22;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x000107469734();
  func_0x000107468e04();
LAB_1074634bc:
  func_0x000107468df0();
LAB_1074634c0:
  while( true ) {
    func_0x000107468dc8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001074636bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de6f3a1)[extraout_x8] * 4 + 0x1074636c0))();
      return;
    }
    bVar8 = 0x16 < extraout_x8;
    cVar10 = SBORROW8(extraout_x8,0x17);
    cVar11 = (long)(extraout_x8 - 0x17) < 0;
    uVar12 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar12 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar9 = 0;
        if ((bool)uVar12) {
          return;
        }
        while (func_0x000107469534(), !(bool)uVar9) {
          iVar6 = *(int *)(unaff_x20[1] + 0xc) * *(int *)(unaff_x20[1] + 8);
          iVar7 = *(int *)(*unaff_x20 + 0xc) * *(int *)(*unaff_x20 + 8);
          uVar9 = iVar6 == iVar7;
          if (iVar7 < iVar6) {
            do {
              func_0x00010746946c();
              uVar9 = extraout_w12_00 == extraout_w15_00 * extraout_w14_01;
            } while (!(bool)uVar9 && extraout_w15_00 * extraout_w14_01 <= extraout_w12_00);
            *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
          }
          func_0x0001074694f8();
        }
        return;
      }
      if ((bool)uVar12) {
        return;
      }
      func_0x000107469594();
      goto LAB_10746372c;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001074690a0();
      lVar22 = extraout_x8_01;
      lVar14 = extraout_x9;
      lVar16 = extraout_x10_06;
      lVar13 = extraout_x9;
      goto joined_r0x000107463790;
    }
    func_0x000107469070();
    if (bVar8) {
      func_0x0001074690e8();
      FUN_107463980();
      func_0x000107468db4();
      FUN_107463980();
      func_0x000107469040();
      FUN_107463980();
      func_0x000107469020();
      FUN_107463980();
      func_0x000107468d8c();
    }
    else {
      func_0x000107469080();
      FUN_107463980();
    }
    func_0x000107469648();
    if ((unaff_x25 & 1) != 0) break;
    uVar4 = *(int *)(unaff_x20[-1] + 0xc) * *(int *)(unaff_x20[-1] + 8);
    uVar5 = *(int *)(extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 8);
    cVar10 = SBORROW4(uVar4,uVar5);
    cVar11 = (int)(uVar4 - uVar5) < 0;
    uVar12 = uVar4 == uVar5;
    if ((int)uVar5 < (int)uVar4) break;
    uVar4 = *(int *)(*unaff_x21 + 0xc) * *(int *)(*unaff_x21 + 8);
    uVar9 = uVar4 <= uVar5;
    cVar10 = SBORROW4(uVar5,uVar4);
    cVar11 = (int)(uVar5 - uVar4) < 0;
    uVar12 = uVar5 == uVar4;
    plVar15 = unaff_x20;
    if ((int)uVar4 < (int)uVar5) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar4 = *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8);
        uVar9 = uVar4 <= uVar5;
        cVar10 = SBORROW4(uVar5,uVar4);
        cVar11 = (int)(uVar5 - uVar4) < 0;
        uVar12 = uVar5 == uVar4;
        plVar15 = unaff_x26;
      } while ((int)uVar5 <= (int)uVar4);
    }
    else {
      do {
        func_0x000107469618();
        if ((bool)uVar9) break;
        func_0x0001074695f4();
        func_0x000107469288();
      } while ((bool)uVar12 || cVar11 != cVar10);
    }
    func_0x0001074695e8();
    plVar15 = extraout_x10_01;
    if (!(bool)uVar9) {
      do {
        func_0x000107469288();
        plVar15 = extraout_x10_02;
      } while (!(bool)uVar12 && cVar11 == cVar10);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar10 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar11 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x000107468e90();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x000107469288();
      } while ((bool)in_ZR || cVar11 != cVar10);
      do {
        func_0x000107469288();
        plVar15 = extraout_x10_03;
      } while (!(bool)in_ZR && cVar11 == cVar10);
    }
    func_0x0001074695dc();
    if (!(bool)in_ZR) {
      func_0x0001074695d0();
    }
    func_0x000107469540();
  }
  do {
    func_0x0001074694cc();
    func_0x000107469868();
  } while (!(bool)uVar12 && cVar11 == cVar10);
  func_0x000107469118();
  plVar15 = extraout_x10;
  plVar17 = unaff_x19;
  if ((bool)uVar12) {
    do {
      if (plVar17 <= plVar15) break;
      func_0x000107469450();
      plVar15 = extraout_x10_00;
      plVar17 = extraout_x11;
    } while (extraout_w13_00 * extraout_w14_00 <= extraout_w9_00);
  }
  else {
    do {
      func_0x000107469450();
    } while (extraout_w13 * extraout_w14 <= extraout_w9);
  }
  func_0x000107469624();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x0001074690d8();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_01 < *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) * *(int *)(*plVar15 + 8) <= extraout_w9_01);
  }
  func_0x0001074694ec();
  if (!(bool)in_ZR) {
    func_0x00010746960c();
  }
  func_0x000107469600();
  if ((bool)in_CY) {
    func_0x000107469158();
    FUN_107463ab4();
    func_0x0001074690c8();
    FUN_107463ab4();
    if ((int)param_1 != 0) goto LAB_10746369c;
    if ((unaff_x28 & 1) != 0) goto LAB_1074634c0;
  }
  func_0x000107468ea4();
  FUN_1074634a4();
  unaff_x25 = 0;
  goto LAB_1074634c0;
LAB_10746372c:
  func_0x000107469588();
  if ((bool)uVar12) {
    return;
  }
  iVar6 = *(int *)(extraout_x11_00[1] + 0xc) * *(int *)(extraout_x11_00[1] + 8);
  iVar7 = *(int *)(*extraout_x11_00 + 0xc) * *(int *)(*extraout_x11_00 + 8);
  cVar10 = SBORROW4(iVar6,iVar7);
  cVar11 = iVar6 - iVar7 < 0;
  uVar12 = iVar6 == iVar7;
  if (iVar7 < iVar6) {
    do {
      func_0x00010746957c();
      lVar22 = extraout_x10_04;
      plVar15 = unaff_x20;
      if ((bool)uVar12) goto LAB_107463778;
      func_0x0001074694bc();
      func_0x0001074697dc();
    } while (!(bool)uVar12 && cVar11 == cVar10);
    lVar22 = extraout_x10_05;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_107463778:
    *plVar15 = lVar22;
  }
  func_0x000107469504();
  goto LAB_10746372c;
joined_r0x000107463790:
  if (lVar13 < 0) {
    do {
      if (lVar22 < 2) {
        return;
      }
      func_0x000107468e58();
      lVar14 = extraout_x8_03;
      lVar22 = extraout_x12_00;
      lVar16 = extraout_x14_00;
      do {
        lVar22 = lVar22 + lVar16 * 8;
        lVar13 = *(long *)(lVar22 + 8);
        lVar16 = lVar16 * 2 + 2;
        cVar10 = SBORROW8(lVar16,lVar14);
        cVar11 = lVar16 - lVar14 < 0;
        bVar8 = lVar16 == lVar14;
        if (lVar16 < lVar14) {
          lVar22 = *(long *)(lVar22 + 0x10);
          iVar6 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8);
          iVar7 = *(int *)(lVar22 + 0xc) * *(int *)(lVar22 + 8);
          cVar10 = SBORROW4(iVar6,iVar7);
          cVar11 = iVar6 - iVar7 < 0;
          bVar8 = iVar6 == iVar7;
        }
        func_0x000107469090();
        lVar14 = extraout_x8_04;
        lVar22 = extraout_x12_01;
        lVar16 = extraout_x14_01;
      } while (bVar8 || cVar11 != cVar10);
      func_0x000107469570();
      if (bVar8) {
        *extraout_x9_01 = extraout_x10_08;
        lVar22 = extraout_x8_05;
      }
      else {
        func_0x000107468c34();
        lVar22 = extraout_x8_06;
        if ((cVar11 == cVar10) &&
           (func_0x000107468e2c(), lVar22 = extraout_x8_07,
           *(int *)(extraout_x11_03 + 0xc) * *(int *)(extraout_x11_03 + 8) <
           *(int *)(extraout_x13_03 + 0xc) * *(int *)(extraout_x13_03 + 8))) {
          do {
            func_0x00010746954c();
            lVar22 = extraout_x8_08;
            uVar18 = extraout_x11_04;
            puVar21 = extraout_x15;
            if (extraout_x10_09 == 0) break;
            func_0x000107468e18();
            lVar22 = extraout_x8_09;
            uVar18 = extraout_x11_05;
            puVar21 = extraout_x15_00;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 0xc) * *(int *)(extraout_x13_04 + 8));
          *puVar21 = uVar18;
        }
      }
      lVar22 = lVar22 + -1;
    } while( true );
  }
  cVar10 = SBORROW8(lVar14,lVar16);
  cVar11 = lVar14 - lVar16 < 0;
  if (lVar16 <= lVar14) {
    func_0x000107468ed8();
    if (cVar11 != cVar10) {
      param_1 = (long *)(ulong)(uint)(*(int *)(*(long *)(extraout_x11_01 + 8) + 0xc) *
                                     *(int *)(*(long *)(extraout_x11_01 + 8) + 8));
    }
    func_0x0001074694ac();
    iVar6 = *(int *)(extraout_x13_02 + 0xc) * *(int *)(extraout_x13_02 + 8);
    lVar22 = extraout_x8_02;
    lVar14 = extraout_x9_00;
    lVar16 = extraout_x10_07;
    plVar15 = extraout_x11_02;
    lVar13 = extraout_x12;
    uVar20 = extraout_x14;
    if (extraout_w16 * extraout_w15 <= iVar6) {
      do {
        plVar17 = plVar15;
        *param_1 = lVar13;
        if (extraout_x9_00 < (long)uVar20) break;
        uVar3 = uVar20 << 1 | 1;
        plVar2 = unaff_x20 + uVar3;
        uVar1 = uVar20 * 2 + 2;
        lVar19 = *plVar2;
        plVar15 = plVar2;
        lVar13 = lVar19;
        uVar20 = uVar3;
        if ((long)uVar1 < extraout_x8_02) {
          lVar13 = plVar2[1];
          plVar15 = plVar2 + 1;
          uVar20 = uVar1;
          if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
              *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8)) {
            plVar15 = plVar2;
            lVar13 = lVar19;
            uVar20 = uVar3;
          }
        }
        param_1 = plVar17;
      } while (*(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8) <= iVar6);
      *plVar17 = extraout_x13_02;
    }
  }
  lVar16 = lVar16 + -1;
  lVar13 = lVar16;
  goto joined_r0x000107463790;
LAB_10746369c:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_1074634bc;
}



/* Entry: 107463980; end: 107463a0f;  */

void FUN_107463980(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
  iVar2 = *(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 8);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      lVar8 = *param_3;
      if (*(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8) <= iVar2) {
        return;
      }
      *param_2 = lVar8;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x000107468be8(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 107463a10; end: 107463a57;  */

void FUN_107463a10(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_107463980();
  func_0x000107469140();
  func_0x000107468be8();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468c7c();
    func_0x000107468be8();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c54();
      func_0x000107468be8();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010746914c();
      }
    }
  }
  return;
}



/* Entry: 107463a58; end: 107463ab3;  */

void FUN_107463a58(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_107463a10();
  func_0x00010746951c();
  func_0x000107468be8();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468ddc();
    func_0x000107468be8();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c7c();
      func_0x000107468be8();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x000107468c54();
        func_0x000107468be8();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010746914c();
        }
      }
    }
  }
  return;
}



/* Entry: 107463ab4; end: 107463b9b;  */

void FUN_107463ab4(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x000107468d24();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107463ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de6f3a7)[extraout_x8] * 4 + 0x107463ae8))(1);
    return;
  }
  func_0x000107468da0();
  FUN_107463980();
  func_0x000107469050();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x000107469030();
    iVar1 = *(int *)(extraout_x11_00 + 0xc) * *(int *)(extraout_x11_00 + 8);
    iVar2 = *(int *)(extraout_x13 + 0xc) * *(int *)(extraout_x13 + 8);
    bVar3 = iVar1 == iVar2;
    if (iVar2 < iVar1) {
      do {
        func_0x00010746963c();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x0001074694dc();
        bVar3 = extraout_w12 == extraout_w16 * extraout_w15;
      } while (!bVar3 && extraout_w16 * extraout_w15 <= extraout_w12);
      func_0x000107469128();
      if (bVar3) {
        func_0x0001074690f8();
        return;
      }
    }
    func_0x000107469108();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 107463b9c; end: 1074640a3;  */

void FUN_107463b9c(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  long lVar14;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar15;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  int extraout_w10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar16;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar17;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar18;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar19;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar20;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  int extraout_w14_02;
  ulong extraout_x14;
  ulong uVar21;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar22;
  int extraout_w16;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x000107469734();
  func_0x000107468e04();
  do {
    func_0x000107468df0();
LAB_107463bb8:
    while( true ) {
      func_0x000107468dc8();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107463dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de6f3ad)[extraout_x8] * 4 + 0x107463dc4))();
        return;
      }
      bVar9 = 0x16 < extraout_x8;
      if ((long)extraout_x8 < 0x18) {
        uVar13 = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          uVar10 = 0;
          if ((bool)uVar13) {
            return;
          }
          while (func_0x000107469534(), !(bool)uVar10) {
            iVar4 = (*(int *)(unaff_x20[1] + 0xc) + *(int *)(unaff_x20[1] + 8)) * 2;
            iVar1 = (*(int *)(*unaff_x20 + 0xc) + *(int *)(*unaff_x20 + 8)) * 2;
            uVar10 = iVar4 == iVar1;
            if (iVar1 < iVar4) {
              do {
                func_0x00010746946c();
                iVar1 = (extraout_w15_01 + extraout_w14_02) * 2;
                uVar10 = extraout_w12_00 == iVar1;
              } while (!(bool)uVar10 && iVar1 <= extraout_w12_00);
              *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
            }
            func_0x0001074694f8();
          }
          return;
        }
        if ((bool)uVar13) {
          return;
        }
        func_0x000107469594();
        goto LAB_107463e30;
      }
      if (unaff_x22 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        func_0x0001074690a0();
        lVar23 = extraout_x8_01;
        lVar15 = extraout_x9;
        lVar17 = extraout_x10_06;
        lVar14 = extraout_x9;
        goto joined_r0x000107463e9c;
      }
      func_0x000107469070();
      if (bVar9) {
        func_0x0001074690e8();
        FUN_1074640a4();
        func_0x000107468db4();
        FUN_1074640a4();
        func_0x000107469040();
        FUN_1074640a4();
        func_0x000107469020();
        FUN_1074640a4();
        func_0x000107468d8c();
      }
      else {
        func_0x000107469080();
        FUN_1074640a4();
      }
      func_0x000107469648();
      if (((unaff_x25 & 1) != 0) ||
         (uVar7 = (*(int *)(extraout_x8_00 + 0xc) + *(int *)(extraout_x8_00 + 8)) * 2,
         (int)uVar7 < (*(int *)(unaff_x20[-1] + 0xc) + *(int *)(unaff_x20[-1] + 8)) * 2)) break;
      iVar1 = *(int *)(*unaff_x21 + 0xc) + *(int *)(*unaff_x21 + 8);
      uVar2 = iVar1 * 2;
      uVar10 = uVar2 <= uVar7;
      cVar11 = SBORROW4(uVar7,uVar2);
      cVar12 = (int)(uVar7 + iVar1 * -2) < 0;
      uVar13 = uVar7 == uVar2;
      plVar16 = unaff_x20;
      if ((int)uVar2 < (int)uVar7) {
        do {
          unaff_x26 = plVar16 + 1;
          iVar1 = *(int *)(*unaff_x26 + 0xc) + *(int *)(*unaff_x26 + 8);
          uVar2 = iVar1 * 2;
          uVar10 = uVar2 <= uVar7;
          cVar11 = SBORROW4(uVar7,uVar2);
          cVar12 = (int)(uVar7 + iVar1 * -2) < 0;
          uVar13 = uVar7 == uVar2;
          plVar16 = unaff_x26;
        } while ((int)uVar7 <= (int)uVar2);
      }
      else {
        do {
          func_0x000107469618();
          if ((bool)uVar10) break;
          func_0x0001074695f4();
          func_0x000107469268();
        } while ((bool)uVar13 || cVar12 != cVar11);
      }
      func_0x0001074695e8();
      plVar16 = extraout_x10_01;
      if (!(bool)uVar10) {
        do {
          func_0x000107469268();
          plVar16 = extraout_x10_02;
        } while (!(bool)uVar13 && cVar12 == cVar11);
      }
      while( true ) {
        in_CY = plVar16 <= unaff_x26;
        cVar11 = SBORROW8((long)unaff_x26,(long)plVar16);
        cVar12 = (long)unaff_x26 - (long)plVar16 < 0;
        in_ZR = unaff_x26 == plVar16;
        if ((bool)in_CY) break;
        func_0x000107468e90();
        do {
          unaff_x26 = unaff_x26 + 1;
          func_0x000107469268();
        } while ((bool)in_ZR || cVar12 != cVar11);
        do {
          func_0x000107469268();
          plVar16 = extraout_x10_03;
        } while (!(bool)in_ZR && cVar12 == cVar11);
      }
      func_0x0001074695dc();
      if (!(bool)in_ZR) {
        func_0x0001074695d0();
      }
      func_0x000107469540();
    }
    do {
      func_0x0001074694cc();
      iVar1 = (extraout_w11 + extraout_w10) * 2;
      bVar9 = extraout_w9 == iVar1;
    } while (extraout_w9 < iVar1);
    func_0x000107469118();
    plVar16 = extraout_x10;
    plVar18 = unaff_x19;
    if (bVar9) {
      do {
        if (plVar18 <= plVar16) break;
        func_0x000107469450();
        plVar16 = extraout_x10_00;
        plVar18 = extraout_x11;
      } while ((extraout_w13_00 + extraout_w14_00) * 2 <= extraout_w9_01);
    }
    else {
      do {
        func_0x000107469450();
      } while ((extraout_w13 + extraout_w14) * 2 <= extraout_w9_00);
    }
    func_0x000107469624();
    plVar16 = extraout_x13;
    while( true ) {
      in_CY = plVar16 <= unaff_x26;
      in_ZR = unaff_x26 == plVar16;
      if ((bool)in_CY) break;
      func_0x0001074690d8();
      do {
        unaff_x26 = unaff_x26 + 1;
        plVar16 = extraout_x13_00;
      } while (extraout_w9_02 < (*(int *)(*unaff_x26 + 0xc) + *(int *)(*unaff_x26 + 8)) * 2);
      do {
        plVar16 = plVar16 + -1;
      } while ((*(int *)(*plVar16 + 0xc) + *(int *)(*plVar16 + 8)) * 2 <= extraout_w9_02);
    }
    func_0x0001074694ec();
    if (!(bool)in_ZR) {
      func_0x00010746960c();
    }
    func_0x000107469600();
    if (!(bool)in_CY) goto LAB_107463cf4;
    func_0x000107469158();
    FUN_1074641e4();
    func_0x0001074690c8();
    FUN_1074641e4();
    if ((int)param_1 == 0) goto code_r0x000107463cf0;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_107463e30:
  func_0x000107469588();
  if ((bool)uVar13) {
    return;
  }
  iVar4 = (*(int *)(extraout_x11_00[1] + 0xc) + *(int *)(extraout_x11_00[1] + 8)) * 2;
  iVar1 = (*(int *)(*extraout_x11_00 + 0xc) + *(int *)(*extraout_x11_00 + 8)) * 2;
  uVar13 = iVar4 == iVar1;
  if (iVar1 < iVar4) {
    do {
      func_0x00010746957c();
      if ((bool)uVar13) {
        uVar13 = true;
        lVar23 = extraout_x10_04;
        plVar16 = unaff_x20;
        goto LAB_107463e84;
      }
      func_0x0001074694bc();
      iVar1 = (extraout_w15 + extraout_w14_01) * 2;
      uVar13 = extraout_w11_00 == iVar1;
    } while (!(bool)uVar13 && iVar1 <= extraout_w11_00);
    lVar23 = extraout_x10_05;
    plVar16 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_107463e84:
    *plVar16 = lVar23;
  }
  func_0x000107469504();
  goto LAB_107463e30;
joined_r0x000107463e9c:
  if (lVar14 < 0) {
    do {
      if (lVar23 < 2) {
        return;
      }
      func_0x000107468e58();
      lVar15 = extraout_x8_03;
      lVar23 = extraout_x12_00;
      lVar17 = extraout_x14_00;
      do {
        lVar23 = lVar23 + lVar17 * 8;
        lVar14 = *(long *)(lVar23 + 8);
        lVar17 = lVar17 * 2 + 2;
        cVar11 = SBORROW8(lVar17,lVar15);
        cVar12 = lVar17 - lVar15 < 0;
        bVar9 = lVar17 == lVar15;
        if (lVar17 < lVar15) {
          lVar23 = *(long *)(lVar23 + 0x10);
          iVar8 = (*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2;
          iVar4 = *(int *)(lVar23 + 0xc) + *(int *)(lVar23 + 8);
          iVar1 = iVar4 * 2;
          cVar11 = SBORROW4(iVar8,iVar1);
          cVar12 = iVar8 + iVar4 * -2 < 0;
          bVar9 = iVar8 == iVar1;
        }
        func_0x000107469090();
        lVar15 = extraout_x8_04;
        lVar23 = extraout_x12_01;
        lVar17 = extraout_x14_01;
      } while (bVar9 || cVar12 != cVar11);
      func_0x000107469570();
      if (bVar9) {
        *extraout_x9_01 = extraout_x10_08;
        lVar23 = extraout_x8_05;
      }
      else {
        func_0x000107468c34();
        lVar23 = extraout_x8_06;
        if ((cVar12 == cVar11) &&
           (func_0x000107468e2c(), lVar23 = extraout_x8_07,
           (*(int *)(extraout_x11_03 + 0xc) + *(int *)(extraout_x11_03 + 8)) * 2 <
           (*(int *)(extraout_x13_03 + 0xc) + *(int *)(extraout_x13_03 + 8)) * 2)) {
          do {
            func_0x00010746954c();
            lVar23 = extraout_x8_08;
            uVar19 = extraout_x11_04;
            puVar22 = extraout_x15;
            if (extraout_x10_09 == 0) break;
            func_0x000107468e18();
            lVar23 = extraout_x8_09;
            uVar19 = extraout_x11_05;
            puVar22 = extraout_x15_00;
          } while (extraout_w12 <
                   (*(int *)(extraout_x13_04 + 0xc) + *(int *)(extraout_x13_04 + 8)) * 2);
          *puVar22 = uVar19;
        }
      }
      lVar23 = lVar23 + -1;
    } while( true );
  }
  cVar11 = SBORROW8(lVar15,lVar17);
  cVar12 = lVar15 - lVar17 < 0;
  if (lVar17 <= lVar15) {
    func_0x000107468ed8();
    if (cVar12 != cVar11) {
      param_1 = (long *)(ulong)(uint)(*(int *)(*(long *)(extraout_x11_01 + 8) + 0xc) +
                                     *(int *)(*(long *)(extraout_x11_01 + 8) + 8));
    }
    func_0x0001074694ac();
    iVar1 = (*(int *)(extraout_x13_02 + 0xc) + *(int *)(extraout_x13_02 + 8)) * 2;
    lVar23 = extraout_x8_02;
    lVar15 = extraout_x9_00;
    lVar17 = extraout_x10_07;
    plVar16 = extraout_x11_02;
    lVar14 = extraout_x12;
    uVar21 = extraout_x14;
    if ((extraout_w16 + extraout_w15_00) * 2 <= iVar1) {
      do {
        plVar18 = plVar16;
        *param_1 = lVar14;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar6 = uVar21 << 1 | 1;
        plVar5 = unaff_x20 + uVar6;
        uVar3 = uVar21 * 2 + 2;
        lVar20 = *plVar5;
        plVar16 = plVar5;
        lVar14 = lVar20;
        uVar21 = uVar6;
        if ((long)uVar3 < extraout_x8_02) {
          lVar14 = plVar5[1];
          plVar16 = plVar5 + 1;
          uVar21 = uVar3;
          if ((*(int *)(lVar20 + 0xc) + *(int *)(lVar20 + 8)) * 2 <=
              (*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2) {
            plVar16 = plVar5;
            lVar14 = lVar20;
            uVar21 = uVar6;
          }
        }
        param_1 = plVar18;
      } while ((*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2 <= iVar1);
      *plVar18 = extraout_x13_02;
    }
  }
  lVar17 = lVar17 + -1;
  lVar14 = lVar17;
  goto joined_r0x000107463e9c;
code_r0x000107463cf0:
  if ((unaff_x28 & 1) == 0) {
LAB_107463cf4:
    func_0x000107468ea4();
    FUN_107463b9c();
    unaff_x25 = 0;
  }
  goto LAB_107463bb8;
}



/* Entry: 1074640a4; end: 10746413f;  */

void FUN_1074640a4(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x9;
  long lVar10;
  
  lVar9 = *param_2;
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 8);
  iVar3 = iVar1 * 2;
  iVar2 = *(int *)(lVar8 + 0xc) + *(int *)(lVar8 + 8);
  lVar10 = *param_3;
  iVar4 = (*(int *)(lVar10 + 0xc) + *(int *)(lVar10 + 8)) * 2;
  if (iVar2 * 2 < iVar3) {
    if (iVar3 < iVar4) {
      *param_1 = lVar10;
    }
    else {
      *param_1 = lVar9;
      *param_2 = lVar8;
      lVar9 = *param_3;
      if ((*(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 8)) * 2 <= iVar2 * 2) {
        return;
      }
      *param_2 = lVar9;
    }
    *param_3 = lVar8;
  }
  else {
    cVar5 = SBORROW4(iVar4,iVar3);
    cVar6 = iVar4 + iVar1 * -2 < 0;
    bVar7 = iVar4 == iVar3;
    if (iVar3 < iVar4) {
      *param_2 = lVar10;
      *param_3 = lVar9;
      func_0x000107468b80(*param_2);
      if (!bVar7 && cVar6 == cVar5) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 107464140; end: 107464187;  */

void FUN_107464140(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_1074640a4();
  func_0x000107469140();
  func_0x000107468b80();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468c7c();
    func_0x000107468b80();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c54();
      func_0x000107468b80();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010746914c();
      }
    }
  }
  return;
}



/* Entry: 107464188; end: 1074641e3;  */

void FUN_107464188(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_107464140();
  func_0x00010746951c();
  func_0x000107468b80();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468ddc();
    func_0x000107468b80();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c7c();
      func_0x000107468b80();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x000107468c54();
        func_0x000107468b80();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010746914c();
        }
      }
    }
  }
  return;
}



/* Entry: 1074641e4; end: 1074642cf;  */

void FUN_1074641e4(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x000107468d24();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107464214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de6f3b3)[extraout_x8] * 4 + 0x107464218))(1);
    return;
  }
  func_0x000107468da0();
  FUN_1074640a4();
  func_0x000107469050();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x000107469030();
    iVar2 = (*(int *)(extraout_x11_00 + 0xc) + *(int *)(extraout_x11_00 + 8)) * 2;
    iVar1 = (*(int *)(extraout_x13 + 0xc) + *(int *)(extraout_x13 + 8)) * 2;
    bVar3 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      do {
        func_0x00010746963c();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x0001074694dc();
        iVar1 = (extraout_w16 + extraout_w15) * 2;
        bVar3 = extraout_w12 == iVar1;
      } while (!bVar3 && iVar1 <= extraout_w12);
      func_0x000107469128();
      if (bVar3) {
        func_0x0001074690f8();
        return;
      }
    }
    func_0x000107469108();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 1074642d0; end: 10746482f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074642d0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  uint extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  int extraout_w10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar18;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar19;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  int extraout_w11;
  uint extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long *plVar20;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar21;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar22;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  int extraout_w14_02;
  ulong extraout_x14;
  ulong uVar23;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar24;
  int extraout_w16;
  long lVar25;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x000107469734();
  func_0x000107468e04();
  do {
    func_0x000107468df0();
LAB_1074642ec:
    func_0x000107468dc8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107464520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de6f3b9)[extraout_x8] * 4 + 0x107464524))();
      return;
    }
    bVar10 = 0x16 < extraout_x8;
    if ((long)extraout_x8 < 0x18) {
      uVar14 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar15 = 0;
        if (!(bool)uVar14) {
          while (func_0x000107469534(), !(bool)uVar15) {
            iVar4 = *(int *)(unaff_x20[1] + 8);
            iVar7 = *(int *)(unaff_x20[1] + 0xc);
            if (iVar4 <= iVar7) {
              iVar4 = iVar7;
            }
            iVar7 = *(int *)(*unaff_x20 + 8);
            iVar9 = *(int *)(*unaff_x20 + 0xc);
            if (iVar7 <= iVar9) {
              iVar7 = iVar9;
            }
            uVar15 = iVar4 == iVar7;
            if (iVar7 < iVar4) {
              do {
                func_0x00010746946c();
                iVar4 = extraout_w14_02;
                if (extraout_w14_02 <= extraout_w15_01) {
                  iVar4 = extraout_w15_01;
                }
                uVar15 = extraout_w12_00 == iVar4;
              } while (!(bool)uVar15 && iVar4 <= extraout_w12_00);
              *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
            }
            func_0x0001074694f8();
          }
          return;
        }
        return;
      }
      if ((bool)uVar14) {
        return;
      }
      func_0x000107469594();
      break;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001074690a0();
      lVar25 = extraout_x8_01;
      lVar17 = extraout_x9;
      lVar19 = extraout_x10_06;
      lVar16 = extraout_x9;
      goto joined_r0x000107464604;
    }
    func_0x000107469070();
    if (bVar10) {
      func_0x0001074690e8();
      FUN_107464830();
      func_0x000107468db4();
      FUN_107464830();
      func_0x000107469040();
      FUN_107464830();
      func_0x000107469020();
      FUN_107464830();
      func_0x000107468d8c();
    }
    else {
      func_0x000107469080();
      FUN_107464830();
    }
    func_0x000107469648();
    if ((unaff_x25 & 1) == 0) {
      iVar4 = *(int *)(unaff_x20[-1] + 8);
      iVar7 = *(int *)(unaff_x20[-1] + 0xc);
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
      uVar6 = *(uint *)(extraout_x8_00 + 8);
      if ((int)*(uint *)(extraout_x8_00 + 8) <= (int)*(uint *)(extraout_x8_00 + 0xc)) {
        uVar6 = *(uint *)(extraout_x8_00 + 0xc);
      }
      if (iVar4 <= (int)uVar6) {
        uVar5 = *(uint *)(*unaff_x21 + 8);
        uVar8 = *(uint *)(*unaff_x21 + 0xc);
        if ((int)uVar5 <= (int)uVar8) {
          uVar5 = uVar8;
        }
        bVar10 = uVar5 <= uVar6;
        plVar18 = unaff_x20;
        if ((int)uVar5 < (int)uVar6) {
          do {
            unaff_x26 = plVar18 + 1;
            uVar5 = *(uint *)(*unaff_x26 + 8);
            uVar8 = *(uint *)(*unaff_x26 + 0xc);
            if ((int)uVar5 <= (int)uVar8) {
              uVar5 = uVar8;
            }
            bVar11 = uVar5 <= uVar6;
            plVar18 = unaff_x26;
          } while ((int)uVar6 <= (int)uVar5);
        }
        else {
          do {
            func_0x000107469618();
            bVar11 = true;
            if (bVar10) break;
            func_0x0001074695f4();
            func_0x000107469278();
            bVar11 = extraout_w11_00 <= extraout_w9_02;
            bVar10 = bVar11;
          } while ((int)extraout_w9_02 <= (int)extraout_w11_00);
        }
        func_0x0001074695e8();
        plVar18 = extraout_x10_01;
        if (!bVar11) {
          do {
            func_0x000107469278();
            plVar18 = extraout_x10_02;
          } while (extraout_w11_01 < extraout_w9_03);
        }
        while( true ) {
          in_CY = plVar18 <= unaff_x26;
          in_ZR = unaff_x26 == plVar18;
          if ((bool)in_CY) break;
          func_0x000107468e90();
          do {
            unaff_x26 = unaff_x26 + 1;
            func_0x000107469278();
          } while (extraout_w9_04 <= extraout_w11_02);
          do {
            func_0x000107469278();
            plVar18 = extraout_x10_03;
          } while (extraout_w11_03 < extraout_w9_05);
        }
        func_0x0001074695dc();
        if (!(bool)in_ZR) {
          func_0x0001074695d0();
        }
        func_0x000107469540();
        goto LAB_1074642ec;
      }
    }
    do {
      func_0x0001074694cc();
      cVar12 = SBORROW4(extraout_w10,extraout_w11);
      cVar13 = extraout_w10 - extraout_w11 < 0;
      bVar10 = extraout_w10 == extraout_w11;
      func_0x000107469868();
    } while (!bVar10 && cVar13 == cVar12);
    func_0x000107469118();
    plVar18 = extraout_x10;
    plVar20 = unaff_x19;
    if (bVar10) {
      do {
        if (plVar20 <= plVar18) break;
        func_0x000107469450();
        iVar4 = extraout_w14_00;
        if (extraout_w14_00 <= extraout_w13_00) {
          iVar4 = extraout_w13_00;
        }
        plVar18 = extraout_x10_00;
        plVar20 = extraout_x11;
      } while (iVar4 <= extraout_w9_00);
    }
    else {
      do {
        func_0x000107469450();
        iVar4 = extraout_w14;
        if (extraout_w14 <= extraout_w13) {
          iVar4 = extraout_w13;
        }
      } while (iVar4 <= extraout_w9);
    }
    func_0x000107469624();
    plVar18 = extraout_x13;
    while( true ) {
      in_CY = plVar18 <= unaff_x26;
      in_ZR = unaff_x26 == plVar18;
      if ((bool)in_CY) break;
      func_0x0001074690d8();
      do {
        unaff_x26 = unaff_x26 + 1;
        iVar4 = *(int *)(*unaff_x26 + 8);
        iVar7 = *(int *)(*unaff_x26 + 0xc);
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
        plVar18 = extraout_x13_00;
      } while (extraout_w9_01 < iVar4);
      do {
        plVar18 = plVar18 + -1;
        iVar4 = *(int *)(*plVar18 + 8);
        iVar7 = *(int *)(*plVar18 + 0xc);
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
      } while (iVar4 <= extraout_w9_01);
    }
    func_0x0001074694ec();
    if (!(bool)in_ZR) {
      func_0x00010746960c();
    }
    func_0x000107469600();
    if (!(bool)in_CY) goto LAB_10746443c;
    func_0x000107469158();
    FUN_107464994();
    func_0x0001074690c8();
    FUN_107464994();
    if ((int)param_1 == 0) goto code_r0x000107464438;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_107464594:
  func_0x000107469588();
  if ((bool)uVar14) {
    return;
  }
  iVar4 = *(int *)(extraout_x11_00[1] + 8);
  iVar7 = *(int *)(extraout_x11_00[1] + 0xc);
  if (iVar4 <= iVar7) {
    iVar4 = iVar7;
  }
  iVar7 = *(int *)(*extraout_x11_00 + 8);
  iVar9 = *(int *)(*extraout_x11_00 + 0xc);
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  uVar14 = iVar4 == iVar7;
  if (iVar7 < iVar4) {
    do {
      func_0x00010746957c();
      if ((bool)uVar14) {
        uVar14 = 1;
        lVar25 = extraout_x10_04;
        plVar18 = unaff_x20;
        goto LAB_1074645ec;
      }
      func_0x0001074694bc();
      cVar12 = SBORROW4(extraout_w14_01,extraout_w15);
      cVar13 = extraout_w14_01 - extraout_w15 < 0;
      uVar14 = extraout_w14_01 == extraout_w15;
      func_0x0001074697dc();
    } while (!(bool)uVar14 && cVar13 == cVar12);
    lVar25 = extraout_x10_05;
    plVar18 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_1074645ec:
    *plVar18 = lVar25;
  }
  func_0x000107469504();
  goto LAB_107464594;
joined_r0x000107464604:
  if (lVar16 < 0) {
    do {
      if (lVar25 < 2) {
        return;
      }
      func_0x000107468e58();
      lVar17 = extraout_x8_03;
      lVar25 = extraout_x12_00;
      lVar19 = extraout_x14_00;
      do {
        lVar25 = lVar25 + lVar19 * 8;
        lVar16 = *(long *)(lVar25 + 8);
        lVar19 = lVar19 * 2 + 2;
        cVar12 = SBORROW8(lVar19,lVar17);
        cVar13 = lVar19 - lVar17 < 0;
        bVar10 = lVar19 == lVar17;
        if (lVar19 < lVar17) {
          lVar25 = *(long *)(lVar25 + 0x10);
          iVar4 = *(int *)(lVar16 + 8);
          iVar7 = *(int *)(lVar16 + 0xc);
          if (iVar4 <= iVar7) {
            iVar4 = iVar7;
          }
          iVar7 = *(int *)(lVar25 + 8);
          iVar9 = *(int *)(lVar25 + 0xc);
          if (iVar7 <= iVar9) {
            iVar7 = iVar9;
          }
          cVar12 = SBORROW4(iVar4,iVar7);
          cVar13 = iVar4 - iVar7 < 0;
          bVar10 = iVar4 == iVar7;
        }
        func_0x000107469090();
        lVar17 = extraout_x8_04;
        lVar25 = extraout_x12_01;
        lVar19 = extraout_x14_01;
      } while (bVar10 || cVar13 != cVar12);
      func_0x000107469570();
      if (bVar10) {
        *extraout_x9_01 = extraout_x10_08;
        lVar25 = extraout_x8_05;
      }
      else {
        func_0x000107468c34();
        lVar25 = extraout_x8_06;
        if (cVar13 == cVar12) {
          func_0x000107468e2c();
          iVar4 = *(int *)(extraout_x13_03 + 8);
          if (*(int *)(extraout_x13_03 + 8) <= *(int *)(extraout_x13_03 + 0xc)) {
            iVar4 = *(int *)(extraout_x13_03 + 0xc);
          }
          iVar7 = *(int *)(extraout_x11_03 + 8);
          if (*(int *)(extraout_x11_03 + 8) <= *(int *)(extraout_x11_03 + 0xc)) {
            iVar7 = *(int *)(extraout_x11_03 + 0xc);
          }
          lVar25 = extraout_x8_07;
          if (iVar7 < iVar4) {
            do {
              func_0x00010746954c();
              lVar25 = extraout_x8_08;
              uVar21 = extraout_x11_04;
              puVar24 = extraout_x15;
              if (extraout_x10_09 == 0) break;
              func_0x000107468e18();
              iVar4 = *(int *)(extraout_x13_04 + 8);
              if (*(int *)(extraout_x13_04 + 8) <= *(int *)(extraout_x13_04 + 0xc)) {
                iVar4 = *(int *)(extraout_x13_04 + 0xc);
              }
              lVar25 = extraout_x8_09;
              uVar21 = extraout_x11_05;
              puVar24 = extraout_x15_00;
            } while (extraout_w12 < iVar4);
            *puVar24 = uVar21;
          }
        }
      }
      lVar25 = lVar25 + -1;
    } while( true );
  }
  cVar12 = SBORROW8(lVar17,lVar19);
  cVar13 = lVar17 - lVar19 < 0;
  if (lVar19 <= lVar17) {
    func_0x000107468ed8();
    if (cVar13 != cVar12) {
      uVar6 = *(uint *)(*(long *)(extraout_x11_01 + 8) + 8);
      uVar5 = *(uint *)(*(long *)(extraout_x11_01 + 8) + 0xc);
      if ((int)uVar6 <= (int)uVar5) {
        uVar6 = uVar5;
      }
      param_1 = (long *)(ulong)uVar6;
    }
    func_0x0001074694ac();
    iVar4 = extraout_w15_00;
    if (extraout_w15_00 <= extraout_w16) {
      iVar4 = extraout_w16;
    }
    iVar7 = *(int *)(extraout_x13_02 + 8);
    if (*(int *)(extraout_x13_02 + 8) <= *(int *)(extraout_x13_02 + 0xc)) {
      iVar7 = *(int *)(extraout_x13_02 + 0xc);
    }
    lVar25 = extraout_x8_02;
    lVar17 = extraout_x9_00;
    lVar19 = extraout_x10_07;
    plVar18 = extraout_x11_02;
    lVar16 = extraout_x12;
    uVar23 = extraout_x14;
    if (iVar4 <= iVar7) {
      do {
        plVar20 = plVar18;
        *param_1 = lVar16;
        if (extraout_x9_00 < (long)uVar23) break;
        uVar3 = uVar23 << 1 | 1;
        plVar2 = unaff_x20 + uVar3;
        uVar1 = uVar23 * 2 + 2;
        lVar22 = *plVar2;
        plVar18 = plVar2;
        lVar16 = lVar22;
        uVar23 = uVar3;
        if ((long)uVar1 < extraout_x8_02) {
          lVar16 = plVar2[1];
          iVar4 = *(int *)(lVar22 + 8);
          if (*(int *)(lVar22 + 8) <= *(int *)(lVar22 + 0xc)) {
            iVar4 = *(int *)(lVar22 + 0xc);
          }
          iVar9 = *(int *)(lVar16 + 8);
          if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
            iVar9 = *(int *)(lVar16 + 0xc);
          }
          plVar18 = plVar2 + 1;
          uVar23 = uVar1;
          if (iVar4 <= iVar9) {
            plVar18 = plVar2;
            lVar16 = lVar22;
            uVar23 = uVar3;
          }
        }
        iVar4 = *(int *)(lVar16 + 8);
        if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
          iVar4 = *(int *)(lVar16 + 0xc);
        }
        param_1 = plVar20;
      } while (iVar4 <= iVar7);
      *plVar20 = extraout_x13_02;
    }
  }
  lVar19 = lVar19 + -1;
  lVar16 = lVar19;
  goto joined_r0x000107464604;
code_r0x000107464438:
  if ((unaff_x28 & 1) == 0) {
LAB_10746443c:
    func_0x000107468ea4();
    FUN_1074642d0();
    unaff_x25 = 0;
  }
  goto LAB_1074642ec;
}



/* Entry: 107464830; end: 1074648d3;  */

void FUN_107464830(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long lVar6;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar5 + 8);
  if (*(int *)(lVar5 + 8) <= *(int *)(lVar5 + 0xc)) {
    iVar3 = *(int *)(lVar5 + 0xc);
  }
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar4 + 8) <= *(int *)(lVar4 + 0xc)) {
    iVar1 = *(int *)(lVar4 + 0xc);
  }
  lVar6 = *param_3;
  iVar2 = *(int *)(lVar6 + 8);
  if (*(int *)(lVar6 + 8) <= *(int *)(lVar6 + 0xc)) {
    iVar2 = *(int *)(lVar6 + 0xc);
  }
  if (iVar1 < iVar3) {
    if (iVar3 < iVar2) {
      *param_1 = lVar6;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar5 = *param_3;
      iVar3 = *(int *)(lVar5 + 8);
      if (*(int *)(lVar5 + 8) <= *(int *)(lVar5 + 0xc)) {
        iVar3 = *(int *)(lVar5 + 0xc);
      }
      if (iVar3 <= iVar1) {
        return;
      }
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
  }
  else if (iVar3 < iVar2) {
    *param_2 = lVar6;
    *param_3 = lVar5;
    func_0x000107468b9c(*param_2);
    if (extraout_w11 < extraout_w10) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      return;
    }
  }
  return;
}



/* Entry: 1074648d4; end: 107464927;  */

void FUN_1074648d4(void)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  func_0x000107468c90();
  FUN_107464830();
  func_0x000107469140();
  func_0x000107468b9c();
  if (extraout_w11 < extraout_w10) {
    func_0x000107468c7c();
    func_0x000107468b9c();
    if (extraout_w11_00 < extraout_w10_00) {
      func_0x000107468c54();
      func_0x000107468b9c();
      if (extraout_w11_01 < extraout_w10_01) {
        func_0x00010746914c();
      }
    }
  }
  return;
}



/* Entry: 107464928; end: 107464993;  */

void FUN_107464928(void)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  
  func_0x000107468c90();
  FUN_1074648d4();
  func_0x00010746951c();
  func_0x000107468b9c();
  if (extraout_w11 < extraout_w10) {
    func_0x000107468ddc();
    func_0x000107468b9c();
    if (extraout_w11_00 < extraout_w10_00) {
      func_0x000107468c7c();
      func_0x000107468b9c();
      if (extraout_w11_01 < extraout_w10_01) {
        func_0x000107468c54();
        func_0x000107468b9c();
        if (extraout_w11_02 < extraout_w10_02) {
          func_0x00010746914c();
        }
      }
    }
  }
  return;
}



/* Entry: 107464994; end: 107464a8b;  */

void FUN_107464994(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x000107468d24();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001074649c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de6f3bf)[extraout_x8] * 4 + 0x1074649c8))(1);
    return;
  }
  func_0x000107468da0();
  FUN_107464830();
  func_0x000107469050();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x000107469030();
    iVar2 = *(int *)(extraout_x11_00 + 8);
    if (*(int *)(extraout_x11_00 + 8) <= *(int *)(extraout_x11_00 + 0xc)) {
      iVar2 = *(int *)(extraout_x11_00 + 0xc);
    }
    iVar1 = *(int *)(extraout_x13 + 8);
    if (*(int *)(extraout_x13 + 8) <= *(int *)(extraout_x13 + 0xc)) {
      iVar1 = *(int *)(extraout_x13 + 0xc);
    }
    bVar3 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      do {
        func_0x00010746963c();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x0001074694dc();
        iVar2 = extraout_w15;
        if (extraout_w15 <= extraout_w16) {
          iVar2 = extraout_w16;
        }
        bVar3 = extraout_w12 == iVar2;
      } while (!bVar3 && iVar2 <= extraout_w12);
      func_0x000107469128();
      if (bVar3) {
        func_0x0001074690f8();
        return;
      }
    }
    func_0x000107469108();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 107464a8c; end: 107464f1f;  */

void FUN_107464a8c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar14;
  long *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *plVar15;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long lVar16;
  undefined8 extraout_x10_07;
  long extraout_x10_08;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar17;
  long extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 uVar18;
  int extraout_w12;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  ulong extraout_x13_02;
  long lVar20;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar21;
  undefined8 *extraout_x15_00;
  undefined8 *extraout_x15_01;
  undefined8 *puVar22;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x000107469734();
  func_0x000107468e04();
LAB_107464aa4:
  func_0x000107468df0();
LAB_107464aa8:
  while( true ) {
    func_0x000107468dc8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107464c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de6f3c5)[extraout_x8] * 4 + 0x107464c90))();
      return;
    }
    bVar7 = 0x16 < extraout_x8;
    cVar9 = SBORROW8(extraout_x8,0x17);
    cVar10 = (long)(extraout_x8 - 0x17) < 0;
    uVar11 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar11 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar8 = 0;
        if ((bool)uVar11) {
          return;
        }
        while (func_0x000107469534(), !(bool)uVar8) {
          lVar14 = *unaff_x20;
          lVar13 = unaff_x20[1];
          iVar5 = *(int *)(lVar13 + 8);
          uVar8 = iVar5 == *(int *)(lVar14 + 8);
          plVar15 = extraout_x8_10;
          if (*(int *)(lVar14 + 8) < iVar5) {
            do {
              *plVar15 = lVar14;
              lVar14 = plVar15[-2];
              plVar15 = plVar15 + -1;
              uVar8 = iVar5 == *(int *)(lVar14 + 8);
            } while (!(bool)uVar8 && *(int *)(lVar14 + 8) <= iVar5);
            *plVar15 = lVar13;
          }
          func_0x0001074694f8();
        }
        return;
      }
      if ((bool)uVar11) {
        return;
      }
      func_0x000107469594();
      goto LAB_107464cfc;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001074690a0();
      lVar14 = extraout_x8_01;
      lVar13 = extraout_x9;
      lVar16 = extraout_x10_05;
      lVar23 = extraout_x9;
      goto joined_r0x000107464d5c;
    }
    func_0x000107469070();
    if (bVar7) {
      func_0x0001074690e8();
      FUN_107464f20();
      func_0x000107468db4();
      FUN_107464f20();
      func_0x000107469040();
      FUN_107464f20();
      func_0x000107469020();
      FUN_107464f20();
      func_0x000107468d8c();
    }
    else {
      func_0x000107469080();
      FUN_107464f20();
    }
    func_0x000107469648();
    if ((unaff_x25 & 1) != 0) break;
    uVar3 = *(uint *)(unaff_x20[-1] + 8);
    uVar4 = *(uint *)(extraout_x8_00 + 8);
    cVar9 = SBORROW4(uVar3,uVar4);
    cVar10 = (int)(uVar3 - uVar4) < 0;
    uVar11 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) break;
    uVar3 = *(uint *)(*unaff_x21 + 8);
    uVar8 = uVar3 <= uVar4;
    cVar9 = SBORROW4(uVar4,uVar3);
    cVar10 = (int)(uVar4 - uVar3) < 0;
    uVar11 = uVar4 == uVar3;
    plVar15 = unaff_x20;
    if ((int)uVar3 < (int)uVar4) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar3 = *(uint *)(*unaff_x26 + 8);
        uVar8 = uVar3 <= uVar4;
        cVar9 = SBORROW4(uVar4,uVar3);
        cVar10 = (int)(uVar4 - uVar3) < 0;
        uVar11 = uVar4 == uVar3;
        plVar15 = unaff_x26;
      } while ((int)uVar4 <= (int)uVar3);
    }
    else {
      do {
        func_0x000107469618();
        if ((bool)uVar8) break;
        func_0x0001074695f4();
        func_0x0001074697d0();
      } while ((bool)uVar11 || cVar10 != cVar9);
    }
    func_0x0001074695e8();
    plVar15 = extraout_x10_00;
    if (!(bool)uVar8) {
      do {
        func_0x0001074697d0();
        plVar15 = extraout_x10_01;
      } while (!(bool)uVar11 && cVar10 == cVar9);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar9 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar10 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x000107468e90();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x0001074697d0();
      } while ((bool)in_ZR || cVar10 != cVar9);
      do {
        func_0x0001074697d0();
        plVar15 = extraout_x10_02;
      } while (!(bool)in_ZR && cVar10 == cVar9);
    }
    func_0x0001074695dc();
    if (!(bool)in_ZR) {
      func_0x0001074695d0();
    }
    func_0x000107469540();
  }
  do {
    func_0x000107469868();
  } while (!(bool)uVar11 && cVar10 == cVar9);
  func_0x000107469118();
  plVar15 = unaff_x19;
  plVar12 = extraout_x11;
  if ((bool)uVar11) {
    do {
      if (plVar15 <= extraout_x10) break;
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 8) <= extraout_w9);
  }
  else {
    do {
      plVar12 = plVar12 + -1;
    } while (*(int *)(*plVar12 + 8) <= extraout_w9);
  }
  func_0x000107469624();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x0001074690d8();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_00 < *(int *)(*unaff_x26 + 8));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 8) <= extraout_w9_00);
  }
  func_0x0001074694ec();
  if (!(bool)in_ZR) {
    func_0x00010746960c();
  }
  func_0x000107469600();
  if ((bool)in_CY) {
    func_0x000107469158();
    FUN_107465044();
    func_0x0001074690c8();
    FUN_107465044();
    if ((int)param_1 != 0) goto LAB_107464c6c;
    if ((unaff_x28 & 1) != 0) goto LAB_107464aa8;
  }
  func_0x000107468ea4();
  FUN_107464a8c();
  unaff_x25 = 0;
  goto LAB_107464aa8;
LAB_107464cfc:
  func_0x000107469588();
  if ((bool)uVar11) {
    return;
  }
  iVar5 = *(int *)(extraout_x11_00[1] + 8);
  iVar6 = *(int *)(*extraout_x11_00 + 8);
  cVar9 = SBORROW4(iVar5,iVar6);
  cVar10 = iVar5 - iVar6 < 0;
  uVar11 = iVar5 == iVar6;
  if (iVar6 < iVar5) {
    do {
      func_0x00010746957c();
      lVar14 = extraout_x10_03;
      plVar15 = unaff_x20;
      if ((bool)uVar11) goto LAB_107464d44;
      func_0x0001074697dc();
    } while (!(bool)uVar11 && cVar10 == cVar9);
    lVar14 = extraout_x10_04;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_107464d44:
    *plVar15 = lVar14;
  }
  func_0x000107469504();
  goto LAB_107464cfc;
joined_r0x000107464d5c:
  if (lVar23 < 0) {
    do {
      if (lVar14 < 2) {
        return;
      }
      func_0x000107468e58();
      lVar13 = extraout_x8_03;
      lVar14 = extraout_x12_00;
      lVar16 = extraout_x14;
      do {
        lVar14 = lVar14 + lVar16 * 8;
        lVar16 = lVar16 * 2 + 2;
        cVar9 = SBORROW8(lVar16,lVar13);
        cVar10 = lVar16 - lVar13 < 0;
        bVar7 = lVar16 == lVar13;
        if (lVar16 < lVar13) {
          iVar5 = *(int *)(*(long *)(lVar14 + 8) + 8);
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 8);
          cVar9 = SBORROW4(iVar5,iVar6);
          cVar10 = iVar5 - iVar6 < 0;
          bVar7 = iVar5 == iVar6;
        }
        func_0x000107469090();
        lVar13 = extraout_x8_04;
        lVar14 = extraout_x12_01;
        lVar16 = extraout_x14_00;
      } while (bVar7 || cVar10 != cVar9);
      func_0x000107469570();
      if (bVar7) {
        *extraout_x9_01 = extraout_x10_07;
        lVar14 = extraout_x8_05;
      }
      else {
        func_0x000107468c34();
        lVar14 = extraout_x8_06;
        if ((cVar10 == cVar9) &&
           (func_0x000107468e2c(), lVar14 = extraout_x8_07,
           *(int *)(extraout_x11_02 + 8) < *(int *)(extraout_x13_03 + 8))) {
          do {
            func_0x00010746954c();
            lVar14 = extraout_x8_08;
            uVar18 = extraout_x11_03;
            puVar22 = extraout_x15_00;
            if (extraout_x10_08 == 0) break;
            func_0x000107468e18();
            lVar14 = extraout_x8_09;
            uVar18 = extraout_x11_04;
            puVar22 = extraout_x15_01;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 8));
          *puVar22 = uVar18;
        }
      }
      lVar14 = lVar14 + -1;
    } while( true );
  }
  cVar9 = SBORROW8(lVar13,lVar16);
  cVar10 = lVar13 - lVar16 < 0;
  if (lVar16 <= lVar13) {
    func_0x00010746933c();
    plVar15 = extraout_x11_01;
    lVar23 = extraout_x12;
    uVar21 = extraout_x15;
    if (cVar10 != cVar9) {
      plVar15 = extraout_x11_01 + 1;
      lVar23 = *plVar15;
      uVar21 = extraout_x13_02;
      if (*(int *)(extraout_x12 + 8) <= *(int *)(lVar23 + 8)) {
        plVar15 = extraout_x11_01;
        lVar23 = extraout_x12;
        uVar21 = extraout_x15;
      }
    }
    lVar20 = unaff_x20[extraout_x10_06];
    iVar5 = *(int *)(lVar20 + 8);
    plVar12 = unaff_x20 + extraout_x10_06;
    lVar14 = extraout_x8_02;
    lVar13 = extraout_x9_00;
    lVar16 = extraout_x10_06;
    if (*(int *)(lVar23 + 8) <= iVar5) {
      do {
        plVar17 = plVar15;
        *plVar12 = lVar23;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar2 = uVar21 << 1 | 1;
        plVar12 = unaff_x20 + uVar2;
        uVar1 = uVar21 * 2 + 2;
        lVar19 = *plVar12;
        plVar15 = plVar12;
        lVar23 = lVar19;
        uVar21 = uVar2;
        if ((long)uVar1 < extraout_x8_02) {
          lVar23 = plVar12[1];
          plVar15 = plVar12 + 1;
          uVar21 = uVar1;
          if (*(int *)(lVar19 + 8) <= *(int *)(lVar23 + 8)) {
            plVar15 = plVar12;
            lVar23 = lVar19;
            uVar21 = uVar2;
          }
        }
        plVar12 = plVar17;
      } while (*(int *)(lVar23 + 8) <= iVar5);
      *plVar17 = lVar20;
    }
  }
  lVar16 = lVar16 + -1;
  lVar23 = lVar16;
  goto joined_r0x000107464d5c;
LAB_107464c6c:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_107464aa4;
}



/* Entry: 107464f20; end: 107464f9f;  */

void FUN_107464f20(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 8);
  iVar2 = *(int *)(lVar7 + 8);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 8);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      if (*(int *)(*param_3 + 8) <= iVar2) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x000107468f2c(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 107464fa0; end: 107464fe7;  */

void FUN_107464fa0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_107464f20();
  func_0x000107469140();
  func_0x000107468f2c();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468c7c();
    func_0x000107468f2c();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c54();
      func_0x000107468f2c();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010746914c();
      }
    }
  }
  return;
}



/* Entry: 107464fe8; end: 107465043;  */

void FUN_107464fe8(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_107464fa0();
  func_0x00010746951c();
  func_0x000107468f2c();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468ddc();
    func_0x000107468f2c();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c7c();
      func_0x000107468f2c();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x000107468c54();
        func_0x000107468f2c();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010746914c();
        }
      }
    }
  }
  return;
}



/* Entry: 107465044; end: 107465127;  */

void FUN_107465044(void)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long extraout_x8;
  long extraout_x11;
  long lVar3;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  long extraout_x15;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468d24();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107465074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de6f3cb)[extraout_x8] * 4 + 0x107465078))(1);
    return;
  }
  func_0x000107468da0();
  FUN_107464f20();
  func_0x000107469050();
  lVar3 = extraout_x11;
  do {
    if (lVar3 == unaff_x20) {
      return;
    }
    func_0x000107469030();
    bVar2 = *(int *)(extraout_x11_00 + 8) == *(int *)(extraout_x13 + 8);
    if (*(int *)(extraout_x13 + 8) < *(int *)(extraout_x11_00 + 8)) {
      do {
        func_0x00010746963c();
        if (bVar2) {
          bVar2 = true;
          break;
        }
        iVar1 = *(int *)(*(long *)(unaff_x19 + extraout_x15 + -0x10) + 8);
        bVar2 = extraout_w12 == iVar1;
      } while (!bVar2 && iVar1 <= extraout_w12);
      func_0x000107469128();
      if (bVar2) {
        func_0x0001074690f8();
        return;
      }
    }
    func_0x000107469108();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 107465128; end: 1074655bb;  */

void FUN_107465128(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar14;
  long *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *plVar15;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long lVar16;
  undefined8 extraout_x10_07;
  long extraout_x10_08;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar17;
  long extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 uVar18;
  int extraout_w12;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  ulong extraout_x13_02;
  long lVar20;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar21;
  undefined8 *extraout_x15_00;
  undefined8 *extraout_x15_01;
  undefined8 *puVar22;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x000107469734();
  func_0x000107468e04();
LAB_107465140:
  func_0x000107468df0();
LAB_107465144:
  while( true ) {
    func_0x000107468dc8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107465328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de6f3d1)[extraout_x8] * 4 + 0x10746532c))();
      return;
    }
    bVar7 = 0x16 < extraout_x8;
    cVar9 = SBORROW8(extraout_x8,0x17);
    cVar10 = (long)(extraout_x8 - 0x17) < 0;
    uVar11 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar11 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar8 = 0;
        if ((bool)uVar11) {
          return;
        }
        while (func_0x000107469534(), !(bool)uVar8) {
          lVar14 = *unaff_x20;
          lVar13 = unaff_x20[1];
          iVar5 = *(int *)(lVar13 + 0xc);
          uVar8 = iVar5 == *(int *)(lVar14 + 0xc);
          plVar15 = extraout_x8_10;
          if (*(int *)(lVar14 + 0xc) < iVar5) {
            do {
              *plVar15 = lVar14;
              lVar14 = plVar15[-2];
              plVar15 = plVar15 + -1;
              uVar8 = iVar5 == *(int *)(lVar14 + 0xc);
            } while (!(bool)uVar8 && *(int *)(lVar14 + 0xc) <= iVar5);
            *plVar15 = lVar13;
          }
          func_0x0001074694f8();
        }
        return;
      }
      if ((bool)uVar11) {
        return;
      }
      func_0x000107469594();
      goto LAB_107465398;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001074690a0();
      lVar14 = extraout_x8_01;
      lVar13 = extraout_x9;
      lVar16 = extraout_x10_05;
      lVar23 = extraout_x9;
      goto joined_r0x0001074653f8;
    }
    func_0x000107469070();
    if (bVar7) {
      func_0x0001074690e8();
      FUN_1074655bc();
      func_0x000107468db4();
      FUN_1074655bc();
      func_0x000107469040();
      FUN_1074655bc();
      func_0x000107469020();
      FUN_1074655bc();
      func_0x000107468d8c();
    }
    else {
      func_0x000107469080();
      FUN_1074655bc();
    }
    func_0x000107469648();
    if ((unaff_x25 & 1) != 0) break;
    uVar3 = *(uint *)(unaff_x20[-1] + 0xc);
    uVar4 = *(uint *)(extraout_x8_00 + 0xc);
    cVar9 = SBORROW4(uVar3,uVar4);
    cVar10 = (int)(uVar3 - uVar4) < 0;
    uVar11 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) break;
    uVar3 = *(uint *)(*unaff_x21 + 0xc);
    uVar8 = uVar3 <= uVar4;
    cVar9 = SBORROW4(uVar4,uVar3);
    cVar10 = (int)(uVar4 - uVar3) < 0;
    uVar11 = uVar4 == uVar3;
    plVar15 = unaff_x20;
    if ((int)uVar3 < (int)uVar4) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar3 = *(uint *)(*unaff_x26 + 0xc);
        uVar8 = uVar3 <= uVar4;
        cVar9 = SBORROW4(uVar4,uVar3);
        cVar10 = (int)(uVar4 - uVar3) < 0;
        uVar11 = uVar4 == uVar3;
        plVar15 = unaff_x26;
      } while ((int)uVar4 <= (int)uVar3);
    }
    else {
      do {
        func_0x000107469618();
        if ((bool)uVar8) break;
        func_0x0001074695f4();
        func_0x0001074697c4();
      } while ((bool)uVar11 || cVar10 != cVar9);
    }
    func_0x0001074695e8();
    plVar15 = extraout_x10_00;
    if (!(bool)uVar8) {
      do {
        func_0x0001074697c4();
        plVar15 = extraout_x10_01;
      } while (!(bool)uVar11 && cVar10 == cVar9);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar9 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar10 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x000107468e90();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x0001074697c4();
      } while ((bool)in_ZR || cVar10 != cVar9);
      do {
        func_0x0001074697c4();
        plVar15 = extraout_x10_02;
      } while (!(bool)in_ZR && cVar10 == cVar9);
    }
    func_0x0001074695dc();
    if (!(bool)in_ZR) {
      func_0x0001074695d0();
    }
    func_0x000107469540();
  }
  do {
    func_0x000107469868();
  } while (!(bool)uVar11 && cVar10 == cVar9);
  func_0x000107469118();
  plVar15 = unaff_x19;
  plVar12 = extraout_x11;
  if ((bool)uVar11) {
    do {
      if (plVar15 <= extraout_x10) break;
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) <= extraout_w9);
  }
  else {
    do {
      plVar12 = plVar12 + -1;
    } while (*(int *)(*plVar12 + 0xc) <= extraout_w9);
  }
  func_0x000107469624();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x0001074690d8();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_00 < *(int *)(*unaff_x26 + 0xc));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) <= extraout_w9_00);
  }
  func_0x0001074694ec();
  if (!(bool)in_ZR) {
    func_0x00010746960c();
  }
  func_0x000107469600();
  if ((bool)in_CY) {
    func_0x000107469158();
    FUN_1074656e0();
    func_0x0001074690c8();
    FUN_1074656e0();
    if ((int)param_1 != 0) goto LAB_107465308;
    if ((unaff_x28 & 1) != 0) goto LAB_107465144;
  }
  func_0x000107468ea4();
  FUN_107465128();
  unaff_x25 = 0;
  goto LAB_107465144;
LAB_107465398:
  func_0x000107469588();
  if ((bool)uVar11) {
    return;
  }
  iVar5 = *(int *)(extraout_x11_00[1] + 0xc);
  iVar6 = *(int *)(*extraout_x11_00 + 0xc);
  cVar9 = SBORROW4(iVar5,iVar6);
  cVar10 = iVar5 - iVar6 < 0;
  uVar11 = iVar5 == iVar6;
  if (iVar6 < iVar5) {
    do {
      func_0x00010746957c();
      lVar14 = extraout_x10_03;
      plVar15 = unaff_x20;
      if ((bool)uVar11) goto LAB_1074653e0;
      func_0x0001074697dc();
    } while (!(bool)uVar11 && cVar10 == cVar9);
    lVar14 = extraout_x10_04;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_1074653e0:
    *plVar15 = lVar14;
  }
  func_0x000107469504();
  goto LAB_107465398;
joined_r0x0001074653f8:
  if (lVar23 < 0) {
    do {
      if (lVar14 < 2) {
        return;
      }
      func_0x000107468e58();
      lVar13 = extraout_x8_03;
      lVar14 = extraout_x12_00;
      lVar16 = extraout_x14;
      do {
        lVar14 = lVar14 + lVar16 * 8;
        lVar16 = lVar16 * 2 + 2;
        cVar9 = SBORROW8(lVar16,lVar13);
        cVar10 = lVar16 - lVar13 < 0;
        bVar7 = lVar16 == lVar13;
        if (lVar16 < lVar13) {
          iVar5 = *(int *)(*(long *)(lVar14 + 8) + 0xc);
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 0xc);
          cVar9 = SBORROW4(iVar5,iVar6);
          cVar10 = iVar5 - iVar6 < 0;
          bVar7 = iVar5 == iVar6;
        }
        func_0x000107469090();
        lVar13 = extraout_x8_04;
        lVar14 = extraout_x12_01;
        lVar16 = extraout_x14_00;
      } while (bVar7 || cVar10 != cVar9);
      func_0x000107469570();
      if (bVar7) {
        *extraout_x9_01 = extraout_x10_07;
        lVar14 = extraout_x8_05;
      }
      else {
        func_0x000107468c34();
        lVar14 = extraout_x8_06;
        if ((cVar10 == cVar9) &&
           (func_0x000107468e2c(), lVar14 = extraout_x8_07,
           *(int *)(extraout_x11_02 + 0xc) < *(int *)(extraout_x13_03 + 0xc))) {
          do {
            func_0x00010746954c();
            lVar14 = extraout_x8_08;
            uVar18 = extraout_x11_03;
            puVar22 = extraout_x15_00;
            if (extraout_x10_08 == 0) break;
            func_0x000107468e18();
            lVar14 = extraout_x8_09;
            uVar18 = extraout_x11_04;
            puVar22 = extraout_x15_01;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 0xc));
          *puVar22 = uVar18;
        }
      }
      lVar14 = lVar14 + -1;
    } while( true );
  }
  cVar9 = SBORROW8(lVar13,lVar16);
  cVar10 = lVar13 - lVar16 < 0;
  if (lVar16 <= lVar13) {
    func_0x00010746933c();
    plVar15 = extraout_x11_01;
    lVar23 = extraout_x12;
    uVar21 = extraout_x15;
    if (cVar10 != cVar9) {
      plVar15 = extraout_x11_01 + 1;
      lVar23 = *plVar15;
      uVar21 = extraout_x13_02;
      if (*(int *)(extraout_x12 + 0xc) <= *(int *)(lVar23 + 0xc)) {
        plVar15 = extraout_x11_01;
        lVar23 = extraout_x12;
        uVar21 = extraout_x15;
      }
    }
    lVar20 = unaff_x20[extraout_x10_06];
    iVar5 = *(int *)(lVar20 + 0xc);
    plVar12 = unaff_x20 + extraout_x10_06;
    lVar14 = extraout_x8_02;
    lVar13 = extraout_x9_00;
    lVar16 = extraout_x10_06;
    if (*(int *)(lVar23 + 0xc) <= iVar5) {
      do {
        plVar17 = plVar15;
        *plVar12 = lVar23;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar2 = uVar21 << 1 | 1;
        plVar12 = unaff_x20 + uVar2;
        uVar1 = uVar21 * 2 + 2;
        lVar19 = *plVar12;
        plVar15 = plVar12;
        lVar23 = lVar19;
        uVar21 = uVar2;
        if ((long)uVar1 < extraout_x8_02) {
          lVar23 = plVar12[1];
          plVar15 = plVar12 + 1;
          uVar21 = uVar1;
          if (*(int *)(lVar19 + 0xc) <= *(int *)(lVar23 + 0xc)) {
            plVar15 = plVar12;
            lVar23 = lVar19;
            uVar21 = uVar2;
          }
        }
        plVar12 = plVar17;
      } while (*(int *)(lVar23 + 0xc) <= iVar5);
      *plVar17 = lVar20;
    }
  }
  lVar16 = lVar16 + -1;
  lVar23 = lVar16;
  goto joined_r0x0001074653f8;
LAB_107465308:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_107465140;
}



/* Entry: 1074655bc; end: 10746563b;  */

void FUN_1074655bc(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 0xc);
  iVar2 = *(int *)(lVar7 + 0xc);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 0xc);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      if (*(int *)(*param_3 + 0xc) <= iVar2) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x000107468f1c(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10746563c; end: 107465683;  */

void FUN_10746563c(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_1074655bc();
  func_0x000107469140();
  func_0x000107468f1c();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468c7c();
    func_0x000107468f1c();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c54();
      func_0x000107468f1c();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010746914c();
      }
    }
  }
  return;
}



/* Entry: 107465684; end: 1074656df;  */

void FUN_107465684(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107468c90();
  FUN_10746563c();
  func_0x00010746951c();
  func_0x000107468f1c();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x000107468ddc();
    func_0x000107468f1c();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x000107468c7c();
      func_0x000107468f1c();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x000107468c54();
        func_0x000107468f1c();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010746914c();
        }
      }
    }
  }
  return;
}



/* Entry: 1074656e0; end: 1074657c3;  */

void FUN_1074656e0(void)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long extraout_x8;
  long extraout_x11;
  long lVar3;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  long extraout_x15;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468d24();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107465710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de6f3d7)[extraout_x8] * 4 + 0x107465714))(1);
    return;
  }
  func_0x000107468da0();
  FUN_1074655bc();
  func_0x000107469050();
  lVar3 = extraout_x11;
  do {
    if (lVar3 == unaff_x20) {
      return;
    }
    func_0x000107469030();
    bVar2 = *(int *)(extraout_x11_00 + 0xc) == *(int *)(extraout_x13 + 0xc);
    if (*(int *)(extraout_x13 + 0xc) < *(int *)(extraout_x11_00 + 0xc)) {
      do {
        func_0x00010746963c();
        if (bVar2) {
          bVar2 = true;
          break;
        }
        iVar1 = *(int *)(*(long *)(unaff_x19 + extraout_x15 + -0x10) + 0xc);
        bVar2 = extraout_w12 == iVar1;
      } while (!bVar2 && iVar1 <= extraout_w12);
      func_0x000107469128();
      if (bVar2) {
        func_0x0001074690f8();
        return;
      }
    }
    func_0x000107469108();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 1074657c4; end: 1074657e3;  */

undefined8 FUN_1074657c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = 0;
  param_1[2] = param_1[1];
  uStack_18 = *param_2;
  uStack_20 = 0;
  FUN_107465bf4(param_1 + 1,&uStack_20);
  return 1;
}



/* Entry: 1074657e4; end: 107465823;  */

undefined8 * FUN_1074657e4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_1074657c4();
  return param_1;
}



/* Entry: 107465824; end: 107465847;  */

void FUN_107465824(void)

{
  func_0x000107468ef8();
  FUN_107465848();
  return;
}



/* Entry: 107465848; end: 10746585b;  */

void FUN_107465848(undefined8 *param_1)

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



/* Entry: 10746585c; end: 1074658fb;  */

undefined1  [16]
FUN_10746585c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  int iStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  undefined4 uStack_24;
  
  puStack_30 = &uStack_24;
  puVar2 = &uStack_40;
  iStack_48 = 0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_24 = param_4;
  FUN_1074658fc();
  bVar1 = iStack_48 == 0;
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    ppuVar3 = &puStack_50;
    puStack_50 = puVar2;
    FUN_107465bb0();
    puStack_58 = *ppuVar3;
    ppuStack_60 = &puStack_58;
    puStack_68 = &uStack_40;
    FUN_107465930(&puStack_68,1);
    FUN_107465930(&puStack_68,2);
    uVar4 = (ulong)puStack_58 & 0xffffffff00000000;
    puVar2 = puStack_58;
  }
  auVar5._0_8_ = (ulong)puVar2 & 0xffffffff | uVar4;
  auVar5[8] = !bVar1;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 1074658fc; end: 10746592f;  */

void FUN_1074658fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_107465964(*param_1,*(undefined8 *)param_1[1],((undefined8 *)param_1[1])[1],param_3,
                *(undefined4 *)param_1[2],param_2);
  return;
}



/* Entry: 107465930; end: 107465963;  */

void FUN_107465930(undefined8 param_1,int param_2)

{
  long unaff_x19;
  
  func_0x0001074692a0();
  FUN_1074658fc();
  if (param_2 == 1) {
    **(undefined8 **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 107465964; end: 107465b2f;  */

undefined1  [16]
FUN_107465964(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5,
             int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar5 = 0;
  if (param_5 < 1) {
    iVar5 = -param_5;
  }
  if (param_5 < 2) {
    param_5 = 1;
  }
  iVar3 = (int)param_4;
  iVar7 = (int)(param_4 >> 0x20);
  if (param_6 == 0) {
    uStack_78 = CONCAT44(iVar7 / 2,iVar3 / 2);
  }
  else if (param_6 == 1) {
    uStack_78 = CONCAT44(iVar7,iVar3 / 2);
  }
  else {
    uStack_78 = CONCAT44(iVar7 / 2,iVar3);
    param_4 = param_4 >> 0x20;
  }
  iVar4 = (int)param_4 / 4;
  uStack_70 = param_2;
  uStack_68 = param_3;
  do {
    func_0x000107469720();
    uStack_7c = 0;
    iVar6 = (int)&puStack_98;
    puStack_98 = &uStack_70;
    uStack_90 = param_1;
    puStack_88 = &uStack_7c;
    FUN_107465b30();
    if (iVar6 == 0) {
      if (param_6 == 0) {
        uStack_78._0_4_ = (int)uStack_78 + iVar4;
        uStack_78._4_4_ = uStack_78._4_4_ + iVar4;
        if (iVar7 * iVar3 < uStack_78._4_4_ * (int)uStack_78) goto LAB_107465aec;
      }
      else if (param_6 == 1) {
        uStack_78._0_4_ = (int)uStack_78 + iVar4;
        if (iVar3 < (int)uStack_78) {
LAB_107465aec:
          uVar2 = 0;
          uVar1 = 0;
          uStack_78 = (ulong)uStack_7c;
LAB_107465b08:
          auVar8._0_8_ = uVar2 | uStack_78 & 0xffffffff;
          auVar8._8_8_ = uVar1;
          return auVar8;
        }
      }
      else {
        uStack_78._4_4_ = uStack_78._4_4_ + iVar4;
        if (iVar7 < uStack_78._4_4_) goto LAB_107465aec;
      }
    }
    else {
      iVar6 = iVar5;
      if ((iVar4 <= param_5) && (iVar6 = iVar5 + -1, iVar5 < 1)) {
        uVar2 = uStack_78 & 0xffffffff00000000;
        uVar1 = 1;
        goto LAB_107465b08;
      }
      if (param_6 == 0) {
        uStack_78 = CONCAT44(uStack_78._4_4_ - iVar4,(int)uStack_78 - iVar4);
      }
      else if (param_6 == 1) {
        uStack_78 = CONCAT44(uStack_78._4_4_,(int)uStack_78 - iVar4);
      }
      else {
        uStack_78 = CONCAT44(uStack_78._4_4_ - iVar4,(int)uStack_78);
      }
      func_0x000107469720();
      iVar5 = iVar6;
    }
    iVar4 = iVar4 / 2;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
  } while( true );
}



/* Entry: 107465b30; end: 107465baf;  */

bool FUN_107465b30(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_44 [16];
  char cStack_34;
  
  plVar1 = (long *)((long *)*param_1)[1];
  for (plVar2 = *(long **)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    FUN_107465e10(auStack_44,param_1[1],*(undefined8 *)(lVar3 + 8));
    if (cStack_34 != '\x01') break;
    *(int *)param_1[2] = *(int *)param_1[2] + *(int *)(lVar3 + 0xc) * *(int *)(lVar3 + 8);
  }
  return plVar2 == plVar1;
}



/* Entry: 107465bb0; end: 107465bf3;  */

long FUN_107465bb0(long param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  FUN_107465bf4();
  return 1;
}



/* Entry: 107465bf4; end: 107465c37;  */

undefined8 * FUN_107465bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_107465c38();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 107465c38; end: 107465ccb;  */

long FUN_107465c38(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x000107468f88();
  FUN_107465ccc();
  FUN_107465d3c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  puStack_38 = puStack_38 + 2;
  FUN_107465d0c();
  lVar1 = unaff_x19[1];
  FUN_107465dc0(auStack_48);
  return lVar1;
}



/* Entry: 107465ccc; end: 107465d0b;  */

long * FUN_107465ccc(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_107465d30();
  func_0x000107468f7c();
  func_0x0001074691b4();
  func_0x000107468fdc();
  return param_1;
}



/* Entry: 107465d0c; end: 107465d2f;  */

void FUN_107465d0c(void)

{
  func_0x000107468f7c();
  func_0x0001074691b4();
  func_0x000107468fdc();
  return;
}



/* Entry: 107465d30; end: 107465d3b;  */

long * FUN_107465d30(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107468d68();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107465d84();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107465d3c; end: 107465da3;  */

long * FUN_107465d3c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107465d84();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107465da4; end: 107465dbf;  */

long * FUN_107465da4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107465dec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107465dc0; end: 107465deb;  */

long * FUN_107465dc0(long *param_1)

{
  FUN_107465dec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107465dec; end: 107465e0f;  */

void FUN_107465dec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107465e10; end: 107465ebf;  */

void FUN_107465e10(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int aiStack_ac [9];
  long lStack_88;
  uint uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar3 = (ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) >> 4;
  uVar4 = uVar3;
  uStack_48 = param_3;
  do {
    uVar4 = uVar4 - 1;
    iVar2 = (int)uVar3;
    uStack_80 = iVar2 - 1;
    uVar3 = (ulong)uStack_80;
    if (iVar2 < 1) {
      *param_1 = 0;
      param_1[0x10] = 0;
      return;
    }
    puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (uVar4 & 0xffffffff) * 0x10);
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    uStack_7c = uStack_48;
    puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (uVar4 & 0xffffffff) * 0x10);
    uStack_6c = puVar1[1];
    uStack_74 = *puVar1;
    lStack_88 = param_2;
    FUN_107465f8c(aiStack_ac,&uStack_48,&uStack_60);
  } while (aiStack_ac[0] == -1);
  FUN_107465ec0(param_1,&lStack_88,aiStack_ac,0);
  return;
}



/* Entry: 107465ec0; end: 107465f8b;  */

void FUN_107465ec0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 uVar6;
  int *piVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  
  piVar9 = (int *)*param_2;
  plVar8 = (long *)(piVar9 + 2);
  uVar11 = *(undefined8 *)(*(long *)(piVar9 + 4) + -0x10);
  puVar3 = (undefined8 *)(*plVar8 + (long)*(int *)(param_2 + 1) * 0x10);
  puVar3[1] = *(undefined8 *)(*(long *)(piVar9 + 4) + -8);
  *puVar3 = uVar11;
  *(long *)(piVar9 + 4) = *(long *)(piVar9 + 4) + -0x10;
  lVar10 = -1;
  piVar7 = param_3 + 3;
  do {
    lVar10 = lVar10 + 1;
    if (*param_3 <= lVar10) {
      uVar4 = *(undefined8 *)((long)param_2 + 0x14);
      uVar11 = *(undefined8 *)((long)param_2 + 0xc);
      iVar1 = *(int *)((long)param_2 + 0xc) + *(int *)((long)param_2 + 0x14);
      iVar2 = *piVar9;
      if (*piVar9 <= iVar1) {
        iVar2 = iVar1;
      }
      iVar1 = piVar9[1];
      if (piVar9[1] <= *(int *)(param_2 + 2) + *(int *)(param_2 + 3)) {
        iVar1 = *(int *)(param_2 + 2) + *(int *)(param_2 + 3);
      }
      *piVar9 = iVar2;
      piVar9[1] = iVar1;
      *param_1 = uVar4;
      param_1[1] = uVar11;
      uVar6 = 1;
      goto LAB_107465f80;
    }
    plVar5 = plVar8;
    func_0x000107465bcc(plVar8,*(undefined8 *)(piVar7 + -2),*(undefined8 *)piVar7);
    piVar7 = piVar7 + 4;
  } while (((ulong)plVar5 & 1) != 0);
  uVar6 = 0;
  *(undefined1 *)param_1 = 0;
LAB_107465f80:
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 107465f8c; end: 10746609b;  */

void FUN_107465f8c(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar1 = param_3[2];
  iVar2 = *param_2;
  uVar6 = iVar1 - iVar2;
  if (-1 < (int)uVar6) {
    iVar3 = param_3[3];
    iVar4 = param_2[1];
    uVar7 = iVar3 - iVar4;
    if (-1 < (int)uVar7) {
      if (iVar1 == iVar2 && iVar3 == iVar4) {
        *(undefined4 *)(param_1 + 4) = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        return;
      }
      if (iVar1 == iVar2 || iVar3 != iVar4) {
        if (iVar1 == iVar2 && iVar3 != iVar4) {
          iVar2 = *param_3;
          *(int *)(param_1 + 1) = param_3[1] + iVar4;
          *(int *)((long)param_1 + 0xc) = iVar1;
          *(uint *)(param_1 + 2) = uVar7;
          *(undefined8 *)((long)param_1 + 0x1c) = 0;
          *(undefined8 *)((long)param_1 + 0x14) = 0;
          *(undefined4 *)param_1 = 1;
          *(int *)((long)param_1 + 4) = iVar2;
          return;
        }
        iVar5 = *param_3;
        if (uVar7 < uVar6) {
          iVar1 = param_3[1];
          *(int *)(param_1 + 1) = iVar1;
          *(uint *)((long)param_1 + 0xc) = uVar6;
          *(int *)(param_1 + 2) = iVar3;
          *(int *)((long)param_1 + 0x14) = iVar5;
          *(int *)(param_1 + 3) = iVar1 + iVar4;
          *(int *)((long)param_1 + 0x1c) = iVar2;
          *(uint *)(param_1 + 4) = uVar7;
          uVar8 = 2;
          *(int *)((long)param_1 + 4) = iVar5 + iVar2;
        }
        else {
          iVar3 = param_3[1];
          *(int *)(param_1 + 1) = iVar3 + iVar4;
          *(int *)((long)param_1 + 0xc) = iVar1;
          *(uint *)(param_1 + 2) = uVar7;
          *(int *)((long)param_1 + 0x14) = iVar5 + iVar2;
          *(int *)(param_1 + 3) = iVar3;
          *(uint *)((long)param_1 + 0x1c) = uVar6;
          *(int *)(param_1 + 4) = iVar4;
          uVar8 = 2;
          *(int *)((long)param_1 + 4) = iVar5;
        }
      }
      else {
        iVar1 = *param_3;
        *(int *)(param_1 + 1) = param_3[1];
        *(uint *)((long)param_1 + 0xc) = uVar6;
        *(int *)(param_1 + 2) = iVar3;
        *(undefined8 *)((long)param_1 + 0x1c) = 0;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        uVar8 = 1;
        *(int *)((long)param_1 + 4) = iVar1 + iVar2;
      }
      goto LAB_107466014;
    }
  }
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  uVar8 = 0xffffffff;
LAB_107466014:
  *(undefined4 *)param_1 = uVar8;
  return;
}



/* Entry: 10746609c; end: 1074660bb;  */

void FUN_10746609c(void)

{
  func_0x000107469630();
  FUN_1074660bc();
  return;
}



/* Entry: 1074660bc; end: 1074660d3;  */

void FUN_1074660bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1074660d4; end: 1074661af;  */

ulong * FUN_1074660d4(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong *puVar7;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong *unaff_x19;
  ulong *puVar8;
  undefined8 *unaff_x21;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  
  func_0x000107469330();
  puVar9 = (undefined8 *)param_1[1];
  bVar3 = (undefined8 *)param_1[2] <= puVar9;
  bVar4 = puVar9 == (undefined8 *)param_1[2];
  if (!bVar3) {
    uVar13 = unaff_x21[1];
    uVar11 = *unaff_x21;
    puVar9[2] = unaff_x21[2];
    puVar9[1] = uVar13;
    *puVar9 = uVar11;
    puVar9 = puVar9 + 3;
LAB_10746619c:
    unaff_x19[1] = (ulong)puVar9;
    return param_1;
  }
  puVar8 = (ulong *)*unaff_x19;
  func_0x0001074692ac(0xaaaaaaaaaaaaaaa);
  if (bVar3 && !bVar4) {
    FUN_1074661b0();
  }
  else {
    func_0x000107468f94();
    uVar6 = extraout_x10;
    if (0x555555555555554 < extraout_x9) {
      uVar6 = extraout_x8;
    }
    if (uVar6 <= extraout_x8) {
      param_1 = (ulong *)(uVar6 * 0x18);
      __Znwm();
      puVar9 = (undefined8 *)((long)param_1 + ((long)puVar9 - (long)puVar8));
      puVar1 = param_1 + uVar6 * 3;
      uVar11 = *unaff_x21;
      puVar9[1] = unaff_x21[1];
      *puVar9 = uVar11;
      puVar9[2] = unaff_x21[2];
      puVar9 = puVar9 + 3;
      func_0x0001074692fc();
      *unaff_x19 = (ulong)unaff_x21;
      unaff_x19[1] = (ulong)puVar9;
      unaff_x19[2] = (ulong)puVar1;
      if (puVar8 != (ulong *)0x0) {
        __ZdlPv(puVar8);
        param_1 = puVar8;
      }
      goto LAB_10746619c;
    }
  }
  func_0x000104bd35f4();
  func_0x000107468d68();
  func_0x000107469330();
  puVar1 = param_1 + 1;
  puVar7 = puVar1;
  puVar5 = puVar1;
  while (puVar10 = (ulong *)*puVar7, puVar10 != (ulong *)0x0) {
    param_1 = puVar10 + 4;
    func_0x000107469654();
    bVar4 = (int)param_1 == 0;
    lVar2 = 8;
    if (bVar4) {
      lVar2 = 0;
    }
    puVar7 = (ulong *)((long)puVar10 + lVar2);
    if (bVar4) {
      puVar5 = puVar10;
    }
  }
  if ((puVar1 != puVar5) && (func_0x0001074696b4(), ((ulong)param_1 & 1) == 0)) {
    puVar5 = puVar5 + 0xb;
    func_0x00010002c968();
    uVar12 = param_3[1];
    uVar6 = *param_3;
    *(undefined8 *)((long)puVar5 + 0xd) = *(undefined8 *)((long)param_3 + 0xd);
    puVar5[1] = uVar12;
    *puVar5 = uVar6;
    func_0x000107407208(puVar5 + 3,param_3 + 3);
    func_0x000107407208(puVar8 + 6,unaff_x19 + 6);
    uVar13 = *(undefined8 *)((long)unaff_x19 + 0x59);
    uVar11 = *(undefined8 *)((long)unaff_x19 + 0x51);
    uVar6 = unaff_x19[9];
    puVar8[10] = unaff_x19[10];
    puVar8[9] = uVar6;
    *(undefined8 *)((long)puVar8 + 0x59) = uVar13;
    *(undefined8 *)((long)puVar8 + 0x51) = uVar11;
    return puVar8;
  }
  FUN_1074662f4();
  if (*unaff_x19 == 0) {
    uVar6 = 0xc0;
    __Znwm();
    uStack_b8 = 0;
    uStack_c8 = uVar6;
    puStack_c0 = puVar1;
    func_0x000104c2fe00(uVar6 + 0x20);
    FUN_1073f6580(uVar6 + 0x58,param_3);
    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
    FUN_107466400();
    uStack_c8 = 0;
    unaff_x19 = &uStack_c8;
    func_0x0001074664e0(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1074661b0; end: 1074661bb;  */

long * FUN_1074661b0(ulong param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  func_0x000107468d68();
  func_0x000107469330();
  plVar1 = (long *)(param_1 + 8);
  plVar5 = plVar1;
  plVar3 = plVar1;
  while (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0) {
    param_1 = (ulong)(plVar6 + 4);
    func_0x000107469654();
    bVar2 = (int)param_1 == 0;
    lVar4 = 8;
    if (bVar2) {
      lVar4 = 0;
    }
    plVar5 = (long *)((long)plVar6 + lVar4);
    if (bVar2) {
      plVar3 = plVar6;
    }
  }
  if ((plVar1 != plVar3) && (func_0x0001074696b4(), (param_1 & 1) == 0)) {
    plVar3 = plVar3 + 0xb;
    func_0x00010002c968();
    lVar8 = param_3[1];
    lVar4 = *param_3;
    *(undefined8 *)((long)plVar3 + 0xd) = *(undefined8 *)((long)param_3 + 0xd);
    plVar3[1] = lVar8;
    *plVar3 = lVar4;
    func_0x000107407208(plVar3 + 3,param_3 + 3);
    func_0x000107407208(unaff_x20 + 6,unaff_x19 + 6);
    uVar9 = *(undefined8 *)((long)unaff_x19 + 0x59);
    uVar7 = *(undefined8 *)((long)unaff_x19 + 0x51);
    lVar4 = unaff_x19[9];
    unaff_x20[10] = unaff_x19[10];
    unaff_x20[9] = lVar4;
    *(undefined8 *)((long)unaff_x20 + 0x59) = uVar9;
    *(undefined8 *)((long)unaff_x20 + 0x51) = uVar7;
    return unaff_x20;
  }
  FUN_1074662f4();
  if (*unaff_x19 == 0) {
    lVar4 = 0xc0;
    __Znwm();
    uStack_78 = 0;
    lStack_88 = lVar4;
    plStack_80 = plVar1;
    func_0x000104c2fe00(lVar4 + 0x20);
    FUN_1073f6580(lVar4 + 0x58,param_3);
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    FUN_107466400();
    lStack_88 = 0;
    unaff_x19 = &lStack_88;
    func_0x0001074664e0(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1074661bc; end: 1074662f3;  */

long * FUN_1074661bc(ulong param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x000107469330();
  plVar1 = (long *)(param_1 + 8);
  plVar5 = plVar1;
  plVar3 = plVar1;
  while (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0) {
    param_1 = (ulong)(plVar6 + 4);
    func_0x000107469654();
    bVar2 = (int)param_1 == 0;
    lVar4 = 8;
    if (bVar2) {
      lVar4 = 0;
    }
    plVar5 = (long *)((long)plVar6 + lVar4);
    if (bVar2) {
      plVar3 = plVar6;
    }
  }
  if ((plVar1 != plVar3) && (func_0x0001074696b4(), (param_1 & 1) == 0)) {
    plVar3 = plVar3 + 0xb;
    func_0x00010002c968();
    lVar8 = param_3[1];
    lVar4 = *param_3;
    *(undefined8 *)((long)plVar3 + 0xd) = *(undefined8 *)((long)param_3 + 0xd);
    plVar3[1] = lVar8;
    *plVar3 = lVar4;
    func_0x000107407208(plVar3 + 3,param_3 + 3);
    func_0x000107407208(unaff_x20 + 6,unaff_x19 + 6);
    uVar9 = *(undefined8 *)((long)unaff_x19 + 0x59);
    uVar7 = *(undefined8 *)((long)unaff_x19 + 0x51);
    lVar4 = unaff_x19[9];
    unaff_x20[10] = unaff_x19[10];
    unaff_x20[9] = lVar4;
    *(undefined8 *)((long)unaff_x20 + 0x59) = uVar9;
    *(undefined8 *)((long)unaff_x20 + 0x51) = uVar7;
    return unaff_x20;
  }
  FUN_1074662f4();
  if (*unaff_x19 == 0) {
    lVar4 = 0xc0;
    __Znwm();
    uStack_68 = 0;
    lStack_78 = lVar4;
    plStack_70 = plVar1;
    func_0x000104c2fe00(lVar4 + 0x20);
    FUN_1073f6580(lVar4 + 0x58,param_3);
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    FUN_107466400();
    lStack_78 = 0;
    unaff_x19 = &lStack_78;
    func_0x0001074664e0(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1074662f4; end: 1074663ff;  */

long * FUN_1074662f4(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  if ((param_2 == param_1 + 1) ||
     (plVar3 = param_1, func_0x0001074696b4(param_1,param_2 + 4), (int)plVar3 != 0)) {
    plVar3 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x00010002c810();
      iVar1 = (int)plVar3 + 0x20;
      func_0x000107469654();
      if (iVar1 == 0) goto SUB_1073f9930;
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = (long)plVar3;
      param_4 = (long *)((long)plVar3 + 8);
    }
  }
  else {
    iVar1 = (int)param_2 + 0x20;
    func_0x000107469654();
    if (iVar1 == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      FUN_107466454(param_2,1);
      if ((param_1 + 1 != param_4) && (plVar3 = param_4, func_0x0001074696b4(), (int)plVar3 == 0)) {
SUB_1073f9930:
        func_0x0001073fa0c0(param_1,param_3);
        plVar4 = *(long **)(unaff_x20 + 8);
        plVar3 = (long *)(unaff_x20 + 8);
        while (plVar5 = plVar3, plVar4 != (long *)0x0) {
          while (plVar5 = plVar4, uVar2 = param_5, func_0x000104c2fc44(param_5,plVar5 + 4),
                (int)uVar2 == 0) {
            plVar4 = plVar5 + 4;
            func_0x000104c2fc44(plVar4,param_5);
            if ((int)plVar4 == 0) goto LAB_1073f9998;
            plVar3 = plVar5 + 1;
            plVar4 = (long *)*plVar3;
            if ((long *)*plVar3 == (long *)0x0) goto LAB_1073f9998;
          }
          plVar3 = plVar5;
          plVar4 = (long *)*plVar5;
        }
LAB_1073f9998:
        *unaff_x19 = plVar5;
        return plVar3;
      }
      if (param_2[1] == 0) {
        *param_3 = (long)param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = (long)param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 107466400; end: 107466453;  */

void FUN_107466400(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107469434();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001074696cc();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 107466454; end: 107466477;  */

undefined8 FUN_107466454(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107466478(&uStack_18);
  return uStack_18;
}



/* Entry: 107466478; end: 1074664ff;  */

void FUN_107466478(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107468f7c();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000107466430();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x0001074664bc();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 107466500; end: 107466517;  */

void FUN_107466500(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107408cfc(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107466518; end: 107466557;  */

void FUN_107466518(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107408cfc(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107466558; end: 107466633;  */

void FUN_107466558(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar6;
  undefined8 *unaff_x21;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107469330();
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar3 = *(undefined8 **)(param_1 + 0x10) <= puVar2;
  bVar4 = puVar2 == *(undefined8 **)(param_1 + 0x10);
  if (!bVar3) {
    uVar9 = unaff_x21[1];
    uVar8 = *unaff_x21;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x21 + 2);
    puVar2[1] = uVar9;
    *puVar2 = uVar8;
    lVar7 = (long)puVar2 + 0x14;
LAB_107466620:
    unaff_x19[1] = lVar7;
    return;
  }
  lVar6 = *unaff_x19;
  func_0x0001074692ac(0xccccccccccccccc);
  if (bVar3 && !bVar4) {
    FUN_107466634();
  }
  else {
    func_0x000107468f94();
    uVar1 = extraout_x10;
    if (0x666666666666665 < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 <= extraout_x8) {
      lVar5 = uVar1 * 0x14;
      __Znwm();
      puVar2 = (undefined8 *)((long)puVar2 + (lVar5 - lVar6));
      uVar8 = *unaff_x21;
      puVar2[1] = unaff_x21[1];
      *puVar2 = uVar8;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x21 + 2);
      lVar7 = (long)puVar2 + 0x14;
      func_0x0001074692fc();
      *unaff_x19 = (long)unaff_x21;
      unaff_x19[1] = lVar7;
      unaff_x19[2] = lVar5 + uVar1 * 0x14;
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
      goto LAB_107466620;
    }
  }
  func_0x000104bd35f4();
  func_0x000107468d68();
  FUN_10746671c();
  if (param_3 != 0) {
    func_0x000107468cdc();
    func_0x000107468cdc();
    func_0x000107468cdc();
    func_0x000107468cdc();
  }
  return;
}



/* Entry: 107466634; end: 10746663f;  */

void FUN_107466634(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x000107468d68();
  FUN_10746671c();
  if (param_3 != 0) {
    func_0x000107468cdc();
    func_0x000107468cdc();
    func_0x000107468cdc();
    func_0x000107468cdc();
  }
  return;
}



/* Entry: 107466640; end: 10746671b;  */

void FUN_107466640(int *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uStack_58 = 0;
  uStack_60 = CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + 1,
                       (int)*(undefined8 *)param_2 + 1);
  FUN_10746671c(param_1,param_4,&uStack_58,&uStack_60,param_1);
  if (param_3 != 0) {
    iVar3 = *param_1;
    iVar5 = param_1[1];
    iVar4 = *param_2;
    iVar1 = param_2[1] + 1;
    iVar2 = iVar4 + 1;
    uStack_58 = (ulong)(iVar5 - 1) << 0x20;
    uStack_60 = CONCAT44(param_2[1],iVar2);
    func_0x000107468cdc();
    uStack_58 = 0;
    uStack_60 = CONCAT44(iVar1 + iVar5,iVar2);
    func_0x000107468cdc();
    uStack_58 = (ulong)(iVar3 - 1);
    uStack_60 = CONCAT44(iVar1,iVar4);
    func_0x000107468cdc();
    uStack_58 = 0;
    uStack_60 = CONCAT44(iVar1,iVar2 + iVar3);
    func_0x000107468cdc();
  }
  return;
}



/* Entry: 10746671c; end: 1074668c3;  */

void FUN_10746671c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((*param_5 == 0) || (param_5[1] == 0)) {
    return;
  }
  puVar1 = param_1;
  FUN_1074344b4();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001074691e0();
    FUN_1074668c4();
  }
  else {
    puVar1 = param_2;
    FUN_1074344b4();
    if (((ulong)puVar1 & 1) != 0) {
      uVar3 = *param_5;
      if (*param_1 < uVar3) {
LAB_107466844:
        func_0x0001074691e0();
        func_0x000104c03f74();
      }
      else {
        uVar2 = param_5[1];
        if (((param_1[1] < uVar2) || (*param_1 - uVar3 < *param_3)) ||
           (param_1[1] - uVar2 < param_3[1])) goto LAB_107466844;
        if (((uVar3 <= *param_2) && (uVar2 <= param_2[1])) &&
           ((*param_4 <= *param_2 - uVar3 && (param_4[1] <= param_2[1] - uVar2)))) {
          lVar4 = *(long *)(param_1 + 2);
          lVar5 = *(long *)(param_2 + 2);
          for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
            if (*param_5 != 0) {
              _memmove(lVar5 + (ulong)*param_2 * (ulong)(uVar3 + param_4[1]) * 4 +
                       (ulong)*param_4 * 4,
                       lVar4 + (ulong)*param_1 * (ulong)(uVar3 + param_3[1]) * 4 +
                       (ulong)*param_3 * 4,(ulong)*param_5 << 2);
              uVar2 = param_5[1];
            }
          }
          *(char *)(param_2 + 4) = (char)param_1[4];
          return;
        }
        func_0x0001074691e0();
        func_0x000104c03f74();
      }
      func_0x0001074697b0();
      goto LAB_1074668a8;
    }
    func_0x0001074691e0();
    FUN_1074668c4();
  }
  func_0x00010746979c();
LAB_1074668a8:
  ___cxa_throw(puVar1);
  func_0x0001074696e4();
  func_0x000107469138();
  __ZNSt11logic_errorC2EPKc();
  func_0x00010527c204();
  return;
}



/* Entry: 1074668c4; end: 1074668c7;  */

void FUN_1074668c4(void)

{
  __ZNSt11logic_errorC2EPKc();
  func_0x00010527c204();
  return;
}



/* Entry: 1074668c8; end: 1074669cf;  */

void FUN_1074668c8(uint param_1,uint param_2,undefined1 *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    puVar3 = param_5;
    puVar6 = param_3;
    FUN_1074344b4();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x0001074691e0();
      puVar4 = &UNK_10f41581e;
      FUN_1074668c4();
      func_0x00010746979c();
    }
    else {
      uVar1 = (int)param_3 + 2;
      if (uVar1 <= *param_5) {
        uVar2 = param_4 + 2;
        uVar7 = (ulong)uVar2;
        if ((uVar2 <= param_5[1] && param_1 <= *param_5 - uVar1) && param_2 <= param_5[1] - uVar2) {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            lVar5 = *(long *)(param_5 + 2) + (ulong)*param_5 * (ulong)param_2 * 4 +
                    (ulong)param_1 * 4;
            FUN_1074669d0(lVar5,lVar5 + (ulong)uVar1 * 4,&uStack_41);
            param_2 = param_2 + 1;
          }
          return;
        }
      }
      func_0x0001074691e0();
      puVar4 = &UNK_10f415837;
      func_0x000104c03f74();
      func_0x0001074697b0();
    }
    ___cxa_throw();
    func_0x0001074696e4();
    func_0x000107469138();
    lVar5 = (long)puVar4 - (long)puVar3;
    while (0 < lVar5) {
      *(undefined1 *)puVar3 = *puVar6;
      puVar3 = (uint *)((long)puVar3 + 1);
      lVar5 = lVar5 + -1;
    }
    return;
  }
  return;
}



/* Entry: 1074669d0; end: 1074669ef;  */

void FUN_1074669d0(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1;
  while (0 < lVar1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 1074669f0; end: 107466a33;  */

undefined8 * FUN_1074669f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_107466a34();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 107466a34; end: 107466ad7;  */

long FUN_107466a34(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x000107468f88();
  FUN_107466ad8();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x0001051888fc();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  FUN_107466b18();
  lVar2 = unaff_x19[1];
  FUN_107466b54(&plStack_58);
  return lVar2;
}



/* Entry: 107466ad8; end: 107466b17;  */

long * FUN_107466ad8(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  func_0x0001051888e8();
  func_0x000107468f7c();
  func_0x0001074691b4();
  func_0x000107468fdc();
  return param_1;
}



/* Entry: 107466b18; end: 107466b3b;  */

void FUN_107466b18(void)

{
  func_0x000107468f7c();
  func_0x0001074691b4();
  func_0x000107468fdc();
  return;
}



/* Entry: 107466b3c; end: 107466b53;  */

long * FUN_107466b3c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107466b80();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


