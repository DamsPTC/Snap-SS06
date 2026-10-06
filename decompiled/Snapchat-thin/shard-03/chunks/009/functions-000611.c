/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ec3f50; end: 102ec4453;  */

/* WARNING: Removing unreachable block (ram,0x000102ec3f90) */

void FUN_102ec3f50(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x22;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  
  uVar6 = (ulong)*(byte *)(unaff_x22 + 0x191);
  FUN_102ec62e4(uVar6,*(undefined8 *)(unaff_x22 + 0x1c8));
  *(undefined8 *)(unaff_x22 + 0x1d8) = 0;
  if (*(long *)(uVar6 + 0x10) == 0) {
    func_0x000107c6142c();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = *(undefined8 *)(uVar6 + 0x20);
    uVar8 = *(undefined8 *)(uVar6 + 0x28);
    func_0x000107c61434(uVar8);
    func_0x000107c6142c(uVar6);
    puVar7 = (undefined *)0x112f27348;
    func_0x0001000285a8(0x112f27348,&UNK_10db629e8);
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = uVar10;
    *(undefined8 *)(puVar7 + 0x28) = uVar8;
  }
  *(undefined **)(unaff_x22 + 0x1e0) = puVar7;
  *(undefined **)(unaff_x22 + 0x120) = puVar7;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1b8);
  iVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar5 != 0) {
    uVar10 = 0x112f27340;
    func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
    uVar8 = 0x112f276f8;
    func_0x0001000285a8(0x112f276f8,&UNK_10db62e10);
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1e8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102ec4454;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar9,unaff_x22 + 0x198,uVar10,uVar8,0,0,&UNK_10db62dd8,unaff_x22 + 0x110,uVar10,uVar8);
    return;
  }
  lVar1 = unaff_x22 + 0x10;
  uVar10 = 0x112f27340;
  func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
  func_0x000107c615ac(lVar1);
  uVar6 = 0;
  *(long *)(unaff_x22 + 0x1a0) = lVar1;
  uVar17 = *(ulong *)(puVar7 + 0x10);
  puVar19 = (undefined8 *)(puVar7 + 0x28);
  while( true ) {
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar17 == uVar6) {
      *(undefined **)(unaff_x22 + 0x1a8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar12 = 0x112f276e8;
      func_0x0001000285a8(0x112f276e8,&UNK_10db62e00);
      *(long *)(unaff_x22 + 0x1f0) = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      *(long *)(unaff_x22 + 0x1f8) = lVar12;
      uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x200) = uVar6;
      func_0x000107c5fcc4(uVar6,lVar1,uVar10);
      *(undefined **)(unaff_x22 + 0x208) = puVar13;
      plVar9 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x210) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = 0x102ec44a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
                (plVar9,unaff_x22 + 0x180,*(undefined8 *)(unaff_x22 + 0x1f0));
      return;
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar6) break;
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar24 = *(ulong *)(unaff_x22 + 0x1c0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar2 = puVar19[-1];
    uVar3 = *puVar19;
    lVar12 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar15 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xf;
    uVar11 = uVar15 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar11);
    lVar12 = 0;
    func_0x000107c5fd0c();
    lVar23 = *(long *)(lVar12 + -8);
    (**(code **)(lVar23 + 0x38))(uVar11,1,1,lVar12);
    puVar13 = &UNK_1105e4ca0;
    func_0x000107c613fc(&UNK_1105e4ca0,0x18,7);
    func_0x000107c61644(puVar13 + 0x10,uVar22);
    puVar14 = &UNK_1105e4cc8;
    func_0x000107c613fc(&UNK_1105e4cc8,0x58,7);
    *(long *)(puVar14 + 0x10) = 0;
    *(undefined8 *)(puVar14 + 0x18) = 0;
    *(undefined **)(puVar14 + 0x20) = puVar13;
    *(undefined8 *)(puVar14 + 0x28) = uVar20;
    *(undefined8 *)(puVar14 + 0x30) = uVar8;
    *(ulong *)(puVar14 + 0x38) = uVar24;
    *(undefined8 *)(puVar14 + 0x40) = uVar2;
    *(undefined8 *)(puVar14 + 0x48) = uVar3;
    *(ulong *)(puVar14 + 0x50) = uVar6;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x0001000abe04(uVar11,uVar15);
    uVar16 = uVar15;
    (**(code **)(lVar23 + 0x30))(uVar15,1,lVar12);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar8);
    func_0x000107c61174(uVar24);
    if ((int)uVar16 == 1) {
      func_0x0001000abe54(uVar15);
      uVar24 = 0x3100;
    }
    else {
      func_0x000107c5fd08();
      (**(code **)(lVar23 + 8))(uVar15,lVar12);
      uVar24 = uVar24 & 0xff | 0x3100;
    }
    func_0x000107c615c0(uVar15);
    lVar12 = *(long *)(puVar14 + 0x10);
    if (lVar12 == 0) {
      lVar23 = 0;
      lVar21 = 0;
    }
    else {
      lVar21 = *(long *)(puVar14 + 0x18);
      lVar23 = lVar12;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar12);
      func_0x000107c5fca8();
      func_0x000107c615e8(lVar12);
    }
    puVar13 = &UNK_1105e4cf0;
    func_0x000107c613fc(&UNK_1105e4cf0,0x20,7);
    *(undefined **)(puVar13 + 0x10) = &UNK_10db62de8;
    *(undefined **)(puVar13 + 0x18) = puVar14;
    func_0x000107c6157c(puVar14);
    if (lVar21 == 0 && lVar23 == 0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined8 *)(unaff_x22 + 0x150) = 0;
      *(long *)(unaff_x22 + 0x158) = lVar23;
      *(long *)(unaff_x22 + 0x160) = lVar21;
      puVar18 = (undefined8 *)(unaff_x22 + 0x148);
    }
    lVar12 = uVar6 + 1;
    *(undefined8 *)(unaff_x22 + 0x168) = 1;
    *(undefined8 **)(unaff_x22 + 0x170) = puVar18;
    *(long *)(unaff_x22 + 0x178) = lVar1;
    func_0x000107c615bc(uVar24,unaff_x22 + 0x168,uVar10,&UNK_10db62df8,puVar13);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(uVar24);
    func_0x0001000abe54(uVar11);
    func_0x000107c615c0(uVar11);
    uVar6 = uVar6 + 1;
    puVar19 = puVar19 + 2;
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec4450);
      (*pcVar4)();
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec4454);
  (*pcVar4)();
}



/* Entry: 102ec4454; end: 102ec44eb;  */

void FUN_102ec4454(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x1e0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1e8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec47e4,0,0);
  return;
}



/* Entry: 102ec44ec; end: 102ec4753;  */

void FUN_102ec44ec(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x22;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  
  cVar2 = *(char *)(unaff_x22 + 400);
  if (cVar2 != -1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar9 = *(ulong *)(unaff_x22 + 0x208);
    FUN_102ec660c(uVar1,cVar2);
    func_0x000107c61558();
    uVar10 = *(ulong *)(unaff_x22 + 0x208);
    uVar5 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
      FUN_102ec54a8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar9 = *(ulong *)(uVar5 + 0x10);
    uVar10 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar9) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_102ec54a8(uVar10,uVar9 + 1,1,uVar5);
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    lVar6 = uVar10 + uVar9 * 0x18;
    *(undefined8 *)(lVar6 + 0x20) = uVar11;
    *(undefined8 *)(lVar6 + 0x28) = uVar1;
    *(char *)(lVar6 + 0x30) = cVar2;
    FUN_102ec67c8(uVar11,uVar1,cVar2);
    *(ulong *)(unaff_x22 + 0x1a8) = uVar10;
    *(ulong *)(unaff_x22 + 0x208) = uVar10;
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x210) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = 0x102ec44a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar4,unaff_x22 + 0x180,*(undefined8 *)(unaff_x22 + 0x1f0));
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
  (**(code **)(*(long *)(unaff_x22 + 0x1f8) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000107c615c0(uVar11);
  FUN_102ec5290(unaff_x22 + 0x1a8);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x22 + 0x1a8);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000102eb7120(0,lVar6,0);
    puVar12 = (undefined1 *)(lVar7 + 0x30);
    do {
      uVar11 = *(undefined8 *)(puVar12 + -8);
      uVar3 = *puVar12;
      FUN_102ec660c(uVar11,uVar3);
      uVar5 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        func_0x000102eb7120(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
      }
      puVar12 = puVar12 + 0x18;
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar11;
      puVar8[uVar5 * 0x10 + 0x28] = uVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar7);
  }
  *(undefined **)(unaff_x22 + 0x198) = puVar8;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x218) = plVar4;
  func_0x0001000285a8(0x112f276f0,&UNK_10db62e08);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ec4754;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 102ec4754; end: 102ec47e3;  */

void FUN_102ec4754(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ec479c,0,0);
  return;
}



/* Entry: 102ec47e4; end: 102ec47f3;  */

void FUN_102ec47e4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ec47f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x198));
  return;
}



/* Entry: 102ec47f4; end: 102ec48a3;  */

void FUN_102ec47f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar3 = 0x112f276e8;
  func_0x0001000285a8(0x112f276e8,&UNK_10db62e00);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec48a4,0,0);
  return;
}



/* Entry: 102ec48a4; end: 102ec4bc3;  */

void FUN_102ec48a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  long lVar18;
  ulong uVar19;
  
  lVar18 = 0;
  puVar12 = (undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x28);
  lVar10 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x10);
  do {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 == lVar18) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined **)(unaff_x22 + 0x60) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar16 = **(undefined8 **)(unaff_x22 + 0x70);
      uVar9 = 0x112f27340;
      func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
      func_0x000107c5fcc4(uVar15,uVar16,uVar9);
      *(undefined **)(unaff_x22 + 200) = puVar7;
      plVar13 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar13;
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_102ec4bc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
                (plVar13,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0xb0));
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar19 = *(ulong *)(unaff_x22 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = puVar12[-1];
    uVar4 = *puVar12;
    lVar6 = 0;
    func_0x000107c5fd0c();
    lVar17 = *(long *)(lVar6 + -8);
    (**(code **)(lVar17 + 0x38))(uVar2,1,1,lVar6);
    puVar7 = &UNK_1105e4ca0;
    func_0x000107c613fc(&UNK_1105e4ca0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,uVar15);
    puVar8 = &UNK_1105e4d18;
    func_0x000107c613fc(&UNK_1105e4d18,0x58,7);
    plVar13 = (long *)(puVar8 + 0x10);
    *plVar13 = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    *(undefined8 *)(puVar8 + 0x28) = uVar3;
    *(undefined8 *)(puVar8 + 0x30) = uVar16;
    *(ulong *)(puVar8 + 0x38) = uVar19;
    *(undefined8 *)(puVar8 + 0x40) = uVar1;
    *(undefined8 *)(puVar8 + 0x48) = uVar4;
    *(long *)(puVar8 + 0x50) = lVar18;
    func_0x0001000abe04(uVar2,uVar9);
    (**(code **)(lVar17 + 0x30))(uVar9,1,lVar6);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar16);
    func_0x000107c61174(uVar19);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    if ((int)uVar9 == 1) {
      func_0x0001000abe54(uVar16);
      uVar19 = 0x3100;
      lVar6 = *plVar13;
      if (lVar6 != 0) goto LAB_102ec4a58;
LAB_102ec4ac0:
      lVar17 = 0;
      lVar14 = 0;
    }
    else {
      func_0x000107c5fd08();
      (**(code **)(lVar17 + 8))(uVar16,lVar6);
      uVar19 = uVar19 & 0xff | 0x3100;
      lVar6 = *plVar13;
      if (lVar6 == 0) goto LAB_102ec4ac0;
LAB_102ec4a58:
      lVar14 = *(long *)(puVar8 + 0x18);
      lVar17 = lVar6;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar6);
      func_0x000107c5fca8();
      func_0x000107c615e8(lVar6);
    }
    uVar16 = **(undefined8 **)(unaff_x22 + 0x70);
    puVar7 = &UNK_1105e4d40;
    func_0x000107c613fc(&UNK_1105e4d40,0x20,7);
    *(undefined **)(puVar7 + 0x10) = &UNK_10db62e20;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    func_0x000107c6157c(puVar8);
    uVar9 = 0x112f27340;
    func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
    puVar11 = (undefined8 *)0x0;
    if (lVar14 != 0 || lVar17 != 0) {
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(long *)(unaff_x22 + 0x20) = lVar17;
      *(long *)(unaff_x22 + 0x28) = lVar14;
      puVar11 = (undefined8 *)(unaff_x22 + 0x10);
    }
    lVar6 = lVar18 + 1;
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x30) = 1;
    *(undefined8 **)(unaff_x22 + 0x38) = puVar11;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar16;
    func_0x000107c615bc(uVar19,unaff_x22 + 0x30,uVar9,&UNK_10db62e28,puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar19);
    func_0x0001000abe54(uVar15);
    lVar18 = lVar18 + 1;
    puVar12 = puVar12 + 2;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec4bc4);
      (*pcVar5)();
    }
  } while( true );
}



/* Entry: 102ec4bc4; end: 102ec4c0b;  */

void FUN_102ec4bc4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec4c0c,0,0);
  return;
}



/* Entry: 102ec4c0c; end: 102ec4e53;  */

void FUN_102ec4c0c(void)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  cVar1 = *(char *)(unaff_x22 + 0x58);
  if (cVar1 != -1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar10 = *(ulong *)(unaff_x22 + 200);
    FUN_102ec660c(uVar9,cVar1);
    func_0x000107c61558();
    uVar11 = *(ulong *)(unaff_x22 + 200);
    uVar5 = uVar11;
    if ((uVar10 & 1) == 0) {
      uVar5 = 0;
      FUN_102ec54a8(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar10 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_102ec54a8(uVar11,uVar10 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
    lVar6 = uVar11 + uVar10 * 0x18;
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    *(undefined8 *)(lVar6 + 0x28) = uVar9;
    *(char *)(lVar6 + 0x30) = cVar1;
    FUN_102ec67c8(uVar8,uVar9,cVar1);
    *(ulong *)(unaff_x22 + 0x60) = uVar11;
    *(ulong *)(unaff_x22 + 200) = uVar11;
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ec4bc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar3,(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0xb0));
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_102ec5290(unaff_x22 + 0x60);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar7);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000102eb7120(0,lVar6,0);
    puVar13 = (undefined1 *)(lVar7 + 0x30);
    do {
      uVar8 = *(undefined8 *)(puVar13 + -8);
      uVar2 = *puVar13;
      FUN_102ec660c(uVar8,uVar2);
      uVar5 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar5) {
        func_0x000102eb7120(1 < *(ulong *)(puVar12 + 0x18),uVar5 + 1,1);
      }
      puVar13 = puVar13 + 0x18;
      *(ulong *)(puVar12 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar12 + uVar5 * 0x10 + 0x20) = uVar8;
      puVar12[uVar5 * 0x10 + 0x28] = uVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar7);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  **(undefined8 **)(unaff_x22 + 0x68) = puVar12;
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102ec4e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec4e54; end: 102ec4e7f;  */

void FUN_102ec4e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_9;
  *(undefined8 *)(unaff_x22 + 0x60) = param_10;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec4e80,0,0);
  return;
}



/* Entry: 102ec4e80; end: 102ec4f63;  */

void FUN_102ec4e80(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (undefined1 *)(lVar9 + 0x10);
  func_0x000107c61648();
  *(undefined1 **)(unaff_x22 + 0x68) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ec4f64;
    lVar9 = *(long *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x40);
    lVar2 = *(long *)(unaff_x22 + 0x48);
    lVar6 = *(long *)(unaff_x22 + 0x38);
    plVar4[8] = *(long *)(unaff_x22 + 0x58);
    plVar4[9] = (long)puVar3;
    plVar4[6] = lVar2;
    plVar4[7] = lVar9;
    plVar4[4] = lVar6;
    plVar4[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec507c,0,0);
    return;
  }
  FUN_102ec65cc();
  puVar5 = &UNK_1105e4f18;
  func_0x000107c613f8(&UNK_1105e4f18,puVar3,0,0);
  *puVar3 = 3;
  func_0x000107c61654();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x28);
  *(undefined1 *)(puVar8 + 2) = 1;
  *puVar8 = uVar7;
  puVar8[1] = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000102ec4f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec4f64; end: 102ec4fcf;  */

void FUN_102ec4f64(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = param_1;
    pcVar1 = FUN_102ec4fd0;
  }
  else {
    pcVar1 = (code *)0x102ec5014;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec4fd0; end: 102ec505b;  */

void FUN_102ec4fd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102ec5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec505c; end: 102ec507b;  */

void FUN_102ec505c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec507c,0,0);
  return;
}



/* Entry: 102ec507c; end: 102ec50d3;  */

void FUN_102ec507c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ec50d4;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ec50d4; end: 102ec51ab;  */

void FUN_102ec50d4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  ulong unaff_x29;
  
  lVar15 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar15 + 0x38);
  lVar4 = *(long *)(lVar15 + 0x40);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar16 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 0x50));
  uVar7 = *(undefined8 *)(lVar15 + 0x10);
  lVar5 = *(long *)(lVar15 + 0x18);
  *(undefined8 *)(lVar15 + 0x58) = uVar7;
  bVar6 = lVar4 != 0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = 3;
  }
  func_0x000107c614f0();
  plVar8 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(lVar15 + 0x60) = plVar8;
  *plVar8 = lVar16;
  plVar8[1] = (long)FUN_102ec51ac;
  uVar11 = *(undefined8 *)(lVar15 + 0x40);
  uVar10 = *(undefined8 *)(lVar15 + 0x30);
  uVar12 = *(undefined8 *)(lVar15 + 0x20);
  unaff_x29 = unaff_x29 & 0xffffffff;
  piVar13 = *(int **)(lVar5 + 8);
  iVar2 = *piVar13;
  plVar9 = (long *)(ulong)(uint)piVar13[1];
  func_0x000107c615b8();
  plVar8[2] = (long)plVar9;
  *plVar9 = (long)plVar8;
  plVar9[1] = (long)&UNK_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar13))
            (uVar12,uVar14,uVar10,0,uVar3,uVar1,uVar11,(int)(unaff_x29 >> 0x20),
             (ulong)CONCAT51((int5)(unaff_x29 >> 0x18),1) << 0x10,0,0,0,uVar7,lVar5);
  return;
}



