/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d1ab50; end: 101d1ab9b;  */

void FUN_101d1ab50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101d1ab98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d1ab9c; end: 101d1abfb;  */

void FUN_101d1ab9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000100fee724(uVar1,uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d1abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d1abfc; end: 101d1ac57;  */

void FUN_101d1abfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(long *)(unaff_x22 + 0x150) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  *(undefined8 *)(unaff_x22 + 0x138) = param_2;
  *(long *)(unaff_x22 + 0x120) = param_3;
  *(undefined8 *)(unaff_x22 + 0x128) = param_4;
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d1ac58;
  plVar1[2] = param_3;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1b54c,0,0);
  return;
}



/* Entry: 101d1ac58; end: 101d1acbf;  */

void FUN_101d1ac58(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x160) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101d1ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1acc0,0,0);
  return;
}



/* Entry: 101d1acc0; end: 101d1b0c7;  */

void FUN_101d1acc0(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x22;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar9 = (undefined8 *)(unaff_x22 + 0x40);
  *puVar9 = 0x3ff0000000000000;
  uVar7 = *(ulong *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x3ff0000000000000;
  func_0x000107c5b078(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000109120dc4(uVar7,0);
  func_0x000107c61180();
  dVar12 = 0.0;
  dVar13 = 1.0;
  if (uVar7 == 0) {
    uStack_90 = 0;
    uStack_88 = 0x3ff0000000000000;
    uStack_80 = 0;
    uStack_78 = 0;
    dVar15 = 1.0;
    dVar17 = 0.0;
    uVar10 = 0;
    uVar14 = 0x3ff0000000000000;
    uVar16 = 0;
    uVar18 = 0;
    goto LAB_101d1ae90;
  }
  uVar10 = 0x112dec308;
  func_0x0001000285a8(0x112dec308,&UNK_10d9b80a0);
  uVar2 = uVar7;
  func_0x000107c5fc54(uVar7,uVar10);
  func_0x000107c61170(uVar7);
  if (uVar2 >> 0x3e == 0) {
    if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_101d1ad7c;
LAB_101d1ae58:
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar7 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar7 = uVar2;
    }
    func_0x000107c60480();
    if (uVar7 == 0) goto LAB_101d1ae58;
LAB_101d1ad7c:
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d1b0c8);
        (*pcVar1)();
      }
      lVar3 = *(long *)(uVar2 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      func_0x000101a25314(0,uVar2);
    }
    func_0x000107c6142c(uVar2);
    lVar8 = lVar3;
    func_0x000107c51b0c();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x0001091237fc(&dStack_a0);
      uVar18 = uStack_78;
      uVar16 = uStack_80;
      uVar14 = uStack_88;
      uVar10 = uStack_90;
      dVar17 = dStack_98;
      dVar15 = dStack_a0;
      func_0x000109123828(&dStack_a0,lVar8);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar8);
      dVar12 = dStack_98;
      dVar13 = dStack_a0;
      goto LAB_101d1ae90;
    }
    func_0x000107c61170(lVar3);
  }
  uStack_90 = 0;
  uStack_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  uStack_78 = 0;
  dVar15 = 1.0;
  dVar17 = 0.0;
  uVar10 = 0;
  uVar14 = 0x3ff0000000000000;
  uVar16 = 0;
  uVar18 = 0;
  dVar12 = 0.0;
  dVar13 = 1.0;
