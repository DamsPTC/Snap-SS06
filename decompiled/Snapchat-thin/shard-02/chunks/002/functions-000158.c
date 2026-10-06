/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a84fc8; end: 101a85057;  */

int FUN_101a84fc8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101a85058; end: 101a8508f;  */

void FUN_101a85058(undefined8 param_1)

{
  if (lRam0000000112df3fa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66cb9c);
  return;
}



/* Entry: 101a85090; end: 101a85107;  */

void FUN_101a85090(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d9c2848;
    puStack_28 = &UNK_10d9c2848;
    func_0x000107c61630(param_1,0x100,3,&lStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 101a85108; end: 101a8510f;  */

undefined8 * FUN_101a85108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_101a84ef8(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 101a85110; end: 101a8519f;  */

void FUN_101a85110(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a851a0,0,0);
  return;
}



/* Entry: 101a851a0; end: 101a85367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a851a0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long unaff_x22;
  
  uVar7 = 0xd00000000000002f;
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x60) + _DAT_113046cf8);
  if (lVar4 == 0) {
    pcVar8 = "nknown media type";
  }
  else {
    if (lVar4 == 2) {
      lVar2 = *(long *)(unaff_x22 + 0x68);
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
      lVar4 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar7);
      piVar5 = *(int **)(lVar4 + 0x20);
      iVar1 = *piVar5;
      plVar3 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101a8541c;
                    /* WARNING: Could not recover jumptable at 0x000101a852e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))
                (plVar3,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x60),uVar7,
                 lVar4);
      return;
    }
    if (lVar4 == 1) {
      FUN_101a86420(*(long *)(unaff_x22 + 0x70) + 0x10,unaff_x22 + 0x38);
      if (*(long *)(unaff_x22 + 0x50) != 0) {
        FUN_101a86470(unaff_x22 + 0x38,unaff_x22 + 0x10);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar4 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
        lVar4 = *(long *)(lVar4 + 8);
        piVar5 = *(int **)(lVar4 + 8);
        iVar1 = *piVar5;
        plVar3 = (long *)(ulong)(uint)piVar5[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x98) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_101a85368;
                    /* WARNING: Could not recover jumptable at 0x000101a85274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar5))
                  (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),uVar7,lVar4);
        return;
      }
      FUN_101a87768(unaff_x22 + 0x38,0x112df40e8,&UNK_10d9c28d0);
      pcVar8 = "Missing cached file URL";
      uVar7 = 0xd000000000000032;
    }
    else {
      pcVar8 = "monochrome_unknown_";
      uVar7 = 0xd000000000000031;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a85364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7,(ulong)pcVar8 | 0x8000000000000000,0x101);
  return;
}



/* Entry: 101a85368; end: 101a853bb;  */

void FUN_101a85368(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  *(undefined8 *)(lVar1 + 0xa8) = param_2;
  *(undefined2 *)(lVar1 + 0xd0) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a853bc,0,0);
  return;
}



/* Entry: 101a853bc; end: 101a8541b;  */

void FUN_101a853bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined2 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a85418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 101a8541c; end: 101a85463;  */

void FUN_101a8541c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a85464,0,0);
  return;
}



/* Entry: 101a85464; end: 101a85557;  */

void FUN_101a85464(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = uVar5;
  (**(code **)(lVar4 + 0x30))(uVar5,1,uVar6);
  if ((int)uVar1 == 1) {
    FUN_101a87768(uVar5,0x112d36580,&UNK_10d9016d0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a854fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0xd000000000000017,0x800000010efce510,0x100);
    return;
  }
  (**(code **)(lVar4 + 0x20))(*(undefined8 *)(unaff_x22 + 0x90),uVar5,uVar6);
  plVar2 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a85558;
  lVar7 = *(long *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  plVar2[0x18] = *(long *)(unaff_x22 + 0x90);
  plVar2[0x19] = lVar7;
  plVar2[0x17] = lVar4;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1a] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a8567c,0,0);
  return;
}



/* Entry: 101a85558; end: 101a855ab;  */

void FUN_101a85558(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  *(undefined8 *)(lVar1 + 200) = param_2;
  *(undefined2 *)(lVar1 + 0xd2) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a855ac,0,0);
  return;
}



/* Entry: 101a855ac; end: 101a85613;  */

void FUN_101a855ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined2 *)(unaff_x22 + 0xd2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a85610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 101a85614; end: 101a8574b;  */

void FUN_101a85614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a8567c,0,0);
  return;
}



/* Entry: 101a8574c; end: 101a857bf;  */

void FUN_101a8574c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xe8) = param_1;
  *(undefined8 *)(lVar2 + 0xf0) = param_3;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x100) = param_2;
    pcVar1 = FUN_101a857c0;
  }
  else {
    pcVar1 = FUN_101a85930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a857c0; end: 101a8592f;  */

void FUN_101a857c0(double param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe8);
  func_0x000107c600d4(puVar1,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xf0));
  if (0.0 < param_1) {
    lVar2 = *(long *)(unaff_x22 + 0xe8);
    FUN_101a8a9ec(lVar2,*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xf0),3);
    *(long *)(unaff_x22 + 0x108) = lVar2;
    plVar3 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a85a00;
    plVar3[0xb] = *(long *)(unaff_x22 + 0xd8);
    plVar3[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8aed0,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_101a874fc();
  puVar4 = &UNK_110437c60;
  func_0x000107c613f8(&UNK_110437c60,puVar1,0,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 2;
  func_0x000107c61654();
  func_0x000107c61170(uVar5);
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd000000000000039,0x800000010efce5b0);
  func_0x000107c614cc(puVar4,unaff_x22 + 0xa0,unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x90),uVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c614ac(puVar4);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101a8592c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xe000000000000000,0x101);
  return;
}



/* Entry: 101a85930; end: 101a859ff;  */

void FUN_101a85930(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd000000000000039,0x800000010efce5b0);
  func_0x000107c614cc(uVar2,unaff_x22 + 0xa0,unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x90),uVar1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101a859fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xe000000000000000,0x101);
  return;
}



/* Entry: 101a85a00; end: 101a85a67;  */

void FUN_101a85a00(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x118) = param_1;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a85a68;
  }
  else {
    pcVar1 = FUN_101a85d50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a85a68; end: 101a85d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a85a68(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_10;
  
  lVar11 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  puVar1 = (undefined8 *)(lVar11 + _DAT_113046ce8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar11 = *(long *)(lVar11 + _DAT_113046cf0);
  if (lVar11 < 3) {
    if (lVar11 == 0) {
      uVar15 = 0xe400000000000000;
      uVar16 = 0x656e6f6e;
    }
    else if (lVar11 == 1) {
      uVar15 = 0x800000010efce270;
      uVar16 = 0xd00000000000001c;
    }
    else {
      if (lVar11 != 2) goto LAB_101a85b68;
      uVar15 = 0x800000010efce250;
      uVar16 = 0xd00000000000001d;
    }
  }
  else if (lVar11 < 5) {
    if (lVar11 == 3) {
      uVar15 = 0x800000010efce230;
      uVar16 = 0xd000000000000014;
    }
    else {
      if (lVar11 != 4) {
LAB_101a85b68:
        *(long *)(unaff_x22 + 0xa8) = lVar11;
        func_0x000107c61434(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                  (&UNK_110735378,(long *)(unaff_x22 + 0xa8),&UNK_110735378,PTR___sSiN_11034deb0);
        return;
      }
      uVar16 = 0xd000000000000013;
      uVar15 = 0x800000010efce210;
    }
  }
  else if (lVar11 == 5) {
    uVar15 = 0xec00000074696b5f;
    uVar16 = 0x6576697461657263;
  }
  else {
    if (lVar11 != 6) goto LAB_101a85b68;
    uVar15 = 0xeb00000000617265;
    uVar16 = 0x6d61635f70616e73;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar12;
  lVar11 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar13,1,1,lVar11);
  FUN_101a8753c(unaff_x22 + 0x10,unaff_x22 + 0x60);
  puVar5 = &UNK_110437a78;
  func_0x000107c613fc(&UNK_110437a78,0x58,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  FUN_101a86470(unaff_x22 + 0x60,puVar5 + 0x20);
  *(undefined8 *)(puVar5 + 0x48) = uVar16;
  *(undefined8 *)(puVar5 + 0x50) = uVar15;
  puVar6 = &UNK_110437aa0;
  func_0x000107c613fc(&UNK_110437aa0,0x20,7);
  *(undefined **)(unaff_x22 + 0x128) = puVar6;
  *(undefined **)(puVar6 + 0x10) = &UNK_10d9c28e8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  plVar14 = (long *)0xe0;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar12);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar14;
  lVar11 = 0x112df40f8;
  func_0x0001000285a8(0x112df40f8,&UNK_10d9c2900);
  lVar7 = 0x112df4100;
  func_0x0001000285a8(0x112df4100,&UNK_10d9c2908);
  lVar8 = lVar7;
  func_0x000101a87718();
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_101a85e20;
  puVar4 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar5 = PTR___ss5NeverON_11034ee88;
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  plVar14[0x16] = unaff_x22 + 0xb0;
  plVar14[0x17] = lStack_10;
  plVar14[0x14] = lVar8;
  plVar14[0x15] = (long)puVar4;
  plVar14[0x12] = lVar7;
  plVar14[0x13] = (long)puVar5;
  plVar14[0x10] = (long)puVar6;
  plVar14[0x11] = lVar11;
  plVar14[0xe] = lVar9;
  plVar14[0xf] = (long)&UNK_10d9c28f8;
  lVar11 = *(long *)(puVar5 + -8);
  plVar14[0x18] = lVar11;
  uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar14[0x19] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 101a85d50; end: 101a85e1f;  */

void FUN_101a85d50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd000000000000039,0x800000010efce5b0);
  func_0x000107c614cc(uVar2,unaff_x22 + 0xa0,unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x90),uVar1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101a85e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xe000000000000000,0x101);
  return;
}



/* Entry: 101a85e20; end: 101a85ebb;  */

void FUN_101a85e20(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x128);
  *(undefined8 *)(lVar2 + 0x138) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  func_0x000107c61574(uVar1);
  if (unaff_x20 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x118);
  FUN_101a87768(*(undefined8 *)(lVar2 + 0xd0),0x112d453c8,&UNK_10d90ac60);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a85ebc,0,0);
  return;
}



/* Entry: 101a85ebc; end: 101a860bb;  */

