/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101da6a4c; end: 101da6af7;  */

void FUN_101da6a4c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101da6af8);
  (*pcVar1)();
}



/* Entry: 101da6af8; end: 101da6b57;  */

void FUN_101da6af8(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101da6b58;
  plVar1[0x18] = param_2;
  plVar1[0x19] = lVar2;
  plVar1[0x17] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6360,0,0);
  return;
}



/* Entry: 101da6b58; end: 101da6b93;  */

void FUN_101da6b58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101da6b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101da6b94; end: 101da6bab;  */

void FUN_101da6b94(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6bac,0,0);
  return;
}



/* Entry: 101da6bac; end: 101da6c73;  */

void FUN_101da6bac(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101da6bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101da6c74;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1104830f8;
  func_0x000107c613fc(&UNK_1104830f8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101da6ebc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101da6c74; end: 101da6cf3;  */

void FUN_101da6c74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101da6eb8,0,0);
  return;
}



/* Entry: 101da6cf4; end: 101da6d0b;  */

void FUN_101da6cf4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6d0c,0,0);
  return;
}



/* Entry: 101da6d0c; end: 101da6dd3;  */

void FUN_101da6d0c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101da6d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101da6dd4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110483120;
  func_0x000107c613fc(&UNK_110483120,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101da6e50,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101da6dd4; end: 101da6e13;  */

void FUN_101da6dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6e14,0,0);
  return;
}



/* Entry: 101da6e14; end: 101da6e53;  */

void FUN_101da6e14(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101da6e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101da6e54; end: 101da6e9f;  */

void FUN_101da6e54(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101da6ea0(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101da6ea0; end: 101da6ebf;  */

void FUN_101da6ea0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101da6ec0; end: 101da701f;  */

long FUN_101da6ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_88 = param_9;
  lVar1 = 0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c613fc();
  (**(code **)(lVar4 + 0x68))
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f00f6b0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined2 *)(unaff_x20 + 0x60) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_88;
  *(undefined **)(unaff_x20 + 0x58) = puVar2;
  return unaff_x20;
}



/* Entry: 101da7020; end: 101da710f;  */

uint FUN_101da7020(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x60);
  if (*(byte *)(unaff_x20 + 0x60) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f010060);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x60) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 101da7110; end: 101da7287;  */

void FUN_101da7110(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101da7288; end: 101da7bfb;  */

/* WARNING: Removing unreachable block (ram,0x000101da768c) */

void FUN_101da7288(double param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined1 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(unaff_x22 + 0x70);
  puVar12 = *(undefined1 **)(unaff_x22 + 0x70);
  *(undefined1 **)(unaff_x22 + 0x100) = puVar12;
  if (puVar12 == (undefined1 *)0x0) {
LAB_101da73a4:
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,param_2,0,0);
    *param_2 = 0;
    func_0x000107c61654();
LAB_101da73d0:
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar16);
    func_0x000107c615c0(uVar17);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101da7420:
    if (lVar15 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101da744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    puVar4 = *(undefined1 **)(unaff_x22 + 0x88);
    func_0x000107c42950();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) {
      func_0x000107c61170();
      param_2 = puVar12;
      goto LAB_101da73a4;
    }
    lVar15 = *(long *)(unaff_x22 + 0xa8);
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    *(undefined1 **)(unaff_x22 + 0x108) = param_3;
    if (lVar15 != 0) {
      if ((puVar5 == *(undefined1 **)(unaff_x22 + 0xa0) &&
           *(undefined1 **)(unaff_x22 + 0xa8) == param_3) ||
         (func_0x000107c605b8(puVar5,param_3,*(undefined1 **)(unaff_x22 + 0xa0),
                              *(undefined1 **)(unaff_x22 + 0xa8),0), ((ulong)puVar5 & 1) != 0))
      goto LAB_101da733c;
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
      uVar10 = 0x21;
LAB_101da737c:
      *puVar5 = uVar10;
      func_0x000107c61654();
      func_0x000107c6142c(param_3);
      func_0x000107c61170(puVar12);
      goto LAB_101da73d0;
    }
LAB_101da733c:
    puVar5 = *(undefined1 **)(unaff_x22 + 0x88);
    func_0x000107c49eac();
    if (((ulong)puVar5 & 1) != 0) {
LAB_101da7358:
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
      uVar10 = 7;
      goto LAB_101da737c;
    }
    puVar5 = *(undefined1 **)(unaff_x22 + 0x88);
    func_0x000107c5b558();
    if (0 < (int)puVar5) goto LAB_101da7358;
    FUN_101da80a8();
    lVar15 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c42ed0();
    func_0x000107c61180();
    if (lVar15 == 0) {
      func_0x000107c61170(puVar12);
      func_0x000107c6142c(param_3);
LAB_101da7574:
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar16);
      func_0x000107c615c0(uVar17);
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x000101da7420;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar2 = *(long *)(unaff_x22 + 0xd8);
    func_0x000107c5ee94(uVar13);
    func_0x000107c61170(lVar15);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(uVar14,uVar13,uVar17);
    func_0x000107c5ee8c();
    dVar21 = param_1;
    func_0x000107c5eea0(uVar16);
    func_0x000107c5ee8c();
    pcVar19 = *(code **)(lVar2 + 8);
    *(code **)(unaff_x22 + 0x110) = pcVar19;
    dVar20 = dVar21;
    (*pcVar19)(uVar16,uVar17);
    if (param_1 < dVar21) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000107c6142c();
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,param_3,0,0);
      uVar10 = 6;
LAB_101da7518:
      *param_3 = uVar10;
      func_0x000107c61654();
      func_0x000107c61170(puVar12);
      (*pcVar19)(uVar13,uVar17);
      goto LAB_101da73d0;
    }
    lVar15 = *(long *)(unaff_x22 + 0xb8);
    uVar7 = *(ulong *)(unaff_x22 + 0x90);
    func_0x000107c5fadc(uVar7,*(undefined8 *)(unaff_x22 + 0x98));
    uVar13 = *(undefined8 *)(lVar15 + 0x20);
    uVar6 = uVar7;
    func_0x000107e679c8();
    func_0x000107c61170(uVar7);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(unaff_x22 + 0x88);
      FUN_101da8360(uVar7,puVar12);
      *(double *)(unaff_x22 + 0x118) = dVar20;
      if ((uVar7 & 1) == 0) {
        lVar15 = *(long *)(unaff_x22 + 0x88);
        dVar21 = dVar20;
        func_0x000107e7774c(lVar15,uVar13);
        func_0x000107c61180();
        if (lVar15 != 0) {
          func_0x000107c5ee94(*(undefined8 *)(unaff_x22 + 200));
          func_0x000107c61170(lVar15);
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        lVar2 = *(long *)(unaff_x22 + 0xd8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar14 = *(undefined8 *)(unaff_x22 + 200);
        (**(code **)(lVar2 + 0x38))(uVar14,lVar15 == 0,1,uVar13);
        func_0x0001003a4c00(uVar14,uVar17);
        pcVar18 = *(code **)(lVar2 + 0x30);
        (*pcVar18)(uVar17,1,uVar13);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
        if ((int)uVar17 == 1) {
          dVar21 = 0.0;
          func_0x000107c5ee88(*(undefined8 *)(unaff_x22 + 0xe0));
          (*pcVar18)(uVar13,1,uVar14);
          if ((int)uVar13 != 1) {
            func_0x000101daab30(*(undefined8 *)(unaff_x22 + 0xc0),0x112d373d8,&UNK_10d9014c0);
          }
        }
        else {
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0xe0),uVar13,uVar14);
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
        func_0x000107c5ee8c();
        dVar22 = dVar21;
        func_0x000107c5eea0(uVar13);
        func_0x000107c5ee8c();
        (*pcVar19)(uVar13,uVar17);
        if (dVar21 <= dVar22) {
          uVar7 = *(ulong *)(unaff_x22 + 0x88);
          FUN_101da8698(uVar7,*(undefined8 *)(unaff_x22 + 0xb0));
          func_0x000107c6142c();
          if ((uVar7 & 1) != 0) {
            lVar15 = *(long *)(unaff_x22 + 0xb0);
            FUN_101da7020();
            if ((((ulong)param_3 & 1) != 0) && (lVar15 != 0)) {
              uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
              func_0x000107c61174();
              if (0x7fefffffffffffff < (ulong)ABS(dVar20)) goto LAB_101da7bf0;
              if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bf8);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bfc);
                (*UNRECOVERED_JUMPTABLE)();
              }
              uVar17 = uVar13;
              func_0x000107c43e20();
              if ((long)dVar20 < (long)(int)uVar17) {
                FUN_101da89cc(uVar13,puVar12);
                *(undefined8 *)(unaff_x22 + 0x128) = uVar13;
                puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
                puVar9 = &UNK_110483198;
                func_0x000107c613fc(&UNK_110483198,0x20,7);
                *(undefined8 *)(puVar9 + 0x10) = uVar13;
                *(undefined8 *)(puVar9 + 0x18) = uVar17;
                *(undefined8 *)(unaff_x22 + 0x60) = 0x101daac38;
                *(undefined **)(unaff_x22 + 0x68) = puVar9;
                *(undefined **)(unaff_x22 + 0x40) = puVar3;
                *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x50) = &UNK_1000f6b44;
                *(undefined **)(unaff_x22 + 0x58) = &UNK_1104831b0;
                lVar15 = unaff_x22 + 0x40;
                func_0x000107c60bc4(lVar15);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
                func_0x000107c615f0(uVar13);
                func_0x000107c615f0(uVar17);
                func_0x000107c61574(uVar14);
                *(undefined8 *)(unaff_x22 + 0x80) = 0;
                puVar4 = puVar12;
                func_0x000107c4e564();
                func_0x000107c60bd0(lVar15);
                uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
                if ((int)puVar4 == 0) {
                  uVar14 = uVar17;
                  func_0x000107c61174(uVar17);
                  func_0x000107c5ed30();
                  func_0x000107c61170(uVar14);
                  func_0x000107c61654();
                  func_0x000107c615e8(uVar13);
                  *(undefined8 *)(unaff_x22 + 0x138) = uVar17;
                  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
                  puVar9 = &UNK_110483148;
                  func_0x000107c613fc(&UNK_110483148,0x20,7);
                  *(undefined8 *)(puVar9 + 0x10) = 0;
                  *(undefined8 *)(puVar9 + 0x18) = uVar13;
                  *(code **)(unaff_x22 + 0x30) = FUN_101da8cb8;
                  *(undefined **)(unaff_x22 + 0x38) = puVar9;
                  *(undefined **)(unaff_x22 + 0x10) = puVar3;
                  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
                  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
                  *(undefined **)(unaff_x22 + 0x28) = &UNK_110483160;
                  lVar15 = unaff_x22 + 0x10;
                  func_0x000107c60bc4(lVar15);
                  uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
                  func_0x000107c615f0(uVar13);
                  func_0x000107c61574(uVar14);
                  *(undefined8 *)(unaff_x22 + 0x78) = 0;
                  func_0x000107c4e564();
                  func_0x000107c60bd0(lVar15);
                  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
                  if ((int)puVar12 == 0) {
                    uVar14 = uVar13;
                    func_0x000107c61174(uVar13);
                    func_0x000107c5ed30(uVar13);
                    func_0x000107c61170(uVar14);
                    func_0x000107c61654();
                    func_0x000107c614ac(uVar17);
                    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x110);
                    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
                    uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
                    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
                    uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
                    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
                    func_0x000107c61170(uVar17);
                    (*UNRECOVERED_JUMPTABLE)(uVar14,uVar16);
                    goto LAB_101da765c;
                  }
                  plVar8 = (long *)0x50;
                  func_0x000107c61174(uVar13);
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x140) = plVar8;
                  UNRECOVERED_JUMPTABLE = FUN_101da7f24;
                }
                else {
                  plVar8 = (long *)0x50;
                  func_0x000107c61174(uVar17);
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x130) = plVar8;
                  UNRECOVERED_JUMPTABLE = FUN_101da7d6c;
                }
                goto LAB_101da76c4;
              }
              FUN_101da88cc(dVar20,0xd000000000000018,0x800000010f010000);
              param_3 = *(undefined1 **)(unaff_x22 + 0xb0);
              func_0x000107c61170();
            }
            UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x110);
            uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
            uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
            uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
            func_0x000101b9d5ac();
            func_0x000107c613f8(&UNK_1106c31f8,param_3,0,0);
            *param_3 = 0xe;
            func_0x000107c61654();
            func_0x000107c61170(uVar17);
            (*UNRECOVERED_JUMPTABLE)(uVar14,uVar16);
            (*UNRECOVERED_JUMPTABLE)(uVar13,uVar16);
            goto LAB_101da73d0;
          }
          uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
          func_0x000107c6142c(param_3);
        }
        func_0x000107c61170(puVar12);
        (*pcVar19)(uVar17,uVar14);
        (*pcVar19)(uVar13,uVar14);
        goto LAB_101da7574;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000107c6142c();
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,param_3,0,0);
      uVar10 = 0x27;
      goto LAB_101da7518;
    }
    uVar7 = *(ulong *)(unaff_x22 + 0x88);
    func_0x000107c49eac();
    if ((uVar7 & 1) != 0) {
      func_0x000107c6142c();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x110);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,param_3,0,0);
      *param_3 = 0xd;
      func_0x000107c61654();
      func_0x000107c61170(uVar17);
LAB_101da765c:
      (*UNRECOVERED_JUMPTABLE)(uVar13,uVar16);
      goto LAB_101da73d0;
    }
    plVar8 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar8;
    UNRECOVERED_JUMPTABLE = FUN_101da7bfc;
LAB_101da76c4:
    *plVar8 = unaff_x22;
    plVar8[1] = (long)UNRECOVERED_JUMPTABLE;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      plVar8[4] = *(long *)(unaff_x22 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101da8cf4,0,0);
      return;
    }
  }
  func_0x000107c60e78();
LAB_101da7bf0:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bf4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101da7bfc; end: 101da7c6f;  */

void FUN_101da7bfc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_101da7c70;
  }
  else {
    func_0x000107c60e78();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = (undefined1 *)plVar9[0x21];
    func_0x000107c6142c();
    UNRECOVERED_JUMPTABLE = (code *)plVar9[0x22];
    lVar7 = plVar9[0x1f];
    lVar11 = plVar9[0x20];
    lVar13 = plVar9[0x1a];
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 0xd;
    func_0x000107c61654();
    func_0x000107c61170(lVar11);
    (*UNRECOVERED_JUMPTABLE)(lVar7,lVar13);
    lVar7 = plVar9[0x1e];
    lVar11 = plVar9[0x1c];
    lVar15 = plVar9[0x1d];
    lVar13 = plVar9[0x18];
    lVar2 = plVar9[0x19];
    func_0x000107c615c0(plVar9[0x1f]);
    func_0x000107c615c0(lVar7);
    func_0x000107c615c0(lVar15);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar2);
    func_0x000107c615c0(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar9[1])();
      return;
    }
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x130));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      UNRECOVERED_JUMPTABLE = FUN_101da7de0;
    }
    else {
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar7 = plVar10[0x25];
      FUN_101da8f24(plVar10[0x23],lVar7 != 0,0xd000000000000018,0x800000010f010000);
      func_0x000107c615e8(lVar7);
      puVar6 = (undefined1 *)plVar10[0x16];
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE = (code *)plVar10[0x22];
      lVar7 = plVar10[0x1f];
      lVar11 = plVar10[0x20];
      lVar13 = plVar10[0x1c];
      lVar15 = plVar10[0x1a];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
      *puVar6 = 0xe;
      func_0x000107c61654();
      func_0x000107c61170(lVar11);
      (*UNRECOVERED_JUMPTABLE)(lVar13,lVar15);
      (*UNRECOVERED_JUMPTABLE)(lVar7,lVar15);
      lVar7 = plVar10[0x1e];
      lVar11 = plVar10[0x1c];
      lVar15 = plVar10[0x1d];
      lVar13 = plVar10[0x18];
      lVar2 = plVar10[0x19];
      func_0x000107c615c0(plVar10[0x1f]);
      func_0x000107c615c0(lVar7);
      func_0x000107c615c0(lVar15);
      func_0x000107c615c0(lVar11);
      func_0x000107c615c0(lVar2);
      func_0x000107c615c0(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar10[1])();
        return;
      }
      func_0x000107c60e78();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = *plVar10;
      func_0x000107c615c0(*(undefined8 *)(*plVar10 + 0x140));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        func_0x000107c60e78();
        lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_101da8f24(*(undefined8 *)(lVar11 + 0x118),0,0xd000000000000018,0x800000010f010000);
        func_0x000107c61654();
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x110);
        uVar1 = *(undefined8 *)(lVar11 + 0xf8);
        uVar3 = *(undefined8 *)(lVar11 + 0x100);
        uVar12 = *(undefined8 *)(lVar11 + 0xe0);
        uVar14 = *(undefined8 *)(lVar11 + 0xd0);
        func_0x000107c61170(*(undefined8 *)(lVar11 + 0xb0));
        func_0x000107c61170(uVar3);
        (*UNRECOVERED_JUMPTABLE)(uVar12,uVar14);
        (*UNRECOVERED_JUMPTABLE)(uVar1,uVar14);
        uVar1 = *(undefined8 *)(lVar11 + 0xf0);
        uVar3 = *(undefined8 *)(lVar11 + 0xe0);
        uVar4 = *(undefined8 *)(lVar11 + 0xe8);
        uVar12 = *(undefined8 *)(lVar11 + 0xc0);
        uVar5 = *(undefined8 *)(lVar11 + 200);
        func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xf8));
        func_0x000107c615c0(uVar1);
        func_0x000107c615c0(uVar4);
        func_0x000107c615c0(uVar3);
        func_0x000107c615c0(uVar5);
        func_0x000107c615c0(uVar12);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        func_0x000107c60e78();
        FUN_101daa3dc();
        if (0 < (long)UNRECOVERED_JUMPTABLE) {
          lVar7 = 10;
          FUN_1016e7c78();
          if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
            if (5 < lVar7 + 1) {
              return;
            }
          }
          else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
            if (2 < lVar7 + 1) {
              return;
            }
          }
          else {
            if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
              return;
            }
            if (lVar7 != 0) {
              return;
            }
          }
          FUN_101daaa20(uVar14);
        }
        return;
      }
      UNRECOVERED_JUMPTABLE = FUN_101da7f98;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101da7c70; end: 101da7d6b;  */

void FUN_101da7c70(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)unaff_x22[0x21];
  func_0x000107c6142c();
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x22];
  lVar8 = unaff_x22[0x1f];
  lVar10 = unaff_x22[0x20];
  lVar12 = unaff_x22[0x1a];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
  *puVar6 = 0xd;
  func_0x000107c61654();
  func_0x000107c61170(lVar10);
  (*UNRECOVERED_JUMPTABLE)(lVar8,lVar12);
  lVar8 = unaff_x22[0x1e];
  lVar10 = unaff_x22[0x1c];
  lVar14 = unaff_x22[0x1d];
  lVar12 = unaff_x22[0x18];
  lVar2 = unaff_x22[0x19];
  func_0x000107c615c0(unaff_x22[0x1f]);
  func_0x000107c615c0(lVar8);
  func_0x000107c615c0(lVar14);
  func_0x000107c615c0(lVar10);
  func_0x000107c615c0(lVar2);
  func_0x000107c615c0(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101da7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    UNRECOVERED_JUMPTABLE = FUN_101da7de0;
  }
  else {
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar8 = plVar9[0x25];
    FUN_101da8f24(plVar9[0x23],lVar8 != 0,0xd000000000000018,0x800000010f010000);
    func_0x000107c615e8(lVar8);
    puVar6 = (undefined1 *)plVar9[0x16];
    func_0x000107c61170();
    UNRECOVERED_JUMPTABLE = (code *)plVar9[0x22];
    lVar8 = plVar9[0x1f];
    lVar10 = plVar9[0x20];
    lVar12 = plVar9[0x1c];
    lVar14 = plVar9[0x1a];
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 0xe;
    func_0x000107c61654();
    func_0x000107c61170(lVar10);
    (*UNRECOVERED_JUMPTABLE)(lVar12,lVar14);
    (*UNRECOVERED_JUMPTABLE)(lVar8,lVar14);
    lVar8 = plVar9[0x1e];
    lVar10 = plVar9[0x1c];
    lVar14 = plVar9[0x1d];
    lVar12 = plVar9[0x18];
    lVar2 = plVar9[0x19];
    func_0x000107c615c0(plVar9[0x1f]);
    func_0x000107c615c0(lVar8);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar10);
    func_0x000107c615c0(lVar2);
    func_0x000107c615c0(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101da7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar9[1])();
      return;
    }
    func_0x000107c60e78();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = *plVar9;
    func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x140));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_101da8f24(*(undefined8 *)(lVar10 + 0x118),0,0xd000000000000018,0x800000010f010000);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x110);
      uVar1 = *(undefined8 *)(lVar10 + 0xf8);
      uVar3 = *(undefined8 *)(lVar10 + 0x100);
      uVar11 = *(undefined8 *)(lVar10 + 0xe0);
      uVar13 = *(undefined8 *)(lVar10 + 0xd0);
      func_0x000107c61170(*(undefined8 *)(lVar10 + 0xb0));
      func_0x000107c61170(uVar3);
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar13);
      (*UNRECOVERED_JUMPTABLE)(uVar1,uVar13);
      uVar1 = *(undefined8 *)(lVar10 + 0xf0);
      uVar3 = *(undefined8 *)(lVar10 + 0xe0);
      uVar4 = *(undefined8 *)(lVar10 + 0xe8);
      uVar11 = *(undefined8 *)(lVar10 + 0xc0);
      uVar5 = *(undefined8 *)(lVar10 + 200);
      func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xf8));
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      FUN_101daa3dc();
      if (0 < (long)UNRECOVERED_JUMPTABLE) {
        lVar8 = 10;
        FUN_1016e7c78();
        if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
          if (5 < lVar8 + 1) {
            return;
          }
        }
        else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
          if (2 < lVar8 + 1) {
            return;
          }
        }
        else {
          if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
            return;
          }
          if (lVar8 != 0) {
            return;
          }
        }
        FUN_101daaa20(uVar13);
      }
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_101da7f98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101da7d6c; end: 101da7ddf;  */