LAB_101d1ae90:
  uVar7 = unaff_x22 + 0x10;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar14;
  *(double *)(unaff_x22 + 0x198) = dVar15;
  *(double *)(unaff_x22 + 0x1a0) = dVar17;
  *(undefined8 *)(unaff_x22 + 0x188) = uStack_80;
  *(undefined8 *)(unaff_x22 + 400) = uStack_78;
  *(undefined8 *)(unaff_x22 + 0x178) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x180) = uStack_88;
  *(double *)(unaff_x22 + 0x168) = dVar13;
  *(double *)(unaff_x22 + 0x170) = dVar12;
  *(double *)(unaff_x22 + 0x10) = dVar15;
  *(double *)(unaff_x22 + 0x18) = dVar17;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
  *(double *)(unaff_x22 + 0x70) = dVar13;
  *(double *)(unaff_x22 + 0x78) = dVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x88) = uStack_88;
  *(undefined8 *)(unaff_x22 + 0x90) = uStack_80;
  *(undefined8 *)(unaff_x22 + 0x98) = uStack_78;
  func_0x000107c5ffa4(uVar7,puVar9);
  if ((uVar7 & 1) == 0) {
    uVar6 = 1;
    uVar7 = *(ulong *)(unaff_x22 + 0x128);
  }
  else {
    lVar3 = unaff_x22 + 0x70;
    func_0x000107c5ffa4(lVar3,puVar9);
    uVar6 = (uint)lVar3 ^ 1;
    uVar7 = *(ulong *)(unaff_x22 + 0x128);
  }
  if (uVar7 != 0) {
    if (uVar7 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)uVar7) {
        uVar7 = uVar7 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    uVar6 = uVar7 != 0 | uVar6;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  dVar17 = *(double *)(unaff_x22 + 0x130);
  dVar15 = *(double *)(unaff_x22 + 0x138);
  func_0x000107c5b078(uVar10);
  func_0x000107c5b078(uVar10);
  if (((uVar6 & 1) == 0) && (ABS(dVar12 / dVar13 - dVar17 / dVar15) <= 0.01)) {
    puVar9 = *(undefined8 **)(unaff_x22 + 0x160);
    dVar12 = *(double *)(unaff_x22 + 0x130);
    if (*(double *)(unaff_x22 + 0x130) < *(double *)(unaff_x22 + 0x138)) {
      dVar12 = *(double *)(unaff_x22 + 0x138);
    }
    func_0x000107c51830(dVar12);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
    if (puVar9 != (undefined8 *)0x0) {
      func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101d1afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar9);
      return;
    }
    FUN_101d1ce54();
    func_0x000107c613f8(&UNK_1106e7ed0,puVar9,0,0);
    *puVar9 = 8;
    func_0x000107c61654();
    func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101d1b0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar11 = *(long **)(*(long *)(unaff_x22 + 0x150) + 0x18);
  uVar10 = 0x112e20b60;
  func_0x0001000285a8(0x112e20b60,&UNK_10da03af0);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar10;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar4;
  plVar5 = plVar4;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d1b0c8;
  plVar4[0xb] = (long)plVar5;
  plVar4[0xc] = unaff_x22 + 0x110;
  plVar4[9] = unaff_x22 + 0x108;
  plVar4[10] = (long)&UNK_1107a6f08;
  plVar4[8] = unaff_x22 + 0x100;
  lVar8 = *plVar11;
  plVar4[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar4[0xe] = lVar3;
  lVar3 = *(long *)(lVar8 + 0x50);
  plVar4[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x10] = lVar3;
  uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar7;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar4[0x12] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar7;
  plVar5[6] = (long)plVar11;
  lVar8 = *(long *)(*plVar11 + 0x50);
  plVar5[7] = lVar8;
  lVar3 = 0;
  __sSqMa(0,lVar8);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar7;
  lVar3 = *(long *)(lVar8 + -8);
  plVar5[0xb] = lVar3;
  uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101d1b0c8; end: 101d1b11f;  */

void FUN_101d1b0c8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1c8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d1b120;
  }
  else {
    pcVar1 = FUN_101d1b4d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d1b120; end: 101d1b33b;  */

void FUN_101d1b120(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
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
  undefined8 uVar22;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar21 = *(undefined8 *)(unaff_x22 + 400);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar5 = *(undefined **)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5;
  }
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar8;
  func_0x000107c61174(uVar2);
  func_0x000107c61434(puVar5);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  func_0x000107c5fadc(uVar3,uVar4);
  uVar4 = 0x112deb068;
  func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
  puVar5 = puVar1;
  func_0x000107c5fc48(puVar1,uVar4);
  func_0x000107c6142c(puVar1);
  func_0x000107c450e0(uVar2);
  func_0x000107c30998(uVar6);
  func_0x000107c61180();
  func_0x000107c3ab48(&uStack_98);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar16;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
  *(undefined8 *)(unaff_x22 + 200) = uVar17;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar22;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x200) = uStack_98;
  *(undefined8 *)(unaff_x22 + 0x208) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x210) = uStack_88;
  func_0x000107c5bbac(uVar20,uVar19);
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar8;
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
  func_0x000100759c94(uVar8,0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar8;
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101d1b33c;
                    /* WARNING: Could not recover jumptable at 0x000101d1b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100f96304)();
  return;
}



/* Entry: 101d1b33c; end: 101d1b38f;  */

void FUN_101d1b33c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1f8) = param_1;
  *(undefined1 *)(lVar1 + 0x218) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1b390,0,0);
  return;
}



/* Entry: 101d1b390; end: 101d1b4cf;  */