void FUN_101a85ebc(void)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar11 = 0;
  lVar12 = *(long *)(unaff_x22 + 0x138);
  uVar8 = *(ulong *)(lVar12 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar8 == uVar11) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x138));
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar5 = puVar6;
        }
        func_0x000107c60480();
        uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
      }
      bVar2 = puVar5 == (undefined *)0x0;
      if (bVar2) {
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(uVar9);
        uVar9 = 0x800000010efce5f0;
        func_0x0001000834e4(unaff_x22 + 0x10);
        puVar6 = (undefined *)0xd000000000000032;
      }
      else {
        func_0x0001000834e4(unaff_x22 + 0x10);
        func_0x000107c6142c(uVar9);
        uVar9 = 0x2000000000000000;
      }
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101a860b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar6,uVar9,CONCAT11(bVar2,bVar2));
      return;
    }
    if (*(ulong *)(lVar12 + 0x10) <= uVar11) break;
    lVar10 = *(long *)(lVar12 + 0x20 + uVar11 * 8);
    uVar11 = uVar11 + 1;
    if (lVar10 != 0) {
      func_0x000107c6157c(lVar10);
      puVar5 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar4 = puVar6;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_101a868c0(0,puVar4 + 1,1,puVar6,FUN_101a85058,0x112df4110,&UNK_10d9c2910,FUN_101a87068);
      }
      uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar7 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_101a868c0(puVar6,uVar1 + 1,1,puVar5,FUN_101a85058,0x112df4110,&UNK_10d9c2910,
                      FUN_101a87068);
        uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar10;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a86038);
  (*pcVar3)();
}



/* Entry: 101a860bc; end: 101a860df;  */

void FUN_101a860bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a860e0,0,0);
  return;
}



/* Entry: 101a860e0; end: 101a861bf;  */

void FUN_101a860e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  plVar7 = *(long **)(unaff_x22 + 0x40);
  lVar9 = *(long *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61434();
  func_0x000107c5fb78(0x5f656d6172665f,0xe700000000000000);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  func_0x0001000a8868(plVar7,plVar7[3]);
  lVar10 = *plVar7;
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a861c0;
  lVar1 = *(long *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  plVar7[10] = *(long *)(unaff_x22 + 0x50);
  plVar7[0xb] = lVar10;
  plVar7[8] = lVar4;
  plVar7[9] = lVar1;
  plVar7[6] = lVar3;
  plVar7[7] = lVar9;
  plVar7[5] = lVar2;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar7[0xc] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0xd] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xe] = uVar5;
  lVar4 = 0x112df3eb0;
  func_0x0001000285a8(0x112df3eb0,&UNK_10d9c2698);
  plVar7[0xf] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x10] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a82b40,0,0);
  return;
}



/* Entry: 101a861c0; end: 101a86267;  */

void FUN_101a861c0(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  *(undefined2 *)(lVar2 + 0x78) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a8621c,0,0);
  return;
}



/* Entry: 101a86268; end: 101a862df;  */

void FUN_101a86268(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  iVar1 = *param_3;
  plVar4 = (long *)(ulong)(uint)param_3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a862e0;
                    /* WARNING: Could not recover jumptable at 0x000101a862dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(uVar2,uVar3,uVar5);
  return;
}



/* Entry: 101a862e0; end: 101a86327;  */

void FUN_101a862e0(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101a86324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101a86328; end: 101a86363;  */

void FUN_101a86328(void)

{
  long unaff_x20;
  
  FUN_101a87768(unaff_x20 + 0x10,0x112df40e8,&UNK_10d9c28d0);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a86364; end: 101a863c3;  */

void FUN_101a86364(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a863c4;
  plVar2[0xd] = param_2;
  plVar2[0xe] = lVar3;
  plVar2[0xc] = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x11] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a851a0,0,0);
  return;
}



/* Entry: 101a863c4; end: 101a8641f;  */

void FUN_101a863c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a8641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 101a86420; end: 101a8646f;  */

undefined8 FUN_101a86420(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112df40e8;
  func_0x0001000285a8(0x112df40e8,&UNK_10d9c28d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101a86470; end: 101a86487;  */

undefined8 * FUN_101a86470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101a86488; end: 101a8658f;  */

undefined * FUN_101a86488(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a86590);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112df4128;
    func_0x0001000285a8(0x112df4128,&UNK_10d9c2928);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110438560);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a86590; end: 101a866cf;  */

undefined * FUN_101a86590(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a866d0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112df4118;
    func_0x0001000285a8(0x112df4118,&UNK_10d9c2918);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112df4120;
    func_0x0001000285a8(0x112df4120,&UNK_10d9c2920);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a866d0; end: 101a86717;  */

ulong FUN_101a866d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86878);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000101a86fd8(uVar2,uVar4,0x112df41c0,&PTR_PTR_1126bcd28,0x112df41c8,&UNK_10d9c29a0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86874);
      (*pcVar1)();
    }
    FUN_101a87160(0,uVar2,uVar3 + 0x20,param_4,0x112df41c0,&PTR_PTR_1126bcd28);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101a86718; end: 101a86877;  */

ulong FUN_101a86718(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86878);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000101a86fd8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86874);
      (*pcVar1)();
    }
    FUN_101a87160(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101a86878; end: 101a868bf;  */

ulong FUN_101a86878(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86878);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000101a86fd8(uVar2,uVar4,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,&UNK_10d9c2990);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86874);
      (*pcVar1)();
    }
    FUN_101a87160(0,uVar2,uVar3 + 0x20,param_4,0x112df41a0,&PTR_PTR_1126bceb0);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101a868c0; end: 101a86a13;  */

ulong FUN_101a868c0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86a14);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101a86f4c(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86a10);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101a86a14; end: 101a86c9b;  */

undefined * FUN_101a86a14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a86b58);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112df41d8;
    func_0x0001000285a8(0x112df41d8,&UNK_10d9c29b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112df41e0;
    func_0x0001000285a8(0x112df41e0,&UNK_10d9c29b8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a86c9c; end: 101a86d07;  */

ulong FUN_101a86c9c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86878);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000101a86fd8(uVar2,uVar4,0x112df4138,&PTR_PTR_1126bd120,0x112df4140,&UNK_10d9c2940);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a86874);
      (*pcVar1)();
    }
    FUN_101a87160(0,uVar2,uVar3 + 0x20,param_4,0x112df4138,&PTR_PTR_1126bd120);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101a86d08; end: 101a86e07;  */

undefined * FUN_101a86d08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a86e08);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112df4190;
    func_0x0001000285a8(0x112df4190,&UNK_10d9c2980);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a86e08; end: 101a86f4b;  */

undefined * FUN_101a86e08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a86f4c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112df4180;
    func_0x0001000285a8(0x112df4180,&UNK_10d9c2970);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112df4188;
    func_0x0001000285a8(0x112df4188,&UNK_10d9c2978);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a86f4c; end: 101a87067;  */

undefined *
FUN_101a86f4c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101a87408(param_3,param_4,param_5);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101a87068; end: 101a8715f;  */

long FUN_101a87068(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8715c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87160);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101a85058(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101a85058(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87158);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101a87160; end: 101a8727b;  */

long FUN_101a87160(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87278);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8727c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101a877bc(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101a877bc(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87274);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101a8727c; end: 101a87373;  */

long FUN_101a8727c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87370);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a87374);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010401523c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010401523c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8736c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101a87374; end: 101a873eb;  */

void FUN_101a87374(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101a877bc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a873ec; end: 101a87407;  */

void FUN_101a873ec(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112df4198;
  plVar5 = (long *)&UNK_10d9c2988;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_10401523c)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a87408; end: 101a87473;  */

void FUN_101a87408(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a87474; end: 101a874fb;  */

void FUN_101a87474(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112df41d0;
  plVar5 = (long *)&UNK_10d9c29a8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_104015488)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a874fc; end: 101a8753b;  */

void FUN_101a874fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df40f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c2afc;
  func_0x000107c61520(&UNK_10d9c2afc,&UNK_110437c60);
  puRam0000000112df40f0 = puVar1;
  return;
}



/* Entry: 101a8753c; end: 101a8757f;  */

long FUN_101a8753c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101a87580; end: 101a8760f;  */

void FUN_101a87580(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a87610;
  plVar5[9] = lVar2;
  plVar5[10] = lVar4;
  plVar5[7] = lVar3;
  plVar5[8] = unaff_x20 + 0x20;
  plVar5[5] = param_3;
  plVar5[6] = lVar1;
  plVar5[3] = param_1;
  plVar5[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a860e0,0,0);
  return;
}



/* Entry: 101a87610; end: 101a87653;  */

void FUN_101a87610(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a87650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101a87654; end: 101a876db;  */

void FUN_101a87654(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  
  piVar3 = *(int **)(unaff_x20 + 0x10);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a876dc;
  plVar6[2] = param_1;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar6[3] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101a862e0;
                    /* WARNING: Could not recover jumptable at 0x000101a862dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(uVar2,uVar4,uVar7);
  return;
}



/* Entry: 101a876dc; end: 101a87767;  */

void FUN_101a876dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a87714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a87768; end: 101a877a7;  */

undefined8 FUN_101a87768(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a877a8; end: 101a877bb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101a877a8(ulong param_1,ulong param_2,undefined8 param_3,char param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2;
  if (param_4 != '\x01') {
    uVar2 = (uint)(param_2 >> 0x20);
    uVar3 = uVar2 >> 0x1c & 3;
    uVar1 = param_1;
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        uVar2 = uVar2 >> 0x1e;
        if (uVar2 == 1) {
          param_1 = param_2 & 0xfffffffffffffff;
        }
        else if (uVar2 != 2) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101a877bc; end: 101a877fb;  */

void FUN_101a877bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a877fc; end: 101a8788b;  */

void FUN_101a877fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8788c,0,0);
  return;
}



/* Entry: 101a8788c; end: 101a879d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a8788c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_113046cf8);
  if ((int)uVar6 == 2) {
    lVar3 = *(long *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar6);
    piVar5 = *(int **)(lVar2 + 0x20);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a879d4;
                    /* WARNING: Could not recover jumptable at 0x000101a87928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (plVar4,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x48),uVar6,
               lVar2);
    return;
  }
  func_0x000107c602fc(0x36);
  puVar7 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar7 = 0;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000034,0x800000010efce630);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x38),puVar7,&UNK_110735428,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar8 = *puVar7;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101a879d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8,uVar6,0x101);
  return;
}



/* Entry: 101a879d4; end: 101a87a1b;  */

void FUN_101a879d4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a87a1c,0,0);
  return;
}



/* Entry: 101a87a1c; end: 101a87b1f;  */

void FUN_101a87a1c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = uVar5;
  (**(code **)(lVar4 + 0x30))(uVar5,1,uVar6);
  if ((int)uVar1 == 1) {
    func_0x0001000293e4(uVar5);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a87aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0xd000000000000017,0x800000010efce510,0x100);
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x78);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  (**(code **)(lVar4 + 0x20))(lVar2,uVar5,uVar6);
  FUN_101a97a8c();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  plVar3 = (long *)(lVar7 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar7 + 0x28));
  lVar7 = *plVar3;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a87b20;
  lVar4 = *(long *)(unaff_x22 + 0x78);
  plVar3[3] = lVar2;
  plVar3[4] = lVar7;
  plVar3[2] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a88248,0,0);
  return;
}



/* Entry: 101a87b20; end: 101a87b87;  */

