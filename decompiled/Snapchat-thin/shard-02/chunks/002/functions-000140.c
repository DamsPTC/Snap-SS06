/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a2c84c; end: 101a2ca1f;  */

void FUN_101a2c84c(float *param_1,float param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [24];
  
  fVar11 = 0.0;
  fVar12 = fVar11;
  if (0.0 < param_2) {
    fVar12 = param_2;
  }
  fVar10 = 1.0;
  if (fVar12 <= 1.0) {
    fVar10 = fVar12;
  }
  func_0x000107c61428(param_3 + 0x18,auStack_88,0x21,0);
  uVar3 = *(ulong *)(param_3 + 0x18);
  func_0x000107c61558();
  lVar4 = *(long *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
  FUN_101a2d0d0(fVar10,param_4);
  *(long *)(param_3 + 0x18) = lVar4;
  func_0x000107c614a8(auStack_88);
  lVar8 = 0;
  lVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar5 = -lVar9;
  uVar6 = 0xffffffffffffffff;
  if (uVar5 < 0x40) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar4 + 0x40);
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar8 << 6;
      fVar10 = *(float *)(*(long *)(lVar4 + 0x38) + uVar5 * 4);
      lVar7 = *(long *)(param_3 + 0x28);
      fVar12 = 0.0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar5 = (ulong)*(uint *)(*(long *)(lVar4 + 0x30) + uVar5 * 4);
        func_0x00010149a22c();
        fVar12 = 0.0;
        if ((uVar3 & 1) != 0) {
          fVar12 = *(float *)(*(long *)(lVar7 + 0x38) + uVar5 * 4);
        }
      }
      fVar11 = fVar11 + fVar10 * fVar12;
    }
    bVar2 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar2) break;
    if ((long)(0x3fU - lVar9 >> 6) <= lVar8) {
      func_0x000107c6157c(lVar4);
      func_0x000100cc31c8();
      fVar12 = 1.0;
      if (fVar11 <= 1.0) {
        fVar12 = fVar11;
      }
      bVar2 = fVar12 <= *(float *)(param_3 + 0x20);
      if (bVar2) {
        fVar12 = 0.0;
      }
      else {
        *(float *)(param_3 + 0x20) = fVar12;
      }
      *param_1 = fVar12;
      *(bool *)(param_1 + 1) = bVar2;
      return;
    }
    uVar6 = ((ulong *)(lVar4 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2ca20);
  (*pcVar1)();
}



/* Entry: 101a2ca20; end: 101a2ca7b;  */

void FUN_101a2ca20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a2ca7c; end: 101a2ca97;  */

void FUN_101a2ca7c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101a2ca98; end: 101a2cadb;  */

void FUN_101a2ca98(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_fulfillWithSuccessValue__1125cc768,param_1);
  return;
}



/* Entry: 101a2cadc; end: 101a2cb6f;  */

void FUN_101a2cadc(void)

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
  plVar7 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a2cb70;
  plVar7[0x19] = lVar6;
  plVar7[0x1a] = lVar8;
  plVar7[0x17] = lVar5;
  plVar7[0x18] = lVar3;
  plVar7[0x15] = lVar4;
  plVar7[0x16] = lVar2;
  plVar7[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2749c,0,0);
  return;
}



/* Entry: 101a2cb70; end: 101a2cbab;  */

void FUN_101a2cb70(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a2cba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a2cbac; end: 101a2cc13;  */

void FUN_101a2cbac(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101a2cc14; end: 101a2ccdb;  */

void FUN_101a2cc14(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a2cc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a2ccdc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11042da60;
  func_0x000107c613fc(&UNK_11042da60,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101a2fba0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2ccdc; end: 101a2cd1b;  */

void FUN_101a2ccdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2cd1c,0,0);
  return;
}



/* Entry: 101a2cd1c; end: 101a2cd2b;  */

void FUN_101a2cd1c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a2cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a2cd2c; end: 101a2cdeb;  */

void FUN_101a2cd2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a3007c,0,0);
  return;
}



/* Entry: 101a2cdec; end: 101a2ce03;  */

void FUN_101a2cdec(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2ce04,0,0);
  return;
}



/* Entry: 101a2ce04; end: 101a2cecb;  */

void FUN_101a2ce04(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a2ce4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a2cecc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11042d970;
  func_0x000107c613fc(&UNK_11042d970,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101a2f4f0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2cecc; end: 101a2cf0b;  */

void FUN_101a2cecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a30084,0,0);
  return;
}



/* Entry: 101a2cf0c; end: 101a2d0cf;  */

ulong FUN_101a2cf0c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2cff0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2cff4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bcf20;
    func_0x000107c61168(PTR_PTR_1126bcf20);
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
    puVar4 = PTR_PTR_1126bcf20;
    func_0x000107c61168(PTR_PTR_1126bcf20);
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
  func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2d0d0);
  (*pcVar2)();
}



/* Entry: 101a2d0d0; end: 101a2d1eb;  */

void FUN_101a2d0d0(undefined4 param_1,ulong param_2,ulong param_3)

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
  func_0x00010149a22c();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2d17c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    uVar3 = (uint)param_3 & 1;
    func_0x000101a2d6e4(lVar6);
    uVar2 = param_2;
    func_0x00010149a22c();
    if (((uint)uVar4 & 1) != (uVar3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2d160);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101a2d338();
    lVar6 = *unaff_x20;
    goto joined_r0x000101a2d190;
  }
  lVar6 = *unaff_x20;
joined_r0x000101a2d190:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(int *)(*(long *)(lVar6 + 0x30) + uVar2 * 4) = (int)param_2;
    *(undefined4 *)(*(long *)(lVar6 + 0x38) + uVar2 * 4) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2d1ec);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(undefined4 *)(*(long *)(lVar6 + 0x38) + uVar2 * 4) = param_1;
  }
  return;
}



/* Entry: 101a2d1ec; end: 101a2d483;  */

void FUN_101a2d1ec(void)

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
  
  func_0x0001000285a8(0x112dec570,&UNK_10d9b8320);
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
    if (uVar4 == 0) goto LAB_101a2d2c4;
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
        *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar10;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_101a2d2c4:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2d338);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101a2d318;
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
LAB_101a2d318:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101a2d484; end: 101a2d943;  */

void FUN_101a2d484(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar16 = 0x112dec570;
  func_0x0001000285a8(0x112dec570,&UNK_10d9b8320);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar16);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101a2d6ac:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a2d6e0);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_101a2d6ac;
        }
        uVar12 = puVar14[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    uVar2 = *(undefined4 *)(*(long *)(lVar13 + 0x30) + uVar7 * 4);
    uVar16 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar7 * 8);
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60684(uVar6,uVar2,4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a2d6e4);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar7 | bVar3);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
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
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar7 * 4) = uVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 8) = uVar16;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 101a2d944; end: 101a2e0e3;  */

