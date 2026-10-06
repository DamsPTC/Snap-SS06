/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b14550; end: 101b1456f;  */

void FUN_101b14550(void)

{
  func_0x000107c61168(&PTR_PTR_112e00788);
  return;
}



/* Entry: 101b14570; end: 101b1459f;  */

void FUN_101b14570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
    return;
  }
  return;
}



/* Entry: 101b145a0; end: 101b14697;  */

undefined8 * FUN_101b145a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_101b14570(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101b14698; end: 101b146e7;  */

undefined8 * FUN_101b14698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  func_0x000101b14588(uVar5,uVar1,uVar2,uVar6,uVar4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101b146e8; end: 101b1477f;  */

int FUN_101b146e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b14780; end: 101b147ef;  */

undefined8 FUN_101b14780(undefined8 param_1,undefined8 param_2)

{
  FUN_101afa560(param_2,param_1);
  return param_2;
}



/* Entry: 101b147f0; end: 101b1482f;  */

void FUN_101b147f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e008b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2d838;
  func_0x000107c61520(&UNK_10dc2d838,&UNK_1106b5710);
  puRam0000000112e008b0 = puVar1;
  return;
}



/* Entry: 101b14830; end: 101b14847;  */

void FUN_101b14830(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b14848,0,0);
  return;
}



/* Entry: 101b14848; end: 101b14b9f;  */

void FUN_101b14848(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x138);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x148) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101b14ba0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x130) = unaff_x22 + 0x10;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  lVar4 = 0;
  func_0x000107c5fd0c();
  pcVar10 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar10)(uVar3,1,1,lVar4);
  lVar4 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  lVar11 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  uVar5 = lVar12 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar11 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110443590;
  func_0x000107c613fc(&UNK_110443590,uVar9 + lVar12,uVar8 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar9,uVar5,lVar4);
  func_0x000107c615c0(uVar5);
  FUN_101b02fc0(uVar3,&UNK_10d9d0e18,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0);
  func_0x000101b16f40(uVar3,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar3);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  (*pcVar10)();
  lVar4 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lVar11 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  uVar3 = lVar12 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (**(code **)(lVar11 + 0x10))();
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1104435b8;
  func_0x000107c613fc(&UNK_1104435b8,uVar8 + lVar12,uVar5 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar8,uVar3,lVar4);
  func_0x000107c615c0(uVar3);
  FUN_101b02fc0(uVar7,&UNK_10d9d0e28,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0);
  func_0x000101b16f40(uVar7,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar7);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar2;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b14be8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101b14ba0; end: 101b14c6b;  */

void FUN_101b14ba0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b14c6c,0,0);
  return;
}



/* Entry: 101b14c6c; end: 101b14c73;  */

void FUN_101b14c6c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b14c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b14c74; end: 101b14e6b;  */

undefined8 FUN_101b14c74(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  puVar13 = (ulong *)(param_2 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar12 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  func_0x000107c61434(param_2);
  lVar6 = 0;
  lVar14 = 0;
  lVar2 = lVar14;
  uVar1 = uVar12;
joined_r0x000101b14d18:
  do {
    uVar16 = uVar1;
    lVar15 = lVar2;
    if (uVar12 == 0) {
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b14e68);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar14) {
        uVar16 = 0;
        uVar11 = 0;
        goto LAB_101b14e24;
      }
      uVar12 = puVar13[lVar14];
      lVar2 = lVar15;
      uVar1 = uVar16;
      goto joined_r0x000101b14d18;
    }
    uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 - 1 & uVar12;
    uVar18 = *(ulong *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar14 * 0x200);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
    uVar7 = uVar18;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar10 ^ 0xffffffffffffffff);
    uVar5 = uVar7 >> 6;
    uVar8 = 1L << (uVar7 & 0x3f);
    lVar2 = lVar14;
    uVar1 = uVar12;
    if ((uVar8 & *(ulong *)(param_3 + 0x38 + uVar5 * 8)) != 0) {
      iVar17 = (int)uVar18;
      if ((int)*(undefined8 *)(*(long *)(param_3 + 0x30) + uVar7 * 8) != iVar17) {
        do {
          uVar7 = uVar7 + 1 & ~uVar10;
          uVar5 = uVar7 >> 6;
          uVar8 = 1L << (uVar7 & 0x3f);
          if ((uVar8 & *(ulong *)(param_3 + 0x38 + uVar5 * 8)) == 0) goto joined_r0x000101b14d18;
        } while ((int)*(undefined8 *)(*(long *)(param_3 + 0x30) + uVar7 * 8) != iVar17);
      }
      uVar7 = *(ulong *)(param_1 + uVar5 * 8);
      *(ulong *)(param_1 + uVar5 * 8) = uVar7 | uVar8;
      if ((uVar7 & uVar8) == 0) {
        bVar4 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b14e6c);
          (*pcVar3)();
        }
        if (lVar6 == *(long *)(param_3 + 0x10)) {
          uVar11 = 1;
LAB_101b14e24:
          func_0x000100cc5bac(param_2,puVar13,~uVar9,lVar15,uVar16);
          return uVar11;
        }
      }
    }
  } while( true );
}



/* Entry: 101b14e6c; end: 101b14f4b;  */

bool FUN_101b14e6c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x10) + 1;
  plVar5 = (long *)(param_1 + 0x28);
  if ((param_2 & 1) == 0) {
    do {
      lVar6 = lVar6 + -1;
      bVar3 = lVar6 != 0;
      if (lVar6 == 0) {
        return false;
      }
      uVar1 = plVar5[-1];
      lVar2 = *plVar5;
      uVar4 = uVar1;
      func_0x000107c614f0();
      pcVar7 = *(code **)(lVar2 + 0x30);
      func_0x000107c615f0(uVar1);
      (*pcVar7)(uVar4,lVar2);
      func_0x000107c615e8(uVar1);
      plVar5 = plVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
  else {
    do {
      lVar6 = lVar6 + -1;
      bVar3 = lVar6 == 0;
      if (lVar6 == 0) {
        return true;
      }
      uVar1 = plVar5[-1];
      lVar2 = *plVar5;
      uVar4 = uVar1;
      func_0x000107c614f0();
      pcVar7 = *(code **)(lVar2 + 0x30);
      func_0x000107c615f0(uVar1);
      (*pcVar7)(uVar4,lVar2);
      func_0x000107c615e8(uVar1);
      plVar5 = plVar5 + 2;
    } while ((uVar4 & 1) != 0);
  }
  return bVar3;
}



/* Entry: 101b14f4c; end: 101b14f8f;  */

void FUN_101b14f4c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e008c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100b68c78(0xff);
  puVar2 = &UNK_10d9d0950;
  func_0x000107c61520(&UNK_10d9d0950,uVar1);
  puRam0000000112e008c0 = puVar2;
  return;
}



/* Entry: 101b14f90; end: 101b15027;  */

void FUN_101b14f90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101b17274;
  plVar4[0x14] = lVar5;
  plVar4[0x12] = lVar6;
  plVar4[0x13] = lVar7;
  plVar4[0x10] = lVar1;
  plVar4[0x11] = lVar2;
  *(undefined1 *)((long)plVar4 + 0xc9) = uVar3;
  plVar4[0xe] = param_1;
  plVar4[0xf] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d208,lVar2,0);
  return;
}



/* Entry: 101b15028; end: 101b150a7;  */

void FUN_101b15028(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b17294;
  plVar5[2] = param_1;
  plVar4 = (long *)0x80;
  func_0x000107c615b8(0x80,uVar1,uVar2,lVar7,lVar3,uVar8,in_x6,in_x7,unaff_x19,plVar5,
                      unaff_x29 & 0xefffffffffffffff | 0x1000000000000000,unaff_x30);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b0dc34;
  plVar4[2] = lVar7;
  plVar4[3] = lVar3;
  lVar7 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  plVar4[4] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[5] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[6] = uVar6;
  lVar7 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  plVar4[7] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[8] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar6;
  lVar7 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  plVar4[10] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[0xb] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
  return;
}



/* Entry: 101b150a8; end: 101b15117;  */

void FUN_101b150a8(undefined8 param_1)

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
  plVar5[1] = 0x101b17264;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b142bc;
                    /* WARNING: Could not recover jumptable at 0x000101b142b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101b15118; end: 101b1519f;  */

void FUN_101b15118(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101b17278;
  plVar6[2] = param_1;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[3] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101b0dd00;
                    /* WARNING: Could not recover jumptable at 0x000101b0dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar7);
  return;
}



/* Entry: 101b151a0; end: 101b15217;  */

void FUN_101b151a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101b1727c;
  plVar6[2] = param_1;
  plVar5 = (long *)0x170;
  func_0x000107c615b8(0x170,uVar1,uVar3);
  plVar6[3] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101b0d934;
  plVar5[0x27] = lVar2;
  plVar5[0x28] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d99c,0,0);
  return;
}



/* Entry: 101b15218; end: 101b15283;  */

void FUN_101b15218(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101b17280;
  plVar4[0xb] = lVar5;
  plVar4[0xc] = lVar1;
  plVar4[9] = param_1;
  plVar4[10] = param_2;
  lVar5 = 0x112e008d8;
  func_0x0001000285a8(0x112e008d8,&UNK_10d9d0bc0);
  plVar4[0xd] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0xe] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0de00,0,0);
  return;
}



/* Entry: 101b15284; end: 101b15303;  */

void FUN_101b15284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b17284;
  plVar5[2] = param_1;
  plVar4 = (long *)0x80;
  func_0x000107c615b8(0x80,uVar1,uVar2,lVar7,lVar3,uVar8,in_x6,in_x7,unaff_x19,plVar5,
                      unaff_x29 & 0xefffffffffffffff | 0x1000000000000000,unaff_x30);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b0e264;
  plVar4[2] = lVar7;
  plVar4[3] = lVar3;
  lVar7 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  plVar4[4] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[5] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[6] = uVar6;
  lVar7 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  plVar4[7] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[8] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar6;
  lVar7 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  plVar4[10] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[0xb] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
  return;
}



/* Entry: 101b15304; end: 101b15373;  */

void FUN_101b15304(undefined8 param_1)

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
  plVar5[1] = (long)FUN_101b15374;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b142bc;
                    /* WARNING: Could not recover jumptable at 0x000101b142b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101b15374; end: 101b153af;  */

void FUN_101b15374(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b153ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b153b0; end: 101b15697;  */

void FUN_101b153b0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  byte bStack_a7;
  undefined8 uStack_a6;
  undefined8 uStack_9e;
  undefined8 uStack_96;
  undefined8 uStack_8e;
  undefined8 uStack_86;
  undefined7 uStack_7e;
  undefined1 uStack_77;
  undefined7 uStack_76;
  undefined *puStack_68;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar8,0);
    puVar10 = (undefined8 *)(param_1 + 0x2a);
    do {
      puVar7 = puStack_68;
      uStack_9e = puVar10[1];
      uStack_a6 = *puVar10;
      uStack_8e = puVar10[3];
      uStack_96 = puVar10[2];
      lStack_c8 = *(long *)((long)puVar10 + -10);
      uStack_a8 = *(undefined1 *)((long)puVar10 + -2);
      bVar2 = *(byte *)((long)puVar10 + -1);
      uStack_86 = puVar10[4];
      uStack_7e = (undefined7)puVar10[5];
      uStack_77 = (undefined1)*(undefined8 *)((long)puVar10 + 0x2f);
      uStack_76 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0x2f) >> 8);
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      puStack_b0 = (undefined *)lStack_c8;
      bStack_a7 = bVar2;
      if (lStack_c8 < 3) {
        if (lStack_c8 == 0) {
          uVar9 = 0xe400000000000000;
          uVar5 = 0x74616863;
        }
        else if (lStack_c8 == 1) {
          uVar5 = 0x6e69646e65697266;
          uVar9 = 0xe900000000000067;
        }
        else {
          if (lStack_c8 != 2) {
LAB_101b15674:
            func_0x000107c60614(&UNK_1106b5710,&lStack_c8,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b15698);
            (*pcVar3)();
          }
          uVar9 = 0xe800000000000000;
          uVar5 = 0x7265766f63736964;
        }
      }
      else if (lStack_c8 == 3) {
        uVar9 = 0xe800000000000000;
        uVar5 = 0x736569726f6d656d;
      }
      else if (lStack_c8 == 4) {
        uVar9 = 0xe900000000000074;
        uVar5 = 0x6867696c746f7073;
      }
      else {
        if (lStack_c8 != 5) goto LAB_101b15674;
        uVar9 = 0xe700000000000000;
        uVar5 = 0x656c69666f7270;
      }
      func_0x000107c5fb78(uVar5,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c5fb78(0x3d,0xe100000000000000);
      func_0x000107c603d0(&uStack_a8,&uStack_c0,&UNK_110444120,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x28,0xe100000000000000);
      bVar4 = (bVar2 & 1) == 0;
      uVar9 = 0x657669746361;
      if (bVar4) {
        uVar9 = 0x6576697463616e69;
      }
      uVar5 = 0xe600000000000000;
      if (bVar4) {
        uVar5 = 0xe800000000000000;
      }
      func_0x000107c5fb78(uVar9,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      uVar5 = uStack_b8;
      uVar9 = uStack_c0;
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x28) = uVar5;
      puVar10 = puVar10 + 9;
      lVar8 = lVar8 + -1;
      puVar7 = puStack_68;
    } while (lVar8 != 0);
  }
  uVar9 = 0x112d38270;
  puStack_b0 = puVar7;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar9;
  func_0x00010011d734();
  uVar6 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar9,uVar5);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 101b15698; end: 101b15897;  */

code * FUN_101b15698(code **param_1,code *param_2)

{
  int iVar1;
  code *pcVar2;
  code **ppcVar3;
  code *pcVar4;
  long lVar5;
  code *unaff_x21;
  ulong uVar6;
  code **ppcVar7;
  code *pcStack_70;
  code *apcStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  ppcVar7 = (code **)(uVar6 * 8);
  pcVar4 = unaff_x21;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) ||
       (ppcVar3 = ppcVar7, func_0x000107c61594(ppcVar7,8), ((ulong)ppcVar3 & 1) == 0)) {
      func_0x000107c6158c(ppcVar7,0xffffffffffffffff);
      FUN_101b1418c(apcStack_68);
      pcVar2 = apcStack_68[0];
      if (unaff_x21 != (code *)0x0) {
        pcVar2 = pcStack_70;
        pcVar4 = (code *)0x0;
      }
      uVar6 = 0xffffffffffffffff;
      func_0x000107c61590(ppcVar7,0xffffffffffffffff,0xffffffffffffffff);
      param_1 = ppcVar7;
      goto joined_r0x000101b1588c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar2 = (code *)((long)apcStack_68 + (-8 - ((long)ppcVar7 + 0xfU & 0x1ffffffffffffff0)));
  func_0x000107c60ee4(pcVar2,ppcVar7);
  (*param_2)(pcVar2,uVar6,param_1);
  if (unaff_x21 != (code *)0x0) {
    pcVar4 = (code *)0x0;
    pcVar2 = unaff_x21;
  }
  func_0x000107c61574();
joined_r0x000101b1588c:
  if (unaff_x21 != (code *)0x0) {
    param_1 = (code **)0x2;
    uVar6 = 0x12;
    pcStack_70 = pcVar2;
    func_0x000100029b9c(2,0x12,0,0);
    pcVar4 = pcVar2;
    if ((int)param_1 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      param_1 = &pcStack_70;
      func_0x000107c61658(param_1,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    *(code ***)(pcVar4 + 0x10) = param_1;
    *(ulong *)(pcVar4 + 0x18) = uVar6;
    lVar5 = 0x112e008e0;
    func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
    *(long *)(pcVar4 + 0x20) = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    *(long *)(pcVar4 + 0x28) = lVar5;
    uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar4 + 0x30) = uVar6;
    lVar5 = 0x112da1580;
    func_0x0001000285a8(0x112da1580,&UNK_10d944880);
    *(long *)(pcVar4 + 0x38) = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    *(long *)(pcVar4 + 0x40) = lVar5;
    uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar4 + 0x48) = uVar6;
    lVar5 = 0x112e008e8;
    func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
    *(long *)(pcVar4 + 0x50) = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    *(long *)(pcVar4 + 0x58) = lVar5;
    uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar4 + 0x60) = uVar6;
    pcVar4 = FUN_101b1596c;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
    return pcVar4;
  }
  return pcVar2;
}



/* Entry: 101b15898; end: 101b1596b;  */

void FUN_101b15898(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar1;
  lVar2 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b1596c,0,0);
  return;
}



/* Entry: 101b1596c; end: 101b15a6f;  */

void FUN_101b1596c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar6 = *(long *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar7 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c614f0(uVar8);
  (**(code **)(lVar7 + 0x38))();
  (**(code **)(lVar6 + 0x68))
            (uVar2,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar3);
  func_0x0001000d52ec(uVar4,uVar2);
  func_0x000107c61574(uVar8);
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  func_0x000107c5fd34(uVar10,uVar5);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  plVar9 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101b15a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar9,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 101b15a70; end: 101b15ab7;  */

void FUN_101b15a70(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b15ab8,0,0);
  return;
}