void FUN_101a87b20(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x98) = param_1;
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
  FUN_101a8808c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101a87b88;
  }
  else {
    pcVar2 = FUN_101a87eb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101a87b88; end: 101a87eaf;  */

void FUN_101a87b88(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  lVar18 = *(long *)(unaff_x22 + 0x98);
  uVar14 = *(ulong *)(lVar18 + 0x10);
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 == 0) {
LAB_101a87de4:
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar18 = *(long *)(unaff_x22 + 0x70);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x68);
    bVar1 = *(long *)(puVar22 + 0x10) == 0;
    if (bVar1) {
      func_0x000107c6142c(puVar22);
      func_0x000107c6142c(uVar17);
      uVar17 = 0x800000010efce6b0;
      (**(code **)(lVar18 + 8))(uVar19,uVar21);
      puVar22 = (undefined *)0xd00000000000003c;
    }
    else {
      (**(code **)(lVar18 + 8))(uVar19,uVar21);
      func_0x000107c6142c(uVar17);
      uVar17 = 0x3000000000000000;
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c615c0(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000101a87e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar22,uVar17,CONCAT11(bVar1,bVar1));
    return;
  }
  uVar13 = 0;
LAB_101a87bf0:
  plVar15 = (long *)(lVar18 + 0x38 + uVar13 * 0x20);
  uVar20 = uVar13;
  do {
    if (*(ulong *)(lVar18 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a87ea4);
      (*pcVar6)();
    }
    lVar2 = plVar15[-3];
    lVar4 = plVar15[-2];
    lVar3 = plVar15[-1];
    lVar5 = *plVar15;
    puVar11 = PTR_PTR_1126bd150;
    func_0x000107c61168();
    func_0x00010006c00c(lVar2,lVar4);
    lVar7 = lVar2;
    lVar12 = lVar4;
    func_0x000107c5ee20(lVar2);
    if (0x7fffffff < lVar3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a87ea8);
      (*pcVar6)();
    }
    if ((lVar3 < -0x80000000) || (lVar5 < -0x80000000)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a87eac);
      (*pcVar6)();
    }
    if (0x7fffffff < lVar5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a87eb0);
      (*pcVar6)();
    }
    func_0x000107c3ef80();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar8 = puVar11;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x000107c4f728();
      if (0x31 < (int)puVar9) break;
      func_0x000107c61170(puVar8);
    }
    uVar20 = uVar20 + 1;
    func_0x000107c61170(puVar11);
    func_0x00010006c090(lVar2,lVar4);
    plVar15 = plVar15 + 4;
    if (uVar14 == uVar20) goto LAB_101a87de4;
  } while( true );
  puVar9 = puVar8;
  func_0x000107c44c40();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c4f728();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar11);
  func_0x00010006c090(lVar2,lVar4);
  puVar11 = puVar22;
  func_0x000107c61558();
  if (((ulong)puVar11 & 1) == 0) {
    puVar11 = (undefined *)0x0;
    FUN_101a86590(0,*(long *)(puVar22 + 0x10) + 1,1,puVar22);
    puVar22 = puVar11;
  }
  uVar16 = *(ulong *)(puVar22 + 0x10);
  if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar16) {
    puVar22 = (undefined *)(ulong)(1 < *(ulong *)(puVar22 + 0x18));
    FUN_101a86590(puVar22,uVar16 + 1,1);
  }
  uVar13 = uVar20 + 1;
  *(ulong *)(puVar22 + 0x10) = uVar16 + 1;
  *(undefined **)(puVar22 + uVar16 * 0x18 + 0x20) = puVar10;
  *(long *)(puVar22 + uVar16 * 0x18 + 0x28) = lVar12;
  *(int *)(puVar22 + uVar16 * 0x18 + 0x30) = (int)puVar9;
  if (uVar14 - 1 == uVar20) goto LAB_101a87de4;
  goto LAB_101a87bf0;
}



/* Entry: 101a87eb0; end: 101a87fa3;  */

void FUN_101a87eb0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c602fc(0x39);
  func_0x000107c5fb78(0xd000000000000037,0x800000010efce670);
  func_0x000107c614cc(uVar5,unaff_x22 + 0x40,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x18),uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c614ac(uVar5);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a87fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xe000000000000000,0x101);
  return;
}



/* Entry: 101a87fa4; end: 101a87fcf;  */

void FUN_101a87fa4(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a87fd0; end: 101a8802f;  */

void FUN_101a87fd0(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a88030;
  plVar2[10] = param_2;
  plVar2[0xb] = lVar3;
  plVar2[9] = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xc] = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0xd] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xe] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8788c,0,0);
  return;
}



/* Entry: 101a88030; end: 101a8808b;  */

void FUN_101a88030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a88088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 101a8808c; end: 101a880ab;  */

void FUN_101a8808c(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 101a880ac; end: 101a8822b;  */

void FUN_101a880ac(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 6;
  func_0x000107c602e8();
  lVar13 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar13 * 0x10 + 0x112df43a0);
    uVar4 = *(ulong *)(lVar13 * 0x10 + 0x112df43a8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar4);
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar3,uVar4);
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar12 >> 6;
    uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
    uVar10 = 1L << (uVar12 & 0x3f);
    if ((uVar10 & uVar9) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        if ((uVar8 == uVar3 && uVar9 == uVar4) ||
           (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          goto LAB_101a88114;
        }
        uVar12 = uVar12 + 1 & ~uVar11;
        uVar8 = uVar12 >> 6;
        uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
        uVar10 = 1L << (uVar12 & 0x3f);
      } while ((uVar10 & uVar9) != 0);
    }
    *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a8822c);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_101a88114:
    lVar13 = lVar13 + 1;
    if (lVar13 == 6) {
      func_0x000107c61408(0x112df43a0,6,PTR___sSSN_11034da80);
      lRam0000000112df4370 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 101a8822c; end: 101a88247;  */

void FUN_101a8822c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a88248,0,0);
  return;
}



/* Entry: 101a88248; end: 101a88303;  */

void FUN_101a88248(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  FUN_101a8a004();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101a882a0;
  plVar2[0x10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8a1fc,0,0);
  return;
}



/* Entry: 101a88304; end: 101a8856f;  */

void FUN_101a88304(double param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x38);
  func_0x000107c600d4(puVar2,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48));
  if (param_1 <= 0.0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_101a874fc();
    func_0x000107c613f8(&UNK_110437c60,puVar2,0,0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101a883d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x18);
  if (lVar6 == 0) {
    lVar6 = 0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
  }
  else if (lVar6 == 1) {
    lVar6 = 0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
  }
  else {
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      lVar8 = *(long *)(lVar6 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto joined_r0x000101a88410;
    }
    lVar6 = 0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
  }
  func_0x000107c61538();
  lVar8 = *(long *)(lVar6 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000101a88410:
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (lVar8 == 0) {
    func_0x000107c6142c(lVar6);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101a02cf8(0,lVar8,0);
    lVar10 = 0x20;
    do {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
      dVar11 = *(double *)(lVar6 + lVar10);
      uVar4 = uVar7;
      func_0x000107c600d4(*(undefined8 *)(unaff_x22 + 0x38));
      param_1 = dVar11 * param_1;
      func_0x000107c600d0(param_1);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x20) = uVar7;
      *(int *)(puVar9 + uVar1 * 0x18 + 0x28) = (int)uVar4;
      *(int *)(puVar9 + uVar1 * 0x18 + 0x2c) = (int)((ulong)uVar4 >> 0x20);
      *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x30) = uVar5;
      lVar10 = lVar10 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(lVar6);
  }
  *(undefined **)(unaff_x22 + 0x58) = puVar9;
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a885a4;
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar8 = *(long *)(unaff_x22 + 0x28);
  plVar3[0xc] = (long)puVar9;
  plVar3[0xd] = lVar6;
  plVar3[0xb] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a886a0,0,0);
  return;
}



/* Entry: 101a88570; end: 101a885a3;  */

