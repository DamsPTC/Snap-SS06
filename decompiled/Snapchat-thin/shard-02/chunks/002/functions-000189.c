/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b0d0dc; end: 101b0d14f;  */

void FUN_101b0d0dc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1b0));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x1b8) = plVar1;
  func_0x0001000285a8(0x112e008c8,&UNK_10d9d0b50);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_101b0d150;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101b0d150; end: 101b0d1cf;  */

void FUN_101b0d150(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101b0d194,*(undefined8 *)(lVar1 + 0x1a8),*(undefined8 *)(lVar1 + 0x1a0));
  return;
}



/* Entry: 101b0d1d0; end: 101b0d207;  */

void FUN_101b0d1d0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b0d1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158),
             *(undefined1 *)(unaff_x22 + 0x160));
  return;
}



/* Entry: 101b0d208; end: 101b0d757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0d208(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x22;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(char *)(unaff_x22 + 0xc9) == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar3 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar2);
    lVar3 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    puVar5 = &UNK_1104432c0;
    func_0x000107c613fc(&UNK_1104432c0,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    *(undefined8 *)(puVar5 + 0x28) = uVar14;
    func_0x000107c61434(uVar8);
    FUN_101b02fc0(uVar2,&UNK_10d9d0ba0,puVar5,&UNK_110443338,PTR___sSbN_11034dd40,&UNK_10d9d0bf0);
    func_0x000101b16f40(uVar2,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar2);
  }
  else {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x80) + 0x10);
    if (lVar3 != 0) {
      uVar8 = **(undefined8 **)(unaff_x22 + 0x78);
      puVar13 = (ulong *)(*(long *)(unaff_x22 + 0x80) + 0x20);
      do {
        lVar12 = 0x112d453c8;
        uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
        func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
        uVar2 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xf;
        uVar4 = uVar2 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar4);
        lVar12 = 0;
        func_0x000107c5fd0c();
        uVar11 = puVar13[1];
        uVar17 = *puVar13;
        lVar15 = *(long *)(lVar12 + -8);
        (**(code **)(lVar15 + 0x38))(uVar4,1,1,lVar12);
        puVar5 = &UNK_110443248;
        func_0x000107c613fc(&UNK_110443248,0x38,7);
        *(long *)(puVar5 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(ulong *)(puVar5 + 0x28) = uVar11;
        *(ulong *)(puVar5 + 0x20) = uVar17;
        *(undefined8 *)(puVar5 + 0x30) = uVar14;
        uVar2 = uVar2 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x000101b16ef8(uVar4,uVar2,0x112d453c8,&UNK_10d90ac60);
        uVar11 = uVar2;
        (**(code **)(lVar15 + 0x30))(uVar2,1,lVar12);
        uVar6 = uVar17;
        func_0x000107c615f4(uVar17,2);
        if ((int)uVar11 == 1) {
          func_0x000101b16f40(uVar2,0x112d453c8,&UNK_10d90ac60);
          uVar11 = 0x3100;
        }
        else {
          func_0x000107c5fd08();
          (**(code **)(lVar15 + 8))(uVar2,lVar12);
          uVar11 = uVar6 & 0xff | 0x3100;
        }
        func_0x000107c615c0(uVar2);
        lVar12 = *(long *)(puVar5 + 0x10);
        if (lVar12 == 0) {
          lVar15 = 0;
          lVar16 = 0;
        }
        else {
          lVar16 = *(long *)(puVar5 + 0x18);
          lVar15 = lVar12;
          func_0x000107c614f0();
          func_0x000107c615f0(lVar12);
          func_0x000107c5fca8();
          func_0x000107c615e8(lVar12);
        }
        puVar7 = &UNK_110443270;
        func_0x000107c613fc(&UNK_110443270,0x20,7);
        *(undefined **)(puVar7 + 0x10) = &UNK_10d9d0b78;
        *(undefined **)(puVar7 + 0x18) = puVar5;
        func_0x000107c6157c(puVar5);
        if (lVar16 == 0 && lVar15 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          *(undefined8 *)(unaff_x22 + 0x38) = 0;
          *(undefined8 *)(unaff_x22 + 0x40) = 0;
          *(long *)(unaff_x22 + 0x48) = lVar15;
          *(long *)(unaff_x22 + 0x50) = lVar16;
          puVar10 = (undefined8 *)(unaff_x22 + 0x38);
        }
        *(undefined8 *)(unaff_x22 + 0x58) = 1;
        *(undefined8 **)(unaff_x22 + 0x60) = puVar10;
        *(undefined8 *)(unaff_x22 + 0x68) = uVar8;
        func_0x000107c615bc(uVar11,unaff_x22 + 0x58,PTR___sSbN_11034dd40,&UNK_10d9d0b80,puVar7);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(uVar17);
        func_0x000107c61574(uVar11);
        func_0x000101b16f40(uVar4,0x112d453c8,&UNK_10d90ac60);
        func_0x000107c615c0(uVar4);
        lVar3 = lVar3 + -1;
        puVar13 = puVar13 + 2;
      } while (lVar3 != 0);
    }
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar12 = *(long *)(unaff_x22 + 0x88);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar3 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
  puVar10 = (undefined8 *)(lVar12 + _DAT_112e00220);
  puVar5 = &UNK_110443298;
  func_0x000107c613fc(&UNK_110443298,0x38,7);
  uVar8 = puVar10[1];
  uVar18 = puVar10[1];
  uVar14 = *puVar10;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x28) = uVar18;
  *(undefined8 *)(puVar5 + 0x20) = uVar14;
  *(undefined8 *)(puVar5 + 0x30) = uVar19;
  func_0x000107c6157c(uVar8);
  FUN_101b02fc0(uVar2,&UNK_10d9d0b90,puVar5,&UNK_110443338,PTR___sSbN_11034dd40,&UNK_10d9d0bf0);
  func_0x000101b16f40(uVar2,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  FUN_101b14f4c();
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  if (iVar1 != 0) {
    plVar9 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_11034fbf0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar9;
    uVar14 = 0x112e008c8;
    func_0x0001000285a8(0x112e008c8,&UNK_10d9d0b50);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101b0d758;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_11034fbe8)
              (unaff_x22 + 200,uVar8,uVar2,uVar14);
    return;
  }
  func_0x000107c614f0();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d7a0,uVar8,uVar2);
  return;
}



/* Entry: 101b0d758; end: 101b0d79f;  */

void FUN_101b0d758(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d7e8,*(undefined8 *)(lVar1 + 0x88),0);
  return;
}



/* Entry: 101b0d7a0; end: 101b0d7e7;  */

void FUN_101b0d7a0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 200,**(undefined8 **)(unaff_x22 + 0x78),0x101b0d7bc,unaff_x22 + 0x10);
  return;
}