undefined8 FUN_101a2d944(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000101a2dd88();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2db8c);
      (*pcVar1)();
    }
    func_0x000101a2db8c(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_101a2e234(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_101a2e460(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 101a2e0e4; end: 101a2e233;  */

void FUN_101a2e0e4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112dec580,&UNK_10d9b8330);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101a2e1c0;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101a2e1c0:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2e234);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101a2e20c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101a2e20c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101a2e234; end: 101a2e45f;  */

void FUN_101a2e234(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112dec580;
  func_0x0001000285a8(0x112dec580,&UNK_10d9b8330);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101a2e430:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2e45c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101a2e430;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2e460);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 101a2e460; end: 101a2e4df;  */

void FUN_101a2e460(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 101a2e4e0; end: 101a2e4f7;  */

void FUN_101a2e4e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2e4f8,0,0);
  return;
}



/* Entry: 101a2e4f8; end: 101a2e8df;  */

/* WARNING: Removing unreachable block (ram,0x000101a2e780) */
/* WARNING: Removing unreachable block (ram,0x000101a2e6f4) */
/* WARNING: Removing unreachable block (ram,0x000101a2e7b4) */

void FUN_101a2e4f8(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 200) = unaff_x22;
  func_0x000107c4b82c();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    func_0x000107c5fd64();
    uVar2 = *(ulong *)(unaff_x22 + 0xc0);
    if (uVar2 == 0) {
      unaff_x22 = *(long *)(unaff_x22 + 200);
      puVar3 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c615f0();
      func_0x000107c49b28();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(unaff_x22 + 0xb8);
        puVar4 = PTR_PTR_1126affe8;
        func_0x000107c61168();
        func_0x000107c4b838();
        func_0x000107c61180();
        *(undefined **)(unaff_x22 + 0xe0) = puVar4;
        *(code **)(unaff_x22 + 0x30) = FUN_101a282dc;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x20) = &UNK_100ff0b04;
        *(undefined **)(unaff_x22 + 0x28) = &UNK_11042dbe0;
        lVar1 = unaff_x22 + 0x10;
        func_0x000107c60bc4(lVar1);
        func_0x000107c4e918();
        func_0x000107c61180();
        func_0x000107c60bd0(lVar1);
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = 0;
          func_0x000101a2fd90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar6 = uVar2;
          func_0x000107c5fc54(uVar2,uVar5);
          func_0x000107c61170(uVar2);
          if (uVar6 >> 0x3e == 0) {
            uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar2 = uVar6 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar6) {
              uVar2 = uVar6;
            }
            func_0x000107c60480();
          }
          if (uVar2 == 0) {
            func_0x000107c6142c(uVar6);
            uVar5 = 0;
          }
          else {
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2e8d8);
                (*UNRECOVERED_JUMPTABLE)();
              }
              uVar5 = *(undefined8 *)(uVar6 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar5 = 0;
              func_0x0001002ec9a0(0,uVar6);
            }
            func_0x000107c6142c(uVar6);
          }
        }
        *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
        func_0x0001000285a8(0x112dc3de0,&UNK_10d9813c0);
        func_0x0001048da110(unaff_x22 + 0x68);
        uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
        func_0x000107c61170(uVar5);
        *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
        func_0x000107c4e924();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
        func_0x0001000285a8(0x112dec568,&UNK_10d9b8318);
        func_0x0001048da110(unaff_x22 + 0x80);
        *(undefined8 *)(unaff_x22 + 0xf0) = 0;
        func_0x000107c61170(uVar9);
        lVar1 = *(long *)(unaff_x22 + 0x80);
        *(long *)(unaff_x22 + 0xf8) = lVar1;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (lVar1 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2e8dc);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar7 = lVar1;
        func_0x000107c4c99c();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2e8e0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
        func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
        func_0x000107c4ca6c();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        uVar5 = uVar9;
        func_0x000100759c94(uVar9,0);
        *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
        func_0x000107c61170(uVar9);
        plVar8 = (long *)0x80;
        UNRECOVERED_JUMPTABLE = (code *)&UNK_10121ae24;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x108) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101a2e8e0;
        goto LAB_101a2e7d4;
      }
      puVar3 = *(undefined1 **)(unaff_x22 + 0xc0);
      func_0x000107c615e8();
    }
    func_0x000101a2cdac();
    func_0x000107c613f8(&UNK_11042dcb0,puVar3,0,0);
    *puVar3 = 4;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
LAB_101a2e7d4:
                    /* WARNING: Could not recover jumptable at 0x000101a2e7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2e8e0; end: 101a2e933;  */

void FUN_101a2e8e0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x110) = param_1;
  *(undefined1 *)(lVar1 + 0x158) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2e934,0,0);
  return;
}



/* Entry: 101a2e934; end: 101a2eec3;  */

/* WARNING: Removing unreachable block (ram,0x000101a2ed38) */
/* WARNING: Removing unreachable block (ram,0x000101a2eae8) */

void FUN_101a2e934(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  if (*(char *)(unaff_x22 + 0x158) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
    iVar9 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar9 != 0) {
      uVar11 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x88,uVar11,PTR___ss5ErrorWS_11034ee10);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
LAB_101a2e9d8:
    func_0x000107c615e8(uVar14);
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0xf0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
    *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
    puVar4 = (undefined8 *)0x112dec5b0;
    func_0x0001000285a8(0x112dec5b0,&UNK_10d9b83b0);
    func_0x0001048da110(unaff_x22 + 0x98);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x158);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
    if (lVar13 == 0) {
      func_0x000100cc3260(uVar11,uVar2);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(unaff_x22 + 0x118) = uVar11;
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c61168();
      func_0x000107c51798();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0xa0) = puVar5;
      func_0x0001000285a8(0x112dc3130,&UNK_10d980410);
      uVar17 = unaff_x22 + 0x70;
      func_0x0001048da110(unaff_x22 + 0xa8);
      lVar12 = *(long *)(unaff_x22 + 0xa8);
      lVar13 = lVar12;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar12);
      func_0x000107c61170();
      *(long *)(unaff_x22 + 0x120) = lVar13;
      *(ulong *)(unaff_x22 + 0x128) = uVar17;
      uVar3 = (uint)(uVar17 >> 0x20);
      uVar8 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar8 == 0) {
          uVar10 = uVar17 >> 0x30 & 0xff;
        }
        else {
          iVar9 = (int)((ulong)lVar13 >> 0x20);
          if (SBORROW4(iVar9,(int)lVar13)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2eec0);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar10 = (ulong)(iVar9 - (int)lVar13);
        }