/* Entry: 101b15ab8; end: 101b15b7f;  */

void FUN_101b15ab8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  bVar3 = *(byte *)(unaff_x22 + 0x70);
  if ((bVar3 != 2) && ((bVar3 & 1) == 0)) {
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101b15a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(byte *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x50));
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b15b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3 != 2);
  return;
}



/* Entry: 101b15b80; end: 101b15bef;  */

void FUN_101b15b80(undefined8 param_1)

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
  plVar5[1] = 0x101b17268;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b142bc;
                    /* WARNING: Could not recover jumptable at 0x000101b142b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101b15bf0; end: 101b15c2f;  */

void FUN_101b15bf0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101b15c30; end: 101b15c4f;  */

void FUN_101b15c30(ulong param_1)

{
  if (param_1 < 5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 101b15c50; end: 101b15c7f;  */

void FUN_101b15c50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_101b13858(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101b15c80; end: 101b15c97;  */

void FUN_101b15c80(double *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  plVar2 = (long *)(unaff_x20 + 0x10);
  plVar1 = plVar2;
  func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = *plVar1;
  func_0x000107c4b940(*(undefined8 *)(lVar3 + 0x20));
  if (*(char *)(lVar3 + 0x38) == '\x01') {
    (**(code **)(lVar3 + 0x10))();
    *(undefined8 *)(lVar3 + 0x30) = param_2;
    *(undefined1 *)(lVar3 + 0x38) = 0;
  }
  func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x20));
  func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = *plVar2;
  func_0x000107c4b940(*(undefined8 *)(lVar3 + 0x20));
  dVar5 = *(double *)(lVar3 + 0x28);
  dVar4 = 0.0;
  if (*(char *)(lVar3 + 0x38) != '\x01') {
    dVar6 = *(double *)(lVar3 + 0x30);
    (**(code **)(lVar3 + 0x10))();
    dVar4 = dVar4 - dVar6;
    if (dVar4 < 0.0) {
      dVar4 = 0.0;
    }
  }
  func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x20));
  *param_1 = dVar5 + dVar4;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101b15c98; end: 101b15e33;  */

void FUN_101b15c98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar6 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar12 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  lVar6 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar15 = uVar12 + lVar10 + uVar8 & (uVar8 ^ 0xffffffffffffffff);
  uVar13 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar15 + 7 & 0xfffffffffffffff8;
  lVar6 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar9 = uVar8 + uVar13 + 0x18 + 8 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + uVar13 + 0x10);
  lVar16 = *(long *)(unaff_x20 + uVar13 + 0x18);
  lVar1 = *(long *)(unaff_x20 + uVar13);
  lVar17 = *(long *)(unaff_x20 + uVar8 + 0x28);
  plVar7 = (long *)(unaff_x20 + uVar8 + 0x30);
  lVar2 = *plVar7;
  lVar5 = plVar7[1];
  lVar14 = *(long *)(unaff_x20 + (uVar8 + 0x47 & 0xffffffffffffff8));
  plVar7 = (long *)0x4c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101b17288;
  plVar7[0x74] = lVar14;
  plVar7[0x73] = lVar5;
  plVar7[0x72] = lVar2;
  plVar7[0x71] = lVar17;
  plVar7[0x70] = unaff_x20 + uVar8;
  plVar7[0x6f] = unaff_x20 + uVar9;
  plVar7[0x6e] = lVar16;
  plVar7[0x6d] = lVar11;
  plVar7[0x6c] = lVar1;
  plVar7[0x6b] = unaff_x20 + uVar15;
  plVar7[0x6a] = unaff_x20 + uVar12;
  plVar7[0x69] = lVar4;
  plVar7[0x68] = lVar10;
  plVar7[0x67] = lVar3;
  plVar7[0x66] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101afc4e0,0,0);
  return;
}



/* Entry: 101b15e34; end: 101b15e9f;  */

void FUN_101b15e34(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b1728c;
  plVar5[5] = lVar6;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x101b01f60;
                    /* WARNING: Could not recover jumptable at 0x000101b01f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 101b15ea0; end: 101b15ec3;  */

void FUN_101b15ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101b15ec4; end: 101b15f33;  */

undefined8 FUN_101b15ec4(undefined8 param_1)

{
  FUN_101afa1f4();
  return param_1;
}



/* Entry: 101b15f34; end: 101b15f7b;  */

void FUN_101b15f34(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b15f7c; end: 101b15ff7;  */

void FUN_101b15f7c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b17290;
  plVar1[10] = lVar3;
  plVar1[8] = lVar4;
  plVar1[9] = lVar5;
  plVar1[6] = lVar2;
  plVar1[7] = unaff_x20 + 0x18;
  plVar1[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b01e2c,0,0);
  return;
}



/* Entry: 101b15ff8; end: 101b160d7;  */

void FUN_101b15ff8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar17 = *(long *)(unaff_x20 + 0x30);
  lVar18 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar16 = *(long *)(unaff_x20 + 0x58);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  lVar13 = *(long *)(unaff_x20 + 0x68);
  lVar11 = *(long *)(unaff_x20 + 0x60);
  lVar14 = *(long *)(unaff_x20 + 0x78);
  lVar12 = *(long *)(unaff_x20 + 0x70);
  lVar3 = *(long *)(unaff_x20 + 0x80);
  lVar7 = *(long *)(unaff_x20 + 0x88);
  plVar9 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101b160d8;
  plVar9[0x16] = lVar3;
  plVar9[0x17] = lVar7;
  plVar9[0x13] = lVar13;
  plVar9[0x12] = lVar11;
  plVar9[0x15] = lVar14;
  plVar9[0x14] = lVar12;
  plVar9[0x11] = lVar16;
  plVar9[0x10] = lVar15;
  plVar9[0xe] = lVar2;
  plVar9[0xf] = lVar6;
  plVar9[0xc] = lVar17;
  plVar9[0xd] = lVar18;
  plVar9[10] = lVar1;
  plVar9[0xb] = lVar5;
  plVar9[8] = lVar10;
  plVar9[9] = lVar4;
  plVar9[7] = param_2;
  lVar10 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  plVar9[0x18] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[0x19] = lVar10;
  lVar10 = *(long *)(lVar10 + 0x40);
  plVar9[0x1a] = lVar10;
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x1b] = uVar8;
  lVar10 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  plVar9[0x1c] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[0x1d] = lVar10;
  lVar10 = *(long *)(lVar10 + 0x40);
  plVar9[0x1e] = lVar10;
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x1f] = uVar8;
  lVar10 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  plVar9[0x20] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[0x21] = lVar10;
  lVar10 = *(long *)(lVar10 + 0x40);
  plVar9[0x22] = lVar10;
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x23] = uVar8;
  lVar10 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  plVar9[0x24] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[0x25] = lVar10;
  lVar10 = *(long *)(lVar10 + 0x40);
  plVar9[0x26] = lVar10;
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x27] = uVar8;
  lVar10 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  plVar9[0x28] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[0x29] = lVar10;
  lVar10 = *(long *)(lVar10 + 0x40);
  plVar9[0x2a] = lVar10;
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x2b] = uVar8;
  lVar10 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x2c] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0223c,0,0);
  return;
}



/* Entry: 101b160d8; end: 101b16113;  */

void FUN_101b160d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b16110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b16114; end: 101b16263;  */

void FUN_101b16114(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar12 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  lVar6 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + uVar10);
  lVar13 = *(long *)(unaff_x20 + uVar10 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar14 = *(long *)(unaff_x20 + uVar10 + 0x38);
  plVar4 = (long *)(unaff_x20 + uVar10 + 0x40);
  lVar6 = *plVar4;
  lVar2 = plVar4[1];
  plVar4 = (long *)(unaff_x20 + uVar10 + 0x50);
  lVar9 = *plVar4;
  lVar3 = plVar4[1];
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b17298;
  plVar4 = (long *)(unaff_x20 + uVar10 + 8);
  plVar5[0x14] = lVar3;
  plVar5[0x15] = unaff_x20 + (uVar7 + uVar10 + 0x50 + 0x10 & (uVar7 ^ 0xffffffffffffffff));
  plVar5[0x13] = lVar9;
  plVar5[0x12] = lVar2;
  plVar5[0x11] = lVar6;
  plVar5[0xf] = lVar13;
  plVar5[0x10] = lVar14;
  plVar5[0xd] = unaff_x20 + uVar12;
  plVar5[0xe] = lVar8;
  lVar6 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948,uVar1,uVar11);
  plVar5[0x16] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x17] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x18] = uVar7;
  lVar6 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  plVar5[0x19] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x1a] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1b] = uVar7;
  func_0x0001000a8868(plVar4,plVar4[3]);
  lVar9 = *plVar4;
  lVar6 = 0;
  func_0x000100b68ba4();
  plVar5[0xb] = lVar6;
  plVar5[0xc] = (long)&PTR_DAT_110442ef8;
  plVar5[8] = lVar9;
  func_0x000107c6157c(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b02890,0,0);
  return;
}



/* Entry: 101b16264; end: 101b163a3;  */

void FUN_101b16264(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar4 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar11 = uVar8 + uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + uVar8);
  plVar3 = (long *)(unaff_x20 + uVar10);
  lVar4 = *plVar3;
  lVar2 = plVar3[1];
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b1729c;
  plVar3[0x1a] = lVar2;
  plVar3[0x1b] = unaff_x20 + (uVar5 + uVar10 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  plVar3[0x18] = unaff_x20 + uVar11;
  plVar3[0x19] = lVar4;
  plVar3[0x16] = unaff_x20 + uVar6;
  plVar3[0x17] = lVar9;
  lVar4 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90,uVar1,uVar7);
  plVar3[0x1c] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1d] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1e] = uVar5;
  lVar4 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  plVar3[0x1f] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x20] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x21] = uVar5;
  lVar4 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0);
  plVar3[0x22] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x23] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x24] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03264,0,0);
  return;
}



/* Entry: 101b163a4; end: 101b1645f;  */

void FUN_101b163a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  lVar4 = *plVar3;
  lVar2 = plVar3[1];
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b172a0;
  plVar3[0xf] = lVar4;
  plVar3[0x10] = lVar2;
  plVar3[0xe] = unaff_x20 + uVar5;
  lVar4 = 0x112e009f8;
  func_0x0001000285a8(0x112e009f8,&UNK_10d9d0db0,uVar1);
  plVar3[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x12] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x13] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03900,0,0);
  return;
}



/* Entry: 101b16460; end: 101b16473;  */

void FUN_101b16460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 == 0xff) {
    return;
  }
  if (param_5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  return;
}



/* Entry: 101b16474; end: 101b164e3;  */

void FUN_101b16474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b1726c;
  (*(code *)&UNK_1000edb88)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101b164e4; end: 101b16617;  */

void FUN_101b164e4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  lVar5 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar7 = *(long *)(lVar5 + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar2 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar4 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar7));
  func_0x0001000834e4(unaff_x20 + uVar7 + 8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar7 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar7 + 0x50 + 8));
  (**(code **)(lVar4 + 8))
            (unaff_x20 + (uVar3 + uVar7 + 0x50 + 0x10 & (uVar3 ^ 0xffffffffffffffff)),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b16618; end: 101b16767;  */

void FUN_101b16618(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar12 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  lVar6 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + uVar10);
  lVar13 = *(long *)(unaff_x20 + uVar10 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar14 = *(long *)(unaff_x20 + uVar10 + 0x38);
  plVar4 = (long *)(unaff_x20 + uVar10 + 0x40);
  lVar6 = *plVar4;
  lVar2 = plVar4[1];
  plVar4 = (long *)(unaff_x20 + uVar10 + 0x50);
  lVar9 = *plVar4;
  lVar3 = plVar4[1];
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b172a4;
  plVar4 = (long *)(unaff_x20 + uVar10 + 8);
  plVar5[0x14] = lVar3;
  plVar5[0x15] = unaff_x20 + (uVar7 + uVar10 + 0x50 + 0x10 & (uVar7 ^ 0xffffffffffffffff));
  plVar5[0x13] = lVar9;
  plVar5[0x12] = lVar2;
  plVar5[0x11] = lVar6;
  plVar5[0xf] = lVar13;
  plVar5[0x10] = lVar14;
  plVar5[0xd] = unaff_x20 + uVar12;
  plVar5[0xe] = lVar8;
  lVar6 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948,uVar1,uVar11);
  plVar5[0x16] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x17] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x18] = uVar7;
  lVar6 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  plVar5[0x19] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x1a] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1b] = uVar7;
  func_0x0001000a8868(plVar4,plVar4[3]);
  lVar9 = *plVar4;
  lVar6 = 0;
  func_0x000100b68ba4();
  plVar5[0xb] = lVar6;
  plVar5[0xc] = (long)&PTR_DAT_110442ef8;
  plVar5[8] = lVar9;
  func_0x000107c6157c(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b02890,0,0);
  return;
}



/* Entry: 101b16768; end: 101b168c3;  */

void FUN_101b16768(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  lVar8 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  uVar6 = *(long *)(lVar8 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar2 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar11 = *(long *)(lVar2 + -8);
  uVar7 = uVar6 + *(byte *)(lVar11 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  uVar9 = *(long *)(lVar11 + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  lVar3 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar10 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(byte *)(lVar10 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar8 + 8))(unaff_x20 + uVar5,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar6));
  (**(code **)(lVar11 + 8))(unaff_x20 + uVar7,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar9 + 8));
  (**(code **)(lVar10 + 8))(unaff_x20 + (uVar4 + uVar9 + 0x10 & (uVar4 ^ 0xffffffffffffffff)),lVar3)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b168c4; end: 101b16a03;  */

void FUN_101b168c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar4 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar11 = uVar8 + uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + uVar8);
  plVar3 = (long *)(unaff_x20 + uVar10);
  lVar4 = *plVar3;
  lVar2 = plVar3[1];
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b172a8;
  plVar3[0x1a] = lVar2;
  plVar3[0x1b] = unaff_x20 + (uVar5 + uVar10 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  plVar3[0x18] = unaff_x20 + uVar11;
  plVar3[0x19] = lVar4;
  plVar3[0x16] = unaff_x20 + uVar6;
  plVar3[0x17] = lVar9;
  lVar4 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90,uVar1,uVar7);
  plVar3[0x1c] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1d] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1e] = uVar5;
  lVar4 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  plVar3[0x1f] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x20] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x21] = uVar5;
  lVar4 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0);
  plVar3[0x22] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x23] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x24] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03264,0,0);
  return;
}



/* Entry: 101b16a04; end: 101b16a93;  */

void FUN_101b16a04(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b16a94; end: 101b16b4f;  */

void FUN_101b16a94(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  lVar4 = *plVar3;
  lVar2 = plVar3[1];
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b172ac;
  plVar3[0xf] = lVar4;
  plVar3[0x10] = lVar2;
  plVar3[0xe] = unaff_x20 + uVar5;
  lVar4 = 0x112e009f8;
  func_0x0001000285a8(0x112e009f8,&UNK_10d9d0db0,uVar1);
  plVar3[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x12] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x13] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03900,0,0);
  return;
}



/* Entry: 101b16b50; end: 101b16b87;  */

void FUN_101b16b50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b0ed70(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e00a18,&UNK_10d9de5a0,0x112e009e8,
                &UNK_10d9d5e80);
  return;
}



/* Entry: 101b16b88; end: 101b16bf3;  */

void FUN_101b16b88(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b172b0;
  plVar3[3] = lVar4;
  plVar3[4] = lVar1;
  plVar3[2] = param_2;
  lVar4 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  plVar3[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[6] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar3[7] = lVar4;
  uVar2 = lVar4 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar2;
  lVar4 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  plVar3[9] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[10] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar3[0xb] = lVar4;
  uVar2 = lVar4 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xc] = uVar2;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xd] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03c10,0,0);
  return;
}



/* Entry: 101b16bf4; end: 101b16c87;  */

void FUN_101b16bf4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b172b4;
  plVar2[4] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0,uVar1);
  plVar2[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[6] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03e80,0,0);
  return;
}



/* Entry: 101b16c88; end: 101b16d1b;  */

void FUN_101b16c88(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b172b8;
  plVar2[8] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0x112e009f8;
  func_0x0001000285a8(0x112e009f8,&UNK_10d9d0db0,uVar1);
  plVar2[9] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xb] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b04044,0,0);
  return;
}



/* Entry: 101b16d1c; end: 101b16d2f;  */

void FUN_101b16d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 == 0xff) {
    return;
  }
  if (param_5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
    return;
  }
  return;
}



/* Entry: 101b16d30; end: 101b16dc3;  */

void FUN_101b16d30(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b172bc;
  plVar2[4] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0,uVar1);
  plVar2[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[6] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03e80,0,0);
  return;
}



/* Entry: 101b16dc4; end: 101b16e2b;  */

void FUN_101b16dc4(long param_1)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  
  func_0x0001000285a8();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b16e2c; end: 101b16ebf;  */

