/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a6748c; end: 101a675f3;  */

void FUN_101a6748c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  plVar2 = *(long **)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_110432560;
  *(long *)(unaff_x22 + 0x10) = lVar4;
  lVar5 = 0;
  FUN_101a690d0();
  lVar7 = lVar5;
  func_0x000107c613fc();
  func_0x000107c6157c(lVar4);
  func_0x000107c61474(lVar7);
  *(undefined8 *)(lVar7 + 0x70) = uVar6;
  *(undefined8 *)(lVar7 + 0x78) = uVar9;
  *(undefined1 *)(lVar7 + 0x80) = 0;
  FUN_101a68ae4((long *)(unaff_x22 + 0x10),lVar7 + 0x88);
  plVar2[3] = lVar5;
  plVar2[4] = (long)&PTR_DAT_1104326c0;
  *plVar2 = lVar7;
  func_0x000107c61174();
  func_0x000107c5fcf8(uVar3);
  lVar7 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar3,0,1,lVar7);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  puVar8 = &UNK_110432638;
  func_0x000107c613fc(&UNK_110432638,0x38,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(undefined8 *)(puVar8 + 0x28) = uVar1;
  *(undefined8 *)(puVar8 + 0x30) = uVar6;
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c61174(uVar1);
  FUN_101a67e68(0,0,uVar3,&UNK_10d9bd060,puVar8);
  func_0x000107c61574();
  func_0x0001000abe54(uVar3);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a675f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a675f4; end: 101a6765b;  */

void FUN_101a675f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a67658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a6765c; end: 101a67a1b;  */

/* WARNING: Removing unreachable block (ram,0x000101a676f0) */
/* WARNING: Removing unreachable block (ram,0x000101a67838) */
/* WARNING: Removing unreachable block (ram,0x000101a67abc) */

undefined1  [16]
FUN_101a6765c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,long param_6)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  long unaff_x21;
  long *unaff_x23;
  long *plVar15;
  long *unaff_x25;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  long *plStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)((ulong)param_1 & 0xffffffffffffff8);
  plVar3 = param_5;
  plStack_b0 = param_2;
  plStack_a8 = param_3;
  plStack_a0 = param_4;
  if ((ulong)param_1 >> 0x3e == 0) {
    plVar16 = (long *)plVar15[2];
  }
  else {
    plVar16 = plVar15;
    if ((long *)0x7fffffffffffffff < param_1) {
      plVar16 = param_1;
    }
    func_0x000107c60480();
  }
  plVar6 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
  plStack_128 = plVar15;
  if (plVar16 != (long *)0x0) {
    lStack_c8 = unaff_x20[2];
    uStack_98 = (ulong)param_1 & 0xc000000000000001;
    uStack_d0 = (ulong)plStack_a0 >> 0x3c;
    plVar5 = (long *)0x0;
    plVar6 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
    plStack_e0 = param_5;
    plStack_d8 = plVar16;
    plStack_c0 = plVar15;
    plStack_b8 = param_1;
    do {
      while( true ) {
        plStack_e8 = plVar6;
        unaff_x21 = 0;
        if (uStack_98 == 0) {
          if ((long *)plStack_c0[2] <= plVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a679c4);
            (*pcVar1)();
          }
          unaff_x23 = (long *)plStack_b8[(long)((long)plVar5 + 4)];
          func_0x000107c61174();
        }
        else {
          unaff_x23 = plVar5;
          func_0x000101016c54();
        }
        unaff_x25 = (long *)((long)plVar5 + 1);
        if (SCARRY8((long)plVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a679c0);
          (*pcVar1)();
        }
        unaff_x19 = unaff_x23;
        func_0x0001027af0fc();
        plVar3 = plStack_b0;
        plVar15 = plStack_a8;
        func_0x000103fc18cc(plStack_b0,plStack_a8,plStack_a0,param_5);
        func_0x000107c6030c();
        uVar4 = 0x2d;
        uVar12 = 0xe100000000000000;
        plStack_90 = plVar3;
        plStack_88 = plVar15;
        func_0x000107c5fb78(0x2d,0xe100000000000000);
        func_0x00010011df08();
        func_0x000107c61180();
        uVar8 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        func_0x000107c5fb78(uVar8,uVar12);
        func_0x000107c6142c(uVar12);
        plVar3 = plStack_88;
        plVar15 = plStack_90;
        plVar16 = (long *)PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        func_0x000107c5fadc(plVar15,plVar3);
        func_0x000107c6142c(plVar3);
        func_0x000107c46814();
        func_0x000107c61170(plVar15);
        lStack_70 = 0;
        func_0x000100fb85f0();
        param_2 = (long *)&UNK_11072cd20;
        func_0x000104876738(&plStack_90,&lStack_70,&UNK_11072cd20,plVar15);
        unaff_x20 = plStack_90;
        lStack_70 = 0;
        plVar3 = &lStack_70;
        param_3 = plVar16;
        param_4 = unaff_x19;
        func_0x000107c3e418(plStack_90);
        lVar13 = lStack_70;
        if (lStack_70 == 0) break;
        iVar2 = 2;
        param_2 = (long *)0x12;
        param_3 = (long *)0x0;
        param_4 = (long *)0x0;
        func_0x000100029b9c(2,0x12,0);
        func_0x000107c61174(lVar13);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar2 != 0) {
          param_2 = (long *)&UNK_11072cd20;
          func_0x000107c61658(&lStack_70,&UNK_11072cd20,plVar15);
          param_3 = plVar15;
        }
        func_0x000107c61170(plVar16);
        func_0x000107c615e8(unaff_x20);
        func_0x000107c61170(unaff_x19);
        func_0x000107c61170(unaff_x23);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar13);
        unaff_x21 = 0;
        plVar6 = plStack_e8;
        param_1 = plStack_b8;
        plStack_128 = plStack_c0;
        param_5 = plStack_e0;
        plVar5 = (long *)((long)plVar5 + 1);
        if (unaff_x25 == plStack_d8) goto LAB_101a679e0;
      }
      func_0x000107c615e8(unaff_x20);
      func_0x000107c61170(unaff_x23);
      plVar15 = plStack_e8;
      plVar6 = plStack_e8;
      func_0x000107c61558();
      plVar5 = plVar15;
      if (((ulong)plVar6 & 1) == 0) {
        param_2 = (long *)(plVar15[2] + 1);
        plVar5 = (long *)0x0;
        param_3 = (long *)0x1;
        FUN_101a688d4(0,param_2,1);
        param_4 = plVar15;
      }
      plVar15 = plStack_d8;
      uVar9 = plVar5[2];
      unaff_x20 = (long *)(uVar9 + 1);
      plVar6 = plVar5;
      if ((ulong)plVar5[3] >> 1 <= uVar9) {
        plVar6 = (long *)(ulong)(1 < (ulong)plVar5[3]);
        param_3 = (long *)0x1;
        param_2 = unaff_x20;
        FUN_101a688d4(plVar6,unaff_x20,1);
        param_4 = plVar5;
      }
      plVar6[2] = (long)unaff_x20;
      plVar6[uVar9 * 2 + 4] = (long)unaff_x19;
      plVar6[uVar9 * 2 + 5] = (long)plVar16;
      param_1 = plStack_b8;
      plStack_128 = plStack_c0;
      plVar5 = unaff_x25;
    } while (unaff_x25 != plVar15);
  }
