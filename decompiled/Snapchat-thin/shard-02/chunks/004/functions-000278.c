/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cbe270; end: 101cbe32f;  */

undefined8 * FUN_101cbe270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 101cbe330; end: 101cbe37b;  */

undefined8 * FUN_101cbe330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101cbe37c; end: 101cbe433;  */

int FUN_101cbe37c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101cbe434; end: 101cbe6b3;  */

void FUN_101cbe434(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  
  lVar12 = *(long *)(unaff_x22 + 0x10);
  uVar16 = *(ulong *)(lVar12 + 0x10);
  uVar15 = 0xffffffffffffffff;
  puVar6 = (undefined8 *)(lVar12 + 8);
  do {
    puVar14 = puVar6;
    uVar15 = uVar15 + 1;
    if (uVar16 == uVar15) {
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar16 == 0) goto LAB_101cbe66c;
      uVar15 = 0;
      goto LAB_101cbe4ec;
    }
    puVar6 = puVar14 + 7;
  } while (puVar14[4] != 0);
  FUN_101cbf52c(puVar14[3],0,puVar14[5],puVar14[6],puVar14[7],puVar14[8],puVar14[9]);
  FUN_101cbf52c(0,1,0,0,0,0,0);
LAB_101cbe688:
                    /* WARNING: Could not recover jumptable at 0x000101cbe6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
LAB_101cbe4ec:
  uVar3 = uVar15;
  if (uVar15 <= uVar16) {
    uVar3 = uVar16;
  }
  plVar17 = (long *)(lVar12 + 0x50 + uVar15 * 0x38);
  uVar15 = uVar15 + 1;
  do {
    if (uVar15 - uVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101cbe6b4);
      (*pcVar7)();
    }
    lVar18 = plVar17[-5];
    if (lVar18 != 0) {
      lVar1 = plVar17[-1];
      lVar4 = *plVar17;
      lVar2 = plVar17[-3];
      lVar5 = plVar17[-2];
      lVar19 = plVar17[-4];
      lVar20 = plVar17[-6];
      lVar8 = lVar4;
      func_0x000107c61174();
      func_0x000107c61434(lVar2);
      func_0x000107c61174(lVar1);
      func_0x000107c61174();
      func_0x000107c61434(lVar18);
      func_0x000107c61174(lVar5);
      func_0x0001013c82f8(lVar20,lVar18,lVar19,lVar2,lVar5,lVar1,lVar4);
      if (lVar4 != 0) break;
    }
    uVar15 = uVar15 + 1;
    plVar17 = plVar17 + 7;
    if (uVar15 - uVar16 == 1) goto LAB_101cbe66c;
  } while( true );
  puVar10 = puVar11;
  func_0x000107c61550();
  if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
     (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar11) {
        puVar9 = puVar11;
      }
      func_0x000107c60480(puVar9);
    }
    puVar10 = (undefined *)0x0;
    FUN_101cbe92c(0,puVar9 + 1,1,puVar11);
  }
  uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
  uVar3 = *(ulong *)(uVar13 + 0x10);
  puVar11 = puVar10;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar3) {
    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
    FUN_101cbe92c(puVar11,uVar3 + 1,1,puVar10);
    uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar13 + 0x10) = uVar3 + 1;
  *(long *)(uVar13 + uVar3 * 8 + 0x20) = lVar8;
  if (uVar15 == uVar16) goto LAB_101cbe66c;
  goto LAB_101cbe4ec;
LAB_101cbe66c:
  FUN_101cbefa8(puVar11,*(undefined8 *)(unaff_x22 + 0x28),*(undefined1 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c6142c(puVar11);
  goto LAB_101cbe688;
}



/* Entry: 101cbe6b4; end: 101cbe6d3;  */

void FUN_101cbe6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cbe6d4,0,0);
  return;
}



/* Entry: 101cbe6d4; end: 101cbe70b;  */

void FUN_101cbe6d4(void)