void FUN_101a88570(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101a885a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a885a4; end: 101a88617;  */

void FUN_101a885a4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x70) = param_1;
    pcVar2 = FUN_101a88618;
  }
  else {
    pcVar2 = (code *)0x101a88650;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101a88618; end: 101a88683;  */

void FUN_101a88618(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101a8864c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 101a88684; end: 101a8869f;  */

void FUN_101a88684(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a886a0,0,0);
  return;
}



/* Entry: 101a886a0; end: 101a887cf;  */

code * FUN_101a886a0(double param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar18;
  double dVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  double dVar24;
  
  puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x000107c610f8();
  func_0x000107c457a0();
  *(undefined **)(unaff_x22 + 0x70) = puVar4;
  func_0x000107c52860();
  uVar18 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar20 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar18;
  *(undefined4 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xac) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar20;
  func_0x000107c57e18(puVar4);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar18;
  *(undefined4 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xc4) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar20;
  func_0x000107c57e14(puVar4);
  iVar3 = 2;
  uVar15 = 0;
  func_0x000100029b9c(2,0x10,0);
  if (iVar3 == 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101a888ac;
    func_0x000107c61448(unaff_x22 + 0x10,1);
    FUN_101a88b78();
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  }
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a887d0;
  lVar14 = *(long *)(unaff_x22 + 0x60);
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5[0xb] = (long)puVar4;
  plVar5[0xc] = lVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a3ec;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = plVar5[0xc];
  lVar16 = 0;
  func_0x000107c6004c();
  plVar5[0xd] = lVar16;
  lVar23 = *(long *)(lVar16 + -8);
  uVar7 = *(long *)(lVar23 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c60050(uVar7,lVar14);
  func_0x000107c60044(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
  plVar5[0xf] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(uVar7,lVar16);
  func_0x000107c615c0(uVar7);
  plVar5[0x11] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar8 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                   + 4);
  func_0x000107c615b8();
  plVar5[0x12] = (long)plVar8;
  *plVar8 = (long)plVar5;
  plVar8[1] = (long)FUN_101a8a500;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
LAB_107c60048:
    UNRECOVERED_JUMPTABLE = (code *)(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588)
              (plVar8,UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar9 = *(double **)(*plVar5 + 0x90);
  plVar5 = (long *)*plVar5;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a574;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined8 *)plVar5[5];
  if ((char)plVar5[9] == '\x01') {
    dVar19 = (double)plVar5[4];
    dVar24 = (double)plVar5[3];
    param_1 = (double)plVar5[2];
    FUN_101a874fc();
    uVar15 = 0;
    func_0x000107c613f8(&UNK_110437c60,pdVar9,0);
    pdVar9[1] = dVar24;
    *pdVar9 = param_1;
    pdVar9[2] = dVar19;
    pdVar9[3] = (double)puVar21;
    func_0x000107c61654();
  }
  else {
    if ((char)plVar5[9] == -1) {
      lVar16 = plVar5[0xe];
      (*(code *)plVar5[0xf])(lVar16,plVar5[0xd]);
      func_0x000107c615c0(lVar16);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[1];
      UNRECOVERED_JUMPTABLE = (code *)plVar5[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_101a8a9e8;
    }
    puVar10 = puVar21;
    func_0x000107c60980();
    puVar11 = puVar21;
    func_0x000107c6097c();
    if ((ulong)(puVar10 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a99c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar16 = (long)puVar10 * 4;
    puVar12 = puVar11;
    func_0x000107c608bc();
    puVar13 = (undefined8 *)0x0;
    uVar15 = 8;
    func_0x000107c608a0(0,puVar10,puVar11,8,lVar16,puVar12,1);
    func_0x000107c61170();
    if (puVar13 == (undefined8 *)0x0) {
      FUN_101a874fc();
      uVar15 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar12,0);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 3;
      func_0x000107c61654();
    }
    else {
      param_1 = 0.0;
      func_0x000107c5ff40(0,0,(double)(long)puVar10,(double)(long)puVar11,puVar21,0);
      puVar21 = puVar13;
      func_0x000107c608a8();
      if (puVar21 != (undefined8 *)0x0) {
        uVar7 = (long)puVar11 * lVar16;
        if (SUB168(SEXT816((long)puVar11) * SEXT816(lVar16),8) != (long)uVar7 >> 0x3f) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a9a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar7 == 0) {
          func_0x000107c61170(puVar13);
          lVar16 = 0;
          UNRECOVERED_JUMPTABLE = (code *)plVar5[0x10];
          UNRECOVERED_JUMPTABLE_00 = (code *)0xc000000000000000;
        }
        else if (uVar7 < 0xf) {
          uVar6 = plVar5[0x10];
          *(undefined8 *)((long)plVar5 + 0x49) = 0;
          *(undefined8 *)((long)plVar5 + 0x4f) = 0;
          *(char *)((long)plVar5 + 0x57) = (char)uVar7;
          func_0x000107c610b4((long)plVar5 + 0x49,puVar21,uVar7);
          func_0x000107c61170(puVar13);
          lVar16 = *(long *)((long)plVar5 + 0x49);
          UNRECOVERED_JUMPTABLE_00 =
               (code *)(uVar6 & 0xf00000000000000 | (ulong)*(uint7 *)((long)plVar5 + 0x51));
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        }
        else {
          uVar18 = 0;
          func_0x000107c5ec40();
          func_0x000107c613fc();
          func_0x000107c5ec2c(puVar21,uVar7,uVar18);
          func_0x000107c61170(puVar13);
          if (uVar7 < 0x7fffffff) {
            lVar16 = uVar7 << 0x20;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar21 | 0x4000000000000000);
          }
          else {
            lVar16 = 0;
            func_0x000107c5ee0c();
            func_0x000107c613fc();
            *(undefined8 *)(lVar16 + 0x10) = 0;
            *(ulong *)(lVar16 + 0x18) = uVar7;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar21 | 0x8000000000000000);
          }
          UNRECOVERED_JUMPTABLE = (code *)plVar5[0x10];
        }
        uVar6 = plVar5[0x11];
        func_0x00010006c00c(lVar16,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61558();
        uVar22 = plVar5[0x11];
        uVar7 = uVar22;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
          FUN_101a86488(0,*(long *)(uVar22 + 0x10) + 1,1);
          uVar15 = uVar22;
        }
        uVar6 = *(ulong *)(uVar7 + 0x10);
        uVar22 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
          uVar22 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_101a86488(uVar22,uVar6 + 1,1);
          uVar15 = uVar7;
        }
        *(ulong *)(uVar22 + 0x10) = uVar6 + 1;
        lVar17 = uVar22 + uVar6 * 0x20;
        *(long *)(lVar17 + 0x20) = lVar16;
        *(code **)(lVar17 + 0x28) = UNRECOVERED_JUMPTABLE_00;
        *(undefined8 **)(lVar17 + 0x30) = puVar10;
        *(undefined8 **)(lVar17 + 0x38) = puVar11;
        FUN_101a8b200(plVar5 + 2,0x112df4328,&UNK_10d9c2a68);
        func_0x00010006c090(lVar16);
        plVar5[0x10] = (long)UNRECOVERED_JUMPTABLE;
        plVar5[0x11] = uVar22;
        plVar8 = (long *)(ulong)*(uint *)(
                                         PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                         + 4);
        func_0x000107c615b8();
        plVar5[0x12] = (long)plVar8;
        *plVar8 = (long)plVar5;
        plVar8[1] = (long)FUN_101a8a500;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto LAB_107c60048;
        goto LAB_101a8a9e8;
      }
      FUN_101a874fc();
      uVar15 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar21,0);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar13);
    }
    FUN_101a8b200(plVar5 + 2,0x112df4328,&UNK_10d9c2a68);
  }
  lVar17 = plVar5[0x11];
  lVar16 = plVar5[0xe];
  UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[0xd];
  (*(code *)plVar5[0xf])(lVar16);
  func_0x000107c6142c(lVar17);
  func_0x000107c615c0(lVar16);
  UNRECOVERED_JUMPTABLE = (code *)plVar5[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_101a8a9e8:
  func_0x000107c60e78();
  func_0x000107c600d4();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (uVar15 != 0) {
    uVar18 = 0;
    uVar6 = uVar15;
    func_0x000101a02cf8(0);
    uVar7 = 0;
    do {
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c600d0((param_1 / (double)(long)uVar15) * (double)uVar7);
      uVar22 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar22) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar4 + 0x18),uVar22 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar22 + 1;
      *(code **)(puVar4 + uVar22 * 0x18 + 0x20) = UNRECOVERED_JUMPTABLE;
      uVar7 = uVar7 + 1;
      *(int *)(puVar4 + uVar22 * 0x18 + 0x28) = (int)uVar6;
      *(int *)(puVar4 + uVar22 * 0x18 + 0x2c) = (int)(uVar6 >> 0x20);
      *(undefined8 *)(puVar4 + uVar22 * 0x18 + 0x30) = uVar18;
    } while (uVar15 != uVar7);
  }
  return (code *)puVar4;
}



/* Entry: 101a887d0; end: 101a8883b;  */

