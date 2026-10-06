/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a8a9ec; end: 101a8ab0b;  */

undefined *
FUN_101a8a9ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  func_0x000107c600d4();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8ab0c);
    (*pcVar3)();
  }
  if (param_5 != 0) {
    uVar6 = 0;
    uVar5 = param_5;
    func_0x000101a02cf8(0);
    uVar7 = 0;
    do {
      uVar4 = param_3;
      func_0x000107c600d0((param_1 / (double)(long)param_5) * (double)uVar7);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x18 + 0x20) = uVar4;
      uVar7 = uVar7 + 1;
      *(int *)(puVar2 + uVar1 * 0x18 + 0x28) = (int)uVar5;
      *(int *)(puVar2 + uVar1 * 0x18 + 0x2c) = (int)(uVar5 >> 0x20);
      *(undefined8 *)(puVar2 + uVar1 * 0x18 + 0x30) = uVar6;
    } while (param_5 != uVar7);
  }
  return puVar2;
}



/* Entry: 101a8ab0c; end: 101a8ab23;  */

void FUN_101a8ab0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8ab24,0,0);
  return;
}



/* Entry: 101a8ab24; end: 101a8ac03;  */

void FUN_101a8ab24(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = 0;
  func_0x000107c6004c();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar7 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  func_0x000107c60050(uVar4,uVar1);
  func_0x000107c60044(uVar3);
  pcVar6 = *(code **)(lVar7 + 8);
  *(code **)(unaff_x22 + 0x70) = pcVar6;
  (*pcVar6)(uVar4,lVar2);
  func_0x000107c615c0(uVar4);
  *(undefined **)(unaff_x22 + 0x78) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a8ac04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588
  )(plVar5,unaff_x22 + 0x10);
  return;
}



/* Entry: 101a8ac04; end: 101a8ac4b;  */

void FUN_101a8ac04(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8ac4c,0,0);
  return;
}



/* Entry: 101a8ac4c; end: 101a8aeb7;  */

void FUN_101a8ac4c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    pcVar2 = *(code **)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
    FUN_101a874fc();
    func_0x000107c613f8(&UNK_110437c60,param_1,0,0);
    param_1[1] = uVar16;
    *param_1 = uVar15;
    param_1[2] = uVar12;
    param_1[3] = uVar11;
    func_0x000107c61654();
    (*pcVar2)(uVar5,uVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101a8ad48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x48) == -1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(unaff_x22 + 0x70))(uVar11,*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101a8acc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
    return;
  }
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c45af0();
  puVar7 = puVar6;
  func_0x000107c60bb4(0x3fe999999999999a);
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61170(puVar6);
    FUN_101a8b200(unaff_x22 + 0x10,0x112df4328,&UNK_10d9c2a68);
  }
  else {
    uVar13 = *(ulong *)(unaff_x22 + 0x78);
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    func_0x00010006c00c(puVar8,param_2);
    func_0x000107c61558();
    uVar14 = *(ulong *)(unaff_x22 + 0x78);
    uVar10 = uVar14;
    if ((uVar13 & 1) == 0) {
      uVar10 = 0;
      func_0x000100f23260(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
    }
    uVar13 = *(ulong *)(uVar10 + 0x10);
    uVar14 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar13) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x000100f23260(uVar14,uVar13 + 1,1,uVar10);
    }
    *(ulong *)(uVar14 + 0x10) = uVar13 + 1;
    lVar1 = uVar14 + uVar13 * 0x10;
    *(undefined **)(lVar1 + 0x20) = puVar8;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    func_0x000107c61170(puVar6);
    FUN_101a8b200(unaff_x22 + 0x10,0x112df4328,&UNK_10d9c2a68);
    func_0x00010006c090(puVar8,param_2);
    *(ulong *)(unaff_x22 + 0x78) = uVar14;
  }
  plVar9 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaFTu_11034d590
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101a8ac04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSo21AVAssetImageGeneratorC12AVFoundationE6ImagesV4nextAE7ElementOSgyYaF_11034d588
  )(plVar9,unaff_x22 + 0x10);
  return;
}



/* Entry: 101a8aeb8; end: 101a8aecf;  */

void FUN_101a8aeb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8aed0,0,0);
  return;
}



/* Entry: 101a8aed0; end: 101a8b017;  */

void FUN_101a8aed0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x000107c610f8();
  func_0x000107c457a0();
  *(undefined **)(unaff_x22 + 0x68) = puVar4;
  func_0x000107c563a0(0x4094000000000000,0x4086800000000000);
  func_0x000107c52860(puVar4);
  uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  *(undefined4 *)(unaff_x22 + 0xa0) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xa4) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  func_0x000107c57e18(puVar4);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  *(undefined4 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xbc) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar8;
  func_0x000107c57e14(puVar4);
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101a8b018;
    lVar6 = *(long *)(unaff_x22 + 0x60);
    plVar5[10] = (long)puVar4;
    plVar5[0xb] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8ab24,0,0);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a8b0f4;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101a89320();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a8b018; end: 101a8b083;  */

void FUN_101a8b018(undefined8 param_1)

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
    pcVar1 = FUN_101a8b084;
  }
  else {
    pcVar1 = (code *)0x101a8b0c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a8b084; end: 101a8b0f3;  */

void FUN_101a8b084(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000101a8b0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101a8b0f4; end: 101a8b15f;  */

void FUN_101a8b0f4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_101a8b160;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x101a8b19c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a8b160; end: 101a8b1cf;  */

void FUN_101a8b160(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000101a8b198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101a8b1d0; end: 101a8b1ff;  */

void FUN_101a8b1d0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(lVar2 + 0x10);
  puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar16 != 0) {
    unaff_x20 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
    lVar11 = lVar3;
    do {
      lVar4 = lVar3;
      func_0x000107c40798();
      uVar15 = 0;
      if (lVar4 == 0) {
        uVar14 = uVar15;
        func_0x000107c61174(0);
        func_0x000107c5ed30();
        func_0x000107c61170(uVar14);
        func_0x000107c61654();
        func_0x000107c6142c();
        uVar18 = *(undefined8 *)(lVar2 + 0x28);
        uVar17 = *(undefined8 *)(lVar2 + 0x20);
        uVar14 = *(undefined8 *)(lVar2 + 0x30);
        FUN_101a874fc();
        unaff_x20 = &UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar10,0,0);
        puVar10[1] = uVar18;
        *puVar10 = uVar17;
        puVar10[2] = uVar14;
        puVar10[3] = uVar15;
        uVar15 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar10 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar10 = unaff_x20;
        func_0x000107c61454(lVar12,uVar15);
        goto LAB_101a89814;
      }
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c61174(0);
      func_0x000107c45af0();
      puVar6 = puVar5;
      func_0x000107c60bb4(0x3fe999999999999a);
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar4);
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar6);
        func_0x00010006c00c(puVar7,lVar11);
        puVar8 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
          func_0x000100f23260(0,puVar10[2] + 1,1,puVar10);
        }
        uVar1 = puVar9[2];
        puVar10 = puVar9;
        if ((ulong)puVar9[3] >> 1 <= uVar1) {
          puVar10 = (undefined8 *)(ulong)(1 < (ulong)puVar9[3]);
          func_0x000100f23260(puVar10,uVar1 + 1,1,puVar9);
        }
        puVar10[2] = uVar1 + 1;
        puVar10[uVar1 * 2 + 4] = puVar7;
        puVar10[uVar1 * 2 + 5] = lVar11;
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar5);
        func_0x00010006c090(puVar7);
      }
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  **(undefined8 **)(*(long *)(lVar12 + 0x40) + 0x28) = puVar10;
  func_0x000107c61450();
LAB_101a89814:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
    return;
  }
  return;
}



/* Entry: 101a8b200; end: 101a8b23f;  */