/* Entry: 102ec51ac; end: 102ec521f;  */

void FUN_102ec51ac(undefined8 param_1)

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
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x70) = param_1;
    pcVar2 = FUN_102ec5220;
  }
  else {
    pcVar2 = FUN_102ec5230;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ec5220; end: 102ec522f;  */

void FUN_102ec5220(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ec522c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 102ec5230; end: 102ec528f;  */

void FUN_102ec5230(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000102ec3edc();
  func_0x000107c613f8(&UNK_1105e4e50,param_1,0,0);
  *param_1 = uVar1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ec528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec5290; end: 102ec539f;  */

void FUN_102ec5290(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_102ec614c();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112f27340;
      func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102ec5848(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_102ec5c2c(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102ec53a0; end: 102ec54a7;  */

undefined * FUN_102ec53a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ec54a8);
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
    puVar3 = (undefined *)0x112f27348;
    func_0x0001000285a8(0x112f27348,&UNK_10db629e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1105e4dd8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102ec54a8; end: 102ec5847;  */

undefined * FUN_102ec54a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ec55e8);
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
    puVar3 = (undefined *)0x112f27338;
    func_0x0001000285a8(0x112f27338,&UNK_10db629d8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f27340;
    func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
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



/* Entry: 102ec5848; end: 102ec5c2b;  */

void FUN_102ec5848(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = param_3[1];
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      puVar8 = puStack_58;
      lVar22 = lVar10 + 1;
      if (lVar22 < lVar9) {
        lVar11 = *param_3;
        lVar16 = *(long *)(lVar11 + lVar22 * 0x18);
        lVar13 = lVar10 * 0x18;
        plVar14 = (long *)(lVar11 + lVar13) + 3;
        lVar18 = *(long *)(lVar11 + lVar13);
        lVar17 = lVar10 + 2;
        do {
          lVar21 = lVar17;
          lVar22 = lVar9;
          if (lVar9 == lVar21) break;
          lVar19 = *plVar14;
          plVar14 = plVar14 + 3;
          lVar17 = lVar21 + 1;
          lVar22 = lVar21;
        } while (lVar16 < lVar18 != lVar19 <= *plVar14);
        if (lVar16 < lVar18) {
          if (lVar22 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c00);
            (*pcVar4)();
          }
          if (lVar10 < lVar22) {
            lVar16 = lVar22 * 0x18;
            lVar17 = lVar22;
            lVar9 = lVar10;
            do {
              lVar17 = lVar17 + -1;
              if (lVar9 != lVar17) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c20);
                  (*pcVar4)();
                }
                puVar1 = (undefined8 *)(lVar11 + lVar13);
                lVar18 = lVar11 + lVar16;
                uVar3 = *(undefined1 *)(puVar1 + 2);
                uVar26 = puVar1[1];
                uVar25 = *puVar1;
                uVar20 = *(undefined8 *)(lVar18 + -8);
                uVar27 = *(undefined8 *)(lVar18 + -0x18);
                puVar1[1] = *(undefined8 *)(lVar18 + -0x10);
                *puVar1 = uVar27;
                puVar1[2] = uVar20;
                *(undefined8 *)(lVar18 + -0x10) = uVar26;
                *(undefined8 *)(lVar18 + -0x18) = uVar25;
                *(undefined1 *)(lVar18 + -8) = uVar3;
              }
              lVar9 = lVar9 + 1;
              lVar16 = lVar16 + -0x18;
              lVar13 = lVar13 + 0x18;
            } while (lVar9 < lVar17);
            lVar9 = param_3[1];
          }
        }
      }
      lVar13 = lVar22;
      if (lVar22 < lVar9) {
        if (SBORROW8(lVar22,lVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5bfc);
          (*pcVar4)();
        }
        if (lVar22 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c04);
            (*pcVar4)();
          }
          lVar17 = lVar10 + param_4;
          if (lVar9 <= lVar10 + param_4) {
            lVar17 = lVar9;
          }
          if (lVar17 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c08);
            (*pcVar4)();
          }
          if (lVar22 != lVar17) {
            lVar16 = *param_3;
            plVar14 = (long *)(lVar16 + lVar22 * 0x18 + -0x18);
            lVar9 = lVar10 - lVar22;
            lVar11 = lVar9;
            plVar15 = plVar14;
LAB_102ec59f0:
            do {
              lVar13 = plVar14[3];
              if (lVar13 < *plVar14) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c0c);
                  (*pcVar4)();
                }
                lVar21 = plVar14[4];
                lVar18 = plVar14[5];
                plVar14[4] = plVar14[1];
                plVar14[3] = *plVar14;
                plVar14[5] = plVar14[2];
                *plVar14 = lVar13;
                plVar14[1] = lVar21;
                *(char *)(plVar14 + 2) = (char)lVar18;
                plVar14 = plVar14 + -3;
                bVar5 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                if (bVar5) goto LAB_102ec59f0;
              }
              lVar22 = lVar22 + 1;
              plVar14 = plVar15 + 3;
              lVar9 = lVar11 + -1;
              lVar13 = lVar17;
              lVar11 = lVar9;
              plVar15 = plVar14;
            } while (lVar22 != lVar17);
          }
        }
      }
      if (lVar13 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5bec);
        (*pcVar4)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar24 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar24) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar24 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar24 + 1;
      *(long *)(puVar8 + uVar24 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar8 + uVar24 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c24);
        (*pcVar4)();
      }
      FUN_102ec5cb8(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102ec5bc0;
      lVar9 = param_3[1];
      lVar10 = lVar13;
    } while (lVar13 < lVar9);
  }
  puVar8 = puStack_58;
  lVar9 = *param_1;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c2c);
    (*pcVar4)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar23 = (ulong *)(puVar8 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5c28);
      (*pcVar4)();
    }
    plVar14 = (long *)(puVar8 + uVar24 * 0x10);
    lVar22 = *plVar14;
    puVar2 = puVar23 + uVar24 * 2;
    uVar12 = puVar2[1];
    FUN_102ec5f2c(lVar10 + lVar22 * 0x18,lVar10 + *puVar2 * 0x18,lVar10 + uVar12 * 0x18,lVar9);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5bf0);
      (*pcVar4)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5bf4);
      (*pcVar4)();
    }
    *plVar14 = lVar22;
    plVar14[1] = uVar12;
    uVar12 = *puVar23;
    lVar10 = uVar12 - uVar24;
    if (uVar12 < uVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ec5bf8);
      (*pcVar4)();
    }
    uVar24 = uVar12 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar10 * 0x10);
    *puVar23 = uVar24;
  }
LAB_102ec5bc0:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 102ec5c2c; end: 102ec5cb7;  */

void FUN_102ec5c2c(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_3 != param_2) {
    lVar4 = *param_4;
    plVar5 = (long *)(lVar4 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    lVar7 = param_1;
    plVar6 = plVar5;
LAB_102ec5c6c:
    do {
      lVar8 = plVar5[3];
      if (lVar8 < *plVar5) {
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ec5cb8);
          (*pcVar2)();
        }
        lVar9 = plVar5[4];
        lVar1 = plVar5[5];
        plVar5[4] = plVar5[1];
        plVar5[3] = *plVar5;
        plVar5[5] = plVar5[2];
        *plVar5 = lVar8;
        plVar5[1] = lVar9;
        *(char *)(plVar5 + 2) = (char)lVar1;
        plVar5 = plVar5 + -3;
        bVar3 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar3) goto LAB_102ec5c6c;
      }
      param_3 = param_3 + 1;
      plVar5 = plVar6 + 3;
      param_1 = lVar7 + -1;
      lVar7 = param_1;
      plVar6 = plVar5;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102ec5cb8; end: 102ec5f2b;  */

undefined8 FUN_102ec5cb8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_102ec5d90;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f0c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_102ec5df0:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5efc);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f04);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ee4);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ee8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ef0);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ef8);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_102ec5d90:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5eec);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ef4);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f00);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f08);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_102ec5df0;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f10);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ed4);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5f2c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_102ec5f2c(lVar8 + lVar12 * 0x18,lVar8 + *plVar3 * 0x18,lVar8 + lVar9 * 0x18,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ed8);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5edc);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec5ee0);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 102ec5f2c; end: 102ec614b;  */

undefined8 FUN_102ec5f2c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar4 = ((long)param_2 - (long)param_1) / 0x18;
  lVar7 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar4 < lVar7) {
    if ((param_4 != param_1) || (param_1 + lVar4 * 3 <= param_4)) {
      func_0x000107c610b8(param_4,param_1,lVar4 * 0x18);
    }
    plVar2 = param_4 + lVar4 * 3;
    plVar5 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          plVar6 = param_4;
          plVar1 = param_2;
          param_2 = param_2 + 3;
        }
        else {
          plVar6 = param_4 + 3;
          plVar1 = param_4;
        }
        param_4 = plVar6;
        if (plVar5 != plVar1) {
          lVar7 = plVar1[1];
          lVar4 = *plVar1;
          plVar5[2] = plVar1[2];
          plVar5[1] = lVar7;
          *plVar5 = lVar4;
        }
        plVar5 = plVar5 + 3;
      } while (param_4 < plVar2);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar7 * 3 <= param_4)) {
      func_0x000107c610b8(param_4,param_2,lVar7 * 0x18);
    }
    plVar1 = param_4 + lVar7 * 3;
    plVar2 = plVar1;
    plVar5 = param_2;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        plVar3 = param_2 + -3;
        plVar6 = param_3;
        while( true ) {
          param_3 = plVar6 + -3;
          plVar2 = plVar1 + -3;
          if (*plVar2 < *plVar3) break;
          if (plVar6 != plVar1) {
            lVar7 = plVar1[-2];
            lVar4 = *plVar2;
            plVar6[-1] = plVar1[-1];
            plVar6[-2] = lVar7;
            *param_3 = lVar4;
          }
          plVar1 = plVar2;
          plVar5 = param_2;
          plVar6 = param_3;
          if (plVar2 <= param_4) goto LAB_102ec60e8;
        }
        if (plVar6 != param_2) {
          lVar7 = param_2[-2];
          lVar4 = *plVar3;
          plVar6[-1] = param_2[-1];
          plVar6[-2] = lVar7;
          *param_3 = lVar4;
        }
        plVar2 = plVar1;
        plVar5 = plVar3;
      } while ((param_1 < plVar3) && (param_2 = plVar3, param_4 < plVar1));
    }
  }
LAB_102ec60e8:
  lVar4 = (long)plVar2 - (long)param_4;
  if ((plVar5 != param_4) ||
     ((long *)((long)plVar2 +
              ((((ulong)(lVar4 / 6 + (lVar4 >> 0x3f)) >> 2) - (lVar4 >> 0x3f)) * 0x18 - lVar4)) <=
      plVar5)) {
    func_0x000107c610b8(plVar5,param_4);
  }
  return 1;
}



/* Entry: 102ec614c; end: 102ec615f;  */

/* WARNING: Removing unreachable block (ram,0x000102ec54c8) */
/* WARNING: Removing unreachable block (ram,0x000102ec54d8) */
/* WARNING: Removing unreachable block (ram,0x000102ec55e4) */
/* WARNING: Removing unreachable block (ram,0x000102ec54e4) */
/* WARNING: Removing unreachable block (ram,0x000102ec54ec) */
/* WARNING: Removing unreachable block (ram,0x000102ec5570) */
/* WARNING: Removing unreachable block (ram,0x000102ec5580) */
/* WARNING: Removing unreachable block (ram,0x000102ec5584) */
/* WARNING: Removing unreachable block (ram,0x000102ec5588) */
/* WARNING: Removing unreachable block (ram,0x000102ec5594) */

undefined * FUN_102ec614c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112f27338;
    func_0x0001000285a8(0x112f27338,&UNK_10db629d8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112f27340;
  func_0x0001000285a8(0x112f27340,&UNK_10db629e0);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 102ec6160; end: 102ec61c3;  */

void FUN_102ec6160(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ec61c4;
                    /* WARNING: Could not recover jumptable at 0x000102ec61c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 102ec61c4; end: 102ec6203;  */

void FUN_102ec61c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec6200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec6204; end: 102ec62e3;  */

void FUN_102ec6204(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec62d4);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  puVar1 = (undefined8 *)(lVar7 + 0x20 + param_1 * 0x10);
  func_0x000107c61408(puVar1,lVar4,&UNK_1105e4dd8);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec62d8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec62dc);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3 * 2;
    puVar3 = (undefined8 *)(lVar7 + 0x20 + param_2 * 0x10);
    if (puVar2 != puVar3 || puVar3 + lVar4 * 2 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec62e0);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    puVar1[1] = param_5;
    func_0x000107c61434(param_5);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec62e4);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 102ec62e4; end: 102ec649f;  */

undefined * FUN_102ec62e4(ulong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *unaff_x22;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined1 *)0x0) {
    puVar5 = param_2;
  }
  lVar8 = *(long *)(puVar5 + 0x10);
  if ((param_1 & 1) == 0) {
    if (lVar8 == 0) {
      func_0x000107c61434(param_2);
      func_0x000107c6142c();
      FUN_102ec65cc();
      func_0x000107c613f8(&UNK_1105e4f18,puVar5,0,0);
      *puVar5 = 2;
      func_0x000107c61654();
      return unaff_x22;
    }
  }
  else if (lVar8 == 0) {
    func_0x000107c61434(param_2);
    func_0x000107c6142c(puVar5);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    goto LAB_102ec63e0;
  }
  func_0x000107c61434(param_2);
  FUN_102eb7104(0,lVar8,0);
  puVar9 = (undefined8 *)(puVar5 + 0x28);
  do {
    uVar1 = puVar9[-1];
    uVar2 = *puVar9;
    uVar6 = *(ulong *)(puVar7 + 0x10);
    uVar3 = *(ulong *)(puVar7 + 0x18);
    func_0x000107c61434(uVar2);
    if (uVar3 >> 1 <= uVar6) {
      FUN_102eb7104(1 < uVar3,uVar6 + 1,1);
    }
    puVar9 = puVar9 + 2;
    *(ulong *)(puVar7 + 0x10) = uVar6 + 1;
    *(undefined8 *)(puVar7 + uVar6 * 0x10 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + uVar6 * 0x10 + 0x28) = uVar2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  func_0x000107c6142c(puVar5);
  if ((param_1 & 1) == 0) {
    return puVar7;
  }
LAB_102ec63e0:
  uVar6 = *(ulong *)(puVar7 + 0x10);
  puVar4 = puVar7;
  func_0x000107c61558();
  if (((int)puVar4 == 0) || (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6)) {
    FUN_102ec53a0();
    puVar7 = puVar4;
  }
  FUN_102ec6204(0,0,1,0,0);
  return puVar7;
}



/* Entry: 102ec64a0; end: 102ec65bb;  */

undefined1  [16] FUN_102ec64a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [7];
  byte bStack_49;
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5fcbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_48 = param_1;
  func_0x000107c614b0(param_1);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = puVar6;
  func_0x000107c6147c(puVar6,&uStack_48,uVar2,lVar1,6);
  if ((int)puVar3 == 0) {
    uStack_48 = param_1;
    func_0x000107c614b0(param_1);
    pbVar4 = &bStack_49;
    func_0x000107c6147c(pbVar4,&uStack_48,uVar2,&UNK_1105e4f18,6);
    if ((int)pbVar4 != 0) {
      param_2 = *(undefined8 *)(&UNK_10db62ed0 + (ulong)bStack_49 * 8);
      uVar5 = 0x10000000000 >> ((ulong)bStack_49 * 8 & 0x3f);
      goto LAB_102ec65a0;
    }
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
    param_2 = 0;
  }
  uVar5 = 0;
LAB_102ec65a0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_2;
  return auVar8;
}



/* Entry: 102ec65bc; end: 102ec65cb;  */

void FUN_102ec65bc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102ec65cc; end: 102ec660b;  */

void FUN_102ec65cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f276e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db62fa4;
  func_0x000107c61520(&UNK_10db62fa4,&UNK_1105e4f18);
  puRam0000000112f276e0 = puVar1;
  return;
}



/* Entry: 102ec660c; end: 102ec661f;  */

void FUN_102ec660c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102ec6620; end: 102ec66af;  */

void FUN_102ec6620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102ec6c4c;
  plVar6[0x12] = lVar3;
  plVar6[0x13] = lVar8;
  plVar6[0x10] = lVar2;
  plVar6[0x11] = lVar1;
  plVar6[0xe] = param_2;
  plVar6[0xf] = lVar7;
  plVar6[0xd] = param_1;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x15] = uVar5;
  lVar7 = 0x112f276e8;
  func_0x0001000285a8(0x112f276e8,&UNK_10db62e00);
  plVar6[0x16] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x17] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x18] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec48a4,0,0);
  return;
}



/* Entry: 102ec66b0; end: 102ec6757;  */

void FUN_102ec66b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102ec6c50;
  plVar7[0xb] = lVar6;
  plVar7[0xc] = lVar8;
  plVar7[9] = lVar5;
  plVar7[10] = lVar3;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  plVar7[5] = param_1;
  plVar7[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec4e80,0,0);
  return;
}



/* Entry: 102ec6758; end: 102ec67c7;  */

void FUN_102ec6758(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ec6c48;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102ec61c4;
                    /* WARNING: Could not recover jumptable at 0x000102ec61c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 102ec67c8; end: 102ec67f7;  */

void FUN_102ec67c8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102ec67f8; end: 102ec683b;  */

void FUN_102ec67f8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ec683c; end: 102ec68e3;  */

void FUN_102ec683c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102ec68e4;
  plVar7[0xb] = lVar6;
  plVar7[0xc] = lVar8;
  plVar7[9] = lVar5;
  plVar7[10] = lVar3;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  plVar7[5] = param_1;
  plVar7[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec4e80,0,0);
  return;
}



/* Entry: 102ec68e4; end: 102ec691f;  */

void FUN_102ec68e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec691c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec6920; end: 102ec698f;  */