/* Entry: 101b0d7e8; end: 101b0d8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0d7e8(double param_1)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x22;
  double dVar6;
  
  dVar6 = *(double *)(unaff_x22 + 0x98);
  lVar5 = *(long *)(unaff_x22 + 0x88);
  bVar2 = *(byte *)(unaff_x22 + 200);
  func_0x000107c5fcd8(**(undefined8 **)(unaff_x22 + 0x78),PTR___sSbN_11034dd40);
  (**(code **)(lVar5 + _DAT_112e00228))();
  dVar6 = (double)(long)((param_1 - dVar6) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0d8bc);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < dVar6) {
    if (dVar6 < 9.223372036854776e+18) {
      puVar4 = *(ulong **)(unaff_x22 + 0x70);
      uVar1 = bVar2 ^ 1;
      *puVar4 = (ulong)uVar1 & 1;
      puVar4[1] = (long)dVar6;
      *(byte *)(puVar4 + 2) = (byte)uVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x000101b0d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0d8c4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0d8c0);
  (*pcVar3)();
}



/* Entry: 101b0d8c4; end: 101b0d8df;  */

void FUN_101b0d8c4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_11034f528)
            (*(undefined8 *)(unaff_x22 + 0xc0),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,1
             ,0xb9b);
  return;
}



/* Entry: 101b0d8e0; end: 101b0d933;  */

void FUN_101b0d8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b0d934;
  plVar1[0x27] = param_4;
  plVar1[0x28] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d99c,0,0);
  return;
}



/* Entry: 101b0d934; end: 101b0d983;  */

void FUN_101b0d934(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b17244,0,0);
  return;
}



/* Entry: 101b0d984; end: 101b0d99b;  */

void FUN_101b0d984(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d99c,0,0);
  return;
}



/* Entry: 101b0d99c; end: 101b0dad7;  */

void FUN_101b0d99c(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x138);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x148) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101b0da90;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar2,unaff_x22 + 0x160,PTR___sSbN_11034dd40,PTR___sSbN_11034dd40,0,0,&UNK_10d9d0bb8,
      unaff_x22 + 0x110,PTR___sSbN_11034dd40,PTR___sSbN_11034dd40);
    return;
  }
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sSbN_11034dd40);
  *(long *)(unaff_x22 + 0x130) = unaff_x22 + 0x10;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b0dad8;
  lVar5 = *(long *)(unaff_x22 + 0x140);
  plVar2[0xb] = *(long *)(unaff_x22 + 0x138);
  plVar2[0xc] = lVar5;
  plVar2[9] = unaff_x22 + 0x160;
  plVar2[10] = unaff_x22 + 0x130;
  lVar5 = 0x112e008d8;
  func_0x0001000285a8(0x112e008d8,&UNK_10d9d0bc0);
  plVar2[0xd] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar2[0xe] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar3;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x10] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0de00,0,0);
  return;
}



/* Entry: 101b0dad8; end: 101b0db4b;  */

void FUN_101b0dad8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x150));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x158) = plVar1;
  func_0x0001000285a8(0x112e008c8,&UNK_10d9d0b50);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_101b0db4c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101b0db4c; end: 101b0dbcf;  */

void FUN_101b0db4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b0db94,0,0);
  return;
}



/* Entry: 101b0dbd0; end: 101b0dbdb;  */

void FUN_101b0dbd0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b0dbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x160));
  return;
}



/* Entry: 101b0dbdc; end: 101b0dc33;  */

void FUN_101b0dbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b0dc34;
  plVar1[2] = param_4;
  plVar1[3] = param_5;
  lVar3 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  plVar1[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[5] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[6] = uVar2;
  lVar3 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  plVar1[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[8] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar2;
  lVar3 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  plVar1[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
  return;
}



/* Entry: 101b0dc34; end: 101b0dc83;  */

void FUN_101b0dc34(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0dc84,0,0);
  return;
}



/* Entry: 101b0dc84; end: 101b0dc97;  */

void FUN_101b0dc84(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101b0dc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b0dc98; end: 101b0dcff;  */

void FUN_101b0dc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  iVar1 = *param_5;
  plVar2 = (long *)(ulong)(uint)param_5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b0dd00;
                    /* WARNING: Could not recover jumptable at 0x000101b0dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_5))(param_1);
  return;
}



/* Entry: 101b0dd00; end: 101b0dd47;  */

void FUN_101b0dd00(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0dd48,0,0);
  return;
}



/* Entry: 101b0dd48; end: 101b0dd57;  */

void FUN_101b0dd48(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000101b0dd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b0dd58; end: 101b0ddff;  */

void FUN_101b0dd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar3 = 0x112e008d8;
  func_0x0001000285a8(0x112e008d8,&UNK_10d9d0bc0);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0de00,0,0);
  return;
}



/* Entry: 101b0de00; end: 101b0e0eb;  */

void FUN_101b0de00(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  ulong *puVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar9 = *(long *)(lVar4 + 0x10);
  if (lVar9 != 0) {
    uVar8 = **(undefined8 **)(unaff_x22 + 0x50);
    lVar1 = 0;
    func_0x000107c5fd0c();
    lVar5 = *(long *)(lVar1 + -8);
    pcVar6 = *(code **)(lVar5 + 0x38);
    puVar13 = (ulong *)(lVar4 + 0x20);
    do {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar16 = puVar13[1];
      uVar18 = *puVar13;
      (*pcVar6)(uVar11,1,1,lVar1);
      puVar2 = &UNK_1104432e8;
      func_0x000107c613fc(&UNK_1104432e8,0x38,7);
      plVar14 = (long *)(puVar2 + 0x10);
      *plVar14 = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(ulong *)(puVar2 + 0x28) = uVar16;
      *(ulong *)(puVar2 + 0x20) = uVar18;
      *(undefined8 *)(puVar2 + 0x30) = uVar15;
      FUN_101b16ef8(uVar11,uVar10,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar5 + 0x30))(uVar10,1,lVar1);
      uVar16 = uVar18;
      func_0x000107c615f4(uVar18,2);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      if ((int)uVar10 == 1) {
        func_0x000101b16f40(uVar11,0x112d453c8,&UNK_10d90ac60);
        uVar16 = 0x3100;
        lVar4 = *plVar14;
        if (lVar4 == 0) goto LAB_101b0dfd0;
LAB_101b0e004:
        lVar17 = *(long *)(puVar2 + 0x18);
        lVar12 = lVar4;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar4);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar4);
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar5 + 8))(uVar11,lVar1);
        uVar16 = uVar16 & 0xff | 0x3100;
        lVar4 = *plVar14;
        if (lVar4 != 0) goto LAB_101b0e004;