void FUN_101b16e2c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b172c0;
  plVar2[8] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0x112e009f8;
  func_0x0001000285a8(0x112e009f8,&UNK_10d9d0db0,uVar1);
  plVar2[9] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xb] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b04044,0,0);
  return;
}



/* Entry: 101b16ec0; end: 101b16ef7;  */

void FUN_101b16ec0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b0ed70(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e00a28,&UNK_10d9d0e48,0x112e001b0,
                &UNK_10d9d0938);
  return;
}



/* Entry: 101b16ef8; end: 101b16f7f;  */

undefined8 FUN_101b16ef8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101b16f80; end: 101b17053;  */

void FUN_101b16f80(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 101b17054; end: 101b17123;  */

undefined8 * FUN_101b17054(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_101b14570(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 101b17124; end: 101b1716b;  */

undefined8 * FUN_101b17124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  func_0x000101b14588(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 101b1716c; end: 101b172c3;  */

int FUN_101b1716c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b172c4; end: 101b17dd3;  */

/* WARNING: Possible PIC construction at 0x000101b17514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b17740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b17770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b178fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b17774) */
/* WARNING: Removing unreachable block (ram,0x000101b17798) */
/* WARNING: Removing unreachable block (ram,0x000101b1779c) */
/* WARNING: Removing unreachable block (ram,0x000101b177a4) */
/* WARNING: Removing unreachable block (ram,0x000101b177a8) */
/* WARNING: Removing unreachable block (ram,0x000101b17800) */
/* WARNING: Removing unreachable block (ram,0x000101b17804) */
/* WARNING: Removing unreachable block (ram,0x000101b1780c) */
/* WARNING: Removing unreachable block (ram,0x000101b17810) */
/* WARNING: Removing unreachable block (ram,0x000101b17840) */
/* WARNING: Removing unreachable block (ram,0x000101b17844) */
/* WARNING: Removing unreachable block (ram,0x000101b1784c) */
/* WARNING: Removing unreachable block (ram,0x000101b17850) */
/* WARNING: Removing unreachable block (ram,0x000101b17858) */
/* WARNING: Removing unreachable block (ram,0x000101b1785c) */
/* WARNING: Removing unreachable block (ram,0x000101b178b8) */
/* WARNING: Removing unreachable block (ram,0x000101b17880) */
/* WARNING: Removing unreachable block (ram,0x000101b178a4) */
/* WARNING: Removing unreachable block (ram,0x000101b178b0) */
/* WARNING: Removing unreachable block (ram,0x000101b178c8) */
/* WARNING: Removing unreachable block (ram,0x000101b17744) */
/* WARNING: Removing unreachable block (ram,0x000101b17518) */
/* WARNING: Removing unreachable block (ram,0x000101b1754c) */
/* WARNING: Removing unreachable block (ram,0x000101b176bc) */
/* WARNING: Removing unreachable block (ram,0x000101b1776c) */
/* WARNING: Removing unreachable block (ram,0x000101b17578) */
/* WARNING: Removing unreachable block (ram,0x000101b1759c) */
/* WARNING: Removing unreachable block (ram,0x000101b175a0) */
/* WARNING: Removing unreachable block (ram,0x000101b175a8) */
/* WARNING: Removing unreachable block (ram,0x000101b175ac) */
/* WARNING: Removing unreachable block (ram,0x000101b17604) */
/* WARNING: Removing unreachable block (ram,0x000101b17608) */
/* WARNING: Removing unreachable block (ram,0x000101b17610) */
/* WARNING: Removing unreachable block (ram,0x000101b17614) */
/* WARNING: Removing unreachable block (ram,0x000101b17644) */
/* WARNING: Removing unreachable block (ram,0x000101b17648) */
/* WARNING: Removing unreachable block (ram,0x000101b17650) */
/* WARNING: Removing unreachable block (ram,0x000101b17654) */
/* WARNING: Removing unreachable block (ram,0x000101b1765c) */
/* WARNING: Removing unreachable block (ram,0x000101b17660) */
/* WARNING: Removing unreachable block (ram,0x000101b176f8) */
/* WARNING: Removing unreachable block (ram,0x000101b17684) */
/* WARNING: Removing unreachable block (ram,0x000101b176a8) */
/* WARNING: Removing unreachable block (ram,0x000101b176b4) */
/* WARNING: Removing unreachable block (ram,0x000101b17710) */
/* WARNING: Removing unreachable block (ram,0x000101b1752c) */
/* WARNING: Removing unreachable block (ram,0x000101b17900) */

void FUN_101b172c4(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lStack_68;
  
  bVar1 = *(byte *)((long)param_1 + 9);
  if ((char)param_1[1] == '\0') {
    uVar4 = 0x657261656c63;
    pcVar5 = "cleared_not_active";
LAB_101b17394:
    uVar4 = uVar4 | 0x5f64000000000000;
    uVar7 = 0xee00657669746361;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0xd000000000000012;
      uVar7 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    }
  }
  else {
    if ((char)param_1[1] != '\x01') {
      uVar4 = 0x657474696d6f;
      pcVar5 = "omitted_not_active";
      goto LAB_101b17394;
    }
    pcVar5 = "suppressed_not_active";
    if ((bVar1 & 1) == 0) {
      pcVar5 = "skipped_no_budget";
    }
    uVar7 = (ulong)pcVar5 | 0x8000000000000000;
    if ((bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar4 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,uVar7);
      func_0x000107c6142c(uVar7);
      lStack_68 = *param_1;
      if (lStack_68 < 3) {
        if (lStack_68 == 0) {
          uVar8 = 0xe400000000000000;
          uVar3 = 0x74616863;
        }
        else if (lStack_68 == 1) {
          uVar3 = 0x6e69646e65697266;
          uVar8 = 0xe900000000000067;
        }
        else {
          if (lStack_68 != 2) goto LAB_101b179ec;
          uVar8 = 0xe800000000000000;
          uVar3 = 0x7265766f63736964;
        }
      }
      else if (lStack_68 == 3) {
        uVar8 = 0xe800000000000000;
        uVar3 = 0x736569726f6d656d;
      }
      else if (lStack_68 == 4) {
        uVar3 = 0x6867696c746f7073;
        uVar8 = 0xe900000000000074;
      }
      else {
        if (lStack_68 != 5) goto LAB_101b179ec;
        uVar8 = 0xe700000000000000;
        uVar3 = 0x656c69666f7270;
      }
      func_0x000107c5fadc(uVar3,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x0001056ed000(uVar6,uVar4,uVar3,*(undefined1 *)((long)param_1 + 0x31),1);
      goto LAB_101b17510;
    }
    uVar4 = 0xd000000000000011;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  lStack_68 = *param_1;
  if (lStack_68 < 3) {
    if (lStack_68 == 0) {
      uVar8 = 0xe400000000000000;
      uVar3 = 0x74616863;
    }
    else if (lStack_68 == 1) {
      uVar3 = 0x6e69646e65697266;
      uVar8 = 0xe900000000000067;
    }
    else {
      if (lStack_68 != 2) {
LAB_101b179ec:
        func_0x000107c60614(&UNK_1106b5710,&lStack_68,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b17a10);
        (*pcVar2)();
      }
      uVar8 = 0xe800000000000000;
      uVar3 = 0x7265766f63736964;
    }
  }
  else if (lStack_68 == 3) {
    uVar8 = 0xe800000000000000;
    uVar3 = 0x736569726f6d656d;
  }
  else if (lStack_68 == 4) {
    uVar3 = 0x6867696c746f7073;
    uVar8 = 0xe900000000000074;
  }
  else {
    if (lStack_68 != 5) goto LAB_101b179ec;
    uVar8 = 0xe700000000000000;
    uVar3 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar3,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x0001056ecd8c(uVar6,uVar4,uVar3,*(undefined1 *)((long)param_1 + 0x31),1);
LAB_101b17510:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101b17dd4; end: 101b17efb;  */

/* WARNING: Possible PIC construction at 0x000101b183dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b183ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b18630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b180e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b183e0) */
/* WARNING: Removing unreachable block (ram,0x000101b183f0) */
/* WARNING: Removing unreachable block (ram,0x000101b186c4) */
/* WARNING: Removing unreachable block (ram,0x000101b18418) */
/* WARNING: Removing unreachable block (ram,0x000101b18424) */
/* WARNING: Removing unreachable block (ram,0x000101b18428) */
/* WARNING: Removing unreachable block (ram,0x000101b186c8) */
/* WARNING: Removing unreachable block (ram,0x000101b1842c) */
/* WARNING: Removing unreachable block (ram,0x000101b18434) */
/* WARNING: Removing unreachable block (ram,0x000101b18438) */
/* WARNING: Removing unreachable block (ram,0x000101b186cc) */
/* WARNING: Removing unreachable block (ram,0x000101b1843c) */
/* WARNING: Removing unreachable block (ram,0x000101b18484) */
/* WARNING: Removing unreachable block (ram,0x000101b18634) */
/* WARNING: Removing unreachable block (ram,0x000101b18444) */
/* WARNING: Removing unreachable block (ram,0x000101b184b8) */
/* WARNING: Removing unreachable block (ram,0x000101b18524) */
/* WARNING: Removing unreachable block (ram,0x000101b184bc) */
/* WARNING: Removing unreachable block (ram,0x000101b184c4) */
/* WARNING: Removing unreachable block (ram,0x000101b1844c) */
/* WARNING: Removing unreachable block (ram,0x000101b184dc) */
/* WARNING: Removing unreachable block (ram,0x000101b18454) */
/* WARNING: Removing unreachable block (ram,0x000101b18500) */
/* WARNING: Removing unreachable block (ram,0x000101b1845c) */
/* WARNING: Removing unreachable block (ram,0x000101b1852c) */
/* WARNING: Removing unreachable block (ram,0x000101b18464) */
/* WARNING: Removing unreachable block (ram,0x000101b1853c) */
/* WARNING: Removing unreachable block (ram,0x000101b18584) */
/* WARNING: Removing unreachable block (ram,0x000101b185bc) */
/* WARNING: Removing unreachable block (ram,0x000101b1858c) */
/* WARNING: Removing unreachable block (ram,0x000101b185ec) */
/* WARNING: Removing unreachable block (ram,0x000101b18594) */
/* WARNING: Removing unreachable block (ram,0x000101b1855c) */
/* WARNING: Removing unreachable block (ram,0x000101b185b4) */
/* WARNING: Removing unreachable block (ram,0x000101b18560) */
/* WARNING: Removing unreachable block (ram,0x000101b185d4) */
/* WARNING: Removing unreachable block (ram,0x000101b18568) */
/* WARNING: Removing unreachable block (ram,0x000101b18600) */
/* WARNING: Removing unreachable block (ram,0x000101b17f38) */
/* WARNING: Removing unreachable block (ram,0x000101b17f84) */
/* WARNING: Removing unreachable block (ram,0x000101b17fb4) */
/* WARNING: Removing unreachable block (ram,0x000101b17f64) */
/* WARNING: Removing unreachable block (ram,0x000101b17f94) */

undefined1  [16] FUN_101b17dd4(ulong param_1,undefined8 param_2,long param_3,char param_4)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  char *unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char *in_stack_00000008;
  undefined1 auStack_80 [16];
  
  pcVar4 = (char *)0xea00000000006576;
  pcVar2 = (char *)0x697463615f746f6e;
  pcVar5 = (char *)(param_1 & 0xff);
  switch(pcVar5) {
  case (char *)0x0:
    goto code_r0x000101b17e54;
  default:
    pcVar5 = "ved(";
  case (char *)0xe0:
    pcVar5 = pcVar5 + 0x2b0;
code_r0x000101b17e14:
    pcVar5 = pcVar5 + -0x20;
code_r0x000101b17e18:
    pcVar4 = (char *)((ulong)pcVar5 | 0x8000000000000000);
code_r0x000101b17e1c:
    pcVar5 = (char *)0x18;
code_r0x000101b17e20:
    pcVar5 = (char *)((ulong)pcVar5 | 0xd000000000000000);
code_r0x000101b17e24:
    pcVar2 = pcVar5 + -7;
code_r0x000101b17e28:
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = pcVar2;
    return auVar8;
  case (char *)0x2:
    pcVar4 = (char *)0x800000010effc270;
    pcVar5 = (char *)0x18;
  case (char *)0x20:
    auVar10._0_8_ = (ulong)pcVar5 | 0xd000000000000003;
    auVar10._8_8_ = pcVar4;
    return auVar10;
  case (char *)0x3:
    pcVar2 = (char *)0x18;
  case (char *)0x84:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar5 = "active_cleared_free_slot";
code_r0x000101b17ef0:
    auVar13._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar13._0_8_ = pcVar2;
    return auVar13;
  case (char *)0x4:
  case (char *)0x68:
    pcVar5 = "ved(";
  case (char *)0x6c:
  case (char *)0xac:
    pcVar5 = pcVar5 + 0x250;
code_r0x000101b17ec8:
    auVar12._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000017;
    return auVar12;
  case (char *)0x5:
  case (char *)0x4d:
  case (char *)0x8d:
    pcVar2 = (char *)0x18;
  case (char *)0x45:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar5 = "active_deferred_over_max";
code_r0x000101b17ebc:
    goto code_r0x000101b17ef0;
  case (char *)0x6:
    pcVar5 = "active_cleared_critical";
    goto code_r0x000101b17ec8;
  case (char *)0x7:
    pcVar4 = (char *)0x800000010effc1d0;
    pcVar5 = (char *)0x18;
  case (char *)0x5c:
    pcVar2 = (char *)(((ulong)pcVar5 | 0xd000000000000000) - 5);
code_r0x000101b17ea8:
    auVar11._8_8_ = pcVar4;
    auVar11._0_8_ = pcVar2;
    return auVar11;
  case (char *)0x8:
  case (char *)0x44:
    pcVar2 = (char *)0xd000000000000018;
    pcVar5 = "active_instance_inactive";
    goto code_r0x000101b17ef0;
  case (char *)0x9:
    pcVar4 = (char *)0x800000010effc190;
    pcVar5 = (char *)0x18;
  case (char *)0x18:
    pcVar2 = (char *)(((ulong)pcVar5 | 0xd000000000000000) - 8);
code_r0x000101b17e54:
    auVar9._8_8_ = pcVar4;
    auVar9._0_8_ = pcVar2;
    return auVar9;
  case (char *)0x30:
  case (char *)0x71:
LAB_101b18108:
    in_stack_00000008 = (char *)0xea00000000006576;
    pcVar5 = in_stack_00000008;
    goto LAB_101b18114;
  case (char *)0x31:
  case (char *)0x36:
    pcVar2 = (char *)0x697463615f746f6e;
    pcVar4 = unaff_x23;
    break;
  case (char *)0x32:
    pcVar2 = (char *)0x697463616f6d6f6e;
  case (char *)0x34:
  case (char *)0x39:
  case (char *)0x3f:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffff | 0x7365697200000000);
code_r0x000101b17fa8:
    pcVar4 = unaff_x23;
    break;
  case (char *)0x33:
  case (char *)0x3d:
  case (char *)0x3e:
    goto code_r0x000101b17fa8;
  case (char *)0x35:
    goto LAB_101b18108;
  case (char *)0x37:
    goto code_r0x000101b17fc4;
  case (char *)0x38:
    pcVar2 = (char *)0x766f63736964;
    goto code_r0x000101b17fc4;
  case (char *)0x3a:
  case (char *)0x40:
    unaff_x23 = (char *)0xe700000000000000;
    pcVar2 = (char *)0x7270;
  case (char *)0x4c:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff | 0x656c69666f0000);
    pcVar4 = unaff_x23;
    break;
  case (char *)0x3b:
    pcVar2 = (char *)0x6974636165696f6e;
  case (char *)0xa1:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffff | 0x6e69646e00000000);
    unaff_x23 = (char *)0x67;
code_r0x000101b17f4c:
    unaff_x23 = (char *)((ulong)unaff_x23 & 0xffffffffffff | 0xe900000000000000);
    pcVar4 = unaff_x23;
    break;
  case (char *)0x3c:
    goto code_r0x000101b17fc8;
  case (char *)0x46:
  case (char *)0x4e:
  case (char *)0x8e:
    goto code_r0x000101b180a8;
  case (char *)0x47:
  case (char *)0x4f:
  case (char *)0x88:
  case (char *)0x8f:
  case (char *)0x98:
  case (char *)0x9b:
  case (char *)0x9f:
  case (char *)0xe8:
    goto code_r0x000101b17e14;
  case (char *)0x48:
    goto code_r0x000101b17ebc;
  case (char *)0x49:
    goto code_r0x000101b17ef0;
  case (char *)0x4a:
  case (char *)0x58:
    register0x00000008 = (BADSPACEBASE *)auStack_80;
  case (char *)0x9d:
    *(char **)((long)register0x00000008 + 0x60) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x70) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x78) = unaff_x30;
    unaff_x19 = *(undefined8 *)(unaff_x20 + 0x18);
    unaff_x21 = pcVar2;
    unaff_x22 = pcVar4;
    if (param_4 == '\x01') {
      unaff_x25 = 0xe400000000000000;
      pcVar2 = (char *)0x656e6f6e;
    }
    else {
      in_OV = SBORROW8(param_3,2);
      in_NG = param_3 + -2 < 0;
      in_ZR = param_3 == 2;
code_r0x000101b181f0:
      if ((bool)in_ZR || in_NG != in_OV) {
        if (param_3 == 0) {
          unaff_x25 = 0xe400000000000000;
          pcVar2 = (char *)0x74616863;
        }
        else if (param_3 == 1) {
          pcVar2 = (char *)0x65697266;
code_r0x000101b18208:
          pcVar2 = (char *)((ulong)pcVar2 & 0xffffffff | 0x6e69646e00000000);
          unaff_x25 = 0xe900000000000067;
        }
        else {
          if (param_3 != 2) {
LAB_101b186d8:
            *(long *)((long)register0x00000008 + 8) = param_3;
            goto LAB_101b186dc;
          }
          unaff_x25 = 0xe800000000000000;
          pcVar2 = (char *)0x7265766f63736964;
        }
      }
      else if (param_3 == 3) {
        unaff_x25 = 0xe800000000000000;
        pcVar2 = (char *)0x736569726f6d656d;
      }
      else if (param_3 == 4) {
        pcVar2 = (char *)0x6867696c746f7073;
        unaff_x25 = 0xe900000000000074;
      }
      else {
        if (param_3 != 5) goto LAB_101b186d8;
        unaff_x25 = 0xe700000000000000;
        pcVar2 = (char *)0x656c69666f7270;
      }
    }
    unaff_x23 = (char *)0x646e6570;
code_r0x000101b18190:
    func_0x000107c5fadc(pcVar2,unaff_x25);
    func_0x000107c6142c(unaff_x25);
    unaff_x23 = (char *)((ulong)unaff_x23 & 0xffffffff | 0x676e6900000000);
    unaff_x24 = pcVar2;
code_r0x000101b181ac:
    pcVar2 = unaff_x23;
    unaff_x20 = unaff_x24;
    if ((long)unaff_x22 < 2) {
      if (unaff_x22 == (char *)0x0) {
        uVar6 = 0xe700000000000000;
      }
      else if (unaff_x22 == (char *)0x1) {
        uVar6 = 0xe700000000000000;
        pcVar2 = (char *)0x6465746e617267;
      }
      else {
LAB_101b182c4:
        uVar6 = 0xe600000000000000;
        pcVar2 = (char *)0x6465696e6564;
        unaff_x20 = unaff_x24;
      }
    }
    else if (unaff_x22 == (char *)0x2) {
      pcVar2 = (char *)0x6572665f6b6f6f74;
      uVar6 = 0xee00746f6c735f65;
    }
    else {
code_r0x000101b181bc:
      if (unaff_x22 == (char *)0x3) {
        pcVar2 = (char *)0x616e695f746e6577;
        uVar6 = 0xed00006576697463;
        unaff_x20 = unaff_x24;
      }
      else {
        in_ZR = unaff_x22 == (char *)0x4;
code_r0x000101b181c8:
        if (!(bool)in_ZR) goto LAB_101b182c4;
        pcVar2 = (char *)0x696765726e75;
code_r0x000101b181d8:
        pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x7473000000000000);
        unaff_x26 = 0x7265;
code_r0x000101b181e0:
        uVar6 = unaff_x26 & 0xffff0000ffff | 0xec00000064650000;
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000107c5fadc(pcVar2,uVar6);
    func_0x000107c6142c(uVar6);
    if ((long)unaff_x21 < 3) {
      if (unaff_x21 == (char *)0x0) {
        uVar7 = 0xe400000000000000;
        uVar3 = 0x74616863;
      }
      else if (unaff_x21 == (char *)0x1) {
        uVar3 = 0x6e69646e65697266;
        uVar7 = 0xe900000000000067;
      }
      else {
        if (unaff_x21 != (char *)0x2) {
LAB_101b186d0:
          *(char **)((long)register0x00000008 + 8) = unaff_x21;
LAB_101b186dc:
          func_0x000107c60614(&UNK_1106b5710,(undefined1 *)((long)register0x00000008 + 8),
                              &UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b186fc);
          (*pcVar1)();
        }
        uVar7 = 0xe800000000000000;
        uVar3 = 0x7265766f63736964;
      }
    }
    else if (unaff_x21 == (char *)0x3) {
      uVar7 = 0xe800000000000000;
      uVar3 = 0x736569726f6d656d;
    }
    else if (unaff_x21 == (char *)0x4) {
      uVar3 = 0x6867696c746f7073;
      uVar7 = 0xe900000000000074;
    }
    else {
      if (unaff_x21 != (char *)0x5) goto LAB_101b186d0;
      uVar7 = 0xe700000000000000;
      uVar3 = 0x656c69666f7270;
    }
    func_0x000107c5fadc(uVar3,uVar7);
    func_0x000107c6142c(uVar7);
    pcVar4 = unaff_x20;
    func_0x0001056ee980(unaff_x19,unaff_x20,pcVar2,uVar3,1);
    goto code_r0x000107c61170;
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x79:
  case (char *)0x7d:
  case (char *)0x91:
  case (char *)0x95:
    goto code_r0x000101b180e8;
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x7a:
  case (char *)0x7e:
  case (char *)0x92:
  case (char *)0x96:
  case (char *)0xaa:
    goto code_r0x000101b181bc;
  case (char *)0x60:
    goto code_r0x000101b181ac;
  case (char *)0x64:
    goto code_r0x000101b17ea8;
  case (char *)0x69:
    goto code_r0x000107c61170;
  case (char *)0x70:
    goto code_r0x000101b17f4c;
  case (char *)0x72:
    goto LAB_101b180b8;
  case (char *)0x73:
  case (char *)0xb8:
    goto code_r0x000101b17e20;
  case (char *)0x78:
    goto code_r0x000101b181f0;
  case (char *)0x7c:
    goto code_r0x000101b18208;
  case (char *)0x87:
    goto code_r0x000101b1800c;
  case (char *)0x8c:
    goto code_r0x000101b181e0;
  case (char *)0x90:
    goto code_r0x000101b18190;
  case (char *)0x94:
    goto code_r0x000101b181c8;
  case (char *)0x9c:
    goto LAB_101b1809c;
  case (char *)0x9e:
    goto code_r0x000101b18068;
  case (char *)0xa0:
  case (char *)0xa8:
    break;
  case (char *)0xa2:
    goto code_r0x000101b17ec8;
  case (char *)0xa3:
    goto code_r0x000101b181d8;
  case (char *)0xa9:
    goto code_r0x000101b180d0;
  case (char *)0xc0:
    goto code_r0x000101b17e1c;
  case (char *)0xc8:
    goto code_r0x000101b17e24;
  case (char *)0xd0:
    goto code_r0x000101b17e28;
  case (char *)0xf0:
    goto code_r0x000101b17e18;
  }
code_r0x000101b17fec:
  func_0x000107c5fadc(pcVar2,pcVar4);
  func_0x000107c6142c(unaff_x23);
  unaff_x22 = pcVar2;
  if ((long)unaff_x21 < 3) {
    if (unaff_x21 == (char *)0x0) {
      unaff_x21 = (char *)0xe400000000000000;
    }
    else {
      in_ZR = unaff_x21 == (char *)0x1;
code_r0x000101b1800c:
      if ((bool)in_ZR) {
        unaff_x21 = (char *)0xe900000000000067;
        unaff_x24 = (char *)0x6e69646e65697266;
      }
      else {
        pcVar5 = unaff_x21;
        if (unaff_x21 != (char *)0x2) {
LAB_101b18114:
          in_stack_00000008 = pcVar5;
          func_0x000107c60614(&UNK_1106b5710,&stack0x00000008,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b18134);
          (*pcVar1)();
        }
        unaff_x21 = (char *)0xe800000000000000;
        unaff_x24 = (char *)0x7265766f63736964;
      }
    }
  }
  else if (unaff_x21 == (char *)0x3) {
    unaff_x21 = (char *)0xe800000000000000;
code_r0x000101b18068:
    unaff_x24 = (char *)0x736569726f6d656d;
  }
  else if (unaff_x21 == (char *)0x4) {
    unaff_x21 = (char *)0xe900000000000074;
    unaff_x24 = (char *)0x6867696c746f7073;
  }
  else {
LAB_101b1809c:
    pcVar5 = unaff_x21;
    if (unaff_x21 != (char *)0x5) goto LAB_101b18114;
    unaff_x21 = (char *)0xe700000000000000;
code_r0x000101b180a8:
    unaff_x24 = (char *)0x656c69666f7270;
  }
LAB_101b180b8:
  unaff_x20 = unaff_x24;
  func_0x000107c5fadc(unaff_x20,unaff_x21);
  func_0x000107c6142c(unaff_x21);
code_r0x000101b180d0:
  pcVar4 = unaff_x22;
  func_0x0001056ee750(unaff_x19,unaff_x22,unaff_x20,1);
  pcVar2 = unaff_x22;
code_r0x000101b180e8:
  unaff_x20 = pcVar2;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  auVar14._8_8_ = pcVar4;
  auVar14._0_8_ = unaff_x20;
  return auVar14;
code_r0x000101b17fc4:
  pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x7265000000000000);
code_r0x000101b17fc8:
  pcVar4 = unaff_x23;
  goto code_r0x000101b17fec;
}



/* Entry: 101b17efc; end: 101b18133;  */

/* WARNING: Possible PIC construction at 0x000101b180e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b180ec) */

void FUN_101b17efc(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  uVar5 = 0x74616863;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_48 = param_2;
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar4 = 0xe400000000000000;
      uVar2 = 0x74616863;
    }
    else if (param_2 == 1) {
      uVar2 = 0x6e69646e65697266;
      uVar4 = 0xe900000000000067;
    }
    else {
      if (param_2 != 2) goto LAB_101b18114;
      uVar4 = 0xe800000000000000;
      uVar2 = 0x7265766f63736964;
    }
  }
  else if (param_2 == 3) {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x736569726f6d656d;
  }
  else if (param_2 == 4) {
    uVar2 = 0x6867696c746f7073;
    uVar4 = 0xe900000000000074;
  }
  else {
    if (param_2 != 5) goto LAB_101b18114;
    uVar4 = 0xe700000000000000;
    uVar2 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  lStack_48 = param_1;
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar4 = 0xe400000000000000;
    }
    else if (param_1 == 1) {
      uVar5 = 0x6e69646e65697266;
      uVar4 = 0xe900000000000067;
    }
    else {
      if (param_1 != 2) {
LAB_101b18114:
        func_0x000107c60614(&UNK_1106b5710,&lStack_48,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b18134);
        (*pcVar1)();
      }
      uVar4 = 0xe800000000000000;
      uVar5 = 0x7265766f63736964;
    }
  }
  else if (param_1 == 3) {
    uVar4 = 0xe800000000000000;
    uVar5 = 0x736569726f6d656d;
  }
  else if (param_1 == 4) {
    uVar5 = 0x6867696c746f7073;
    uVar4 = 0xe900000000000074;
  }
  else {
    if (param_1 != 5) goto LAB_101b18114;
    uVar4 = 0xe700000000000000;
    uVar5 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x0001056ee750(uVar3,uVar2,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b18134; end: 101b186fb;  */

/* WARNING: Possible PIC construction at 0x000101b183dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b183ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b18630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b183e0) */
/* WARNING: Removing unreachable block (ram,0x000101b183f0) */
/* WARNING: Removing unreachable block (ram,0x000101b186c4) */
/* WARNING: Removing unreachable block (ram,0x000101b18418) */
/* WARNING: Removing unreachable block (ram,0x000101b18424) */
/* WARNING: Removing unreachable block (ram,0x000101b18428) */
/* WARNING: Removing unreachable block (ram,0x000101b186c8) */
/* WARNING: Removing unreachable block (ram,0x000101b1842c) */
/* WARNING: Removing unreachable block (ram,0x000101b18434) */
/* WARNING: Removing unreachable block (ram,0x000101b18438) */
/* WARNING: Removing unreachable block (ram,0x000101b186cc) */
/* WARNING: Removing unreachable block (ram,0x000101b1843c) */
/* WARNING: Removing unreachable block (ram,0x000101b18484) */
/* WARNING: Removing unreachable block (ram,0x000101b18634) */
/* WARNING: Removing unreachable block (ram,0x000101b18444) */
/* WARNING: Removing unreachable block (ram,0x000101b184b8) */
/* WARNING: Removing unreachable block (ram,0x000101b18524) */
/* WARNING: Removing unreachable block (ram,0x000101b184bc) */
/* WARNING: Removing unreachable block (ram,0x000101b184c4) */
/* WARNING: Removing unreachable block (ram,0x000101b1844c) */
/* WARNING: Removing unreachable block (ram,0x000101b184dc) */
/* WARNING: Removing unreachable block (ram,0x000101b18454) */
/* WARNING: Removing unreachable block (ram,0x000101b18500) */
/* WARNING: Removing unreachable block (ram,0x000101b1845c) */
/* WARNING: Removing unreachable block (ram,0x000101b1852c) */
/* WARNING: Removing unreachable block (ram,0x000101b18464) */
/* WARNING: Removing unreachable block (ram,0x000101b1853c) */
/* WARNING: Removing unreachable block (ram,0x000101b18584) */
/* WARNING: Removing unreachable block (ram,0x000101b185bc) */
/* WARNING: Removing unreachable block (ram,0x000101b1858c) */
/* WARNING: Removing unreachable block (ram,0x000101b185ec) */
/* WARNING: Removing unreachable block (ram,0x000101b18594) */
/* WARNING: Removing unreachable block (ram,0x000101b1855c) */
/* WARNING: Removing unreachable block (ram,0x000101b185b4) */
/* WARNING: Removing unreachable block (ram,0x000101b18560) */
/* WARNING: Removing unreachable block (ram,0x000101b185d4) */
/* WARNING: Removing unreachable block (ram,0x000101b18568) */
/* WARNING: Removing unreachable block (ram,0x000101b18600) */

void FUN_101b18134(long param_1,long param_2,long param_3,char param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_78;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_4 == '\x01') {
    uVar6 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  }
  else {
    lStack_78 = param_3;
    if (param_3 < 3) {
      if (param_3 == 0) {
        uVar6 = 0xe400000000000000;
        uVar2 = 0x74616863;
      }
      else if (param_3 == 1) {
        uVar2 = 0x6e69646e65697266;
        uVar6 = 0xe900000000000067;
      }
      else {
        if (param_3 != 2) goto LAB_101b186dc;
        uVar6 = 0xe800000000000000;
        uVar2 = 0x7265766f63736964;
      }
    }
    else if (param_3 == 3) {
      uVar6 = 0xe800000000000000;
      uVar2 = 0x736569726f6d656d;
    }
    else if (param_3 == 4) {
      uVar2 = 0x6867696c746f7073;
      uVar6 = 0xe900000000000074;
    }
    else {
      if (param_3 != 5) goto LAB_101b186dc;
      uVar6 = 0xe700000000000000;
      uVar2 = 0x656c69666f7270;
    }
  }
  uVar5 = 0x676e69646e6570;
  func_0x000107c5fadc(uVar2,uVar6);
  func_0x000107c6142c(uVar6);
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar6 = 0xe700000000000000;
    }
    else if (param_2 == 1) {
      uVar6 = 0xe700000000000000;
      uVar5 = 0x6465746e617267;
    }
    else {
LAB_101b182c4:
      uVar6 = 0xe600000000000000;
      uVar5 = 0x6465696e6564;
    }
  }
  else if (param_2 == 2) {
    uVar5 = 0x6572665f6b6f6f74;
    uVar6 = 0xee00746f6c735f65;
  }
  else if (param_2 == 3) {
    uVar5 = 0x616e695f746e6577;
    uVar6 = 0xed00006576697463;
  }
  else {
    if (param_2 != 4) goto LAB_101b182c4;
    uVar5 = 0x7473696765726e75;
    uVar6 = 0xec00000064657265;
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  lStack_78 = param_1;
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar6 = 0xe400000000000000;
      uVar3 = 0x74616863;
    }
    else if (param_1 == 1) {
      uVar3 = 0x6e69646e65697266;
      uVar6 = 0xe900000000000067;
    }
    else {
      if (param_1 != 2) {
LAB_101b186dc:
        func_0x000107c60614(&UNK_1106b5710,&lStack_78,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b186fc);
        (*pcVar1)();
      }
      uVar6 = 0xe800000000000000;
      uVar3 = 0x7265766f63736964;
    }
  }
  else if (param_1 == 3) {
    uVar6 = 0xe800000000000000;
    uVar3 = 0x736569726f6d656d;
  }
  else if (param_1 == 4) {
    uVar3 = 0x6867696c746f7073;
    uVar6 = 0xe900000000000074;
  }
  else {
    if (param_1 != 5) goto LAB_101b186dc;
    uVar6 = 0xe700000000000000;
    uVar3 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x0001056ee980(uVar4,uVar2,uVar5,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b186fc; end: 101b1899f;  */

/* WARNING: Possible PIC construction at 0x000101b18954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b18958) */

void FUN_101b186fc(long param_1,char param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_48;
  
  uVar9 = 0xe900000000000030;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101b1eb88();
  uVar1 = (uint)param_3 & 0xff;
  uVar8 = 0x3030325f31303031;
  if (uVar1 != 4) {
    uVar9 = 0xe800000000000000;
    uVar8 = 0x73756c7031303032;
  }
  uVar5 = 0x303030315f313035;
  if (uVar1 != 3) {
    uVar5 = uVar8;
  }
  uVar8 = 0xe800000000000000;
  if (uVar1 != 3) {
    uVar8 = uVar9;
  }
  uVar9 = 0x3030315f3135;
  if (uVar1 != 1) {
    uVar9 = 0x3030355f313031;
  }
  uVar6 = 0xe600000000000000;
  if (uVar1 != 1) {
    uVar6 = 0xe700000000000000;
  }
  bVar4 = (param_3 & 0xff) != 0;
  uVar2 = 0x30355f30;
  if (bVar4) {
    uVar2 = uVar9;
  }
  uVar9 = 0xe400000000000000;
  if (bVar4) {
    uVar9 = uVar6;
  }
  if (uVar1 < 3) {
    uVar8 = uVar9;
    uVar5 = uVar2;
  }
  func_0x000107c5fadc(uVar5,uVar8);
  func_0x000107c6142c(uVar8);
  if (param_2 == '\0') {
    uVar9 = 0x656d7269666e6f63;
    uVar8 = 0xe900000000000064;
  }
  else {
    uVar9 = 0x5f796c676e6f7277;
    uVar8 = 0xed00006e776f6873;
    if (param_2 != '\x01') {
      uVar8 = 0xee006e6564646968;
    }
  }
  func_0x000107c5fadc(uVar9,uVar8);
  func_0x000107c6142c(uVar8);
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar8 = 0xe400000000000000;
      uVar6 = 0x74616863;
    }
    else if (param_1 == 1) {
      uVar8 = 0xe900000000000067;
      uVar6 = 0x6e69646e65697266;
    }
    else {
      if (param_1 != 2) {
LAB_101b1897c:
        lStack_48 = param_1;
        func_0x000107c60614(&UNK_1106b5710,&lStack_48,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b189a0);
        (*pcVar3)();
      }
      uVar8 = 0xe800000000000000;
      uVar6 = 0x7265766f63736964;
    }
  }
  else if (param_1 == 3) {
    uVar8 = 0xe800000000000000;
    uVar6 = 0x736569726f6d656d;
  }
  else if (param_1 == 4) {
    uVar8 = 0xe900000000000074;
    uVar6 = 0x6867696c746f7073;
  }
  else {
    if (param_1 != 5) goto LAB_101b1897c;
    uVar8 = 0xe700000000000000;
    uVar6 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x0001056edeec(uVar7,uVar5,uVar9,uVar6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101b189a0; end: 101b18e93;  */

/* WARNING: Possible PIC construction at 0x000101b18bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b18d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b18dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b18e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b18dd0) */
/* WARNING: Removing unreachable block (ram,0x000101b18d38) */
/* WARNING: Removing unreachable block (ram,0x000101b18db8) */
/* WARNING: Removing unreachable block (ram,0x000101b18d3c) */
/* WARNING: Removing unreachable block (ram,0x000101b18e64) */
/* WARNING: Removing unreachable block (ram,0x000101b18d6c) */
/* WARNING: Removing unreachable block (ram,0x000101b18d78) */
/* WARNING: Removing unreachable block (ram,0x000101b18d7c) */
/* WARNING: Removing unreachable block (ram,0x000101b18e68) */
/* WARNING: Removing unreachable block (ram,0x000101b18d80) */
/* WARNING: Removing unreachable block (ram,0x000101b18d88) */
/* WARNING: Removing unreachable block (ram,0x000101b18d8c) */
/* WARNING: Removing unreachable block (ram,0x000101b18e6c) */
/* WARNING: Removing unreachable block (ram,0x000101b18d90) */
/* WARNING: Removing unreachable block (ram,0x000101b18dc8) */
/* WARNING: Removing unreachable block (ram,0x000101b18bf8) */
/* WARNING: Removing unreachable block (ram,0x000101b18ca8) */
/* WARNING: Removing unreachable block (ram,0x000101b18c28) */
/* WARNING: Removing unreachable block (ram,0x000101b18cc8) */
/* WARNING: Removing unreachable block (ram,0x000101b18c38) */
/* WARNING: Removing unreachable block (ram,0x000101b18ce8) */
/* WARNING: Removing unreachable block (ram,0x000101b18c90) */
/* WARNING: Removing unreachable block (ram,0x000101b18ca4) */
/* WARNING: Removing unreachable block (ram,0x000101b18e60) */
/* WARNING: Removing unreachable block (ram,0x000101b18e28) */

void FUN_101b189a0(long param_1,double param_2,char param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  long alStack_140 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  
  uVar6 = 0x756f726765726f66;
  uVar5 = uVar6;
  if (param_3 != '\x01') {
    uVar5 = 0x656d617266;
  }
  uVar8 = 0xea0000000000646e;
  if (param_3 != '\x01') {
    uVar8 = 0xe500000000000000;
  }
  uVar1 = 0xea0000000000646e;
  if (*(char *)(param_1 + 0x28) != '\x01') {
    uVar6 = 0xd000000000000015;
    uVar1 = 0x800000010effbed0;
  }
  uVar2 = 0x800000010effbef0;
  uVar3 = 0xd000000000000015;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar6;
  }
  lVar7 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar7 + 0x10) == 0) {
    FUN_101b18e94(param_2,param_1,uVar5,uVar8,param_4 & 1,uVar3,uVar2);
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x20);
    uStack_f8 = *(undefined8 *)(lVar7 + 0x30);
    uStack_100 = *(undefined8 *)(lVar7 + 0x28);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x40);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x38);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x48);
    uStack_d8 = (undefined1)*(undefined8 *)(lVar7 + 0x50);
    uStack_cf = *(undefined8 *)(lVar7 + 0x59);
    uStack_d7 = (undefined7)*(undefined8 *)(lVar7 + 0x51);
    uStack_d0 = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x51) >> 0x38);
    dVar10 = (double)(long)((*(double *)(lVar7 + 0x68) - param_2) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b18e58);
      (*pcVar4)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b18e5c);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b18e60);
      (*pcVar4)();
    }
    func_0x000107c5fadc(uVar5,uVar8);
    if (lVar9 < 3) {
      if (lVar9 == 0) {
        uVar8 = 0xe400000000000000;
        uVar5 = 0x74616863;
      }
      else if (lVar9 == 1) {
        uVar5 = 0x6e69646e65697266;
        uVar8 = 0xe900000000000067;
      }
      else {
        if (lVar9 != 2) {
LAB_101b18e70:
          alStack_140[0] = lVar9;
          func_0x000107c60614(&UNK_1106b5710,alStack_140,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b18e94);
          (*pcVar4)();
        }
        uVar8 = 0xe800000000000000;
        uVar5 = 0x7265766f63736964;
      }
    }
    else if (lVar9 == 3) {
      uVar8 = 0xe800000000000000;
      uVar5 = 0x736569726f6d656d;
    }
    else if (lVar9 == 4) {
      uVar8 = 0xe900000000000074;
      uVar5 = 0x6867696c746f7073;
    }
    else {
      if (lVar9 != 5) goto LAB_101b18e70;
      uVar8 = 0xe700000000000000;
      uVar5 = 0x656c69666f7270;
    }
    func_0x000107c5fadc(uVar5,uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
  return;
}



