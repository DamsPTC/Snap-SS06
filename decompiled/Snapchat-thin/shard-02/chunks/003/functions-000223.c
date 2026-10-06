/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bc69e8; end: 101bc6a5b;  */

void FUN_101bc69e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x308) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x300));
  if (unaff_x20 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x2f8));
    pcVar1 = FUN_101bc6a5c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x260);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x2f8));
    func_0x000107c6142c(uVar3);
    pcVar1 = (code *)0x101bc718c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bc6a5c; end: 101bc70c7;  */

void FUN_101bc6a5c(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong in_x3;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x22;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  
  lVar15 = *(long *)(unaff_x22 + 0x288);
  lVar13 = *(long *)(unaff_x22 + 0x268);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x298));
  if (lVar13 <= lVar15) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 600));
    func_0x000107c6142c(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101bc6b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar16 = *(ulong *)(unaff_x22 + 0x290);
  uVar10 = uVar16 + *(long *)(unaff_x22 + 0x270);
  if (SCARRY8(uVar16,*(long *)(unaff_x22 + 0x270))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70b4);
    (*pcVar2)();
  }
  *(ulong *)(unaff_x22 + 0x288) = uVar10;
  uVar4 = *(ulong *)(unaff_x22 + 0x268);
  if ((long)uVar10 <= (long)*(ulong *)(unaff_x22 + 0x268)) {
    uVar4 = uVar10;
  }
  *(ulong *)(unaff_x22 + 0x290) = uVar4;
  if ((long)uVar4 < (long)uVar16) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70b8);
    (*pcVar2)();
  }
  uVar10 = *(ulong *)(unaff_x22 + 0x260);
  if (uVar10 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    if ((long)uVar10 < (long)uVar16) {
LAB_101bc70b8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70bc);
      (*pcVar2)();
    }
  }
  else {
    if (-1 < (long)uVar10) {
      uVar10 = uVar10 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
    if ((long)uVar10 < (long)uVar16) goto LAB_101bc70b8;
    uVar10 = *(ulong *)(unaff_x22 + 0x260);
    if (-1 < (long)uVar10) {
      uVar10 = uVar10 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
  }
  if ((long)uVar10 < (long)uVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70c0);
    (*pcVar2)();
  }
  uVar10 = *(ulong *)(unaff_x22 + 0x260);
  if ((uVar10 & 0xc000000000000001) == 0) {
    func_0x000107c61434(uVar10);
  }
  else {
    if (uVar16 == uVar4) {
      func_0x000107c61434(uVar10);
    }
    else {
      if ((long)uVar4 <= (long)uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70c4);
        (*pcVar2)();
      }
      uVar11 = 0;
      FUN_101994830(0);
      func_0x000107c61434(uVar10);
      uVar10 = uVar16;
      do {
        uVar18 = uVar10 + 1;
        func_0x000107c60318(uVar10,*(undefined8 *)(unaff_x22 + 0x260),uVar11);
        uVar10 = uVar18;
      } while (uVar4 != uVar18);
      uVar10 = *(ulong *)(unaff_x22 + 0x260);
    }
    if (uVar10 >> 0x3e != 0) {
      func_0x000107c6142c(uVar10);
      if (-1 < (long)uVar10) {
        uVar10 = uVar10 & 0xffffffffffffff8;
      }
      func_0x000107c60484();
      uVar18 = uVar16;
      goto LAB_101bc6c0c;
    }
  }
  in_x3 = uVar4 << 1 | 1;
  uVar18 = uVar10 & 0xffffffffffffff8;
  uVar4 = uVar18 + 0x20;
  uVar10 = uVar16;
LAB_101bc6c0c:
  *(ulong *)(unaff_x22 + 0x298) = uVar18;
  *(ulong *)(unaff_x22 + 0x120) = uVar18;
  *(ulong *)(unaff_x22 + 0x128) = uVar4;
  *(ulong *)(unaff_x22 + 0x130) = uVar10;
  *(ulong *)(unaff_x22 + 0x138) = in_x3;
  *(undefined1 *)(unaff_x22 + 0x140) = *(undefined1 *)(unaff_x22 + 0x324);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x228);
  if (*(int *)(unaff_x22 + 800) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2a0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101bc6418;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar3,unaff_x22 + 0x218,*(undefined8 *)(unaff_x22 + 0x278),*(undefined8 *)(unaff_x22 + 0x280)
      ,0,0,&UNK_10d9dc318,unaff_x22 + 0x110,*(undefined8 *)(unaff_x22 + 0x278),
      *(undefined8 *)(unaff_x22 + 0x280));
    return;
  }
  lVar13 = unaff_x22 + 0x10;
  func_0x000107c615ac(lVar13,*(undefined8 *)(unaff_x22 + 0x278));
  *(long *)(unaff_x22 + 0x220) = lVar13;
  lVar15 = (in_x3 >> 1) - uVar10;
  if (lVar15 != 0) {
    if ((long)(in_x3 >> 1) < (long)uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc70c8);
      (*pcVar2)();
    }
    func_0x000107c615f0(uVar18);
    puVar9 = (undefined8 *)(uVar4 + uVar10 * 8);
    do {
      lVar5 = 0x112d453c8;
      uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x324);
      uVar21 = *(ulong *)(unaff_x22 + 0x228);
      uVar11 = *puVar9;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
      uVar4 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar5 = 0;
      func_0x000107c5fd0c();
      lVar19 = *(long *)(lVar5 + -8);
      (**(code **)(lVar19 + 0x38))(uVar4,1,1,lVar5);
      puVar6 = &UNK_110452a48;
      func_0x000107c613fc(&UNK_110452a48,0x50,7);
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      puVar6[0x20] = uVar1;
      *(undefined8 *)(puVar6 + 0x28) = uVar20;
      *(undefined8 *)(puVar6 + 0x30) = uVar12;
      *(undefined8 *)(puVar6 + 0x38) = uVar17;
      *(undefined8 *)(puVar6 + 0x40) = uVar11;
      *(ulong *)(puVar6 + 0x48) = uVar21;
      uVar10 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x000101bc8860(uVar4,uVar10,0x112d453c8,&UNK_10d90ac60);
      uVar16 = uVar10;
      (**(code **)(lVar19 + 0x30))(uVar10,1,lVar5);
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      func_0x000107c61174(uVar20);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar17);
      func_0x000107c615f0(uVar21);
      if ((int)uVar16 == 1) {
        func_0x000101bc88ec(uVar10,0x112d453c8,&UNK_10d90ac60);
        uVar16 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar19 + 8))(uVar10,lVar5);
        uVar16 = uVar21 & 0xff | 0x3100;
      }
      func_0x000107c615c0(uVar10);
      lVar5 = *(long *)(puVar6 + 0x10);
      if (lVar5 == 0) {
        lVar19 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(puVar6 + 0x18);
        lVar19 = lVar5;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar5);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar5);
      }
      puVar7 = &UNK_110452a70;
      func_0x000107c613fc(&UNK_110452a70,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10d9dc338;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      if (lVar14 == 0 && lVar19 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x198) = 0;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
        *(long *)(unaff_x22 + 0x1a8) = lVar19;
        *(long *)(unaff_x22 + 0x1b0) = lVar14;
        puVar8 = (undefined8 *)(unaff_x22 + 0x198);
      }
      *(undefined8 *)(unaff_x22 + 0x1b8) = 1;
      *(undefined8 **)(unaff_x22 + 0x1c0) = puVar8;
      *(long *)(unaff_x22 + 0x1c8) = lVar13;
      func_0x000107c615bc(uVar16,unaff_x22 + 0x1b8,*(undefined8 *)(unaff_x22 + 0x278),&UNK_10d9dc340
                          ,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(uVar11);
      func_0x000107c61574(uVar16);
      func_0x000101bc88ec(uVar4,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar4);
      lVar15 = lVar15 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar15 != 0);
    func_0x000107c615e8(uVar18);
  }
  lVar5 = *(long *)(unaff_x22 + 0x278);
  lVar15 = 0x112e07bc0;
  func_0x0001000285a8(0x112e07bc0,&UNK_10d9dc348);
  *(long *)(unaff_x22 + 0x2a8) = lVar15;
  lVar15 = *(long *)(lVar15 + -8);
  *(long *)(unaff_x22 + 0x2b0) = lVar15;
  uVar10 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2b8) = uVar10;
  func_0x000107c5fcc4(uVar10,lVar13,lVar5);
  lVar13 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar13;
  lVar13 = *(long *)(lVar13 + 0x40);
  *(long *)(unaff_x22 + 0x2c8) = lVar13;
  *(undefined **)(unaff_x22 + 0x2d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = lVar13 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2d8) = uVar10;
  lVar13 = 0x112e07bc8;
  func_0x0001000285a8(0x112e07bc8,&UNK_10d9dc350);
  uVar16 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2e0) = uVar16;
  uVar10 = uVar16;
  FUN_101bc87c0();
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bc6460;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar3,uVar16,*(undefined8 *)(unaff_x22 + 0x2a8),uVar10);
  return;
}



/* Entry: 101bc70c8; end: 101bc71c7;  */

void FUN_101bc70c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x318) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x310));
  if (unaff_x20 == 0) {
    uVar1 = 0x101bc7124;
  }
  else {
    uVar1 = 0x101bc7158;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bc71c8; end: 101bc721b;  */

/* WARNING: Removing unreachable block (ram,0x000101bc8cc8) */

void FUN_101bc71c8(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    func_0x000107c61434();
  }
  else {
    param_1 = 0;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c61450(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 101bc721c; end: 101bc736f;  */

void FUN_101bc721c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_11;
  *(undefined8 *)(unaff_x22 + 0x80) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined1 *)(unaff_x22 + 0x118) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar1 = 0;
  FUN_101bcbb4c();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  lVar1 = 0x112e07bc8;
  func_0x0001000285a8(0x112e07bc8,&UNK_10d9dc350);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar1 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  lVar1 = 0x112e07bc0;
  func_0x0001000285a8(0x112e07bc0,&UNK_10d9dc348);
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7370,0,0);
  return;
}



/* Entry: 101bc7370; end: 101bc76ab;  */