void FUN_101da7d6c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_101da7de0;
  }
  else {
    func_0x000107c60e78();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = plVar9[0x25];
    FUN_101da8f24(plVar9[0x23],lVar7 != 0,0xd000000000000018,0x800000010f010000);
    func_0x000107c615e8(lVar7);
    puVar6 = (undefined1 *)plVar9[0x16];
    func_0x000107c61170();
    UNRECOVERED_JUMPTABLE = (code *)plVar9[0x22];
    lVar7 = plVar9[0x1f];
    lVar10 = plVar9[0x20];
    lVar12 = plVar9[0x1c];
    lVar14 = plVar9[0x1a];
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 0xe;
    func_0x000107c61654();
    func_0x000107c61170(lVar10);
    (*UNRECOVERED_JUMPTABLE)(lVar12,lVar14);
    (*UNRECOVERED_JUMPTABLE)(lVar7,lVar14);
    lVar7 = plVar9[0x1e];
    lVar10 = plVar9[0x1c];
    lVar14 = plVar9[0x1d];
    lVar12 = plVar9[0x18];
    lVar2 = plVar9[0x19];
    func_0x000107c615c0(plVar9[0x1f]);
    func_0x000107c615c0(lVar7);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar10);
    func_0x000107c615c0(lVar2);
    func_0x000107c615c0(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar9[1])();
      return;
    }
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = *plVar9;
    func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x140));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      func_0x000107c60e78();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_101da8f24(*(undefined8 *)(lVar10 + 0x118),0,0xd000000000000018,0x800000010f010000);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x110);
      uVar1 = *(undefined8 *)(lVar10 + 0xf8);
      uVar3 = *(undefined8 *)(lVar10 + 0x100);
      uVar11 = *(undefined8 *)(lVar10 + 0xe0);
      uVar13 = *(undefined8 *)(lVar10 + 0xd0);
      func_0x000107c61170(*(undefined8 *)(lVar10 + 0xb0));
      func_0x000107c61170(uVar3);
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar13);
      (*UNRECOVERED_JUMPTABLE)(uVar1,uVar13);
      uVar1 = *(undefined8 *)(lVar10 + 0xf0);
      uVar3 = *(undefined8 *)(lVar10 + 0xe0);
      uVar4 = *(undefined8 *)(lVar10 + 0xe8);
      uVar11 = *(undefined8 *)(lVar10 + 0xc0);
      uVar5 = *(undefined8 *)(lVar10 + 200);
      func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xf8));
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      FUN_101daa3dc();
      if (0 < (long)UNRECOVERED_JUMPTABLE) {
        lVar7 = 10;
        FUN_1016e7c78();
        if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
          if (5 < lVar7 + 1) {
            return;
          }
        }
        else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
          if (2 < lVar7 + 1) {
            return;
          }
        }
        else {
          if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
            return;
          }
          if (lVar7 != 0) {
            return;
          }
        }
        FUN_101daaa20(uVar13);
      }
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_101da7f98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101da7de0; end: 101da7f23;  */

void FUN_101da7de0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = unaff_x22[0x25];
  FUN_101da8f24(unaff_x22[0x23],lVar8 != 0,0xd000000000000018,0x800000010f010000);
  func_0x000107c615e8(lVar8);
  puVar6 = (undefined1 *)unaff_x22[0x16];
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x22];
  lVar8 = unaff_x22[0x1f];
  lVar9 = unaff_x22[0x20];
  lVar11 = unaff_x22[0x1c];
  lVar13 = unaff_x22[0x1a];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
  *puVar6 = 0xe;
  func_0x000107c61654();
  func_0x000107c61170(lVar9);
  (*UNRECOVERED_JUMPTABLE)(lVar11,lVar13);
  (*UNRECOVERED_JUMPTABLE)(lVar8,lVar13);
  lVar8 = unaff_x22[0x1e];
  lVar9 = unaff_x22[0x1c];
  lVar13 = unaff_x22[0x1d];
  lVar11 = unaff_x22[0x18];
  lVar2 = unaff_x22[0x19];
  func_0x000107c615c0(unaff_x22[0x1f]);
  func_0x000107c615c0(lVar8);
  func_0x000107c615c0(lVar13);
  func_0x000107c615c0(lVar9);
  func_0x000107c615c0(lVar2);
  func_0x000107c615c0(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101da7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x140));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101da7f98,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_101da8f24(*(undefined8 *)(lVar9 + 0x118),0,0xd000000000000018,0x800000010f010000);
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x110);
  uVar1 = *(undefined8 *)(lVar9 + 0xf8);
  uVar3 = *(undefined8 *)(lVar9 + 0x100);
  uVar10 = *(undefined8 *)(lVar9 + 0xe0);
  uVar12 = *(undefined8 *)(lVar9 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(lVar9 + 0xb0));
  func_0x000107c61170(uVar3);
  (*UNRECOVERED_JUMPTABLE)(uVar10,uVar12);
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar12);
  uVar1 = *(undefined8 *)(lVar9 + 0xf0);
  uVar3 = *(undefined8 *)(lVar9 + 0xe0);
  uVar4 = *(undefined8 *)(lVar9 + 0xe8);
  uVar10 = *(undefined8 *)(lVar9 + 0xc0);
  uVar5 = *(undefined8 *)(lVar9 + 200);
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xf8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar10);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  FUN_101daa3dc();
  if (0 < (long)UNRECOVERED_JUMPTABLE) {
    lVar8 = 10;
    FUN_1016e7c78();
    if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
      if (5 < lVar8 + 1) {
        return;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
      if (2 < lVar8 + 1) {
        return;
      }
    }
    else {
      if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
        return;
      }
      if (lVar8 != 0) {
        return;
      }
    }
    FUN_101daaa20(uVar12);
  }
  return;
}



/* Entry: 101da7f24; end: 101da7f97;  */

void FUN_101da7f24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x140));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101da7f98,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_101da8f24(*(undefined8 *)(lVar6 + 0x118),0,0xd000000000000018,0x800000010f010000);
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x110);
  uVar1 = *(undefined8 *)(lVar6 + 0xf8);
  uVar2 = *(undefined8 *)(lVar6 + 0x100);
  uVar7 = *(undefined8 *)(lVar6 + 0xe0);
  uVar8 = *(undefined8 *)(lVar6 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(lVar6 + 0xb0));
  func_0x000107c61170(uVar2);
  (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8);
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar8);
  uVar1 = *(undefined8 *)(lVar6 + 0xf0);
  uVar2 = *(undefined8 *)(lVar6 + 0xe0);
  uVar3 = *(undefined8 *)(lVar6 + 0xe8);
  uVar7 = *(undefined8 *)(lVar6 + 0xc0);
  uVar4 = *(undefined8 *)(lVar6 + 200);
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xf8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar7);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  FUN_101daa3dc();
  if (0 < (long)UNRECOVERED_JUMPTABLE) {
    lVar5 = 10;
    FUN_1016e7c78();
    if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
      if (5 < lVar5 + 1) {
        return;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
      if (2 < lVar5 + 1) {
        return;
      }
    }
    else {
      if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
        return;
      }
      if (lVar5 != 0) {
        return;
      }
    }
    FUN_101daaa20(uVar8);
  }
  return;
}



/* Entry: 101da7f98; end: 101da80a7;  */

void FUN_101da7f98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_101da8f24(*(undefined8 *)(unaff_x22 + 0x118),0,0xd000000000000018,0x800000010f010000);
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar2);
  (*UNRECOVERED_JUMPTABLE)(uVar6,uVar7);
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101da80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  FUN_101daa3dc();
  if (0 < (long)UNRECOVERED_JUMPTABLE) {
    lVar5 = 10;
    FUN_1016e7c78();
    if (UNRECOVERED_JUMPTABLE == (code *)0x3) {
      if (5 < lVar5 + 1) {
        return;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x2) {
      if (2 < lVar5 + 1) {
        return;
      }
    }
    else {
      if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
        return;
      }
      if (lVar5 != 0) {
        return;
      }
    }
    FUN_101daaa20(uVar7);
  }
  return;
}



/* Entry: 101da80a8; end: 101da812f;  */

void FUN_101da80a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_101daa3dc();
  if (0 < param_1) {
    lVar1 = 10;
    FUN_1016e7c78();
    if (param_1 == 3) {
      if (5 < lVar1 + 1) {
        return;
      }
    }
    else if (param_1 == 2) {
      if (2 < lVar1 + 1) {
        return;
      }
    }
    else {
      if (param_1 != 1) {
        return;
      }
      if (lVar1 != 0) {
        return;
      }
    }
    FUN_101daaa20(param_2);
  }
  return;
}



/* Entry: 101da8130; end: 101da814f;  */

void FUN_101da8130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da8150,0,0);
  return;
}



/* Entry: 101da8150; end: 101da831f;  */

void FUN_101da8150(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = uVar1;
  func_0x000107e679c8();
  *(char *)(unaff_x22 + 0x48) = (char)uVar2;
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    uVar5 = *(ulong *)(unaff_x22 + 0x28);
    if ((uVar5 & 0xff00000000) != 0x100000000) {
      lVar6 = *(long *)(unaff_x22 + 0x20);
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(0xe000000000000000);
      *(int *)(unaff_x22 + 0x40) = (int)uVar5;
      puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      puVar7 = puVar4;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lVar8 = 0;
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar8 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
      }
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      FUN_101da9250(0xd00000000000001b,0x800000010f0100f0,1,lVar8,puVar7);
      func_0x000107c6142c(0x800000010f0100f0);
      func_0x000107c6142c(puVar7);
      *(int *)(unaff_x22 + 0x44) = (int)uVar2;
      puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c6142c(puVar4);
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x20);
    func_0x000107c49eac();
    if ((uVar5 & 1) == 0) {
      plVar3 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x38) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101da8320;
      plVar3[4] = *(long *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101da8cf4,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101da82dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 101da8320; end: 101da835f;  */

void FUN_101da8320(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101da835c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined1 *)(lVar1 + 0x48));
  return;
}



/* Entry: 101da8360; end: 101da8697;  */

byte FUN_101da8360(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  byte unaff_w21;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  puVar3 = PTR_PTR_1126af4d0;
  func_0x000107c61168();
  func_0x000107c430fc();
  func_0x000107c61180();
  puVar11 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c5fc54();
    func_0x000107c61170(puVar3);
    puVar4 = puVar11;
    FUN_101da903c(puVar11,&SUB_100fa7f24,0x112d508c0,&UNK_10d917410);
    func_0x000107c6142c();
    if (puVar4 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar9 = *(undefined1 **)(puVar11 + 0x10);
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar9 = puVar4;
        if (-1 < (long)puVar4) {
          puVar9 = puVar11;
        }
        func_0x000107c60480();
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
      if (puVar9 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar4 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar11 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101da8574);
                (*pcVar2)();
              }
              puVar12 = *(undefined1 **)(puVar4 + (long)puVar10 * 8 + 0x20);
              func_0x000107c615f0(puVar12);
            }
            else {
              puVar12 = puVar10;
              FUN_101daa874(puVar10,puVar4,&PTR_DAT_11269d160,0xed000070616e5379);
            }
            if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101da8570);
              (*pcVar2)();
            }
            puVar7 = puVar10 + 1;
            puVar5 = puVar12;
            func_0x000107c3fbb0();
            if ((int)puVar5 == 0) break;
            puVar6 = puVar3;
            func_0x000107c61558();
            if (((ulong)puVar6 & 1) == 0) {
              func_0x000100fa7f24(0,*(long *)(puVar3 + 0x10) + 1,1);
            }
            uVar1 = *(ulong *)(puVar3 + 0x10);
            if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
              func_0x000100fa7f24(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
            *(undefined1 **)(puVar3 + uVar1 * 8 + 0x20) = puVar12;
            puVar10 = puVar7;
            if (puVar7 == puVar9) goto LAB_101da8594;
          }
          func_0x000107c615e8(puVar12);
          puVar10 = puVar10 + 1;
        } while (puVar7 != puVar9);
      }
LAB_101da8594:
      func_0x000107c6142c(puVar4);
      puVar6 = param_1;
      func_0x0001058b552c(param_1,*(undefined8 *)(unaff_x20 + 0x20),
                          *(undefined8 *)(unaff_x20 + 0x28));
      if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
        puVar8 = puVar3;
        func_0x000107c60480();
      }
      else {
        puVar8 = *(undefined **)(puVar3 + 0x10);
      }
      unaff_w21 = puVar8 < (undefined *)0x8000000000000000 && puVar6 <= puVar8;
      func_0x000107c3fb80();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
        func_0x000107c61574(puVar3);
      }
      else {
        puVar6 = param_1;
        func_0x000107c5fc54();
        func_0x000107c61170(param_1);
        func_0x000107c6142c(puVar6);
        func_0x000107c61574(puVar3);
      }
      goto LAB_101da8660;
    }
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar11,0,0);
  *puVar11 = 10;
  func_0x000107c61654();
LAB_101da8660:
  return unaff_w21 & 1;
}



/* Entry: 101da8698; end: 101da88cb;  */

bool FUN_101da8698(double param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  double dVar9;
  
  if (param_3 != 0) {
    lVar8 = *(long *)(unaff_x20 + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar2 = param_3;
      func_0x000107c4cef0();
      lVar3 = lVar8;
      func_0x000107c4d170();
      func_0x000107c61180();
      if (lVar3 != 0) {
        uVar4 = 0;
        FUN_101daabd0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar5 = lVar3;
        puVar6 = PTR___sSSN_11034da80;
        func_0x000107c5f9e8(lVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(lVar3);
        func_0x000107c42c98();
        func_0x000107c61180();
        if (param_2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101da88cc);
          (*pcVar1)();
        }
        lVar3 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
        puVar7 = puVar6;
        func_0x000107c5fb1c();
        func_0x000107c6142c(puVar6);
        if (*(long *)(lVar5 + 0x10) != 0) {
          func_0x000107c61434(lVar5);
          puVar6 = puVar7;
          func_0x000100029284();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(param_3);
            func_0x000107c6142c(puVar7);
            func_0x000107c61430(lVar5,2);
            return false;
          }
          uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 8);
          func_0x000107c61174(uVar4);
          func_0x000107c6142c(puVar7);
          func_0x000107c61430(lVar5,2);
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
          func_0x000107c453e4();
          func_0x000107c5c9e4();
          dVar9 = param_1;
          func_0x000107c61170(puVar6);
          func_0x000107c4223c(uVar4);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(uVar4);
          return dVar9 + (double)(uVar2 / 1000) < param_1;
        }
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(param_3);
        func_0x000107c6142c(lVar5);
        func_0x000107c6142c(puVar7);
        return false;
      }
      func_0x000107c615e8(lVar8);
    }
    func_0x000107c61170(param_3);
  }
  return false;
}



/* Entry: 101da88cc; end: 101da89cb;  */

/* WARNING: Possible PIC construction at 0x000101da892c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da8990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101da8930) */
/* WARNING: Removing unreachable block (ram,0x000101da89c0) */
/* WARNING: Removing unreachable block (ram,0x000101da8944) */
/* WARNING: Removing unreachable block (ram,0x000101da8950) */
/* WARNING: Removing unreachable block (ram,0x000101da8954) */
/* WARNING: Removing unreachable block (ram,0x000101da89c4) */
/* WARNING: Removing unreachable block (ram,0x000101da8958) */
/* WARNING: Removing unreachable block (ram,0x000101da8960) */
/* WARNING: Removing unreachable block (ram,0x000101da8964) */
/* WARNING: Removing unreachable block (ram,0x000101da89c8) */
/* WARNING: Removing unreachable block (ram,0x000101da8968) */
/* WARNING: Removing unreachable block (ram,0x000101da8994) */

void FUN_101da88cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000101da7098();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126a9520;
    func_0x000107c610f8(PTR_PTR_1126a9520);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x00010587bf9c(puVar2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101da89cc; end: 101da8bf7;  */

void FUN_101da89cc(ulong param_1,undefined1 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  func_0x000107e6b62c();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c5faec();
  uVar2 = uVar2 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_1);
    return;
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    func_0x000107c61170(param_1);
    goto LAB_101da8b74;
  }
  puVar3 = PTR_PTR_1126af4c0;
  func_0x000107c61168();
  func_0x000107c430d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar3 != (undefined *)0x0) {
    puVar6 = puVar3;
    func_0x000107c5fc54(puVar3,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(puVar3);
    puVar3 = puVar6;
    FUN_101da903c(puVar6,0x101daa708,0x112d511e8,&UNK_10d927cd0);
    func_0x000107c6142c(puVar6);
    if (puVar3 != (undefined *)0x0) {
      puVar6 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((ulong)puVar3 >> 0x3e == 0) {
        if (*(long *)(puVar6 + 0x10) == 1) {
LAB_101da8acc:
          if (((ulong)puVar3 & 0xc000000000000001) == 0) {
            if (*(long *)(puVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101da8bf8);
              (*pcVar1)();
            }
            func_0x000107c615f0();
          }
          else {
            FUN_101daa874(0,puVar3,&PTR_DAT_11269d170,0xee007972746e4579);
          }
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(lStack_48);
          func_0x000107c6142c(puVar3);
          return;
        }
      }
      else {
        puVar5 = puVar3;
        if (-1 < (long)puVar3) {
          puVar5 = puVar6;
        }
        puVar4 = puVar5;
        func_0x000107c60480();
        if (puVar4 == (undefined *)0x1) {
          func_0x000107c60480();
          if (puVar5 != (undefined *)0x0) goto LAB_101da8acc;
          func_0x000107c6142c(puVar3);
          goto LAB_101da8b58;
        }
      }
      func_0x000107c615e8(lStack_48);
      func_0x000107c6142c(puVar3);
      goto LAB_101da8b74;
    }
  }
LAB_101da8b58:
  func_0x000107c615e8(lStack_48);
LAB_101da8b74:
  func_0x000107c6142c();
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,param_2,0,0);
  *param_2 = 0xb;
  func_0x000107c61654();
  return;
}



/* Entry: 101da8bf8; end: 101da8cb7;  */

/* WARNING: Possible PIC construction at 0x000101da8c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101da8c5c) */

void FUN_101da8bf8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126bc830;
    func_0x000107c61168();
    func_0x000107c615f0(param_1);
    func_0x000107c3f7a4();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c556a8();
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(param_1);
  }
  puVar1 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c556a8();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101da8cb8; end: 101da8cf3;  */

/* WARNING: Possible PIC construction at 0x000101da8c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101da8c5c) */

void FUN_101da8cb8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bc830;
    func_0x000107c61168();
    func_0x000107c615f0(lVar1);
    func_0x000107c3f7a4();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c556a8();
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar1);
  }
  puVar2 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  func_0x000107c556a8();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101da8cf4; end: 101da8dc7;  */