void FUN_101a887d0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_101a8883c;
  }
  else {
    pcVar1 = (code *)0x101a88878;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a8883c; end: 101a888ab;  */

void FUN_101a8883c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101a88874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101a888ac; end: 101a88917;  */

void FUN_101a888ac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_101a88918;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x101a88954;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a88918; end: 101a88987;  */

void FUN_101a88918(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101a88950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101a88988; end: 101a88b77;  */

void FUN_101a88988(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar11 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x6e6f697461727564;
  uVar9 = 0xe800000000000000;
  func_0x000107c5fadc();
  puStack_50 = (undefined *)0x0;
  lVar5 = param_1;
  puVar10 = puVar1;
  func_0x000107c5bd2c();
  func_0x000107c61170();
  puVar2 = puStack_50;
  if (lVar5 == 4) {
LAB_101a88a50:
    FUN_101a874fc();
    puVar3 = &UNK_110437c60;
    func_0x000107c613f8(&UNK_110437c60,puVar1,0,0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 1;
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar10 = (undefined8 *)0x0;
    ppuVar11 = (undefined **)0x0;
    puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar1 = puVar3;
    func_0x000107c61174();
    func_0x000107c61454(param_2);
    param_2 = puVar2;
  }
  else {
    if (lVar5 == 3) {
      puVar3 = puStack_50;
      if (puStack_50 == (undefined *)0x0) {
        FUN_101a874fc();
        puVar3 = &UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar1,0,0);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 1;
      }
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar10 = (undefined8 *)0x0;
      ppuVar11 = (undefined **)0x0;
      puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar1 = puVar3;
      func_0x000107c61174(puVar2);
      func_0x000107c61454();
      goto LAB_101a88b48;
    }
    if (lVar5 != 2) goto LAB_101a88a50;
    func_0x000107c61174();
    func_0x000107c42378(&puStack_50,param_1);
    puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
    *puVar1 = puStack_50;
    puVar1[1] = uStack_48;
    puVar1[2] = uStack_40;
    func_0x000107c61450(param_2);
    param_2 = puVar2;
  }
  func_0x000107c61170();
LAB_101a88b48:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  lVar4 = 0;
  puStack_110 = param_2;
  puStack_108 = (undefined1 *)ppuVar11;
  func_0x000107c5f7fc();
  lStack_f0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar12 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  lStack_100 = *(long *)(lVar5 + -8);
  lStack_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101a8b24c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar14 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar6);
  lVar5 = lVar15;
  func_0x000107c5fff0(lVar15);
  (**(code **)(lVar14 + 8))(lVar15,lVar6);
  puVar2 = &UNK_110437ba0;
  func_0x000107c613fc(&UNK_110437ba0,0x30,7);
  puVar7 = puStack_108;
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar10;
  *(undefined1 **)(puVar2 + 0x20) = puStack_108;
  *(undefined **)(puVar2 + 0x28) = puStack_110;
  pcStack_c0 = FUN_101a8b240;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_1000b0c7c;
  puStack_c8 = &UNK_110437bb8;
  ppuVar11 = &puStack_e0;
  puStack_b8 = puVar2;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61434(uVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c6157c(puVar7);
  func_0x000107c5f808(lVar13);
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar9;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar12,&puStack_e8,uVar9,uVar8,lVar4,puVar7);
  func_0x000107c5ffe8(0,lVar13,lVar12,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(lVar5);
  (**(code **)(lStack_f0 + 8))(lVar12,lVar4);
  (**(code **)(lStack_100 + 8))(lVar13,lStack_f8);
  func_0x000107c61574(puStack_b8);
  return;
}



/* Entry: 101a88b78; end: 101a88deb;  */

void FUN_101a88b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_c0 = param_1;
  uStack_b8 = param_4;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101a8b24c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar2 = lVar12;
  func_0x000107c5fff0(lVar12);
  (**(code **)(lVar11 + 8))(lVar12,lVar3);
  puVar4 = &UNK_110437ba0;
  func_0x000107c613fc(&UNK_110437ba0,0x30,7);
  uVar6 = uStack_b8;
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x28) = uStack_c0;
  pcStack_70 = FUN_101a8b240;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110437bb8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(uVar6);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar1,uVar6);
  func_0x000107c5ffe8(0,lVar10,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101a88dec; end: 101a8931f;  */

void FUN_101a88dec(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint7 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined6 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar13;
  ulong unaff_x22;
  long lVar14;
  undefined8 *unaff_x23;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar16;
  undefined8 *unaff_x27;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_1e0 [8];
  undefined8 *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  uint uStack_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(ulong *)(param_1 + 0x10);
  puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_120 = param_4;
  puStack_f0 = param_2;
  if (uVar12 != 0) {
    uStack_f8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    unaff_x21 = (undefined8 *)(param_1 + 0x30);
    do {
      unaff_x26 = (undefined8 *)unaff_x21[-2];
      uStack_98 = *(uint *)(unaff_x21 + -1);
      unaff_x22 = (ulong)uStack_98;
      uVar1 = *(uint *)((long)unaff_x21 + -4);
      unaff_x24 = (undefined8 *)(ulong)uVar1;
      unaff_x27 = (undefined8 *)*unaff_x21;
      puStack_c0 = (undefined8 *)0x0;
      uStack_b8 = uStack_f8;
      uStack_a8 = uStack_100;
      uStack_a0 = SUB86(unaff_x26,0);
      uStack_9a = (undefined2)((ulong)unaff_x26 >> 0x30);
      uStack_94 = (undefined2)uVar1;
      uStack_92 = (undefined1)(uVar1 >> 0x10);
      uStack_91 = (undefined1)(uVar1 >> 0x18);
      unaff_x23 = puStack_f0;
      uStack_b0 = uVar19;
      puStack_90 = unaff_x27;
      func_0x000107c40798();
      unaff_x20 = puStack_c0;
      if (unaff_x23 == (undefined8 *)0x0) {
        puVar5 = puStack_c0;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(puVar5);
        func_0x000107c61654();
LAB_101a891b4:
        puStack_c0 = unaff_x20;
        func_0x000107c614b0(unaff_x20);
        unaff_x21 = (undefined8 *)0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar6 = &uStack_a0;
        func_0x000107c6147c(puVar6,&puStack_c0,unaff_x21,&UNK_110437c60,0);
        param_2 = unaff_x21;
        if ((int)puVar6 == 0) {
          puVar5 = puStack_c0;
          func_0x000107c614ac();
          uVar12 = unaff_x22 | (long)unaff_x24 << 0x20;
          FUN_101a874fc();
          unaff_x23 = (undefined8 *)&UNK_110437c60;
          func_0x000107c613f8(&UNK_110437c60,puVar5,0,0);
          *puVar5 = unaff_x26;
          puVar5[1] = uVar12;
          puVar5[2] = unaff_x27;
          puVar5[3] = unaff_x20;
          puVar5 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8(unaff_x21,PTR___ss5ErrorWS_11034ee10,0,0);
          *puVar5 = unaff_x23;
          param_3 = param_2;
          func_0x000107c61454(puStack_120);
          puVar5 = puVar4;
          func_0x000107c6142c();
        }
        else {
          func_0x000107c614ac();
          FUN_101a874fc();
          uStack_d8 = CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT24(uStack_94,uStack_98)));
          puStack_e0 = (undefined8 *)CONCAT26(uStack_9a,uStack_a0);
          uStack_e8 = uStack_88;
          puStack_f0 = puStack_90;
          puVar17 = (undefined8 *)&UNK_110437c60;
          func_0x000107c613f8(&UNK_110437c60,unaff_x20,0,0);
          unaff_x20[1] = uStack_d8;
          *unaff_x20 = puStack_e0;
          unaff_x20[3] = uStack_e8;
          unaff_x20[2] = puStack_f0;
          puVar5 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8(unaff_x21,PTR___ss5ErrorWS_11034ee10,0,0);
          *puVar5 = puVar17;
          param_3 = param_2;
          func_0x000107c61454(puStack_120);
          func_0x000107c6142c(puVar4);
          puVar5 = puStack_c0;
          func_0x000107c614ac();
          unaff_x20 = puVar17;
        }
        goto LAB_101a892d8;
      }
      puStack_108 = unaff_x24;
      func_0x000107c61174();
      unaff_x24 = unaff_x23;
      func_0x000107c60980();
      unaff_x25 = unaff_x23;
      func_0x000107c6097c();
      if ((ulong)(unaff_x24 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a89318);
        (*pcVar3)();
      }
      lVar18 = (long)unaff_x24 * 4;
      puVar5 = unaff_x25;
      uStack_110 = unaff_x22;
      puStack_e0 = puVar4;
      func_0x000107c608bc();
      puVar4 = (undefined8 *)0x0;
      param_3 = unaff_x25;
      func_0x000107c608a0(0,unaff_x24,unaff_x25,8,lVar18,puVar5,1);
      func_0x000107c61170();
      if (puVar4 == (undefined8 *)0x0) {
        FUN_101a874fc();
        unaff_x20 = (undefined8 *)&UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar5,0,0);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 3;
        func_0x000107c61654();
LAB_101a8919c:
        func_0x000107c61170(unaff_x23);
        unaff_x22 = uStack_110;
        unaff_x24 = puStack_108;
        puVar4 = puStack_e0;
        goto LAB_101a891b4;
      }
      func_0x000107c5ff40(0,0,(double)(long)unaff_x24,(double)(long)unaff_x25,unaff_x23,0);
      puVar5 = puVar4;
      func_0x000107c608a8();
      if (puVar5 == (undefined8 *)0x0) {
        FUN_101a874fc();
        unaff_x20 = (undefined8 *)&UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar5,0,0);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 3;
        func_0x000107c61654();
        func_0x000107c61170(puVar4);
        goto LAB_101a8919c;
      }
      puVar17 = (undefined8 *)((long)unaff_x25 * lVar18);
      if (SUB168(SEXT816((long)unaff_x25) * SEXT816(lVar18),8) != (long)puVar17 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8931c);
        (*pcVar3)();
      }
      if (puVar17 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar4);
        unaff_x20 = (undefined8 *)0x0;
        unaff_x26 = (undefined8 *)0xc000000000000000;
      }
      else if (puVar17 < (undefined8 *)0xf) {
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_a0 = 0;
        uStack_9a = 0;
        uStack_92 = SUB81(puVar17,0);
        func_0x000107c610b4(&uStack_a0,puVar5);
        unaff_x20 = (undefined8 *)CONCAT26(uStack_9a,uStack_a0);
        uVar2 = CONCAT16(uStack_92,CONCAT24(uStack_94,uStack_98));
        func_0x000107c61170(puVar4);
        unaff_x26 = (undefined8 *)((ulong)puStack_118 & 0xf00000000000000 | (ulong)uVar2);
        param_3 = puVar17;
        puStack_118 = unaff_x26;
      }
      else {
        param_3 = (undefined8 *)0x0;
        func_0x000107c5ec40();
        func_0x000107c613fc();
        func_0x000107c5ec2c(puVar5,puVar17);
        if (puVar17 < (undefined8 *)0x7fffffff) {
          func_0x000107c61170(puVar4);
          unaff_x20 = (undefined8 *)((long)puVar17 << 0x20);
          unaff_x26 = (undefined8 *)((ulong)puVar5 | 0x4000000000000000);
        }
        else {
          unaff_x20 = (undefined8 *)0x0;
          func_0x000107c5ee0c();
          param_3 = (undefined8 *)0x7;
          func_0x000107c613fc();
          unaff_x20[2] = 0;
          unaff_x20[3] = puVar17;
          func_0x000107c61170(puVar4);
          unaff_x26 = (undefined8 *)((ulong)puVar5 | 0x8000000000000000);
        }
      }
      puVar4 = puStack_e0;
      func_0x00010006c00c(unaff_x20,unaff_x26);
      puVar5 = puVar4;
      func_0x000107c61558();
      puVar17 = puVar4;
      if (((ulong)puVar5 & 1) == 0) {
        puVar17 = (undefined8 *)0x0;
        param_3 = (undefined8 *)0x1;
        FUN_101a86488(0,puVar4[2] + 1,1,puVar4);
      }
      unaff_x22 = puVar17[2];
      unaff_x27 = (undefined8 *)(unaff_x22 + 1);
      puVar4 = puVar17;
      if ((ulong)puVar17[3] >> 1 <= unaff_x22) {
        puVar4 = (undefined8 *)(ulong)(1 < (ulong)puVar17[3]);
        param_3 = (undefined8 *)0x1;
        FUN_101a86488(puVar4,unaff_x27,1,puVar17);
      }
      unaff_x21 = unaff_x21 + 3;
      puVar4[2] = unaff_x27;
      puVar4[unaff_x22 * 4 + 4] = unaff_x20;
      puVar4[unaff_x22 * 4 + 5] = unaff_x26;
      puVar4[unaff_x22 * 4 + 6] = unaff_x24;
      puVar4[unaff_x22 * 4 + 7] = unaff_x25;
      func_0x000107c61170(unaff_x23);
      param_2 = unaff_x26;
      func_0x00010006c090(unaff_x20);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  **(undefined8 **)(puStack_120[8] + 0x28) = puVar4;
  puVar5 = puStack_120;
  func_0x000107c61450();
LAB_101a892d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    pcStack_128 = FUN_101a89320;
    lVar7 = 0;
    puStack_1d8 = puVar5;
    puStack_180 = puVar4;
    puStack_178 = unaff_x27;
    puStack_170 = unaff_x26;
    puStack_168 = unaff_x25;
    puStack_160 = unaff_x24;
    puStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    puStack_148 = unaff_x21;
    puStack_140 = unaff_x20;
    uStack_138 = uVar12;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000107c5f7fc();
    lStack_1c0 = *(long *)(lVar7 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1c0 + 0x40));
    puVar13 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar18 = 0;
    func_0x000107c5f824();
    lStack_1d0 = *(long *)(lVar18 + -8);
    lStack_1c8 = lVar18;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d0 + 0x40));
    lVar15 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lVar8 = 0;
    func_0x000107c5f804();
    lVar16 = *(long *)(lVar8 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
    lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    FUN_101a8b24c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar16 + 0x68))
              (lVar14,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar8);
    lVar18 = lVar14;
    func_0x000107c5fff0(lVar14);
    (**(code **)(lVar16 + 8))(lVar14,lVar8);
    puVar9 = &UNK_110437b00;
    func_0x000107c613fc(&UNK_110437b00,0x28,7);
    *(undefined8 **)(puVar9 + 0x10) = param_2;
    *(undefined8 **)(puVar9 + 0x18) = param_3;
    *(undefined8 **)(puVar9 + 0x20) = puStack_1d8;
    pcStack_190 = FUN_101a8b1d0;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0x42000000;
    puStack_1a0 = &UNK_1000b0c7c;
    puStack_198 = &UNK_110437b18;
    ppuVar10 = &puStack_1b0;
    puStack_188 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c5f808(lVar15);
    puStack_1b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar19 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar11 = uVar19;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar13,&puStack_1b8,uVar19,uVar11,lVar7,param_3);
    func_0x000107c5ffe8(0,lVar15,puVar13,ppuVar10);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar18);
    (**(code **)(lStack_1c0 + 8))(puVar13,lVar7);
    (**(code **)(lStack_1d0 + 8))(lVar15,lStack_1c8);
    func_0x000107c61574(puStack_188);
    return;
  }
  return;
}



/* Entry: 101a89320; end: 101a8958b;  */