void FUN_101bc7370(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x22;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  uVar14 = *(ulong *)(unaff_x22 + 0x60);
  uVar10 = *(ulong *)(unaff_x22 + 0x68) >> 1;
  if (uVar14 != uVar10) {
    if ((long)uVar10 <= (long)uVar14) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101bc76ac);
      (*pcVar12)();
    }
    uVar5 = **(undefined8 **)(unaff_x22 + 0x50);
    lVar7 = 0;
    func_0x000107c5fd0c();
    lVar11 = *(long *)(lVar7 + -8);
    pcVar12 = *(code **)(lVar11 + 0x38);
    do {
      uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar18 = *(ulong *)(unaff_x22 + 0x88);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x118);
      uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + uVar14 * 8);
      (*pcVar12)(uVar2,1,1,lVar7);
      puVar8 = &UNK_110452ae8;
      func_0x000107c613fc(&UNK_110452ae8,0x50,7);
      *(long *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      puVar8[0x20] = uVar4;
      *(undefined8 *)(puVar8 + 0x28) = uVar1;
      *(undefined8 *)(puVar8 + 0x30) = uVar3;
      *(undefined8 *)(puVar8 + 0x38) = uVar16;
      *(undefined8 *)(puVar8 + 0x40) = uVar15;
      *(ulong *)(puVar8 + 0x48) = uVar18;
      func_0x000101bc8860(uVar2,uVar19,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar11 + 0x30))(uVar19,1,lVar7);
      func_0x000107c61174(uVar15);
      func_0x000107c61174();
      func_0x000107c61174(uVar1);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar16);
      func_0x000107c615f0(uVar18);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
      if ((int)uVar19 == 1) {
        func_0x000101bc88ec(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar18 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar11 + 8))(uVar16,lVar7);
        uVar18 = uVar18 & 0xff | 0x3100;
      }
      lVar17 = *(long *)(puVar8 + 0x10);
      if (lVar17 == 0) {
        lVar21 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(puVar8 + 0x18);
        lVar21 = lVar17;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar17);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar17);
      }
      puVar9 = &UNK_110452b10;
      func_0x000107c613fc(&UNK_110452b10,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10d9dc388;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      func_0x000107c6157c(puVar8);
      if (lVar20 == 0 && lVar21 == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar21;
        *(long *)(unaff_x22 + 0x28) = lVar20;
        puVar13 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar14 = uVar14 + 1;
      uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar13;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
      func_0x000107c615bc(uVar18,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0xb0),&UNK_10d9dc390,
                          puVar9);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(uVar15);
      func_0x000107c61574(uVar18);
      func_0x000101bc88ec(uVar19,0x112d453c8,&UNK_10d90ac60);
    } while (uVar10 != uVar14);
  }
  uVar5 = **(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c5fcc4(*(undefined8 *)(unaff_x22 + 0xe0),uVar5,*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_101bc87c0();
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bc76ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),uVar5);
  return;
}



/* Entry: 101bc76ac; end: 101bc7743;  */

void FUN_101bc76ac(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf8));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar4 + 0x100) = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar3 = FUN_101bc7744;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0xd8);
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    uVar5 = *(undefined8 *)(lVar4 + 0xd0);
    func_0x000107c614ac();
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_101bc7a24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101bc7744; end: 101bc7a23;  */

void FUN_101bc7744(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = uVar11;
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x30))(uVar11,1,*(undefined8 *)(unaff_x22 + 0xb0));
  if ((int)uVar7 == 1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar17 = *(undefined8 **)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0xd8) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xd0));
    func_0x000101bc88ec(uVar11,0x112e07bc8,&UNK_10d9dc350);
    *puVar17 = uVar16;
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101bc7824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  func_0x000101bc8810(uVar11,uVar2);
  func_0x000101bc8860(uVar2,uVar7,0x112e07bb0,&UNK_10d9dc3e0);
  (**(code **)(lVar6 + 0x30))(uVar7,1,uVar1);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)uVar7 != 1) {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000101bc88a8(*(undefined8 *)(unaff_x22 + 0xc0),uVar7);
    puVar5 = (undefined *)0x112e07be0;
    func_0x0001000285a8(0x112e07be0,&UNK_10d9dc360);
    uVar10 = (ulong)*(byte *)(lVar6 + 0x50);
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    func_0x000101bc88a8(uVar7,puVar5 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)));
  }
  lVar6 = *(long *)(unaff_x22 + 0x100);
  uVar10 = *(ulong *)(puVar5 + 0x10);
  lVar13 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar13,uVar10)) {
    func_0x000107c61558();
    if (((int)lVar6 == 0) ||
       (uVar9 = *(ulong *)(*(long *)(unaff_x22 + 0x100) + 0x18) >> 1,
       lVar12 = *(long *)(unaff_x22 + 0x100), (long)uVar9 < (long)(lVar13 + uVar10))) {
      FUN_101bcaab8();
      uVar9 = *(ulong *)(lVar6 + 0x18) >> 1;
      lVar12 = lVar6;
    }
    *(long *)(unaff_x22 + 0x108) = lVar12;
    if (*(long *)(puVar5 + 0x10) == 0) {
      func_0x000107c6142c(puVar5);
      if (uVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bc7a1c);
        (*pcVar4)();
      }
    }
    else {
      if (uVar9 - *(long *)(lVar12 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bc7a20);
        (*pcVar4)();
      }
      uVar9 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x98) + 0x50);
      uVar9 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
      func_0x000107c6140c(lVar12 + uVar9 +
                          *(long *)(*(long *)(unaff_x22 + 0x98) + 0x48) * *(long *)(lVar12 + 0x10),
                          puVar5 + uVar9,uVar10,*(undefined8 *)(unaff_x22 + 0x90));
      func_0x000107c6142c(puVar5);
      if (uVar10 != 0) {
        if (SCARRY8(*(long *)(lVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101bc7a24);
          (*pcVar4)();
        }
        *(ulong *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + uVar10;
      }
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000101bc88ec(uVar7,0x112e07bb0,&UNK_10d9dc3e0);
    FUN_101bc87c0();
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101bc7a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar8,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101bc7a18);
  (*pcVar4)();
}



/* Entry: 101bc7a24; end: 101bc7a27;  */

void FUN_101bc7a24(void)

{
  return;
}



/* Entry: 101bc7a28; end: 101bc7abf;  */

void FUN_101bc7a28(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x110));
  uVar4 = *(undefined8 *)(lVar5 + 0x108);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0x100) = uVar4;
    pcVar3 = FUN_101bc7744;
  }
  else {
    lVar1 = *(long *)(lVar5 + 0xd8);
    uVar2 = *(undefined8 *)(lVar5 + 0xe0);
    uVar6 = *(undefined8 *)(lVar5 + 0xd0);
    func_0x000107c614ac();
    func_0x000107c6142c(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    pcVar3 = FUN_101bc7a24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101bc7ac0; end: 101bc7b33;  */

void FUN_101bc7ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_9;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_7;
  *(undefined1 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7b34,0,0);
  return;
}



/* Entry: 101bc7b34; end: 101bc7c03;  */

void FUN_101bc7b34(double param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c439a8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4aa00();
    func_0x000107c61170(lVar1);
    if (0.0 < param_1) {
      func_0x000107c5ee88(*(undefined8 *)(unaff_x22 + 0x40),param_1);
      uVar8 = 0;
      goto LAB_101bc7b94;
    }
  }
  uVar8 = 1;
LAB_101bc7b94:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar7,uVar8,1,lVar1);
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bc7c04;
  lVar1 = *(long *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  plVar2[0xd] = *(long *)(unaff_x22 + 0x38);
  plVar2[0xe] = lVar6;
  plVar2[0xb] = lVar5;
  plVar2[0xc] = lVar1;
  plVar2[10] = lVar3;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar4;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar2[0x10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[0x11] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7cf4,0,0);
  return;
}



/* Entry: 101bc7c04; end: 101bc7cf3;  */

void FUN_101bc7c04(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  func_0x000101bc88ec(uVar1,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bc7c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101bc7cf4; end: 101bc7f2f;  */

void FUN_101bc7cf4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x58);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar3 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = uVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar2 = *(long *)(unaff_x22 + 0x88);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      FUN_101bc5688(uVar10,uVar3,param_2);
      func_0x000107c6142c(param_2);
      (**(code **)(lVar2 + 0x30))(uVar10,1,uVar9);
      if ((int)uVar10 != 1) {
        uVar1 = *(ulong *)(unaff_x22 + 0x78);
        iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x58);
        (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x90),uVar1,*(undefined8 *)(unaff_x22 + 0x80));
        func_0x000100bf119c();
        if (iVar8 != 0) {
          uVar3 = *(ulong *)(unaff_x22 + 0x58);
          func_0x00010901c59c();
          if ((uVar3 & 1) == 0) {
            uVar3 = *(ulong *)(unaff_x22 + 0x58);
            func_0x00010901c5a4();
            if ((uVar3 & 1) == 0) {
              uVar3 = *(ulong *)(unaff_x22 + 0x58);
              func_0x00010901c594();
              if ((uVar3 & 1) == 0) {
                uVar4 = *(ulong *)(unaff_x22 + 0x58);
                func_0x000107c5db08();
                func_0x000107c61180();
                uVar3 = uVar1;
                if (uVar4 == 0) {
LAB_101bc7e8c:
                  uVar7 = 0;
                  uVar1 = 0;
                }
                else {
                  uVar7 = uVar4;
                  func_0x000107c5faec();
                  uVar3 = uVar1;
                  func_0x000107c61170(uVar4);
                  uVar4 = uVar7 & 0xffffffffffff;
                  if ((uVar1 & 0x2000000000000000) != 0) {
                    uVar4 = uVar1 >> 0x38 & 0xf;
                  }
                  if (uVar4 == 0) {
                    func_0x000107c6142c(uVar1);
                    goto LAB_101bc7e8c;
                  }
                }
                *(ulong *)(unaff_x22 + 0x98) = uVar7;
                *(ulong *)(unaff_x22 + 0xa0) = uVar1;
                iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x58);
                func_0x00010901d778();
                *(char *)(unaff_x22 + 0xd0) = (char)iVar8;
                if ((uVar1 != 0) || (iVar8 != 0)) {
                  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
                  func_0x00010901d7c4();
                  func_0x000107c61180();
                  uVar9 = uVar10;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar10);
                  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
                  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
                  plVar5 = (long *)0x90;
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0xb8) = plVar5;
                  *plVar5 = unaff_x22;
                  plVar5[1] = (long)FUN_101bc7f30;
                  lVar2 = *(long *)(unaff_x22 + 0x70);
                  lVar6 = *(long *)(unaff_x22 + 0x58);
                  plVar5[0xd] = *(long *)(unaff_x22 + 0x68);
                  plVar5[0xe] = lVar2;
                  plVar5[0xc] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc8948,0,0);
                  return;
                }
              }
            }
          }
        }
        uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
        (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
        goto LAB_101bc7db0;
      }
      func_0x000101bc88ec(*(undefined8 *)(unaff_x22 + 0x78),0x112d36580,&UNK_10d9016d0);
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
LAB_101bc7db0:
  lVar2 = 0;
  FUN_101bcbb4c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar9,1,1,lVar2);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101bc7dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc7f30; end: 101bc7f7f;  */