{
  long unaff_x22;
  
  FUN_101cbefa8(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined1 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x10),
                *(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101cbe708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cbe70c; end: 101cbe92b;  */

/* WARNING: Possible PIC construction at 0x000101cbe7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cbe7e0) */

void FUN_101cbe70c(undefined8 param_1,ulong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar3 = param_2;
  func_0x000101cbeddc(param_2,uVar2);
  if ((uVar3 & 1) != 0) {
    puVar4 = &UNK_110468ff0;
    func_0x000107c613fc(&UNK_110468ff0,0x39,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar2;
    *(undefined8 *)(puVar4 + 0x28) = uVar5;
    *(ulong *)(puVar4 + 0x30) = param_2;
    puVar4[0x38] = param_3;
    func_0x000107c615f0(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_1);
    func_0x0001001ca524(0,0,0x20,0,0,0,&UNK_10d9f24f8,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
  return;
}



/* Entry: 101cbe92c; end: 101cbea53;  */

ulong FUN_101cbe92c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbea54);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101cbea54(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbea50);
      (*pcVar1)();
    }
    FUN_101cbead4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101cbea54; end: 101cbead3;  */

undefined * FUN_101cbea54(undefined *param_1,undefined *param_2)

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
    FUN_101cbebcc();
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



/* Entry: 101cbead4; end: 101cbebcb;  */

long FUN_101cbead4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101cbebc8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cbebcc);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101cbf458(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101cbf458(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101cbebc4);
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



/* Entry: 101cbebcc; end: 101cbec27;  */

void FUN_101cbebcc(void)

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
    FUN_101cbf458();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e152f8;
  plVar5 = (long *)&UNK_10d9f2500;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101cbec28; end: 101cbeedb;  */

ulong FUN_101cbec28(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cbed0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cbed10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b5b00;
    func_0x000107c61168(PTR_PTR_1126b5b00);
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
    puVar4 = PTR_PTR_1126b5b00;
    func_0x000107c61168(PTR_PTR_1126b5b00);
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
  FUN_101cbf458(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101cbeddc);
  (*pcVar2)();
}



/* Entry: 101cbeedc; end: 101cbef6b;  */

void FUN_101cbeedc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x40;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101cbef6c;
  *(undefined1 *)(plVar5 + 6) = uVar4;
  plVar5[4] = lVar3;
  plVar5[5] = lVar6;
  plVar5[2] = lVar1;
  plVar5[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cbe6d4,0,0);
  return;
}



/* Entry: 101cbef6c; end: 101cbefa7;  */

void FUN_101cbef6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cbefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cbefa8; end: 101cbf457;  */

/* WARNING: Possible PIC construction at 0x000101cbf038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cbf320) */
/* WARNING: Removing unreachable block (ram,0x000101cbf3b0) */
/* WARNING: Removing unreachable block (ram,0x000101cbf3c8) */
/* WARNING: Removing unreachable block (ram,0x000101cbf310) */
/* WARNING: Removing unreachable block (ram,0x000101cbf1f4) */
/* WARNING: Removing unreachable block (ram,0x000101cbf434) */
/* WARNING: Removing unreachable block (ram,0x000101cbf1fc) */
/* WARNING: Removing unreachable block (ram,0x000101cbf25c) */
/* WARNING: Removing unreachable block (ram,0x000101cbf278) */
/* WARNING: Removing unreachable block (ram,0x000101cbf1e4) */
/* WARNING: Removing unreachable block (ram,0x000101cbf0f0) */
/* WARNING: Removing unreachable block (ram,0x000101cbf194) */
/* WARNING: Removing unreachable block (ram,0x000101cbf1ac) */
/* WARNING: Removing unreachable block (ram,0x000101cbf03c) */
/* WARNING: Removing unreachable block (ram,0x000101cbf04c) */
/* WARNING: Removing unreachable block (ram,0x000101cbf408) */
/* WARNING: Removing unreachable block (ram,0x000101cbf40c) */
/* WARNING: Removing unreachable block (ram,0x000101cbf410) */
/* WARNING: Removing unreachable block (ram,0x000101cbf064) */
/* WARNING: Removing unreachable block (ram,0x000101cbf318) */

void FUN_101cbefa8(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xffffffffffffff8;
  lVar4 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x000107c4ab80();
    func_0x000108436108();
    func_0x000107c61180();
    lVar2 = param_2;
    if (param_2 == 0) {
      func_0x000107c5faec();
      lVar3 = lVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar4);
      lVar2 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c5faec(param_2);
    func_0x000107c61174(param_2);
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbf444);
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x000107c61174(lVar2);
    }
    else {
      lVar2 = 0;
      FUN_101cbec28(0,param_1);
    }
    func_0x000107c61174();
    func_0x000103271d84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101cbf458; end: 101cbf49b;  */

void FUN_101cbf458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e152f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e152f0 = puVar1;
  return;
}



/* Entry: 101cbf49c; end: 101cbf52b;  */

void FUN_101cbf49c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x40;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101cbf544;
  *(undefined1 *)(plVar6 + 6) = uVar5;
  plVar6[4] = lVar4;
  plVar6[5] = lVar7;
  plVar6[2] = lVar1;
  plVar6[3] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cbe434,0,0,uVar2);
  return;
}



/* Entry: 101cbf52c; end: 101cbf547;  */

/* WARNING: Possible PIC construction at 0x0001013c8330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c8334) */

void FUN_101cbf52c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 == 1) {
    return;
  }
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 101cbf548; end: 101cbf587;  */