undefined8 FUN_101a8b200(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a8b240; end: 101a8b24b;  */

void FUN_101a8b240(void)

{
  uint uVar1;
  uint7 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined6 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  undefined8 *unaff_x20;
  undefined1 *puVar15;
  undefined8 *unaff_x21;
  long lVar16;
  ulong unaff_x22;
  long lVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar18;
  undefined8 *unaff_x26;
  undefined8 *puVar19;
  undefined8 *unaff_x27;
  long lVar20;
  undefined8 uVar21;
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
  
  puVar4 = (undefined8 *)unaff_x20[3];
  puVar13 = (undefined8 *)unaff_x20[4];
  puStack_120 = (undefined8 *)unaff_x20[5];
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(ulong *)(unaff_x20[2] + 0x10);
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f0 = puVar4;
  if (uVar14 != 0) {
    uStack_f8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar21 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    unaff_x21 = (undefined8 *)(unaff_x20[2] + 0x30);
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
      uStack_b0 = uVar21;
      puStack_90 = unaff_x27;
      func_0x000107c40798();
      unaff_x20 = puStack_c0;
      if (unaff_x23 == (undefined8 *)0x0) {
        puVar13 = puStack_c0;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(puVar13);
        func_0x000107c61654();
LAB_101a891b4:
        puStack_c0 = unaff_x20;
        func_0x000107c614b0(unaff_x20);
        unaff_x21 = (undefined8 *)0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar6 = &uStack_a0;
        func_0x000107c6147c(puVar6,&puStack_c0,unaff_x21,&UNK_110437c60,0);
        puVar4 = unaff_x21;
        if ((int)puVar6 == 0) {
          puVar13 = puStack_c0;
          func_0x000107c614ac();
          uVar14 = unaff_x22 | (long)unaff_x24 << 0x20;
          FUN_101a874fc();
          unaff_x23 = (undefined8 *)&UNK_110437c60;
          func_0x000107c613f8(&UNK_110437c60,puVar13,0,0);
          *puVar13 = unaff_x26;
          puVar13[1] = uVar14;
          puVar13[2] = unaff_x27;
          puVar13[3] = unaff_x20;
          puVar13 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8(unaff_x21,PTR___ss5ErrorWS_11034ee10,0,0);
          *puVar13 = unaff_x23;
          puVar13 = puVar4;
          func_0x000107c61454(puStack_120);
          puVar19 = puVar5;
          func_0x000107c6142c();
        }
        else {
          func_0x000107c614ac();
          FUN_101a874fc();
          uStack_d8 = CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT24(uStack_94,uStack_98)));
          puStack_e0 = (undefined8 *)CONCAT26(uStack_9a,uStack_a0);
          uStack_e8 = uStack_88;
          puStack_f0 = puStack_90;
          puVar7 = (undefined8 *)&UNK_110437c60;
          func_0x000107c613f8(&UNK_110437c60,unaff_x20,0,0);
          unaff_x20[1] = uStack_d8;
          *unaff_x20 = puStack_e0;
          unaff_x20[3] = uStack_e8;
          unaff_x20[2] = puStack_f0;
          puVar13 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8(unaff_x21,PTR___ss5ErrorWS_11034ee10,0,0);
          *puVar13 = puVar7;
          puVar13 = puVar4;
          func_0x000107c61454(puStack_120);
          func_0x000107c6142c(puVar5);
          puVar19 = puStack_c0;
          func_0x000107c614ac();
          unaff_x20 = puVar7;
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
      lVar20 = (long)unaff_x24 * 4;
      puVar4 = unaff_x25;
      uStack_110 = unaff_x22;
      puStack_e0 = puVar5;
      func_0x000107c608bc();
      puVar5 = (undefined8 *)0x0;
      puVar13 = unaff_x25;
      func_0x000107c608a0(0,unaff_x24,unaff_x25,8,lVar20,puVar4,1);
      func_0x000107c61170();
      if (puVar5 == (undefined8 *)0x0) {
        FUN_101a874fc();
        unaff_x20 = (undefined8 *)&UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar4,0,0);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 3;
        func_0x000107c61654();
LAB_101a8919c:
        func_0x000107c61170(unaff_x23);
        unaff_x22 = uStack_110;
        unaff_x24 = puStack_108;
        puVar5 = puStack_e0;
        goto LAB_101a891b4;
      }
      func_0x000107c5ff40(0,0,(double)(long)unaff_x24,(double)(long)unaff_x25,unaff_x23,0);
      puVar4 = puVar5;
      func_0x000107c608a8();
      if (puVar4 == (undefined8 *)0x0) {
        FUN_101a874fc();
        unaff_x20 = (undefined8 *)&UNK_110437c60;
        func_0x000107c613f8(&UNK_110437c60,puVar4,0,0);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 3;
        func_0x000107c61654();
        func_0x000107c61170(puVar5);
        goto LAB_101a8919c;
      }
      puVar19 = (undefined8 *)((long)unaff_x25 * lVar20);
      if (SUB168(SEXT816((long)unaff_x25) * SEXT816(lVar20),8) != (long)puVar19 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8931c);
        (*pcVar3)();
      }
      if (puVar19 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar5);
        unaff_x20 = (undefined8 *)0x0;
        unaff_x26 = (undefined8 *)0xc000000000000000;
      }
      else if (puVar19 < (undefined8 *)0xf) {
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_a0 = 0;
        uStack_9a = 0;
        uStack_92 = SUB81(puVar19,0);
        func_0x000107c610b4(&uStack_a0,puVar4);
        unaff_x20 = (undefined8 *)CONCAT26(uStack_9a,uStack_a0);
        uVar2 = CONCAT16(uStack_92,CONCAT24(uStack_94,uStack_98));
        func_0x000107c61170(puVar5);
        unaff_x26 = (undefined8 *)((ulong)puStack_118 & 0xf00000000000000 | (ulong)uVar2);
        puVar13 = puVar19;
        puStack_118 = unaff_x26;
      }
      else {
        puVar13 = (undefined8 *)0x0;
        func_0x000107c5ec40();
        func_0x000107c613fc();
        func_0x000107c5ec2c(puVar4,puVar19);
        if (puVar19 < (undefined8 *)0x7fffffff) {
          func_0x000107c61170(puVar5);
          unaff_x20 = (undefined8 *)((long)puVar19 << 0x20);
          unaff_x26 = (undefined8 *)((ulong)puVar4 | 0x4000000000000000);
        }
        else {
          unaff_x20 = (undefined8 *)0x0;
          func_0x000107c5ee0c();
          puVar13 = (undefined8 *)0x7;
          func_0x000107c613fc();
          unaff_x20[2] = 0;
          unaff_x20[3] = puVar19;
          func_0x000107c61170(puVar5);
          unaff_x26 = (undefined8 *)((ulong)puVar4 | 0x8000000000000000);
        }
      }
      puVar4 = puStack_e0;
      func_0x00010006c00c(unaff_x20,unaff_x26);
      puVar5 = puVar4;
      func_0x000107c61558();
      puVar19 = puVar4;
      if (((ulong)puVar5 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x1;
        FUN_101a86488(0,puVar4[2] + 1,1,puVar4);
      }
      unaff_x22 = puVar19[2];
      unaff_x27 = (undefined8 *)(unaff_x22 + 1);
      puVar5 = puVar19;
      if ((ulong)puVar19[3] >> 1 <= unaff_x22) {
        puVar5 = (undefined8 *)(ulong)(1 < (ulong)puVar19[3]);
        puVar13 = (undefined8 *)0x1;
        FUN_101a86488(puVar5,unaff_x27,1,puVar19);
      }
      unaff_x21 = unaff_x21 + 3;
      puVar5[2] = unaff_x27;
      puVar5[unaff_x22 * 4 + 4] = unaff_x20;
      puVar5[unaff_x22 * 4 + 5] = unaff_x26;
      puVar5[unaff_x22 * 4 + 6] = unaff_x24;
      puVar5[unaff_x22 * 4 + 7] = unaff_x25;
      func_0x000107c61170(unaff_x23);
      puVar4 = unaff_x26;
      func_0x00010006c090(unaff_x20);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  **(undefined8 **)(puStack_120[8] + 0x28) = puVar5;
  puVar19 = puStack_120;
  func_0x000107c61450();
LAB_101a892d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    pcStack_128 = FUN_101a89320;
    lVar8 = 0;
    puStack_1d8 = puVar19;
    puStack_180 = puVar5;
    puStack_178 = unaff_x27;
    puStack_170 = unaff_x26;
    puStack_168 = unaff_x25;
    puStack_160 = unaff_x24;
    puStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    puStack_148 = unaff_x21;
    puStack_140 = unaff_x20;
    uStack_138 = uVar14;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000107c5f7fc();
    lStack_1c0 = *(long *)(lVar8 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1c0 + 0x40));
    puVar15 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar20 = 0;
    func_0x000107c5f824();
    lStack_1d0 = *(long *)(lVar20 + -8);
    lStack_1c8 = lVar20;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d0 + 0x40));
    lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lVar9 = 0;
    func_0x000107c5f804();
    lVar18 = *(long *)(lVar9 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
    lVar16 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    FUN_101a8b24c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar18 + 0x68))
              (lVar16,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar9);
    lVar20 = lVar16;
    func_0x000107c5fff0(lVar16);
    (**(code **)(lVar18 + 8))(lVar16,lVar9);
    puVar10 = &UNK_110437b00;
    func_0x000107c613fc(&UNK_110437b00,0x28,7);
    *(undefined8 **)(puVar10 + 0x10) = puVar4;
    *(undefined8 **)(puVar10 + 0x18) = puVar13;
    *(undefined8 **)(puVar10 + 0x20) = puStack_1d8;
    pcStack_190 = FUN_101a8b1d0;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0x42000000;
    puStack_1a0 = &UNK_1000b0c7c;
    puStack_198 = &UNK_110437b18;
    ppuVar11 = &puStack_1b0;
    puStack_188 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61434(puVar4);
    func_0x000107c61174(puVar13);
    func_0x000107c5f808(lVar17);
    puStack_1b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar21 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar12 = uVar21;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar15,&puStack_1b8,uVar21,uVar12,lVar8,puVar13);
    func_0x000107c5ffe8(0,lVar17,puVar15,ppuVar11);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar20);
    (**(code **)(lStack_1c0 + 8))(puVar15,lVar8);
    (**(code **)(lStack_1d0 + 8))(lVar17,lStack_1c8);
    func_0x000107c61574(puStack_188);
    return;
  }
  return;
}



/* Entry: 101a8b24c; end: 101a8b2b7;  */

void FUN_101a8b24c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a8b2b8; end: 101a8b2d7;  */

void FUN_101a8b2b8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101a8b2d8; end: 101a8b337;  */

undefined8 * FUN_101a8b2d8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
    func_0x000107c614b0(uVar2);
    param_1[3] = uVar2;
  }
  else {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  return param_1;
}



/* Entry: 101a8b338; end: 101a8b41f;  */

undefined8 * FUN_101a8b338(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_1[3];
  uVar1 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar1 = 0xffffffff;
  }
  uVar3 = param_2[3];
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar2 = (int)uVar3 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
      param_1[2] = param_2[2];
      uVar5 = param_2[3];
      func_0x000107c614b0(uVar5);
      param_1[3] = uVar5;
      func_0x000107c614ac(uVar4);
    }
    else {
      func_0x000107c614ac(uVar4);
      uVar5 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
    }
  }
  else if (iVar2 < 0) {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
    uVar5 = param_2[3];
    func_0x000107c614b0(uVar5);
    param_1[3] = uVar5;
  }
  else {
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  return param_1;
}



/* Entry: 101a8b420; end: 101a8b4b7;  */

undefined8 * FUN_101a8b420(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = param_2[3];
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = uVar3;
      func_0x000107c614ac(uVar2);
    }
    else {
      func_0x000107c614ac(uVar2);
      uVar4 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
    }
  }
  else {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
  }
  return param_1;
}



/* Entry: 101a8b4b8; end: 101a8b5ef;  */

int FUN_101a8b4b8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar3 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < uVar2 + 1) {
    iVar1 = uVar2 - 2;
  }
  return iVar1;
}



/* Entry: 101a8b5f0; end: 101a8b64b;  */

long FUN_101a8b5f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_101a8b64c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x18) = lVar1;
    func_0x000107c61174();
    FUN_101a8b94c(uVar3);
  }
  func_0x000101a8b95c(lVar2);
  return lVar1;
}



/* Entry: 101a8b64c; end: 101a8b79f;  */

/* WARNING: Removing unreachable block (ram,0x000101a8b744) */

long FUN_101a8b64c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar5 = 0x800000010efce710;
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_101a8b710:
            func_0x000107c610f8(PTR_PTR_1126a8738);
            lVar3 = lVar4;
            FUN_101a8b96c(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar7);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_101a8b710;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_101a8b710;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar7);
  }
  return 0;
}



/* Entry: 101a8b7a0; end: 101a8b80f; -[_TtC18TinselServicesImpl24TinselConfigProviderImpl externalImageTTL] */

uint FUN_101a8b7a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c6157c();
  FUN_101a8b5f0();
  if (lVar2 == 0) {
    func_0x000107c61574(param_1);
    uVar1 = 0x15180;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4511c();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(param_1);
    uVar1 = (uint)lVar3;
    if ((uint)lVar3 < 0x15181) {
      uVar1 = 0x15180;
    }
  }
  return uVar1;
}



/* Entry: 101a8b810; end: 101a8b877; -[_TtC18TinselServicesImpl24TinselConfigProviderImpl maxResolution] */

uint FUN_101a8b810(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101a8b5f0();
  if (lVar1 == 0) {
    func_0x000107c61574(param_1);
    uVar3 = 0x2f8;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c87c();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(param_1);
    uVar3 = (uint)lVar2;
    if (uVar3 < 0x2f9) {
      uVar3 = 0x2f8;
    }
  }
  return uVar3;
}



/* Entry: 101a8b878; end: 101a8b8ff; -[_TtC18TinselServicesImpl24TinselConfigProviderImpl jpgCompressionLevel] */