LAB_101b0dfd0:
        lVar12 = 0;
        lVar17 = 0;
      }
      puVar3 = &UNK_110443310;
      func_0x000107c613fc(&UNK_110443310,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10d9d0bd0;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x000107c6157c(puVar2);
      if (lVar17 == 0 && lVar12 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar12;
        *(long *)(unaff_x22 + 0x28) = lVar17;
        puVar7 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar7;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
      func_0x000107c615bc(uVar16,unaff_x22 + 0x30,PTR___sSbN_11034dd40,&UNK_10d9d0bd8,puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(uVar18);
      func_0x000107c61574(uVar16);
      func_0x000101b16f40(uVar10,0x112d453c8,&UNK_10d90ac60);
      lVar9 = lVar9 + -1;
      puVar13 = puVar13 + 2;
    } while (lVar9 != 0);
  }
  func_0x000107c5fcc4(*(undefined8 *)(unaff_x22 + 0x78),**(undefined8 **)(unaff_x22 + 0x50),
                      PTR___sSbN_11034dd40);
  *(undefined1 *)(unaff_x22 + 0x99) = 1;
  plVar14 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_101b0e0ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar14,unaff_x22 + 0x98,*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 101b0e0ec; end: 101b0e133;  */

void FUN_101b0e0ec(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0e134,0,0);
  return;
}



/* Entry: 101b0e134; end: 101b0e20b;  */

void FUN_101b0e134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long unaff_x22;
  byte *pbVar7;
  
  bVar4 = *(byte *)(unaff_x22 + 0x98);
  bVar5 = *(byte *)(unaff_x22 + 0x99);
  if (bVar4 == 2) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    pbVar7 = *(byte **)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x68));
    *pbVar7 = bVar5;
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101b0e1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(byte *)(unaff_x22 + 0x99) = bVar5 & bVar4;
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b0e0ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar6,(byte *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 101b0e20c; end: 101b0e263;  */

void FUN_101b0e20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b0e264;
  plVar1[2] = param_4;
  plVar1[3] = param_5;
  lVar3 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  plVar1[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[5] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[6] = uVar2;
  lVar3 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  plVar1[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[8] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar2;
  lVar3 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  plVar1[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
  return;
}



/* Entry: 101b0e264; end: 101b0e2b3;  */

void FUN_101b0e264(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b17248,0,0);
  return;
}



/* Entry: 101b0e2b4; end: 101b0e89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b0e2b4(int param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if (lVar8 != 0) {
    lVar13 = *(long *)(param_2 + 8);
    FUN_101b14780(param_2,&uStack_e8);
    uVar7 = *(ulong *)(lVar13 + 0x10);
    func_0x000107c6157c(lVar8);
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        if (*(int *)(lVar13 + uVar9 * 8 + 0x20) == param_1) {
          func_0x000107c61428(lVar8 + 0xc0,auStack_80,0,0);
          lVar11 = *(long *)(lVar8 + 0xc0);
          puVar10 = *(undefined8 **)(lVar11 + 0x10);
          puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar10 != (undefined8 *)0x0) {
            func_0x000107c61434(lVar11);
            puVar2 = puVar10;
            FUN_101b0fa20(puVar10,0);
            puVar3 = &uStack_e8;
            func_0x000101b13eb8(puVar3,puVar2 + 4,puVar10,lVar11);
            func_0x000100cc5bac(uStack_e8,uStack_e0,uStack_d8,uStack_d0,uStack_c8);
            if (puVar3 != puVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101b0e3dc);
              (*pcVar1)();
            }
          }
          puVar10 = puVar2;
          FUN_101b142fc();
          func_0x000107c61574(puVar2);
          lVar11 = _DAT_112e00238;
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar7 = *(ulong *)(lVar13 + 0x10);
          if (uVar9 <= *(ulong *)(lVar13 + 0x10)) {
            uVar7 = uVar9;
          }
          if ((uVar9 == 0) || (uVar7 == 0)) goto LAB_101b0e5f8;
          func_0x000107c61428(unaff_x20 + _DAT_112e00238,auStack_a0,0,0);
          uVar9 = 0;
          goto LAB_101b0e474;
        }
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
    func_0x000101b147bc(param_2);
    func_0x000107c61574(lVar8);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101b0e474:
  if (puVar10[2] != 0) {
    uVar14 = *(ulong *)(lVar13 + 0x20 + uVar9 * 8);
    func_0x000107c6068c(&uStack_e8,puVar10[5]);
    uVar5 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar6 = -1L << ((ulong)*(byte *)(puVar10 + 4) & 0x3f);
    uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
    if (((ulong)puVar10[(uVar5 >> 6) + 7] >> (uVar5 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(puVar10[6] + uVar5 * 8) == (int)uVar14) {
          lVar15 = *(long *)(unaff_x20 + lVar11);
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_101b0e58c;
          func_0x000107c6068c(&uStack_e8,*(undefined8 *)(lVar15 + 0x28));
          uVar5 = uVar14;
          func_0x000107c60690();
          func_0x000107c606a8();
          uVar16 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          uVar5 = uVar5 & (uVar16 ^ 0xffffffffffffffff);
          uVar6 = *(ulong *)(lVar15 + 0x38 + (uVar5 >> 6) * 8);
          func_0x000107c61434(lVar15);
          if ((uVar6 >> (uVar5 & 0x3f) & 1) == 0) goto LAB_101b0e580;
          goto LAB_101b0e55c;
        }
        uVar5 = uVar5 + 1 & ~uVar6;
      } while (((ulong)puVar10[(uVar5 >> 6) + 7] >> (uVar5 & 0x3f) & 1) != 0);
    }
  }
  goto LAB_101b0e468;
  while (uVar5 = uVar5 + 1 & ~uVar16,
        (*(ulong *)(lVar15 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
LAB_101b0e55c:
    if ((int)*(undefined8 *)(*(long *)(lVar15 + 0x30) + uVar5 * 8) == (int)uVar14) {
      func_0x000107c6142c(lVar15);
      goto LAB_101b0e468;
    }
  }
LAB_101b0e580:
  func_0x000107c6142c(lVar15);
LAB_101b0e58c:
  puVar4 = puVar12;
  func_0x000107c61558();
  puStack_88 = puVar12;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000101b121d0(0,*(long *)(puVar12 + 0x10) + 1,1);
  }
  uVar5 = *(ulong *)(puStack_88 + 0x10);
  if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar5) {
    func_0x000101b121d0(1 < *(ulong *)(puStack_88 + 0x18),uVar5 + 1,1);
  }
  *(ulong *)(puStack_88 + 0x10) = uVar5 + 1;
  *(ulong *)(puStack_88 + uVar5 * 8 + 0x20) = uVar14;
  puVar12 = puStack_88;
LAB_101b0e468:
  uVar9 = uVar9 + 1;
  if (uVar9 == uVar7) {
LAB_101b0e5f8:
    func_0x000107c6142c(puVar10);
    func_0x000107c615e8(lVar13);
    func_0x000107c61574(lVar8);
    return puVar12;
  }
  goto LAB_101b0e474;
}



/* Entry: 101b0e8a0; end: 101b0e8a3;  */

void FUN_101b0e8a0(void)

{
  return;
}



/* Entry: 101b0e8a4; end: 101b0e90f;  */

void FUN_101b0e8a4(byte *param_1)

{
  undefined1 auStack_40 [16];
  byte *pbStack_30;
  byte bStack_21;
  
  bStack_21 = 0;
  pbStack_30 = &bStack_21;
  func_0x000100c7bb9c(FUN_101b16f80,auStack_40,FUN_101b0e910,0,0x101b0e914,0);
  *param_1 = (bStack_21 ^ 0xff) & 1;
  return;
}



/* Entry: 101b0e910; end: 101b0e92b;  */

void FUN_101b0e910(void)

{
  return;
}



/* Entry: 101b0e92c; end: 101b0ed6f;  */

void FUN_101b0e92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e009b8;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e009b8,&UNK_10d9d0cf0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e00a28;
  func_0x0001000285a8(0x112e00a28,&UNK_10d9d0e48);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_110443220,puVar11,FUN_101b16ec0,auStack_80,&UNK_110443220);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101b16ef8(lVar9,lVar8,0x112e00a28,&UNK_10d9d0e48);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101b16f40(lVar9,0x112e00a28,&UNK_10d9d0e48);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b0eb4c);
  (*pcVar1)();
}