void FUN_101da8cf4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x40);
    *(long *)(unaff_x22 + 0x28) = lVar1;
    if (lVar1 != 0) {
      plVar3 = (long *)0x80;
      func_0x000107c6157c();
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x30) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101da8dc8;
                    /* WARNING: Could not recover jumptable at 0x000101da8da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_101da6b94();
      return;
    }
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c4fd80();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101da8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da8dc8; end: 101da8e1b;  */

void FUN_101da8dc8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da8e1c,0,0);
  return;
}



/* Entry: 101da8e1c; end: 101da8f23;  */

void FUN_101da8e1c(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  cVar1 = *(char *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    if (iVar3 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_101daab70(uVar4,1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  }
  else {
    func_0x000107c6157c(uVar4);
    func_0x0001000d224c(unaff_x22 + 0x18);
    FUN_101daab70(uVar4,cVar1);
    lVar5 = *(long *)(unaff_x22 + 0x18);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (lVar5 != 0) {
      func_0x000107c4fd80(lVar5);
      FUN_101daab70(uVar6,uVar2);
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(lVar5);
      goto LAB_101da8f0c;
    }
    FUN_101daab70(uVar6,uVar2);
  }
  func_0x000107c61574(uVar4);
LAB_101da8f0c:
                    /* WARNING: Could not recover jumptable at 0x000101da8f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da8f24; end: 101da903b;  */

/* WARNING: Possible PIC construction at 0x000101da8f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da8ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101da8f94) */
/* WARNING: Removing unreachable block (ram,0x000101da9030) */
/* WARNING: Removing unreachable block (ram,0x000101da8fa8) */
/* WARNING: Removing unreachable block (ram,0x000101da8fb4) */
/* WARNING: Removing unreachable block (ram,0x000101da8fb8) */
/* WARNING: Removing unreachable block (ram,0x000101da9034) */
/* WARNING: Removing unreachable block (ram,0x000101da8fbc) */
/* WARNING: Removing unreachable block (ram,0x000101da8fc4) */
/* WARNING: Removing unreachable block (ram,0x000101da8fc8) */
/* WARNING: Removing unreachable block (ram,0x000101da9038) */
/* WARNING: Removing unreachable block (ram,0x000101da8fcc) */
/* WARNING: Removing unreachable block (ram,0x000101da8ffc) */

void FUN_101da8f24(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000101da7098();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126a9520;
    func_0x000107c610f8(PTR_PTR_1126a9520);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_2,param_3);
    func_0x00010587c284(puVar2,(uint)param_1 & 1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101da903c; end: 101da9167;  */

undefined * FUN_101da903c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  (*param_2)(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_68;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_68 = puVar1;
    func_0x0001000bb420(param_1,auStack_88);
    func_0x000100102924(auStack_88,auStack_a8);
    uVar3 = param_3;
    func_0x0001000285a8(param_3,param_4);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_b0,auStack_a8,puVar2 + 8,uVar3,6);
    uVar3 = uStack_b0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_68 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      (*param_2)(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_68;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 101da9168; end: 101da924f;  */

undefined8 FUN_101da9168(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = param_2;
      func_0x000107c61434(param_2);
      func_0x000100121450();
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        func_0x000107c61174(uVar2);
        func_0x000107c6142c(param_2);
        return uVar2;
      }
      func_0x000107c6142c(param_2);
    }
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c6043c();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      lStack_30 = lVar1;
      FUN_101daabd0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c6147c(&uStack_28,&lStack_30,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 101da9250; end: 101da936f;  */

void FUN_101da9250(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar1 = &UNK_1104832f8;
  func_0x000107c613fc(&UNK_1104832f8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110483320;
  func_0x000107c613fc(&UNK_110483320,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  pcStack_70 = FUN_101daabbc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_110483338;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000108ec0f10(uVar4,uVar5,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101da9370; end: 101da93df;  */

/* WARNING: Removing unreachable block (ram,0x000101da97e4) */

void FUN_101da9370(double param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
                  undefined4 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  code **ppcVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long unaff_x20;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  long *unaff_x22;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a0;
  code *apcStack_298 [5];
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  code *pcStack_250;
  code *pcStack_248;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1c] = param_7;
  unaff_x22[0x1d] = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x27) = param_6;
  unaff_x22[0x1a] = param_4;
  unaff_x22[0x1b] = param_5;
  unaff_x22[0x18] = (long)param_2;
  unaff_x22[0x19] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da93e0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (int)unaff_x22[0x27] - 0xe;
  if (uVar1 < 0x34 && (1L << ((ulong)uVar1 & 0x3f) & 0xc000000000001U) != 0) {
LAB_101da9438:
    UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101da96e4:
    if (lVar16 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101da9478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(0);
      return;
    }
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x14);
    puVar18 = (undefined8 *)unaff_x22[0x14];
    unaff_x22[0x1e] = (long)puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_101da9438;
    lVar16 = unaff_x22[0x1a];
    lVar15 = unaff_x22[0x1b];
    puVar5 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar16,lVar15);
    puVar6 = puVar5;
    func_0x000107c430e8();
    func_0x000107c61180();
    unaff_x22[0x1f] = (long)puVar6;
    func_0x000107c61170(lVar16);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
      param_2 = puVar18;
      goto LAB_101da9438;
    }
    lVar2 = unaff_x22[0x27];
    lVar16 = unaff_x22[0x1a];
    lVar24 = unaff_x22[0x1b];
    lVar15 = unaff_x22[0x18];
    lVar25 = unaff_x22[0x19];
    puVar7 = &UNK_1104831e8;
    func_0x000107c613fc(&UNK_1104831e8,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar15;
    *(long *)(puVar7 + 0x20) = lVar25;
    *(int *)(puVar7 + 0x28) = (int)lVar2;
    *(long *)(puVar7 + 0x30) = lVar16;
    *(long *)(puVar7 + 0x38) = lVar24;
    unaff_x22[6] = (long)FUN_101daa6c8;
    unaff_x22[7] = (long)puVar7;
    unaff_x22[2] = (long)PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 5.47077039858234e-315;
    unaff_x22[3] = 0x42000000;
    unaff_x22[4] = (long)&UNK_1000f6b44;
    unaff_x22[5] = (long)&UNK_110483200;
    plVar21 = unaff_x22 + 2;
    func_0x000107c60bc4();
    lVar16 = unaff_x22[7];
    func_0x000107c615f0(puVar6);
    func_0x000107c61434(lVar25);
    func_0x000107c61434(lVar24);
    func_0x000107c61574(lVar16);
    unaff_x22[0x15] = 0;
    puVar8 = puVar18;
    func_0x000107c4e564();
    func_0x000107c60bd0(plVar21);
    lVar16 = unaff_x22[0x15];
    if ((int)puVar8 == 0) {
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar16);
LAB_101da96b4:
      func_0x000107c61654();
      func_0x000107c615e8(puVar6);
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      param_2 = puVar18;
      goto joined_r0x000101da96e4;
    }
    puVar17 = (undefined1 *)unaff_x22[0x1a];
    lVar16 = unaff_x22[0x1b];
    func_0x000107c61174();
    func_0x000107c5fadc(puVar17,lVar16);
    func_0x000107c430e8();
    func_0x000107c61180();
    unaff_x22[0x20] = (long)puVar5;
    func_0x000107c61170();
    if (puVar5 == (undefined *)0x0) {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
      *puVar17 = 9;
      goto LAB_101da96b4;
    }
    uVar1 = *(uint *)(unaff_x22 + 0x27);
    param_2 = (undefined8 *)0x50;
    func_0x000107c615b8();
    unaff_x22[0x21] = (long)param_2;
    *param_2 = unaff_x22;
    param_2[1] = FUN_101da96f8;
    lVar24 = unaff_x22[0x1d];
    lVar16 = unaff_x22[0x18];
    lVar15 = unaff_x22[0x19];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      param_2[5] = (ulong)uVar1;
      param_2[6] = lVar24;
      param_2[3] = lVar15;
      param_2[4] = puVar5;
      param_2[2] = lVar16;
      UNRECOVERED_JUMPTABLE_01 = FUN_101da8150;
      goto LAB_107c615e0;
    }
  }
  uVar3 = SUB81(param_2,0);
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *unaff_x22;
  plVar21 = (long *)*unaff_x22;
  *(undefined1 *)(lVar16 + 0x13c) = uVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0x108));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9774;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar21 + 0x13c);
  if ((bVar4 & 1) == 0) {
    uVar20 = plVar21[0x1f];
    lVar16 = plVar21[0x20];
LAB_101da9840:
    lVar15 = plVar21[0x1e];
    func_0x000107c615e8(lVar16);
    func_0x000107c615e8(uVar20);
LAB_101da9850:
    func_0x000107c61170(lVar15);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar21[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
LAB_101da987c:
                    /* WARNING: Could not recover jumptable at 0x000101da989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(bVar4);
      return;
    }
  }
  else {
    lVar16 = plVar21[0x1c];
    uVar20 = plVar21[0x20];
    if (lVar16 == 0) {
      lVar16 = plVar21[0x1f];
      goto LAB_101da9840;
    }
    lVar15 = plVar21[0x1e];
    func_0x000107c61174();
    FUN_101da8360(uVar20,lVar15);
    plVar21[0x22] = (long)param_1;
    uVar9 = uVar20;
    FUN_101da7020();
    if (((uVar9 & 1) == 0) || ((uVar20 & 1) == 0)) {
      lVar24 = plVar21[0x20];
      lVar15 = plVar21[0x1e];
      func_0x000107c615e8(plVar21[0x1f]);
      func_0x000107c615e8(lVar24);
      func_0x000107c61170(lVar16);
      goto LAB_101da9850;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c10);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c14);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c18);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    lVar15 = lVar16;
    func_0x000107c43e20();
    if ((long)param_1 < (long)(int)lVar15) {
      FUN_101da89cc(lVar16,plVar21[0x1e]);
      plVar21[0x23] = lVar16;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      lVar15 = plVar21[0x20];
      iVar19 = (int)plVar21[0x1e];
      puVar5 = &UNK_110483288;
      func_0x000107c613fc(&UNK_110483288,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar16;
      *(long *)(puVar5 + 0x18) = lVar15;
      plVar21[0x12] = 0x101daac40;
      plVar21[0x13] = (long)puVar5;
      plVar21[0xe] = (long)puVar6;
      plVar21[0xf] = 0x42000000;
      plVar21[0x10] = (long)&UNK_1000f6b44;
      plVar21[0x11] = (long)&UNK_1104832a0;
      plVar22 = plVar21 + 0xe;
      func_0x000107c60bc4();
      lVar24 = plVar21[0x13];
      func_0x000107c615f0(lVar16);
      func_0x000107c615f0(lVar15);
      func_0x000107c61574(lVar24);
      plVar21[0x17] = 0;
      func_0x000107c4e564();
      func_0x000107c60bd0(plVar22);
      lVar15 = plVar21[0x17];
      if (iVar19 == 0) {
        lVar24 = lVar15;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar24);
        func_0x000107c61654();
        func_0x000107c615e8(lVar16);
        plVar21[0x25] = lVar15;
        lVar16 = plVar21[0x20];
        iVar19 = (int)plVar21[0x1e];
        puVar5 = &UNK_110483238;
        func_0x000107c613fc(&UNK_110483238,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(long *)(puVar5 + 0x18) = lVar16;
        plVar21[0xc] = 0x101daac3c;
        plVar21[0xd] = (long)puVar5;
        plVar21[8] = (long)puVar6;
        plVar21[9] = 0x42000000;
        plVar21[10] = (long)&UNK_1000f6b44;
        plVar21[0xb] = (long)&UNK_110483250;
        plVar22 = plVar21 + 8;
        func_0x000107c60bc4();
        lVar24 = plVar21[0xd];
        func_0x000107c615f0(lVar16);
        func_0x000107c61574(lVar24);
        plVar21[0x16] = 0;
        func_0x000107c4e564();
        func_0x000107c60bd0(plVar22);
        lVar16 = plVar21[0x16];
        if (iVar19 == 0) {
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar16);
          func_0x000107c61654();
          func_0x000107c614ac(lVar15);
          lVar16 = plVar21[0x1f];
          lVar24 = plVar21[0x1e];
          lVar15 = plVar21[0x1c];
          func_0x000107c615e8(plVar21[0x20]);
          func_0x000107c615e8(lVar16);
          func_0x000107c61170(lVar15);
          goto LAB_101da9804;
        }
        puVar18 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar21[0x26] = (long)puVar18;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9d94;
      }
      else {
        puVar18 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar21[0x24] = (long)puVar18;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9c1c;
      }
      *puVar18 = plVar21;
      puVar18[1] = UNRECOVERED_JUMPTABLE_01;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        puVar18[4] = plVar21[0x1d];
        UNRECOVERED_JUMPTABLE_01 = FUN_101da8cf4;
        goto LAB_107c615e0;
      }
    }
    else {
      puVar17 = (undefined1 *)0xd000000000000017;
      FUN_101da88cc(param_1,0xd000000000000017,0x800000010f010020);
      lVar16 = plVar21[0x1f];
      lVar15 = plVar21[0x20];
      lVar24 = plVar21[0x1e];
      lVar25 = plVar21[0x1c];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
      *puVar17 = 0x27;
      func_0x000107c61654();
      func_0x000107c61170(lVar25);
      func_0x000107c615e8(lVar15);
      func_0x000107c615e8(lVar16);
LAB_101da9804:
      func_0x000107c61170(lVar24);
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar21[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        bVar4 = 0;
        goto LAB_101da987c;
      }
    }
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = (long *)*plVar21;
  func_0x000107c615c0(*(undefined8 *)(*plVar21 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_01,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined1 *)plVar22[0x23];
  FUN_101da8f24(plVar22[0x22],puVar17 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar14 = plVar22[0x1f];
  lVar16 = plVar22[0x20];
  lVar24 = plVar22[0x1e];
  lVar25 = plVar22[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
  *puVar17 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar25);
  func_0x000107c615e8(lVar16);
  func_0x000107c615e8(lVar14);
  func_0x000107c61170(lVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar22[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar22;
  func_0x000107c615c0(*(undefined8 *)(*plVar22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar16 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar12 = *(undefined8 *)(lVar16 + 0xf8);
  UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar16 + 0xf0);
  uVar23 = *(undefined8 *)(lVar16 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x100));
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar5 = PTR___sypN_11034f1a8;
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    pcVar10 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar10 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5f9e8();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
  }
  pcStack_2b8 = UNRECOVERED_JUMPTABLE;
  uStack_2b0 = uVar13;
  pcStack_248 = pcVar10;
  func_0x000107c61434(uVar13);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_298,&pcStack_2b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar10 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_268 = 0;
    pcStack_270 = (code *)0x0;
    lStack_258 = 0;
    uStack_260 = 0;
  }
  else {
    func_0x000107c61434(pcVar10);
    ppcVar11 = apcStack_298;
    func_0x000100df95d0(ppcVar11);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(pcVar10);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar10 + 0x38) + (long)ppcVar11 * 0x20,&pcStack_270);
    func_0x000107c6142c(pcVar10);
  }
  func_0x0001007bbff0(apcStack_298);
  if (lStack_258 == 0) {
    func_0x000101daab30(&pcStack_270,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar12 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar11 = &pcStack_2b8;
    func_0x000107c6147c(ppcVar11,&pcStack_270,puVar5 + 8,uVar12,6);
    UNRECOVERED_JUMPTABLE_01 = pcStack_2b8;
    if (((ulong)ppcVar11 & 1) != 0) goto LAB_101daa034;
  }
  UNRECOVERED_JUMPTABLE_01 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_250 = UNRECOVERED_JUMPTABLE_01;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = puVar6;
  FUN_101da9168();
  func_0x000107c61170(puVar6);
  if (puVar7 != (undefined *)0x0) {
    puVar6 = puVar7;
    func_0x000107c49820();
    func_0x000107c61170(puVar7);
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000101a02278(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    UNRECOVERED_JUMPTABLE_01 = pcStack_250;
  }
  else {
    pcVar10 = UNRECOVERED_JUMPTABLE_01;
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 0xc000000000000001) != 0) {
      pcVar10 = (code *)((ulong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE_01) {
        pcVar10 = UNRECOVERED_JUMPTABLE_01;
      }
      UNRECOVERED_JUMPTABLE_01 = pcVar10;
      func_0x000107c6042c();
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE_01,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*UNRECOVERED_JUMPTABLE_01)();
      }
      FUN_101a023ec(pcVar10,UNRECOVERED_JUMPTABLE_01 + 1);
      pcStack_250 = pcVar10;
    }
    UNRECOVERED_JUMPTABLE_01 = pcVar10;
    func_0x000107c61558(pcVar10);
    apcStack_298[0] = pcVar10;
    FUN_101a02618(puVar7,puVar6,UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(puVar6);
    UNRECOVERED_JUMPTABLE_01 = apcStack_298[0];
  }
  pcStack_270 = UNRECOVERED_JUMPTABLE;
  uStack_268 = uVar13;
  func_0x000107c61434(uVar13);
  func_0x000107c602d4(apcStack_298,&pcStack_270,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar14 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_2b8 = UNRECOVERED_JUMPTABLE_01;
  lStack_2a0 = lVar14;
  if (lVar14 == 0) {
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    func_0x000101daab30(&pcStack_2b8,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_270,apcStack_298);
    func_0x0001007bbff0(apcStack_298);
    func_0x000101daab30(&pcStack_270,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_2b8,&pcStack_270);
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_248;
    pcVar10 = pcStack_248;
    func_0x000107c61558(pcStack_248);
    pcStack_2b8 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_270,apcStack_298,pcVar10);
    func_0x0001007bbff0(apcStack_298);
    pcStack_248 = pcStack_2b8;
  }
  puVar6 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_248;
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_248;
  }
  else {
    func_0x000107c61174();
    pcVar10 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar5 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar6);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(pcVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da93e0; end: 101da96f7;  */

/* WARNING: Removing unreachable block (ram,0x000101da97e4) */

void FUN_101da93e0(double param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  code **ppcVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  long *unaff_x22;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  code *pcStack_298;
  undefined8 uStack_290;
  long lStack_280;
  code *apcStack_278 [5];
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  code *pcStack_230;
  code *pcStack_228;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (int)unaff_x22[0x27] - 0xe;
  if (uVar1 < 0x34 && (1L << ((ulong)uVar1 & 0x3f) & 0xc000000000001U) != 0) {
LAB_101da9438:
    UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101da96e4:
    if (lVar16 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101da9478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(0);
      return;
    }
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x14);
    puVar18 = (undefined8 *)unaff_x22[0x14];
    unaff_x22[0x1e] = (long)puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_101da9438;
    lVar16 = unaff_x22[0x1a];
    lVar15 = unaff_x22[0x1b];
    puVar5 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar16,lVar15);
    puVar6 = puVar5;
    func_0x000107c430e8();
    func_0x000107c61180();
    unaff_x22[0x1f] = (long)puVar6;
    func_0x000107c61170(lVar16);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
      param_2 = puVar18;
      goto LAB_101da9438;
    }
    lVar2 = unaff_x22[0x27];
    lVar16 = unaff_x22[0x1a];
    lVar24 = unaff_x22[0x1b];
    lVar15 = unaff_x22[0x18];
    lVar25 = unaff_x22[0x19];
    puVar7 = &UNK_1104831e8;
    func_0x000107c613fc(&UNK_1104831e8,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar15;
    *(long *)(puVar7 + 0x20) = lVar25;
    *(int *)(puVar7 + 0x28) = (int)lVar2;
    *(long *)(puVar7 + 0x30) = lVar16;
    *(long *)(puVar7 + 0x38) = lVar24;
    unaff_x22[6] = (long)FUN_101daa6c8;
    unaff_x22[7] = (long)puVar7;
    unaff_x22[2] = (long)PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 5.47077039858234e-315;
    unaff_x22[3] = 0x42000000;
    unaff_x22[4] = (long)&UNK_1000f6b44;
    unaff_x22[5] = (long)&UNK_110483200;
    plVar21 = unaff_x22 + 2;
    func_0x000107c60bc4();
    lVar16 = unaff_x22[7];
    func_0x000107c615f0(puVar6);
    func_0x000107c61434(lVar25);
    func_0x000107c61434(lVar24);
    func_0x000107c61574(lVar16);
    unaff_x22[0x15] = 0;
    puVar8 = puVar18;
    func_0x000107c4e564();
    func_0x000107c60bd0(plVar21);
    lVar16 = unaff_x22[0x15];
    if ((int)puVar8 == 0) {
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar16);
LAB_101da96b4:
      func_0x000107c61654();
      func_0x000107c615e8(puVar6);
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      param_2 = puVar18;
      goto joined_r0x000101da96e4;
    }
    puVar17 = (undefined1 *)unaff_x22[0x1a];
    lVar16 = unaff_x22[0x1b];
    func_0x000107c61174();
    func_0x000107c5fadc(puVar17,lVar16);
    func_0x000107c430e8();
    func_0x000107c61180();
    unaff_x22[0x20] = (long)puVar5;
    func_0x000107c61170();
    if (puVar5 == (undefined *)0x0) {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
      *puVar17 = 9;
      goto LAB_101da96b4;
    }
    uVar1 = *(uint *)(unaff_x22 + 0x27);
    param_2 = (undefined8 *)0x50;
    func_0x000107c615b8();
    unaff_x22[0x21] = (long)param_2;
    *param_2 = unaff_x22;
    param_2[1] = FUN_101da96f8;
    lVar24 = unaff_x22[0x1d];
    lVar16 = unaff_x22[0x18];
    lVar15 = unaff_x22[0x19];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      param_2[5] = (ulong)uVar1;
      param_2[6] = lVar24;
      param_2[3] = lVar15;
      param_2[4] = puVar5;
      param_2[2] = lVar16;
      UNRECOVERED_JUMPTABLE_01 = FUN_101da8150;
      goto LAB_107c615e0;
    }
  }
  uVar3 = SUB81(param_2,0);
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *unaff_x22;
  plVar21 = (long *)*unaff_x22;
  *(undefined1 *)(lVar16 + 0x13c) = uVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0x108));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9774;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar21 + 0x13c);
  if ((bVar4 & 1) == 0) {
    uVar20 = plVar21[0x1f];
    lVar16 = plVar21[0x20];
LAB_101da9840:
    lVar15 = plVar21[0x1e];
    func_0x000107c615e8(lVar16);
    func_0x000107c615e8(uVar20);
LAB_101da9850:
    func_0x000107c61170(lVar15);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar21[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
LAB_101da987c:
                    /* WARNING: Could not recover jumptable at 0x000101da989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(bVar4);
      return;
    }
  }
  else {
    lVar16 = plVar21[0x1c];
    uVar20 = plVar21[0x20];
    if (lVar16 == 0) {
      lVar16 = plVar21[0x1f];
      goto LAB_101da9840;
    }
    lVar15 = plVar21[0x1e];
    func_0x000107c61174();
    FUN_101da8360(uVar20,lVar15);
    plVar21[0x22] = (long)param_1;
    uVar9 = uVar20;
    FUN_101da7020();
    if (((uVar9 & 1) == 0) || ((uVar20 & 1) == 0)) {
      lVar24 = plVar21[0x20];
      lVar15 = plVar21[0x1e];
      func_0x000107c615e8(plVar21[0x1f]);
      func_0x000107c615e8(lVar24);
      func_0x000107c61170(lVar16);
      goto LAB_101da9850;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c10);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c14);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c18);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    lVar15 = lVar16;
    func_0x000107c43e20();
    if ((long)param_1 < (long)(int)lVar15) {
      FUN_101da89cc(lVar16,plVar21[0x1e]);
      plVar21[0x23] = lVar16;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      lVar15 = plVar21[0x20];
      iVar19 = (int)plVar21[0x1e];
      puVar5 = &UNK_110483288;
      func_0x000107c613fc(&UNK_110483288,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar16;
      *(long *)(puVar5 + 0x18) = lVar15;
      plVar21[0x12] = 0x101daac40;
      plVar21[0x13] = (long)puVar5;
      plVar21[0xe] = (long)puVar6;
      plVar21[0xf] = 0x42000000;
      plVar21[0x10] = (long)&UNK_1000f6b44;
      plVar21[0x11] = (long)&UNK_1104832a0;
      plVar22 = plVar21 + 0xe;
      func_0x000107c60bc4();
      lVar24 = plVar21[0x13];
      func_0x000107c615f0(lVar16);
      func_0x000107c615f0(lVar15);
      func_0x000107c61574(lVar24);
      plVar21[0x17] = 0;
      func_0x000107c4e564();
      func_0x000107c60bd0(plVar22);
      lVar15 = plVar21[0x17];
      if (iVar19 == 0) {
        lVar24 = lVar15;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar24);
        func_0x000107c61654();
        func_0x000107c615e8(lVar16);
        plVar21[0x25] = lVar15;
        lVar16 = plVar21[0x20];
        iVar19 = (int)plVar21[0x1e];
        puVar5 = &UNK_110483238;
        func_0x000107c613fc(&UNK_110483238,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(long *)(puVar5 + 0x18) = lVar16;
        plVar21[0xc] = 0x101daac3c;
        plVar21[0xd] = (long)puVar5;
        plVar21[8] = (long)puVar6;
        plVar21[9] = 0x42000000;
        plVar21[10] = (long)&UNK_1000f6b44;
        plVar21[0xb] = (long)&UNK_110483250;
        plVar22 = plVar21 + 8;
        func_0x000107c60bc4();
        lVar24 = plVar21[0xd];
        func_0x000107c615f0(lVar16);
        func_0x000107c61574(lVar24);
        plVar21[0x16] = 0;
        func_0x000107c4e564();
        func_0x000107c60bd0(plVar22);
        lVar16 = plVar21[0x16];
        if (iVar19 == 0) {
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar16);
          func_0x000107c61654();
          func_0x000107c614ac(lVar15);
          lVar16 = plVar21[0x1f];
          lVar24 = plVar21[0x1e];
          lVar15 = plVar21[0x1c];
          func_0x000107c615e8(plVar21[0x20]);
          func_0x000107c615e8(lVar16);
          func_0x000107c61170(lVar15);
          goto LAB_101da9804;
        }
        puVar18 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar21[0x26] = (long)puVar18;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9d94;
      }
      else {
        puVar18 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar21[0x24] = (long)puVar18;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9c1c;
      }
      *puVar18 = plVar21;
      puVar18[1] = UNRECOVERED_JUMPTABLE_01;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        puVar18[4] = plVar21[0x1d];
        UNRECOVERED_JUMPTABLE_01 = FUN_101da8cf4;
        goto LAB_107c615e0;
      }
    }
    else {
      puVar17 = (undefined1 *)0xd000000000000017;
      FUN_101da88cc(param_1,0xd000000000000017,0x800000010f010020);
      lVar16 = plVar21[0x1f];
      lVar15 = plVar21[0x20];
      lVar24 = plVar21[0x1e];
      lVar25 = plVar21[0x1c];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
      *puVar17 = 0x27;
      func_0x000107c61654();
      func_0x000107c61170(lVar25);
      func_0x000107c615e8(lVar15);
      func_0x000107c615e8(lVar16);
LAB_101da9804:
      func_0x000107c61170(lVar24);
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar21[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        bVar4 = 0;
        goto LAB_101da987c;
      }
    }
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = (long *)*plVar21;
  func_0x000107c615c0(*(undefined8 *)(*plVar21 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_01,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined1 *)plVar22[0x23];
  FUN_101da8f24(plVar22[0x22],puVar17 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar14 = plVar22[0x1f];
  lVar16 = plVar22[0x20];
  lVar24 = plVar22[0x1e];
  lVar25 = plVar22[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
  *puVar17 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar25);
  func_0x000107c615e8(lVar16);
  func_0x000107c615e8(lVar14);
  func_0x000107c61170(lVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar22[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar22;
  func_0x000107c615c0(*(undefined8 *)(*plVar22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar16 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar12 = *(undefined8 *)(lVar16 + 0xf8);
  UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar16 + 0xf0);
  uVar23 = *(undefined8 *)(lVar16 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x100));
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar5 = PTR___sypN_11034f1a8;
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    pcVar10 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar10 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5f9e8();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
  }
  pcStack_298 = UNRECOVERED_JUMPTABLE;
  uStack_290 = uVar13;
  pcStack_228 = pcVar10;
  func_0x000107c61434(uVar13);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_278,&pcStack_298,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar10 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_248 = 0;
    pcStack_250 = (code *)0x0;
    lStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    func_0x000107c61434(pcVar10);
    ppcVar11 = apcStack_278;
    func_0x000100df95d0(ppcVar11);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(pcVar10);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar10 + 0x38) + (long)ppcVar11 * 0x20,&pcStack_250);
    func_0x000107c6142c(pcVar10);
  }
  func_0x0001007bbff0(apcStack_278);
  if (lStack_238 == 0) {
    func_0x000101daab30(&pcStack_250,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar12 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar11 = &pcStack_298;
    func_0x000107c6147c(ppcVar11,&pcStack_250,puVar5 + 8,uVar12,6);
    UNRECOVERED_JUMPTABLE_01 = pcStack_298;
    if (((ulong)ppcVar11 & 1) != 0) goto LAB_101daa034;
  }
  UNRECOVERED_JUMPTABLE_01 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_230 = UNRECOVERED_JUMPTABLE_01;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = puVar6;
  FUN_101da9168();
  func_0x000107c61170(puVar6);
  if (puVar7 != (undefined *)0x0) {
    puVar6 = puVar7;
    func_0x000107c49820();
    func_0x000107c61170(puVar7);
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000101a02278(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    UNRECOVERED_JUMPTABLE_01 = pcStack_230;
  }
  else {
    pcVar10 = UNRECOVERED_JUMPTABLE_01;
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 0xc000000000000001) != 0) {
      pcVar10 = (code *)((ulong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE_01) {
        pcVar10 = UNRECOVERED_JUMPTABLE_01;
      }
      UNRECOVERED_JUMPTABLE_01 = pcVar10;
      func_0x000107c6042c();
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE_01,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*UNRECOVERED_JUMPTABLE_01)();
      }
      FUN_101a023ec(pcVar10,UNRECOVERED_JUMPTABLE_01 + 1);
      pcStack_230 = pcVar10;
    }
    UNRECOVERED_JUMPTABLE_01 = pcVar10;
    func_0x000107c61558(pcVar10);
    apcStack_278[0] = pcVar10;
    FUN_101a02618(puVar7,puVar6,UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(puVar6);
    UNRECOVERED_JUMPTABLE_01 = apcStack_278[0];
  }
  pcStack_250 = UNRECOVERED_JUMPTABLE;
  uStack_248 = uVar13;
  func_0x000107c61434(uVar13);
  func_0x000107c602d4(apcStack_278,&pcStack_250,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar14 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_298 = UNRECOVERED_JUMPTABLE_01;
  lStack_280 = lVar14;
  if (lVar14 == 0) {
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    func_0x000101daab30(&pcStack_298,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_250,apcStack_278);
    func_0x0001007bbff0(apcStack_278);
    func_0x000101daab30(&pcStack_250,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_298,&pcStack_250);
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_228;
    pcVar10 = pcStack_228;
    func_0x000107c61558(pcStack_228);
    pcStack_298 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_250,apcStack_278,pcVar10);
    func_0x0001007bbff0(apcStack_278);
    pcStack_228 = pcStack_298;
  }
  puVar6 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_228;
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_228;
  }
  else {
    func_0x000107c61174();
    pcVar10 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar5 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar6);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(pcVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da96f8; end: 101da9773;  */

/* WARNING: Removing unreachable block (ram,0x000101da97e4) */

void FUN_101da96f8(double param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  code **ppcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long *unaff_x22;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_220;
  code *apcStack_218 [5];
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  plVar17 = (long *)*unaff_x22;
  *(undefined1 *)(lVar12 + 0x13c) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x108));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101da9774;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((long)plVar17 + 0x13c);
  if ((bVar1 & 1) == 0) {
    uVar16 = plVar17[0x1f];
    lVar12 = plVar17[0x20];
LAB_101da9840:
    lVar11 = plVar17[0x1e];
    func_0x000107c615e8(lVar12);
    func_0x000107c615e8(uVar16);
LAB_101da9850:
    func_0x000107c61170(lVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar17[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
LAB_101da987c:
                    /* WARNING: Could not recover jumptable at 0x000101da989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(bVar1);
      return;
    }
  }
  else {
    lVar12 = plVar17[0x1c];
    uVar16 = plVar17[0x20];
    if (lVar12 == 0) {
      lVar12 = plVar17[0x1f];
      goto LAB_101da9840;
    }
    lVar11 = plVar17[0x1e];
    func_0x000107c61174();
    FUN_101da8360(uVar16,lVar11);
    plVar17[0x22] = (long)param_1;
    uVar2 = uVar16;
    FUN_101da7020();
    if (((uVar2 & 1) == 0) || ((uVar16 & 1) == 0)) {
      lVar20 = plVar17[0x20];
      lVar11 = plVar17[0x1e];
      func_0x000107c615e8(plVar17[0x1f]);
      func_0x000107c615e8(lVar20);
      func_0x000107c61170(lVar12);
      goto LAB_101da9850;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c10);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c18);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar11 = lVar12;
    func_0x000107c43e20();
    if ((long)param_1 < (long)(int)lVar11) {
      FUN_101da89cc(lVar12,plVar17[0x1e]);
      plVar17[0x23] = lVar12;
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      lVar11 = plVar17[0x20];
      iVar15 = (int)plVar17[0x1e];
      puVar3 = &UNK_110483288;
      func_0x000107c613fc(&UNK_110483288,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar12;
      *(long *)(puVar3 + 0x18) = lVar11;
      plVar17[0x12] = 0x101daac40;
      plVar17[0x13] = (long)puVar3;
      plVar17[0xe] = (long)puVar7;
      plVar17[0xf] = 0x42000000;
      plVar17[0x10] = (long)&UNK_1000f6b44;
      plVar17[0x11] = (long)&UNK_1104832a0;
      plVar18 = plVar17 + 0xe;
      func_0x000107c60bc4();
      lVar20 = plVar17[0x13];
      func_0x000107c615f0(lVar12);
      func_0x000107c615f0(lVar11);
      func_0x000107c61574(lVar20);
      plVar17[0x17] = 0;
      func_0x000107c4e564();
      func_0x000107c60bd0(plVar18);
      lVar11 = plVar17[0x17];
      if (iVar15 == 0) {
        lVar20 = lVar11;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar20);
        func_0x000107c61654();
        func_0x000107c615e8(lVar12);
        plVar17[0x25] = lVar11;
        lVar12 = plVar17[0x20];
        iVar15 = (int)plVar17[0x1e];
        puVar3 = &UNK_110483238;
        func_0x000107c613fc(&UNK_110483238,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(long *)(puVar3 + 0x18) = lVar12;
        plVar17[0xc] = 0x101daac3c;
        plVar17[0xd] = (long)puVar3;
        plVar17[8] = (long)puVar7;
        plVar17[9] = 0x42000000;
        plVar17[10] = (long)&UNK_1000f6b44;
        plVar17[0xb] = (long)&UNK_110483250;
        plVar18 = plVar17 + 8;
        func_0x000107c60bc4();
        lVar20 = plVar17[0xd];
        func_0x000107c615f0(lVar12);
        func_0x000107c61574(lVar20);
        plVar17[0x16] = 0;
        func_0x000107c4e564();
        func_0x000107c60bd0(plVar18);
        lVar12 = plVar17[0x16];
        if (iVar15 == 0) {
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar12);
          func_0x000107c61654();
          func_0x000107c614ac(lVar11);
          lVar12 = plVar17[0x1f];
          lVar20 = plVar17[0x1e];
          lVar11 = plVar17[0x1c];
          func_0x000107c615e8(plVar17[0x20]);
          func_0x000107c615e8(lVar12);
          func_0x000107c61170(lVar11);
          goto LAB_101da9804;
        }
        puVar14 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar17[0x26] = (long)puVar14;
        UNRECOVERED_JUMPTABLE_00 = FUN_101da9d94;
      }
      else {
        puVar14 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar17[0x24] = (long)puVar14;
        UNRECOVERED_JUMPTABLE_00 = FUN_101da9c1c;
      }
      *puVar14 = plVar17;
      puVar14[1] = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        puVar14[4] = plVar17[0x1d];
        UNRECOVERED_JUMPTABLE_00 = FUN_101da8cf4;
        goto LAB_107c615e0;
      }
    }
    else {
      puVar13 = (undefined1 *)0xd000000000000017;
      FUN_101da88cc(param_1,0xd000000000000017,0x800000010f010020);
      lVar12 = plVar17[0x1f];
      lVar11 = plVar17[0x20];
      lVar20 = plVar17[0x1e];
      lVar21 = plVar17[0x1c];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar13,0,0);
      *puVar13 = 0x27;
      func_0x000107c61654();
      func_0x000107c61170(lVar21);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar12);
LAB_101da9804:
      func_0x000107c61170(lVar20);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar17[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        bVar1 = 0;
        goto LAB_101da987c;
      }
    }
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = (long *)*plVar17;
  func_0x000107c615c0(*(undefined8 *)(*plVar17 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined1 *)plVar18[0x23];
  FUN_101da8f24(plVar18[0x22],puVar13 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar10 = plVar18[0x1f];
  lVar12 = plVar18[0x20];
  lVar20 = plVar18[0x1e];
  lVar21 = plVar18[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar13,0,0);
  *puVar13 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar21);
  func_0x000107c615e8(lVar12);
  func_0x000107c615e8(lVar10);
  func_0x000107c61170(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar18[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar18;
  func_0x000107c615c0(*(undefined8 *)(*plVar18 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar12 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar6 = *(undefined8 *)(lVar12 + 0xf8);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 0xf0);
  uVar19 = *(undefined8 *)(lVar12 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x100));
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar19);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    pcVar4 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar4 = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c5f9e8();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
  }
  pcStack_238 = UNRECOVERED_JUMPTABLE;
  uStack_230 = uVar9;
  pcStack_1c8 = pcVar4;
  func_0x000107c61434(uVar9);
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_218,&pcStack_238,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar4 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_1e8 = 0;
    pcStack_1f0 = (code *)0x0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
  }
  else {
    func_0x000107c61434(pcVar4);
    ppcVar5 = apcStack_218;
    func_0x000100df95d0(ppcVar5);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(pcVar4);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar4 + 0x38) + (long)ppcVar5 * 0x20,&pcStack_1f0);
    func_0x000107c6142c(pcVar4);
  }
  func_0x0001007bbff0(apcStack_218);
  if (lStack_1d8 == 0) {
    func_0x000101daab30(&pcStack_1f0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar6 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar5 = &pcStack_238;
    func_0x000107c6147c(ppcVar5,&pcStack_1f0,puVar3 + 8,uVar6,6);
    UNRECOVERED_JUMPTABLE_00 = pcStack_238;
    if (((ulong)ppcVar5 & 1) != 0) goto LAB_101daa034;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_1d0 = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar8 = puVar7;
  FUN_101da9168();
  func_0x000107c61170(puVar7);
  if (puVar8 != (undefined *)0x0) {
    puVar7 = puVar8;
    func_0x000107c49820();
    func_0x000107c61170(puVar8);
    if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000101a02278(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    UNRECOVERED_JUMPTABLE_00 = pcStack_1d0;
  }
  else {
    pcVar4 = UNRECOVERED_JUMPTABLE_00;
    if (((ulong)UNRECOVERED_JUMPTABLE_00 & 0xc000000000000001) != 0) {
      pcVar4 = (code *)((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE_00) {
        pcVar4 = UNRECOVERED_JUMPTABLE_00;
      }
      UNRECOVERED_JUMPTABLE_00 = pcVar4;
      func_0x000107c6042c();
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE_00,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      FUN_101a023ec(pcVar4,UNRECOVERED_JUMPTABLE_00 + 1);
      pcStack_1d0 = pcVar4;
    }
    UNRECOVERED_JUMPTABLE_00 = pcVar4;
    func_0x000107c61558(pcVar4);
    apcStack_218[0] = pcVar4;
    FUN_101a02618(puVar8,puVar7,UNRECOVERED_JUMPTABLE_00);
    func_0x000107c61170(puVar7);
    UNRECOVERED_JUMPTABLE_00 = apcStack_218[0];
  }
  pcStack_1f0 = UNRECOVERED_JUMPTABLE;
  uStack_1e8 = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c602d4(apcStack_218,&pcStack_1f0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar10 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_238 = UNRECOVERED_JUMPTABLE_00;
  lStack_220 = lVar10;
  if (lVar10 == 0) {
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_00);
    func_0x000101daab30(&pcStack_238,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_1f0,apcStack_218);
    func_0x0001007bbff0(apcStack_218);
    func_0x000101daab30(&pcStack_1f0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_238,&pcStack_1f0);
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_00);
    UNRECOVERED_JUMPTABLE = pcStack_1c8;
    pcVar4 = pcStack_1c8;
    func_0x000107c61558(pcStack_1c8);
    pcStack_238 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_1f0,apcStack_218,pcVar4);
    func_0x0001007bbff0(apcStack_218);
    pcStack_1c8 = pcStack_238;
  }
  puVar7 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_1c8;
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
    UNRECOVERED_JUMPTABLE = pcStack_1c8;
  }
  else {
    func_0x000107c61174();
    pcVar4 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar3 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar7);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
    func_0x000107c61170(pcVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9774; end: 101da9c1b;  */

/* WARNING: Removing unreachable block (ram,0x000101da97e4) */

void FUN_101da9774(double param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  code **ppcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long *unaff_x22;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  code *pcStack_218;
  undefined8 uStack_210;
  long lStack_200;
  code *apcStack_1f8 [5];
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((long)unaff_x22 + 0x13c);
  if ((bVar1 & 1) == 0) {
    uVar16 = unaff_x22[0x1f];
    lVar2 = unaff_x22[0x20];
LAB_101da9840:
    lVar12 = unaff_x22[0x1e];
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar16);
LAB_101da9850:
    func_0x000107c61170(lVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
LAB_101da987c:
                    /* WARNING: Could not recover jumptable at 0x000101da989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(bVar1);
      return;
    }
  }
  else {
    lVar2 = unaff_x22[0x1c];
    uVar16 = unaff_x22[0x20];
    if (lVar2 == 0) {
      lVar2 = unaff_x22[0x1f];
      goto LAB_101da9840;
    }
    lVar12 = unaff_x22[0x1e];
    func_0x000107c61174();
    FUN_101da8360(uVar16,lVar12);
    unaff_x22[0x22] = (long)param_1;
    uVar3 = uVar16;
    FUN_101da7020();
    if (((uVar3 & 1) == 0) || ((uVar16 & 1) == 0)) {
      lVar19 = unaff_x22[0x20];
      lVar12 = unaff_x22[0x1e];
      func_0x000107c615e8(unaff_x22[0x1f]);
      func_0x000107c615e8(lVar19);
      func_0x000107c61170(lVar2);
      goto LAB_101da9850;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c10);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101da9c18);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar12 = lVar2;
    func_0x000107c43e20();
    if ((long)param_1 < (long)(int)lVar12) {
      FUN_101da89cc(lVar2,unaff_x22[0x1e]);
      unaff_x22[0x23] = lVar2;
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      lVar12 = unaff_x22[0x20];
      iVar15 = (int)unaff_x22[0x1e];
      puVar4 = &UNK_110483288;
      func_0x000107c613fc(&UNK_110483288,0x20,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = lVar12;
      unaff_x22[0x12] = 0x101daac40;
      unaff_x22[0x13] = (long)puVar4;
      unaff_x22[0xe] = (long)puVar8;
      unaff_x22[0xf] = 0x42000000;
      unaff_x22[0x10] = (long)&UNK_1000f6b44;
      unaff_x22[0x11] = (long)&UNK_1104832a0;
      plVar17 = unaff_x22 + 0xe;
      func_0x000107c60bc4();
      lVar19 = unaff_x22[0x13];
      func_0x000107c615f0(lVar2);
      func_0x000107c615f0(lVar12);
      func_0x000107c61574(lVar19);
      unaff_x22[0x17] = 0;
      func_0x000107c4e564();
      func_0x000107c60bd0(plVar17);
      lVar12 = unaff_x22[0x17];
      if (iVar15 == 0) {
        lVar19 = lVar12;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar19);
        func_0x000107c61654();
        func_0x000107c615e8(lVar2);
        unaff_x22[0x25] = lVar12;
        lVar2 = unaff_x22[0x20];
        iVar15 = (int)unaff_x22[0x1e];
        puVar4 = &UNK_110483238;
        func_0x000107c613fc(&UNK_110483238,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(long *)(puVar4 + 0x18) = lVar2;
        unaff_x22[0xc] = 0x101daac3c;
        unaff_x22[0xd] = (long)puVar4;
        unaff_x22[8] = (long)puVar8;
        unaff_x22[9] = 0x42000000;
        unaff_x22[10] = (long)&UNK_1000f6b44;
        unaff_x22[0xb] = (long)&UNK_110483250;
        plVar17 = unaff_x22 + 8;
        func_0x000107c60bc4();
        lVar19 = unaff_x22[0xd];
        func_0x000107c615f0(lVar2);
        func_0x000107c61574(lVar19);
        unaff_x22[0x16] = 0;
        func_0x000107c4e564();
        func_0x000107c60bd0(plVar17);
        lVar2 = unaff_x22[0x16];
        if (iVar15 == 0) {
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar2);
          func_0x000107c61654();
          func_0x000107c614ac(lVar12);
          lVar2 = unaff_x22[0x1f];
          lVar19 = unaff_x22[0x1e];
          lVar12 = unaff_x22[0x1c];
          func_0x000107c615e8(unaff_x22[0x20]);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar12);
          goto LAB_101da9804;
        }
        puVar14 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        unaff_x22[0x26] = (long)puVar14;
        UNRECOVERED_JUMPTABLE_00 = FUN_101da9d94;
      }
      else {
        puVar14 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        unaff_x22[0x24] = (long)puVar14;
        UNRECOVERED_JUMPTABLE_00 = FUN_101da9c1c;
      }
      *puVar14 = unaff_x22;
      puVar14[1] = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        puVar14[4] = unaff_x22[0x1d];
        UNRECOVERED_JUMPTABLE_00 = FUN_101da8cf4;
        goto LAB_107c615e0;
      }
    }
    else {
      puVar13 = (undefined1 *)0xd000000000000017;
      FUN_101da88cc(param_1,0xd000000000000017,0x800000010f010020);
      lVar2 = unaff_x22[0x1f];
      lVar12 = unaff_x22[0x20];
      lVar19 = unaff_x22[0x1e];
      lVar20 = unaff_x22[0x1c];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar13,0,0);
      *puVar13 = 0x27;
      func_0x000107c61654();
      func_0x000107c61170(lVar20);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar2);
LAB_101da9804:
      func_0x000107c61170(lVar19);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        bVar1 = 0;
        goto LAB_101da987c;
      }
    }
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined1 *)plVar17[0x23];
  FUN_101da8f24(plVar17[0x22],puVar13 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar11 = plVar17[0x1f];
  lVar2 = plVar17[0x20];
  lVar19 = plVar17[0x1e];
  lVar20 = plVar17[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar13,0,0);
  *puVar13 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar20);
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(lVar11);
  func_0x000107c61170(lVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar17[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *plVar17;
  func_0x000107c615c0(*(undefined8 *)(*plVar17 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar2 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar7 = *(undefined8 *)(lVar2 + 0xf8);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar2 + 0xf0);
  uVar18 = *(undefined8 *)(lVar2 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x100));
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar4 = PTR___sypN_11034f1a8;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    pcVar5 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar5 = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c5f9e8();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
  }
  pcStack_218 = UNRECOVERED_JUMPTABLE;
  uStack_210 = uVar10;
  pcStack_1a8 = pcVar5;
  func_0x000107c61434(uVar10);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_1f8,&pcStack_218,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_1c8 = 0;
    pcStack_1d0 = (code *)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x000107c61434(pcVar5);
    ppcVar6 = apcStack_1f8;
    func_0x000100df95d0(ppcVar6);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(pcVar5);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar5 + 0x38) + (long)ppcVar6 * 0x20,&pcStack_1d0);
    func_0x000107c6142c(pcVar5);
  }
  func_0x0001007bbff0(apcStack_1f8);
  if (lStack_1b8 == 0) {
    func_0x000101daab30(&pcStack_1d0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar7 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar6 = &pcStack_218;
    func_0x000107c6147c(ppcVar6,&pcStack_1d0,puVar4 + 8,uVar7,6);
    UNRECOVERED_JUMPTABLE_00 = pcStack_218;
    if (((ulong)ppcVar6 & 1) != 0) goto LAB_101daa034;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_1b0 = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar9 = puVar8;
  FUN_101da9168();
  func_0x000107c61170(puVar8);
  if (puVar9 != (undefined *)0x0) {
    puVar8 = puVar9;
    func_0x000107c49820();
    func_0x000107c61170(puVar9);
    if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = puVar8;
    func_0x000101a02278(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    UNRECOVERED_JUMPTABLE_00 = pcStack_1b0;
  }
  else {
    pcVar5 = UNRECOVERED_JUMPTABLE_00;
    if (((ulong)UNRECOVERED_JUMPTABLE_00 & 0xc000000000000001) != 0) {
      pcVar5 = (code *)((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE_00) {
        pcVar5 = UNRECOVERED_JUMPTABLE_00;
      }
      UNRECOVERED_JUMPTABLE_00 = pcVar5;
      func_0x000107c6042c();
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE_00,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      FUN_101a023ec(pcVar5,UNRECOVERED_JUMPTABLE_00 + 1);
      pcStack_1b0 = pcVar5;
    }
    UNRECOVERED_JUMPTABLE_00 = pcVar5;
    func_0x000107c61558(pcVar5);
    apcStack_1f8[0] = pcVar5;
    FUN_101a02618(puVar9,puVar8,UNRECOVERED_JUMPTABLE_00);
    func_0x000107c61170(puVar8);
    UNRECOVERED_JUMPTABLE_00 = apcStack_1f8[0];
  }
  pcStack_1d0 = UNRECOVERED_JUMPTABLE;
  uStack_1c8 = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c602d4(apcStack_1f8,&pcStack_1d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar11 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_218 = UNRECOVERED_JUMPTABLE_00;
  lStack_200 = lVar11;
  if (lVar11 == 0) {
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_00);
    func_0x000101daab30(&pcStack_218,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_1d0,apcStack_1f8);
    func_0x0001007bbff0(apcStack_1f8);
    func_0x000101daab30(&pcStack_1d0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_218,&pcStack_1d0);
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_00);
    UNRECOVERED_JUMPTABLE = pcStack_1a8;
    pcVar5 = pcStack_1a8;
    func_0x000107c61558(pcStack_1a8);
    pcStack_218 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_1d0,apcStack_1f8,pcVar5);
    func_0x0001007bbff0(apcStack_1f8);
    pcStack_1a8 = pcStack_218;
  }
  puVar8 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_1a8;
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
    UNRECOVERED_JUMPTABLE = pcStack_1a8;
  }
  else {
    func_0x000107c61174();
    pcVar5 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar4 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar8);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
    func_0x000107c61170(pcVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9c1c; end: 101da9c8f;  */

void FUN_101da9c1c(void)

{
  undefined *puVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long *unaff_x22;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  code *apcStack_188 [5];
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  code *pcStack_140;
  code *pcStack_138;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    pcVar11 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar11,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined1 *)plVar12[0x23];
  FUN_101da8f24(plVar12[0x22],puVar10 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar8 = plVar12[0x1f];
  lVar13 = plVar12[0x20];
  lVar15 = plVar12[0x1e];
  lVar16 = plVar12[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar10,0,0);
  *puVar10 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar16);
  func_0x000107c615e8(lVar13);
  func_0x000107c615e8(lVar8);
  func_0x000107c61170(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *plVar12;
  func_0x000107c615c0(*(undefined8 *)(*plVar12 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    pcVar11 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar13 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar4 = *(undefined8 *)(lVar13 + 0xf8);
  pcVar11 = *(code **)(lVar13 + 0xf0);
  uVar14 = *(undefined8 *)(lVar13 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x100));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (pcVar11 == (code *)0x0) {
    pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar2 = pcVar11;
    func_0x000107c5f9e8();
    func_0x000107c61170(pcVar11);
  }
  pcStack_1a8 = UNRECOVERED_JUMPTABLE;
  uStack_1a0 = uVar7;
  pcStack_138 = pcVar2;
  func_0x000107c61434(uVar7);
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_188,&pcStack_1a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar2 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_158 = 0;
    pcStack_160 = (code *)0x0;
    lStack_148 = 0;
    uStack_150 = 0;
  }
  else {
    func_0x000107c61434(pcVar2);
    ppcVar3 = apcStack_188;
    func_0x000100df95d0(ppcVar3);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(pcVar2);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar2 + 0x38) + (long)ppcVar3 * 0x20,&pcStack_160);
    func_0x000107c6142c(pcVar2);
  }
  func_0x0001007bbff0(apcStack_188);
  if (lStack_148 == 0) {
    func_0x000101daab30(&pcStack_160,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar3 = &pcStack_1a8;
    func_0x000107c6147c(ppcVar3,&pcStack_160,puVar1 + 8,uVar4,6);
    pcVar11 = pcStack_1a8;
    if (((ulong)ppcVar3 & 1) != 0) goto LAB_101daa034;
  }
  pcVar11 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_140 = pcVar11;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar6 = puVar5;
  FUN_101da9168();
  func_0x000107c61170(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x000107c49820();
    func_0x000107c61170(puVar6);
    if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar11)();
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000101a02278(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    pcVar11 = pcStack_140;
  }
  else {
    pcVar2 = pcVar11;
    if (((ulong)pcVar11 & 0xc000000000000001) != 0) {
      pcVar2 = (code *)((ulong)pcVar11 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar11) {
        pcVar2 = pcVar11;
      }
      pcVar11 = pcVar2;
      func_0x000107c6042c();
      if (SCARRY8((long)pcVar11,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar11)();
      }
      FUN_101a023ec(pcVar2,pcVar11 + 1);
      pcStack_140 = pcVar2;
    }
    pcVar11 = pcVar2;
    func_0x000107c61558(pcVar2);
    apcStack_188[0] = pcVar2;
    FUN_101a02618(puVar6,puVar5,pcVar11);
    func_0x000107c61170(puVar5);
    pcVar11 = apcStack_188[0];
  }
  pcStack_160 = UNRECOVERED_JUMPTABLE;
  uStack_158 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c602d4(apcStack_188,&pcStack_160,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar8 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_1a8 = pcVar11;
  lStack_190 = lVar8;
  if (lVar8 == 0) {
    func_0x000107c61434(pcVar11);
    func_0x000101daab30(&pcStack_1a8,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_160,apcStack_188);
    func_0x0001007bbff0(apcStack_188);
    func_0x000101daab30(&pcStack_160,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_1a8,&pcStack_160);
    func_0x000107c61434(pcVar11);
    UNRECOVERED_JUMPTABLE = pcStack_138;
    pcVar2 = pcStack_138;
    func_0x000107c61558(pcStack_138);
    pcStack_1a8 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_160,apcStack_188,pcVar2);
    func_0x0001007bbff0(apcStack_188);
    pcStack_138 = pcStack_1a8;
  }
  puVar5 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_138;
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(pcVar11);
    UNRECOVERED_JUMPTABLE = pcStack_138;
  }
  else {
    func_0x000107c61174();
    pcVar2 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar5);
    func_0x000107c6142c(pcVar11);
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9c90; end: 101da9d93;  */

void FUN_101da9c90(void)

{
  undefined *puVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_170;
  code *apcStack_168 [5];
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  code *pcStack_120;
  code *pcStack_118;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined1 *)unaff_x22[0x23];
  FUN_101da8f24(unaff_x22[0x22],puVar10 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar9 = unaff_x22[0x1f];
  lVar12 = unaff_x22[0x20];
  lVar14 = unaff_x22[0x1e];
  lVar15 = unaff_x22[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar10,0,0);
  *puVar10 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar15);
  func_0x000107c615e8(lVar12);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(lVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101da9e08,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar12 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar4 = *(undefined8 *)(lVar12 + 0xf8);
  pcVar11 = *(code **)(lVar12 + 0xf0);
  uVar13 = *(undefined8 *)(lVar12 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x100));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (pcVar11 == (code *)0x0) {
    pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar2 = pcVar11;
    func_0x000107c5f9e8();
    func_0x000107c61170(pcVar11);
  }
  pcStack_188 = UNRECOVERED_JUMPTABLE;
  uStack_180 = uVar7;
  pcStack_118 = pcVar2;
  func_0x000107c61434(uVar7);
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_168,&pcStack_188,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar2 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_138 = 0;
    pcStack_140 = (code *)0x0;
    lStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x000107c61434(pcVar2);
    ppcVar3 = apcStack_168;
    func_0x000100df95d0(ppcVar3);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(pcVar2);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar2 + 0x38) + (long)ppcVar3 * 0x20,&pcStack_140);
    func_0x000107c6142c(pcVar2);
  }
  func_0x0001007bbff0(apcStack_168);
  if (lStack_128 == 0) {
    func_0x000101daab30(&pcStack_140,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar3 = &pcStack_188;
    func_0x000107c6147c(ppcVar3,&pcStack_140,puVar1 + 8,uVar4,6);
    pcVar11 = pcStack_188;
    if (((ulong)ppcVar3 & 1) != 0) goto LAB_101daa034;
  }
  pcVar11 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_120 = pcVar11;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar6 = puVar5;
  FUN_101da9168();
  func_0x000107c61170(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x000107c49820();
    func_0x000107c61170(puVar6);
    if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar11)();
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000101a02278(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    pcVar11 = pcStack_120;
  }
  else {
    pcVar2 = pcVar11;
    if (((ulong)pcVar11 & 0xc000000000000001) != 0) {
      pcVar2 = (code *)((ulong)pcVar11 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar11) {
        pcVar2 = pcVar11;
      }
      pcVar11 = pcVar2;
      func_0x000107c6042c();
      if (SCARRY8((long)pcVar11,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar11)();
      }
      FUN_101a023ec(pcVar2,pcVar11 + 1);
      pcStack_120 = pcVar2;
    }
    pcVar11 = pcVar2;
    func_0x000107c61558(pcVar2);
    apcStack_168[0] = pcVar2;
    FUN_101a02618(puVar6,puVar5,pcVar11);
    func_0x000107c61170(puVar5);
    pcVar11 = apcStack_168[0];
  }
  pcStack_140 = UNRECOVERED_JUMPTABLE;
  uStack_138 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c602d4(apcStack_168,&pcStack_140,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_188 = pcVar11;
  lStack_170 = lVar9;
  if (lVar9 == 0) {
    func_0x000107c61434(pcVar11);
    func_0x000101daab30(&pcStack_188,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_140,apcStack_168);
    func_0x0001007bbff0(apcStack_168);
    func_0x000101daab30(&pcStack_140,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_188,&pcStack_140);
    func_0x000107c61434(pcVar11);
    UNRECOVERED_JUMPTABLE = pcStack_118;
    pcVar2 = pcStack_118;
    func_0x000107c61558(pcStack_118);
    pcStack_188 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_140,apcStack_168,pcVar2);
    func_0x0001007bbff0(apcStack_168);
    pcStack_118 = pcStack_188;
  }
  puVar5 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_118;
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(pcVar11);
    UNRECOVERED_JUMPTABLE = pcStack_118;
  }
  else {
    func_0x000107c61174();
    pcVar2 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar5);
    func_0x000107c6142c(pcVar11);
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9d94; end: 101da9e07;  */

void FUN_101da9d94(void)

{
  undefined *puVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_120;
  code *apcStack_118 [5];
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101da9e08,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar10 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar4 = *(undefined8 *)(lVar10 + 0xf8);
  pcVar9 = *(code **)(lVar10 + 0xf0);
  uVar11 = *(undefined8 *)(lVar10 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar10 + 0x100));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (pcVar9 == (code *)0x0) {
    pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar2 = pcVar9;
    func_0x000107c5f9e8();
    func_0x000107c61170(pcVar9);
  }
  pcStack_138 = UNRECOVERED_JUMPTABLE;
  uStack_130 = uVar7;
  pcStack_c8 = pcVar2;
  func_0x000107c61434(uVar7);
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_118,&pcStack_138,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar2 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_e8 = 0;
    pcStack_f0 = (code *)0x0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x000107c61434(pcVar2);
    ppcVar3 = apcStack_118;
    func_0x000100df95d0(ppcVar3);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(pcVar2);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar2 + 0x38) + (long)ppcVar3 * 0x20,&pcStack_f0);
    func_0x000107c6142c(pcVar2);
  }
  func_0x0001007bbff0(apcStack_118);
  if (lStack_d8 == 0) {
    func_0x000101daab30(&pcStack_f0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar3 = &pcStack_138;
    func_0x000107c6147c(ppcVar3,&pcStack_f0,puVar1 + 8,uVar4,6);
    pcVar9 = pcStack_138;
    if (((ulong)ppcVar3 & 1) != 0) goto LAB_101daa034;
  }
  pcVar9 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_d0 = pcVar9;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar6 = puVar5;
  FUN_101da9168();
  func_0x000107c61170(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x000107c49820();
    func_0x000107c61170(puVar6);
    if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar9)();
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000101a02278(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    pcVar9 = pcStack_d0;
  }
  else {
    pcVar2 = pcVar9;
    if (((ulong)pcVar9 & 0xc000000000000001) != 0) {
      pcVar2 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar9) {
        pcVar2 = pcVar9;
      }
      pcVar9 = pcVar2;
      func_0x000107c6042c();
      if (SCARRY8((long)pcVar9,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar9)();
      }
      FUN_101a023ec(pcVar2,pcVar9 + 1);
      pcStack_d0 = pcVar2;
    }
    pcVar9 = pcVar2;
    func_0x000107c61558(pcVar2);
    apcStack_118[0] = pcVar2;
    FUN_101a02618(puVar6,puVar5,pcVar9);
    func_0x000107c61170(puVar5);
    pcVar9 = apcStack_118[0];
  }
  pcStack_f0 = UNRECOVERED_JUMPTABLE;
  uStack_e8 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c602d4(apcStack_118,&pcStack_f0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar8 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_138 = pcVar9;
  lStack_120 = lVar8;
  if (lVar8 == 0) {
    func_0x000107c61434(pcVar9);
    func_0x000101daab30(&pcStack_138,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_f0,apcStack_118);
    func_0x0001007bbff0(apcStack_118);
    func_0x000101daab30(&pcStack_f0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_138,&pcStack_f0);
    func_0x000107c61434(pcVar9);
    UNRECOVERED_JUMPTABLE = pcStack_c8;
    pcVar2 = pcStack_c8;
    func_0x000107c61558(pcStack_c8);
    pcStack_138 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_f0,apcStack_118,pcVar2);
    func_0x0001007bbff0(apcStack_118);
    pcStack_c8 = pcStack_138;
  }
  puVar5 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_c8;
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(pcVar9);
    UNRECOVERED_JUMPTABLE = pcStack_c8;
  }
  else {
    func_0x000107c61174();
    pcVar2 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar5);
    func_0x000107c6142c(pcVar9);
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9e08; end: 101da9ecb;  */