void FUN_102ec6920(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102ec6990;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102ec61c4;
                    /* WARNING: Could not recover jumptable at 0x000102ec61c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 102ec6990; end: 102ec69cb;  */

void FUN_102ec6990(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec69c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec69cc; end: 102ec69d3;  */

void FUN_102ec69cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102ec69d4; end: 102ec6a43;  */

undefined8 * FUN_102ec69d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102ec6a44; end: 102ec6b3b;  */

int FUN_102ec6a44(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102ec6b3c; end: 102ec6ba3;  */

undefined8 * FUN_102ec6b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 102ec6ba4; end: 102ec6dbb;  */

int FUN_102ec6ba4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102ec6dbc; end: 102ec6dfb;  */

void FUN_102ec6dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f27708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db62f7c;
  func_0x000107c61520(&UNK_10db62f7c,&UNK_1105e4f18);
  puRam0000000112f27708 = puVar1;
  return;
}



/* Entry: 102ec6dfc; end: 102ec6e0f;  */

bool FUN_102ec6dfc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102ec6e10; end: 102ec6ebb;  */

void FUN_102ec6e10(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ec6ebc; end: 102ec6ecb;  */

void FUN_102ec6ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102ec6ecc; end: 102ec6f1b; -[SCMemoriesSaveReceipt replaceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec6ecc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff55c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff55c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102ec6f1c; end: 102ec702f;  */

void FUN_102ec6f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102ec7030; end: 102ec705b; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl init] */

void FUN_102ec7030(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocSaveServiceImpl.SnapDocSaveServiceImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec705c);
  (*pcVar1)();
}



/* Entry: 102ec705c; end: 102ec705f;  */

void FUN_102ec705c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ec7060; end: 102ec7177; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ec7060(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27710));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27718));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f27720));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27728));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27730));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27738));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27740));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27748));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27750));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f27758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f27760));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27768));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27770));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27778));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f27780));
  param_1 = param_1 + _DAT_112f27788;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ec7178; end: 102ec7197;  */

void FUN_102ec7178(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab4a0);
  return;
}



/* Entry: 102ec7198; end: 102ec726b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ec7198(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27788;
  func_0x000107c61428(unaff_x20 + _DAT_112f27788,auStack_38,0,0);
  uVar2 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c61150();
    if ((uVar3 & 1) != 0) {
      func_0x000107c5b1e8(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
  puVar4 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5061c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 102ec726c; end: 102ec729f; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl shouldSkipExitGuard] */

void FUN_102ec726c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ec7198();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ec72a0; end: 102ec730f;  */

void FUN_102ec72a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec7310,uVar1,uVar2);
  return;
}



/* Entry: 102ec7310; end: 102ec7447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec7310(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(lVar1);
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112f27758);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112f27760);
    func_0x000107c615f0(lVar1);
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c3ff98();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c4e864(lVar4,param_2,lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar2;
        func_0x000107c4d06c(lVar2,param_2,1);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_102ec7448();
  func_0x000107c3f990(uVar3,param_2,lVar4,uVar5,lVar1);
  func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ec7444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec7448; end: 102ec74fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ec7448(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27788;
  func_0x000107c61428(unaff_x20 + _DAT_112f27788,auStack_38,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3fe68();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5b634();
      func_0x000107c61170(lVar2);
      func_0x0001008cc2b4();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c31268();
        func_0x000107c61170(lVar1);
        if (lVar2 != -1) {
          return lVar2;
        }
        return 1;
      }
    }
  }
  return 1;
}



/* Entry: 102ec74fc; end: 102ec7537;  */

void FUN_102ec74fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec7534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec7538; end: 102ec764b; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl showPaidUpsellWithDeckFactory:snapDoc:] */

/* WARNING: Possible PIC construction at 0x000102ec762c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec7630) */

void FUN_102ec7538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105e5900;
  func_0x000107c613fc(&UNK_1105e5900,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar2 = &UNK_1105e5928;
  func_0x000107c613fc(&UNK_1105e5928,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10db63328;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  uVar3 = 0;
  func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db63330,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102ec764c; end: 102ec7ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec764c(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  undefined8 *puVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char acStack_69 [9];
  
  uVar2 = param_1;
  func_0x000102ed04d8();
  func_0x000107c613fc();
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0;
  func_0x0001000285a8(0x112f279a8,&UNK_10db63240);
  func_0x000107c613fc();
  ppuVar3 = &puStack_a0;
  func_0x00010006c248();
  *(undefined ***)(uVar2 + 0x10) = ppuVar3;
  puVar9 = PTR___sytN_11034f1b0 + 8;
  func_0x000100075034(FUN_102ed2938,uVar2,puVar9);
  puVar4 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1105e5658;
  func_0x000107c613fc(&UNK_1105e5658,0x60,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_7;
  *(undefined8 *)(puVar5 + 0x20) = param_8;
  *(ulong *)(puVar5 + 0x28) = uVar2;
  *(ulong *)(puVar5 + 0x30) = param_1;
  *(undefined4 *)(puVar5 + 0x38) = param_2;
  *(undefined8 *)(puVar5 + 0x40) = param_3;
  *(undefined8 *)(puVar5 + 0x48) = param_4;
  *(undefined8 *)(puVar5 + 0x50) = param_5;
  *(undefined8 *)(puVar5 + 0x58) = param_6;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(param_1);
  FUN_102ed2a64(param_3,param_4);
  func_0x000107c6157c(param_6);
  uVar6 = 0;
  func_0x0001001ca524(0,0,0x54,3,0,0,&UNK_10db63250,puVar5,puVar9);
  func_0x000107c61574(puVar5);
  uStack_90 = 0x102ed2a74;
  uStack_88 = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(acStack_69,FUN_102ed2a98,&puStack_a0,PTR___sSbN_11034dd40);
  if (acStack_69[0] == '\x01') {
    func_0x000107c5fd50(uVar6,puVar9,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90)
    ;
  }
  func_0x000107c61574(uVar6);
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102eb713c(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec7ab8);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar14 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar9 = puStack_a0;
        uVar10 = *puVar14;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar11 = *(ulong *)(puVar9 + 0x10);
        puStack_a0 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
          func_0x000102eb713c(1 < *(ulong *)(puVar9 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(puStack_a0 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puStack_a0 + uVar11 * 8 + 0x20) = uVar10;
        uVar13 = uVar13 - 1;
        puVar14 = puVar14 + 1;
        puVar9 = puStack_a0;
      } while (uVar13 != 0);
    }
    else {
      uVar11 = 0;
      do {
        puVar9 = puStack_a0;
        uVar7 = uVar11;
        FUN_102ed12e4(uVar11,param_1,&PTR_PTR_1126ac780,0x112f279a0);
        uVar8 = uVar7;
        func_0x000107c5b198();
        func_0x000107c61180();
        func_0x000107c615e8(uVar7);
        uVar7 = *(ulong *)(puVar9 + 0x10);
        puStack_a0 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
          func_0x000102eb713c(1 < *(ulong *)(puVar9 + 0x18),uVar7 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puStack_a0 + 0x10) = uVar7 + 1;
        *(ulong *)(puStack_a0 + uVar7 * 8 + 0x20) = uVar8;
        puVar9 = puStack_a0;
      } while (uVar13 != uVar11);
    }
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f27750);
  func_0x0001000d224c(&puStack_a0);
  uVar10 = uStack_88;
  func_0x0001000a8868(&puStack_a0,uStack_88);
  puVar4 = puVar9;
  (**(code **)(lStack_80 + 0x30))
            (puVar9,"startManualSave(memoryData:saveLocation:progressHandler:onComplete:onError:)",
             0x4c,0x2000000000000002,0xc5,uVar10,lStack_80);
  func_0x000107c6142c(puVar9);
  func_0x0001000834e4(&puStack_a0);
  puVar9 = &UNK_1105e5680;
  func_0x000107c613fc(&UNK_1105e5680,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar4;
  *(undefined8 *)(puVar9 + 0x18) = uVar12;
  *(undefined8 *)(puVar9 + 0x20) = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar12);
  uVar10 = 0;
  func_0x0001001ca524(0,0,0x54,0,0,0,&UNK_10db63260,puVar9,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  return;
}



/* Entry: 102ec7ab8; end: 102ec7bbb; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl saveMemoryWithMemoryData:saveLocation:onComplete:onError:] */

void FUN_102ec7ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000102ed2cc4(0,0x112f279a0,&PTR_PTR_1126ac780);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_1105e58b0;
  func_0x000107c613fc(&UNK_1105e58b0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105e58d8;
  func_0x000107c613fc(&UNK_1105e58d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_102ec764c(param_3,param_4,0,0,0x102ed336c,puVar2,0x102ed338c,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102ec7bbc; end: 102ec7d33; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl saveMemoryWithProgressWithMemoryData:saveLocation:onComplete:onError:onProgress:] */

void FUN_102ec7bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000102ed2cc4(0,0x112f279a0,&PTR_PTR_1126ac780);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_1105e55b8;
  func_0x000107c613fc(&UNK_1105e55b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105e55e0;
  func_0x000107c613fc(&UNK_1105e55e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  puVar4 = &UNK_1105e5608;
  func_0x000107c613fc(&UNK_1105e5608,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  puVar5 = &UNK_1105e5630;
  func_0x000107c613fc(&UNK_1105e5630,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102ed290c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  FUN_102ec764c(param_3,param_4,FUN_102ed2918,puVar5,FUN_102ed2908,puVar2,0x102ed3388,puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102ec7d34; end: 102ec7e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec7d34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcStack_48;
  undefined8 uStack_40;
  
  uVar2 = 0x112f27990;
  func_0x0001000285a8(0x112f27990,&UNK_10db63230);
  func_0x000100075034(&pcStack_48,FUN_102ec7e24,0,uVar2);
  pcVar1 = pcStack_48;
  if (pcStack_48 != (code *)0x0) {
    func_0x000107c6157c(pcStack_48);
    uVar2 = 0x112f27998;
    func_0x0001000285a8(0x112f27998,&UNK_10db63238);
    func_0x000100075034(&pcStack_48,FUN_102ed0428,0,uVar2);
    if (pcStack_48 == (code *)0x0) {
      func_0x000107c61578(pcVar1,2);
    }
    else {
      func_0x000107c6157c(uStack_40);
      (*pcStack_48)();
      func_0x000107c61578(pcVar1,2);
      func_0x000100d2a75c(pcStack_48,uStack_40);
      func_0x000100d2a75c(pcStack_48,uStack_40);
    }
  }
  return;
}



/* Entry: 102ec7e24; end: 102ec7e33;  */

void FUN_102ec7e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 102ec7e34; end: 102ec7e5b; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl cancelSave] */

void FUN_102ec7e34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ec7d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ec7e5c; end: 102ec7e93;  */

void FUN_102ec7e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_11;
  *(undefined8 *)(unaff_x22 + 0x80) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined4 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec7e94,0,0);
  return;
}



/* Entry: 102ec7e94; end: 102ec7f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec7e94(void)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 uVar24;
  undefined8 *****pppppuVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 *****pppppuVar33;
  undefined8 *puVar34;
  long lVar35;
  long unaff_x22;
  undefined8 *****pppppuVar36;
  undefined8 uVar37;
  int *piVar38;
  ulong uVar39;
  undefined8 ****ppppuVar40;
  ulong uVar41;
  undefined *puVar42;
  double dVar43;
  undefined8 ****ppppuStack_158;
  long lStack_150;
  
  lVar31 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar31 + 0x10,unaff_x22 + 0x10,0,0);
  lVar31 = lVar31 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x90) = lVar31;
  if (lVar31 == 0) {
    (**(code **)(unaff_x22 + 0x50))(0xd000000000000022,0x800000010f113ae0);
                    /* WARNING: Could not recover jumptable at 0x000102ec7f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(uint *)(unaff_x22 + 0xb0);
  plVar8 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102ec7f4c;
  lVar35 = *(long *)(unaff_x22 + 0x70);
  lVar26 = *(long *)(unaff_x22 + 0x68);
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8[0x13] = *(long *)(unaff_x22 + 0x78);
  plVar8[0x14] = lVar31;
  plVar8[0x11] = (ulong)uVar4;
  plVar8[0x12] = lVar35;
  plVar8[0x10] = lVar26;
  lVar31 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar31 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x15] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    pcVar7 = (code *)0x102ec8194;
  }
  else {
    func_0x000107c60e78();
    lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar32 = *(long **)(plVar8[0x14] + _DAT_112f27748);
    plVar10 = (long *)0x70;
    func_0x000107c615b8();
    plVar8[0x16] = (long)plVar10;
    *plVar10 = (long)plVar8;
    plVar10[1] = 0x102ec8220;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
      plVar10[5] = (long)(plVar8 + 8);
      plVar10[6] = (long)plVar32;
      lVar35 = *(long *)(*plVar32 + 0x50);
      plVar10[7] = lVar35;
      lVar31 = 0;
      __sSqMa(0,lVar35);
      plVar10[8] = lVar31;
      lVar31 = *(long *)(lVar31 + -8);
      plVar10[9] = lVar31;
      uVar9 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[10] = uVar9;
      lVar31 = *(long *)(lVar35 + -8);
      plVar10[0xb] = lVar31;
      uVar9 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar10[0xc] = uVar9;
      pcVar7 = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar10 = (long *)*plVar8;
      func_0x000107c615c0(*(undefined8 *)(*plVar8 + 0xb0));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
        pcVar7 = FUN_102ec8294;
      }
      else {
        func_0x000107c60e78();
        lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar9 = plVar10[0x11];
        lVar31 = plVar10[0xb];
        lVar26 = plVar10[0xc];
        plVar8 = plVar10 + 8;
        lVar27 = lVar31;
        func_0x0001000a8868();
        piVar38 = *(int **)(lVar26 + 8);
        iVar2 = *piVar38;
        puVar34 = (undefined8 *)(ulong)(uint)piVar38[1];
        func_0x000107c615b8();
        plVar10[0x17] = (long)puVar34;
        *puVar34 = plVar10;
        puVar34[1] = FUN_102ec834c;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar38))(puVar34,uVar9 & 0xffffffffff,lVar31,lVar26);
          return;
        }
        func_0x000107c60e78();
        lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = *plVar10;
        lVar28 = *plVar10;
        *(char *)(lVar26 + 0x100) = (char)puVar34;
        *(long *)(lVar26 + 0xc0) = lVar27;
        *(long *)(lVar26 + 200) = lVar35;
        *(long **)(lVar26 + 0xd0) = plVar8;
        func_0x000107c615c0(*(undefined8 *)(lVar26 + 0xb8));
        if (plVar8 == (long *)0x0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
            pcVar7 = FUN_102ec83f8;
            goto _swift_task_switch;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
          pcVar7 = FUN_102ec8d4c;
          goto _swift_task_switch;
        }
        func_0x000107c60e78();
        lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar31 = *(long *)(lVar28 + 0x90);
        func_0x0001000834e4(lVar28 + 0x40);
        if (lVar31 == 0) {
          uVar9 = 0;
        }
        else {
          uVar29 = *(ulong *)(lVar28 + 0x80);
          puVar11 = &UNK_1105e56d0;
          func_0x000107c613fc(&UNK_1105e56d0,0x20,7);
          uVar17 = *(undefined8 *)(lVar28 + 0x90);
          *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(lVar28 + 0x98);
          *(undefined8 *)(puVar11 + 0x10) = uVar17;
          puVar12 = &UNK_1105e56f8;
          func_0x000107c613fc(&UNK_1105e56f8,0x20,7);
          *(undefined8 *)(puVar12 + 0x10) = 0x102ed2c70;
          *(undefined **)(puVar12 + 0x18) = puVar11;
          if (uVar29 >> 0x3e == 0) {
            uVar39 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar39 = uVar29 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar29) {
              uVar39 = uVar29;
            }
            func_0x000107c60480();
          }
          uVar9 = *(ulong *)(lVar28 + 0x90);
          uVar17 = *(undefined8 *)(lVar28 + 0x98);
          if (uVar39 == 0) {
            func_0x000107c61580(puVar11,2);
            FUN_102ed2a64(uVar9,uVar17);
            puVar42 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000107c61580(puVar11,2);
            FUN_102ed2a64(uVar9,uVar17);
            puVar42 = PTR___swiftEmptyArrayStorage_11034f1c8;
            pppppuVar25 = (undefined8 *****)(uVar39 & ((long)uVar39 >> 0x3f ^ 0xffffffffffffffffU));
            func_0x00010134166c(0,pppppuVar25,0);
            if ((long)uVar39 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8ab8);
              (*pcVar7)();
            }
            uVar41 = 0;
            lVar31 = *(long *)(lVar28 + 0x80);
            do {
              if ((uVar29 & 0xc000000000000001) == 0) {
                if (*(long *)((uVar29 & 0xffffffffffffff8) + 0x10) <= (long)uVar41) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8a9c);
                  (*pcVar7)();
                }
                uVar13 = *(ulong *)(lVar31 + 0x20 + uVar41 * 8);
                func_0x000107c61174();
              }
              else {
                pppppuVar25 = *(undefined8 ******)(lVar28 + 0x80);
                uVar13 = uVar41;
                FUN_102ed12e4(uVar41,pppppuVar25,&PTR_PTR_1126ac780,0x112f279a0);
              }
              uVar9 = uVar13;
              func_0x000107c5b198();
              func_0x000107c61180();
              uVar14 = uVar9;
              func_0x000107c3eea8();
              func_0x000107c61180();
              uVar15 = uVar14;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar14);
              puVar16 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              uVar14 = uVar15;
              func_0x000107c5ee20(uVar15,pppppuVar25);
              *(undefined8 *)(lVar28 + 0x78) = 0;
              func_0x000107c4636c();
              func_0x000107c61170(uVar14);
              uVar17 = *(undefined8 *)(lVar28 + 0x78);
              if (puVar16 == (undefined *)0x0) {
                uVar37 = uVar17;
                func_0x000107c61174();
                func_0x000107c5ed30();
                func_0x000107c61170(uVar37);
                func_0x000107c61654();
                func_0x000107c614ac(uVar17);
                func_0x000107c61170(uVar13);
                func_0x000107c61170(uVar9);
                func_0x00010006c090();
                dVar43 = 0.0;
                uVar9 = uVar15;
              }
              else {
                func_0x000107c61174();
                func_0x00010006c090(uVar15);
                puVar18 = puVar16;
                func_0x000107c4e8d8();
                func_0x000107c61180();
                if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8ac0);
                  (*pcVar7)();
                }
                puVar19 = puVar18;
                func_0x000107c4e928();
                func_0x000107c61180();
                func_0x000107c61170(puVar18);
                if (puVar19 == (undefined *)0x0) {
                  func_0x000107c61170(puVar16);
                  func_0x000107c61170(uVar13);
                  func_0x000107c61170();
                  dVar43 = 0.0;
                }
                else {
                  ppppuStack_158 = (undefined8 *****)0x0;
                  uVar17 = 0;
                  func_0x000102ed2cc4(0,0x112d55598,&PTR_PTR_1126b25d0);
                  pppppuVar25 = &ppppuStack_158;
                  func_0x000107c5fc50(puVar19,pppppuVar25,uVar17);
                  func_0x000107c61170(puVar19);
                  ppppuVar6 = ppppuStack_158;
                  if ((undefined8 *****)ppppuStack_158 == (undefined8 *****)0x0) {
                    func_0x000107c61170(puVar16);
                    func_0x000107c61170(uVar13);
                    func_0x000107c61170();
                    dVar43 = 0.0;
                  }
                  else {
                    pppppuVar33 = (undefined8 *****)((ulong)ppppuStack_158 & 0xffffffffffffff8);
                    if ((ulong)ppppuStack_158 >> 0x3e == 0) {
                      pppppuVar36 = (undefined8 *****)pppppuVar33[2];
                      if (pppppuVar36 != (undefined8 *****)0x0) goto LAB_102ec867c;
LAB_102ec881c:
                      dVar43 = 0.0;
                    }
                    else {
                      pppppuVar36 = (undefined8 *****)ppppuStack_158;
                      if (-1 < (long)ppppuStack_158) {
                        pppppuVar36 = pppppuVar33;
                      }
                      func_0x000107c60480();
                      if (pppppuVar36 == (undefined8 *****)0x0) goto LAB_102ec881c;
LAB_102ec867c:
                      ppppuVar40 = (undefined8 ****)0x0;
                      dVar43 = 0.0;
                      do {
                        if (((ulong)ppppuVar6 & 0xc000000000000001) == 0) {
                          if (pppppuVar33[2] <= ppppuVar40) {
                    /* WARNING: Does not return */
                            pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8a98);
                            (*pcVar7)();
                          }
                          ppppuVar20 = (undefined8 ****)ppppuVar6[(long)ppppuVar40 + 4];
                          func_0x000107c61174();
                        }
                        else {
                          ppppuVar20 = ppppuVar40;
                          pppppuVar25 = (undefined8 *****)ppppuVar6;
                          FUN_102ed12e4(ppppuVar40,ppppuVar6,&PTR_PTR_1126b25d0,0x112d55598);
                        }
                        pppppuVar1 = (undefined8 *****)((long)ppppuVar40 + 1);
                        if (SCARRY8((long)ppppuVar40,1)) {
                    /* WARNING: Does not return */
                          pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8a94);
                          (*pcVar7)();
                        }
                        ppppuVar21 = ppppuVar20;
                        func_0x000107c4f4ec();
                        func_0x000107c61180();
                        if (ppppuVar21 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                          pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8abc);
                          (*pcVar7)();
                        }
                        ppppuVar22 = ppppuVar21;
                        func_0x000107c44430();
                        func_0x000107c61180();
                        func_0x000107c61170(ppppuVar21);
                        if (ppppuVar22 == (undefined8 ****)0x0) {
                          func_0x000107c61170(ppppuVar20);
                        }
                        else {
                          ppppuVar21 = ppppuVar22;
                          func_0x000107c5bbe8();
                          ppppuVar23 = ppppuVar22;
                          func_0x000107c42378();
                          func_0x000107c61170(ppppuVar22);
                          func_0x000107c61170(ppppuVar20);
                          if (dVar43 <= (double)ppppuVar21 + (double)ppppuVar23) {
                            dVar43 = (double)ppppuVar21 + (double)ppppuVar23;
                          }
                        }
                        ppppuVar40 = (undefined8 ****)((long)ppppuVar40 + 1);
                      } while (pppppuVar1 != pppppuVar36);
                    }
                    func_0x000107c61170(uVar13);
                    func_0x000107c61170(puVar16);
                    func_0x000107c6142c(ppppuVar6);
                    func_0x000107c61170();
                  }
                }
              }
              uVar13 = *(ulong *)(puVar42 + 0x10);
              pppppuVar33 = (undefined8 *****)(uVar13 + 1);
              if (*(ulong *)(puVar42 + 0x18) >> 1 <= uVar13) {
                uVar9 = (ulong)(1 < *(ulong *)(puVar42 + 0x18));
                pppppuVar25 = pppppuVar33;
                func_0x00010134166c(uVar9,pppppuVar33,1);
              }
              uVar41 = uVar41 + 1;
              *(undefined8 ******)(puVar42 + 0x10) = pppppuVar33;
              *(double *)(puVar42 + uVar13 * 8 + 0x20) = dVar43;
            } while (uVar41 != uVar39);
          }
          func_0x000102ed0960();
          func_0x000107c613fc();
          FUN_102ed04f8(puVar42,0x102ed2c94,puVar12);
          func_0x000107c61578(puVar11,2);
        }
        *(ulong *)(lVar28 + 0xd8) = uVar9;
        uVar17 = *(undefined8 *)(lVar28 + 0xc0);
        uVar30 = *(undefined8 *)(lVar28 + 200);
        uVar5 = *(undefined1 *)(lVar28 + 0x100);
        uVar37 = *(undefined8 *)(lVar28 + 0xa0);
        uVar3 = *(undefined8 *)(lVar28 + 0xa8);
        uVar24 = *(undefined8 *)(lVar28 + 0x80);
        FUN_102ed1a68();
        *(undefined8 *)(lVar28 + 0xe0) = uVar24;
        puVar34 = (undefined8 *)(lVar28 + 0x68);
        *puVar34 = uVar24;
        func_0x000107c5fcf4(uVar3);
        lVar31 = 0;
        func_0x000107c5fd0c();
        (**(code **)(*(long *)(lVar31 + -8) + 0x38))(uVar3,0,1,lVar31);
        puVar11 = &UNK_1105e5518;
        func_0x000107c613fc(&UNK_1105e5518,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,uVar37);
        puVar12 = &UNK_1105e56a8;
        func_0x000107c613fc(&UNK_1105e56a8,0x38,7);
        *(undefined **)(lVar28 + 0xe8) = puVar12;
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(ulong *)(puVar12 + 0x18) = uVar9;
        puVar12[0x20] = uVar5;
        *(undefined8 *)(puVar12 + 0x28) = uVar17;
        *(undefined8 *)(puVar12 + 0x30) = uVar30;
        plVar8 = (long *)0xe0;
        func_0x000107c6157c(uVar9);
        func_0x000107c615b8();
        *(long **)(lVar28 + 0xf0) = plVar8;
        lVar31 = 0x112f279b0;
        func_0x0001000285a8(0x112f279b0,&UNK_10db63280);
        lVar35 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        lVar26 = 0x112f279b8;
        func_0x000102ed2c2c(0x112f279b8,0x112f279b0,&UNK_10db63280,PTR___sSayxGSTsMc_11034dd08);
        *plVar8 = lVar28;
        plVar8[1] = (long)FUN_102ec8ac4;
        puVar11 = PTR___ss5ErrorWS_11034ee10;
        lVar27 = *(long *)(lVar28 + 0xa8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
          plVar8[0x16] = (long)puVar34;
          plVar8[0x17] = lVar28 + 0x70;
          plVar8[0x14] = lVar26;
          plVar8[0x15] = (long)puVar11;
          plVar8[0x12] = (long)&UNK_1105e4ff0;
          plVar8[0x13] = lVar35;
          plVar8[0x10] = (long)puVar12;
          plVar8[0x11] = lVar31;
          plVar8[0xe] = lVar27;
          plVar8[0xf] = (long)&UNK_10db63278;
          lVar31 = *(long *)(lVar35 + -8);
          plVar8[0x18] = lVar31;
          uVar9 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          plVar8[0x19] = uVar9;
          pcVar7 = (code *)&UNK_10488ea3c;
        }
        else {
          func_0x000107c60e78();
          lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar35 = *plVar8;
          uVar17 = *(undefined8 *)(lVar35 + 0xe8);
          lVar26 = *plVar8;
          *(long *)(lVar35 + 0xf8) = lVar27;
          func_0x000107c615c0(*(undefined8 *)(lVar35 + 0xf0));
          func_0x000107c61574(uVar17);
          if (puVar34 == (undefined8 *)0x0) {
            uVar17 = *(undefined8 *)(lVar35 + 0xe0);
            func_0x000102ed1e70(*(undefined8 *)(lVar35 + 0xa8),0x112d453c8,&UNK_10d90ac60);
            func_0x000107c61574(uVar17);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar31) goto LAB_102ec8b98;
            pcVar7 = FUN_102ec8b9c;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar31) {
LAB_102ec8b98:
              func_0x000107c60e78();
              lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar35 = *(long *)(lVar26 + 0xf8);
              uVar9 = *(ulong *)(lVar35 + 0x10);
              puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar9 != 0) {
                uVar29 = 0;
                puVar34 = (undefined8 *)(lVar35 + 0x28);
                do {
                  if (*(ulong *)(lVar35 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
                    (*pcVar7)();
                  }
                  uVar17 = puVar34[-1];
                  uVar37 = *puVar34;
                  lVar27 = 0x112d38280;
                  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
                  func_0x000107c61534();
                  *(undefined8 *)(lVar27 + 0x18) = 2;
                  *(undefined8 *)(lVar27 + 0x10) = 1;
                  *(undefined8 *)(lVar27 + 0x20) = uVar17;
                  *(undefined8 *)(lVar27 + 0x28) = uVar37;
                  uVar39 = *(ulong *)(puVar11 + 0x10);
                  func_0x000107c61434(uVar37);
                  puVar12 = puVar11;
                  func_0x000107c61558();
                  if (((int)puVar12 == 0) ||
                     (uVar41 = *(ulong *)(puVar11 + 0x18) >> 1, uVar41 <= uVar39)) {
                    func_0x0001000d182c();
                    uVar41 = *(ulong *)(puVar12 + 0x18) >> 1;
                    puVar11 = puVar12;
                  }
                  if (uVar41 == *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
                    (*pcVar7)();
                  }
                  uVar29 = uVar29 + 1;
                  func_0x000107c6140c(puVar11 + *(ulong *)(puVar11 + 0x10) * 0x10 + 0x20,
                                      (undefined8 *)(lVar27 + 0x20),1,PTR___sSSN_11034da80);
                  func_0x000107c61574(lVar27);
                  *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
                  puVar34 = puVar34 + 2;
                } while (uVar9 != uVar29);
                lVar35 = *(long *)(lVar26 + 0xf8);
              }
              uVar17 = *(undefined8 *)(lVar26 + 0xd8);
              uVar37 = *(undefined8 *)(lVar26 + 0xa8);
              func_0x000107c6142c(lVar35);
              func_0x000107c61574(uVar17);
              func_0x000107c615c0(uVar37);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar26 + 8))(puVar11);
                return;
              }
              func_0x000107c60e78();
              lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
              func_0x0001000834e4(lVar26 + 0x40);
              func_0x000107c615c0(*(undefined8 *)(lVar26 + 0xa8));
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar26 + 8))();
                return;
              }
              func_0x000107c60e78();
              lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uVar37 = *(undefined8 *)(lVar26 + 0xe0);
              uVar30 = *(undefined8 *)(lVar26 + 0xa8);
              func_0x000107c61574(*(undefined8 *)(lVar26 + 0xd8));
              uVar17 = 0x112d453c8;
              puVar11 = &UNK_10d90ac60;
              func_0x000102ed1e70(uVar30);
              func_0x000107c61574(uVar37);
              func_0x000107c615c0(*(undefined8 *)(lVar26 + 0xa8));
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar26 + 8))();
                return;
              }
              func_0x000107c60e78();
              *(undefined8 *)(lVar26 + 0x38) = uVar17;
              *(undefined **)(lVar26 + 0x40) = puVar11;
              plVar8 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
              func_0x000107c615b8();
              *(long **)(lVar26 + 0x48) = plVar8;
              *plVar8 = lVar26;
              plVar8[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
              return;
            }
            pcVar7 = FUN_102ec8db4;
          }
        }
      }
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,0,0);
  return;
}