void FUN_101d1b390(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x1f8);
  if (*(char *)(unaff_x22 + 0x218) == '\x01') {
    *(long *)(unaff_x22 + 0x118) = lVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x118,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1e8));
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x1e8);
    func_0x000107c61574();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1e0));
      func_0x000107c615e8(uVar2);
      func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101d1b460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar5);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_101d1ce54();
    func_0x000107c613f8(&UNK_1106e7ed0,puVar3,0,0);
    *puVar3 = 9;
    func_0x000107c61654();
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101d1b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d1b4d0; end: 101d1b533;  */

void FUN_101d1b4d0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d1b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d1b534; end: 101d1b54b;  */

void FUN_101d1b534(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1b54c,0,0);
  return;
}



/* Entry: 101d1b54c; end: 101d1b667;  */

/* WARNING: Removing unreachable block (ram,0x000101d1b58c) */

void FUN_101d1b54c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c3098c();
  lVar2 = *(long *)(unaff_x22 + 0x10);
  if (lVar1 == 2) {
    FUN_101d1d090();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101d1b654:
                    /* WARNING: Could not recover jumptable at 0x000101d1b664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c3098c();
  if (lVar2 != 3) {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
    func_0x000107c3098c();
    if (puVar3 != (undefined8 *)0x1) {
      FUN_101d1ce54();
      func_0x000107c613f8(&UNK_1106e7ed0,puVar3,0,0);
      *puVar3 = 4;
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101d1b654;
    }
  }
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d1b668;
  lVar1 = *(long *)(unaff_x22 + 0x18);
  plVar4[0x16] = *(long *)(unaff_x22 + 0x10);
  plVar4[0x17] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1b6c8,0,0);
  return;
}



/* Entry: 101d1b668; end: 101d1b6af;  */

void FUN_101d1b668(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101d1b6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d1b6b0; end: 101d1b6c7;  */

void FUN_101d1b6b0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1b6c8,0,0);
  return;
}



/* Entry: 101d1b6c8; end: 101d1bb93;  */

void FUN_101d1b6c8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  
  puVar17 = (ulong *)(unaff_x22 + 0xa0);
  *puVar17 = 0;
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb0);
  func_0x000107c30988();
  func_0x000107c61180();
  puVar6 = &UNK_110474eb8;
  func_0x000107c613fc(&UNK_110474eb8,0x18,7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar6;
  *(ulong **)(puVar6 + 0x10) = puVar17;
  puVar7 = &UNK_110474ee0;
  func_0x000107c613fc(&UNK_110474ee0,0x20,7);
  *(undefined **)(unaff_x22 + 200) = puVar7;
  *(code **)(puVar7 + 0x10) = FUN_101d1d498;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x101d1d63c;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_10130d598;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_110474ef8;
  func_0x000107c60bc4();
  uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(uVar14);
  puVar6 = &UNK_110474f30;
  func_0x000107c613fc(&UNK_110474f30,0x18,7);
  *(undefined **)(unaff_x22 + 0xd0) = puVar6;
  *(ulong **)(puVar6 + 0x10) = puVar17;
  puVar7 = &UNK_110474f58;
  func_0x000107c613fc(&UNK_110474f58,0x20,7);
  *(undefined **)(unaff_x22 + 0xd8) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = 0x101d1d64c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  *(code **)(unaff_x22 + 0x60) = FUN_101d1d4a0;
  *(undefined **)(unaff_x22 + 0x68) = puVar7;
  puVar9 = (undefined8 *)(unaff_x22 + 0x40);
  *puVar9 = puVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x50) = 0x101a36974;
  *(undefined **)(unaff_x22 + 0x58) = &UNK_110474f70;
  func_0x000107c60bc4();
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(uVar14);
  puVar15 = (undefined8 *)(unaff_x22 + 0x70);
  *puVar15 = puVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = 0x101d1bec8;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
  *(code **)(unaff_x22 + 0x80) = FUN_1019fdb4c;
  *(undefined **)(unaff_x22 + 0x88) = &UNK_110474f98;
  func_0x000107c60bc4(puVar15);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c4c58c(puVar5);
  func_0x000107c60bd0(puVar15);
  func_0x000107c60bd0(puVar9);
  func_0x000107c60bd0(puVar8);
  func_0x000107c61170();
  uVar13 = *puVar17;
  *(ulong *)(unaff_x22 + 0xe0) = uVar13;
  if (uVar13 == 0) {
    FUN_101d1ce54();
    func_0x000107c613f8(&UNK_1106e7ed0,puVar5,0,0);
    *puVar5 = 6;
    func_0x000107c61654();
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0xb8);
    func_0x0001044d77a8(0);
    puVar8 = *(undefined8 **)(lVar11 + 0x20);
    uVar12 = uVar13;
    func_0x000107c61174(uVar13);
    func_0x000107c615f0(puVar8);
    func_0x0001044d6bf8(uVar13,puVar8);
    func_0x000107c615e8();
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c30990();
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar14;
      puVar7 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
      func_0x000107c610f8();
      func_0x000107c457a0();
      *(undefined **)(unaff_x22 + 0xf0) = puVar7;
      func_0x000107c52860();
      uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x110) = uVar16;
      *(undefined4 *)(unaff_x22 + 0x118) = uVar1;
      *(undefined4 *)(unaff_x22 + 0x11c) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x120) = uVar18;
      func_0x000107c57e18(puVar7);
      *(undefined8 *)(unaff_x22 + 0x128) = uVar16;
      *(undefined4 *)(unaff_x22 + 0x130) = uVar1;
      *(undefined4 *)(unaff_x22 + 0x134) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
      func_0x000107c57e14(puVar7);
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      puVar6 = &UNK_110474fd0;
      func_0x000107c613fc(&UNK_110474fd0,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar7;
      *(undefined8 *)(puVar6 + 0x18) = uVar14;
      func_0x000107c61174(puVar7);
      func_0x000107c61174(uVar14);
      uVar14 = 0;
      func_0x0001048897a0(0,1,0,FUN_101d1d4c0,puVar6);
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar14;
      func_0x000107c61574(puVar6);
      plVar10 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x100) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_101d1bb94;
                    /* WARNING: Could not recover jumptable at 0x000101d1bb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x101d1c828)();
      return;
    }
    FUN_101d1ce54();
    func_0x000107c613f8(&UNK_1106e7ed0,puVar8,0,0);
    *puVar8 = 10;
    func_0x000107c61654();
    func_0x000107c61170(uVar12);
  }
  uVar13 = *(ulong *)(unaff_x22 + 200);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar16);
  uVar12 = uVar13;
  func_0x000107c61544(uVar13,"",0x6d,0xed,0x2b,1);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101d1bb8c);
    (*pcVar4)();
  }
  uVar12 = *(ulong *)(unaff_x22 + 0xd8);
  uVar13 = uVar12;
  func_0x000107c61544(uVar12,"",0x6d,0xef,0x12,1);
  func_0x000107c61574(uVar12);
  if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101d1bb90);
    (*pcVar4)();
  }
  uVar13 = 0;
  func_0x000107c61544(0,"",0x6d,0xf1,0x12,1);
  if ((uVar13 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101d1ba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101d1bb94);
  (*pcVar4)();
}



/* Entry: 101d1bb94; end: 101d1bbe7;  */