/* Entry: 101b18e94; end: 101b193b3;  */

/* WARNING: Possible PIC construction at 0x000101b191cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b19280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b19318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b19360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1931c) */
/* WARNING: Removing unreachable block (ram,0x000101b19284) */
/* WARNING: Removing unreachable block (ram,0x000101b1939c) */
/* WARNING: Removing unreachable block (ram,0x000101b192d0) */
/* WARNING: Removing unreachable block (ram,0x000101b192dc) */
/* WARNING: Removing unreachable block (ram,0x000101b192e0) */
/* WARNING: Removing unreachable block (ram,0x000101b193a0) */
/* WARNING: Removing unreachable block (ram,0x000101b192e4) */
/* WARNING: Removing unreachable block (ram,0x000101b192ec) */
/* WARNING: Removing unreachable block (ram,0x000101b192f0) */
/* WARNING: Removing unreachable block (ram,0x000101b193a4) */
/* WARNING: Removing unreachable block (ram,0x000101b192f4) */
/* WARNING: Removing unreachable block (ram,0x000101b191d0) */
/* WARNING: Removing unreachable block (ram,0x000101b19214) */
/* WARNING: Removing unreachable block (ram,0x000101b19218) */
/* WARNING: Removing unreachable block (ram,0x000101b1921c) */
/* WARNING: Removing unreachable block (ram,0x000101b19220) */
/* WARNING: Removing unreachable block (ram,0x000101b19390) */
/* WARNING: Removing unreachable block (ram,0x000101b1923c) */
/* WARNING: Removing unreachable block (ram,0x000101b19248) */
/* WARNING: Removing unreachable block (ram,0x000101b1924c) */
/* WARNING: Removing unreachable block (ram,0x000101b19394) */
/* WARNING: Removing unreachable block (ram,0x000101b19250) */
/* WARNING: Removing unreachable block (ram,0x000101b19258) */
/* WARNING: Removing unreachable block (ram,0x000101b1925c) */
/* WARNING: Removing unreachable block (ram,0x000101b19398) */
/* WARNING: Removing unreachable block (ram,0x000101b19260) */
/* WARNING: Removing unreachable block (ram,0x000101b19364) */