/* Entry: 101b0ed70; end: 101b0edeb;  */

void FUN_101b0ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000101b16f40(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000101b0ede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 101b0edec; end: 101b0eedb;  */

undefined8 FUN_101b0edec(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_101b0eec0;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_101b0eedc(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_101b0eec0:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 101b0eedc; end: 101b0f00b;  */

void FUN_101b0eedc(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_101b0f21c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_101b0f00c(uVar3 + 1);
    }
    else {
      FUN_101b0f35c();
    }
    lVar4 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          func_0x000107c60620(&UNK_1106b5710);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b0f00c);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b0effc);
  (*pcVar1)();
}



/* Entry: 101b0f00c; end: 101b0f21b;  */

void FUN_101b0f00c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e008b8;
  func_0x0001000285a8(0x112e008b8,&UNK_10d9d0b38);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101b0f1e4:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0f218);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_101b0f1e4;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0f21c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101b0f21c; end: 101b0f35b;  */

void FUN_101b0f21c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112e008b8,&UNK_10d9d0b38);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0f35c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101b0f33c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_101b0f33c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101b0f35c; end: 101b0f5af;  */

void FUN_101b0f35c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e008b8;
  func_0x0001000285a8(0x112e008b8,&UNK_10d9d0b38);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101b0f57c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0f5ac);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_101b0f57c;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0f5b0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 101b0f5b0; end: 101b0f5bb;  */

undefined * FUN_101b0f5b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1259c);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e008a8;
    func_0x0001000285a8(0x112e008a8,&UNK_10d9d0b30);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + -0x19;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar5,uVar7 << 3);
  }
  else {
    if (puVar4 != param_4 || puVar5 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar5,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 101b0f5bc; end: 101b0f7cb;  */

undefined * FUN_101b0f5bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0f6d4);
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
    puVar3 = (undefined *)0x112e00918;
    func_0x0001000285a8(0x112e00918,&UNK_10d9d0c20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x50);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101b0f7cc; end: 101b0f7d7;  */

undefined * FUN_101b0f7cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b12b34);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e00928;
    func_0x0001000285a8(0x112e00928,&UNK_10d9d0c48);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + 0x1f;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar4 != param_4 || param_4 + uVar7 * 0x40 + 0x20 <= puVar4 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 101b0f7d8; end: 101b0f907;  */

undefined * FUN_101b0f7d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0f908);
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
    puVar3 = (undefined *)0x112e00990;
    func_0x0001000285a8(0x112e00990,&UNK_10d9d0ca0);
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
    uVar5 = 0x112e00998;
    func_0x0001000285a8(0x112e00998,&UNK_10d9d0ca8);
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



/* Entry: 101b0f908; end: 101b0fa1f;  */

undefined * FUN_101b0f908(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0fa20);
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
    puVar3 = (undefined *)0x112e009a8;
    func_0x0001000285a8(0x112e009a8,&UNK_10d9d0cc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101b0fa20; end: 101b0fb2b;  */

undefined * FUN_101b0fa20(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e008a8;
    func_0x0001000285a8(0x112e008a8,&UNK_10d9d0b30);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Entry: 101b0fb2c; end: 101b0fb93;  */

/* WARNING: Possible PIC construction at 0x000101b0fb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b0fb60) */
/* WARNING: Removing unreachable block (ram,0x000101b0fb64) */

void FUN_101b0fb2c(void)

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
    puVar3 = (ulong *)0x112e00a20;
    plVar5 = (long *)&UNK_10d9d0e40;
  }
  else {
    puVar3 = (ulong *)0x112e009c8;
    plVar5 = (long *)&UNK_10d9d0d00;
    unaff_x30 = 0x101b0fb60;
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



/* Entry: 101b0fb94; end: 101b0fc63;  */

void FUN_101b0fb94(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101b15bf0(0,param_1,param_2);
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



/* Entry: 101b0fc64; end: 101b0fd0b;  */

void FUN_101b0fc64(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0fca8);
  (*pcVar2)();
}



/* Entry: 101b0fd0c; end: 101b0ff5b;  */

/* WARNING: Removing unreachable block (ram,0x000101b0fe70) */

ulong FUN_101b0fd0c(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)
           ((1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 3 & 0xffffffffffffff8);
  if (0xd < (*(byte *)(param_2 + 0x20) & 0x3f)) {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar2 == 0) || (puVar3 = puVar5, func_0x000107c61594(puVar5,8), ((ulong)puVar3 & 1) == 0))
    {
      func_0x000107c6158c(puVar5,0xffffffffffffffff);
      func_0x000107c60ee4();
      puVar3 = puVar5;
      FUN_101b14c74(puVar5,param_1,param_2);
      param_1 = 0xffffffffffffffff;
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      goto LAB_101b0fdb8;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_50 + -((ulong)(puVar5 + 0xf) & 0x1ffffffffffffff0);
  func_0x000107c60ee4(puVar5);
  FUN_101b14c74(puVar5,param_1,param_2);
  puVar3 = puVar5;
LAB_101b0fdb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    lVar1 = lRam0000000000000000;
    func_0x000107c61434(lRam0000000000000000);
    func_0x000101b0fc0c();
    func_0x000107c6142c(lVar1);
    if ((param_1 & 1) == 0) {
      uVar6 = 2;
    }
    else {
      lVar4 = lRam0000000000000000;
      func_0x000107c61558();
      lVar1 = lRam0000000000000000;
      if ((int)lVar4 == 0) {
        FUN_101b10598();
      }
      uVar6 = (ulong)(byte)puVar5[*(long *)(lVar1 + 0x38)];
      FUN_101b1196c(puVar5,lVar1);
      lRam0000000000000000 = lVar1;
    }
    return uVar6;
  }
  return (ulong)puVar3 & 1;
}



/* Entry: 101b0ff5c; end: 101b101cf;  */

void FUN_101b0ff5c(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000101b0fc0c();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1000c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101b10c8c(lVar5);
    uVar2 = param_2;
    func_0x000101b0fc0c();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b0ffec);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101b10598();
    lVar5 = *unaff_x20;
    goto joined_r0x000101b10020;
  }
  lVar5 = *unaff_x20;