void FUN_101d1bb94(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x108) = param_1;
  *(undefined1 *)(lVar1 + 0x140) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d1bbe8,0,0);
  return;
}



/* Entry: 101d1bbe8; end: 101d1be4b;  */

void FUN_101d1bbe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(unaff_x22 + 0x140) != '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar5 = *(ulong *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61574(uVar9);
    func_0x000107c61170(uVar7);
    uVar6 = uVar5;
    func_0x000107c61544(uVar5,"",0x6d,0xed,0x2b,1);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar2);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be3c);
      (*pcVar3)();
    }
    uVar6 = *(ulong *)(unaff_x22 + 0xd8);
    uVar5 = uVar6;
    func_0x000107c61544(uVar6,"",0x6d,0xef,0x12,1);
    func_0x000107c61574(uVar6);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      func_0x000107c61544(0,"",0x6d,0xf1,0x12,1);
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101d1be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x108));
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be4c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be44);
    (*pcVar3)();
  }
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x108);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0xa8,uVar7,PTR___ss5ErrorWS_11034ee10);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar8);
  uVar5 = *(ulong *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar8);
  uVar6 = uVar5;
  func_0x000107c61544(uVar5,"",0x6d,0xed,0x2b,1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be38);
    (*pcVar3)();
  }
  uVar6 = *(ulong *)(unaff_x22 + 0xd8);
  uVar5 = uVar6;
  func_0x000107c61544(uVar6,"",0x6d,0xef,0x12,1);
  func_0x000107c61574(uVar6);
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be40);
    (*pcVar3)();
  }
  uVar5 = 0;
  func_0x000107c61544(0,"",0x6d,0xf1,0x12,1);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101d1bd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1be48);
  (*pcVar3)();
}



/* Entry: 101d1be4c; end: 101d1bec3;  */

/* WARNING: Possible PIC construction at 0x000101d1bea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d1beac) */