void FUN_101bc7f30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  *(undefined8 *)(lVar1 + 200) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7f80,0,0);
  return;
}



/* Entry: 101bc7f80; end: 101bc827f;  */

void FUN_101bc7f80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  cVar8 = *(char *)(unaff_x22 + 0xd0);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined8 *)(unaff_x22 + 0x80));
  if (cVar8 != '\x01') {
    uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
    puVar14 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined8 *)(puVar14 + 0x20) = uVar21;
    *(undefined8 *)(puVar14 + 0x28) = uVar15;
    func_0x000107c61434(uVar15);
    uStack_90 = 0;
    uStack_88 = 0;
LAB_101bc8164:
    uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 200);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar19 = *(long *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = (undefined1)*(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar17 = *(long *)(unaff_x22 + 0x50);
    func_0x00010901ca64();
    (**(code **)(lVar19 + 8))(uVar6,uVar20);
    lVar19 = 0;
    FUN_101bcbb4c();
    puVar16 = (undefined8 *)(lVar17 + *(int *)(lVar19 + 0x18));
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar19 + 0x1c));
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    iVar9 = *(int *)(lVar19 + 0x20);
    iVar10 = *(int *)(lVar19 + 0x28);
    lVar18 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar17 + iVar10,1,1,lVar18);
    puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar19 + 0x14));
    *puVar2 = uVar15;
    puVar2[1] = uVar5;
    *puVar16 = uStack_88;
    puVar16[1] = uStack_90;
    func_0x0001000b44c0(*puVar1,puVar1[1]);
    *puVar1 = uVar21;
    puVar1[1] = uVar4;
    *(undefined **)(lVar17 + iVar9) = puVar14;
    *(undefined1 *)(lVar17 + *(int *)(lVar19 + 0x24)) = uVar11;
    func_0x000100ed9c6c(uVar7,lVar17 + iVar10);
    (**(code **)(*(long *)(lVar19 + -8) + 0x38))(lVar17,0,1,lVar19);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615c0(uVar21);
                    /* WARNING: Could not recover jumptable at 0x000101bc827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar19 = *(long *)(unaff_x22 + 0xa0);
  if (lVar19 == 0) {
    uVar15 = 0;
    uStack_90 = 0;
    uStack_88 = uVar21;
  }
  else {
    func_0x000107c61434(lVar19);
    func_0x000107c5fb78(uVar21,lVar19);
    func_0x000107c6142c(lVar19);
    uStack_90 = 0xe100000000000000;
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
    uStack_88 = 0x40;
  }
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar15;
  func_0x000107c61434();
  lVar19 = 0;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar16 = (undefined8 *)(unaff_x22 + 0x20 + lVar19 * 0x10);
    do {
      lVar19 = lVar19 + 1;
      if (lVar19 == 3) {
        uVar21 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c61408((undefined8 *)(unaff_x22 + 0x30),2,uVar21);
        goto LAB_101bc8164;
      }
      puVar1 = puVar16 + 2;
      lVar18 = puVar16[3];
      puVar16 = puVar1;
    } while (lVar18 == 0);
    uVar21 = *puVar1;
    func_0x000107c61434(lVar18);
    puVar12 = puVar14;
    func_0x000107c61558();
    puVar13 = puVar14;
    if (((ulong)puVar12 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    }
    uVar3 = *(ulong *)(puVar13 + 0x10);
    puVar14 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      func_0x0001000d182c(puVar14,uVar3 + 1,1,puVar13);
    }
    *(ulong *)(puVar14 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar14 + uVar3 * 0x10 + 0x20) = uVar21;
    *(long *)(puVar14 + uVar3 * 0x10 + 0x28) = lVar18;
  } while( true );
}



/* Entry: 101bc8280; end: 101bc83cf;  */

void FUN_101bc8280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar1 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar6 = 0x30;
  func_0x000107c613fc();
  puVar1[3] = 2;
  puVar1[2] = 1;
  puVar2 = puVar1;
  func_0x00010448d194();
  uVar3 = *puVar2;
  func_0x000107c5faec();
  puVar1[4] = uVar3;
  puVar1[5] = uVar6;
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(param_4);
  func_0x000100bcb214();
  puVar4 = &UNK_110452a98;
  func_0x000107c613fc(&UNK_110452a98,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  pcStack_50 = FUN_101bc8ca8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1010a2bbc;
  puStack_58 = &UNK_110452ab0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4329c(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101bc83d0; end: 101bc8457;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101bc8cb8) */

void FUN_101bc83d0(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  
  if (param_1 != 0) {
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      goto LAB_101bc841c;
    }
  }
  uVar1 = 0;
  param_2 = 0xf000000000000000;
LAB_101bc841c:
  func_0x000100de78a0(uVar1,param_2);
  puVar3 = *(ulong **)(*(long *)(param_4 + 0x40) + 0x28);
  *puVar3 = uVar1;
  puVar3[1] = param_2;
  func_0x000107c61450(param_4);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(param_2 >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101bc8458; end: 101bc845f;  */

undefined1 FUN_101bc8458(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101bc8460; end: 101bc84ef;  */

void FUN_101bc8460(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined1 *unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 8);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x330;
  uVar3 = *unaff_x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bc84f0;
  plVar4[0x4a] = lVar5;
  plVar4[0x49] = lVar2;
  plVar4[0x48] = lVar1;
  *(undefined1 *)((long)plVar4 + 0x324) = uVar3;
  plVar4[0x47] = param_3;
  plVar4[0x46] = param_2;
  plVar4[0x45] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc5b34,0,0);
  return;
}



/* Entry: 101bc84f0; end: 101bc852b;  */

void FUN_101bc84f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc8528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc852c; end: 101bc854f;  */

/* WARNING: Removing unreachable block (ram,0x000101bc8cc8) */

void FUN_101bc852c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    func_0x000107c61434();
  }
  else {
    param_1 = 0;
  }
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c61450(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 101bc8550; end: 101bc8607;  */

void FUN_101bc8550(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  lVar10 = *(long *)(unaff_x20 + 0x50);
  plVar8 = (long *)0x120;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x101bc8eb4;
  plVar8[0x11] = lVar10;
  plVar8[0x10] = lVar12;
  plVar8[0xf] = lVar11;
  *(undefined1 *)(plVar8 + 0x23) = uVar4;
  plVar8[0xd] = lVar3;
  plVar8[0xe] = lVar9;
  plVar8[0xb] = lVar2;
  plVar8[0xc] = lVar5;
  plVar8[9] = param_1;
  plVar8[10] = param_2;
  lVar5 = 0;
  FUN_101bcbb4c(0,param_2,uVar1);
  plVar8[0x12] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x13] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x14] = uVar6;
  lVar5 = 0x112e07bc8;
  func_0x0001000285a8(0x112e07bc8,&UNK_10d9dc350);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x15] = uVar6;
  lVar5 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  plVar8[0x16] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x17] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x18] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x19] = uVar6;
  lVar5 = 0x112e07bc0;
  func_0x0001000285a8(0x112e07bc0,&UNK_10d9dc348);
  plVar8[0x1a] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x1b] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1c] = uVar6;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1d] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1e] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7370,0,0);
  return;
}



/* Entry: 101bc8608; end: 101bc866b;  */

void FUN_101bc8608(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bc866c;
                    /* WARNING: Could not recover jumptable at 0x000101bc8668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 101bc866c; end: 101bc86ab;  */

void FUN_101bc866c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc86a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc86ac; end: 101bc874f;  */

void FUN_101bc86ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x60;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x101bc8eb8;
  plVar8[6] = lVar4;
  plVar8[7] = lVar9;
  plVar8[4] = lVar3;
  plVar8[5] = lVar1;
  *(undefined1 *)(plVar8 + 10) = uVar5;
  plVar8[2] = param_1;
  plVar8[3] = lVar6;
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,uVar2);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[8] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7b34,0,0);
  return;
}



/* Entry: 101bc8750; end: 101bc87bf;  */

void FUN_101bc8750(undefined8 param_1)

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
  plVar5[1] = 0x101bc8eb0;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101bc866c;
                    /* WARNING: Could not recover jumptable at 0x000101bc8668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101bc87c0; end: 101bc880f;  */

void FUN_101bc87c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e07bd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e07bc0;
  func_0x00010002969c(0x112e07bc0,&UNK_10d9dc348);
  puVar2 = PTR___sScG8IteratorVyx_GScIsMc_11034fc18;
  func_0x000107c61520(PTR___sScG8IteratorVyx_GScIsMc_11034fc18,uVar1);
  puRam0000000112e07bd0 = puVar2;
  return;
}



/* Entry: 101bc8810; end: 101bc892b;  */

undefined8 FUN_101bc8810(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bc892c; end: 101bc8947;  */

void FUN_101bc892c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc8948,0,0);
  return;
}



/* Entry: 101bc8948; end: 101bc8c2b;  */

void FUN_101bc8948(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  uVar8 = param_2;
  if (uVar1 == 0) {
LAB_101bc89d4:
    uVar7 = 0;
    param_2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar8 = param_2;
    if (uVar2 == 0) goto LAB_101bc89d4;
    uVar7 = uVar2;
    func_0x000107c5faec();
    uVar8 = param_2;
    func_0x000107c61170(uVar2);
    uVar1 = uVar7 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_101bc89d4;
    }
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar9 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      uVar1 = uVar9 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar1 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto joined_r0x000101bc8be4;
      func_0x000107c6142c(uVar8);
    }
  }
  uVar9 = 0;
  uVar8 = 0;