LAB_101a679e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = plVar6;
    return auVar17;
  }
  func_0x000107c60e78();
  pcStack_f8 = FUN_101a67a1c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = param_4;
  plVar15 = plVar3;
  plStack_140 = param_5;
  plStack_130 = unaff_x25;
  plStack_120 = unaff_x23;
  plStack_118 = param_1;
  plStack_110 = unaff_x20;
  plStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x0001027af0fc();
  if (unaff_x21 == 0) {
    FUN_101a68a04(param_2,param_3,param_4,plVar3);
    lStack_150 = 0;
    plVar5 = param_2;
    func_0x000100fb85f0();
    func_0x000104876738(&uStack_160,&lStack_150,&UNK_11072cd20,plVar5,auStack_158);
    lStack_150 = 0;
    plVar15 = &lStack_150;
    plVar16 = plVar6;
    func_0x000107c3e418(uStack_160);
    lVar13 = lStack_150;
    unaff_x19 = plVar6;
    if (lStack_150 == 0) {
      func_0x000107c615e8(uStack_160);
      plVar3 = param_2;
    }
    else {
      iVar2 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      lVar14 = lVar13;
      func_0x000107c61174(lVar13);
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar2 != 0) {
        func_0x000107c61658(&lStack_150,&UNK_11072cd20,plVar5);
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uStack_160);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar14);
      plVar3 = (long *)&UNK_11072cd20;
      plVar16 = (long *)0x0;
      func_0x000107c613f8(&UNK_11072cd20,plVar5,0);
      *plVar5 = lVar13;
      func_0x000107c61170(plVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    auVar18._8_8_ = plVar3;
    auVar18._0_8_ = unaff_x19;
    return auVar18;
  }
  func_0x000107c60e78();
  plVar3[0x15] = (long)plVar15;
  plVar3[0x16] = param_6;
  plVar3[0x13] = 0;
  puVar7 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar3[0x17] = (long)puVar7;
  puVar10 = puVar7;
  func_0x000100fb85f0();
  plVar3[0x18] = (long)puVar10;
  *puVar7 = plVar3;
  puVar7[1] = FUN_101a67c5c;
  puVar7[0xb] = puVar10;
  puVar7[0xc] = plVar3 + 0x14;
  puVar7[9] = plVar3 + 0x13;
  puVar7[10] = &UNK_11072cd20;
  puVar7[8] = plVar3 + 0x12;
  lVar13 = *plVar16;
  puVar7[0xd] = &PTR_DAT_11072cca0;
  uVar8 = 0x10;
  _swift_task_alloc();
  puVar7[0xe] = uVar8;
  lVar13 = *(long *)(lVar13 + 0x50);
  puVar7[0xf] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  puVar7[0x10] = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar7[0x11] = uVar9;
  puVar10 = (undefined8 *)0x70;
  _swift_task_alloc();
  puVar7[0x12] = puVar10;
  *puVar10 = puVar7;
  puVar10[1] = &UNK_104876614;
  puVar10[5] = uVar9;
  puVar10[6] = plVar16;
  lVar14 = *(long *)(*plVar16 + 0x50);
  puVar10[7] = lVar14;
  lVar13 = 0;
  __sSqMa(0,lVar14);
  puVar10[8] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  puVar10[9] = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[10] = uVar9;
  lVar13 = *(long *)(lVar14 + -8);
  puVar10[0xb] = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[0xc] = uVar9;
  puVar11 = &UNK_104875f90;
  uVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = puVar11;
  return auVar19;
}



/* Entry: 101a67a1c; end: 101a67bd7;  */

/* WARNING: Removing unreachable block (ram,0x000101a67abc) */

undefined1  [16]
FUN_101a67a1c(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
             long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x19;
  long lVar10;
  long lVar11;
  long unaff_x21;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_4;
  plVar9 = param_5;
  func_0x0001027af0fc();
  if (unaff_x21 == 0) {
    FUN_101a68a04(param_2,param_3,param_4,param_5);
    lStack_60 = 0;
    plVar2 = param_2;
    func_0x000100fb85f0();
    func_0x000104876738(&uStack_70,&lStack_60,&UNK_11072cd20,plVar2,auStack_68);
    lStack_60 = 0;
    plVar9 = &lStack_60;
    plVar8 = param_1;
    func_0x000107c3e418(uStack_70);
    lVar10 = lStack_60;
    unaff_x19 = param_1;
    if (lStack_60 == 0) {
      func_0x000107c615e8(uStack_70);
      param_5 = param_2;
    }
    else {
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      lVar11 = lVar10;
      func_0x000107c61174(lVar10);
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar1 != 0) {
        func_0x000107c61658(&lStack_60,&UNK_11072cd20,plVar2);
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uStack_70);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar11);
      param_5 = (long *)&UNK_11072cd20;
      plVar8 = (long *)0x0;
      func_0x000107c613f8(&UNK_11072cd20,plVar2,0);
      *plVar2 = lVar10;
      func_0x000107c61170(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    param_5[0x15] = (long)plVar9;
    param_5[0x16] = param_6;
    param_5[0x13] = 0;
    puVar3 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    param_5[0x17] = (long)puVar3;
    puVar6 = puVar3;
    func_0x000100fb85f0();
    param_5[0x18] = (long)puVar6;
    *puVar3 = param_5;
    puVar3[1] = FUN_101a67c5c;
    puVar3[0xb] = puVar6;
    puVar3[0xc] = param_5 + 0x14;
    puVar3[9] = param_5 + 0x13;
    puVar3[10] = &UNK_11072cd20;
    puVar3[8] = param_5 + 0x12;
    lVar10 = *plVar8;
    puVar3[0xd] = &PTR_DAT_11072cca0;
    uVar4 = 0x10;
    _swift_task_alloc();
    puVar3[0xe] = uVar4;
    lVar10 = *(long *)(lVar10 + 0x50);
    puVar3[0xf] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    puVar3[0x10] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[0x11] = uVar5;
    puVar6 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar3[0x12] = puVar6;
    *puVar6 = puVar3;
    puVar6[1] = &UNK_104876614;
    puVar6[5] = uVar5;
    puVar6[6] = plVar8;
    lVar11 = *(long *)(*plVar8 + 0x50);
    puVar6[7] = lVar11;
    lVar10 = 0;
    __sSqMa(0,lVar11);
    puVar6[8] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    puVar6[9] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar6[10] = uVar5;
    lVar10 = *(long *)(lVar11 + -8);
    puVar6[0xb] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar6[0xc] = uVar5;
    puVar7 = &UNK_104875f90;
    uVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    auVar13._8_8_ = uVar4;
    auVar13._0_8_ = puVar7;
    return auVar13;
  }
  auVar12._8_8_ = param_5;
  auVar12._0_8_ = unaff_x19;
  return auVar12;
}



/* Entry: 101a67bd8; end: 101a67c5b;  */

void FUN_101a67bd8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xb0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  plVar4 = plVar1;
  func_0x000100fb85f0();
  *(long **)(unaff_x22 + 0xc0) = plVar4;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a67c5c;
  plVar1[0xb] = (long)plVar4;
  plVar1[0xc] = unaff_x22 + 0xa0;
  plVar1[9] = unaff_x22 + 0x98;
  plVar1[10] = (long)&UNK_11072cd20;
  plVar1[8] = unaff_x22 + 0x90;
  lVar5 = *in_x3;
  plVar1[0xd] = (long)&PTR_DAT_11072cca0;
  lVar2 = 0x10;
  _swift_task_alloc();
  plVar1[0xe] = lVar2;
  lVar2 = *(long *)(lVar5 + 0x50);
  plVar1[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x10] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar1[0x12] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)in_x3;
  lVar5 = *(long *)(*in_x3 + 0x50);
  plVar4[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a67c5c; end: 101a67cb3;  */

void FUN_101a67c5c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a67cb4;
  }
  else {
    pcVar1 = (code *)0x101a67de4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a67cb4; end: 101a67d6f;  */

void FUN_101a67cb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a67d70;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a67e30;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110432600;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4feb8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a67d70; end: 101a67e2f;  */

void FUN_101a67d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a67db0,0,0);
  return;
}



/* Entry: 101a67e30; end: 101a67e67;  */

void FUN_101a67e30(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined1 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 101a67e68; end: 101a68067;  */

void FUN_101a67e68(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_b0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar4);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  uVar6 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar4);
    uVar6 = 0x1000;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    uVar6 = uVar6 & 0xff | 0x1000;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar7 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    if (lVar7 == 0 && lVar5 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      puVar3 = &uStack_70;
      lStack_60 = lVar5;
      lStack_58 = lVar7;
    }
    func_0x000107c615bc(uVar6,puVar3,PTR___sytN_11034f1b0 + 8,param_4,param_5);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6157c(param_5);
    if (lVar7 == 0 && lVar5 == 0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &uStack_90;
      lStack_80 = lVar5;
      lStack_78 = lVar7;
    }
    uStack_a8 = 7;
    lStack_98 = param_1 + 0x20;
    func_0x000107c615bc(uVar6,&uStack_a8,PTR___sytN_11034f1b0 + 8,param_4,param_5);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101a68068; end: 101a680eb;  */