void FUN_101da9e08(void)

{
  undefined *puVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_100;
  code *apcStack_f8 [5];
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(unaff_x22 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar9 = *(code **)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (pcVar9 == (code *)0x0) {
    pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar2 = pcVar9;
    func_0x000107c5f9e8();
    func_0x000107c61170(pcVar9);
  }
  pcStack_118 = UNRECOVERED_JUMPTABLE;
  uStack_110 = uVar7;
  pcStack_a8 = pcVar2;
  func_0x000107c61434(uVar7);
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_f8,&pcStack_118,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar2 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_c8 = 0;
    pcStack_d0 = (code *)0x0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(pcVar2);
    ppcVar3 = apcStack_f8;
    func_0x000100df95d0(ppcVar3);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(pcVar2);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar2 + 0x38) + (long)ppcVar3 * 0x20,&pcStack_d0);
    func_0x000107c6142c(pcVar2);
  }
  func_0x0001007bbff0(apcStack_f8);
  if (lStack_b8 == 0) {
    func_0x000101daab30(&pcStack_d0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar3 = &pcStack_118;
    func_0x000107c6147c(ppcVar3,&pcStack_d0,puVar1 + 8,uVar4,6);
    pcVar9 = pcStack_118;
    if (((ulong)ppcVar3 & 1) != 0) goto LAB_101daa034;
  }
  pcVar9 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_b0 = pcVar9;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar6 = puVar5;
  FUN_101da9168();
  func_0x000107c61170(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x000107c49820();
    func_0x000107c61170(puVar6);
    if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar9)();
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000101a02278(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    pcVar9 = pcStack_b0;
  }
  else {
    pcVar2 = pcVar9;
    if (((ulong)pcVar9 & 0xc000000000000001) != 0) {
      pcVar2 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar9) {
        pcVar2 = pcVar9;
      }
      pcVar9 = pcVar2;
      func_0x000107c6042c();
      if (SCARRY8((long)pcVar9,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar9)();
      }
      FUN_101a023ec(pcVar2,pcVar9 + 1);
      pcStack_b0 = pcVar2;
    }
    pcVar9 = pcVar2;
    func_0x000107c61558(pcVar2);
    apcStack_f8[0] = pcVar2;
    FUN_101a02618(puVar6,puVar5,pcVar9);
    func_0x000107c61170(puVar5);
    pcVar9 = apcStack_f8[0];
  }
  pcStack_d0 = UNRECOVERED_JUMPTABLE;
  uStack_c8 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c602d4(apcStack_f8,&pcStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar8 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_118 = pcVar9;
  lStack_100 = lVar8;
  if (lVar8 == 0) {
    func_0x000107c61434(pcVar9);
    func_0x000101daab30(&pcStack_118,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_d0,apcStack_f8);
    func_0x0001007bbff0(apcStack_f8);
    func_0x000101daab30(&pcStack_d0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_118,&pcStack_d0);
    func_0x000107c61434(pcVar9);
    UNRECOVERED_JUMPTABLE = pcStack_a8;
    pcVar2 = pcStack_a8;
    func_0x000107c61558(pcStack_a8);
    pcStack_118 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_d0,apcStack_f8,pcVar2);
    func_0x0001007bbff0(apcStack_f8);
    pcStack_a8 = pcStack_118;
  }
  puVar5 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_a8;
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(pcVar9);
    UNRECOVERED_JUMPTABLE = pcStack_a8;
  }
  else {
    func_0x000107c61174();
    pcVar2 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar5);
    func_0x000107c6142c(pcVar9);
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101da9ecc; end: 101daa2e3;  */