void FUN_101d1be4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar2 = puVar1;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5176c(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101d1bec4; end: 101d1becb;  */

void FUN_101d1bec4(void)

{
  return;
}



/* Entry: 101d1becc; end: 101d1bf2b;  */

/* WARNING: Possible PIC construction at 0x000101d1bf10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d1bf14) */

void FUN_101d1becc(undefined8 param_1)

{
  func_0x000107c5ed90();
  func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
  func_0x000107c3e250();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d1bf2c; end: 101d1c06f;  */

void FUN_101d1bf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = 0x112d4f348;
  FUN_101d1c214(0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8,0x112d50400,&UNK_10d91ca20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  uVar2 = 0;
  FUN_101d1d5c4(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c61174(param_3);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
  pcStack_50 = FUN_101d1d524;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f728b4;
  puStack_58 = &UNK_110475010;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c43d9c(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101d1c070; end: 101d1c13b;  */

void FUN_101d1c070(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long in_stack_00000000;
  undefined *puStack_38;
  
  if ((param_4 != 0) && (in_stack_00000000 == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c61174(param_4);
    func_0x000107c45af0();
    puStack_38 = puVar1;
    func_0x000100b60084(&puStack_38);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_4);
    return;
  }
  FUN_101d1ce54();
  puVar1 = &UNK_1106e7ed0;
  func_0x000107c613f8(&UNK_1106e7ed0,param_1,0,0);
  *param_1 = in_stack_00000000;
  func_0x000107c614b0(in_stack_00000000);
  func_0x00010488ade0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101d1c13c; end: 101d1c19f;  */

void FUN_101d1c13c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d1c1a0; end: 101d1c213;  */

void FUN_101d1c1a0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101d1d650;
  plVar4[2] = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101d1a430;
  plVar3[0xd] = lVar1;
  plVar3[0xc] = lVar5;
  plVar3[10] = 0;
  plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d19a7c,0,0);
  return;
}



/* Entry: 101d1c214; end: 101d1c28b;  */

void FUN_101d1c214(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101d1d5c4(0,param_1,param_2);
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



/* Entry: 101d1c28c; end: 101d1c32b;  */

/* WARNING: Possible PIC construction at 0x000101d1c2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d1c2c0) */
/* WARNING: Removing unreachable block (ram,0x000101d1c2c4) */

void FUN_101d1c28c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d76cc8;
    plVar5 = (long *)&UNK_10d936770;
  }
  else {
    puVar3 = (ulong *)0x112d74dc8;
    plVar5 = (long *)&UNK_10d9355f0;
    unaff_x30 = 0x101d1c2c0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 101d1c32c; end: 101d1c527;  */

undefined * FUN_101d1c32c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c42c);
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
    puVar3 = (undefined *)0x112d52660;
    func_0x0001000285a8(0x112d52660,&UNK_10d921580);
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



/* Entry: 101d1c528; end: 101d1c657;  */

undefined * FUN_101d1c528(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c658);
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
    FUN_101d1c28c();
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
    uVar5 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
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



/* Entry: 101d1c658; end: 101d1c813;  */

ulong FUN_101d1c658(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c73c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c740);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d1d5c4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c814);
  (*pcVar2)();
}



/* Entry: 101d1c814; end: 101d1c83f;  */

ulong FUN_101d1c814(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c73c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c740);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bb2a8;
    func_0x000107c61168(PTR_PTR_1126bb2a8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bb2a8;
    func_0x000107c61168(PTR_PTR_1126bb2a8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d1d5c4(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1c814);
  (*pcVar2)();
}



/* Entry: 101d1c840; end: 101d1c907;  */

void FUN_101d1c840(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101d1c888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d1c908;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110474ff8;
  func_0x000107c613fc(&UNK_110474ff8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101d1d4c8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d1c908; end: 101d1c9c7;  */

void FUN_101d1c908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101d1d634,0,0);
  return;
}



/* Entry: 101d1c9c8; end: 101d1c9d7;  */

void FUN_101d1c9c8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d1c9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101d1c9d8; end: 101d1cb8b;  */

void FUN_101d1c9d8(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(int **)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  if (param_2 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101d1ca88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101d1cb30;
                    /* WARNING: Could not recover jumptable at 0x000101d1ca84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Entry: 101d1cb8c; end: 101d1cbab;  */

void FUN_101d1cb8c(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101d1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d1cbac; end: 101d1cd8b;  */

ulong FUN_101d1cbac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd7c);
    (*pcVar3)();
  }
  lVar4 = param_1;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd80);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x000107c4aba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd84);
    (*pcVar3)();
  }
  lVar4 = lVar5;
  func_0x000107c5ce78();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 != 0) {
    uStack_68 = 0;
    uVar6 = 0;
    FUN_101d1d5c4(0,0x112deb550,&PTR_PTR_1126bce80);
    func_0x000107c5fc4c(lVar4,&uStack_68,uVar6);
    uVar2 = uStack_68;
    if (uStack_68 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd8c);
      (*pcVar3)();
    }
    func_0x000107c61170(lVar4);
    uVar11 = uVar2 & 0xffffffffffffff8;
    if (uVar2 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar2;
      if (-1 < (long)uVar2) {
        uVar9 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd38);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar10;
          FUN_101d1c658(uVar10,uVar2,&PTR_PTR_1126bce80,0x112deb550);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd34);
          (*pcVar3)();
        }
        uVar8 = uVar7;
        func_0x000107c49e94();
        if ((uVar8 & 1) == 0) {
          uVar11 = uVar7;
          func_0x000107c5ce14();
          func_0x000107c6142c(uVar2);
          func_0x000107c61170(uVar7);
          if (-1 < (long)uVar11) {
            return uVar11;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd30);
          (*pcVar3)();
        }
        func_0x000107c61170(uVar7);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    func_0x000107c6142c(uVar2);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d1cd88);
  (*pcVar3)();
}