void FUN_101a68068(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  plVar4 = plVar1;
  func_0x000100fb85f0();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a680ec;
  plVar1[0xb] = (long)plVar4;
  plVar1[0xc] = unaff_x22 + 0x20;
  plVar1[9] = unaff_x22 + 0x18;
  plVar1[10] = (long)&UNK_11072cd20;
  plVar1[8] = unaff_x22 + 0x10;
  lVar5 = *in_x3;
  plVar1[0xd] = (long)&PTR_DAT_11072cca0;
  lVar2 = 0x10;
  _swift_task_alloc();
  plVar1[0xe] = lVar2;
  lVar2 = *(long *)(lVar5 + 0x50);
  plVar1[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x10] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar1[0x12] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)in_x3;
  lVar5 = *(long *)(*in_x3 + 0x50);
  plVar4[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a680ec; end: 101a681d3;  */

void FUN_101a680ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
  if (unaff_x20 == 0) {
    uVar1 = 0x101a68144;
  }
  else {
    uVar1 = 0x101a68188;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101a681d4; end: 101a68253;  */

void FUN_101a681d4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long unaff_x22;
  ulong unaff_x29;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lVar19 = *unaff_x20;
  plVar11 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101a68c68;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar1 = &uStack_10;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[0xb] = param_5;
  plVar11[0xc] = lVar19;
  plVar11[9] = param_3;
  plVar11[10] = param_4;
  plVar11[7] = param_1;
  plVar11[8] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a667bc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = *(long **)(plVar11[0xc] + 0x10);
  plVar14 = plVar11 + 3;
  *plVar14 = 0;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  plVar11[0xd] = (long)plVar5;
  plVar6 = plVar5;
  func_0x000100fb85f0();
  plVar11[0xe] = (long)plVar6;
  *plVar5 = (long)plVar11;
  plVar5[1] = (long)FUN_101a6686c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    pcStack_e8 = FUN_101a667bc;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
    pcStack_58 = FUN_101a6686c;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar11;
    plVar11 = (long *)*plVar11;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0x68));
    if (plVar17 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101a66908;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar11[8];
    lVar20 = plVar11[7];
    unaff_x19 = plVar11[2];
    plStack_98 = plVar5;
    plStack_90 = plVar14;
    plStack_88 = plVar11;
    FUN_101a68a04(lVar16,plVar11[9],plVar11[10],plVar11[0xb]);
    plVar11[5] = 0;
    func_0x000107c3e418(unaff_x19);
    lVar19 = plVar11[5];
    if (lVar19 == 0) {
      lVar7 = unaff_x19;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      lVar19 = lVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto LAB_101a66a30;
    }
    else {
      plVar11[6] = lVar19;
      iVar4 = 2;
      lVar20 = 0;
      func_0x000100029b9c(2,0x12,0);
      lVar7 = lVar19;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar4 != 0) {
        func_0x000107c61658(plVar11 + 6,&UNK_11072cd20,plVar11[0xe]);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(unaff_x19);
      lVar7 = lVar16;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(lVar19);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar3 = &lStack_e0;
    pcStack_c8 = FUN_101a66a50;
    puVar1 = &uStack_d0;
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11[10] = param_7;
    plVar11[0xb] = lVar16;
    plVar11[8] = lVar20;
    plVar11[9] = param_6;
    plVar11[7] = lVar7;
    plStack_d8 = plVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_e8 = FUN_101a66abc;
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar17 = *(long **)(plVar11[0xb] + 0x10);
    plVar14 = plVar11 + 3;
    *plVar14 = 0;
    plVar5 = (long *)0xa0;
    func_0x000107c615b8();
    plVar11[0xc] = (long)plVar5;
    plVar6 = plVar5;
    func_0x000100fb85f0();
    plVar11[0xd] = (long)plVar6;
    *plVar5 = (long)plVar11;
    plVar5[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = *plVar11;
      func_0x000107c615c0(*(undefined8 *)(*plVar11 + 0x60));
      if (plVar17 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar18 = *(undefined8 *)(lVar19 + 0x10);
      uVar15 = *(undefined8 *)(lVar19 + 0x38);
      uVar10 = *(undefined8 *)(lVar19 + 0x48);
      uVar2 = *(undefined8 *)(lVar19 + 0x50);
      puVar8 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar10,uVar2);
      func_0x000107c46814(puVar8);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar19 + 0x28) = 0;
      func_0x000107c3e418(uVar18);
      puVar21 = *(undefined **)(lVar19 + 0x28);
      if (puVar21 == (undefined *)0x0) {
        func_0x000107c615e8(uVar18);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar19 + 8);
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar21 = puVar8;
      }
      else {
        *(undefined **)(lVar19 + 0x30) = puVar21;
        iVar4 = 2;
        uVar15 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar9 = puVar21;
        func_0x000107c61174(puVar21);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar4 != 0) {
          func_0x000107c61658(lVar19 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar19 + 0x68));
        }
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(uVar18);
        func_0x000107c61170(puVar8);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar19 + 8);
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar20 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar21);
        return;
      }
      func_0x000107c60e78();
      uVar10 = *(undefined8 *)(lVar19 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar19 + 0xb8) = param_7;
      *(undefined8 *)(lVar19 + 0xc0) = uVar18;
      *(undefined8 *)(lVar19 + 0xa8) = uVar15;
      *(long *)(lVar19 + 0xb0) = param_6;
      *(undefined8 *)(lVar19 + 0xa0) = uVar10;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(long *)((long)plVar3 + -0x20) = unaff_x19;
  *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar3 + -8) = pcStack_e8;
  *(long **)((long)plVar3 + -0x18) = plVar5;
  plVar5[0xb] = (long)plVar6;
  plVar5[0xc] = (long)(plVar11 + 4);
  plVar5[9] = (long)plVar14;
  plVar5[10] = (long)&UNK_11072cd20;
  plVar5[8] = (long)(plVar11 + 2);
  lVar19 = *plVar17;
  plVar5[0xd] = (long)&PTR_DAT_11072cca0;
  lVar16 = 0x10;
  _swift_task_alloc();
  plVar5[0xe] = lVar16;
  lVar16 = *(long *)(lVar19 + 0x50);
  plVar5[0xf] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  plVar5[0x10] = lVar16;
  uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0x11] = uVar12;
  puVar13 = (undefined8 *)0x70;
  _swift_task_alloc();
  plVar5[0x12] = (long)puVar13;
  *puVar13 = plVar5;
  puVar13[1] = &UNK_104876614;
  *(ulong *)((long)plVar3 + -0x10) =
       *(ulong *)((long)plVar3 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
  *(undefined8 **)((long)plVar3 + -0x18) = puVar13;
  puVar13[5] = uVar12;
  puVar13[6] = plVar17;
  lVar19 = *(long *)(*plVar17 + 0x50);
  puVar13[7] = lVar19;
  lVar16 = 0;
  __sSqMa(0,lVar19);
  puVar13[8] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  puVar13[9] = lVar16;
  uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[10] = uVar12;
  lVar16 = *(long *)(lVar19 + -8);
  puVar13[0xb] = lVar16;
  uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[0xc] = uVar12;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a68254; end: 101a682cb;  */

void FUN_101a68254(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x20;
  long lVar15;
  undefined *puVar16;
  long unaff_x22;
  
  lVar15 = *unaff_x20;
  plVar8 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x101a68c6c;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8[10] = param_7;
  plVar8[0xb] = lVar15;
  plVar8[8] = param_4;
  plVar8[9] = param_6;
  plVar8[7] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE = FUN_101a66abc;
  }
  else {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar13 = *(long **)(plVar8[0xb] + 0x10);
    plVar8[3] = 0;
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    plVar8[0xc] = (long)plVar3;
    plVar4 = plVar3;
    func_0x000100fb85f0();
    plVar8[0xd] = (long)plVar4;
    *plVar3 = (long)plVar8;
    plVar3[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      plVar3[0xb] = (long)plVar4;
      plVar3[0xc] = (long)(plVar8 + 4);
      plVar3[9] = (long)(plVar8 + 3);
      plVar3[10] = (long)&UNK_11072cd20;
      plVar3[8] = (long)(plVar8 + 2);
      lVar15 = *plVar13;
      plVar3[0xd] = (long)&PTR_DAT_11072cca0;
      lVar11 = 0x10;
      _swift_task_alloc();
      plVar3[0xe] = lVar11;
      lVar11 = *(long *)(lVar15 + 0x50);
      plVar3[0xf] = lVar11;
      lVar11 = *(long *)(lVar11 + -8);
      plVar3[0x10] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[0x11] = uVar9;
      plVar8 = (long *)0x70;
      _swift_task_alloc();
      plVar3[0x12] = (long)plVar8;
      *plVar8 = (long)plVar3;
      plVar8[1] = (long)&UNK_104876614;
      plVar8[5] = uVar9;
      plVar8[6] = (long)plVar13;
      lVar15 = *(long *)(*plVar13 + 0x50);
      plVar8[7] = lVar15;
      lVar11 = 0;
      __sSqMa(0,lVar15);
      plVar8[8] = lVar11;
      lVar11 = *(long *)(lVar11 + -8);
      plVar8[9] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar8[10] = uVar9;
      lVar11 = *(long *)(lVar15 + -8);
      plVar8[0xb] = lVar11;
      uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar8[0xc] = uVar9;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar15 = *plVar8;
      func_0x000107c615c0(*(undefined8 *)(*plVar8 + 0x60));
      if (plVar13 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          UNRECOVERED_JUMPTABLE = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        UNRECOVERED_JUMPTABLE = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar14 = *(undefined8 *)(lVar15 + 0x10);
      uVar10 = *(undefined8 *)(lVar15 + 0x38);
      uVar7 = *(undefined8 *)(lVar15 + 0x48);
      uVar1 = *(undefined8 *)(lVar15 + 0x50);
      puVar5 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c46814(puVar5);
      func_0x000107c61170(uVar7);
      *(undefined8 *)(lVar15 + 0x28) = 0;
      func_0x000107c3e418(uVar14);
      puVar16 = *(undefined **)(lVar15 + 0x28);
      if (puVar16 == (undefined *)0x0) {
        func_0x000107c615e8(uVar14);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar16 = puVar5;
      }
      else {
        *(undefined **)(lVar15 + 0x30) = puVar16;
        iVar2 = 2;
        uVar10 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar6 = puVar16;
        func_0x000107c61174(puVar16);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar2 != 0) {
          func_0x000107c61658(lVar15 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar15 + 0x68));
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(puVar5);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar16);
        return;
      }
      func_0x000107c60e78();
      uVar7 = *(undefined8 *)(lVar15 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar15 + 0xb8) = param_7;
      *(undefined8 *)(lVar15 + 0xc0) = uVar14;
      *(undefined8 *)(lVar15 + 0xa8) = uVar10;
      *(long *)(lVar15 + 0xb0) = param_6;
      *(undefined8 *)(lVar15 + 0xa0) = uVar7;
      UNRECOVERED_JUMPTABLE = FUN_101a66e0c;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101a682cc; end: 101a68343;  */

void FUN_101a682cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a68344;
  plVar1[0x17] = param_7;
  plVar1[0x18] = lVar2;
  plVar1[0x15] = param_4;
  plVar1[0x16] = param_6;
  plVar1[0x14] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66e0c,0,0);
  return;
}