undefined8 FUN_101cbf548(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101cc03e8(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101cbf588; end: 101cbf59f;  */

void FUN_101cbf588(void)

{
  func_0x0001065ed480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101cbf5a0; end: 101cbf5d7;  */

void FUN_101cbf5a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101cbf5d8; end: 101cbf5ef;  */

void FUN_101cbf5d8(void)

{
  func_0x0001065ed544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101cbf5f0; end: 101cbf64f; -[_TtC22SCContextNotifications27ContextNotificationsManager init] */

void FUN_101cbf5f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextNotifications.ContextNotificationsManager",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbf61c);
  (*pcVar1)();
}



/* Entry: 101cbf650; end: 101cbf6a7; -[_TtC22SCContextNotifications27ContextNotificationsManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101cbf66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cbf68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cbf670) */
/* WARNING: Removing unreachable block (ram,0x000101cbf690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbf650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e15308));
  return;
}



/* Entry: 101cbf6a8; end: 101cbf703; -[_TtC22SCContextNotifications27ContextNotificationsManager notificationWillBegin] */

/* WARNING: Possible PIC construction at 0x000101cbf6f0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbf6a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e15300);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5ae34(0x4000000000000000);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cbf704; end: 101cbf993;  */

undefined1  [16]
FUN_101cbf704(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  
  if ((((param_3 == 0) || (lVar1 = param_2, func_0x000107c5fb5c(param_2,param_3), lVar1 != 0)) ||
      (param_5 == 0)) || (lVar1 = param_4, func_0x000107c5fb5c(param_4,param_5), lVar1 != 0)) {
    puVar2 = &UNK_1104690b0;
    func_0x000107c613fc(&UNK_1104690b0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104690d8;
    func_0x000107c613fc(&UNK_1104690d8,0x50,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_2;
    *(long *)(puVar3 + 0x28) = param_3;
    *(long *)(puVar3 + 0x30) = param_4;
    *(long *)(puVar3 + 0x38) = param_5;
    *(undefined8 *)(puVar3 + 0x40) = param_6;
    *(undefined8 *)(puVar3 + 0x48) = param_7;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_3);
    pcVar4 = FUN_101cc054c;
  }
  else {
    puVar3 = &UNK_110469100;
    func_0x000107c613fc(&UNK_110469100,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_6;
    *(undefined8 *)(puVar3 + 0x18) = param_7;
    pcVar4 = FUN_101cc057c;
  }
  func_0x000100ccd204(param_6,param_7);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = pcVar4;
  return auVar5;
}



/* Entry: 101cbf994; end: 101cbfaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbf994(long param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      FUN_101cc05d8(param_3,param_4,param_5,param_6,param_7);
      lVar5 = *(long *)(puVar1 + _DAT_112e15308);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c3d788();
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c61604(puVar1 + _DAT_112e15318,param_3);
    }
    else {
      puVar2 = PTR_PTR_1126afca8;
      func_0x000107c61168(PTR_PTR_1126afca8);
      puVar3 = puVar2;
      FUN_101cc14d0();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c51718();
      func_0x000107c61180();
      func_0x000107c5aeac(0x4000000000000000,puVar2);
      func_0x000107c61170(puVar3);
      param_3 = puVar1;
      puVar1 = puVar4;
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101cbfaec; end: 101cbfc4b; -[_TtC22SCContextNotifications27ContextNotificationsManager initiatePostSendNotificationWithType:userId:groupConversationId:completion:] */

void FUN_101cbfaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c60bc4();
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar4 = &UNK_110469218;
    func_0x000107c613fc(&UNK_110469218,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    uVar3 = 0x101cc0970;
  }
  func_0x000107c61174(param_1);
  FUN_101cbf704(param_3,param_4,uVar1,param_5,param_2,uVar3,puVar4);
  func_0x000100ccd214(uVar3,puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101cbfc4c;
  puStack_68 = &UNK_1104691e0;
  uStack_60 = param_3;
  lStack_58 = param_4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(lStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 101cbfc4c; end: 101cbfc87;  */

void FUN_101cbfc4c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101cbfc88; end: 101cc00a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbfc88(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,long param_6
                  ,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined4 param_10,
                  undefined4 param_11,byte param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((int)param_1 != 5) {
    if (param_3 != 0) {
      uVar5 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar5 = param_3 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) goto LAB_101cbfce8;
    }
    if (param_5 == 0) {
      return;
    }
    uVar5 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      return;
    }
  }
LAB_101cbfce8:
  FUN_101cc00a4();
  lVar9 = *(long *)(unaff_x20 + _DAT_112e15308);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e15310);
  puVar2 = &UNK_1104690b0;
  func_0x000107c613fc(&UNK_1104690b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110469128;
  func_0x000107c613fc(&UNK_110469128,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar9;
  puVar3[0x20] = param_12 & 1;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = param_8;
  *(undefined8 *)(puVar3 + 0x38) = param_9;
  FUN_101cc1000(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(puVar3);
  func_0x000100ccd204(param_8,param_9);
  pcVar1 = FUN_101cc05a8;
  puVar2 = puVar3;
  FUN_101cc0b28(FUN_101cc05a8,puVar3);
  func_0x000107c61180();
  pcVar4 = pcVar1;
  if (param_1 < 3) {
    if (param_1 != 0) {
      if (param_1 == 1) {
        func_0x000101cc1318();
        goto LAB_101cbfe38;
      }
      if (param_1 == 2) {
        FUN_101cc1160();
        goto LAB_101cbfe38;
      }
    }
  }
  else {
    if (param_1 == 3) {
      func_0x000101cc122c();
      goto LAB_101cbfe38;
    }
    if (param_1 == 4) {
      func_0x000101cc1338();
      goto LAB_101cbfe38;
    }
    if (param_1 == 5) {
      func_0x000101cc1404();
      goto LAB_101cbfe38;
    }
  }
  FUN_101cc12fc();
LAB_101cbfe38:
  if ((param_5 == 0) || (uVar5 = param_4, func_0x000107c5fb5c(param_4,param_5), (long)uVar5 < 1)) {
    if (param_3 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c5fadc(param_2);
    }
    func_0x000107c5fadc(pcVar4,puVar2);
    func_0x000107c6142c(puVar2);
    if (param_6 == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110469140;
      ppuVar7 = &puStack_90;
      lStack_70 = param_6;
      uStack_68 = param_7;
      func_0x000107c60bc4(ppuVar7);
      uVar8 = uStack_68;
      func_0x000107c6157c(param_7);
      func_0x000107c61574(uVar8);
    }
    puVar2 = PTR_PTR_1126b1370;
    func_0x000107c610f8();
    func_0x000107c453f4();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_2);
    func_0x000107c61170(pcVar4);
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbffc0);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c5fadc(pcVar4,puVar2);
    func_0x000107c6142c(puVar2);
    if (param_6 == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110469168;
      ppuVar7 = &puStack_90;
      lStack_70 = param_6;
      uStack_68 = param_7;
      func_0x000107c60bc4(ppuVar7);
      uVar8 = uStack_68;
      func_0x000107c6157c(param_7);
      func_0x000107c61574(uVar8);
    }
    puVar2 = PTR_PTR_1126b1370;
    func_0x000107c610f8();
    func_0x000107c453f0();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_4);
    func_0x000107c61170(pcVar4);
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc00a4);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(pcVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 != 0) {
    puVar6 = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c3d788(lVar9);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(pcVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61604(unaff_x20 + _DAT_112e15318,puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101cc00a4; end: 101cc013b;  */

/* WARNING: Possible PIC construction at 0x000101cc00e8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc00a4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e15300);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112e15310);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (uVar1 == 0) {
      return;
    }
    uVar2 = uVar1;
    func_0x000107c49eac();
    if ((uVar2 & 1) == 0) {
      func_0x000107c44df0(uVar1,param_2,1);
    }
  }
  else {
    uVar2 = uVar1;
    func_0x000107c49eac();
    if ((uVar2 & 1) == 0) {
      func_0x000107c44df0(uVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101cc013c; end: 101cc0237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc013c(long param_1,long param_2,ulong param_3,long param_4,code *param_5)

{
  long lVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e15318;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_2 != 0) {
        func_0x000107c4ff7c();
        func_0x000107c615e8(param_2);
      }
      if ((param_3 & 1) != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_4 != 0) {
          func_0x000107c5ae34(0x4000000000000000);
          func_0x000107c61170(param_4);
        }
      }
      if (param_5 != (code *)0x0) {
        (*param_5)();
      }
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 101cc0238; end: 101cc03c3; -[_TtC22SCContextNotifications27ContextNotificationsManager initiateUndoableNotificationWithType:userId:groupConversationId:successBlock:undoBlock:customNotificationImage:showUndoToast:] */

/* WARNING: Possible PIC construction at 0x000101cc039c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cc03a0) */

void FUN_101cc0238(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lStack_78;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    lStack_78 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_78 = param_4;
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar6 = &UNK_1104691c8;
    func_0x000107c613fc(&UNK_1104691c8,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar1 = 0x101cc0a0c;
  }
  if (param_7 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1104691a0;
    func_0x000107c613fc(&UNK_1104691a0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_7;
    pcVar5 = FUN_101cc0964;
  }
  uVar3 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  FUN_101cbfc88(param_3,lStack_78,uVar2,param_5,param_2,uVar1,puVar6,pcVar5,puVar4,param_8,param_9);
  func_0x000100ccd214(pcVar5,puVar4);
  func_0x000100ccd214(uVar1,puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101cc03c4; end: 101cc03cb; -[_TtC22SCContextNotifications27ContextNotificationsManager initiateChatSendResultNotificationWithSuccess:] */

/* WARNING: Possible PIC construction at 0x000101cc0820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cc0824) */

void FUN_101cc03c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 & 1) == 0) {
    FUN_101cc14d0();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c51718();
  }
  else {
    FUN_101cc12fc();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5171c();
  }
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126afca8;
  func_0x000107c61168(PTR_PTR_1126afca8);
  func_0x000107c5fadc(param_3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5aeac(0x4000000000000000,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101cc03cc; end: 101cc03e7; -[_TtC22SCContextNotifications27ContextNotificationsManager initiateChatSendResultNotificationWithSuccess:type:] */

/* WARNING: Possible PIC construction at 0x000101cc092c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cc0930) */

void FUN_101cc03cc(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 & 1) == 0) {
    FUN_101cc14d0();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c51718();
    goto LAB_101cc08e4;
  }
  if (param_4 < 3) {
    if (param_4 == 0) {
LAB_101cc08b0:
      FUN_101cc12fc();
    }
    else if (param_4 == 1) {
      func_0x000101cc1318();
    }
    else {
      if (param_4 != 2) goto LAB_101cc08b0;
      FUN_101cc1160();
    }
  }
  else if (param_4 == 3) {
    func_0x000101cc122c();
  }
  else if (param_4 == 4) {
    func_0x000101cc1338();
  }
  else {
    if (param_4 != 5) goto LAB_101cc08b0;
    func_0x000101cc1404();
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5171c();
LAB_101cc08e4:
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126afca8;
  func_0x000107c61168(PTR_PTR_1126afca8);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  func_0x000107c5aeac(0x4000000000000000,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101cc03e8; end: 101cc054b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc03e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e15318,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e15308) = param_1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101cbf588;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101cbf5a0;
  puStack_78 = &UNK_110469280;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61174(param_1);
  puVar4 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112e15300) = puVar4;
  pcStack_70 = FUN_101cbf5d8;
  uStack_68 = 0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101cbf5a0;
  puStack_78 = &UNK_1104692a8;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112e15310) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cc054c; end: 101cc057b;  */

void FUN_101cc054c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101cbf820(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101cc057c; end: 101cc05a7;  */

void FUN_101cc057c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 101cc05a8; end: 101cc05d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc05a8(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_112e15318;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c4ff7c();
        func_0x000107c615e8(lVar5);
      }
      if ((bVar2 & 1) != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c5ae34(0x4000000000000000);
          func_0x000107c61170(lVar6);
        }
      }
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 101cc05d8; end: 101cc0787;  */

undefined * FUN_101cc05d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = param_2;
  if (param_1 < 3) {
    if (param_1 != 0) {
      if (param_1 == 1) {
        func_0x000101cc1318();
        goto LAB_101cc065c;
      }
      if (param_1 == 2) {
        FUN_101cc1160();
        goto LAB_101cc065c;
      }
    }
  }
  else {
    if (param_1 == 3) {
      func_0x000101cc122c();
      goto LAB_101cc065c;
    }
    if (param_1 == 4) {
      func_0x000101cc1338();
      goto LAB_101cc065c;
    }
    if (param_1 == 5) {
      func_0x000101cc1404();
      goto LAB_101cc065c;
    }
  }
  FUN_101cc12fc();
LAB_101cc065c:
  if ((param_5 == 0) || (lVar2 = param_4, func_0x000107c5fb5c(param_4,param_5), lVar2 < 1)) {
    if (param_3 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c5fadc(param_2,param_3);
    }
    puVar3 = PTR_PTR_1126b1370;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_1,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c453f4();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc0784);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = PTR_PTR_1126b1370;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c5fadc(param_1,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c453f0();
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc0788);
      (*pcVar1)();
    }
  }
  return puVar3;
}



/* Entry: 101cc0788; end: 101cc0943;  */

/* WARNING: Possible PIC construction at 0x000101cc0820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cc0824) */

void FUN_101cc0788(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_1 & 1) == 0) {
    FUN_101cc14d0();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c51718();
  }
  else {
    FUN_101cc12fc();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5171c();
  }
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126afca8;
  func_0x000107c61168(PTR_PTR_1126afca8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5aeac(0x4000000000000000,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101cc0944; end: 101cc0963;  */

void FUN_101cc0944(void)

{
  func_0x000107c61168(&PTR_PTR_112800b20);
  return;
}



/* Entry: 101cc0964; end: 101cc099f;  */

void FUN_101cc0964(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101cc096c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101cc09a0; end: 101cc09e3;  */

void FUN_101cc09a0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101cc09e4; end: 101cc0a0f;  */

void FUN_101cc09e4(long param_1,long param_2)

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



/* Entry: 101cc0a10; end: 101cc0a8f;  */

void FUN_101cc0a10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101cc0a90; end: 101cc0a97;  */

undefined8 FUN_101cc0a90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101cc0944(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  uVar1 = uVar2;
  FUN_101cc03e8();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101cc0a98; end: 101cc0acf;  */

void FUN_101cc0a98(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101cc0ad0; end: 101cc0adf;  */

void FUN_101cc0ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101cc0ae0; end: 101cc0b03;  */

void FUN_101cc0ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cc0b04; end: 101cc0b27;  */

void FUN_101cc0b04(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100aaa068();
  *param_1 = param_2;
  return;
}



/* Entry: 101cc0b28; end: 101cc0e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101cc0b28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  uVar3 = param_2;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e15430);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar2 = param_2;
  func_0x000107c6157c();
  func_0x000101cc14f4();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e15420);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000107c30a7c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112e15428) = uVar3;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5472c();
  uVar2 = *(undefined8 *)(puVar4 + _DAT_112e15420);
  uVar3 = *(undefined8 *)((long)(puVar4 + _DAT_112e15420) + 8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c59e1c(puVar4);
  func_0x000107c61170(uVar2);
  puVar5 = puVar4;
  func_0x000107c5cac0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c59c74(puVar5);
    func_0x000107c61170(puVar5);
  }
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar7 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e34(puVar4);
  func_0x000107c61170(puVar7);
  puVar5 = puVar4;
  func_0x000107c5cac0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c54adc(puVar5);
    func_0x000107c61170(puVar5);
  }
  puVar7 = puVar6;
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar7);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c539d4(0x402c000000000000);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c52df8(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c52e0c(0x3ff0000000000000);
  func_0x000107c61170(puVar5);
  func_0x000107c3d8b8(puVar4);
  func_0x000107c61574(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 101cc0e18; end: 101cc0e87; -[_TtC22SCContextNotifications30ContextNotificationsUndoButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc0e18(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e15430);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0x7070757320746f4e,0xed0000646574726f,
                      "SCContextNotifications/ContextNotificationsUndoButton.swift",0x3b,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101cc0e88);
  (*pcVar2)();
}



/* Entry: 101cc0e88; end: 101cc0ecb; -[_TtC22SCContextNotifications30ContextNotificationsUndoButton sizeThatFits:] */

undefined1  [16] FUN_101cc0e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_101cc1020();
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101cc0ecc; end: 101cc0f4f; -[_TtC22SCContextNotifications30ContextNotificationsUndoButton handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc0ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e15430);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar4,uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
    uVar3 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cc0f50; end: 101cc0faf; -[_TtC22SCContextNotifications30ContextNotificationsUndoButton initWithFrame:] */

void FUN_101cc0f50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextNotifications.ContextNotificationsUndoButton",0x35,"init(frame:)",
                      0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc0f7c);
  (*pcVar1)();
}



/* Entry: 101cc0fb0; end: 101cc0fff; -[_TtC22SCContextNotifications30ContextNotificationsUndoButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cc0fb0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e15420 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e15428));
  if (*(long *)(param_1 + _DAT_112e15430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e15430))[1]);
    return;
  }
  return;
}



/* Entry: 101cc1000; end: 101cc101f;  */

void FUN_101cc1000(void)

{
  func_0x000107c61168(&PTR_PTR_112800bf8);
  return;
}



/* Entry: 101cc1020; end: 101cc115f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101cc1020(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e15420);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112e15420))[1]);
  lVar2 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  dVar7 = 4.94065645841247e-324;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e15428);
  uVar3 = 0;
  func_0x000101315130();
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar5);
  lVar4 = lVar2;
  func_0x000100ecbca8(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100ef0820((undefined8 *)(lVar2 + 0x20));
  uVar5 = 0;
  func_0x000100eca28c(0);
  uVar3 = uVar5;
  func_0x000100ecbdec();
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c5b0a0(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  auVar8._0_8_ = (long)(dVar7 + 24.0);
  auVar8._8_8_ = 0x403c000000000000;
  return auVar8;
}



/* Entry: 101cc1160; end: 101cc12fb;  */

undefined1  [16] FUN_101cc1160(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f00a2b0);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a290);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc122c);
  (*pcVar1)();
}



/* Entry: 101cc12fc; end: 101cc1337;  */

undefined1  [16] FUN_101cc12fc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6e65735f74616863;
  func_0x000107c5fadc(0x6e65735f74616863,0xe900000000000074);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a290);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc15b4);
  (*pcVar1)();
}



/* Entry: 101cc1338; end: 101cc14cf;  */

undefined1  [16] FUN_101cc1338(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00a2f0);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a290);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc1404);
  (*pcVar1)();
}