double FUN_101a8b878(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  double dVar4;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101a8b5f0();
  if (lVar1 == 0) {
    func_0x000107c61574(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a84c();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(param_1);
    uVar3 = (uint)lVar2;
    if (0x45 < uVar3) {
      if (99 < uVar3) {
        uVar3 = 100;
      }
      dVar4 = (double)uVar3;
      goto LAB_101a8b8e4;
    }
  }
  dVar4 = 70.0;
LAB_101a8b8e4:
  return dVar4 / 100.0;
}



/* Entry: 101a8b900; end: 101a8b94b;  */

void FUN_101a8b900(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_101a8b94c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a8b94c; end: 101a8b96b;  */

void FUN_101a8b94c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101a8b96c; end: 101a8ba2b;  */

/* WARNING: Possible PIC construction at 0x000101a8b9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a8bb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a8b9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8bb18) */
/* WARNING: Removing unreachable block (ram,0x000101a8b9bc) */
/* WARNING: Removing unreachable block (ram,0x000101a8b9cc) */
/* WARNING: Removing unreachable block (ram,0x000101a8b9c4) */
/* WARNING: Removing unreachable block (ram,0x000101a8b9ec) */
/* WARNING: Removing unreachable block (ram,0x000101a8b9f4) */
/* WARNING: Removing unreachable block (ram,0x000101a8ba28) */
/* WARNING: Removing unreachable block (ram,0x000101a8baac) */
/* WARNING: Removing unreachable block (ram,0x000101a8ba60) */
/* WARNING: Removing unreachable block (ram,0x000101a8baa0) */
/* WARNING: Removing unreachable block (ram,0x000101a8baa4) */
/* WARNING: Removing unreachable block (ram,0x000101a8bac0) */
/* WARNING: Removing unreachable block (ram,0x000101a8ba0c) */

void FUN_101a8b96c(undefined8 param_1)

{
  func_0x000107c5ee20();
  func_0x000107c4636c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8ba2c; end: 101a8bb33;  */

/* WARNING: Possible PIC construction at 0x000101a8bb14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8bb18) */

void FUN_101a8ba2c(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == '\0') {
    uVar1 = 0x676e697373696d;
    uVar3 = 0xe700000000000000;
  }
  else {
    uVar1 = 0x61735f6c61636f6c;
    uVar3 = 0xef6c6961665f6576;
    if (param_1 != '\x01') {
      uVar1 = 0x5f64696c61766e69;
      uVar3 = 0xeb000000006c7275;
    }
  }
  func_0x000107c5fb78(uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001067e6d38(uVar2,uVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101a8bb34; end: 101a8bc63;  */

void FUN_101a8bb34(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == '\x01') {
    uVar5 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    uVar5 = 0x2d;
    uVar4 = 0xe100000000000000;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c5fb78(uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(puVar1,puVar2);
  func_0x000107c6142c(puVar2);
  func_0x000107c5fadc(param_4,param_5);
  func_0x0001067e76ac(uVar3,puVar1,param_4,1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101a8bc64; end: 101a8bc87;  */

void FUN_101a8bc64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a8bc88; end: 101a8bc93;  */

void FUN_101a8bc88(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*(code *)&UNK_1067e6bc4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8bc94; end: 101a8bcb3;  */

void FUN_101a8bc94(void)

{
  FUN_101a8ba2c();
  return;
}



/* Entry: 101a8bcb4; end: 101a8bcd7;  */

void FUN_101a8bcb4(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*(code *)&UNK_1067e6f68)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8bcd8; end: 101a8bcf7;  */

void FUN_101a8bcd8(void)

{
  FUN_101a8bb34();
  return;
}



/* Entry: 101a8bcf8; end: 101a8bd1b;  */

void FUN_101a8bcf8(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*(code *)&UNK_1067e78dc)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8bd1c; end: 101a8bdaf;  */

void FUN_101a8bd1c(double param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8bda8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x0001067e7d38(uVar2,param_2,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8bdb0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8bdac);
  (*pcVar1)();
}



/* Entry: 101a8bdb0; end: 101a8bdc7;  */

/* WARNING: Possible PIC construction at 0x000101a8be74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8be78) */

void FUN_101a8bdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*(code *)&UNK_1067e7eac)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8bdc8; end: 101a8be0f;  */

void FUN_101a8bdc8(undefined8 param_1)

{
  code *in_x4;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*in_x4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8be10; end: 101a8be1b;  */

/* WARNING: Possible PIC construction at 0x000101a8be74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8be78) */

void FUN_101a8be10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*(code *)&UNK_1067e8250)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8be1c; end: 101a8bfa3;  */

/* WARNING: Possible PIC construction at 0x000101a8be74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8be78) */

void FUN_101a8be1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*param_7)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a8bfa4; end: 101a8bfb3;  */

void FUN_101a8bfa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a8bfb4; end: 101a8c033; -[_TtC18TinselServicesImpl10TinselImpl prepareFilepathWithContentFilepaths:source:] */

void FUN_101a8bfb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ede0(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101a8d0e4(param_3,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a8c034; end: 101a8c0ab; -[_TtC18TinselServicesImpl10TinselImpl prepareDataWithContentData:source:] */

void FUN_101a8c034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___s10Foundation4DataVN_110350ae0);
  func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101a8d440(param_3,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a8c0ac; end: 101a8c33b; -[_TtC18TinselServicesImpl10TinselImpl prepare:::] */

void FUN_101a8c0ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c6157c(param_1);
    uVar1 = 0xf000000000000000;
    uVar4 = param_2;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c6157c(param_1);
    lVar3 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    uVar4 = param_2;
    func_0x000107c61170(lVar3);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    lVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    lVar3 = param_5;
    func_0x000107c5ee30(param_5);
    func_0x000107c61170(param_5);
  }
  func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
  uVar2 = param_3;
  FUN_101a8d50c(param_3,param_4,uVar1,lVar3,uVar4);
  func_0x0001000b44c0(lVar3,uVar4);
  func_0x0001000b44c0(param_4,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101a8c33c; end: 101a8c49f; -[_TtC18TinselServicesImpl10TinselImpl prepare::::] */

void FUN_101a8c33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    uVar2 = 0xf000000000000000;
    uVar3 = param_2;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    lVar5 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    uVar3 = param_2;
    func_0x000107c61170(lVar5);
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    lVar5 = 0;
    uVar1 = 0xf000000000000000;
    uVar6 = uVar3;
  }
  else {
    lVar5 = param_5;
    func_0x000107c5ee30(param_5);
    uVar6 = uVar3;
    func_0x000107c61170(param_5);
    uVar1 = uVar3;
  }
  if (param_6 == 0) {
    lVar4 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    lVar4 = param_6;
    func_0x000107c5ee30(param_6);
    func_0x000107c61170(param_6);
  }
  uVar3 = param_3;
  func_0x000101a8c1c8(param_3,param_4,uVar2,lVar5,uVar1,lVar4,uVar6);
  func_0x0001000b44c0(lVar4,uVar6);
  func_0x0001000b44c0(lVar5,uVar1);
  func_0x0001000b44c0(param_4,uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101a8c4a0; end: 101a8c4c3;  */

void FUN_101a8c4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8c4c4,0,0);
  return;
}



/* Entry: 101a8c4c4; end: 101a8c5b3;  */

void FUN_101a8c4c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x20) + 0x38);
  func_0x0001000a8868(plVar4,*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x50));
  lVar5 = *plVar4;
  plVar4 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101a8c528;
  lVar1 = *(long *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  plVar4[0x10] = *(long *)(unaff_x22 + 0x40);
  plVar4[0x11] = lVar5;
  plVar4[0xe] = lVar3;
  plVar4[0xf] = lVar1;
  plVar4[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a92d9c,0,0);
  return;
}



/* Entry: 101a8c5b4; end: 101a8c74f; -[_TtC18TinselServicesImpl10TinselImpl postV2WithMedia:destinations:mediaReferences:createdTimestamp:completion:] */

/* WARNING: Possible PIC construction at 0x000101a8c724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8c728) */

void FUN_101a8c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x00010401523c(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = 0;
  func_0x00010401525c(0);
  func_0x000107c5fc54(param_4,uVar1);
  uVar1 = 0;
  func_0x000104015468(0);
  func_0x000107c5fc54(param_5,uVar1);
  if (param_7 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_110437ef8;
    func_0x000107c613fc(&UNK_110437ef8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_7;
    pcVar4 = FUN_101a8ce70;
  }
  puVar2 = &UNK_110437ed0;
  func_0x000107c613fc(&UNK_110437ed0,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(code **)(puVar2 + 0x38) = pcVar4;
  *(undefined **)(puVar2 + 0x40) = puVar3;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_5);
  func_0x000101237340(pcVar4,puVar3);
  uVar1 = 2;
  func_0x0001001ca524(2,0,0x5c,4,0,0,&UNK_10d9c2df8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_1);
  func_0x000101237350(pcVar4,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101a8c750; end: 101a8c7af; -[_TtC18TinselServicesImpl10TinselImpl discardWithMedia:] */

void FUN_101a8c750(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001000a8868(param_1 + 0x38,*(undefined8 *)(param_1 + 0x50));
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101a94068(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101a8c7b0; end: 101a8c7db;  */

void FUN_101a8c7b0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a8c7dc; end: 101a8c84b;  */

undefined1  [16] FUN_101a8c7dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0xef6c6961665f6576;
  uVar3 = 0x61735f6c61636f6c;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb000000006c7275;
    uVar3 = 0x5f64696c61766e69;
  }
  uVar2 = 0x676e697373696d;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101a8c84c; end: 101a8c8cf;  */

void FUN_101a8c84c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690((ulong)bVar1 + 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a8c8d0; end: 101a8c9bb;  */

void FUN_101a8c8d0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_101a8ce84(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101a8cf34(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8c9b8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8c9bc);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8c9b4);
  (*pcVar1)();
}



/* Entry: 101a8c9bc; end: 101a8c9bf;  */

void FUN_101a8c9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df4610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c2c10;
  func_0x000107c61520(&UNK_10d9c2c10,&UNK_110437e20);
  puRam0000000112df4610 = puVar1;
  return;
}



/* Entry: 101a8c9c0; end: 101a8c9ff;  */

void FUN_101a8c9c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df4610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c2c10;
  func_0x000107c61520(&UNK_10d9c2c10,&UNK_110437e20);
  puRam0000000112df4610 = puVar1;
  return;
}



/* Entry: 101a8ca00; end: 101a8ca03;  */

void FUN_101a8ca00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df4618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c2cd8;
  func_0x000107c61520(&UNK_10d9c2cd8,&UNK_110437eb0);
  puRam0000000112df4618 = puVar1;
  return;
}



/* Entry: 101a8ca04; end: 101a8ca43;  */

void FUN_101a8ca04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df4618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c2cd8;
  func_0x000107c61520(&UNK_10d9c2cd8,&UNK_110437eb0);
  puRam0000000112df4618 = puVar1;
  return;
}



/* Entry: 101a8ca44; end: 101a8ca5b;  */

void FUN_101a8ca44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101a8ca5c; end: 101a8caf7;  */

undefined8 * FUN_101a8ca5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101a8ca44(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101a8caf8; end: 101a8cb3b;  */

undefined8 * FUN_101a8caf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_101a838e4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101a8cb3c; end: 101a8cd53;  */

int FUN_101a8cb3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101a8cd54; end: 101a8cd9f;  */

void FUN_101a8cd54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a8cda0; end: 101a8ce33;  */

void FUN_101a8cda0(void)

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
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a8ce34;
  plVar7[9] = lVar6;
  plVar7[10] = lVar8;
  plVar7[7] = lVar5;
  plVar7[8] = lVar3;
  plVar7[5] = lVar4;
  plVar7[6] = lVar2;
  plVar7[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8c4c4,0,0);
  return;
}



/* Entry: 101a8ce34; end: 101a8ce6f;  */

void FUN_101a8ce34(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a8ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a8ce70; end: 101a8ce83;  */

void FUN_101a8ce70(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101a8ce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101a8ce84; end: 101a8cf33;  */

void FUN_101a8ce84(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000101a8689c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101a8cf34; end: 101a8d08b;  */

ulong FUN_101a8cf34(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8d08c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8d080);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x00010401523c(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8d084);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8d088);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101a91cb4(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101a8d08c; end: 101a8d0e3;  */

void FUN_101a8d08c(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 + 1;
  return;
}



/* Entry: 101a8d0e4; end: 101a8d43f;  */

/* WARNING: Removing unreachable block (ram,0x000101a8d1d0) */
/* WARNING: Removing unreachable block (ram,0x000101a8d2c0) */
/* WARNING: Removing unreachable block (ram,0x000101a8d30c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d2c4) */
/* WARNING: Removing unreachable block (ram,0x000101a8d31c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d324) */
/* WARNING: Removing unreachable block (ram,0x000101a8d2cc) */
/* WARNING: Removing unreachable block (ram,0x000101a8d20c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d2e4) */
/* WARNING: Removing unreachable block (ram,0x000101a8d360) */
/* WARNING: Removing unreachable block (ram,0x000101a8d368) */
/* WARNING: Removing unreachable block (ram,0x000101a8d2ec) */
/* WARNING: Removing unreachable block (ram,0x000101a8d214) */
/* WARNING: Removing unreachable block (ram,0x000101a8d33c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d41c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d344) */
/* WARNING: Removing unreachable block (ram,0x000101a8d21c) */
/* WARNING: Removing unreachable block (ram,0x000101a8d384) */

long FUN_101a8d0e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [32];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = 0x455f4c45534e4954;
  func_0x000107c5fadc(0x455f4c45534e4954,0xee0044454c42414e);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((iVar6 == 0) || (*(long *)(param_1 + 0x10) != 1)) {
    lVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (puVar7,param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    uVar2 = 0;
    puVar3 = puVar7;
    func_0x000107c5ede8();
    lVar4 = 0x112d4c088;
    func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined1 **)(lVar4 + 0x20) = puVar3;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    func_0x00010006c00c(puVar3,uVar2);
    lVar5 = lVar4;
    FUN_101a8d440(lVar4,param_2);
    func_0x000107c61574(lVar4);
    func_0x00010006c090(puVar3,uVar2);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
  }
  return lVar5;
}



/* Entry: 101a8d440; end: 101a8d50b;  */

void FUN_101a8d440(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  int iVar3;
  
  iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = 0x455f4c45534e4954;
  func_0x000107c5fadc(0x455f4c45534e4954,0xee0044454c42414e);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((iVar3 != 0 && param_2 - 1U < 6) && (*(long *)(param_1 + 0x10) == 1)) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
    (**(code **)(lVar1 + 8))(param_1,param_2,uVar2,lVar1);
  }
  return;
}



/* Entry: 101a8d50c; end: 101a8e7bb;  */

ulong FUN_101a8d50c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong auStack_70 [2];
  
  iVar22 = (int)*(undefined8 *)(unaff_x20 + 0x60);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efce750);
  iVar5 = iVar22;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar6);
  if (iVar5 != 0) {
    uVar17 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0d8);
      (*pcVar3)();
    }
    uVar7 = uVar17;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    if (uVar7 != 0) {
      auStack_70[0] = 0;
      uVar6 = 0;
      FUN_101a8f834(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(uVar7,auStack_70,uVar6);
      func_0x000107c61170(uVar7);
      uVar17 = auStack_70[0];
      if (auStack_70[0] != 0) {
        uVar7 = param_1;
        func_0x000107c4ca10();
        func_0x000107c61180();
        if (uVar7 != 0) {
          auStack_70[0] = 0;
          uVar6 = 0;
          FUN_101a8f834(0,0x112d512f8,&PTR_PTR_1126b25d8);
          func_0x000107c5fc50(uVar7,auStack_70,uVar6);
          func_0x000107c61170(uVar7);
          uVar7 = auStack_70[0];
          if (auStack_70[0] != 0) {
            uVar20 = uVar17 & 0xffffffffffffff8;
            if (uVar17 >> 0x3e == 0) {
              uVar8 = *(ulong *)(uVar20 + 0x10);
            }
            else {
              uVar8 = uVar20;
              if ((uVar17 & 0x8000000000000000) != 0) {
                uVar8 = uVar17;
              }
              func_0x000107c60480();
            }
            uVar18 = uVar7 & 0xffffffffffffff8;
            uVar2 = uVar7;
            if (-1 < (long)uVar7) {
              uVar2 = uVar18;
            }
            if (uVar8 == 0) {
              puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              uVar19 = 0;
              puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
              do {
                while( true ) {
                  if ((uVar17 & 0xc000000000000001) == 0) {
                    if (*(ulong *)(uVar20 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e094);
                      (*pcVar3)();
                    }
                    uVar9 = *(ulong *)(uVar17 + 0x20 + uVar19 * 8);
                    func_0x000107c61174();
                  }
                  else {
                    uVar9 = uVar19;
                    func_0x00010121c1ac(uVar19,uVar17);
                  }
                  bVar4 = SCARRY8(uVar19,1);
                  uVar19 = uVar19 + 1;
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e090);
                    (*pcVar3)();
                  }
                  uVar12 = uVar9;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (uVar12 == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0cc);
                    (*pcVar3)();
                  }
                  uVar10 = uVar12;
                  func_0x000107c4c99c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar12);
                  uVar12 = uVar9;
                  if (uVar10 != 0) break;
LAB_101a8d6e8:
                  func_0x000107c61170(uVar12);
                  if (uVar19 == uVar8) goto LAB_101a8dab0;
                }
                func_0x000107c4c930();
                func_0x000107c61180();
                if (uVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0d0);
                  (*pcVar3)();
                }
                uVar21 = uVar12;
                func_0x000107c5d0f0();
                func_0x000107c61170(uVar12);
                if ((int)uVar21 == 0) {
                  uVar12 = uVar9;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (uVar12 == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0e0);
                    (*pcVar3)();
                  }
                  uVar21 = uVar12;
                  func_0x000107c4e088();
                  func_0x000107c61170(uVar12);
                  if (((int)uVar21 != 0x1b) && (uVar12 = uVar9, FUN_101a8ec2c(), (uVar12 & 1) == 0))
                  goto LAB_101a8d788;
                  uVar21 = uVar9;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  bVar4 = false;
                  uVar6 = 1;
                }
                else {
LAB_101a8d788:
                  uVar6 = 0;
                  uVar21 = 0;
                  bVar4 = true;
                }
                uVar12 = uVar9;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (uVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0d4);
                  (*pcVar3)();
                }
                uVar24 = uVar12;
                func_0x000107c5d0f0();
                func_0x000107c61170(uVar12);
                uVar12 = uVar21;
                if ((int)uVar24 == 1) {
                  uVar24 = uVar9;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (uVar24 == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0dc);
                    (*pcVar3)();
                  }
                  uVar25 = uVar24;
                  func_0x000107c4e088();
                  func_0x000107c61170(uVar24);
                  if (((int)uVar25 == 0x1b) || (uVar24 = uVar9, FUN_101a8ec2c(), (uVar24 & 1) != 0))
                  {
                    uVar12 = uVar9;
                    func_0x000107c4c930();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar21);
                    bVar4 = false;
                    uVar6 = 2;
                  }
                }
                if (uVar7 >> 0x3e == 0) {
                  uVar21 = *(ulong *)(uVar18 + 0x10);
                }
                else {
                  uVar21 = uVar2;
                  func_0x000107c60480();
                }
                if (uVar21 == 0) {
                  func_0x000107c61170(uVar10);
                  func_0x000107c61170(uVar9);
                  goto LAB_101a8d6e8;
                }
                if ((long)uVar21 < 1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e09c);
                  (*pcVar3)();
                }
                uVar24 = 0;
                uVar25 = 0;
                do {
                  if ((uVar7 & 0xc000000000000001) == 0) {
                    uVar23 = *(ulong *)(uVar7 + uVar24 * 8 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    uVar23 = uVar24;
                    func_0x000100fb10dc(uVar24,uVar7);
                  }
                  uVar13 = uVar23;
                  func_0x000107c4c9b4();
                  uVar11 = uVar10;
                  func_0x000107c4c9b4();
                  if (uVar13 == uVar11) {
                    func_0x000107c61170(uVar25);
                  }
                  else {
                    func_0x000107c61170(uVar23);
                    uVar23 = uVar25;
                  }
                  uVar24 = uVar24 + 1;
                  uVar25 = uVar23;
                } while (uVar21 != uVar24);
                if (uVar23 == 0) {
                  func_0x000107c61170(uVar10);
                  func_0x000107c61170(uVar9);
                  goto LAB_101a8d6e8;
                }
                if (bVar4) {
                  func_0x000107c61170(uVar10);
                  func_0x000107c61170(uVar23);
                  func_0x000107c61170(uVar9);
                  goto LAB_101a8d6e8;
                }
                if (uVar12 == 0) {
                  func_0x000107c61170(uVar10);
                  func_0x000107c61170(uVar23);
                  uVar12 = uVar9;
                  goto LAB_101a8d6e8;
                }
                func_0x000107c61174();
                func_0x000107c61174();
                puVar15 = puStack_f8;
                func_0x000107c61558();
                if (((ulong)puVar15 & 1) == 0) {
                  plVar1 = (long *)(puStack_f8 + 0x10);
                  puStack_f8 = (undefined *)0x0;
                  FUN_101a86a14(0,*plVar1 + 1,1);
                }
                uVar21 = *(ulong *)(puStack_f8 + 0x10);
                if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar21) {
                  puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f8 + 0x18));
                  FUN_101a86a14(puVar15,uVar21 + 1,1,puStack_f8);
                  puStack_f8 = puVar15;
                }
                *(ulong *)(puStack_f8 + 0x10) = uVar21 + 1;
                *(ulong *)(puStack_f8 + uVar21 * 0x18 + 0x20) = uVar23;
                *(undefined8 *)(puStack_f8 + uVar21 * 0x18 + 0x28) = uVar6;
                *(ulong *)(puStack_f8 + uVar21 * 0x18 + 0x30) = uVar12;
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar23);
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar9);
              } while (uVar19 != uVar8);
            }