LAB_101a2ebd8:
        if (0 < (long)uVar10) {
          lVar12 = *(long *)(unaff_x22 + 0xf8);
          func_0x000107c4c930();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2eec4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          func_0x000107c5d0f0();
          func_0x000107c61170(lVar12);
          puVar5 = PTR_PTR_1126c4d00;
          func_0x000107c610f8();
          func_0x00010006c00c(lVar13,uVar17);
          lVar12 = lVar13;
          func_0x000107c5ee20(lVar13,uVar17);
          func_0x00010006c090(lVar13);
          func_0x000107c457b4();
          *(undefined **)(unaff_x22 + 0x130) = puVar5;
          func_0x000107c61170(lVar12);
          func_0x000107c3e228();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
            puVar15 = (undefined *)0x0;
            uVar17 = 0xf000000000000000;
          }
          else {
            puVar15 = puVar5;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar5);
          }
          *(undefined **)(unaff_x22 + 0x40) = puVar15;
          *(ulong *)(unaff_x22 + 0x48) = uVar17;
          func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
          func_0x0001048da110(unaff_x22 + 0x50);
          *(undefined8 *)(unaff_x22 + 0x138) = 0;
          uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
          func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
          puVar5 = PTR_PTR_1126b3080;
          func_0x000107c61168(PTR_PTR_1126b3080);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
          uVar6 = uVar11;
          func_0x000107c5ee20(uVar11,uVar1);
          func_0x00010006c090(uVar11,uVar1);
          func_0x0001000b44c0(puVar15,uVar17);
          func_0x000107c412fc(puVar5);
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          func_0x000107c3d764();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          uVar11 = uVar14;
          func_0x000100759c94(uVar14,0);
          *(undefined8 *)(unaff_x22 + 0x140) = uVar11;
          func_0x000107c61170(uVar14);
          plVar7 = (long *)0x80;
          UNRECOVERED_JUMPTABLE = (code *)0x101a2cbfc;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x148) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_101a2eec4;
          goto LAB_101a2eb50;
        }
      }
      else if (uVar8 == 2) {
        uVar10 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
        if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2ebc8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        goto LAB_101a2ebd8;
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar5,0,0);
      *puVar5 = 2;
      func_0x000107c61654();
      func_0x00010006c090(lVar13,uVar17);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar1);
      goto LAB_101a2e9d8;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar4,0,0);
    *puVar4 = uVar18;
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar16);
    func_0x000100cc3260(uVar11,uVar2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a2eb50:
                    /* WARNING: Could not recover jumptable at 0x000101a2eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2eec4; end: 101a2ef17;  */

void FUN_101a2eec4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x150) = param_1;
  *(undefined1 *)(lVar1 + 0x159) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2ef18,0,0);
  return;
}



/* Entry: 101a2ef18; end: 101a2f4ef;  */

/* WARNING: Removing unreachable block (ram,0x000101a2f38c) */
/* WARNING: Removing unreachable block (ram,0x000101a2f300) */
/* WARNING: Removing unreachable block (ram,0x000101a2f3c0) */

void FUN_101a2ef18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(char *)(unaff_x22 + 0x159) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x150);
    iVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar7 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xb0,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
    func_0x000107c61170(uVar18);
    func_0x00010006c090(uVar3,uVar12);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar20);
  }
  else {
    lVar17 = *(long *)(unaff_x22 + 0xf8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2f4e8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar14 = *(long *)(unaff_x22 + 0xd0);
    lVar5 = *(long *)(unaff_x22 + 0xd8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x159);
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar17);
    puVar8 = PTR_PTR_1126b25c8;
    func_0x000107c610f8(PTR_PTR_1126b25c8);
    func_0x000107c453e4();
    func_0x000107c5293c();
    func_0x000107c56420(puVar8);
    func_0x000107c5a0f8(puVar8);
    puVar9 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c563e8();
    func_0x000107c61170(puVar8);
    func_0x000107c3d7f4(uVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar9);
    func_0x000100cc3260(uVar21,uVar6);
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar4,uVar12);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar20);
    if (lVar5 + 1 == lVar14) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101a2f3dc;
    }
    lVar17 = *(long *)(unaff_x22 + 0x138);
    *(long *)(unaff_x22 + 0xd8) = *(long *)(unaff_x22 + 0xd8) + 1;
    func_0x000107c5fd64();
    if (lVar17 != 0) goto LAB_101a2f3d8;
    uVar10 = *(ulong *)(unaff_x22 + 0xc0);
    if (uVar10 == 0) {
      unaff_x22 = *(long *)(unaff_x22 + 200);
      puVar11 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c615f0();
      func_0x000107c49b28();
      if ((uVar10 & 1) == 0) {
        uVar10 = *(ulong *)(unaff_x22 + 0xb8);
        puVar8 = PTR_PTR_1126affe8;
        func_0x000107c61168();
        func_0x000107c4b838();
        func_0x000107c61180();
        *(undefined **)(unaff_x22 + 0xe0) = puVar8;
        *(code **)(unaff_x22 + 0x30) = FUN_101a282dc;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x20) = &UNK_100ff0b04;
        *(undefined **)(unaff_x22 + 0x28) = &UNK_11042dbe0;
        lVar17 = unaff_x22 + 0x10;
        func_0x000107c60bc4(lVar17);
        func_0x000107c4e918();
        func_0x000107c61180();
        func_0x000107c60bd0(lVar17);
        if (uVar10 == 0) {
LAB_101a2f2d0:
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          func_0x000101a2fd90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar13 = uVar10;
          func_0x000107c5fc54(uVar10,uVar12);
          func_0x000107c61170(uVar10);
          if (uVar13 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar13 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar13) {
              uVar10 = uVar13;
            }
            func_0x000107c60480();
          }
          if (uVar10 == 0) {
            func_0x000107c6142c(uVar13);
            goto LAB_101a2f2d0;
          }
          if ((uVar13 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2f4e4);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar12 = *(undefined8 *)(uVar13 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar12 = 0;
            func_0x0001002ec9a0(0,uVar13);
          }
          func_0x000107c6142c(uVar13);
        }
        *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
        func_0x0001000285a8(0x112dc3de0,&UNK_10d9813c0);
        func_0x0001048da110(unaff_x22 + 0x68);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
        func_0x000107c61170(uVar12);
        *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
        func_0x000107c4e924();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x78) = uVar18;
        func_0x0001000285a8(0x112dec568,&UNK_10d9b8318);
        func_0x0001048da110(unaff_x22 + 0x80);
        *(undefined8 *)(unaff_x22 + 0xf0) = 0;
        func_0x000107c61170(uVar18);
        lVar17 = *(long *)(unaff_x22 + 0x80);
        *(long *)(unaff_x22 + 0xf8) = lVar17;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2f4ec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar14 = lVar17;
        func_0x000107c4c99c();
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2f4f0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
        func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
        func_0x000107c4ca6c();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        uVar12 = uVar18;
        func_0x000100759c94(uVar18,0);
        *(undefined8 *)(unaff_x22 + 0x100) = uVar12;
        func_0x000107c61170(uVar18);
        plVar15 = (long *)0x80;
        UNRECOVERED_JUMPTABLE = (code *)&UNK_10121ae24;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x108) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_101a2e8e0;
        goto LAB_101a2f3dc;
      }
      puVar11 = *(undefined1 **)(unaff_x22 + 0xc0);
      func_0x000107c615e8();
    }
    func_0x000101a2cdac();
    func_0x000107c613f8(&UNK_11042dcb0,puVar11,0,0);
    *puVar11 = 4;
    func_0x000107c61654();
  }
LAB_101a2f3d8:
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a2f3dc:
                    /* WARNING: Could not recover jumptable at 0x000101a2f3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2f4f0; end: 101a2f4fb;  */

void FUN_101a2f4f0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x101a3008c)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101a2f4fc; end: 101a2f5d3;  */

undefined * FUN_101a2f4fc(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112dec570);
    puVar3 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = *(uint *)(puVar8 + -1);
      uVar7 = (ulong)uVar1;
      uVar9 = *puVar8;
      func_0x00010149a22c();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2f5d0);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(uint *)(*(long *)(puVar3 + 0x30) + uVar7 * 4) = uVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2f5d4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 101a2f5d4; end: 101a2f667;  */