joined_r0x000101bc8be4:
  uVar1 = uVar8;
  if ((param_2 != 0) && (uVar1 = param_2, uVar8 != 0)) {
    lVar3 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x78) = lVar3;
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      puVar4 = PTR_PTR_1126afd38;
      func_0x000107c61168();
      func_0x000107c3e9b0();
      func_0x000107c61180();
      func_0x000107c5d984(uVar5);
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c5e868();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c5fadc(uVar7,param_2);
      func_0x000107c6142c(param_2);
      puVar4 = puVar6;
      func_0x000107c5e458();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c5fadc(uVar9,uVar8);
      func_0x000107c6142c(uVar8);
      puVar6 = puVar4;
      func_0x000107c5e780();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar4);
      puVar4 = puVar6;
      func_0x000107c5e770();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = puVar4;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x80) = puVar6;
      func_0x000107c61170(puVar4);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101bc8c2c;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_101bc8280();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bc8c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 101bc8c2c; end: 101bc8ca7;  */

void FUN_101bc8c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bc8c6c,0,0);
  return;
}



/* Entry: 101bc8ca8; end: 101bc8ccf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101bc8cb8) */

void FUN_101bc8ca8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      goto LAB_101bc841c;
    }
  }
  uVar1 = 0;
  param_2 = 0xf000000000000000;
LAB_101bc841c:
  func_0x000100de78a0(uVar1,param_2);
  puVar4 = *(ulong **)(*(long *)(lVar2 + 0x40) + 0x28);
  *puVar4 = uVar1;
  puVar4[1] = param_2;
  func_0x000107c61450(lVar2);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(param_2 >> 0x3e);
  if (uVar3 == 1) {
    uVar1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101bc8cd0; end: 101bc8d1b;  */

void FUN_101bc8cd0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bc8d1c; end: 101bc8dbf;  */

void FUN_101bc8d1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x60;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101bc8dc0;
  plVar8[6] = lVar4;
  plVar8[7] = lVar9;
  plVar8[4] = lVar3;
  plVar8[5] = lVar1;
  *(undefined1 *)(plVar8 + 10) = uVar5;
  plVar8[2] = param_1;
  plVar8[3] = lVar6;
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,uVar2);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[8] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7b34,0,0);
  return;
}



/* Entry: 101bc8dc0; end: 101bc8dfb;  */

void FUN_101bc8dc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc8dfc; end: 101bc8e6b;  */

void FUN_101bc8dfc(undefined8 param_1)

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
  plVar5[1] = (long)FUN_101bc8e6c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101bc866c;
                    /* WARNING: Could not recover jumptable at 0x000101bc8668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101bc8e6c; end: 101bc8ea7;  */

void FUN_101bc8e6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc8ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc8ea8; end: 101bc8ebb;  */

void FUN_101bc8ea8(long param_1,long param_2)

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



/* Entry: 101bc8ebc; end: 101bc8f53;  */

long FUN_101bc8ebc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bc8f54; end: 101bc8fbf;  */

undefined1 * FUN_101bc8f54(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101bc8fc0; end: 101bc900b;  */

undefined1 * FUN_101bc8fc0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101bc900c; end: 101bc90a3;  */

int FUN_101bc900c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bc90a4; end: 101bc91c3;  */

void FUN_101bc90a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar1;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar2 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
  lVar2 = 0;
  FUN_101bcbb4c();
  *(long *)(unaff_x22 + 0x100) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc91c4,0,0);
  return;
}



/* Entry: 101bc91c4; end: 101bc92eb;  */

void FUN_101bc91c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x118) = lVar4;
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101bc92ec;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,0);
    func_0x000107c614f0(uVar7);
    puVar6 = &UNK_110452be0;
    func_0x000107c613fc(&UNK_110452be0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar5;
    *(long *)(puVar6 + 0x18) = lVar4;
    func_0x000107c615f0(lVar4);
    func_0x00010090569c(FUN_101bcaa2c,puVar6,uVar7);
    func_0x000107c61574(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101bc92e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc92ec; end: 101bc932b;  */

void FUN_101bc92ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc932c,0,0);
  return;
}



/* Entry: 101bc932c; end: 101bc9ebf;  */

void FUN_101bc932c(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  undefined *puVar20;
  uint uVar21;
  long lVar22;
  code *pcVar23;
  ulong *puVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  undefined *puVar33;
  long *plVar34;
  long unaff_x22;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined *puVar42;
  undefined *puVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  undefined *puVar48;
  long lVar49;
  undefined *puStack_d0;
  ulong uStack_c0;
  undefined *puStack_70;
  
  puVar35 = *(undefined **)(unaff_x22 + 0x90);
  if ((ulong)puVar35 >> 0x3e == 0) {
    puVar38 = *(undefined **)(((ulong)puVar35 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar38 = (undefined *)((ulong)puVar35 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar35) {
      puVar38 = puVar35;
    }
    func_0x000107c60480();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar38 != (undefined *)0x0) {
    puVar42 = (undefined *)0x0;
    lVar5 = *(long *)(unaff_x22 + 0x100);
    lVar7 = *(long *)(unaff_x22 + 0x108);
    lVar22 = *(long *)(unaff_x22 + 0xd8);
LAB_101bc93d4:
    do {
      if (((ulong)puVar35 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar35 & 0xffffffffffffff8) + 0x10) <= puVar42) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e0c);
          (*pcVar23)();
        }
        puVar48 = *(undefined **)(puVar35 + (long)puVar42 * 8 + 0x20);
        func_0x000107c615f0(puVar48);
      }
      else {
        puVar48 = puVar42;
        param_2 = puVar35;
        func_0x000101bcb3d0();
      }
      if (SCARRY8((long)puVar42,1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e08);
        (*pcVar23)();
      }
      puVar42 = puVar42 + 1;
      uVar9 = *(ulong *)(unaff_x22 + 0x118);
      func_0x000107c42138();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      puVar27 = puVar48;
      func_0x000107c4aa00();
      func_0x000107c61180();
      if (puVar27 != (undefined *)0x0) {
        func_0x000107c5ee94(*(undefined8 *)(unaff_x22 + 0xf0));
        func_0x000107c61170(puVar27);
      }
      uVar41 = (ulong)(puVar27 == (undefined *)0x0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar11 = 0;
      func_0x000107c5eea4();
      pcVar23 = *(code **)(*(long *)(uVar11 - 8) + 0x38);
      uVar9 = uVar11;
      (*pcVar23)(uVar25,uVar41,1);
      puVar27 = puVar48;
      func_0x000107c444fc();
      func_0x000107c61180();
      if (puVar27 == (undefined *)0x0) {
        uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
        func_0x000107c6142c(param_2);
        func_0x000107c615e8(puVar48);
LAB_101bc95d4:
        func_0x000101bcb57c(uVar25,0x112d373d8,&UNK_10d9014c0);
        uVar25 = 1;
      }
      else {
        puVar18 = puVar27;
        func_0x000107c5faec();
        func_0x000107c61170(puVar27);
        uVar47 = (ulong)puVar18 & 0xffffffffffff;
        if ((uVar41 & 0x2000000000000000) != 0) {
          uVar47 = uVar41 >> 0x38 & 0xf;
        }
        if (uVar47 == 0) {
          uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
LAB_101bc95bc:
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar41);
          func_0x000107c615e8(puVar48);
          goto LAB_101bc95d4;
        }
        puVar27 = puVar48;
        func_0x000107c49ffc();
        if ((((ulong)puVar27 & 1) != 0) ||
           (puVar27 = puVar48, func_0x000107c49b6c(), ((ulong)puVar27 & 1) != 0)) {
LAB_101bc95a8:
          uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
          goto LAB_101bc95bc;
        }
        uVar47 = uVar10 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar47 = (ulong)param_2 >> 0x38 & 0xf;
        }
        if (uVar47 == 0) goto LAB_101bc95a8;
        uVar25 = *(undefined8 *)(unaff_x22 + 200);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xd0);
        func_0x000101bc569c(uVar25,puVar18,uVar41);
        func_0x000107c6142c(uVar41);
        (**(code **)(lVar22 + 0x30))(uVar25,1,uVar29);
        if ((int)uVar25 == 1) {
          uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar25 = *(undefined8 *)(unaff_x22 + 200);
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(puVar48);
          func_0x000101bcb57c(uVar29,0x112d373d8,&UNK_10d9014c0);
          func_0x000101bcb57c(uVar25,0x112d36580,&UNK_10d9016d0);
          uVar25 = 1;
        }
        else {
          pcVar26 = *(code **)(lVar22 + 0x20);
          (*pcVar26)(*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 200),
                     *(undefined8 *)(unaff_x22 + 0xd0));
          puVar27 = puVar48;
          func_0x000107c4e04c();
          func_0x000107c61180();
          if (puVar27 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9ec0);
            (*pcVar23)();
          }
          puVar18 = (undefined *)0x112d64d20;
          func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
          puVar17 = puVar27;
          puVar15 = puVar18;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar27);
          if ((ulong)puVar17 >> 0x3e == 0) {
            puVar27 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar27 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar17) {
              puVar27 = puVar17;
            }
            func_0x000107c60480();
          }
          puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uStack_c0 = (ulong)puVar17 & 0xffffffffffffff8;
          if (puVar27 != (undefined *)0x0) {
            puVar14 = (undefined *)0x0;
            do {
              while( true ) {
                if (((ulong)puVar17 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(uStack_c0 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e14);
                    (*pcVar23)();
                  }
                  puVar43 = *(undefined **)(puVar17 + (long)puVar14 * 8 + 0x20);
                  func_0x000107c615f0(puVar43);
                  puVar20 = puVar15;
                }
                else {
                  puVar43 = puVar14;
                  puVar20 = puVar17;
                  func_0x0001011be488();
                }
                if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e10);
                  (*pcVar23)();
                }
                puVar36 = puVar14 + 1;
                puVar12 = puVar43;
                func_0x000107c5d984();
                func_0x000107c61180();
                puVar15 = puVar20;
                if (puVar12 != (undefined *)0x0) break;
LAB_101bc9834:
                puVar14 = puVar33;
                func_0x000107c61558();
                if (((ulong)puVar14 & 1) == 0) {
                  puVar15 = (undefined *)(*(long *)(puVar33 + 0x10) + 1);
                  FUN_101bcb030(0,puVar15,1);
                }
                uVar41 = *(ulong *)(puVar33 + 0x10);
                puVar14 = (undefined *)(uVar41 + 1);
                if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar41) {
                  puVar15 = puVar14;
                  FUN_101bcb030(1 < *(ulong *)(puVar33 + 0x18),puVar14,1);
                }
                *(undefined **)(puVar33 + 0x10) = puVar14;
                *(undefined **)(puVar33 + uVar41 * 8 + 0x20) = puVar43;
                puVar14 = puVar36;
                if (puVar36 == puVar27) goto LAB_101bc98bc;
              }
              puVar6 = *(undefined **)(unaff_x22 + 0xb8);
              puVar8 = *(undefined **)(unaff_x22 + 0xc0);
              puVar13 = puVar12;
              func_0x000107c5faec();
              puVar15 = puVar20;
              func_0x000107c61170(puVar12);
              if ((puVar13 == puVar6) && (puVar20 == puVar8)) {
                func_0x000107c6142c(puVar20);
              }
              else {
                uVar9 = *(ulong *)(unaff_x22 + 0xc0);
                puVar15 = puVar20;
                func_0x000107c605b8(puVar13,puVar20,*(undefined8 *)(unaff_x22 + 0xb8),uVar9,0);
                func_0x000107c6142c(puVar20);
                if (((ulong)puVar13 & 1) == 0) goto LAB_101bc9834;
              }
              func_0x000107c615e8(puVar43);
              puVar14 = puVar14 + 1;
            } while (puVar36 != puVar27);
          }