/* Entry: 102ec7f4c; end: 102ec7fb7;  */

void FUN_102ec7f4c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa8) = param_1;
    pcVar1 = FUN_102ec7fb8;
  }
  else {
    pcVar1 = FUN_102ec8040;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec7fb8; end: 102ec803f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec7fb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(unaff_x22 + 0x80))(uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000100075034(FUN_102ed3340,uVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ec803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec8040; end: 102ec80fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec8040(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  pcVar5 = *(code **)(unaff_x22 + 0x50);
  func_0x000107c614cc(uVar3,unaff_x22 + 0x40,unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x30),uVar2);
  (*pcVar5)();
  func_0x000107c6142c(uVar2);
  func_0x000107c614ac(uVar3);
  func_0x000100075034(FUN_102ed2b1c,uVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ec80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec80fc; end: 102ec8293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec80fc(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *****pppppuVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  long unaff_x20;
  long *plVar31;
  undefined8 *****pppppuVar32;
  long *unaff_x22;
  long lVar33;
  undefined8 *****pppppuVar34;
  undefined8 uVar35;
  int *piVar36;
  ulong uVar37;
  undefined8 ****ppppuVar38;
  ulong uVar39;
  undefined *puVar40;
  double dVar41;
  undefined8 ****ppppuStack_158;
  long lStack_150;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x13] = param_4;
  unaff_x22[0x14] = unaff_x20;
  unaff_x22[0x11] = param_2;
  unaff_x22[0x12] = param_3;
  unaff_x22[0x10] = param_1;
  lVar27 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x15] = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    pcVar6 = (code *)0x102ec8194;
  }
  else {
    func_0x000107c60e78();
    lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar31 = *(long **)(unaff_x22[0x14] + _DAT_112f27748);
    puVar8 = (undefined8 *)0x70;
    func_0x000107c615b8();
    unaff_x22[0x16] = (long)puVar8;
    *puVar8 = unaff_x22;
    puVar8[1] = 0x102ec8220;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
      puVar8[5] = unaff_x22 + 8;
      puVar8[6] = plVar31;
      lVar26 = *(long *)(*plVar31 + 0x50);
      puVar8[7] = lVar26;
      lVar27 = 0;
      __sSqMa(0,lVar26);
      puVar8[8] = lVar27;
      lVar27 = *(long *)(lVar27 + -8);
      puVar8[9] = lVar27;
      uVar7 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar8[10] = uVar7;
      lVar27 = *(long *)(lVar26 + -8);
      puVar8[0xb] = lVar27;
      uVar7 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar8[0xc] = uVar7;
      pcVar6 = (code *)&UNK_104875f90;
    }
    else {
      func_0x000107c60e78();
      lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar31 = (long *)*unaff_x22;
      func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
        pcVar6 = FUN_102ec8294;
      }
      else {
        func_0x000107c60e78();
        lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar7 = plVar31[0x11];
        lVar27 = plVar31[0xb];
        lVar26 = plVar31[0xc];
        plVar9 = plVar31 + 8;
        lVar33 = lVar27;
        func_0x0001000a8868();
        piVar36 = *(int **)(lVar26 + 8);
        iVar2 = *piVar36;
        puVar8 = (undefined8 *)(ulong)(uint)piVar36[1];
        func_0x000107c615b8();
        plVar31[0x17] = (long)puVar8;
        *puVar8 = plVar31;
        puVar8[1] = FUN_102ec834c;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar36))(puVar8,uVar7 & 0xffffffffff,lVar27,lVar26);
          return;
        }
        func_0x000107c60e78();
        lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = *plVar31;
        lVar28 = *plVar31;
        *(char *)(lVar26 + 0x100) = (char)puVar8;
        *(long *)(lVar26 + 0xc0) = lVar33;
        *(long *)(lVar26 + 200) = param_3;
        *(long **)(lVar26 + 0xd0) = plVar9;
        func_0x000107c615c0(*(undefined8 *)(lVar26 + 0xb8));
        if (plVar9 == (long *)0x0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
            pcVar6 = FUN_102ec83f8;
            goto _swift_task_switch;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
          pcVar6 = FUN_102ec8d4c;
          goto _swift_task_switch;
        }
        func_0x000107c60e78();
        lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar27 = *(long *)(lVar28 + 0x90);
        func_0x0001000834e4(lVar28 + 0x40);
        if (lVar27 == 0) {
          uVar7 = 0;
        }
        else {
          uVar29 = *(ulong *)(lVar28 + 0x80);
          puVar10 = &UNK_1105e56d0;
          func_0x000107c613fc(&UNK_1105e56d0,0x20,7);
          uVar16 = *(undefined8 *)(lVar28 + 0x90);
          *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(lVar28 + 0x98);
          *(undefined8 *)(puVar10 + 0x10) = uVar16;
          puVar11 = &UNK_1105e56f8;
          func_0x000107c613fc(&UNK_1105e56f8,0x20,7);
          *(undefined8 *)(puVar11 + 0x10) = 0x102ed2c70;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          if (uVar29 >> 0x3e == 0) {
            uVar37 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar37 = uVar29 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar29) {
              uVar37 = uVar29;
            }
            func_0x000107c60480();
          }
          uVar7 = *(ulong *)(lVar28 + 0x90);
          uVar16 = *(undefined8 *)(lVar28 + 0x98);
          if (uVar37 == 0) {
            func_0x000107c61580(puVar10,2);
            FUN_102ed2a64(uVar7,uVar16);
            puVar40 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000107c61580(puVar10,2);
            FUN_102ed2a64(uVar7,uVar16);
            puVar40 = PTR___swiftEmptyArrayStorage_11034f1c8;
            pppppuVar25 = (undefined8 *****)(uVar37 & ((long)uVar37 >> 0x3f ^ 0xffffffffffffffffU));
            func_0x00010134166c(0,pppppuVar25,0);
            if ((long)uVar37 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8ab8);
              (*pcVar6)();
            }
            uVar39 = 0;
            lVar27 = *(long *)(lVar28 + 0x80);
            do {
              if ((uVar29 & 0xc000000000000001) == 0) {
                if (*(long *)((uVar29 & 0xffffffffffffff8) + 0x10) <= (long)uVar39) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a9c);
                  (*pcVar6)();
                }
                uVar12 = *(ulong *)(lVar27 + 0x20 + uVar39 * 8);
                func_0x000107c61174();
              }
              else {
                pppppuVar25 = *(undefined8 ******)(lVar28 + 0x80);
                uVar12 = uVar39;
                FUN_102ed12e4(uVar39,pppppuVar25,&PTR_PTR_1126ac780,0x112f279a0);
              }
              uVar7 = uVar12;
              func_0x000107c5b198();
              func_0x000107c61180();
              uVar13 = uVar7;
              func_0x000107c3eea8();
              func_0x000107c61180();
              uVar14 = uVar13;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar13);
              puVar15 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              uVar13 = uVar14;
              func_0x000107c5ee20(uVar14,pppppuVar25);
              *(undefined8 *)(lVar28 + 0x78) = 0;
              func_0x000107c4636c();
              func_0x000107c61170(uVar13);
              uVar16 = *(undefined8 *)(lVar28 + 0x78);
              if (puVar15 == (undefined *)0x0) {
                uVar35 = uVar16;
                func_0x000107c61174();
                func_0x000107c5ed30();
                func_0x000107c61170(uVar35);
                func_0x000107c61654();
                func_0x000107c614ac(uVar16);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar7);
                func_0x00010006c090();
                dVar41 = 0.0;
                uVar7 = uVar14;
              }
              else {
                func_0x000107c61174();
                func_0x00010006c090(uVar14);
                puVar17 = puVar15;
                func_0x000107c4e8d8();
                func_0x000107c61180();
                if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8ac0);
                  (*pcVar6)();
                }
                puVar18 = puVar17;
                func_0x000107c4e928();
                func_0x000107c61180();
                func_0x000107c61170(puVar17);
                if (puVar18 == (undefined *)0x0) {
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(uVar12);
                  func_0x000107c61170();
                  dVar41 = 0.0;
                }
                else {
                  ppppuStack_158 = (undefined8 *****)0x0;
                  uVar16 = 0;
                  func_0x000102ed2cc4(0,0x112d55598,&PTR_PTR_1126b25d0);
                  pppppuVar25 = &ppppuStack_158;
                  func_0x000107c5fc50(puVar18,pppppuVar25,uVar16);
                  func_0x000107c61170(puVar18);
                  ppppuVar5 = ppppuStack_158;
                  if ((undefined8 *****)ppppuStack_158 == (undefined8 *****)0x0) {
                    func_0x000107c61170(puVar15);
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170();
                    dVar41 = 0.0;
                  }
                  else {
                    pppppuVar32 = (undefined8 *****)((ulong)ppppuStack_158 & 0xffffffffffffff8);
                    if ((ulong)ppppuStack_158 >> 0x3e == 0) {
                      pppppuVar34 = (undefined8 *****)pppppuVar32[2];
                      if (pppppuVar34 != (undefined8 *****)0x0) goto LAB_102ec867c;
LAB_102ec881c:
                      dVar41 = 0.0;
                    }
                    else {
                      pppppuVar34 = (undefined8 *****)ppppuStack_158;
                      if (-1 < (long)ppppuStack_158) {
                        pppppuVar34 = pppppuVar32;
                      }
                      func_0x000107c60480();
                      if (pppppuVar34 == (undefined8 *****)0x0) goto LAB_102ec881c;
LAB_102ec867c:
                      ppppuVar38 = (undefined8 ****)0x0;
                      dVar41 = 0.0;
                      do {
                        if (((ulong)ppppuVar5 & 0xc000000000000001) == 0) {
                          if (pppppuVar32[2] <= ppppuVar38) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a98);
                            (*pcVar6)();
                          }
                          ppppuVar19 = (undefined8 ****)ppppuVar5[(long)ppppuVar38 + 4];
                          func_0x000107c61174();
                        }
                        else {
                          ppppuVar19 = ppppuVar38;
                          pppppuVar25 = (undefined8 *****)ppppuVar5;
                          FUN_102ed12e4(ppppuVar38,ppppuVar5,&PTR_PTR_1126b25d0,0x112d55598);
                        }
                        pppppuVar1 = (undefined8 *****)((long)ppppuVar38 + 1);
                        if (SCARRY8((long)ppppuVar38,1)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a94);
                          (*pcVar6)();
                        }
                        ppppuVar20 = ppppuVar19;
                        func_0x000107c4f4ec();
                        func_0x000107c61180();
                        if (ppppuVar20 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8abc);
                          (*pcVar6)();
                        }
                        ppppuVar21 = ppppuVar20;
                        func_0x000107c44430();
                        func_0x000107c61180();
                        func_0x000107c61170(ppppuVar20);
                        if (ppppuVar21 == (undefined8 ****)0x0) {
                          func_0x000107c61170(ppppuVar19);
                        }
                        else {
                          ppppuVar20 = ppppuVar21;
                          func_0x000107c5bbe8();
                          ppppuVar22 = ppppuVar21;
                          func_0x000107c42378();
                          func_0x000107c61170(ppppuVar21);
                          func_0x000107c61170(ppppuVar19);
                          if (dVar41 <= (double)ppppuVar20 + (double)ppppuVar22) {
                            dVar41 = (double)ppppuVar20 + (double)ppppuVar22;
                          }
                        }
                        ppppuVar38 = (undefined8 ****)((long)ppppuVar38 + 1);
                      } while (pppppuVar1 != pppppuVar34);
                    }
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170(puVar15);
                    func_0x000107c6142c(ppppuVar5);
                    func_0x000107c61170();
                  }
                }
              }
              uVar12 = *(ulong *)(puVar40 + 0x10);
              pppppuVar32 = (undefined8 *****)(uVar12 + 1);
              if (*(ulong *)(puVar40 + 0x18) >> 1 <= uVar12) {
                uVar7 = (ulong)(1 < *(ulong *)(puVar40 + 0x18));
                pppppuVar25 = pppppuVar32;
                func_0x00010134166c(uVar7,pppppuVar32,1);
              }
              uVar39 = uVar39 + 1;
              *(undefined8 ******)(puVar40 + 0x10) = pppppuVar32;
              *(double *)(puVar40 + uVar12 * 8 + 0x20) = dVar41;
            } while (uVar39 != uVar37);
          }
          func_0x000102ed0960();
          func_0x000107c613fc();
          FUN_102ed04f8(puVar40,0x102ed2c94,puVar11);
          func_0x000107c61578(puVar10,2);
        }
        *(ulong *)(lVar28 + 0xd8) = uVar7;
        uVar16 = *(undefined8 *)(lVar28 + 0xc0);
        uVar30 = *(undefined8 *)(lVar28 + 200);
        uVar4 = *(undefined1 *)(lVar28 + 0x100);
        uVar35 = *(undefined8 *)(lVar28 + 0xa0);
        uVar3 = *(undefined8 *)(lVar28 + 0xa8);
        uVar23 = *(undefined8 *)(lVar28 + 0x80);
        FUN_102ed1a68();
        *(undefined8 *)(lVar28 + 0xe0) = uVar23;
        puVar8 = (undefined8 *)(lVar28 + 0x68);
        *puVar8 = uVar23;
        func_0x000107c5fcf4(uVar3);
        lVar27 = 0;
        func_0x000107c5fd0c();
        (**(code **)(*(long *)(lVar27 + -8) + 0x38))(uVar3,0,1,lVar27);
        puVar10 = &UNK_1105e5518;
        func_0x000107c613fc(&UNK_1105e5518,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,uVar35);
        puVar11 = &UNK_1105e56a8;
        func_0x000107c613fc(&UNK_1105e56a8,0x38,7);
        *(undefined **)(lVar28 + 0xe8) = puVar11;
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(ulong *)(puVar11 + 0x18) = uVar7;
        puVar11[0x20] = uVar4;
        *(undefined8 *)(puVar11 + 0x28) = uVar16;
        *(undefined8 *)(puVar11 + 0x30) = uVar30;
        plVar31 = (long *)0xe0;
        func_0x000107c6157c(uVar7);
        func_0x000107c615b8();
        *(long **)(lVar28 + 0xf0) = plVar31;
        lVar27 = 0x112f279b0;
        func_0x0001000285a8(0x112f279b0,&UNK_10db63280);
        lVar26 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        lVar33 = 0x112f279b8;
        func_0x000102ed2c2c(0x112f279b8,0x112f279b0,&UNK_10db63280,PTR___sSayxGSTsMc_11034dd08);
        *plVar31 = lVar28;
        plVar31[1] = (long)FUN_102ec8ac4;
        puVar10 = PTR___ss5ErrorWS_11034ee10;
        lVar24 = *(long *)(lVar28 + 0xa8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
          plVar31[0x16] = (long)puVar8;
          plVar31[0x17] = lVar28 + 0x70;
          plVar31[0x14] = lVar33;
          plVar31[0x15] = (long)puVar10;
          plVar31[0x12] = (long)&UNK_1105e4ff0;
          plVar31[0x13] = lVar26;
          plVar31[0x10] = (long)puVar11;
          plVar31[0x11] = lVar27;
          plVar31[0xe] = lVar24;
          plVar31[0xf] = (long)&UNK_10db63278;
          lVar27 = *(long *)(lVar26 + -8);
          plVar31[0x18] = lVar27;
          uVar7 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          plVar31[0x19] = uVar7;
          pcVar6 = (code *)&UNK_10488ea3c;
        }
        else {
          func_0x000107c60e78();
          lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar26 = *plVar31;
          uVar16 = *(undefined8 *)(lVar26 + 0xe8);
          lVar33 = *plVar31;
          *(long *)(lVar26 + 0xf8) = lVar24;
          func_0x000107c615c0(*(undefined8 *)(lVar26 + 0xf0));
          func_0x000107c61574(uVar16);
          if (puVar8 == (undefined8 *)0x0) {
            uVar16 = *(undefined8 *)(lVar26 + 0xe0);
            func_0x000102ed1e70(*(undefined8 *)(lVar26 + 0xa8),0x112d453c8,&UNK_10d90ac60);
            func_0x000107c61574(uVar16);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) goto LAB_102ec8b98;
            pcVar6 = FUN_102ec8b9c;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
LAB_102ec8b98:
              func_0x000107c60e78();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar26 = *(long *)(lVar33 + 0xf8);
              uVar7 = *(ulong *)(lVar26 + 0x10);
              puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar7 != 0) {
                uVar29 = 0;
                puVar8 = (undefined8 *)(lVar26 + 0x28);
                do {
                  if (*(ulong *)(lVar26 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
                    (*pcVar6)();
                  }
                  uVar16 = puVar8[-1];
                  uVar35 = *puVar8;
                  lVar28 = 0x112d38280;
                  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
                  func_0x000107c61534();
                  *(undefined8 *)(lVar28 + 0x18) = 2;
                  *(undefined8 *)(lVar28 + 0x10) = 1;
                  *(undefined8 *)(lVar28 + 0x20) = uVar16;
                  *(undefined8 *)(lVar28 + 0x28) = uVar35;
                  uVar37 = *(ulong *)(puVar10 + 0x10);
                  func_0x000107c61434(uVar35);
                  puVar11 = puVar10;
                  func_0x000107c61558();
                  if (((int)puVar11 == 0) ||
                     (uVar39 = *(ulong *)(puVar10 + 0x18) >> 1, uVar39 <= uVar37)) {
                    func_0x0001000d182c();
                    uVar39 = *(ulong *)(puVar11 + 0x18) >> 1;
                    puVar10 = puVar11;
                  }
                  if (uVar39 == *(ulong *)(puVar10 + 0x10)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
                    (*pcVar6)();
                  }
                  uVar29 = uVar29 + 1;
                  func_0x000107c6140c(puVar10 + *(ulong *)(puVar10 + 0x10) * 0x10 + 0x20,
                                      (undefined8 *)(lVar28 + 0x20),1,PTR___sSSN_11034da80);
                  func_0x000107c61574(lVar28);
                  *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
                  puVar8 = puVar8 + 2;
                } while (uVar7 != uVar29);
                lVar26 = *(long *)(lVar33 + 0xf8);
              }
              uVar16 = *(undefined8 *)(lVar33 + 0xd8);
              uVar35 = *(undefined8 *)(lVar33 + 0xa8);
              func_0x000107c6142c(lVar26);
              func_0x000107c61574(uVar16);
              func_0x000107c615c0(uVar35);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar33 + 8))(puVar10);
                return;
              }
              func_0x000107c60e78();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              func_0x0001000834e4(lVar33 + 0x40);
              func_0x000107c615c0(*(undefined8 *)(lVar33 + 0xa8));
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar33 + 8))();
                return;
              }
              func_0x000107c60e78();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uVar35 = *(undefined8 *)(lVar33 + 0xe0);
              uVar30 = *(undefined8 *)(lVar33 + 0xa8);
              func_0x000107c61574(*(undefined8 *)(lVar33 + 0xd8));
              uVar16 = 0x112d453c8;
              puVar10 = &UNK_10d90ac60;
              func_0x000102ed1e70(uVar30);
              func_0x000107c61574(uVar35);
              func_0x000107c615c0(*(undefined8 *)(lVar33 + 0xa8));
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar33 + 8))();
                return;
              }
              func_0x000107c60e78();
              *(undefined8 *)(lVar33 + 0x38) = uVar16;
              *(undefined **)(lVar33 + 0x40) = puVar10;
              plVar31 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4)
              ;
              func_0x000107c615b8();
              *(long **)(lVar33 + 0x48) = plVar31;
              *plVar31 = lVar33;
              plVar31[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
              return;
            }
            pcVar6 = FUN_102ec8db4;
          }
        }
      }
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 102ec8294; end: 102ec834b;  */