/* Entry: 101a68344; end: 101a68397;  */

void FUN_101a68344(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a68394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101a68398; end: 101a68433;  */

void FUN_101a68398(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8,ulong param_9,undefined8 param_10)

{
  undefined8 uVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong unaff_x19;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x20;
  long *plVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long unaff_x22;
  ulong unaff_x29;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  plVar21 = (long *)*unaff_x20;
  plVar10 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101a68434;
  lVar11 = unaff_x22 + 0x10;
  param_9 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar10[9] = (long)plVar21;
  plVar10[10] = lVar11;
  plVar10[7] = param_1;
  plVar10[8] = param_2;
  plVar10[0xb] = *plVar21;
  plVar9 = (long *)0x80;
  lVar18 = param_6;
  uStack_10 = unaff_x19;
  func_0x000107c615b8();
  uVar12 = uStack_10;
  plVar10[0xc] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_101a6722c;
  param_9 = param_9 & 0xefffffffffffffff | 0x1000000000000000;
  puVar2 = &uStack_10;
  uStack_10 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar9[0xb] = param_6;
  plVar9[0xc] = (long)plVar21;
  plVar9[9] = param_4;
  plVar9[10] = param_5;
  plVar9[7] = param_2;
  plVar9[8] = param_3;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a667bc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = *(long **)(plVar9[0xc] + 0x10);
  plVar14 = plVar9 + 3;
  *plVar14 = 0;
  plVar21 = (long *)0xa0;
  func_0x000107c615b8();
  plVar9[0xd] = (long)plVar21;
  plVar10 = plVar21;
  func_0x000100fb85f0();
  plVar9[0xe] = (long)plVar10;
  *plVar21 = (long)plVar9;
  plVar21[1] = (long)FUN_101a6686c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcStack_d8 = FUN_101a667bc;
  }
  else {
    func_0x000107c60e78();
    uStack_50 = (ulong)&stack0xffffffffffffffe0 | 0x1000000000000000;
    lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_58 = *plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)(lStack_58 + 0x68));
    if (plVar19 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_70 = (ulong)&uStack_50 | 0x1000000000000000;
    pcStack_68 = FUN_101a66908;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = plVar9[8];
    lVar16 = plVar9[7];
    uVar12 = plVar9[2];
    plStack_88 = plVar21;
    plStack_80 = plVar14;
    plStack_78 = plVar9;
    FUN_101a68a04(uVar4,plVar9[9],plVar9[10],plVar9[0xb]);
    plVar9[5] = 0;
    func_0x000107c3e418(uVar12);
    uVar22 = plVar9[5];
    if (uVar22 == 0) {
      uVar5 = uVar12;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar9[1];
      uVar22 = uVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) goto LAB_101a66a30;
    }
    else {
      plVar9[6] = uVar22;
      iVar3 = 2;
      lVar16 = 0;
      func_0x000100029b9c(2,0x12,0);
      uVar5 = uVar22;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar3 != 0) {
        func_0x000107c61658(plVar9 + 6,&UNK_11072cd20,plVar9[0xe]);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar12);
      uVar5 = uVar4;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar9[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(uVar22);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_c0 = (ulong)&uStack_70 | 0x1000000000000000;
    puVar2 = (ulong *)&lStack_d0;
    pcStack_b8 = FUN_101a66a50;
    register0x00000008 = (BADSPACEBASE *)&uStack_c0;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9[10] = lVar11;
    plVar9[0xb] = uVar4;
    plVar9[8] = lVar16;
    plVar9[9] = lVar18;
    plVar9[7] = uVar5;
    plStack_c8 = plVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_d8 = FUN_101a66abc;
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19 = *(long **)(plVar9[0xb] + 0x10);
    plVar14 = plVar9 + 3;
    *plVar14 = 0;
    plVar21 = (long *)0xa0;
    func_0x000107c615b8();
    plVar9[0xc] = (long)plVar21;
    plVar10 = plVar21;
    func_0x000100fb85f0();
    plVar9[0xd] = (long)plVar10;
    *plVar21 = (long)plVar9;
    plVar21[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar24 = *plVar9;
      func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x60));
      if (plVar19 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar20 = *(undefined8 *)(lVar24 + 0x10);
      uVar15 = *(undefined8 *)(lVar24 + 0x38);
      uVar8 = *(undefined8 *)(lVar24 + 0x48);
      uVar1 = *(undefined8 *)(lVar24 + 0x50);
      puVar6 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c46814(puVar6);
      func_0x000107c61170(uVar8);
      *(undefined8 *)(lVar24 + 0x28) = 0;
      func_0x000107c3e418(uVar20);
      puVar23 = *(undefined **)(lVar24 + 0x28);
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c615e8(uVar20);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23 = puVar6;
      }
      else {
        *(undefined **)(lVar24 + 0x30) = puVar23;
        iVar3 = 2;
        uVar15 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar7 = puVar23;
        func_0x000107c61174(puVar23);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar3 != 0) {
          func_0x000107c61658(lVar24 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar24 + 0x68));
        }
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(uVar20);
        func_0x000107c61170(puVar6);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar17 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar23);
        return;
      }
      func_0x000107c60e78();
      uVar8 = *(undefined8 *)(lVar24 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar24 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar24 + 0xb8) = lVar11;
      *(undefined8 *)(lVar24 + 0xc0) = uVar20;
      *(undefined8 *)(lVar24 + 0xa8) = uVar15;
      *(long *)(lVar24 + 0xb0) = lVar18;
      *(undefined8 *)(lVar24 + 0xa0) = uVar8;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(ulong *)((long)puVar2 + -0x20) = uVar12;
  *(ulong *)((long)puVar2 + -0x10) =
       (ulong)register0x00000008 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)puVar2 + -8) = pcStack_d8;
  *(long **)((long)puVar2 + -0x18) = plVar21;
  plVar21[0xb] = (long)plVar10;
  plVar21[0xc] = (long)(plVar9 + 4);
  plVar21[9] = (long)plVar14;
  plVar21[10] = (long)&UNK_11072cd20;
  plVar21[8] = (long)(plVar9 + 2);
  lVar18 = *plVar19;
  plVar21[0xd] = (long)&PTR_DAT_11072cca0;
  lVar11 = 0x10;
  _swift_task_alloc();
  plVar21[0xe] = lVar11;
  lVar11 = *(long *)(lVar18 + 0x50);
  plVar21[0xf] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar21[0x10] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x11] = uVar12;
  puVar13 = (undefined8 *)0x70;
  _swift_task_alloc();
  plVar21[0x12] = (long)puVar13;
  *puVar13 = plVar21;
  puVar13[1] = &UNK_104876614;
  *(ulong *)((long)puVar2 + -0x10) =
       *(ulong *)((long)puVar2 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  *(undefined8 **)((long)puVar2 + -0x18) = puVar13;
  puVar13[5] = uVar12;
  puVar13[6] = plVar19;
  lVar18 = *(long *)(*plVar19 + 0x50);
  puVar13[7] = lVar18;
  lVar11 = 0;
  __sSqMa(0,lVar18);
  puVar13[8] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  puVar13[9] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[10] = uVar12;
  lVar11 = *(long *)(lVar18 + -8);
  puVar13[0xb] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar13[0xc] = uVar12;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a68434; end: 101a68487;  */

void FUN_101a68434(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a68484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a68488; end: 101a68527;  */

void FUN_101a68488(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,undefined8 param_8,ulong param_9,undefined8 param_10)

{
  undefined8 uVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong unaff_x19;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x20;
  long *plVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long unaff_x22;
  ulong unaff_x29;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar21 = (long *)*unaff_x20;
  plVar11 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101a68528;
  param_9 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar11[9] = param_3;
  plVar11[10] = (long)plVar21;
  plVar11[7] = param_1;
  plVar11[8] = param_2;
  plVar11[0xb] = *plVar21;
  lVar16 = 0x112d453c8;
  lVar18 = param_6;
  lVar15 = param_7;
  uStack_10 = unaff_x19;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0xc] = uVar9;
  plVar10 = (long *)0x80;
  func_0x000107c615b8();
  uVar9 = uStack_10;
  plVar11[0xd] = (long)plVar10;
  *plVar10 = (long)plVar11;
  plVar10[1] = (long)FUN_101a6742c;
  param_9 = param_9 & 0xefffffffffffffff | 0x1000000000000000;
  puVar2 = &uStack_10;
  uStack_10 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar10[0xb] = param_7;
  plVar10[0xc] = (long)plVar21;
  plVar10[9] = param_5;
  plVar10[10] = param_6;
  plVar10[7] = param_2;
  plVar10[8] = param_4;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101a667bc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = *(long **)(plVar10[0xc] + 0x10);
  plVar13 = plVar10 + 3;
  *plVar13 = 0;
  plVar21 = (long *)0xa0;
  func_0x000107c615b8();
  plVar10[0xd] = (long)plVar21;
  plVar11 = plVar21;
  func_0x000100fb85f0();
  plVar10[0xe] = (long)plVar11;
  *plVar21 = (long)plVar10;
  plVar21[1] = (long)FUN_101a6686c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcStack_d8 = FUN_101a667bc;
  }
  else {
    func_0x000107c60e78();
    lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_58 = *plVar10;
    plVar10 = (long *)*plVar10;
    func_0x000107c615c0(*(undefined8 *)(lStack_58 + 0x68));
    if (plVar19 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66908;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a68c70;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_70 = (ulong)&stack0xffffffffffffffb0 | 0x1000000000000000;
    pcStack_68 = FUN_101a66908;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = plVar10[8];
    lVar16 = plVar10[7];
    uVar9 = plVar10[2];
    plStack_88 = plVar21;
    plStack_80 = plVar13;
    plStack_78 = plVar10;
    FUN_101a68a04(uVar4,plVar10[9],plVar10[10],plVar10[0xb]);
    plVar10[5] = 0;
    func_0x000107c3e418(uVar9);
    uVar22 = plVar10[5];
    if (uVar22 == 0) {
      uVar5 = uVar9;
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar10[1];
      uVar22 = uVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) goto LAB_101a66a30;
    }
    else {
      plVar10[6] = uVar22;
      iVar3 = 2;
      lVar16 = 0;
      func_0x000100029b9c(2,0x12,0);
      uVar5 = uVar22;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      if (iVar3 != 0) {
        func_0x000107c61658(plVar10 + 6,&UNK_11072cd20,plVar10[0xe]);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar9);
      uVar5 = uVar4;
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar10[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
LAB_101a66a30:
                    /* WARNING: Could not recover jumptable at 0x000101a66a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(uVar22);
        return;
      }
    }
    func_0x000107c60e78();
    uStack_c0 = (ulong)&uStack_70 | 0x1000000000000000;
    puVar2 = (ulong *)&lStack_d0;
    pcStack_b8 = FUN_101a66a50;
    register0x00000008 = (BADSPACEBASE *)&uStack_c0;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[10] = lVar15;
    plVar10[0xb] = uVar4;
    plVar10[8] = lVar16;
    plVar10[9] = lVar18;
    plVar10[7] = uVar5;
    plStack_c8 = plVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66abc;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_d8 = FUN_101a66abc;
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19 = *(long **)(plVar10[0xb] + 0x10);
    plVar13 = plVar10 + 3;
    *plVar13 = 0;
    plVar21 = (long *)0xa0;
    func_0x000107c615b8();
    plVar10[0xc] = (long)plVar21;
    plVar11 = plVar21;
    func_0x000100fb85f0();
    plVar10[0xd] = (long)plVar11;
    *plVar21 = (long)plVar10;
    plVar21[1] = (long)FUN_101a66b6c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar24 = *plVar10;
      func_0x000107c615c0(*(undefined8 *)(*plVar10 + 0x60));
      if (plVar19 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101a66c08;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101a66d90;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar20 = *(undefined8 *)(lVar24 + 0x10);
      uVar14 = *(undefined8 *)(lVar24 + 0x38);
      uVar8 = *(undefined8 *)(lVar24 + 0x48);
      uVar1 = *(undefined8 *)(lVar24 + 0x50);
      puVar6 = PTR_PTR_1126b25b8;
      func_0x000107c610f8(PTR_PTR_1126b25b8);
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c46814(puVar6);
      func_0x000107c61170(uVar8);
      *(undefined8 *)(lVar24 + 0x28) = 0;
      func_0x000107c3e418(uVar20);
      puVar23 = *(undefined **)(lVar24 + 0x28);
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c615e8(uVar20);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23 = puVar6;
      }
      else {
        *(undefined **)(lVar24 + 0x30) = puVar23;
        iVar3 = 2;
        uVar14 = 0;
        func_0x000100029b9c(2,0x12,0);
        puVar7 = puVar23;
        func_0x000107c61174(puVar23);
        func_0x000107c61174();
        func_0x000107c61174();
        if (iVar3 != 0) {
          func_0x000107c61658(lVar24 + 0x30,&UNK_11072cd20,*(undefined8 *)(lVar24 + 0x68));
        }
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(uVar20);
        func_0x000107c61170(puVar6);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar17 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101a66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar23);
        return;
      }
      func_0x000107c60e78();
      uVar8 = *(undefined8 *)(lVar24 + 0x20);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar24 + 8))();
        return;
      }
      func_0x000107c60e78();
      *(long *)(lVar24 + 0xb8) = lVar15;
      *(undefined8 *)(lVar24 + 0xc0) = uVar20;
      *(undefined8 *)(lVar24 + 0xa8) = uVar14;
      *(long *)(lVar24 + 0xb0) = lVar18;
      *(undefined8 *)(lVar24 + 0xa0) = uVar8;
      UNRECOVERED_JUMPTABLE_00 = FUN_101a66e0c;
      goto _swift_task_switch;
    }
  }
  *(ulong *)((long)puVar2 + -0x20) = uVar9;
  *(ulong *)((long)puVar2 + -0x10) =
       (ulong)register0x00000008 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)puVar2 + -8) = pcStack_d8;
  *(long **)((long)puVar2 + -0x18) = plVar21;
  plVar21[0xb] = (long)plVar11;
  plVar21[0xc] = (long)(plVar10 + 4);
  plVar21[9] = (long)plVar13;
  plVar21[10] = (long)&UNK_11072cd20;
  plVar21[8] = (long)(plVar10 + 2);
  lVar18 = *plVar19;
  plVar21[0xd] = (long)&PTR_DAT_11072cca0;
  lVar16 = 0x10;
  _swift_task_alloc();
  plVar21[0xe] = lVar16;
  lVar16 = *(long *)(lVar18 + 0x50);
  plVar21[0xf] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  plVar21[0x10] = lVar16;
  uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x11] = uVar9;
  puVar12 = (undefined8 *)0x70;
  _swift_task_alloc();
  plVar21[0x12] = (long)puVar12;
  *puVar12 = plVar21;
  puVar12[1] = &UNK_104876614;
  *(ulong *)((long)puVar2 + -0x10) =
       *(ulong *)((long)puVar2 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  *(undefined8 **)((long)puVar2 + -0x18) = puVar12;
  puVar12[5] = uVar9;
  puVar12[6] = plVar19;
  lVar18 = *(long *)(*plVar19 + 0x50);
  puVar12[7] = lVar18;
  lVar16 = 0;
  __sSqMa(0,lVar18);
  puVar12[8] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  puVar12[9] = lVar16;
  uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[10] = uVar9;
  lVar16 = *(long *)(lVar18 + -8);
  puVar12[0xb] = lVar16;
  uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[0xc] = uVar9;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101a68528; end: 101a68563;  */

void FUN_101a68528(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a68560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a68564; end: 101a68583;  */

void FUN_101a68564(void)

{
  FUN_101a6765c();
  return;
}



/* Entry: 101a68584; end: 101a685a3;  */

void FUN_101a68584(void)

{
  FUN_101a67a1c();
  return;
}



/* Entry: 101a685a4; end: 101a687bb;  */

undefined8 FUN_101a685a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar3 = *unaff_x20;
  func_0x000107c5fcf8(puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,0,1,lVar1);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar2 = &UNK_1104325e8;
  func_0x000107c613fc(&UNK_1104325e8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  uVar4 = 0;
  FUN_101a67e68(0,0,puVar5,&UNK_10d9bd030,puVar2);
  func_0x0001000abe54(puVar5);
  return uVar4;
}



/* Entry: 101a687bc; end: 101a6883b;  */

void FUN_101a687bc(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = *(long **)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a68cc0;
  plVar5[5] = lVar6;
  plVar5[6] = lVar9;
  plVar5[3] = 0;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8(0xa0,uVar1,uVar3);
  plVar5[7] = (long)plVar4;
  plVar8 = plVar4;
  func_0x000100fb85f0();
  plVar5[8] = (long)plVar8;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a680ec;
  plVar4[0xb] = (long)plVar8;
  plVar4[0xc] = (long)(plVar5 + 4);
  plVar4[9] = (long)(plVar5 + 3);
  plVar4[10] = (long)&UNK_11072cd20;
  plVar4[8] = (long)(plVar5 + 2);
  lVar9 = *plVar2;
  plVar4[0xd] = (long)&PTR_DAT_11072cca0;
  lVar6 = 0x10;
  _swift_task_alloc();
  plVar4[0xe] = lVar6;
  lVar6 = *(long *)(lVar9 + 0x50);
  plVar4[0xf] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[0x10] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar7;
  plVar8 = (long *)0x70;
  _swift_task_alloc();
  plVar4[0x12] = (long)plVar8;
  *plVar8 = (long)plVar4;
  plVar8[1] = (long)&UNK_104876614;
  plVar8[5] = uVar7;
  plVar8[6] = (long)plVar2;
  lVar9 = *(long *)(*plVar2 + 0x50);
  plVar8[7] = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  plVar8[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[9] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar7;
  lVar6 = *(long *)(lVar9 + -8);
  plVar8[0xb] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a6883c; end: 101a688bb;  */

void FUN_101a6883c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = *(long **)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a68cc4;
  plVar5[0x15] = lVar6;
  plVar5[0x16] = lVar9;
  plVar5[0x13] = 0;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8(0xa0,uVar1,uVar3);
  plVar5[0x17] = (long)plVar4;
  plVar8 = plVar4;
  func_0x000100fb85f0();
  plVar5[0x18] = (long)plVar8;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a67c5c;
  plVar4[0xb] = (long)plVar8;
  plVar4[0xc] = (long)(plVar5 + 0x14);
  plVar4[9] = (long)(plVar5 + 0x13);
  plVar4[10] = (long)&UNK_11072cd20;
  plVar4[8] = (long)(plVar5 + 0x12);
  lVar9 = *plVar2;
  plVar4[0xd] = (long)&PTR_DAT_11072cca0;
  lVar6 = 0x10;
  _swift_task_alloc();
  plVar4[0xe] = lVar6;
  lVar6 = *(long *)(lVar9 + 0x50);
  plVar4[0xf] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[0x10] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar7;
  plVar8 = (long *)0x70;
  _swift_task_alloc();
  plVar4[0x12] = (long)plVar8;
  *plVar8 = (long)plVar4;
  plVar8[1] = (long)&UNK_104876614;
  plVar8[5] = uVar7;
  plVar8[6] = (long)plVar2;
  lVar9 = *(long *)(*plVar2 + 0x50);
  plVar8[7] = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  plVar8[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[9] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar7;
  lVar6 = *(long *)(lVar9 + -8);
  plVar8[0xb] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a688bc; end: 101a688d3;  */

long FUN_101a688bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101a688d4; end: 101a68a03;  */

undefined * FUN_101a688d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a68a04);
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
    puVar3 = (undefined *)0x112df01c8;
    func_0x0001000285a8(0x112df01c8,&UNK_10d9bd040);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112df01d0;
    func_0x0001000285a8(0x112df01d0,&UNK_10d9bd048);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101a68a04; end: 101a68ae3;  */

undefined * FUN_101a68a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000103fc18cc();
  func_0x000107c6030c();
  uVar1 = 0x2d;
  uVar4 = 0xe100000000000000;
  func_0x000107c5fb78(0x2d,0xe100000000000000);
  func_0x00010011df08();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar3 = PTR_PTR_1126b25b8;
  func_0x000107c610f8(PTR_PTR_1126b25b8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46814(puVar3);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 101a68ae4; end: 101a68afb;  */

undefined8 * FUN_101a68ae4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101a68afc; end: 101a68b37;  */

void FUN_101a68afc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a68b38; end: 101a68bb7;  */

void FUN_101a68b38(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = *(long **)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a68bb8;
  plVar5[0x15] = lVar6;
  plVar5[0x16] = lVar9;
  plVar5[0x13] = 0;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8(0xa0,uVar1,uVar3);
  plVar5[0x17] = (long)plVar4;
  plVar8 = plVar4;
  func_0x000100fb85f0();
  plVar5[0x18] = (long)plVar8;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a67c5c;
  plVar4[0xb] = (long)plVar8;
  plVar4[0xc] = (long)(plVar5 + 0x14);
  plVar4[9] = (long)(plVar5 + 0x13);
  plVar4[10] = (long)&UNK_11072cd20;
  plVar4[8] = (long)(plVar5 + 0x12);
  lVar9 = *plVar2;
  plVar4[0xd] = (long)&PTR_DAT_11072cca0;
  lVar6 = 0x10;
  _swift_task_alloc();
  plVar4[0xe] = lVar6;
  lVar6 = *(long *)(lVar9 + 0x50);
  plVar4[0xf] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[0x10] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar7;
  plVar8 = (long *)0x70;
  _swift_task_alloc();
  plVar4[0x12] = (long)plVar8;
  *plVar8 = (long)plVar4;
  plVar8[1] = (long)&UNK_104876614;
  plVar8[5] = uVar7;
  plVar8[6] = (long)plVar2;
  lVar9 = *(long *)(*plVar2 + 0x50);
  plVar8[7] = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  plVar8[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[9] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar7;
  lVar6 = *(long *)(lVar9 + -8);
  plVar8[0xb] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a68bb8; end: 101a68bf3;  */

void FUN_101a68bb8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a68bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a68bf4; end: 101a68c33;  */

void FUN_101a68bf4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a68c34; end: 101a68c6f;  */

void FUN_101a68c34(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101a68c70; end: 101a68cbf;  */

void FUN_101a68c70(void)

{
  long lVar1;
  long in_x3;
  long in_x5;
  long in_x6;
  long unaff_x20;
  long *unaff_x22;
  
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    func_0x000107c60e78();
    lVar1 = *unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a68bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  lVar1 = unaff_x22[4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101a66de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  unaff_x22[0x17] = in_x6;
  unaff_x22[0x18] = unaff_x20;
  unaff_x22[0x15] = in_x3;
  unaff_x22[0x16] = in_x5;
  unaff_x22[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a66e0c,0,0);
  return;
}



/* Entry: 101a68cc0; end: 101a68cc7;  */

void FUN_101a68cc0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a68bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a68cc8; end: 101a68eb7;  */

long FUN_101a68cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar3 = param_2;
  func_0x000107c5b1d4(param_2);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112df01d8,&UNK_10d9bd0b8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  pcVar2 = FUN_101a68f10;
  func_0x0001000bdd8c(FUN_101a68f10,uVar1);
  uVar3 = 0;
  func_0x000100218dec(0);
  func_0x000107c610f8();
  func_0x000103fc1810(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a68eb8; end: 101a68f0f;  */

void FUN_101a68eb8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101a66730();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110432560;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101a68f10; end: 101a68f27;  */

void FUN_101a68f10(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000101a66730();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110432560;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101a68f28; end: 101a68fc7;  */

void FUN_101a68f28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a68fc8; end: 101a68fd7;  */

void FUN_101a68fc8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a68fd8; end: 101a690cf;  */

void FUN_101a68fd8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(char *)(unaff_x20 + 0x80) == '\0') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
    FUN_101a698ac(unaff_x20 + 0x88,auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    pcVar4 = *(code **)(lStack_58 + 0x40);
    FUN_101a69884(uVar2,0);
    func_0x000107c61174(uVar3);
    uVar1 = uVar3;
    (*pcVar4)();
    func_0x000101a69898(uVar2,0);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uVar1);
    func_0x0001000834e4(auStack_78);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000101a69898(*(undefined8 *)(unaff_x20 + 0x78),*(undefined1 *)(unaff_x20 + 0x80));
  func_0x0001000834e4(unaff_x20 + 0x88);
  func_0x000107c61470();
  func_0x000107c6146c();
  return;
}



/* Entry: 101a690d0; end: 101a690ef;  */

void FUN_101a690d0(void)

{
  func_0x000107c61168(&PTR_PTR_112df02f0);
  return;
}



/* Entry: 101a690f0; end: 101a69113;  */

void FUN_101a690f0(void)

{
  return;
}



/* Entry: 101a69114; end: 101a6925f;  */

void FUN_101a69114(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(lVar7 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  cVar3 = *(char *)(lVar7 + 0x80);
  if (cVar3 != '\0') {
    func_0x000100fb86fc();
    func_0x000107c613f8(&UNK_11072cfa8,param_1,0,0);
    *param_1 = uVar6;
    *(char *)(param_1 + 1) = cVar3;
    func_0x000107c61654();
    FUN_101a69884(uVar6,cVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a6919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined1 *)(lVar7 + 0x80) = 2;
  uVar1 = *(undefined8 *)(lVar7 + 0xa0);
  lVar2 = *(long *)(lVar7 + 0xa8);
  func_0x0001000a8868(lVar7 + 0x88,uVar1);
  uVar4 = *(undefined8 *)(lVar7 + 0x70);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar6,0x40,0,0x48,uVar1,lVar2);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar5;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a69260;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)();
  return;
}



/* Entry: 101a69260; end: 101a692cb;  */

void FUN_101a69260(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101a692cc;
  }
  else {
    pcVar2 = (code *)0x101a69304;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x10),0);
  return;
}



/* Entry: 101a692cc; end: 101a6933b;  */

void FUN_101a692cc(void)

{
  long unaff_x22;
  
  func_0x000101a69898(*(undefined8 *)(unaff_x22 + 0x18),0);
                    /* WARNING: Could not recover jumptable at 0x000101a69300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a6933c; end: 101a6935f;  */

void FUN_101a6933c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69360);
  return;
}



/* Entry: 101a69360; end: 101a69477;  */

void FUN_101a69360(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x60);
  if (*(char *)(lVar7 + 0x80) != '\x02' || *(long *)(lVar7 + 0x78) != 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0xa0);
    lVar2 = *(long *)(lVar7 + 0xa8);
    func_0x0001000a8868(lVar7 + 0x88,uVar4);
    uVar8 = *(undefined8 *)(lVar7 + 0x70);
    piVar5 = *(int **)(lVar2 + 0x20);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a69478;
                    /* WARNING: Could not recover jumptable at 0x000101a6940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (*(undefined8 *)(unaff_x22 + 0x38),uVar8,*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
               *(undefined8 *)(unaff_x22 + 0x58),unaff_x22 + 0x30,uVar4,lVar2);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined1 *)(unaff_x22 + 0x28) = 0x82;
  uVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar4 != 0) {
    func_0x000100fb86fc();
    func_0x000107c61658(unaff_x22 + 0x20,&UNK_11072cfa8,uVar4);
  }
  puVar6 = *(undefined8 **)(unaff_x22 + 0x68);
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 0x82;
                    /* WARNING: Could not recover jumptable at 0x000101a69474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a69478; end: 101a694df;  */

void FUN_101a69478(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
  if (unaff_x20 != 0) {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a694e0,*(undefined8 *)(lVar1 + 0x60),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a694dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101a694e0; end: 101a69587;  */

void FUN_101a694e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100fb85f0();
  puVar1 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar3;
  *(undefined8 *)(unaff_x22 + 0x10) = puVar1;
  *(undefined1 *)(unaff_x22 + 0x18) = 0xc0;
  uVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    func_0x000100fb86fc();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x10),&UNK_11072cfa8,uVar3);
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x68);
  *puVar2 = puVar1;
  *(undefined1 *)(puVar2 + 1) = 0xc0;
                    /* WARNING: Could not recover jumptable at 0x000101a69584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a69588; end: 101a695ab;  */

void FUN_101a69588(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x70));
  return;
}



/* Entry: 101a695ac; end: 101a695f3;  */

void FUN_101a695ac(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x78);
  uVar1 = *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + 0x80);
  FUN_101a69884(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a695f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 101a695f4; end: 101a69677;  */

void FUN_101a695f4(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a6963c;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69114,lVar2,0);
  return;
}



/* Entry: 101a69678; end: 101a6968f;  */

void FUN_101a69678(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69690,uVar1,0);
  return;
}



/* Entry: 101a69690; end: 101a696ff;  */

/* WARNING: Removing unreachable block (ram,0x000101a696bc) */

void FUN_101a69690(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  FUN_101a697ec();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x000101a696fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 101a69700; end: 101a6978b;  */

void FUN_101a69700(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a6978c;
  plVar1[0xc] = lVar2;
  plVar1[0xd] = unaff_x22 + 0x10;
  plVar1[10] = param_4;
  plVar1[0xb] = param_5;
  plVar1[8] = param_2;
  plVar1[9] = param_3;
  plVar1[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69360,lVar2,0);
  return;
}



/* Entry: 101a6978c; end: 101a697eb;  */

void FUN_101a6978c(void)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    puVar2 = *(undefined8 **)(lVar3 + 0x20);
    uVar1 = *(undefined1 *)(lVar3 + 0x18);
    *puVar2 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined1 *)(puVar2 + 1) = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a697e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a697ec; end: 101a69883;  */

undefined1  [16] FUN_101a697ec(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  bVar1 = *(byte *)(unaff_x20 + 0x80);
  if (bVar1 == 0) {
    *(undefined1 *)(unaff_x20 + 0x80) = 1;
  }
  else {
    uVar2 = bVar1 | 0x40;
    unaff_x20 = (ulong)uVar2;
    uStack_38 = (undefined1)uVar2;
    iVar3 = 2;
    uStack_40 = uVar5;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = uVar5;
    FUN_101a69884(uVar5,bVar1);
    if (iVar3 != 0) {
      func_0x000100fb86fc();
      func_0x000107c61658(&uStack_40,&UNK_11072cfa8,uVar4);
    }
  }
  auVar6._8_8_ = unaff_x20;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 101a69884; end: 101a698ab;  */

void FUN_101a69884(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 101a698ac; end: 101a698ef;  */

long FUN_101a698ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101a698f0; end: 101a69933;  */

void FUN_101a698f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a69934; end: 101a69aa3;  */

void FUN_101a69934(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_50 = 0x20746e65746e6f63;
    uStack_48 = 0xed0000203a79656b;
    func_0x000107c2bddc(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar2,param_2);
    func_0x000107c6142c(param_2);
    uVar2 = uStack_48;
    lVar5 = lStack_50;
    puVar3 = PTR_PTR_1126d80e8;
    func_0x000107c610f8(PTR_PTR_1126d80e8);
    func_0x000107c453e4();
    uVar4 = 0x534664756f6c43;
    func_0x000107c5fadc(0x534664756f6c43,0xe700000000000000);
    func_0x000107c5471c(puVar3);
    func_0x000107c61170(uVar4);
    uVar4 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efcd470);
    func_0x000107c54664(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c5fadc(lVar5,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5482c(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c4bfb0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 101a69aa4; end: 101a69bbf;  */

long FUN_101a69aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104327a8;
  func_0x000107c613fc(&UNK_1104327a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112df0408,&UNK_10d9bd1f0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  pcVar2 = FUN_101a69cd0;
  func_0x0001000bdd8c(FUN_101a69cd0,puVar1);
  uVar3 = 0;
  func_0x00010021756c(0);
  func_0x000107c610f8();
  func_0x0001006f7208(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a69bc0; end: 101a69ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a69bc0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130806b8);
  puVar2 = &UNK_1104327f8;
  func_0x000107c613fc(&UNK_1104327f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x0001000285a8(0x112df04e0,&UNK_10d9bd240);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(param_4);
  uVar3 = 0x101a69dbc;
  func_0x0001000bdd8c(0x101a69dbc,puVar2);
  lVar4 = 0;
  func_0x000101a69dfc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  *param_1 = lVar4;
  return;
}



/* Entry: 101a69cd0; end: 101a69cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a69cd0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar6 = *(undefined8 *)(lVar4 + _DAT_1130806b8);
  puVar3 = &UNK_1104327f8;
  func_0x000107c613fc(&UNK_1104327f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112df04e0,&UNK_10d9bd240);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(uVar5);
  uVar1 = 0x101a69dbc;
  func_0x0001000bdd8c(0x101a69dbc,puVar3);
  lVar4 = 0;
  func_0x000101a69dfc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar6;
  *(undefined8 *)(lVar4 + 0x20) = uVar1;
  *param_1 = lVar4;
  return;
}



/* Entry: 101a69cdc; end: 101a69d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a69cdc(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083868);
  func_0x0001000bda74();
  lVar2 = 0;
  func_0x000101a69914();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 101a69d50; end: 101a69d83;  */

void FUN_101a69d50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a69d84; end: 101a69d8b;  */

void FUN_101a69d84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a69d8c; end: 101a69daf;  */

void FUN_101a69d8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a69db0; end: 101a69dc7;  */

void FUN_101a69db0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a69dc8; end: 101a69e1b;  */

void FUN_101a69dc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a69e1c; end: 101a69e37;  */

void FUN_101a69e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69e38,0,0);
  return;
}



/* Entry: 101a69e38; end: 101a69fcf;  */

void FUN_101a69e38(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = uVar4;
  func_0x000107c5acb4();
  func_0x000107c615e8(uVar4);
  if ((int)uVar3 != 0 && lVar1 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c615f0(lVar1);
    func_0x0001000d224c(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0xb0) = lVar5;
    if (lVar5 != 0) {
      func_0x000107c43924(lVar1);
      func_0x000107c43fb0();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xb8) = lVar1;
      lVar2 = lVar1;
      func_0x000101a6a21c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 3;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(long *)(lVar2 + 0x20) = lVar1;
      uVar3 = 0;
      FUN_1019c718c(0);
      func_0x000107c61174(lVar1);
      lVar1 = lVar2;
      func_0x000107c5fc48(lVar2,uVar3);
      *(long *)(unaff_x22 + 0xc0) = lVar1;
      func_0x000107c61574(lVar2);
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101a69fd0;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,0);
      uVar3 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(long *)(unaff_x22 + 0x70) = lVar1;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110432850;
      func_0x000107c4fec8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a69fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a69fd0; end: 101a6a00f;  */

void FUN_101a69fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a6a010,0,0);
  return;
}



/* Entry: 101a6a010; end: 101a6a083;  */

void FUN_101a6a010(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_101a69934(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a6a080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a6a084; end: 101a6a167; -[_TtC50MemoriesInvalidStreamingContentRemovalServicesImpl38MemoriesInvalidStreamingContentRemover removeWithInvalidStreamingContent:] */

/* WARNING: Possible PIC construction at 0x000101a6a138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6a13c) */

void FUN_101a6a084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &UNK_110432838;
  func_0x000107c613fc(&UNK_110432838,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar4;
  func_0x000107c615f4(param_3,2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x0001009548b0(0x80,0,0x48,0,0,0,&UNK_10d9bd2a0,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 101a6a168; end: 101a6a1df;  */

void FUN_101a6a168(void)

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
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a6a1e0;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar4;
  plVar5[0x12] = lVar1;
  plVar5[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a69e38,0,0);
  return;
}



/* Entry: 101a6a1e0; end: 101a6a277;  */

void FUN_101a6a1e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a6a218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a6a278; end: 101a6a28f;  */

long FUN_101a6a278(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101a6a290; end: 101a6a2ff;  */

undefined8 FUN_101a6a290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009b6df8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101a6a300; end: 101a6a333;  */

void FUN_101a6a300(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6a334; end: 101a6a367;  */

undefined1  [16] FUN_101a6a334(void)

{
  return ZEXT816(0x110432940);
}



/* Entry: 101a6a368; end: 101a6a3b3;  */

undefined8 FUN_101a6a368(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a6a3b4; end: 101a6a407;  */

undefined8 FUN_101a6a3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003f22b4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a6a408; end: 101a6a443;  */

void FUN_101a6a408(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6a444; end: 101a6a487;  */

undefined1  [16] FUN_101a6a444(void)

{
  return ZEXT816(0x110432a68);
}



/* Entry: 101a6a488; end: 101a6a4af;  */

void FUN_101a6a488(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6a4b0; end: 101a6a4fb;  */

undefined8 FUN_101a6a4b0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a6a4fc; end: 101a6a547;  */

undefined8 FUN_101a6a4fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006ecfbc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101a6a548; end: 101a6a57b;  */

void FUN_101a6a548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6a57c; end: 101a6a5cb;  */

undefined8 FUN_101a6a57c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a6a5cc; end: 101a6a60f;  */

undefined1  [16] FUN_101a6a5cc(void)

{
  return ZEXT816(0x110432bd8);
}



/* Entry: 101a6a610; end: 101a6a637;  */

void FUN_101a6a610(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6a638; end: 101a6a63f;  */

undefined8 FUN_101a6a638(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a6a640; end: 101a6a9a3;  */

long FUN_101a6a640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a8648;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efcd510);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 101a6a9a4; end: 101a6aa0f;  */

void FUN_101a6a9a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101a6aa10; end: 101a6aa5f;  */

undefined8 FUN_101a6aa10(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a6aa60; end: 101a6aaa3;  */

undefined1  [16] FUN_101a6aa60(void)

{
  return ZEXT816(0x110432ca0);
}



/* Entry: 101a6aaa4; end: 101a6aacb;  */

void FUN_101a6aaa4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