LAB_101a8dab0:
            if (uVar8 == 0) {
              puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              uVar19 = 0;
              uVar9 = uVar20;
              if ((uVar17 & 0x8000000000000000) != 0) {
                uVar9 = uVar17;
              }
              puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
              do {
                if ((uVar17 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar20 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0a0);
                    (*pcVar3)();
                  }
                  uVar12 = *(ulong *)(uVar17 + 0x20 + uVar19 * 8);
                  func_0x000107c61174();
                }
                else {
                  uVar12 = uVar19;
                  func_0x00010121c1ac(uVar19,uVar17);
                }
                bVar4 = SCARRY8(uVar19,1);
                uVar19 = uVar19 + 1;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e098);
                  (*pcVar3)();
                }
                uVar6 = 0xd00000000000002f;
                func_0x000107c5fadc(0xd00000000000002f,0x800000010efce770);
                iVar5 = iVar22;
                func_0x000107c3ebd4();
                func_0x000107c61170(uVar6);
                uVar10 = uVar12;
                if (iVar5 != 0) {
                  if (uVar17 >> 0x3e == 0) {
                    uVar21 = *(ulong *)(uVar20 + 0x10);
                  }
                  else {
                    uVar21 = uVar9;
                    func_0x000107c60480();
                  }
                  if ((uVar21 == 1) &&
                     ((uVar21 = param_1, func_0x000107c44920(), (uVar21 & 1) != 0 ||
                      (uVar21 = param_1, FUN_101a8ed90(), (uVar21 & 1) != 0)))) {
                    uVar21 = uVar12;
                    func_0x000107c4c930();
                    func_0x000107c61180();
                    if (uVar21 == 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0e4);
                      (*pcVar3)();
                    }
                    uVar24 = uVar21;
                    func_0x000107c4c99c();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar21);
                    if (uVar24 != 0) {
                      func_0x000107c4c930();
                      func_0x000107c61180();
                      if (uVar10 == 0) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0ec);
                        (*pcVar3)();
                      }
                      uVar21 = uVar10;
                      func_0x000107c5d0f0();
                      func_0x000107c61170(uVar10);
                      if ((int)uVar21 == 0) {
                        uVar10 = uVar12;
                        func_0x000107c4c930();
                        func_0x000107c61180();
                        if (uVar10 == 0) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0f4);
                          (*pcVar3)();
                        }
                        uVar21 = uVar10;
                        func_0x000107c4e088();
                        func_0x000107c61170(uVar10);
                        if (((int)uVar21 != 0x1a) &&
                           (uVar10 = uVar12, FUN_101a8f6d0(), (uVar10 & 1) == 0))
                        goto LAB_101a8dc30;
                        uVar21 = uVar12;
                        func_0x000107c4c930();
                        func_0x000107c61180();
                        bVar4 = false;
                        uStack_e8 = 1;
                      }
                      else {
LAB_101a8dc30:
                        uStack_e8 = 0;
                        uVar21 = 0;
                        bVar4 = true;
                      }
                      uVar10 = uVar12;
                      func_0x000107c4c930();
                      func_0x000107c61180();
                      if (uVar10 == 0) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0e8);
                        (*pcVar3)();
                      }
                      uVar25 = uVar10;
                      func_0x000107c5d0f0();
                      func_0x000107c61170(uVar10);
                      uVar10 = uVar21;
                      if ((int)uVar25 == 1) {
                        uVar25 = uVar12;
                        func_0x000107c4c930();
                        func_0x000107c61180();
                        if (uVar25 == 0) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0f0);
                          (*pcVar3)();
                        }
                        uVar23 = uVar25;
                        func_0x000107c4e088();
                        func_0x000107c61170(uVar25);
                        if (((int)uVar23 == 0x1a) ||
                           (uVar25 = uVar12, FUN_101a8f6d0(), (uVar25 & 1) != 0)) {
                          uVar10 = uVar12;
                          func_0x000107c4c930();
                          func_0x000107c61180();
                          func_0x000107c61170(uVar21);
                          bVar4 = false;
                          uStack_e8 = 2;
                        }
                      }
                      if (uVar7 >> 0x3e == 0) {
                        uVar21 = *(ulong *)(uVar18 + 0x10);
                      }
                      else {
                        uVar21 = uVar2;
                        func_0x000107c60480();
                      }
                      if (uVar21 == 0) {
                        func_0x000107c61170(uVar24);
                        func_0x000107c61170(uVar12);
                      }
                      else {
                        if ((long)uVar21 < 1) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a8e0a4);
                          (*pcVar3)();
                        }
                        uVar23 = 0;
                        uVar25 = 0;
                        do {
                          if ((uVar7 & 0xc000000000000001) == 0) {
                            uVar13 = *(ulong *)(uVar7 + uVar25 * 8 + 0x20);
                            func_0x000107c61174();
                          }
                          else {
                            uVar13 = uVar25;
                            func_0x000100fb10dc(uVar25,uVar7);
                          }
                          uVar11 = uVar13;
                          func_0x000107c4c9b4();
                          uVar14 = uVar24;
                          func_0x000107c4c9b4();
                          if (uVar11 == uVar14) {
                            func_0x000107c61170(uVar23);
                            uVar23 = uVar13;
                          }
                          else {
                            func_0x000107c61170(uVar13);
                          }
                          uVar25 = uVar25 + 1;
                        } while (uVar21 != uVar25);
                        if (uVar23 == 0) {
                          func_0x000107c61170(uVar24);
                          func_0x000107c61170(uVar12);
                        }
                        else if (bVar4) {
                          func_0x000107c61170(uVar24);
                          func_0x000107c61170(uVar23);
                          func_0x000107c61170(uVar12);
                        }
                        else if (uVar10 == 0) {
                          func_0x000107c61170(uVar24);
                          func_0x000107c61170(uVar23);
                          uVar10 = uVar12;
                        }
                        else {
                          func_0x000107c61174();
                          func_0x000107c61174();
                          puVar15 = puStack_f0;
                          func_0x000107c61558();
                          if (((ulong)puVar15 & 1) == 0) {
                            plVar1 = (long *)(puStack_f0 + 0x10);
                            puStack_f0 = (undefined *)0x0;
                            FUN_101a86a14(0,*plVar1 + 1,1);
                          }
                          uVar21 = *(ulong *)(puStack_f0 + 0x10);
                          if (*(ulong *)(puStack_f0 + 0x18) >> 1 <= uVar21) {
                            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f0 + 0x18));
                            FUN_101a86a14(puVar15,uVar21 + 1,1,puStack_f0);
                            puStack_f0 = puVar15;
                          }
                          *(ulong *)(puStack_f0 + 0x10) = uVar21 + 1;
                          *(ulong *)(puStack_f0 + uVar21 * 0x18 + 0x20) = uVar23;
                          *(undefined8 *)(puStack_f0 + uVar21 * 0x18 + 0x28) = uStack_e8;
                          *(ulong *)(puStack_f0 + uVar21 * 0x18 + 0x30) = uVar10;
                          func_0x000107c61170(uVar10);
                          func_0x000107c61170(uVar23);
                          func_0x000107c61170(uVar24);
                          uVar10 = uVar12;
                        }
                      }
                    }
                  }
                }
                func_0x000107c61170(uVar10);
              } while (uVar19 != uVar8);
            }
            func_0x000107c6142c(uVar7);
            uVar7 = uVar17;
            func_0x000101a8e0f4();
            func_0x000107c6142c(uVar17);
            puVar15 = puStack_f8;
            FUN_101a8e7bc(puStack_f8,3,&UNK_110438028,0x101a8f8e8,&UNK_110438040);
            puVar16 = puStack_f0;
            FUN_101a8e7bc(puStack_f0,6,&UNK_110437fd8,FUN_101a8f874,&UNK_110437ff0);
            FUN_101a8c8d0(puVar15);
            FUN_101a8c8d0(puVar16);
            if (uVar7 >> 0x3e == 0) {
              uVar17 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar17 = uVar7 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar7) {
                uVar17 = uVar7;
              }
              func_0x000107c60480();
            }
            if (uVar17 != 0) {
              uVar20 = 0;
              if ((param_3 >> 0x3c < 0xf) && (param_5 >> 0x3c < 0xf)) {
                FUN_101a87474();
                func_0x000107c613fc();
                *(undefined8 *)(uVar17 + 0x18) = 3;
                *(undefined8 *)(uVar17 + 0x10) = 1;
                func_0x000104015488(0);
                func_0x000107c610f8();
                func_0x000100de78a0(param_2,param_3);
                func_0x000100de78a0(param_4,param_5);
                func_0x000104012d04(param_2,param_3,param_4,param_5);
                *(undefined8 *)(uVar17 + 0x20) = param_2;
                uVar20 = uVar17;
              }
              func_0x0001040154a8(0);
              func_0x000107c610f8();
              func_0x000104012fbc(uVar7,uVar20);
              func_0x000107c6142c(puStack_f8);
              func_0x000107c6142c(puStack_f0);
              return uVar7;
            }
            func_0x000107c6142c(puStack_f8);
            func_0x000107c6142c(puStack_f0);
            uVar17 = uVar7;
          }
        }
        func_0x000107c6142c(uVar17);
      }
    }
  }
  return 0;
}