void FUN_102ec8294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *****pppppuVar28;
  undefined8 *puVar29;
  long *unaff_x22;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *****pppppuVar33;
  undefined8 uVar34;
  int *piVar35;
  ulong uVar36;
  undefined8 ****ppppuVar37;
  ulong uVar38;
  undefined *puVar39;
  double dVar40;
  undefined8 ****ppppuStack_f8;
  long lStack_f0;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar32 = unaff_x22[0x11];
  lVar24 = unaff_x22[0xb];
  lVar25 = unaff_x22[0xc];
  plVar30 = unaff_x22 + 8;
  lVar31 = lVar24;
  func_0x0001000a8868();
  piVar35 = *(int **)(lVar25 + 8);
  iVar2 = *piVar35;
  puVar29 = (undefined8 *)(ulong)(uint)piVar35[1];
  func_0x000107c615b8();
  unaff_x22[0x17] = (long)puVar29;
  *puVar29 = unaff_x22;
  puVar29[1] = FUN_102ec834c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar35))(puVar29,uVar32 & 0xffffffffff,lVar24,lVar25);
    return;
  }
  func_0x000107c60e78();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *unaff_x22;
  lVar23 = *unaff_x22;
  *(char *)(lVar25 + 0x100) = (char)puVar29;
  *(long *)(lVar25 + 0xc0) = lVar31;
  *(undefined8 *)(lVar25 + 200) = param_3;
  *(long **)(lVar25 + 0xd0) = plVar30;
  func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xb8));
  if (plVar30 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
      pcVar6 = FUN_102ec83f8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    pcVar6 = FUN_102ec8d4c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(lVar23 + 0x90);
  func_0x0001000834e4(lVar23 + 0x40);
  if (lVar24 == 0) {
    uVar32 = 0;
  }
  else {
    uVar26 = *(ulong *)(lVar23 + 0x80);
    puVar7 = &UNK_1105e56d0;
    func_0x000107c613fc(&UNK_1105e56d0,0x20,7);
    uVar13 = *(undefined8 *)(lVar23 + 0x90);
    *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(lVar23 + 0x98);
    *(undefined8 *)(puVar7 + 0x10) = uVar13;
    puVar8 = &UNK_1105e56f8;
    func_0x000107c613fc(&UNK_1105e56f8,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x102ed2c70;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    if (uVar26 >> 0x3e == 0) {
      uVar36 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar36 = uVar26 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar26) {
        uVar36 = uVar26;
      }
      func_0x000107c60480();
    }
    uVar32 = *(ulong *)(lVar23 + 0x90);
    uVar13 = *(undefined8 *)(lVar23 + 0x98);
    if (uVar36 == 0) {
      func_0x000107c61580(puVar7,2);
      FUN_102ed2a64(uVar32,uVar13);
      puVar39 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61580(puVar7,2);
      FUN_102ed2a64(uVar32,uVar13);
      puVar39 = PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppuVar22 = (undefined8 *****)(uVar36 & ((long)uVar36 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x00010134166c(0,pppppuVar22,0);
      if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8ab8);
        (*pcVar6)();
      }
      uVar38 = 0;
      lVar24 = *(long *)(lVar23 + 0x80);
      do {
        if ((uVar26 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar26 & 0xffffffffffffff8) + 0x10) <= (long)uVar38) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a9c);
            (*pcVar6)();
          }
          uVar9 = *(ulong *)(lVar24 + 0x20 + uVar38 * 8);
          func_0x000107c61174();
        }
        else {
          pppppuVar22 = *(undefined8 ******)(lVar23 + 0x80);
          uVar9 = uVar38;
          FUN_102ed12e4(uVar38,pppppuVar22,&PTR_PTR_1126ac780,0x112f279a0);
        }
        uVar32 = uVar9;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar10 = uVar32;
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar11 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
        puVar12 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar10 = uVar11;
        func_0x000107c5ee20(uVar11,pppppuVar22);
        *(undefined8 *)(lVar23 + 0x78) = 0;
        func_0x000107c4636c();
        func_0x000107c61170(uVar10);
        uVar13 = *(undefined8 *)(lVar23 + 0x78);
        if (puVar12 == (undefined *)0x0) {
          uVar34 = uVar13;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(uVar34);
          func_0x000107c61654();
          func_0x000107c614ac(uVar13);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar32);
          func_0x00010006c090();
          dVar40 = 0.0;
          uVar32 = uVar11;
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar11);
          puVar14 = puVar12;
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8ac0);
            (*pcVar6)();
          }
          puVar15 = puVar14;
          func_0x000107c4e928();
          func_0x000107c61180();
          func_0x000107c61170(puVar14);
          if (puVar15 == (undefined *)0x0) {
            func_0x000107c61170(puVar12);
            func_0x000107c61170(uVar9);
            func_0x000107c61170();
            dVar40 = 0.0;
          }
          else {
            ppppuStack_f8 = (undefined8 *****)0x0;
            uVar13 = 0;
            func_0x000102ed2cc4(0,0x112d55598,&PTR_PTR_1126b25d0);
            pppppuVar22 = &ppppuStack_f8;
            func_0x000107c5fc50(puVar15,pppppuVar22,uVar13);
            func_0x000107c61170(puVar15);
            ppppuVar5 = ppppuStack_f8;
            if ((undefined8 *****)ppppuStack_f8 == (undefined8 *****)0x0) {
              func_0x000107c61170(puVar12);
              func_0x000107c61170(uVar9);
              func_0x000107c61170();
              dVar40 = 0.0;
            }
            else {
              pppppuVar28 = (undefined8 *****)((ulong)ppppuStack_f8 & 0xffffffffffffff8);
              if ((ulong)ppppuStack_f8 >> 0x3e == 0) {
                pppppuVar33 = (undefined8 *****)pppppuVar28[2];
                if (pppppuVar33 != (undefined8 *****)0x0) goto LAB_102ec867c;
LAB_102ec881c:
                dVar40 = 0.0;
              }
              else {
                pppppuVar33 = (undefined8 *****)ppppuStack_f8;
                if (-1 < (long)ppppuStack_f8) {
                  pppppuVar33 = pppppuVar28;
                }
                func_0x000107c60480();
                if (pppppuVar33 == (undefined8 *****)0x0) goto LAB_102ec881c;
LAB_102ec867c:
                ppppuVar37 = (undefined8 ****)0x0;
                dVar40 = 0.0;
                do {
                  if (((ulong)ppppuVar5 & 0xc000000000000001) == 0) {
                    if (pppppuVar28[2] <= ppppuVar37) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a98);
                      (*pcVar6)();
                    }
                    ppppuVar16 = (undefined8 ****)ppppuVar5[(long)ppppuVar37 + 4];
                    func_0x000107c61174();
                  }
                  else {
                    ppppuVar16 = ppppuVar37;
                    pppppuVar22 = (undefined8 *****)ppppuVar5;
                    FUN_102ed12e4(ppppuVar37,ppppuVar5,&PTR_PTR_1126b25d0,0x112d55598);
                  }
                  pppppuVar1 = (undefined8 *****)((long)ppppuVar37 + 1);
                  if (SCARRY8((long)ppppuVar37,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8a94);
                    (*pcVar6)();
                  }
                  ppppuVar17 = ppppuVar16;
                  func_0x000107c4f4ec();
                  func_0x000107c61180();
                  if (ppppuVar17 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8abc);
                    (*pcVar6)();
                  }
                  ppppuVar18 = ppppuVar17;
                  func_0x000107c44430();
                  func_0x000107c61180();
                  func_0x000107c61170(ppppuVar17);
                  if (ppppuVar18 == (undefined8 ****)0x0) {
                    func_0x000107c61170(ppppuVar16);
                  }
                  else {
                    ppppuVar17 = ppppuVar18;
                    func_0x000107c5bbe8();
                    ppppuVar19 = ppppuVar18;
                    func_0x000107c42378();
                    func_0x000107c61170(ppppuVar18);
                    func_0x000107c61170(ppppuVar16);
                    if (dVar40 <= (double)ppppuVar17 + (double)ppppuVar19) {
                      dVar40 = (double)ppppuVar17 + (double)ppppuVar19;
                    }
                  }
                  ppppuVar37 = (undefined8 ****)((long)ppppuVar37 + 1);
                } while (pppppuVar1 != pppppuVar33);
              }
              func_0x000107c61170(uVar9);
              func_0x000107c61170(puVar12);
              func_0x000107c6142c(ppppuVar5);
              func_0x000107c61170();
            }
          }
        }
        uVar9 = *(ulong *)(puVar39 + 0x10);
        pppppuVar28 = (undefined8 *****)(uVar9 + 1);
        if (*(ulong *)(puVar39 + 0x18) >> 1 <= uVar9) {
          uVar32 = (ulong)(1 < *(ulong *)(puVar39 + 0x18));
          pppppuVar22 = pppppuVar28;
          func_0x00010134166c(uVar32,pppppuVar28,1);
        }
        uVar38 = uVar38 + 1;
        *(undefined8 ******)(puVar39 + 0x10) = pppppuVar28;
        *(double *)(puVar39 + uVar9 * 8 + 0x20) = dVar40;
      } while (uVar38 != uVar36);
    }
    func_0x000102ed0960();
    func_0x000107c613fc();
    FUN_102ed04f8(puVar39,0x102ed2c94,puVar8);
    func_0x000107c61578(puVar7,2);
  }
  *(ulong *)(lVar23 + 0xd8) = uVar32;
  uVar13 = *(undefined8 *)(lVar23 + 0xc0);
  uVar27 = *(undefined8 *)(lVar23 + 200);
  uVar4 = *(undefined1 *)(lVar23 + 0x100);
  uVar34 = *(undefined8 *)(lVar23 + 0xa0);
  uVar3 = *(undefined8 *)(lVar23 + 0xa8);
  uVar20 = *(undefined8 *)(lVar23 + 0x80);
  FUN_102ed1a68();
  *(undefined8 *)(lVar23 + 0xe0) = uVar20;
  puVar29 = (undefined8 *)(lVar23 + 0x68);
  *puVar29 = uVar20;
  func_0x000107c5fcf4(uVar3);
  lVar24 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar24 + -8) + 0x38))(uVar3,0,1,lVar24);
  puVar7 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar34);
  puVar8 = &UNK_1105e56a8;
  func_0x000107c613fc(&UNK_1105e56a8,0x38,7);
  *(undefined **)(lVar23 + 0xe8) = puVar8;
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(ulong *)(puVar8 + 0x18) = uVar32;
  puVar8[0x20] = uVar4;
  *(undefined8 *)(puVar8 + 0x28) = uVar13;
  *(undefined8 *)(puVar8 + 0x30) = uVar27;
  plVar30 = (long *)0xe0;
  func_0x000107c6157c(uVar32);
  func_0x000107c615b8();
  *(long **)(lVar23 + 0xf0) = plVar30;
  lVar24 = 0x112f279b0;
  func_0x0001000285a8(0x112f279b0,&UNK_10db63280);
  lVar25 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar31 = 0x112f279b8;
  func_0x000102ed2c2c(0x112f279b8,0x112f279b0,&UNK_10db63280,PTR___sSayxGSTsMc_11034dd08);
  *plVar30 = lVar23;
  plVar30[1] = (long)FUN_102ec8ac4;
  puVar7 = PTR___ss5ErrorWS_11034ee10;
  lVar21 = *(long *)(lVar23 + 0xa8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    plVar30[0x16] = (long)puVar29;
    plVar30[0x17] = lVar23 + 0x70;
    plVar30[0x14] = lVar31;
    plVar30[0x15] = (long)puVar7;
    plVar30[0x12] = (long)&UNK_1105e4ff0;
    plVar30[0x13] = lVar25;
    plVar30[0x10] = (long)puVar8;
    plVar30[0x11] = lVar24;
    plVar30[0xe] = lVar21;
    plVar30[0xf] = (long)&UNK_10db63278;
    lVar24 = *(long *)(lVar25 + -8);
    plVar30[0x18] = lVar24;
    uVar32 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar30[0x19] = uVar32;
    pcVar6 = (code *)&UNK_10488ea3c;
  }
  else {
    func_0x000107c60e78();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar25 = *plVar30;
    uVar13 = *(undefined8 *)(lVar25 + 0xe8);
    lVar31 = *plVar30;
    *(long *)(lVar25 + 0xf8) = lVar21;
    func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xf0));
    func_0x000107c61574(uVar13);
    if (puVar29 == (undefined8 *)0x0) {
      uVar13 = *(undefined8 *)(lVar25 + 0xe0);
      func_0x000102ed1e70(*(undefined8 *)(lVar25 + 0xa8),0x112d453c8,&UNK_10d90ac60);
      func_0x000107c61574(uVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) goto LAB_102ec8b98;
      pcVar6 = FUN_102ec8b9c;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
LAB_102ec8b98:
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar25 = *(long *)(lVar31 + 0xf8);
        uVar32 = *(ulong *)(lVar25 + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar32 != 0) {
          uVar26 = 0;
          puVar29 = (undefined8 *)(lVar25 + 0x28);
          do {
            if (*(ulong *)(lVar25 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
              (*pcVar6)();
            }
            uVar13 = puVar29[-1];
            uVar34 = *puVar29;
            lVar23 = 0x112d38280;
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            func_0x000107c61534();
            *(undefined8 *)(lVar23 + 0x18) = 2;
            *(undefined8 *)(lVar23 + 0x10) = 1;
            *(undefined8 *)(lVar23 + 0x20) = uVar13;
            *(undefined8 *)(lVar23 + 0x28) = uVar34;
            uVar36 = *(ulong *)(puVar7 + 0x10);
            func_0x000107c61434(uVar34);
            puVar8 = puVar7;
            func_0x000107c61558();
            if (((int)puVar8 == 0) || (uVar38 = *(ulong *)(puVar7 + 0x18) >> 1, uVar38 <= uVar36)) {
              func_0x0001000d182c();
              uVar38 = *(ulong *)(puVar8 + 0x18) >> 1;
              puVar7 = puVar8;
            }
            if (uVar38 == *(ulong *)(puVar7 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
              (*pcVar6)();
            }
            uVar26 = uVar26 + 1;
            func_0x000107c6140c(puVar7 + *(ulong *)(puVar7 + 0x10) * 0x10 + 0x20,
                                (undefined8 *)(lVar23 + 0x20),1,PTR___sSSN_11034da80);
            func_0x000107c61574(lVar23);
            *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
            puVar29 = puVar29 + 2;
          } while (uVar32 != uVar26);
          lVar25 = *(long *)(lVar31 + 0xf8);
        }
        uVar13 = *(undefined8 *)(lVar31 + 0xd8);
        uVar34 = *(undefined8 *)(lVar31 + 0xa8);
        func_0x000107c6142c(lVar25);
        func_0x000107c61574(uVar13);
        func_0x000107c615c0(uVar34);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar31 + 8))(puVar7);
          return;
        }
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x0001000834e4(lVar31 + 0x40);
        func_0x000107c615c0(*(undefined8 *)(lVar31 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar31 + 8))();
          return;
        }
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar34 = *(undefined8 *)(lVar31 + 0xe0);
        uVar27 = *(undefined8 *)(lVar31 + 0xa8);
        func_0x000107c61574(*(undefined8 *)(lVar31 + 0xd8));
        uVar13 = 0x112d453c8;
        puVar7 = &UNK_10d90ac60;
        func_0x000102ed1e70(uVar27);
        func_0x000107c61574(uVar34);
        func_0x000107c615c0(*(undefined8 *)(lVar31 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar31 + 8))();
          return;
        }
        func_0x000107c60e78();
        *(undefined8 *)(lVar31 + 0x38) = uVar13;
        *(undefined **)(lVar31 + 0x40) = puVar7;
        plVar30 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c615b8();
        *(long **)(lVar31 + 0x48) = plVar30;
        *plVar30 = lVar31;
        plVar30[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
        return;
      }
      pcVar6 = FUN_102ec8db4;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 102ec834c; end: 102ec83f7;  */