LAB_101bc98bc:
          puStack_d0 = puVar33;
          func_0x000107c6142c(puVar17);
          uVar21 = (uint)((ulong)puVar33 >> 0x3e) & 1;
          if ((long)puVar33 < 0) {
            uVar21 = 1;
          }
          if (uVar21 == 1) {
            puVar27 = puVar33;
            func_0x000107c60480();
            puVar15 = puVar33;
            func_0x000107c60480();
            if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9eb8);
              (*pcVar23)();
            }
            if ((undefined *)0x18 < puVar27) {
              puVar27 = (undefined *)0x19;
            }
            puVar15 = puVar33;
            func_0x000107c60480();
          }
          else {
            puVar15 = *(undefined **)(puVar33 + 0x10);
            puVar27 = puVar15;
            if ((undefined *)0x18 < puVar15) {
              puVar27 = (undefined *)0x19;
            }
          }
          if ((long)puVar15 < (long)puVar27) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9ebc);
            (*pcVar23)();
          }
          if (((ulong)puVar33 & 0xc000000000000001) == 0) {
            func_0x000107c61434(puVar33);
          }
          else {
            func_0x000107c61434(puVar33);
            if (puVar27 != (undefined *)0x0) {
              puVar15 = (undefined *)0x0;
              do {
                puVar17 = puVar15 + 1;
                func_0x000107c60318(puVar15,puVar33,puVar18);
                puVar15 = puVar17;
              } while (puVar27 != puVar17);
            }
          }
          func_0x000107c61574(puVar33);
          if (uVar21 == 0) {
            puVar15 = (undefined *)0x0;
            puVar33 = puVar33 + 0x20;
            puVar18 = puVar27;
          }
          else {
            puStack_d0 = (undefined *)0x0;
            puVar15 = puVar33;
            func_0x000107c60484();
            func_0x000107c61574(puVar33);
            puVar18 = (undefined *)(uVar9 >> 1);
            puVar33 = puVar27;
          }
          lVar46 = (long)puVar18 - (long)puVar15;
          puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (lVar46 != 0) {
            if ((long)puVar18 < (long)puVar15) {
              puVar18 = puVar15;
            }
            plVar19 = (long *)(puVar33 + (long)puVar15 * 8);
            lVar44 = (long)puVar18 - (long)puVar15;
            do {
              if (lVar44 == 0) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e1c);
                (*pcVar23)();
              }
              lVar30 = *plVar19;
              lVar16 = 0x112d64d38;
              func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
              lVar31 = unaff_x22 + 0x50;
              func_0x000107c61534();
              lVar40 = lVar30;
              func_0x000107c615f0();
              func_0x000107c42120();
              func_0x000107c61180();
              if (lVar40 == 0) {
                lVar39 = 0;
                lVar40 = 0;
                lVar49 = lVar31;
              }
              else {
                lVar39 = lVar40;
                func_0x000107c5faec();
                lVar49 = lVar31;
                func_0x000107c61170(lVar40);
                lVar40 = lVar31;
              }
              plVar34 = (long *)(lVar16 + 0x20);
              *plVar34 = lVar39;
              *(long *)(lVar16 + 0x28) = lVar40;
              lVar31 = lVar30;
              func_0x000107c5db08();
              func_0x000107c61180();
              if (lVar31 == 0) {
                func_0x000107c615e8(lVar30);
                lVar40 = 0;
                lVar49 = 0;
              }
              else {
                lVar40 = lVar31;
                func_0x000107c5faec();
                func_0x000107c615e8(lVar30);
                func_0x000107c61170(lVar31);
              }
              *(long *)(lVar16 + 0x30) = lVar40;
              *(long *)(lVar16 + 0x38) = lVar49;
              lVar31 = *(long *)(puVar27 + 0x10);
              if (SCARRY8(lVar31,2)) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e20);
                (*pcVar23)();
              }
              puVar18 = puVar27;
              func_0x000107c61558();
              if (((int)puVar18 == 0) ||
                 (uVar9 = *(ulong *)(puVar27 + 0x18) >> 1, (long)uVar9 < lVar31 + 2)) {
                FUN_101bcac34();
                uVar9 = *(ulong *)(puVar18 + 0x18) >> 1;
                puVar27 = puVar18;
              }
              lVar31 = *(long *)(puVar27 + 0x10);
              if (uVar9 - lVar31 < 2) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e24);
                (*pcVar23)();
              }
              uVar25 = 0x112d35ff8;
              func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
              func_0x000107c6140c(puVar27 + lVar31 * 0x10 + 0x20,plVar34,2,uVar25);
              func_0x000107c61588(lVar16);
              func_0x000107c61408(plVar34,2,uVar25);
              if (SCARRY8(*(long *)(puVar27 + 0x10),2)) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e28);
                (*pcVar23)();
              }
              *(long *)(puVar27 + 0x10) = *(long *)(puVar27 + 0x10) + 2;
              plVar19 = plVar19 + 1;
              lVar44 = lVar44 + -1;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          func_0x000107c615e8(puStack_d0);
          uVar9 = *(ulong *)(puVar27 + 0x10);
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar9 != 0) {
            uVar41 = 0;
LAB_101bc9b4c:
            uVar47 = uVar41;
            if (uVar41 <= *(ulong *)(puVar27 + 0x10)) {
              uVar47 = *(ulong *)(puVar27 + 0x10);
            }
            puVar24 = (ulong *)(puVar27 + uVar41 * 0x10 + 0x28);
            uVar41 = uVar41 + 1;
            do {
              if (uVar41 - uVar47 == 1) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x101bc9e18);
                (*pcVar23)();
              }
              uVar28 = *puVar24;
              if (uVar28 != 0) {
                uVar45 = puVar24[-1];
                uVar3 = uVar45 & 0xffffffffffff;
                if ((uVar28 & 0x2000000000000000) != 0) {
                  uVar3 = uVar28 >> 0x38 & 0xf;
                }
                if (uVar3 != 0) goto code_r0x000101bc9bac;
              }
              uVar41 = uVar41 + 1;
              puVar24 = puVar24 + 2;
              if (uVar41 - uVar9 == 1) break;
            } while( true );
          }
LAB_101bc9c4c:
          uVar25 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar29 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar37 = *(undefined8 *)(unaff_x22 + 0xd0);
          func_0x000107c6142c(puVar27);
          (**(code **)(lVar22 + 0x10))(uVar25,uVar29,uVar37);
          lVar46 = *(long *)(puVar18 + 0x10);
          func_0x000107c615e8(puVar48);
          (**(code **)(lVar22 + 8))(uVar29,uVar37);
          if (lVar46 == 0) {
            func_0x000107c6142c(puVar18);
            puVar18 = (undefined *)0x0;
          }
          uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
          lVar46 = *(long *)(unaff_x22 + 0xf8);
          uVar29 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar37 = *(undefined8 *)(unaff_x22 + 0xd0);
          puVar1 = (undefined8 *)(lVar46 + *(int *)(lVar5 + 0x18));
          puVar2 = (undefined8 *)(lVar46 + *(int *)(lVar5 + 0x1c));
          puVar2[1] = 0xf000000000000000;
          *puVar2 = 0;
          lVar44 = (long)*(int *)(lVar5 + 0x20);
          *(undefined8 *)(lVar46 + lVar44) = 0;
          iVar4 = *(int *)(lVar5 + 0x28);
          (*pcVar23)(lVar46 + iVar4,1,1,uVar11);
          (*pcVar26)(lVar46,uVar29,uVar37);
          puVar24 = (ulong *)(lVar46 + *(int *)(lVar5 + 0x14));
          *puVar24 = uVar10;
          puVar24[1] = (ulong)param_2;
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar29 = *puVar2;
          uVar37 = puVar2[1];
          puVar2[1] = 0xf000000000000000;
          *puVar2 = 0;
          func_0x0001000b44c0(uVar29,uVar37);
          uVar29 = *(undefined8 *)(lVar46 + lVar44);
          *(undefined **)(lVar46 + lVar44) = puVar18;
          func_0x000107c6142c(uVar29);
          *(undefined1 *)(lVar46 + *(int *)(lVar5 + 0x24)) = 0;
          func_0x000100ed9cbc(uVar25,lVar46 + iVar4);
          uVar25 = 0;
        }
      }
      uVar29 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x100);
      (**(code **)(lVar7 + 0x38))(uVar29,uVar25,1,uVar37);
      (**(code **)(lVar7 + 0x30))(uVar29,1,uVar37);
      if ((int)uVar29 == 1) {
        param_2 = (undefined *)0x112e07bb0;
        func_0x000101bcb57c(*(undefined8 *)(unaff_x22 + 0xf8),0x112e07bb0,&UNK_10d9dc3e0);
        if (puVar42 == puVar38) break;
        goto LAB_101bc93d4;
      }
      func_0x000101bc88a8(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x110));
      puVar48 = puStack_70;
      func_0x000107c61558();
      if (((ulong)puVar48 & 1) == 0) {
        plVar19 = (long *)(puStack_70 + 0x10);
        puStack_70 = (undefined *)0x0;
        FUN_101bcaab8(0,*plVar19 + 1,1);
      }
      uVar10 = *(ulong *)(puStack_70 + 0x10);
      if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar10) {
        puVar48 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
        FUN_101bcaab8(puVar48,uVar10 + 1,1,puStack_70);
        puStack_70 = puVar48;
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x110);
      *(ulong *)(puStack_70 + 0x10) = uVar10 + 1;
      param_2 = puStack_70 +
                *(long *)(lVar7 + 0x48) * uVar10 +
                ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
      func_0x000101bc88a8(uVar25);
    } while (puVar42 != puVar38);
  }
  *(undefined **)(unaff_x22 + 0x120) = puStack_70;
  piVar32 = *(int **)(unaff_x22 + 0xa0);
  func_0x000107c6142c(puVar35);
  iVar4 = *piVar32;
  plVar19 = (long *)(ulong)(uint)piVar32[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar19;
  *plVar19 = unaff_x22;
  plVar19[1] = (long)FUN_101bc9ec0;
                    /* WARNING: Could not recover jumptable at 0x000101bc9eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar32))(puStack_70);
  return;
code_r0x000101bc9bac:
  func_0x000107c61434(uVar28);
  puVar15 = puVar18;
  func_0x000107c61558();
  puVar17 = puVar18;
  if (((ulong)puVar15 & 1) == 0) {
    puVar17 = (undefined *)0x0;
    func_0x000101bcb2bc(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18,
                        PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar47 = *(ulong *)(puVar17 + 0x10);
  puVar18 = puVar17;
  if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar47) {
    puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
    func_0x000101bcb2bc(puVar18,uVar47 + 1,1,puVar17,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(puVar18 + 0x10) = uVar47 + 1;
  *(ulong *)(puVar18 + uVar47 * 0x10 + 0x20) = uVar45;
  *(ulong *)(puVar18 + uVar47 * 0x10 + 0x28) = uVar28;
  if (uVar41 == uVar9) goto LAB_101bc9c4c;
  goto LAB_101bc9b4c;
}



/* Entry: 101bc9ec0; end: 101bc9f23;  */

void FUN_101bc9ec0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x120);
  *(long *)(lVar3 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x128));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101bc9f24;
  }
  else {
    pcVar2 = FUN_101bc9fa4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bc9f24; end: 101bc9fa3;  */

void FUN_101bc9f24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x118));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bc9fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc9fa4; end: 101bca023;  */