void FUN_101b18e94(double param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  double dVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  long lVar10;
  long unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(param_2 + 0x90);
  uVar7 = *(ulong *)(lVar13 + 0x10);
  if (uVar7 != 0) {
    uVar12 = 0;
    do {
      uVar1 = uVar12;
      if (uVar12 <= *(ulong *)(lVar13 + 0x10)) {
        uVar1 = *(ulong *)(lVar13 + 0x10);
      }
      puVar8 = (undefined8 *)(lVar13 + 0x52 + uVar12 * 0x50);
      uVar12 = uVar12 + 1;
      while( true ) {
        if (uVar12 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b19390);
          (*pcVar5)();
        }
        uVar18 = *(undefined8 *)((long)puVar8 + -0x2a);
        uVar24 = *(undefined8 *)((long)puVar8 + -0x32);
        uVar23 = *(undefined8 *)((long)puVar8 + -0x1a);
        uVar21 = *(undefined8 *)((long)puVar8 + -0x22);
        uVar19 = *(undefined8 *)((long)puVar8 + -10);
        uVar14 = *(undefined8 *)((long)puVar8 + -0x12);
        uVar2 = *(undefined1 *)((long)puVar8 + -2);
        bVar3 = *(byte *)((long)puVar8 + -1);
        uVar15 = *puVar8;
        uStack_d8 = (undefined6)puVar8[1];
        uVar20 = *(undefined8 *)((long)puVar8 + 0x16);
        uVar16 = *(undefined8 *)((long)puVar8 + 0xe);
        uStack_d2 = (undefined2)uVar16;
        if ((bVar3 & 1) != 0) break;
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 10;
        if (uVar12 - uVar7 == 1) goto LAB_101b19034;
      }
      puVar6 = puVar11;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000101b12210(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        func_0x000101b12210(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x28) = uVar18;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x20) = uVar24;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x38) = uVar23;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x30) = uVar21;
      puVar11[uVar1 * 0x50 + 0x50] = uVar2;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x48) = uVar19;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x40) = uVar14;
      puVar11[uVar1 * 0x50 + 0x51] = bVar3;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x68) = uVar20;
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x60) = uVar16;
      *(ulong *)(puVar11 + uVar1 * 0x50 + 0x5a) = CONCAT26(uStack_d2,uStack_d8);
      *(undefined8 *)(puVar11 + uVar1 * 0x50 + 0x52) = uVar15;
    } while (uVar12 != uVar7);
  }
LAB_101b19034:
  lVar13 = *(long *)(puVar11 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61574(puVar11);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101b121f4(0,lVar13,0);
    lVar10 = 0x68;
    uVar7 = *(ulong *)(puVar11 + 0x10);
    do {
      uVar24 = *(undefined8 *)(puVar11 + lVar10);
      uVar12 = uVar7 + 1;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
        func_0x000101b121f4(1 < *(ulong *)(puVar11 + 0x18),uVar12,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar12;
      *(undefined8 *)(puVar11 + uVar7 * 8 + 0x20) = uVar24;
      lVar10 = lVar10 + 0x50;
      lVar13 = lVar13 + -1;
      uVar7 = uVar12;
    } while (lVar13 != 0);
    func_0x000107c61574(puVar11);
  }
  lVar13 = *(long *)(puVar11 + 0x10);
  if (lVar13 == 0) {
    dVar25 = 0.0;
  }
  else {
    dVar25 = *(double *)(puVar11 + 0x20);
    lVar10 = lVar13 + -1;
    if (lVar10 != 0) {
      pdVar9 = (double *)(puVar11 + 0x28);
      dVar17 = dVar25;
      do {
        dVar22 = *pdVar9;
        dVar4 = dVar22;
        if (dVar22 <= dVar17) {
          dVar22 = dVar17;
          dVar4 = dVar25;
        }
        dVar25 = dVar4;
        lVar10 = lVar10 + -1;
        pdVar9 = pdVar9 + 1;
        dVar17 = dVar22;
      } while (lVar10 != 0);
    }
  }
  func_0x000107c6142c(puVar11);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_6,param_7);
  if (lVar13 == 0) {
    uVar7 = 0;
  }
  else {
    dVar25 = (double)(long)((dVar25 - param_1) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b193ac);
      (*pcVar5)();
    }
    if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b193b0);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b193b4);
      (*pcVar5)();
    }
    uVar7 = (long)dVar25 & ((long)dVar25 >> 0x3f ^ 0xffffffffffffffffU);
  }
  func_0x0001056ef214(uVar24,param_3,param_5 & 1,param_6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101b193b4; end: 101b1951f;  */

/* WARNING: Possible PIC construction at 0x000101b19444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b194a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b19448) */
/* WARNING: Removing unreachable block (ram,0x000101b19470) */
/* WARNING: Removing unreachable block (ram,0x000101b1944c) */
/* WARNING: Removing unreachable block (ram,0x000101b194a4) */
/* WARNING: Removing unreachable block (ram,0x000101b194ac) */
/* WARNING: Removing unreachable block (ram,0x000101b194d4) */
/* WARNING: Removing unreachable block (ram,0x000101b194b0) */
/* WARNING: Removing unreachable block (ram,0x000101b19504) */

void FUN_101b193b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 < 0) {
    param_4 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010effc050);
    func_0x0001056f1258(uVar1,param_4,1);
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    func_0x0001056efbf4(uVar1,param_4,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101b19520; end: 101b19ca3;  */

undefined * FUN_101b19520(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
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
  undefined1 uStack_80;
  undefined *puStack_78;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    func_0x000101b121b4(0,lVar5,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar2 = puStack_78;
      uStack_a8 = puVar6[5];
      uStack_b0 = puVar6[4];
      uStack_98 = puVar6[7];
      uStack_a0 = puVar6[6];
      uStack_88 = puVar6[9];
      uStack_90 = puVar6[8];
      uStack_c8 = puVar6[1];
      uStack_d0 = *puVar6;
      uStack_b8 = puVar6[3];
      uStack_c0 = puVar6[2];
      uVar3 = 0x112e00ae0;
      func_0x0001000285a8(0x112e00ae0,&UNK_10d9d0f18);
      uVar4 = 0x112e00ae8;
      func_0x0001000285a8(0x112e00ae8,&UNK_10d9d0f20);
      func_0x000107c6147c(&uStack_128,&uStack_d0,uVar3,uVar4,7);
      uStack_80 = uStack_d8;
      uStack_98 = uStack_f0;
      uStack_a0 = uStack_f8;
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_b8 = uStack_110;
      uStack_c0 = uStack_118;
      uStack_a8 = uStack_100;
      uStack_b0 = uStack_108;
      uStack_c8 = uStack_120;
      uStack_d0 = uStack_128;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_78 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000101b121b4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x28) = uStack_c8;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x20) = uStack_d0;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x38) = uStack_b8;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x30) = uStack_c0;
      puStack_78[uVar1 * 0x58 + 0x70] = uStack_80;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x58) = uStack_98;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x50) = uStack_a0;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x68) = uStack_88;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x60) = uStack_90;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x48) = uStack_a8;
      *(undefined8 *)(puStack_78 + uVar1 * 0x58 + 0x40) = uStack_b0;
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_78;
}



/* Entry: 101b19ca4; end: 101b1aca7;  */

/* WARNING: Removing unreachable block (ram,0x000101b1a1e0) */