void FUN_101a2f5d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x2d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a2f668;
  plVar7[0x33] = lVar3;
  plVar7[0x34] = lVar6;
  plVar7[0x31] = lVar2;
  plVar7[0x32] = lVar5;
  plVar7[0x2f] = lVar1;
  plVar7[0x30] = lVar4;
  plVar7[0x2e] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a28458,0,0);
  return;
}



/* Entry: 101a2f668; end: 101a2f6a3;  */

void FUN_101a2f668(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a2f6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a2f6a4; end: 101a2f77b;  */

undefined * FUN_101a2f6a4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112dec578);
    puVar3 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined4 *)(param_1 + 0x24);
    do {
      uVar1 = puVar8[-1];
      uVar7 = (ulong)uVar1;
      uVar9 = *puVar8;
      func_0x00010149a22c();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2f778);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(uint *)(*(long *)(puVar3 + 0x30) + uVar7 * 4) = uVar1;
      *(undefined4 *)(*(long *)(puVar3 + 0x38) + uVar7 * 4) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2f77c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 101a2f77c; end: 101a2fa73;  */

undefined * FUN_101a2f77c(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dec580,&UNK_10d9b8330);
    func_0x000107c602e8();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2fa70);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c61174();
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c61170(uVar5);
              goto LAB_101a2f97c;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2fa74);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_101a2f97c:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        FUN_101a2cf0c(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2fa68);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c615e8(puVar7);
              goto joined_r0x000101a2f854;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2fa6c);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x000101a2f854:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 101a2fa74; end: 101a2fb4f;  */

void FUN_101a2fa74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar5 = *(undefined4 *)(unaff_x20 + 0x40);
  lVar14 = *(long *)(unaff_x20 + 0x50);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  lVar10 = *(long *)(unaff_x20 + 0x60);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  lVar15 = *(long *)(unaff_x20 + 0x70);
  lVar13 = *(long *)(unaff_x20 + 0x68);
  lVar11 = *(long *)(unaff_x20 + 0x80);
  lVar9 = *(long *)(unaff_x20 + 0x78);
  lVar7 = *(long *)(unaff_x20 + 0x88);
  plVar6 = (long *)0x380;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101a300a0;
  plVar6[0x55] = lVar7;
  plVar6[0x54] = lVar11;
  plVar6[0x53] = lVar9;
  plVar6[0x52] = lVar15;
  plVar6[0x51] = lVar13;
  plVar6[0x50] = lVar10;
  plVar6[0x4f] = lVar8;
  plVar6[0x4e] = lVar14;
  plVar6[0x4d] = lVar12;
  *(undefined4 *)(plVar6 + 0x6f) = uVar5;
  plVar6[0x4c] = lVar4;
  plVar6[0x4b] = lVar2;
  plVar6[0x4a] = lVar3;
  plVar6[0x49] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2a124,0,0);
  return;
}



/* Entry: 101a2fb50; end: 101a2fb5f;  */

long FUN_101a2fb50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101a2fb60; end: 101a2fb77;  */

void FUN_101a2fb60(long param_1)

{
  FUN_101a2fb78(param_1 + 0x20);
  return;
}



/* Entry: 101a2fb78; end: 101a2fbcf;  */

void FUN_101a2fb78(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a2fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101a2fbd0; end: 101a2fc0f;  */

undefined8 FUN_101a2fbd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a2fc10; end: 101a2fcaf;  */

void FUN_101a2fc10(long param_1)

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
  long *plVar10;
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
  plVar10 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101a300a4;
  plVar10[0x1f] = lVar3;
  plVar10[0x20] = lVar7;
  plVar10[0x1d] = lVar2;
  plVar10[0x1e] = lVar6;
  plVar10[0x1b] = lVar1;
  plVar10[0x1c] = lVar5;
  plVar10[0x19] = lVar8;
  plVar10[0x1a] = lVar4;
  plVar10[0x18] = param_1;
  lVar8 = 0;
  func_0x000107c5ede0();
  plVar10[0x21] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar10[0x22] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x23] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2bc24,0,0);
  return;
}



/* Entry: 101a2fcb0; end: 101a2fcbf;  */

void FUN_101a2fcb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000103fb0954(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000100de78a0(uVar4,uVar3);
  func_0x000103fb0724(uVar5,uVar2,uVar4,uVar3);
  func_0x000107c3f4f8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 101a2fcc0; end: 101a2fceb;  */

void FUN_101a2fcc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a2fcec; end: 101a2fcf7;  */

void FUN_101a2fcec(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  char cStack_34;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined4 *)(unaff_x20 + 0x18);
  uStack_44 = *param_1;
  uVar1 = 0x112dec5a0;
  lStack_50 = lVar2;
  func_0x0001000285a8(0x112dec5a0,&UNK_10db3e070);
  func_0x000100087bd4(&uStack_38,0x101a30034,auStack_60,uVar1);
  if (cStack_34 != '\x01') {
    (**(code **)(lVar2 + 0x30))(uStack_38);
  }
  return;
}



/* Entry: 101a2fcf8; end: 101a2fd27;  */

void FUN_101a2fcf8(undefined4 param_1)

{
  long unaff_x20;
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_24);
  return;
}



/* Entry: 101a2fd28; end: 101a2fd47;  */

void FUN_101a2fd28(void)

{
  long unaff_x20;
  
  FUN_101a2c84c(*(undefined4 *)(unaff_x20 + 0x1c),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined4 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101a2fd48; end: 101a2fdcf;  */

undefined8 FUN_101a2fd48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101a2fdd0; end: 101a2fe1f;  */

void FUN_101a2fdd0(undefined8 *param_1,code *param_2)

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



/* Entry: 101a2fe20; end: 101a2fe8b;  */

void FUN_101a2fe20(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a300a8;
  plVar3[0x16] = lVar2;
  plVar3[0x17] = lVar4;
  plVar3[0x14] = param_1;
  plVar3[0x15] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a25fcc,0,0);
  return;
}



/* Entry: 101a2fe8c; end: 101a2fff3;  */

int FUN_101a2fe8c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101a2ff08;
        goto LAB_101a2feec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101a2feec:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101a2ff08:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101a2fff4; end: 101a30047;  */

void FUN_101a2fff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dec5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b842c;
  func_0x000107c61520(&UNK_10d9b842c,&UNK_11042dcb0);
  puRam0000000112dec5b8 = puVar1;
  return;
}



/* Entry: 101a30048; end: 101a300af;  */

void FUN_101a30048(long param_1)

{
  FUN_101a2fb78(param_1 + 0x20);
  return;
}



/* Entry: 101a300b0; end: 101a30117;  */