void FUN_101da9ecc(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  undefined *apuStack_b8 [5];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    puVar3 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
  }
  puStack_d8 = param_2;
  uStack_d0 = param_3;
  puStack_68 = puVar3;
  func_0x000107c61434(param_3);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apuStack_b8,&puStack_d8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar3 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c61434(puVar3);
    ppuVar4 = apuStack_b8;
    func_0x000100df95d0(ppuVar4);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(puVar3);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(puVar3 + 0x38) + (long)ppuVar4 * 0x20,&puStack_90);
    func_0x000107c6142c(puVar3);
  }
  func_0x0001007bbff0(apuStack_b8);
  if (lStack_78 == 0) {
    func_0x000101daab30(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar5 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppuVar4 = &puStack_d8;
    func_0x000107c6147c(ppuVar4,&puStack_90,puVar1 + 8,uVar5,6);
    puVar3 = puStack_d8;
    if (((ulong)ppuVar4 & 1) != 0) goto LAB_101daa034;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = puVar6;
  FUN_101da9168();
  func_0x000107c61170(puVar6);
  if (puVar7 != (undefined *)0x0) {
    puVar6 = puVar7;
    func_0x000107c49820();
    func_0x000107c61170(puVar7);
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar2)();
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar7 == (undefined *)0x0) {
    puVar3 = puVar6;
    func_0x000101a02278(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_70;
  }
  else {
    puVar8 = puVar3;
    if (((ulong)puVar3 & 0xc000000000000001) != 0) {
      puVar8 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar8 = puVar3;
      }
      puVar3 = puVar8;
      func_0x000107c6042c();
      if (SCARRY8((long)puVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar2)();
      }
      FUN_101a023ec(puVar8,puVar3 + 1);
      puStack_70 = puVar8;
    }
    puVar3 = puVar8;
    func_0x000107c61558(puVar8);
    apuStack_b8[0] = puVar8;
    FUN_101a02618(puVar7,puVar6,puVar3);
    func_0x000107c61170(puVar6);
    puVar3 = apuStack_b8[0];
  }
  puStack_90 = param_2;
  uStack_88 = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c602d4(apuStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  puStack_d8 = puVar3;
  lStack_c0 = lVar9;
  if (lVar9 == 0) {
    func_0x000107c61434(puVar3);
    func_0x000101daab30(&puStack_d8,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&puStack_90,apuStack_b8);
    func_0x0001007bbff0(apuStack_b8);
    func_0x000101daab30(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_d8,&puStack_90);
    func_0x000107c61434(puVar3);
    puVar6 = puStack_68;
    puVar7 = puStack_68;
    func_0x000107c61558(puStack_68);
    puStack_d8 = puVar6;
    FUN_10192c094(&puStack_90,apuStack_b8,puVar7);
    func_0x0001007bbff0(apuStack_b8);
    puStack_68 = puStack_d8;
  }
  puVar7 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  puVar6 = puStack_68;
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c6142c(puVar3);
    puVar6 = puStack_68;
  }
  else {
    func_0x000107c61174();
    puVar8 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar7);
    func_0x000107c6142c(puVar3);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 101daa2e4; end: 101daa3db;  */

void FUN_101daa2e4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c5fadc(param_3,param_4);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      if (param_7 == 0) {
        func_0x000107c61174(uVar1);
        param_6 = 0;
      }
      else {
        func_0x000107c61174(uVar1);
        func_0x000107c5fadc(param_6,param_7);
      }
      func_0x000107e675d4(param_3,param_5 & 1,uVar1,0,param_6);
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_6);
    }
  }
  return;
}