void FUN_101b19ca4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  long lStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  pppuVar1 = *(undefined8 ****)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  dVar22 = *(double *)(param_2 + 0x80);
  func_0x000107c61428(param_2 + 0x98,auStack_f8,0,0);
  uVar15 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61428(param_2 + 0xd0,auStack_110,0,0);
  uVar16 = *(undefined8 *)(param_2 + 0xd0);
  func_0x000107c61428(param_2 + 0xe0,auStack_128,0,0);
  lVar17 = *(long *)(param_2 + 0xe0);
  ppppuVar12 = *(undefined8 *****)(lVar17 + 0x10);
  func_0x000107c61434(lVar17);
  if (ppppuVar12 == (undefined8 ****)0x0) {
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar16);
    pppuStack_e0 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar17);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar16);
    ppppuVar5 = ppppuVar12;
    func_0x000101b0faa0(ppppuVar12,0);
    ppppuVar6 = &pppuStack_e0;
    FUN_101b13fac(ppppuVar6,ppppuVar5 + 4,ppppuVar12,lVar17);
    FUN_101b1d418(pppuStack_e0,uStack_d8,dStack_d0,uStack_c8,uStack_c0);
    pppuStack_e0 = ppppuVar5;
    if (ppppuVar6 != ppppuVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b19da0);
      (*pcVar3)();
    }
  }
  FUN_101b1c088(&pppuStack_e0,0x101b1d5f4,FUN_101b1ca40,&UNK_110443c98,FUN_101b1c588);
  func_0x000107c6142c(lVar17);
  pppuVar2 = pppuStack_e0;
  func_0x000107c61428(param_2 + 0xe8,auStack_148,0,0);
  uVar13 = *(undefined8 *)(param_2 + 0xe8);
  func_0x000107c61428(param_2 + 200,auStack_160,0,0);
  uVar18 = *(undefined8 *)(param_2 + 200);
  func_0x000107c61428(param_2 + 0xc0,auStack_178,0,0);
  lVar17 = *(long *)(param_2 + 0xc0);
  ppppuVar12 = *(undefined8 *****)(lVar17 + 0x10);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar18);
  pppuStack_190 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar12 != (undefined8 ****)0x0) {
    func_0x000107c61434(lVar17);
    ppppuVar5 = ppppuVar12;
    func_0x000101b0fa20(ppppuVar12,0);
    ppppuVar6 = &pppuStack_e0;
    func_0x000101b13eb8(ppppuVar6,ppppuVar5 + 4,ppppuVar12,lVar17);
    FUN_101b1d418(pppuStack_e0,uStack_d8,dStack_d0,uStack_c8,uStack_c0);
    pppuStack_190 = ppppuVar5;
    if (ppppuVar6 != ppppuVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b19eb0);
      (*pcVar3)();
    }
  }
  dVar21 = (double)(long)((param_1 - dVar22) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1a1b4);
    (*pcVar3)();
  }
  if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1a1b8);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1a1bc);
    (*pcVar3)();
  }
  lStack_180 = (long)dVar21;
  pppuStack_1a8 = pppuVar2;
  pppuStack_b8 = pppuVar2;
  lVar17 = *(long *)(param_2 + 0x98);
  uVar9 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(lVar17 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuStack_1d0 = pppuVar1;
  uStack_1c8 = uVar7;
  dStack_1c0 = dVar22;
  uStack_1b8 = uVar15;
  uStack_1b0 = uVar16;
  uStack_1a0 = uVar13;
  uStack_198 = uVar18;
  uStack_188 = param_3;
  pppuStack_e0 = pppuVar1;
  uStack_d8 = uVar7;
  dStack_d0 = dVar22;
  uStack_c8 = uVar15;
  uStack_c0 = uVar16;
  uStack_b0 = uVar13;
  uStack_a8 = uVar18;
  pppuStack_a0 = pppuStack_190;
  uStack_98 = param_3;
  lStack_90 = lStack_180;
  func_0x000107c61434(param_3);
  func_0x000107c61434(lVar17);
  lVar20 = 0;
  do {
    while (uVar19 == 0) {
      bVar4 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1a1b0);
        (*pcVar3)();
      }
      if ((long)(uVar9 + 0x3f >> 6) <= lVar20) {
        func_0x000107c61574(lVar17);
        func_0x000101b1a1ec(&pppuStack_e0);
        FUN_101b1d420(&ppuStack_1d0);
        return;
      }
      uVar19 = ((ulong *)(lVar17 + 0x40))[lVar20];
    }
    uVar8 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = lVar20 << 9 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 3;
    uVar10 = *(ulong *)(*(long *)(*(long *)(lVar17 + 0x38) + uVar8) + 0x10);
    if (uVar10 < 2) {
      uVar15 = 0xe100000000000000;
      uVar7 = 0x31;
    }
    else if (uVar10 == 2) {
      uVar15 = 0xe100000000000000;
      uVar7 = 0x32;
    }
    else if (uVar10 < 6) {
      uVar15 = 0xe300000000000000;
      uVar7 = 0x355f33;
    }
    else {
      uVar7 = 0x30315f36;
      if (10 < uVar10) {
        uVar7 = 0x73756c703131;
      }
      uVar15 = 0xe400000000000000;
      if (10 < uVar10) {
        uVar15 = 0xe600000000000000;
      }
    }
    lVar11 = *(long *)(*(long *)(lVar17 + 0x30) + uVar8);
    func_0x000107c5fadc(uVar7,uVar15);
    func_0x000107c6142c(uVar15);
    if (lVar11 < 3) {
      if (lVar11 == 0) {
        uVar15 = 0xe400000000000000;
        uVar16 = 0x74616863;
      }
      else if (lVar11 == 1) {
        uVar15 = 0xe900000000000067;
        uVar16 = 0x6e69646e65697266;
      }
      else {
        if (lVar11 != 2) {
LAB_101b1a1bc:
          lStack_1d8 = lVar11;
          func_0x000107c60614(&UNK_1106b5710,&lStack_1d8,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1a1e0);
          (*pcVar3)();
        }
        uVar15 = 0xe800000000000000;
        uVar16 = 0x7265766f63736964;
      }
    }
    else if (lVar11 == 3) {
      uVar15 = 0xe800000000000000;
      uVar16 = 0x736569726f6d656d;
    }
    else if (lVar11 == 4) {
      uVar15 = 0xe900000000000074;
      uVar16 = 0x6867696c746f7073;
    }
    else {
      if (lVar11 != 5) goto LAB_101b1a1bc;
      uVar15 = 0xe700000000000000;
      uVar16 = 0x656c69666f7270;
    }
    uVar19 = uVar19 - 1 & uVar19;
    func_0x000107c5fadc(uVar16,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x0001056eee70(uVar14,uVar7,uVar16,1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar16);
  } while( true );
}



/* Entry: 101b1aca8; end: 101b1af33;  */

/* WARNING: Possible PIC construction at 0x000101b1ae04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1ae08) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae38) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae70) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae40) */
/* WARNING: Removing unreachable block (ram,0x000101b1aea8) */
/* WARNING: Removing unreachable block (ram,0x000101b1aeb0) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae48) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae10) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae68) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae14) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae88) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae90) */
/* WARNING: Removing unreachable block (ram,0x000101b1ae1c) */
/* WARNING: Removing unreachable block (ram,0x000101b1aec4) */