/* Entry: 101a8e7bc; end: 101a8ead7;  */

undefined *
FUN_101a8e7bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long extraout_x8;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 *puVar17;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar3 = 0;
  uVar13 = param_2;
  func_0x000107c5eec8();
  lStack_e8 = *(long *)(lVar3 + -8);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lStack_f0 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x70);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((lVar3 != 0) && (lVar16 = *(long *)(param_1 + 0x10), lVar16 != 0)) {
    func_0x000107c615f0(lVar3);
    puVar17 = (undefined8 *)(param_1 + 0x30);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar4 = puVar17[-2];
      uVar2 = puVar17[-1];
      uVar15 = *puVar17;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar11 = lStack_f0;
      uVar5 = uVar15;
      func_0x000107c5eec4(lStack_f0);
      func_0x000107c5eeac();
      (**(code **)(lStack_e8 + 8))(lVar11,lStack_e0);
      func_0x00010401523c(0);
      func_0x000107c610f8();
      uVar6 = uVar4;
      func_0x000107c61174();
      uVar7 = uVar15;
      func_0x000107c61174(uVar15);
      func_0x000107c61434(uVar13);
      uVar8 = uVar5;
      func_0x000104011c9c(uVar5,uVar13,param_2,uVar2,uVar4,uVar15);
      func_0x000107c61180();
      puVar10 = puStack_a8;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_a8 < 0)) ||
         (puVar10 = puStack_a8, ((ulong)puStack_a8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_a8 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puStack_a8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_a8) {
            puVar9 = puStack_a8;
          }
          func_0x000107c60480(puVar9);
        }
        puVar10 = (undefined *)0x0;
        func_0x000101a8689c(0,puVar9 + 1,1,puStack_a8);
      }
      uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar14 + 0x10);
      puStack_a8 = puVar10;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
        puStack_a8 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
        func_0x000101a8689c(puStack_a8,uVar1 + 1,1,puVar10);
        uVar14 = (ulong)puStack_a8 & 0xffffffffffffff8;
      }
      puVar17 = puVar17 + 3;
      *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar14 + uVar1 * 8 + 0x20) = uVar8;
      puVar10 = PTR_PTR_1126b25b8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar5,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c46814();
      func_0x000107c61170(uVar5);
      uVar13 = 0x28;
      lVar11 = param_3;
      func_0x000107c613fc(param_3,0x28,7);
      *(long *)(lVar11 + 0x10) = unaff_x20;
      *(undefined **)(lVar11 + 0x18) = puVar10;
      *(undefined8 *)(lVar11 + 0x20) = uVar6;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      ppuVar12 = &puStack_a0;
      uStack_88 = param_5;
      uStack_80 = param_4;
      lStack_78 = lVar11;
      func_0x000107c60bc4(ppuVar12);
      lVar11 = lStack_78;
      func_0x000107c61174(uVar6);
      func_0x000107c6157c(unaff_x20);
      func_0x000107c61174(puVar10);
      func_0x000107c61574(lVar11);
      func_0x000107c4e524(lVar3);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar10);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    func_0x000107c615e8(lVar3);
  }
  return puStack_a8;
}



/* Entry: 101a8ead8; end: 101a8ebe7;  */