void FUN_101bc9fa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bca020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bca024; end: 101bca097;  */

void FUN_101bca024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c43ec8();
  func_0x000107c61180();
  uVar1 = 0x112d6dfd0;
  func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_1);
  return;
}



/* Entry: 101bca098; end: 101bca967;  */

void FUN_101bca098(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar18;
  long lVar19;
  ulong *puVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  long *plVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  undefined1 *puVar33;
  long lStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [64];
  undefined *puStack_70;
  
  lVar4 = 0x112d36580;
  puVar10 = &UNK_10d9016d0;
  uVar30 = param_5;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&lStack_120 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_c8 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lStack_d0 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar26 = param_2;
  func_0x000107c444fc();
  func_0x000107c61180();
  if (uVar26 != 0) {
    uVar5 = uVar26;
    uStack_e8 = param_5;
    uStack_e0 = param_3;
    uStack_d8 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar26);
    uVar26 = uVar5 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar26 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    if (((uVar26 != 0) && (uVar26 = param_2, func_0x000107c49ffc(), (uVar26 & 1) == 0)) &&
       (uVar26 = param_2, func_0x000107c49b6c(), (uVar26 & 1) == 0)) {
      uVar26 = uStack_e0 & 0xffffffffffff;
      if ((uStack_d8 & 0x2000000000000000) != 0) {
        uVar26 = uStack_d8 >> 0x38 & 0xf;
      }
      if (uVar26 != 0) {
        func_0x000101bc569c(lVar19,uVar5,puVar10);
        func_0x000107c6142c(puVar10);
        lVar6 = lStack_c0;
        lVar4 = lStack_c8;
        lVar22 = lVar19;
        (**(code **)(lStack_c8 + 0x30))(lVar19,1,lStack_c0);
        if ((int)lVar22 != 1) {
          (**(code **)(lVar4 + 0x20))(lStack_d0,lVar19,lVar6);
          func_0x000107c4e04c();
          func_0x000107c61180();
          if (param_2 == 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca94c);
            (*pcVar18)();
          }
          uVar26 = 0x112d64d20;
          func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
          uVar5 = param_2;
          uStack_118 = uVar26;
          func_0x000107c5fc54();
          func_0x000107c61170(param_2);
          if (uVar5 >> 0x3e == 0) {
            uStack_100 = uVar5 & 0xffffffffffffff8;
            uVar27 = *(ulong *)(uStack_100 + 0x10);
          }
          else {
            uStack_100 = uVar5 & 0xffffffffffffff8;
            uVar27 = uStack_100;
            if (0x7fffffffffffffff < uVar5) {
              uVar27 = uVar5;
            }
            func_0x000107c60480();
          }
          lStack_120 = param_1;
          if (uVar27 == 0) {
            puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            uStack_108 = uVar5 & 0xc000000000000001;
            puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar32 = 0;
            do {
              while( true ) {
                if (uStack_108 == 0) {
                  if (*(ulong *)(uStack_100 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
                    pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca8f8);
                    (*pcVar18)();
                  }
                  uVar25 = *(ulong *)(uVar5 + uVar32 * 8 + 0x20);
                  func_0x000107c615f0(uVar25);
                  uVar15 = uVar26;
                }
                else {
                  uVar25 = uVar32;
                  uVar15 = uVar5;
                  func_0x0001011be488();
                }
                if (SCARRY8(uVar32,1)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca8f4);
                  (*pcVar18)();
                }
                uVar24 = uVar32 + 1;
                uVar7 = uVar25;
                func_0x000107c5d984();
                func_0x000107c61180();
                uVar26 = uVar15;
                if (uVar7 != 0) break;
LAB_101bca3e4:
                puVar10 = puStack_110;
                puVar9 = puStack_110;
                func_0x000107c61558();
                puStack_70 = puVar10;
                if (((ulong)puVar9 & 1) == 0) {
                  uVar26 = *(long *)(puVar10 + 0x10) + 1;
                  FUN_101bcb030(0,uVar26,1);
                }
                uVar15 = *(ulong *)(puStack_70 + 0x10);
                uVar32 = uVar15 + 1;
                if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar15) {
                  uVar26 = uVar32;
                  FUN_101bcb030(1 < *(ulong *)(puStack_70 + 0x18),uVar32,1);
                }
                *(ulong *)(puStack_70 + 0x10) = uVar32;
                *(ulong *)(puStack_70 + uVar15 * 8 + 0x20) = uVar25;
                uVar32 = uVar24;
                puStack_110 = puStack_70;
                if (uVar24 == uVar27) goto LAB_101bca470;
              }
              uVar8 = uVar7;
              func_0x000107c5faec();
              uVar26 = uVar15;
              func_0x000107c61170(uVar7);
              if ((uVar8 == param_8) && (uVar15 == param_9)) {
                func_0x000107c615e8(uVar25);
                func_0x000107c6142c(uVar15);
              }
              else {
                uVar26 = uVar15;
                uVar30 = param_9;
                func_0x000107c605b8(uVar8,uVar15,param_8,param_9,0);
                func_0x000107c6142c(uVar15);
                if ((uVar8 & 1) == 0) goto LAB_101bca3e4;
                func_0x000107c615e8(uVar25);
              }
              uVar32 = uVar32 + 1;
            } while (uVar24 != uVar27);
          }
LAB_101bca470:
          func_0x000107c6142c(uVar5);
          puVar10 = puStack_110;
          uVar17 = (uint)((ulong)puStack_110 >> 0x3e) & 1;
          if ((long)puStack_110 < 0) {
            uVar17 = 1;
          }
          if (uVar17 == 1) {
            puVar9 = puStack_110;
            func_0x000107c60480();
            func_0x000107c60480();
            puVar12 = puStack_110;
            if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca944);
              (*pcVar18)();
            }
            if ((undefined *)0x18 < puVar9) {
              puVar9 = (undefined *)0x19;
            }
            puVar10 = puStack_110;
            func_0x000107c60480();
          }
          else {
            puVar10 = *(undefined **)(puStack_110 + 0x10);
            puVar9 = puVar10;
            puVar12 = puStack_110;
            if ((undefined *)0x18 < puVar10) {
              puVar9 = (undefined *)0x19;
            }
          }
          uVar26 = uStack_118;
          if ((long)puVar10 < (long)puVar9) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca948);
            (*pcVar18)();
          }
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            func_0x000107c61434(puVar12);
          }
          else {
            func_0x000107c61434(puVar12);
            if (puVar9 != (undefined *)0x0) {
              puVar10 = (undefined *)0x0;
              do {
                puVar13 = puVar10 + 1;
                func_0x000107c60318(puVar10,puVar12,uVar26);
                puVar10 = puVar13;
              } while (puVar9 != puVar13);
            }
          }
          func_0x000107c61574(puVar12);
          if (uVar17 == 0) {
            puVar28 = (undefined *)0x0;
            puVar10 = puVar12 + 0x20;
            puVar13 = puVar9;
          }
          else {
            puVar11 = (undefined *)0x0;
            puVar28 = puVar12;
            func_0x000107c60484();
            func_0x000107c61574(puVar12);
            puVar13 = (undefined *)(uVar30 >> 1);
            puVar10 = puVar9;
            puVar12 = puVar11;
          }
          lVar4 = (long)puVar13 - (long)puVar28;
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puStack_110 = puVar12;
          if (lVar4 != 0) {
            if ((long)puVar13 < (long)puVar28) {
              puVar13 = puVar28;
            }
            lVar19 = (long)puVar13 - (long)puVar28;
            plVar29 = (long *)(puVar10 + (long)puVar28 * 8);
            uStack_f8 = 4;
            uStack_100 = 2;
            do {
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca900);
                (*pcVar18)();
              }
              lVar31 = *plVar29;
              lVar6 = 0x112d64d38;
              func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
              puVar16 = auStack_b0;
              func_0x000107c61534();
              *(undefined8 *)(lVar6 + 0x18) = uStack_f8;
              *(ulong *)(lVar6 + 0x10) = uStack_100;
              lVar22 = lVar31;
              func_0x000107c615f0();
              func_0x000107c42120();
              func_0x000107c61180();
              if (lVar22 == 0) {
                lVar23 = 0;
                puVar21 = (undefined1 *)0x0;
                puVar33 = puVar16;
              }
              else {
                lVar23 = lVar22;
                func_0x000107c5faec();
                puVar33 = puVar16;
                func_0x000107c61170(lVar22);
                puVar21 = puVar16;
              }
              *(long *)(lVar6 + 0x20) = lVar23;
              *(undefined1 **)(lVar6 + 0x28) = puVar21;
              lVar22 = lVar31;
              func_0x000107c5db08();
              func_0x000107c61180();
              if (lVar22 == 0) {
                func_0x000107c615e8(lVar31);
                lVar23 = 0;
                puVar33 = (undefined1 *)0x0;
              }
              else {
                lVar23 = lVar22;
                func_0x000107c5faec();
                func_0x000107c61170(lVar22);
                func_0x000107c615e8(lVar31);
              }
              *(long *)(lVar6 + 0x30) = lVar23;
              *(undefined1 **)(lVar6 + 0x38) = puVar33;
              lVar22 = *(long *)(puVar9 + 0x10);
              if (SCARRY8(lVar22,2)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca904);
                (*pcVar18)();
              }
              puVar10 = puVar9;
              func_0x000107c61558();
              if (((int)puVar10 == 0) ||
                 (uVar30 = *(ulong *)(puVar9 + 0x18) >> 1, (long)uVar30 < lVar22 + 2)) {
                FUN_101bcac34();
                uVar30 = *(ulong *)(puVar10 + 0x18) >> 1;
                puVar9 = puVar10;
              }
              lVar22 = *(long *)(puVar9 + 0x10);
              if (uVar30 - lVar22 < 2) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca908);
                (*pcVar18)();
              }
              uVar14 = 0x112d35ff8;
              func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
              func_0x000107c6140c(puVar9 + lVar22 * 0x10 + 0x20,(long *)(lVar6 + 0x20),2,uVar14);
              func_0x000107c61574(lVar6);
              if (SCARRY8(*(long *)(puVar9 + 0x10),2)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca90c);
                (*pcVar18)();
              }
              *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 2;
              lVar19 = lVar19 + -1;
              plVar29 = plVar29 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          func_0x000107c615e8(puStack_110);
          lVar4 = *(long *)(puVar9 + 0x10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (lVar4 != 0) {
            uVar30 = 0;
LAB_101bca6fc:
            lVar19 = 0;
            if (uVar30 <= *(ulong *)(puVar9 + 0x10)) {
              lVar19 = *(ulong *)(puVar9 + 0x10) - uVar30;
            }
            lVar6 = lVar4 - uVar30;
            puVar20 = (ulong *)(puVar9 + uVar30 * 0x10 + 0x28);
            do {
              uVar30 = uVar30 + 1;
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x101bca8fc);
                (*pcVar18)();
              }
              uVar26 = *puVar20;
              if (uVar26 != 0) {
                uVar27 = puVar20[-1];
                uVar5 = uVar27 & 0xffffffffffff;
                if ((uVar26 & 0x2000000000000000) != 0) {
                  uVar5 = uVar26 >> 0x38 & 0xf;
                }
                if (uVar5 != 0) goto code_r0x000101bca750;
              }
              lVar19 = lVar19 + -1;
              puVar20 = puVar20 + 2;
              lVar6 = lVar6 + -1;
              if (lVar6 == 0) break;
            } while( true );
          }