/* Entry: 101cc14d0; end: 101cc1503;  */

undefined1  [16] FUN_101cc14d0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x745f64656c696166;
  func_0x000107c5fadc(0x745f64656c696166,0xee00646e65735f6f);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a290);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc15b4);
  (*pcVar1)();
}



/* Entry: 101cc1504; end: 101cc1637;  */

undefined1  [16] FUN_101cc1504(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a290);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cc15b4);
  (*pcVar1)();
}



/* Entry: 101cc1638; end: 101cc198f;  */

undefined8 FUN_101cc1638(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar8;
  func_0x000107c5d984(lVar8);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar1 = lVar8;
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
LAB_101cc16fc:
    lVar1 = -0x2000000000000000;
    uVar5 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) goto LAB_101cc16fc;
    uStack_60 = 0;
    lStack_58 = 0;
    func_0x000107c5fae8(lVar1,&uStack_60);
    func_0x000107c61170(lVar1);
    lVar1 = lStack_58;
    uVar5 = uStack_60;
    if (lStack_58 == 0) goto LAB_101cc16fc;
  }
  func_0x000107c3ea24();
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar3 != 0) {
    lVar8 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar8 != 0) {
      uStack_60 = 0;
      lStack_58 = 0;
      func_0x000107c5fae8(lVar8,&uStack_60);
      func_0x000107c61170(lVar8);
      lVar3 = lStack_58;
      uVar6 = uStack_60;
      if (lStack_58 != 0) goto LAB_101cc1780;
    }
  }
  lVar3 = -0x2000000000000000;
  uVar6 = 0;