void FUN_101a89320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_b8 = param_1;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101a8b24c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar3);
  lVar2 = lVar9;
  func_0x000107c5fff0(lVar9);
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
  puVar4 = &UNK_110437b00;
  func_0x000107c613fc(&UNK_110437b00,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = uStack_b8;
  pcStack_70 = FUN_101a8b1d0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110437b18;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar1,param_3);
  func_0x000107c5ffe8(0,lVar10,puVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101a8958c; end: 101a89853;  */

void FUN_101a8958c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar13 != 0) {
    unaff_x20 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
    lVar9 = param_2;
    do {
      lVar2 = param_2;
      func_0x000107c40798();
      uVar12 = 0;
      if (lVar2 == 0) {
        uVar11 = uVar12;
        func_0x000107c61174(0);
        func_0x000107c5ed30();
        func_0x000107c61170(uVar11);
        func_0x000107c61654();
        func_0x000107c6142c();
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        FUN_101a874fc();
        unaff_x20 = &UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar8,0,0);
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8[2] = uVar11;
        puVar8[3] = uVar12;
        uVar12 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar8 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar8 = unaff_x20;
        func_0x000107c61454(param_3,uVar12);
        goto LAB_101a89814;
      }
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c61174(0);
      func_0x000107c45af0();
      puVar4 = puVar3;
      func_0x000107c60bb4(0x3fe999999999999a);
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar2);
      }
      else {
        puVar5 = puVar4;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar4);
        func_0x00010006c00c(puVar5,lVar9);
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined8 *)0x0;
          func_0x000100f23260(0,puVar8[2] + 1,1,puVar8);
        }
        uVar1 = puVar7[2];
        puVar8 = puVar7;
        if ((ulong)puVar7[3] >> 1 <= uVar1) {
          puVar8 = (undefined8 *)(ulong)(1 < (ulong)puVar7[3]);
          func_0x000100f23260(puVar8,uVar1 + 1,1,puVar7);
        }
        puVar8[2] = uVar1 + 1;
        puVar8[uVar1 * 2 + 4] = puVar5;
        puVar8[uVar1 * 2 + 5] = lVar9;
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar3);
        func_0x00010006c090(puVar5);
      }
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar8;
  func_0x000107c61450();
LAB_101a89814:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
    return;
  }
  return;
}



/* Entry: 101a89854; end: 101a89863;  */

void FUN_101a89854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a89864; end: 101a89957;  */

void FUN_101a89864(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a89ec8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a89958; end: 101a89c5f;  */

undefined * FUN_101a89958(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a89a58);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112df44a8;
    func_0x0001000285a8(0x112df44a8,&UNK_10d9c2ab8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a89c60; end: 101a89ec7;  */

undefined * FUN_101a89c60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a89da4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112df44b0;
    func_0x0001000285a8(0x112df44b0,&UNK_10d9c2ac0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112df44b8;
    func_0x0001000285a8(0x112df44b8,&UNK_10d9c2ac8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a89ec8; end: 101a8a003;  */

undefined *
FUN_101a89ec8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a8a004);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101a8b24c(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a8a004; end: 101a8a1e3;  */

undefined * FUN_101a8a004(ulong param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  
  if (lRam0000000112df4368 != -1) {
    param_1 = 0x112df4368;
    param_2 = FUN_101a880ac;
    func_0x000107c61568(0x112df4368,FUN_101a880ac);
  }
  uVar2 = uRam0000000112df4370;
  func_0x000107c5ed6c();
  pcVar7 = param_2;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_2);
  func_0x0001000f66f0(param_1,pcVar7,uVar2);
  func_0x000107c6142c(pcVar7);
  if ((param_1 & 1) == 0) {
    puVar3 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = 0xd00000000000001e;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(puVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(puVar3 + 0x28) = 0x800000010efce6f0;
    *(undefined8 *)(puVar3 + 0x30) = 0x706d2f6f65646976;
    *(undefined8 *)(puVar3 + 0x38) = 0xe900000000000034;
    puVar4 = puVar3;
    func_0x000100214a84();
    func_0x000107c61588(puVar3);
    FUN_101a8b200(puVar3 + 0x20,0x112d4b5f0,&UNK_10d9127d0);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    puVar5 = puVar3;
    func_0x000107c5ed90();
    puVar6 = puVar4;
    func_0x000107c5f9dc(puVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar4);
    func_0x000107c48fd4(puVar3);
    func_0x000107c61170(puVar5);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    puVar6 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c48fd4(puVar3);
  }
  func_0x000107c61170(puVar6);
  return puVar3;
}



/* Entry: 101a8a1e4; end: 101a8a1fb;  */

void FUN_101a8a1e4(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8a1fc,0,0);
  return;
}



/* Entry: 101a8a1fc; end: 101a8a31b;  */

void FUN_101a8a1fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a8a31c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
  puVar3 = &UNK_110437b50;
  func_0x000107c613fc(&UNK_110437b50,0x20,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101a8b1f8;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110437b68;
  func_0x000107c60bc4(puVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c4b794(uVar4);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a8a31c; end: 101a8a387;  */

void FUN_101a8a31c(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101a8a364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a8a384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90),
             *(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 101a8a388; end: 101a8a3eb;  */

code * FUN_101a8a388(double param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  double dVar14;
  long *unaff_x22;
  ulong uVar15;
  long lVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0xb] = param_2;
  unaff_x22[0xc] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a3ec;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[0xc];
  lVar2 = 0;
  func_0x000107c6004c();
  unaff_x22[0xd] = lVar2;
  lVar16 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar16 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0xe] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c60050(uVar4,lVar12);
  func_0x000107c60044(uVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  unaff_x22[0xf] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(uVar4,lVar2);
  func_0x000107c615c0(uVar4);
  unaff_x22[0x11] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(
                           PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                           + 4);
  func_0x000107c615b8();
  unaff_x22[0x12] = (long)puVar5;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_101a8a500;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
LAB_107c60048:
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588)
              (puVar5,UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar6 = *(double **)(*unaff_x22 + 0x90);
  unaff_x22 = (long *)*unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a574;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)unaff_x22[5];
  if ((char)unaff_x22[9] == '\x01') {
    dVar14 = (double)unaff_x22[4];
    dVar17 = (double)unaff_x22[3];
    param_1 = (double)unaff_x22[2];
    FUN_101a874fc();
    param_5 = 0;
    func_0x000107c613f8(&UNK_110437c60,pdVar6,0);
    pdVar6[1] = dVar17;
    *pdVar6 = param_1;
    pdVar6[2] = dVar14;
    pdVar6[3] = (double)puVar5;
    func_0x000107c61654();
  }
  else {
    if ((char)unaff_x22[9] == -1) {
      lVar2 = unaff_x22[0xe];
      (*(code *)unaff_x22[0xf])(lVar2,unaff_x22[0xd]);
      func_0x000107c615c0(lVar2);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_101a8a9e8;
    }
    puVar7 = puVar5;
    func_0x000107c60980();
    puVar8 = puVar5;
    func_0x000107c6097c();
    if ((ulong)(puVar7 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a99c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar2 = (long)puVar7 * 4;
    puVar9 = puVar8;
    func_0x000107c608bc();
    puVar10 = (undefined8 *)0x0;
    param_5 = 8;
    func_0x000107c608a0(0,puVar7,puVar8,8,lVar2,puVar9,1);
    func_0x000107c61170();
    if (puVar10 == (undefined8 *)0x0) {
      FUN_101a874fc();
      param_5 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar9,0);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 3;
      func_0x000107c61654();
    }
    else {
      param_1 = 0.0;
      func_0x000107c5ff40(0,0,(double)(long)puVar7,(double)(long)puVar8,puVar5,0);
      puVar5 = puVar10;
      func_0x000107c608a8();
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = (long)puVar8 * lVar2;
        if (SUB168(SEXT816((long)puVar8) * SEXT816(lVar2),8) != (long)uVar4 >> 0x3f) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a9a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar4 == 0) {
          func_0x000107c61170(puVar10);
          lVar2 = 0;
          UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x10];
          UNRECOVERED_JUMPTABLE_00 = (code *)0xc000000000000000;
        }
        else if (uVar4 < 0xf) {
          uVar3 = unaff_x22[0x10];
          *(undefined8 *)((long)unaff_x22 + 0x49) = 0;
          *(undefined8 *)((long)unaff_x22 + 0x4f) = 0;
          *(char *)((long)unaff_x22 + 0x57) = (char)uVar4;
          func_0x000107c610b4((long)unaff_x22 + 0x49,puVar5,uVar4);
          func_0x000107c61170(puVar10);
          lVar2 = *(long *)((long)unaff_x22 + 0x49);
          UNRECOVERED_JUMPTABLE_00 =
               (code *)(uVar3 & 0xf00000000000000 | (ulong)*(uint7 *)((long)unaff_x22 + 0x51));
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        }
        else {
          uVar11 = 0;
          func_0x000107c5ec40();
          func_0x000107c613fc();
          func_0x000107c5ec2c(puVar5,uVar4,uVar11);
          func_0x000107c61170(puVar10);
          if (uVar4 < 0x7fffffff) {
            lVar2 = uVar4 << 0x20;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar5 | 0x4000000000000000);
          }
          else {
            lVar2 = 0;
            func_0x000107c5ee0c();
            func_0x000107c613fc();
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *(ulong *)(lVar2 + 0x18) = uVar4;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar5 | 0x8000000000000000);
          }
          UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x10];
        }
        uVar3 = unaff_x22[0x11];
        func_0x00010006c00c(lVar2,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61558();
        uVar15 = unaff_x22[0x11];
        uVar4 = uVar15;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
          FUN_101a86488(0,*(long *)(uVar15 + 0x10) + 1,1);
          param_5 = uVar15;
        }
        uVar3 = *(ulong *)(uVar4 + 0x10);
        uVar15 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_101a86488(uVar15,uVar3 + 1,1);
          param_5 = uVar4;
        }
        *(ulong *)(uVar15 + 0x10) = uVar3 + 1;
        lVar13 = uVar15 + uVar3 * 0x20;
        *(long *)(lVar13 + 0x20) = lVar2;
        *(code **)(lVar13 + 0x28) = UNRECOVERED_JUMPTABLE_00;
        *(undefined8 **)(lVar13 + 0x30) = puVar7;
        *(undefined8 **)(lVar13 + 0x38) = puVar8;
        FUN_101a8b200(unaff_x22 + 2,0x112df4328,&UNK_10d9c2a68);
        func_0x00010006c090(lVar2);
        unaff_x22[0x10] = (long)UNRECOVERED_JUMPTABLE;
        unaff_x22[0x11] = uVar15;
        puVar5 = (undefined8 *)
                 (ulong)*(uint *)(
                                 PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                 + 4);
        func_0x000107c615b8();
        unaff_x22[0x12] = (long)puVar5;
        *puVar5 = unaff_x22;
        puVar5[1] = FUN_101a8a500;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto LAB_107c60048;
        goto LAB_101a8a9e8;
      }
      FUN_101a874fc();
      param_5 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar5,0);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar10);
    }
    FUN_101a8b200(unaff_x22 + 2,0x112df4328,&UNK_10d9c2a68);
  }
  lVar13 = unaff_x22[0x11];
  lVar2 = unaff_x22[0xe];
  UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[0xd];
  (*(code *)unaff_x22[0xf])(lVar2);
  func_0x000107c6142c(lVar13);
  func_0x000107c615c0(lVar2);
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_101a8a9e8:
  func_0x000107c60e78();
  func_0x000107c600d4();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (param_5 != 0) {
    uVar11 = 0;
    uVar3 = param_5;
    func_0x000101a02cf8(0);
    uVar4 = 0;
    do {
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c600d0((param_1 / (double)(long)param_5) * (double)uVar4);
      uVar15 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar15) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar1 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar15 + 1;
      *(code **)(puVar1 + uVar15 * 0x18 + 0x20) = UNRECOVERED_JUMPTABLE;
      uVar4 = uVar4 + 1;
      *(int *)(puVar1 + uVar15 * 0x18 + 0x28) = (int)uVar3;
      *(int *)(puVar1 + uVar15 * 0x18 + 0x2c) = (int)(uVar3 >> 0x20);
      *(undefined8 *)(puVar1 + uVar15 * 0x18 + 0x30) = uVar11;
    } while (param_5 != uVar4);
  }
  return (code *)puVar1;
}