joined_r0x000101b10020:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    *(byte *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1 & 1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1007c);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(byte *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1 & 1;
  }
  return;
}



/* Entry: 101b101d0; end: 101b1031b;  */

void FUN_101b101d0(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_3;
  func_0x000101b0fc0c();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b102a4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_101b10f00(lVar7);
    uVar3 = param_3;
    func_0x000101b0fc0c();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b10268);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101b106e4();
    lVar7 = *unaff_x20;
    goto joined_r0x000101b102b8;
  }
  lVar7 = *unaff_x20;
joined_r0x000101b102b8:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = *puVar1;
    *puVar1 = param_2;
    puVar1[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_1;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1031c);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 101b1031c; end: 101b1047b;  */

/* WARNING: Possible PIC construction at 0x000101b103dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b103e0) */
/* WARNING: Removing unreachable block (ram,0x000101b15c30) */
/* WARNING: Removing unreachable block (ram,0x000101b15c3c) */
/* WARNING: Removing unreachable block (ram,0x000101b15c38) */

void FUN_101b1031c(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_2;
  func_0x000101b0fc0c();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b103fc);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    func_0x000101b1119c(lVar6);
    uVar2 = param_2;
    func_0x000101b0fc0c();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b103ac);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101b10854();
    lVar6 = *unaff_x20;
    goto joined_r0x000101b10410;
  }
  lVar6 = *unaff_x20;
joined_r0x000101b10410:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
    uVar3 = puVar7[1];
    puVar7[4] = param_1[4];
    uVar10 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar10;
    puVar7[3] = uVar12;
    puVar7[2] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  lVar5 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
  uVar3 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar3;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  puVar7[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1047c);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Entry: 101b1047c; end: 101b10597;  */

void FUN_101b1047c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_3;
  func_0x000101b0fc0c();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b10528);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    uVar3 = (uint)param_3 & 1;
    FUN_101b116f4(lVar6);
    uVar2 = param_2;
    func_0x000101b0fc0c();
    if (((uint)uVar4 & 1) != (uVar3 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1050c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101b10b40();
    lVar6 = *unaff_x20;
    goto joined_r0x000101b1053c;
  }
  lVar6 = *unaff_x20;
joined_r0x000101b1053c:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b10598);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 101b10598; end: 101b106e3;  */

void FUN_101b10598(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112e00188,&UNK_10d9d08d0);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_101b10670;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined1 *)(*(long *)(lVar10 + 0x38) + uVar9);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar9) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_101b10670:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b106e4);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_101b106c4;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_101b106c4:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101b106e4; end: 101b109df;  */

void FUN_101b106e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  func_0x0001000285a8(0x112e00178,&UNK_10d9d08c0);
  lVar10 = *unaff_x20;
  lVar5 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar10 || lVar1 + uVar7 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar10 + 0x40);
    if (uVar7 == 0) goto LAB_101b107c0;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9 * 0x10);
        uVar6 = *puVar3;
        uVar12 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar9 * 0x10);
        *puVar3 = uVar6;
        puVar3[1] = uVar12;
        func_0x000107c61434();
        if (uVar7 != 0) break;
LAB_101b107c0:
        do {
          lVar2 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b10854);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar2) goto LAB_101b1082c;
          uVar7 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar2;
      }
    } while( true );
  }
LAB_101b1082c:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 101b109e0; end: 101b109f3;  */

void FUN_101b109e0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112e00180,&UNK_10d9d08c8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101b10ac0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_101b10ac0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b10b40);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101b10b18;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101b10b18:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101b109f4; end: 101b10b3f;  */

void FUN_101b109f4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101b10ac0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_101b10ac0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b10b40);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101b10b18;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101b10b18:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101b10b40; end: 101b10c8b;  */

void FUN_101b10b40(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  func_0x0001000285a8(0x112e00198,&UNK_10d9d08e0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_101b10c18;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar10;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_101b10c18:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b10c8c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101b10c6c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_101b10c6c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101b10c8c; end: 101b10eff;  */

void FUN_101b10c8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112e00188;
  func_0x0001000285a8(0x112e00188,&UNK_10d9d08d0);
  lVar6 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101b10ecc:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar6 + 0x40;
  lVar8 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b10efc);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_101b10ecc;
        }
        uVar14 = puVar15[lVar17];
        lVar8 = lVar8 + 1;
      } while (uVar14 == 0);
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar17 << 6;
    uVar16 = *(ulong *)(*(long *)(lVar13 + 0x30) + uVar7 * 8);
    uVar2 = *(undefined1 *)(*(long *)(lVar13 + 0x38) + uVar7);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    uVar11 = uVar16;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar11 = uVar11 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar7 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b10f00);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar11 != uVar7) {
          uVar9 = uVar11;
        }
        bVar3 = (bool)(uVar11 == uVar7 | bVar3);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = uVar16;
    *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar7) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar17;
  } while( true );
}



/* Entry: 101b10f00; end: 101b11463;  */

void FUN_101b10f00(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_b8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112e00178;
  func_0x0001000285a8(0x112e00178,&UNK_10d9d08c0);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar15);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101b11164:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar17 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b11198);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar13 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_101b11164;
        }
        uVar13 = puVar14[lVar17];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar17 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar17 << 6;
    uVar16 = *(ulong *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 0x10);
    uVar15 = *puVar2;
    uVar18 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar15);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar16;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b1119c);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar3 = (bool)(uVar10 == uVar6 | bVar3);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar16;
    puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x10);
    *puVar2 = uVar15;
    puVar2[1] = uVar18;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar17;
  } while( true );
}



/* Entry: 101b11464; end: 101b11477;  */

void FUN_101b11464(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  uVar14 = 0x112e00180;
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112e00180,&UNK_10d9d08c8);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101b116c0:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b116f0);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101b116c0;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b116f4);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 101b11478; end: 101b116f3;  */

void FUN_101b11478(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,param_3);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101b116c0:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b116f0);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101b116c0;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b116f4);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 101b116f4; end: 101b1196b;  */

void FUN_101b116f4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_b8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar16 = 0x112e00198;
  func_0x0001000285a8(0x112e00198,&UNK_10d9d08e0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar16);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101b11934:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b11968);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101b11934;
        }
        uVar12 = puVar13[lVar15];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar15 << 6;
    uVar14 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1196c);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar16;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar15;
  } while( true );
}