void FUN_101a300b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 101a30118; end: 101a3028f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a30118(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c290);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11303c2a0);
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_4 + _DAT_11303c160);
  uVar8 = *(undefined8 *)(param_5 + _DAT_11303c1d8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_6 != 0) {
    func_0x000107c4afc4();
    func_0x000107c61180();
    lVar3 = 0;
    FUN_101a25f90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112dec428) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112dec430) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112dec438) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112dec440) = uVar9;
    *(undefined8 *)(lVar4 + _DAT_112dec448) = uVar8;
    *(long *)(lVar4 + _DAT_112dec450) = param_6;
    *(undefined8 *)(lVar4 + _DAT_112dec458) = param_7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    func_0x000107c6157c(uVar7);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar8);
    func_0x000107c61154(&lStack_70,puVar1);
    *param_1 = plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a30290);
  (*pcVar2)();
}



/* Entry: 101a30290; end: 101a3029f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a30290(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar8 = &lStack_70;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303c290);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303c2a0);
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(lVar7 + _DAT_11303c160);
  uVar11 = *(undefined8 *)(lVar6 + _DAT_11303c1d8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4afc4();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_101a25f90();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112dec428) = uVar10;
    *(undefined8 *)(lVar7 + _DAT_112dec430) = uVar9;
    *(undefined8 *)(lVar7 + _DAT_112dec438) = uVar3;
    *(undefined8 *)(lVar7 + _DAT_112dec440) = uVar12;
    *(undefined8 *)(lVar7 + _DAT_112dec448) = uVar11;
    *(long *)(lVar7 + _DAT_112dec450) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112dec458) = uVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c6157c(uVar10);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(uVar11);
    func_0x000107c61154(&lStack_70,puVar1);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a30290);
  (*pcVar2)();
}



/* Entry: 101a302a0; end: 101a302db;  */

/* WARNING: Possible PIC construction at 0x000101a302ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a302bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a302cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a302c0) */
/* WARNING: Removing unreachable block (ram,0x000101a302b0) */
/* WARNING: Removing unreachable block (ram,0x000101a302d0) */

void FUN_101a302a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a302dc; end: 101a3036b;  */

void FUN_101a302dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a3036c; end: 101a30393;  */

void FUN_101a3036c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112dec6c8 = puVar1;
  return;
}



/* Entry: 101a30394; end: 101a3091b;  */

void FUN_101a30394(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_90 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000f73a0();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar3 = PTR_PTR_1126b24e8;
  func_0x000107c61168(PTR_PTR_1126b24e8);
  lVar4 = 0x112da3000;
  func_0x0001000285a8(0x112da3000,&UNK_10db90480);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar13 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  *(undefined8 *)(lVar4 + 0x20) = uVar13;
  uVar5 = 0;
  func_0x0001014a2fa0(0);
  func_0x000107c61174(uVar13);
  lVar6 = lVar4;
  func_0x000107c5fc48(lVar4,uVar5);
  func_0x000107c61574(lVar4);
  (**(code **)(lVar14 + 0x10))(lVar10,param_1,lVar1);
  uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &UNK_11042de68;
  func_0x000107c613fc(&UNK_11042de68,uVar12 + lVar11,uVar9 | 7);
  (**(code **)(lVar14 + 0x20))(puVar7 + uVar12,lVar10,lVar1);
  uStack_70 = 0x101a30e68;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101a3091c;
  puStack_78 = &UNK_11042de80;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_68);
  func_0x000107c5cf84(puVar3);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 101a3091c; end: 101a30a0b;  */

uint FUN_101a3091c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5edb4(puVar5,param_2);
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6157c(uVar2);
  puVar4 = puVar5;
  (*pcVar1)(puVar5,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_3);
  (**(code **)(lVar6 + 8))(puVar5,lVar3);
  return (uint)puVar4 & 1;
}



/* Entry: 101a30a0c; end: 101a30dc7;  */

void FUN_101a30a0c(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long extraout_x12;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
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
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar1 + -8);
  lStack_a0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar9 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_b0 = lVar9;
  func_0x000107c5f824();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_c8 = lVar9;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  lVar16 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar9 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar15 - extraout_x12;
  func_0x000107c5eea0(lVar14);
  if (lRam0000000112dec6c0 != -1) {
    func_0x000107c61568(0x112dec6c0,FUN_101a3036c);
  }
  uVar3 = uRam0000000112dec6c8;
  func_0x000107c4b940(uRam0000000112dec6c8);
  if ((bRam0000000112dec6d0 & 1) == 0) {
    bRam0000000112dec6d0 = 1;
    func_0x000107c5d278(uVar3);
    uVar3 = 0xd000000000000043;
    func_0x000107c5fadc(0xd000000000000043,0x800000010efc97b0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
    if (param_1 != 0) {
      func_0x0001000295c4(0);
      (**(code **)(lVar13 + 0x68))
                (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
                 lVar1);
      lVar4 = lVar9;
      func_0x000107c5fff0();
      lStack_d0 = lVar4;
      (**(code **)(lVar13 + 8))(lVar9,lVar1);
      (**(code **)(lVar12 + 0x10))(lVar15,lVar14,lVar2);
      uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
      uVar11 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
      puVar5 = &UNK_11042de18;
      func_0x000107c613fc(&UNK_11042de18,uVar11 + lVar16,uVar10 | 7);
      (**(code **)(lVar12 + 0x20))(puVar5 + uVar11,lVar15,lVar2);
      pcStack_70 = FUN_101a30dc8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000b0c7c;
      puStack_78 = &UNK_11042de30;
      ppuVar6 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      lVar9 = lStack_c8;
      func_0x000107c5f808(lStack_c8);
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar3 = 0x112d4af88;
      func_0x000101a30ef0(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar7 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar8 = uVar7;
      func_0x0001001c7f30();
      lVar15 = lStack_a0;
      lVar13 = lStack_b0;
      func_0x000107c60264(lStack_b0,&puStack_98,uVar7,uVar8,lStack_a0,uVar3);
      lVar1 = lStack_d0;
      func_0x000107c5ffe8(0,lVar9,lVar13,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar1);
      (**(code **)(lStack_a8 + 8))(lVar13,lVar15);
      (**(code **)(lStack_c0 + 8))(lVar9,lStack_b8);
      (**(code **)(lVar12 + 8))(lVar14,lVar2);
      func_0x000107c61574(puStack_68);
      return;
    }
  }
  else {
    func_0x000107c5d278(uVar3);
  }
  (**(code **)(lVar12 + 8))(lVar14,lVar2);
  return;
}



/* Entry: 101a30dc8; end: 101a30df3;  */

void FUN_101a30dc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar8 = 0;
  func_0x000107c5eea4();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  lVar8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_90 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000f73a0();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR_PTR_1126b24e8;
  func_0x000107c61168(PTR_PTR_1126b24e8);
  lVar3 = 0x112da3000;
  func_0x0001000285a8(0x112da3000,&UNK_10db90480);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar13 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  *(undefined8 *)(lVar3 + 0x20) = uVar13;
  uVar4 = 0;
  func_0x0001014a2fa0(0);
  func_0x000107c61174(uVar13);
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,uVar4);
  func_0x000107c61574(lVar3);
  (**(code **)(lVar14 + 0x10))
            (lVar10,unaff_x20 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)),lVar1);
  uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &UNK_11042de68;
  func_0x000107c613fc(&UNK_11042de68,uVar12 + lVar11,uVar9 | 7);
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar12,lVar10,lVar1);
  uStack_70 = 0x101a30e68;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101a3091c;
  puStack_78 = &UNK_11042de80;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_68);
  func_0x000107c5cf84(puVar2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 101a30df4; end: 101a30e0f;  */

void FUN_101a30df4(long param_1,long param_2)

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



/* Entry: 101a30e10; end: 101a30eb3;  */

void FUN_101a30e10(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a30eb4; end: 101a30f2f;  */

undefined8 FUN_101a30eb4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001014a2fa0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101a30f30; end: 101a30f47;  */

void FUN_101a30f30(long param_1,long param_2)

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



/* Entry: 101a30f48; end: 101a30fa3; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl init] */

void FUN_101a30f48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapVideoTranscoderImpl.SnapVideoTranscoderImpl",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a30f74);
  (*pcVar1)();
}



/* Entry: 101a30fa4; end: 101a3103b; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a30fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a30ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a30fc4) */
/* WARNING: Removing unreachable block (ram,0x000101a30ff4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a30fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dec6d8));
  return;
}



/* Entry: 101a3103c; end: 101a3105b;  */

void FUN_101a3103c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f12b0);
  return;
}