/* Entry: 101d1cd8c; end: 101d1ce53;  */

undefined8 FUN_101d1cd8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  func_0x000107c444cc();
  func_0x000107c61180();
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
    func_0x000107c5e304();
    if (((int)puVar1 != 0) && (puVar1 = param_2, func_0x000107c44d98(), (int)puVar1 != 0)) {
      func_0x000107c44d98(param_2);
      func_0x000107c5e304(param_2);
      func_0x000107c61170(param_2);
      return param_1;
    }
    func_0x000107c61170();
  }
  FUN_101d1ce54();
  func_0x000107c613f8(&UNK_1106e7ed0,param_2,0,0);
  *param_2 = 1;
  func_0x000107c61654();
  return param_1;
}



/* Entry: 101d1ce54; end: 101d1ce93;  */

void FUN_101d1ce54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e20b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc64d40;
  func_0x000107c61520(&UNK_10dc64d40,&UNK_1106e7ed0);
  puRam0000000112e20b58 = puVar1;
  return;
}



/* Entry: 101d1ce94; end: 101d1cecb;  */

void FUN_101d1ce94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d1cecc; end: 101d1cf43;  */

void FUN_101d1cecc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d1cf44;
  plVar4[2] = param_1;
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101d1a618;
  plVar3[8] = lVar1;
  plVar3[7] = lVar5;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(lVar5,uVar6,FUN_101d1a6c4,0,0);
  return;
}



/* Entry: 101d1cf44; end: 101d1cf7f;  */

void FUN_101d1cf44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d1cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d1cf80; end: 101d1cfff;  */

void FUN_101d1cf80(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d1d654;
  plVar5[4] = (long)piVar3;
  plVar5[5] = lVar6;
  plVar5[3] = param_1;
  if (lVar2 == 0) {
    iVar1 = *piVar3;
    plVar4 = (long *)(ulong)(uint)piVar3[1];
    func_0x000107c615b8();
    plVar5[7] = (long)plVar4;
    *plVar4 = (long)plVar5;
    plVar4[1] = 0x101d1cb30;
                    /* WARNING: Could not recover jumptable at 0x000101d1ca84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar3))(plVar4,plVar5 + 2);
    return;
  }
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x101d1ca88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 101d1d000; end: 101d1d053;  */

void FUN_101d1d000(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101d1d054;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  FUN_101d1d5c4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101d196b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(plVar2 + 2);
  return;
}



/* Entry: 101d1d054; end: 101d1d08f;  */

void FUN_101d1d054(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d1d08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d1d090; end: 101d1d427;  */

long FUN_101d1d090(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  func_0x000107c30988();
  func_0x000107c61180();
  puVar3 = &UNK_110474da0;
  func_0x000107c613fc(&UNK_110474da0,0x18,7);
  *(long **)(puVar3 + 0x10) = &lStack_68;
  puVar4 = &UNK_110474dc8;
  func_0x000107c613fc(&UNK_110474dc8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101d1d428;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_101d1d430;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = (code *)&UNK_10130d598;
  puStack_80 = &UNK_110474de0;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  pcStack_78 = FUN_101d1bec4;
  puStack_70 = (undefined *)0x0;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  pcStack_88 = (code *)0x101a36974;
  puStack_80 = &UNK_110474e08;
  ppuVar6 = &puStack_98;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_70);
  puVar7 = &UNK_110474e40;
  func_0x000107c613fc(&UNK_110474e40,0x18,7);
  *(long **)(puVar7 + 0x10) = &lStack_68;
  puVar8 = &UNK_110474e68;
  func_0x000107c613fc(&UNK_110474e68,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_101d1d46c;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_78 = (code *)0x101d1d640;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1019fdb4c;
  puStack_80 = &UNK_110474e80;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_70;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c58c(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  lVar12 = lStack_68;
  if (lStack_68 == 0) {
    puStack_98 = (undefined *)0x5;
    uVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar11 != 0) {
      FUN_101d1ce54();
      func_0x000107c61658(&puStack_98,&UNK_1106e7ed0,uVar11);
    }
    lVar12 = lStack_68;
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar12);
    puVar3 = puVar4;
    func_0x000107c61544(puVar4,"",0x6d,0xde,0x2b,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d420);
      (*pcVar2)();
    }
    uVar10 = 0;
    func_0x000107c61544(0,"",0x6d,0xe0,0x12,1);
    func_0x000107c61574(puVar7);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d424);
      (*pcVar2)();
    }
    puVar3 = puVar8;
    func_0x000107c61544(puVar8,"",0x6d,0xe2,0x12,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d428);
      (*pcVar2)();
    }
    lVar12 = 5;
  }
  else {
    func_0x000107c61574(puVar3);
    puVar3 = puVar4;
    func_0x000107c61544(puVar4,"",0x6d,0xde,0x2b,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d418);
      (*pcVar2)();
    }
    uVar10 = 0;
    func_0x000107c61544(0,"",0x6d,0xe0,0x12,1);
    func_0x000107c61574(puVar7);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d41c);
      (*pcVar2)();
    }
    puVar3 = puVar8;
    func_0x000107c61544(puVar8,"",0x6d,0xe2,0x12,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d1d304);
      (*pcVar2)();
    }
  }
  return lVar12;
}