/* Entry: 101b1196c; end: 101b11e27;  */

void FUN_101b1196c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      uVar8 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar9 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = uVar8 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101b11a44:
          if ((long)param_1 < (long)uVar8) goto LAB_101b119e8;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 8);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2 || param_1 != uVar9)) {
          *puVar2 = *puVar3;
        }
        puVar4 = (undefined1 *)(*(long *)(param_2 + 0x38) + param_1);
        puVar5 = (undefined1 *)(*(long *)(param_2 + 0x38) + uVar9);
        if ((((long)param_1 < (long)uVar9) || (puVar5 + 1 <= puVar4)) || (param_1 != uVar9)) {
          *puVar4 = *puVar5;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101b11a44;
LAB_101b119e8:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b11b00);
  (*pcVar6)();
}



/* Entry: 101b11e28; end: 101b11eaf;  */

code * FUN_101b11e28(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x28c3);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_101b12154();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_101b11f00(lVar3,param_2,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_101b11eb0;
}



/* Entry: 101b11eb0; end: 101b11eeb;  */

void FUN_101b11eb0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 101b11eec; end: 101b11eff;  */

/* WARNING: Removing unreachable block (ram,0x000101b0f7f8) */
/* WARNING: Removing unreachable block (ram,0x000101b0f808) */
/* WARNING: Removing unreachable block (ram,0x000101b0f904) */
/* WARNING: Removing unreachable block (ram,0x000101b0f814) */
/* WARNING: Removing unreachable block (ram,0x000101b0f81c) */
/* WARNING: Removing unreachable block (ram,0x000101b0f894) */
/* WARNING: Removing unreachable block (ram,0x000101b0f89c) */
/* WARNING: Removing unreachable block (ram,0x000101b0f8a0) */
/* WARNING: Removing unreachable block (ram,0x000101b0f8a4) */
/* WARNING: Removing unreachable block (ram,0x000101b0f8b4) */

undefined * FUN_101b11eec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e00990;
    func_0x0001000285a8(0x112e00990,&UNK_10d9d0ca0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112e00998;
  func_0x0001000285a8(0x112e00998,&UNK_10d9d0ca8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 101b11f00; end: 101b12047;  */

undefined1  [16] FUN_101b11f00(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar5 = param_2;
    func_0x000107c610a0();
  }
  else {
    uVar5 = 0;
    func_0x000107c61458();
  }
  *param_1 = (long)puVar3;
  puVar3[1] = param_2;
  puVar3[2] = unaff_x20;
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  func_0x000101b0fc0c();
  *(byte *)(puVar3 + 4) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b11ff4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    param_3 = param_3 & 1;
    FUN_101b11478(lVar1,param_3,0x112e00190,&UNK_10d9d0c30);
    func_0x000101b0fc0c();
    uVar4 = param_2;
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b11fd4);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101b109f4(0x112e00190,&UNK_10d9d0c30);
    puVar3[3] = uVar4;
    goto joined_r0x000101b1201c;
  }
  puVar3[3] = uVar4;
joined_r0x000101b1201c:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_101b12048;
  return auVar10;
}



/* Entry: 101b12048; end: 101b12153;  */

void FUN_101b12048(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  lVar3 = *plVar8;
  bVar1 = *(byte *)(plVar8 + 4);
  if ((param_2 & 1) == 0) {
    if (lVar3 == 0) goto LAB_101b120d0;
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) goto LAB_101b120c4;
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b12154);
      (*pcVar2)();
    }
  }
  else {
    if (lVar3 == 0) {
LAB_101b120d0:
      if ((bVar1 & 1) != 0) {
        func_0x000101b11b00(plVar8[3],*(undefined8 *)plVar8[2]);
      }
      goto LAB_101b12130;
    }
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) {
LAB_101b120c4:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
      goto LAB_101b12130;
    }
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b120b4);
      (*pcVar2)();
    }
  }
  *(long *)(lVar6 + 0x10) = lVar5 + 1;
LAB_101b12130:
  lVar6 = *plVar8;
  func_0x000107c61434(lVar3);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar8);
  return;
}



/* Entry: 101b12154; end: 101b12177;  */

undefined1  [16] FUN_101b12154(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x101b1216c;
  return auVar1;
}



/* Entry: 101b12178; end: 101b1237b;  */

void FUN_101b12178(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101b128d4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101b1237c; end: 101b1248f;  */

undefined * FUN_101b1237c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12490);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e00900;
    func_0x0001000285a8(0x112e00900,&UNK_10d9d0c08);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x58) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar2 != param_4 || param_4 + uVar5 * 0x58 + 0x20 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 101b12490; end: 101b1259b;  */

undefined *
FUN_101b12490(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1259c);
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
    puVar3 = (undefined *)0x112e008a8;
    func_0x0001000285a8(0x112e008a8,&UNK_10d9d0b30);
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
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101b1259c; end: 101b1269b;  */

undefined * FUN_101b1259c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1269c);
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
    puVar3 = (undefined *)0x112e00908;
    func_0x0001000285a8(0x112e00908,&UNK_10d9d0c10);
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



/* Entry: 101b1269c; end: 101b127bf;  */

undefined *
FUN_101b1269c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b127c0);
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
    puVar3 = (undefined *)0x112e00910;
    func_0x0001000285a8(0x112e00910,&UNK_10d9d0c18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x50);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101b127c0; end: 101b128d3;  */

undefined * FUN_101b127c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b128d4);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e00920;
    func_0x0001000285a8(0x112e00920,&UNK_10d9d0c40);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x48) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar2 != param_4 || param_4 + uVar5 * 0x48 + 0x20 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 101b128d4; end: 101b12a1f;  */

undefined *
FUN_101b128d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b12a20);
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
    puVar3 = param_5;
    FUN_101b0fb94(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101b15bf0(0,param_5,param_6);
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



/* Entry: 101b12a20; end: 101b12a2b;  */

undefined * FUN_101b12a20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_release_11034f4c0;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b12b34);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e00928;
    func_0x0001000285a8(0x112e00928,&UNK_10d9d0c48);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + 0x1f;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar4 != param_4 || param_4 + uVar7 * 0x40 + 0x20 <= puVar4 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 101b12a2c; end: 101b12b33;  */

undefined *
FUN_101b12a2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b12b34);
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
    puVar3 = (undefined *)0x112e00928;
    func_0x0001000285a8(0x112e00928,&UNK_10d9d0c48);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x40 + 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101b12b34; end: 101b12c4f;  */

undefined * FUN_101b12b34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b12c50);
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
    puVar3 = (undefined *)0x112e00980;
    func_0x0001000285a8(0x112e00980,&UNK_10d9d0c78);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110443c98);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b12c50; end: 101b12d73;  */