/* Entry: 101daa3dc; end: 101daa4af;  */

ulong FUN_101daa3dc(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f010090);
  uVar2 = uVar4;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 < 1) {
    func_0x000107c30910();
    func_0x000107c30914();
  }
  else {
    uVar3 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0100c0);
    func_0x000107c4980c(uVar4);
    func_0x000107c61170(uVar3);
    uVar1 = uVar2 & 0xffffffff;
  }
  return uVar1;
}



/* Entry: 101daa4b0; end: 101daa53f;  */

/* WARNING: Removing unreachable block (ram,0x000101da768c) */

void FUN_101daa4b0(double param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long *unaff_x20;
  long lVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar14 = *unaff_x20;
  plVar10 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101daa540;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10[0x16] = param_7;
  plVar10[0x17] = lVar14;
  plVar10[0x14] = param_5;
  plVar10[0x15] = param_6;
  plVar10[0x12] = param_3;
  plVar10[0x13] = param_4;
  plVar10[0x11] = param_2;
  lVar14 = 0x112d373d8;
  puVar9 = &UNK_10d9014c0;
  func_0x0001000285a8();
  uVar5 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x18] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x19] = uVar5;
  lVar14 = 0;
  func_0x000107c5eea4();
  plVar10[0x1a] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  plVar10[0x1b] = lVar14;
  uVar5 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1c] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1d] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1e] = uVar4;
  puVar6 = (undefined1 *)(uVar5 & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar10[0x1f] = (long)puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_101da7288;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(plVar10 + 0xe);
  puVar13 = (undefined1 *)plVar10[0xe];
  plVar10[0x20] = (long)puVar13;
  if (puVar13 == (undefined1 *)0x0) {
LAB_101da73a4:
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c61654();
LAB_101da73d0:
    lVar12 = plVar10[0x1e];
    lVar18 = plVar10[0x1c];
    lVar16 = plVar10[0x1d];
    lVar15 = plVar10[0x18];
    lVar2 = plVar10[0x19];
    func_0x000107c615c0(plVar10[0x1f]);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(lVar16);
    func_0x000107c615c0(lVar18);
    func_0x000107c615c0(lVar2);
    func_0x000107c615c0(lVar15);
    UNRECOVERED_JUMPTABLE = (code *)plVar10[1];
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101da7420:
    if (lVar12 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101da744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    puVar6 = (undefined1 *)plVar10[0x11];
    func_0x000107c42950();
    func_0x000107c61180();
    if (puVar6 == (undefined1 *)0x0) {
      func_0x000107c61170();
      puVar6 = puVar13;
      goto LAB_101da73a4;
    }
    lVar12 = plVar10[0x15];
    puVar7 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    plVar10[0x21] = (long)puVar9;
    if (lVar12 != 0) {
      if ((puVar7 == (undefined1 *)plVar10[0x14] && (undefined *)plVar10[0x15] == puVar9) ||
         (func_0x000107c605b8(puVar7,puVar9,(undefined1 *)plVar10[0x14],(undefined *)plVar10[0x15],0
                             ), ((ulong)puVar7 & 1) != 0)) goto LAB_101da733c;
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
      uVar11 = 0x21;
LAB_101da737c:
      *puVar7 = uVar11;
      func_0x000107c61654();
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(puVar13);
      goto LAB_101da73d0;
    }
LAB_101da733c:
    puVar7 = (undefined1 *)plVar10[0x11];
    func_0x000107c49eac();
    if (((ulong)puVar7 & 1) != 0) {
LAB_101da7358:
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
      uVar11 = 7;
      goto LAB_101da737c;
    }
    puVar7 = (undefined1 *)plVar10[0x11];
    func_0x000107c5b558();
    if (0 < (int)puVar7) goto LAB_101da7358;
    FUN_101da80a8();
    lVar12 = plVar10[0x11];
    func_0x000107c42ed0();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c61170(puVar13);
      func_0x000107c6142c(puVar9);
LAB_101da7574:
      lVar12 = plVar10[0x1e];
      lVar18 = plVar10[0x1c];
      lVar16 = plVar10[0x1d];
      lVar15 = plVar10[0x18];
      lVar2 = plVar10[0x19];
      func_0x000107c615c0(plVar10[0x1f]);
      func_0x000107c615c0(lVar12);
      func_0x000107c615c0(lVar16);
      func_0x000107c615c0(lVar18);
      func_0x000107c615c0(lVar2);
      func_0x000107c615c0(lVar15);
      UNRECOVERED_JUMPTABLE = (code *)plVar10[1];
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x000101da7420;
    }
    lVar18 = plVar10[0x1e];
    lVar16 = plVar10[0x1f];
    lVar17 = plVar10[0x1d];
    lVar15 = plVar10[0x1a];
    lVar2 = plVar10[0x1b];
    func_0x000107c5ee94(lVar18);
    func_0x000107c61170(lVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(lVar16,lVar18,lVar15);
    func_0x000107c5ee8c();
    dVar22 = param_1;
    func_0x000107c5eea0(lVar17);
    func_0x000107c5ee8c();
    pcVar20 = *(code **)(lVar2 + 8);
    plVar10[0x22] = (long)pcVar20;
    dVar21 = dVar22;
    (*pcVar20)(lVar17,lVar15);
    if (param_1 < dVar22) {
      lVar12 = plVar10[0x1f];
      lVar18 = plVar10[0x1a];
      func_0x000107c6142c();
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
      uVar11 = 6;
LAB_101da7518:
      *puVar9 = uVar11;
      func_0x000107c61654();
      func_0x000107c61170(puVar13);
      (*pcVar20)(lVar12,lVar18);
      goto LAB_101da73d0;
    }
    lVar12 = plVar10[0x17];
    uVar5 = plVar10[0x12];
    func_0x000107c5fadc(uVar5,plVar10[0x13]);
    uVar1 = *(undefined8 *)(lVar12 + 0x20);
    uVar4 = uVar5;
    func_0x000107e679c8();
    func_0x000107c61170(uVar5);
    if ((uVar4 & 1) == 0) {
      uVar5 = plVar10[0x11];
      FUN_101da8360(uVar5,puVar13);
      plVar10[0x23] = (long)dVar21;
      if ((uVar5 & 1) == 0) {
        lVar12 = plVar10[0x11];
        dVar22 = dVar21;
        func_0x000107e7774c(lVar12,uVar1);
        func_0x000107c61180();
        if (lVar12 != 0) {
          func_0x000107c5ee94(plVar10[0x19]);
          func_0x000107c61170(lVar12);
        }
        lVar18 = plVar10[0x1a];
        lVar16 = plVar10[0x1b];
        lVar15 = plVar10[0x18];
        lVar2 = plVar10[0x19];
        (**(code **)(lVar16 + 0x38))(lVar2,lVar12 == 0,1,lVar18);
        func_0x0001003a4c00(lVar2,lVar15);
        pcVar19 = *(code **)(lVar16 + 0x30);
        (*pcVar19)(lVar15,1,lVar18);
        lVar18 = plVar10[0x1a];
        lVar12 = plVar10[0x18];
        if ((int)lVar15 == 1) {
          dVar22 = 0.0;
          func_0x000107c5ee88(plVar10[0x1c]);
          (*pcVar19)(lVar12,1,lVar18);
          if ((int)lVar12 != 1) {
            func_0x000101daab30(plVar10[0x18],0x112d373d8,&UNK_10d9014c0);
          }
        }
        else {
          (*UNRECOVERED_JUMPTABLE)(plVar10[0x1c],lVar12,lVar18);
        }
        lVar12 = plVar10[0x1d];
        lVar18 = plVar10[0x1a];
        func_0x000107c5ee8c();
        dVar23 = dVar22;
        func_0x000107c5eea0(lVar12);
        func_0x000107c5ee8c();
        (*pcVar20)(lVar12,lVar18);
        if (dVar22 <= dVar23) {
          uVar5 = plVar10[0x11];
          FUN_101da8698(uVar5,plVar10[0x16]);
          func_0x000107c6142c();
          if ((uVar5 & 1) != 0) {
            lVar12 = plVar10[0x16];
            FUN_101da7020();
            if ((((ulong)puVar9 & 1) != 0) && (lVar12 != 0)) {
              lVar12 = plVar10[0x16];
              func_0x000107c61174();
              if (0x7fefffffffffffff < (ulong)ABS(dVar21)) goto LAB_101da7bf0;
              if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bf8);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bfc);
                (*UNRECOVERED_JUMPTABLE)();
              }
              lVar18 = lVar12;
              func_0x000107c43e20();
              if ((long)dVar21 < (long)(int)lVar18) {
                FUN_101da89cc(lVar12,puVar13);
                plVar10[0x25] = lVar12;
                puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                lVar18 = plVar10[0x11];
                puVar9 = &UNK_110483198;
                func_0x000107c613fc(&UNK_110483198,0x20,7);
                *(long *)(puVar9 + 0x10) = lVar12;
                *(long *)(puVar9 + 0x18) = lVar18;
                plVar10[0xc] = 0x101daac38;
                plVar10[0xd] = (long)puVar9;
                plVar10[8] = (long)puVar3;
                plVar10[9] = 0x42000000;
                plVar10[10] = (long)&UNK_1000f6b44;
                plVar10[0xb] = (long)&UNK_1104831b0;
                plVar8 = plVar10 + 8;
                func_0x000107c60bc4(plVar8);
                lVar15 = plVar10[0xd];
                func_0x000107c615f0(lVar12);
                func_0x000107c615f0(lVar18);
                func_0x000107c61574(lVar15);
                plVar10[0x10] = 0;
                puVar6 = puVar13;
                func_0x000107c4e564();
                func_0x000107c60bd0(plVar8);
                lVar18 = plVar10[0x10];
                if ((int)puVar6 == 0) {
                  lVar15 = lVar18;
                  func_0x000107c61174(lVar18);
                  func_0x000107c5ed30();
                  func_0x000107c61170(lVar15);
                  func_0x000107c61654();
                  func_0x000107c615e8(lVar12);
                  plVar10[0x27] = lVar18;
                  lVar12 = plVar10[0x11];
                  puVar9 = &UNK_110483148;
                  func_0x000107c613fc(&UNK_110483148,0x20,7);
                  *(undefined8 *)(puVar9 + 0x10) = 0;
                  *(long *)(puVar9 + 0x18) = lVar12;
                  plVar10[6] = (long)FUN_101da8cb8;
                  plVar10[7] = (long)puVar9;
                  plVar10[2] = (long)puVar3;
                  plVar10[3] = 0x42000000;
                  plVar10[4] = (long)&UNK_1000f6b44;
                  plVar10[5] = (long)&UNK_110483160;
                  plVar8 = plVar10 + 2;
                  func_0x000107c60bc4(plVar8);
                  lVar15 = plVar10[7];
                  func_0x000107c615f0(lVar12);
                  func_0x000107c61574(lVar15);
                  plVar10[0xf] = 0;
                  func_0x000107c4e564();
                  func_0x000107c60bd0(plVar8);
                  lVar12 = plVar10[0xf];
                  if ((int)puVar13 == 0) {
                    lVar15 = lVar12;
                    func_0x000107c61174(lVar12);
                    func_0x000107c5ed30(lVar12);
                    func_0x000107c61170(lVar15);
                    func_0x000107c61654();
                    func_0x000107c614ac(lVar18);
                    UNRECOVERED_JUMPTABLE = (code *)plVar10[0x22];
                    lVar12 = plVar10[0x1f];
                    lVar18 = plVar10[0x20];
                    lVar15 = plVar10[0x1c];
                    lVar16 = plVar10[0x1a];
                    func_0x000107c61170(plVar10[0x16]);
                    func_0x000107c61170(lVar18);
                    (*UNRECOVERED_JUMPTABLE)(lVar15,lVar16);
                    goto LAB_101da765c;
                  }
                  plVar8 = (long *)0x50;
                  func_0x000107c61174(lVar12);
                  func_0x000107c615b8();
                  plVar10[0x28] = (long)plVar8;
                  UNRECOVERED_JUMPTABLE = FUN_101da7f24;
                }
                else {
                  plVar8 = (long *)0x50;
                  func_0x000107c61174(lVar18);
                  func_0x000107c615b8();
                  plVar10[0x26] = (long)plVar8;
                  UNRECOVERED_JUMPTABLE = FUN_101da7d6c;
                }
                goto LAB_101da76c4;
              }
              FUN_101da88cc(dVar21,0xd000000000000018,0x800000010f010000);
              puVar9 = (undefined *)plVar10[0x16];
              func_0x000107c61170();
            }
            UNRECOVERED_JUMPTABLE = (code *)plVar10[0x22];
            lVar12 = plVar10[0x1f];
            lVar18 = plVar10[0x20];
            lVar15 = plVar10[0x1c];
            lVar16 = plVar10[0x1a];
            func_0x000101b9d5ac();
            func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
            *puVar9 = 0xe;
            func_0x000107c61654();
            func_0x000107c61170(lVar18);
            (*UNRECOVERED_JUMPTABLE)(lVar15,lVar16);
            (*UNRECOVERED_JUMPTABLE)(lVar12,lVar16);
            goto LAB_101da73d0;
          }
          lVar12 = plVar10[0x1f];
          lVar18 = plVar10[0x1c];
          lVar15 = plVar10[0x1a];
        }
        else {
          lVar12 = plVar10[0x1f];
          lVar18 = plVar10[0x1c];
          lVar15 = plVar10[0x1a];
          func_0x000107c6142c(puVar9);
        }
        func_0x000107c61170(puVar13);
        (*pcVar20)(lVar18,lVar15);
        (*pcVar20)(lVar12,lVar15);
        goto LAB_101da7574;
      }
      lVar12 = plVar10[0x1f];
      lVar18 = plVar10[0x1a];
      func_0x000107c6142c();
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
      uVar11 = 0x27;
      goto LAB_101da7518;
    }
    uVar5 = plVar10[0x11];
    func_0x000107c49eac();
    if ((uVar5 & 1) != 0) {
      func_0x000107c6142c();
      UNRECOVERED_JUMPTABLE = (code *)plVar10[0x22];
      lVar12 = plVar10[0x1f];
      lVar18 = plVar10[0x20];
      lVar16 = plVar10[0x1a];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
      *puVar9 = 0xd;
      func_0x000107c61654();
      func_0x000107c61170(lVar18);
LAB_101da765c:
      (*UNRECOVERED_JUMPTABLE)(lVar12,lVar16);
      goto LAB_101da73d0;
    }
    plVar8 = (long *)0x50;
    func_0x000107c615b8();
    plVar10[0x24] = (long)plVar8;
    UNRECOVERED_JUMPTABLE = FUN_101da7bfc;