void FUN_102ec834c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *****pppppuVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  long unaff_x20;
  undefined8 *****pppppuVar28;
  undefined8 *puVar29;
  long *unaff_x22;
  long lVar30;
  long *plVar31;
  undefined8 *****pppppuVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 ****ppppuVar35;
  ulong uVar36;
  undefined *puVar37;
  double dVar38;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *unaff_x22;
  lVar30 = *unaff_x22;
  *(undefined1 *)(lVar25 + 0x100) = param_1;
  *(undefined8 *)(lVar25 + 0xc0) = param_2;
  *(undefined8 *)(lVar25 + 200) = param_3;
  *(long *)(lVar25 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xb8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
      pcVar5 = FUN_102ec83f8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    pcVar5 = FUN_102ec8d4c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(lVar30 + 0x90);
  func_0x0001000834e4(lVar30 + 0x40);
  if (lVar24 == 0) {
    uVar22 = 0;
  }
  else {
    uVar26 = *(ulong *)(lVar30 + 0x80);
    puVar6 = &UNK_1105e56d0;
    func_0x000107c613fc(&UNK_1105e56d0,0x20,7);
    uVar12 = *(undefined8 *)(lVar30 + 0x90);
    *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(lVar30 + 0x98);
    *(undefined8 *)(puVar6 + 0x10) = uVar12;
    puVar7 = &UNK_1105e56f8;
    func_0x000107c613fc(&UNK_1105e56f8,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102ed2c70;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    if (uVar26 >> 0x3e == 0) {
      uVar34 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar34 = uVar26 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar26) {
        uVar34 = uVar26;
      }
      func_0x000107c60480();
    }
    uVar22 = *(ulong *)(lVar30 + 0x90);
    uVar12 = *(undefined8 *)(lVar30 + 0x98);
    if (uVar34 == 0) {
      func_0x000107c61580(puVar6,2);
      FUN_102ed2a64(uVar22,uVar12);
      puVar37 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61580(puVar6,2);
      FUN_102ed2a64(uVar22,uVar12);
      puVar37 = PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppuVar23 = (undefined8 *****)(uVar34 & ((long)uVar34 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x00010134166c(0,pppppuVar23,0);
      if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8ab8);
        (*pcVar5)();
      }
      uVar36 = 0;
      lVar24 = *(long *)(lVar30 + 0x80);
      do {
        if ((uVar26 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar26 & 0xffffffffffffff8) + 0x10) <= (long)uVar36) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a9c);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(lVar24 + 0x20 + uVar36 * 8);
          func_0x000107c61174();
        }
        else {
          pppppuVar23 = *(undefined8 ******)(lVar30 + 0x80);
          uVar8 = uVar36;
          FUN_102ed12e4(uVar36,pppppuVar23,&PTR_PTR_1126ac780,0x112f279a0);
        }
        uVar22 = uVar8;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar9 = uVar22;
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar10 = uVar9;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar9);
        puVar11 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar9 = uVar10;
        func_0x000107c5ee20(uVar10,pppppuVar23);
        *(undefined8 *)(lVar30 + 0x78) = 0;
        func_0x000107c4636c();
        func_0x000107c61170(uVar9);
        uVar12 = *(undefined8 *)(lVar30 + 0x78);
        if (puVar11 == (undefined *)0x0) {
          uVar33 = uVar12;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(uVar33);
          func_0x000107c61654();
          func_0x000107c614ac(uVar12);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar22);
          func_0x00010006c090();
          dVar38 = 0.0;
          uVar22 = uVar10;
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar10);
          puVar13 = puVar11;
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8ac0);
            (*pcVar5)();
          }
          puVar14 = puVar13;
          func_0x000107c4e928();
          func_0x000107c61180();
          func_0x000107c61170(puVar13);
          if (puVar14 == (undefined *)0x0) {
            func_0x000107c61170(puVar11);
            func_0x000107c61170(uVar8);
            func_0x000107c61170();
            dVar38 = 0.0;
          }
          else {
            ppppuStack_a8 = (undefined8 *****)0x0;
            uVar12 = 0;
            func_0x000102ed2cc4(0,0x112d55598,&PTR_PTR_1126b25d0);
            pppppuVar23 = &ppppuStack_a8;
            func_0x000107c5fc50(puVar14,pppppuVar23,uVar12);
            func_0x000107c61170(puVar14);
            ppppuVar4 = ppppuStack_a8;
            if ((undefined8 *****)ppppuStack_a8 == (undefined8 *****)0x0) {
              func_0x000107c61170(puVar11);
              func_0x000107c61170(uVar8);
              func_0x000107c61170();
              dVar38 = 0.0;
            }
            else {
              pppppuVar28 = (undefined8 *****)((ulong)ppppuStack_a8 & 0xffffffffffffff8);
              if ((ulong)ppppuStack_a8 >> 0x3e == 0) {
                pppppuVar32 = (undefined8 *****)pppppuVar28[2];
                if (pppppuVar32 != (undefined8 *****)0x0) goto LAB_102ec867c;
LAB_102ec881c:
                dVar38 = 0.0;
              }
              else {
                pppppuVar32 = (undefined8 *****)ppppuStack_a8;
                if (-1 < (long)ppppuStack_a8) {
                  pppppuVar32 = pppppuVar28;
                }
                func_0x000107c60480();
                if (pppppuVar32 == (undefined8 *****)0x0) goto LAB_102ec881c;
LAB_102ec867c:
                ppppuVar35 = (undefined8 ****)0x0;
                dVar38 = 0.0;
                do {
                  if (((ulong)ppppuVar4 & 0xc000000000000001) == 0) {
                    if (pppppuVar28[2] <= ppppuVar35) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a98);
                      (*pcVar5)();
                    }
                    ppppuVar15 = (undefined8 ****)ppppuVar4[(long)ppppuVar35 + 4];
                    func_0x000107c61174();
                  }
                  else {
                    ppppuVar15 = ppppuVar35;
                    pppppuVar23 = (undefined8 *****)ppppuVar4;
                    FUN_102ed12e4(ppppuVar35,ppppuVar4,&PTR_PTR_1126b25d0,0x112d55598);
                  }
                  pppppuVar1 = (undefined8 *****)((long)ppppuVar35 + 1);
                  if (SCARRY8((long)ppppuVar35,1)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a94);
                    (*pcVar5)();
                  }
                  ppppuVar16 = ppppuVar15;
                  func_0x000107c4f4ec();
                  func_0x000107c61180();
                  if (ppppuVar16 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8abc);
                    (*pcVar5)();
                  }
                  ppppuVar17 = ppppuVar16;
                  func_0x000107c44430();
                  func_0x000107c61180();
                  func_0x000107c61170(ppppuVar16);
                  if (ppppuVar17 == (undefined8 ****)0x0) {
                    func_0x000107c61170(ppppuVar15);
                  }
                  else {
                    ppppuVar16 = ppppuVar17;
                    func_0x000107c5bbe8();
                    ppppuVar18 = ppppuVar17;
                    func_0x000107c42378();
                    func_0x000107c61170(ppppuVar17);
                    func_0x000107c61170(ppppuVar15);
                    if (dVar38 <= (double)ppppuVar16 + (double)ppppuVar18) {
                      dVar38 = (double)ppppuVar16 + (double)ppppuVar18;
                    }
                  }
                  ppppuVar35 = (undefined8 ****)((long)ppppuVar35 + 1);
                } while (pppppuVar1 != pppppuVar32);
              }
              func_0x000107c61170(uVar8);
              func_0x000107c61170(puVar11);
              func_0x000107c6142c(ppppuVar4);
              func_0x000107c61170();
            }
          }
        }
        uVar8 = *(ulong *)(puVar37 + 0x10);
        pppppuVar28 = (undefined8 *****)(uVar8 + 1);
        if (*(ulong *)(puVar37 + 0x18) >> 1 <= uVar8) {
          uVar22 = (ulong)(1 < *(ulong *)(puVar37 + 0x18));
          pppppuVar23 = pppppuVar28;
          func_0x00010134166c(uVar22,pppppuVar28,1);
        }
        uVar36 = uVar36 + 1;
        *(undefined8 ******)(puVar37 + 0x10) = pppppuVar28;
        *(double *)(puVar37 + uVar8 * 8 + 0x20) = dVar38;
      } while (uVar36 != uVar34);
    }
    func_0x000102ed0960();
    func_0x000107c613fc();
    FUN_102ed04f8(puVar37,0x102ed2c94,puVar7);
    func_0x000107c61578(puVar6,2);
  }
  *(ulong *)(lVar30 + 0xd8) = uVar22;
  uVar12 = *(undefined8 *)(lVar30 + 0xc0);
  uVar27 = *(undefined8 *)(lVar30 + 200);
  uVar3 = *(undefined1 *)(lVar30 + 0x100);
  uVar33 = *(undefined8 *)(lVar30 + 0xa0);
  uVar2 = *(undefined8 *)(lVar30 + 0xa8);
  uVar19 = *(undefined8 *)(lVar30 + 0x80);
  FUN_102ed1a68();
  *(undefined8 *)(lVar30 + 0xe0) = uVar19;
  puVar29 = (undefined8 *)(lVar30 + 0x68);
  *puVar29 = uVar19;
  func_0x000107c5fcf4(uVar2);
  lVar24 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar24 + -8) + 0x38))(uVar2,0,1,lVar24);
  puVar6 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,uVar33);
  puVar7 = &UNK_1105e56a8;
  func_0x000107c613fc(&UNK_1105e56a8,0x38,7);
  *(undefined **)(lVar30 + 0xe8) = puVar7;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(ulong *)(puVar7 + 0x18) = uVar22;
  puVar7[0x20] = uVar3;
  *(undefined8 *)(puVar7 + 0x28) = uVar12;
  *(undefined8 *)(puVar7 + 0x30) = uVar27;
  plVar31 = (long *)0xe0;
  func_0x000107c6157c(uVar22);
  func_0x000107c615b8();
  *(long **)(lVar30 + 0xf0) = plVar31;
  lVar24 = 0x112f279b0;
  func_0x0001000285a8(0x112f279b0,&UNK_10db63280);
  lVar25 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar20 = 0x112f279b8;
  func_0x000102ed2c2c(0x112f279b8,0x112f279b0,&UNK_10db63280,PTR___sSayxGSTsMc_11034dd08);
  *plVar31 = lVar30;
  plVar31[1] = (long)FUN_102ec8ac4;
  puVar6 = PTR___ss5ErrorWS_11034ee10;
  lVar21 = *(long *)(lVar30 + 0xa8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    plVar31[0x16] = (long)puVar29;
    plVar31[0x17] = lVar30 + 0x70;
    plVar31[0x14] = lVar20;
    plVar31[0x15] = (long)puVar6;
    plVar31[0x12] = (long)&UNK_1105e4ff0;
    plVar31[0x13] = lVar25;
    plVar31[0x10] = (long)puVar7;
    plVar31[0x11] = lVar24;
    plVar31[0xe] = lVar21;
    plVar31[0xf] = (long)&UNK_10db63278;
    lVar24 = *(long *)(lVar25 + -8);
    plVar31[0x18] = lVar24;
    uVar22 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar31[0x19] = uVar22;
    pcVar5 = (code *)&UNK_10488ea3c;
  }
  else {
    func_0x000107c60e78();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar25 = *plVar31;
    uVar12 = *(undefined8 *)(lVar25 + 0xe8);
    lVar30 = *plVar31;
    *(long *)(lVar25 + 0xf8) = lVar21;
    func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xf0));
    func_0x000107c61574(uVar12);
    if (puVar29 == (undefined8 *)0x0) {
      uVar12 = *(undefined8 *)(lVar25 + 0xe0);
      func_0x000102ed1e70(*(undefined8 *)(lVar25 + 0xa8),0x112d453c8,&UNK_10d90ac60);
      func_0x000107c61574(uVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) goto LAB_102ec8b98;
      pcVar5 = FUN_102ec8b9c;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
LAB_102ec8b98:
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar25 = *(long *)(lVar30 + 0xf8);
        uVar22 = *(ulong *)(lVar25 + 0x10);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar22 != 0) {
          uVar26 = 0;
          puVar29 = (undefined8 *)(lVar25 + 0x28);
          do {
            if (*(ulong *)(lVar25 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
              (*pcVar5)();
            }
            uVar12 = puVar29[-1];
            uVar33 = *puVar29;
            lVar20 = 0x112d38280;
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            func_0x000107c61534();
            *(undefined8 *)(lVar20 + 0x18) = 2;
            *(undefined8 *)(lVar20 + 0x10) = 1;
            *(undefined8 *)(lVar20 + 0x20) = uVar12;
            *(undefined8 *)(lVar20 + 0x28) = uVar33;
            uVar34 = *(ulong *)(puVar6 + 0x10);
            func_0x000107c61434(uVar33);
            puVar7 = puVar6;
            func_0x000107c61558();
            if (((int)puVar7 == 0) || (uVar36 = *(ulong *)(puVar6 + 0x18) >> 1, uVar36 <= uVar34)) {
              func_0x0001000d182c();
              uVar36 = *(ulong *)(puVar7 + 0x18) >> 1;
              puVar6 = puVar7;
            }
            if (uVar36 == *(ulong *)(puVar6 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
              (*pcVar5)();
            }
            uVar26 = uVar26 + 1;
            func_0x000107c6140c(puVar6 + *(ulong *)(puVar6 + 0x10) * 0x10 + 0x20,
                                (undefined8 *)(lVar20 + 0x20),1,PTR___sSSN_11034da80);
            func_0x000107c61574(lVar20);
            *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
            puVar29 = puVar29 + 2;
          } while (uVar22 != uVar26);
          lVar25 = *(long *)(lVar30 + 0xf8);
        }
        uVar12 = *(undefined8 *)(lVar30 + 0xd8);
        uVar33 = *(undefined8 *)(lVar30 + 0xa8);
        func_0x000107c6142c(lVar25);
        func_0x000107c61574(uVar12);
        func_0x000107c615c0(uVar33);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))(puVar6);
          return;
        }
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x0001000834e4(lVar30 + 0x40);
        func_0x000107c615c0(*(undefined8 *)(lVar30 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))();
          return;
        }
        func_0x000107c60e78();
        lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar33 = *(undefined8 *)(lVar30 + 0xe0);
        uVar27 = *(undefined8 *)(lVar30 + 0xa8);
        func_0x000107c61574(*(undefined8 *)(lVar30 + 0xd8));
        uVar12 = 0x112d453c8;
        puVar6 = &UNK_10d90ac60;
        func_0x000102ed1e70(uVar27);
        func_0x000107c61574(uVar33);
        func_0x000107c615c0(*(undefined8 *)(lVar30 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))();
          return;
        }
        func_0x000107c60e78();
        *(undefined8 *)(lVar30 + 0x38) = uVar12;
        *(undefined **)(lVar30 + 0x40) = puVar6;
        plVar31 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c615b8();
        *(long **)(lVar30 + 0x48) = plVar31;
        *plVar31 = lVar30;
        plVar31[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
        return;
      }
      pcVar5 = FUN_102ec8db4;
    }
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 102ec83f8; end: 102ec8ac3;  */