void FUN_101b12c50(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = 0;
  lVar3 = 0;
  uVar4 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(param_3 + 0x38);
  do {
    lVar6 = lVar3;
    if (uVar5 == 0) {
      do {
        lVar3 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12d74);
          (*pcVar1)();
        }
        if ((long)(uVar4 + 0x3f >> 6) <= lVar3) {
          func_0x000107c6157c(param_3);
          FUN_101b12fdc(param_1,param_2,lVar9,param_3);
          return;
        }
        uVar5 = ((ulong *)(param_3 + 0x38))[lVar3];
        lVar6 = lVar6 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar3 * 0x40;
    }
    else {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar3 << 6;
    }
    uVar8 = *(ulong *)(*(long *)(param_3 + 0x30) + uVar7 * 8);
    if ((uVar8 < 6) && ((1L << (uVar8 & 0x3f) & 0x2aU) != 0)) {
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar7 & 0x3f);
      bVar2 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12d40);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 101b12d74; end: 101b12e97;  */

void FUN_101b12d74(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = 0;
  lVar3 = 0;
  uVar4 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(param_3 + 0x38);
  do {
    lVar6 = lVar3;
    if (uVar5 == 0) {
      do {
        lVar3 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12e98);
          (*pcVar1)();
        }
        if ((long)(uVar4 + 0x3f >> 6) <= lVar3) {
          func_0x000107c6157c(param_3);
          FUN_101b12fdc(param_1,param_2,lVar9,param_3);
          return;
        }
        uVar5 = ((ulong *)(param_3 + 0x38))[lVar3];
        lVar6 = lVar6 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar3 * 0x40;
    }
    else {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar3 << 6;
    }
    uVar8 = *(ulong *)(*(long *)(param_3 + 0x30) + uVar7 * 8);
    if (5 < uVar8 || (1L << (uVar8 & 0x3f) & 0x2aU) == 0) {
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar7 & 0x3f);
      bVar2 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12e64);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 101b12e98; end: 101b12fdb;  */

void FUN_101b12e98(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x38);
  lVar4 = 0;
  do {
    if (uVar7 == 0) {
      do {
        lVar9 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12fdc);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar9) {
          func_0x000107c6157c(param_3);
          FUN_101b12fdc(param_1,param_2,lVar8,param_3);
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x38))[lVar9];
        lVar4 = lVar4 + 1;
      } while (uVar7 == 0);
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
    }
    else {
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar4;
    }
    uVar5 = 0;
    (*param_4)();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = lVar9;
    if ((uVar5 & 1) != 0) {
      uVar5 = (LZCOUNT(uVar3) & 0xffffffffffffffc0U | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (LZCOUNT(uVar3) & 0x3fU);
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b12f98);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 101b12fdc; end: 101b13857;  */

undefined * FUN_101b12fdc(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_a8 [72];
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    func_0x0001000285a8(0x112e008b8,&UNK_10d9d0b38);
    puVar3 = param_3;
    func_0x000107c602e8();
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar5 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar5 + 1;
          if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b131d8);
            (*pcVar1)();
          }
          if (param_2 <= lVar10) goto LAB_101b13058;
          uVar11 = param_1[lVar10];
          lVar5 = lVar5 + 1;
        } while (uVar11 == 0);
        uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar5;
      }
      uVar9 = *(ulong *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar4) | lVar10 << 6) * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      uVar7 = uVar9;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar8 ^ 0xffffffffffffffff);
      uVar6 = uVar7 >> 6;
      uVar4 = -1L << (uVar7 & 0x3f) & (*(ulong *)(puVar3 + uVar6 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar4 == 0) {
        bVar2 = false;
        uVar4 = 0x3f - uVar8 >> 6;
        do {
          uVar7 = uVar6 + 1;
          if ((uVar7 == uVar4) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b131dc);
            (*pcVar1)();
          }
          uVar6 = 0;
          if (uVar7 != uVar4) {
            uVar6 = uVar7;
          }
          bVar2 = (bool)(uVar7 == uVar4 | bVar2);
        } while (*(ulong *)(puVar3 + uVar6 * 8 + 0x38) == 0xffffffffffffffff);
        uVar4 = ~*(ulong *)(puVar3 + uVar6 * 8 + 0x38);
        uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar6 << 6;
      }
      else {
        uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar7 & 0x7fffffffffffffc0;
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x38) = 1L << (uVar4 & 0x3f) | *(ulong *)(puVar3 + uVar6 + 0x38);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b131e0);
        (*pcVar1)();
      }
      lVar5 = lVar10;
    } while (param_3 != (undefined *)0x0);
  }
LAB_101b13058:
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b13858; end: 101b13a2b;  */