/* Entry: 101d1d428; end: 101d1d42f;  */

/* WARNING: Possible PIC construction at 0x000101d1bea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d1beac) */

void FUN_101d1d428(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68,uVar3);
  puVar2 = puVar1;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c5176c(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101d1d430; end: 101d1d44f;  */

void FUN_101d1d430(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d1d450; end: 101d1d46b;  */

void FUN_101d1d450(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d1d46c; end: 101d1d497;  */

void FUN_101d1d46c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d1d498; end: 101d1d49f;  */

/* WARNING: Possible PIC construction at 0x000101d1bf10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d1bf14) */

void FUN_101d1d498(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c5ed90(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
  func_0x000107c3e250();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d1d4a0; end: 101d1d4bf;  */

void FUN_101d1d4a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d1d4c0; end: 101d1d4d3;  */

void FUN_101d1d4c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_70;
  lVar3 = 0x112d4f348;
  FUN_101d1c214(0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8,0x112d50400,&UNK_10d91ca20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  uVar4 = 0;
  FUN_101d1d5c4(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c61174(uVar2);
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,uVar4);
  func_0x000107c61574(lVar3);
  pcStack_50 = FUN_101d1d524;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f728b4;
  puStack_58 = &UNK_110475010;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c43d9c(uVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 101d1d4d4; end: 101d1d523;  */

void FUN_101d1d4d4(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101d1d524; end: 101d1d547;  */

void FUN_101d1d524(void)

{
  FUN_101d1c070();
  return;
}



/* Entry: 101d1d548; end: 101d1d5c3;  */

void FUN_101d1d548(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101d1d658;
  plVar4[2] = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101d199e8;
  plVar3[0xd] = lVar1;
  plVar3[0xc] = lVar6;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d19a7c,0,0);
  return;
}



/* Entry: 101d1d5c4; end: 101d1d603;  */

void FUN_101d1d5c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d1d604; end: 101d1d65b;  */

void FUN_101d1d604(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d1d65c; end: 101d1d6af;  */

undefined8 FUN_101d1d65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100786248(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101d1d6b0; end: 101d1d6eb;  */

void FUN_101d1d6b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d1d6ec; end: 101d1d72f;  */

undefined1  [16] FUN_101d1d6ec(void)

{
  return ZEXT816(0x1104751a0);
}



/* Entry: 101d1d730; end: 101d1d783;  */

void FUN_101d1d730(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1d784; end: 101d1d92f;  */

void FUN_101d1d784(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x0001002bd6b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  FUN_101db964c(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x000101db9124(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  FUN_101db95a0();
  *(undefined8 *)(param_2 + 0x50) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1d930; end: 101d1d943;  */

void FUN_101d1d930(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x0001002bd6b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  FUN_101db964c(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x000101db9124(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  FUN_101db95a0();
  *(undefined8 *)(lVar1 + 0x50) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 101d1d944; end: 101d1da67;  */

long FUN_101d1d944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  FUN_101db964c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000101db9124(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_101db95a0();
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return unaff_x20;
}



/* Entry: 101d1da68; end: 101d1dae3;  */

void FUN_101d1da68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d1dae4; end: 101d1db37;  */

void FUN_101d1dae4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1db38; end: 101d1db83;  */

void FUN_101d1db38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1db84; end: 101d1dbd7;  */

void FUN_101d1db84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1dbd8; end: 101d1df5b;  */

void FUN_101d1dbd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x0001002c0d28();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  func_0x000101d6c5e4();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = uVar12;
  FUN_101d6be88();
  *(undefined8 *)(param_2 + 0x10) = uVar13;
  uVar14 = uVar13;
  func_0x000107c6157c();
  FUN_101d6beb0();
  func_0x000107c61574(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1df5c; end: 101d1df97;  */

void FUN_101d1df5c(void)

{
  long unaff_x20;
  
  FUN_101d1dbd8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101d1df98; end: 101d1e233;  */

long FUN_101d1df98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  func_0x000101d6c5e4();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101d6be88();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101d6beb0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  return unaff_x20;
}



/* Entry: 101d1e234; end: 101d1e2cf;  */

void FUN_101d1e234(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101d1e2d0; end: 101d1e323;  */

void FUN_101d1e2d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1e324; end: 101d1e36f;  */

void FUN_101d1e324(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1e370; end: 101d1e3c3;  */

void FUN_101d1e370(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1e3c4; end: 101d1e4a7;  */

void FUN_101d1e3c4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100289584();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000101d44140(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101d43f28();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_101d43f50();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1e4a8; end: 101d1e4af;  */

void FUN_101d1e4a8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x000100289584();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000101d44140(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101d43f28();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_101d43f50();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 101d1e4b0; end: 101d1e567;  */

long FUN_101d1e4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000101d44140(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101d43f28();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101d43f50();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101d1e568; end: 101d1e59b;  */

void FUN_101d1e568(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d1e59c; end: 101d1e5ef;  */

void FUN_101d1e59c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1e5f0; end: 101d1e63b;  */

void FUN_101d1e5f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1e63c; end: 101d1e68f;  */

void FUN_101d1e63c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1e690; end: 101d1e83b;  */

void FUN_101d1e690(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x0001002c7340();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  func_0x000101d71260(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x000101d70e40(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  func_0x000101d7122c();
  *(undefined8 *)(param_2 + 0x50) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1e83c; end: 101d1e84f;  */

void FUN_101d1e83c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x0001002c7340();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  func_0x000101d71260(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x000101d70e40(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  func_0x000101d7122c();
  *(undefined8 *)(lVar1 + 0x50) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 101d1e850; end: 101d1e973;  */

long FUN_101d1e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  func_0x000101d71260(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000101d70e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000101d7122c();
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return unaff_x20;
}



/* Entry: 101d1e974; end: 101d1e9ef;  */

void FUN_101d1e974(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d1e9f0; end: 101d1ea43;  */

void FUN_101d1e9f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1ea44; end: 101d1ea8f;  */

void FUN_101d1ea44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1ea90; end: 101d1eae3;  */

void FUN_101d1ea90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1eae4; end: 101d1ec4b;  */

void FUN_101d1eae4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001002ae944();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_101d45d20(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101d459e8();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_101d45a24();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1ec4c; end: 101d1ec57;  */

void FUN_101d1ec4c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001002ae944();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_101d45d20(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000101d459e8();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_101d45a24();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 101d1ec58; end: 101d1ed7b;  */

long FUN_101d1ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_101d45d20(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101d459e8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101d45a24();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101d1ed7c; end: 101d1edbf;  */

void FUN_101d1ed7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d1edc0; end: 101d1ee13;  */

void FUN_101d1edc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1ee14; end: 101d1ee5f;  */

void FUN_101d1ee14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d1ee60; end: 101d1eeb3;  */

void FUN_101d1ee60(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101d1eeb4; end: 101d1f277;  */

void FUN_101d1eeb4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x0001002c56a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  func_0x000101d74e60();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = uVar13;
  func_0x000101d740a8();
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  uVar15 = uVar14;
  func_0x000107c6157c();
  func_0x000101d74140();
  func_0x000107c61574(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
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
  *(undefined8 *)(param_2 + 0x78) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 101d1f278; end: 101d1f2b3;  */

void FUN_101d1f278(void)

{
  long unaff_x20;
  
  FUN_101d1eeb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101d1f2b4; end: 101d1f57b;  */

long FUN_101d1f2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  func_0x000101d74e60();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101d740a8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000101d74140();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  return unaff_x20;
}



/* Entry: 101d1f57c; end: 101d1f61f;  */

void FUN_101d1f57c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}