/* Entry: 101a8a3ec; end: 101a8a4ff;  */

code * FUN_101a8a3ec(double param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar11;
  ulong in_x3;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  double dVar14;
  long *unaff_x22;
  ulong uVar15;
  long lVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x22[0xc];
  lVar2 = 0;
  func_0x000107c6004c();
  unaff_x22[0xd] = lVar2;
  lVar16 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar16 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0xe] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c60050(uVar4,lVar13);
  func_0x000107c60044(uVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  unaff_x22[0xf] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(uVar4,lVar2);
  func_0x000107c615c0(uVar4);
  unaff_x22[0x11] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(
                           PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                           + 4);
  func_0x000107c615b8();
  unaff_x22[0x12] = (long)puVar5;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_101a8a500;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
LAB_107c60048:
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588)
              (puVar5,UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar6 = *(double **)(*unaff_x22 + 0x90);
  unaff_x22 = (long *)*unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a574;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8a574,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)unaff_x22[5];
  if ((char)unaff_x22[9] == '\x01') {
    dVar14 = (double)unaff_x22[4];
    dVar17 = (double)unaff_x22[3];
    param_1 = (double)unaff_x22[2];
    FUN_101a874fc();
    in_x3 = 0;
    func_0x000107c613f8(&UNK_110437c60,pdVar6,0);
    pdVar6[1] = dVar17;
    *pdVar6 = param_1;
    pdVar6[2] = dVar14;
    pdVar6[3] = (double)puVar5;
    func_0x000107c61654();
  }
  else {
    if ((char)unaff_x22[9] == -1) {
      lVar2 = unaff_x22[0xe];
      (*(code *)unaff_x22[0xf])(lVar2,unaff_x22[0xd]);
      func_0x000107c615c0(lVar2);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_101a8a9e8;
    }
    puVar7 = puVar5;
    func_0x000107c60980();
    puVar8 = puVar5;
    func_0x000107c6097c();
    if ((ulong)(puVar7 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a99c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar2 = (long)puVar7 * 4;
    puVar9 = puVar8;
    func_0x000107c608bc();
    puVar10 = (undefined8 *)0x0;
    in_x3 = 8;
    func_0x000107c608a0(0,puVar7,puVar8,8,lVar2,puVar9,1);
    func_0x000107c61170();
    if (puVar10 == (undefined8 *)0x0) {
      FUN_101a874fc();
      in_x3 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar9,0);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 3;
      func_0x000107c61654();
    }
    else {
      param_1 = 0.0;
      func_0x000107c5ff40(0,0,(double)(long)puVar7,(double)(long)puVar8,puVar5,0);
      puVar5 = puVar10;
      func_0x000107c608a8();
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = (long)puVar8 * lVar2;
        if (SUB168(SEXT816((long)puVar8) * SEXT816(lVar2),8) != (long)uVar4 >> 0x3f) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a9a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar4 == 0) {
          func_0x000107c61170(puVar10);
          lVar2 = 0;
          UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x10];
          UNRECOVERED_JUMPTABLE_00 = (code *)0xc000000000000000;
        }
        else if (uVar4 < 0xf) {
          uVar3 = unaff_x22[0x10];
          *(undefined8 *)((long)unaff_x22 + 0x49) = 0;
          *(undefined8 *)((long)unaff_x22 + 0x4f) = 0;
          *(char *)((long)unaff_x22 + 0x57) = (char)uVar4;
          func_0x000107c610b4((long)unaff_x22 + 0x49,puVar5,uVar4);
          func_0x000107c61170(puVar10);
          lVar2 = *(long *)((long)unaff_x22 + 0x49);
          UNRECOVERED_JUMPTABLE_00 =
               (code *)(uVar3 & 0xf00000000000000 | (ulong)*(uint7 *)((long)unaff_x22 + 0x51));
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        }
        else {
          uVar11 = 0;
          func_0x000107c5ec40();
          func_0x000107c613fc();
          func_0x000107c5ec2c(puVar5,uVar4,uVar11);
          func_0x000107c61170(puVar10);
          if (uVar4 < 0x7fffffff) {
            lVar2 = uVar4 << 0x20;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar5 | 0x4000000000000000);
          }
          else {
            lVar2 = 0;
            func_0x000107c5ee0c();
            func_0x000107c613fc();
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *(ulong *)(lVar2 + 0x18) = uVar4;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar5 | 0x8000000000000000);
          }
          UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x10];
        }
        uVar3 = unaff_x22[0x11];
        func_0x00010006c00c(lVar2,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61558();
        uVar15 = unaff_x22[0x11];
        uVar4 = uVar15;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
          FUN_101a86488(0,*(long *)(uVar15 + 0x10) + 1,1);
          in_x3 = uVar15;
        }
        uVar3 = *(ulong *)(uVar4 + 0x10);
        uVar15 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_101a86488(uVar15,uVar3 + 1,1);
          in_x3 = uVar4;
        }
        *(ulong *)(uVar15 + 0x10) = uVar3 + 1;
        lVar12 = uVar15 + uVar3 * 0x20;
        *(long *)(lVar12 + 0x20) = lVar2;
        *(code **)(lVar12 + 0x28) = UNRECOVERED_JUMPTABLE_00;
        *(undefined8 **)(lVar12 + 0x30) = puVar7;
        *(undefined8 **)(lVar12 + 0x38) = puVar8;
        FUN_101a8b200(unaff_x22 + 2,0x112df4328,&UNK_10d9c2a68);
        func_0x00010006c090(lVar2);
        unaff_x22[0x10] = (long)UNRECOVERED_JUMPTABLE;
        unaff_x22[0x11] = uVar15;
        puVar5 = (undefined8 *)
                 (ulong)*(uint *)(
                                 PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                 + 4);
        func_0x000107c615b8();
        unaff_x22[0x12] = (long)puVar5;
        *puVar5 = unaff_x22;
        puVar5[1] = FUN_101a8a500;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) goto LAB_107c60048;
        goto LAB_101a8a9e8;
      }
      FUN_101a874fc();
      in_x3 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar5,0);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar10);
    }
    FUN_101a8b200(unaff_x22 + 2,0x112df4328,&UNK_10d9c2a68);
  }
  lVar12 = unaff_x22[0x11];
  lVar2 = unaff_x22[0xe];
  UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[0xd];
  (*(code *)unaff_x22[0xf])(lVar2);
  func_0x000107c6142c(lVar12);
  func_0x000107c615c0(lVar2);
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_101a8a9e8:
  func_0x000107c60e78();
  func_0x000107c600d4();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)in_x3 < 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (in_x3 != 0) {
    uVar11 = 0;
    uVar3 = in_x3;
    func_0x000101a02cf8(0);
    uVar4 = 0;
    do {
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c600d0((param_1 / (double)(long)in_x3) * (double)uVar4);
      uVar15 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar15) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar1 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar15 + 1;
      *(code **)(puVar1 + uVar15 * 0x18 + 0x20) = UNRECOVERED_JUMPTABLE;
      uVar4 = uVar4 + 1;
      *(int *)(puVar1 + uVar15 * 0x18 + 0x28) = (int)uVar3;
      *(int *)(puVar1 + uVar15 * 0x18 + 0x2c) = (int)(uVar3 >> 0x20);
      *(undefined8 *)(puVar1 + uVar15 * 0x18 + 0x30) = uVar11;
    } while (in_x3 != uVar4);
  }
  return (code *)puVar1;
}



/* Entry: 101a8a500; end: 101a8a573;  */

code * FUN_101a8a500(double param_1)