/* Entry: 101a3105c; end: 101a310d3;  */

void FUN_101a3105c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a310d4;
  plVar1[0xc] = param_3;
  plVar1[0xd] = param_2;
  plVar2 = (long *)0x3c0;
  func_0x000107c615b8();
  plVar1[0xe] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = (long)FUN_101a311f0;
  plVar2[0x5b] = param_2;
  plVar2[0x5a] = 0;
  plVar2[0x59] = 0;
  plVar2[0x58] = 0;
  plVar2[0x57] = 0;
  plVar2[0x56] = param_4;
  plVar2[0x55] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a33f10,0,0);
  return;
}



/* Entry: 101a310d4; end: 101a31147;  */

void FUN_101a310d4(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a3111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31148,0,0);
  return;
}



/* Entry: 101a31148; end: 101a3115f;  */

void FUN_101a31148(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101a3115c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a31160; end: 101a311ef;  */

void FUN_101a31160(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x60) = param_1;
  *(long *)(unaff_x22 + 0x68) = unaff_x20;
  plVar1 = (long *)0x3c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a311f0;
  plVar1[0x5b] = unaff_x20;
  plVar1[0x5a] = param_6;
  plVar1[0x59] = param_5;
  plVar1[0x58] = param_4;
  plVar1[0x57] = param_3;
  plVar1[0x56] = param_2;
  plVar1[0x55] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a33f10,0,0);
  return;
}



/* Entry: 101a311f0; end: 101a3125b;  */

void FUN_101a311f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  *(undefined8 *)(lVar1 + 0x88) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a31238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a3125c,0,0);
  return;
}



/* Entry: 101a3125c; end: 101a314b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a3125c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar10;
  
  lVar11 = *(long *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112dec700);
  iVar9 = (int)uVar10;
  uVar12 = 0xd000000000000043;
  func_0x000107c5fadc(0xd000000000000043,0x800000010efc97b0);
  func_0x000107c3ebd4();
  *(char *)(unaff_x22 + 0xb8) = (char)uVar10;
  func_0x000107c61170(uVar12);
  puVar3 = (undefined8 *)0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc98e0);
  func_0x000107c3ebd4();
  func_0x000107c61170();
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x90) = puVar3;
  func_0x000107c61428();
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  uVar12 = 0xd000000000000023;
  func_0x000100029b28(0xd000000000000023,0x800000010efc9900);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  func_0x000107c61170(uVar10);
  func_0x000107c2bad0();
  func_0x000107c61180();
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  if (lVar11 != 0) {
    func_0x000107c5edb4(uVar4,lVar11);
    func_0x000107c61170(lVar11);
  }
  lVar13 = *(long *)(unaff_x22 + 0x68);
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar4,lVar11 == 0,1,lVar5);
  uVar12 = 0;
  uVar10 = *(undefined8 *)(lVar13 + _DAT_112dec6e8);
  if (iVar9 != 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c2bad4(uVar12);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = 0;
  func_0x000103aeb250(0);
  uVar7 = uVar4;
  func_0x000103ae92b8(uVar4,uVar1,uVar2,uVar14,uVar10,uVar12,uVar6);
  *(ulong *)(unaff_x22 + 0xa0) = uVar7;
  FUN_101a39350(uVar4,0x112d36580,&UNK_10d9016d0);
  func_0x000107c615c0(uVar4);
  plVar8 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101a314b4;
                    /* WARNING: Could not recover jumptable at 0x000101a314b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab34c)();
  return;
}



/* Entry: 101a314b4; end: 101a31507;  */

void FUN_101a314b4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31508,0,0);
  return;
}



/* Entry: 101a31508; end: 101a3169b;  */

void FUN_101a31508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb0);
    iVar6 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar6 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x58,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined1 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61428(puVar3,unaff_x22 + 0x28,0,0);
    uVar8 = *puVar3;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar8);
    FUN_101a3532c(uVar5,uVar2);
    func_0x0001000b44c0(uVar4,uVar1);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a31604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined1 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61428(puVar3,unaff_x22 + 0x40,0,0);
  uVar8 = *puVar3;
  func_0x000107c61174(uVar8);
  func_0x000100069b5c(uVar7);
  func_0x000107c61170(uVar8);
  FUN_101a3532c(uVar5,uVar2);
  func_0x0001000b44c0(uVar4,uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a31698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9);
  return;
}



/* Entry: 101a3169c; end: 101a317cf; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl transcodeForSnapDocEditorWithSnapDoc:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a3169c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  uVar2 = *(undefined8 *)(param_4 + _DAT_11303c240);
  puVar1 = &UNK_11042e340;
  func_0x000107c613fc(&UNK_11042e340,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(long *)(puVar1 + 0x20) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000104887c7c(uVar2,0,0x40,4,0xd000000000000031,0x800000010efc9af0,&UNK_10d9b8648,puVar1);
  func_0x000107c61574(puVar1);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101a317d0; end: 101a319a7;  */

undefined *
FUN_101a317d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&puStack_90 - extraout_x8;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fcfc(lVar7);
  lVar3 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,0,1,lVar3);
  puVar4 = &UNK_11042e1b0;
  func_0x000107c613fc(&UNK_11042e1b0,0x60,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  *(undefined8 *)(puVar4 + 0x40) = param_4;
  *(undefined8 *)(puVar4 + 0x48) = param_5;
  *(undefined8 *)(puVar4 + 0x50) = param_6;
  *(undefined **)(puVar4 + 0x58) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000100cc3464(param_3,param_4);
  func_0x000100cc3464(param_5,param_6);
  func_0x000107c61174(puVar2);
  uVar5 = 0;
  func_0x0001000abba4(0,0,lVar7,&UNK_10d9b85e8,puVar4);
  pcStack_70 = FUN_101a38db4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11042e1c8;
  ppuVar6 = &puStack_90;
  uStack_68 = uVar5;
  func_0x000107c60bc4(ppuVar6);
  uVar1 = uStack_68;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c53164(puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c60bd0(ppuVar6);
  return puVar2;
}



/* Entry: 101a319a8; end: 101a319db;  */

void FUN_101a319a8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a319dc,0,0);
  return;
}



/* Entry: 101a319dc; end: 101a31a83;  */