void FUN_101b1aca8(long param_1,long param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 < 0) {
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010effc0d0);
    func_0x0001056f1258(uVar3,uVar2,1);
  }
  else {
    if (param_1 < 3) {
      if (param_1 == 0) {
        uVar4 = 0xe400000000000000;
        uVar2 = 0x74616863;
      }
      else if (param_1 == 1) {
        uVar2 = 0x6e69646e65697266;
        uVar4 = 0xe900000000000067;
      }
      else {
        if (param_1 != 2) {
LAB_101b1af10:
          lStack_58 = param_1;
          func_0x000107c60614(&UNK_1106b5710,&lStack_58,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1af34);
          (*pcVar1)();
        }
        uVar4 = 0xe800000000000000;
        uVar2 = 0x7265766f63736964;
      }
    }
    else if (param_1 == 3) {
      uVar4 = 0xe800000000000000;
      uVar2 = 0x736569726f6d656d;
    }
    else if (param_1 == 4) {
      uVar2 = 0x6867696c746f7073;
      uVar4 = 0xe900000000000074;
    }
    else {
      if (param_1 != 5) goto LAB_101b1af10;
      uVar4 = 0xe700000000000000;
      uVar2 = 0x656c69666f7270;
    }
    func_0x000107c5fadc(uVar2,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x0001056f00c8(uVar3,param_3 & 1,uVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b1af34; end: 101b1b26f;  */

/* WARNING: Possible PIC construction at 0x000101b1b0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b1b17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b1b1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1b0b0) */
/* WARNING: Removing unreachable block (ram,0x000101b1b0f0) */
/* WARNING: Removing unreachable block (ram,0x000101b1b0fc) */
/* WARNING: Removing unreachable block (ram,0x000101b1b108) */
/* WARNING: Removing unreachable block (ram,0x000101b1b114) */
/* WARNING: Removing unreachable block (ram,0x000101b1b1fc) */
/* WARNING: Removing unreachable block (ram,0x000101b1b210) */
/* WARNING: Removing unreachable block (ram,0x000101b1b224) */
/* WARNING: Removing unreachable block (ram,0x000101b1b11c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b12c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b180) */
/* WARNING: Removing unreachable block (ram,0x000101b1b1ac) */
/* WARNING: Removing unreachable block (ram,0x000101b1b194) */
/* WARNING: Removing unreachable block (ram,0x000101b1b14c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b24c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b158) */
/* WARNING: Removing unreachable block (ram,0x000101b1b248) */
/* WARNING: Removing unreachable block (ram,0x000101b1b168) */
/* WARNING: Removing unreachable block (ram,0x000101b1b1a8) */
/* WARNING: Removing unreachable block (ram,0x000101b1b1cc) */

void FUN_101b1af34(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 < 4) {
    uVar5 = 0xd000000000000011;
    pcVar2 = "never_foregrounded";
    if (param_1 != 2) {
      uVar5 = 0xd000000000000012;
      pcVar2 = "config_decode_failed";
    }
    pcVar3 = "left_before_ranking";
    uVar4 = 0xd000000000000012;
    if (param_1 != 0) {
      pcVar3 = "teardown_unranked";
      uVar4 = 0xd000000000000013;
    }
    if (param_1 < 2) {
      pcVar2 = pcVar3;
      uVar5 = uVar4;
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
  }
  else {
    uVar7 = 0xef656c626173756e;
    uVar5 = 0x755f6769666e6f63;
    if (param_1 != 6) {
      uVar7 = 0x800000010effc330;
      uVar5 = 0xd000000000000015;
    }
    uVar1 = 0xed0000746e657362;
    uVar4 = 0x615f6769666e6f63;
    if (param_1 != 4) {
      uVar1 = 0x800000010effc350;
      uVar4 = 0xd000000000000014;
    }
    if (param_1 < 6) {
      uVar5 = uVar4;
      uVar7 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x0001056f0d60(uVar6,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101b1b270; end: 101b1b287;  */

void FUN_101b1b270(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar4 = 0xe400000000000000;
      uVar2 = 0x74616863;
    }
    else if (param_1 == 1) {
      uVar2 = 0x6e69646e65697266;
      uVar4 = 0xe900000000000067;
    }
    else {
      if (param_1 != 2) {
LAB_101b1b3a4:
        lStack_38 = param_1;
        func_0x000107c60614(&UNK_1106b5710,&lStack_38,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1b3c8);
        (*pcVar1)();
      }
      uVar4 = 0xe800000000000000;
      uVar2 = 0x7265766f63736964;
    }
  }
  else if (param_1 == 3) {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x736569726f6d656d;
  }
  else if (param_1 == 4) {
    uVar4 = 0xe900000000000074;
    uVar2 = 0x6867696c746f7073;
  }
  else {
    if (param_1 != 5) goto LAB_101b1b3a4;
    uVar4 = 0xe700000000000000;
    uVar2 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  (*(code *)&UNK_1056f04a0)(uVar3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b1b288; end: 101b1b3c7;  */

void FUN_101b1b288(long param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar4 = 0xe400000000000000;
      uVar2 = 0x74616863;
    }
    else if (param_1 == 1) {
      uVar2 = 0x6e69646e65697266;
      uVar4 = 0xe900000000000067;
    }
    else {
      if (param_1 != 2) {
LAB_101b1b3a4:
        lStack_38 = param_1;
        func_0x000107c60614(&UNK_1106b5710,&lStack_38,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1b3c8);
        (*pcVar1)();
      }
      uVar4 = 0xe800000000000000;
      uVar2 = 0x7265766f63736964;
    }
  }
  else if (param_1 == 3) {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x736569726f6d656d;
  }
  else if (param_1 == 4) {
    uVar4 = 0xe900000000000074;
    uVar2 = 0x6867696c746f7073;
  }
  else {
    if (param_1 != 5) goto LAB_101b1b3a4;
    uVar4 = 0xe700000000000000;
    uVar2 = 0x656c69666f7270;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  (*param_2)(uVar3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b1b3c8; end: 101b1b65b;  */

/* WARNING: Possible PIC construction at 0x000101b1b544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1b548) */
/* WARNING: Removing unreachable block (ram,0x000101b1b5ac) */
/* WARNING: Removing unreachable block (ram,0x000101b1b5d8) */
/* WARNING: Removing unreachable block (ram,0x000101b1b5dc) */
/* WARNING: Removing unreachable block (ram,0x000101b1b604) */
/* WARNING: Removing unreachable block (ram,0x000101b1b608) */
/* WARNING: Removing unreachable block (ram,0x000101b1b610) */
/* WARNING: Removing unreachable block (ram,0x000101b1b554) */
/* WARNING: Removing unreachable block (ram,0x000101b1b568) */
/* WARNING: Removing unreachable block (ram,0x000101b1b56c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b598) */
/* WARNING: Removing unreachable block (ram,0x000101b1b59c) */
/* WARNING: Removing unreachable block (ram,0x000101b1b5a4) */
/* WARNING: Removing unreachable block (ram,0x000101b1b614) */

void FUN_101b1b3c8(uint param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 < 0) {
    uVar5 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010effc0b0);
    func_0x0001056f1258(uVar8,uVar5,1);
  }
  else {
    param_1 = param_1 & 0xff;
    if (param_1 < 4) {
      uVar6 = 0x800000010effc2f0;
      uVar5 = 0xd000000000000010;
      if (param_1 != 2) {
        uVar6 = 0xee0064657070696c;
        uVar5 = 0x665f656372756f73;
      }
      pcVar7 = "app_foregrounded";
      uVar1 = 0xd000000000000013;
      if (param_1 == 0) {
        uVar1 = 0xd000000000000011;
        pcVar7 = "T_FOR_ALL_SOURCES_RESOLVED";
      }
      bVar3 = SBORROW4(param_1,1);
      iVar2 = param_1 - 1;
      bVar4 = param_1 == 1;
      if (param_1 < 2) {
        uVar5 = uVar1;
      }
    }
    else {
      uVar1 = 0xd000000000000015;
      pcVar7 = "active_suppressed";
      uVar5 = 0xd000000000000014;
      if (param_1 != 6) {
        pcVar7 = "64e-apple-ios.swiftinterface";
        uVar5 = uVar1;
      }
      uVar6 = (ulong)pcVar7 | 0x8000000000000000;
      pcVar7 = "backgrounded_unevaluated_dwell";
      if (param_1 != 4) {
        uVar1 = 0xd000000000000010;
        pcVar7 = "first_frame_rendered";
      }
      bVar3 = SBORROW4(param_1,5);
      iVar2 = param_1 - 5;
      bVar4 = param_1 == 5;
      if (param_1 < 6) {
        uVar5 = uVar1;
      }
    }
    if (bVar4 || iVar2 < 0 != bVar3) {
      uVar6 = (ulong)pcVar7 | 0x8000000000000000;
    }
    func_0x000107c5fadc(uVar5,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x0001056ed4ec(uVar8,uVar5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101b1b65c; end: 101b1b80b;  */

void FUN_101b1b65c(uint param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 < 0) {
    uVar5 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010effc090);
    func_0x0001056f1258(uVar8,uVar5,1);
  }
  else {
    param_1 = param_1 & 0xff;
    if (param_1 < 4) {
      uVar6 = 0x800000010effc2f0;
      uVar5 = 0xd000000000000010;
      if (param_1 != 2) {
        uVar6 = 0xee0064657070696c;
        uVar5 = 0x665f656372756f73;
      }
      pcVar2 = "T_FOR_ALL_SOURCES_RESOLVED";
      uVar7 = 0xd000000000000011;
      if (param_1 != 0) {
        pcVar2 = "app_foregrounded";
        uVar7 = 0xd000000000000013;
      }
      bVar3 = SBORROW4(param_1,1);
      iVar1 = param_1 - 1;
      bVar4 = param_1 == 1;
      if (param_1 < 2) {
        uVar5 = uVar7;
      }
    }
    else {
      pcVar2 = "active_suppressed";
      uVar5 = 0xd000000000000014;
      if (param_1 != 6) {
        pcVar2 = "64e-apple-ios.swiftinterface";
        uVar5 = 0xd000000000000015;
      }
      uVar6 = (ulong)pcVar2 | 0x8000000000000000;
      uVar7 = 0xd000000000000015;
      pcVar2 = "backgrounded_unevaluated_dwell";
      if (param_1 != 4) {
        uVar7 = 0xd000000000000010;
        pcVar2 = "first_frame_rendered";
      }
      bVar3 = SBORROW4(param_1,5);
      iVar1 = param_1 - 5;
      bVar4 = param_1 == 5;
      if (param_1 < 6) {
        uVar5 = uVar7;
      }
    }
    if (bVar4 || iVar1 < 0 != bVar3) {
      uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    }
    func_0x000107c5fadc(uVar5,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x0001056ed7f8(uVar8,uVar5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101b1b80c; end: 101b1b96f;  */

void FUN_101b1b80c(uint param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1 = param_1 & 0xff;
  if (param_1 < 4) {
    uVar6 = 0x800000010effc2f0;
    uVar5 = 0xd000000000000010;
    if (param_1 != 2) {
      uVar6 = 0xee0064657070696c;
      uVar5 = 0x665f656372756f73;
    }
    pcVar2 = "T_FOR_ALL_SOURCES_RESOLVED";
    uVar7 = 0xd000000000000011;
    if (param_1 != 0) {
      pcVar2 = "app_foregrounded";
      uVar7 = 0xd000000000000013;
    }
    bVar3 = SBORROW4(param_1,1);
    iVar1 = param_1 - 1;
    bVar4 = param_1 == 1;
    if (param_1 < 2) {
      uVar5 = uVar7;
    }
  }
  else {
    pcVar2 = "active_suppressed";
    uVar5 = 0xd000000000000014;
    if (param_1 != 6) {
      pcVar2 = "64e-apple-ios.swiftinterface";
      uVar5 = 0xd000000000000015;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    uVar7 = 0xd000000000000015;
    pcVar2 = "backgrounded_unevaluated_dwell";
    if (param_1 != 4) {
      uVar7 = 0xd000000000000010;
      pcVar2 = "first_frame_rendered";
    }
    bVar3 = SBORROW4(param_1,5);
    iVar1 = param_1 - 5;
    bVar4 = param_1 == 5;
    if (param_1 < 6) {
      uVar5 = uVar7;
    }
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x0001056f10e4(uVar8,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101b1b970; end: 101b1baaf;  */

undefined8 FUN_101b1b970(ulong *param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  undefined8 unaff_x20;
  ulong uStack_48;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_48 = *param_1;
  if (uStack_48 < 6) {
    func_0x000107c61174();
    func_0x000107c5958c();
    func_0x000107c53e80(unaff_x20);
    func_0x000107c5552c(unaff_x20);
    if ((char)param_1[3] != '\x01') {
      func_0x000107c57aec(unaff_x20);
    }
    func_0x000107c555e4(unaff_x20);
    if ((char)param_1[6] != '\x02') {
      func_0x000107c5a61c(unaff_x20);
      func_0x000107c57b6c(unaff_x20);
    }
    func_0x000107c53438(unaff_x20);
    if (param_3 != '\x01') {
      func_0x000107c52bac(unaff_x20);
    }
    if ((char)param_1[8] != '\x01') {
      func_0x000107c57c40(unaff_x20);
    }
    func_0x000107c61170(unaff_x20);
    return unaff_x20;
  }
  func_0x000107c61174();
  func_0x000107c60614(&UNK_1106b5710,&uStack_48,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1bab0);
  (*pcVar1)();
}



/* Entry: 101b1bab0; end: 101b1bbc3;  */

undefined8 FUN_101b1bab0(ulong *param_1)

{
  code *pcVar1;
  undefined8 unaff_x20;
  ulong uStack_38;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_38 = *param_1;
  if (uStack_38 < 6) {
    func_0x000107c61174();
    func_0x000107c5958c();
    func_0x000107c521e8(unaff_x20);
    func_0x000107c5710c(unaff_x20);
    func_0x000107c54a80(unaff_x20);
    func_0x000107c54f2c(unaff_x20);
    func_0x000107c5712c(unaff_x20);
    if ((char)param_1[7] != '\x01') {
      func_0x000107c57aec(unaff_x20);
    }
    if ((char)param_1[5] != '\x01') {
      uStack_38 = param_1[4];
      if (5 < uStack_38) goto LAB_101b1bba4;
      func_0x000107c55178(unaff_x20);
    }
    func_0x000107c61170(unaff_x20);
    return unaff_x20;
  }
  func_0x000107c61174();
LAB_101b1bba4:
  func_0x000107c60614(&UNK_1106b5710,&uStack_38,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1bbc4);
  (*pcVar1)();
}



/* Entry: 101b1bbc4; end: 101b1c05b;  */

undefined8 FUN_101b1bbc4(double param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  double dVar16;
  undefined *puVar17;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  double dStack_88;
  long lStack_78;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_90 = (undefined *)*param_2;
  if ((undefined *)0x5 < puStack_90) {
    func_0x000107c61174();
    ppuVar11 = &puStack_90;
LAB_101b1c030:
    func_0x000107c60614(&UNK_1106b5710,ppuVar11,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1c03c);
    (*pcVar2)();
  }
  func_0x000107c61174();
  func_0x000107c5958c();
  lVar13 = param_2[1];
  lVar12 = *(long *)(lVar13 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_78 = lVar13;
  if (lVar12 != 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar8 = lVar12;
    func_0x000100403514(0,lVar12,0);
    puVar14 = (undefined8 *)(lVar13 + 0x20);
    do {
      puVar17 = puStack_90;
      puVar3 = (undefined *)*puVar14;
      if ((undefined *)0x5 < puVar3) {
        ppuVar11 = &puStack_98;
        puStack_98 = puVar3;
        goto LAB_101b1c030;
      }
      func_0x000107c31114();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bff8);
        (*pcVar2)();
      }
      puVar4 = puVar3;
      func_0x000107c5faec();
      lVar9 = lVar8;
      func_0x000107c61170(puVar3);
      uVar1 = *(ulong *)(puVar17 + 0x10);
      lVar13 = uVar1 + 1;
      puStack_90 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
        lVar9 = lVar13;
        func_0x000100403514(1 < *(ulong *)(puVar17 + 0x18),lVar13,1);
      }
      *(long *)(puStack_90 + 0x10) = lVar13;
      *(undefined **)(puStack_90 + uVar1 * 0x10 + 0x20) = puVar4;
      *(long *)(puStack_90 + uVar1 * 0x10 + 0x28) = lVar8;
      lVar12 = lVar12 + -1;
      lVar8 = lVar9;
      puVar17 = puStack_90;
      puVar14 = puVar14 + 1;
    } while (lVar12 != 0);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d38270;
  puStack_90 = puVar17;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar6 = 0x112d38278;
  func_0x000101b1d520(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar7 = 0x2c;
  uVar10 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar5,uVar6);
  func_0x000107c6142c(puVar17);
  func_0x000107c5fadc(uVar7,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5a620(unaff_x20);
  func_0x000107c61170(uVar7);
  dVar16 = (double)(long)(((double)param_2[2] - param_1) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bfe0);
    (*pcVar2)();
  }
  if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bfe4);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bfe8);
    (*pcVar2)();
  }
  func_0x000107c53fa4(unaff_x20);
  dStack_88 = (double)param_2[4];
  puVar17 = (undefined *)param_2[3];
  puStack_90 = puVar17;
  func_0x000107c5710c(unaff_x20);
  dVar16 = (double)(long)((dStack_88 - param_1) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bfec);
    (*pcVar2)();
  }
  if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bff0);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bff4);
    (*pcVar2)();
  }
  func_0x000107c57e4c(unaff_x20);
  func_0x000101b1d564(&lStack_78);
  if (puVar17 < (undefined *)0x5) {
    func_0x000101b1d5ac(&puStack_90);
  }
  else {
    lVar12 = *(long *)(puVar17 + 0x10);
    if (lVar12 == 0) {
      func_0x000101b1d5ac(&puStack_90);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = puVar3;
      lVar13 = lVar12;
      func_0x000100403514(0,lVar12,0);
      puVar15 = (ulong *)(puVar17 + 0x20);
      do {
        puVar17 = puStack_98;
        puVar3 = (undefined *)*puVar15;
        if ((undefined *)0x5 < puVar3) {
          ppuVar11 = &puStack_a0;
          puStack_a0 = puVar3;
          goto LAB_101b1c030;
        }
        func_0x000107c31114();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1bffc);
          (*pcVar2)();
        }
        puVar4 = puVar3;
        func_0x000107c5faec();
        lVar9 = lVar13;
        func_0x000107c61170(puVar3);
        uVar1 = *(ulong *)(puVar17 + 0x10);
        lVar8 = uVar1 + 1;
        puStack_98 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
          lVar9 = lVar8;
          func_0x000100403514(1 < *(ulong *)(puVar17 + 0x18),lVar8,1);
        }
        puVar17 = puStack_98;
        *(long *)(puStack_98 + 0x10) = lVar8;
        *(undefined **)(puStack_98 + uVar1 * 0x10 + 0x20) = puVar4;
        *(long *)(puStack_98 + uVar1 * 0x10 + 0x28) = lVar13;
        lVar12 = lVar12 + -1;
        lVar13 = lVar9;
        puVar15 = puVar15 + 1;
      } while (lVar12 != 0);
      func_0x000101b1d5ac(&puStack_90);
    }
    uVar7 = 0x2c;
    uVar10 = 0xe100000000000000;
    puStack_98 = puVar17;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar5,uVar6);
    func_0x000107c6142c(puVar17);
    func_0x000107c5fadc(uVar7,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c54008(unaff_x20);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 101b1c05c; end: 101b1c087;  */

void FUN_101b1c05c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b1c088; end: 101b1c197;  */

void FUN_101b1c088(ulong *param_1,code *param_2,code *param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  ulong uStack_58;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    (*param_2)();
  }
  uVar5 = *(ulong *)(uVar3 + 0x10);
  lStack_60 = uVar3 + 0x20;
  uVar1 = uVar5;
  uStack_58 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar4 = (undefined *)(uVar5 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      puVar2 = puVar4;
      func_0x000107c60380(puVar4,param_4);
      *(undefined **)(puVar2 + 0x10) = puVar4;
    }
    puStack_78 = puVar2 + 0x20;
    puStack_70 = puVar4;
    (*param_5)(&puStack_78,auStack_68,&lStack_60,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar5 != 0) {
    (*param_3)(0,uVar5,1,&lStack_60);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101b1c198; end: 101b1c587;  */

void FUN_101b1c198(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long unaff_x21;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar23 = lVar10 + 1;
      if (lVar23 < lVar8) {
        lVar11 = *param_3;
        lVar15 = *(long *)(lVar11 + lVar23 * 0x40 + 0x10);
        lVar23 = lVar11 + lVar10 * 0x40;
        lVar17 = *(long *)(lVar23 + 0x10);
        plVar19 = (long *)(lVar23 + 0x90);
        lVar16 = lVar10 + 2;
        do {
          lVar18 = lVar16;
          lVar23 = lVar8;
          if (lVar8 == lVar18) break;
          lVar20 = *plVar19;
          plVar1 = plVar19 + -8;
          plVar19 = plVar19 + 8;
          lVar16 = lVar18 + 1;
          lVar23 = lVar18;
        } while (lVar15 < lVar17 != *plVar1 <= lVar20);
        if (lVar15 < lVar17) {
          if (lVar23 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c55c);
            (*pcVar3)();
          }
          if (lVar10 < lVar23) {
            puVar13 = (undefined8 *)(lVar11 + lVar10 * 0x40);
            lVar16 = lVar23;
            lVar8 = lVar10;
            puVar14 = (undefined8 *)(lVar11 + lVar23 * 0x40);
            do {
              puVar9 = puVar14 + -8;
              lVar16 = lVar16 + -1;
              if (lVar8 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c57c);
                  (*pcVar3)();
                }
                uVar24 = puVar13[4];
                uStack_78 = (undefined1)puVar13[5];
                uVar27 = *(undefined8 *)((long)puVar13 + 0x31);
                uVar25 = *(undefined8 *)((long)puVar13 + 0x29);
                uStack_77 = (undefined7)uVar25;
                uVar30 = puVar13[1];
                uVar29 = *puVar13;
                uVar28 = puVar13[3];
                uVar26 = puVar13[2];
                uVar31 = puVar14[-4];
                uVar33 = puVar14[-1];
                uVar32 = puVar14[-2];
                uVar37 = puVar14[-7];
                uVar36 = *puVar9;
                uVar35 = puVar14[-5];
                uVar34 = puVar14[-6];
                puVar13[5] = puVar14[-3];
                puVar13[4] = uVar31;
                puVar13[7] = uVar33;
                puVar13[6] = uVar32;
                puVar13[1] = uVar37;
                *puVar13 = uVar36;
                puVar13[3] = uVar35;
                puVar13[2] = uVar34;
                puVar14[-7] = uVar30;
                *puVar9 = uVar29;
                puVar14[-5] = uVar28;
                puVar14[-6] = uVar26;
                puVar14[-3] = CONCAT71(uStack_77,uStack_78);
                puVar14[-4] = uVar24;
                *(undefined8 *)((long)puVar14 + -0xf) = uVar27;
                *(undefined8 *)((long)puVar14 + -0x17) = uVar25;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 8;
              puVar14 = puVar9;
            } while (lVar8 < lVar16);
            lVar8 = param_3[1];
          }
        }
      }
      lVar16 = lVar23;
      if (lVar23 < lVar8) {
        if (SBORROW8(lVar23,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c558);
          (*pcVar3)();
        }
        if (lVar23 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c560);
            (*pcVar3)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar11 = lVar8;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c564);
            (*pcVar3)();
          }
          if (lVar23 != lVar11) {
            lVar17 = *param_3;
            puVar13 = (undefined8 *)(lVar17 + lVar23 * 0x40);
            lVar8 = lVar10 - lVar23;
            lVar15 = lVar8;
            puVar14 = puVar13;
LAB_101b1c34c:
            do {
              if ((long)puVar13[2] < (long)puVar13[-6]) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c568);
                  (*pcVar3)();
                }
                puVar9 = puVar13 + -8;
                uVar28 = puVar13[3];
                uVar27 = puVar13[2];
                uVar24 = puVar13[4];
                uStack_78 = (undefined1)puVar13[5];
                uStack_77 = (undefined7)*(undefined8 *)((long)puVar13 + 0x29);
                uVar26 = puVar13[1];
                uVar25 = *puVar13;
                puVar13[1] = puVar13[-7];
                *puVar13 = *puVar9;
                puVar13[3] = puVar13[-5];
                puVar13[2] = puVar13[-6];
                puVar13[5] = puVar13[-3];
                puVar13[4] = puVar13[-4];
                puVar13[7] = puVar13[-1];
                puVar13[6] = puVar13[-2];
                *(undefined8 *)((long)puVar13 + -0xf) = *(undefined8 *)((long)puVar13 + 0x31);
                *(undefined8 *)((long)puVar13 + -0x17) = *(undefined8 *)((long)puVar13 + 0x29);
                puVar13[-5] = uVar28;
                puVar13[-6] = uVar27;
                puVar13[-3] = CONCAT71(uStack_77,uStack_78);
                puVar13[-4] = uVar24;
                puVar13[-7] = uVar26;
                *puVar9 = uVar25;
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                puVar13 = puVar9;
                if (bVar4) goto LAB_101b1c34c;
              }
              lVar23 = lVar23 + 1;
              puVar13 = puVar14 + 8;
              lVar8 = lVar15 + -1;
              lVar16 = lVar11;
              lVar15 = lVar8;
              puVar14 = puVar13;
            } while (lVar23 != lVar11);
          }
        }
      }
      if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c548);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar22 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar22) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar22 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar22 + 1;
      *(long *)(puVar7 + uVar22 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar22 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c580);
        (*pcVar3)();
      }
      FUN_101b1cadc(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101b1c518;
      lVar8 = param_3[1];
      lVar10 = lVar16;
    } while (lVar16 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c588);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar21 = (ulong *)(puVar7 + 0x10);
  uVar22 = *puVar21;
  while (1 < uVar22) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c584);
      (*pcVar3)();
    }
    plVar19 = (long *)(puVar7 + uVar22 * 0x10);
    lVar23 = *plVar19;
    puVar2 = puVar21 + uVar22 * 2;
    uVar12 = puVar2[1];
    FUN_101b1cfc0(lVar10 + lVar23 * 0x40,lVar10 + *puVar2 * 0x40,lVar10 + uVar12 * 0x40,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c54c);
      (*pcVar3)();
    }
    if (*puVar21 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c550);
      (*pcVar3)();
    }
    *plVar19 = lVar23;
    plVar19[1] = uVar12;
    uVar12 = *puVar21;
    lVar10 = uVar12 - uVar22;
    if (uVar12 < uVar22) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1c554);
      (*pcVar3)();
    }
    uVar22 = uVar12 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar10 * 0x10);
    *puVar21 = uVar22;
  }