{
  long lVar1;
  undefined *puVar2;
  double *pdVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar9;
  ulong in_x3;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  long *unaff_x22;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  double dVar19;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = *(double **)(*unaff_x22 + 0x90);
  lVar13 = *unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE = FUN_101a8a574;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8a574,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = *(undefined8 **)(lVar13 + 0x28);
  if (*(char *)(lVar13 + 0x48) == '\x01') {
    dVar11 = *(double *)(lVar13 + 0x20);
    dVar19 = *(double *)(lVar13 + 0x18);
    param_1 = *(double *)(lVar13 + 0x10);
    FUN_101a874fc();
    in_x3 = 0;
    func_0x000107c613f8(&UNK_110437c60,pdVar3,0);
    pdVar3[1] = dVar19;
    *pdVar3 = param_1;
    pdVar3[2] = dVar11;
    pdVar3[3] = (double)puVar15;
    func_0x000107c61654();
  }
  else {
    if (*(char *)(lVar13 + 0x48) == -1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x70);
      (**(code **)(lVar13 + 0x78))(uVar9,*(undefined8 *)(lVar13 + 0x68));
      func_0x000107c615c0(uVar9);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 8);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_101a8a9e8;
    }
    puVar4 = puVar15;
    func_0x000107c60980();
    puVar5 = puVar15;
    func_0x000107c6097c();
    if ((ulong)(puVar4 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a99c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar17 = (long)puVar4 * 4;
    puVar6 = puVar5;
    func_0x000107c608bc();
    puVar7 = (undefined8 *)0x0;
    in_x3 = 8;
    func_0x000107c608a0(0,puVar4,puVar5,8,lVar17,puVar6,1);
    func_0x000107c61170();
    if (puVar7 == (undefined8 *)0x0) {
      FUN_101a874fc();
      in_x3 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar6,0);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 3;
      func_0x000107c61654();
    }
    else {
      param_1 = 0.0;
      func_0x000107c5ff40(0,0,(double)(long)puVar4,(double)(long)puVar5,puVar15,0);
      puVar15 = puVar7;
      func_0x000107c608a8();
      if (puVar15 != (undefined8 *)0x0) {
        uVar14 = (long)puVar5 * lVar17;
        if (SUB168(SEXT816((long)puVar5) * SEXT816(lVar17),8) != (long)uVar14 >> 0x3f) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a9a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar14 == 0) {
          func_0x000107c61170(puVar7);
          lVar17 = 0;
          UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x80);
          UNRECOVERED_JUMPTABLE_00 = (code *)0xc000000000000000;
        }
        else if (uVar14 < 0xf) {
          uVar18 = *(ulong *)(lVar13 + 0x80);
          *(undefined8 *)(lVar13 + 0x49) = 0;
          *(undefined8 *)(lVar13 + 0x4f) = 0;
          *(char *)(lVar13 + 0x57) = (char)uVar14;
          func_0x000107c610b4(lVar13 + 0x49,puVar15,uVar14);
          func_0x000107c61170(puVar7);
          lVar17 = *(long *)(lVar13 + 0x49);
          UNRECOVERED_JUMPTABLE_00 =
               (code *)(uVar18 & 0xf00000000000000 | (ulong)*(uint7 *)(lVar13 + 0x51));
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        }
        else {
          uVar9 = 0;
          func_0x000107c5ec40();
          func_0x000107c613fc();
          func_0x000107c5ec2c(puVar15,uVar14,uVar9);
          func_0x000107c61170(puVar7);
          if (uVar14 < 0x7fffffff) {
            lVar17 = uVar14 << 0x20;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar15 | 0x4000000000000000);
          }
          else {
            lVar17 = 0;
            func_0x000107c5ee0c();
            func_0x000107c613fc();
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(ulong *)(lVar17 + 0x18) = uVar14;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar15 | 0x8000000000000000);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x80);
        }
        uVar18 = *(ulong *)(lVar13 + 0x88);
        func_0x00010006c00c(lVar17,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61558();
        uVar16 = *(ulong *)(lVar13 + 0x88);
        uVar14 = uVar16;
        if ((uVar18 & 1) == 0) {
          uVar14 = 0;
          FUN_101a86488(0,*(long *)(uVar16 + 0x10) + 1,1);
          in_x3 = uVar16;
        }
        uVar18 = *(ulong *)(uVar14 + 0x10);
        uVar16 = uVar14;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar18) {
          uVar16 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_101a86488(uVar16,uVar18 + 1,1);
          in_x3 = uVar14;
        }
        *(ulong *)(uVar16 + 0x10) = uVar18 + 1;
        lVar1 = uVar16 + uVar18 * 0x20;
        *(long *)(lVar1 + 0x20) = lVar17;
        *(code **)(lVar1 + 0x28) = UNRECOVERED_JUMPTABLE_00;
        *(undefined8 **)(lVar1 + 0x30) = puVar4;
        *(undefined8 **)(lVar1 + 0x38) = puVar5;
        FUN_101a8b200(lVar13 + 0x10,0x112df4328,&UNK_10d9c2a68);
        func_0x00010006c090(lVar17);
        *(code **)(lVar13 + 0x80) = UNRECOVERED_JUMPTABLE;
        *(ulong *)(lVar13 + 0x88) = uVar16;
        plVar8 = (long *)(ulong)*(uint *)(
                                         PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                         + 4);
        func_0x000107c615b8();
        *(long **)(lVar13 + 0x90) = plVar8;
        *plVar8 = lVar13;
        plVar8[1] = (long)FUN_101a8a500;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          UNRECOVERED_JUMPTABLE = (code *)(lVar13 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588
          )(plVar8,UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        goto LAB_101a8a9e8;
      }
      FUN_101a874fc();
      in_x3 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar15,0);
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar7);
    }
    FUN_101a8b200(lVar13 + 0x10,0x112df4328,&UNK_10d9c2a68);
  }
  uVar12 = *(undefined8 *)(lVar13 + 0x88);
  uVar9 = *(undefined8 *)(lVar13 + 0x70);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 0x68);
  (**(code **)(lVar13 + 0x78))(uVar9);
  func_0x000107c6142c(uVar12);
  func_0x000107c615c0(uVar9);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_101a8a9e8:
  func_0x000107c60e78();
  func_0x000107c600d4();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)in_x3 < 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (in_x3 != 0) {
    uVar9 = 0;
    uVar18 = in_x3;
    func_0x000101a02cf8(0);
    uVar14 = 0;
    do {
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c600d0((param_1 / (double)(long)in_x3) * (double)uVar14);
      uVar16 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar16) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar2 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar16 + 1;
      *(code **)(puVar2 + uVar16 * 0x18 + 0x20) = UNRECOVERED_JUMPTABLE;
      uVar14 = uVar14 + 1;
      *(int *)(puVar2 + uVar16 * 0x18 + 0x28) = (int)uVar18;
      *(int *)(puVar2 + uVar16 * 0x18 + 0x2c) = (int)(uVar18 >> 0x20);
      *(undefined8 *)(puVar2 + uVar16 * 0x18 + 0x30) = uVar9;
    } while (in_x3 != uVar14);
  }
  return (code *)puVar2;
}



/* Entry: 101a8a574; end: 101a8a9eb;  */

code * FUN_101a8a574(double param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = *(undefined8 **)(unaff_x22 + 0x28);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    dVar10 = *(double *)(unaff_x22 + 0x20);
    dVar17 = *(double *)(unaff_x22 + 0x18);
    param_1 = *(double *)(unaff_x22 + 0x10);
    FUN_101a874fc();
    param_5 = 0;
    func_0x000107c613f8(&UNK_110437c60,param_2,0);
    param_2[1] = dVar17;
    *param_2 = param_1;
    param_2[2] = dVar10;
    param_2[3] = (double)puVar13;
    func_0x000107c61654();
  }
  else {
    if (*(char *)(unaff_x22 + 0x48) == -1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(unaff_x22 + 0x78))(uVar8,*(undefined8 *)(unaff_x22 + 0x68));
      func_0x000107c615c0(uVar8);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_101a8a9e8;
    }
    puVar3 = puVar13;
    func_0x000107c60980();
    puVar4 = puVar13;
    func_0x000107c6097c();
    if ((ulong)(puVar3 + -0x400000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a99c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar15 = (long)puVar3 * 4;
    puVar5 = puVar4;
    func_0x000107c608bc();
    puVar6 = (undefined8 *)0x0;
    param_5 = 8;
    func_0x000107c608a0(0,puVar3,puVar4,8,lVar15,puVar5,1);
    func_0x000107c61170();
    if (puVar6 == (undefined8 *)0x0) {
      FUN_101a874fc();
      param_5 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar5,0);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 3;
      func_0x000107c61654();
    }
    else {
      param_1 = 0.0;
      func_0x000107c5ff40(0,0,(double)(long)puVar3,(double)(long)puVar4,puVar13,0);
      puVar13 = puVar6;
      func_0x000107c608a8();
      if (puVar13 != (undefined8 *)0x0) {
        uVar12 = (long)puVar4 * lVar15;
        if (SUB168(SEXT816((long)puVar4) * SEXT816(lVar15),8) != (long)uVar12 >> 0x3f) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8a9a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar12 == 0) {
          func_0x000107c61170(puVar6);
          lVar15 = 0;
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x80);
          UNRECOVERED_JUMPTABLE_00 = (code *)0xc000000000000000;
        }
        else if (uVar12 < 0xf) {
          uVar16 = *(ulong *)(unaff_x22 + 0x80);
          *(undefined8 *)(unaff_x22 + 0x49) = 0;
          *(undefined8 *)(unaff_x22 + 0x4f) = 0;
          *(char *)(unaff_x22 + 0x57) = (char)uVar12;
          func_0x000107c610b4(unaff_x22 + 0x49,puVar13,uVar12);
          func_0x000107c61170(puVar6);
          lVar15 = *(long *)(unaff_x22 + 0x49);
          UNRECOVERED_JUMPTABLE_00 =
               (code *)(uVar16 & 0xf00000000000000 | (ulong)*(uint7 *)(unaff_x22 + 0x51));
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        }
        else {
          uVar8 = 0;
          func_0x000107c5ec40();
          func_0x000107c613fc();
          func_0x000107c5ec2c(puVar13,uVar12,uVar8);
          func_0x000107c61170(puVar6);
          if (uVar12 < 0x7fffffff) {
            lVar15 = uVar12 << 0x20;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar13 | 0x4000000000000000);
          }
          else {
            lVar15 = 0;
            func_0x000107c5ee0c();
            func_0x000107c613fc();
            *(undefined8 *)(lVar15 + 0x10) = 0;
            *(ulong *)(lVar15 + 0x18) = uVar12;
            UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)puVar13 | 0x8000000000000000);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x80);
        }
        uVar16 = *(ulong *)(unaff_x22 + 0x88);
        func_0x00010006c00c(lVar15,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61558();
        uVar14 = *(ulong *)(unaff_x22 + 0x88);
        uVar12 = uVar14;
        if ((uVar16 & 1) == 0) {
          uVar12 = 0;
          FUN_101a86488(0,*(long *)(uVar14 + 0x10) + 1,1);
          param_5 = uVar14;
        }
        uVar16 = *(ulong *)(uVar12 + 0x10);
        uVar14 = uVar12;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar16) {
          uVar14 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_101a86488(uVar14,uVar16 + 1,1);
          param_5 = uVar12;
        }
        *(ulong *)(uVar14 + 0x10) = uVar16 + 1;
        lVar1 = uVar14 + uVar16 * 0x20;
        *(long *)(lVar1 + 0x20) = lVar15;
        *(code **)(lVar1 + 0x28) = UNRECOVERED_JUMPTABLE_00;
        *(undefined8 **)(lVar1 + 0x30) = puVar3;
        *(undefined8 **)(lVar1 + 0x38) = puVar4;
        FUN_101a8b200(unaff_x22 + 0x10,0x112df4328,&UNK_10d9c2a68);
        func_0x00010006c090(lVar15);
        *(code **)(unaff_x22 + 0x80) = UNRECOVERED_JUMPTABLE;
        *(ulong *)(unaff_x22 + 0x88) = uVar14;
        plVar7 = (long *)(ulong)*(uint *)(
                                         PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x90) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101a8a500;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
          UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588
          )(plVar7,UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        goto LAB_101a8a9e8;
      }
      FUN_101a874fc();
      param_5 = 0;
      func_0x000107c613f8(&UNK_110437c60,puVar13,0);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 3;
      func_0x000107c61654();
      func_0x000107c61170(puVar6);
    }
    FUN_101a8b200(unaff_x22 + 0x10,0x112df4328,&UNK_10d9c2a68);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 0x68);
  (**(code **)(unaff_x22 + 0x78))(uVar8);
  func_0x000107c6142c(uVar11);
  func_0x000107c615c0(uVar8);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101a8a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_101a8a9e8:
  func_0x000107c60e78();
  func_0x000107c600d4();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (param_5 != 0) {
    uVar8 = 0;
    uVar16 = param_5;
    func_0x000101a02cf8(0);
    uVar12 = 0;
    do {
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c600d0((param_1 / (double)(long)param_5) * (double)uVar12);
      uVar14 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar14) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar2 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar14 + 1;
      *(code **)(puVar2 + uVar14 * 0x18 + 0x20) = UNRECOVERED_JUMPTABLE;
      uVar12 = uVar12 + 1;
      *(int *)(puVar2 + uVar14 * 0x18 + 0x28) = (int)uVar16;
      *(int *)(puVar2 + uVar14 * 0x18 + 0x2c) = (int)(uVar16 >> 0x20);
      *(undefined8 *)(puVar2 + uVar14 * 0x18 + 0x30) = uVar8;
    } while (param_5 != uVar12);
  }
  return (code *)puVar2;
}