void FUN_101a319dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x80) = param_1;
  func_0x000107c61428();
  uVar8 = *param_1;
  func_0x000107c61174(uVar8);
  uVar9 = 0xd000000000000021;
  func_0x000100029b28(0xd000000000000021,0x800000010efc98b0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  func_0x000107c61170(uVar8);
  plVar10 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101a31a84;
  lVar1 = *(long *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar11 = *(long *)(unaff_x22 + 0x40);
  plVar10[0xc] = lVar3;
  plVar10[0xd] = lVar11;
  plVar7 = (long *)0x3c0;
  func_0x000107c615b8();
  plVar10[0xe] = (long)plVar7;
  *plVar7 = (long)plVar10;
  plVar7[1] = (long)FUN_101a311f0;
  plVar7[0x5b] = lVar11;
  plVar7[0x5a] = lVar4;
  plVar7[0x59] = lVar1;
  plVar7[0x58] = lVar5;
  plVar7[0x57] = lVar2;
  plVar7[0x56] = lVar6;
  plVar7[0x55] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a33f10,0,0);
  return;
}



/* Entry: 101a31a84; end: 101a31aef;  */

void FUN_101a31a84(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_101a31af0;
  }
  else {
    pcVar1 = FUN_101a31b68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a31af0; end: 101a31b67;  */

void FUN_101a31af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x78),param_2,uVar3);
  func_0x000107c615e8(uVar3);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a31b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a31b68; end: 101a31bff;  */

void FUN_101a31b68(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = uVar4;
  func_0x000107c5ed2c(uVar4);
  func_0x000107c43b70(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar4);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a31bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a31c00; end: 101a31d2f; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl transcodeForSnapDocEditorCancellableWithSnapDoc:configuration:progressHandler:statusHandler:] */

void FUN_101a31c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_11042e188;
    func_0x000107c613fc(&UNK_11042e188,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    uVar1 = 0x101a39790;
  }
  if (param_6 == 0) {
    puVar5 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar5 = &UNK_11042e160;
    func_0x000107c613fc(&UNK_11042e160,0x18,7);
    *(long *)(puVar5 + 0x10) = param_6;
    uVar4 = 0x101a38cb4;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101a317d0(param_3,param_4,uVar1,puVar3,uVar4,puVar5);
  func_0x000100cc3324(uVar4,puVar5);
  func_0x000100cc3324(uVar1,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101a31d30; end: 101a31d8b;  */

void FUN_101a31d30(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_2;
  *(long *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a31d8c;
  plVar1[7] = param_3;
  plVar1[8] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31ff4,0,0);
  return;
}



/* Entry: 101a31d8c; end: 101a31df3;  */

void FUN_101a31d8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a31dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31df4,0,0);
  return;
}



/* Entry: 101a31df4; end: 101a31ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a31df4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112dec6e8);
  func_0x000107c42428(uVar2,param_2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = 0;
  func_0x000103aeb250(0);
  func_0x000103ae9a54(uVar4,uVar1,uVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a31ea4;
                    /* WARNING: Could not recover jumptable at 0x000101a31ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab34c)();
  return;
}



/* Entry: 101a31ea4; end: 101a31ef7;  */

void FUN_101a31ea4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(undefined1 *)(lVar1 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31ef8,0,0);
  return;
}



/* Entry: 101a31ef8; end: 101a31fdb;  */

void FUN_101a31ef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x0001000b44c0(uVar5,uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x18);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c615e8(uVar5);
    func_0x0001000b44c0(uVar1,uVar2);
    *puVar6 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a31fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a31fdc; end: 101a31ff3;  */

void FUN_101a31fdc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31ff4,0,0);
  return;
}



/* Entry: 101a31ff4; end: 101a32093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a31ff4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a32094;
                    /* WARNING: Could not recover jumptable at 0x000101a32090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),0,0,uVar2,lVar3);
  return;
}



/* Entry: 101a32094; end: 101a321b7;  */

void FUN_101a32094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(undefined8 *)(lVar2 + 0x58) = param_2;
  *(undefined8 *)(lVar2 + 0x60) = param_3;
  *(undefined8 *)(lVar2 + 0x68) = param_4;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101a320fc;
  }
  else {
    pcVar1 = FUN_101a322f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a321b8; end: 101a322f7;  */

void FUN_101a321b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x80);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
    puVar5 = (undefined8 *)0x0;
    param_2 = 0xf000000000000000;
  }
  else {
    puVar4 = puVar6;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
      FUN_101a38c00();
      func_0x000107c613f8(&UNK_11042e3d8,puVar4,0,0);
      *puVar4 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
      func_0x0001000b44c0(uVar7,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a322f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar5 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x0001000b44c0(uVar7,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a32274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5,param_2);
  return;
}



/* Entry: 101a322f8; end: 101a3232b;  */

void FUN_101a322f8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101a32328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a3232c; end: 101a3237f;  */

void FUN_101a3232c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar3);
  func_0x0001000b44c0(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a3237c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a32380; end: 101a32477; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl generateOverlayForSnapDocEditorWithSnapDoc:] */

void FUN_101a32380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  puVar1 = &UNK_11042e0e8;
  func_0x000107c613fc(&UNK_11042e0e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0xce;
  func_0x000104887c7c(0xce,0,0x40,4,0xd000000000000029,0x800000010efc9880,&UNK_10d9b85b0,puVar1);
  func_0x000107c61574(puVar1);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101a32478; end: 101a324df;  */

void FUN_101a32478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a324e0,0,0);
  return;
}