void FUN_101b13858(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined1 auStack_a8 [72];
  
  lVar4 = *(long *)(param_3 + 0x10);
  uVar6 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar4 = lVar4 + -1;
LAB_101b138d4:
  do {
    do {
      lVar1 = param_5[3];
      uVar6 = param_5[4];
      lVar7 = lVar1;
      if (uVar6 == 0) {
        uVar5 = param_5[2] + 0x40U >> 6;
        lVar10 = lVar1;
        do {
          lVar7 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b13a28);
            (*pcVar2)();
          }
          if ((long)uVar5 <= lVar7) {
            if ((long)uVar5 <= lVar1 + 1) {
              uVar5 = lVar1 + 1;
            }
            param_5[3] = uVar5 - 1;
            param_5[4] = 0;
            func_0x000107c6157c(param_3);
            FUN_101b12fdc(param_1,param_2,lVar4,param_3);
            return;
          }
          uVar6 = *(ulong *)(param_5[1] + lVar7 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
      }
      uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar12 = *(ulong *)(*(long *)(*param_5 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 8 +
                         lVar7 * 0x200);
      param_5[3] = lVar7;
      param_5[4] = uVar6 - 1 & uVar6;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      uVar6 = uVar12;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
      uVar5 = uVar6 >> 6;
      uVar8 = 1L << (uVar6 & 0x3f);
    } while ((uVar8 & *(ulong *)(param_3 + 0x38 + uVar5 * 8)) == 0);
    iVar11 = (int)uVar12;
    if ((int)*(undefined8 *)(*(long *)(param_3 + 0x30) + uVar6 * 8) != iVar11) {
      do {
        uVar6 = uVar6 + 1 & ~uVar9;
        uVar5 = uVar6 >> 6;
        uVar8 = 1L << (uVar6 & 0x3f);
        if ((uVar8 & *(ulong *)(param_3 + 0x38 + uVar5 * 8)) == 0) goto LAB_101b138d4;
      } while ((int)*(undefined8 *)(*(long *)(param_3 + 0x30) + uVar6 * 8) != iVar11);
    }
    uVar6 = *(ulong *)(param_1 + uVar5 * 8);
    *(ulong *)(param_1 + uVar5 * 8) = uVar6 & (uVar8 ^ 0xffffffffffffffff);
    if ((uVar6 & uVar8) != 0) {
      bVar3 = SBORROW8(lVar4,1);
      lVar4 = lVar4 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b13a2c);
        (*pcVar2)();
      }
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 101b13a2c; end: 101b13b37;  */

void FUN_101b13a2c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long *unaff_x20;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  func_0x000107c61434();
  lVar6 = 0;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_101b13b38(*(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b13b38);
  (*pcVar3)();
}



/* Entry: 101b13b38; end: 101b13c33;  */

undefined1  [16] FUN_101b13b38(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong auStack_88 [9];
  
  uVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(uVar5 + 0x28));
  uVar4 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(uVar5 + 0x30) + uVar4 * 8) == (int)param_1) {
        uVar3 = *unaff_x20;
        func_0x000107c61558();
        auStack_88[0] = *unaff_x20;
        if ((uVar3 & 1) == 0) {
          FUN_101b0f21c();
        }
        uVar3 = auStack_88[0];
        uVar1 = *(undefined8 *)(*(long *)(auStack_88[0] + 0x30) + uVar4 * 8);
        FUN_101b13c34(uVar4);
        uVar2 = 0;
        *unaff_x20 = uVar3;
        goto LAB_101b13c0c;
      }
      uVar4 = uVar4 + 1 & ~uVar3;
    } while ((*(ulong *)(uVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  uVar1 = 0;
  uVar2 = 1;
LAB_101b13c0c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 101b13c34; end: 101b13dc3;  */

void FUN_101b13c34(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_98 [72];
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar5 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = 1L << (uVar9 & 0x3f);
  if ((uVar6 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar5 = ~uVar5;
    uVar7 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar5);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar6) != 0) {
      uVar6 = uVar7 + 1 & uVar5;
      do {
        uVar7 = *(ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 8);
        func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar8 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = uVar7 & uVar5;
        if ((long)param_1 < (long)uVar6) {
          if (uVar7 < uVar6) {
LAB_101b13d1c:
            if ((long)param_1 < (long)uVar7) goto LAB_101b13cc0;
          }
          puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 8);
          if ((param_1 != uVar9) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar9;
          }
        }
        else if (uVar6 <= uVar7) goto LAB_101b13d1c;
LAB_101b13cc0:
        uVar9 = uVar9 + 1 & uVar5;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar5);
  }
  if (SBORROW8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b13dc4);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
  *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
  return;
}



/* Entry: 101b13dc4; end: 101b13fab;  */

long FUN_101b13dc4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x38);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b13eb8);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b13eb4);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_101b13e98;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar7 * 0x200);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_101b13e98:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 101b13fac; end: 101b14143;  */

long FUN_101b13fac(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar11 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b14144);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar12 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar13 = lVar5;
    while( true ) {
      while (uVar11 == 0) {
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b14140);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar10 <= lVar5 + 1) {
            uVar10 = lVar5 + 1;
          }
          lVar13 = uVar10 - 1;
          param_3 = lVar12;
          goto LAB_101b140f4;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar2 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      puVar6 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x28 +
               lVar13 * 0xa00);
      uVar1 = puVar6[1];
      uVar14 = puVar6[2];
      uVar8 = puVar6[3];
      uVar15 = puVar6[4];
      *param_2 = *puVar6;
      param_2[1] = uVar1;
      param_2[2] = uVar14;
      param_2[3] = uVar8;
      param_2[4] = uVar15;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 5;
      func_0x000107c61434();
      FUN_101af9a68(uVar8);
      lVar5 = lVar13;
    }
    func_0x000107c61434();
    FUN_101af9a68(uVar8);
  }
LAB_101b140f4:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar7;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Entry: 101b14144; end: 101b1418b;  */

undefined8 FUN_101b14144(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b14184);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1418c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b14188);
  (*pcVar1)();
}



/* Entry: 101b1418c; end: 101b14257;  */

void FUN_101b1418c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b14258);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_101b12e98(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b14254);
  (*pcVar1)();
}



/* Entry: 101b14258; end: 101b142bb;  */

void FUN_101b14258(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b142bc;
                    /* WARNING: Could not recover jumptable at 0x000101b142b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 101b142bc; end: 101b142fb;  */

void FUN_101b142bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b142f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b142fc; end: 101b1436b;  */

void FUN_101b142fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_101b147f0();
  lVar2 = lVar3;
  func_0x000107c5fe14(lVar3,&UNK_1106b5710,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      FUN_101b0edec(auStack_40,*puVar4);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 101b1436c; end: 101b14377;  */

void FUN_101b1436c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000101b144c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101afbd18)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,unaff_x20 + uVar4,
             *(undefined8 *)(unaff_x20 + uVar3),unaff_x20 + uVar3 + 8,*puVar1,puVar1[1]);
  return;
}



/* Entry: 101b14378; end: 101b1442f;  */

void FUN_101b14378(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x40 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x0001000834e4(unaff_x20 + uVar2 + 8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b14430; end: 101b1443b;  */

void FUN_101b14430(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000101b144c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101afbf00)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,unaff_x20 + uVar4,
             *(undefined8 *)(unaff_x20 + uVar3),unaff_x20 + uVar3 + 8,*puVar1,puVar1[1]);
  return;
}



/* Entry: 101b1443c; end: 101b144cb;  */

void FUN_101b1443c(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000101b144c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,unaff_x20 + uVar4,
             *(undefined8 *)(unaff_x20 + uVar3),unaff_x20 + uVar3 + 8,*puVar1,puVar1[1]);
  return;
}



/* Entry: 101b144cc; end: 101b14537;  */

void FUN_101b144cc(undefined8 param_1)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) +
          7 & 0xfffffffffffffff8;
  uVar5 = *(undefined8 *)(unaff_x20 + uVar7);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + uVar7 + 8);
  pcVar1 = *(code **)(unaff_x20 + uVar7 + 0x10);
  lVar3 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c4b940(uVar8);
  bVar2 = *(byte *)(lVar4 + 0x18);
  func_0x000107c5d278(uVar8);
  if ((bVar2 & 1) == 0) {
    func_0x000107c6157c(uVar6);
    (*pcVar1)();
    ppuStack_80 = &PTR_DAT_110443aa0;
    uStack_78 = 0;
    uStack_70 = 1;
    uVar8 = 0x112e001b0;
    uStack_90 = uVar5;
    uStack_88 = uVar6;
    uStack_68 = param_1;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28((long)&uStack_90 - extraout_x8,&uStack_90,uVar8);
    (**(code **)(lVar9 + 8))((long)&uStack_90 - extraout_x8,lVar3);
  }
  return;
}



/* Entry: 101b14538; end: 101b1454f;  */

undefined1  [16] FUN_101b14538(void)

{
  return ZEXT816(0x1104431a8);
}