LAB_101cc1780:
  puVar4 = PTR_PTR_1126b4bc0;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(uVar5,lVar1);
  func_0x000107c6142c(lVar1);
  func_0x000107c5fadc(uVar6,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c491d0();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  puVar7 = &UNK_1104693f8;
  func_0x000107c613fc(&UNK_1104693f8,0x20,7);
  *(long *)(puVar7 + 0x10) = unaff_x20;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  func_0x0001000285a8(0x112e15460,&UNK_10d9f2600);
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x000107c61174(puVar4);
  uVar5 = 0x101cc18cc;
  func_0x0001000bdd8c(0x101cc18cc,puVar7);
  func_0x0001002b0460(0);
  func_0x000107c610f8();
  func_0x00010321405c(uVar5);
  func_0x000107c61170(puVar4);
  return uVar5;
}



/* Entry: 101cc1990; end: 101cc19b3;  */

/* WARNING: Possible PIC construction at 0x000101cc199c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cc19a0) */

void FUN_101cc1990(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101cc19b4; end: 101cc1a07;  */

void FUN_101cc19b4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cc1a08; end: 101cc1a87;  */

void FUN_101cc1a08(undefined8 param_1)

{
  if (lRam0000000113495c00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6826b0);
  return;
}



/* Entry: 101cc1a88; end: 101cc1aab;  */

void FUN_101cc1a88(undefined8 *param_1,undefined8 param_2)

{
  FUN_101cc1638();
  *param_1 = param_2;
  return;
}



/* Entry: 101cc1aac; end: 101cc1c43;  */

void FUN_101cc1aac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5f80c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar5 = uVar6;
  func_0x00010002964c();
  func_0x000107c60264(lVar8,&puStack_68,uVar6,uVar5,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar6 = 0xd000000000000023;
  func_0x000107c5ffec(0xd000000000000023,0x800000010f00a380,lVar3,lVar8,puVar7,0);
  uRam0000000113495c18 = uVar6;
  return;
}



/* Entry: 101cc1c44; end: 101cc1d0b;  */

void FUN_101cc1c44(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_38 = 0;
    func_0x000100854cb0(&uStack_38);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar2 = &UNK_110469430;
    func_0x000107c613fc(&UNK_110469430,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar3;
    func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
    func_0x000107c613fc();
    func_0x000107c61174(uVar3);
    func_0x0001000b64ac(FUN_101cc1db8,puVar2);
  }
  return;
}



/* Entry: 101cc1d0c; end: 101cc1d67;  */

void FUN_101cc1d0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cc1d68; end: 101cc1d87;  */

void FUN_101cc1d68(void)

{
  FUN_101cc1c44();
  return;
}



/* Entry: 101cc1d88; end: 101cc1db7;  */

void FUN_101cc1d88(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101cc1db8; end: 101cc1ed3;  */

void FUN_101cc1db8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (lRam0000000113495c10 != -1) {
    func_0x000107c61568(0x113495c10,FUN_101cc1aac);
  }
  pcStack_50 = FUN_101cc1ed4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1010a2bbc;
  puStack_58 = &UNK_110469448;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4329c(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101cc1ed4; end: 101cc1ef7;  */

void FUN_101cc1ed4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 101cc1ef8; end: 101cc1f13;  */

void FUN_101cc1ef8(long param_1,long param_2)

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



/* Entry: 101cc1f14; end: 101cc1f33;  */

void FUN_101cc1f14(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101cc1f34; end: 101cc1f9b;  */

void FUN_101cc1f34(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e155f8,&UNK_10d9f26e0);
  func_0x000107c613fc();
  pcVar1 = FUN_101cc1f9c;
  func_0x0001000bdd8c(FUN_101cc1f9c,0);
  func_0x000100299be4(0);
  func_0x000107c610f8();
  func_0x0001039b8398(pcVar1);
  return;
}



/* Entry: 101cc1f9c; end: 101cc1fef;  */

void FUN_101cc1f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000101cc244c();
  uVar2 = uVar1;
  func_0x000107c613fc();
  FUN_101cc246c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110469528;
  *param_1 = uVar2;
  return;
}



/* Entry: 101cc1ff0; end: 101cc1fff;  */

void FUN_101cc1ff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cc2000; end: 101cc206b;  */

void FUN_101cc2000(undefined8 param_1)

{
  if (lRam0000000112e15628 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68275c);
  return;
}



/* Entry: 101cc206c; end: 101cc20df;  */

void FUN_101cc206c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e155f8,&UNK_10d9f26e0);
  func_0x000107c613fc();
  pcVar1 = FUN_101cc1f9c;
  func_0x0001000bdd8c(FUN_101cc1f9c,0);
  uVar2 = 0;
  func_0x000100299be4(0);
  func_0x000107c610f8();
  func_0x0001039b8398(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101cc20e0; end: 101cc2107;  */

void FUN_101cc20e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112e15778 = puVar1;
  return;
}



/* Entry: 101cc2108; end: 101cc241f;  */

void FUN_101cc2108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  if (lRam0000000112e15770 != -1) {
    func_0x000107c61568(0x112e15770,FUN_101cc20e0);
  }
  lVar4 = lRam0000000112e15778;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar5 = &UNK_110469548;
    func_0x000107c613fc(&UNK_110469548,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined **)(puVar5 + 0x28) = puVar3;
    func_0x0001000285a8(0x112e15780,&UNK_10dc18400);
    func_0x000107c613fc();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar1);
    func_0x0001000b64ac(FUN_101cc2594,puVar5);
  }
  else {
    func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
    lStack_48 = lVar4;
    func_0x000100854cb0(&lStack_48);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 101cc2420; end: 101cc246b;  */

void FUN_101cc2420(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cc246c; end: 101cc2573;  */

void FUN_101cc246c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00a3f0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  return;
}



/* Entry: 101cc2574; end: 101cc2593;  */

void FUN_101cc2574(void)

{
  FUN_101cc2108();
  return;
}



/* Entry: 101cc2594; end: 101cc25c7;  */

void FUN_101cc2594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_110469570;
  func_0x000107c613fc(&UNK_110469570,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  uStack_50 = 0x101cc25a0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110469588;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101cc25c8; end: 101cc26ab;  */

void FUN_101cc25c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100284078();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000101ccd7a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101ccd53c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_101ccd6bc();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101cc26ac; end: 101cc26b3;  */

void FUN_101cc26ac(long *param_1)

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
  func_0x000100284078();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000101ccd7a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101ccd53c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_101ccd6bc();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 101cc26b4; end: 101cc276b;  */

long FUN_101cc26b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000101ccd7a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101ccd53c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ccd6bc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101cc276c; end: 101cc279f;  */

void FUN_101cc276c(void)

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



/* Entry: 101cc27a0; end: 101cc27f3;  */

void FUN_101cc27a0(undefined8 *param_1)

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



/* Entry: 101cc27f4; end: 101cc283f;  */

void FUN_101cc27f4(undefined8 *param_1)

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



/* Entry: 101cc2840; end: 101cc2893;  */

void FUN_101cc2840(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cc2894; end: 101cc292b;  */

void FUN_101cc2894(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x00010028426c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101ccdd68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ccda14();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 101cc292c; end: 101cc2933;  */

void FUN_101cc292c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x00010028426c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101ccdd68();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ccda14();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101cc2934; end: 101cc29ab;  */

long FUN_101cc2934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101ccdd68();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ccda14();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return unaff_x20;
}



/* Entry: 101cc29ac; end: 101cc29d7;  */

void FUN_101cc29ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