LAB_101da76c4:
    *plVar8 = (long)plVar10;
    plVar8[1] = (long)UNRECOVERED_JUMPTABLE;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      plVar8[4] = plVar10[0x17];
      UNRECOVERED_JUMPTABLE = FUN_101da8cf4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
      return;
    }
  }
  func_0x000107c60e78();
LAB_101da7bf0:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101da7bf4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101daa540; end: 101daa57b;  */

void FUN_101daa540(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101daa578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101daa57c; end: 101daa60b;  */

/* WARNING: Removing unreachable block (ram,0x000101da97e4) */

void FUN_101daa57c(double param_1,long *param_2,long param_3,long param_4,long param_5,
                  undefined4 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  code **ppcVar12;
  undefined8 uVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long *unaff_x20;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  long unaff_x22;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a0;
  code *apcStack_298 [5];
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  code *pcStack_250;
  code *pcStack_248;
  
  lVar20 = *unaff_x20;
  plVar14 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_101daa60c;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14[0x1c] = param_7;
  plVar14[0x1d] = lVar20;
  *(undefined4 *)(plVar14 + 0x27) = param_6;
  plVar14[0x1a] = param_4;
  plVar14[0x1b] = param_5;
  plVar14[0x18] = (long)param_2;
  plVar14[0x19] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da93e0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (int)plVar14[0x27] - 0xe;
  if (uVar1 < 0x34 && (1L << ((ulong)uVar1 & 0x3f) & 0xc000000000001U) != 0) {
LAB_101da9438:
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101da96e4:
    if (lVar20 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101da9478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(0);
      return;
    }
  }
  else {
    func_0x0001000d224c(plVar14 + 0x14);
    plVar23 = (long *)plVar14[0x14];
    plVar14[0x1e] = (long)plVar23;
    if (plVar23 == (long *)0x0) goto LAB_101da9438;
    lVar20 = plVar14[0x1a];
    lVar17 = plVar14[0x1b];
    puVar5 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar20,lVar17);
    puVar6 = puVar5;
    func_0x000107c430e8();
    func_0x000107c61180();
    plVar14[0x1f] = (long)puVar6;
    func_0x000107c61170(lVar20);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
      param_2 = plVar23;
      goto LAB_101da9438;
    }
    lVar2 = plVar14[0x27];
    lVar20 = plVar14[0x1a];
    lVar25 = plVar14[0x1b];
    lVar17 = plVar14[0x18];
    lVar26 = plVar14[0x19];
    puVar7 = &UNK_1104831e8;
    func_0x000107c613fc(&UNK_1104831e8,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar17;
    *(long *)(puVar7 + 0x20) = lVar26;
    *(int *)(puVar7 + 0x28) = (int)lVar2;
    *(long *)(puVar7 + 0x30) = lVar20;
    *(long *)(puVar7 + 0x38) = lVar25;
    plVar14[6] = (long)FUN_101daa6c8;
    plVar14[7] = (long)puVar7;
    plVar14[2] = (long)PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 5.47077039858234e-315;
    plVar14[3] = 0x42000000;
    plVar14[4] = (long)&UNK_1000f6b44;
    plVar14[5] = (long)&UNK_110483200;
    plVar8 = plVar14 + 2;
    func_0x000107c60bc4();
    lVar20 = plVar14[7];
    func_0x000107c615f0(puVar6);
    func_0x000107c61434(lVar26);
    func_0x000107c61434(lVar25);
    func_0x000107c61574(lVar20);
    plVar14[0x15] = 0;
    plVar9 = plVar23;
    func_0x000107c4e564();
    func_0x000107c60bd0(plVar8);
    lVar20 = plVar14[0x15];
    if ((int)plVar9 == 0) {
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar20);
LAB_101da96b4:
      func_0x000107c61654();
      func_0x000107c615e8(puVar6);
      func_0x000107c61170();
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
      lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      param_2 = plVar23;
      goto joined_r0x000101da96e4;
    }
    puVar18 = (undefined1 *)plVar14[0x1a];
    lVar20 = plVar14[0x1b];
    func_0x000107c61174();
    func_0x000107c5fadc(puVar18,lVar20);
    func_0x000107c430e8();
    func_0x000107c61180();
    plVar14[0x20] = (long)puVar5;
    func_0x000107c61170();
    if (puVar5 == (undefined *)0x0) {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar18,0,0);
      *puVar18 = 9;
      goto LAB_101da96b4;
    }
    uVar1 = *(uint *)(plVar14 + 0x27);
    param_2 = (long *)0x50;
    func_0x000107c615b8();
    plVar14[0x21] = (long)param_2;
    *param_2 = (long)plVar14;
    param_2[1] = (long)FUN_101da96f8;
    lVar25 = plVar14[0x1d];
    lVar20 = plVar14[0x18];
    lVar17 = plVar14[0x19];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      param_2[5] = (ulong)uVar1;
      param_2[6] = lVar25;
      param_2[3] = lVar17;
      param_2[4] = (long)puVar5;
      param_2[2] = lVar20;
      UNRECOVERED_JUMPTABLE_01 = FUN_101da8150;
      goto LAB_107c615e0;
    }
  }
  uVar3 = SUB81(param_2,0);
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *plVar14;
  plVar14 = (long *)*plVar14;
  *(undefined1 *)(lVar20 + 0x13c) = uVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0x108));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9774;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar14 + 0x13c);
  if ((bVar4 & 1) == 0) {
    uVar22 = plVar14[0x1f];
    lVar20 = plVar14[0x20];
LAB_101da9840:
    lVar17 = plVar14[0x1e];
    func_0x000107c615e8(lVar20);
    func_0x000107c615e8(uVar22);
LAB_101da9850:
    func_0x000107c61170(lVar17);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
LAB_101da987c:
                    /* WARNING: Could not recover jumptable at 0x000101da989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)(bVar4);
      return;
    }
  }
  else {
    lVar20 = plVar14[0x1c];
    uVar22 = plVar14[0x20];
    if (lVar20 == 0) {
      lVar20 = plVar14[0x1f];
      goto LAB_101da9840;
    }
    lVar17 = plVar14[0x1e];
    func_0x000107c61174();
    FUN_101da8360(uVar22,lVar17);
    plVar14[0x22] = (long)param_1;
    uVar10 = uVar22;
    FUN_101da7020();
    if (((uVar10 & 1) == 0) || ((uVar22 & 1) == 0)) {
      lVar25 = plVar14[0x20];
      lVar17 = plVar14[0x1e];
      func_0x000107c615e8(plVar14[0x1f]);
      func_0x000107c615e8(lVar25);
      func_0x000107c61170(lVar20);
      goto LAB_101da9850;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c10);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c14);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101da9c18);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
    lVar17 = lVar20;
    func_0x000107c43e20();
    if ((long)param_1 < (long)(int)lVar17) {
      FUN_101da89cc(lVar20,plVar14[0x1e]);
      plVar14[0x23] = lVar20;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      lVar17 = plVar14[0x20];
      iVar21 = (int)plVar14[0x1e];
      puVar5 = &UNK_110483288;
      func_0x000107c613fc(&UNK_110483288,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar20;
      *(long *)(puVar5 + 0x18) = lVar17;
      plVar14[0x12] = 0x101daac40;
      plVar14[0x13] = (long)puVar5;
      plVar14[0xe] = (long)puVar6;
      plVar14[0xf] = 0x42000000;
      plVar14[0x10] = (long)&UNK_1000f6b44;
      plVar14[0x11] = (long)&UNK_1104832a0;
      plVar23 = plVar14 + 0xe;
      func_0x000107c60bc4();
      lVar25 = plVar14[0x13];
      func_0x000107c615f0(lVar20);
      func_0x000107c615f0(lVar17);
      func_0x000107c61574(lVar25);
      plVar14[0x17] = 0;
      func_0x000107c4e564();
      func_0x000107c60bd0(plVar23);
      lVar17 = plVar14[0x17];
      if (iVar21 == 0) {
        lVar25 = lVar17;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar25);
        func_0x000107c61654();
        func_0x000107c615e8(lVar20);
        plVar14[0x25] = lVar17;
        lVar20 = plVar14[0x20];
        iVar21 = (int)plVar14[0x1e];
        puVar5 = &UNK_110483238;
        func_0x000107c613fc(&UNK_110483238,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(long *)(puVar5 + 0x18) = lVar20;
        plVar14[0xc] = 0x101daac3c;
        plVar14[0xd] = (long)puVar5;
        plVar14[8] = (long)puVar6;
        plVar14[9] = 0x42000000;
        plVar14[10] = (long)&UNK_1000f6b44;
        plVar14[0xb] = (long)&UNK_110483250;
        plVar23 = plVar14 + 8;
        func_0x000107c60bc4();
        lVar25 = plVar14[0xd];
        func_0x000107c615f0(lVar20);
        func_0x000107c61574(lVar25);
        plVar14[0x16] = 0;
        func_0x000107c4e564();
        func_0x000107c60bd0(plVar23);
        lVar20 = plVar14[0x16];
        if (iVar21 == 0) {
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar20);
          func_0x000107c61654();
          func_0x000107c614ac(lVar17);
          lVar20 = plVar14[0x1f];
          lVar25 = plVar14[0x1e];
          lVar17 = plVar14[0x1c];
          func_0x000107c615e8(plVar14[0x20]);
          func_0x000107c615e8(lVar20);
          func_0x000107c61170(lVar17);
          goto LAB_101da9804;
        }
        puVar19 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar14[0x26] = (long)puVar19;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9d94;
      }
      else {
        puVar19 = (undefined8 *)0x50;
        func_0x000107c61174();
        func_0x000107c615b8();
        plVar14[0x24] = (long)puVar19;
        UNRECOVERED_JUMPTABLE_01 = FUN_101da9c1c;
      }
      *puVar19 = plVar14;
      puVar19[1] = UNRECOVERED_JUMPTABLE_01;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        puVar19[4] = plVar14[0x1d];
        UNRECOVERED_JUMPTABLE_01 = FUN_101da8cf4;
        goto LAB_107c615e0;
      }
    }
    else {
      puVar18 = (undefined1 *)0xd000000000000017;
      FUN_101da88cc(param_1,0xd000000000000017,0x800000010f010020);
      lVar20 = plVar14[0x1f];
      lVar17 = plVar14[0x20];
      lVar25 = plVar14[0x1e];
      lVar26 = plVar14[0x1c];
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar18,0,0);
      *puVar18 = 0x27;
      func_0x000107c61654();
      func_0x000107c61170(lVar26);
      func_0x000107c615e8(lVar17);
      func_0x000107c615e8(lVar20);
LAB_101da9804:
      func_0x000107c61170(lVar25);
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        bVar4 = 0;
        goto LAB_101da987c;
      }
    }
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)*plVar14;
  func_0x000107c615c0(*(undefined8 *)(*plVar14 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9c90;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_01,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = (undefined1 *)plVar23[0x23];
  FUN_101da8f24(plVar23[0x22],puVar18 != (undefined1 *)0x0,0xd000000000000017,0x800000010f010020);
  func_0x000107c615e8();
  lVar16 = plVar23[0x1f];
  lVar20 = plVar23[0x20];
  lVar25 = plVar23[0x1e];
  lVar26 = plVar23[0x1c];
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar18,0,0);
  *puVar18 = 0x27;
  func_0x000107c61654();
  func_0x000107c61170(lVar26);
  func_0x000107c615e8(lVar20);
  func_0x000107c615e8(lVar16);
  func_0x000107c61170(lVar25);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101da9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar23[1])(0);
    return;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *plVar23;
  func_0x000107c615c0(*(undefined8 *)(*plVar23 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_01 = FUN_101da9e08;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = 0x800000010f010020;
  FUN_101da8f24(*(undefined8 *)(lVar20 + 0x110),0,0xd000000000000017);
  func_0x000107c61654();
  uVar13 = *(undefined8 *)(lVar20 + 0xf8);
  UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar20 + 0xf0);
  uVar24 = *(undefined8 *)(lVar20 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(lVar20 + 0x100));
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(uVar24);
  func_0x000107c61170();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101da9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar5 = PTR___sypN_11034f1a8;
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    pcVar11 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5f9e8();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
  }
  pcStack_2b8 = UNRECOVERED_JUMPTABLE;
  uStack_2b0 = uVar15;
  pcStack_248 = pcVar11;
  func_0x000107c61434(uVar15);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apcStack_298,&pcStack_2b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(pcVar11 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_268 = 0;
    pcStack_270 = (code *)0x0;
    lStack_258 = 0;
    uStack_260 = 0;
  }
  else {
    func_0x000107c61434(pcVar11);
    ppcVar12 = apcStack_298;
    func_0x000100df95d0(ppcVar12);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(pcVar11);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(pcVar11 + 0x38) + (long)ppcVar12 * 0x20,&pcStack_270);
    func_0x000107c6142c(pcVar11);
  }
  func_0x0001007bbff0(apcStack_298);
  if (lStack_258 == 0) {
    func_0x000101daab30(&pcStack_270,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar13 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppcVar12 = &pcStack_2b8;
    func_0x000107c6147c(ppcVar12,&pcStack_270,puVar5 + 8,uVar13,6);
    UNRECOVERED_JUMPTABLE_01 = pcStack_2b8;
    if (((ulong)ppcVar12 & 1) != 0) goto LAB_101daa034;
  }
  UNRECOVERED_JUMPTABLE_01 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_250 = UNRECOVERED_JUMPTABLE_01;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = puVar6;
  FUN_101da9168();
  func_0x000107c61170(puVar6);
  if (puVar7 != (undefined *)0x0) {
    puVar6 = puVar7;
    func_0x000107c49820();
    func_0x000107c61170(puVar7);
    if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*UNRECOVERED_JUMPTABLE_01)();
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000101a02278(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    UNRECOVERED_JUMPTABLE_01 = pcStack_250;
  }
  else {
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 0xc000000000000001) != 0) {
      pcVar11 = (code *)((ulong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE_01) {
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
      }
      UNRECOVERED_JUMPTABLE_01 = pcVar11;
      func_0x000107c6042c();
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE_01,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_01 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*UNRECOVERED_JUMPTABLE_01)();
      }
      FUN_101a023ec(pcVar11,UNRECOVERED_JUMPTABLE_01 + 1);
      pcStack_250 = pcVar11;
    }
    UNRECOVERED_JUMPTABLE_01 = pcVar11;
    func_0x000107c61558(pcVar11);
    apcStack_298[0] = pcVar11;
    FUN_101a02618(puVar7,puVar6,UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(puVar6);
    UNRECOVERED_JUMPTABLE_01 = apcStack_298[0];
  }
  pcStack_270 = UNRECOVERED_JUMPTABLE;
  uStack_268 = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c602d4(apcStack_298,&pcStack_270,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar16 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  pcStack_2b8 = UNRECOVERED_JUMPTABLE_01;
  lStack_2a0 = lVar16;
  if (lVar16 == 0) {
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    func_0x000101daab30(&pcStack_2b8,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&pcStack_270,apcStack_298);
    func_0x0001007bbff0(apcStack_298);
    func_0x000101daab30(&pcStack_270,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_2b8,&pcStack_270);
    func_0x000107c61434(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_248;
    pcVar11 = pcStack_248;
    func_0x000107c61558(pcStack_248);
    pcStack_2b8 = UNRECOVERED_JUMPTABLE;
    FUN_10192c094(&pcStack_270,apcStack_298,pcVar11);
    func_0x0001007bbff0(apcStack_298);
    pcStack_248 = pcStack_2b8;
  }
  puVar6 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  UNRECOVERED_JUMPTABLE = pcStack_248;
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    UNRECOVERED_JUMPTABLE = pcStack_248;
  }
  else {
    func_0x000107c61174();
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x000107c5f9dc(UNRECOVERED_JUMPTABLE,PTR___ss11AnyHashableVN_11034e448,puVar5 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar6);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c61170(pcVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 101daa60c; end: 101daa65b;  */

void FUN_101daa60c(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101daa658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101daa65c; end: 101daa6c7;  */

void FUN_101daa65c(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c49eac();
  if ((((ulong)puVar1 & 1) != 0) || (func_0x000107c5b558(), puVar1 = param_1, 0 < (int)param_1)) {
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar1,0,0);
    *puVar1 = 7;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101daa6c8; end: 101daa6db;  */

void FUN_101daa6c8(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  undefined *apuStack_b8 [5];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  puVar11 = *(undefined **)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c3fb84();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar3);
  }
  puStack_d8 = puVar11;
  uStack_d0 = uVar10;
  puStack_68 = puVar4;
  func_0x000107c61434(uVar10);
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apuStack_b8,&puStack_d8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar4 + 0x10) == 0) {
LAB_101da9fbc:
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c61434(puVar4);
    ppuVar5 = apuStack_b8;
    func_0x000100df95d0(ppuVar5);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c6142c(puVar4);
      goto LAB_101da9fbc;
    }
    func_0x0001000bb420(*(long *)(puVar4 + 0x38) + (long)ppuVar5 * 0x20,&puStack_90);
    func_0x000107c6142c(puVar4);
  }
  func_0x0001007bbff0(apuStack_b8);
  if (lStack_78 == 0) {
    func_0x000101daab30(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar6 = 0x112e2ba68;
    func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
    ppuVar5 = &puStack_d8;
    func_0x000107c6147c(ppuVar5,&puStack_90,puVar1 + 8,uVar6,6);
    puVar3 = puStack_d8;
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_101daa034;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010e7780();
LAB_101daa034:
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = puVar4;
  FUN_101da9168();
  func_0x000107c61170(puVar4);
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
    func_0x000107c49820();
    func_0x000107c61170(puVar7);
    if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa128);
      (*pcVar2)();
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (puVar7 == (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x000101a02278(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_70;
  }
  else {
    puVar8 = puVar3;
    if (((ulong)puVar3 & 0xc000000000000001) != 0) {
      puVar8 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar8 = puVar3;
      }
      puVar3 = puVar8;
      func_0x000107c6042c();
      if (SCARRY8((long)puVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa2e4);
        (*pcVar2)();
      }
      FUN_101a023ec(puVar8,puVar3 + 1);
      puStack_70 = puVar8;
    }
    puVar3 = puVar8;
    func_0x000107c61558(puVar8);
    apuStack_b8[0] = puVar8;
    FUN_101a02618(puVar7,puVar4,puVar3);
    func_0x000107c61170(puVar4);
    puVar3 = apuStack_b8[0];
  }
  puStack_90 = puVar11;
  uStack_88 = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c602d4(apuStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0x112e2ba68;
  func_0x0001000285a8(0x112e2ba68,&UNK_10da14e00);
  puStack_d8 = puVar3;
  lStack_c0 = lVar9;
  if (lVar9 == 0) {
    func_0x000107c61434(puVar3);
    func_0x000101daab30(&puStack_d8,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&puStack_90,apuStack_b8);
    func_0x0001007bbff0(apuStack_b8);
    func_0x000101daab30(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_d8,&puStack_90);
    func_0x000107c61434(puVar3);
    puVar11 = puStack_68;
    puVar4 = puStack_68;
    func_0x000107c61558(puStack_68);
    puStack_d8 = puVar11;
    FUN_10192c094(&puStack_90,apuStack_b8,puVar4);
    func_0x0001007bbff0(apuStack_b8);
    puStack_68 = puStack_d8;
  }
  puVar4 = PTR_PTR_1126bc830;
  func_0x000107c61168();
  func_0x000107c3f7a4();
  func_0x000107c61180();
  puVar11 = puStack_68;
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(puVar3);
    puVar11 = puStack_68;
  }
  else {
    func_0x000107c61174();
    puVar7 = puVar11;
    func_0x000107c5f9dc(puVar11,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c53458(puVar4);
    func_0x000107c6142c(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c6142c(puVar11);
  return;
}



/* Entry: 101daa6dc; end: 101daa73b;  */

void FUN_101daa6dc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101daa73c; end: 101daa873;  */

undefined *
FUN_101daa73c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa874);
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
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    func_0x0001000285a8(param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_6);
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



/* Entry: 101daa874; end: 101daaa1f;  */

ulong FUN_101daa874(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa958);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101daa95c);
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
  func_0x000107c5fb78(0x72656c6c61474353,param_4);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101daaa20);
  (*pcVar2)();
}