LAB_101bca7ec:
          lVar6 = lStack_c0;
          lVar19 = lStack_c8;
          func_0x000107c6142c(puVar9);
          lVar4 = lStack_d0;
          param_1 = lStack_120;
          (**(code **)(lVar19 + 0x10))(lStack_120,lStack_d0,lVar6);
          lVar22 = *(long *)(puVar10 + 0x10);
          (**(code **)(lVar19 + 8))(lVar4,lVar6);
          if (lVar22 == 0) {
            func_0x000107c6142c(puVar10);
            puVar10 = (undefined *)0x0;
          }
          lVar6 = 0;
          FUN_101bcbb4c();
          puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
          plVar29 = (long *)(param_1 + *(int *)(lVar6 + 0x1c));
          lStack_b8 = -0x1000000000000000;
          lStack_c0 = 0;
          plVar29[1] = -0x1000000000000000;
          *plVar29 = 0;
          iVar2 = *(int *)(lVar6 + 0x20);
          iVar3 = *(int *)(lVar6 + 0x28);
          lVar4 = 0;
          func_0x000107c5eea4();
          (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + iVar3,1,1,lVar4);
          puVar20 = (ulong *)(param_1 + *(int *)(lVar6 + 0x14));
          *puVar20 = uStack_e0;
          puVar20[1] = uStack_d8;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar4 = *plVar29;
          lVar19 = plVar29[1];
          func_0x000107c61434();
          func_0x0001000b44c0(lVar4,lVar19);
          plVar29[1] = lStack_b8;
          *plVar29 = lStack_c0;
          *(undefined **)(param_1 + iVar2) = puVar10;
          *(undefined1 *)(param_1 + *(int *)(lVar6 + 0x24)) = 0;
          func_0x000100ed9c6c(uStack_e8,param_1 + iVar3);
          pcVar18 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
          uVar14 = 0;
          goto LAB_101bca240;
        }
        func_0x000101bcb57c(lVar19,0x112d36580,&UNK_10d9016d0);
        goto LAB_101bca220;
      }
    }
    func_0x000107c6142c(puVar10);
  }
LAB_101bca220:
  lVar6 = 0;
  FUN_101bcbb4c();
  pcVar18 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar14 = 1;
LAB_101bca240:
  (*pcVar18)(param_1,uVar14,1,lVar6);
  return;
code_r0x000101bca750:
  func_0x000107c61434(uVar26);
  puVar12 = puVar10;
  func_0x000107c61558();
  puVar13 = puVar10;
  if (((ulong)puVar12 & 1) == 0) {
    puVar13 = (undefined *)0x0;
    func_0x000101bcb2bc(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                        PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar5 = *(ulong *)(puVar13 + 0x10);
  puVar10 = puVar13;
  if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar5) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
    func_0x000101bcb2bc(puVar10,uVar5 + 1,1,puVar13,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
  *(ulong *)(puVar10 + uVar5 * 0x10 + 0x20) = uVar27;
  *(ulong *)(puVar10 + uVar5 * 0x10 + 0x28) = uVar26;
  if (lVar6 == 1) goto LAB_101bca7ec;
  goto LAB_101bca6fc;
}



/* Entry: 101bca968; end: 101bca96f;  */

undefined1 FUN_101bca968(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101bca970; end: 101bca9ef;  */

void FUN_101bca970(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 8);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bca9f0;
  plVar5[0x17] = lVar1;
  plVar5[0x18] = lVar6;
  plVar5[0x15] = param_3;
  plVar5[0x16] = lVar3;
  plVar5[0x13] = param_1;
  plVar5[0x14] = param_2;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x19] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar5[0x1a] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x1b] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1c] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1d] = uVar2;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1e] = uVar2;
  lVar3 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1f] = uVar2;
  lVar3 = 0;
  FUN_101bcbb4c();
  plVar5[0x20] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x21] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x22] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc91c4,0,0);
  return;
}



/* Entry: 101bca9f0; end: 101bcaa2b;  */

void FUN_101bca9f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bcaa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bcaa2c; end: 101bcaa47;  */

void FUN_101bcaa2c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c43ec8();
  func_0x000107c61180();
  uVar3 = 0x112d6dfd0;
  func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
  uVar4 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
  return;
}



/* Entry: 101bcaa48; end: 101bcaaa3;  */

void FUN_101bcaa48(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101bcb5bc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e07c00;
  plVar5 = (long *)&UNK_10d9dc3f8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101bcaaa4; end: 101bcaab7;  */

void FUN_101bcaaa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07bf0 == (undefined *)0x0 || ((ulong)puRam0000000112e07bf0 & 1) != 0) {
    puVar1 = &UNK_10e8a4082;
    func_0x000107c61518(&UNK_10e8a4082,0x18,0,0);
    puRam0000000112e07bf0 = puVar1;
  }
  return;
}



/* Entry: 101bcaab8; end: 101bcac33;  */

undefined * FUN_101bcaab8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcac34);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112e07be0;
    func_0x0001000285a8(0x112e07be0,&UNK_10d9dc360);
    lVar5 = 0;
    FUN_101bcbb4c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcac2c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcac30);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_101bcbb4c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 101bcac34; end: 101bcae8b;  */

undefined * FUN_101bcac34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcad64);
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
    puVar3 = (undefined *)0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
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
    uVar5 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
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



/* Entry: 101bcae8c; end: 101bcaf0b;  */

undefined * FUN_101bcae8c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101bcaaa4();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101bcaf0c; end: 101bcb02f;  */

long FUN_101bcaf0c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcb02c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcb030);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d6dfd0;
        func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d6dfd0;
      func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bcb028);
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



/* Entry: 101bcb030; end: 101bcb067;  */

void FUN_101bcb030(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101bcb068();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101bcb068; end: 101bcb3cf;  */

undefined * FUN_101bcb068(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcb198);
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
    func_0x000101bcaa34();
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
    uVar5 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
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



/* Entry: 101bcb3d0; end: 101bcb5bb;  */

ulong FUN_101bcb3d0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcb4ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcb4b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x7247746168434353,0xeb0000000070756f);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcb57c);
  (*pcVar2)();
}



/* Entry: 101bcb5bc; end: 101bcb5ff;  */

void FUN_101bcb5bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CSSearchableItem_1126a8c20;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e07bf8 = puVar1;
  return;
}



/* Entry: 101bcb600; end: 101bcb613;  */