void FUN_101a8ead8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(&lStack_50);
  if (lStack_50 != 0) {
    func_0x000101a87490();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    uVar1 = 0;
    FUN_101a8f834(0,0x112d512f8,&PTR_PTR_1126b25d8);
    func_0x000107c61174(param_3);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c3e414(lStack_50);
    func_0x000107c615e8(lStack_50);
    func_0x000107c61170(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001000834e4(lStack_50 + 0x10);
  func_0x0001000834e4(lStack_50 + 0x38);
  func_0x000107c615e8(*(undefined8 *)(lStack_50 + 0x60));
  func_0x000107c61574(*(undefined8 *)(lStack_50 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(lStack_50 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(lStack_50,0x78,7);
  return;
}



/* Entry: 101a8ebe8; end: 101a8ec2b;  */

void FUN_101a8ebe8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a8ec2c; end: 101a8ed8f;  */

bool FUN_101a8ec2c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_58;
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8ed90);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c3d988();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_58 = (undefined *)0x0;
    uVar3 = 0;
    FUN_101a8f834(0,0x112d530c8,&PTR_PTR_1126affc8);
    func_0x000107c5fc50(lVar2,&puStack_58,uVar3);
    func_0x000107c61170(lVar2);
    if (puStack_58 != (undefined *)0x0) {
      puVar7 = puStack_58;
    }
  }
  puVar9 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar8 = *(undefined **)(puVar9 + 0x10);
  }
  else {
    puVar8 = puVar9;
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar8 = puVar7;
    }
    func_0x000107c60480();
  }
  puVar4 = (undefined *)0x0;
  do {
    puVar6 = puVar4;
    if (puVar8 == puVar6) break;
    if (((ulong)puVar7 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar9 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8ed78);
        (*pcVar1)();
      }
      puVar4 = *(undefined **)(puVar7 + (long)puVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar4 = puVar6;
      func_0x00010121c37c(puVar6,puVar7);
    }
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8ed44);
      (*pcVar1)();
    }
    puVar5 = puVar4;
    func_0x000107c4e088();
    func_0x000107c61170(puVar4);
    puVar4 = puVar6 + 1;
  } while ((int)puVar5 != 2);
  func_0x000107c6142c(puVar7);
  return puVar8 != puVar6;
}



/* Entry: 101a8ed90; end: 101a8f6cf;  */

undefined8 FUN_101a8ed90(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [32];
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar19 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar13 = (long)&puStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar16 - extraout_x12_00;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6c4);
    (*pcVar1)();
  }
  lVar3 = param_1;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6c8);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c500bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6cc);
    (*pcVar1)();
  }
  lVar3 = lVar4;
  func_0x000107c500c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6d0);
    (*pcVar1)();
  }
  lStack_130 = lVar16;
  lStack_100 = lVar13;
  func_0x000107c600f4(lVar17);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_88,lVar2,lVar4);
  if (lStack_70 == 0) {
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      func_0x000100102924(auStack_88,auStack_a8);
      func_0x000100102924(auStack_a8,auStack_d0);
      uVar7 = 0;
      FUN_101a8f834(0,0x112df41a0,&PTR_PTR_1126bceb0);
      plVar8 = &lStack_b0;
      func_0x000107c6147c(plVar8,auStack_d0,PTR___sypN_11034f1a8 + 8,uVar7,6);
      lVar13 = lStack_b0;
      puVar6 = puStack_e0;
      if ((((ulong)plVar8 & 1) != 0) && (lStack_b0 != 0)) {
        puVar5 = puStack_e0;
        func_0x000107c61550();
        if (((int)puVar5 == 0) || (((long)puVar6 < 0 || (((ulong)puVar6 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
            puVar14 = puVar6;
          }
          else {
            puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar5 = puVar6;
            }
            func_0x000107c60480(puVar5);
            puVar14 = puStack_e0;
          }
          puVar6 = (undefined *)0x0;
          FUN_101a86878(0,puVar5 + 1,1,puVar14);
        }
        uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar12 + 0x10);
        puStack_e0 = puVar6;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar18) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_101a86878(puVar5,uVar18 + 1,1,puVar6);
          uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
          puStack_e0 = puVar5;
        }
        *(ulong *)(uVar12 + 0x10) = uVar18 + 1;
        *(long *)(uVar12 + uVar18 * 8 + 0x20) = lVar13;
      }
      func_0x000107c601c0(auStack_88,lVar2,lVar4);
    } while (lStack_70 != 0);
  }
  func_0x000107c61170(lVar3);
  pcStack_f8 = *(code **)(lVar19 + 8);
  (*pcStack_f8)(lVar17,lVar2);
  if ((ulong)puStack_e0 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puStack_e0 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_e0) {
      puVar6 = puStack_e0;
    }
    func_0x000107c60480();
  }
  if (puVar6 != (undefined *)0x0) {
    uStack_150 = (ulong)puStack_e0 & 0xc000000000000001;
    uStack_158 = (ulong)puStack_e0 & 0xffffffffffffff8;
    puStack_160 = puStack_e0 + 0x20;
    puVar5 = (undefined *)0x0;
    puVar14 = PTR___sypN_11034f1a8;
    puStack_148 = puVar6;
    lStack_128 = lVar2;
    do {
      lVar13 = lStack_130;
      if (uStack_150 == 0) {
        if (*(undefined **)(uStack_158 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f69c);
          (*pcVar1)();
        }
        puVar6 = *(undefined **)(puStack_160 + (long)puVar5 * 8);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar5;
        func_0x000101a91ca0(puVar5,puStack_e0);
      }
      if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6a0);
        (*pcVar1)();
      }
      puStack_138 = puVar6;
      func_0x000107c500b4();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6c0);
        (*pcVar1)();
      }
      func_0x000107c600f4(lVar13);
      func_0x000107c601c0(auStack_88,lVar2,lVar4);
      if (lStack_70 == 0) {
        puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          func_0x000100102924(auStack_88,auStack_a8);
          func_0x000100102924(auStack_a8,auStack_d0);
          uVar7 = 0;
          FUN_101a8f834(0,0x112df41b0,&PTR_PTR_1126bceb8);
          plVar8 = &lStack_b0;
          func_0x000107c6147c(plVar8,auStack_d0,puVar14 + 8,uVar7,6);
          lVar16 = lStack_b0;
          puVar10 = puStack_d8;
          if ((((ulong)plVar8 & 1) != 0) && (lStack_b0 != 0)) {
            puVar9 = puStack_d8;
            func_0x000107c61550();
            if (((int)puVar9 == 0) || (((long)puVar10 < 0 || (((ulong)puVar10 >> 0x3e & 1) != 0))))
            {
              if ((ulong)puVar10 >> 0x3e == 0) {
                puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
                puVar15 = puVar10;
              }
              else {
                puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  puVar9 = puVar10;
                }
                func_0x000107c60480(puVar9);
                puVar15 = puStack_d8;
              }
              puVar10 = (undefined *)0x0;
              func_0x000101a866f4(0,puVar9 + 1,1,puVar15);
            }
            uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
            uVar18 = *(ulong *)(uVar12 + 0x10);
            puStack_d8 = puVar10;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar18) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
              func_0x000101a866f4(puVar9,uVar18 + 1,1,puVar10);
              uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
              puStack_d8 = puVar9;
            }
            *(ulong *)(uVar12 + 0x10) = uVar18 + 1;
            *(long *)(uVar12 + uVar18 * 8 + 0x20) = lVar16;
          }
          func_0x000107c601c0(auStack_88,lVar2,lVar4);
        } while (lStack_70 != 0);
      }
      func_0x000107c61170(puVar6);
      (*pcStack_f8)(lVar13,lVar2);
      puStack_140 = puVar5 + 1;
      if ((ulong)puStack_d8 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_d8) {
          puVar6 = puStack_d8;
        }
        func_0x000107c60480();
      }
      if (puVar6 != (undefined *)0x0) {
        uStack_108 = (ulong)puStack_d8 & 0xc000000000000001;
        uStack_110 = (ulong)puStack_d8 & 0xffffffffffffff8;
        puStack_118 = puStack_d8 + 0x20;
        puVar5 = (undefined *)0x0;
        puStack_120 = puVar6;
        do {
          lVar13 = lStack_100;
          if (uStack_108 == 0) {
            if (*(undefined **)(uStack_110 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f698);
              (*pcVar1)();
            }
            puVar6 = *(undefined **)(puStack_118 + (long)puVar5 * 8);
            func_0x000107c61174();
          }
          else {
            puVar6 = puVar5;
            FUN_101a91c8c();
            lVar13 = lStack_100;
          }
          if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f694);
            (*pcVar1)();
          }
          puVar10 = puVar6;
          func_0x000107c500b8();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f6bc);
            (*pcVar1)();
          }
          puStack_f0 = puVar5 + 1;
          puStack_e8 = puVar6;
          func_0x000107c600f4(lVar13);
          func_0x000107c601c0(auStack_88,lVar2,lVar4);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          while (lStack_70 != 0) {
            func_0x000100102924(auStack_88,auStack_a8);
            func_0x000100102924(auStack_a8,auStack_d0);
            uVar7 = 0;
            FUN_101a8f834(0,0x112df41c0,&PTR_PTR_1126bcd28);
            plVar8 = &lStack_b0;
            func_0x000107c6147c(plVar8,auStack_d0,puVar14 + 8,uVar7,6);
            lVar16 = lStack_b0;
            if ((((ulong)plVar8 & 1) != 0) && (lStack_b0 != 0)) {
              puVar5 = puVar6;
              func_0x000107c61550();
              if (((int)puVar5 == 0) ||
                 (((long)puVar6 < 0 || (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar6 >> 0x3e == 0) {
                  puVar9 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar9 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar6) {
                    puVar9 = puVar6;
                  }
                  func_0x000107c60480(puVar9);
                }
                puVar5 = (undefined *)0x0;
                func_0x000101a866d0(0,puVar9 + 1,1,puVar6);
              }
              uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
              uVar18 = *(ulong *)(uVar12 + 0x10);
              puVar6 = puVar5;
              if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar18) {
                puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
                func_0x000101a866d0(puVar6,uVar18 + 1,1,puVar5);
                uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar12 + 0x10) = uVar18 + 1;
              *(long *)(uVar12 + uVar18 * 8 + 0x20) = lVar16;
            }
            func_0x000107c601c0(auStack_88,lVar2,lVar4);
          }
          func_0x000107c61170(puVar10);
          (*pcStack_f8)(lVar13,lVar2);
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar5 = puVar6;
            }
            func_0x000107c60480();
          }
          if (puVar5 != (undefined *)0x0) {
            lVar2 = 4;
            do {
              uVar18 = lVar2 - 4;
              if (((ulong)puVar6 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f690);
                  (*pcVar1)();
                }
                uVar12 = *(ulong *)(puVar6 + lVar2 * 8);
                func_0x000107c61174();
              }
              else {
                uVar12 = uVar18;
                FUN_101a91abc(uVar18,puVar6);
              }
              puVar14 = (undefined *)(lVar2 - 3);
              if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f68c);
                (*pcVar1)();
              }
              uVar18 = uVar12;
              func_0x000107c42444();
              if ((int)uVar18 == 1) {
                uVar18 = uVar12;
                func_0x000107c40dc8();
                func_0x000107c61180();
                if (uVar18 == 0) goto LAB_101a8f490;
                uVar11 = uVar18;
                func_0x000107c4a764();
                func_0x000107c61180();
                func_0x000107c61170(uVar18);
                if (uVar11 == 0) goto LAB_101a8f490;
                uVar18 = uVar11;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar11);
                if (uVar18 == 0) goto LAB_101a8f490;
                uVar11 = uVar18;
                func_0x000107c42930();
                func_0x000107c61170(uVar18);
                func_0x000107c61170(uVar12);
                if (((uint)uVar11 | 2) == 0x1b) {
                  func_0x000107c61170(puStack_138);
                  func_0x000107c61170(puStack_e8);
                  func_0x000107c6142c(puStack_e0);
                  func_0x000107c6142c(puStack_d8);
                  uVar7 = 1;
                  goto LAB_101a8f65c;
                }
              }
              else {
LAB_101a8f490:
                func_0x000107c61170(uVar12);
              }
              lVar2 = lVar2 + 1;
            } while (puVar14 != puVar5);
          }
          func_0x000107c61170(puStack_e8);
          func_0x000107c6142c(puVar6);
          puVar5 = puStack_f0;
          lVar2 = lStack_128;
          puVar14 = PTR___sypN_11034f1a8;
        } while (puStack_f0 != puStack_120);
      }
      puVar6 = puStack_d8;
      func_0x000107c61170(puStack_138);
      func_0x000107c6142c(puVar6);
      puVar5 = puStack_140;
    } while (puStack_140 != puStack_148);
  }
  uVar7 = 0;
  puVar6 = puStack_e0;