/* Entry: 101a324e0; end: 101a32ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a324e0(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long unaff_x22;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar16 = *(long *)(unaff_x22 + 0xd0);
  uVar12 = *(ulong *)(*(long *)(unaff_x22 + 200) + _DAT_11303c310);
  puVar4 = (undefined8 *)PTR_PTR_1126bf7a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar13 = *(ulong *)(lVar16 + _DAT_11303c208);
  uVar5 = uVar13;
  func_0x000107c41828(uVar13);
  func_0x000107c2baec(puVar4,uVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2baf0(puVar4,uVar13);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bae8(puVar4,*(undefined8 *)(lVar16 + _DAT_11303c210));
  func_0x000107c61180();
  func_0x000107c61170();
  uVar6 = *(undefined8 *)(lVar16 + _DAT_11303c220);
  func_0x000107c5fadc(uVar6,((undefined8 *)(lVar16 + _DAT_11303c220))[1]);
  func_0x000107c2baf4(puVar4,uVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar16 + _DAT_11303c230);
  func_0x000107c5fadc(uVar6,((undefined8 *)(lVar16 + _DAT_11303c230))[1]);
  func_0x000107c2bafc(puVar4,uVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar6);
  if (((undefined8 *)(lVar16 + _DAT_11303c238))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar16 + _DAT_11303c238);
    func_0x000107c5fadc(uVar6);
  }
  lVar16 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c2bb20(puVar4,uVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar6);
  puVar8 = (undefined8 *)(lVar16 + _DAT_11303c228);
  uVar6 = *puVar8;
  func_0x000107c5fadc(uVar6,puVar8[1]);
  func_0x000107c2baf8(puVar4,uVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar6);
  puVar8 = (undefined8 *)(lVar16 + _DAT_11303c250);
  if (puVar8[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar8;
    func_0x000107c5fadc(uVar6);
  }
  lVar16 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c2bb1c(puVar4,uVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar6);
  lVar16 = *(long *)(lVar16 + _DAT_11303c258);
  if (lVar16 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c2bb30(puVar4,lVar16);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar16);
  }
  uVar17 = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0xe8) + _DAT_112dec700);
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc8e20);
  uVar2 = uVar17;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar6);
  uVar5 = uVar12;
  FUN_101a37cb4();
  uVar14 = uVar12;
  func_0x000107c309c0();
  func_0x000107c61180();
  uVar18 = uVar14;
  func_0x000107c30970();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  uVar6 = 0;
  func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar14 = uVar18;
  func_0x000107c5fc54(uVar18,uVar6);
  func_0x000107c61170(uVar18);
  if (uVar14 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar18 = uVar14;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar14);
  if (uVar18 == 1) {
    uVar14 = uVar12;
    func_0x000107c309c0();
    func_0x000107c61180();
    uVar18 = uVar14;
    func_0x000107c30970();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    uVar14 = uVar18;
    func_0x000107c5fc54(uVar18,uVar6);
    func_0x000107c61170(uVar18);
    if (uVar14 >> 0x3e == 0) {
      uVar18 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar18 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar18 = uVar14;
      }
      func_0x000107c60480();
    }
    if (uVar18 != 0) {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a32ec4);
          (*pcVar1)();
        }
        uVar18 = *(ulong *)(uVar14 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar18 = 0;
        func_0x000101a37938(0,uVar14,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      func_0x000107c6142c(uVar14);
      uVar14 = uVar18;
      func_0x000107c30980();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      uVar6 = 0;
      func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
      uVar18 = uVar14;
      func_0x000107c5fc54(uVar14,uVar6);
      func_0x000107c61170(uVar14);
      if (uVar18 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar14 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar14 = uVar18;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar18);
      uVar15 = (uint)(uVar14 != 1);
      goto LAB_101a32940;
    }
    func_0x000107c6142c(uVar14);
  }
  uVar15 = 1;
LAB_101a32940:
  uVar14 = uVar12;
  FUN_101a38374();
  uVar6 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc9820);
  uVar3 = uVar17;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar6);
  uVar2 = uVar3 | uVar15 | uVar2 | (uint)uVar14 | (uint)uVar5;
  if ((uVar2 & 1) != 0) {
    func_0x000107c2bb08(0x4090e00000000000,0x409e000000000000,puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  uVar5 = uVar12;
  func_0x000101a38600();
  func_0x000107c49dd0();
  uVar2 = uVar2 ^ 1;
  if ((((uVar2 & 1) == 0) && ((uVar5 & 1) != 0)) && ((uVar13 & 1) == 0)) {
    func_0x000107c308b8(0x4090e00000000000,0x409e000000000000,0x500);
    func_0x000107c308bc(2);
    func_0x000107c2bb04(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c2bb00(puVar4,1400000);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if ((((uint)uVar14 | uVar2) & 1) == 0) {
    uVar6 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc9850);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar6);
    if (uVar17 != 0) {
      func_0x000107c2bb28(puVar4,1);
      func_0x000107c61180();
      func_0x000107c61170();
    }
  }
  lVar16 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c2bb14(0x3ff0000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb0c(puVar4,*(undefined8 *)(lVar16 + _DAT_11303c218));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb24(puVar4,*(undefined1 *)(lVar16 + _DAT_11303c248));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb2c(puVar4,1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar7 = PTR_PTR_1126c4a90;
  func_0x000107c610f8(PTR_PTR_1126c4a90);
  func_0x000107c453e4();
  func_0x000107c61174(uVar12);
  puVar8 = puVar4;
  func_0x000107c2bb34(puVar4);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c2bb44(puVar7);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126de9f0;
  func_0x000107c610f8();
  func_0x000107c2bad8();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  lVar16 = 0x112dec740;
  FUN_101a378c0(0x112dec740,&PTR_PTR_1126de9f0,0x112dec748,&UNK_10d9b8548);
  func_0x000107c613fc();
  *(undefined8 *)(lVar16 + 0x18) = 3;
  *(undefined8 *)(lVar16 + 0x10) = 1;
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a32ec8);
    (*pcVar1)();
  }
  *(undefined **)(lVar16 + 0x20) = puVar10;
  puVar9 = PTR_PTR_1126bf7c0;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x000101a39390(0,0x112dec740,&PTR_PTR_1126de9f0);
  func_0x000107c61174(puVar10);
  lVar11 = lVar16;
  func_0x000107c5fc48(lVar16,uVar6);
  func_0x000107c61574(lVar16);
  func_0x000107c2bac8(puVar9,uVar12,lVar11);
  *(undefined **)(unaff_x22 + 0x108) = puVar9;
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170();
  FUN_101a330bc();
  *(undefined8 **)(unaff_x22 + 0x110) = puVar4;
  puVar8 = puVar4;
  func_0x0001000d224c(unaff_x22 + 0xb0);
  lVar16 = *(long *)(unaff_x22 + 0xb0);
  *(long *)(unaff_x22 + 0x118) = lVar16;
  if (lVar16 == 0) {
    FUN_101a38c00();
    func_0x000107c613f8(&UNK_11042e3d8,puVar8,0,0);
    *puVar8 = 2;
    func_0x000107c61654();
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a32e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar19 = *(long *)(unaff_x22 + 0xd8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a32ec8;
  lVar11 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar11,1);
  puVar7 = &UNK_11042e048;
  func_0x000107c613fc(&UNK_11042e048,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar6);
  puVar9 = &UNK_11042e070;
  func_0x000107c613fc(&UNK_11042e070,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(long *)(puVar9 + 0x18) = lVar11;
  *(code **)(unaff_x22 + 0x70) = FUN_101a38c40;
  *(undefined **)(unaff_x22 + 0x78) = puVar9;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a37074;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11042e088;
  lVar11 = unaff_x22 + 0x50;
  func_0x000107c60bc4(lVar11);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined **)(unaff_x22 + 0x80) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x90) = &UNK_1015298e4;
    *(undefined **)(unaff_x22 + 0x98) = &UNK_11042e0b0;
    lVar19 = unaff_x22 + 0x80;
    func_0x000107c60bc4(lVar19);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(uVar20);
  }
  func_0x000107c5c308(lVar16);
  func_0x000107c60bd0(lVar19);
  func_0x000107c60bd0(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a32ec8; end: 101a32f33;  */

void FUN_101a32ec8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0xb8);
    pcVar1 = FUN_101a32f34;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a33064;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a32f34; end: 101a33063;  */

void FUN_101a32f34(void)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x128);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c2bad0();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    FUN_101a38c00();
    func_0x000107c613f8(&UNK_11042e3d8,puVar3,0,0);
    *puVar3 = 3;
    func_0x000107c61654();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x128));
    func_0x000107c61170(uVar5);
    func_0x000107c615c0(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar1 = *(long *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c5edb4(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar1 + 0x20))(uVar8,uVar2,uVar7);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a33060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