LAB_101b1c518:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 101b1c588; end: 101b1c997;  */

void FUN_101b1c588(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  double *pdVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    lVar13 = 0;
    do {
      puVar10 = puStack_58;
      lVar22 = lVar13 + 1;
      if (lVar22 < lVar11) {
        lVar14 = *param_3;
        dVar25 = *(double *)(lVar14 + lVar22 * 0x28 + 0x10);
        lVar16 = lVar13 * 0x28;
        dVar28 = *(double *)(lVar14 + lVar16 + 0x10);
        lVar18 = lVar13 + 2;
        pdVar19 = (double *)(lVar14 + lVar16 + 0x60);
        dVar27 = dVar25;
        do {
          lVar22 = lVar18;
          if (lVar11 == lVar22) {
            lVar22 = lVar11;
            if (dVar28 <= dVar25) goto LAB_101b1c6e0;
            goto LAB_101b1c654;
          }
          dVar33 = *pdVar19;
          bVar7 = dVar27 <= dVar33;
          lVar18 = lVar22 + 1;
          pdVar19 = pdVar19 + 5;
          dVar27 = dVar33;
        } while (dVar25 < dVar28 != bVar7);
        if (dVar25 < dVar28) {
LAB_101b1c654:
          if (lVar22 < lVar13) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c96c);
            (*pcVar6)();
          }
          if (lVar13 < lVar22) {
            lVar12 = lVar22 * 0x28;
            lVar18 = lVar22;
            lVar11 = lVar13;
            do {
              lVar18 = lVar18 + -1;
              if (lVar11 != lVar18) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c98c);
                  (*pcVar6)();
                }
                puVar17 = (undefined8 *)(lVar14 + lVar16);
                lVar1 = lVar14 + lVar12;
                uVar4 = *puVar17;
                uVar5 = puVar17[1];
                uVar26 = puVar17[2];
                uVar21 = puVar17[3];
                uVar29 = puVar17[4];
                uVar30 = *(undefined8 *)(lVar1 + -8);
                uVar32 = *(undefined8 *)(lVar1 + -0x10);
                uVar31 = *(undefined8 *)(lVar1 + -0x18);
                uVar34 = *(undefined8 *)(lVar1 + -0x28);
                puVar17[1] = *(undefined8 *)(lVar1 + -0x20);
                *puVar17 = uVar34;
                puVar17[3] = uVar32;
                puVar17[2] = uVar31;
                puVar17[4] = uVar30;
                *(undefined8 *)(lVar1 + -0x28) = uVar4;
                *(undefined8 *)(lVar1 + -0x20) = uVar5;
                *(undefined8 *)(lVar1 + -0x18) = uVar26;
                *(undefined8 *)(lVar1 + -0x10) = uVar21;
                *(undefined8 *)(lVar1 + -8) = uVar29;
              }
              lVar11 = lVar11 + 1;
              lVar12 = lVar12 + -0x28;
              lVar16 = lVar16 + 0x28;
            } while (lVar11 < lVar18);
            lVar11 = param_3[1];
          }
        }
      }
LAB_101b1c6e0:
      lVar16 = lVar22;
      if (lVar22 < lVar11) {
        if (SBORROW8(lVar22,lVar13)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c968);
          (*pcVar6)();
        }
        if (lVar22 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c970);
            (*pcVar6)();
          }
          lVar18 = lVar13 + param_4;
          if (lVar11 <= lVar13 + param_4) {
            lVar18 = lVar11;
          }
          if (lVar18 < lVar13) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c974);
            (*pcVar6)();
          }
          if (lVar22 != lVar18) {
            lVar11 = *param_3;
            puVar17 = (undefined8 *)(lVar11 + lVar22 * 0x28 + -0x28);
            lVar14 = lVar13 - lVar22;
            do {
              dVar27 = *(double *)(lVar11 + lVar22 * 0x28 + 0x10);
              lVar16 = lVar14;
              puVar20 = puVar17;
              do {
                if ((double)puVar20[2] <= dVar27) break;
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c978);
                  (*pcVar6)();
                }
                uVar4 = puVar20[5];
                uVar5 = puVar20[6];
                uVar21 = puVar20[8];
                puVar20[6] = puVar20[1];
                puVar20[5] = *puVar20;
                uVar30 = puVar20[9];
                puVar20[8] = puVar20[3];
                puVar20[7] = puVar20[2];
                puVar20[9] = puVar20[4];
                *puVar20 = uVar4;
                puVar20[1] = uVar5;
                puVar20[2] = dVar27;
                puVar20[3] = uVar21;
                puVar20[4] = uVar30;
                puVar20 = puVar20 + -5;
                bVar7 = lVar16 != -1;
                lVar16 = lVar16 + 1;
              } while (bVar7);
              lVar22 = lVar22 + 1;
              puVar17 = puVar17 + 5;
              lVar14 = lVar14 + -1;
              lVar16 = lVar18;
            } while (lVar22 != lVar18);
          }
        }
      }
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c958);
        (*pcVar6)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar24 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar24) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar24 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar24 + 1;
      *(long *)(puVar10 + uVar24 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar10 + uVar24 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c990);
        (*pcVar6)();
      }
      FUN_101b1cd4c(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101b1c92c;
      lVar11 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar11);
  }
  puVar10 = puStack_58;
  lVar11 = *param_1;
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c998);
    (*pcVar6)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar23 = (ulong *)(puVar10 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c994);
      (*pcVar6)();
    }
    plVar2 = (long *)(puVar10 + uVar24 * 0x10);
    lVar22 = *plVar2;
    puVar3 = puVar23 + uVar24 * 2;
    uVar15 = puVar3[1];
    FUN_101b1d1c8(lVar13 + lVar22 * 0x28,lVar13 + *puVar3 * 0x28,lVar13 + uVar15 * 0x28,lVar11);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar22) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c95c);
      (*pcVar6)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c960);
      (*pcVar6)();
    }
    *plVar2 = lVar22;
    plVar2[1] = uVar15;
    uVar15 = *puVar23;
    lVar13 = uVar15 - uVar24;
    if (uVar15 < uVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1c964);
      (*pcVar6)();
    }
    uVar24 = uVar15 - 1;
    func_0x000107c610b8(puVar3,puVar3 + 2,lVar13 * 0x10);
    *puVar23 = uVar24;
  }
LAB_101b1c92c:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 101b1c998; end: 101b1ca3f;  */

void FUN_101b1c998(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar6 = (undefined8 *)(lVar3 + param_3 * 0x40);
    param_1 = param_1 - param_3;
    lVar5 = param_1;
    puVar4 = puVar6;
LAB_101b1c9d8:
    do {
      if ((long)puVar6[2] < (long)puVar6[-6]) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1ca40);
          (*pcVar1)();
        }
        puVar7 = puVar6 + -8;
        uVar12 = puVar6[3];
        uVar11 = puVar6[2];
        uVar8 = puVar6[4];
        uStack_18 = (undefined1)puVar6[5];
        uStack_17 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
        uVar10 = puVar6[1];
        uVar9 = *puVar6;
        puVar6[1] = puVar6[-7];
        *puVar6 = *puVar7;
        puVar6[3] = puVar6[-5];
        puVar6[2] = puVar6[-6];
        puVar6[5] = puVar6[-3];
        puVar6[4] = puVar6[-4];
        puVar6[7] = puVar6[-1];
        puVar6[6] = puVar6[-2];
        *(undefined8 *)((long)puVar6 + -0xf) = *(undefined8 *)((long)puVar6 + 0x31);
        *(undefined8 *)((long)puVar6 + -0x17) = *(undefined8 *)((long)puVar6 + 0x29);
        puVar6[-5] = uVar12;
        puVar6[-6] = uVar11;
        puVar6[-3] = CONCAT71(uStack_17,uStack_18);
        puVar6[-4] = uVar8;
        puVar6[-7] = uVar10;
        *puVar7 = uVar9;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar6 = puVar7;
        if (bVar2) goto LAB_101b1c9d8;
      }
      param_3 = param_3 + 1;
      puVar6 = puVar4 + 8;
      param_1 = lVar5 + -1;
      lVar5 = param_1;
      puVar4 = puVar6;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101b1ca40; end: 101b1cadb;  */

void FUN_101b1ca40(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (undefined8 *)(lVar5 + param_3 * 0x28 + -0x28);
    param_1 = param_1 - param_3;
    do {
      dVar10 = *(double *)(lVar5 + param_3 * 0x28 + 0x10);
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((double)puVar8[2] <= dVar10) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b1cadc);
          (*pcVar3)();
        }
        uVar1 = puVar8[5];
        uVar2 = puVar8[6];
        uVar9 = puVar8[8];
        puVar8[6] = puVar8[1];
        puVar8[5] = *puVar8;
        uVar11 = puVar8[9];
        puVar8[8] = puVar8[3];
        puVar8[7] = puVar8[2];
        puVar8[9] = puVar8[4];
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        puVar8[2] = dVar10;
        puVar8[3] = uVar9;
        puVar8[4] = uVar11;
        puVar8 = puVar8 + -5;
        bVar4 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 5;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101b1cadc; end: 101b1cd4b;  */

undefined8 FUN_101b1cadc(ulong *param_1,undefined8 param_2,long *param_3)

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
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_101b1cbb4;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd2c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101b1cc14:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd1c);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd24);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd04);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd08);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd10);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd18);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101b1cbb4:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd0c);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd14);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd20);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd28);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101b1cc14;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd30);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1ccf4);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd4c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_101b1cfc0(lVar8 + lVar11 * 0x40,lVar8 + *plVar3 * 0x40,lVar8 + lVar9 * 0x40,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1ccf8);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1ccfc);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cd00);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 101b1cd4c; end: 101b1cfbf;  */

undefined8 FUN_101b1cd4c(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_101b1ce24;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cfa0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101b1ce84:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf90);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf98);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf78);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf7c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf84);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf8c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101b1ce24:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf80);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf88);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf94);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf9c);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101b1ce84;
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
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cfa4);
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
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf68);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cfc0);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_101b1d1c8(lVar8 + lVar12 * 0x28,lVar8 + *plVar3 * 0x28,lVar8 + lVar9 * 0x28,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf6c);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf70);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b1cf74);
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



/* Entry: 101b1cfc0; end: 101b1d1c7;  */

undefined8
FUN_101b1cfc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0x3f;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 6;
  lVar10 = (long)param_3 - (long)param_2;
  lVar5 = lVar10 + 0x3f;
  if (-1 < lVar10) {
    lVar5 = lVar10;
  }
  lVar5 = lVar5 >> 6;
  if (lVar2 < lVar5) {
    if ((param_4 != param_1) || (param_1 + lVar2 * 8 <= param_4)) {
      func_0x000107c610b8(param_4,param_1,lVar2 * 0x40);
    }
    puVar4 = param_4 + lVar2 * 8;
    puVar7 = param_1;
    if (0x3f < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_2[2] < (long)param_4[2]) {
          puVar6 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 8;
        }
        else {
          puVar6 = param_4 + 8;
          puVar8 = param_4;
        }
        param_4 = puVar6;
        if (puVar7 != puVar8) {
          uVar12 = puVar8[1];
          uVar11 = *puVar8;
          uVar14 = puVar8[3];
          uVar13 = puVar8[2];
          uVar15 = puVar8[4];
          uVar17 = puVar8[7];
          uVar16 = puVar8[6];
          puVar7[5] = puVar8[5];
          puVar7[4] = uVar15;
          puVar7[7] = uVar17;
          puVar7[6] = uVar16;
          puVar7[1] = uVar12;
          *puVar7 = uVar11;
          puVar7[3] = uVar14;
          puVar7[2] = uVar13;
        }
        puVar7 = puVar7 + 8;
      } while (param_4 < puVar4);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar5 * 8 <= param_4)) {
      func_0x000107c610b8(param_4,param_2,lVar5 * 0x40);
    }
    puVar4 = param_4 + lVar5 * 8;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0x3f < lVar10)) {
      do {
        while (puVar8 = param_3 + -8, (long)puVar4[-6] < (long)param_2[-6]) {
          puVar7 = param_2 + -8;
          if (param_3 != param_2) {
            uVar12 = param_2[-7];
            uVar11 = *puVar7;
            uVar14 = param_2[-5];
            uVar13 = param_2[-6];
            uVar15 = param_2[-4];
            uVar17 = param_2[-1];
            uVar16 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar15;
            param_3[-1] = uVar17;
            param_3[-2] = uVar16;
            param_3[-7] = uVar12;
            *puVar8 = uVar11;
            param_3[-5] = uVar14;
            param_3[-6] = uVar13;
          }
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar4 <= param_4))
          goto LAB_101b1d174;
        }
        puVar6 = puVar4 + -8;
        if (param_3 != puVar4) {
          uVar12 = puVar4[-7];
          uVar11 = *puVar6;
          uVar14 = puVar4[-5];
          uVar13 = puVar4[-6];
          uVar15 = puVar4[-4];
          uVar17 = puVar4[-1];
          uVar16 = puVar4[-2];
          param_3[-3] = puVar4[-3];
          param_3[-4] = uVar15;
          param_3[-1] = uVar17;
          param_3[-2] = uVar16;
          param_3[-7] = uVar12;
          *puVar8 = uVar11;
          param_3[-5] = uVar14;
          param_3[-6] = uVar13;
        }
        puVar4 = puVar6;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar6);
    }
  }
LAB_101b1d174:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar1 = uVar3 + 0x3f;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffc0)) <= puVar7)) {
    func_0x000107c610b8(puVar7,param_4);
  }
  return 1;
}



/* Entry: 101b1d1c8; end: 101b1d417;  */

undefined8
FUN_101b1d1c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x28;
  lVar2 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar1 < lVar2) {
    if ((param_4 < param_1) || ((param_1 + lVar1 * 5 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x28);
    }
    puVar4 = param_4 + lVar1 * 5;
    puVar5 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((double)param_4[2] <= (double)param_2[2]) {
          puVar6 = param_4 + 5;
          puVar3 = param_4;
        }
        else {
          puVar6 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 5;
        }
        param_4 = puVar6;
        if (puVar5 != puVar3) {
          uVar8 = puVar3[1];
          uVar7 = *puVar3;
          uVar10 = puVar3[3];
          uVar9 = puVar3[2];
          puVar5[4] = puVar3[4];
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
        }
        puVar5 = puVar5 + 5;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x28);
    }
    puVar3 = param_4 + lVar2 * 5;
    puVar4 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x27 < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -5, (double)puVar3[-3] < (double)param_2[-3]) {
          puVar5 = param_2 + -5;
          if (param_3 != param_2) {
            uVar8 = param_2[-4];
            uVar7 = *puVar5;
            uVar10 = param_2[-2];
            uVar9 = param_2[-3];
            param_3[-1] = param_2[-1];
            param_3[-4] = uVar8;
            *puVar6 = uVar7;
            param_3[-2] = uVar10;
            param_3[-3] = uVar9;
          }
          puVar4 = puVar3;
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_101b1d3b4;
        }
        puVar4 = puVar3 + -5;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-4];
          uVar7 = *puVar4;
          uVar10 = puVar3[-2];
          uVar9 = puVar3[-3];
          param_3[-1] = puVar3[-1];
          param_3[-4] = uVar8;
          *puVar6 = uVar7;
          param_3[-2] = uVar10;
          param_3[-3] = uVar9;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_101b1d3b4:
  lVar1 = ((long)puVar4 - (long)param_4) / 0x28;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 5 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0x28);
  }
  return 1;
}



/* Entry: 101b1d418; end: 101b1d41f;  */

void FUN_101b1d418(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101b1d420; end: 101b1d5df;  */

undefined8 FUN_101b1d420(undefined8 param_1)

{
  FUN_101b1fb6c();
  return param_1;
}



/* Entry: 101b1d5e0; end: 101b1d627;  */

/* WARNING: Removing unreachable block (ram,0x000101b12a50) */
/* WARNING: Removing unreachable block (ram,0x000101b12a60) */
/* WARNING: Removing unreachable block (ram,0x000101b12b30) */
/* WARNING: Removing unreachable block (ram,0x000101b12a6c) */
/* WARNING: Removing unreachable block (ram,0x000101b12a74) */
/* WARNING: Removing unreachable block (ram,0x000101b12af0) */
/* WARNING: Removing unreachable block (ram,0x000101b12af8) */
/* WARNING: Removing unreachable block (ram,0x000101b12afc) */
/* WARNING: Removing unreachable block (ram,0x000101b12b00) */
/* WARNING: Removing unreachable block (ram,0x000101b12b04) */

undefined * FUN_101b1d5e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar3 = PTR__swift_release_11034f4c0;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar4 = (undefined *)0x112e00928;
    func_0x0001000285a8(0x112e00928,&UNK_10d9d0c48);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar2 = puVar5 + 0x1f;
    if (0x1f < (long)puVar5) {
      puVar2 = puVar5 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar6;
    *(long *)(puVar4 + 0x18) = ((long)puVar2 >> 6) << 1;
  }
  func_0x000107c610b4();
  (*(code *)puVar3)(param_1);
  return puVar4;
}