void FUN_102ec83f8(void)

{
  undefined8 *****pppppuVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *****pppppuVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  undefined8 *puVar27;
  long lVar28;
  long unaff_x22;
  long *plVar29;
  long lVar30;
  undefined8 *****pppppuVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 ****ppppuVar34;
  ulong uVar35;
  undefined *puVar36;
  double dVar37;
  undefined8 ****ppppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x40);
  if (lVar25 == 0) {
    uVar21 = 0;
  }
  else {
    uVar23 = *(ulong *)(unaff_x22 + 0x80);
    puVar6 = &UNK_1105e56d0;
    func_0x000107c613fc(&UNK_1105e56d0,0x20,7);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(puVar6 + 0x10) = uVar12;
    puVar7 = &UNK_1105e56f8;
    func_0x000107c613fc(&UNK_1105e56f8,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102ed2c70;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    if (uVar23 >> 0x3e == 0) {
      uVar33 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar33 = uVar23 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar23) {
        uVar33 = uVar23;
      }
      func_0x000107c60480();
    }
    uVar21 = *(ulong *)(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
    if (uVar33 == 0) {
      func_0x000107c61580(puVar6,2);
      FUN_102ed2a64(uVar21,uVar12);
      puVar36 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61580(puVar6,2);
      FUN_102ed2a64(uVar21,uVar12);
      puVar36 = PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppuVar22 = (undefined8 *****)(uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x00010134166c(0,pppppuVar22,0);
      if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8ab8);
        (*pcVar5)();
      }
      uVar35 = 0;
      lVar25 = *(long *)(unaff_x22 + 0x80);
      do {
        if ((uVar23 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar23 & 0xffffffffffffff8) + 0x10) <= (long)uVar35) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a9c);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(lVar25 + 0x20 + uVar35 * 8);
          func_0x000107c61174();
        }
        else {
          pppppuVar22 = *(undefined8 ******)(unaff_x22 + 0x80);
          uVar8 = uVar35;
          FUN_102ed12e4(uVar35,pppppuVar22,&PTR_PTR_1126ac780,0x112f279a0);
        }
        uVar21 = uVar8;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar9 = uVar21;
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar10 = uVar9;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar9);
        puVar11 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar9 = uVar10;
        func_0x000107c5ee20(uVar10,pppppuVar22);
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        func_0x000107c4636c();
        func_0x000107c61170(uVar9);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
        if (puVar11 == (undefined *)0x0) {
          uVar32 = uVar12;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(uVar32);
          func_0x000107c61654();
          func_0x000107c614ac(uVar12);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar21);
          func_0x00010006c090();
          dVar37 = 0.0;
          uVar21 = uVar10;
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar10);
          puVar13 = puVar11;
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8ac0);
            (*pcVar5)();
          }
          puVar14 = puVar13;
          func_0x000107c4e928();
          func_0x000107c61180();
          func_0x000107c61170(puVar13);
          if (puVar14 == (undefined *)0x0) {
            func_0x000107c61170(puVar11);
            func_0x000107c61170(uVar8);
            func_0x000107c61170();
            dVar37 = 0.0;
          }
          else {
            ppppuStack_88 = (undefined8 *****)0x0;
            uVar12 = 0;
            func_0x000102ed2cc4(0,0x112d55598,&PTR_PTR_1126b25d0);
            pppppuVar22 = &ppppuStack_88;
            func_0x000107c5fc50(puVar14,pppppuVar22,uVar12);
            func_0x000107c61170(puVar14);
            ppppuVar4 = ppppuStack_88;
            if ((undefined8 *****)ppppuStack_88 == (undefined8 *****)0x0) {
              func_0x000107c61170(puVar11);
              func_0x000107c61170(uVar8);
              func_0x000107c61170();
              dVar37 = 0.0;
            }
            else {
              pppppuVar26 = (undefined8 *****)((ulong)ppppuStack_88 & 0xffffffffffffff8);
              if ((ulong)ppppuStack_88 >> 0x3e == 0) {
                pppppuVar31 = (undefined8 *****)pppppuVar26[2];
                if (pppppuVar31 != (undefined8 *****)0x0) goto LAB_102ec867c;
LAB_102ec881c:
                dVar37 = 0.0;
              }
              else {
                pppppuVar31 = (undefined8 *****)ppppuStack_88;
                if (-1 < (long)ppppuStack_88) {
                  pppppuVar31 = pppppuVar26;
                }
                func_0x000107c60480();
                if (pppppuVar31 == (undefined8 *****)0x0) goto LAB_102ec881c;
LAB_102ec867c:
                ppppuVar34 = (undefined8 ****)0x0;
                dVar37 = 0.0;
                do {
                  if (((ulong)ppppuVar4 & 0xc000000000000001) == 0) {
                    if (pppppuVar26[2] <= ppppuVar34) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a98);
                      (*pcVar5)();
                    }
                    ppppuVar15 = (undefined8 ****)ppppuVar4[(long)ppppuVar34 + 4];
                    func_0x000107c61174();
                  }
                  else {
                    ppppuVar15 = ppppuVar34;
                    pppppuVar22 = (undefined8 *****)ppppuVar4;
                    FUN_102ed12e4(ppppuVar34,ppppuVar4,&PTR_PTR_1126b25d0,0x112d55598);
                  }
                  pppppuVar1 = (undefined8 *****)((long)ppppuVar34 + 1);
                  if (SCARRY8((long)ppppuVar34,1)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8a94);
                    (*pcVar5)();
                  }
                  ppppuVar16 = ppppuVar15;
                  func_0x000107c4f4ec();
                  func_0x000107c61180();
                  if (ppppuVar16 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8abc);
                    (*pcVar5)();
                  }
                  ppppuVar17 = ppppuVar16;
                  func_0x000107c44430();
                  func_0x000107c61180();
                  func_0x000107c61170(ppppuVar16);
                  if (ppppuVar17 == (undefined8 ****)0x0) {
                    func_0x000107c61170(ppppuVar15);
                  }
                  else {
                    ppppuVar16 = ppppuVar17;
                    func_0x000107c5bbe8();
                    ppppuVar18 = ppppuVar17;
                    func_0x000107c42378();
                    func_0x000107c61170(ppppuVar17);
                    func_0x000107c61170(ppppuVar15);
                    if (dVar37 <= (double)ppppuVar16 + (double)ppppuVar18) {
                      dVar37 = (double)ppppuVar16 + (double)ppppuVar18;
                    }
                  }
                  ppppuVar34 = (undefined8 ****)((long)ppppuVar34 + 1);
                } while (pppppuVar1 != pppppuVar31);
              }
              func_0x000107c61170(uVar8);
              func_0x000107c61170(puVar11);
              func_0x000107c6142c(ppppuVar4);
              func_0x000107c61170();
            }
          }
        }
        uVar8 = *(ulong *)(puVar36 + 0x10);
        pppppuVar26 = (undefined8 *****)(uVar8 + 1);
        if (*(ulong *)(puVar36 + 0x18) >> 1 <= uVar8) {
          uVar21 = (ulong)(1 < *(ulong *)(puVar36 + 0x18));
          pppppuVar22 = pppppuVar26;
          func_0x00010134166c(uVar21,pppppuVar26,1);
        }
        uVar35 = uVar35 + 1;
        *(undefined8 ******)(puVar36 + 0x10) = pppppuVar26;
        *(double *)(puVar36 + uVar8 * 8 + 0x20) = dVar37;
      } while (uVar35 != uVar33);
    }
    func_0x000102ed0960();
    func_0x000107c613fc();
    FUN_102ed04f8(puVar36,0x102ed2c94,puVar7);
    func_0x000107c61578(puVar6,2);
  }
  *(ulong *)(unaff_x22 + 0xd8) = uVar21;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar24 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x100);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_102ed1a68();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar19;
  puVar27 = (undefined8 *)(unaff_x22 + 0x68);
  *puVar27 = uVar19;
  func_0x000107c5fcf4(uVar2);
  lVar25 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar25 + -8) + 0x38))(uVar2,0,1,lVar25);
  puVar6 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,uVar32);
  puVar7 = &UNK_1105e56a8;
  func_0x000107c613fc(&UNK_1105e56a8,0x38,7);
  *(undefined **)(unaff_x22 + 0xe8) = puVar7;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(ulong *)(puVar7 + 0x18) = uVar21;
  puVar7[0x20] = uVar3;
  *(undefined8 *)(puVar7 + 0x28) = uVar12;
  *(undefined8 *)(puVar7 + 0x30) = uVar24;
  plVar29 = (long *)0xe0;
  func_0x000107c6157c(uVar21);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar29;
  lVar25 = 0x112f279b0;
  func_0x0001000285a8(0x112f279b0,&UNK_10db63280);
  lVar28 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar30 = 0x112f279b8;
  func_0x000102ed2c2c(0x112f279b8,0x112f279b0,&UNK_10db63280,PTR___sSayxGSTsMc_11034dd08);
  *plVar29 = unaff_x22;
  plVar29[1] = (long)FUN_102ec8ac4;
  puVar6 = PTR___ss5ErrorWS_11034ee10;
  lVar20 = *(long *)(unaff_x22 + 0xa8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    plVar29[0x16] = (long)puVar27;
    plVar29[0x17] = unaff_x22 + 0x70;
    plVar29[0x14] = lVar30;
    plVar29[0x15] = (long)puVar6;
    plVar29[0x12] = (long)&UNK_1105e4ff0;
    plVar29[0x13] = lVar28;
    plVar29[0x10] = (long)puVar7;
    plVar29[0x11] = lVar25;
    plVar29[0xe] = lVar20;
    plVar29[0xf] = (long)&UNK_10db63278;
    lVar25 = *(long *)(lVar28 + -8);
    plVar29[0x18] = lVar25;
    uVar21 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar29[0x19] = uVar21;
    pcVar5 = (code *)&UNK_10488ea3c;
  }
  else {
    func_0x000107c60e78();
    lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar28 = *plVar29;
    uVar12 = *(undefined8 *)(lVar28 + 0xe8);
    lVar30 = *plVar29;
    *(long *)(lVar28 + 0xf8) = lVar20;
    func_0x000107c615c0(*(undefined8 *)(lVar28 + 0xf0));
    func_0x000107c61574(uVar12);
    if (puVar27 == (undefined8 *)0x0) {
      uVar12 = *(undefined8 *)(lVar28 + 0xe0);
      func_0x000102ed1e70(*(undefined8 *)(lVar28 + 0xa8),0x112d453c8,&UNK_10d90ac60);
      func_0x000107c61574(uVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar25) goto LAB_102ec8b98;
      pcVar5 = FUN_102ec8b9c;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar25) {
LAB_102ec8b98:
        func_0x000107c60e78();
        lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar28 = *(long *)(lVar30 + 0xf8);
        uVar21 = *(ulong *)(lVar28 + 0x10);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar21 != 0) {
          uVar23 = 0;
          puVar27 = (undefined8 *)(lVar28 + 0x28);
          do {
            if (*(ulong *)(lVar28 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
              (*pcVar5)();
            }
            uVar12 = puVar27[-1];
            uVar32 = *puVar27;
            lVar20 = 0x112d38280;
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            func_0x000107c61534();
            *(undefined8 *)(lVar20 + 0x18) = 2;
            *(undefined8 *)(lVar20 + 0x10) = 1;
            *(undefined8 *)(lVar20 + 0x20) = uVar12;
            *(undefined8 *)(lVar20 + 0x28) = uVar32;
            uVar33 = *(ulong *)(puVar6 + 0x10);
            func_0x000107c61434(uVar32);
            puVar7 = puVar6;
            func_0x000107c61558();
            if (((int)puVar7 == 0) || (uVar35 = *(ulong *)(puVar6 + 0x18) >> 1, uVar35 <= uVar33)) {
              func_0x0001000d182c();
              uVar35 = *(ulong *)(puVar7 + 0x18) >> 1;
              puVar6 = puVar7;
            }
            if (uVar35 == *(ulong *)(puVar6 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
              (*pcVar5)();
            }
            uVar23 = uVar23 + 1;
            func_0x000107c6140c(puVar6 + *(ulong *)(puVar6 + 0x10) * 0x10 + 0x20,
                                (undefined8 *)(lVar20 + 0x20),1,PTR___sSSN_11034da80);
            func_0x000107c61574(lVar20);
            *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
            puVar27 = puVar27 + 2;
          } while (uVar21 != uVar23);
          lVar28 = *(long *)(lVar30 + 0xf8);
        }
        uVar12 = *(undefined8 *)(lVar30 + 0xd8);
        uVar32 = *(undefined8 *)(lVar30 + 0xa8);
        func_0x000107c6142c(lVar28);
        func_0x000107c61574(uVar12);
        func_0x000107c615c0(uVar32);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))(puVar6);
          return;
        }
        func_0x000107c60e78();
        lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x0001000834e4(lVar30 + 0x40);
        func_0x000107c615c0(*(undefined8 *)(lVar30 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))();
          return;
        }
        func_0x000107c60e78();
        lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar32 = *(undefined8 *)(lVar30 + 0xe0);
        uVar24 = *(undefined8 *)(lVar30 + 0xa8);
        func_0x000107c61574(*(undefined8 *)(lVar30 + 0xd8));
        uVar12 = 0x112d453c8;
        puVar6 = &UNK_10d90ac60;
        func_0x000102ed1e70(uVar24);
        func_0x000107c61574(uVar32);
        func_0x000107c615c0(*(undefined8 *)(lVar30 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar30 + 8))();
          return;
        }
        func_0x000107c60e78();
        *(undefined8 *)(lVar30 + 0x38) = uVar12;
        *(undefined **)(lVar30 + 0x40) = puVar6;
        plVar29 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c615b8();
        *(long **)(lVar30 + 0x48) = plVar29;
        *plVar29 = lVar30;
        plVar29[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
        return;
      }
      pcVar5 = FUN_102ec8db4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 102ec8ac4; end: 102ec8b9b;  */