bool FUN_101bcb600(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101bcb614; end: 101bcb6e7;  */

void FUN_101bcb614(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x4b;
  if (cVar2 != '\0') {
    uVar1 = 0x5a;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101bcb6e8; end: 101bcb723;  */

void FUN_101bcb6e8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 0x5a) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0x4b) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101bcb724; end: 101bcbb4b;  */

undefined * FUN_101bcb724(uint param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  uStack_74 = param_1;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar10 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5f11c();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f108(lVar9);
  puVar6 = PTR__OBJC_CLASS___CSSearchableItemAttributeSet_1126a8c28;
  func_0x000107c610f8(PTR__OBJC_CLASS___CSSearchableItemAttributeSet_1126a8c28);
  puVar7 = puVar6;
  func_0x000107c5f0fc();
  func_0x000107c46100(puVar6);
  func_0x000107c61170(puVar7);
  (**(code **)(lVar11 + 8))(lVar9,lVar5);
  lVar5 = 0;
  FUN_101bcbb4c();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  uVar8 = *puVar1;
  func_0x000107c5fadc(uVar8,puVar1[1]);
  func_0x000107c59e18(puVar6);
  func_0x000107c61170(uVar8);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x18));
  if (puVar1[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar1;
    func_0x000107c5fadc(uVar8);
  }
  func_0x000107c5380c(puVar6);
  func_0x000107c61170(uVar8);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar8 = *puVar1;
    func_0x000107c5ee20(uVar8);
  }
  else {
    uVar8 = 0;
  }
  func_0x000107c59cfc(puVar6);
  func_0x000107c61170(uVar8);
  lVar9 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x20));
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    func_0x000107c5fc48(lVar9,PTR___sSSN_11034da80);
  }
  func_0x000107c559d0(puVar6);
  func_0x000107c61170(lVar9);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  func_0x000107c57b04(puVar6);
  func_0x000107c61170(puVar7);
  func_0x0001009f0578(unaff_x20 + *(int *)(lVar5 + 0x28),lVar12);
  lVar9 = 1;
  lVar5 = lVar12;
  (**(code **)(lVar13 + 0x30))(lVar12,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5ee70();
    lVar9 = lVar4;
    (**(code **)(lVar13 + 8))(lVar12,lVar4);
  }
  func_0x000107c55aac(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c5ed70();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0xd00000000000001b;
  uStack_68 = 0x800000010f0028f0;
  bVar3 = (uStack_74 & 0xff) != 1;
  uVar8 = 0x7370756f7267;
  if (bVar3) {
    uVar8 = 0x73646e65697266;
  }
  uVar2 = 0xe600000000000000;
  if (bVar3) {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb78(uVar8,uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_68;
  uVar8 = uStack_70;
  puVar7 = PTR__OBJC_CLASS___CSSearchableItem_1126a8c20;
  func_0x000107c610f8(PTR__OBJC_CLASS___CSSearchableItem_1126a8c20);
  func_0x000107c61174(puVar6);
  func_0x000107c5fadc(lVar5,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c5fadc(uVar8,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c4908c(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c5ee80(puVar10,0x4122750000000000);
  func_0x000107c5ee70();
  (**(code **)(lVar13 + 8))(puVar10,lVar4);
  func_0x000107c547a4(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  return puVar7;
}



/* Entry: 101bcbb4c; end: 101bcbb83;  */

void FUN_101bcbb4c(undefined8 param_1)

{
  if (lRam0000000112e07c60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e679fac);
  return;
}



/* Entry: 101bcbb84; end: 101bcbd1b;  */

long * FUN_101bcbb84(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar7 = puVar2[1];
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    if (uVar7 >> 0x3c < 0xf) {
      uVar8 = *puVar2;
      func_0x00010006c00c(uVar8,uVar7);
      *puVar1 = uVar8;
      puVar1[1] = uVar7;
    }
    else {
      uVar8 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
    }
    iVar3 = *(int *)(param_3 + 0x24);
    uVar8 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) = uVar8;
    *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
    lVar9 = (long)*(int *)(param_3 + 0x28);
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    func_0x000107c61434(uVar8);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar11)(lVar5,1,lVar6);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar5 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                          *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101bcbd1c; end: 101bcbdf3;  */

void FUN_101bcbd1c(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x1c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  iVar2 = *(int *)(param_2 + 0x28);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar4 + -8);
  lVar3 = param_1 + iVar2;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar4);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bcbdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1 + iVar2,lVar4);
  return;
}



/* Entry: 101bcbdf4; end: 101bcc187;  */

long FUN_101bcbdf4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar6 = puVar2[1];
  func_0x000107c61434();
  func_0x000107c61434(uVar7);
  if (uVar6 >> 0x3c < 0xf) {
    uVar7 = *puVar2;
    func_0x00010006c00c(uVar7,uVar6);
    *puVar1 = uVar7;
    puVar1[1] = uVar6;
  }
  else {
    uVar7 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) = uVar7;
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  lVar8 = (long)*(int *)(param_3 + 0x28);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  func_0x000107c61434(uVar7);
  lVar4 = param_2 + lVar8;
  (*pcVar10)(lVar4,1,lVar5);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1 + lVar8,param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))(param_1 + lVar8,0,1,lVar5);
  }
  else {
    lVar4 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1 + lVar8,param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 101bcc188; end: 101bcc293;  */

long FUN_101bcc188(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar8 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar8;
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar8 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar1);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar8;
  iVar1 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar8 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar8;
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  lVar2 = (long)*(int *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar6 + -8);
  lVar5 = param_2 + lVar2;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar6);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1 + lVar2,param_2 + lVar2,lVar6);
    (**(code **)(lVar7 + 0x38))(param_1 + lVar2,0,1,lVar6);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1 + lVar2,param_2 + lVar2,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 101bcc294; end: 101bcc45f;  */

long FUN_101bcc294(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar9 = puVar2[1];
    if (uVar9 >> 0x3c < 0xf) {
      uVar6 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar9;
      func_0x00010006c090(uVar6);
      goto LAB_101bcc360;
    }
    func_0x0001006e5814(puVar1);
  }
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
LAB_101bcc360:
  lVar4 = (long)*(int *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c6142c(uVar6);
  lVar3 = (long)*(int *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar7 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar4 = param_1 + lVar3;
  (*pcVar11)(lVar4,1,lVar7);
  lVar8 = param_2 + lVar3;
  (*pcVar11)(lVar8,1,lVar7);
  if ((int)lVar4 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1 + lVar3,param_2 + lVar3,lVar7);
      return param_1;
    }
    (**(code **)(lVar10 + 8))(param_1 + lVar3,lVar7);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + lVar3,param_2 + lVar3,lVar7);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar3,0,1,lVar7);
    return param_1;
  }
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1 + lVar3,param_2 + lVar3,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 101bcc460; end: 101bcc477;  */

void FUN_101bcc460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101bcc478; end: 101bcc52b;  */

void FUN_101bcc478(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = &UNK_10d9dc410;
    puStack_48 = &UNK_10d9dc428;
    puStack_40 = &UNK_10d9dc440;
    puStack_38 = &UNK_10d9dc458;
    puStack_30 = &UNK_10d9dc470;
    lVar1 = 0x13f;
    func_0x0001000776dc();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,7,&lStack_58,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 101bcc52c; end: 101bcc693;  */

int FUN_101bcc52c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101bcc5a8;
        goto LAB_101bcc58c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101bcc58c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101bcc5a8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101bcc694; end: 101bcc6d3;  */

void FUN_101bcc694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dc50c;
  func_0x000107c61520(&UNK_10d9dc50c,&UNK_110452c80);
  puRam0000000112e07cb0 = puVar1;
  return;
}



/* Entry: 101bcc6d4; end: 101bcc6ff;  */

void FUN_101bcc6d4(undefined8 param_1)

{
  func_0x000107c55374();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101bcc700; end: 101bcc74b;  */

void FUN_101bcc700(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  uVar1 = 0;
  uVar2 = 0;
  FUN_101bcca78(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcc74c,uVar1,uVar2);
  return;
}



/* Entry: 101bcc74c; end: 101bcc80f;  */

void FUN_101bcc74c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = 0;
  FUN_101bcb5bc(0);
  func_0x000107c5fc48(uVar3,uVar2);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bcc810;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,1);
  uVar3 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101b778cc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110452d70;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c45360(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bcc810; end: 101bcc867;  */

void FUN_101bcc810(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bcc864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101bcc868; end: 101bcc8b3;  */

void FUN_101bcc868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  uVar1 = 0;
  uVar2 = 0;
  FUN_101bcca78(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcc8b4,uVar1,uVar2);
  return;
}



/* Entry: 101bcc8b4; end: 101bcc96f;  */

void FUN_101bcc8b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bccac8;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101b778cc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110452d48;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c41724(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bcc970; end: 101bcc9bb;  */

void FUN_101bcc970(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  uVar1 = 0;
  uVar2 = 0;
  FUN_101bcca78(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcc9bc,uVar1,uVar2);
  return;
}



/* Entry: 101bcc9bc; end: 101bcca77;  */

void FUN_101bcc9bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bccacc;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101b778cc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110452d20;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c41720(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bcca78; end: 101bccaaf;  */

void FUN_101bcca78(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c614f0();
    func_0x000107c5fca8();
    return;
  }
  return;
}



/* Entry: 101bccab0; end: 101bccadf;  */

long FUN_101bccab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101bccae0; end: 101bccb83;  */

undefined1  [16] FUN_101bccae0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(0xe000000000000000);
  uVar1 = 0x7370756f7267;
  if (param_1 != '\x01') {
    uVar1 = 0x73646e65697266;
  }
  uVar2 = 0xe600000000000000;
  if (param_1 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  auVar3._8_8_ = 0x800000010f0028f0;
  auVar3._0_8_ = 0xd00000000000001b;
  return auVar3;
}



/* Entry: 101bccb84; end: 101bccceb;  */

int FUN_101bccb84(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101bccc00;
        goto LAB_101bccbe4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101bccbe4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101bccc00:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101bcccec; end: 101bccd3b;  */

void FUN_101bcccec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e07cb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e07cc0;
  func_0x00010002969c(0x112e07cc0,&UNK_10d9dc5d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e07cb8 = puVar2;
  return;
}



/* Entry: 101bccd3c; end: 101bccd4f;  */

bool FUN_101bccd3c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101bccd50; end: 101bcce9b;  */

void FUN_101bccd50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x7370756f7267;
  if (cVar3 != '\x01') {
    uVar1 = 0x73646e65697266;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101bcce9c; end: 101bccf13;  */

void FUN_101bcce9c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101bccf14; end: 101bccf4f;  */

void FUN_101bccf14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x7370756f7267;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73646e65697266;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101bccf50; end: 101bccf8f;  */

void FUN_101bccf50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e07d58;
  func_0x0001000285a8(0x112e07d58,&UNK_10d9dc6c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101bccf90; end: 101bccf93;  */

void FUN_101bccf90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dc690;
  func_0x000107c61520(&UNK_10d9dc690,&UNK_110452e18);
  puRam0000000112e07cc8 = puVar1;
  return;
}



/* Entry: 101bccf94; end: 101bccff3;  */

void FUN_101bccf94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dc690;
  func_0x000107c61520(&UNK_10d9dc690,&UNK_110452e18);
  puRam0000000112e07cc8 = puVar1;
  return;
}