LAB_101a8f65c:
  func_0x000107c6142c(puVar6);
  return uVar7;
}



/* Entry: 101a8f6d0; end: 101a8f833;  */

bool FUN_101a8f6d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_58;
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f834);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c3d988();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_58 = (undefined *)0x0;
    uVar3 = 0;
    FUN_101a8f834(0,0x112d530c8,&PTR_PTR_1126affc8);
    func_0x000107c5fc50(lVar2,&puStack_58,uVar3);
    func_0x000107c61170(lVar2);
    if (puStack_58 != (undefined *)0x0) {
      puVar7 = puStack_58;
    }
  }
  puVar9 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar8 = *(undefined **)(puVar9 + 0x10);
  }
  else {
    puVar8 = puVar9;
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar8 = puVar7;
    }
    func_0x000107c60480();
  }
  puVar4 = (undefined *)0x0;
  do {
    puVar6 = puVar4;
    if (puVar8 == puVar6) break;
    if (((ulong)puVar7 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar9 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f81c);
        (*pcVar1)();
      }
      puVar4 = *(undefined **)(puVar7 + (long)puVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar4 = puVar6;
      func_0x00010121c37c(puVar6,puVar7);
    }
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a8f7e8);
      (*pcVar1)();
    }
    puVar5 = puVar4;
    func_0x000107c4e088();
    func_0x000107c61170(puVar4);
    puVar4 = puVar6 + 1;
  } while ((int)puVar5 != 1);
  func_0x000107c6142c(puVar7);
  return puVar8 != puVar6;
}



/* Entry: 101a8f834; end: 101a8f873;  */

void FUN_101a8f834(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a8f874; end: 101a8f88f;  */

void FUN_101a8f874(void)

{
  long unaff_x20;
  
  FUN_101a8ead8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101a8f890; end: 101a8f8ab;  */

void FUN_101a8f890(long param_1,long param_2)

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



/* Entry: 101a8f8ac; end: 101a8f8df;  */

void FUN_101a8f8ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a8f8e0; end: 101a8f8eb;  */

void FUN_101a8f8e0(long param_1,long param_2)

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



/* Entry: 101a8f8ec; end: 101a8fa27;  */

undefined * FUN_101a8f8ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
  puVar4 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61170(puVar1);
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010efce820);
    lVar3 = param_1;
    func_0x000107c40a28(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126a8770;
    func_0x000107c610f8(PTR_PTR_1126a8770);
    func_0x000107c49088();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar3);
  }
  return puVar4;
}



/* Entry: 101a8fa28; end: 101a8fa47;  */

void FUN_101a8fa28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8fa48,0,0);
  return;
}



/* Entry: 101a8fa48; end: 101a8fd6b;  */