void FUN_102ec8ac4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x22;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  uVar11 = *(undefined8 *)(lVar9 + 0xe8);
  lVar12 = *unaff_x22;
  *(undefined8 *)(lVar9 + 0xf8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xf0));
  func_0x000107c61574(uVar11);
  if (unaff_x20 == 0) {
    uVar11 = *(undefined8 *)(lVar9 + 0xe0);
    func_0x000102ed1e70(*(undefined8 *)(lVar9 + 0xa8),0x112d453c8,&UNK_10d90ac60);
    func_0x000107c61574(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) goto LAB_102ec8b98;
    pcVar1 = FUN_102ec8b9c;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
LAB_102ec8b98:
      func_0x000107c60e78();
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar9 = *(long *)(lVar12 + 0xf8);
      uVar16 = *(ulong *)(lVar9 + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar16 != 0) {
        uVar10 = 0;
        puVar13 = (undefined8 *)(lVar9 + 0x28);
        do {
          if (*(ulong *)(lVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
            (*pcVar1)();
          }
          uVar11 = puVar13[-1];
          uVar14 = *puVar13;
          lVar2 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61534();
          *(undefined8 *)(lVar2 + 0x18) = 2;
          *(undefined8 *)(lVar2 + 0x10) = 1;
          *(undefined8 *)(lVar2 + 0x20) = uVar11;
          *(undefined8 *)(lVar2 + 0x28) = uVar14;
          uVar15 = *(ulong *)(puVar5 + 0x10);
          func_0x000107c61434(uVar14);
          puVar3 = puVar5;
          func_0x000107c61558();
          if (((int)puVar3 == 0) || (uVar7 = *(ulong *)(puVar5 + 0x18) >> 1, uVar7 <= uVar15)) {
            func_0x0001000d182c();
            uVar7 = *(ulong *)(puVar3 + 0x18) >> 1;
            puVar5 = puVar3;
          }
          if (uVar7 == *(ulong *)(puVar5 + 0x10)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
            (*pcVar1)();
          }
          uVar10 = uVar10 + 1;
          func_0x000107c6140c(puVar5 + *(ulong *)(puVar5 + 0x10) * 0x10 + 0x20,
                              (undefined8 *)(lVar2 + 0x20),1,PTR___sSSN_11034da80);
          func_0x000107c61574(lVar2);
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          puVar13 = puVar13 + 2;
        } while (uVar16 != uVar10);
        lVar9 = *(long *)(lVar12 + 0xf8);
      }
      uVar11 = *(undefined8 *)(lVar12 + 0xd8);
      uVar14 = *(undefined8 *)(lVar12 + 0xa8);
      func_0x000107c6142c(lVar9);
      func_0x000107c61574(uVar11);
      func_0x000107c615c0(uVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 8))(puVar5);
        return;
      }
      func_0x000107c60e78();
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x0001000834e4(lVar12 + 0x40);
      func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xa8));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
        func_0x000107c60e78();
        lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar14 = *(undefined8 *)(lVar12 + 0xe0);
        uVar8 = *(undefined8 *)(lVar12 + 0xa8);
        func_0x000107c61574(*(undefined8 *)(lVar12 + 0xd8));
        uVar11 = 0x112d453c8;
        puVar5 = &UNK_10d90ac60;
        func_0x000102ed1e70(uVar8);
        func_0x000107c61574(uVar14);
        func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xa8));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
          func_0x000107c60e78();
          *(undefined8 *)(lVar12 + 0x38) = uVar11;
          *(undefined **)(lVar12 + 0x40) = puVar5;
          plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
          func_0x000107c615b8();
          *(long **)(lVar12 + 0x48) = plVar4;
          *plVar4 = lVar12;
          plVar4[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 8))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar12 + 8))();
      return;
    }
    pcVar1 = FUN_102ec8db4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec8b9c; end: 102ec8d4b;  */

void FUN_102ec8b9c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(unaff_x22 + 0xf8);
  uVar15 = *(ulong *)(lVar8 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar10 = 0;
    puVar12 = (undefined8 *)(lVar8 + 0x28);
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec8d44);
        (*pcVar1)();
      }
      uVar11 = puVar12[-1];
      uVar13 = *puVar12;
      lVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 *)(lVar2 + 0x20) = uVar11;
      *(undefined8 *)(lVar2 + 0x28) = uVar13;
      uVar14 = *(ulong *)(puVar5 + 0x10);
      func_0x000107c61434(uVar13);
      puVar3 = puVar5;
      func_0x000107c61558();
      if (((int)puVar3 == 0) || (uVar7 = *(ulong *)(puVar5 + 0x18) >> 1, uVar7 <= uVar14)) {
        func_0x0001000d182c();
        uVar7 = *(ulong *)(puVar3 + 0x18) >> 1;
        puVar5 = puVar3;
      }
      if (uVar7 == *(ulong *)(puVar5 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec8d48);
        (*pcVar1)();
      }
      uVar10 = uVar10 + 1;
      func_0x000107c6140c(puVar5 + *(ulong *)(puVar5 + 0x10) * 0x10 + 0x20,
                          (undefined8 *)(lVar2 + 0x20),1,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar2);
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar12 = puVar12 + 2;
    } while (uVar15 != uVar10);
    lVar8 = *(long *)(unaff_x22 + 0xf8);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c6142c(lVar8);
  func_0x000107c61574(uVar11);
  func_0x000107c615c0(uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar5);
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    func_0x000107c60e78();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
    uVar11 = 0x112d453c8;
    puVar5 = &UNK_10d90ac60;
    func_0x000102ed1e70(uVar9);
    func_0x000107c61574(uVar13);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      func_0x000107c60e78();
      *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
      *(undefined **)(unaff_x22 + 0x40) = puVar5;
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x48) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec8d4c; end: 102ec8db3;  */

void FUN_102ec8d4c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar3 = 0x112d453c8;
  puVar4 = &UNK_10d90ac60;
  func_0x000102ed1e70(uVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  *(undefined **)(unaff_x22 + 0x40) = puVar4;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ec8db4; end: 102ec8e47;  */

void FUN_102ec8db4(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar3 = 0x112d453c8;
  puVar4 = &UNK_10d90ac60;
  func_0x000102ed1e70(uVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102ec8e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  *(undefined **)(unaff_x22 + 0x40) = puVar4;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ec8e48; end: 102ec8eef;  */

void FUN_102ec8e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ec8ef0; end: 102ec8fc3;  */

void FUN_102ec8ef0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x28);
    do {
      uVar3 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar4);
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
      (**(code **)(lVar2 + 0x40))(uVar3,uVar4,0,0,0x54,uVar1,lVar2);
      func_0x000107c61574();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x0001000834e4(unaff_x22 + 0x10);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec8fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec8fc4; end: 102ec91cf;  */

/* WARNING: Removing unreachable block (ram,0x000102ec90fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec8fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105e5540;
  func_0x000107c613fc(&UNK_1105e5540,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  func_0x000107c6157c(param_5);
  func_0x000107c61174();
  func_0x000107c6157c(param_3);
  puVar1 = PTR___sytN_11034f1b0;
  uVar4 = 0;
  func_0x0001001ca524(0,0,0x54,2,0,0,&UNK_10db63218,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f27750);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  pcVar5 = "exportCameraRoll(with:onComplete:onError:)";
  (**(code **)(lStack_58 + 0x38))
            (param_1,"exportCameraRoll(with:onComplete:onError:)",0x2a,0x2000000000000002,0xf4,
             uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  puVar2 = &UNK_1105e5568;
  func_0x000107c613fc(&UNK_1105e5568,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(char **)(puVar2 + 0x18) = pcVar5;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  func_0x000107c6157c(uVar6);
  FUN_102ed287c(param_1,pcVar5);
  func_0x000107c6157c(uVar4);
  uVar6 = 0;
  func_0x0001001ca524(0,0,0x54,0,0,0,&UNK_10db63228,puVar2,puVar1 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar6);
  func_0x000102ed28a8(param_1,pcVar5);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102ec91d0; end: 102ec91ef;  */

void FUN_102ec91d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec91f0,0,0);
  return;
}



/* Entry: 102ec91f0; end: 102ec942b;  */

/* WARNING: Removing unreachable block (ram,0x000102ec9328) */
/* WARNING: Removing unreachable block (ram,0x000102ec9370) */
/* WARNING: Removing unreachable block (ram,0x000102ec9388) */
/* WARNING: Removing unreachable block (ram,0x000102ec93ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec91f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x88);
  lVar5 = unaff_x22 + 0x38;
  func_0x000107c61428(lVar6 + 0x10,lVar5,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xb8) = lVar6;
  if (lVar6 != 0) {
    *(undefined8 *)(unaff_x22 + 0xc0) = _DAT_112f27770;
    func_0x0001000d224c(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x68);
    *(long *)(unaff_x22 + 200) = lVar7;
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    else {
      lVar5 = -0x7ffffffef0eec4f0;
      uVar1 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f113b10);
      lVar9 = lVar7;
      func_0x000107c3e764();
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lVar7);
    }
    *(long *)(unaff_x22 + 0xd0) = lVar9;
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c3eea8();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    uVar2 = uVar1;
    func_0x0001010282b0(uVar1,lVar5);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
    func_0x00010006c090(uVar1,lVar5);
    plVar8 = *(long **)(lVar6 + _DAT_112f27728);
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ec942c;
    plVar3[5] = unaff_x22 + 0x10;
    plVar3[6] = (long)plVar8;
    lVar6 = *(long *)(*plVar8 + 0x50);
    plVar3[7] = lVar6;
    lVar5 = 0;
    __sSqMa(0,lVar6);
    plVar3[8] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar3[9] = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[10] = uVar4;
    lVar5 = *(long *)(lVar6 + -8);
    plVar3[0xb] = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  (**(code **)(unaff_x22 + 0x90))(0xd000000000000022,0x800000010f113ae0);
                    /* WARNING: Could not recover jumptable at 0x000102ec93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec942c; end: 102ec9473;  */

void FUN_102ec942c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec9474,0,0);
  return;
}



/* Entry: 102ec9474; end: 102ec94f3;  */

void FUN_102ec9474(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ec94f4;
                    /* WARNING: Could not recover jumptable at 0x000102ec94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xd8),uVar2,lVar3);
  return;
}



/* Entry: 102ec94f4; end: 102ec954f;  */

void FUN_102ec94f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec9550;
  }
  else {
    pcVar1 = FUN_102ec95e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec9550; end: 102ec95e3;  */

void FUN_102ec9550(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 200);
  pcVar1 = *(code **)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x0001000834e4(unaff_x22 + 0x10);
  (*pcVar1)();
  if (lVar2 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c427f4(lVar2,param_2,*(undefined8 *)(unaff_x22 + 0xd0));
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar2);
      goto LAB_102ec95cc;
    }
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
LAB_102ec95cc:
                    /* WARNING: Could not recover jumptable at 0x000102ec95e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec95e4; end: 102ec96b7;  */

void FUN_102ec95e4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar4 = *(long *)(unaff_x22 + 200);
  pcVar1 = *(code **)(unaff_x22 + 0x90);
  func_0x000107c614cc(uVar3,unaff_x22 + 0x70,unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x58),uVar2);
  (*pcVar1)();
  func_0x000107c6142c(uVar2);
  func_0x000107c614ac(uVar3);
  if (lVar4 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x78);
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c427f4(lVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar4);
      goto LAB_102ec969c;
    }
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
LAB_102ec969c:
                    /* WARNING: Could not recover jumptable at 0x000102ec96b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec96b8; end: 102ec9763;  */

void FUN_102ec96b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ec971c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ec9764; end: 102ec9817;  */

void FUN_102ec9764(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar2 + 0x40))(lVar3,uVar4,0,0,0x54,uVar1,lVar2);
    func_0x000107c61574();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec9814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec9818; end: 102ec98ef; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl exportCameraRollWithSnapDoc:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000102ec98d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec98d8) */

void FUN_102ec9818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1105e54c8;
  func_0x000107c613fc(&UNK_1105e54c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1105e54f0;
  func_0x000107c613fc(&UNK_1105e54f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102ec8fc4(param_3,0x102ed3368,puVar1,0x102ed3384,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ec98f0; end: 102ec9b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec98f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112f27760);
    func_0x000107c615f0(param_4);
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar2 = lVar5;
    func_0x000107c3ff98();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    lVar5 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x000107c4e864();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar2 != 0) {
        lVar5 = lVar2;
        func_0x000107c4d06c(lVar2);
        func_0x000107c61180();
        func_0x000107c615e8(param_4);
        func_0x000107c615e8(lVar2);
        func_0x0001000d224c(&puStack_90);
        puVar1 = puStack_90;
        if (puStack_90 != (undefined *)0x0) {
          func_0x000107c5fadc(param_1,param_2);
          puVar3 = &UNK_1105e5478;
          func_0x000107c613fc(&UNK_1105e5478,0x30,7);
          *(undefined8 *)(puVar3 + 0x10) = param_5;
          *(undefined8 *)(puVar3 + 0x18) = param_6;
          *(code **)(puVar3 + 0x20) = param_7;
          *(undefined8 *)(puVar3 + 0x28) = param_8;
          pcStack_70 = FUN_102ed2728;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1000f3aa0;
          puStack_78 = &UNK_1105e5490;
          ppuVar4 = &puStack_90;
          puStack_68 = puVar3;
          func_0x000107c60bc4(ppuVar4);
          puVar3 = puStack_68;
          func_0x000107c6157c(param_6);
          func_0x000107c6157c(param_8);
          func_0x000107c61574(puVar3);
          func_0x000107c407a0(puVar1);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(puVar1);
          func_0x000107c61170(param_1);
          return;
        }
        (*param_7)(0xd00000000000003b,0x800000010f113a40);
        func_0x000107c615e8(lVar5);
        return;
      }
    }
    func_0x000107c615e8(param_4);
  }
  (*param_7)(0xd000000000000045,0x800000010f1139f0);
  return;
}



/* Entry: 102ec9b44; end: 102ec9c4b; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl generateAndCopyLinkWithSnapId:mediaType:deckFactory:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000102ec9c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec9c30) */

void FUN_102ec9b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1105e5428;
  func_0x000107c613fc(&UNK_1105e5428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1105e5450;
  func_0x000107c613fc(&UNK_1105e5450,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102ec98f0(param_3,param_2,param_4,param_5,FUN_102ed2720,puVar1,0x102ed3380,puVar2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}


