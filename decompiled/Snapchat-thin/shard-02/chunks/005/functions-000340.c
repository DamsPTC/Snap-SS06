/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101df6944; end: 101df695b;  */

void FUN_101df6944(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df695c,0,0);
  return;
}



/* Entry: 101df695c; end: 101df6a23;  */

void FUN_101df695c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101df69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101df6a24;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110488680;
  func_0x000107c613fc(&UNK_110488680,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101df8210,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101df6a24; end: 101df6a63;  */

void FUN_101df6a24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101df8a64,0,0);
  return;
}



/* Entry: 101df6a64; end: 101df6a7b;  */

void FUN_101df6a64(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6a7c,0,0);
  return;
}



/* Entry: 101df6a7c; end: 101df6b43;  */

void FUN_101df6a7c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101df6ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101df6b44;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110488608;
  func_0x000107c613fc(&UNK_110488608,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101df8180,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101df6b44; end: 101df6bb7;  */

void FUN_101df6b44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101df8a68,0,0);
  return;
}



/* Entry: 101df6bb8; end: 101df6cf3;  */

undefined *
FUN_101df6bb8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101df6cf4);
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
    FUN_101df8140(0,param_6,param_7);
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



/* Entry: 101df6cf4; end: 101df6d33;  */

void FUN_101df6cf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2f058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62440;
  func_0x000107c61520(&UNK_10dc62440,&UNK_1106e3fc0);
  puRam0000000112e2f058 = puVar1;
  return;
}



/* Entry: 101df6d34; end: 101df77c3;  */

undefined1  [16] FUN_101df6d34(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = param_1;
  uVar9 = param_2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar7);
    uVar3 = (uint)(uVar9 >> 0x20);
    uVar12 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        func_0x00010006c090(lVar8,uVar9);
      }
      else {
        func_0x00010006c090(lVar8,uVar9);
        if (SBORROW4((int)((ulong)lVar8 >> 0x20),(int)lVar8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101df707c);
          (*pcVar5)();
        }
      }
    }
    else if (uVar12 == 2) {
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar2 = *(long *)(lVar8 + 0x18);
      func_0x00010006c090(lVar8,uVar9);
      if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101df6dd0);
        (*pcVar5)();
      }
    }
    else {
      func_0x00010006c090(lVar8,uVar9);
    }
  }
  lVar7 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101df7080);
    (*pcVar5)();
  }
  lVar8 = lVar7;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101df7084);
    (*pcVar5)();
  }
  func_0x000107c40808();
  func_0x000107c61170(lVar8);
  lVar7 = param_1;
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101df7088);
    (*pcVar5)();
  }
  func_0x000107c40808();
  func_0x000107c61170(lVar7);
  func_0x000107c602fc(0x58);
  func_0x000107c5fb78(0x42636f4470616e73,0xed00003d73657479);
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar4 = PTR___sSiN_11034deb0;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f011db0);
  puVar10 = puVar11;
  func_0x000107c6057c(puVar4,puVar11);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c5fb78(0x52616964656d202c,0xec0000003d736665);
  func_0x000107c6057c(puVar4,puVar11);
  func_0x000107c5fb78();
  uVar14 = 0x65736c6166;
  func_0x000107c6142c(puVar11);
  func_0x000107c5fb78(0x696445736168202c,0xee003d6f666e4974);
  func_0x000107c4483c();
  bVar6 = (int)param_1 == 0;
  uVar13 = 0x65757274;
  if (bVar6) {
    uVar13 = uVar14;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar13,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f011dd0);
  if (param_3 != 0) {
    uVar9 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar9 = param_3 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uVar13 = 0xe400000000000000;
      uVar14 = 0x65757274;
      goto LAB_101df703c;
    }
  }
  uVar13 = 0xe500000000000000;
LAB_101df703c:
  func_0x000107c5fb78(uVar14,uVar13);
  func_0x000107c6142c(uVar13);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 101df77c4; end: 101df783b;  */

void FUN_101df77c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ab0;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df783c; end: 101df78b3;  */

void FUN_101df783c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ae0;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df78b4; end: 101df792b;  */

void FUN_101df78b4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ab4;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df792c; end: 101df79a3;  */

void FUN_101df792c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ab8;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df79a4; end: 101df7a1b;  */

void FUN_101df79a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8abc;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7a1c; end: 101df7a93;  */

void FUN_101df7a1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ac0;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7a94; end: 101df7b0b;  */

void FUN_101df7a94(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ac4;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7b0c; end: 101df7b83;  */

void FUN_101df7b0c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ac8;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7b84; end: 101df7bfb;  */

void FUN_101df7b84(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8acc;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7bfc; end: 101df7c73;  */

void FUN_101df7bfc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ad0;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7c74; end: 101df7ceb;  */

void FUN_101df7c74(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ad4;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7cec; end: 101df7d63;  */

void FUN_101df7cec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8ad8;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7d64; end: 101df7d9f;  */

void FUN_101df7d64(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101df7da0; end: 101df7e17;  */

void FUN_101df7da0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101df8adc;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df7e18; end: 101df7e5b;  */

undefined8 FUN_101df7e18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101e092b4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101df7e5c; end: 101df7f6f;  */

void FUN_101df7e5c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c5eea4();
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  FUN_101e0411c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined4 *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x20 + 0x34),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101df7f70; end: 101df7fef;  */

undefined8 FUN_101df7f70(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101e092b4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101df7ff0; end: 101df803f;  */

void FUN_101df7ff0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e04614(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),unaff_x20 + 0x48,unaff_x20 + 0x70,
                *(undefined1 *)(unaff_x20 + 0xf9));
  return;
}



/* Entry: 101df8040; end: 101df804f;  */

void FUN_101df8040(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101df8050; end: 101df8097;  */

void FUN_101df8050(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e04afc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101df8098; end: 101df80a3;  */

void FUN_101df8098(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x101df8a7c)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101df80a4; end: 101df813f;  */

void FUN_101df80a4(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101df8180(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101df8140; end: 101df817f;  */

void FUN_101df8140(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101df8180; end: 101df8197;  */

void FUN_101df8180(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101df8180(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101df8198; end: 101df820f;  */

void FUN_101df8198(long param_1)

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
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101df8a8c;
  plVar5[0xb] = lVar2;
  plVar5[0xc] = lVar4;
  plVar5[9] = lVar1;
  plVar5[10] = lVar3;
  plVar5[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df3f20,0,0);
  return;
}



/* Entry: 101df8210; end: 101df821b;  */

void FUN_101df8210(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x101df8a80)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101df821c; end: 101df829f;  */

void FUN_101df821c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x29);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101df8a90;
  *(undefined1 *)((long)plVar5 + 0xb1) = uVar4;
  *(undefined1 *)(plVar5 + 0x16) = uVar3;
  plVar5[0xb] = lVar2;
  plVar5[0xc] = lVar6;
  plVar5[9] = param_1;
  plVar5[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df44f0,0,0);
  return;
}



/* Entry: 101df82a0; end: 101df82d3;  */

void FUN_101df82a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101df82d4; end: 101df8357;  */

void FUN_101df82d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x29);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101df8aa4;
  *(undefined1 *)((long)plVar5 + 0xb1) = uVar4;
  *(undefined1 *)(plVar5 + 0x16) = uVar3;
  plVar5[0xb] = lVar2;
  plVar5[0xc] = lVar6;
  plVar5[9] = param_1;
  plVar5[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df44f0,0,0);
  return;
}



/* Entry: 101df8358; end: 101df83d7;  */

void FUN_101df8358(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101df8a94;
  plVar7[8] = lVar1;
  plVar7[9] = lVar3;
  *(undefined1 *)(plVar7 + 0xf) = uVar4;
  plVar7[6] = lVar5;
  plVar7[7] = lVar2;
  plVar7[5] = param_1;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df3588,0,0);
  return;
}



/* Entry: 101df83d8; end: 101df840b;  */

void FUN_101df83d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101df840c; end: 101df848b;  */

void FUN_101df840c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101df8a98;
  plVar7[8] = lVar1;
  plVar7[9] = lVar3;
  *(undefined1 *)(plVar7 + 0xf) = uVar4;
  plVar7[6] = lVar5;
  plVar7[7] = lVar2;
  plVar7[5] = param_1;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df30a8,0,0);
  return;
}



/* Entry: 101df848c; end: 101df851f;  */

void FUN_101df848c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x40);
  plVar10 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101df8a9c;
  *(undefined1 *)(plVar10 + 0x22) = uVar6;
  plVar10[0xf] = lVar2;
  plVar10[0x10] = lVar5;
  plVar10[0xd] = lVar1;
  plVar10[0xe] = lVar4;
  plVar10[0xb] = lVar7;
  plVar10[0xc] = lVar3;
  plVar10[10] = param_1;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x11] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x12] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df251c,0,0);
  return;
}



/* Entry: 101df8520; end: 101df85bf;  */

void FUN_101df8520(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  plVar11 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101df8aa0;
  plVar11[0x11] = lVar3;
  plVar11[0x12] = lVar7;
  plVar11[0xf] = lVar2;
  plVar11[0x10] = lVar6;
  plVar11[0xd] = lVar1;
  plVar11[0xe] = lVar5;
  plVar11[0xb] = lVar8;
  plVar11[0xc] = lVar4;
  plVar11[10] = param_1;
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar9 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x13] = uVar9;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x14] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df19c8,0,0);
  return;
}



/* Entry: 101df85c0; end: 101df86b3;  */

void FUN_101df85c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar10 = uVar10 + 0x68 & (uVar10 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x40);
  lVar14 = *(long *)(unaff_x20 + 0x50);
  lVar13 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 +
                    (*(long *)(*(long *)(lVar11 + -8) + 0x40) + uVar10 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101df86b4;
  plVar9[0x12] = unaff_x20 + uVar10;
  plVar9[0x13] = lVar11;
  plVar9[0xf] = lVar14;
  plVar9[0xe] = lVar13;
  plVar9[0x11] = lVar8;
  plVar9[0x10] = lVar4;
  plVar9[0xc] = lVar7;
  plVar9[0xd] = lVar12;
  plVar9[10] = lVar6;
  plVar9[0xb] = lVar3;
  plVar9[8] = lVar5;
  plVar9[9] = lVar2;
  plVar9[6] = param_1;
  plVar9[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df1310,0,0);
  return;
}



/* Entry: 101df86b4; end: 101df86ef;  */

void FUN_101df86b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101df86ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101df86f0; end: 101df87bf;  */

void FUN_101df86f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x41);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x42);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x43);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  lVar14 = *(long *)(unaff_x20 + 0x48);
  lVar13 = *(long *)(unaff_x20 + 0x58);
  plVar12 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = 0x101df8aa8;
  plVar12[0x11] = lVar13;
  plVar12[0x10] = lVar15;
  plVar12[0xf] = lVar14;
  *(undefined1 *)((long)plVar12 + 0xd3) = uVar9;
  *(undefined1 *)((long)plVar12 + 0xd2) = uVar8;
  *(undefined1 *)((long)plVar12 + 0xd1) = uVar7;
  *(undefined1 *)(plVar12 + 0x1a) = uVar6;
  plVar12[0xd] = lVar2;
  plVar12[0xe] = lVar5;
  plVar12[0xb] = lVar1;
  plVar12[0xc] = lVar4;
  plVar12[9] = lVar10;
  plVar12[10] = lVar3;
  plVar12[8] = param_1;
  lVar10 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar11 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar12[0x12] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df0914,0,0);
  return;
}



/* Entry: 101df87c0; end: 101df884b;  */

void FUN_101df87c0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  long *plVar10;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101df884c;
  plVar7[4] = lVar8;
  plVar7[5] = lVar6;
  plVar7[2] = lVar5;
  plVar7[3] = lVar1;
  lVar8 = lVar3;
  func_0x000107c5faec();
  plVar7[6] = lVar8;
  if (lVar4 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8;
    func_0x000107c5faec();
  }
  plVar7[7] = lVar9;
  plVar10 = (long *)0xc0;
  func_0x000107c61174();
  func_0x000107c61174(lVar1);
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar7[8] = (long)plVar10;
  *plVar10 = (long)plVar7;
  plVar10[1] = (long)FUN_101def8b4;
  plVar10[0xd] = lVar9;
  plVar10[0xe] = lVar6;
  plVar10[0xb] = lVar1;
  plVar10[0xc] = lVar4;
  plVar10[9] = lVar3;
  plVar10[10] = lVar8;
  plVar10[8] = lVar5;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0xf] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101def184,0,0);
  return;
}



/* Entry: 101df884c; end: 101df8887;  */

void FUN_101df884c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101df8884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101df8888; end: 101df88ff;  */

void FUN_101df8888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101df8ae4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101df8900; end: 101df892b;  */

void FUN_101df8900(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101df892c; end: 101df89af;  */

void FUN_101df892c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101df8ae8;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101df89b0; end: 101df8a37;  */

undefined8 FUN_101df89b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101df8a38; end: 101df8aeb;  */

void FUN_101df8a38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_101de2d64(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                *(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61654();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101deef54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df8aec; end: 101df8b37;  */

void FUN_101df8aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101df8b38; end: 101df8d77;  */

undefined * FUN_101df8b38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_90);
  puVar6 = puStack_90;
  if (puStack_90 == (undefined *)0x0) {
    puVar5 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_101df6cf4();
    puVar6 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
    puVar5[1] = 0;
    *puVar5 = 0x16;
    *(undefined1 *)(puVar5 + 2) = 0x80;
    puVar8 = puVar6;
    func_0x00010488904c();
    func_0x000107c614ac(puVar6);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    uVar7 = 0x18;
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    func_0x000104477d90(0);
    func_0x000104477bac();
    func_0x0001000295c4(0);
    (**(code **)(lVar10 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
    lVar3 = lVar9;
    func_0x000107c5fff0(lVar9);
    (**(code **)(lVar10 + 8))(lVar9,lVar1);
    puVar8 = &UNK_1104888d0;
    func_0x000107c613fc(&UNK_1104888d0,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = param_2;
    *(undefined8 *)(puVar8 + 0x18) = uVar7;
    *(long *)(puVar8 + 0x20) = lVar2;
    uStack_70 = 0x101df9004;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab47f8;
    puStack_78 = &UNK_1104888e8;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar4);
    puVar8 = puStack_68;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c3e41c(puVar6);
    func_0x000107c615e8(puVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    puVar8 = *(undefined **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(lVar2);
  }
  return puVar8;
}



/* Entry: 101df8d78; end: 101df8f1f;  */

undefined * FUN_101df8d78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar4 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    puVar3 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_101df6cf4();
    puVar4 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 0x16;
    *(undefined1 *)(puVar3 + 2) = 0x80;
    puVar6 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    uVar5 = 0x18;
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    func_0x000104477d90(0);
    func_0x000104477bac();
    puVar6 = &UNK_110488880;
    func_0x000107c613fc(&UNK_110488880,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar5;
    *(long *)(puVar6 + 0x20) = lVar1;
    pcStack_50 = FUN_101df8f98;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_110488898;
    puStack_48 = puVar6;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar6);
    func_0x000107c4feb8(puVar4);
    func_0x000107c615e8(puVar4);
    func_0x000107c60bd0(ppuVar2);
    puVar6 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(lVar1);
  }
  return puVar6;
}



/* Entry: 101df8f20; end: 101df8f97;  */

void FUN_101df8f20(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 in_register_00005008;
  
  if (((ulong)param_2 & 1) != 0) {
    func_0x000100b60084();
    return;
  }
  FUN_101df6cf4();
  puVar1 = &UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,param_2,0,0);
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 2) = 0x80;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101df8f98; end: 101df8fbb;  */

void FUN_101df8f98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101df8f20(0x12,param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101df8fbc; end: 101df8fd7;  */

void FUN_101df8fbc(long param_1,long param_2)

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



/* Entry: 101df8fd8; end: 101df9027;  */

void FUN_101df8fd8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101df9028; end: 101df902f;  */

void FUN_101df9028(long param_1,long param_2)

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



/* Entry: 101df9030; end: 101df9117;  */

void FUN_101df9030(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101df9118; end: 101df9413;  */

/* WARNING: Removing unreachable block (ram,0x000101df9340) */

void FUN_101df9118(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x22;
  
  puVar11 = *(undefined8 **)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x20);
  func_0x0001000d224c(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  lVar10 = *(long *)(unaff_x22 + 0x40);
  lVar3 = lVar12;
  func_0x000107c614f0();
  (**(code **)(lVar10 + 0x10))(puVar11,lVar3,lVar10);
  lVar10 = lVar3;
  func_0x000107c615e8(lVar12);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001000d224c(unaff_x22 + 0x48);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x48);
    lVar3 = *(long *)(unaff_x22 + 0x50);
    puVar11 = puVar4;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x28))();
    lVar10 = lVar3;
    func_0x000107c615e8();
    if (puVar11 == (undefined8 *)0x0) {
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x10;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
      func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101df9408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  *(undefined8 **)(unaff_x22 + 0xe8) = puVar11;
  *(char *)(unaff_x22 + 0x33) = (char)lVar3;
  if ((*(char *)(unaff_x22 + 0x31) == '\x01') && (*(char *)(unaff_x22 + 0x32) == '\x01')) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x88);
    lVar12 = *(long *)(unaff_x22 + 0x88);
    if (lVar12 != 0) {
      puVar4 = puVar11;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101df9410);
        (*pcVar2)();
      }
      puVar5 = puVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar4);
      uVar6 = 0;
      puVar4 = puVar5;
      func_0x000107c5ee24(0,puVar5,lVar10);
      func_0x00010006c090(puVar5,lVar10);
      puVar5 = puVar4;
      func_0x000107c5fadc(uVar6,puVar4);
      func_0x000107c6142c(puVar4);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101df9414);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
      puVar4 = puVar11;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar11);
      uVar7 = 0;
      puVar11 = puVar4;
      func_0x000107c5ee24(0,puVar4,puVar5);
      func_0x00010006c090(puVar4,puVar5);
      func_0x000107c5fadc(uVar7,puVar11);
      func_0x000107c6142c(puVar11);
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c51688(lVar12);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c615e8(lVar12);
    }
  }
  else {
    func_0x000107c61174(puVar11);
  }
  func_0x000107c5fd64();
  plVar9 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101df9414;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101df9414; end: 101df948b;  */

void FUN_101df9414(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  
  lVar8 = *unaff_x22;
  lVar1 = *(long *)(lVar8 + 0xe8);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xf0));
  plVar4 = (long *)0x230;
  func_0x000107c615b8();
  *(long **)(lVar8 + 0xf8) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_101df948c;
  lVar7 = *(long *)(lVar8 + 0xb8);
  lVar6 = *(long *)(lVar8 + 0x98);
  lVar2 = *(long *)(lVar8 + 0xa0);
  lVar5 = *(long *)(lVar8 + 0x90);
  uVar3 = *(undefined1 *)(lVar8 + 0x33);
  plVar4[0x3b] = lVar1;
  plVar4[0x3c] = lVar7;
  *(undefined1 *)((long)plVar4 + 0x152) = uVar3;
  plVar4[0x39] = lVar6;
  plVar4[0x3a] = lVar2;
  plVar4[0x38] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df9d94,0,0);
  return;
}



/* Entry: 101df948c; end: 101df94ef;  */

void FUN_101df948c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    func_0x000107c61170(*(undefined8 *)(lVar2 + 0xe8));
    pcVar1 = FUN_101df94f0;
  }
  else {
    pcVar1 = FUN_101df9ba4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df94f0; end: 101df9857;  */

void FUN_101df94f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  if (*(char *)(unaff_x22 + 0x31) == '\x01') {
    func_0x0001000d224c(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar10 = *(long *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar8;
    func_0x000107c614f0(uVar8);
    piVar9 = *(int **)(lVar10 + 0x30);
    iVar1 = *piVar9;
    plVar3 = (long *)(ulong)(uint)piVar9[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101df9858;
                    /* WARNING: Could not recover jumptable at 0x000101df959c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x90),uVar8,lVar10);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001000d224c(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x60);
  uVar5 = uVar8;
  func_0x000107c614f0(uVar8);
  (**(code **)(lVar10 + 8))(unaff_x22 + 0x10,uVar4,uVar5,lVar10);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar4);
  if (*(char *)(unaff_x22 + 0x30) == '\x04') {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar11 = PTR_PTR_1126bf908;
    func_0x000107c610f8(PTR_PTR_1126bf908);
    func_0x00010006c00c(uVar8,uVar12);
    func_0x00010006c00c(uVar5,uVar2);
    uVar6 = uVar8;
    func_0x000107c5ee20(uVar8,uVar12);
    func_0x00010006c090(uVar8,uVar12);
    uVar7 = uVar5;
    func_0x000107c5ee20(uVar5,uVar2);
    func_0x00010006c090(uVar5,uVar2);
    func_0x000107c4703c(puVar11);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x0001000d224c(unaff_x22 + 0x78);
    lVar10 = *(long *)(unaff_x22 + 0x78);
    if (lVar10 == 0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
      FUN_101dfed18(unaff_x22 + 0x10,0x112e293d0,&UNK_10da11820);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5ee20(uVar8,uVar12);
      func_0x000107c5ee20(uVar5,uVar2);
      func_0x000107c5fadc(uVar6,uVar7);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c3d720(lVar10);
      func_0x000107c61170(uVar12);
      FUN_101dfed18(unaff_x22 + 0x10,0x112e293d0,&UNK_10da11820);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(lVar10);
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101df9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,puVar11);
  return;
}



/* Entry: 101df9858; end: 101df98cb;  */

void FUN_101df9858(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x108);
  *(long *)(lVar3 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x110));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x120) = param_1;
    pcVar2 = FUN_101df98cc;
  }
  else {
    pcVar2 = FUN_101df9bf4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df98cc; end: 101df9ba3;  */

void FUN_101df98cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61174();
  func_0x0001000d224c(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  uVar3 = uVar6;
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar7 + 8))(unaff_x22 + 0x10,uVar2,uVar3,lVar7);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar2);
  if (*(char *)(unaff_x22 + 0x30) == '\x04') {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar8 = PTR_PTR_1126bf908;
    func_0x000107c610f8(PTR_PTR_1126bf908);
    func_0x00010006c00c(uVar6,uVar9);
    func_0x00010006c00c(uVar3,uVar1);
    uVar4 = uVar6;
    func_0x000107c5ee20(uVar6,uVar9);
    func_0x00010006c090(uVar6,uVar9);
    uVar5 = uVar3;
    func_0x000107c5ee20(uVar3,uVar1);
    func_0x00010006c090(uVar3,uVar1);
    func_0x000107c4703c(puVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x0001000d224c(unaff_x22 + 0x78);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    if (lVar7 == 0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
      FUN_101dfed18(unaff_x22 + 0x10,0x112e293d0,&UNK_10da11820);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5ee20(uVar6,uVar9);
      func_0x000107c5ee20(uVar3,uVar1);
      func_0x000107c5fadc(uVar4,uVar5);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c3d720(lVar7);
      func_0x000107c61170(uVar9);
      FUN_101dfed18(unaff_x22 + 0x10,0x112e293d0,&UNK_10da11820);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c615e8(lVar7);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101df9ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,puVar8);
  return;
}



/* Entry: 101df9ba4; end: 101df9bf3;  */

void FUN_101df9ba4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df9bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df9bf4; end: 101df9d6f;  */

void FUN_101df9bf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  plVar5 = (long *)(unaff_x22 + 0x80);
  *plVar5 = *(long *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c614b0();
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar6,plVar5,uVar7,uVar8,0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  if ((int)uVar6 == 0) {
    puVar4 = (undefined8 *)*plVar5;
    func_0x000107c614ac();
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    *puVar4 = uVar8;
    puVar4[1] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    func_0x000107c61654();
    func_0x000107c61170(uVar7);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar3 = *(long *)(unaff_x22 + 200);
    func_0x000107c614ac(uVar8);
    (**(code **)(lVar3 + 0x20))(uVar1,uVar6,uVar2);
    uVar6 = 0x112d4e4a0;
    func_0x000101dfed58(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(uVar2,uVar6,0,0);
    (**(code **)(lVar3 + 0x10))(uVar6,uVar1,uVar2);
    func_0x000107c61654();
    func_0x000107c61170(uVar7);
    (**(code **)(lVar3 + 8))(uVar1,uVar2);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101df9d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df9d70; end: 101df9d93;  */

void FUN_101df9d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x152) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df9d94,0,0);
  return;
}



/* Entry: 101df9d94; end: 101dfa2b3;  */

/* WARNING: Removing unreachable block (ram,0x000101df9dd0) */

void FUN_101df9d94(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  long unaff_x22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  
  func_0x000101dfdd04();
  FUN_101dfde78();
  *(long *)(unaff_x22 + 0x1e8) = param_1;
  *(long *)(unaff_x22 + 0x120) = param_1;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined1 *)(unaff_x22 + 0x150) = *(undefined1 *)(unaff_x22 + 0x152);
  iVar7 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar7 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1f0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101dfa2b4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  uVar1 = unaff_x22 + 0x10;
  func_0x000107c615ac(uVar1,PTR___sytN_11034f1b0 + 8);
  *(ulong *)(unaff_x22 + 0x1b8) = uVar1;
  puVar21 = (ulong *)(param_1 + 0x40);
  lVar17 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = -lVar17;
  uVar23 = 0xffffffffffffffff;
  if (uVar19 < 0x40) {
    uVar23 = ~(-1L << (uVar19 & 0x3f));
  }
  uVar23 = uVar23 & *puVar21;
  func_0x000107c61434();
  lVar24 = 0;
  do {
    lVar10 = 0x112d453c8;
    while (uVar23 == 0) {
      bVar6 = SCARRY8(lVar24,1);
      lVar24 = lVar24 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101dfa2b4);
        (*pcVar5)();
      }
      if ((long)(0x3fU - lVar17 >> 6) <= lVar24) {
        func_0x000107c61574();
        uVar13 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
        uVar23 = uVar1;
        func_0x000107c5fd8c(uVar1,PTR___sytN_11034f1b0 + 8,uVar13,PTR___ss5ErrorWS_11034ee10);
        if ((uVar23 & 1) != 0) {
          plVar8 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4)
          ;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x200) = plVar8;
          func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_101dfa318;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
          return;
        }
        *(undefined8 *)(unaff_x22 + 0x208) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
                  (unaff_x22 + 0x151,uVar1,FUN_101dfa3a8,unaff_x22 + 400);
        return;
      }
      uVar23 = puVar21[lVar24];
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x152);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar20 = *(ulong *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar19 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar19 = lVar24 << 9 | LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) << 3;
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar19);
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar19);
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar19 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
    uVar9 = uVar19 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    lVar10 = 0;
    func_0x000107c5fd0c();
    lVar25 = *(long *)(lVar10 + -8);
    (**(code **)(lVar25 + 0x38))(uVar9,1,1,lVar10);
    puVar11 = &UNK_110488930;
    func_0x000107c613fc(&UNK_110488930,0x60,7);
    *(long *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x20) = uVar15;
    *(undefined8 *)(puVar11 + 0x28) = uVar2;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    *(undefined8 *)(puVar11 + 0x38) = uVar13;
    *(ulong *)(puVar11 + 0x40) = uVar20;
    puVar11[0x48] = uVar4;
    *(undefined8 *)(puVar11 + 0x50) = uVar18;
    *(undefined8 *)(puVar11 + 0x58) = uVar16;
    uVar19 = uVar19 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x0001000abe04(uVar9,uVar19);
    uVar12 = uVar19;
    (**(code **)(lVar25 + 0x30))(uVar19,1,lVar10);
    func_0x000107c61434(uVar16);
    func_0x000107c6157c(uVar15);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar13);
    func_0x000107c61174(uVar20);
    if ((int)uVar12 == 1) {
      FUN_101dfed18(uVar19,0x112d453c8,&UNK_10d90ac60);
      uVar20 = 0x3100;
    }
    else {
      func_0x000107c5fd08();
      (**(code **)(lVar25 + 8))(uVar19,lVar10);
      uVar20 = uVar20 & 0xff | 0x3100;
    }
    func_0x000107c615c0(uVar19);
    lVar10 = *(long *)(puVar11 + 0x10);
    if (lVar10 == 0) {
      lVar25 = 0;
      lVar22 = 0;
    }
    else {
      lVar22 = *(long *)(puVar11 + 0x18);
      lVar25 = lVar10;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar10);
      func_0x000107c5fca8();
      func_0x000107c615e8(lVar10);
    }
    func_0x000107c6157c(puVar11);
    if (lVar22 == 0 && lVar25 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x160) = 0;
      *(long *)(unaff_x22 + 0x168) = lVar25;
      *(long *)(unaff_x22 + 0x170) = lVar22;
      puVar14 = (undefined8 *)(unaff_x22 + 0x158);
    }
    uVar23 = uVar23 - 1 & uVar23;
    *(undefined8 *)(unaff_x22 + 0x178) = 1;
    *(undefined8 **)(unaff_x22 + 0x180) = puVar14;
    *(ulong *)(unaff_x22 + 0x188) = uVar1;
    func_0x000107c615bc(uVar20,unaff_x22 + 0x178,PTR___sytN_11034f1b0 + 8,&UNK_10da17f78,puVar11);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(uVar20);
    FUN_101dfed18(uVar9,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar9);
  } while( true );
}



/* Entry: 101dfa2b4; end: 101dfa317;  */

void FUN_101dfa2b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f0));
  if (unaff_x20 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x1e8));
    pcVar1 = FUN_101dfa734;
  }
  else {
    *(long *)(lVar2 + 0x228) = unaff_x20;
    pcVar1 = FUN_101dfa740;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dfa318; end: 101dfa3a7;  */

void FUN_101dfa318(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dfa360,0,0);
  return;
}



/* Entry: 101dfa3a8; end: 101dfa3d7;  */

void FUN_101dfa3a8(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x210) = unaff_x20;
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x153) = *(undefined1 *)(unaff_x22 + 0x151);
    pcVar1 = FUN_101dfa3d8;
  }
  else {
    pcVar1 = FUN_101dfa5d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dfa3d8; end: 101dfa533;  */

void FUN_101dfa3d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x153) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x208);
    *(long *)(unaff_x22 + 0x218) = lVar7;
    puVar2 = PTR___sytN_11034f1b0;
    uVar3 = unaff_x22 + 0x10;
    func_0x000107c5fd8c(uVar3,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x1f8),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar3 & 1) != 0) {
      if (lVar7 == 0) {
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x200) = plVar4;
        func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
        pcVar5 = FUN_101dfa318;
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
        func_0x000107c61654();
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        func_0x000107c5fd94(unaff_x22 + 0x10,puVar2 + 8,uVar6,PTR___ss5ErrorWS_11034ee10);
        func_0x000107c61654();
        func_0x000107c5fd94(unaff_x22 + 0x10,puVar2 + 8,uVar6,puVar1);
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x220) = plVar4;
        func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
        pcVar5 = FUN_101dfa534;
      }
      *plVar4 = unaff_x22;
      plVar4[1] = (long)pcVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
      return;
    }
    *(long *)(unaff_x22 + 0x208) = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x151,unaff_x22 + 0x10,FUN_101dfa3a8,unaff_x22 + 400);
  return;
}



/* Entry: 101dfa534; end: 101dfa57b;  */

void FUN_101dfa534(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfa57c,0,0);
  return;
}



/* Entry: 101dfa57c; end: 101dfa5cf;  */

void FUN_101dfa57c(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfa740,0,0);
  return;
}



/* Entry: 101dfa5d0; end: 101dfa733;  */

void FUN_101dfa5d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x210);
  if (*(long *)(unaff_x22 + 0x208) != 0) {
    func_0x000107c614ac(lVar7);
    lVar7 = *(long *)(unaff_x22 + 0x208);
  }
  *(long *)(unaff_x22 + 0x218) = lVar7;
  puVar2 = PTR___sytN_11034f1b0;
  uVar3 = unaff_x22 + 0x10;
  func_0x000107c5fd8c(uVar3,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x1f8),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar3 & 1) != 0) {
    if (lVar7 == 0) {
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x200) = plVar4;
      func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
      pcVar5 = FUN_101dfa318;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
      func_0x000107c61654();
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c5fd94(unaff_x22 + 0x10,puVar2 + 8,uVar6,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61654();
      func_0x000107c5fd94(unaff_x22 + 0x10,puVar2 + 8,uVar6,puVar1);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x220) = plVar4;
      func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
      pcVar5 = FUN_101dfa534;
    }
    *plVar4 = unaff_x22;
    plVar4[1] = (long)pcVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
    return;
  }
  *(long *)(unaff_x22 + 0x208) = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x151,unaff_x22 + 0x10,FUN_101dfa3a8,unaff_x22 + 400);
  return;
}



/* Entry: 101dfa734; end: 101dfa73f;  */

void FUN_101dfa734(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dfa73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dfa740; end: 101dfa807;  */

void FUN_101dfa740(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e8));
                    /* WARNING: Could not recover jumptable at 0x000101dfa770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dfa808; end: 101dfa953;  */

/* WARNING: Removing unreachable block (ram,0x000101dfa858) */
/* WARNING: Removing unreachable block (ram,0x000101dfa87c) */
/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfa808(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE_02;
  code *pcVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  code *UNRECOVERED_JUMPTABLE_00;
  long unaff_x19;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  long unaff_x21;
  undefined *puVar22;
  undefined8 *puVar23;
  long *unaff_x22;
  long *plVar24;
  ulong uVar25;
  long unaff_x23;
  int *piVar26;
  code *pcVar27;
  ulong uVar28;
  undefined8 *unaff_x24;
  undefined8 uVar29;
  long lVar30;
  undefined8 *unaff_x25;
  undefined8 uVar31;
  undefined8 *unaff_x26;
  undefined *unaff_x27;
  code *unaff_x28;
  ulong unaff_x29;
  ulong *puVar32;
  ulong uVar33;
  code *unaff_x30;
  undefined1 auStack_230 [8];
  long lStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  code *pcStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  code *pcStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_190;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = unaff_x22[0x15];
  iVar5 = (int)unaff_x22[0x13];
  func_0x000107c5d0f0();
  if (*(char *)(lVar18 + 0x40) == '\x01' && iVar5 == 1) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x150;
    func_0x000107c615b8();
    unaff_x22[0x19] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101dfa954;
    lVar18 = unaff_x22[0x14];
    plVar20 = (long *)unaff_x22[0x15];
    lVar19 = unaff_x22[0x12];
    lVar16 = unaff_x22[0x13];
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x11];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      puVar32 = (ulong *)(uStack_10 & 0xefffffffffffffff);
code_r0x000101dfb414:
      *(ulong *)((long)register0x00000008 + -0x10) = (ulong)puVar32 | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(code **)((long)register0x00000008 + -0x18) = UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xa0) = lVar18;
      *(long **)(UNRECOVERED_JUMPTABLE_00 + 0xa8) = plVar20;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x90) = lVar19;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x98) = lVar16;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = UNRECOVERED_JUMPTABLE;
      lVar18 = 0;
      func_0x000107c5ede0();
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xb0) = lVar18;
      lVar18 = *(long *)(lVar18 + -8);
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xb8) = lVar18;
      uVar33 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(UNRECOVERED_JUMPTABLE_00 + 0xc0) = uVar33;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20))
      {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfb4a8;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(long *)((long)register0x00000008 + -0x40) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x30) =
           (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x28) = FUN_101dfb4a8;
      *(code **)((long)register0x00000008 + -0x38) = UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c5fd64();
      plVar20 = *(long **)(*(long *)(UNRECOVERED_JUMPTABLE_00 + 0xa8) + 0x38);
      UNRECOVERED_JUMPTABLE_02 = (code *)0x70;
      func_0x000107c615b8();
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 200) = UNRECOVERED_JUMPTABLE_02;
      *(code **)UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_00;
      *(code **)(UNRECOVERED_JUMPTABLE_02 + 8) = FUN_101dfb57c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + 0x10;
        unaff_x30 = *(code **)((long)register0x00000008 + -0x28);
        uVar33 = *(ulong *)((long)register0x00000008 + -0x30) & 0xefffffffffffffff;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
        UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
        goto LAB_104875f04;
      }
      func_0x000107c60e78();
      *(ulong *)((long)register0x00000008 + -0x60) =
           (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x58) = FUN_101dfb57c;
      *(code **)((long)register0x00000008 + -0x68) = UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)UNRECOVERED_JUMPTABLE_00;
      *(long *)((long)register0x00000008 + -0x68) = lVar18;
      plVar24 = *(long **)UNRECOVERED_JUMPTABLE_00;
      func_0x000107c615c0(*(undefined8 *)(lVar18 + 200));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
      {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfb5f0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(undefined8 **)((long)register0x00000008 + -0xa8) = unaff_x24;
      *(long *)((long)register0x00000008 + -0xa0) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(long *)((long)register0x00000008 + -0x90) = unaff_x19;
      *(ulong *)((long)register0x00000008 + -0x80) =
           (ulong)((long)register0x00000008 + -0x60) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x78) = FUN_101dfb5f0;
      *(long **)((long)register0x00000008 + -0x88) = plVar24;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar24[5];
      lVar19 = plVar24[6];
      plVar20 = plVar24 + 2;
      func_0x0001000a8868(plVar20,lVar18);
      piVar26 = *(int **)(lVar19 + 0x10);
      iVar5 = *piVar26;
      puVar21 = (undefined8 *)(ulong)(uint)piVar26[1];
      func_0x000107c615b8();
      plVar24[0x1a] = (long)puVar21;
      *puVar21 = plVar24;
      puVar21[1] = FUN_101dfb6a4;
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0))
      {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar5 + (long)piVar26))
                  (UNRECOVERED_JUMPTABLE_00,plVar24[0x12],plVar24[0x13],1,lVar18,lVar19);
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      plVar4 = (long *)((long)register0x00000008 + -0xd0);
      *(ulong *)((long)register0x00000008 + -0xc0) =
           (ulong)((long)register0x00000008 + -0x80) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0xb8) = FUN_101dfb6a4;
      *(long **)((long)register0x00000008 + -200) = plVar24;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *plVar24;
      *(long *)((long)register0x00000008 + -200) = lVar16;
      plVar24 = (long *)*plVar24;
      *(undefined8 **)(lVar16 + 0xd8) = puVar21;
      *(long **)(lVar16 + 0xe0) = plVar20;
      func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xd0));
      if (plVar20 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd0)
           ) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
               *(long *)((long)register0x00000008 + -0xd0)) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(long *)((long)register0x00000008 + -0xf8) = lVar19;
      *(long *)((long)register0x00000008 + -0xf0) = lVar18;
      *(ulong *)((long)register0x00000008 + -0xe0) =
           (ulong)((long)register0x00000008 + -0xc0) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0xd8) = FUN_101dfb748;
      *(long **)((long)register0x00000008 + -0xe8) = plVar24;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar24[0x15];
      func_0x0001000834e4(plVar24 + 2);
      plVar20 = *(long **)(lVar18 + 0x18);
      lVar18 = 0x112d51300;
      puVar22 = &UNK_10d917f90;
      func_0x0001000285a8();
      plVar15 = plVar24 + 0xc;
      *plVar15 = lVar18;
      puVar6 = (undefined8 *)0xa0;
      func_0x000107c615b8();
      plVar24[0x1d] = (long)puVar6;
      puVar21 = puVar6;
      func_0x000100faa6a0();
      plVar24[0x1e] = (long)puVar21;
      *puVar6 = plVar24;
      puVar6[1] = FUN_101dfb814;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x100))
      {
        lVar18 = *(long *)((long)register0x00000008 + -0xf0);
        UNRECOVERED_JUMPTABLE_00 = *(code **)((long)register0x00000008 + -0xd8);
        uVar33 = *(ulong *)((long)register0x00000008 + -0xe0);
        goto LAB_104876574;
      }
      func_0x000107c60e78();
      *(ulong *)((long)register0x00000008 + -0x110) =
           (ulong)((long)register0x00000008 + -0xe0) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x108) = FUN_101dfb814;
      *(long **)((long)register0x00000008 + -0x118) = plVar24;
      *(undefined8 *)((long)register0x00000008 + -0x120) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *plVar24;
      *(long *)((long)register0x00000008 + -0x118) = lVar18;
      lVar19 = *plVar24;
      *(long **)(lVar18 + 0xf8) = plVar20;
      func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe8));
      if (plVar20 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x120)) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
               *(long *)((long)register0x00000008 + -0x120)) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(code **)((long)register0x00000008 + -0x178) = unaff_x28;
      *(undefined **)((long)register0x00000008 + -0x170) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x158) = (long)iVar5;
      *(int **)((long)register0x00000008 + -0x150) = piVar26;
      *(undefined8 **)((long)register0x00000008 + -0x148) = puVar6;
      *(long **)((long)register0x00000008 + -0x140) = plVar15;
      *(ulong *)((long)register0x00000008 + -0x130) =
           (ulong)((long)register0x00000008 + -0x110) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x128) = FUN_101dfb8b4;
      *(long *)((long)register0x00000008 + -0x138) = lVar19;
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(lVar19 + 0x70) = 0;
      puVar17 = *(undefined8 **)(lVar19 + 0x58);
      *(undefined8 **)(lVar19 + 0x100) = puVar17;
      puVar21 = puVar17;
      func_0x000107c40984();
      func_0x000107c61180();
      *(undefined8 **)(lVar19 + 0x108) = puVar21;
      lVar18 = *(long *)(lVar19 + 0x70);
      func_0x000107c61174();
      puVar6 = puVar21;
      func_0x000107c4403c();
      func_0x000107c61180();
      if (puVar6 == (undefined8 *)0x0) {
        if (lVar18 != 0) goto LAB_101dfb944;
        puVar23 = *(undefined8 **)(lVar19 + 0xd8);
        uVar13 = *(undefined8 *)(lVar19 + 0xc0);
        puVar6 = puVar21;
        func_0x000107c4407c(puVar21);
        func_0x000107c61180();
        puVar8 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        puVar9 = puVar22;
        func_0x000107c5ed80(uVar13,puVar8);
        func_0x000107c6142c(puVar22);
        puVar6 = puVar23;
        func_0x000107c614f0();
        func_0x000107c4407c();
        func_0x000107c61180();
        lVar18 = *(long *)(lVar19 + 0xa0);
        if (puVar23 == (undefined8 *)0x0) {
          func_0x000107c4a8c4();
          func_0x000107c61180();
          if (lVar18 == 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar30 = *(long *)(lVar19 + 0xa0);
          lVar16 = lVar18;
          func_0x000107c5ee30();
          *(undefined **)((long)register0x00000008 + -400) = puVar9;
          func_0x000107c61170(lVar18);
          func_0x000107c4a804();
          func_0x000107c61180();
          if (lVar30 == 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar18 = lVar30;
          func_0x000107c5ee30();
          puVar22 = puVar9;
          func_0x000107c61170(lVar30);
          FUN_101dffdc4();
          *(long *)((long)register0x00000008 + -0x1a0) = lVar18;
          *(undefined **)((long)register0x00000008 + -0x198) = puVar9;
          if ((ulong)puVar22 >> 0x3c < 0xf) {
            func_0x0001000d224c(lVar19 + 0x38);
            uVar33 = *(ulong *)(lVar19 + 0x38);
            lVar30 = *(long *)(lVar19 + 0x40);
            uVar25 = uVar33;
            func_0x000107c614f0();
            *(ulong *)(lVar19 + 0x78) = uVar33;
            (**(code **)(*(long *)(lVar30 + 8) + 0x28))();
            func_0x000107c615e8(uVar33);
            *(undefined8 **)((long)register0x00000008 + -0x1b0) = puVar6;
            *(undefined **)((long)register0x00000008 + -0x1a8) = puVar22;
            func_0x000107c5ee20(puVar6,puVar22);
            *(long *)((long)register0x00000008 + -0x1b8) = lVar16;
            func_0x000107c5ee20(lVar16,*(undefined8 *)((long)register0x00000008 + -400));
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x198);
            func_0x000107c5ee20(lVar18,uVar13);
            puVar8 = puVar6;
            if ((uVar25 & 1) == 0) {
              func_0x000107c51bb8();
            }
            else {
              func_0x000107c51bbc();
            }
            func_0x000107c61180();
            func_0x000107c61170(lVar18);
            func_0x000107c61170(lVar16);
            func_0x000107c61170();
            if (puVar8 != (undefined8 *)0x0) {
              lVar18 = *(long *)(lVar19 + 0xf8);
              puVar23 = *(undefined8 **)(lVar19 + 0xc0);
              puVar6 = puVar8;
              func_0x000107c5ee30(puVar8);
              func_0x000107c61170(puVar8);
              func_0x000107c5ee40(puVar23,1,puVar6,uVar13);
              if (lVar18 == 0) {
                func_0x0001000b44c0(*(undefined8 *)((long)register0x00000008 + -0x1b0),
                                    *(undefined8 *)((long)register0x00000008 + -0x1a8));
                func_0x00010006c090(puVar6,uVar13);
                uVar13 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
                func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x1a0),
                                    *(undefined8 *)((long)register0x00000008 + -0x198));
                func_0x00010006c090(uVar13,*(undefined8 *)((long)register0x00000008 + -400));
                func_0x0001000d224c(lVar19 + 0x48);
                uVar33 = *(ulong *)(lVar19 + 0x48);
                lVar18 = *(long *)(lVar19 + 0x50);
                uVar25 = uVar33;
                func_0x000107c614f0();
                *(ulong *)(lVar19 + 0x80) = uVar33;
                (**(code **)(*(long *)(lVar18 + 8) + 0x18))();
                func_0x000107c615e8(uVar33);
                if ((uVar25 & 1) == 0) {
                  uVar13 = *(undefined8 *)(lVar19 + 0x100);
                  (**(code **)(*(long *)(lVar19 + 0xb8) + 8))
                            (*(undefined8 *)(lVar19 + 0xc0),*(undefined8 *)(lVar19 + 0xb0));
                  func_0x000107c615e8(uVar13);
                }
                else {
                  uVar13 = *(undefined8 *)(lVar19 + 0x100);
                  lVar18 = *(long *)(lVar19 + 0xb8);
                  uVar1 = *(undefined8 *)(lVar19 + 0xc0);
                  uVar29 = *(undefined8 *)(lVar19 + 0xb0);
                  func_0x000107c4c4d8(*(undefined8 *)(lVar19 + 0x108));
                  func_0x000107c615e8(uVar13);
                  (**(code **)(lVar18 + 8))(uVar1,uVar29);
                }
                uVar13 = *(undefined8 *)(lVar19 + 0xc0);
                func_0x000107c615e8(*(undefined8 *)(lVar19 + 0xd8));
                func_0x000107c615c0(uVar13);
                UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar19 + 0x108);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                    *(long *)((long)register0x00000008 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar19 + 8))(UNRECOVERED_JUMPTABLE_00);
                  return UNRECOVERED_JUMPTABLE_00;
                }
                goto LAB_101dfbf08;
              }
              lVar16 = *(long *)((long)register0x00000008 + -0x1b8);
              FUN_101df6cf4();
              func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
              puVar23[1] = 0;
              *puVar23 = 0x14;
              *(undefined1 *)(puVar23 + 2) = 0x80;
              func_0x000107c61654();
              func_0x0001000b44c0(*(undefined8 *)((long)register0x00000008 + -0x1b0),
                                  *(undefined8 *)((long)register0x00000008 + -0x1a8));
              func_0x00010006c090(puVar6,uVar13);
              func_0x000107c614ac(lVar18);
              goto LAB_101dfbd5c;
            }
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
            puVar6[1] = 0;
            *puVar6 = 10;
            *(undefined1 *)(puVar6 + 2) = 0x80;
            func_0x000107c61654();
            func_0x0001000b44c0(*(undefined8 *)((long)register0x00000008 + -0x1b0),
                                *(undefined8 *)((long)register0x00000008 + -0x1a8));
            uVar13 = *(undefined8 *)((long)register0x00000008 + -400);
            lVar16 = *(long *)((long)register0x00000008 + -0x1b8);
          }
          else {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
            puVar6[1] = 0;
            *puVar6 = 10;
            *(undefined1 *)(puVar6 + 2) = 0x80;
            func_0x000107c61654();
LAB_101dfbd5c:
            uVar13 = *(undefined8 *)((long)register0x00000008 + -400);
          }
          uVar29 = *(undefined8 *)(lVar19 + 0xd8);
          lVar18 = *(long *)(lVar19 + 0xb8);
          uVar1 = *(undefined8 *)(lVar19 + 0xc0);
          uVar31 = *(undefined8 *)(lVar19 + 0xb0);
          func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x1a0),
                              *(undefined8 *)((long)register0x00000008 + -0x198));
          func_0x00010006c090(lVar16,uVar13);
          func_0x000107c615e8(puVar21);
          func_0x000107c615e8(puVar17);
          (**(code **)(lVar18 + 8))(uVar1,uVar31);
          goto LAB_101dfb99c;
        }
        puVar21 = puVar23;
        func_0x000107c5faec();
        puVar22 = puVar9;
        func_0x000107c61170(puVar23);
        *(undefined **)(lVar19 + 0x110) = puVar9;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (lVar18 == 0) goto LAB_101dfbf0c;
        lVar30 = *(long *)(lVar19 + 0xa0);
        lVar16 = lVar18;
        func_0x000107c5ee30();
        puVar10 = puVar22;
        func_0x000107c61170(lVar18);
        *(long *)(lVar19 + 0x118) = lVar16;
        *(undefined **)(lVar19 + 0x120) = puVar22;
        func_0x000107c4a804();
        func_0x000107c61180();
        if (lVar30 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        lVar18 = lVar30;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar30);
        *(long *)(lVar19 + 0x128) = lVar18;
        *(undefined **)(lVar19 + 0x130) = puVar10;
        plVar20 = (long *)0xa0;
        func_0x000107c615b8();
        *(long **)(lVar19 + 0x138) = plVar20;
        *plVar20 = lVar19;
        plVar20[1] = (long)FUN_101dfbf1c;
        lVar19 = *(long *)(lVar19 + 0xc0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x180)) {
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x148);
          uVar31 = *(undefined8 *)((long)register0x00000008 + -0x140);
          uVar1 = *(undefined8 *)((long)register0x00000008 + -0x158);
          uVar2 = *(undefined8 *)((long)register0x00000008 + -0x150);
          uVar29 = *(undefined8 *)((long)register0x00000008 + -0x168);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x160);
          *(ulong *)((long)register0x00000008 + -0x130) =
               *(ulong *)((long)register0x00000008 + -0x130) & 0xefffffffffffffff |
               0x1000000000000000;
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          *(long **)((long)register0x00000008 + -0x138) = plVar20;
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          plVar20[0xe] = lVar18;
          plVar20[0xf] = (long)puVar10;
          plVar20[0xc] = lVar16;
          plVar20[0xd] = (long)puVar22;
          plVar20[10] = (long)puVar9;
          plVar20[0xb] = lVar19;
          plVar20[9] = (long)puVar21;
          lVar18 = 0;
          func_0x000107c5ede0();
          plVar20[0x10] = lVar18;
          lVar18 = *(long *)(lVar18 + -8);
          plVar20[0x11] = lVar18;
          uVar33 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar20[0x12] = uVar33;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x140)) {
            UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
            goto _swift_task_switch;
          }
          func_0x000107c60e78();
          *(undefined8 *)((long)register0x00000008 + -0x180) = uVar3;
          *(undefined8 *)((long)register0x00000008 + -0x178) = uVar1;
          *(undefined8 *)((long)register0x00000008 + -0x170) = uVar2;
          *(undefined8 *)((long)register0x00000008 + -0x168) = uVar13;
          *(undefined8 *)((long)register0x00000008 + -0x160) = uVar31;
          *(ulong *)((long)register0x00000008 + -0x150) =
               (ulong)((long)register0x00000008 + -0x130) | 0x1000000000000000;
          *(code **)((long)register0x00000008 + -0x148) = FUN_101dfe3fc;
          *(long **)((long)register0x00000008 + -0x158) = plVar20;
          *(undefined8 *)((long)register0x00000008 + -0x188) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puVar22 = (undefined *)plVar20[0xe];
          lVar18 = plVar20[0xf];
          uVar33 = plVar20[0xc];
          lVar19 = plVar20[0xd];
          lVar16 = plVar20[0xb];
          func_0x000107c5ed80(plVar20[0x12],plVar20[9],plVar20[10]);
          func_0x000107c5ee20(uVar33,lVar19);
          func_0x000107c5ee20(puVar22,lVar18);
          puVar9 = puVar22;
          func_0x000107c5ed90();
          puVar10 = puVar9;
          func_0x000107c5ed90();
          uVar25 = uVar33;
          func_0x000107c3127c(uVar33,puVar22,puVar9,puVar10);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar22);
          func_0x000107c61170(uVar33);
          if ((uVar25 & 1) == 0) {
            lVar18 = plVar20[9];
            lVar19 = plVar20[10];
            puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            puVar9 = puVar22;
            func_0x000107c415e0();
            func_0x000107c61180();
            lVar30 = lVar18;
            func_0x000107c5fadc(lVar18,lVar19);
            func_0x000107c43418(puVar9);
            func_0x000107c61170(lVar30);
            func_0x000107c61170(puVar9);
            puVar9 = puVar22;
            func_0x000107c415e0();
            func_0x000107c61180();
            func_0x000107c5fadc(lVar18,lVar19);
            plVar20[6] = 0;
            puVar10 = puVar9;
            func_0x000107c3e388();
            func_0x000107c61180();
            func_0x000107c61170(lVar18);
            func_0x000107c61170(puVar9);
            lVar18 = plVar20[6];
            if (puVar10 == (undefined *)0x0) {
              lVar19 = lVar18;
              func_0x000107c61174(lVar18);
              func_0x000107c5ed30(lVar18);
              func_0x000107c61170(lVar19);
              func_0x000107c61654();
              func_0x000107c614ac(lVar18);
LAB_101dfe678:
              plVar20[3] = 0;
              plVar20[2] = 0;
              plVar20[5] = 0;
              plVar20[4] = 0;
LAB_101dfe680:
              func_0x000101dfed18(plVar20 + 2,0x112d387f8,&UNK_10d902650);
            }
            else {
              uVar33 = 0;
              FUN_101a64068();
              uVar13 = 0x112defdc0;
              func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
              puVar9 = PTR___sypN_11034f1a8;
              puVar11 = puVar10;
              func_0x000107c5f9e8(puVar10,uVar33,PTR___sypN_11034f1a8 + 8,uVar13);
              func_0x000107c61174(lVar18);
              func_0x000107c61170(puVar10);
              if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
              if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
                plVar20[3] = 0;
                plVar20[2] = 0;
                plVar20[5] = 0;
                plVar20[4] = 0;
              }
              else {
                lVar18 = *(long *)PTR__NSFileSize_110345448;
                func_0x000107c61434(puVar11);
                FUN_101aae36c(lVar18);
                if ((uVar33 & 1) == 0) {
                  func_0x000107c6142c(puVar11);
                  goto LAB_101dfe7c0;
                }
                func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar18 * 0x20,plVar20 + 2);
                func_0x000107c6142c(puVar11);
              }
              func_0x000107c6142c(puVar11);
              if (plVar20[5] == 0) goto LAB_101dfe680;
              uVar13 = 0;
              func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              plVar24 = plVar20 + 8;
              func_0x000107c6147c(plVar24,plVar20 + 2,puVar9 + 8,uVar13,6);
              if (((ulong)plVar24 & 1) != 0) {
                lVar18 = plVar20[8];
                func_0x000107c4c0a8(lVar18);
                func_0x000107c61170(lVar18);
              }
            }
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar9 = puVar22;
            func_0x000107c5ed90();
            plVar20[7] = 0;
            puVar10 = puVar22;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar22);
            puVar21 = (undefined8 *)plVar20[7];
            if ((int)puVar10 == 0) {
              puVar6 = puVar21;
              func_0x000107c61174(puVar21);
              func_0x000107c5ed30();
              func_0x000107c61170(puVar6);
              func_0x000107c61654();
              func_0x000107c614ac();
            }
            else {
              func_0x000107c61174();
            }
            uVar25 = plVar20[0x11];
            puVar22 = (undefined *)plVar20[0x12];
            uVar33 = plVar20[0x10];
            FUN_101df6cf4();
            puVar10 = &UNK_1106e3fc0;
            func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
            puVar21[1] = 0;
            *puVar21 = 10;
            *(undefined1 *)(puVar21 + 2) = 0x80;
            func_0x000107c61654();
            uVar14 = uVar33;
            (**(code **)(uVar25 + 8))(puVar22);
            func_0x000107c615c0(puVar22);
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar20[1];
            puVar9 = puVar10;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x188)) {
LAB_101dfe79c:
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)();
              return UNRECOVERED_JUMPTABLE_00;
            }
          }
          else {
            puVar10 = (undefined *)plVar20[0x12];
            uVar14 = plVar20[0x10];
            (**(code **)(plVar20[0x11] + 8))(puVar10);
            func_0x000107c615c0(puVar10);
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar20[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x188)) goto LAB_101dfe79c;
          }
          func_0x000107c60e78();
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar29;
          *(long *)((long)register0x00000008 + -0x1d8) = lVar16;
          *(ulong *)((long)register0x00000008 + -0x1d0) = uVar25;
          *(ulong *)((long)register0x00000008 + -0x1c8) = uVar33;
          *(long **)((long)register0x00000008 + -0x1c0) = plVar20;
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar9;
          *(undefined **)((long)register0x00000008 + -0x1b0) = puVar10;
          *(undefined **)((long)register0x00000008 + -0x1a8) = puVar22;
          *(undefined1 **)((long)register0x00000008 + -0x1a0) =
               (undefined1 *)((long)register0x00000008 + -0x150);
          *(code **)((long)register0x00000008 + -0x198) = FUN_101dfe828;
          uVar33 = uVar14;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
            UNRECOVERED_JUMPTABLE_02 = (code *)0x0;
            uVar25 = 0xf000000000000000;
            if (uVar14 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
            uVar12 = uVar14;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            if (uVar12 == 0) goto LAB_101dfe8bc;
            uVar28 = uVar12;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar12);
          }
          else {
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
            uVar25 = uVar14;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            uVar33 = uVar25;
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_101dfe880;
            UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE;
            func_0x000107c5ee30();
            uVar33 = uVar25;
            func_0x000107c61170(UNRECOVERED_JUMPTABLE);
            if (uVar14 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
            uVar28 = 0;
            uVar33 = 0xf000000000000000;
          }
          if (uVar25 >> 0x3c < 0xf) {
            if (uVar33 >> 0x3c < 0xf) {
              func_0x000100de78a0(UNRECOVERED_JUMPTABLE_02,uVar25);
              func_0x000100de78a0(uVar28,uVar33);
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_02;
              func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_02,uVar25,uVar28,uVar33);
              func_0x0001000b44c0(uVar28,uVar33);
              func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_02,uVar25);
              func_0x0001000b44c0(uVar28,uVar33);
              func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_02);
              if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                return (code *)0x0;
              }
              goto LAB_101dfe974;
            }
          }
          else if (0xe < uVar33 >> 0x3c) {
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_02);
LAB_101dfe974:
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
            uVar33 = uVar25;
            if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
              uVar25 = 0xf000000000000000;
              if (uVar14 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
              func_0x000107c4a804();
              func_0x000107c61180();
              if (uVar14 == 0) {
                uVar14 = 0;
                goto LAB_101dfe9f8;
              }
              uVar28 = uVar14;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar14);
            }
            else {
              func_0x000107c4a804();
              func_0x000107c61180();
              if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
                UNRECOVERED_JUMPTABLE = (code *)0x0;
                uVar33 = uVar25;
                goto joined_r0x000101dfe9b0;
              }
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
              func_0x000107c5ee30();
              uVar33 = uVar25;
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
              if (uVar14 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
              uVar33 = 0xf000000000000000;
              uVar28 = uVar14;
            }
            if (uVar25 >> 0x3c < 0xf) {
              if (uVar33 >> 0x3c < 0xf) {
                func_0x000100de78a0(UNRECOVERED_JUMPTABLE,uVar25);
                func_0x000100de78a0(uVar28,uVar33);
                UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
                func_0x000100e25fcc(UNRECOVERED_JUMPTABLE,uVar25,uVar28,uVar33);
                func_0x0001000b44c0(uVar28,uVar33);
                func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar25);
                func_0x0001000b44c0(uVar28,uVar33);
                func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar25);
                return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
              }
            }
            else if (0xe < uVar33 >> 0x3c) {
              func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar25);
              return (code *)0x1;
            }
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar25);
            goto LAB_101dfea48;
          }
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_02,uVar25);
LAB_101dfea48:
          func_0x0001000b44c0(uVar28,uVar33);
          return (code *)0x0;
        }
      }
      else {
        func_0x000107c61170();
LAB_101dfb944:
        uVar29 = *(undefined8 *)(lVar19 + 0xd8);
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
        puVar6[1] = 0;
        *puVar6 = 7;
        *(undefined1 *)(puVar6 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c615e8(puVar17);
        func_0x000107c615e8(puVar21);
        func_0x000107c61170(lVar18);
LAB_101dfb99c:
        func_0x000107c615e8(uVar29);
        func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xc0));
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar19 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
      }
LAB_101dfbf08:
      func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
LAB_101dfa950:
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_101dfa954;
    lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = *unaff_x22;
    plVar24 = (long *)*unaff_x22;
    lStack_58 = unaff_x21;
    func_0x000107c615c0(*(undefined8 *)(lVar18 + 200));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0xc0);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
    if (plVar20 == (long *)0x0) {
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    }
    else {
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar18 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar24[1])();
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    uStack_70 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_68 = FUN_101dfa9f8;
    lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_78 = *plVar24;
    plVar24 = (long *)*plVar24;
    func_0x000107c615c0(*(undefined8 *)(lStack_78 + 0xd0));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfaa6c;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_70 | 0x1000000000000000;
    pcStack_88 = FUN_101dfaa6c;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = plVar24[5];
    lVar16 = plVar24[6];
    plVar20 = plVar24 + 2;
    func_0x0001000a8868(plVar20,lVar18);
    piVar26 = *(int **)(lVar16 + 8);
    iVar5 = *piVar26;
    puVar21 = (undefined8 *)(ulong)(uint)piVar26[1];
    func_0x000107c615b8();
    plVar24[0x1b] = (long)puVar21;
    *puVar21 = plVar24;
    puVar21[1] = FUN_101dfab20;
    lVar19 = plVar24[0x12];
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[0x11];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar5 + (long)piVar26))
                (UNRECOVERED_JUMPTABLE_00,lVar19,plVar24[0x13],1,lVar18,lVar16);
      return UNRECOVERED_JUMPTABLE_00;
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_90 | 0x1000000000000000;
    plVar4 = &lStack_e0;
    pcStack_c8 = FUN_101dfab20;
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_d8 = *plVar24;
    plVar24 = (long *)*plVar24;
    *(undefined8 **)(lStack_d8 + 0xe0) = puVar21;
    *(long *)(lStack_d8 + 0xe8) = lVar19;
    *(long **)(lStack_d8 + 0xf0) = plVar20;
    func_0x000107c615c0(*(undefined8 *)(lStack_d8 + 0xd8));
    if (plVar20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfabc8;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb30c;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_f0 = (ulong)&uStack_d0 | 0x1000000000000000;
    pcStack_e8 = FUN_101dfabc8;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar19 = plVar24[0x15];
    lStack_108 = lVar16;
    lStack_100 = lVar18;
    plStack_f8 = plVar24;
    func_0x0001000834e4(plVar24 + 2);
    plVar20 = *(long **)(lVar19 + 0x18);
    lVar18 = 0x112d51300;
    puVar22 = &UNK_10d917f90;
    func_0x0001000285a8();
    plVar15 = plVar24 + 0xc;
    *plVar15 = lVar18;
    puVar6 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    plVar24[0x1f] = (long)puVar6;
    puVar21 = puVar6;
    func_0x000100faa6a0();
    plVar24[0x20] = (long)puVar21;
    *puVar6 = plVar24;
    puVar6[1] = FUN_101dfac94;
    lVar18 = lStack_100;
    UNRECOVERED_JUMPTABLE_00 = pcStack_e8;
    uVar33 = uStack_f0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_110) {
      func_0x000107c60e78();
      uStack_120 = (ulong)&uStack_f0 | 0x1000000000000000;
      pcStack_118 = FUN_101dfac94;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_128 = *plVar24;
      UNRECOVERED_JUMPTABLE_00 = (code *)*plVar24;
      *(long **)(lStack_128 + 0x108) = plVar20;
      func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0xf8));
      if (plVar20 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101dfad34;
          goto _swift_task_switch;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfb374;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      uStack_140 = (ulong)&uStack_120 | 0x1000000000000000;
      pcStack_138 = FUN_101dfad34;
      lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
      unaff_x28 = UNRECOVERED_JUMPTABLE_00 + 0x70;
      *(long *)unaff_x28 = 0;
      pcVar27 = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x58);
      UNRECOVERED_JUMPTABLE = pcVar27;
      func_0x000107c40984();
      func_0x000107c61180();
      unaff_x24 = *(undefined8 **)unaff_x28;
      func_0x000107c61174();
      UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE;
      func_0x000107c4403c();
      func_0x000107c61180();
      if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) {
        if (unaff_x24 != (undefined8 *)0x0) goto LAB_101dfadbc;
        puVar6 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xa0);
        func_0x000107c4a8c4();
        func_0x000107c61180();
        puVar21 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
LAB_101dfaf74:
          unaff_x25 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
          unaff_x24 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
          FUN_101df6cf4();
          puVar22 = &UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x16;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x00010006c090(unaff_x25,unaff_x24);
          func_0x000107c615e8(pcVar27);
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          goto LAB_101dfae20;
        }
        lVar18 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xa0);
        func_0x000107c5ee30();
        puVar9 = puVar22;
        func_0x000107c61170(puVar6);
        func_0x000107c4a804();
        func_0x000107c61180();
        if (lVar18 == 0) {
          func_0x00010006c090(puVar21,puVar22);
          goto LAB_101dfaf74;
        }
        puStack_1b8 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
        lStack_1b0 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
        lVar16 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xa8);
        lVar19 = lVar18;
        puStack_1a8 = puVar21;
        func_0x000107c5ee30();
        puStack_1a0 = puVar9;
        func_0x000107c61170(lVar18);
        lStack_1c8 = *(long *)(lVar16 + 0x30);
        func_0x0001000d224c(UNRECOVERED_JUMPTABLE_00 + 0x38);
        uVar33 = *(ulong *)(UNRECOVERED_JUMPTABLE_00 + 0x38);
        lVar18 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x40);
        uVar25 = uVar33;
        func_0x000107c614f0();
        *(ulong *)(UNRECOVERED_JUMPTABLE_00 + 0x78) = uVar33;
        (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
        unaff_x26 = puStack_1a8;
        func_0x000107c615e8(uVar33);
        puVar21 = puStack_1b8;
        func_0x000107c5ee20(puStack_1b8,lStack_1b0);
        puVar6 = unaff_x26;
        puStack_1b8 = (undefined8 *)puVar22;
        func_0x000107c5ee20(unaff_x26,puVar22);
        unaff_x27 = puStack_1a0;
        puVar9 = puStack_1a0;
        lStack_1b0 = lVar19;
        func_0x000107c5ee20(lVar19);
        puVar17 = puVar21;
        if ((uVar25 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        func_0x000107c61170(puVar6);
        func_0x000107c61170();
        if (puVar17 == (undefined8 *)0x0) {
          unaff_x25 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
          unaff_x24 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
          FUN_101df6cf4();
          puVar22 = &UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 10;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x00010006c090(unaff_x26,puStack_1b8);
          func_0x00010006c090(unaff_x25,unaff_x24);
          func_0x00010006c090(lStack_1b0,unaff_x27);
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c615e8(pcVar27);
          goto LAB_101dfae20;
        }
        puStack_1c0 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0x108);
        puVar21 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xc0);
        unaff_x25 = puVar17;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar17);
        func_0x00010006c00c(unaff_x25,puVar9);
        puVar22 = puVar9;
        func_0x0001000b44c0(unaff_x25,puVar9);
        UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE;
        func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
        func_0x000107c61180();
        pcVar7 = UNRECOVERED_JUMPTABLE_02;
        func_0x000107c5faec();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_02);
        func_0x000107c5ed80(puVar21,pcVar7,puVar22);
        func_0x000107c6142c(puVar22);
        unaff_x26 = puStack_1c0;
        func_0x000107c5ee40(puVar21,1,unaff_x25,puVar9);
        if (unaff_x26 != (undefined8 *)0x0) {
          unaff_x28 = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
          puVar6 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
          lStack_1d0 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xb8);
          puStack_1c0 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xc0);
          lStack_1c8 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xb0);
          FUN_101df6cf4();
          puVar22 = &UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x14;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x00010006c090(puStack_1a8,puStack_1b8);
          func_0x00010006c090(unaff_x28,puVar6);
          func_0x00010006c090(lStack_1b0,puStack_1a0);
          func_0x00010006c090(unaff_x25,puVar9);
          func_0x000107c614ac(unaff_x26);
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c615e8(pcVar27);
          (**(code **)(lStack_1d0 + 8))(puStack_1c0,lStack_1c8);
          unaff_x24 = unaff_x25;
          unaff_x25 = puVar6;
          unaff_x27 = puVar9;
          goto LAB_101dfae20;
        }
        puStack_1c0 = (undefined8 *)puVar9;
        func_0x0001000d224c(UNRECOVERED_JUMPTABLE_00 + 0x48);
        puVar21 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0x48);
        lVar18 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x50);
        unaff_x24 = puVar21;
        func_0x000107c614f0();
        *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0x80) = puVar21;
        (**(code **)(*(long *)(lVar18 + 8) + 0x18))();
        func_0x000107c615e8(puVar21);
        unaff_x28 = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
        unaff_x26 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
        unaff_x27 = *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0xb8);
        lVar18 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xc0);
        puVar22 = *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0xb0);
        if (((ulong)unaff_x24 & 1) == 0) {
          (**(code **)(unaff_x27 + 8))(lVar18,puVar22);
          func_0x00010006c090(puStack_1a8,puStack_1b8);
          func_0x00010006c090(unaff_x28,unaff_x26);
          func_0x00010006c090(lStack_1b0,puStack_1a0);
          func_0x00010006c090(unaff_x25,puStack_1c0);
          func_0x000107c615e8(pcVar27);
        }
        else {
          func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
          func_0x00010006c090(puStack_1a8,puStack_1b8);
          func_0x00010006c090(unaff_x28,unaff_x26);
          func_0x00010006c090(lStack_1b0,puStack_1a0);
          func_0x00010006c090(unaff_x25,puStack_1c0);
          func_0x000107c615e8(pcVar27);
          (**(code **)(unaff_x27 + 8))(lVar18,puVar22);
        }
        func_0x000107c615c0(*(long *)(UNRECOVERED_JUMPTABLE_00 + 0xc0));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(UNRECOVERED_JUMPTABLE_00 + 8))(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
      }
      else {
        func_0x000107c61170();
LAB_101dfadbc:
        unaff_x26 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
        unaff_x25 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
        FUN_101df6cf4();
        puVar22 = &UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_02,0,0);
        *(undefined8 *)(UNRECOVERED_JUMPTABLE_02 + 8) = 0;
        *(undefined8 *)UNRECOVERED_JUMPTABLE_02 = 7;
        UNRECOVERED_JUMPTABLE_02[0x10] = (code)0x80;
        func_0x000107c61654();
        func_0x00010006c090(unaff_x26,unaff_x25);
        func_0x000107c615e8(pcVar27);
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
        func_0x000107c61170(unaff_x24);
LAB_101dfae20:
        func_0x000107c615c0(*(long *)(UNRECOVERED_JUMPTABLE_00 + 0xc0));
        UNRECOVERED_JUMPTABLE_02 = *(code **)(UNRECOVERED_JUMPTABLE_00 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_02)();
          return UNRECOVERED_JUMPTABLE_02;
        }
      }
      func_0x000107c60e78();
      uStack_1e0 = (ulong)&uStack_140 | 0x1000000000000000;
      pcStack_1d8 = FUN_101dfb30c;
      lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_1e8 = UNRECOVERED_JUMPTABLE_00;
      func_0x0001000834e4(UNRECOVERED_JUMPTABLE_00 + 0x10);
      func_0x000107c615c0(*(long *)(UNRECOVERED_JUMPTABLE_00 + 0xc0));
      UNRECOVERED_JUMPTABLE_02 = *(code **)(UNRECOVERED_JUMPTABLE_00 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_02)();
        return UNRECOVERED_JUMPTABLE_02;
      }
      func_0x000107c60e78();
      uStack_200 = (ulong)&uStack_1e0 | 0x1000000000000000;
      pcStack_1f8 = FUN_101dfb374;
      puVar32 = &uStack_200;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24 = *(long **)(UNRECOVERED_JUMPTABLE_00 + 0x100);
      unaff_x21 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xe0);
      unaff_x19 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0xe8);
      unaff_x23 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x68);
      plVar20 = (long *)&UNK_1107a6f08;
      lVar16 = 0;
      lVar18 = 0;
      pcStack_220 = pcVar27;
      puStack_218 = puVar22;
      pcStack_210 = UNRECOVERED_JUMPTABLE;
      pcStack_208 = UNRECOVERED_JUMPTABLE_00;
      func_0x000107c613f8();
      *plVar24 = unaff_x23;
      lVar19 = unaff_x19;
      func_0x00010006c090(unaff_x21);
      func_0x000107c615c0(*(long *)(UNRECOVERED_JUMPTABLE_00 + 0xc0));
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_00 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      unaff_x30 = FUN_101dfb414;
      func_0x000107c60e78();
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto code_r0x000101dfb414;
    }
LAB_104876574:
    *(long *)((long)plVar4 + -0x20) = lVar18;
    *(ulong *)((long)plVar4 + -0x10) = uVar33 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar4 + -8) = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 **)((long)plVar4 + -0x18) = puVar6;
    puVar6[0xb] = puVar21;
    puVar6[0xc] = plVar24 + 0xd;
    puVar6[9] = plVar15;
    puVar6[10] = &UNK_1107a6f08;
    puVar6[8] = plVar24 + 0xb;
    lVar18 = *plVar20;
    puVar6[0xd] = &PTR_DAT_1107a6e88;
    uVar13 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar13;
    lVar18 = *(long *)(lVar18 + 0x50);
    puVar6[0xf] = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    puVar6[0x10] = lVar18;
    UNRECOVERED_JUMPTABLE = (code *)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 **)UNRECOVERED_JUMPTABLE_00 = puVar6;
    *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 8) = &UNK_104876614;
    unaff_x30 = *(code **)((long)plVar4 + -8);
    uVar33 = *(ulong *)((long)plVar4 + -0x10) & 0xefffffffffffffff;
    register0x00000008 = (BADSPACEBASE *)plVar4;
  }
  else {
    unaff_x21 = 0;
    func_0x000107c5fd64();
    plVar20 = *(long **)(unaff_x22[0x15] + 0x38);
    UNRECOVERED_JUMPTABLE_00 = (code *)0x70;
    func_0x000107c615b8();
    unaff_x22[0x1a] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101dfa9f8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_101dfa950;
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
    uVar33 = uStack_10 & 0xefffffffffffffff;
  }
LAB_104875f04:
  *(ulong *)((long)register0x00000008 + -0x10) = uVar33 | 0x1000000000000000;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(code **)((long)register0x00000008 + -0x18) = UNRECOVERED_JUMPTABLE_00;
  *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(long **)(UNRECOVERED_JUMPTABLE_00 + 0x30) = plVar20;
  lVar19 = *(long *)(*plVar20 + 0x50);
  *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x38) = lVar19;
  lVar18 = 0;
  __sSqMa(0,lVar19);
  *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x40) = lVar18;
  lVar18 = *(long *)(lVar18 + -8);
  *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x48) = lVar18;
  uVar33 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(UNRECOVERED_JUMPTABLE_00 + 0x50) = uVar33;
  lVar18 = *(long *)(lVar19 + -8);
  *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x58) = lVar18;
  uVar33 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(UNRECOVERED_JUMPTABLE_00 + 0x60) = uVar33;
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101dfa954; end: 101dfa9f7;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfa954(code *param_1)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  long *plVar25;
  ulong uVar26;
  int *piVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong unaff_x29;
  code *pcStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  code *pcStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long *plStack_288;
  ulong uStack_280;
  code *pcStack_278;
  long lStack_270;
  long lStack_268;
  ulong uStack_260;
  code *pcStack_258;
  long lStack_248;
  long lStack_240;
  long *plStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_220;
  long *plStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  code *pcStack_1e0;
  long *plStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long lStack_160;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *unaff_x22;
  plVar25 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 200));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0xc0);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
  if (unaff_x20 == 0) {
    lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE = param_1;
  }
  else {
    lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar22 == lStack_30) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar25[1])();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_38 = FUN_101dfa9f8;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = *plVar25;
  plVar25 = (long *)*plVar25;
  func_0x000107c615c0(*(undefined8 *)(lStack_48 + 0xd0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    UNRECOVERED_JUMPTABLE = FUN_101dfaa6c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
  pcStack_58 = FUN_101dfaa6c;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = plVar25[5];
  lVar9 = plVar25[6];
  plVar16 = plVar25 + 2;
  func_0x0001000a8868(plVar16,lVar22);
  piVar27 = *(int **)(lVar9 + 8);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar25[0x1b] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfab20;
  lVar19 = plVar25[0x12];
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,lVar19,plVar25[0x13],1,lVar22,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_60 | 0x1000000000000000;
  plVar3 = &lStack_b0;
  pcStack_98 = FUN_101dfab20;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_a8 + 0xe0) = puVar5;
  *(long *)(lStack_a8 + 0xe8) = lVar19;
  *(long **)(lStack_a8 + 0xf0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_a8 + 0xd8));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfabc8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb30c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  puStack_c0 = (ulong *)((ulong)&uStack_a0 | 0x1000000000000000);
  pcStack_b8 = FUN_101dfabc8;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[0x15];
  lStack_d8 = lVar9;
  lStack_d0 = lVar22;
  plStack_c8 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar22 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar22;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1f] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x20] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfac94;
  lVar22 = lStack_d0;
  pcStack_2d8 = pcStack_b8;
  puVar2 = puStack_c0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
LAB_104876574:
    *(long *)((long)plVar3 + -0x20) = lVar22;
    *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = pcStack_2d8;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar4;
    puVar4[0xb] = puVar5;
    puVar4[0xc] = plVar25 + 0xd;
    puVar4[9] = plVar16;
    puVar4[10] = &UNK_1107a6f08;
    puVar4[8] = plVar25 + 0xb;
    lVar22 = *plVar20;
    puVar4[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar4[0xe] = uVar14;
    lVar22 = *(long *)(lVar22 + 0x50);
    puVar4[0xf] = lVar22;
    lVar22 = *(long *)(lVar22 + -8);
    puVar4[0x10] = lVar22;
    plVar25 = (long *)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar4[0x11] = plVar25;
    puVar15 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar4[0x12] = puVar15;
    *puVar15 = puVar4;
    puVar15[1] = &UNK_104876614;
    UNRECOVERED_JUMPTABLE = *(code **)((long)plVar3 + -8);
    uVar13 = *(ulong *)((long)plVar3 + -0x10);
LAB_104875f04:
    *(ulong *)((long)plVar3 + -0x10) = uVar13 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar15;
    puVar15[5] = plVar25;
    puVar15[6] = plVar20;
    lVar19 = *(long *)(*plVar20 + 0x50);
    puVar15[7] = lVar19;
    lVar22 = 0;
    __sSqMa(0,lVar19);
    puVar15[8] = lVar22;
    lVar22 = *(long *)(lVar22 + -8);
    puVar15[9] = lVar22;
    uVar13 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[10] = uVar13;
    lVar22 = *(long *)(lVar19 + -8);
    puVar15[0xb] = lVar22;
    uVar13 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[0xc] = uVar13;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_f0 = (ulong)&puStack_c0 | 0x1000000000000000;
  pcStack_e8 = FUN_101dfac94;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f8 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(long **)(lStack_f8 + 0x108) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lStack_f8 + 0xf8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_110 = (ulong)&uStack_f0 | 0x1000000000000000;
  pcStack_108 = FUN_101dfad34;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0xe] = 0;
  pcVar28 = (code *)plVar25[0xb];
  UNRECOVERED_JUMPTABLE = pcVar28;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar5 = (undefined8 *)plVar25[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar5 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar5 = (undefined8 *)plVar25[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar22 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x16;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar22,puVar5);
      func_0x000107c615e8(pcVar28);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar22 = plVar25[0x14];
    func_0x000107c5ee30();
    puVar8 = puVar23;
    func_0x000107c61170(puVar5);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar22 == 0) {
      func_0x00010006c090(puVar4,puVar23);
      goto LAB_101dfaf74;
    }
    puStack_188 = (undefined8 *)plVar25[0x1c];
    lStack_180 = plVar25[0x1d];
    lVar9 = plVar25[0x15];
    lVar19 = lVar22;
    puStack_178 = puVar4;
    func_0x000107c5ee30();
    puStack_170 = puVar8;
    func_0x000107c61170(lVar22);
    lStack_198 = *(long *)(lVar9 + 0x30);
    func_0x0001000d224c(plVar25 + 7);
    uVar13 = plVar25[7];
    lVar22 = plVar25[8];
    uVar32 = uVar13;
    func_0x000107c614f0();
    plVar25[0xf] = uVar13;
    (**(code **)(*(long *)(lVar22 + 8) + 0x28))();
    puVar4 = puStack_178;
    func_0x000107c615e8(uVar13);
    puVar15 = puStack_188;
    func_0x000107c5ee20(puStack_188,lStack_180);
    puVar5 = puVar4;
    puStack_188 = (undefined8 *)puVar23;
    func_0x000107c5ee20(puVar4,puVar23);
    puVar8 = puStack_170;
    puVar10 = puStack_170;
    lStack_180 = lVar19;
    func_0x000107c5ee20(lVar19);
    puVar6 = puVar15;
    if ((uVar32 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar19);
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    if (puVar6 == (undefined8 *)0x0) {
      lVar22 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
      puVar15[1] = 0;
      *puVar15 = 10;
      *(undefined1 *)(puVar15 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puStack_188);
      func_0x00010006c090(lVar22,puVar5);
      func_0x00010006c090(lStack_180,puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      goto LAB_101dfae20;
    }
    puStack_190 = (undefined *)plVar25[0x21];
    puVar5 = (undefined8 *)plVar25[0x18];
    puVar4 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    func_0x00010006c00c(puVar4,puVar10);
    puVar23 = puVar10;
    func_0x0001000b44c0(puVar4,puVar10);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar7 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar5,pcVar7,puVar23);
    func_0x000107c6142c(puVar23);
    puVar8 = puStack_190;
    func_0x000107c5ee40(puVar5,1,puVar4,puVar10);
    if (puVar8 != (undefined *)0x0) {
      lVar22 = plVar25[0x1c];
      lVar19 = plVar25[0x1d];
      lStack_1a0 = plVar25[0x17];
      puStack_190 = (undefined *)plVar25[0x18];
      lStack_198 = plVar25[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 0x14;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_178,puStack_188);
      func_0x00010006c090(lVar22,lVar19);
      func_0x00010006c090(lStack_180,puStack_170);
      func_0x00010006c090(puVar4,puVar10);
      func_0x000107c614ac(puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lStack_1a0 + 8))(puStack_190,lStack_198);
      puVar5 = puVar4;
      goto LAB_101dfae20;
    }
    puStack_190 = puVar10;
    func_0x0001000d224c(plVar25 + 9);
    puVar15 = (undefined8 *)plVar25[9];
    lVar22 = plVar25[10];
    puVar5 = puVar15;
    func_0x000107c614f0();
    plVar25[0x10] = (long)puVar15;
    (**(code **)(*(long *)(lVar22 + 8) + 0x18))();
    func_0x000107c615e8(puVar15);
    lVar22 = plVar25[0x1c];
    lVar9 = plVar25[0x1d];
    lVar19 = plVar25[0x17];
    lVar17 = plVar25[0x18];
    puVar23 = (undefined *)plVar25[0x16];
    if (((ulong)puVar5 & 1) == 0) {
      (**(code **)(lVar19 + 8))(lVar17,puVar23);
      func_0x00010006c090(puStack_178,puStack_188);
      func_0x00010006c090(lVar22,lVar9);
      func_0x00010006c090(lStack_180,puStack_170);
      func_0x00010006c090(puVar4,puStack_190);
      func_0x000107c615e8(pcVar28);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_178,puStack_188);
      func_0x00010006c090(lVar22,lVar9);
      func_0x00010006c090(lStack_180,puStack_170);
      func_0x00010006c090(puVar4,puStack_190);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lVar19 + 8))(lVar17,puVar23);
    }
    func_0x000107c615c0(plVar25[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar25[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar22 = plVar25[0x1c];
    lVar19 = plVar25[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar22,lVar19);
    func_0x000107c615e8(pcVar28);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar5);
LAB_101dfae20:
    func_0x000107c615c0(plVar25[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_1b0 = (ulong)&uStack_110 | 0x1000000000000000;
  pcStack_1a8 = FUN_101dfb30c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1b8 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_1d0 = (ulong)&uStack_1b0 | 0x1000000000000000;
  pcStack_1c8 = FUN_101dfb374;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)plVar25[0x20];
  lVar22 = plVar25[0x1c];
  lVar19 = plVar25[0x1d];
  lVar29 = plVar25[0xd];
  puVar8 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  pcStack_1f0 = pcVar28;
  puStack_1e8 = puVar23;
  pcStack_1e0 = UNRECOVERED_JUMPTABLE;
  plStack_1d8 = plVar25;
  func_0x000107c613f8();
  *plVar16 = lVar29;
  lVar9 = lVar19;
  func_0x00010006c090(lVar22);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_210 = (ulong)&uStack_1d0 | 0x1000000000000000;
  plVar3 = &lStack_220;
  pcStack_208 = FUN_101dfb414;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0x14] = lVar18;
  plVar25[0x15] = (long)puVar8;
  plVar25[0x12] = lVar9;
  plVar25[0x13] = lVar17;
  plVar25[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar9 = 0;
  plStack_218 = plVar25;
  func_0x000107c5ede0();
  plVar25[0x16] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar25[0x17] = lVar9;
  uVar13 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar25[0x18] = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_230 = (ulong)&uStack_210 | 0x1000000000000000;
  pcStack_228 = FUN_101dfb4a8;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_240 = lVar22;
  plStack_238 = plVar25;
  func_0x000107c5fd64();
  plVar20 = *(long **)(plVar25[0x15] + 0x38);
  puVar15 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar25[0x19] = (long)puVar15;
  *puVar15 = plVar25;
  puVar15[1] = FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    plVar25 = plVar25 + 2;
    UNRECOVERED_JUMPTABLE = pcStack_228;
    uVar13 = uStack_230;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  uStack_260 = (ulong)&uStack_230 | 0x1000000000000000;
  pcStack_258 = FUN_101dfb57c;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_268 = *plVar25;
  plVar25 = (long *)*plVar25;
  func_0x000107c615c0(*(undefined8 *)(lStack_268 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_280 = (ulong)&uStack_260 | 0x1000000000000000;
  uStack_298 = 0;
  pcStack_278 = FUN_101dfb5f0;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = plVar25[5];
  lVar9 = plVar25[6];
  plVar16 = plVar25 + 2;
  puStack_2a8 = puVar5;
  lStack_2a0 = lVar29;
  lStack_290 = lVar19;
  plStack_288 = plVar25;
  func_0x0001000a8868(plVar16,lVar22);
  piVar27 = *(int **)(lVar9 + 0x10);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar25[0x1a] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,plVar25[0x12],plVar25[0x13],1,lVar22,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_2c0 = (ulong)&uStack_280 | 0x1000000000000000;
  plVar3 = &lStack_2d0;
  pcStack_2b8 = FUN_101dfb6a4;
  puVar2 = &uStack_2c0;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c8 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_2c8 + 0xd8) = puVar5;
  *(long **)(lStack_2c8 + 0xe0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_2c8 + 0xd0));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_2d8 = FUN_101dfb748;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[0x15];
  func_0x0001000834e4(plVar25 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar19;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1d] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x1e] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto LAB_104876574;
  func_0x000107c60e78();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *plVar25;
  lVar9 = *plVar25;
  *(long **)(lVar19 + 0xf8) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xe8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar9 + 0x70) = 0;
  puVar15 = *(undefined8 **)(lVar9 + 0x58);
  *(undefined8 **)(lVar9 + 0x100) = puVar15;
  puVar5 = puVar15;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar9 + 0x108) = puVar5;
  lVar22 = *(long *)(lVar9 + 0x70);
  func_0x000107c61174();
  puVar4 = puVar5;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    if (lVar22 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar9 + 0xd8);
    uVar14 = *(undefined8 *)(lVar9 + 0xc0);
    puVar4 = puVar5;
    func_0x000107c4407c(puVar5);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puVar8 = puVar23;
    func_0x000107c5ed80(uVar14,puVar6);
    func_0x000107c6142c(puVar23);
    puVar4 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar22 = *(long *)(lVar9 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar22 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar18 = *(long *)(lVar9 + 0xa0);
      lVar17 = lVar22;
      func_0x000107c5ee30();
      puVar23 = puVar8;
      func_0x000107c61170(lVar22);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar22 = lVar18;
      func_0x000107c5ee30();
      puVar10 = puVar23;
      func_0x000107c61170(lVar18);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar9 + 0x38);
        uVar13 = *(ulong *)(lVar9 + 0x38);
        lVar18 = *(long *)(lVar9 + 0x40);
        uVar32 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(lVar9 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar6 = puVar4;
        func_0x000107c5ee20(puVar4,puVar10);
        lVar18 = lVar17;
        func_0x000107c5ee20(lVar17,puVar8);
        lVar29 = lVar22;
        puVar11 = puVar23;
        func_0x000107c5ee20(lVar22,puVar23);
        puVar24 = puVar6;
        if ((uVar32 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar29);
        func_0x000107c61170(lVar18);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
          puVar6[1] = 0;
          *puVar6 = 10;
          *(undefined1 *)(puVar6 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
        }
        else {
          lVar18 = *(long *)(lVar9 + 0xf8);
          puVar21 = *(undefined8 **)(lVar9 + 0xc0);
          puVar6 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar21,1,puVar6,puVar11);
          if (lVar18 == 0) {
            func_0x0001000b44c0(puVar4,puVar10);
            func_0x00010006c090(puVar6,puVar11);
            func_0x00010006c090(lVar22,puVar23);
            func_0x00010006c090(lVar17,puVar8);
            func_0x0001000d224c(lVar9 + 0x48);
            uVar13 = *(ulong *)(lVar9 + 0x48);
            lVar22 = *(long *)(lVar9 + 0x50);
            uVar32 = uVar13;
            func_0x000107c614f0();
            *(ulong *)(lVar9 + 0x80) = uVar13;
            (**(code **)(*(long *)(lVar22 + 8) + 0x18))();
            func_0x000107c615e8(uVar13);
            if ((uVar32 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              (**(code **)(*(long *)(lVar9 + 0xb8) + 8))
                        (*(undefined8 *)(lVar9 + 0xc0),*(undefined8 *)(lVar9 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              lVar22 = *(long *)(lVar9 + 0xb8);
              uVar31 = *(undefined8 *)(lVar9 + 0xc0);
              uVar33 = *(undefined8 *)(lVar9 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar9 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar22 + 8))(uVar31,uVar33);
            }
            uVar14 = *(undefined8 *)(lVar9 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar9 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x14;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
          func_0x00010006c090(puVar6,puVar11);
          func_0x000107c614ac(lVar18);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
        puVar4[1] = 0;
        *puVar4 = 10;
        *(undefined1 *)(puVar4 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar31 = *(undefined8 *)(lVar9 + 0xd8);
      lVar18 = *(long *)(lVar9 + 0xb8);
      uVar14 = *(undefined8 *)(lVar9 + 0xc0);
      uVar33 = *(undefined8 *)(lVar9 + 0xb0);
      func_0x00010006c090(lVar22,puVar23);
      func_0x00010006c090(lVar17,puVar8);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar18 + 8))(uVar14,uVar33);
      goto LAB_101dfb99c;
    }
    puVar5 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar8;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar9 + 0x110) = puVar8;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar22 == 0) goto LAB_101dfbf0c;
    lVar18 = *(long *)(lVar9 + 0xa0);
    lVar17 = lVar22;
    func_0x000107c5ee30();
    puVar10 = puVar23;
    func_0x000107c61170(lVar22);
    *(long *)(lVar9 + 0x118) = lVar17;
    *(undefined **)(lVar9 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar22 = lVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar18);
    *(long *)(lVar9 + 0x128) = lVar22;
    *(undefined **)(lVar9 + 0x130) = puVar10;
    plVar25 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar9 + 0x138) = plVar25;
    *plVar25 = lVar9;
    plVar25[1] = (long)FUN_101dfbf1c;
    lVar9 = *(long *)(lVar9 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar25[0xe] = lVar22;
      plVar25[0xf] = (long)puVar10;
      plVar25[0xc] = lVar17;
      plVar25[0xd] = (long)puVar23;
      plVar25[10] = (long)puVar8;
      plVar25[0xb] = lVar9;
      plVar25[9] = (long)puVar5;
      lVar22 = 0;
      func_0x000107c5ede0();
      plVar25[0x10] = lVar22;
      lVar22 = *(long *)(lVar22 + -8);
      plVar25[0x11] = lVar22;
      uVar13 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar25[0x12] = uVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar22 = plVar25[0xe];
      lVar19 = plVar25[0xf];
      uVar13 = plVar25[0xc];
      lVar9 = plVar25[0xd];
      func_0x000107c5ed80(plVar25[0x12],plVar25[9],plVar25[10]);
      func_0x000107c5ee20(uVar13,lVar9);
      func_0x000107c5ee20(lVar22,lVar19);
      lVar19 = lVar22;
      func_0x000107c5ed90();
      lVar9 = lVar19;
      func_0x000107c5ed90();
      uVar32 = uVar13;
      func_0x000107c3127c(uVar13,lVar22,lVar19,lVar9);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(uVar13);
      if ((uVar32 & 1) == 0) {
        lVar22 = plVar25[9];
        lVar19 = plVar25[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar9 = lVar22;
        func_0x000107c5fadc(lVar22,lVar19);
        func_0x000107c43418(puVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar8);
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar22,lVar19);
        plVar25[6] = 0;
        puVar10 = puVar8;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar22);
        func_0x000107c61170(puVar8);
        lVar22 = plVar25[6];
        if (puVar10 == (undefined *)0x0) {
          lVar19 = lVar22;
          func_0x000107c61174(lVar22);
          func_0x000107c5ed30(lVar22);
          func_0x000107c61170(lVar19);
          func_0x000107c61654();
          func_0x000107c614ac(lVar22);
LAB_101dfe678:
          plVar25[3] = 0;
          plVar25[2] = 0;
          plVar25[5] = 0;
          plVar25[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar25 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar13 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar8 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar22);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar25[3] = 0;
            plVar25[2] = 0;
            plVar25[5] = 0;
            plVar25[4] = 0;
          }
          else {
            lVar22 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar22);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar22 * 0x20,plVar25 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar25[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar16 = plVar25 + 8;
          func_0x000107c6147c(plVar16,plVar25 + 2,puVar8 + 8,uVar14,6);
          if (((ulong)plVar16 & 1) != 0) {
            lVar22 = plVar25[8];
            func_0x000107c4c0a8(lVar22);
            func_0x000107c61170(lVar22);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar23;
        func_0x000107c5ed90();
        plVar25[7] = 0;
        puVar10 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar23);
        puVar5 = (undefined8 *)plVar25[7];
        if ((int)puVar10 == 0) {
          puVar4 = puVar5;
          func_0x000107c61174(puVar5);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar4);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar22 = plVar25[0x11];
        lVar19 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 10;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar22 + 8))(lVar19);
        func_0x000107c615c0(lVar19);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar22 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        (**(code **)(plVar25[0x11] + 8))(lVar22);
        func_0x000107c615c0(lVar22);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar22 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar32 = uVar13;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar28 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar13 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar30 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar26 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar28 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar32 = uVar26;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar13 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar30 = 0;
        uVar32 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar32 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar28,uVar26);
          func_0x000100de78a0(uVar30,uVar32);
          UNRECOVERED_JUMPTABLE_01 = pcVar28;
          func_0x000100e25fcc(pcVar28,uVar26,uVar30,uVar32);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28,uVar26);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar32 >> 0x3c) {
        func_0x0001000b44c0(pcVar28);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar13 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_101dfe9f8;
          }
          uVar30 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar32 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar32 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar13 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar32 = 0xf000000000000000;
          uVar30 = uVar13;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar32 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x000100de78a0(uVar30,uVar32);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar26,uVar30,uVar32);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar32 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar28,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar30,uVar32);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar31 = *(undefined8 *)(lVar9 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 7;
    *(undefined1 *)(puVar4 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(lVar22);
LAB_101dfb99c:
    func_0x000107c615e8(uVar31);
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfa9f8; end: 101dfaa6b;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfa9f8(void)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  code *UNRECOVERED_JUMPTABLE;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  long *plVar25;
  ulong uVar26;
  int *piVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong unaff_x29;
  code *pcStack_2a8;
  long lStack_2a0;
  long lStack_298;
  ulong uStack_290;
  code *pcStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  ulong uStack_250;
  code *pcStack_248;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_218;
  long lStack_210;
  long *plStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  long lStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  long lStack_130;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE = FUN_101dfaa6c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101dfaa6c;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[5];
  lVar9 = plVar25[6];
  plVar16 = plVar25 + 2;
  func_0x0001000a8868(plVar16,lVar19);
  piVar27 = *(int **)(lVar9 + 8);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar25[0x1b] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfab20;
  lVar20 = plVar25[0x12];
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,lVar20,plVar25[0x13],1,lVar19,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_70 = (ulong)&uStack_30 | 0x1000000000000000;
  plVar3 = &lStack_80;
  pcStack_68 = FUN_101dfab20;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_78 + 0xe0) = puVar5;
  *(long *)(lStack_78 + 0xe8) = lVar20;
  *(long **)(lStack_78 + 0xf0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_78 + 0xd8));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      UNRECOVERED_JUMPTABLE = FUN_101dfabc8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb30c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  puStack_90 = (ulong *)((ulong)&uStack_70 | 0x1000000000000000);
  pcStack_88 = FUN_101dfabc8;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar25[0x15];
  lStack_a8 = lVar9;
  lStack_a0 = lVar19;
  plStack_98 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar19;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1f] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x20] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfac94;
  lVar19 = lStack_a0;
  pcStack_2a8 = pcStack_88;
  puVar2 = puStack_90;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
LAB_104876574:
    *(long *)((long)plVar3 + -0x20) = lVar19;
    *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = pcStack_2a8;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar4;
    puVar4[0xb] = puVar5;
    puVar4[0xc] = plVar25 + 0xd;
    puVar4[9] = plVar16;
    puVar4[10] = &UNK_1107a6f08;
    puVar4[8] = plVar25 + 0xb;
    lVar19 = *plVar21;
    puVar4[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar4[0xe] = uVar14;
    lVar19 = *(long *)(lVar19 + 0x50);
    puVar4[0xf] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar4[0x10] = lVar19;
    plVar25 = (long *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar4[0x11] = plVar25;
    puVar15 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar4[0x12] = puVar15;
    *puVar15 = puVar4;
    puVar15[1] = &UNK_104876614;
    UNRECOVERED_JUMPTABLE = *(code **)((long)plVar3 + -8);
    uVar13 = *(ulong *)((long)plVar3 + -0x10);
LAB_104875f04:
    *(ulong *)((long)plVar3 + -0x10) = uVar13 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar15;
    puVar15[5] = plVar25;
    puVar15[6] = plVar21;
    lVar20 = *(long *)(*plVar21 + 0x50);
    puVar15[7] = lVar20;
    lVar19 = 0;
    __sSqMa(0,lVar20);
    puVar15[8] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar15[9] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[10] = uVar13;
    lVar19 = *(long *)(lVar20 + -8);
    puVar15[0xb] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[0xc] = uVar13;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&puStack_90 | 0x1000000000000000;
  pcStack_b8 = FUN_101dfac94;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(long **)(lStack_c8 + 0x108) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lStack_c8 + 0xf8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_e0 = (ulong)&uStack_c0 | 0x1000000000000000;
  pcStack_d8 = FUN_101dfad34;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0xe] = 0;
  pcVar28 = (code *)plVar25[0xb];
  UNRECOVERED_JUMPTABLE = pcVar28;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar5 = (undefined8 *)plVar25[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar5 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar5 = (undefined8 *)plVar25[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x16;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar19,puVar5);
      func_0x000107c615e8(pcVar28);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar19 = plVar25[0x14];
    func_0x000107c5ee30();
    puVar8 = puVar23;
    func_0x000107c61170(puVar5);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x00010006c090(puVar4,puVar23);
      goto LAB_101dfaf74;
    }
    puStack_158 = (undefined8 *)plVar25[0x1c];
    lStack_150 = plVar25[0x1d];
    lVar9 = plVar25[0x15];
    lVar20 = lVar19;
    puStack_148 = puVar4;
    func_0x000107c5ee30();
    puStack_140 = puVar8;
    func_0x000107c61170(lVar19);
    lStack_168 = *(long *)(lVar9 + 0x30);
    func_0x0001000d224c(plVar25 + 7);
    uVar13 = plVar25[7];
    lVar19 = plVar25[8];
    uVar32 = uVar13;
    func_0x000107c614f0();
    plVar25[0xf] = uVar13;
    (**(code **)(*(long *)(lVar19 + 8) + 0x28))();
    puVar4 = puStack_148;
    func_0x000107c615e8(uVar13);
    puVar15 = puStack_158;
    func_0x000107c5ee20(puStack_158,lStack_150);
    puVar5 = puVar4;
    puStack_158 = (undefined8 *)puVar23;
    func_0x000107c5ee20(puVar4,puVar23);
    puVar8 = puStack_140;
    puVar10 = puStack_140;
    lStack_150 = lVar20;
    func_0x000107c5ee20(lVar20);
    puVar6 = puVar15;
    if ((uVar32 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    if (puVar6 == (undefined8 *)0x0) {
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
      puVar15[1] = 0;
      *puVar15 = 10;
      *(undefined1 *)(puVar15 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puStack_158);
      func_0x00010006c090(lVar19,puVar5);
      func_0x00010006c090(lStack_150,puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      goto LAB_101dfae20;
    }
    puStack_160 = (undefined *)plVar25[0x21];
    puVar5 = (undefined8 *)plVar25[0x18];
    puVar4 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    func_0x00010006c00c(puVar4,puVar10);
    puVar23 = puVar10;
    func_0x0001000b44c0(puVar4,puVar10);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar7 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar5,pcVar7,puVar23);
    func_0x000107c6142c(puVar23);
    puVar8 = puStack_160;
    func_0x000107c5ee40(puVar5,1,puVar4,puVar10);
    if (puVar8 != (undefined *)0x0) {
      lVar19 = plVar25[0x1c];
      lVar20 = plVar25[0x1d];
      lStack_170 = plVar25[0x17];
      puStack_160 = (undefined *)plVar25[0x18];
      lStack_168 = plVar25[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 0x14;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_148,puStack_158);
      func_0x00010006c090(lVar19,lVar20);
      func_0x00010006c090(lStack_150,puStack_140);
      func_0x00010006c090(puVar4,puVar10);
      func_0x000107c614ac(puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lStack_170 + 8))(puStack_160,lStack_168);
      puVar5 = puVar4;
      goto LAB_101dfae20;
    }
    puStack_160 = puVar10;
    func_0x0001000d224c(plVar25 + 9);
    puVar15 = (undefined8 *)plVar25[9];
    lVar19 = plVar25[10];
    puVar5 = puVar15;
    func_0x000107c614f0();
    plVar25[0x10] = (long)puVar15;
    (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
    func_0x000107c615e8(puVar15);
    lVar19 = plVar25[0x1c];
    lVar9 = plVar25[0x1d];
    lVar20 = plVar25[0x17];
    lVar17 = plVar25[0x18];
    puVar23 = (undefined *)plVar25[0x16];
    if (((ulong)puVar5 & 1) == 0) {
      (**(code **)(lVar20 + 8))(lVar17,puVar23);
      func_0x00010006c090(puStack_148,puStack_158);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_150,puStack_140);
      func_0x00010006c090(puVar4,puStack_160);
      func_0x000107c615e8(pcVar28);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_148,puStack_158);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_150,puStack_140);
      func_0x00010006c090(puVar4,puStack_160);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lVar20 + 8))(lVar17,puVar23);
    }
    func_0x000107c615c0(plVar25[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar25[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar19 = plVar25[0x1c];
    lVar20 = plVar25[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar19,lVar20);
    func_0x000107c615e8(pcVar28);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar5);
LAB_101dfae20:
    func_0x000107c615c0(plVar25[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_e0 | 0x1000000000000000;
  pcStack_178 = FUN_101dfb30c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_188 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_198 = FUN_101dfb374;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)plVar25[0x20];
  lVar19 = plVar25[0x1c];
  lVar20 = plVar25[0x1d];
  lVar29 = plVar25[0xd];
  puVar8 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  pcStack_1c0 = pcVar28;
  puStack_1b8 = puVar23;
  pcStack_1b0 = UNRECOVERED_JUMPTABLE;
  plStack_1a8 = plVar25;
  func_0x000107c613f8();
  *plVar16 = lVar29;
  lVar9 = lVar20;
  func_0x00010006c090(lVar19);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_1e0 = (ulong)&uStack_1a0 | 0x1000000000000000;
  plVar3 = &lStack_1f0;
  pcStack_1d8 = FUN_101dfb414;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0x14] = lVar18;
  plVar25[0x15] = (long)puVar8;
  plVar25[0x12] = lVar9;
  plVar25[0x13] = lVar17;
  plVar25[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar9 = 0;
  plStack_1e8 = plVar25;
  func_0x000107c5ede0();
  plVar25[0x16] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar25[0x17] = lVar9;
  uVar13 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar25[0x18] = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_200 = (ulong)&uStack_1e0 | 0x1000000000000000;
  pcStack_1f8 = FUN_101dfb4a8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_210 = lVar19;
  plStack_208 = plVar25;
  func_0x000107c5fd64();
  plVar21 = *(long **)(plVar25[0x15] + 0x38);
  puVar15 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar25[0x19] = (long)puVar15;
  *puVar15 = plVar25;
  puVar15[1] = FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    plVar25 = plVar25 + 2;
    UNRECOVERED_JUMPTABLE = pcStack_1f8;
    uVar13 = uStack_200;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  uStack_230 = (ulong)&uStack_200 | 0x1000000000000000;
  pcStack_228 = FUN_101dfb57c;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = *plVar25;
  plVar25 = (long *)*plVar25;
  func_0x000107c615c0(*(undefined8 *)(lStack_238 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_250 = (ulong)&uStack_230 | 0x1000000000000000;
  uStack_268 = 0;
  pcStack_248 = FUN_101dfb5f0;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[5];
  lVar9 = plVar25[6];
  plVar16 = plVar25 + 2;
  puStack_278 = puVar5;
  lStack_270 = lVar29;
  lStack_260 = lVar20;
  plStack_258 = plVar25;
  func_0x0001000a8868(plVar16,lVar19);
  piVar27 = *(int **)(lVar9 + 0x10);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar25[0x1a] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,plVar25[0x12],plVar25[0x13],1,lVar19,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_290 = (ulong)&uStack_250 | 0x1000000000000000;
  plVar3 = &lStack_2a0;
  pcStack_288 = FUN_101dfb6a4;
  puVar2 = &uStack_290;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_298 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_298 + 0xd8) = puVar5;
  *(long **)(lStack_298 + 0xe0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_298 + 0xd0));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_2a8 = FUN_101dfb748;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar25[0x15];
  func_0x0001000834e4(plVar25 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar20 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar20;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1d] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x1e] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto LAB_104876574;
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *plVar25;
  lVar9 = *plVar25;
  *(long **)(lVar20 + 0xf8) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xe8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar9 + 0x70) = 0;
  puVar15 = *(undefined8 **)(lVar9 + 0x58);
  *(undefined8 **)(lVar9 + 0x100) = puVar15;
  puVar5 = puVar15;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar9 + 0x108) = puVar5;
  lVar19 = *(long *)(lVar9 + 0x70);
  func_0x000107c61174();
  puVar4 = puVar5;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    if (lVar19 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar9 + 0xd8);
    uVar14 = *(undefined8 *)(lVar9 + 0xc0);
    puVar4 = puVar5;
    func_0x000107c4407c(puVar5);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puVar8 = puVar23;
    func_0x000107c5ed80(uVar14,puVar6);
    func_0x000107c6142c(puVar23);
    puVar4 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar19 = *(long *)(lVar9 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar18 = *(long *)(lVar9 + 0xa0);
      lVar17 = lVar19;
      func_0x000107c5ee30();
      puVar23 = puVar8;
      func_0x000107c61170(lVar19);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar19 = lVar18;
      func_0x000107c5ee30();
      puVar10 = puVar23;
      func_0x000107c61170(lVar18);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar9 + 0x38);
        uVar13 = *(ulong *)(lVar9 + 0x38);
        lVar18 = *(long *)(lVar9 + 0x40);
        uVar32 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(lVar9 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar6 = puVar4;
        func_0x000107c5ee20(puVar4,puVar10);
        lVar18 = lVar17;
        func_0x000107c5ee20(lVar17,puVar8);
        lVar29 = lVar19;
        puVar11 = puVar23;
        func_0x000107c5ee20(lVar19,puVar23);
        puVar24 = puVar6;
        if ((uVar32 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar29);
        func_0x000107c61170(lVar18);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
          puVar6[1] = 0;
          *puVar6 = 10;
          *(undefined1 *)(puVar6 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
        }
        else {
          lVar18 = *(long *)(lVar9 + 0xf8);
          puVar22 = *(undefined8 **)(lVar9 + 0xc0);
          puVar6 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar22,1,puVar6,puVar11);
          if (lVar18 == 0) {
            func_0x0001000b44c0(puVar4,puVar10);
            func_0x00010006c090(puVar6,puVar11);
            func_0x00010006c090(lVar19,puVar23);
            func_0x00010006c090(lVar17,puVar8);
            func_0x0001000d224c(lVar9 + 0x48);
            uVar13 = *(ulong *)(lVar9 + 0x48);
            lVar19 = *(long *)(lVar9 + 0x50);
            uVar32 = uVar13;
            func_0x000107c614f0();
            *(ulong *)(lVar9 + 0x80) = uVar13;
            (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
            func_0x000107c615e8(uVar13);
            if ((uVar32 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              (**(code **)(*(long *)(lVar9 + 0xb8) + 8))
                        (*(undefined8 *)(lVar9 + 0xc0),*(undefined8 *)(lVar9 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              lVar19 = *(long *)(lVar9 + 0xb8);
              uVar31 = *(undefined8 *)(lVar9 + 0xc0);
              uVar33 = *(undefined8 *)(lVar9 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar9 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar19 + 8))(uVar31,uVar33);
            }
            uVar14 = *(undefined8 *)(lVar9 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar9 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
          puVar22[1] = 0;
          *puVar22 = 0x14;
          *(undefined1 *)(puVar22 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
          func_0x00010006c090(puVar6,puVar11);
          func_0x000107c614ac(lVar18);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
        puVar4[1] = 0;
        *puVar4 = 10;
        *(undefined1 *)(puVar4 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar31 = *(undefined8 *)(lVar9 + 0xd8);
      lVar18 = *(long *)(lVar9 + 0xb8);
      uVar14 = *(undefined8 *)(lVar9 + 0xc0);
      uVar33 = *(undefined8 *)(lVar9 + 0xb0);
      func_0x00010006c090(lVar19,puVar23);
      func_0x00010006c090(lVar17,puVar8);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar18 + 8))(uVar14,uVar33);
      goto LAB_101dfb99c;
    }
    puVar5 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar8;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar9 + 0x110) = puVar8;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar19 == 0) goto LAB_101dfbf0c;
    lVar18 = *(long *)(lVar9 + 0xa0);
    lVar17 = lVar19;
    func_0x000107c5ee30();
    puVar10 = puVar23;
    func_0x000107c61170(lVar19);
    *(long *)(lVar9 + 0x118) = lVar17;
    *(undefined **)(lVar9 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar19 = lVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar18);
    *(long *)(lVar9 + 0x128) = lVar19;
    *(undefined **)(lVar9 + 0x130) = puVar10;
    plVar25 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar9 + 0x138) = plVar25;
    *plVar25 = lVar9;
    plVar25[1] = (long)FUN_101dfbf1c;
    lVar9 = *(long *)(lVar9 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar25[0xe] = lVar19;
      plVar25[0xf] = (long)puVar10;
      plVar25[0xc] = lVar17;
      plVar25[0xd] = (long)puVar23;
      plVar25[10] = (long)puVar8;
      plVar25[0xb] = lVar9;
      plVar25[9] = (long)puVar5;
      lVar19 = 0;
      func_0x000107c5ede0();
      plVar25[0x10] = lVar19;
      lVar19 = *(long *)(lVar19 + -8);
      plVar25[0x11] = lVar19;
      uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar25[0x12] = uVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = plVar25[0xe];
      lVar20 = plVar25[0xf];
      uVar13 = plVar25[0xc];
      lVar9 = plVar25[0xd];
      func_0x000107c5ed80(plVar25[0x12],plVar25[9],plVar25[10]);
      func_0x000107c5ee20(uVar13,lVar9);
      func_0x000107c5ee20(lVar19,lVar20);
      lVar20 = lVar19;
      func_0x000107c5ed90();
      lVar9 = lVar20;
      func_0x000107c5ed90();
      uVar32 = uVar13;
      func_0x000107c3127c(uVar13,lVar19,lVar20,lVar9);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(uVar13);
      if ((uVar32 & 1) == 0) {
        lVar19 = plVar25[9];
        lVar20 = plVar25[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar9 = lVar19;
        func_0x000107c5fadc(lVar19,lVar20);
        func_0x000107c43418(puVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar8);
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar19,lVar20);
        plVar25[6] = 0;
        puVar10 = puVar8;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        func_0x000107c61170(puVar8);
        lVar19 = plVar25[6];
        if (puVar10 == (undefined *)0x0) {
          lVar20 = lVar19;
          func_0x000107c61174(lVar19);
          func_0x000107c5ed30(lVar19);
          func_0x000107c61170(lVar20);
          func_0x000107c61654();
          func_0x000107c614ac(lVar19);
LAB_101dfe678:
          plVar25[3] = 0;
          plVar25[2] = 0;
          plVar25[5] = 0;
          plVar25[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar25 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar13 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar8 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar19);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar25[3] = 0;
            plVar25[2] = 0;
            plVar25[5] = 0;
            plVar25[4] = 0;
          }
          else {
            lVar19 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar19);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar19 * 0x20,plVar25 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar25[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar16 = plVar25 + 8;
          func_0x000107c6147c(plVar16,plVar25 + 2,puVar8 + 8,uVar14,6);
          if (((ulong)plVar16 & 1) != 0) {
            lVar19 = plVar25[8];
            func_0x000107c4c0a8(lVar19);
            func_0x000107c61170(lVar19);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar23;
        func_0x000107c5ed90();
        plVar25[7] = 0;
        puVar10 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar23);
        puVar5 = (undefined8 *)plVar25[7];
        if ((int)puVar10 == 0) {
          puVar4 = puVar5;
          func_0x000107c61174(puVar5);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar4);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar19 = plVar25[0x11];
        lVar20 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 10;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar19 + 8))(lVar20);
        func_0x000107c615c0(lVar20);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar19 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        (**(code **)(plVar25[0x11] + 8))(lVar19);
        func_0x000107c615c0(lVar19);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar19 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar32 = uVar13;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar28 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar13 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar30 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar26 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar28 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar32 = uVar26;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar13 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar30 = 0;
        uVar32 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar32 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar28,uVar26);
          func_0x000100de78a0(uVar30,uVar32);
          UNRECOVERED_JUMPTABLE_01 = pcVar28;
          func_0x000100e25fcc(pcVar28,uVar26,uVar30,uVar32);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28,uVar26);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar32 >> 0x3c) {
        func_0x0001000b44c0(pcVar28);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar13 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_101dfe9f8;
          }
          uVar30 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar32 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar32 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar13 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar32 = 0xf000000000000000;
          uVar30 = uVar13;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar32 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x000100de78a0(uVar30,uVar32);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar26,uVar30,uVar32);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar32 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar28,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar30,uVar32);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar31 = *(undefined8 *)(lVar9 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 7;
    *(undefined1 *)(puVar4 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(lVar19);
LAB_101dfb99c:
    func_0x000107c615e8(uVar31);
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfaa6c; end: 101dfab1f;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfaa6c(void)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  code *UNRECOVERED_JUMPTABLE;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  long *plVar25;
  ulong uVar26;
  int *piVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong unaff_x29;
  code *pcStack_288;
  long lStack_280;
  long lStack_278;
  ulong uStack_270;
  code *pcStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long *plStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long *plStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  long lStack_110;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  ulong *puStack_70;
  code *pcStack_68;
  long lStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_40;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[5];
  lVar9 = unaff_x22[6];
  plVar16 = unaff_x22 + 2;
  func_0x0001000a8868(plVar16,lVar19);
  piVar27 = *(int **)(lVar9 + 8);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  unaff_x22[0x1b] = (long)puVar5;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_101dfab20;
  lVar20 = unaff_x22[0x12];
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_40) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,lVar20,unaff_x22[0x13],1,lVar19,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  plVar3 = &lStack_60;
  pcStack_48 = FUN_101dfab20;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *unaff_x22;
  plVar25 = (long *)*unaff_x22;
  *(undefined8 **)(lVar18 + 0xe0) = puVar5;
  *(long *)(lVar18 + 0xe8) = lVar20;
  *(long **)(lVar18 + 0xf0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xd8));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      UNRECOVERED_JUMPTABLE = FUN_101dfabc8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb30c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  puStack_70 = (ulong *)((ulong)&uStack_50 | 0x1000000000000000);
  pcStack_68 = FUN_101dfabc8;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar25[0x15];
  lStack_88 = lVar9;
  lStack_80 = lVar19;
  plStack_78 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar19;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1f] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x20] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfac94;
  lVar19 = lStack_80;
  pcStack_288 = pcStack_68;
  puVar2 = puStack_70;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
LAB_104876574:
    *(long *)((long)plVar3 + -0x20) = lVar19;
    *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = pcStack_288;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar4;
    puVar4[0xb] = puVar5;
    puVar4[0xc] = plVar25 + 0xd;
    puVar4[9] = plVar16;
    puVar4[10] = &UNK_1107a6f08;
    puVar4[8] = plVar25 + 0xb;
    lVar19 = *plVar21;
    puVar4[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar4[0xe] = uVar14;
    lVar19 = *(long *)(lVar19 + 0x50);
    puVar4[0xf] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar4[0x10] = lVar19;
    plVar25 = (long *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar4[0x11] = plVar25;
    puVar15 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar4[0x12] = puVar15;
    *puVar15 = puVar4;
    puVar15[1] = &UNK_104876614;
    UNRECOVERED_JUMPTABLE = *(code **)((long)plVar3 + -8);
    uVar13 = *(ulong *)((long)plVar3 + -0x10);
LAB_104875f04:
    *(ulong *)((long)plVar3 + -0x10) = uVar13 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar15;
    puVar15[5] = plVar25;
    puVar15[6] = plVar21;
    lVar20 = *(long *)(*plVar21 + 0x50);
    puVar15[7] = lVar20;
    lVar19 = 0;
    __sSqMa(0,lVar20);
    puVar15[8] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar15[9] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[10] = uVar13;
    lVar19 = *(long *)(lVar20 + -8);
    puVar15[0xb] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[0xc] = uVar13;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&puStack_70 | 0x1000000000000000;
  pcStack_98 = FUN_101dfac94;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(long **)(lStack_a8 + 0x108) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lStack_a8 + 0xf8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_b8 = FUN_101dfad34;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0xe] = 0;
  pcVar28 = (code *)plVar25[0xb];
  UNRECOVERED_JUMPTABLE = pcVar28;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar5 = (undefined8 *)plVar25[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar5 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar5 = (undefined8 *)plVar25[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x16;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar19,puVar5);
      func_0x000107c615e8(pcVar28);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar19 = plVar25[0x14];
    func_0x000107c5ee30();
    puVar8 = puVar23;
    func_0x000107c61170(puVar5);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x00010006c090(puVar4,puVar23);
      goto LAB_101dfaf74;
    }
    puStack_138 = (undefined8 *)plVar25[0x1c];
    lStack_130 = plVar25[0x1d];
    lVar9 = plVar25[0x15];
    lVar20 = lVar19;
    puStack_128 = puVar4;
    func_0x000107c5ee30();
    puStack_120 = puVar8;
    func_0x000107c61170(lVar19);
    lStack_148 = *(long *)(lVar9 + 0x30);
    func_0x0001000d224c(plVar25 + 7);
    uVar13 = plVar25[7];
    lVar19 = plVar25[8];
    uVar32 = uVar13;
    func_0x000107c614f0();
    plVar25[0xf] = uVar13;
    (**(code **)(*(long *)(lVar19 + 8) + 0x28))();
    puVar4 = puStack_128;
    func_0x000107c615e8(uVar13);
    puVar15 = puStack_138;
    func_0x000107c5ee20(puStack_138,lStack_130);
    puVar5 = puVar4;
    puStack_138 = (undefined8 *)puVar23;
    func_0x000107c5ee20(puVar4,puVar23);
    puVar8 = puStack_120;
    puVar10 = puStack_120;
    lStack_130 = lVar20;
    func_0x000107c5ee20(lVar20);
    puVar6 = puVar15;
    if ((uVar32 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    if (puVar6 == (undefined8 *)0x0) {
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
      puVar15[1] = 0;
      *puVar15 = 10;
      *(undefined1 *)(puVar15 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puStack_138);
      func_0x00010006c090(lVar19,puVar5);
      func_0x00010006c090(lStack_130,puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      goto LAB_101dfae20;
    }
    puStack_140 = (undefined *)plVar25[0x21];
    puVar5 = (undefined8 *)plVar25[0x18];
    puVar4 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    func_0x00010006c00c(puVar4,puVar10);
    puVar23 = puVar10;
    func_0x0001000b44c0(puVar4,puVar10);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar7 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar5,pcVar7,puVar23);
    func_0x000107c6142c(puVar23);
    puVar8 = puStack_140;
    func_0x000107c5ee40(puVar5,1,puVar4,puVar10);
    if (puVar8 != (undefined *)0x0) {
      lVar19 = plVar25[0x1c];
      lVar20 = plVar25[0x1d];
      lStack_150 = plVar25[0x17];
      puStack_140 = (undefined *)plVar25[0x18];
      lStack_148 = plVar25[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 0x14;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_128,puStack_138);
      func_0x00010006c090(lVar19,lVar20);
      func_0x00010006c090(lStack_130,puStack_120);
      func_0x00010006c090(puVar4,puVar10);
      func_0x000107c614ac(puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lStack_150 + 8))(puStack_140,lStack_148);
      puVar5 = puVar4;
      goto LAB_101dfae20;
    }
    puStack_140 = puVar10;
    func_0x0001000d224c(plVar25 + 9);
    puVar15 = (undefined8 *)plVar25[9];
    lVar19 = plVar25[10];
    puVar5 = puVar15;
    func_0x000107c614f0();
    plVar25[0x10] = (long)puVar15;
    (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
    func_0x000107c615e8(puVar15);
    lVar19 = plVar25[0x1c];
    lVar9 = plVar25[0x1d];
    lVar20 = plVar25[0x17];
    lVar18 = plVar25[0x18];
    puVar23 = (undefined *)plVar25[0x16];
    if (((ulong)puVar5 & 1) == 0) {
      (**(code **)(lVar20 + 8))(lVar18,puVar23);
      func_0x00010006c090(puStack_128,puStack_138);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_130,puStack_120);
      func_0x00010006c090(puVar4,puStack_140);
      func_0x000107c615e8(pcVar28);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_128,puStack_138);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_130,puStack_120);
      func_0x00010006c090(puVar4,puStack_140);
      func_0x000107c615e8(pcVar28);
      (**(code **)(lVar20 + 8))(lVar18,puVar23);
    }
    func_0x000107c615c0(plVar25[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar25[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar19 = plVar25[0x1c];
    lVar20 = plVar25[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar19,lVar20);
    func_0x000107c615e8(pcVar28);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar5);
LAB_101dfae20:
    func_0x000107c615c0(plVar25[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_c0 | 0x1000000000000000;
  pcStack_158 = FUN_101dfb30c;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_168 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_101dfb374;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)plVar25[0x20];
  lVar19 = plVar25[0x1c];
  lVar20 = plVar25[0x1d];
  lVar29 = plVar25[0xd];
  puVar8 = &UNK_1107a6f08;
  lVar18 = 0;
  lVar17 = 0;
  pcStack_1a0 = pcVar28;
  puStack_198 = puVar23;
  pcStack_190 = UNRECOVERED_JUMPTABLE;
  plStack_188 = plVar25;
  func_0x000107c613f8();
  *plVar16 = lVar29;
  lVar9 = lVar20;
  func_0x00010006c090(lVar19);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
  plVar3 = &lStack_1d0;
  pcStack_1b8 = FUN_101dfb414;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0x14] = lVar17;
  plVar25[0x15] = (long)puVar8;
  plVar25[0x12] = lVar9;
  plVar25[0x13] = lVar18;
  plVar25[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar9 = 0;
  plStack_1c8 = plVar25;
  func_0x000107c5ede0();
  plVar25[0x16] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar25[0x17] = lVar9;
  uVar13 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar25[0x18] = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_1e0 = (ulong)&uStack_1c0 | 0x1000000000000000;
  pcStack_1d8 = FUN_101dfb4a8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = lVar19;
  plStack_1e8 = plVar25;
  func_0x000107c5fd64();
  plVar21 = *(long **)(plVar25[0x15] + 0x38);
  puVar15 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar25[0x19] = (long)puVar15;
  *puVar15 = plVar25;
  puVar15[1] = FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    plVar25 = plVar25 + 2;
    UNRECOVERED_JUMPTABLE = pcStack_1d8;
    uVar13 = uStack_1e0;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  uStack_210 = (ulong)&uStack_1e0 | 0x1000000000000000;
  pcStack_208 = FUN_101dfb57c;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = *plVar25;
  plVar25 = (long *)*plVar25;
  func_0x000107c615c0(*(undefined8 *)(lStack_218 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_230 = (ulong)&uStack_210 | 0x1000000000000000;
  uStack_248 = 0;
  pcStack_228 = FUN_101dfb5f0;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[5];
  lVar9 = plVar25[6];
  plVar16 = plVar25 + 2;
  puStack_258 = puVar5;
  lStack_250 = lVar29;
  lStack_240 = lVar20;
  plStack_238 = plVar25;
  func_0x0001000a8868(plVar16,lVar19);
  piVar27 = *(int **)(lVar9 + 0x10);
  iVar1 = *piVar27;
  puVar5 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar25[0x1a] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE,plVar25[0x12],plVar25[0x13],1,lVar19,lVar9);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_270 = (ulong)&uStack_230 | 0x1000000000000000;
  plVar3 = &lStack_280;
  pcStack_268 = FUN_101dfb6a4;
  puVar2 = &uStack_270;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_278 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_278 + 0xd8) = puVar5;
  *(long **)(lStack_278 + 0xe0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_278 + 0xd0));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_288 = FUN_101dfb748;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar25[0x15];
  func_0x0001000834e4(plVar25 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar20 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar20;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1d] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x1e] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto LAB_104876574;
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *plVar25;
  lVar9 = *plVar25;
  *(long **)(lVar20 + 0xf8) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xe8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar9 + 0x70) = 0;
  puVar15 = *(undefined8 **)(lVar9 + 0x58);
  *(undefined8 **)(lVar9 + 0x100) = puVar15;
  puVar5 = puVar15;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar9 + 0x108) = puVar5;
  lVar19 = *(long *)(lVar9 + 0x70);
  func_0x000107c61174();
  puVar4 = puVar5;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    if (lVar19 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar9 + 0xd8);
    uVar14 = *(undefined8 *)(lVar9 + 0xc0);
    puVar4 = puVar5;
    func_0x000107c4407c(puVar5);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puVar8 = puVar23;
    func_0x000107c5ed80(uVar14,puVar6);
    func_0x000107c6142c(puVar23);
    puVar4 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar19 = *(long *)(lVar9 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar17 = *(long *)(lVar9 + 0xa0);
      lVar18 = lVar19;
      func_0x000107c5ee30();
      puVar23 = puVar8;
      func_0x000107c61170(lVar19);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar19 = lVar17;
      func_0x000107c5ee30();
      puVar10 = puVar23;
      func_0x000107c61170(lVar17);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar9 + 0x38);
        uVar13 = *(ulong *)(lVar9 + 0x38);
        lVar17 = *(long *)(lVar9 + 0x40);
        uVar32 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(lVar9 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar17 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar6 = puVar4;
        func_0x000107c5ee20(puVar4,puVar10);
        lVar17 = lVar18;
        func_0x000107c5ee20(lVar18,puVar8);
        lVar29 = lVar19;
        puVar11 = puVar23;
        func_0x000107c5ee20(lVar19,puVar23);
        puVar24 = puVar6;
        if ((uVar32 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar29);
        func_0x000107c61170(lVar17);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
          puVar6[1] = 0;
          *puVar6 = 10;
          *(undefined1 *)(puVar6 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
        }
        else {
          lVar17 = *(long *)(lVar9 + 0xf8);
          puVar22 = *(undefined8 **)(lVar9 + 0xc0);
          puVar6 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar22,1,puVar6,puVar11);
          if (lVar17 == 0) {
            func_0x0001000b44c0(puVar4,puVar10);
            func_0x00010006c090(puVar6,puVar11);
            func_0x00010006c090(lVar19,puVar23);
            func_0x00010006c090(lVar18,puVar8);
            func_0x0001000d224c(lVar9 + 0x48);
            uVar13 = *(ulong *)(lVar9 + 0x48);
            lVar19 = *(long *)(lVar9 + 0x50);
            uVar32 = uVar13;
            func_0x000107c614f0();
            *(ulong *)(lVar9 + 0x80) = uVar13;
            (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
            func_0x000107c615e8(uVar13);
            if ((uVar32 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              (**(code **)(*(long *)(lVar9 + 0xb8) + 8))
                        (*(undefined8 *)(lVar9 + 0xc0),*(undefined8 *)(lVar9 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              lVar19 = *(long *)(lVar9 + 0xb8);
              uVar31 = *(undefined8 *)(lVar9 + 0xc0);
              uVar33 = *(undefined8 *)(lVar9 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar9 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar19 + 8))(uVar31,uVar33);
            }
            uVar14 = *(undefined8 *)(lVar9 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar9 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
          puVar22[1] = 0;
          *puVar22 = 0x14;
          *(undefined1 *)(puVar22 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
          func_0x00010006c090(puVar6,puVar11);
          func_0x000107c614ac(lVar17);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
        puVar4[1] = 0;
        *puVar4 = 10;
        *(undefined1 *)(puVar4 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar31 = *(undefined8 *)(lVar9 + 0xd8);
      lVar17 = *(long *)(lVar9 + 0xb8);
      uVar14 = *(undefined8 *)(lVar9 + 0xc0);
      uVar33 = *(undefined8 *)(lVar9 + 0xb0);
      func_0x00010006c090(lVar19,puVar23);
      func_0x00010006c090(lVar18,puVar8);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar17 + 8))(uVar14,uVar33);
      goto LAB_101dfb99c;
    }
    puVar5 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar8;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar9 + 0x110) = puVar8;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar19 == 0) goto LAB_101dfbf0c;
    lVar17 = *(long *)(lVar9 + 0xa0);
    lVar18 = lVar19;
    func_0x000107c5ee30();
    puVar10 = puVar23;
    func_0x000107c61170(lVar19);
    *(long *)(lVar9 + 0x118) = lVar18;
    *(undefined **)(lVar9 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar19 = lVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar17);
    *(long *)(lVar9 + 0x128) = lVar19;
    *(undefined **)(lVar9 + 0x130) = puVar10;
    plVar16 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar9 + 0x138) = plVar16;
    *plVar16 = lVar9;
    plVar16[1] = (long)FUN_101dfbf1c;
    lVar9 = *(long *)(lVar9 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar16[0xe] = lVar19;
      plVar16[0xf] = (long)puVar10;
      plVar16[0xc] = lVar18;
      plVar16[0xd] = (long)puVar23;
      plVar16[10] = (long)puVar8;
      plVar16[0xb] = lVar9;
      plVar16[9] = (long)puVar5;
      lVar19 = 0;
      func_0x000107c5ede0();
      plVar16[0x10] = lVar19;
      lVar19 = *(long *)(lVar19 + -8);
      plVar16[0x11] = lVar19;
      uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar16[0x12] = uVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = plVar16[0xe];
      lVar20 = plVar16[0xf];
      uVar13 = plVar16[0xc];
      lVar9 = plVar16[0xd];
      func_0x000107c5ed80(plVar16[0x12],plVar16[9],plVar16[10]);
      func_0x000107c5ee20(uVar13,lVar9);
      func_0x000107c5ee20(lVar19,lVar20);
      lVar20 = lVar19;
      func_0x000107c5ed90();
      lVar9 = lVar20;
      func_0x000107c5ed90();
      uVar32 = uVar13;
      func_0x000107c3127c(uVar13,lVar19,lVar20,lVar9);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(uVar13);
      if ((uVar32 & 1) == 0) {
        lVar19 = plVar16[9];
        lVar20 = plVar16[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar9 = lVar19;
        func_0x000107c5fadc(lVar19,lVar20);
        func_0x000107c43418(puVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar8);
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar19,lVar20);
        plVar16[6] = 0;
        puVar10 = puVar8;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        func_0x000107c61170(puVar8);
        lVar19 = plVar16[6];
        if (puVar10 == (undefined *)0x0) {
          lVar20 = lVar19;
          func_0x000107c61174(lVar19);
          func_0x000107c5ed30(lVar19);
          func_0x000107c61170(lVar20);
          func_0x000107c61654();
          func_0x000107c614ac(lVar19);
LAB_101dfe678:
          plVar16[3] = 0;
          plVar16[2] = 0;
          plVar16[5] = 0;
          plVar16[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar16 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar13 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar8 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar19);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar16[3] = 0;
            plVar16[2] = 0;
            plVar16[5] = 0;
            plVar16[4] = 0;
          }
          else {
            lVar19 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar19);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar19 * 0x20,plVar16 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar16[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar25 = plVar16 + 8;
          func_0x000107c6147c(plVar25,plVar16 + 2,puVar8 + 8,uVar14,6);
          if (((ulong)plVar25 & 1) != 0) {
            lVar19 = plVar16[8];
            func_0x000107c4c0a8(lVar19);
            func_0x000107c61170(lVar19);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar23;
        func_0x000107c5ed90();
        plVar16[7] = 0;
        puVar10 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar23);
        puVar5 = (undefined8 *)plVar16[7];
        if ((int)puVar10 == 0) {
          puVar4 = puVar5;
          func_0x000107c61174(puVar5);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar4);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar19 = plVar16[0x11];
        lVar20 = plVar16[0x12];
        uVar13 = plVar16[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 10;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar19 + 8))(lVar20);
        func_0x000107c615c0(lVar20);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar19 = plVar16[0x12];
        uVar13 = plVar16[0x10];
        (**(code **)(plVar16[0x11] + 8))(lVar19);
        func_0x000107c615c0(lVar19);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar19 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar32 = uVar13;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar28 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar13 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar30 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar26 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar28 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar32 = uVar26;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar13 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar30 = 0;
        uVar32 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar32 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar28,uVar26);
          func_0x000100de78a0(uVar30,uVar32);
          UNRECOVERED_JUMPTABLE_01 = pcVar28;
          func_0x000100e25fcc(pcVar28,uVar26,uVar30,uVar32);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28,uVar26);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar28);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar32 >> 0x3c) {
        func_0x0001000b44c0(pcVar28);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar13 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_101dfe9f8;
          }
          uVar30 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar32 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar32 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar13 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar32 = 0xf000000000000000;
          uVar30 = uVar13;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar32 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x000100de78a0(uVar30,uVar32);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar26,uVar30,uVar32);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar32 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar28,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar30,uVar32);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar31 = *(undefined8 *)(lVar9 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 7;
    *(undefined1 *)(puVar4 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(lVar19);
LAB_101dfb99c:
    func_0x000107c615e8(uVar31);
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfab20; end: 101dfabc7;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfab20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  long *plVar25;
  ulong uVar26;
  code *pcVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong unaff_x29;
  code *pcStack_248;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  long lStack_d0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong *puStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar3 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *unaff_x22;
  plVar25 = (long *)*unaff_x22;
  *(undefined8 *)(lVar19 + 0xe0) = param_1;
  *(undefined8 *)(lVar19 + 0xe8) = param_2;
  *(long *)(lVar19 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xd8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      UNRECOVERED_JUMPTABLE = FUN_101dfabc8;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb30c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  puStack_30 = (ulong *)((ulong)&uStack_10 | 0x1000000000000000);
  pcStack_28 = FUN_101dfabc8;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[0x15];
  func_0x0001000834e4(plVar25 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar19;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1f] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x20] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfac94;
  pcStack_248 = pcStack_28;
  puVar2 = puStack_30;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
LAB_104876574:
    *(long *)((long)plVar3 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar3 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = pcStack_248;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar4;
    puVar4[0xb] = puVar5;
    puVar4[0xc] = plVar25 + 0xd;
    puVar4[9] = plVar16;
    puVar4[10] = &UNK_1107a6f08;
    puVar4[8] = plVar25 + 0xb;
    lVar19 = *plVar20;
    puVar4[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar4[0xe] = uVar14;
    lVar19 = *(long *)(lVar19 + 0x50);
    puVar4[0xf] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar4[0x10] = lVar19;
    plVar25 = (long *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar4[0x11] = plVar25;
    puVar15 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar4[0x12] = puVar15;
    *puVar15 = puVar4;
    puVar15[1] = &UNK_104876614;
    UNRECOVERED_JUMPTABLE = *(code **)((long)plVar3 + -8);
    uVar13 = *(ulong *)((long)plVar3 + -0x10);
LAB_104875f04:
    *(ulong *)((long)plVar3 + -0x10) = uVar13 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar3 + -8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 **)((long)plVar3 + -0x18) = puVar15;
    puVar15[5] = plVar25;
    puVar15[6] = plVar20;
    lVar22 = *(long *)(*plVar20 + 0x50);
    puVar15[7] = lVar22;
    lVar19 = 0;
    __sSqMa(0,lVar22);
    puVar15[8] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar15[9] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[10] = uVar13;
    lVar19 = *(long *)(lVar22 + -8);
    puVar15[0xb] = lVar19;
    uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[0xc] = uVar13;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&puStack_30 | 0x1000000000000000;
  pcStack_58 = FUN_101dfac94;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_68 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(long **)(lStack_68 + 0x108) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0xf8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
  pcStack_78 = FUN_101dfad34;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0xe] = 0;
  pcVar27 = (code *)plVar25[0xb];
  UNRECOVERED_JUMPTABLE = pcVar27;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar5 = (undefined8 *)plVar25[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar5 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar5 = (undefined8 *)plVar25[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x16;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar19,puVar5);
      func_0x000107c615e8(pcVar27);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar19 = plVar25[0x14];
    func_0x000107c5ee30();
    puVar8 = puVar23;
    func_0x000107c61170(puVar5);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x00010006c090(puVar4,puVar23);
      goto LAB_101dfaf74;
    }
    puStack_f8 = (undefined8 *)plVar25[0x1c];
    lStack_f0 = plVar25[0x1d];
    lVar9 = plVar25[0x15];
    lVar22 = lVar19;
    puStack_e8 = puVar4;
    func_0x000107c5ee30();
    puStack_e0 = puVar8;
    func_0x000107c61170(lVar19);
    lStack_108 = *(long *)(lVar9 + 0x30);
    func_0x0001000d224c(plVar25 + 7);
    uVar13 = plVar25[7];
    lVar19 = plVar25[8];
    uVar32 = uVar13;
    func_0x000107c614f0();
    plVar25[0xf] = uVar13;
    (**(code **)(*(long *)(lVar19 + 8) + 0x28))();
    puVar4 = puStack_e8;
    func_0x000107c615e8(uVar13);
    puVar15 = puStack_f8;
    func_0x000107c5ee20(puStack_f8,lStack_f0);
    puVar5 = puVar4;
    puStack_f8 = (undefined8 *)puVar23;
    func_0x000107c5ee20(puVar4,puVar23);
    puVar8 = puStack_e0;
    puVar10 = puStack_e0;
    lStack_f0 = lVar22;
    func_0x000107c5ee20(lVar22);
    puVar6 = puVar15;
    if ((uVar32 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    if (puVar6 == (undefined8 *)0x0) {
      lVar19 = plVar25[0x1c];
      puVar5 = (undefined8 *)plVar25[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
      puVar15[1] = 0;
      *puVar15 = 10;
      *(undefined1 *)(puVar15 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puStack_f8);
      func_0x00010006c090(lVar19,puVar5);
      func_0x00010006c090(lStack_f0,puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar27);
      goto LAB_101dfae20;
    }
    puStack_100 = (undefined *)plVar25[0x21];
    puVar5 = (undefined8 *)plVar25[0x18];
    puVar4 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    func_0x00010006c00c(puVar4,puVar10);
    puVar23 = puVar10;
    func_0x0001000b44c0(puVar4,puVar10);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar7 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar5,pcVar7,puVar23);
    func_0x000107c6142c(puVar23);
    puVar8 = puStack_100;
    func_0x000107c5ee40(puVar5,1,puVar4,puVar10);
    if (puVar8 != (undefined *)0x0) {
      lVar19 = plVar25[0x1c];
      lVar22 = plVar25[0x1d];
      lStack_110 = plVar25[0x17];
      puStack_100 = (undefined *)plVar25[0x18];
      lStack_108 = plVar25[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 0x14;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_e8,puStack_f8);
      func_0x00010006c090(lVar19,lVar22);
      func_0x00010006c090(lStack_f0,puStack_e0);
      func_0x00010006c090(puVar4,puVar10);
      func_0x000107c614ac(puVar8);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar27);
      (**(code **)(lStack_110 + 8))(puStack_100,lStack_108);
      puVar5 = puVar4;
      goto LAB_101dfae20;
    }
    puStack_100 = puVar10;
    func_0x0001000d224c(plVar25 + 9);
    puVar15 = (undefined8 *)plVar25[9];
    lVar19 = plVar25[10];
    puVar5 = puVar15;
    func_0x000107c614f0();
    plVar25[0x10] = (long)puVar15;
    (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
    func_0x000107c615e8(puVar15);
    lVar19 = plVar25[0x1c];
    lVar9 = plVar25[0x1d];
    lVar22 = plVar25[0x17];
    lVar17 = plVar25[0x18];
    puVar23 = (undefined *)plVar25[0x16];
    if (((ulong)puVar5 & 1) == 0) {
      (**(code **)(lVar22 + 8))(lVar17,puVar23);
      func_0x00010006c090(puStack_e8,puStack_f8);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_f0,puStack_e0);
      func_0x00010006c090(puVar4,puStack_100);
      func_0x000107c615e8(pcVar27);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_e8,puStack_f8);
      func_0x00010006c090(lVar19,lVar9);
      func_0x00010006c090(lStack_f0,puStack_e0);
      func_0x00010006c090(puVar4,puStack_100);
      func_0x000107c615e8(pcVar27);
      (**(code **)(lVar22 + 8))(lVar17,puVar23);
    }
    func_0x000107c615c0(plVar25[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar25[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar19 = plVar25[0x1c];
    lVar22 = plVar25[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar19,lVar22);
    func_0x000107c615e8(pcVar27);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar5);
LAB_101dfae20:
    func_0x000107c615c0(plVar25[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_80 | 0x1000000000000000;
  pcStack_118 = FUN_101dfb30c;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_128 = plVar25;
  func_0x0001000834e4(plVar25 + 2);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_120 | 0x1000000000000000;
  pcStack_138 = FUN_101dfb374;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)plVar25[0x20];
  lVar19 = plVar25[0x1c];
  lVar22 = plVar25[0x1d];
  lVar28 = plVar25[0xd];
  puVar8 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  pcStack_160 = pcVar27;
  puStack_158 = puVar23;
  pcStack_150 = UNRECOVERED_JUMPTABLE;
  plStack_148 = plVar25;
  func_0x000107c613f8();
  *plVar16 = lVar28;
  lVar9 = lVar22;
  func_0x00010006c090(lVar19);
  func_0x000107c615c0(plVar25[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_140 | 0x1000000000000000;
  plVar3 = &lStack_190;
  pcStack_178 = FUN_101dfb414;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25[0x14] = lVar18;
  plVar25[0x15] = (long)puVar8;
  plVar25[0x12] = lVar9;
  plVar25[0x13] = lVar17;
  plVar25[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar9 = 0;
  plStack_188 = plVar25;
  func_0x000107c5ede0();
  plVar25[0x16] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar25[0x17] = lVar9;
  uVar13 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar25[0x18] = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_198 = FUN_101dfb4a8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b0 = lVar19;
  plStack_1a8 = plVar25;
  func_0x000107c5fd64();
  plVar20 = *(long **)(plVar25[0x15] + 0x38);
  puVar15 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar25[0x19] = (long)puVar15;
  *puVar15 = plVar25;
  puVar15[1] = FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    plVar25 = plVar25 + 2;
    UNRECOVERED_JUMPTABLE = pcStack_198;
    uVar13 = uStack_1a0;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  uStack_1d0 = (ulong)&uStack_1a0 | 0x1000000000000000;
  pcStack_1c8 = FUN_101dfb57c;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d8 = *plVar25;
  plVar25 = (long *)*plVar25;
  func_0x000107c615c0(*(undefined8 *)(lStack_1d8 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_1f0 = (ulong)&uStack_1d0 | 0x1000000000000000;
  uStack_208 = 0;
  pcStack_1e8 = FUN_101dfb5f0;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = plVar25[5];
  lVar19 = plVar25[6];
  plVar16 = plVar25 + 2;
  puStack_218 = puVar5;
  lStack_210 = lVar28;
  lStack_200 = lVar22;
  plStack_1f8 = plVar25;
  func_0x0001000a8868(plVar16,unaff_x19);
  piVar29 = *(int **)(lVar19 + 0x10);
  iVar1 = *piVar29;
  puVar5 = (undefined8 *)(ulong)(uint)piVar29[1];
  func_0x000107c615b8();
  plVar25[0x1a] = (long)puVar5;
  *puVar5 = plVar25;
  puVar5[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar29))
              (UNRECOVERED_JUMPTABLE,plVar25[0x12],plVar25[0x13],1,unaff_x19,lVar19);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_230 = (ulong)&uStack_1f0 | 0x1000000000000000;
  plVar3 = &lStack_240;
  pcStack_228 = FUN_101dfb6a4;
  puVar2 = &uStack_230;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = *plVar25;
  plVar25 = (long *)*plVar25;
  *(undefined8 **)(lStack_238 + 0xd8) = puVar5;
  *(long **)(lStack_238 + 0xe0) = plVar16;
  func_0x000107c615c0(*(undefined8 *)(lStack_238 + 0xd0));
  if (plVar16 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_248 = FUN_101dfb748;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar25[0x15];
  func_0x0001000834e4(plVar25 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16 = plVar25 + 0xc;
  *plVar16 = lVar19;
  puVar4 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar25[0x1d] = (long)puVar4;
  puVar5 = puVar4;
  func_0x000100faa6a0();
  plVar25[0x1e] = (long)puVar5;
  *puVar4 = plVar25;
  puVar4[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) goto LAB_104876574;
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *plVar25;
  lVar9 = *plVar25;
  *(long **)(lVar22 + 0xf8) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xe8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar9 + 0x70) = 0;
  puVar15 = *(undefined8 **)(lVar9 + 0x58);
  *(undefined8 **)(lVar9 + 0x100) = puVar15;
  puVar5 = puVar15;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar9 + 0x108) = puVar5;
  lVar19 = *(long *)(lVar9 + 0x70);
  func_0x000107c61174();
  puVar4 = puVar5;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    if (lVar19 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar9 + 0xd8);
    uVar14 = *(undefined8 *)(lVar9 + 0xc0);
    puVar4 = puVar5;
    func_0x000107c4407c(puVar5);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puVar8 = puVar23;
    func_0x000107c5ed80(uVar14,puVar6);
    func_0x000107c6142c(puVar23);
    puVar4 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar19 = *(long *)(lVar9 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar18 = *(long *)(lVar9 + 0xa0);
      lVar17 = lVar19;
      func_0x000107c5ee30();
      puVar23 = puVar8;
      func_0x000107c61170(lVar19);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar19 = lVar18;
      func_0x000107c5ee30();
      puVar10 = puVar23;
      func_0x000107c61170(lVar18);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar9 + 0x38);
        uVar13 = *(ulong *)(lVar9 + 0x38);
        lVar18 = *(long *)(lVar9 + 0x40);
        uVar32 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(lVar9 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar6 = puVar4;
        func_0x000107c5ee20(puVar4,puVar10);
        lVar18 = lVar17;
        func_0x000107c5ee20(lVar17,puVar8);
        lVar28 = lVar19;
        puVar11 = puVar23;
        func_0x000107c5ee20(lVar19,puVar23);
        puVar24 = puVar6;
        if ((uVar32 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar28);
        func_0x000107c61170(lVar18);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
          puVar6[1] = 0;
          *puVar6 = 10;
          *(undefined1 *)(puVar6 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
        }
        else {
          lVar18 = *(long *)(lVar9 + 0xf8);
          puVar21 = *(undefined8 **)(lVar9 + 0xc0);
          puVar6 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar21,1,puVar6,puVar11);
          if (lVar18 == 0) {
            func_0x0001000b44c0(puVar4,puVar10);
            func_0x00010006c090(puVar6,puVar11);
            func_0x00010006c090(lVar19,puVar23);
            func_0x00010006c090(lVar17,puVar8);
            func_0x0001000d224c(lVar9 + 0x48);
            uVar13 = *(ulong *)(lVar9 + 0x48);
            lVar19 = *(long *)(lVar9 + 0x50);
            uVar32 = uVar13;
            func_0x000107c614f0();
            *(ulong *)(lVar9 + 0x80) = uVar13;
            (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
            func_0x000107c615e8(uVar13);
            if ((uVar32 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              (**(code **)(*(long *)(lVar9 + 0xb8) + 8))
                        (*(undefined8 *)(lVar9 + 0xc0),*(undefined8 *)(lVar9 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar9 + 0x100);
              lVar19 = *(long *)(lVar9 + 0xb8);
              uVar31 = *(undefined8 *)(lVar9 + 0xc0);
              uVar33 = *(undefined8 *)(lVar9 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar9 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar19 + 8))(uVar31,uVar33);
            }
            uVar14 = *(undefined8 *)(lVar9 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar9 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x14;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar4,puVar10);
          func_0x00010006c090(puVar6,puVar11);
          func_0x000107c614ac(lVar18);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
        puVar4[1] = 0;
        *puVar4 = 10;
        *(undefined1 *)(puVar4 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar31 = *(undefined8 *)(lVar9 + 0xd8);
      lVar18 = *(long *)(lVar9 + 0xb8);
      uVar14 = *(undefined8 *)(lVar9 + 0xc0);
      uVar33 = *(undefined8 *)(lVar9 + 0xb0);
      func_0x00010006c090(lVar19,puVar23);
      func_0x00010006c090(lVar17,puVar8);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar18 + 8))(uVar14,uVar33);
      goto LAB_101dfb99c;
    }
    puVar5 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar8;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar9 + 0x110) = puVar8;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar19 == 0) goto LAB_101dfbf0c;
    lVar18 = *(long *)(lVar9 + 0xa0);
    lVar17 = lVar19;
    func_0x000107c5ee30();
    puVar10 = puVar23;
    func_0x000107c61170(lVar19);
    *(long *)(lVar9 + 0x118) = lVar17;
    *(undefined **)(lVar9 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar19 = lVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar18);
    *(long *)(lVar9 + 0x128) = lVar19;
    *(undefined **)(lVar9 + 0x130) = puVar10;
    plVar25 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar9 + 0x138) = plVar25;
    *plVar25 = lVar9;
    plVar25[1] = (long)FUN_101dfbf1c;
    lVar9 = *(long *)(lVar9 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
      lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar25[0xe] = lVar19;
      plVar25[0xf] = (long)puVar10;
      plVar25[0xc] = lVar17;
      plVar25[0xd] = (long)puVar23;
      plVar25[10] = (long)puVar8;
      plVar25[0xb] = lVar9;
      plVar25[9] = (long)puVar5;
      lVar19 = 0;
      func_0x000107c5ede0();
      plVar25[0x10] = lVar19;
      lVar19 = *(long *)(lVar19 + -8);
      plVar25[0x11] = lVar19;
      uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar25[0x12] = uVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = plVar25[0xe];
      lVar22 = plVar25[0xf];
      uVar13 = plVar25[0xc];
      lVar9 = plVar25[0xd];
      func_0x000107c5ed80(plVar25[0x12],plVar25[9],plVar25[10]);
      func_0x000107c5ee20(uVar13,lVar9);
      func_0x000107c5ee20(lVar19,lVar22);
      lVar22 = lVar19;
      func_0x000107c5ed90();
      lVar9 = lVar22;
      func_0x000107c5ed90();
      uVar32 = uVar13;
      func_0x000107c3127c(uVar13,lVar19,lVar22,lVar9);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(uVar13);
      if ((uVar32 & 1) == 0) {
        lVar19 = plVar25[9];
        lVar22 = plVar25[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar9 = lVar19;
        func_0x000107c5fadc(lVar19,lVar22);
        func_0x000107c43418(puVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar8);
        puVar8 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar19,lVar22);
        plVar25[6] = 0;
        puVar10 = puVar8;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        func_0x000107c61170(puVar8);
        lVar19 = plVar25[6];
        if (puVar10 == (undefined *)0x0) {
          lVar22 = lVar19;
          func_0x000107c61174(lVar19);
          func_0x000107c5ed30(lVar19);
          func_0x000107c61170(lVar22);
          func_0x000107c61654();
          func_0x000107c614ac(lVar19);
LAB_101dfe678:
          plVar25[3] = 0;
          plVar25[2] = 0;
          plVar25[5] = 0;
          plVar25[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar25 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar13 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar8 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar19);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar25[3] = 0;
            plVar25[2] = 0;
            plVar25[5] = 0;
            plVar25[4] = 0;
          }
          else {
            lVar19 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar19);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar19 * 0x20,plVar25 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar25[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar16 = plVar25 + 8;
          func_0x000107c6147c(plVar16,plVar25 + 2,puVar8 + 8,uVar14,6);
          if (((ulong)plVar16 & 1) != 0) {
            lVar19 = plVar25[8];
            func_0x000107c4c0a8(lVar19);
            func_0x000107c61170(lVar19);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar23;
        func_0x000107c5ed90();
        plVar25[7] = 0;
        puVar10 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar23);
        puVar5 = (undefined8 *)plVar25[7];
        if ((int)puVar10 == 0) {
          puVar4 = puVar5;
          func_0x000107c61174(puVar5);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar4);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar19 = plVar25[0x11];
        lVar22 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 10;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar19 + 8))(lVar22);
        func_0x000107c615c0(lVar22);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar19 = plVar25[0x12];
        uVar13 = plVar25[0x10];
        (**(code **)(plVar25[0x11] + 8))(lVar19);
        func_0x000107c615c0(lVar19);
        UNRECOVERED_JUMPTABLE = (code *)plVar25[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar19 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar32 = uVar13;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar27 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar13 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar30 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar26 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar27 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar32 = uVar26;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar13 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar30 = 0;
        uVar32 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar32 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar27,uVar26);
          func_0x000100de78a0(uVar30,uVar32);
          UNRECOVERED_JUMPTABLE_01 = pcVar27;
          func_0x000100e25fcc(pcVar27,uVar26,uVar30,uVar32);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar27,uVar26);
          func_0x0001000b44c0(uVar30,uVar32);
          func_0x0001000b44c0(pcVar27);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar32 >> 0x3c) {
        func_0x0001000b44c0(pcVar27);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar32 = uVar26;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar13 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_101dfe9f8;
          }
          uVar30 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar32 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar32 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar13 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar32 = 0xf000000000000000;
          uVar30 = uVar13;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar32 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x000100de78a0(uVar30,uVar32);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar26,uVar30,uVar32);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            func_0x0001000b44c0(uVar30,uVar32);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar32 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar27,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar30,uVar32);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar31 = *(undefined8 *)(lVar9 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 7;
    *(undefined1 *)(puVar4 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(lVar19);
LAB_101dfb99c:
    func_0x000107c615e8(uVar31);
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfabc8; end: 101dfac93;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfabc8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long *plStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  long lStack_b0;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_30;
  ulong *puStack_10;
  
  puStack_10 = (ulong *)(unaff_x29 | 0x1000000000000000);
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[0x15];
  func_0x0001000834e4(unaff_x22 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar14 = unaff_x22 + 0xc;
  *plVar14 = lVar19;
  puVar3 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1f] = (long)puVar3;
  puVar4 = puVar3;
  func_0x000100faa6a0();
  unaff_x22[0x20] = (long)puVar4;
  *puVar3 = unaff_x22;
  puVar3[1] = FUN_101dfac94;
  plVar16 = (long *)register0x00000008;
  puVar2 = puStack_10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_30) {
LAB_104876574:
    *(long *)((long)plVar16 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar16 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar16 + -8) = unaff_x30;
    *(undefined8 **)((long)plVar16 + -0x18) = puVar3;
    puVar3[0xb] = puVar4;
    puVar3[0xc] = unaff_x22 + 0xd;
    puVar3[9] = plVar14;
    puVar3[10] = &UNK_1107a6f08;
    puVar3[8] = unaff_x22 + 0xb;
    lVar19 = *plVar20;
    puVar3[0xd] = &PTR_DAT_1107a6e88;
    uVar13 = 0x10;
    _swift_task_alloc();
    puVar3[0xe] = uVar13;
    lVar19 = *(long *)(lVar19 + 0x50);
    puVar3[0xf] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar3[0x10] = lVar19;
    plVar14 = (long *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar3[0x11] = plVar14;
    puVar15 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar3[0x12] = puVar15;
    *puVar15 = puVar3;
    puVar15[1] = &UNK_104876614;
    UNRECOVERED_JUMPTABLE = *(code **)((long)plVar16 + -8);
    uVar12 = *(ulong *)((long)plVar16 + -0x10);
LAB_104875f04:
    *(ulong *)((long)plVar16 + -0x10) = uVar12 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar16 + -8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 **)((long)plVar16 + -0x18) = puVar15;
    puVar15[5] = plVar14;
    puVar15[6] = plVar20;
    lVar22 = *(long *)(*plVar20 + 0x50);
    puVar15[7] = lVar22;
    lVar19 = 0;
    __sSqMa(0,lVar22);
    puVar15[8] = lVar19;
    lVar19 = *(long *)(lVar19 + -8);
    puVar15[9] = lVar19;
    uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[10] = uVar12;
    lVar19 = *(long *)(lVar22 + -8);
    puVar15[0xb] = lVar19;
    uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar15[0xc] = uVar12;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_40 = (ulong)&puStack_10 | 0x1000000000000000;
  pcStack_38 = FUN_101dfac94;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *unaff_x22;
  plVar14 = (long *)*unaff_x22;
  *(long **)(lVar19 + 0x108) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xf8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
  pcStack_58 = FUN_101dfad34;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14[0xe] = 0;
  pcVar26 = (code *)plVar14[0xb];
  UNRECOVERED_JUMPTABLE = pcVar26;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar4 = (undefined8 *)plVar14[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar4 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar4 = (undefined8 *)plVar14[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar3 = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar19 = plVar14[0x1c];
      puVar4 = (undefined8 *)plVar14[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
      puVar3[1] = 0;
      *puVar3 = 0x16;
      *(undefined1 *)(puVar3 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar19,puVar4);
      func_0x000107c615e8(pcVar26);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar19 = plVar14[0x14];
    func_0x000107c5ee30();
    puVar7 = puVar23;
    func_0x000107c61170(puVar4);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x00010006c090(puVar3,puVar23);
      goto LAB_101dfaf74;
    }
    puStack_d8 = (undefined8 *)plVar14[0x1c];
    lStack_d0 = plVar14[0x1d];
    lVar8 = plVar14[0x15];
    lVar22 = lVar19;
    puStack_c8 = puVar3;
    func_0x000107c5ee30();
    puStack_c0 = puVar7;
    func_0x000107c61170(lVar19);
    lStack_e8 = *(long *)(lVar8 + 0x30);
    func_0x0001000d224c(plVar14 + 7);
    uVar12 = plVar14[7];
    lVar19 = plVar14[8];
    uVar31 = uVar12;
    func_0x000107c614f0();
    plVar14[0xf] = uVar12;
    (**(code **)(*(long *)(lVar19 + 8) + 0x28))();
    puVar3 = puStack_c8;
    func_0x000107c615e8(uVar12);
    puVar15 = puStack_d8;
    func_0x000107c5ee20(puStack_d8,lStack_d0);
    puVar4 = puVar3;
    puStack_d8 = (undefined8 *)puVar23;
    func_0x000107c5ee20(puVar3,puVar23);
    puVar7 = puStack_c0;
    puVar9 = puStack_c0;
    lStack_d0 = lVar22;
    func_0x000107c5ee20(lVar22);
    puVar5 = puVar15;
    if ((uVar31 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    func_0x000107c61170(puVar4);
    func_0x000107c61170();
    if (puVar5 == (undefined8 *)0x0) {
      lVar19 = plVar14[0x1c];
      puVar4 = (undefined8 *)plVar14[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
      puVar15[1] = 0;
      *puVar15 = 10;
      *(undefined1 *)(puVar15 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar3,puStack_d8);
      func_0x00010006c090(lVar19,puVar4);
      func_0x00010006c090(lStack_d0,puVar7);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      goto LAB_101dfae20;
    }
    puStack_e0 = (undefined *)plVar14[0x21];
    puVar4 = (undefined8 *)plVar14[0x18];
    puVar3 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    func_0x00010006c00c(puVar3,puVar9);
    puVar23 = puVar9;
    func_0x0001000b44c0(puVar3,puVar9);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar6 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar4,pcVar6,puVar23);
    func_0x000107c6142c(puVar23);
    puVar7 = puStack_e0;
    func_0x000107c5ee40(puVar4,1,puVar3,puVar9);
    if (puVar7 != (undefined *)0x0) {
      lVar19 = plVar14[0x1c];
      lVar22 = plVar14[0x1d];
      lStack_f0 = plVar14[0x17];
      puStack_e0 = (undefined *)plVar14[0x18];
      lStack_e8 = plVar14[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x14;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_c8,puStack_d8);
      func_0x00010006c090(lVar19,lVar22);
      func_0x00010006c090(lStack_d0,puStack_c0);
      func_0x00010006c090(puVar3,puVar9);
      func_0x000107c614ac(puVar7);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lStack_f0 + 8))(puStack_e0,lStack_e8);
      puVar4 = puVar3;
      goto LAB_101dfae20;
    }
    puStack_e0 = puVar9;
    func_0x0001000d224c(plVar14 + 9);
    puVar15 = (undefined8 *)plVar14[9];
    lVar19 = plVar14[10];
    puVar4 = puVar15;
    func_0x000107c614f0();
    plVar14[0x10] = (long)puVar15;
    (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
    func_0x000107c615e8(puVar15);
    lVar19 = plVar14[0x1c];
    lVar8 = plVar14[0x1d];
    lVar22 = plVar14[0x17];
    lVar17 = plVar14[0x18];
    puVar23 = (undefined *)plVar14[0x16];
    if (((ulong)puVar4 & 1) == 0) {
      (**(code **)(lVar22 + 8))(lVar17,puVar23);
      func_0x00010006c090(puStack_c8,puStack_d8);
      func_0x00010006c090(lVar19,lVar8);
      func_0x00010006c090(lStack_d0,puStack_c0);
      func_0x00010006c090(puVar3,puStack_e0);
      func_0x000107c615e8(pcVar26);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_c8,puStack_d8);
      func_0x00010006c090(lVar19,lVar8);
      func_0x00010006c090(lStack_d0,puStack_c0);
      func_0x00010006c090(puVar3,puStack_e0);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lVar22 + 8))(lVar17,puVar23);
    }
    func_0x000107c615c0(plVar14[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar14[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar19 = plVar14[0x1c];
    lVar22 = plVar14[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar19,lVar22);
    func_0x000107c615e8(pcVar26);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar4);
LAB_101dfae20:
    func_0x000107c615c0(plVar14[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_60 | 0x1000000000000000;
  pcStack_f8 = FUN_101dfb30c;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_108 = plVar14;
  func_0x0001000834e4(plVar14 + 2);
  func_0x000107c615c0(plVar14[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar14[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_118 = FUN_101dfb374;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)plVar14[0x20];
  lVar19 = plVar14[0x1c];
  lVar22 = plVar14[0x1d];
  lVar27 = plVar14[0xd];
  puVar7 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  pcStack_140 = pcVar26;
  puStack_138 = puVar23;
  pcStack_130 = UNRECOVERED_JUMPTABLE;
  plStack_128 = plVar14;
  func_0x000107c613f8();
  *plVar16 = lVar27;
  lVar8 = lVar22;
  func_0x00010006c090(lVar19);
  func_0x000107c615c0(plVar14[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar14[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_120 | 0x1000000000000000;
  plVar16 = &lStack_170;
  pcStack_158 = FUN_101dfb414;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14[0x14] = lVar18;
  plVar14[0x15] = (long)puVar7;
  plVar14[0x12] = lVar8;
  plVar14[0x13] = lVar17;
  plVar14[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar8 = 0;
  plStack_168 = plVar14;
  func_0x000107c5ede0();
  plVar14[0x16] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x17] = lVar8;
  uVar12 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x18] = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_101dfb4a8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = lVar19;
  plStack_188 = plVar14;
  func_0x000107c5fd64();
  plVar20 = *(long **)(plVar14[0x15] + 0x38);
  puVar15 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar14[0x19] = (long)puVar15;
  *puVar15 = plVar14;
  puVar15[1] = FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    plVar14 = plVar14 + 2;
    UNRECOVERED_JUMPTABLE = pcStack_178;
    uVar12 = uStack_180;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  uStack_1b0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_1a8 = FUN_101dfb57c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = *plVar14;
  plVar14 = (long *)*plVar14;
  func_0x000107c615c0(*(undefined8 *)(lStack_1b8 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_1d0 = (ulong)&uStack_1b0 | 0x1000000000000000;
  uStack_1e8 = 0;
  pcStack_1c8 = FUN_101dfb5f0;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = plVar14[5];
  lVar19 = plVar14[6];
  plVar20 = plVar14 + 2;
  puStack_1f8 = puVar4;
  lStack_1f0 = lVar27;
  lStack_1e0 = lVar22;
  plStack_1d8 = plVar14;
  func_0x0001000a8868(plVar20,unaff_x19);
  piVar28 = *(int **)(lVar19 + 0x10);
  iVar1 = *piVar28;
  puVar4 = (undefined8 *)(ulong)(uint)piVar28[1];
  func_0x000107c615b8();
  plVar14[0x1a] = (long)puVar4;
  *puVar4 = plVar14;
  puVar4[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar14[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar28))
              (UNRECOVERED_JUMPTABLE,plVar14[0x12],plVar14[0x13],1,unaff_x19,lVar19);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_210 = (ulong)&uStack_1d0 | 0x1000000000000000;
  plVar16 = &lStack_220;
  pcStack_208 = FUN_101dfb6a4;
  puVar2 = &uStack_210;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = *plVar14;
  unaff_x22 = (long *)*plVar14;
  *(undefined8 **)(lStack_218 + 0xd8) = puVar4;
  *(long **)(lStack_218 + 0xe0) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lStack_218 + 0xd0));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_228 = FUN_101dfb748;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[0x15];
  func_0x0001000834e4(unaff_x22 + 2);
  plVar20 = *(long **)(lVar19 + 0x18);
  lVar19 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar14 = unaff_x22 + 0xc;
  *plVar14 = lVar19;
  puVar3 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1d] = (long)puVar3;
  puVar4 = puVar3;
  func_0x000100faa6a0();
  unaff_x22[0x1e] = (long)puVar4;
  *puVar3 = unaff_x22;
  puVar3[1] = FUN_101dfb814;
  unaff_x30 = pcStack_228;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) goto LAB_104876574;
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *unaff_x22;
  lVar8 = *unaff_x22;
  *(long **)(lVar22 + 0xf8) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xe8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar8 + 0x70) = 0;
  puVar15 = *(undefined8 **)(lVar8 + 0x58);
  *(undefined8 **)(lVar8 + 0x100) = puVar15;
  puVar4 = puVar15;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar8 + 0x108) = puVar4;
  lVar19 = *(long *)(lVar8 + 0x70);
  func_0x000107c61174();
  puVar3 = puVar4;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    if (lVar19 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar8 + 0xd8);
    uVar13 = *(undefined8 *)(lVar8 + 0xc0);
    puVar3 = puVar4;
    func_0x000107c4407c(puVar4);
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    puVar7 = puVar23;
    func_0x000107c5ed80(uVar13,puVar5);
    func_0x000107c6142c(puVar23);
    puVar3 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar19 = *(long *)(lVar8 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar18 = *(long *)(lVar8 + 0xa0);
      lVar17 = lVar19;
      func_0x000107c5ee30();
      puVar23 = puVar7;
      func_0x000107c61170(lVar19);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar19 = lVar18;
      func_0x000107c5ee30();
      puVar9 = puVar23;
      func_0x000107c61170(lVar18);
      FUN_101dffdc4();
      if ((ulong)puVar9 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar8 + 0x38);
        uVar12 = *(ulong *)(lVar8 + 0x38);
        lVar18 = *(long *)(lVar8 + 0x40);
        uVar31 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar8 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar5 = puVar3;
        func_0x000107c5ee20(puVar3,puVar9);
        lVar18 = lVar17;
        func_0x000107c5ee20(lVar17,puVar7);
        lVar27 = lVar19;
        puVar10 = puVar23;
        func_0x000107c5ee20(lVar19,puVar23);
        puVar24 = puVar5;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar27);
        func_0x000107c61170(lVar18);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
          puVar5[1] = 0;
          *puVar5 = 10;
          *(undefined1 *)(puVar5 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar9);
        }
        else {
          lVar18 = *(long *)(lVar8 + 0xf8);
          puVar21 = *(undefined8 **)(lVar8 + 0xc0);
          puVar5 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar21,1,puVar5,puVar10);
          if (lVar18 == 0) {
            func_0x0001000b44c0(puVar3,puVar9);
            func_0x00010006c090(puVar5,puVar10);
            func_0x00010006c090(lVar19,puVar23);
            func_0x00010006c090(lVar17,puVar7);
            func_0x0001000d224c(lVar8 + 0x48);
            uVar12 = *(ulong *)(lVar8 + 0x48);
            lVar19 = *(long *)(lVar8 + 0x50);
            uVar31 = uVar12;
            func_0x000107c614f0();
            *(ulong *)(lVar8 + 0x80) = uVar12;
            (**(code **)(*(long *)(lVar19 + 8) + 0x18))();
            func_0x000107c615e8(uVar12);
            if ((uVar31 & 1) == 0) {
              uVar13 = *(undefined8 *)(lVar8 + 0x100);
              (**(code **)(*(long *)(lVar8 + 0xb8) + 8))
                        (*(undefined8 *)(lVar8 + 0xc0),*(undefined8 *)(lVar8 + 0xb0));
              func_0x000107c615e8(uVar13);
            }
            else {
              uVar13 = *(undefined8 *)(lVar8 + 0x100);
              lVar19 = *(long *)(lVar8 + 0xb8);
              uVar30 = *(undefined8 *)(lVar8 + 0xc0);
              uVar32 = *(undefined8 *)(lVar8 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar8 + 0x108));
              func_0x000107c615e8(uVar13);
              (**(code **)(lVar19 + 8))(uVar30,uVar32);
            }
            uVar13 = *(undefined8 *)(lVar8 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar8 + 0xd8));
            func_0x000107c615c0(uVar13);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar8 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x14;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar9);
          func_0x00010006c090(puVar5,puVar10);
          func_0x000107c614ac(lVar18);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 10;
        *(undefined1 *)(puVar3 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar30 = *(undefined8 *)(lVar8 + 0xd8);
      lVar18 = *(long *)(lVar8 + 0xb8);
      uVar13 = *(undefined8 *)(lVar8 + 0xc0);
      uVar32 = *(undefined8 *)(lVar8 + 0xb0);
      func_0x00010006c090(lVar19,puVar23);
      func_0x00010006c090(lVar17,puVar7);
      func_0x000107c615e8(puVar4);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar18 + 8))(uVar13,uVar32);
      goto LAB_101dfb99c;
    }
    puVar4 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar7;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar8 + 0x110) = puVar7;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar19 == 0) goto LAB_101dfbf0c;
    lVar18 = *(long *)(lVar8 + 0xa0);
    lVar17 = lVar19;
    func_0x000107c5ee30();
    puVar9 = puVar23;
    func_0x000107c61170(lVar19);
    *(long *)(lVar8 + 0x118) = lVar17;
    *(undefined **)(lVar8 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar19 = lVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar18);
    *(long *)(lVar8 + 0x128) = lVar19;
    *(undefined **)(lVar8 + 0x130) = puVar9;
    plVar16 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar8 + 0x138) = plVar16;
    *plVar16 = lVar8;
    plVar16[1] = (long)FUN_101dfbf1c;
    lVar8 = *(long *)(lVar8 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
      lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar16[0xe] = lVar19;
      plVar16[0xf] = (long)puVar9;
      plVar16[0xc] = lVar17;
      plVar16[0xd] = (long)puVar23;
      plVar16[10] = (long)puVar7;
      plVar16[0xb] = lVar8;
      plVar16[9] = (long)puVar4;
      lVar19 = 0;
      func_0x000107c5ede0();
      plVar16[0x10] = lVar19;
      lVar19 = *(long *)(lVar19 + -8);
      plVar16[0x11] = lVar19;
      uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar16[0x12] = uVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = plVar16[0xe];
      lVar22 = plVar16[0xf];
      uVar12 = plVar16[0xc];
      lVar8 = plVar16[0xd];
      func_0x000107c5ed80(plVar16[0x12],plVar16[9],plVar16[10]);
      func_0x000107c5ee20(uVar12,lVar8);
      func_0x000107c5ee20(lVar19,lVar22);
      lVar22 = lVar19;
      func_0x000107c5ed90();
      lVar8 = lVar22;
      func_0x000107c5ed90();
      uVar31 = uVar12;
      func_0x000107c3127c(uVar12,lVar19,lVar22,lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(uVar12);
      if ((uVar31 & 1) == 0) {
        lVar19 = plVar16[9];
        lVar22 = plVar16[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar7 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar8 = lVar19;
        func_0x000107c5fadc(lVar19,lVar22);
        func_0x000107c43418(puVar7);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(puVar7);
        puVar7 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar19,lVar22);
        plVar16[6] = 0;
        puVar9 = puVar7;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        func_0x000107c61170(puVar7);
        lVar19 = plVar16[6];
        if (puVar9 == (undefined *)0x0) {
          lVar22 = lVar19;
          func_0x000107c61174(lVar19);
          func_0x000107c5ed30(lVar19);
          func_0x000107c61170(lVar22);
          func_0x000107c61654();
          func_0x000107c614ac(lVar19);
LAB_101dfe678:
          plVar16[3] = 0;
          plVar16[2] = 0;
          plVar16[5] = 0;
          plVar16[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar16 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar12 = 0;
          FUN_101a64068();
          uVar13 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar7 = PTR___sypN_11034f1a8;
          puVar10 = puVar9;
          func_0x000107c5f9e8(puVar9,uVar12,PTR___sypN_11034f1a8 + 8,uVar13);
          func_0x000107c61174(lVar19);
          func_0x000107c61170(puVar9);
          if (puVar10 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar10 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar16[3] = 0;
            plVar16[2] = 0;
            plVar16[5] = 0;
            plVar16[4] = 0;
          }
          else {
            lVar19 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar10);
            FUN_101aae36c(lVar19);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(puVar10);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar10 + 0x38) + lVar19 * 0x20,plVar16 + 2);
            func_0x000107c6142c(puVar10);
          }
          func_0x000107c6142c(puVar10);
          if (plVar16[5] == 0) goto LAB_101dfe680;
          uVar13 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar14 = plVar16 + 8;
          func_0x000107c6147c(plVar14,plVar16 + 2,puVar7 + 8,uVar13,6);
          if (((ulong)plVar14 & 1) != 0) {
            lVar19 = plVar16[8];
            func_0x000107c4c0a8(lVar19);
            func_0x000107c61170(lVar19);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar23;
        func_0x000107c5ed90();
        plVar16[7] = 0;
        puVar9 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar23);
        puVar4 = (undefined8 *)plVar16[7];
        if ((int)puVar9 == 0) {
          puVar3 = puVar4;
          func_0x000107c61174(puVar4);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar3);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar19 = plVar16[0x11];
        lVar22 = plVar16[0x12];
        uVar12 = plVar16[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
        puVar4[1] = 0;
        *puVar4 = 10;
        *(undefined1 *)(puVar4 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar19 + 8))(lVar22);
        func_0x000107c615c0(lVar22);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar19 = plVar16[0x12];
        uVar12 = plVar16[0x10];
        (**(code **)(plVar16[0x11] + 8))(lVar19);
        func_0x000107c615c0(lVar19);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar19 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar31 = uVar12;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar26 = (code *)0x0;
        uVar25 = 0xf000000000000000;
        if (uVar12 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar11 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar11 == 0) goto LAB_101dfe8bc;
        uVar29 = uVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar11);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar25 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar26 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar31 = uVar25;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar12 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar29 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar25 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar26,uVar25);
          func_0x000100de78a0(uVar29,uVar31);
          UNRECOVERED_JUMPTABLE_01 = pcVar26;
          func_0x000100e25fcc(pcVar26,uVar25,uVar29,uVar31);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26,uVar25);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar26);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar25 = 0xf000000000000000;
          if (uVar12 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_101dfe9f8;
          }
          uVar29 = uVar12;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar31 = uVar25;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar31 = uVar25;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar12 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar29 = uVar12;
        }
        if (uVar25 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x000100de78a0(uVar29,uVar31);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar25,uVar29,uVar31);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar26,uVar25);
LAB_101dfea48:
      func_0x0001000b44c0(uVar29,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar30 = *(undefined8 *)(lVar8 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 7;
    *(undefined1 *)(puVar3 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(lVar19);
LAB_101dfb99c:
    func_0x000107c615e8(uVar30);
    func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfac94; end: 101dfad33;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfac94(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long unaff_x20;
  long *plVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  long *unaff_x22;
  long *plVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  ulong uStack_150;
  code *pcStack_148;
  long lStack_140;
  long *plStack_138;
  ulong uStack_130;
  code *pcStack_128;
  long lStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_80;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *unaff_x22;
  plVar24 = (long *)*unaff_x22;
  *(long *)(lVar17 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xf8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      UNRECOVERED_JUMPTABLE = FUN_101dfad34;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb374;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101dfad34;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24[0xe] = 0;
  pcVar26 = (code *)plVar24[0xb];
  UNRECOVERED_JUMPTABLE = pcVar26;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar3 = (undefined8 *)plVar24[0xe];
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar3 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar3 = (undefined8 *)plVar24[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar9 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar17 = plVar24[0x1c];
      puVar3 = (undefined8 *)plVar24[0x1d];
      FUN_101df6cf4();
      puVar22 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
      puVar9[1] = 0;
      *puVar9 = 0x16;
      *(undefined1 *)(puVar9 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar17,puVar3);
      func_0x000107c615e8(pcVar26);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar18 = plVar24[0x14];
    func_0x000107c5ee30();
    lVar17 = param_2;
    func_0x000107c61170(puVar3);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
      func_0x00010006c090(puVar9,param_2);
      goto LAB_101dfaf74;
    }
    puStack_a8 = (undefined8 *)plVar24[0x1c];
    lStack_a0 = plVar24[0x1d];
    lVar15 = plVar24[0x15];
    lVar7 = lVar18;
    puStack_98 = puVar9;
    func_0x000107c5ee30();
    lStack_90 = lVar17;
    func_0x000107c61170(lVar18);
    lStack_b8 = *(long *)(lVar15 + 0x30);
    func_0x0001000d224c(plVar24 + 7);
    uVar8 = plVar24[7];
    lVar17 = plVar24[8];
    uVar31 = uVar8;
    func_0x000107c614f0();
    plVar24[0xf] = uVar8;
    (**(code **)(*(long *)(lVar17 + 8) + 0x28))();
    puVar9 = puStack_98;
    func_0x000107c615e8(uVar8);
    puVar19 = puStack_a8;
    func_0x000107c5ee20(puStack_a8,lStack_a0);
    puVar3 = puVar9;
    puStack_a8 = (undefined8 *)param_2;
    func_0x000107c5ee20(puVar9,param_2);
    lVar17 = lStack_90;
    lVar18 = lStack_90;
    lStack_a0 = lVar7;
    func_0x000107c5ee20(lVar7);
    puVar4 = puVar19;
    if ((uVar31 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170();
    if (puVar4 == (undefined8 *)0x0) {
      lVar18 = plVar24[0x1c];
      puVar3 = (undefined8 *)plVar24[0x1d];
      FUN_101df6cf4();
      puVar22 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
      puVar19[1] = 0;
      *puVar19 = 10;
      *(undefined1 *)(puVar19 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar9,puStack_a8);
      func_0x00010006c090(lVar18,puVar3);
      func_0x00010006c090(lStack_a0,lVar17);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      goto LAB_101dfae20;
    }
    lStack_b0 = plVar24[0x21];
    puVar3 = (undefined8 *)plVar24[0x18];
    puVar9 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x00010006c00c(puVar9,lVar18);
    lVar17 = lVar18;
    func_0x0001000b44c0(puVar9,lVar18);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar5 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar3,pcVar5,lVar17);
    func_0x000107c6142c(lVar17);
    lVar17 = lStack_b0;
    func_0x000107c5ee40(puVar3,1,puVar9,lVar18);
    if (lVar17 != 0) {
      lVar7 = plVar24[0x1c];
      lVar15 = plVar24[0x1d];
      lStack_c0 = plVar24[0x17];
      lStack_b0 = plVar24[0x18];
      lStack_b8 = plVar24[0x16];
      FUN_101df6cf4();
      puVar22 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
      puVar3[1] = 0;
      *puVar3 = 0x14;
      *(undefined1 *)(puVar3 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_98,puStack_a8);
      func_0x00010006c090(lVar7,lVar15);
      func_0x00010006c090(lStack_a0,lStack_90);
      func_0x00010006c090(puVar9,lVar18);
      func_0x000107c614ac(lVar17);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lStack_c0 + 8))(lStack_b0,lStack_b8);
      puVar3 = puVar9;
      goto LAB_101dfae20;
    }
    lStack_b0 = lVar18;
    func_0x0001000d224c(plVar24 + 9);
    puVar19 = (undefined8 *)plVar24[9];
    lVar17 = plVar24[10];
    puVar3 = puVar19;
    func_0x000107c614f0();
    plVar24[0x10] = (long)puVar19;
    (**(code **)(*(long *)(lVar17 + 8) + 0x18))();
    func_0x000107c615e8(puVar19);
    lVar17 = plVar24[0x1c];
    lVar7 = plVar24[0x1d];
    lVar18 = plVar24[0x17];
    lVar15 = plVar24[0x18];
    puVar22 = (undefined *)plVar24[0x16];
    if (((ulong)puVar3 & 1) == 0) {
      (**(code **)(lVar18 + 8))(lVar15,puVar22);
      func_0x00010006c090(puStack_98,puStack_a8);
      func_0x00010006c090(lVar17,lVar7);
      func_0x00010006c090(lStack_a0,lStack_90);
      func_0x00010006c090(puVar9,lStack_b0);
      func_0x000107c615e8(pcVar26);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_98,puStack_a8);
      func_0x00010006c090(lVar17,lVar7);
      func_0x00010006c090(lStack_a0,lStack_90);
      func_0x00010006c090(puVar9,lStack_b0);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lVar18 + 8))(lVar15,puVar22);
    }
    func_0x000107c615c0(plVar24[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar24[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar17 = plVar24[0x1c];
    lVar18 = plVar24[0x1d];
    FUN_101df6cf4();
    puVar22 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar17,lVar18);
    func_0x000107c615e8(pcVar26);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar3);
LAB_101dfae20:
    func_0x000107c615c0(plVar24[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar24[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_c8 = FUN_101dfb30c;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d8 = plVar24;
  func_0x0001000834e4(plVar24 + 2);
  func_0x000107c615c0(plVar24[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar24[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_f0 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_e8 = FUN_101dfb374;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)plVar24[0x20];
  lVar17 = plVar24[0x1c];
  lVar18 = plVar24[0x1d];
  lVar27 = plVar24[0xd];
  puVar6 = &UNK_1107a6f08;
  lVar15 = 0;
  lVar16 = 0;
  pcStack_110 = pcVar26;
  puStack_108 = puVar22;
  pcStack_100 = UNRECOVERED_JUMPTABLE;
  plStack_f8 = plVar24;
  func_0x000107c613f8();
  *plVar14 = lVar27;
  lVar7 = lVar18;
  func_0x00010006c090(lVar17);
  func_0x000107c615c0(plVar24[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)plVar24[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_130 = (ulong)&uStack_f0 | 0x1000000000000000;
  plVar2 = &lStack_140;
  pcStack_128 = FUN_101dfb414;
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24[0x14] = lVar16;
  plVar24[0x15] = (long)puVar6;
  plVar24[0x12] = lVar7;
  plVar24[0x13] = lVar15;
  plVar24[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar7 = 0;
  plStack_138 = plVar24;
  func_0x000107c5ede0();
  plVar24[0x16] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar24[0x17] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar24[0x18] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_150 = (ulong)&uStack_130 | 0x1000000000000000;
  pcStack_148 = FUN_101dfb4a8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = lVar17;
  plStack_158 = plVar24;
  func_0x000107c5fd64();
  plVar20 = *(long **)(plVar24[0x15] + 0x38);
  plVar14 = (long *)0x70;
  func_0x000107c615b8();
  plVar24[0x19] = (long)plVar14;
  *plVar14 = (long)plVar24;
  plVar14[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    plVar24 = plVar24 + 2;
    pcStack_1f8 = pcStack_148;
    uVar8 = uStack_150;
LAB_104875f04:
    *(ulong *)((long)plVar2 + -0x10) = uVar8 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcStack_1f8;
    *(long **)((long)plVar2 + -0x18) = plVar14;
    plVar14[5] = (long)plVar24;
    plVar14[6] = (long)plVar20;
    lVar18 = *(long *)(*plVar20 + 0x50);
    plVar14[7] = lVar18;
    lVar17 = 0;
    __sSqMa(0,lVar18);
    plVar14[8] = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    plVar14[9] = lVar17;
    uVar8 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar14[10] = uVar8;
    lVar17 = *(long *)(lVar18 + -8);
    plVar14[0xb] = lVar17;
    uVar8 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar14[0xc] = uVar8;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_150 | 0x1000000000000000;
  pcStack_178 = FUN_101dfb57c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = *plVar24;
  plVar24 = (long *)*plVar24;
  func_0x000107c615c0(*(undefined8 *)(lStack_188 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
  uStack_1b8 = 0;
  pcStack_198 = FUN_101dfb5f0;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar24[5];
  lVar7 = plVar24[6];
  plVar14 = plVar24 + 2;
  puStack_1c8 = puVar3;
  lStack_1c0 = lVar27;
  lStack_1b0 = lVar18;
  plStack_1a8 = plVar24;
  func_0x0001000a8868(plVar14,lVar17);
  piVar28 = *(int **)(lVar7 + 0x10);
  iVar1 = *piVar28;
  puVar3 = (undefined8 *)(ulong)(uint)piVar28[1];
  func_0x000107c615b8();
  plVar24[0x1a] = (long)puVar3;
  *puVar3 = plVar24;
  puVar3[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar24[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar28))
              (UNRECOVERED_JUMPTABLE,plVar24[0x12],plVar24[0x13],1,lVar17,lVar7);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_1e0 = (ulong)&uStack_1a0 | 0x1000000000000000;
  plVar2 = &lStack_1f0;
  pcStack_1d8 = FUN_101dfb6a4;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e8 = *plVar24;
  plVar24 = (long *)*plVar24;
  *(undefined8 **)(lStack_1e8 + 0xd8) = puVar3;
  *(long **)(lStack_1e8 + 0xe0) = plVar14;
  func_0x000107c615c0(*(undefined8 *)(lStack_1e8 + 0xd0));
  if (plVar14 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_1f8 = FUN_101dfb748;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar24[0x15];
  func_0x0001000834e4(plVar24 + 2);
  plVar20 = *(long **)(lVar17 + 0x18);
  lVar17 = 0x112d51300;
  puVar22 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar24[0xc] = lVar17;
  puVar9 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar24[0x1d] = (long)puVar9;
  puVar3 = puVar9;
  func_0x000100faa6a0();
  plVar24[0x1e] = (long)puVar3;
  *puVar9 = plVar24;
  puVar9[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    puVar9[0xb] = puVar3;
    puVar9[0xc] = plVar24 + 0xd;
    puVar9[9] = plVar24 + 0xc;
    puVar9[10] = &UNK_1107a6f08;
    puVar9[8] = plVar24 + 0xb;
    lVar17 = *plVar20;
    puVar9[0xd] = &PTR_DAT_1107a6e88;
    uVar13 = 0x10;
    _swift_task_alloc();
    puVar9[0xe] = uVar13;
    lVar17 = *(long *)(lVar17 + 0x50);
    puVar9[0xf] = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    puVar9[0x10] = lVar17;
    plVar24 = (long *)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar9[0x11] = plVar24;
    plVar14 = (long *)0x70;
    _swift_task_alloc();
    puVar9[0x12] = plVar14;
    *plVar14 = (long)puVar9;
    plVar14[1] = (long)&UNK_104876614;
    uVar8 = (ulong)&uStack_1e0 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *plVar24;
  lVar7 = *plVar24;
  *(long **)(lVar18 + 0xf8) = plVar20;
  func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe8));
  if (plVar20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar7 + 0x70) = 0;
  puVar19 = *(undefined8 **)(lVar7 + 0x58);
  *(undefined8 **)(lVar7 + 0x100) = puVar19;
  puVar3 = puVar19;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar7 + 0x108) = puVar3;
  lVar17 = *(long *)(lVar7 + 0x70);
  func_0x000107c61174();
  puVar9 = puVar3;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar9 == (undefined8 *)0x0) {
    if (lVar17 != 0) goto LAB_101dfb944;
    puVar23 = *(undefined8 **)(lVar7 + 0xd8);
    uVar13 = *(undefined8 *)(lVar7 + 0xc0);
    puVar9 = puVar3;
    func_0x000107c4407c(puVar3);
    func_0x000107c61180();
    puVar4 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puVar6 = puVar22;
    func_0x000107c5ed80(uVar13,puVar4);
    func_0x000107c6142c(puVar22);
    puVar9 = puVar23;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar17 = *(long *)(lVar7 + 0xa0);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar16 = *(long *)(lVar7 + 0xa0);
      lVar15 = lVar17;
      func_0x000107c5ee30();
      puVar22 = puVar6;
      func_0x000107c61170(lVar17);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar17 = lVar16;
      func_0x000107c5ee30();
      puVar10 = puVar22;
      func_0x000107c61170(lVar16);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar7 + 0x38);
        uVar8 = *(ulong *)(lVar7 + 0x38);
        lVar16 = *(long *)(lVar7 + 0x40);
        uVar31 = uVar8;
        func_0x000107c614f0();
        *(ulong *)(lVar7 + 0x78) = uVar8;
        (**(code **)(*(long *)(lVar16 + 8) + 0x28))();
        func_0x000107c615e8(uVar8);
        puVar4 = puVar9;
        func_0x000107c5ee20(puVar9,puVar10);
        lVar16 = lVar15;
        func_0x000107c5ee20(lVar15,puVar6);
        lVar27 = lVar17;
        puVar11 = puVar22;
        func_0x000107c5ee20(lVar17,puVar22);
        puVar23 = puVar4;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar27);
        func_0x000107c61170(lVar16);
        func_0x000107c61170();
        if (puVar23 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
          puVar4[1] = 0;
          *puVar4 = 10;
          *(undefined1 *)(puVar4 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar9,puVar10);
        }
        else {
          lVar16 = *(long *)(lVar7 + 0xf8);
          puVar21 = *(undefined8 **)(lVar7 + 0xc0);
          puVar4 = puVar23;
          func_0x000107c5ee30(puVar23);
          func_0x000107c61170(puVar23);
          func_0x000107c5ee40(puVar21,1,puVar4,puVar11);
          if (lVar16 == 0) {
            func_0x0001000b44c0(puVar9,puVar10);
            func_0x00010006c090(puVar4,puVar11);
            func_0x00010006c090(lVar17,puVar22);
            func_0x00010006c090(lVar15,puVar6);
            func_0x0001000d224c(lVar7 + 0x48);
            uVar8 = *(ulong *)(lVar7 + 0x48);
            lVar17 = *(long *)(lVar7 + 0x50);
            uVar31 = uVar8;
            func_0x000107c614f0();
            *(ulong *)(lVar7 + 0x80) = uVar8;
            (**(code **)(*(long *)(lVar17 + 8) + 0x18))();
            func_0x000107c615e8(uVar8);
            if ((uVar31 & 1) == 0) {
              uVar13 = *(undefined8 *)(lVar7 + 0x100);
              (**(code **)(*(long *)(lVar7 + 0xb8) + 8))
                        (*(undefined8 *)(lVar7 + 0xc0),*(undefined8 *)(lVar7 + 0xb0));
              func_0x000107c615e8(uVar13);
            }
            else {
              uVar13 = *(undefined8 *)(lVar7 + 0x100);
              lVar17 = *(long *)(lVar7 + 0xb8);
              uVar30 = *(undefined8 *)(lVar7 + 0xc0);
              uVar32 = *(undefined8 *)(lVar7 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar7 + 0x108));
              func_0x000107c615e8(uVar13);
              (**(code **)(lVar17 + 8))(uVar30,uVar32);
            }
            uVar13 = *(undefined8 *)(lVar7 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar7 + 0xd8));
            func_0x000107c615c0(uVar13);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x14;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar9,puVar10);
          func_0x00010006c090(puVar4,puVar11);
          func_0x000107c614ac(lVar16);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
        puVar9[1] = 0;
        *puVar9 = 10;
        *(undefined1 *)(puVar9 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar30 = *(undefined8 *)(lVar7 + 0xd8);
      lVar16 = *(long *)(lVar7 + 0xb8);
      uVar13 = *(undefined8 *)(lVar7 + 0xc0);
      uVar32 = *(undefined8 *)(lVar7 + 0xb0);
      func_0x00010006c090(lVar17,puVar22);
      func_0x00010006c090(lVar15,puVar6);
      func_0x000107c615e8(puVar3);
      func_0x000107c615e8(puVar19);
      (**(code **)(lVar16 + 8))(uVar13,uVar32);
      goto LAB_101dfb99c;
    }
    puVar3 = puVar23;
    func_0x000107c5faec();
    puVar22 = puVar6;
    func_0x000107c61170(puVar23);
    *(undefined **)(lVar7 + 0x110) = puVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar17 == 0) goto LAB_101dfbf0c;
    lVar16 = *(long *)(lVar7 + 0xa0);
    lVar15 = lVar17;
    func_0x000107c5ee30();
    puVar10 = puVar22;
    func_0x000107c61170(lVar17);
    *(long *)(lVar7 + 0x118) = lVar15;
    *(undefined **)(lVar7 + 0x120) = puVar22;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar17 = lVar16;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar16);
    *(long *)(lVar7 + 0x128) = lVar17;
    *(undefined **)(lVar7 + 0x130) = puVar10;
    plVar24 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x138) = plVar24;
    *plVar24 = lVar7;
    plVar24[1] = (long)FUN_101dfbf1c;
    lVar7 = *(long *)(lVar7 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24[0xe] = lVar17;
      plVar24[0xf] = (long)puVar10;
      plVar24[0xc] = lVar15;
      plVar24[0xd] = (long)puVar22;
      plVar24[10] = (long)puVar6;
      plVar24[0xb] = lVar7;
      plVar24[9] = (long)puVar3;
      lVar17 = 0;
      func_0x000107c5ede0();
      plVar24[0x10] = lVar17;
      lVar17 = *(long *)(lVar17 + -8);
      plVar24[0x11] = lVar17;
      uVar8 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar24[0x12] = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = plVar24[0xe];
      lVar18 = plVar24[0xf];
      uVar8 = plVar24[0xc];
      lVar7 = plVar24[0xd];
      func_0x000107c5ed80(plVar24[0x12],plVar24[9],plVar24[10]);
      func_0x000107c5ee20(uVar8,lVar7);
      func_0x000107c5ee20(lVar17,lVar18);
      lVar18 = lVar17;
      func_0x000107c5ed90();
      lVar7 = lVar18;
      func_0x000107c5ed90();
      uVar31 = uVar8;
      func_0x000107c3127c(uVar8,lVar17,lVar18,lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(uVar8);
      if ((uVar31 & 1) == 0) {
        lVar17 = plVar24[9];
        lVar18 = plVar24[10];
        puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar22;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar7 = lVar17;
        func_0x000107c5fadc(lVar17,lVar18);
        func_0x000107c43418(puVar6);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar6);
        puVar6 = puVar22;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar17,lVar18);
        plVar24[6] = 0;
        puVar10 = puVar6;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(puVar6);
        lVar17 = plVar24[6];
        if (puVar10 == (undefined *)0x0) {
          lVar18 = lVar17;
          func_0x000107c61174(lVar17);
          func_0x000107c5ed30(lVar17);
          func_0x000107c61170(lVar18);
          func_0x000107c61654();
          func_0x000107c614ac(lVar17);
LAB_101dfe678:
          plVar24[3] = 0;
          plVar24[2] = 0;
          plVar24[5] = 0;
          plVar24[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar24 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar8 = 0;
          FUN_101a64068();
          uVar13 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar6 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar8,PTR___sypN_11034f1a8 + 8,uVar13);
          func_0x000107c61174(lVar17);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar24[3] = 0;
            plVar24[2] = 0;
            plVar24[5] = 0;
            plVar24[4] = 0;
          }
          else {
            lVar17 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar17);
            if ((uVar8 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar17 * 0x20,plVar24 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar24[5] == 0) goto LAB_101dfe680;
          uVar13 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar14 = plVar24 + 8;
          func_0x000107c6147c(plVar14,plVar24 + 2,puVar6 + 8,uVar13,6);
          if (((ulong)plVar14 & 1) != 0) {
            lVar17 = plVar24[8];
            func_0x000107c4c0a8(lVar17);
            func_0x000107c61170(lVar17);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar22;
        func_0x000107c5ed90();
        plVar24[7] = 0;
        puVar10 = puVar22;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar22);
        puVar3 = (undefined8 *)plVar24[7];
        if ((int)puVar10 == 0) {
          puVar9 = puVar3;
          func_0x000107c61174(puVar3);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar9);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar17 = plVar24[0x11];
        lVar18 = plVar24[0x12];
        uVar8 = plVar24[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 10;
        *(undefined1 *)(puVar3 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar17 + 8))(lVar18);
        func_0x000107c615c0(lVar18);
        UNRECOVERED_JUMPTABLE = (code *)plVar24[1];
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar17 = plVar24[0x12];
        uVar8 = plVar24[0x10];
        (**(code **)(plVar24[0x11] + 8))(lVar17);
        func_0x000107c615c0(lVar17);
        UNRECOVERED_JUMPTABLE = (code *)plVar24[1];
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar17 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar31 = uVar8;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar26 = (code *)0x0;
        uVar25 = 0xf000000000000000;
        if (uVar8 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar8;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar29 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar25 = uVar8;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar26 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar31 = uVar25;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar8 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar29 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar25 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar26,uVar25);
          func_0x000100de78a0(uVar29,uVar31);
          UNRECOVERED_JUMPTABLE_01 = pcVar26;
          func_0x000100e25fcc(pcVar26,uVar25,uVar29,uVar31);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26,uVar25);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar26);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar25 = 0xf000000000000000;
          if (uVar8 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar8 == 0) {
            uVar8 = 0;
            goto LAB_101dfe9f8;
          }
          uVar29 = uVar8;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar8);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar31 = uVar25;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar31 = uVar25;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar8 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar29 = uVar8;
        }
        if (uVar25 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x000100de78a0(uVar29,uVar31);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar25,uVar29,uVar31);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar26,uVar25);
LAB_101dfea48:
      func_0x0001000b44c0(uVar29,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar30 = *(undefined8 *)(lVar7 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
    puVar9[1] = 0;
    *puVar9 = 7;
    *(undefined1 *)(puVar9 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar19);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(lVar17);
LAB_101dfb99c:
    func_0x000107c615e8(uVar30);
    func_0x000107c615c0(*(undefined8 *)(lVar7 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfad34; end: 101dfb30b;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfad34(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *pcStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
  ulong uStack_130;
  code *pcStack_128;
  long lStack_120;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_60;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = unaff_x22 + 0xe;
  *plVar15 = 0;
  pcVar26 = (code *)unaff_x22[0xb];
  UNRECOVERED_JUMPTABLE = pcVar26;
  func_0x000107c40984(pcVar26,param_2,0x13,plVar15);
  func_0x000107c61180();
  puVar3 = (undefined8 *)*plVar15;
  func_0x000107c61174();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
    if (puVar3 != (undefined8 *)0x0) goto LAB_101dfadbc;
    puVar3 = (undefined8 *)unaff_x22[0x14];
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar9 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_101dfaf74:
      lVar20 = unaff_x22[0x1c];
      puVar3 = (undefined8 *)unaff_x22[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
      puVar9[1] = 0;
      *puVar9 = 0x16;
      *(undefined1 *)(puVar9 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(lVar20,puVar3);
      func_0x000107c615e8(pcVar26);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      goto LAB_101dfae20;
    }
    lVar18 = unaff_x22[0x14];
    func_0x000107c5ee30();
    lVar20 = param_2;
    func_0x000107c61170(puVar3);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar18 == 0) {
      func_0x00010006c090(puVar9,param_2);
      goto LAB_101dfaf74;
    }
    puStack_88 = (undefined8 *)unaff_x22[0x1c];
    lStack_80 = unaff_x22[0x1d];
    lVar16 = unaff_x22[0x15];
    lVar7 = lVar18;
    puStack_78 = puVar9;
    func_0x000107c5ee30();
    lStack_70 = lVar20;
    func_0x000107c61170(lVar18);
    lStack_98 = *(long *)(lVar16 + 0x30);
    func_0x0001000d224c(unaff_x22 + 7);
    uVar8 = unaff_x22[7];
    lVar20 = unaff_x22[8];
    uVar31 = uVar8;
    func_0x000107c614f0();
    unaff_x22[0xf] = uVar8;
    (**(code **)(*(long *)(lVar20 + 8) + 0x28))();
    puVar9 = puStack_78;
    func_0x000107c615e8(uVar8);
    puVar19 = puStack_88;
    func_0x000107c5ee20(puStack_88,lStack_80);
    puVar3 = puVar9;
    puStack_88 = (undefined8 *)param_2;
    func_0x000107c5ee20(puVar9,param_2);
    lVar20 = lStack_70;
    lVar18 = lStack_70;
    lStack_80 = lVar7;
    func_0x000107c5ee20(lVar7);
    puVar4 = puVar19;
    if ((uVar31 & 1) == 0) {
      func_0x000107c51bb8();
    }
    else {
      func_0x000107c51bbc();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170();
    if (puVar4 == (undefined8 *)0x0) {
      lVar18 = unaff_x22[0x1c];
      puVar3 = (undefined8 *)unaff_x22[0x1d];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
      puVar19[1] = 0;
      *puVar19 = 10;
      *(undefined1 *)(puVar19 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar9,puStack_88);
      func_0x00010006c090(lVar18,puVar3);
      func_0x00010006c090(lStack_80,lVar20);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      goto LAB_101dfae20;
    }
    lStack_90 = unaff_x22[0x21];
    puVar3 = (undefined8 *)unaff_x22[0x18];
    puVar9 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x00010006c00c(puVar9,lVar18);
    lVar20 = lVar18;
    func_0x0001000b44c0(puVar9,lVar18);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4407c(UNRECOVERED_JUMPTABLE);
    func_0x000107c61180();
    pcVar5 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c5faec();
    func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
    func_0x000107c5ed80(puVar3,pcVar5,lVar20);
    func_0x000107c6142c(lVar20);
    lVar20 = lStack_90;
    func_0x000107c5ee40(puVar3,1,puVar9,lVar18);
    if (lVar20 != 0) {
      lVar7 = unaff_x22[0x1c];
      lVar16 = unaff_x22[0x1d];
      lStack_a0 = unaff_x22[0x17];
      lStack_90 = unaff_x22[0x18];
      lStack_98 = unaff_x22[0x16];
      FUN_101df6cf4();
      puVar23 = &UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
      puVar3[1] = 0;
      *puVar3 = 0x14;
      *(undefined1 *)(puVar3 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puStack_78,puStack_88);
      func_0x00010006c090(lVar7,lVar16);
      func_0x00010006c090(lStack_80,lStack_70);
      func_0x00010006c090(puVar9,lVar18);
      func_0x000107c614ac(lVar20);
      func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lStack_a0 + 8))(lStack_90,lStack_98);
      puVar3 = puVar9;
      goto LAB_101dfae20;
    }
    lStack_90 = lVar18;
    func_0x0001000d224c(unaff_x22 + 9);
    puVar19 = (undefined8 *)unaff_x22[9];
    lVar20 = unaff_x22[10];
    puVar3 = puVar19;
    func_0x000107c614f0();
    unaff_x22[0x10] = (long)puVar19;
    (**(code **)(*(long *)(lVar20 + 8) + 0x18))();
    func_0x000107c615e8(puVar19);
    lVar20 = unaff_x22[0x1c];
    lVar7 = unaff_x22[0x1d];
    lVar18 = unaff_x22[0x17];
    lVar16 = unaff_x22[0x18];
    puVar23 = (undefined *)unaff_x22[0x16];
    if (((ulong)puVar3 & 1) == 0) {
      (**(code **)(lVar18 + 8))(lVar16,puVar23);
      func_0x00010006c090(puStack_78,puStack_88);
      func_0x00010006c090(lVar20,lVar7);
      func_0x00010006c090(lStack_80,lStack_70);
      func_0x00010006c090(puVar9,lStack_90);
      func_0x000107c615e8(pcVar26);
    }
    else {
      func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE);
      func_0x00010006c090(puStack_78,puStack_88);
      func_0x00010006c090(lVar20,lVar7);
      func_0x00010006c090(lStack_80,lStack_70);
      func_0x00010006c090(puVar9,lStack_90);
      func_0x000107c615e8(pcVar26);
      (**(code **)(lVar18 + 8))(lVar16,puVar23);
    }
    func_0x000107c615c0(unaff_x22[0x18]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfadbc:
    lVar20 = unaff_x22[0x1c];
    lVar18 = unaff_x22[0x1d];
    FUN_101df6cf4();
    puVar23 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_01,0,0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 8) = 0;
    *(undefined8 *)UNRECOVERED_JUMPTABLE_01 = 7;
    UNRECOVERED_JUMPTABLE_01[0x10] = (code)0x80;
    func_0x000107c61654();
    func_0x00010006c090(lVar20,lVar18);
    func_0x000107c615e8(pcVar26);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    func_0x000107c61170(puVar3);
LAB_101dfae20:
    func_0x000107c615c0(unaff_x22[0x18]);
    UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  func_0x000107c60e78();
  uStack_b0 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_a8 = FUN_101dfb30c;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 2);
  func_0x000107c615c0(unaff_x22[0x18]);
  UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_b0 | 0x1000000000000000;
  pcStack_c8 = FUN_101dfb374;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)unaff_x22[0x20];
  lVar20 = unaff_x22[0x1c];
  lVar18 = unaff_x22[0x1d];
  lVar27 = unaff_x22[0xd];
  puVar6 = &UNK_1107a6f08;
  lVar16 = 0;
  lVar17 = 0;
  pcStack_f0 = pcVar26;
  puStack_e8 = puVar23;
  pcStack_e0 = UNRECOVERED_JUMPTABLE;
  func_0x000107c613f8();
  *plVar15 = lVar27;
  lVar7 = lVar18;
  func_0x00010006c090(lVar20);
  func_0x000107c615c0(unaff_x22[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_110 = (ulong)&uStack_d0 | 0x1000000000000000;
  plVar2 = &lStack_120;
  pcStack_108 = FUN_101dfb414;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x14] = lVar17;
  unaff_x22[0x15] = (long)puVar6;
  unaff_x22[0x12] = lVar7;
  unaff_x22[0x13] = lVar16;
  unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar7 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x16] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  unaff_x22[0x17] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x18] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_130 = (ulong)&uStack_110 | 0x1000000000000000;
  pcStack_128 = FUN_101dfb4a8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_140 = lVar20;
  func_0x000107c5fd64();
  plVar21 = *(long **)(unaff_x22[0x15] + 0x38);
  plVar15 = (long *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)plVar15;
  *plVar15 = (long)unaff_x22;
  plVar15[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    plVar14 = unaff_x22 + 2;
    pcStack_1d8 = pcStack_128;
    uVar8 = uStack_130;
LAB_104875f04:
    *(ulong *)((long)plVar2 + -0x10) = uVar8 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcStack_1d8;
    *(long **)((long)plVar2 + -0x18) = plVar15;
    plVar15[5] = (long)plVar14;
    plVar15[6] = (long)plVar21;
    lVar18 = *(long *)(*plVar21 + 0x50);
    plVar15[7] = lVar18;
    lVar20 = 0;
    __sSqMa(0,lVar18);
    plVar15[8] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    plVar15[9] = lVar20;
    uVar8 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar15[10] = uVar8;
    lVar20 = *(long *)(lVar18 + -8);
    plVar15[0xb] = lVar20;
    uVar8 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar15[0xc] = uVar8;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_130 | 0x1000000000000000;
  pcStack_158 = FUN_101dfb57c;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  uStack_198 = 0;
  pcStack_178 = FUN_101dfb5f0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar15[5];
  lVar7 = plVar15[6];
  plVar21 = plVar15 + 2;
  puStack_1a8 = puVar3;
  lStack_1a0 = lVar27;
  lStack_190 = lVar18;
  plStack_188 = plVar15;
  func_0x0001000a8868(plVar21,lVar20);
  piVar28 = *(int **)(lVar7 + 0x10);
  iVar1 = *piVar28;
  puVar3 = (undefined8 *)(ulong)(uint)piVar28[1];
  func_0x000107c615b8();
  plVar15[0x1a] = (long)puVar3;
  *puVar3 = plVar15;
  puVar3[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar15[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar28))
              (UNRECOVERED_JUMPTABLE,plVar15[0x12],plVar15[0x13],1,lVar20,lVar7);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
  plVar2 = &lStack_1d0;
  pcStack_1b8 = FUN_101dfb6a4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c8 = *plVar15;
  plVar15 = (long *)*plVar15;
  *(undefined8 **)(lStack_1c8 + 0xd8) = puVar3;
  *(long **)(lStack_1c8 + 0xe0) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lStack_1c8 + 0xd0));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_1d8 = FUN_101dfb748;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar15[0x15];
  func_0x0001000834e4(plVar15 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar20 = 0x112d51300;
  puVar23 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar15[0xc] = lVar20;
  puVar9 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar15[0x1d] = (long)puVar9;
  puVar3 = puVar9;
  func_0x000100faa6a0();
  plVar15[0x1e] = (long)puVar3;
  *puVar9 = plVar15;
  puVar9[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    puVar9[0xb] = puVar3;
    puVar9[0xc] = plVar15 + 0xd;
    puVar9[9] = plVar15 + 0xc;
    puVar9[10] = &UNK_1107a6f08;
    puVar9[8] = plVar15 + 0xb;
    lVar20 = *plVar21;
    puVar9[0xd] = &PTR_DAT_1107a6e88;
    uVar13 = 0x10;
    _swift_task_alloc();
    puVar9[0xe] = uVar13;
    lVar20 = *(long *)(lVar20 + 0x50);
    puVar9[0xf] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    puVar9[0x10] = lVar20;
    plVar14 = (long *)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar9[0x11] = plVar14;
    plVar15 = (long *)0x70;
    _swift_task_alloc();
    puVar9[0x12] = plVar15;
    *plVar15 = (long)puVar9;
    plVar15[1] = (long)&UNK_104876614;
    uVar8 = (ulong)&uStack_1c0 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *plVar15;
  lVar7 = *plVar15;
  *(long **)(lVar18 + 0xf8) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar7 + 0x70) = 0;
  puVar19 = *(undefined8 **)(lVar7 + 0x58);
  *(undefined8 **)(lVar7 + 0x100) = puVar19;
  puVar3 = puVar19;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar7 + 0x108) = puVar3;
  lVar20 = *(long *)(lVar7 + 0x70);
  func_0x000107c61174();
  puVar9 = puVar3;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar9 == (undefined8 *)0x0) {
    if (lVar20 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar7 + 0xd8);
    uVar13 = *(undefined8 *)(lVar7 + 0xc0);
    puVar9 = puVar3;
    func_0x000107c4407c(puVar3);
    func_0x000107c61180();
    puVar4 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puVar6 = puVar23;
    func_0x000107c5ed80(uVar13,puVar4);
    func_0x000107c6142c(puVar23);
    puVar9 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar20 = *(long *)(lVar7 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar20 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar17 = *(long *)(lVar7 + 0xa0);
      lVar16 = lVar20;
      func_0x000107c5ee30();
      puVar23 = puVar6;
      func_0x000107c61170(lVar20);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar20 = lVar17;
      func_0x000107c5ee30();
      puVar10 = puVar23;
      func_0x000107c61170(lVar17);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar7 + 0x38);
        uVar8 = *(ulong *)(lVar7 + 0x38);
        lVar17 = *(long *)(lVar7 + 0x40);
        uVar31 = uVar8;
        func_0x000107c614f0();
        *(ulong *)(lVar7 + 0x78) = uVar8;
        (**(code **)(*(long *)(lVar17 + 8) + 0x28))();
        func_0x000107c615e8(uVar8);
        puVar4 = puVar9;
        func_0x000107c5ee20(puVar9,puVar10);
        lVar17 = lVar16;
        func_0x000107c5ee20(lVar16,puVar6);
        lVar27 = lVar20;
        puVar11 = puVar23;
        func_0x000107c5ee20(lVar20,puVar23);
        puVar24 = puVar4;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar27);
        func_0x000107c61170(lVar17);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
          puVar4[1] = 0;
          *puVar4 = 10;
          *(undefined1 *)(puVar4 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar9,puVar10);
        }
        else {
          lVar17 = *(long *)(lVar7 + 0xf8);
          puVar22 = *(undefined8 **)(lVar7 + 0xc0);
          puVar4 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar22,1,puVar4,puVar11);
          if (lVar17 == 0) {
            func_0x0001000b44c0(puVar9,puVar10);
            func_0x00010006c090(puVar4,puVar11);
            func_0x00010006c090(lVar20,puVar23);
            func_0x00010006c090(lVar16,puVar6);
            func_0x0001000d224c(lVar7 + 0x48);
            uVar8 = *(ulong *)(lVar7 + 0x48);
            lVar20 = *(long *)(lVar7 + 0x50);
            uVar31 = uVar8;
            func_0x000107c614f0();
            *(ulong *)(lVar7 + 0x80) = uVar8;
            (**(code **)(*(long *)(lVar20 + 8) + 0x18))();
            func_0x000107c615e8(uVar8);
            if ((uVar31 & 1) == 0) {
              uVar13 = *(undefined8 *)(lVar7 + 0x100);
              (**(code **)(*(long *)(lVar7 + 0xb8) + 8))
                        (*(undefined8 *)(lVar7 + 0xc0),*(undefined8 *)(lVar7 + 0xb0));
              func_0x000107c615e8(uVar13);
            }
            else {
              uVar13 = *(undefined8 *)(lVar7 + 0x100);
              lVar20 = *(long *)(lVar7 + 0xb8);
              uVar30 = *(undefined8 *)(lVar7 + 0xc0);
              uVar32 = *(undefined8 *)(lVar7 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar7 + 0x108));
              func_0x000107c615e8(uVar13);
              (**(code **)(lVar20 + 8))(uVar30,uVar32);
            }
            uVar13 = *(undefined8 *)(lVar7 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar7 + 0xd8));
            func_0x000107c615c0(uVar13);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
          puVar22[1] = 0;
          *puVar22 = 0x14;
          *(undefined1 *)(puVar22 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar9,puVar10);
          func_0x00010006c090(puVar4,puVar11);
          func_0x000107c614ac(lVar17);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
        puVar9[1] = 0;
        *puVar9 = 10;
        *(undefined1 *)(puVar9 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar30 = *(undefined8 *)(lVar7 + 0xd8);
      lVar17 = *(long *)(lVar7 + 0xb8);
      uVar13 = *(undefined8 *)(lVar7 + 0xc0);
      uVar32 = *(undefined8 *)(lVar7 + 0xb0);
      func_0x00010006c090(lVar20,puVar23);
      func_0x00010006c090(lVar16,puVar6);
      func_0x000107c615e8(puVar3);
      func_0x000107c615e8(puVar19);
      (**(code **)(lVar17 + 8))(uVar13,uVar32);
      goto LAB_101dfb99c;
    }
    puVar3 = puVar24;
    func_0x000107c5faec();
    puVar23 = puVar6;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar7 + 0x110) = puVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar20 == 0) goto LAB_101dfbf0c;
    lVar17 = *(long *)(lVar7 + 0xa0);
    lVar16 = lVar20;
    func_0x000107c5ee30();
    puVar10 = puVar23;
    func_0x000107c61170(lVar20);
    *(long *)(lVar7 + 0x118) = lVar16;
    *(undefined **)(lVar7 + 0x120) = puVar23;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar20 = lVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar17);
    *(long *)(lVar7 + 0x128) = lVar20;
    *(undefined **)(lVar7 + 0x130) = puVar10;
    plVar15 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x138) = plVar15;
    *plVar15 = lVar7;
    plVar15[1] = (long)FUN_101dfbf1c;
    lVar7 = *(long *)(lVar7 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar15[0xe] = lVar20;
      plVar15[0xf] = (long)puVar10;
      plVar15[0xc] = lVar16;
      plVar15[0xd] = (long)puVar23;
      plVar15[10] = (long)puVar6;
      plVar15[0xb] = lVar7;
      plVar15[9] = (long)puVar3;
      lVar20 = 0;
      func_0x000107c5ede0();
      plVar15[0x10] = lVar20;
      lVar20 = *(long *)(lVar20 + -8);
      plVar15[0x11] = lVar20;
      uVar8 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar15[0x12] = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar20 = plVar15[0xe];
      lVar18 = plVar15[0xf];
      uVar8 = plVar15[0xc];
      lVar7 = plVar15[0xd];
      func_0x000107c5ed80(plVar15[0x12],plVar15[9],plVar15[10]);
      func_0x000107c5ee20(uVar8,lVar7);
      func_0x000107c5ee20(lVar20,lVar18);
      lVar18 = lVar20;
      func_0x000107c5ed90();
      lVar7 = lVar18;
      func_0x000107c5ed90();
      uVar31 = uVar8;
      func_0x000107c3127c(uVar8,lVar20,lVar18,lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(uVar8);
      if ((uVar31 & 1) == 0) {
        lVar20 = plVar15[9];
        lVar18 = plVar15[10];
        puVar23 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar7 = lVar20;
        func_0x000107c5fadc(lVar20,lVar18);
        func_0x000107c43418(puVar6);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar6);
        puVar6 = puVar23;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar20,lVar18);
        plVar15[6] = 0;
        puVar10 = puVar6;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar20);
        func_0x000107c61170(puVar6);
        lVar20 = plVar15[6];
        if (puVar10 == (undefined *)0x0) {
          lVar18 = lVar20;
          func_0x000107c61174(lVar20);
          func_0x000107c5ed30(lVar20);
          func_0x000107c61170(lVar18);
          func_0x000107c61654();
          func_0x000107c614ac(lVar20);
LAB_101dfe678:
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar15 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar8 = 0;
          FUN_101a64068();
          uVar13 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar6 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar8,PTR___sypN_11034f1a8 + 8,uVar13);
          func_0x000107c61174(lVar20);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
          }
          else {
            lVar20 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar20);
            if ((uVar8 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar20 * 0x20,plVar15 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar15[5] == 0) goto LAB_101dfe680;
          uVar13 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar21 = plVar15 + 8;
          func_0x000107c6147c(plVar21,plVar15 + 2,puVar6 + 8,uVar13,6);
          if (((ulong)plVar21 & 1) != 0) {
            lVar20 = plVar15[8];
            func_0x000107c4c0a8(lVar20);
            func_0x000107c61170(lVar20);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar23;
        func_0x000107c5ed90();
        plVar15[7] = 0;
        puVar10 = puVar23;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar23);
        puVar3 = (undefined8 *)plVar15[7];
        if ((int)puVar10 == 0) {
          puVar9 = puVar3;
          func_0x000107c61174(puVar3);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar9);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar20 = plVar15[0x11];
        lVar18 = plVar15[0x12];
        uVar8 = plVar15[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 10;
        *(undefined1 *)(puVar3 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar20 + 8))(lVar18);
        func_0x000107c615c0(lVar18);
        UNRECOVERED_JUMPTABLE = (code *)plVar15[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar20 = plVar15[0x12];
        uVar8 = plVar15[0x10];
        (**(code **)(plVar15[0x11] + 8))(lVar20);
        func_0x000107c615c0(lVar20);
        UNRECOVERED_JUMPTABLE = (code *)plVar15[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar20 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar31 = uVar8;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar26 = (code *)0x0;
        uVar25 = 0xf000000000000000;
        if (uVar8 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar8;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar29 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar25 = uVar8;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) goto LAB_101dfe880;
        pcVar26 = UNRECOVERED_JUMPTABLE_01;
        func_0x000107c5ee30();
        uVar31 = uVar25;
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_01);
        if (uVar8 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar29 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar25 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar26,uVar25);
          func_0x000100de78a0(uVar29,uVar31);
          UNRECOVERED_JUMPTABLE_01 = pcVar26;
          func_0x000100e25fcc(pcVar26,uVar25,uVar29,uVar31);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26,uVar25);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar26);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar26);
LAB_101dfe974:
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
        uVar31 = uVar25;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar25 = 0xf000000000000000;
          if (uVar8 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar8 == 0) {
            uVar8 = 0;
            goto LAB_101dfe9f8;
          }
          uVar29 = uVar8;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar8);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_01 = (code *)0x0;
            uVar31 = uVar25;
            goto joined_r0x000101dfe9b0;
          }
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar31 = uVar25;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar8 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar29 = uVar8;
        }
        if (uVar25 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x000100de78a0(uVar29,uVar31);
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_01;
            func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_01,uVar25,uVar29,uVar31);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
          return (code *)0x1;
        }
        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_01,uVar25);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar26,uVar25);
LAB_101dfea48:
      func_0x0001000b44c0(uVar29,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar30 = *(undefined8 *)(lVar7 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
    puVar9[1] = 0;
    *puVar9 = 7;
    *(undefined1 *)(puVar9 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar19);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(lVar20);
LAB_101dfb99c:
    func_0x000107c615e8(uVar30);
    func_0x000107c615c0(*(undefined8 *)(lVar7 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfb30c; end: 101dfb373;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfb30c(void)

{
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  code *pcVar25;
  long *unaff_x22;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_58;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 2);
  func_0x000107c615c0(unaff_x22[0x18]);
  UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101dfb374;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)unaff_x22[0x20];
  lVar20 = unaff_x22[0x1c];
  lVar4 = unaff_x22[0x1d];
  lVar27 = unaff_x22[0xd];
  puVar3 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  func_0x000107c613f8();
  *plVar16 = lVar27;
  func_0x00010006c090(lVar20);
  func_0x000107c615c0(unaff_x22[0x18]);
  UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_70 = (ulong)&uStack_30 | 0x1000000000000000;
  plVar2 = &lStack_80;
  pcStack_68 = FUN_101dfb414;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x14] = lVar18;
  unaff_x22[0x15] = (long)puVar3;
  unaff_x22[0x12] = lVar4;
  unaff_x22[0x13] = lVar17;
  unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  unaff_x22[0x17] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x18] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_90 = (ulong)&uStack_70 | 0x1000000000000000;
  pcStack_88 = FUN_101dfb4a8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar20;
  func_0x000107c5fd64();
  plVar21 = *(long **)(unaff_x22[0x15] + 0x38);
  plVar16 = (long *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)plVar16;
  *plVar16 = (long)unaff_x22;
  plVar16[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    plVar15 = unaff_x22 + 2;
    pcStack_138 = pcStack_88;
    uVar5 = uStack_90;
LAB_104875f04:
    *(ulong *)((long)plVar2 + -0x10) = uVar5 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcStack_138;
    *(long **)((long)plVar2 + -0x18) = plVar16;
    plVar16[5] = (long)plVar15;
    plVar16[6] = (long)plVar21;
    lVar4 = *(long *)(*plVar21 + 0x50);
    plVar16[7] = lVar4;
    lVar20 = 0;
    __sSqMa(0,lVar4);
    plVar16[8] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    plVar16[9] = lVar20;
    uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[10] = uVar5;
    lVar20 = *(long *)(lVar4 + -8);
    plVar16[0xb] = lVar20;
    uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[0xc] = uVar5;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_90 | 0x1000000000000000;
  pcStack_b8 = FUN_101dfb57c;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_e0 = (ulong)&uStack_c0 | 0x1000000000000000;
  pcStack_d8 = FUN_101dfb5f0;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar16[5];
  lVar4 = plVar16[6];
  plVar21 = plVar16 + 2;
  func_0x0001000a8868(plVar21,lVar20);
  piVar28 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar28;
  puVar23 = (undefined8 *)(ulong)(uint)piVar28[1];
  func_0x000107c615b8();
  plVar16[0x1a] = (long)puVar23;
  *puVar23 = plVar16;
  puVar23[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE_00 = (code *)plVar16[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar28))
              (UNRECOVERED_JUMPTABLE_00,plVar16[0x12],plVar16[0x13],1,lVar20,lVar4);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_e0 | 0x1000000000000000;
  plVar2 = &lStack_130;
  pcStack_118 = FUN_101dfb6a4;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = *plVar16;
  plVar16 = (long *)*plVar16;
  *(undefined8 **)(lStack_128 + 0xd8) = puVar23;
  *(long **)(lStack_128 + 0xe0) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0xd0));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_101dfb748;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar16[0x15];
  func_0x0001000834e4(plVar16 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar20 = 0x112d51300;
  puVar3 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16[0xc] = lVar20;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar16[0x1d] = (long)puVar6;
  puVar23 = puVar6;
  func_0x000100faa6a0();
  plVar16[0x1e] = (long)puVar23;
  *puVar6 = plVar16;
  puVar6[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    puVar6[0xb] = puVar23;
    puVar6[0xc] = plVar16 + 0xd;
    puVar6[9] = plVar16 + 0xc;
    puVar6[10] = &UNK_1107a6f08;
    puVar6[8] = plVar16 + 0xb;
    lVar20 = *plVar21;
    puVar6[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar14;
    lVar20 = *(long *)(lVar20 + 0x50);
    puVar6[0xf] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    puVar6[0x10] = lVar20;
    plVar15 = (long *)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar15;
    plVar16 = (long *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = plVar16;
    *plVar16 = (long)puVar6;
    plVar16[1] = (long)&UNK_104876614;
    uVar5 = (ulong)&uStack_120 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *plVar16;
  lVar17 = *plVar16;
  *(long **)(lVar4 + 0xf8) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar17 + 0x70) = 0;
  puVar19 = *(undefined8 **)(lVar17 + 0x58);
  *(undefined8 **)(lVar17 + 0x100) = puVar19;
  puVar23 = puVar19;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar17 + 0x108) = puVar23;
  lVar20 = *(long *)(lVar17 + 0x70);
  func_0x000107c61174();
  puVar6 = puVar23;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar6 == (undefined8 *)0x0) {
    if (lVar20 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar17 + 0xd8);
    uVar14 = *(undefined8 *)(lVar17 + 0xc0);
    puVar6 = puVar23;
    func_0x000107c4407c(puVar23);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    puVar9 = puVar3;
    func_0x000107c5ed80(uVar14,puVar7);
    func_0x000107c6142c(puVar3);
    puVar6 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar20 = *(long *)(lVar17 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar20 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar27 = *(long *)(lVar17 + 0xa0);
      lVar18 = lVar20;
      func_0x000107c5ee30();
      puVar3 = puVar9;
      func_0x000107c61170(lVar20);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar20 = lVar27;
      func_0x000107c5ee30();
      puVar10 = puVar3;
      func_0x000107c61170(lVar27);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar17 + 0x38);
        uVar5 = *(ulong *)(lVar17 + 0x38);
        lVar27 = *(long *)(lVar17 + 0x40);
        uVar31 = uVar5;
        func_0x000107c614f0();
        *(ulong *)(lVar17 + 0x78) = uVar5;
        (**(code **)(*(long *)(lVar27 + 8) + 0x28))();
        func_0x000107c615e8(uVar5);
        puVar7 = puVar6;
        func_0x000107c5ee20(puVar6,puVar10);
        lVar27 = lVar18;
        func_0x000107c5ee20(lVar18,puVar9);
        lVar8 = lVar20;
        puVar11 = puVar3;
        func_0x000107c5ee20(lVar20,puVar3);
        puVar24 = puVar7;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar27);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar7,0,0);
          puVar7[1] = 0;
          *puVar7 = 10;
          *(undefined1 *)(puVar7 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar6,puVar10);
        }
        else {
          lVar27 = *(long *)(lVar17 + 0xf8);
          puVar22 = *(undefined8 **)(lVar17 + 0xc0);
          puVar7 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar22,1,puVar7,puVar11);
          if (lVar27 == 0) {
            func_0x0001000b44c0(puVar6,puVar10);
            func_0x00010006c090(puVar7,puVar11);
            func_0x00010006c090(lVar20,puVar3);
            func_0x00010006c090(lVar18,puVar9);
            func_0x0001000d224c(lVar17 + 0x48);
            uVar5 = *(ulong *)(lVar17 + 0x48);
            lVar20 = *(long *)(lVar17 + 0x50);
            uVar31 = uVar5;
            func_0x000107c614f0();
            *(ulong *)(lVar17 + 0x80) = uVar5;
            (**(code **)(*(long *)(lVar20 + 8) + 0x18))();
            func_0x000107c615e8(uVar5);
            if ((uVar31 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar17 + 0x100);
              (**(code **)(*(long *)(lVar17 + 0xb8) + 8))
                        (*(undefined8 *)(lVar17 + 0xc0),*(undefined8 *)(lVar17 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar17 + 0x100);
              lVar20 = *(long *)(lVar17 + 0xb8);
              uVar30 = *(undefined8 *)(lVar17 + 0xc0);
              uVar32 = *(undefined8 *)(lVar17 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar17 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar20 + 8))(uVar30,uVar32);
            }
            uVar14 = *(undefined8 *)(lVar17 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar17 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
          puVar22[1] = 0;
          *puVar22 = 0x14;
          *(undefined1 *)(puVar22 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar6,puVar10);
          func_0x00010006c090(puVar7,puVar11);
          func_0x000107c614ac(lVar27);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
        puVar6[1] = 0;
        *puVar6 = 10;
        *(undefined1 *)(puVar6 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar30 = *(undefined8 *)(lVar17 + 0xd8);
      lVar27 = *(long *)(lVar17 + 0xb8);
      uVar14 = *(undefined8 *)(lVar17 + 0xc0);
      uVar32 = *(undefined8 *)(lVar17 + 0xb0);
      func_0x00010006c090(lVar20,puVar3);
      func_0x00010006c090(lVar18,puVar9);
      func_0x000107c615e8(puVar23);
      func_0x000107c615e8(puVar19);
      (**(code **)(lVar27 + 8))(uVar14,uVar32);
      goto LAB_101dfb99c;
    }
    puVar23 = puVar24;
    func_0x000107c5faec();
    puVar3 = puVar9;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar17 + 0x110) = puVar9;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar20 == 0) goto LAB_101dfbf0c;
    lVar27 = *(long *)(lVar17 + 0xa0);
    lVar18 = lVar20;
    func_0x000107c5ee30();
    puVar10 = puVar3;
    func_0x000107c61170(lVar20);
    *(long *)(lVar17 + 0x118) = lVar18;
    *(undefined **)(lVar17 + 0x120) = puVar3;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar27 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar20 = lVar27;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar27);
    *(long *)(lVar17 + 0x128) = lVar20;
    *(undefined **)(lVar17 + 0x130) = puVar10;
    plVar16 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar17 + 0x138) = plVar16;
    *plVar16 = lVar17;
    plVar16[1] = (long)FUN_101dfbf1c;
    lVar17 = *(long *)(lVar17 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar16[0xe] = lVar20;
      plVar16[0xf] = (long)puVar10;
      plVar16[0xc] = lVar18;
      plVar16[0xd] = (long)puVar3;
      plVar16[10] = (long)puVar9;
      plVar16[0xb] = lVar17;
      plVar16[9] = (long)puVar23;
      lVar20 = 0;
      func_0x000107c5ede0();
      plVar16[0x10] = lVar20;
      lVar20 = *(long *)(lVar20 + -8);
      plVar16[0x11] = lVar20;
      uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar16[0x12] = uVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar20 = plVar16[0xe];
      lVar4 = plVar16[0xf];
      uVar5 = plVar16[0xc];
      lVar17 = plVar16[0xd];
      func_0x000107c5ed80(plVar16[0x12],plVar16[9],plVar16[10]);
      func_0x000107c5ee20(uVar5,lVar17);
      func_0x000107c5ee20(lVar20,lVar4);
      lVar4 = lVar20;
      func_0x000107c5ed90();
      lVar17 = lVar4;
      func_0x000107c5ed90();
      uVar31 = uVar5;
      func_0x000107c3127c(uVar5,lVar20,lVar4,lVar17);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(uVar5);
      if ((uVar31 & 1) == 0) {
        lVar20 = plVar16[9];
        lVar4 = plVar16[10];
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar9 = puVar3;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar17 = lVar20;
        func_0x000107c5fadc(lVar20,lVar4);
        func_0x000107c43418(puVar9);
        func_0x000107c61170(lVar17);
        func_0x000107c61170(puVar9);
        puVar9 = puVar3;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar20,lVar4);
        plVar16[6] = 0;
        puVar10 = puVar9;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar20);
        func_0x000107c61170(puVar9);
        lVar20 = plVar16[6];
        if (puVar10 == (undefined *)0x0) {
          lVar4 = lVar20;
          func_0x000107c61174(lVar20);
          func_0x000107c5ed30(lVar20);
          func_0x000107c61170(lVar4);
          func_0x000107c61654();
          func_0x000107c614ac(lVar20);
LAB_101dfe678:
          plVar16[3] = 0;
          plVar16[2] = 0;
          plVar16[5] = 0;
          plVar16[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar16 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar5 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar9 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar5,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar20);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar16[3] = 0;
            plVar16[2] = 0;
            plVar16[5] = 0;
            plVar16[4] = 0;
          }
          else {
            lVar20 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar20);
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar20 * 0x20,plVar16 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar16[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar21 = plVar16 + 8;
          func_0x000107c6147c(plVar21,plVar16 + 2,puVar9 + 8,uVar14,6);
          if (((ulong)plVar21 & 1) != 0) {
            lVar20 = plVar16[8];
            func_0x000107c4c0a8(lVar20);
            func_0x000107c61170(lVar20);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar9 = puVar3;
        func_0x000107c5ed90();
        plVar16[7] = 0;
        puVar10 = puVar3;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar3);
        puVar23 = (undefined8 *)plVar16[7];
        if ((int)puVar10 == 0) {
          puVar6 = puVar23;
          func_0x000107c61174(puVar23);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar6);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar20 = plVar16[0x11];
        lVar4 = plVar16[0x12];
        uVar5 = plVar16[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
        puVar23[1] = 0;
        *puVar23 = 10;
        *(undefined1 *)(puVar23 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar20 + 8))(lVar4);
        func_0x000107c615c0(lVar4);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar16[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar20 = plVar16[0x12];
        uVar5 = plVar16[0x10];
        (**(code **)(plVar16[0x11] + 8))(lVar20);
        func_0x000107c615c0(lVar20);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar16[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar20 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar31 = uVar5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar25 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar5 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar13 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_101dfe8bc;
        uVar29 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
      }
      else {
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar26 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar26;
        if (pcVar12 == (code *)0x0) goto LAB_101dfe880;
        pcVar25 = pcVar12;
        func_0x000107c5ee30();
        uVar31 = uVar26;
        func_0x000107c61170(pcVar12);
        if (uVar5 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar29 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar25,uVar26);
          func_0x000100de78a0(uVar29,uVar31);
          pcVar12 = pcVar25;
          func_0x000100e25fcc(pcVar25,uVar26,uVar29,uVar31);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar25,uVar26);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar25);
          if (((ulong)pcVar12 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar25);
LAB_101dfe974:
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar31 = uVar26;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar5 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_101dfe9f8;
          }
          uVar29 = uVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar5);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar12 = (code *)0x0;
            uVar31 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          pcVar12 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar31 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar5 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar29 = uVar5;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar12,uVar26);
            func_0x000100de78a0(uVar29,uVar31);
            UNRECOVERED_JUMPTABLE_00 = pcVar12;
            func_0x000100e25fcc(pcVar12,uVar26,uVar29,uVar31);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(pcVar12,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar12,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar25,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar29,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar30 = *(undefined8 *)(lVar17 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
    puVar6[1] = 0;
    *puVar6 = 7;
    *(undefined1 *)(puVar6 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar19);
    func_0x000107c615e8(puVar23);
    func_0x000107c61170(lVar20);
LAB_101dfb99c:
    func_0x000107c615e8(uVar30);
    func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb374; end: 101dfb413;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfb374(void)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  code *pcVar25;
  long *unaff_x22;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_f0;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_88;
  long lStack_80;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_38;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)unaff_x22[0x20];
  lVar20 = unaff_x22[0x1c];
  lVar4 = unaff_x22[0x1d];
  lVar27 = unaff_x22[0xd];
  puVar3 = &UNK_1107a6f08;
  lVar17 = 0;
  lVar18 = 0;
  func_0x000107c613f8();
  *plVar16 = lVar27;
  func_0x00010006c090(lVar20);
  func_0x000107c615c0(unaff_x22[0x18]);
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  plVar2 = &lStack_60;
  pcStack_48 = FUN_101dfb414;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x14] = lVar18;
  unaff_x22[0x15] = (long)puVar3;
  unaff_x22[0x12] = lVar4;
  unaff_x22[0x13] = lVar17;
  unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE;
  lVar4 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  unaff_x22[0x17] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x18] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_70 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_68 = FUN_101dfb4a8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_80 = lVar20;
  func_0x000107c5fd64();
  plVar21 = *(long **)(unaff_x22[0x15] + 0x38);
  plVar16 = (long *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)plVar16;
  *plVar16 = (long)unaff_x22;
  plVar16[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    plVar15 = unaff_x22 + 2;
    pcStack_118 = pcStack_68;
    uVar5 = uStack_70;
LAB_104875f04:
    *(ulong *)((long)plVar2 + -0x10) = uVar5 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcStack_118;
    *(long **)((long)plVar2 + -0x18) = plVar16;
    plVar16[5] = (long)plVar15;
    plVar16[6] = (long)plVar21;
    lVar4 = *(long *)(*plVar21 + 0x50);
    plVar16[7] = lVar4;
    lVar20 = 0;
    __sSqMa(0,lVar4);
    plVar16[8] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    plVar16[9] = lVar20;
    uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[10] = uVar5;
    lVar20 = *(long *)(lVar4 + -8);
    plVar16[0xb] = lVar20;
    uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[0xc] = uVar5;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_70 | 0x1000000000000000;
  pcStack_98 = FUN_101dfb57c;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    UNRECOVERED_JUMPTABLE = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_b8 = FUN_101dfb5f0;
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar16[5];
  lVar4 = plVar16[6];
  plVar21 = plVar16 + 2;
  func_0x0001000a8868(plVar21,lVar20);
  piVar28 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar28;
  puVar23 = (undefined8 *)(ulong)(uint)piVar28[1];
  func_0x000107c615b8();
  plVar16[0x1a] = (long)puVar23;
  *puVar23 = plVar16;
  puVar23[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE = (code *)plVar16[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar28))
              (UNRECOVERED_JUMPTABLE,plVar16[0x12],plVar16[0x13],1,lVar20,lVar4);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_c0 | 0x1000000000000000;
  plVar2 = &lStack_110;
  pcStack_f8 = FUN_101dfb6a4;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *plVar16;
  plVar16 = (long *)*plVar16;
  *(undefined8 **)(lStack_108 + 0xd8) = puVar23;
  *(long **)(lStack_108 + 0xe0) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0xd0));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_118 = FUN_101dfb748;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar16[0x15];
  func_0x0001000834e4(plVar16 + 2);
  plVar21 = *(long **)(lVar20 + 0x18);
  lVar20 = 0x112d51300;
  puVar3 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar16[0xc] = lVar20;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar16[0x1d] = (long)puVar6;
  puVar23 = puVar6;
  func_0x000100faa6a0();
  plVar16[0x1e] = (long)puVar23;
  *puVar6 = plVar16;
  puVar6[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    puVar6[0xb] = puVar23;
    puVar6[0xc] = plVar16 + 0xd;
    puVar6[9] = plVar16 + 0xc;
    puVar6[10] = &UNK_1107a6f08;
    puVar6[8] = plVar16 + 0xb;
    lVar20 = *plVar21;
    puVar6[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar14;
    lVar20 = *(long *)(lVar20 + 0x50);
    puVar6[0xf] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    puVar6[0x10] = lVar20;
    plVar15 = (long *)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar15;
    plVar16 = (long *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = plVar16;
    *plVar16 = (long)puVar6;
    plVar16[1] = (long)&UNK_104876614;
    uVar5 = (ulong)&uStack_100 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *plVar16;
  lVar17 = *plVar16;
  *(long **)(lVar4 + 0xf8) = plVar21;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (plVar21 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      UNRECOVERED_JUMPTABLE = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    UNRECOVERED_JUMPTABLE = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar17 + 0x70) = 0;
  puVar19 = *(undefined8 **)(lVar17 + 0x58);
  *(undefined8 **)(lVar17 + 0x100) = puVar19;
  puVar23 = puVar19;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar17 + 0x108) = puVar23;
  lVar20 = *(long *)(lVar17 + 0x70);
  func_0x000107c61174();
  puVar6 = puVar23;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar6 == (undefined8 *)0x0) {
    if (lVar20 != 0) goto LAB_101dfb944;
    puVar24 = *(undefined8 **)(lVar17 + 0xd8);
    uVar14 = *(undefined8 *)(lVar17 + 0xc0);
    puVar6 = puVar23;
    func_0x000107c4407c(puVar23);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    puVar9 = puVar3;
    func_0x000107c5ed80(uVar14,puVar7);
    func_0x000107c6142c(puVar3);
    puVar6 = puVar24;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar20 = *(long *)(lVar17 + 0xa0);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar20 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar27 = *(long *)(lVar17 + 0xa0);
      lVar18 = lVar20;
      func_0x000107c5ee30();
      puVar3 = puVar9;
      func_0x000107c61170(lVar20);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar20 = lVar27;
      func_0x000107c5ee30();
      puVar10 = puVar3;
      func_0x000107c61170(lVar27);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar17 + 0x38);
        uVar5 = *(ulong *)(lVar17 + 0x38);
        lVar27 = *(long *)(lVar17 + 0x40);
        uVar31 = uVar5;
        func_0x000107c614f0();
        *(ulong *)(lVar17 + 0x78) = uVar5;
        (**(code **)(*(long *)(lVar27 + 8) + 0x28))();
        func_0x000107c615e8(uVar5);
        puVar7 = puVar6;
        func_0x000107c5ee20(puVar6,puVar10);
        lVar27 = lVar18;
        func_0x000107c5ee20(lVar18,puVar9);
        lVar8 = lVar20;
        puVar11 = puVar3;
        func_0x000107c5ee20(lVar20,puVar3);
        puVar24 = puVar7;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar27);
        func_0x000107c61170();
        if (puVar24 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar7,0,0);
          puVar7[1] = 0;
          *puVar7 = 10;
          *(undefined1 *)(puVar7 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar6,puVar10);
        }
        else {
          lVar27 = *(long *)(lVar17 + 0xf8);
          puVar22 = *(undefined8 **)(lVar17 + 0xc0);
          puVar7 = puVar24;
          func_0x000107c5ee30(puVar24);
          func_0x000107c61170(puVar24);
          func_0x000107c5ee40(puVar22,1,puVar7,puVar11);
          if (lVar27 == 0) {
            func_0x0001000b44c0(puVar6,puVar10);
            func_0x00010006c090(puVar7,puVar11);
            func_0x00010006c090(lVar20,puVar3);
            func_0x00010006c090(lVar18,puVar9);
            func_0x0001000d224c(lVar17 + 0x48);
            uVar5 = *(ulong *)(lVar17 + 0x48);
            lVar20 = *(long *)(lVar17 + 0x50);
            uVar31 = uVar5;
            func_0x000107c614f0();
            *(ulong *)(lVar17 + 0x80) = uVar5;
            (**(code **)(*(long *)(lVar20 + 8) + 0x18))();
            func_0x000107c615e8(uVar5);
            if ((uVar31 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar17 + 0x100);
              (**(code **)(*(long *)(lVar17 + 0xb8) + 8))
                        (*(undefined8 *)(lVar17 + 0xc0),*(undefined8 *)(lVar17 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar17 + 0x100);
              lVar20 = *(long *)(lVar17 + 0xb8);
              uVar30 = *(undefined8 *)(lVar17 + 0xc0);
              uVar32 = *(undefined8 *)(lVar17 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar17 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar20 + 8))(uVar30,uVar32);
            }
            uVar14 = *(undefined8 *)(lVar17 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar17 + 8))(UNRECOVERED_JUMPTABLE);
              return UNRECOVERED_JUMPTABLE;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
          puVar22[1] = 0;
          *puVar22 = 0x14;
          *(undefined1 *)(puVar22 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar6,puVar10);
          func_0x00010006c090(puVar7,puVar11);
          func_0x000107c614ac(lVar27);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
        puVar6[1] = 0;
        *puVar6 = 10;
        *(undefined1 *)(puVar6 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar30 = *(undefined8 *)(lVar17 + 0xd8);
      lVar27 = *(long *)(lVar17 + 0xb8);
      uVar14 = *(undefined8 *)(lVar17 + 0xc0);
      uVar32 = *(undefined8 *)(lVar17 + 0xb0);
      func_0x00010006c090(lVar20,puVar3);
      func_0x00010006c090(lVar18,puVar9);
      func_0x000107c615e8(puVar23);
      func_0x000107c615e8(puVar19);
      (**(code **)(lVar27 + 8))(uVar14,uVar32);
      goto LAB_101dfb99c;
    }
    puVar23 = puVar24;
    func_0x000107c5faec();
    puVar3 = puVar9;
    func_0x000107c61170(puVar24);
    *(undefined **)(lVar17 + 0x110) = puVar9;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar20 == 0) goto LAB_101dfbf0c;
    lVar27 = *(long *)(lVar17 + 0xa0);
    lVar18 = lVar20;
    func_0x000107c5ee30();
    puVar10 = puVar3;
    func_0x000107c61170(lVar20);
    *(long *)(lVar17 + 0x118) = lVar18;
    *(undefined **)(lVar17 + 0x120) = puVar3;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar27 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar20 = lVar27;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar27);
    *(long *)(lVar17 + 0x128) = lVar20;
    *(undefined **)(lVar17 + 0x130) = puVar10;
    plVar16 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar17 + 0x138) = plVar16;
    *plVar16 = lVar17;
    plVar16[1] = (long)FUN_101dfbf1c;
    lVar17 = *(long *)(lVar17 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar16[0xe] = lVar20;
      plVar16[0xf] = (long)puVar10;
      plVar16[0xc] = lVar18;
      plVar16[0xd] = (long)puVar3;
      plVar16[10] = (long)puVar9;
      plVar16[0xb] = lVar17;
      plVar16[9] = (long)puVar23;
      lVar20 = 0;
      func_0x000107c5ede0();
      plVar16[0x10] = lVar20;
      lVar20 = *(long *)(lVar20 + -8);
      plVar16[0x11] = lVar20;
      uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar16[0x12] = uVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar20 = plVar16[0xe];
      lVar4 = plVar16[0xf];
      uVar5 = plVar16[0xc];
      lVar17 = plVar16[0xd];
      func_0x000107c5ed80(plVar16[0x12],plVar16[9],plVar16[10]);
      func_0x000107c5ee20(uVar5,lVar17);
      func_0x000107c5ee20(lVar20,lVar4);
      lVar4 = lVar20;
      func_0x000107c5ed90();
      lVar17 = lVar4;
      func_0x000107c5ed90();
      uVar31 = uVar5;
      func_0x000107c3127c(uVar5,lVar20,lVar4,lVar17);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(uVar5);
      if ((uVar31 & 1) == 0) {
        lVar20 = plVar16[9];
        lVar4 = plVar16[10];
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar9 = puVar3;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar17 = lVar20;
        func_0x000107c5fadc(lVar20,lVar4);
        func_0x000107c43418(puVar9);
        func_0x000107c61170(lVar17);
        func_0x000107c61170(puVar9);
        puVar9 = puVar3;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar20,lVar4);
        plVar16[6] = 0;
        puVar10 = puVar9;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar20);
        func_0x000107c61170(puVar9);
        lVar20 = plVar16[6];
        if (puVar10 == (undefined *)0x0) {
          lVar4 = lVar20;
          func_0x000107c61174(lVar20);
          func_0x000107c5ed30(lVar20);
          func_0x000107c61170(lVar4);
          func_0x000107c61654();
          func_0x000107c614ac(lVar20);
LAB_101dfe678:
          plVar16[3] = 0;
          plVar16[2] = 0;
          plVar16[5] = 0;
          plVar16[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar16 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar5 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar9 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar5,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar20);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar16[3] = 0;
            plVar16[2] = 0;
            plVar16[5] = 0;
            plVar16[4] = 0;
          }
          else {
            lVar20 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar20);
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar20 * 0x20,plVar16 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar16[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar21 = plVar16 + 8;
          func_0x000107c6147c(plVar21,plVar16 + 2,puVar9 + 8,uVar14,6);
          if (((ulong)plVar21 & 1) != 0) {
            lVar20 = plVar16[8];
            func_0x000107c4c0a8(lVar20);
            func_0x000107c61170(lVar20);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar9 = puVar3;
        func_0x000107c5ed90();
        plVar16[7] = 0;
        puVar10 = puVar3;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar3);
        puVar23 = (undefined8 *)plVar16[7];
        if ((int)puVar10 == 0) {
          puVar6 = puVar23;
          func_0x000107c61174(puVar23);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar6);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar20 = plVar16[0x11];
        lVar4 = plVar16[0x12];
        uVar5 = plVar16[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
        puVar23[1] = 0;
        *puVar23 = 10;
        *(undefined1 *)(puVar23 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar20 + 8))(lVar4);
        func_0x000107c615c0(lVar4);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar20 = plVar16[0x12];
        uVar5 = plVar16[0x10];
        (**(code **)(plVar16[0x11] + 8))(lVar20);
        func_0x000107c615c0(lVar20);
        UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
        lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar20 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uVar31 = uVar5;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
        pcVar25 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar5 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar13 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_101dfe8bc;
        uVar29 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
      }
      else {
        pcVar12 = UNRECOVERED_JUMPTABLE;
        uVar26 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar26;
        if (pcVar12 == (code *)0x0) goto LAB_101dfe880;
        pcVar25 = pcVar12;
        func_0x000107c5ee30();
        uVar31 = uVar26;
        func_0x000107c61170(pcVar12);
        if (uVar5 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar29 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar25,uVar26);
          func_0x000100de78a0(uVar29,uVar31);
          pcVar12 = pcVar25;
          func_0x000100e25fcc(pcVar25,uVar26,uVar29,uVar31);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar25,uVar26);
          func_0x0001000b44c0(uVar29,uVar31);
          func_0x0001000b44c0(pcVar25);
          if (((ulong)pcVar12 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar25);
LAB_101dfe974:
        pcVar12 = UNRECOVERED_JUMPTABLE;
        uVar31 = uVar26;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar5 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_101dfe9f8;
          }
          uVar29 = uVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar5);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            pcVar12 = (code *)0x0;
            uVar31 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          pcVar12 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee30();
          uVar31 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          if (uVar5 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar29 = uVar5;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar12,uVar26);
            func_0x000100de78a0(uVar29,uVar31);
            UNRECOVERED_JUMPTABLE = pcVar12;
            func_0x000100e25fcc(pcVar12,uVar26,uVar29,uVar31);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            func_0x0001000b44c0(uVar29,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(pcVar12,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar12,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar25,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar29,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar30 = *(undefined8 *)(lVar17 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
    puVar6[1] = 0;
    *puVar6 = 7;
    *(undefined1 *)(puVar6 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar19);
    func_0x000107c615e8(puVar23);
    func_0x000107c61170(lVar20);
LAB_101dfb99c:
    func_0x000107c615e8(uVar30);
    func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 101dfb414; end: 101dfb4a7;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfb414(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long unaff_x20;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long *unaff_x22;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar2 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x14] = param_4;
  unaff_x22[0x15] = unaff_x20;
  unaff_x22[0x12] = param_2;
  unaff_x22[0x13] = param_3;
  unaff_x22[0x11] = param_1;
  lVar3 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x16] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  unaff_x22[0x17] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x18] = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb4a8;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101dfb4a8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  plVar19 = *(long **)(unaff_x22[0x15] + 0x38);
  plVar24 = (long *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)plVar24;
  *plVar24 = (long)unaff_x22;
  plVar24[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    plVar15 = unaff_x22 + 2;
    pcStack_d8 = pcStack_28;
    uVar4 = uStack_30;
LAB_104875f04:
    *(ulong *)((long)plVar2 + -0x10) = uVar4 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcStack_d8;
    *(long **)((long)plVar2 + -0x18) = plVar24;
    plVar24[5] = (long)plVar15;
    plVar24[6] = (long)plVar19;
    lVar16 = *(long *)(*plVar19 + 0x50);
    plVar24[7] = lVar16;
    lVar3 = 0;
    __sSqMa(0,lVar16);
    plVar24[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar24[9] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[10] = uVar4;
    lVar3 = *(long *)(lVar16 + -8);
    plVar24[0xb] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[0xc] = uVar4;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_58 = FUN_101dfb57c;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
  pcStack_78 = FUN_101dfb5f0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = plVar24[5];
  lVar16 = plVar24[6];
  plVar19 = plVar24 + 2;
  func_0x0001000a8868(plVar19,lVar3);
  piVar27 = *(int **)(lVar16 + 0x10);
  iVar1 = *piVar27;
  puVar21 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar24[0x1a] = (long)puVar21;
  *puVar21 = plVar24;
  puVar21[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE_00,plVar24[0x12],plVar24[0x13],1,lVar3,lVar16);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_80 | 0x1000000000000000;
  plVar2 = &lStack_d0;
  pcStack_b8 = FUN_101dfb6a4;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = *plVar24;
  plVar24 = (long *)*plVar24;
  *(undefined8 **)(lStack_c8 + 0xd8) = puVar21;
  *(long **)(lStack_c8 + 0xe0) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lStack_c8 + 0xd0));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_d8 = FUN_101dfb748;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = plVar24[0x15];
  func_0x0001000834e4(plVar24 + 2);
  plVar19 = *(long **)(lVar3 + 0x18);
  lVar3 = 0x112d51300;
  puVar8 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar24[0xc] = lVar3;
  puVar5 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar24[0x1d] = (long)puVar5;
  puVar21 = puVar5;
  func_0x000100faa6a0();
  plVar24[0x1e] = (long)puVar21;
  *puVar5 = plVar24;
  puVar5[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    puVar5[0xb] = puVar21;
    puVar5[0xc] = plVar24 + 0xd;
    puVar5[9] = plVar24 + 0xc;
    puVar5[10] = &UNK_1107a6f08;
    puVar5[8] = plVar24 + 0xb;
    lVar3 = *plVar19;
    puVar5[0xd] = &PTR_DAT_1107a6e88;
    uVar14 = 0x10;
    _swift_task_alloc();
    puVar5[0xe] = uVar14;
    lVar3 = *(long *)(lVar3 + 0x50);
    puVar5[0xf] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    puVar5[0x10] = lVar3;
    plVar15 = (long *)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar5[0x11] = plVar15;
    plVar24 = (long *)0x70;
    _swift_task_alloc();
    puVar5[0x12] = plVar24;
    *plVar24 = (long)puVar5;
    plVar24[1] = (long)&UNK_104876614;
    uVar4 = (ulong)&uStack_c0 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar24;
  lVar25 = *plVar24;
  *(long **)(lVar16 + 0xf8) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xe8));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar25 + 0x70) = 0;
  puVar18 = *(undefined8 **)(lVar25 + 0x58);
  *(undefined8 **)(lVar25 + 0x100) = puVar18;
  puVar21 = puVar18;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar25 + 0x108) = puVar21;
  lVar3 = *(long *)(lVar25 + 0x70);
  func_0x000107c61174();
  puVar5 = puVar21;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar5 == (undefined8 *)0x0) {
    if (lVar3 != 0) goto LAB_101dfb944;
    puVar22 = *(undefined8 **)(lVar25 + 0xd8);
    uVar14 = *(undefined8 *)(lVar25 + 0xc0);
    puVar5 = puVar21;
    func_0x000107c4407c(puVar21);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    puVar9 = puVar8;
    func_0x000107c5ed80(uVar14,puVar6);
    func_0x000107c6142c(puVar8);
    puVar5 = puVar22;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar3 = *(long *)(lVar25 + 0xa0);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar30 = *(long *)(lVar25 + 0xa0);
      lVar17 = lVar3;
      func_0x000107c5ee30();
      puVar8 = puVar9;
      func_0x000107c61170(lVar3);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar30 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar3 = lVar30;
      func_0x000107c5ee30();
      puVar10 = puVar8;
      func_0x000107c61170(lVar30);
      FUN_101dffdc4();
      if ((ulong)puVar10 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar25 + 0x38);
        uVar4 = *(ulong *)(lVar25 + 0x38);
        lVar30 = *(long *)(lVar25 + 0x40);
        uVar31 = uVar4;
        func_0x000107c614f0();
        *(ulong *)(lVar25 + 0x78) = uVar4;
        (**(code **)(*(long *)(lVar30 + 8) + 0x28))();
        func_0x000107c615e8(uVar4);
        puVar6 = puVar5;
        func_0x000107c5ee20(puVar5,puVar10);
        lVar30 = lVar17;
        func_0x000107c5ee20(lVar17,puVar9);
        lVar7 = lVar3;
        puVar11 = puVar8;
        func_0x000107c5ee20(lVar3,puVar8);
        puVar22 = puVar6;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar30);
        func_0x000107c61170();
        if (puVar22 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
          puVar6[1] = 0;
          *puVar6 = 10;
          *(undefined1 *)(puVar6 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar5,puVar10);
        }
        else {
          lVar30 = *(long *)(lVar25 + 0xf8);
          puVar20 = *(undefined8 **)(lVar25 + 0xc0);
          puVar6 = puVar22;
          func_0x000107c5ee30(puVar22);
          func_0x000107c61170(puVar22);
          func_0x000107c5ee40(puVar20,1,puVar6,puVar11);
          if (lVar30 == 0) {
            func_0x0001000b44c0(puVar5,puVar10);
            func_0x00010006c090(puVar6,puVar11);
            func_0x00010006c090(lVar3,puVar8);
            func_0x00010006c090(lVar17,puVar9);
            func_0x0001000d224c(lVar25 + 0x48);
            uVar4 = *(ulong *)(lVar25 + 0x48);
            lVar3 = *(long *)(lVar25 + 0x50);
            uVar31 = uVar4;
            func_0x000107c614f0();
            *(ulong *)(lVar25 + 0x80) = uVar4;
            (**(code **)(*(long *)(lVar3 + 8) + 0x18))();
            func_0x000107c615e8(uVar4);
            if ((uVar31 & 1) == 0) {
              uVar14 = *(undefined8 *)(lVar25 + 0x100);
              (**(code **)(*(long *)(lVar25 + 0xb8) + 8))
                        (*(undefined8 *)(lVar25 + 0xc0),*(undefined8 *)(lVar25 + 0xb0));
              func_0x000107c615e8(uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar25 + 0x100);
              lVar3 = *(long *)(lVar25 + 0xb8);
              uVar29 = *(undefined8 *)(lVar25 + 0xc0);
              uVar32 = *(undefined8 *)(lVar25 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar25 + 0x108));
              func_0x000107c615e8(uVar14);
              (**(code **)(lVar3 + 8))(uVar29,uVar32);
            }
            uVar14 = *(undefined8 *)(lVar25 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar25 + 0xd8));
            func_0x000107c615c0(uVar14);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar25 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar25 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar20,0,0);
          puVar20[1] = 0;
          *puVar20 = 0x14;
          *(undefined1 *)(puVar20 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar5,puVar10);
          func_0x00010006c090(puVar6,puVar11);
          func_0x000107c614ac(lVar30);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 10;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar29 = *(undefined8 *)(lVar25 + 0xd8);
      lVar30 = *(long *)(lVar25 + 0xb8);
      uVar14 = *(undefined8 *)(lVar25 + 0xc0);
      uVar32 = *(undefined8 *)(lVar25 + 0xb0);
      func_0x00010006c090(lVar3,puVar8);
      func_0x00010006c090(lVar17,puVar9);
      func_0x000107c615e8(puVar21);
      func_0x000107c615e8(puVar18);
      (**(code **)(lVar30 + 8))(uVar14,uVar32);
      goto LAB_101dfb99c;
    }
    puVar21 = puVar22;
    func_0x000107c5faec();
    puVar8 = puVar9;
    func_0x000107c61170(puVar22);
    *(undefined **)(lVar25 + 0x110) = puVar9;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_101dfbf0c;
    lVar30 = *(long *)(lVar25 + 0xa0);
    lVar17 = lVar3;
    func_0x000107c5ee30();
    puVar10 = puVar8;
    func_0x000107c61170(lVar3);
    *(long *)(lVar25 + 0x118) = lVar17;
    *(undefined **)(lVar25 + 0x120) = puVar8;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar30 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar3 = lVar30;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar30);
    *(long *)(lVar25 + 0x128) = lVar3;
    *(undefined **)(lVar25 + 0x130) = puVar10;
    plVar24 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar25 + 0x138) = plVar24;
    *plVar24 = lVar25;
    plVar24[1] = (long)FUN_101dfbf1c;
    lVar25 = *(long *)(lVar25 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24[0xe] = lVar3;
      plVar24[0xf] = (long)puVar10;
      plVar24[0xc] = lVar17;
      plVar24[0xd] = (long)puVar8;
      plVar24[10] = (long)puVar9;
      plVar24[0xb] = lVar25;
      plVar24[9] = (long)puVar21;
      lVar3 = 0;
      func_0x000107c5ede0();
      plVar24[0x10] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar24[0x11] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar24[0x12] = uVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar3 = plVar24[0xe];
      lVar16 = plVar24[0xf];
      uVar4 = plVar24[0xc];
      lVar25 = plVar24[0xd];
      func_0x000107c5ed80(plVar24[0x12],plVar24[9],plVar24[10]);
      func_0x000107c5ee20(uVar4,lVar25);
      func_0x000107c5ee20(lVar3,lVar16);
      lVar16 = lVar3;
      func_0x000107c5ed90();
      lVar25 = lVar16;
      func_0x000107c5ed90();
      uVar31 = uVar4;
      func_0x000107c3127c(uVar4,lVar3,lVar16,lVar25);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
      if ((uVar31 & 1) == 0) {
        lVar3 = plVar24[9];
        lVar16 = plVar24[10];
        puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar9 = puVar8;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar25 = lVar3;
        func_0x000107c5fadc(lVar3,lVar16);
        func_0x000107c43418(puVar9);
        func_0x000107c61170(lVar25);
        func_0x000107c61170(puVar9);
        puVar9 = puVar8;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar3,lVar16);
        plVar24[6] = 0;
        puVar10 = puVar9;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar9);
        lVar3 = plVar24[6];
        if (puVar10 == (undefined *)0x0) {
          lVar16 = lVar3;
          func_0x000107c61174(lVar3);
          func_0x000107c5ed30(lVar3);
          func_0x000107c61170(lVar16);
          func_0x000107c61654();
          func_0x000107c614ac(lVar3);
LAB_101dfe678:
          plVar24[3] = 0;
          plVar24[2] = 0;
          plVar24[5] = 0;
          plVar24[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar24 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar4 = 0;
          FUN_101a64068();
          uVar14 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar9 = PTR___sypN_11034f1a8;
          puVar11 = puVar10;
          func_0x000107c5f9e8(puVar10,uVar4,PTR___sypN_11034f1a8 + 8,uVar14);
          func_0x000107c61174(lVar3);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar11 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar24[3] = 0;
            plVar24[2] = 0;
            plVar24[5] = 0;
            plVar24[4] = 0;
          }
          else {
            lVar3 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar11);
            FUN_101aae36c(lVar3);
            if ((uVar4 & 1) == 0) {
              func_0x000107c6142c(puVar11);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar3 * 0x20,plVar24 + 2);
            func_0x000107c6142c(puVar11);
          }
          func_0x000107c6142c(puVar11);
          if (plVar24[5] == 0) goto LAB_101dfe680;
          uVar14 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar19 = plVar24 + 8;
          func_0x000107c6147c(plVar19,plVar24 + 2,puVar9 + 8,uVar14,6);
          if (((ulong)plVar19 & 1) != 0) {
            lVar3 = plVar24[8];
            func_0x000107c4c0a8(lVar3);
            func_0x000107c61170(lVar3);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5ed90();
        plVar24[7] = 0;
        puVar10 = puVar8;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        puVar21 = (undefined8 *)plVar24[7];
        if ((int)puVar10 == 0) {
          puVar5 = puVar21;
          func_0x000107c61174(puVar21);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar5);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar3 = plVar24[0x11];
        lVar16 = plVar24[0x12];
        uVar4 = plVar24[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
        puVar21[1] = 0;
        *puVar21 = 10;
        *(undefined1 *)(puVar21 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar3 + 8))(lVar16);
        func_0x000107c615c0(lVar16);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[1];
        lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar3 = plVar24[0x12];
        uVar4 = plVar24[0x10];
        (**(code **)(plVar24[0x11] + 8))(lVar3);
        func_0x000107c615c0(lVar3);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[1];
        lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar3 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar31 = uVar4;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar23 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar4 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar13 = uVar4;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_101dfe8bc;
        uVar28 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
      }
      else {
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar26 = uVar4;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar26;
        if (pcVar12 == (code *)0x0) goto LAB_101dfe880;
        pcVar23 = pcVar12;
        func_0x000107c5ee30();
        uVar31 = uVar26;
        func_0x000107c61170(pcVar12);
        if (uVar4 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar28 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar23,uVar26);
          func_0x000100de78a0(uVar28,uVar31);
          pcVar12 = pcVar23;
          func_0x000100e25fcc(pcVar23,uVar26,uVar28,uVar31);
          func_0x0001000b44c0(uVar28,uVar31);
          func_0x0001000b44c0(pcVar23,uVar26);
          func_0x0001000b44c0(uVar28,uVar31);
          func_0x0001000b44c0(pcVar23);
          if (((ulong)pcVar12 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar23);
LAB_101dfe974:
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar31 = uVar26;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar4 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar4 == 0) {
            uVar4 = 0;
            goto LAB_101dfe9f8;
          }
          uVar28 = uVar4;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar4);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar12 = (code *)0x0;
            uVar31 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          pcVar12 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar31 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar4 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar28 = uVar4;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar12,uVar26);
            func_0x000100de78a0(uVar28,uVar31);
            UNRECOVERED_JUMPTABLE_00 = pcVar12;
            func_0x000100e25fcc(pcVar12,uVar26,uVar28,uVar31);
            func_0x0001000b44c0(uVar28,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            func_0x0001000b44c0(uVar28,uVar31);
            func_0x0001000b44c0(pcVar12,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(pcVar12,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar12,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar23,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar28,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar29 = *(undefined8 *)(lVar25 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
    puVar5[1] = 0;
    *puVar5 = 7;
    *(undefined1 *)(puVar5 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar18);
    func_0x000107c615e8(puVar21);
    func_0x000107c61170(lVar3);
LAB_101dfb99c:
    func_0x000107c615e8(uVar29);
    func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar25 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb4a8; end: 101dfb57b;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */

code * FUN_101dfb4a8(void)

{
  ulong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long *unaff_x22;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  plVar19 = *(long **)(unaff_x22[0x15] + 0x38);
  plVar24 = (long *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)plVar24;
  *plVar24 = (long)unaff_x22;
  plVar24[1] = (long)FUN_101dfb57c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    plVar14 = unaff_x22 + 2;
    pcStack_b8 = unaff_x30;
    uVar12 = uStack_10;
LAB_104875f04:
    *(ulong *)((long)register0x00000008 + -0x10) = uVar12 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = pcStack_b8;
    *(long **)((long)register0x00000008 + -0x18) = plVar24;
    plVar24[5] = (long)plVar14;
    plVar24[6] = (long)plVar19;
    lVar15 = *(long *)(*plVar19 + 0x50);
    plVar24[7] = lVar15;
    lVar18 = 0;
    __sSqMa(0,lVar15);
    plVar24[8] = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    plVar24[9] = lVar18;
    uVar12 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[10] = uVar12;
    lVar18 = *(long *)(lVar15 + -8);
    plVar24[0xb] = lVar18;
    uVar12 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[0xc] = uVar12;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_38 = FUN_101dfb57c;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb5f0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
  pcStack_58 = FUN_101dfb5f0;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar24[5];
  lVar15 = plVar24[6];
  plVar19 = plVar24 + 2;
  func_0x0001000a8868(plVar19,lVar18);
  piVar27 = *(int **)(lVar15 + 0x10);
  iVar2 = *piVar27;
  puVar21 = (undefined8 *)(ulong)(uint)piVar27[1];
  func_0x000107c615b8();
  plVar24[0x1a] = (long)puVar21;
  *puVar21 = plVar24;
  puVar21[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar27))
              (UNRECOVERED_JUMPTABLE_00,plVar24[0x12],plVar24[0x13],1,lVar18,lVar15);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_60 | 0x1000000000000000;
  pcStack_98 = FUN_101dfb6a4;
  puVar1 = &uStack_a0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = *plVar24;
  plVar24 = (long *)*plVar24;
  *(undefined8 **)(lStack_a8 + 0xd8) = puVar21;
  *(long **)(lStack_a8 + 0xe0) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lStack_a8 + 0xd0));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_101dfb748;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar24[0x15];
  func_0x0001000834e4(plVar24 + 2);
  plVar19 = *(long **)(lVar18 + 0x18);
  lVar18 = 0x112d51300;
  puVar6 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar24[0xc] = lVar18;
  puVar3 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar24[0x1d] = (long)puVar3;
  puVar21 = puVar3;
  func_0x000100faa6a0();
  plVar24[0x1e] = (long)puVar21;
  *puVar3 = plVar24;
  puVar3[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    puVar3[0xb] = puVar21;
    puVar3[0xc] = plVar24 + 0xd;
    puVar3[9] = plVar24 + 0xc;
    puVar3[10] = &UNK_1107a6f08;
    puVar3[8] = plVar24 + 0xb;
    lVar18 = *plVar19;
    puVar3[0xd] = &PTR_DAT_1107a6e88;
    uVar13 = 0x10;
    _swift_task_alloc();
    puVar3[0xe] = uVar13;
    lVar18 = *(long *)(lVar18 + 0x50);
    puVar3[0xf] = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    puVar3[0x10] = lVar18;
    plVar14 = (long *)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar3[0x11] = plVar14;
    plVar24 = (long *)0x70;
    _swift_task_alloc();
    puVar3[0x12] = plVar24;
    *plVar24 = (long)puVar3;
    plVar24[1] = (long)&UNK_104876614;
    register0x00000008 = (BADSPACEBASE *)&lStack_b0;
    uVar12 = (ulong)puVar1 & 0xefffffffffffffff;
    goto LAB_104875f04;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *plVar24;
  lVar25 = *plVar24;
  *(long **)(lVar15 + 0xf8) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xe8));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar25 + 0x70) = 0;
  puVar17 = *(undefined8 **)(lVar25 + 0x58);
  *(undefined8 **)(lVar25 + 0x100) = puVar17;
  puVar21 = puVar17;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar25 + 0x108) = puVar21;
  lVar18 = *(long *)(lVar25 + 0x70);
  func_0x000107c61174();
  puVar3 = puVar21;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    if (lVar18 != 0) goto LAB_101dfb944;
    puVar22 = *(undefined8 **)(lVar25 + 0xd8);
    uVar13 = *(undefined8 *)(lVar25 + 0xc0);
    puVar3 = puVar21;
    func_0x000107c4407c(puVar21);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    puVar7 = puVar6;
    func_0x000107c5ed80(uVar13,puVar4);
    func_0x000107c6142c(puVar6);
    puVar3 = puVar22;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar18 = *(long *)(lVar25 + 0xa0);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar30 = *(long *)(lVar25 + 0xa0);
      lVar16 = lVar18;
      func_0x000107c5ee30();
      puVar6 = puVar7;
      func_0x000107c61170(lVar18);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar30 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar18 = lVar30;
      func_0x000107c5ee30();
      puVar8 = puVar6;
      func_0x000107c61170(lVar30);
      FUN_101dffdc4();
      if ((ulong)puVar8 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar25 + 0x38);
        uVar12 = *(ulong *)(lVar25 + 0x38);
        lVar30 = *(long *)(lVar25 + 0x40);
        uVar31 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar25 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar30 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar4 = puVar3;
        func_0x000107c5ee20(puVar3,puVar8);
        lVar30 = lVar16;
        func_0x000107c5ee20(lVar16,puVar7);
        lVar5 = lVar18;
        puVar9 = puVar6;
        func_0x000107c5ee20(lVar18,puVar6);
        puVar22 = puVar4;
        if ((uVar31 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar30);
        func_0x000107c61170();
        if (puVar22 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
          puVar4[1] = 0;
          *puVar4 = 10;
          *(undefined1 *)(puVar4 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar8);
        }
        else {
          lVar30 = *(long *)(lVar25 + 0xf8);
          puVar20 = *(undefined8 **)(lVar25 + 0xc0);
          puVar4 = puVar22;
          func_0x000107c5ee30(puVar22);
          func_0x000107c61170(puVar22);
          func_0x000107c5ee40(puVar20,1,puVar4,puVar9);
          if (lVar30 == 0) {
            func_0x0001000b44c0(puVar3,puVar8);
            func_0x00010006c090(puVar4,puVar9);
            func_0x00010006c090(lVar18,puVar6);
            func_0x00010006c090(lVar16,puVar7);
            func_0x0001000d224c(lVar25 + 0x48);
            uVar12 = *(ulong *)(lVar25 + 0x48);
            lVar18 = *(long *)(lVar25 + 0x50);
            uVar31 = uVar12;
            func_0x000107c614f0();
            *(ulong *)(lVar25 + 0x80) = uVar12;
            (**(code **)(*(long *)(lVar18 + 8) + 0x18))();
            func_0x000107c615e8(uVar12);
            if ((uVar31 & 1) == 0) {
              uVar13 = *(undefined8 *)(lVar25 + 0x100);
              (**(code **)(*(long *)(lVar25 + 0xb8) + 8))
                        (*(undefined8 *)(lVar25 + 0xc0),*(undefined8 *)(lVar25 + 0xb0));
              func_0x000107c615e8(uVar13);
            }
            else {
              uVar13 = *(undefined8 *)(lVar25 + 0x100);
              lVar18 = *(long *)(lVar25 + 0xb8);
              uVar29 = *(undefined8 *)(lVar25 + 0xc0);
              uVar32 = *(undefined8 *)(lVar25 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar25 + 0x108));
              func_0x000107c615e8(uVar13);
              (**(code **)(lVar18 + 8))(uVar29,uVar32);
            }
            uVar13 = *(undefined8 *)(lVar25 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar25 + 0xd8));
            func_0x000107c615c0(uVar13);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar25 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar25 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar20,0,0);
          puVar20[1] = 0;
          *puVar20 = 0x14;
          *(undefined1 *)(puVar20 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar8);
          func_0x00010006c090(puVar4,puVar9);
          func_0x000107c614ac(lVar30);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 10;
        *(undefined1 *)(puVar3 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar29 = *(undefined8 *)(lVar25 + 0xd8);
      lVar30 = *(long *)(lVar25 + 0xb8);
      uVar13 = *(undefined8 *)(lVar25 + 0xc0);
      uVar32 = *(undefined8 *)(lVar25 + 0xb0);
      func_0x00010006c090(lVar18,puVar6);
      func_0x00010006c090(lVar16,puVar7);
      func_0x000107c615e8(puVar21);
      func_0x000107c615e8(puVar17);
      (**(code **)(lVar30 + 8))(uVar13,uVar32);
      goto LAB_101dfb99c;
    }
    puVar21 = puVar22;
    func_0x000107c5faec();
    puVar6 = puVar7;
    func_0x000107c61170(puVar22);
    *(undefined **)(lVar25 + 0x110) = puVar7;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar18 == 0) goto LAB_101dfbf0c;
    lVar30 = *(long *)(lVar25 + 0xa0);
    lVar16 = lVar18;
    func_0x000107c5ee30();
    puVar8 = puVar6;
    func_0x000107c61170(lVar18);
    *(long *)(lVar25 + 0x118) = lVar16;
    *(undefined **)(lVar25 + 0x120) = puVar6;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar30 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar18 = lVar30;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar30);
    *(long *)(lVar25 + 0x128) = lVar18;
    *(undefined **)(lVar25 + 0x130) = puVar8;
    plVar24 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar25 + 0x138) = plVar24;
    *plVar24 = lVar25;
    plVar24[1] = (long)FUN_101dfbf1c;
    lVar25 = *(long *)(lVar25 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24[0xe] = lVar18;
      plVar24[0xf] = (long)puVar8;
      plVar24[0xc] = lVar16;
      plVar24[0xd] = (long)puVar6;
      plVar24[10] = (long)puVar7;
      plVar24[0xb] = lVar25;
      plVar24[9] = (long)puVar21;
      lVar18 = 0;
      func_0x000107c5ede0();
      plVar24[0x10] = lVar18;
      lVar18 = *(long *)(lVar18 + -8);
      plVar24[0x11] = lVar18;
      uVar12 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar24[0x12] = uVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar24[0xe];
      lVar15 = plVar24[0xf];
      uVar12 = plVar24[0xc];
      lVar25 = plVar24[0xd];
      func_0x000107c5ed80(plVar24[0x12],plVar24[9],plVar24[10]);
      func_0x000107c5ee20(uVar12,lVar25);
      func_0x000107c5ee20(lVar18,lVar15);
      lVar15 = lVar18;
      func_0x000107c5ed90();
      lVar25 = lVar15;
      func_0x000107c5ed90();
      uVar31 = uVar12;
      func_0x000107c3127c(uVar12,lVar18,lVar15,lVar25);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar18);
      func_0x000107c61170(uVar12);
      if ((uVar31 & 1) == 0) {
        lVar18 = plVar24[9];
        lVar15 = plVar24[10];
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar25 = lVar18;
        func_0x000107c5fadc(lVar18,lVar15);
        func_0x000107c43418(puVar7);
        func_0x000107c61170(lVar25);
        func_0x000107c61170(puVar7);
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar18,lVar15);
        plVar24[6] = 0;
        puVar8 = puVar7;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar18);
        func_0x000107c61170(puVar7);
        lVar18 = plVar24[6];
        if (puVar8 == (undefined *)0x0) {
          lVar15 = lVar18;
          func_0x000107c61174(lVar18);
          func_0x000107c5ed30(lVar18);
          func_0x000107c61170(lVar15);
          func_0x000107c61654();
          func_0x000107c614ac(lVar18);
LAB_101dfe678:
          plVar24[3] = 0;
          plVar24[2] = 0;
          plVar24[5] = 0;
          plVar24[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar24 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar12 = 0;
          FUN_101a64068();
          uVar13 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar7 = PTR___sypN_11034f1a8;
          puVar9 = puVar8;
          func_0x000107c5f9e8(puVar8,uVar12,PTR___sypN_11034f1a8 + 8,uVar13);
          func_0x000107c61174(lVar18);
          func_0x000107c61170(puVar8);
          if (puVar9 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar9 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar24[3] = 0;
            plVar24[2] = 0;
            plVar24[5] = 0;
            plVar24[4] = 0;
          }
          else {
            lVar18 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar9);
            FUN_101aae36c(lVar18);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(puVar9);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar9 + 0x38) + lVar18 * 0x20,plVar24 + 2);
            func_0x000107c6142c(puVar9);
          }
          func_0x000107c6142c(puVar9);
          if (plVar24[5] == 0) goto LAB_101dfe680;
          uVar13 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar19 = plVar24 + 8;
          func_0x000107c6147c(plVar19,plVar24 + 2,puVar7 + 8,uVar13,6);
          if (((ulong)plVar19 & 1) != 0) {
            lVar18 = plVar24[8];
            func_0x000107c4c0a8(lVar18);
            func_0x000107c61170(lVar18);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5ed90();
        plVar24[7] = 0;
        puVar8 = puVar6;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        puVar21 = (undefined8 *)plVar24[7];
        if ((int)puVar8 == 0) {
          puVar3 = puVar21;
          func_0x000107c61174(puVar21);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar3);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar18 = plVar24[0x11];
        lVar15 = plVar24[0x12];
        uVar12 = plVar24[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
        puVar21[1] = 0;
        *puVar21 = 10;
        *(undefined1 *)(puVar21 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar18 + 8))(lVar15);
        func_0x000107c615c0(lVar15);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[1];
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar18 = plVar24[0x12];
        uVar12 = plVar24[0x10];
        (**(code **)(plVar24[0x11] + 8))(lVar18);
        func_0x000107c615c0(lVar18);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar24[1];
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar18 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar31 = uVar12;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar23 = (code *)0x0;
        uVar26 = 0xf000000000000000;
        if (uVar12 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar11 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar11 == 0) goto LAB_101dfe8bc;
        uVar28 = uVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar11);
      }
      else {
        pcVar10 = UNRECOVERED_JUMPTABLE_00;
        uVar26 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar31 = uVar26;
        if (pcVar10 == (code *)0x0) goto LAB_101dfe880;
        pcVar23 = pcVar10;
        func_0x000107c5ee30();
        uVar31 = uVar26;
        func_0x000107c61170(pcVar10);
        if (uVar12 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar28 = 0;
        uVar31 = 0xf000000000000000;
      }
      if (uVar26 >> 0x3c < 0xf) {
        if (uVar31 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar23,uVar26);
          func_0x000100de78a0(uVar28,uVar31);
          pcVar10 = pcVar23;
          func_0x000100e25fcc(pcVar23,uVar26,uVar28,uVar31);
          func_0x0001000b44c0(uVar28,uVar31);
          func_0x0001000b44c0(pcVar23,uVar26);
          func_0x0001000b44c0(uVar28,uVar31);
          func_0x0001000b44c0(pcVar23);
          if (((ulong)pcVar10 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar31 >> 0x3c) {
        func_0x0001000b44c0(pcVar23);
LAB_101dfe974:
        pcVar10 = UNRECOVERED_JUMPTABLE_00;
        uVar31 = uVar26;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar26 = 0xf000000000000000;
          if (uVar12 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_101dfe9f8;
          }
          uVar28 = uVar12;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar10 = (code *)0x0;
            uVar31 = uVar26;
            goto joined_r0x000101dfe9b0;
          }
          pcVar10 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar31 = uVar26;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar12 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar31 = 0xf000000000000000;
          uVar28 = uVar12;
        }
        if (uVar26 >> 0x3c < 0xf) {
          if (uVar31 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar10,uVar26);
            func_0x000100de78a0(uVar28,uVar31);
            UNRECOVERED_JUMPTABLE_00 = pcVar10;
            func_0x000100e25fcc(pcVar10,uVar26,uVar28,uVar31);
            func_0x0001000b44c0(uVar28,uVar31);
            func_0x0001000b44c0(pcVar10,uVar26);
            func_0x0001000b44c0(uVar28,uVar31);
            func_0x0001000b44c0(pcVar10,uVar26);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar31 >> 0x3c) {
          func_0x0001000b44c0(pcVar10,uVar26);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar10,uVar26);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar23,uVar26);
LAB_101dfea48:
      func_0x0001000b44c0(uVar28,uVar31);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar29 = *(undefined8 *)(lVar25 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 7;
    *(undefined1 *)(puVar3 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar17);
    func_0x000107c615e8(puVar21);
    func_0x000107c61170(lVar18);
LAB_101dfb99c:
    func_0x000107c615e8(uVar29);
    func_0x000107c615c0(*(undefined8 *)(lVar25 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar25 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb57c; end: 101dfb5ef;  */

code * FUN_101dfb57c(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  code *pcVar22;
  long *unaff_x22;
  long *plVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfb5f0;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = plVar23[5];
  lVar16 = plVar23[6];
  plVar18 = plVar23 + 2;
  func_0x0001000a8868(plVar18,lVar13);
  piVar25 = *(int **)(lVar16 + 0x10);
  iVar1 = *piVar25;
  puVar20 = (undefined8 *)(ulong)(uint)piVar25[1];
  func_0x000107c615b8();
  plVar23[0x1a] = (long)puVar20;
  *puVar20 = plVar23;
  puVar20[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE_00 = (code *)plVar23[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar25))
              (UNRECOVERED_JUMPTABLE_00,plVar23[0x12],plVar23[0x13],1,lVar13,lVar16);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar23;
  plVar23 = (long *)*plVar23;
  *(undefined8 **)(lVar16 + 0xd8) = puVar20;
  *(long **)(lVar16 + 0xe0) = plVar18;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xd0));
  if (plVar18 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = plVar23[0x15];
  func_0x0001000834e4(plVar23 + 2);
  plVar18 = *(long **)(lVar13 + 0x18);
  lVar13 = 0x112d51300;
  puVar5 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar23[0xc] = lVar13;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar23[0x1d] = (long)puVar2;
  puVar20 = puVar2;
  func_0x000100faa6a0();
  plVar23[0x1e] = (long)puVar20;
  *puVar2 = plVar23;
  puVar2[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    puVar2[0xb] = puVar20;
    puVar2[0xc] = plVar23 + 0xd;
    puVar2[9] = plVar23 + 0xc;
    puVar2[10] = &UNK_1107a6f08;
    puVar2[8] = plVar23 + 0xb;
    lVar13 = *plVar18;
    puVar2[0xd] = &PTR_DAT_1107a6e88;
    uVar11 = 0x10;
    _swift_task_alloc();
    puVar2[0xe] = uVar11;
    lVar13 = *(long *)(lVar13 + 0x50);
    puVar2[0xf] = lVar13;
    lVar13 = *(long *)(lVar13 + -8);
    puVar2[0x10] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2[0x11] = uVar12;
    plVar23 = (long *)0x70;
    _swift_task_alloc();
    puVar2[0x12] = plVar23;
    *plVar23 = (long)puVar2;
    plVar23[1] = (long)&UNK_104876614;
    plVar23[5] = uVar12;
    plVar23[6] = (long)plVar18;
    lVar16 = *(long *)(*plVar18 + 0x50);
    plVar23[7] = lVar16;
    lVar13 = 0;
    __sSqMa(0,lVar16);
    plVar23[8] = lVar13;
    lVar13 = *(long *)(lVar13 + -8);
    plVar23[9] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar23[10] = uVar12;
    lVar13 = *(long *)(lVar16 + -8);
    plVar23[0xb] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar23[0xc] = uVar12;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar23;
  lVar14 = *plVar23;
  *(long **)(lVar16 + 0xf8) = plVar18;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xe8));
  if (plVar18 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar14 + 0x70) = 0;
  puVar17 = *(undefined8 **)(lVar14 + 0x58);
  *(undefined8 **)(lVar14 + 0x100) = puVar17;
  puVar20 = puVar17;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar14 + 0x108) = puVar20;
  lVar13 = *(long *)(lVar14 + 0x70);
  func_0x000107c61174();
  puVar2 = puVar20;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar13 != 0) goto LAB_101dfb944;
    puVar21 = *(undefined8 **)(lVar14 + 0xd8);
    uVar11 = *(undefined8 *)(lVar14 + 0xc0);
    puVar2 = puVar20;
    func_0x000107c4407c(puVar20);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    puVar6 = puVar5;
    func_0x000107c5ed80(uVar11,puVar3);
    func_0x000107c6142c(puVar5);
    puVar2 = puVar21;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar13 = *(long *)(lVar14 + 0xa0);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar28 = *(long *)(lVar14 + 0xa0);
      lVar15 = lVar13;
      func_0x000107c5ee30();
      puVar5 = puVar6;
      func_0x000107c61170(lVar13);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar13 = lVar28;
      func_0x000107c5ee30();
      puVar7 = puVar5;
      func_0x000107c61170(lVar28);
      FUN_101dffdc4();
      if ((ulong)puVar7 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar14 + 0x38);
        uVar12 = *(ulong *)(lVar14 + 0x38);
        lVar28 = *(long *)(lVar14 + 0x40);
        uVar29 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar14 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar28 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar3 = puVar2;
        func_0x000107c5ee20(puVar2,puVar7);
        lVar28 = lVar15;
        func_0x000107c5ee20(lVar15,puVar6);
        lVar4 = lVar13;
        puVar8 = puVar5;
        func_0x000107c5ee20(lVar13,puVar5);
        puVar21 = puVar3;
        if ((uVar29 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar28);
        func_0x000107c61170();
        if (puVar21 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
          puVar3[1] = 0;
          *puVar3 = 10;
          *(undefined1 *)(puVar3 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
        }
        else {
          lVar28 = *(long *)(lVar14 + 0xf8);
          puVar19 = *(undefined8 **)(lVar14 + 0xc0);
          puVar3 = puVar21;
          func_0x000107c5ee30(puVar21);
          func_0x000107c61170(puVar21);
          func_0x000107c5ee40(puVar19,1,puVar3,puVar8);
          if (lVar28 == 0) {
            func_0x0001000b44c0(puVar2,puVar7);
            func_0x00010006c090(puVar3,puVar8);
            func_0x00010006c090(lVar13,puVar5);
            func_0x00010006c090(lVar15,puVar6);
            func_0x0001000d224c(lVar14 + 0x48);
            uVar12 = *(ulong *)(lVar14 + 0x48);
            lVar13 = *(long *)(lVar14 + 0x50);
            uVar29 = uVar12;
            func_0x000107c614f0();
            *(ulong *)(lVar14 + 0x80) = uVar12;
            (**(code **)(*(long *)(lVar13 + 8) + 0x18))();
            func_0x000107c615e8(uVar12);
            if ((uVar29 & 1) == 0) {
              uVar11 = *(undefined8 *)(lVar14 + 0x100);
              (**(code **)(*(long *)(lVar14 + 0xb8) + 8))
                        (*(undefined8 *)(lVar14 + 0xc0),*(undefined8 *)(lVar14 + 0xb0));
              func_0x000107c615e8(uVar11);
            }
            else {
              uVar11 = *(undefined8 *)(lVar14 + 0x100);
              lVar13 = *(long *)(lVar14 + 0xb8);
              uVar27 = *(undefined8 *)(lVar14 + 0xc0);
              uVar30 = *(undefined8 *)(lVar14 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar14 + 0x108));
              func_0x000107c615e8(uVar11);
              (**(code **)(lVar13 + 8))(uVar27,uVar30);
            }
            uVar11 = *(undefined8 *)(lVar14 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xd8));
            func_0x000107c615c0(uVar11);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar14 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar14 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
          puVar19[1] = 0;
          *puVar19 = 0x14;
          *(undefined1 *)(puVar19 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
          func_0x00010006c090(puVar3,puVar8);
          func_0x000107c614ac(lVar28);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
        puVar2[1] = 0;
        *puVar2 = 10;
        *(undefined1 *)(puVar2 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar27 = *(undefined8 *)(lVar14 + 0xd8);
      lVar28 = *(long *)(lVar14 + 0xb8);
      uVar11 = *(undefined8 *)(lVar14 + 0xc0);
      uVar30 = *(undefined8 *)(lVar14 + 0xb0);
      func_0x00010006c090(lVar13,puVar5);
      func_0x00010006c090(lVar15,puVar6);
      func_0x000107c615e8(puVar20);
      func_0x000107c615e8(puVar17);
      (**(code **)(lVar28 + 8))(uVar11,uVar30);
      goto LAB_101dfb99c;
    }
    puVar20 = puVar21;
    func_0x000107c5faec();
    puVar5 = puVar6;
    func_0x000107c61170(puVar21);
    *(undefined **)(lVar14 + 0x110) = puVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar13 == 0) goto LAB_101dfbf0c;
    lVar28 = *(long *)(lVar14 + 0xa0);
    lVar15 = lVar13;
    func_0x000107c5ee30();
    puVar7 = puVar5;
    func_0x000107c61170(lVar13);
    *(long *)(lVar14 + 0x118) = lVar15;
    *(undefined **)(lVar14 + 0x120) = puVar5;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar28 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar13 = lVar28;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar28);
    *(long *)(lVar14 + 0x128) = lVar13;
    *(undefined **)(lVar14 + 0x130) = puVar7;
    plVar23 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar14 + 0x138) = plVar23;
    *plVar23 = lVar14;
    plVar23[1] = (long)FUN_101dfbf1c;
    lVar14 = *(long *)(lVar14 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar23[0xe] = lVar13;
      plVar23[0xf] = (long)puVar7;
      plVar23[0xc] = lVar15;
      plVar23[0xd] = (long)puVar5;
      plVar23[10] = (long)puVar6;
      plVar23[0xb] = lVar14;
      plVar23[9] = (long)puVar20;
      lVar13 = 0;
      func_0x000107c5ede0();
      plVar23[0x10] = lVar13;
      lVar13 = *(long *)(lVar13 + -8);
      plVar23[0x11] = lVar13;
      uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar23[0x12] = uVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = plVar23[0xe];
      lVar16 = plVar23[0xf];
      uVar12 = plVar23[0xc];
      lVar14 = plVar23[0xd];
      func_0x000107c5ed80(plVar23[0x12],plVar23[9],plVar23[10]);
      func_0x000107c5ee20(uVar12,lVar14);
      func_0x000107c5ee20(lVar13,lVar16);
      lVar16 = lVar13;
      func_0x000107c5ed90();
      lVar14 = lVar16;
      func_0x000107c5ed90();
      uVar29 = uVar12;
      func_0x000107c3127c(uVar12,lVar13,lVar16,lVar14);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar12);
      if ((uVar29 & 1) == 0) {
        lVar13 = plVar23[9];
        lVar16 = plVar23[10];
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar14 = lVar13;
        func_0x000107c5fadc(lVar13,lVar16);
        func_0x000107c43418(puVar6);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(puVar6);
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar13,lVar16);
        plVar23[6] = 0;
        puVar7 = puVar6;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        func_0x000107c61170(puVar6);
        lVar13 = plVar23[6];
        if (puVar7 == (undefined *)0x0) {
          lVar16 = lVar13;
          func_0x000107c61174(lVar13);
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar16);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
LAB_101dfe678:
          plVar23[3] = 0;
          plVar23[2] = 0;
          plVar23[5] = 0;
          plVar23[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar23 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar12 = 0;
          FUN_101a64068();
          uVar11 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar6 = PTR___sypN_11034f1a8;
          puVar8 = puVar7;
          func_0x000107c5f9e8(puVar7,uVar12,PTR___sypN_11034f1a8 + 8,uVar11);
          func_0x000107c61174(lVar13);
          func_0x000107c61170(puVar7);
          if (puVar8 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar8 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar23[3] = 0;
            plVar23[2] = 0;
            plVar23[5] = 0;
            plVar23[4] = 0;
          }
          else {
            lVar13 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar8);
            FUN_101aae36c(lVar13);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(puVar8);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar8 + 0x38) + lVar13 * 0x20,plVar23 + 2);
            func_0x000107c6142c(puVar8);
          }
          func_0x000107c6142c(puVar8);
          if (plVar23[5] == 0) goto LAB_101dfe680;
          uVar11 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar18 = plVar23 + 8;
          func_0x000107c6147c(plVar18,plVar23 + 2,puVar6 + 8,uVar11,6);
          if (((ulong)plVar18 & 1) != 0) {
            lVar13 = plVar23[8];
            func_0x000107c4c0a8(lVar13);
            func_0x000107c61170(lVar13);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        plVar23[7] = 0;
        puVar7 = puVar5;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar20 = (undefined8 *)plVar23[7];
        if ((int)puVar7 == 0) {
          puVar2 = puVar20;
          func_0x000107c61174(puVar20);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar2);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar13 = plVar23[0x11];
        lVar16 = plVar23[0x12];
        uVar12 = plVar23[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar20,0,0);
        puVar20[1] = 0;
        *puVar20 = 10;
        *(undefined1 *)(puVar20 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar13 + 8))(lVar16);
        func_0x000107c615c0(lVar16);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar23[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar13 = plVar23[0x12];
        uVar12 = plVar23[0x10];
        (**(code **)(plVar23[0x11] + 8))(lVar13);
        func_0x000107c615c0(lVar13);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar23[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar13 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar29 = uVar12;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar22 = (code *)0x0;
        uVar24 = 0xf000000000000000;
        if (uVar12 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar10 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar10 == 0) goto LAB_101dfe8bc;
        uVar26 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
      }
      else {
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar24 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar29 = uVar24;
        if (pcVar9 == (code *)0x0) goto LAB_101dfe880;
        pcVar22 = pcVar9;
        func_0x000107c5ee30();
        uVar29 = uVar24;
        func_0x000107c61170(pcVar9);
        if (uVar12 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar26 = 0;
        uVar29 = 0xf000000000000000;
      }
      if (uVar24 >> 0x3c < 0xf) {
        if (uVar29 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar22,uVar24);
          func_0x000100de78a0(uVar26,uVar29);
          pcVar9 = pcVar22;
          func_0x000100e25fcc(pcVar22,uVar24,uVar26,uVar29);
          func_0x0001000b44c0(uVar26,uVar29);
          func_0x0001000b44c0(pcVar22,uVar24);
          func_0x0001000b44c0(uVar26,uVar29);
          func_0x0001000b44c0(pcVar22);
          if (((ulong)pcVar9 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar29 >> 0x3c) {
        func_0x0001000b44c0(pcVar22);
LAB_101dfe974:
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar29 = uVar24;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar24 = 0xf000000000000000;
          if (uVar12 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_101dfe9f8;
          }
          uVar26 = uVar12;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar9 = (code *)0x0;
            uVar29 = uVar24;
            goto joined_r0x000101dfe9b0;
          }
          pcVar9 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar29 = uVar24;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar12 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar29 = 0xf000000000000000;
          uVar26 = uVar12;
        }
        if (uVar24 >> 0x3c < 0xf) {
          if (uVar29 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar9,uVar24);
            func_0x000100de78a0(uVar26,uVar29);
            UNRECOVERED_JUMPTABLE_00 = pcVar9;
            func_0x000100e25fcc(pcVar9,uVar24,uVar26,uVar29);
            func_0x0001000b44c0(uVar26,uVar29);
            func_0x0001000b44c0(pcVar9,uVar24);
            func_0x0001000b44c0(uVar26,uVar29);
            func_0x0001000b44c0(pcVar9,uVar24);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar29 >> 0x3c) {
          func_0x0001000b44c0(pcVar9,uVar24);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar9,uVar24);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar22,uVar24);
LAB_101dfea48:
      func_0x0001000b44c0(uVar26,uVar29);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar27 = *(undefined8 *)(lVar14 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 7;
    *(undefined1 *)(puVar2 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar17);
    func_0x000107c615e8(puVar20);
    func_0x000107c61170(lVar13);
LAB_101dfb99c:
    func_0x000107c615e8(uVar27);
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar14 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb5f0; end: 101dfb6a3;  */

code * FUN_101dfb5f0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long *unaff_x22;
  long *plVar24;
  ulong uVar25;
  int *piVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = unaff_x22[5];
  lVar17 = unaff_x22[6];
  plVar19 = unaff_x22 + 2;
  func_0x0001000a8868(plVar19,lVar15);
  piVar26 = *(int **)(lVar17 + 0x10);
  iVar1 = *piVar26;
  puVar21 = (undefined8 *)(ulong)(uint)piVar26[1];
  func_0x000107c615b8();
  unaff_x22[0x1a] = (long)puVar21;
  *puVar21 = unaff_x22;
  puVar21[1] = FUN_101dfb6a4;
  UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[0x11];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar26))
              (UNRECOVERED_JUMPTABLE_00,unaff_x22[0x12],unaff_x22[0x13],1,lVar15,lVar17);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *unaff_x22;
  plVar24 = (long *)*unaff_x22;
  *(undefined8 **)(lVar17 + 0xd8) = puVar21;
  *(long **)(lVar17 + 0xe0) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xd0));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = plVar24[0x15];
  func_0x0001000834e4(plVar24 + 2);
  plVar19 = *(long **)(lVar15 + 0x18);
  lVar15 = 0x112d51300;
  puVar6 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar24[0xc] = lVar15;
  puVar3 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar24[0x1d] = (long)puVar3;
  puVar21 = puVar3;
  func_0x000100faa6a0();
  plVar24[0x1e] = (long)puVar21;
  *puVar3 = plVar24;
  puVar3[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    puVar3[0xb] = puVar21;
    puVar3[0xc] = plVar24 + 0xd;
    puVar3[9] = plVar24 + 0xc;
    puVar3[10] = &UNK_1107a6f08;
    puVar3[8] = plVar24 + 0xb;
    lVar15 = *plVar19;
    puVar3[0xd] = &PTR_DAT_1107a6e88;
    uVar12 = 0x10;
    _swift_task_alloc();
    puVar3[0xe] = uVar12;
    lVar15 = *(long *)(lVar15 + 0x50);
    puVar3[0xf] = lVar15;
    lVar15 = *(long *)(lVar15 + -8);
    puVar3[0x10] = lVar15;
    uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[0x11] = uVar13;
    plVar24 = (long *)0x70;
    _swift_task_alloc();
    puVar3[0x12] = plVar24;
    *plVar24 = (long)puVar3;
    plVar24[1] = (long)&UNK_104876614;
    plVar24[5] = uVar13;
    plVar24[6] = (long)plVar19;
    lVar17 = *(long *)(*plVar19 + 0x50);
    plVar24[7] = lVar17;
    lVar15 = 0;
    __sSqMa(0,lVar17);
    plVar24[8] = lVar15;
    lVar15 = *(long *)(lVar15 + -8);
    plVar24[9] = lVar15;
    uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[10] = uVar13;
    lVar15 = *(long *)(lVar17 + -8);
    plVar24[0xb] = lVar15;
    uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar24[0xc] = uVar13;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *plVar24;
  lVar14 = *plVar24;
  *(long **)(lVar17 + 0xf8) = plVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xe8));
  if (plVar19 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar14 + 0x70) = 0;
  puVar18 = *(undefined8 **)(lVar14 + 0x58);
  *(undefined8 **)(lVar14 + 0x100) = puVar18;
  puVar21 = puVar18;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar14 + 0x108) = puVar21;
  lVar15 = *(long *)(lVar14 + 0x70);
  func_0x000107c61174();
  puVar3 = puVar21;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    if (lVar15 != 0) goto LAB_101dfb944;
    puVar22 = *(undefined8 **)(lVar14 + 0xd8);
    uVar12 = *(undefined8 *)(lVar14 + 0xc0);
    puVar3 = puVar21;
    func_0x000107c4407c(puVar21);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    puVar7 = puVar6;
    func_0x000107c5ed80(uVar12,puVar4);
    func_0x000107c6142c(puVar6);
    puVar3 = puVar22;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar15 = *(long *)(lVar14 + 0xa0);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar15 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar28 = *(long *)(lVar14 + 0xa0);
      lVar16 = lVar15;
      func_0x000107c5ee30();
      puVar6 = puVar7;
      func_0x000107c61170(lVar15);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar15 = lVar28;
      func_0x000107c5ee30();
      puVar8 = puVar6;
      func_0x000107c61170(lVar28);
      FUN_101dffdc4();
      if ((ulong)puVar8 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar14 + 0x38);
        uVar13 = *(ulong *)(lVar14 + 0x38);
        lVar28 = *(long *)(lVar14 + 0x40);
        uVar29 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(lVar14 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar28 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar4 = puVar3;
        func_0x000107c5ee20(puVar3,puVar8);
        lVar28 = lVar16;
        func_0x000107c5ee20(lVar16,puVar7);
        lVar5 = lVar15;
        puVar9 = puVar6;
        func_0x000107c5ee20(lVar15,puVar6);
        puVar22 = puVar4;
        if ((uVar29 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar28);
        func_0x000107c61170();
        if (puVar22 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
          puVar4[1] = 0;
          *puVar4 = 10;
          *(undefined1 *)(puVar4 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar8);
        }
        else {
          lVar28 = *(long *)(lVar14 + 0xf8);
          puVar20 = *(undefined8 **)(lVar14 + 0xc0);
          puVar4 = puVar22;
          func_0x000107c5ee30(puVar22);
          func_0x000107c61170(puVar22);
          func_0x000107c5ee40(puVar20,1,puVar4,puVar9);
          if (lVar28 == 0) {
            func_0x0001000b44c0(puVar3,puVar8);
            func_0x00010006c090(puVar4,puVar9);
            func_0x00010006c090(lVar15,puVar6);
            func_0x00010006c090(lVar16,puVar7);
            func_0x0001000d224c(lVar14 + 0x48);
            uVar13 = *(ulong *)(lVar14 + 0x48);
            lVar15 = *(long *)(lVar14 + 0x50);
            uVar29 = uVar13;
            func_0x000107c614f0();
            *(ulong *)(lVar14 + 0x80) = uVar13;
            (**(code **)(*(long *)(lVar15 + 8) + 0x18))();
            func_0x000107c615e8(uVar13);
            if ((uVar29 & 1) == 0) {
              uVar12 = *(undefined8 *)(lVar14 + 0x100);
              (**(code **)(*(long *)(lVar14 + 0xb8) + 8))
                        (*(undefined8 *)(lVar14 + 0xc0),*(undefined8 *)(lVar14 + 0xb0));
              func_0x000107c615e8(uVar12);
            }
            else {
              uVar12 = *(undefined8 *)(lVar14 + 0x100);
              lVar15 = *(long *)(lVar14 + 0xb8);
              uVar2 = *(undefined8 *)(lVar14 + 0xc0);
              uVar30 = *(undefined8 *)(lVar14 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar14 + 0x108));
              func_0x000107c615e8(uVar12);
              (**(code **)(lVar15 + 8))(uVar2,uVar30);
            }
            uVar12 = *(undefined8 *)(lVar14 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xd8));
            func_0x000107c615c0(uVar12);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar14 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar14 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar20,0,0);
          puVar20[1] = 0;
          *puVar20 = 0x14;
          *(undefined1 *)(puVar20 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar3,puVar8);
          func_0x00010006c090(puVar4,puVar9);
          func_0x000107c614ac(lVar28);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 10;
        *(undefined1 *)(puVar3 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar12 = *(undefined8 *)(lVar14 + 0xd8);
      lVar28 = *(long *)(lVar14 + 0xb8);
      uVar2 = *(undefined8 *)(lVar14 + 0xc0);
      uVar30 = *(undefined8 *)(lVar14 + 0xb0);
      func_0x00010006c090(lVar15,puVar6);
      func_0x00010006c090(lVar16,puVar7);
      func_0x000107c615e8(puVar21);
      func_0x000107c615e8(puVar18);
      (**(code **)(lVar28 + 8))(uVar2,uVar30);
      goto LAB_101dfb99c;
    }
    puVar21 = puVar22;
    func_0x000107c5faec();
    puVar6 = puVar7;
    func_0x000107c61170(puVar22);
    *(undefined **)(lVar14 + 0x110) = puVar7;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar15 == 0) goto LAB_101dfbf0c;
    lVar28 = *(long *)(lVar14 + 0xa0);
    lVar16 = lVar15;
    func_0x000107c5ee30();
    puVar8 = puVar6;
    func_0x000107c61170(lVar15);
    *(long *)(lVar14 + 0x118) = lVar16;
    *(undefined **)(lVar14 + 0x120) = puVar6;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar28 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar15 = lVar28;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar28);
    *(long *)(lVar14 + 0x128) = lVar15;
    *(undefined **)(lVar14 + 0x130) = puVar8;
    plVar19 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar14 + 0x138) = plVar19;
    *plVar19 = lVar14;
    plVar19[1] = (long)FUN_101dfbf1c;
    lVar14 = *(long *)(lVar14 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar19[0xe] = lVar15;
      plVar19[0xf] = (long)puVar8;
      plVar19[0xc] = lVar16;
      plVar19[0xd] = (long)puVar6;
      plVar19[10] = (long)puVar7;
      plVar19[0xb] = lVar14;
      plVar19[9] = (long)puVar21;
      lVar15 = 0;
      func_0x000107c5ede0();
      plVar19[0x10] = lVar15;
      lVar15 = *(long *)(lVar15 + -8);
      plVar19[0x11] = lVar15;
      uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x12] = uVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar15 = plVar19[0xe];
      lVar17 = plVar19[0xf];
      uVar13 = plVar19[0xc];
      lVar14 = plVar19[0xd];
      func_0x000107c5ed80(plVar19[0x12],plVar19[9],plVar19[10]);
      func_0x000107c5ee20(uVar13,lVar14);
      func_0x000107c5ee20(lVar15,lVar17);
      lVar17 = lVar15;
      func_0x000107c5ed90();
      lVar14 = lVar17;
      func_0x000107c5ed90();
      uVar29 = uVar13;
      func_0x000107c3127c(uVar13,lVar15,lVar17,lVar14);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(uVar13);
      if ((uVar29 & 1) == 0) {
        lVar15 = plVar19[9];
        lVar17 = plVar19[10];
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar14 = lVar15;
        func_0x000107c5fadc(lVar15,lVar17);
        func_0x000107c43418(puVar7);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(puVar7);
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar15,lVar17);
        plVar19[6] = 0;
        puVar8 = puVar7;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar15);
        func_0x000107c61170(puVar7);
        lVar15 = plVar19[6];
        if (puVar8 == (undefined *)0x0) {
          lVar17 = lVar15;
          func_0x000107c61174(lVar15);
          func_0x000107c5ed30(lVar15);
          func_0x000107c61170(lVar17);
          func_0x000107c61654();
          func_0x000107c614ac(lVar15);
LAB_101dfe678:
          plVar19[3] = 0;
          plVar19[2] = 0;
          plVar19[5] = 0;
          plVar19[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar19 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar13 = 0;
          FUN_101a64068();
          uVar12 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar7 = PTR___sypN_11034f1a8;
          puVar9 = puVar8;
          func_0x000107c5f9e8(puVar8,uVar13,PTR___sypN_11034f1a8 + 8,uVar12);
          func_0x000107c61174(lVar15);
          func_0x000107c61170(puVar8);
          if (puVar9 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar9 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar19[3] = 0;
            plVar19[2] = 0;
            plVar19[5] = 0;
            plVar19[4] = 0;
          }
          else {
            lVar15 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar9);
            FUN_101aae36c(lVar15);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(puVar9);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar9 + 0x38) + lVar15 * 0x20,plVar19 + 2);
            func_0x000107c6142c(puVar9);
          }
          func_0x000107c6142c(puVar9);
          if (plVar19[5] == 0) goto LAB_101dfe680;
          uVar12 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar24 = plVar19 + 8;
          func_0x000107c6147c(plVar24,plVar19 + 2,puVar7 + 8,uVar12,6);
          if (((ulong)plVar24 & 1) != 0) {
            lVar15 = plVar19[8];
            func_0x000107c4c0a8(lVar15);
            func_0x000107c61170(lVar15);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5ed90();
        plVar19[7] = 0;
        puVar8 = puVar6;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        puVar21 = (undefined8 *)plVar19[7];
        if ((int)puVar8 == 0) {
          puVar3 = puVar21;
          func_0x000107c61174(puVar21);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar3);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar15 = plVar19[0x11];
        lVar17 = plVar19[0x12];
        uVar13 = plVar19[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
        puVar21[1] = 0;
        *puVar21 = 10;
        *(undefined1 *)(puVar21 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar15 + 8))(lVar17);
        func_0x000107c615c0(lVar17);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar19[1];
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar15 = plVar19[0x12];
        uVar13 = plVar19[0x10];
        (**(code **)(plVar19[0x11] + 8))(lVar15);
        func_0x000107c615c0(lVar15);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar19[1];
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar15 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar29 = uVar13;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar23 = (code *)0x0;
        uVar25 = 0xf000000000000000;
        if (uVar13 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar11 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar11 == 0) goto LAB_101dfe8bc;
        uVar27 = uVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar11);
      }
      else {
        pcVar10 = UNRECOVERED_JUMPTABLE_00;
        uVar25 = uVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar29 = uVar25;
        if (pcVar10 == (code *)0x0) goto LAB_101dfe880;
        pcVar23 = pcVar10;
        func_0x000107c5ee30();
        uVar29 = uVar25;
        func_0x000107c61170(pcVar10);
        if (uVar13 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar27 = 0;
        uVar29 = 0xf000000000000000;
      }
      if (uVar25 >> 0x3c < 0xf) {
        if (uVar29 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar23,uVar25);
          func_0x000100de78a0(uVar27,uVar29);
          pcVar10 = pcVar23;
          func_0x000100e25fcc(pcVar23,uVar25,uVar27,uVar29);
          func_0x0001000b44c0(uVar27,uVar29);
          func_0x0001000b44c0(pcVar23,uVar25);
          func_0x0001000b44c0(uVar27,uVar29);
          func_0x0001000b44c0(pcVar23);
          if (((ulong)pcVar10 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar29 >> 0x3c) {
        func_0x0001000b44c0(pcVar23);
LAB_101dfe974:
        pcVar10 = UNRECOVERED_JUMPTABLE_00;
        uVar29 = uVar25;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar25 = 0xf000000000000000;
          if (uVar13 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_101dfe9f8;
          }
          uVar27 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar10 = (code *)0x0;
            uVar29 = uVar25;
            goto joined_r0x000101dfe9b0;
          }
          pcVar10 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar29 = uVar25;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar13 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar29 = 0xf000000000000000;
          uVar27 = uVar13;
        }
        if (uVar25 >> 0x3c < 0xf) {
          if (uVar29 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar10,uVar25);
            func_0x000100de78a0(uVar27,uVar29);
            UNRECOVERED_JUMPTABLE_00 = pcVar10;
            func_0x000100e25fcc(pcVar10,uVar25,uVar27,uVar29);
            func_0x0001000b44c0(uVar27,uVar29);
            func_0x0001000b44c0(pcVar10,uVar25);
            func_0x0001000b44c0(uVar27,uVar29);
            func_0x0001000b44c0(pcVar10,uVar25);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar29 >> 0x3c) {
          func_0x0001000b44c0(pcVar10,uVar25);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar10,uVar25);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar23,uVar25);
LAB_101dfea48:
      func_0x0001000b44c0(uVar27,uVar29);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar12 = *(undefined8 *)(lVar14 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 7;
    *(undefined1 *)(puVar3 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar18);
    func_0x000107c615e8(puVar21);
    func_0x000107c61170(lVar15);
LAB_101dfb99c:
    func_0x000107c615e8(uVar12);
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar14 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb6a4; end: 101dfb747;  */

code * FUN_101dfb6a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x20;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  long *unaff_x22;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *unaff_x22;
  plVar22 = (long *)*unaff_x22;
  *(undefined8 *)(lVar15 + 0xd8) = param_1;
  *(long *)(lVar15 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xd0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb748;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc1a0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = plVar22[0x15];
  func_0x0001000834e4(plVar22 + 2);
  plVar17 = *(long **)(lVar13 + 0x18);
  lVar13 = 0x112d51300;
  puVar5 = &UNK_10d917f90;
  func_0x0001000285a8();
  plVar22[0xc] = lVar13;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar22[0x1d] = (long)puVar2;
  puVar19 = puVar2;
  func_0x000100faa6a0();
  plVar22[0x1e] = (long)puVar19;
  *puVar2 = plVar22;
  puVar2[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    puVar2[0xb] = puVar19;
    puVar2[0xc] = plVar22 + 0xd;
    puVar2[9] = plVar22 + 0xc;
    puVar2[10] = &UNK_1107a6f08;
    puVar2[8] = plVar22 + 0xb;
    lVar13 = *plVar17;
    puVar2[0xd] = &PTR_DAT_1107a6e88;
    uVar11 = 0x10;
    _swift_task_alloc();
    puVar2[0xe] = uVar11;
    lVar13 = *(long *)(lVar13 + 0x50);
    puVar2[0xf] = lVar13;
    lVar13 = *(long *)(lVar13 + -8);
    puVar2[0x10] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2[0x11] = uVar12;
    plVar22 = (long *)0x70;
    _swift_task_alloc();
    puVar2[0x12] = plVar22;
    *plVar22 = (long)puVar2;
    plVar22[1] = (long)&UNK_104876614;
    plVar22[5] = uVar12;
    plVar22[6] = (long)plVar17;
    lVar15 = *(long *)(*plVar17 + 0x50);
    plVar22[7] = lVar15;
    lVar13 = 0;
    __sSqMa(0,lVar15);
    plVar22[8] = lVar13;
    lVar13 = *(long *)(lVar13 + -8);
    plVar22[9] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar22[10] = uVar12;
    lVar13 = *(long *)(lVar15 + -8);
    plVar22[0xb] = lVar13;
    uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar22[0xc] = uVar12;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *plVar22;
  lVar23 = *plVar22;
  *(long **)(lVar15 + 0xf8) = plVar17;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xe8));
  if (plVar17 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar23 + 0x70) = 0;
  puVar16 = *(undefined8 **)(lVar23 + 0x58);
  *(undefined8 **)(lVar23 + 0x100) = puVar16;
  puVar19 = puVar16;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar23 + 0x108) = puVar19;
  lVar13 = *(long *)(lVar23 + 0x70);
  func_0x000107c61174();
  puVar2 = puVar19;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar13 != 0) goto LAB_101dfb944;
    puVar20 = *(undefined8 **)(lVar23 + 0xd8);
    uVar11 = *(undefined8 *)(lVar23 + 0xc0);
    puVar2 = puVar19;
    func_0x000107c4407c(puVar19);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    puVar6 = puVar5;
    func_0x000107c5ed80(uVar11,puVar3);
    func_0x000107c6142c(puVar5);
    puVar2 = puVar20;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar13 = *(long *)(lVar23 + 0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar26 = *(long *)(lVar23 + 0xa0);
      lVar14 = lVar13;
      func_0x000107c5ee30();
      puVar5 = puVar6;
      func_0x000107c61170(lVar13);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar13 = lVar26;
      func_0x000107c5ee30();
      puVar7 = puVar5;
      func_0x000107c61170(lVar26);
      FUN_101dffdc4();
      if ((ulong)puVar7 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar23 + 0x38);
        uVar12 = *(ulong *)(lVar23 + 0x38);
        lVar26 = *(long *)(lVar23 + 0x40);
        uVar27 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar23 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar26 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar3 = puVar2;
        func_0x000107c5ee20(puVar2,puVar7);
        lVar26 = lVar14;
        func_0x000107c5ee20(lVar14,puVar6);
        lVar4 = lVar13;
        puVar8 = puVar5;
        func_0x000107c5ee20(lVar13,puVar5);
        puVar20 = puVar3;
        if ((uVar27 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar26);
        func_0x000107c61170();
        if (puVar20 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
          puVar3[1] = 0;
          *puVar3 = 10;
          *(undefined1 *)(puVar3 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
        }
        else {
          lVar26 = *(long *)(lVar23 + 0xf8);
          puVar18 = *(undefined8 **)(lVar23 + 0xc0);
          puVar3 = puVar20;
          func_0x000107c5ee30(puVar20);
          func_0x000107c61170(puVar20);
          func_0x000107c5ee40(puVar18,1,puVar3,puVar8);
          if (lVar26 == 0) {
            func_0x0001000b44c0(puVar2,puVar7);
            func_0x00010006c090(puVar3,puVar8);
            func_0x00010006c090(lVar13,puVar5);
            func_0x00010006c090(lVar14,puVar6);
            func_0x0001000d224c(lVar23 + 0x48);
            uVar12 = *(ulong *)(lVar23 + 0x48);
            lVar13 = *(long *)(lVar23 + 0x50);
            uVar27 = uVar12;
            func_0x000107c614f0();
            *(ulong *)(lVar23 + 0x80) = uVar12;
            (**(code **)(*(long *)(lVar13 + 8) + 0x18))();
            func_0x000107c615e8(uVar12);
            if ((uVar27 & 1) == 0) {
              uVar11 = *(undefined8 *)(lVar23 + 0x100);
              (**(code **)(*(long *)(lVar23 + 0xb8) + 8))
                        (*(undefined8 *)(lVar23 + 0xc0),*(undefined8 *)(lVar23 + 0xb0));
              func_0x000107c615e8(uVar11);
            }
            else {
              uVar11 = *(undefined8 *)(lVar23 + 0x100);
              lVar13 = *(long *)(lVar23 + 0xb8);
              uVar1 = *(undefined8 *)(lVar23 + 0xc0);
              uVar28 = *(undefined8 *)(lVar23 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar23 + 0x108));
              func_0x000107c615e8(uVar11);
              (**(code **)(lVar13 + 8))(uVar1,uVar28);
            }
            uVar11 = *(undefined8 *)(lVar23 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar23 + 0xd8));
            func_0x000107c615c0(uVar11);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar23 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar18,0,0);
          puVar18[1] = 0;
          *puVar18 = 0x14;
          *(undefined1 *)(puVar18 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
          func_0x00010006c090(puVar3,puVar8);
          func_0x000107c614ac(lVar26);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
        puVar2[1] = 0;
        *puVar2 = 10;
        *(undefined1 *)(puVar2 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar11 = *(undefined8 *)(lVar23 + 0xd8);
      lVar26 = *(long *)(lVar23 + 0xb8);
      uVar1 = *(undefined8 *)(lVar23 + 0xc0);
      uVar28 = *(undefined8 *)(lVar23 + 0xb0);
      func_0x00010006c090(lVar13,puVar5);
      func_0x00010006c090(lVar14,puVar6);
      func_0x000107c615e8(puVar19);
      func_0x000107c615e8(puVar16);
      (**(code **)(lVar26 + 8))(uVar1,uVar28);
      goto LAB_101dfb99c;
    }
    puVar19 = puVar20;
    func_0x000107c5faec();
    puVar5 = puVar6;
    func_0x000107c61170(puVar20);
    *(undefined **)(lVar23 + 0x110) = puVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar13 == 0) goto LAB_101dfbf0c;
    lVar26 = *(long *)(lVar23 + 0xa0);
    lVar14 = lVar13;
    func_0x000107c5ee30();
    puVar7 = puVar5;
    func_0x000107c61170(lVar13);
    *(long *)(lVar23 + 0x118) = lVar14;
    *(undefined **)(lVar23 + 0x120) = puVar5;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar26 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar13 = lVar26;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar26);
    *(long *)(lVar23 + 0x128) = lVar13;
    *(undefined **)(lVar23 + 0x130) = puVar7;
    plVar22 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar23 + 0x138) = plVar22;
    *plVar22 = lVar23;
    plVar22[1] = (long)FUN_101dfbf1c;
    lVar23 = *(long *)(lVar23 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar22[0xe] = lVar13;
      plVar22[0xf] = (long)puVar7;
      plVar22[0xc] = lVar14;
      plVar22[0xd] = (long)puVar5;
      plVar22[10] = (long)puVar6;
      plVar22[0xb] = lVar23;
      plVar22[9] = (long)puVar19;
      lVar13 = 0;
      func_0x000107c5ede0();
      plVar22[0x10] = lVar13;
      lVar13 = *(long *)(lVar13 + -8);
      plVar22[0x11] = lVar13;
      uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar22[0x12] = uVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = plVar22[0xe];
      lVar15 = plVar22[0xf];
      uVar12 = plVar22[0xc];
      lVar23 = plVar22[0xd];
      func_0x000107c5ed80(plVar22[0x12],plVar22[9],plVar22[10]);
      func_0x000107c5ee20(uVar12,lVar23);
      func_0x000107c5ee20(lVar13,lVar15);
      lVar15 = lVar13;
      func_0x000107c5ed90();
      lVar23 = lVar15;
      func_0x000107c5ed90();
      uVar27 = uVar12;
      func_0x000107c3127c(uVar12,lVar13,lVar15,lVar23);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar12);
      if ((uVar27 & 1) == 0) {
        lVar13 = plVar22[9];
        lVar15 = plVar22[10];
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar23 = lVar13;
        func_0x000107c5fadc(lVar13,lVar15);
        func_0x000107c43418(puVar6);
        func_0x000107c61170(lVar23);
        func_0x000107c61170(puVar6);
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar13,lVar15);
        plVar22[6] = 0;
        puVar7 = puVar6;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        func_0x000107c61170(puVar6);
        lVar13 = plVar22[6];
        if (puVar7 == (undefined *)0x0) {
          lVar15 = lVar13;
          func_0x000107c61174(lVar13);
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar15);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
LAB_101dfe678:
          plVar22[3] = 0;
          plVar22[2] = 0;
          plVar22[5] = 0;
          plVar22[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar22 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar12 = 0;
          FUN_101a64068();
          uVar11 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar6 = PTR___sypN_11034f1a8;
          puVar8 = puVar7;
          func_0x000107c5f9e8(puVar7,uVar12,PTR___sypN_11034f1a8 + 8,uVar11);
          func_0x000107c61174(lVar13);
          func_0x000107c61170(puVar7);
          if (puVar8 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar8 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar22[3] = 0;
            plVar22[2] = 0;
            plVar22[5] = 0;
            plVar22[4] = 0;
          }
          else {
            lVar13 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar8);
            FUN_101aae36c(lVar13);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(puVar8);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar8 + 0x38) + lVar13 * 0x20,plVar22 + 2);
            func_0x000107c6142c(puVar8);
          }
          func_0x000107c6142c(puVar8);
          if (plVar22[5] == 0) goto LAB_101dfe680;
          uVar11 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar17 = plVar22 + 8;
          func_0x000107c6147c(plVar17,plVar22 + 2,puVar6 + 8,uVar11,6);
          if (((ulong)plVar17 & 1) != 0) {
            lVar13 = plVar22[8];
            func_0x000107c4c0a8(lVar13);
            func_0x000107c61170(lVar13);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        plVar22[7] = 0;
        puVar7 = puVar5;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar19 = (undefined8 *)plVar22[7];
        if ((int)puVar7 == 0) {
          puVar2 = puVar19;
          func_0x000107c61174(puVar19);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar2);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar13 = plVar22[0x11];
        lVar15 = plVar22[0x12];
        uVar12 = plVar22[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
        puVar19[1] = 0;
        *puVar19 = 10;
        *(undefined1 *)(puVar19 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar13 + 8))(lVar15);
        func_0x000107c615c0(lVar15);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar22[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar13 = plVar22[0x12];
        uVar12 = plVar22[0x10];
        (**(code **)(plVar22[0x11] + 8))(lVar13);
        func_0x000107c615c0(lVar13);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar22[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar13 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar27 = uVar12;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar21 = (code *)0x0;
        uVar24 = 0xf000000000000000;
        if (uVar12 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar10 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar10 == 0) goto LAB_101dfe8bc;
        uVar25 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
      }
      else {
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar24 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar27 = uVar24;
        if (pcVar9 == (code *)0x0) goto LAB_101dfe880;
        pcVar21 = pcVar9;
        func_0x000107c5ee30();
        uVar27 = uVar24;
        func_0x000107c61170(pcVar9);
        if (uVar12 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar25 = 0;
        uVar27 = 0xf000000000000000;
      }
      if (uVar24 >> 0x3c < 0xf) {
        if (uVar27 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar21,uVar24);
          func_0x000100de78a0(uVar25,uVar27);
          pcVar9 = pcVar21;
          func_0x000100e25fcc(pcVar21,uVar24,uVar25,uVar27);
          func_0x0001000b44c0(uVar25,uVar27);
          func_0x0001000b44c0(pcVar21,uVar24);
          func_0x0001000b44c0(uVar25,uVar27);
          func_0x0001000b44c0(pcVar21);
          if (((ulong)pcVar9 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar27 >> 0x3c) {
        func_0x0001000b44c0(pcVar21);
LAB_101dfe974:
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar27 = uVar24;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar24 = 0xf000000000000000;
          if (uVar12 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_101dfe9f8;
          }
          uVar25 = uVar12;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar9 = (code *)0x0;
            uVar27 = uVar24;
            goto joined_r0x000101dfe9b0;
          }
          pcVar9 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar27 = uVar24;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar12 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar27 = 0xf000000000000000;
          uVar25 = uVar12;
        }
        if (uVar24 >> 0x3c < 0xf) {
          if (uVar27 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar9,uVar24);
            func_0x000100de78a0(uVar25,uVar27);
            UNRECOVERED_JUMPTABLE_00 = pcVar9;
            func_0x000100e25fcc(pcVar9,uVar24,uVar25,uVar27);
            func_0x0001000b44c0(uVar25,uVar27);
            func_0x0001000b44c0(pcVar9,uVar24);
            func_0x0001000b44c0(uVar25,uVar27);
            func_0x0001000b44c0(pcVar9,uVar24);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar27 >> 0x3c) {
          func_0x0001000b44c0(pcVar9,uVar24);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar9,uVar24);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar21,uVar24);
LAB_101dfea48:
      func_0x0001000b44c0(uVar25,uVar27);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar11 = *(undefined8 *)(lVar23 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 7;
    *(undefined1 *)(puVar2 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar16);
    func_0x000107c615e8(puVar19);
    func_0x000107c61170(lVar13);
LAB_101dfb99c:
    func_0x000107c615e8(uVar11);
    func_0x000107c615c0(*(undefined8 *)(lVar23 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb748; end: 101dfb813;  */

code * FUN_101dfb748(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  code *pcVar22;
  long *unaff_x22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = unaff_x22[0x15];
  func_0x0001000834e4(unaff_x22 + 2);
  plVar18 = *(long **)(lVar17 + 0x18);
  lVar17 = 0x112d51300;
  puVar5 = &UNK_10d917f90;
  func_0x0001000285a8();
  unaff_x22[0xc] = lVar17;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1d] = (long)puVar2;
  puVar20 = puVar2;
  func_0x000100faa6a0();
  unaff_x22[0x1e] = (long)puVar20;
  *puVar2 = unaff_x22;
  puVar2[1] = FUN_101dfb814;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    puVar2[0xb] = puVar20;
    puVar2[0xc] = unaff_x22 + 0xd;
    puVar2[9] = unaff_x22 + 0xc;
    puVar2[10] = &UNK_1107a6f08;
    puVar2[8] = unaff_x22 + 0xb;
    lVar17 = *plVar18;
    puVar2[0xd] = &PTR_DAT_1107a6e88;
    uVar11 = 0x10;
    _swift_task_alloc();
    puVar2[0xe] = uVar11;
    lVar17 = *(long *)(lVar17 + 0x50);
    puVar2[0xf] = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    puVar2[0x10] = lVar17;
    uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2[0x11] = uVar12;
    plVar13 = (long *)0x70;
    _swift_task_alloc();
    puVar2[0x12] = plVar13;
    *plVar13 = (long)puVar2;
    plVar13[1] = (long)&UNK_104876614;
    plVar13[5] = uVar12;
    plVar13[6] = (long)plVar18;
    lVar14 = *(long *)(*plVar18 + 0x50);
    plVar13[7] = lVar14;
    lVar17 = 0;
    __sSqMa(0,lVar14);
    plVar13[8] = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    plVar13[9] = lVar17;
    uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar13[10] = uVar12;
    lVar17 = *(long *)(lVar14 + -8);
    plVar13[0xb] = lVar17;
    uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar13[0xc] = uVar12;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *unaff_x22;
  lVar23 = *unaff_x22;
  *(long **)(lVar14 + 0xf8) = plVar18;
  func_0x000107c615c0(*(undefined8 *)(lVar14 + 0xe8));
  if (plVar18 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar23 + 0x70) = 0;
  puVar16 = *(undefined8 **)(lVar23 + 0x58);
  *(undefined8 **)(lVar23 + 0x100) = puVar16;
  puVar20 = puVar16;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar23 + 0x108) = puVar20;
  lVar17 = *(long *)(lVar23 + 0x70);
  func_0x000107c61174();
  puVar2 = puVar20;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar17 != 0) goto LAB_101dfb944;
    puVar21 = *(undefined8 **)(lVar23 + 0xd8);
    uVar11 = *(undefined8 *)(lVar23 + 0xc0);
    puVar2 = puVar20;
    func_0x000107c4407c(puVar20);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    puVar6 = puVar5;
    func_0x000107c5ed80(uVar11,puVar3);
    func_0x000107c6142c(puVar5);
    puVar2 = puVar21;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar17 = *(long *)(lVar23 + 0xa0);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar26 = *(long *)(lVar23 + 0xa0);
      lVar15 = lVar17;
      func_0x000107c5ee30();
      puVar5 = puVar6;
      func_0x000107c61170(lVar17);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar17 = lVar26;
      func_0x000107c5ee30();
      puVar7 = puVar5;
      func_0x000107c61170(lVar26);
      FUN_101dffdc4();
      if ((ulong)puVar7 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar23 + 0x38);
        uVar12 = *(ulong *)(lVar23 + 0x38);
        lVar26 = *(long *)(lVar23 + 0x40);
        uVar27 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar23 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar26 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar3 = puVar2;
        func_0x000107c5ee20(puVar2,puVar7);
        lVar26 = lVar15;
        func_0x000107c5ee20(lVar15,puVar6);
        lVar4 = lVar17;
        puVar8 = puVar5;
        func_0x000107c5ee20(lVar17,puVar5);
        puVar21 = puVar3;
        if ((uVar27 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar26);
        func_0x000107c61170();
        if (puVar21 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
          puVar3[1] = 0;
          *puVar3 = 10;
          *(undefined1 *)(puVar3 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
        }
        else {
          lVar26 = *(long *)(lVar23 + 0xf8);
          puVar19 = *(undefined8 **)(lVar23 + 0xc0);
          puVar3 = puVar21;
          func_0x000107c5ee30(puVar21);
          func_0x000107c61170(puVar21);
          func_0x000107c5ee40(puVar19,1,puVar3,puVar8);
          if (lVar26 == 0) {
            func_0x0001000b44c0(puVar2,puVar7);
            func_0x00010006c090(puVar3,puVar8);
            func_0x00010006c090(lVar17,puVar5);
            func_0x00010006c090(lVar15,puVar6);
            func_0x0001000d224c(lVar23 + 0x48);
            uVar12 = *(ulong *)(lVar23 + 0x48);
            lVar17 = *(long *)(lVar23 + 0x50);
            uVar27 = uVar12;
            func_0x000107c614f0();
            *(ulong *)(lVar23 + 0x80) = uVar12;
            (**(code **)(*(long *)(lVar17 + 8) + 0x18))();
            func_0x000107c615e8(uVar12);
            if ((uVar27 & 1) == 0) {
              uVar11 = *(undefined8 *)(lVar23 + 0x100);
              (**(code **)(*(long *)(lVar23 + 0xb8) + 8))
                        (*(undefined8 *)(lVar23 + 0xc0),*(undefined8 *)(lVar23 + 0xb0));
              func_0x000107c615e8(uVar11);
            }
            else {
              uVar11 = *(undefined8 *)(lVar23 + 0x100);
              lVar17 = *(long *)(lVar23 + 0xb8);
              uVar1 = *(undefined8 *)(lVar23 + 0xc0);
              uVar28 = *(undefined8 *)(lVar23 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar23 + 0x108));
              func_0x000107c615e8(uVar11);
              (**(code **)(lVar17 + 8))(uVar1,uVar28);
            }
            uVar11 = *(undefined8 *)(lVar23 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar23 + 0xd8));
            func_0x000107c615c0(uVar11);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar23 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
          puVar19[1] = 0;
          *puVar19 = 0x14;
          *(undefined1 *)(puVar19 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,puVar7);
          func_0x00010006c090(puVar3,puVar8);
          func_0x000107c614ac(lVar26);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
        puVar2[1] = 0;
        *puVar2 = 10;
        *(undefined1 *)(puVar2 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar11 = *(undefined8 *)(lVar23 + 0xd8);
      lVar26 = *(long *)(lVar23 + 0xb8);
      uVar1 = *(undefined8 *)(lVar23 + 0xc0);
      uVar28 = *(undefined8 *)(lVar23 + 0xb0);
      func_0x00010006c090(lVar17,puVar5);
      func_0x00010006c090(lVar15,puVar6);
      func_0x000107c615e8(puVar20);
      func_0x000107c615e8(puVar16);
      (**(code **)(lVar26 + 8))(uVar1,uVar28);
      goto LAB_101dfb99c;
    }
    puVar20 = puVar21;
    func_0x000107c5faec();
    puVar5 = puVar6;
    func_0x000107c61170(puVar21);
    *(undefined **)(lVar23 + 0x110) = puVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar17 == 0) goto LAB_101dfbf0c;
    lVar26 = *(long *)(lVar23 + 0xa0);
    lVar15 = lVar17;
    func_0x000107c5ee30();
    puVar7 = puVar5;
    func_0x000107c61170(lVar17);
    *(long *)(lVar23 + 0x118) = lVar15;
    *(undefined **)(lVar23 + 0x120) = puVar5;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar26 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar17 = lVar26;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar26);
    *(long *)(lVar23 + 0x128) = lVar17;
    *(undefined **)(lVar23 + 0x130) = puVar7;
    plVar18 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar23 + 0x138) = plVar18;
    *plVar18 = lVar23;
    plVar18[1] = (long)FUN_101dfbf1c;
    lVar23 = *(long *)(lVar23 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0xe] = lVar17;
      plVar18[0xf] = (long)puVar7;
      plVar18[0xc] = lVar15;
      plVar18[0xd] = (long)puVar5;
      plVar18[10] = (long)puVar6;
      plVar18[0xb] = lVar23;
      plVar18[9] = (long)puVar20;
      lVar17 = 0;
      func_0x000107c5ede0();
      plVar18[0x10] = lVar17;
      lVar17 = *(long *)(lVar17 + -8);
      plVar18[0x11] = lVar17;
      uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar18[0x12] = uVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = plVar18[0xe];
      lVar14 = plVar18[0xf];
      uVar12 = plVar18[0xc];
      lVar23 = plVar18[0xd];
      func_0x000107c5ed80(plVar18[0x12],plVar18[9],plVar18[10]);
      func_0x000107c5ee20(uVar12,lVar23);
      func_0x000107c5ee20(lVar17,lVar14);
      lVar14 = lVar17;
      func_0x000107c5ed90();
      lVar23 = lVar14;
      func_0x000107c5ed90();
      uVar27 = uVar12;
      func_0x000107c3127c(uVar12,lVar17,lVar14,lVar23);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(uVar12);
      if ((uVar27 & 1) == 0) {
        lVar17 = plVar18[9];
        lVar14 = plVar18[10];
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar23 = lVar17;
        func_0x000107c5fadc(lVar17,lVar14);
        func_0x000107c43418(puVar6);
        func_0x000107c61170(lVar23);
        func_0x000107c61170(puVar6);
        puVar6 = puVar5;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar17,lVar14);
        plVar18[6] = 0;
        puVar7 = puVar6;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(puVar6);
        lVar17 = plVar18[6];
        if (puVar7 == (undefined *)0x0) {
          lVar14 = lVar17;
          func_0x000107c61174(lVar17);
          func_0x000107c5ed30(lVar17);
          func_0x000107c61170(lVar14);
          func_0x000107c61654();
          func_0x000107c614ac(lVar17);
LAB_101dfe678:
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar18 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar12 = 0;
          FUN_101a64068();
          uVar11 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar6 = PTR___sypN_11034f1a8;
          puVar8 = puVar7;
          func_0x000107c5f9e8(puVar7,uVar12,PTR___sypN_11034f1a8 + 8,uVar11);
          func_0x000107c61174(lVar17);
          func_0x000107c61170(puVar7);
          if (puVar8 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar8 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar18[3] = 0;
            plVar18[2] = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
          }
          else {
            lVar17 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar8);
            FUN_101aae36c(lVar17);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(puVar8);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar8 + 0x38) + lVar17 * 0x20,plVar18 + 2);
            func_0x000107c6142c(puVar8);
          }
          func_0x000107c6142c(puVar8);
          if (plVar18[5] == 0) goto LAB_101dfe680;
          uVar11 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar13 = plVar18 + 8;
          func_0x000107c6147c(plVar13,plVar18 + 2,puVar6 + 8,uVar11,6);
          if (((ulong)plVar13 & 1) != 0) {
            lVar17 = plVar18[8];
            func_0x000107c4c0a8(lVar17);
            func_0x000107c61170(lVar17);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        plVar18[7] = 0;
        puVar7 = puVar5;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar20 = (undefined8 *)plVar18[7];
        if ((int)puVar7 == 0) {
          puVar2 = puVar20;
          func_0x000107c61174(puVar20);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar2);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar17 = plVar18[0x11];
        lVar14 = plVar18[0x12];
        uVar12 = plVar18[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar20,0,0);
        puVar20[1] = 0;
        *puVar20 = 10;
        *(undefined1 *)(puVar20 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar17 + 8))(lVar14);
        func_0x000107c615c0(lVar14);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar18[1];
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar17 = plVar18[0x12];
        uVar12 = plVar18[0x10];
        (**(code **)(plVar18[0x11] + 8))(lVar17);
        func_0x000107c615c0(lVar17);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar18[1];
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar17 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar27 = uVar12;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar22 = (code *)0x0;
        uVar24 = 0xf000000000000000;
        if (uVar12 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar10 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar10 == 0) goto LAB_101dfe8bc;
        uVar25 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
      }
      else {
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar24 = uVar12;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar27 = uVar24;
        if (pcVar9 == (code *)0x0) goto LAB_101dfe880;
        pcVar22 = pcVar9;
        func_0x000107c5ee30();
        uVar27 = uVar24;
        func_0x000107c61170(pcVar9);
        if (uVar12 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar25 = 0;
        uVar27 = 0xf000000000000000;
      }
      if (uVar24 >> 0x3c < 0xf) {
        if (uVar27 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar22,uVar24);
          func_0x000100de78a0(uVar25,uVar27);
          pcVar9 = pcVar22;
          func_0x000100e25fcc(pcVar22,uVar24,uVar25,uVar27);
          func_0x0001000b44c0(uVar25,uVar27);
          func_0x0001000b44c0(pcVar22,uVar24);
          func_0x0001000b44c0(uVar25,uVar27);
          func_0x0001000b44c0(pcVar22);
          if (((ulong)pcVar9 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar27 >> 0x3c) {
        func_0x0001000b44c0(pcVar22);
LAB_101dfe974:
        pcVar9 = UNRECOVERED_JUMPTABLE_00;
        uVar27 = uVar24;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar24 = 0xf000000000000000;
          if (uVar12 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_101dfe9f8;
          }
          uVar25 = uVar12;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar9 = (code *)0x0;
            uVar27 = uVar24;
            goto joined_r0x000101dfe9b0;
          }
          pcVar9 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar27 = uVar24;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar12 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar27 = 0xf000000000000000;
          uVar25 = uVar12;
        }
        if (uVar24 >> 0x3c < 0xf) {
          if (uVar27 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar9,uVar24);
            func_0x000100de78a0(uVar25,uVar27);
            UNRECOVERED_JUMPTABLE_00 = pcVar9;
            func_0x000100e25fcc(pcVar9,uVar24,uVar25,uVar27);
            func_0x0001000b44c0(uVar25,uVar27);
            func_0x0001000b44c0(pcVar9,uVar24);
            func_0x0001000b44c0(uVar25,uVar27);
            func_0x0001000b44c0(pcVar9,uVar24);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar27 >> 0x3c) {
          func_0x0001000b44c0(pcVar9,uVar24);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar9,uVar24);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar22,uVar24);
LAB_101dfea48:
      func_0x0001000b44c0(uVar25,uVar27);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar11 = *(undefined8 *)(lVar23 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 7;
    *(undefined1 *)(puVar2 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar16);
    func_0x000107c615e8(puVar20);
    func_0x000107c61170(lVar17);
LAB_101dfb99c:
    func_0x000107c615e8(uVar11);
    func_0x000107c615c0(*(undefined8 *)(lVar23 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb814; end: 101dfb8b3;  */

code * FUN_101dfb814(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  long *unaff_x22;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *unaff_x22;
  lVar22 = *unaff_x22;
  *(long *)(lVar14 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar14 + 0xe8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101dfb8b4;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101dfc208;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(lVar22 + 0x70) = 0;
  puVar16 = *(undefined8 **)(lVar22 + 0x58);
  *(undefined8 **)(lVar22 + 0x100) = puVar16;
  puVar19 = puVar16;
  func_0x000107c40984();
  func_0x000107c61180();
  *(undefined8 **)(lVar22 + 0x108) = puVar19;
  lVar13 = *(long *)(lVar22 + 0x70);
  func_0x000107c61174();
  puVar1 = puVar19;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar1 == (undefined8 *)0x0) {
    if (lVar13 != 0) goto LAB_101dfb944;
    puVar20 = *(undefined8 **)(lVar22 + 0xd8);
    uVar17 = *(undefined8 *)(lVar22 + 0xc0);
    puVar1 = puVar19;
    func_0x000107c4407c(puVar19);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
    uVar5 = param_2;
    func_0x000107c5ed80(uVar17,puVar2);
    func_0x000107c6142c(param_2);
    puVar1 = puVar20;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar13 = *(long *)(lVar22 + 0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar26 = *(long *)(lVar22 + 0xa0);
      lVar15 = lVar13;
      func_0x000107c5ee30();
      uVar27 = uVar5;
      func_0x000107c61170(lVar13);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar13 = lVar26;
      func_0x000107c5ee30();
      uVar23 = uVar27;
      func_0x000107c61170(lVar26);
      FUN_101dffdc4();
      if (uVar23 >> 0x3c < 0xf) {
        func_0x0001000d224c(lVar22 + 0x38);
        uVar12 = *(ulong *)(lVar22 + 0x38);
        lVar26 = *(long *)(lVar22 + 0x40);
        uVar24 = uVar12;
        func_0x000107c614f0();
        *(ulong *)(lVar22 + 0x78) = uVar12;
        (**(code **)(*(long *)(lVar26 + 8) + 0x28))();
        func_0x000107c615e8(uVar12);
        puVar2 = puVar1;
        func_0x000107c5ee20(puVar1,uVar23);
        lVar26 = lVar15;
        func_0x000107c5ee20(lVar15,uVar5);
        lVar4 = lVar13;
        uVar12 = uVar27;
        func_0x000107c5ee20(lVar13,uVar27);
        puVar20 = puVar2;
        if ((uVar24 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar26);
        func_0x000107c61170();
        if (puVar20 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
          puVar2[1] = 0;
          *puVar2 = 10;
          *(undefined1 *)(puVar2 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar1,uVar23);
        }
        else {
          lVar26 = *(long *)(lVar22 + 0xf8);
          puVar18 = *(undefined8 **)(lVar22 + 0xc0);
          puVar2 = puVar20;
          func_0x000107c5ee30(puVar20);
          func_0x000107c61170(puVar20);
          func_0x000107c5ee40(puVar18,1,puVar2,uVar12);
          if (lVar26 == 0) {
            func_0x0001000b44c0(puVar1,uVar23);
            func_0x00010006c090(puVar2,uVar12);
            func_0x00010006c090(lVar13,uVar27);
            func_0x00010006c090(lVar15,uVar5);
            func_0x0001000d224c(lVar22 + 0x48);
            uVar5 = *(ulong *)(lVar22 + 0x48);
            lVar13 = *(long *)(lVar22 + 0x50);
            uVar27 = uVar5;
            func_0x000107c614f0();
            *(ulong *)(lVar22 + 0x80) = uVar5;
            (**(code **)(*(long *)(lVar13 + 8) + 0x18))();
            func_0x000107c615e8(uVar5);
            if ((uVar27 & 1) == 0) {
              uVar17 = *(undefined8 *)(lVar22 + 0x100);
              (**(code **)(*(long *)(lVar22 + 0xb8) + 8))
                        (*(undefined8 *)(lVar22 + 0xc0),*(undefined8 *)(lVar22 + 0xb0));
              func_0x000107c615e8(uVar17);
            }
            else {
              uVar17 = *(undefined8 *)(lVar22 + 0x100);
              lVar13 = *(long *)(lVar22 + 0xb8);
              uVar25 = *(undefined8 *)(lVar22 + 0xc0);
              uVar28 = *(undefined8 *)(lVar22 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(lVar22 + 0x108));
              func_0x000107c615e8(uVar17);
              (**(code **)(lVar13 + 8))(uVar25,uVar28);
            }
            uVar17 = *(undefined8 *)(lVar22 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(lVar22 + 0xd8));
            func_0x000107c615c0(uVar17);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar22 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar22 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar18,0,0);
          puVar18[1] = 0;
          *puVar18 = 0x14;
          *(undefined1 *)(puVar18 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar1,uVar23);
          func_0x00010006c090(puVar2,uVar12);
          func_0x000107c614ac(lVar26);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
        puVar1[1] = 0;
        *puVar1 = 10;
        *(undefined1 *)(puVar1 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar25 = *(undefined8 *)(lVar22 + 0xd8);
      lVar26 = *(long *)(lVar22 + 0xb8);
      uVar17 = *(undefined8 *)(lVar22 + 0xc0);
      uVar28 = *(undefined8 *)(lVar22 + 0xb0);
      func_0x00010006c090(lVar13,uVar27);
      func_0x00010006c090(lVar15,uVar5);
      func_0x000107c615e8(puVar19);
      func_0x000107c615e8(puVar16);
      (**(code **)(lVar26 + 8))(uVar17,uVar28);
      goto LAB_101dfb99c;
    }
    puVar19 = puVar20;
    func_0x000107c5faec();
    uVar27 = uVar5;
    func_0x000107c61170(puVar20);
    *(ulong *)(lVar22 + 0x110) = uVar5;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar13 == 0) goto LAB_101dfbf0c;
    lVar26 = *(long *)(lVar22 + 0xa0);
    lVar15 = lVar13;
    func_0x000107c5ee30();
    uVar23 = uVar27;
    func_0x000107c61170(lVar13);
    *(long *)(lVar22 + 0x118) = lVar15;
    *(ulong *)(lVar22 + 0x120) = uVar27;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar26 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar13 = lVar26;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar26);
    *(long *)(lVar22 + 0x128) = lVar13;
    *(ulong *)(lVar22 + 0x130) = uVar23;
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar22 + 0x138) = plVar3;
    *plVar3 = lVar22;
    plVar3[1] = (long)FUN_101dfbf1c;
    lVar22 = *(long *)(lVar22 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[0xe] = lVar13;
      plVar3[0xf] = uVar23;
      plVar3[0xc] = lVar15;
      plVar3[0xd] = uVar27;
      plVar3[10] = uVar5;
      plVar3[0xb] = lVar22;
      plVar3[9] = (long)puVar19;
      lVar13 = 0;
      func_0x000107c5ede0();
      plVar3[0x10] = lVar13;
      lVar13 = *(long *)(lVar13 + -8);
      plVar3[0x11] = lVar13;
      uVar5 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x12] = uVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = plVar3[0xe];
      lVar14 = plVar3[0xf];
      uVar5 = plVar3[0xc];
      lVar22 = plVar3[0xd];
      func_0x000107c5ed80(plVar3[0x12],plVar3[9],plVar3[10]);
      func_0x000107c5ee20(uVar5,lVar22);
      func_0x000107c5ee20(lVar13,lVar14);
      lVar14 = lVar13;
      func_0x000107c5ed90();
      lVar22 = lVar14;
      func_0x000107c5ed90();
      uVar27 = uVar5;
      func_0x000107c3127c(uVar5,lVar13,lVar14,lVar22);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar5);
      if ((uVar27 & 1) == 0) {
        lVar13 = plVar3[9];
        lVar14 = plVar3[10];
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar22 = lVar13;
        func_0x000107c5fadc(lVar13,lVar14);
        func_0x000107c43418(puVar7);
        func_0x000107c61170(lVar22);
        func_0x000107c61170(puVar7);
        puVar7 = puVar6;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar13,lVar14);
        plVar3[6] = 0;
        puVar8 = puVar7;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        func_0x000107c61170(puVar7);
        lVar13 = plVar3[6];
        if (puVar8 == (undefined *)0x0) {
          lVar14 = lVar13;
          func_0x000107c61174(lVar13);
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar14);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
LAB_101dfe678:
          plVar3[3] = 0;
          plVar3[2] = 0;
          plVar3[5] = 0;
          plVar3[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar3 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar5 = 0;
          FUN_101a64068();
          uVar17 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar7 = PTR___sypN_11034f1a8;
          puVar9 = puVar8;
          func_0x000107c5f9e8(puVar8,uVar5,PTR___sypN_11034f1a8 + 8,uVar17);
          func_0x000107c61174(lVar13);
          func_0x000107c61170(puVar8);
          if (puVar9 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar9 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar3[3] = 0;
            plVar3[2] = 0;
            plVar3[5] = 0;
            plVar3[4] = 0;
          }
          else {
            lVar13 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar9);
            FUN_101aae36c(lVar13);
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(puVar9);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar9 + 0x38) + lVar13 * 0x20,plVar3 + 2);
            func_0x000107c6142c(puVar9);
          }
          func_0x000107c6142c(puVar9);
          if (plVar3[5] == 0) goto LAB_101dfe680;
          uVar17 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar10 = plVar3 + 8;
          func_0x000107c6147c(plVar10,plVar3 + 2,puVar7 + 8,uVar17,6);
          if (((ulong)plVar10 & 1) != 0) {
            lVar13 = plVar3[8];
            func_0x000107c4c0a8(lVar13);
            func_0x000107c61170(lVar13);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5ed90();
        plVar3[7] = 0;
        puVar8 = puVar6;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        puVar19 = (undefined8 *)plVar3[7];
        if ((int)puVar8 == 0) {
          puVar1 = puVar19;
          func_0x000107c61174(puVar19);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar1);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar13 = plVar3[0x11];
        lVar14 = plVar3[0x12];
        uVar5 = plVar3[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar19,0,0);
        puVar19[1] = 0;
        *puVar19 = 10;
        *(undefined1 *)(puVar19 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar13 + 8))(lVar14);
        func_0x000107c615c0(lVar14);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar3[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar13 = plVar3[0x12];
        uVar5 = plVar3[0x10];
        (**(code **)(plVar3[0x11] + 8))(lVar13);
        func_0x000107c615c0(lVar13);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar3[1];
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar13 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar27 = uVar5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar21 = (code *)0x0;
        uVar23 = 0xf000000000000000;
        if (uVar5 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar12 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101dfe8bc;
        uVar24 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
      }
      else {
        pcVar11 = UNRECOVERED_JUMPTABLE_00;
        uVar23 = uVar5;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar27 = uVar23;
        if (pcVar11 == (code *)0x0) goto LAB_101dfe880;
        pcVar21 = pcVar11;
        func_0x000107c5ee30();
        uVar27 = uVar23;
        func_0x000107c61170(pcVar11);
        if (uVar5 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar24 = 0;
        uVar27 = 0xf000000000000000;
      }
      if (uVar23 >> 0x3c < 0xf) {
        if (uVar27 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar21,uVar23);
          func_0x000100de78a0(uVar24,uVar27);
          pcVar11 = pcVar21;
          func_0x000100e25fcc(pcVar21,uVar23,uVar24,uVar27);
          func_0x0001000b44c0(uVar24,uVar27);
          func_0x0001000b44c0(pcVar21,uVar23);
          func_0x0001000b44c0(uVar24,uVar27);
          func_0x0001000b44c0(pcVar21);
          if (((ulong)pcVar11 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar27 >> 0x3c) {
        func_0x0001000b44c0(pcVar21);
LAB_101dfe974:
        pcVar11 = UNRECOVERED_JUMPTABLE_00;
        uVar27 = uVar23;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar23 = 0xf000000000000000;
          if (uVar5 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_101dfe9f8;
          }
          uVar24 = uVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar5);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar11 = (code *)0x0;
            uVar27 = uVar23;
            goto joined_r0x000101dfe9b0;
          }
          pcVar11 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar27 = uVar23;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar5 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar27 = 0xf000000000000000;
          uVar24 = uVar5;
        }
        if (uVar23 >> 0x3c < 0xf) {
          if (uVar27 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar11,uVar23);
            func_0x000100de78a0(uVar24,uVar27);
            UNRECOVERED_JUMPTABLE_00 = pcVar11;
            func_0x000100e25fcc(pcVar11,uVar23,uVar24,uVar27);
            func_0x0001000b44c0(uVar24,uVar27);
            func_0x0001000b44c0(pcVar11,uVar23);
            func_0x0001000b44c0(uVar24,uVar27);
            func_0x0001000b44c0(pcVar11,uVar23);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar27 >> 0x3c) {
          func_0x0001000b44c0(pcVar11,uVar23);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar11,uVar23);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar21,uVar23);
LAB_101dfea48:
      func_0x0001000b44c0(uVar24,uVar27);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar25 = *(undefined8 *)(lVar22 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 7;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar16);
    func_0x000107c615e8(puVar19);
    func_0x000107c61170(lVar13);
LAB_101dfb99c:
    func_0x000107c615e8(uVar25);
    func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar22 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfb8b4; end: 101dfbf1b;  */

code * FUN_101dfb8b4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  code *pcVar20;
  long unaff_x22;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)(unaff_x22 + 0x70);
  *plVar23 = 0;
  puVar15 = *(undefined8 **)(unaff_x22 + 0x58);
  *(undefined8 **)(unaff_x22 + 0x100) = puVar15;
  puVar18 = puVar15;
  func_0x000107c40984(puVar15,param_2,0x13,plVar23);
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x108) = puVar18;
  lVar1 = *plVar23;
  func_0x000107c61174();
  puVar2 = puVar18;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar1 != 0) goto LAB_101dfb944;
    puVar19 = *(undefined8 **)(unaff_x22 + 0xd8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar2 = puVar18;
    func_0x000107c4407c(puVar18);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    uVar6 = param_2;
    func_0x000107c5ed80(uVar16,puVar3);
    func_0x000107c6142c(param_2);
    puVar2 = puVar19;
    func_0x000107c614f0();
    func_0x000107c4407c();
    func_0x000107c61180();
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar1 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar25 = *(long *)(unaff_x22 + 0xa0);
      lVar4 = lVar1;
      func_0x000107c5ee30();
      uVar26 = uVar6;
      func_0x000107c61170(lVar1);
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar25 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar1 = lVar25;
      func_0x000107c5ee30();
      uVar21 = uVar26;
      func_0x000107c61170(lVar25);
      FUN_101dffdc4();
      if (uVar21 >> 0x3c < 0xf) {
        func_0x0001000d224c(unaff_x22 + 0x38);
        uVar13 = *(ulong *)(unaff_x22 + 0x38);
        lVar25 = *(long *)(unaff_x22 + 0x40);
        uVar22 = uVar13;
        func_0x000107c614f0();
        *(ulong *)(unaff_x22 + 0x78) = uVar13;
        (**(code **)(*(long *)(lVar25 + 8) + 0x28))();
        func_0x000107c615e8(uVar13);
        puVar3 = puVar2;
        func_0x000107c5ee20(puVar2,uVar21);
        lVar25 = lVar4;
        func_0x000107c5ee20(lVar4,uVar6);
        lVar5 = lVar1;
        uVar13 = uVar26;
        func_0x000107c5ee20(lVar1,uVar26);
        puVar19 = puVar3;
        if ((uVar22 & 1) == 0) {
          func_0x000107c51bb8();
        }
        else {
          func_0x000107c51bbc();
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar25);
        func_0x000107c61170();
        if (puVar19 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
          puVar3[1] = 0;
          *puVar3 = 10;
          *(undefined1 *)(puVar3 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,uVar21);
        }
        else {
          lVar25 = *(long *)(unaff_x22 + 0xf8);
          puVar17 = *(undefined8 **)(unaff_x22 + 0xc0);
          puVar3 = puVar19;
          func_0x000107c5ee30(puVar19);
          func_0x000107c61170(puVar19);
          func_0x000107c5ee40(puVar17,1,puVar3,uVar13);
          if (lVar25 == 0) {
            func_0x0001000b44c0(puVar2,uVar21);
            func_0x00010006c090(puVar3,uVar13);
            func_0x00010006c090(lVar1,uVar26);
            func_0x00010006c090(lVar4,uVar6);
            func_0x0001000d224c(unaff_x22 + 0x48);
            uVar6 = *(ulong *)(unaff_x22 + 0x48);
            lVar1 = *(long *)(unaff_x22 + 0x50);
            uVar26 = uVar6;
            func_0x000107c614f0();
            *(ulong *)(unaff_x22 + 0x80) = uVar6;
            (**(code **)(*(long *)(lVar1 + 8) + 0x18))();
            func_0x000107c615e8(uVar6);
            if ((uVar26 & 1) == 0) {
              uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
              (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
                        (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
              func_0x000107c615e8(uVar16);
            }
            else {
              uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
              lVar1 = *(long *)(unaff_x22 + 0xb8);
              uVar24 = *(undefined8 *)(unaff_x22 + 0xc0);
              uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
              func_0x000107c4c4d8(*(undefined8 *)(unaff_x22 + 0x108));
              func_0x000107c615e8(uVar16);
              (**(code **)(lVar1 + 8))(uVar24,uVar27);
            }
            uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
            func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
            func_0x000107c615c0(uVar16);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 0x108);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(unaff_x22 + 8))(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_101dfbf08;
          }
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar17,0,0);
          puVar17[1] = 0;
          *puVar17 = 0x14;
          *(undefined1 *)(puVar17 + 2) = 0x80;
          func_0x000107c61654();
          func_0x0001000b44c0(puVar2,uVar21);
          func_0x00010006c090(puVar3,uVar13);
          func_0x000107c614ac(lVar25);
        }
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
        puVar2[1] = 0;
        *puVar2 = 10;
        *(undefined1 *)(puVar2 + 2) = 0x80;
        func_0x000107c61654();
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar25 = *(long *)(unaff_x22 + 0xb8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x00010006c090(lVar1,uVar26);
      func_0x00010006c090(lVar4,uVar6);
      func_0x000107c615e8(puVar18);
      func_0x000107c615e8(puVar15);
      (**(code **)(lVar25 + 8))(uVar16,uVar27);
      goto LAB_101dfb99c;
    }
    puVar18 = puVar19;
    func_0x000107c5faec();
    uVar26 = uVar6;
    func_0x000107c61170(puVar19);
    *(ulong *)(unaff_x22 + 0x110) = uVar6;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_101dfbf0c;
    lVar25 = *(long *)(unaff_x22 + 0xa0);
    lVar4 = lVar1;
    func_0x000107c5ee30();
    uVar21 = uVar26;
    func_0x000107c61170(lVar1);
    *(long *)(unaff_x22 + 0x118) = lVar4;
    *(ulong *)(unaff_x22 + 0x120) = uVar26;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar25 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar1 = lVar25;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar25);
    *(long *)(unaff_x22 + 0x128) = lVar1;
    *(ulong *)(unaff_x22 + 0x130) = uVar21;
    plVar23 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar23;
    *plVar23 = unaff_x22;
    plVar23[1] = (long)FUN_101dfbf1c;
    lVar25 = *(long *)(unaff_x22 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar23[0xe] = lVar1;
      plVar23[0xf] = uVar21;
      plVar23[0xc] = lVar4;
      plVar23[0xd] = uVar26;
      plVar23[10] = uVar6;
      plVar23[0xb] = lVar25;
      plVar23[9] = (long)puVar18;
      lVar1 = 0;
      func_0x000107c5ede0();
      plVar23[0x10] = lVar1;
      lVar1 = *(long *)(lVar1 + -8);
      plVar23[0x11] = lVar1;
      uVar6 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar23[0x12] = uVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101dfe3fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfe3fc,0,0);
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar1 = plVar23[0xe];
      lVar14 = plVar23[0xf];
      uVar6 = plVar23[0xc];
      lVar4 = plVar23[0xd];
      func_0x000107c5ed80(plVar23[0x12],plVar23[9],plVar23[10]);
      func_0x000107c5ee20(uVar6,lVar4);
      func_0x000107c5ee20(lVar1,lVar14);
      lVar14 = lVar1;
      func_0x000107c5ed90();
      lVar4 = lVar14;
      func_0x000107c5ed90();
      uVar26 = uVar6;
      func_0x000107c3127c(uVar6,lVar1,lVar14,lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar6);
      if ((uVar26 & 1) == 0) {
        lVar1 = plVar23[9];
        lVar14 = plVar23[10];
        puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        puVar8 = puVar7;
        func_0x000107c415e0();
        func_0x000107c61180();
        lVar4 = lVar1;
        func_0x000107c5fadc(lVar1,lVar14);
        func_0x000107c43418(puVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar8);
        puVar8 = puVar7;
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar1,lVar14);
        plVar23[6] = 0;
        puVar9 = puVar8;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(puVar8);
        lVar1 = plVar23[6];
        if (puVar9 == (undefined *)0x0) {
          lVar14 = lVar1;
          func_0x000107c61174(lVar1);
          func_0x000107c5ed30(lVar1);
          func_0x000107c61170(lVar14);
          func_0x000107c61654();
          func_0x000107c614ac(lVar1);
LAB_101dfe678:
          plVar23[3] = 0;
          plVar23[2] = 0;
          plVar23[5] = 0;
          plVar23[4] = 0;
LAB_101dfe680:
          func_0x000101dfed18(plVar23 + 2,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar6 = 0;
          FUN_101a64068();
          uVar16 = 0x112defdc0;
          func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar8 = PTR___sypN_11034f1a8;
          puVar10 = puVar9;
          func_0x000107c5f9e8(puVar9,uVar6,PTR___sypN_11034f1a8 + 8,uVar16);
          func_0x000107c61174(lVar1);
          func_0x000107c61170(puVar9);
          if (puVar10 == (undefined *)0x0) goto LAB_101dfe678;
          if (*(long *)(puVar10 + 0x10) == 0) {
LAB_101dfe7c0:
            plVar23[3] = 0;
            plVar23[2] = 0;
            plVar23[5] = 0;
            plVar23[4] = 0;
          }
          else {
            lVar1 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar10);
            FUN_101aae36c(lVar1);
            if ((uVar6 & 1) == 0) {
              func_0x000107c6142c(puVar10);
              goto LAB_101dfe7c0;
            }
            func_0x0001000bb420(*(long *)(puVar10 + 0x38) + lVar1 * 0x20,plVar23 + 2);
            func_0x000107c6142c(puVar10);
          }
          func_0x000107c6142c(puVar10);
          if (plVar23[5] == 0) goto LAB_101dfe680;
          uVar16 = 0;
          func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar11 = plVar23 + 8;
          func_0x000107c6147c(plVar11,plVar23 + 2,puVar8 + 8,uVar16,6);
          if (((ulong)plVar11 & 1) != 0) {
            lVar1 = plVar23[8];
            func_0x000107c4c0a8(lVar1);
            func_0x000107c61170(lVar1);
          }
        }
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5ed90();
        plVar23[7] = 0;
        puVar9 = puVar7;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        puVar18 = (undefined8 *)plVar23[7];
        if ((int)puVar9 == 0) {
          puVar2 = puVar18;
          func_0x000107c61174(puVar18);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar2);
          func_0x000107c61654();
          func_0x000107c614ac();
        }
        else {
          func_0x000107c61174();
        }
        lVar1 = plVar23[0x11];
        lVar14 = plVar23[0x12];
        uVar6 = plVar23[0x10];
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar18,0,0);
        puVar18[1] = 0;
        *puVar18 = 10;
        *(undefined1 *)(puVar18 + 2) = 0x80;
        func_0x000107c61654();
        (**(code **)(lVar1 + 8))(lVar14);
        func_0x000107c615c0(lVar14);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar23[1];
        lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        lVar1 = plVar23[0x12];
        uVar6 = plVar23[0x10];
        (**(code **)(plVar23[0x11] + 8))(lVar1);
        func_0x000107c615c0(lVar1);
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar23[1];
        lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar1 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return UNRECOVERED_JUMPTABLE_00;
      }
      func_0x000107c60e78();
      uVar26 = uVar6;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
LAB_101dfe880:
        pcVar20 = (code *)0x0;
        uVar21 = 0xf000000000000000;
        if (uVar6 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
        uVar13 = uVar6;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_101dfe8bc;
        uVar22 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
      }
      else {
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar21 = uVar6;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar26 = uVar21;
        if (pcVar12 == (code *)0x0) goto LAB_101dfe880;
        pcVar20 = pcVar12;
        func_0x000107c5ee30();
        uVar26 = uVar21;
        func_0x000107c61170(pcVar12);
        if (uVar6 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
        uVar22 = 0;
        uVar26 = 0xf000000000000000;
      }
      if (uVar21 >> 0x3c < 0xf) {
        if (uVar26 >> 0x3c < 0xf) {
          func_0x000100de78a0(pcVar20,uVar21);
          func_0x000100de78a0(uVar22,uVar26);
          pcVar12 = pcVar20;
          func_0x000100e25fcc(pcVar20,uVar21,uVar22,uVar26);
          func_0x0001000b44c0(uVar22,uVar26);
          func_0x0001000b44c0(pcVar20,uVar21);
          func_0x0001000b44c0(uVar22,uVar26);
          func_0x0001000b44c0(pcVar20);
          if (((ulong)pcVar12 & 1) == 0) {
            return (code *)0x0;
          }
          goto LAB_101dfe974;
        }
      }
      else if (0xe < uVar26 >> 0x3c) {
        func_0x0001000b44c0(pcVar20);
LAB_101dfe974:
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        uVar26 = uVar21;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
joined_r0x000101dfe9b0:
          uVar21 = 0xf000000000000000;
          if (uVar6 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
          func_0x000107c4a804();
          func_0x000107c61180();
          if (uVar6 == 0) {
            uVar6 = 0;
            goto LAB_101dfe9f8;
          }
          uVar22 = uVar6;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar6);
        }
        else {
          func_0x000107c4a804();
          func_0x000107c61180();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            pcVar12 = (code *)0x0;
            uVar26 = uVar21;
            goto joined_r0x000101dfe9b0;
          }
          pcVar12 = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          uVar26 = uVar21;
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          if (uVar6 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
          uVar26 = 0xf000000000000000;
          uVar22 = uVar6;
        }
        if (uVar21 >> 0x3c < 0xf) {
          if (uVar26 >> 0x3c < 0xf) {
            func_0x000100de78a0(pcVar12,uVar21);
            func_0x000100de78a0(uVar22,uVar26);
            UNRECOVERED_JUMPTABLE_00 = pcVar12;
            func_0x000100e25fcc(pcVar12,uVar21,uVar22,uVar26);
            func_0x0001000b44c0(uVar22,uVar26);
            func_0x0001000b44c0(pcVar12,uVar21);
            func_0x0001000b44c0(uVar22,uVar26);
            func_0x0001000b44c0(pcVar12,uVar21);
            return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_00 & 1);
          }
        }
        else if (0xe < uVar26 >> 0x3c) {
          func_0x0001000b44c0(pcVar12,uVar21);
          return (code *)0x1;
        }
        func_0x0001000b44c0(pcVar12,uVar21);
        goto LAB_101dfea48;
      }
      func_0x0001000b44c0(pcVar20,uVar21);
LAB_101dfea48:
      func_0x0001000b44c0(uVar22,uVar26);
      return (code *)0x0;
    }
  }
  else {
    func_0x000107c61170();
LAB_101dfb944:
    uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 7;
    *(undefined1 *)(puVar2 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c615e8(puVar15);
    func_0x000107c615e8(puVar18);
    func_0x000107c61170(lVar1);
LAB_101dfb99c:
    func_0x000107c615e8(uVar24);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
LAB_101dfbf08:
  func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
  (*UNRECOVERED_JUMPTABLE_00)();
}



/* Entry: 101dfbf1c; end: 101dfbfef;  */

void FUN_101dfbf1c(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uStack_110;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  lVar8 = *unaff_x22;
  *(long *)(lVar9 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x138));
  uVar7 = *(undefined8 *)(lVar9 + 0x118);
  uVar5 = *(undefined8 *)(lVar9 + 0x120);
  uVar10 = *(undefined8 *)(lVar9 + 0x110);
  func_0x00010006c090(*(undefined8 *)(lVar9 + 0x128),*(undefined8 *)(lVar9 + 0x130));
  func_0x00010006c090(uVar7,uVar5);
  func_0x000107c6142c(uVar10);
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar3 = FUN_101dfbff0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    pcVar3 = FUN_101dfc0fc;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(lVar8 + 0x48);
  uVar2 = *(ulong *)(lVar8 + 0x48);
  lVar6 = *(long *)(lVar8 + 0x50);
  uVar1 = uVar2;
  func_0x000107c614f0();
  *(ulong *)(lVar8 + 0x80) = uVar2;
  (**(code **)(*(long *)(lVar6 + 8) + 0x18))();
  func_0x000107c615e8(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(lVar8 + 0x100);
    (**(code **)(*(long *)(lVar8 + 0xb8) + 8))
              (*(undefined8 *)(lVar8 + 0xc0),*(undefined8 *)(lVar8 + 0xb0));
    func_0x000107c615e8(uVar7);
  }
  else {
    uVar7 = *(undefined8 *)(lVar8 + 0x100);
    lVar6 = *(long *)(lVar8 + 0xb8);
    uVar5 = *(undefined8 *)(lVar8 + 0xc0);
    uVar10 = *(undefined8 *)(lVar8 + 0xb0);
    func_0x000107c4c4d8(*(undefined8 *)(lVar8 + 0x108));
    func_0x000107c615e8(uVar7);
    (**(code **)(lVar6 + 8))(uVar5,uVar10);
  }
  uVar7 = *(undefined8 *)(lVar8 + 0xc0);
  func_0x000107c615e8(*(undefined8 *)(lVar8 + 0xd8));
  func_0x000107c615c0(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))();
    return;
  }
  func_0x000107c60e78(*(undefined8 *)(lVar8 + 0x108));
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(lVar8 + 0x100);
  uVar10 = *(undefined8 *)(lVar8 + 0xd8);
  lVar6 = *(long *)(lVar8 + 0xb8);
  uVar5 = *(undefined8 *)(lVar8 + 0xc0);
  uVar11 = *(undefined8 *)(lVar8 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(lVar8 + 0x108));
  func_0x000107c615e8(uVar7);
  (**(code **)(lVar6 + 8))(uVar5,uVar11);
  func_0x000107c615e8(uVar10);
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(lVar8 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(lVar8 + 0xf0);
  uVar10 = *(undefined8 *)(lVar8 + 0xd8);
  uVar11 = *(undefined8 *)(lVar8 + 0x68);
  uVar7 = 0;
  uVar5 = 0;
  func_0x000107c613f8(&UNK_1107a6f08);
  *puVar4 = uVar11;
  func_0x000107c615e8(uVar10);
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))();
    return;
  }
  func_0x000107c60e78();
  uStack_110 = (undefined1)lVar6;
  *(undefined1 *)(lVar8 + 0xa0) = uStack_110;
  *(undefined8 *)(lVar8 + 0x70) = in_x6;
  *(undefined8 *)(lVar8 + 0x78) = in_x7;
  *(undefined8 *)(lVar8 + 0x60) = in_x4;
  *(undefined8 *)(lVar8 + 0x68) = in_x5;
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  *(undefined8 *)(lVar8 + 0x58) = uVar5;
  *(undefined8 **)(lVar8 + 0x48) = puVar4;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar8 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar8 + 0x88) = uVar2;
  pcVar3 = FUN_101dfc320;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}