void FUN_101a8fa48(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar6 = *(ulong *)(unaff_x22 + 0xb0);
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  lVar3 = lVar7;
  func_0x000101a90dc4(lVar7,uVar6,*(undefined8 *)(unaff_x22 + 0xb8),
                      *(undefined8 *)(unaff_x22 + 0xc0));
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = *(ulong *)(lVar7 + 0x10);
  if (uVar8 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    uVar6 = uVar8;
    func_0x000101a89898(0,uVar8,0);
    puVar9 = (undefined8 *)(lVar7 + 0x30);
    uVar10 = *(ulong *)(puVar5 + 0x10);
    do {
      uVar11 = *puVar9;
      uVar1 = uVar10 + 1;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar10) {
        uVar6 = uVar1;
        func_0x000101a89898(1 < *(ulong *)(puVar5 + 0x18),uVar1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1;
      *(undefined8 *)(puVar5 + uVar10 * 8 + 0x20) = uVar11;
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 3;
      uVar10 = uVar1;
    } while (uVar8 != 0);
  }
  puVar4 = puVar5;
  FUN_101a92984();
  func_0x000107c6142c(puVar5);
  *(ulong *)(unaff_x22 + 0xd8) = uVar6;
  puVar5 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xe0) = puVar5;
  if (lRam0000000112df46c8 != -1) {
    func_0x000107c61568(0x112df46c8,0x101a8be90);
  }
  lVar12 = *(long *)(unaff_x22 + 200);
  uVar11 = uRam0000000113803a80;
  func_0x000107c5f9dc(uRam0000000113803a80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c3d704(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(lVar12 + 0x28);
  lVar7 = *(long *)(lVar12 + 0x30);
  func_0x0001000a8868(lVar12 + 0x10,uVar11);
  (**(code **)(lVar7 + 0x38))(puVar4,uVar6,uVar11,lVar7);
  lVar7 = *(long *)(lVar12 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xe8) = lVar7;
  if (lVar7 == 0) {
    uVar11 = *(undefined8 *)(lVar12 + 0x28);
    lVar7 = *(long *)(lVar12 + 0x30);
    func_0x0001000a8868(lVar12 + 0x10,uVar11);
    (**(code **)(lVar7 + 0x48))(puVar4,uVar6,uVar11,lVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a8fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a8fd6c;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  FUN_101a838ec(lVar12 + 0x10,unaff_x22 + 0x80);
  puVar5 = &UNK_1104380e0;
  func_0x000107c613fc(&UNK_1104380e0,0x50,7);
  func_0x000100682204(unaff_x22 + 0x80,puVar5 + 0x10);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined **)(puVar5 + 0x38) = puVar4;
  *(ulong *)(puVar5 + 0x40) = uVar6;
  puVar9 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar9 = puVar2;
  *(long *)(puVar5 + 0x48) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101a92bb8;
  *(undefined **)(unaff_x22 + 0x78) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a8fe04;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104380f8;
  func_0x000107c60bc4(puVar9);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61434(uVar6);
  func_0x000107c61574(uVar11);
  func_0x000107c443a0(lVar7);
  func_0x000107c60bd0(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a8fd6c; end: 101a8fdab;  */

void FUN_101a8fd6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8fdac,0,0);
  return;
}



/* Entry: 101a8fdac; end: 101a8fe03;  */

void FUN_101a8fdac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a8fe00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 101a8fe04; end: 101a8fe7b;  */

/* WARNING: Possible PIC construction at 0x000101a8fe60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a8fe64) */

void FUN_101a8fe04(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101a8fe7c; end: 101a8fe9b;  */

void FUN_101a8fe7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8fe9c,0,0);
  return;
}



/* Entry: 101a8fe9c; end: 101a9011f;  */

void FUN_101a8fe9c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_101a90244(uVar9,uVar7,*(undefined8 *)(unaff_x22 + 0xb8),uVar2,*(undefined8 *)(unaff_x22 + 200)
               );
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  FUN_101a92984();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar7;
  puVar3 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xe8) = puVar3;
  if (lRam0000000112df46c8 != -1) {
    func_0x000107c61568(0x112df46c8,0x101a8be90);
  }
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  uVar4 = uRam0000000113803a80;
  func_0x000107c5f9dc(uRam0000000113803a80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c3d704(puVar3);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  lVar5 = *(long *)(lVar10 + 0x30);
  func_0x0001000a8868(lVar10 + 0x10,uVar4);
  (**(code **)(lVar5 + 0x38))(uVar2,uVar7,uVar4,lVar5);
  lVar5 = *(long *)(lVar10 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xf0) = lVar5;
  if (lVar5 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101a90120;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar6,0);
    FUN_101a838ec(lVar10 + 0x10,unaff_x22 + 0x80);
    puVar3 = &UNK_110438090;
    func_0x000107c613fc(&UNK_110438090,0x50,7);
    func_0x000100682204(unaff_x22 + 0x80,puVar3 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar3 + 0x38) = uVar2;
    *(undefined8 *)(puVar3 + 0x40) = uVar7;
    puVar8 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar8 = puVar1;
    *(long *)(puVar3 + 0x48) = lVar6;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101a92b08;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_101a8fe04;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104380a8;
    func_0x000107c60bc4(puVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61434(uVar7);
    func_0x000107c61574(uVar9);
    func_0x000107c443a0(lVar5);
    func_0x000107c60bd0(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  lVar5 = *(long *)(lVar10 + 0x30);
  func_0x0001000a8868(lVar10 + 0x10,uVar4);
  (**(code **)(lVar5 + 0x48))(uVar2,uVar7,uVar4,lVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101a90104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101a90120; end: 101a9015f;  */

void FUN_101a90120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a90160,0,0);
  return;
}



/* Entry: 101a90160; end: 101a901b7;  */

void FUN_101a90160(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a901b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 101a901b8; end: 101a90243;  */

void FUN_101a901b8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar2);
  lVar1 = 0x40;
  if (param_2 != 0) {
    lVar1 = 0x48;
  }
  (**(code **)(lVar3 + lVar1))(param_4,param_5,uVar2,lVar3);
  *(bool *)*(undefined8 *)(*(long *)(param_6 + 0x40) + 0x28) = param_2 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_6);
  return;
}



/* Entry: 101a90244; end: 101a916ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a90244(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 unaff_x20;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puStack_98;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_1126bd128;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126bd120;
  func_0x000107c610f8(PTR_PTR_1126bd120);
  func_0x000107c453e4();
  func_0x000107c563e8(puVar3);
  func_0x000107c61170(puVar5);
  puVar5 = puVar3;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90a80);
    (*pcVar2)();
  }
  func_0x000107c56498();
  func_0x000107c61170(puVar5);
  uVar18 = 0;
  uVar20 = *(ulong *)(param_1 + 0x10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101a90304:
  uVar6 = uVar18;
  if (uVar18 <= uVar20) {
    uVar6 = uVar20;
  }
  puVar1 = (ulong *)(param_1 + 0x28 + uVar18 * 0x10);
  while (puVar13 = puVar1, uVar20 != uVar18) {
    uVar18 = uVar18 + 1;
    if (uVar6 + 1 == uVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90768);
      (*pcVar2)();
    }
    uVar15 = *puVar13;
    puVar1 = puVar13 + 2;
    if ((uVar15 & 0x3000000000000000) == 0x1000000000000000) goto code_r0x000101a90340;
  }
  if (param_2 >> 0x3e == 0) {
    uVar18 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar18 = param_2;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101a89864(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90a7c);
      (*pcVar2)();
    }
    uVar20 = 0;
    do {
      puVar5 = puStack_68;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) <= (long)uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90774);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(param_2 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar20;
        func_0x000101a91ff4();
      }
      uStack_78 = uVar6;
      FUN_101a91700(&uStack_70,&uStack_78,unaff_x20);
      func_0x000107c61170(uVar6);
      uVar8 = uStack_70;
      uVar6 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar6) {
        FUN_101a89864(1 < *(ulong *)(puVar5 + 0x18),uVar6 + 1,1);
      }
      uVar20 = uVar20 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puStack_68 + uVar6 * 8 + 0x20) = uVar8;
      puVar5 = puStack_68;
    } while (uVar18 != uVar20);
  }
  uVar18 = param_3 & 0xffffffffffffff8;
  if (param_3 >> 0x3e == 0) {
    uVar20 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar20 = uVar18;
    if (0x7fffffffffffffff < param_3) {
      uVar20 = param_3;
    }
    func_0x000107c60480();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90770);
            (*pcVar2)();
          }
          uVar15 = *(ulong *)(param_3 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
          puVar7 = PTR_PTR_1126bd120;
        }
        else {
          uVar15 = uVar6;
          func_0x000101a91e58(uVar6,param_3);
          puVar7 = PTR_PTR_1126bd120;
        }
        PTR_PTR_1126bd120 = puVar7;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a9076c);
          (*pcVar2)();
        }
        uVar16 = uVar6 + 1;
        puVar21 = *(undefined **)(uVar15 + _DAT_113046d40);
        if (puVar21 == (undefined *)0x0) break;
        if ((undefined *)0x1 < puVar21 + -1) {
          puStack_68 = puVar21;
          func_0x000107c60614(&UNK_110735428,&puStack_68,&UNK_110735428,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a90aa4);
          (*pcVar2)();
        }
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar8 = *(undefined8 *)(uVar15 + _DAT_113046d28);
        func_0x000107c5ee20(uVar8,((undefined8 *)(uVar15 + _DAT_113046d28))[1]);
        func_0x000107c53844(puVar7);
        func_0x000107c61170(uVar8);
        puVar21 = PTR_PTR_1126a8740;
        func_0x000107c610f8(PTR_PTR_1126a8740);
        func_0x000107c453e4();
        uVar8 = *(undefined8 *)(uVar15 + _DAT_113046d30);
        func_0x000107c5ee20(uVar8,((undefined8 *)(uVar15 + _DAT_113046d30))[1]);
        func_0x000107c53ee4(puVar21);
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(uVar15 + _DAT_113046d38);
        func_0x000107c5ee20(uVar8,((undefined8 *)(uVar15 + _DAT_113046d38))[1]);
        func_0x000107c53ee0(puVar21);
        func_0x000107c61170(uVar8);
        func_0x000107c52578(puVar7);
        func_0x000107c56498(puVar7);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(uVar15);
        puVar21 = puVar4;
        func_0x000107c61550();
        if (((((ulong)puVar21 & 1) == 0) || ((long)puVar4 < 0)) ||
           (((ulong)puVar4 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar4 >> 0x3e == 0) {
            puVar21 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar21 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar4) {
              puVar21 = puVar4;
            }
            func_0x000107c60480(puVar21);
          }
          puVar9 = (undefined *)0x0;
          func_0x000101a86c9c(0,puVar21 + 1,1,puVar4);
          puVar4 = puVar9;
        }
        uVar15 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar15 + 0x10);
        puVar21 = puVar4;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar6) {
          puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x000101a86c9c(puVar21,uVar6 + 1,1,puVar4);
          uVar15 = (ulong)puVar21 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar6 + 1;
        *(undefined **)(uVar15 + uVar6 * 8 + 0x20) = puVar7;
        uVar6 = uVar16;
        puVar4 = puVar21;
        if (uVar16 == uVar20) goto LAB_101a907ac;
      }
      func_0x000107c61170();
      uVar6 = uVar6 + 1;
    } while (uVar16 != uVar20);
  }
LAB_101a907ac:
  lVar14 = *(long *)(param_4 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101a898b4(0,lVar14,0);
    plVar17 = (long *)(param_4 + 0x20);
    do {
      if (*plVar17 - 1U < 6) {
        uVar19 = *(undefined4 *)(&UNK_10d9c2ee4 + (*plVar17 - 1U) * 4);
      }
      else {
        uVar19 = 0;
      }
      uVar18 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar18) {
        func_0x000101a898b4(1 < *(ulong *)(puStack_68 + 0x18),uVar18 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar18 + 1;
      *(undefined4 *)(puStack_68 + uVar18 * 4 + 0x20) = uVar19;
      lVar14 = lVar14 + -1;
      puVar7 = puStack_68;
      plVar17 = plVar17 + 1;
    } while (lVar14 != 0);
  }
  func_0x000107c5a298(puVar3);
  puVar9 = PTR_PTR_1126a8768;
  func_0x000107c610f8(PTR_PTR_1126a8768);
  func_0x000107c453e4();
  puVar10 = puStack_98;
  func_0x000101a90aa4(puStack_98,&PTR__OBJC_CLASS___NSData_1126ae778,0x112d4e4a8);
  func_0x000107c6142c(puStack_98);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar21 = PTR___sypN_11034f1a8;
  puVar12 = puVar10;
  func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar10);
  func_0x000107c45788(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c55498(puVar9);
  func_0x000107c61170(puVar11);
  puVar10 = puVar5;
  func_0x000101a90aa4(puVar5,&PTR_PTR_1126bd138,0x112df4150);
  func_0x000107c6142c(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar11 = puVar10;
  func_0x000107c5fc48(puVar10,puVar21 + 8);
  func_0x000107c6142c(puVar10);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c54048(puVar9);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000101a90aa4(puVar4,&PTR_PTR_1126bd120,0x112df4138);
  func_0x000107c6142c(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar10 = puVar5;
  func_0x000107c5fc48(puVar5,puVar21 + 8);
  func_0x000107c6142c(puVar5);
  func_0x000107c45788(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c56478(puVar9);
  func_0x000107c61170(puVar4);
  puVar5 = PTR_PTR_1126ae740;
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  for (lVar14 = *(long *)(puVar7 + 0x10); lVar14 != 0; lVar14 = lVar14 + -1) {
    func_0x000107c3d810(puVar5);
  }
  func_0x000107c6142c(puVar7);
  func_0x000107c59590(puVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c59e04(puVar3);
  func_0x000107c53ab8(puVar3);
  func_0x000107c61170(puVar9);
  return puVar3;
code_r0x000101a90340:
  uVar16 = puVar13[-1];
  func_0x00010006c00c(uVar16,uVar15 & 0xcfffffffffffffff);
  uVar6 = uVar16;
  func_0x000107c5ee20(uVar16,uVar15 & 0xcfffffffffffffff);
  func_0x000101a84f28(uVar16,uVar15);
  puVar5 = puStack_98;
  func_0x000107c61550();
  if (((((ulong)puVar5 & 1) == 0) || ((long)puStack_98 < 0)) ||
     (puVar5 = puStack_98, ((ulong)puStack_98 >> 0x3e & 1) != 0)) {
    if ((ulong)puStack_98 >> 0x3e == 0) {
      puVar4 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_98) {
        puVar4 = puStack_98;
      }
      func_0x000107c60480(puVar4);
    }
    puVar5 = (undefined *)0x0;
    func_0x000101a86ce4(0,puVar4 + 1,1,puStack_98);
  }
  uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
  uVar15 = *(ulong *)(uVar16 + 0x10);
  puStack_98 = puVar5;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar15) {
    puStack_98 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
    func_0x000101a86ce4(puStack_98,uVar15 + 1,1,puVar5);
    uVar16 = (ulong)puStack_98 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar16 + 0x10) = uVar15 + 1;
  *(ulong *)(uVar16 + uVar15 * 8 + 0x20) = uVar6;
  goto LAB_101a90304;
}



/* Entry: 101a91700; end: 101a91953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a91700(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *param_2;
  puVar6 = PTR_PTR_1126bd138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = (undefined8 *)(lVar10 + _DAT_113046d20);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar11 = puVar1[2];
  cVar4 = *(char *)(puVar1 + 3);
  if (cVar4 == '\x01') {
    puVar8 = PTR_PTR_1126a8750;
    func_0x000107c610f8(PTR_PTR_1126a8750);
    uVar9 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c453e4(puVar8);
    func_0x000107c53318(puVar6);
    func_0x000107c61170(puVar8);
    puVar8 = puVar6;
    func_0x000107c3f808();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a91948);
      (*pcVar5)();
    }
    func_0x000107c44fc8(uVar9);
    func_0x000107c61180();
    uVar7 = uVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar9);
    uVar9 = uVar7;
    func_0x000107c5ee20(uVar7,param_3);
    func_0x00010006c090(uVar7,param_3);
    func_0x000107c53964(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    puVar8 = puVar6;
    func_0x000107c3f808();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a91950);
      (*pcVar5)();
    }
    func_0x000107c5663c();
    func_0x000107c61170(puVar8);
    FUN_101a9295c(uVar2,uVar3,uVar11,1);
  }
  else {
    puVar8 = PTR_PTR_1126bd140;
    func_0x000107c610f8(PTR_PTR_1126bd140);
    func_0x000107c61434(uVar3);
    func_0x000107c453e4(puVar8);
    func_0x000107c5992c(puVar6);
    func_0x000107c61170(puVar8);
    puVar8 = puVar6;
    func_0x000107c5bfa4();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a9194c);
      (*pcVar5)();
    }
    uVar9 = uVar2;
    func_0x000107c5fadc(uVar2,uVar3);
    FUN_101a9295c(uVar2,uVar3,uVar11,cVar4);
    func_0x000107c57b38(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    puVar8 = puVar6;
    func_0x000107c5bfa4();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a91954);
      (*pcVar5)();
    }
    func_0x000101a92974(uVar11);
    func_0x000107c599b4(puVar8);
    func_0x000107c61170(puVar8);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 101a91954; end: 101a9197f;  */

void FUN_101a91954(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a91980; end: 101a919ff;  */

void FUN_101a91980(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a91a00;
  plVar1[0x19] = param_5;
  plVar1[0x1a] = lVar2;
  plVar1[0x17] = param_3;
  plVar1[0x18] = param_4;
  plVar1[0x15] = param_1;
  plVar1[0x16] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8fe9c,0,0);
  return;
}



/* Entry: 101a91a00; end: 101a91a43;  */

void FUN_101a91a00(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a91a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101a91a44; end: 101a91abb;  */

void FUN_101a91a44(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a92bbc;
  plVar1[0x18] = param_4;
  plVar1[0x19] = lVar2;
  plVar1[0x16] = param_2;
  plVar1[0x17] = param_3;
  plVar1[0x15] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a8fa48,0,0);
  return;
}