/* Entry: 101daaa20; end: 101daab6f;  */

void FUN_101daaa20(undefined1 *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uStack_28;
  
  if (param_1 == (undefined1 *)0x1) {
    puVar2 = (undefined1 *)0x65;
    FUN_1016e7c78();
    lVar4 = SUB168(SEXT816((long)puVar2) * SEXT816(0x5555555555555556),8);
    lVar4 = lVar4 - (lVar4 >> 0x3f);
    param_1 = puVar2;
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
    if (puVar2 + lVar4 * -3 == (undefined1 *)0x1) {
      uVar3 = 0x32;
    }
    else if (puVar2 == (undefined1 *)(lVar4 * 3)) {
      uVar3 = 0xd;
    }
    else {
      uVar3 = 9;
    }
  }
  else {
    if (param_1 == (undefined1 *)0x0) {
      uStack_28 = 0;
      puVar1 = &uStack_28;
      func_0x000107c61598(puVar1,8);
      uVar3 = 3;
      if ((uStack_28 & 0x20000) != 0) {
        uVar3 = 0x31;
      }
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar1,0,0);
      *(undefined1 *)puVar1 = uVar3;
      goto LAB_101daab14;
    }
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
    uVar3 = 3;
  }
  *param_1 = uVar3;
LAB_101daab14:
  func_0x000107c61654();
  return;
}



/* Entry: 101daab70; end: 101daab83;  */

void FUN_101daab70(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 101daab84; end: 101daabbb;  */

void FUN_101daab84(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101daabbc; end: 101daabcf;  */

void FUN_101daabbc(ulong param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if ((param_1 & 1) == 0) {
      func_0x000107c61574(lVar3);
    }
    else {
      func_0x000107c5fadc(uVar4,uVar6);
      uVar6 = *(undefined8 *)(lVar3 + 0x38);
      if (lVar1 == 0) {
        func_0x000107c61174(uVar6);
        uVar5 = 0;
      }
      else {
        func_0x000107c61174(uVar6);
        func_0x000107c5fadc(uVar5,lVar1);
      }
      func_0x000107e675d4(uVar4,bVar2 & 1,uVar6,0,uVar5);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 101daabd0; end: 101daac0f;  */

void FUN_101daabd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101daac10; end: 101daac43;  */

void FUN_101daac10(long param_1,long param_2)

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



/* Entry: 101daac44; end: 101daacc7;  */

double FUN_101daac44(void)

{
  undefined8 uVar1;
  int iVar2;
  long unaff_x20;
  double dVar3;
  
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f010110);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    dVar3 = (double)iVar2;
    *(double *)(unaff_x20 + 0x50) = dVar3;
    *(undefined1 *)(unaff_x20 + 0x58) = 0;
  }
  else {
    dVar3 = *(double *)(unaff_x20 + 0x50);
  }
  return dVar3;
}



/* Entry: 101daacc8; end: 101daadbf;  */

void FUN_101daacc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  
  func_0x0001000285a8(0x112da27c8,&UNK_10d946ff0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c41c80(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  plVar3 = *(long **)(unaff_x20 + 0x48);
  func_0x000100471e0c(plVar3,0);
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_110483380;
  func_0x000107c613fc(&UNK_110483380,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcVar5 = FUN_101dab92c;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_101dab92c);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar6,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 101daadc0; end: 101daae7f;  */

void FUN_101daadc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c615f0();
      func_0x000107c49b28();
      if ((uVar1 & 1) != 0) {
        func_0x000107c61574(param_1);
        func_0x000107c615e8(uVar2);
        return;
      }
      func_0x000107c3f474(uVar2);
      func_0x0001000d224c(&lStack_50);
      if (lStack_50 != 0) {
        func_0x000107c50554(lStack_50);
        func_0x000107c615e8(lStack_50);
      }
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101daae80; end: 101daaf5b;  */

void FUN_101daae80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_110483380;
    func_0x000107c613fc(&UNK_110483380,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    puVar1 = PTR___sytN_11034f1b0;
    func_0x000100087bd4(FUN_101dab934,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c6157c(uVar3);
    func_0x000100087bd4(0x101dab94c,param_2,puVar1 + 8);
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101daaf5c; end: 101daaff7;  */

void FUN_101daaf5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 101daaff8; end: 101dab0af;  */

void FUN_101daaff8(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  double dVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  dVar3 = *(double *)(param_3 + 0x40);
  param_2 = param_2 - dVar3;
  FUN_101daac44();
  *(bool *)param_1 = param_2 <= dVar3;
  return;
}



/* Entry: 101dab0b0; end: 101dab13b;  */

void FUN_101dab0b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101dab13c; end: 101dab157;  */

void FUN_101dab13c(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa1) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dab158,0,0);
  return;
}



/* Entry: 101dab158; end: 101dab26f;  */

void FUN_101dab158(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xa1) & 1) == 0) {
    pcVar1 = FUN_101dab754;
    func_0x000100087bd4(unaff_x22 + 0xa0,FUN_101dab754,*(undefined8 *)(unaff_x22 + 0x58),
                        PTR___sSbN_11034dd40);
    if (*(char *)(unaff_x22 + 0xa0) == '\x01') {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,pcVar1,0,0);
      *pcVar1 = (code)0x26;
      func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dab1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  plVar8 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x18);
  uVar2 = 0x112d512f0;
  func_0x0001000285a8(0x112d512f0,&UNK_10da03ae0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  plVar6 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x68) = plVar6;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dab270;
  plVar3[0xb] = (long)plVar6;
  plVar3[0xc] = unaff_x22 + 0x40;
  plVar3[9] = unaff_x22 + 0x38;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x30;
  lVar7 = *plVar8;
  plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar4 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar4;
  lVar4 = *(long *)(lVar7 + 0x50);
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar5;
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = (long)&UNK_104876614;
  plVar6[5] = uVar5;
  plVar6[6] = (long)plVar8;
  lVar7 = *(long *)(*plVar8 + 0x50);
  plVar6[7] = lVar7;
  lVar4 = 0;
  __sSqMa(0,lVar7);
  plVar6[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar5;
  lVar4 = *(long *)(lVar7 + -8);
  plVar6[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101dab270; end: 101dab2cb;  */

void FUN_101dab270(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101dab2cc;
  }
  else {
    pcVar1 = FUN_101dab660;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dab2cc; end: 101dab42f;  */

void FUN_101dab2cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  puVar4 = *(undefined1 **)(unaff_x22 + 0x30);
  *(undefined1 **)(unaff_x22 + 0x78) = puVar4;
  puVar2 = puVar4;
  func_0x000107c50098(puVar4,param_2,*(undefined8 *)(unaff_x22 + 0x50),0,0);
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x80) = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar2,0,0);
    *puVar2 = 3;
    func_0x000107c61654();
    func_0x000107c615e8(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000101dab428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined1 **)(unaff_x22 + 0x28) = puVar2;
  func_0x000100087bd4(FUN_101dab76c,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c506cc();
  func_0x000107c61180();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    puVar4 = puVar2;
    func_0x000100759c94(puVar2,0);
    *(undefined1 **)(unaff_x22 + 0x88) = puVar4;
    func_0x000107c61170(puVar2);
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101dab430;
                    /* WARNING: Could not recover jumptable at 0x000101dab3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100ff4658)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dab430);
  (*pcVar1)();
}



/* Entry: 101dab430; end: 101dab483;  */

void FUN_101dab430(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined1 *)(lVar1 + 0xa2) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dab484,0,0);
  return;
}



/* Entry: 101dab484; end: 101dab65f;  */

void FUN_101dab484(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  puVar10 = *(undefined **)(unaff_x22 + 0x98);
  if (*(char *)(unaff_x22 + 0xa2) == '\x01') {
    *(undefined **)(unaff_x22 + 0x48) = puVar10;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x48,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  }
  else {
    puVar5 = *(undefined1 **)(unaff_x22 + 0x88);
    func_0x000107c61574();
    if (puVar10 != (undefined *)0x0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xa2);
      uVar6 = uVar11;
      func_0x000107c5b198(uVar11);
      func_0x000107c61180();
      func_0x000107c615e8(uVar1);
      func_0x000107c615e8(uVar4);
      func_0x000100fee724(uVar11,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101dab570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar6);
      return;
    }
    func_0x000101b9d5ac();
    puVar10 = &UNK_1106c31f8;
    func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
    *puVar5 = 4;
    func_0x000107c61654();
  }
  puVar7 = puVar10;
  func_0x000107c5ed2c();
  puVar8 = puVar7;
  FUN_101da61f4();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  if (((uint)puVar8 & 0xff) == 0x3d) {
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar4);
  }
  else {
    puVar9 = puVar8;
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
    *puVar9 = (char)puVar8;
    func_0x000107c61654();
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c614ac(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000101dab65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dab660; end: 101dab6ab;  */

void FUN_101dab660(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101dab6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dab6ac; end: 101dab70b;  */

void FUN_101dab6ac(long param_1,undefined1 param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dab70c;
  *(undefined1 *)((long)plVar1 + 0xa1) = param_2;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dab158,0,0);
  return;
}



/* Entry: 101dab70c; end: 101dab753;  */

void FUN_101dab70c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dab750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dab754; end: 101dab76b;  */

void FUN_101dab754(void)

{
  FUN_101daaff8();
  return;
}



/* Entry: 101dab76c; end: 101dab7a3;  */

void FUN_101dab76c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x38);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x38) = uVar1;
  func_0x000107c615e8(uVar2);
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 101dab7a4; end: 101dab92b;  */

void FUN_101dab7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar1);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f010150);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar2);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  FUN_101daacc8();
  return;
}



/* Entry: 101dab92c; end: 101dab933;  */

void FUN_101dab92c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    puVar3 = &UNK_110483380;
    func_0x000107c613fc(&UNK_110483380,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar2);
    puVar1 = PTR___sytN_11034f1b0;
    func_0x000100087bd4(FUN_101dab934,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    func_0x000107c6157c(uVar4);
    func_0x000100087bd4(0x101dab94c,lVar2,puVar1 + 8);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 101dab934; end: 101dab963;  */

void FUN_101dab934(void)

{
  FUN_101daadc0();
  return;
}



/* Entry: 101dab964; end: 101dab9e7;  */

long FUN_101dab964(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101dab9e8; end: 101daba9b;  */

undefined8 * FUN_101dab9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar7 = param_2[6];
  param_1[6] = uVar7;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar6);
  return param_1;
}



/* Entry: 101daba9c; end: 101dabbb7;  */

undefined8 * FUN_101daba9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101dabbb8; end: 101dabc63;  */

undefined8 * FUN_101dabbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0xb] = param_2[0xb];
  func_0x000107c6142c(param_1[0xc]);
  uVar1 = param_1[0xd];
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101dabc64; end: 101dabd27;  */

int FUN_101dabc64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101dabd28; end: 101dabd47;  */

void FUN_101dabd28(void)

{
  func_0x000107c61168(&PTR_PTR_112e2bb90);
  return;
}



/* Entry: 101dabd48; end: 101dabd97;  */

void FUN_101dabd48(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_101dabd98(&uStack_90);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_48;
    param_1[8] = uStack_50;
    param_1[0xb] = uStack_38;
    param_1[10] = uStack_40;
    param_1[0xd] = uStack_28;
    param_1[0xc] = uStack_30;
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
  }
  return;
}



/* Entry: 101dabd98; end: 101dac12f;  */

void FUN_101dabd98(undefined8 *param_1,undefined1 *param_2,undefined **param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x21;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 *puStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_58;
  
  func_0x000107c4188c();
  func_0x000107c61180();
  puVar2 = param_2;
  if (param_2 != (undefined1 *)0x0) {
    func_0x000107c5ee30();
    func_0x000107c61170(param_2);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(puVar2,param_3);
    puVar3 = puVar2;
    FUN_101d6b26c(puVar2,param_3);
    if (unaff_x21 == 0) {
      ppuStack_78 = param_3;
      func_0x00010006c090(puVar2);
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c44b10();
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = puVar3;
          func_0x000107c5b2c8();
          func_0x000107c61180();
          if (puVar4 != (undefined1 *)0x0) {
            puVar5 = puVar4;
            func_0x000107c447a4();
            if (((ulong)puVar5 & 1) != 0) {
              puVar5 = puVar4;
              func_0x000107c3fbac();
              func_0x000107c61180();
              if (puVar5 != (undefined1 *)0x0) {
                puVar12 = puVar4;
                func_0x000107c5b67c();
                func_0x000107c61180();
                puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar12 != (undefined1 *)0x0) {
                  puStack_58 = (undefined *)0x0;
                  ppuStack_78 = &puStack_58;
                  func_0x000107c5fc50();
                  func_0x000107c61170(puVar12);
                  if (puStack_58 != (undefined *)0x0) {
                    puVar13 = puStack_58;
                  }
                }
                puVar12 = puVar3;
                func_0x000107c4486c();
                ppuVar10 = ppuStack_78;
                if ((int)puVar12 != 0) {
                  puVar12 = puVar3;
                  func_0x000107c429a0();
                  func_0x000107c61180();
                  if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101dac130);
                    (*pcVar1)();
                  }
                  puVar6 = puVar12;
                  func_0x000107c5dc0c();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar12);
                  ppuVar10 = ppuStack_78;
                  if (puVar6 != (undefined1 *)0x0) {
                    puVar12 = puVar6;
                    func_0x000107c5faec();
                    ppuVar10 = ppuStack_78;
                    func_0x000107c61170(puVar6);
                    goto LAB_101dabfb0;
                  }
                }
                puVar12 = (undefined1 *)0x0;
                ppuStack_78 = (undefined **)0x0;
LAB_101dabfb0:
                puVar6 = puVar4;
                func_0x000107c4f9f4();
                func_0x000107c61180();
                if (puVar6 == (undefined1 *)0x0) {
                  ppuStack_88 = (undefined **)0x0;
                  puStack_80 = (undefined1 *)0x0;
                  ppuVar11 = ppuVar10;
                }
                else {
                  puStack_80 = puVar6;
                  func_0x000107c5faec();
                  ppuVar11 = ppuVar10;
                  func_0x000107c61170(puVar6);
                  ppuStack_88 = ppuVar10;
                }
                puVar6 = puVar4;
                func_0x000107c3fd54();
                func_0x000107c61180();
                if (puVar6 == (undefined1 *)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                  puStack_90 = (undefined1 *)0x0;
                  ppuVar10 = ppuVar11;
                }
                else {
                  puStack_90 = puVar6;
                  func_0x000107c5faec();
                  ppuVar10 = ppuVar11;
                  func_0x000107c61170(puVar6);
                  ppuStack_98 = ppuVar11;
                }
                puVar6 = puVar4;
                func_0x000107c3fd50();
                func_0x000107c61180();
                puVar7 = puVar4;
                func_0x000107c44bfc();
                if ((int)puVar7 == 0) {
                  puStack_a0 = (undefined1 *)0x0;
                }
                else {
                  puStack_a0 = puVar4;
                  func_0x000107c5d360();
                  func_0x000107c61180();
                }
                puVar7 = puVar4;
                func_0x000107c42edc();
                func_0x000107c61180();
                if (puVar7 != (undefined1 *)0x0) {
                  puVar8 = puVar7;
                  func_0x000107c5faec();
                  ppuVar11 = ppuVar10;
                  func_0x000107c61170(puVar7);
                  puVar7 = puVar4;
                  func_0x000107c44fd8();
                  func_0x000107c61180();
                  if (puVar7 != (undefined1 *)0x0) {
                    puVar9 = puVar7;
                    func_0x000107c5faec();
                    func_0x000107c61170(puVar7);
                    puVar7 = puVar5;
                    func_0x000107c5dc0c();
                    func_0x00010006c090(puVar2,param_3);
                    func_0x000107c61170(puVar5);
                    func_0x000107c61170(puVar4);
                    func_0x000107c61170(puVar3);
                    *param_1 = puStack_a0;
                    param_1[1] = puVar8;
                    param_1[2] = ppuVar10;
                    param_1[3] = puVar12;
                    param_1[4] = ppuStack_78;
                    param_1[5] = puVar9;
                    param_1[6] = ppuVar11;
                    *(int *)(param_1 + 7) = (int)puVar7;
                    param_1[8] = puVar13;
                    param_1[9] = puStack_80;
                    param_1[10] = ppuStack_88;
                    param_1[0xb] = puStack_90;
                    param_1[0xc] = ppuStack_98;
                    param_1[0xd] = puVar6;
                    return;
                  }
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dac12c);
                  (*pcVar1)();
                }
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101dac128);
                (*pcVar1)();
              }
            }
            func_0x000107c61170(puVar3);
            puVar3 = puVar4;
          }
        }
        func_0x000107c61170(puVar3);
      }
    }
    else {
      func_0x00010006c090(puVar2,param_3);
      func_0x000107c614ac();
    }
    func_0x00010006c090(puVar2,param_3);
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar2,0,0);
  *puVar2 = 2;
  func_0x000107c61654();
  return;
}



/* Entry: 101dac130; end: 101dac1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dac130(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2bbe8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101dac1c8; end: 101dac1fb;  */

void FUN_101dac1c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dac1fc; end: 101dac20b; -[MemoriesSnapDocRenderStepDependencyPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dac1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2bbe8));
  return;
}



/* Entry: 101dac20c; end: 101dac22b;  */

void FUN_101dac20c(void)

{
  func_0x000107c61168(&PTR_PTR_112804158);
  return;
}



/* Entry: 101dac22c; end: 101dac23f;  */

bool FUN_101dac22c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101dac240; end: 101dac2eb;  */

void FUN_101dac240(void)

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


