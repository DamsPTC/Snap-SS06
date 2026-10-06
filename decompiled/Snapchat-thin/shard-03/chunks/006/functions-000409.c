/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102aab06c; end: 102aab06f;  */

void FUN_102aab06c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db151e4;
  func_0x000107c61520(&UNK_10db151e4,&UNK_110592bf8);
  puRam0000000112ee83d8 = puVar1;
  return;
}



/* Entry: 102aab070; end: 102aab0af;  */

void FUN_102aab070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db151e4;
  func_0x000107c61520(&UNK_10db151e4,&UNK_110592bf8);
  puRam0000000112ee83d8 = puVar1;
  return;
}



/* Entry: 102aab0b0; end: 102aab0b3;  */

void FUN_102aab0b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1511c;
  func_0x000107c61520(&UNK_10db1511c,&UNK_110592c88);
  puRam0000000112ee83e0 = puVar1;
  return;
}



/* Entry: 102aab0b4; end: 102aab0f3;  */

void FUN_102aab0b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1511c;
  func_0x000107c61520(&UNK_10db1511c,&UNK_110592c88);
  puRam0000000112ee83e0 = puVar1;
  return;
}



/* Entry: 102aab0f4; end: 102aab0f7;  */

void FUN_102aab0f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db150f4;
  func_0x000107c61520(&UNK_10db150f4,&UNK_110592c88);
  puRam0000000112ee83e8 = puVar1;
  return;
}



/* Entry: 102aab0f8; end: 102aab1f7;  */

void FUN_102aab0f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db150f4;
  func_0x000107c61520(&UNK_10db150f4,&UNK_110592c88);
  puRam0000000112ee83e8 = puVar1;
  return;
}



/* Entry: 102aab1f8; end: 102aab2cf;  */

/* WARNING: Possible PIC construction at 0x000102aab218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aab21c) */

void FUN_102aab1f8(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102aab2d0; end: 102aab34f;  */

void FUN_102aab2d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee84a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14d60;
  func_0x000107c61520(&UNK_10db14d60,&UNK_110592618);
  puRam0000000112ee84a8 = puVar1;
  return;
}



/* Entry: 102aab350; end: 102aab453;  */

undefined1 FUN_102aab350(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102aab454; end: 102aab6bb;  */

void FUN_102aab454(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  func_0x000107c61434(param_6);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  uVar13 = *(ulong *)(param_6 + 0x10);
  func_0x000107c61434();
  if (uVar13 != 0) {
    uVar14 = 0;
    puVar15 = (undefined8 *)(param_6 + 0x40);
    do {
      if (*(ulong *)(param_6 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102aab6a4);
        (*pcVar7)();
      }
      uVar3 = puVar15[-4];
      uVar5 = puVar15[-3];
      uVar4 = puVar15[-1];
      uVar6 = *puVar15;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar6);
      puVar9 = puVar8;
      func_0x000107c61434();
      func_0x000107c61558();
      uVar10 = uVar3;
      uVar11 = uVar5;
      func_0x000100029284();
      uVar12 = (ulong)~(uint)uVar11 & 1;
      lVar1 = *(long *)(puVar8 + 0x10) + uVar12;
      if (SCARRY8(*(long *)(puVar8 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102aab6a8);
        (*pcVar7)();
      }
      if (*(long *)(puVar8 + 0x18) < lVar1) {
        func_0x00010113678c(lVar1,puVar9);
        uVar10 = uVar3;
        uVar12 = uVar5;
        func_0x000100029284();
        if (((uint)uVar11 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102aab6bc);
          (*pcVar7)();
        }
joined_r0x000102aab638:
        if ((uVar11 & 1) != 0) goto LAB_102aab4c4;
LAB_102aab5d0:
        *(ulong *)(puVar8 + (uVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar8 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar10 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar5;
        *(ulong *)(*(long *)(puVar8 + 0x38) + uVar10 * 8) = uVar14;
        func_0x000107c6142c(puVar8);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar4);
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102aab6ac);
          (*pcVar7)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar9 & 1) == 0) {
          func_0x000101136368();
          goto joined_r0x000102aab638;
        }
        if ((uVar11 & 1) == 0) goto LAB_102aab5d0;
LAB_102aab4c4:
        *(ulong *)(*(long *)(puVar8 + 0x38) + uVar10 * 8) = uVar14;
        func_0x000107c6142c(puVar8);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar5);
      }
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 5;
    } while (uVar13 != uVar14);
  }
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(param_6);
  lVar1 = -0x2000000000000000;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  *param_1 = param_2;
  uVar4 = 0;
  if (param_5 != 0) {
    uVar4 = param_4;
  }
  param_1[1] = param_3;
  param_1[2] = uVar4;
  param_1[3] = lVar1;
  param_1[4] = param_6;
  param_1[5] = puVar8;
  return;
}



/* Entry: 102aab6bc; end: 102aab7a7;  */

void FUN_102aab6bc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar2 + 0x10) != 0) {
    lStack_48 = lVar2;
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_3 & 1) != 0) {
      uVar3 = *(ulong *)(*(long *)(lVar2 + 0x38) + param_2 * 8);
      FUN_102aab7a8(&lStack_48);
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102aab7a4);
        (*pcVar1)();
      }
      if (*(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102aab7a8);
        (*pcVar1)();
      }
      lVar2 = *(long *)(unaff_x20 + 0x20) + uVar3 * 0x28;
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x40);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      goto LAB_102aab77c;
    }
    FUN_102aab7a8(&lStack_48);
  }
  uVar7 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_102aab77c:
  *param_1 = uVar7;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  return;
}



/* Entry: 102aab7a8; end: 102aab853;  */

undefined8 FUN_102aab7a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ee5e30;
  func_0x0001000285a8(0x112ee5e30,&UNK_10db11220);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102aab854; end: 102aab94b;  */

undefined8 * FUN_102aab854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102aab94c; end: 102aab9af;  */

undefined8 * FUN_102aab94c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102aab9b0; end: 102aaba53;  */

int FUN_102aab9b0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102aaba54; end: 102aabc7b;  */

long FUN_102aaba54(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aabc7c; end: 102aabc8f;  */

void FUN_102aabc7c(undefined8 param_1)

{
  if (lRam0000000112ee8510 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e711038);
  return;
}



/* Entry: 102aabc90; end: 102aabe07;  */

long FUN_102aabc90(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *plVar6;
  long lVar7;
  
  lVar3 = 0;
  FUN_102aabe08();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)(&stack0xffffffffffffffd0 + lVar5);
  FUN_102aabe4c();
  plVar4 = plVar6;
  func_0x000107c614c4(plVar6,lVar3);
  lVar7 = *plVar6;
  lVar3 = lVar7;
  if ((int)plVar4 == 0) {
    func_0x000107c3cfd4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102aabe04);
      (*pcVar2)();
    }
    func_0x000107c61170(lVar7);
    lVar5 = 0x112ee62b8;
    func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
    iVar1 = *(int *)(lVar5 + 0x30);
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 8))((undefined1 *)((long)plVar6 + (long)iVar1),lVar5);
  }
  else if ((int)plVar4 == 1) {
    func_0x00010006c090(*(undefined8 *)(&stack0xffffffffffffffd8 + lVar5),
                        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5));
    func_0x000107c3cfd4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102aabe00);
      (*pcVar2)();
    }
    func_0x000107c61170(lVar7);
  }
  else {
    lVar5 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    func_0x000107c6142c(*(undefined8 *)((long)plVar6 + (long)*(int *)(lVar5 + 0x60) + 8));
    func_0x000107c3cfd4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102aabe08);
      (*pcVar2)();
    }
    func_0x000107c61170(lVar7);
    iVar1 = *(int *)(lVar5 + 0x30);
    func_0x0001000293e4((undefined1 *)((long)plVar6 + (long)*(int *)(lVar5 + 0x40)));
    func_0x0001000293e4((undefined1 *)((long)plVar6 + (long)iVar1));
  }
  return lVar3;
}



/* Entry: 102aabe08; end: 102aabe1b;  */

void FUN_102aabe08(undefined8 param_1)

{
  if (lRam0000000112ee85f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e711060);
  return;
}



/* Entry: 102aabe1c; end: 102aabe4b;  */

void FUN_102aabe1c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 102aabe4c; end: 102aabe8f;  */

undefined8 FUN_102aabe4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102aabe08();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102aabe90; end: 102aac3fb;  */

long * FUN_102aabe90(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) != 0) {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar11 = (ulong)uVar5 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar6 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  lVar18 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar18;
  lVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar8;
  lVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar9;
  lVar6 = param_2[6];
  lVar10 = param_2[7];
  param_1[6] = lVar6;
  param_1[7] = lVar10;
  lVar13 = param_2[8];
  lVar10 = param_2[9];
  param_1[8] = lVar13;
  param_1[9] = lVar10;
  lVar17 = param_2[10];
  param_1[10] = lVar17;
  lVar15 = (long)*(int *)(param_3 + 0x28);
  lVar10 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar10 + -8);
  pcVar12 = *(code **)(lVar16 + 0x30);
  func_0x000107c61434(lVar18);
  func_0x000107c61434(lVar8);
  func_0x000107c61434(lVar9);
  func_0x000107c61434(lVar6);
  func_0x000107c61434(lVar13);
  func_0x000107c61434(lVar17);
  lVar6 = (long)param_2 + lVar15;
  (*pcVar12)(lVar6,1,lVar10);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar16 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,lVar10);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,lVar10);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar15,(long)param_2 + lVar15,
                        *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar6 = 0;
  FUN_102aabe08();
  lVar18 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar18 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    puVar7 = puVar2;
    func_0x000107c614c4(puVar2,lVar6);
    *puVar1 = *puVar2;
    if ((int)puVar7 == 2) {
      func_0x000107c61174();
      lVar8 = 0x112ee62a8;
      func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
      lVar13 = (long)*(int *)(lVar8 + 0x30);
      lVar9 = (long)puVar2 + lVar13;
      (*pcVar12)(lVar9,1,lVar10);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar10);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar13,0,1,lVar10);
      }
      else {
        lVar9 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar13,(long)puVar2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      lVar13 = (long)*(int *)(lVar8 + 0x40);
      lVar9 = (long)puVar2 + lVar13;
      (*pcVar12)(lVar9,1,lVar10);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar10);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar13,0,1,lVar10);
      }
      else {
        lVar9 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar13,(long)puVar2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x50)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x50));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x60));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x60));
      uVar19 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar19;
      func_0x000107c61434();
    }
    else if ((int)puVar7 == 1) {
      uVar19 = puVar2[1];
      uVar20 = puVar2[2];
      func_0x000107c61174();
      func_0x00010006c00c(uVar19,uVar20);
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
    }
    else {
      func_0x000107c61174();
      lVar8 = 0x112ee62b8;
      func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
      (**(code **)(lVar16 + 0x10))
                ((long)puVar1 + (long)*(int *)(lVar8 + 0x30),
                 (long)puVar2 + (long)*(int *)(lVar8 + 0x30),lVar10);
    }
    func_0x000107c6159c(puVar1,lVar6,puVar7);
    (**(code **)(lVar18 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112ee5e70;
    func_0x0001000285a8(0x112ee5e70,&UNK_10db11270);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar6 = puVar2[1];
  if (lVar6 == 1) {
    uVar19 = puVar2[0x10];
    uVar14 = puVar2[0x13];
    uVar20 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar19;
    puVar1[0x13] = uVar14;
    puVar1[0x12] = uVar20;
    puVar1[0x14] = puVar2[0x14];
    uVar19 = puVar2[8];
    uVar14 = puVar2[0xb];
    uVar20 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar19;
    puVar1[0xb] = uVar14;
    puVar1[10] = uVar20;
    uVar14 = puVar2[0xc];
    uVar20 = puVar2[0xf];
    uVar19 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar14;
    puVar1[0xf] = uVar20;
    puVar1[0xe] = uVar19;
    uVar19 = *puVar2;
    uVar14 = puVar2[3];
    uVar20 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar19;
    puVar1[3] = uVar14;
    puVar1[2] = uVar20;
    uVar14 = puVar2[4];
    uVar20 = puVar2[7];
    uVar19 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar14;
    puVar1[7] = uVar20;
    puVar1[6] = uVar19;
    goto LAB_102aac37c;
  }
  *puVar1 = *puVar2;
  puVar1[1] = lVar6;
  uVar19 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar19;
  lVar6 = puVar2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar19);
  if (lVar6 == 1) {
    uVar19 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar19;
  }
  else {
    puVar1[4] = puVar2[4];
    puVar1[5] = lVar6;
    func_0x000107c61434(lVar6);
  }
  lVar6 = puVar2[7];
  if (lVar6 == 1) {
    uVar19 = puVar2[6];
    uVar14 = puVar2[9];
    uVar20 = puVar2[8];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar19;
    puVar1[9] = uVar14;
    puVar1[8] = uVar20;
LAB_102aac344:
    uVar19 = puVar2[10];
    uVar14 = puVar2[0xd];
    uVar20 = puVar2[0xc];
    puVar1[0xb] = puVar2[0xb];
    puVar1[10] = uVar19;
    puVar1[0xd] = uVar14;
    puVar1[0xc] = uVar20;
    uVar19 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar19;
    uVar19 = *(undefined8 *)((long)puVar2 + 0x7a);
    *(undefined8 *)((long)puVar1 + 0x82) = *(undefined8 *)((long)puVar2 + 0x82);
    *(undefined8 *)((long)puVar1 + 0x7a) = uVar19;
    lVar6 = puVar2[0x14];
  }
  else {
    if (lVar6 != 2) {
      puVar1[6] = puVar2[6];
      puVar1[7] = lVar6;
      uVar19 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar19;
      func_0x000107c61434();
      func_0x000107c61434(uVar19);
      goto LAB_102aac344;
    }
    uVar19 = puVar2[10];
    uVar14 = puVar2[0xd];
    uVar20 = puVar2[0xc];
    puVar1[0xb] = puVar2[0xb];
    puVar1[10] = uVar19;
    puVar1[0xd] = uVar14;
    puVar1[0xc] = uVar20;
    uVar19 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar19;
    uVar19 = *(undefined8 *)((long)puVar2 + 0x7a);
    *(undefined8 *)((long)puVar1 + 0x82) = *(undefined8 *)((long)puVar2 + 0x82);
    *(undefined8 *)((long)puVar1 + 0x7a) = uVar19;
    uVar19 = puVar2[6];
    uVar14 = puVar2[9];
    uVar20 = puVar2[8];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar19;
    puVar1[9] = uVar14;
    puVar1[8] = uVar20;
    lVar6 = puVar2[0x14];
  }
  if (lVar6 == 0) {
    uVar19 = puVar2[0x12];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar19;
    puVar1[0x14] = puVar2[0x14];
  }
  else {
    uVar19 = puVar2[0x13];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x13] = uVar19;
    puVar1[0x14] = lVar6;
    func_0x000107c61434();
    func_0x000107c61434(lVar6);
  }
LAB_102aac37c:
  iVar4 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  iVar4 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar20 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar20;
  uVar14 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar14;
  func_0x000107c61434();
  func_0x000107c61434(uVar19);
  func_0x000107c61434(uVar20);
  func_0x000107c61174(uVar14);
  return param_1;
}



/* Entry: 102aac3fc; end: 102aac657;  */

/* WARNING: Possible PIC construction at 0x000102aac590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aac5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aac5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aac5c8) */
/* WARNING: Removing unreachable block (ram,0x000102aac594) */
/* WARNING: Removing unreachable block (ram,0x000102aac5dc) */
/* WARNING: Removing unreachable block (ram,0x000102aac60c) */
/* WARNING: Removing unreachable block (ram,0x000102aac61c) */
/* WARNING: Removing unreachable block (ram,0x000102aac634) */
/* WARNING: Removing unreachable block (ram,0x000102aac644) */

void FUN_102aac3fc(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  iVar2 = *(int *)(param_2 + 0x28);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = param_1 + iVar2;
  (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x2c));
  lVar4 = 0;
  FUN_102aabe08();
  puVar5 = puVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar1,1,lVar4);
  if ((int)puVar5 == 0) {
    puVar5 = puVar1;
    func_0x000107c614c4(puVar1,lVar4);
    iVar2 = (int)puVar5;
    if (iVar2 == 2) {
      uVar6 = *puVar1;
      goto code_r0x000107c61170;
    }
    if (iVar2 == 1) {
      uVar6 = *puVar1;
      goto code_r0x000107c61170;
    }
    if (iVar2 == 0) {
      uVar6 = *puVar1;
      goto code_r0x000107c61170;
    }
  }
  lVar4 = param_1 + *(int *)(param_2 + 0x30);
  if (*(long *)(lVar4 + 8) != 1) {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x18));
    if (*(long *)(lVar4 + 0x28) != 1) {
      func_0x000107c6142c();
    }
    if (1 < *(long *)(lVar4 + 0x38) - 1U) {
      func_0x000107c6142c();
      func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x48));
    }
    if (*(long *)(lVar4 + 0xa0) != 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x98));
      func_0x000107c6142c(*(undefined8 *)(lVar4 + 0xa0));
    }
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  uVar6 = *(undefined8 *)(param_1 + *(int *)(param_2 + 0x40));
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 102aac658; end: 102aad693;  */

undefined8 * FUN_102aac658(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar14;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar18 = param_2[6];
  uVar19 = param_2[7];
  param_1[6] = uVar18;
  param_1[7] = uVar19;
  uVar19 = param_2[8];
  uVar17 = param_2[9];
  param_1[8] = uVar19;
  param_1[9] = uVar17;
  uVar17 = param_2[10];
  param_1[10] = uVar17;
  lVar12 = (long)*(int *)(param_3 + 0x28);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar7 + -8);
  pcVar16 = *(code **)(lVar13 + 0x30);
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar18);
  func_0x000107c61434(uVar19);
  func_0x000107c61434(uVar17);
  lVar8 = (long)param_2 + lVar12;
  (*pcVar16)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                        *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar8 = 0;
  FUN_102aabe08();
  lVar12 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar12 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    func_0x000107c614c4(puVar2,lVar8);
    *puVar1 = *puVar2;
    if ((int)puVar9 == 2) {
      func_0x000107c61174();
      lVar10 = 0x112ee62a8;
      func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
      lVar15 = (long)*(int *)(lVar10 + 0x30);
      lVar11 = (long)puVar2 + lVar15;
      (*pcVar16)(lVar11,1,lVar7);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar7);
        (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar15,0,1,lVar7);
      }
      else {
        lVar11 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar15,(long)puVar2 + lVar15,
                            *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      lVar15 = (long)*(int *)(lVar10 + 0x40);
      lVar11 = (long)puVar2 + lVar15;
      (*pcVar16)(lVar11,1,lVar7);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar7);
        (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar15,0,1,lVar7);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar15,(long)puVar2 + lVar15,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x50)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x50));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x60));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x60));
      uVar18 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar18;
      func_0x000107c61434();
    }
    else if ((int)puVar9 == 1) {
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      func_0x000107c61174();
      func_0x00010006c00c(uVar18,uVar19);
      puVar1[1] = uVar18;
      puVar1[2] = uVar19;
    }
    else {
      func_0x000107c61174();
      lVar10 = 0x112ee62b8;
      func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
      (**(code **)(lVar13 + 0x10))
                ((long)puVar1 + (long)*(int *)(lVar10 + 0x30),
                 (long)puVar2 + (long)*(int *)(lVar10 + 0x30),lVar7);
    }
    func_0x000107c6159c(puVar1,lVar8,puVar9);
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar8 = 0x112ee5e70;
    func_0x0001000285a8(0x112ee5e70,&UNK_10db11270);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar8 = puVar2[1];
  if (lVar8 == 1) {
    uVar18 = puVar2[0x10];
    uVar14 = puVar2[0x13];
    uVar19 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar18;
    puVar1[0x13] = uVar14;
    puVar1[0x12] = uVar19;
    puVar1[0x14] = puVar2[0x14];
    uVar18 = puVar2[8];
    uVar14 = puVar2[0xb];
    uVar19 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar18;
    puVar1[0xb] = uVar14;
    puVar1[10] = uVar19;
    uVar14 = puVar2[0xc];
    uVar19 = puVar2[0xf];
    uVar18 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar14;
    puVar1[0xf] = uVar19;
    puVar1[0xe] = uVar18;
    uVar18 = *puVar2;
    uVar14 = puVar2[3];
    uVar19 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar18;
    puVar1[3] = uVar14;
    puVar1[2] = uVar19;
    uVar14 = puVar2[4];
    uVar19 = puVar2[7];
    uVar18 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar14;
    puVar1[7] = uVar19;
    puVar1[6] = uVar18;
    goto LAB_102aacb28;
  }
  *puVar1 = *puVar2;
  puVar1[1] = lVar8;
  uVar18 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar18;
  lVar8 = puVar2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar18);
  if (lVar8 == 1) {
    uVar18 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar18;
  }
  else {
    puVar1[4] = puVar2[4];
    puVar1[5] = lVar8;
    func_0x000107c61434(lVar8);
  }
  lVar8 = puVar2[7];
  if (lVar8 == 1) {
    uVar18 = puVar2[6];
    uVar14 = puVar2[9];
    uVar19 = puVar2[8];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar18;
    puVar1[9] = uVar14;
    puVar1[8] = uVar19;
LAB_102aacaf0:
    uVar18 = puVar2[10];
    uVar14 = puVar2[0xd];
    uVar19 = puVar2[0xc];
    puVar1[0xb] = puVar2[0xb];
    puVar1[10] = uVar18;
    puVar1[0xd] = uVar14;
    puVar1[0xc] = uVar19;
    uVar18 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar18;
    uVar18 = *(undefined8 *)((long)puVar2 + 0x7a);
    *(undefined8 *)((long)puVar1 + 0x82) = *(undefined8 *)((long)puVar2 + 0x82);
    *(undefined8 *)((long)puVar1 + 0x7a) = uVar18;
    lVar8 = puVar2[0x14];
  }
  else {
    if (lVar8 != 2) {
      puVar1[6] = puVar2[6];
      puVar1[7] = lVar8;
      uVar18 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar18;
      func_0x000107c61434();
      func_0x000107c61434(uVar18);
      goto LAB_102aacaf0;
    }
    uVar18 = puVar2[10];
    uVar14 = puVar2[0xd];
    uVar19 = puVar2[0xc];
    puVar1[0xb] = puVar2[0xb];
    puVar1[10] = uVar18;
    puVar1[0xd] = uVar14;
    puVar1[0xc] = uVar19;
    uVar18 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar18;
    uVar18 = *(undefined8 *)((long)puVar2 + 0x7a);
    *(undefined8 *)((long)puVar1 + 0x82) = *(undefined8 *)((long)puVar2 + 0x82);
    *(undefined8 *)((long)puVar1 + 0x7a) = uVar18;
    uVar18 = puVar2[6];
    uVar14 = puVar2[9];
    uVar19 = puVar2[8];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar18;
    puVar1[9] = uVar14;
    puVar1[8] = uVar19;
    lVar8 = puVar2[0x14];
  }
  if (lVar8 == 0) {
    uVar18 = puVar2[0x12];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar18;
    puVar1[0x14] = puVar2[0x14];
  }
  else {
    uVar18 = puVar2[0x13];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x13] = uVar18;
    puVar1[0x14] = lVar8;
    func_0x000107c61434();
    func_0x000107c61434(lVar8);
  }
LAB_102aacb28:
  iVar6 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar18 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar18;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar18 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar18;
  iVar6 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  uVar14 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar14;
  func_0x000107c61434();
  func_0x000107c61434(uVar18);
  func_0x000107c61434(uVar19);
  func_0x000107c61174(uVar14);
  return param_1;
}



/* Entry: 102aad694; end: 102aad6cf;  */

undefined8 FUN_102aad694(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102aabe08();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102aad6d0; end: 102aae22b;  */

undefined8 * FUN_102aad6d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[6] = param_2[6];
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  uVar9 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar9;
  lVar11 = (long)*(int *)(param_3 + 0x28);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar4 + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar12)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar4);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar5 = 0;
  FUN_102aabe08();
  lVar11 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 != 0) {
    lVar5 = 0x112ee5e70;
    func_0x0001000285a8(0x112ee5e70,&UNK_10db11270);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    goto LAB_102aad9d8;
  }
  puVar6 = puVar2;
  func_0x000107c614c4(puVar2,lVar5);
  if ((int)puVar6 == 2) {
    *puVar1 = *puVar2;
    lVar7 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    lVar10 = (long)*(int *)(lVar7 + 0x30);
    lVar8 = (long)puVar2 + lVar10;
    (*pcVar12)(lVar8,1,lVar4);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x20))((long)puVar1 + lVar10,(long)puVar2 + lVar10,lVar4);
      (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar10,0,1,lVar4);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar10,(long)puVar2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(lVar7 + 0x40);
    lVar8 = (long)puVar2 + lVar10;
    (*pcVar12)(lVar8,1,lVar4);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x20))((long)puVar1 + lVar10,(long)puVar2 + lVar10,lVar4);
      (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar10,0,1,lVar4);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar10,(long)puVar2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x50)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x50));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x60));
    uVar9 = *puVar2;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x60));
    puVar6[1] = puVar2[1];
    *puVar6 = uVar9;
    uVar9 = 2;
LAB_102aad9bc:
    func_0x000107c6159c(puVar1,lVar5,uVar9);
  }
  else {
    if ((int)puVar6 == 0) {
      *puVar1 = *puVar2;
      lVar7 = 0x112ee62b8;
      func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
      (**(code **)(lVar13 + 0x20))
                ((long)puVar1 + (long)*(int *)(lVar7 + 0x30),
                 (long)puVar2 + (long)*(int *)(lVar7 + 0x30),lVar4);
      uVar9 = 0;
      goto LAB_102aad9bc;
    }
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(lVar11 + 0x40));
  }
  (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar5);
LAB_102aad9d8:
  iVar3 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1[0x14] = puVar2[0x14];
  uVar15 = puVar2[8];
  uVar14 = puVar2[0xb];
  uVar9 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar15;
  puVar1[0xb] = uVar14;
  puVar1[10] = uVar9;
  uVar15 = puVar2[0x10];
  uVar14 = puVar2[0x13];
  uVar9 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar15;
  puVar1[0x13] = uVar14;
  puVar1[0x12] = uVar9;
  uVar9 = puVar2[0xc];
  uVar15 = puVar2[0xf];
  uVar14 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar9;
  puVar1[0xf] = uVar15;
  puVar1[0xe] = uVar14;
  uVar9 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  puVar1[3] = uVar15;
  puVar1[2] = uVar14;
  uVar15 = puVar2[4];
  uVar14 = puVar2[7];
  uVar9 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar15;
  puVar1[7] = uVar14;
  puVar1[6] = uVar9;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 102aae22c; end: 102aae243;  */

void FUN_102aae22c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102aae244; end: 102aae377;  */

void FUN_102aae244(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_88 = &UNK_10db15808;
  puStack_80 = &UNK_10db15820;
  puStack_70 = PTR___sBbWV_11034d660 + 0x40;
  puStack_78 = &UNK_10db15820;
  puStack_68 = &UNK_10db15820;
  puStack_60 = &UNK_10db15820;
  uVar2 = 0x112d71a80;
  lVar1 = 0x13f;
  func_0x000102aae32c(0x13f,0x112d71a80,PTR___s10Foundation3URLVMa_110350988);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112ee8520;
    lVar1 = 0x13f;
    func_0x000102aae32c(0x13f,0x112ee8520,FUN_102aabe08);
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      puStack_48 = &UNK_10db15838;
      puStack_40 = &UNK_10db15820;
      puStack_38 = &UNK_10db15820;
      puStack_28 = PTR___sBOWV_11034d658 + 0x40;
      puStack_30 = &UNK_10db15820;
      func_0x000107c6153c(param_1,0x100,0xd,&puStack_88,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 102aae378; end: 102aae5c3;  */

long * FUN_102aae378(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    func_0x000107c614c4(param_2,param_3);
    *param_1 = *param_2;
    if ((int)plVar5 == 2) {
      func_0x000107c61174();
      lVar8 = 0x112ee62a8;
      func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
      lVar13 = (long)*(int *)(lVar8 + 0x30);
      lVar6 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar6 + -8);
      pcVar12 = *(code **)(lVar11 + 0x30);
      lVar7 = (long)param_2 + lVar13;
      (*pcVar12)(lVar7,1,lVar6);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      lVar13 = (long)*(int *)(lVar8 + 0x40);
      lVar7 = (long)param_2 + lVar13;
      (*pcVar12)(lVar7,1,lVar6);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x50)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x50));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x60));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x60));
      uVar9 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar9;
      func_0x000107c61434();
      uVar9 = 2;
    }
    else if ((int)plVar5 == 1) {
      lVar8 = param_2[1];
      lVar7 = param_2[2];
      func_0x000107c61174();
      func_0x00010006c00c(lVar8,lVar7);
      param_1[1] = lVar8;
      param_1[2] = lVar7;
      uVar9 = 1;
    }
    else {
      func_0x000107c61174();
      lVar8 = 0x112ee62b8;
      func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
      iVar4 = *(int *)(lVar8 + 0x30);
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))
                ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar8);
      uVar9 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar9);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102aae5c4; end: 102aae717;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102aae5c4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  
  puVar3 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
    func_0x000107c61170(*param_1);
    lVar4 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    iVar1 = *(int *)(lVar4 + 0x30);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar5 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar6 = (long)param_1 + (long)iVar1;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + (long)iVar1,lVar5);
    }
    iVar1 = *(int *)(lVar4 + 0x40);
    lVar6 = (long)param_1 + (long)iVar1;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + (long)iVar1,lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x60) + 8));
    return;
  }
  if (iVar1 == 1) {
    func_0x000107c61170(*param_1);
    uVar2 = param_1[1];
    uVar7 = (uint)((ulong)param_1[2] >> 0x3e);
    if (uVar7 == 1) {
      uVar2 = param_1[2] & 0x3fffffffffffffff;
    }
    else if (uVar7 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  func_0x000107c61170(*param_1);
  lVar4 = 0x112ee62b8;
  func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
  iVar1 = *(int *)(lVar4 + 0x30);
  lVar4 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102aae63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))((long)param_1 + (long)iVar1,lVar4);
  return;
}



/* Entry: 102aae718; end: 102aaeb4f;  */

undefined8 * FUN_102aae718(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  puVar5 = param_2;
  func_0x000107c614c4(param_2,param_3);
  *param_1 = *param_2;
  if ((int)puVar5 == 2) {
    func_0x000107c61174();
    lVar8 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    lVar11 = (long)*(int *)(lVar8 + 0x30);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar6 + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar10)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(lVar8 + 0x40);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar10)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x50)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x50));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x60));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x60));
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    func_0x000107c61434();
  }
  else if ((int)puVar5 == 1) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    func_0x000107c61174();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  else {
    func_0x000107c61174();
    lVar8 = 0x112ee62b8;
    func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
    iVar4 = *(int *)(lVar8 + 0x30);
    lVar8 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar8);
  }
  func_0x000107c6159c(param_1,param_3,puVar5);
  return param_1;
}



/* Entry: 102aaeb50; end: 102aaef77;  */

/* WARNING: Possible PIC construction at 0x000102aaec4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aaece4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aaec50) */
/* WARNING: Removing unreachable block (ram,0x000102aaece8) */

undefined8 * FUN_102aaeb50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 == 2) {
    *param_1 = *param_2;
    lVar3 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    lVar9 = (long)*(int *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar4 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar8)(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
      lVar9 = (long)*(int *)(lVar3 + 0x40);
      lVar5 = (long)param_2 + lVar9;
      (*pcVar8)(lVar5,1,lVar4);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x50)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x50));
        param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x60));
        uVar6 = *param_2;
        puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x60));
        puVar2[1] = param_2[1];
        *puVar2 = uVar6;
        uVar6 = 2;
        goto LAB_102aaed3c;
      }
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar9);
      param_2 = (undefined8 *)((long)param_2 + lVar9);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar9);
      param_2 = (undefined8 *)((long)param_2 + lVar9);
    }
  }
  else {
    if ((int)puVar2 == 0) {
      *param_1 = *param_2;
      lVar3 = 0x112ee62b8;
      func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
      iVar1 = *(int *)(lVar3 + 0x30);
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
      uVar6 = 0;
LAB_102aaed3c:
      func_0x000107c6159c(param_1,param_3,uVar6);
      return param_1;
    }
    uVar6 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 102aaef78; end: 102aaefa7;  */

void FUN_102aaef78(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102aaef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102aaefa8; end: 102aaf09b;  */

void FUN_102aaefa8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  
  lVar2 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    puVar1 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c61504(auStack_68,puVar1,*(long *)(lVar2 + -8) + 0x40);
    puStack_40 = &UNK_10db15878;
    uVar3 = 0x112d71a80;
    lVar2 = 0x13f;
    puStack_b0 = puVar1;
    puStack_48 = auStack_68;
    func_0x000102aae32c(0x13f,0x112d71a80,PTR___s10Foundation3URLVMa_110350988);
    if (uVar3 < 0x40) {
      lStack_a8 = *(long *)(lVar2 + -8) + 0x40;
      puStack_98 = PTR___sBi64_WV_11034d670 + 0x40;
      puStack_90 = &UNK_10db15820;
      lStack_a0 = lStack_a8;
      func_0x000107c61500(auStack_88,0,5,&puStack_b0);
      puStack_38 = auStack_88;
      func_0x000107c61528(param_1,0x100,3,&puStack_48);
    }
  }
  return;
}



/* Entry: 102aaf09c; end: 102aaf0ab; -[_TtC27SCShoppingLensStateServices27SCShoppingLensStateServices stateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee8628));
  return;
}



/* Entry: 102aaf0ac; end: 102aaf0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf0ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee8628) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aaf0f8; end: 102aaf153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf0f8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ee8628) = param_1;
  func_0x000102aaf134();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aaf154; end: 102aaf1af; -[_TtC27SCShoppingLensStateServices27SCShoppingLensStateServices init] */

void FUN_102aaf154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensStateServices.SCShoppingLensStateServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aaf180);
  (*pcVar1)();
}



/* Entry: 102aaf1b0; end: 102aaf1d3; -[_TtC27SCShoppingLensStateServices27SCShoppingLensStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee8628));
  return;
}



/* Entry: 102aaf1d4; end: 102aaf2ab;  */

void FUN_102aaf1d4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aaf2ac; end: 102aaf2b7;  */

void FUN_102aaf2ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102aaf2b8; end: 102aaf31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf2b8(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee8658) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ee8660) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aaf31c; end: 102aaf363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aaf31c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ee8658) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ee8660) = param_2;
  FUN_102aaf3d0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aaf364; end: 102aaf3bf; -[SCShoppingLensState init] */

void FUN_102aaf364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensStateServices.ShoppingLensState",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aaf390);
  (*pcVar1)();
}



/* Entry: 102aaf3c0; end: 102aaf3cf;  */

undefined1  [16] FUN_102aaf3c0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102aaf3d0; end: 102aaf3ef;  */

void FUN_102aaf3d0(void)

{
  func_0x000107c61168(&PTR_PTR_112884268);
  return;
}



/* Entry: 102aaf3f0; end: 102aaf3f3;  */

void FUN_102aaf3f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db158b0;
  func_0x000107c61520(&UNK_10db158b0,&UNK_110592f08);
  puRam0000000112ee8668 = puVar1;
  return;
}



/* Entry: 102aaf3f4; end: 102aaf433;  */

void FUN_102aaf3f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db158b0;
  func_0x000107c61520(&UNK_10db158b0,&UNK_110592f08);
  puRam0000000112ee8668 = puVar1;
  return;
}



/* Entry: 102aaf434; end: 102aaf453;  */

undefined1  [16] FUN_102aaf434(void)

{
  return ZEXT816(0x110592f08);
}



/* Entry: 102aaf454; end: 102aaf6cb;  */

undefined * FUN_102aaf454(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x30);
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1 = PTR_PTR_1126ba528;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar4,uVar2);
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f0e6440);
    func_0x000107c4547c();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = puVar1;
    func_0x000107c61174(puVar1);
    FUN_102ab00d4(uVar4);
  }
  func_0x000102ab0144(puVar3);
  return puVar1;
}



/* Entry: 102aaf6cc; end: 102aafbe3;  */

void FUN_102aaf6cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102aafbe4(param_2);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102aafdf4(param_2);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102aafeb4(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102aafbe4; end: 102aafdf3;  */

/* WARNING: Possible PIC construction at 0x000102aafc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafcf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aafd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aafdb4) */
/* WARNING: Removing unreachable block (ram,0x000102aafd68) */
/* WARNING: Removing unreachable block (ram,0x000102aafd74) */
/* WARNING: Removing unreachable block (ram,0x000102aafcfc) */
/* WARNING: Removing unreachable block (ram,0x000102aafd04) */
/* WARNING: Removing unreachable block (ram,0x000102aafcec) */
/* WARNING: Removing unreachable block (ram,0x000102aafca0) */
/* WARNING: Removing unreachable block (ram,0x000102aafcac) */
/* WARNING: Removing unreachable block (ram,0x000102aafc54) */
/* WARNING: Removing unreachable block (ram,0x000102aafd08) */
/* WARNING: Removing unreachable block (ram,0x000102aafc5c) */
/* WARNING: Removing unreachable block (ram,0x000102aafc2c) */
/* WARNING: Removing unreachable block (ram,0x000102aafd10) */
/* WARNING: Removing unreachable block (ram,0x000102aafdd8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102aafd18) */

void FUN_102aafbe4(undefined8 param_1)

{
  func_0x00010902234c();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102aafdf4; end: 102aafeb3;  */

void FUN_102aafdf4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x00010902237c();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR___sSiN_11034deb0;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f0e6340);
    func_0x000107c59a04(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102aafeb4; end: 102aafff7;  */

void FUN_102aafeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x0001090223a4();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5fdfc(param_1);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
    uVar3 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f0e6300);
    func_0x000107c59a04(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  puVar4 = &UNK_110593150;
  func_0x000107c613fc(&UNK_110593150,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_60 = FUN_102ab0120;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1013ef96c;
  puStack_68 = &UNK_110593168;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4010c(param_2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102aafff8; end: 102ab00d3;  */

void FUN_102aafff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61574(param_3);
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      uVar2 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f0e6320);
      func_0x000107c59a04(lVar1);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 102ab00d4; end: 102ab00e3;  */

void FUN_102ab00d4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102ab00e4; end: 102ab011f;  */

void FUN_102ab00e4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_102ab00d4(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ab0120; end: 102ab0153;  */

void FUN_102ab0120(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      uVar3 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f0e6320);
      func_0x000107c59a04(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102ab0154; end: 102ab05e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab0154(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 *param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  code *pcVar14;
  long unaff_x20;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  uStack_a8 = param_1;
  func_0x000107c5f804();
  lStack_e0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = 0x18;
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(param_2 + _DAT_113083f78);
  lStack_b8 = param_2;
  lStack_98 = unaff_x20;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar16 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  plVar5 = *(long **)(param_3 + _DAT_112ee8f38);
  lVar3 = ((undefined8 *)(param_3 + _DAT_112ee8f38))[1];
  lStack_b0 = param_3;
  func_0x000107c614f0();
  (**(code **)(lVar3 + 8))();
  lStack_a0 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_4 != 0) {
    lVar6 = *(long *)(param_5 + _DAT_113093a90);
    lStack_c8 = param_5;
    func_0x000107c61174();
    puStack_c0 = param_6;
    func_0x000107c3dda8();
    func_0x000107c61180();
    lVar7 = 0;
    func_0x0001005e21ac();
    func_0x000107c613fc();
    uVar4 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar7 + 0x28) = uVar4;
    *(undefined8 *)(lVar7 + 0x30) = 1;
    *(undefined8 *)(lVar7 + 0x10) = uVar16;
    *(undefined8 *)(lVar7 + 0x18) = uVar13;
    *(undefined1 **)(lVar7 + 0x20) = param_6;
    puVar8 = &UNK_1105931a0;
    func_0x000107c613fc(&UNK_1105931a0,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,lVar7);
    pcVar14 = *(code **)(*plVar5 + 0x60);
    func_0x000107c61174();
    puStack_d0 = param_6;
    func_0x000107c6157c(lVar7);
    pcVar2 = FUN_102ab05e4;
    puVar10 = puVar8;
    (*pcVar14)(FUN_102ab05e4);
    func_0x000107c61574(puVar8);
    func_0x000107c614f0(pcVar2);
    uVar16 = *(undefined8 *)(lVar7 + 0x28);
    pcVar14 = *(code **)(puVar10 + 0x10);
    func_0x000107c6157c(uVar16);
    (*pcVar14)();
    func_0x000107c615e8(pcVar2);
    func_0x000107c61574(uVar16);
    lVar3 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61574(plVar5);
      func_0x000107c615e8(param_4);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puStack_d0);
      func_0x000107c61574(lVar7);
      func_0x000107c61170(lStack_b8);
      func_0x000107c61170(lStack_b0);
      func_0x000107c61170(lStack_c8);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(lStack_a0);
      puVar9 = puStack_c0;
    }
    else {
      func_0x000100079360(0);
      uVar4 = 0;
      func_0x0001005e21cc();
      func_0x0001005e21ec();
      uVar16 = uVar4;
      func_0x0001005e2264();
      uStack_e8 = uVar16;
      func_0x000107c61170(uVar4);
      uVar4 = 0;
      func_0x0001000aad1c(0);
      func_0x0001005e2268();
      func_0x0001000295c4(0);
      lVar1 = lStack_d8;
      lVar12 = lStack_e0;
      (**(code **)(lStack_e0 + 0x68))
                (puVar15,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lStack_d8);
      puVar9 = puVar15;
      func_0x000107c5fff0(puVar15);
      (**(code **)(lVar12 + 8))(puVar15,lVar1);
      puVar8 = &UNK_1105931a0;
      func_0x000107c613fc(&UNK_1105931a0,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,lVar7);
      func_0x000107c61574(lVar7);
      puVar10 = &UNK_1105931c8;
      func_0x000107c613fc(&UNK_1105931c8,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      *(long *)(puVar10 + 0x18) = param_4;
      uStack_70 = 0x102ab05ec;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105931e0;
      ppuVar11 = &puStack_90;
      puStack_68 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_68;
      func_0x000107c615f0(param_4);
      func_0x000107c61574(puVar8);
      uVar16 = uStack_e8;
      lVar12 = lVar3;
      func_0x000107c5e070(lVar3);
      func_0x000107c61180();
      func_0x000107c61574(plVar5);
      func_0x000107c615e8(param_4);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puStack_d0);
      func_0x000107c61170(lStack_b8);
      func_0x000107c61170(lStack_b0);
      func_0x000107c61170(lStack_c8);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(lStack_a0);
      func_0x000107c61170(puStack_c0);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(puVar9);
    *(long *)(lStack_98 + 0x10) = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ab05e4);
  (*pcVar2)();
}



/* Entry: 102ab05e4; end: 102ab05fb;  */

void FUN_102ab05e4(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ulong *)(param_1 + 0x10);
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  uVar8 = *(ulong *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x68);
  puVar7 = auStack_60;
  func_0x000107c61428(unaff_x20 + 0x10,puVar7,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  lVar6 = lVar3;
  lStack_90 = unaff_x20;
  if (lVar3 != 0) {
    if ((((bVar2 & 0x18) != 0) && ((uVar8 & 0xe0) == 0xc0)) && (puVar1 != (undefined1 *)0x0)) {
      uVar4 = uVar5;
      func_0x000102aaf798(uVar5,puVar1);
      if (uVar4 != 0) {
        uVar8 = uVar4;
        func_0x000107c43414();
        if ((int)uVar8 != 0) {
          uStack_68 = 0;
          func_0x000107c416ec(uVar4);
        }
        func_0x000107c61170(uVar4);
        uVar8 = uVar4;
      }
      uVar4 = uVar5;
      func_0x000102aaf874(uVar5,puVar1);
      if (uVar4 != 0) {
        uVar8 = uVar4;
        func_0x000107c43414();
        if ((int)uVar8 != 0) {
          uStack_68 = 0;
          func_0x000107c416ec(uVar4);
        }
        func_0x000107c61170(uVar4);
        uVar8 = uVar4;
      }
      uVar4 = uVar5;
      func_0x000102aafa2c(uVar5,puVar1);
      if (uVar4 != 0) {
        uVar8 = uVar4;
        func_0x000107c43414();
        if ((int)uVar8 != 0) {
          uStack_68 = 0;
          func_0x000107c416ec(uVar4);
        }
        func_0x000107c61170(uVar4);
        uVar8 = uVar4;
      }
      uVar4 = uVar5;
      func_0x000102aafb08(uVar5,puVar1);
      if (uVar4 != 0) {
        uVar8 = uVar4;
        func_0x000107c43414();
        if ((int)uVar8 != 0) {
          uStack_68 = 0;
          func_0x000107c416ec(uVar4);
        }
        func_0x000107c61170(uVar4);
        uVar8 = uVar4;
      }
      uVar4 = uVar5;
      puVar7 = puVar1;
      func_0x000102aaf950(uVar5,puVar1);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c43414();
        if ((uVar5 & 1) != 0) {
          uStack_68 = 0;
          func_0x000107c416ec(uVar4);
        }
        func_0x000107c61170(uVar4);
        uVar5 = uVar4;
      }
    }
    func_0x000107c61574();
    lStack_90 = lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  uStack_78 = 0x102aaf6cc;
  uStack_a0 = uVar8;
  puStack_98 = puVar1;
  uStack_88 = uVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c61428(lVar6 + 0x10,auStack_b8,0,0);
  lVar3 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    FUN_102aafbe4(puVar7);
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_d0,0,0);
  lVar3 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    FUN_102aafdf4(puVar7);
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_e8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    FUN_102aafeb4(puVar7);
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 102ab05fc; end: 102ab064b;  */

void FUN_102ab05fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ab064c; end: 102ab0663;  */

void FUN_102ab064c(void)

{
  return;
}



/* Entry: 102ab0664; end: 102ab0847;  */

/* WARNING: Possible PIC construction at 0x000102ab06ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab06e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab072c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab0790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab07f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab0794) */
/* WARNING: Removing unreachable block (ram,0x000102ab07b8) */
/* WARNING: Removing unreachable block (ram,0x000102ab07a8) */
/* WARNING: Removing unreachable block (ram,0x000102ab07bc) */
/* WARNING: Removing unreachable block (ram,0x000102ab0730) */
/* WARNING: Removing unreachable block (ram,0x000102ab0754) */
/* WARNING: Removing unreachable block (ram,0x000102ab0744) */
/* WARNING: Removing unreachable block (ram,0x000102ab0758) */
/* WARNING: Removing unreachable block (ram,0x000102ab06e8) */
/* WARNING: Removing unreachable block (ram,0x000102ab06b0) */
/* WARNING: Removing unreachable block (ram,0x000102ab07fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab0664(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x657a6973;
  func_0x000107c5fadc(0x657a6973,0xe400000000000000);
  func_0x000107c42740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102ab0848; end: 102ab0897; -[_TtC12WidgetLogger22SCLockScreenWidgetInfo encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x000102ab0880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab0884) */

void FUN_102ab0848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102ab0664(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ab0898; end: 102ab08c7;  */

void FUN_102ab0898(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102ab08c8(param_1);
  return;
}



/* Entry: 102ab08c8; end: 102ab0c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102ab08c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x657a6973;
  func_0x000107c5fadc(0x657a6973,0xe400000000000000);
  lVar3 = param_1;
  func_0x000107c41470();
  func_0x000107c61170(uVar2);
  uVar2 = 0x65707974;
  func_0x000107c5fadc(0x65707974,0xe400000000000000);
  lVar4 = param_1;
  func_0x000107c41470();
  func_0x000107c61170(uVar2);
  uVar2 = 0x74616e6974736564;
  func_0x000107c5fadc(0x74616e6974736564,0xeb000000006e6f69);
  lVar5 = param_1;
  func_0x000107c41470();
  func_0x000107c61170(uVar2);
  uVar2 = 0x6449646e65697266;
  func_0x000107c5fadc(0x6449646e65697266,0xe800000000000000);
  lVar6 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,lVar6);
    func_0x000107c615e8(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
    uVar15 = 0;
  }
  else {
    puVar7 = &uStack_c0;
    func_0x000107c6147c(puVar7,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_c0;
    uVar15 = uStack_b8;
    if ((int)puVar7 == 0) {
      uVar2 = 0;
      uVar15 = 0;
    }
  }
  uVar8 = 0x49726f7461657263;
  func_0x000107c5fadc(0x49726f7461657263,0xe900000000000064);
  lVar6 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,lVar6);
    func_0x000107c615e8(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar8 = 0;
    uVar14 = 0;
  }
  else {
    puVar7 = &uStack_c0;
    func_0x000107c6147c(puVar7,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar8 = uStack_c0;
    uVar14 = uStack_b8;
    if ((int)puVar7 == 0) {
      uVar8 = 0;
      uVar14 = 0;
    }
  }
  lVar9 = 0x70756f72477369;
  func_0x000107c5fadc(0x70756f72477369,0xe700000000000000);
  lVar10 = param_1;
  func_0x000107c41454();
  func_0x000107c61170();
  func_0x000100c1f008();
  lVar11 = lVar9;
  func_0x000107c610f8();
  lVar6 = _DAT_112ee88b8;
  uVar12 = 0x112ee88f8;
  func_0x0001000285a8(0x112ee88f8,&UNK_10db15a68);
  func_0x000107c61538();
  *(undefined8 *)(lVar11 + lVar6) = uVar12;
  *(long *)(lVar11 + _DAT_112ee8888) = lVar3;
  *(long *)(lVar11 + _DAT_112ee8890) = lVar4;
  *(long *)(lVar11 + _DAT_112ee8898) = lVar5;
  puVar7 = (undefined8 *)(lVar11 + _DAT_112ee88a0);
  *puVar7 = uVar2;
  puVar7[1] = uVar15;
  puVar7 = (undefined8 *)(lVar11 + _DAT_112ee88a8);
  *puVar7 = uVar8;
  puVar7[1] = uVar14;
  *(char *)(lVar11 + _DAT_112ee88b0) = (char)lVar10;
  plVar13 = &lStack_b0;
  lStack_b0 = lVar11;
  lStack_a8 = lVar9;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return plVar13;
}



/* Entry: 102ab0c14; end: 102ab0c3b; -[_TtC12WidgetLogger22SCLockScreenWidgetInfo initWithCoder:] */

void FUN_102ab0c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102ab08c8();
  return;
}



/* Entry: 102ab0c3c; end: 102ab0d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab0c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ee88b8;
  uVar3 = 0x112ee88f8;
  func_0x0001000285a8(0x112ee88f8,&UNK_10db15a68);
  func_0x000107c61538();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee8888) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee8890) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee8898) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee88a0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee88a8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112ee88b0) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab0d3c; end: 102ab0ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_102ab0d3c(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  long unaff_x20;
  long lStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x000100672b50(param_1,auStack_40);
  if (lStack_28 == 0) {
    func_0x00010006e7f4(auStack_40);
  }
  else {
    func_0x000100c1f008();
    plVar2 = &lStack_48;
    func_0x000107c6147c(plVar2,auStack_40,PTR___sypN_11034f1a8 + 8,param_1,6);
    if (((ulong)plVar2 & 1) != 0) {
      if (((*(long *)(unaff_x20 + _DAT_112ee8888) == *(long *)(lStack_48 + _DAT_112ee8888)) &&
          (*(long *)(unaff_x20 + _DAT_112ee8890) == *(long *)(lStack_48 + _DAT_112ee8890))) &&
         (*(long *)(unaff_x20 + _DAT_112ee8898) == *(long *)(lStack_48 + _DAT_112ee8898))) {
        uVar3 = ((ulong *)(unaff_x20 + _DAT_112ee88a0))[1];
        uVar4 = ((ulong *)(lStack_48 + _DAT_112ee88a0))[1];
        if (uVar3 == 0) {
          if (uVar4 == 0) goto LAB_102ab0e34;
        }
        else if ((uVar4 != 0) &&
                ((uVar6 = *(ulong *)(unaff_x20 + _DAT_112ee88a0),
                 uVar6 == *(ulong *)(lStack_48 + _DAT_112ee88a0) && uVar3 == uVar4 ||
                 (func_0x000107c605b8(), (uVar6 & 1) != 0)))) {
LAB_102ab0e34:
          uVar3 = ((ulong *)(unaff_x20 + _DAT_112ee88a8))[1];
          uVar4 = ((ulong *)(lStack_48 + _DAT_112ee88a8))[1];
          if (uVar3 == 0) {
            if (uVar4 == 0) goto LAB_102ab0e88;
          }
          else if ((uVar4 != 0) &&
                  (((uVar6 = *(ulong *)(unaff_x20 + _DAT_112ee88a8),
                    uVar6 == *(ulong *)(lStack_48 + _DAT_112ee88a8) && (uVar3 == uVar4)) ||
                   (func_0x000107c605b8(), (uVar6 & 1) != 0)))) {
LAB_102ab0e88:
            bVar5 = *(byte *)(unaff_x20 + _DAT_112ee88b0);
            bVar1 = *(byte *)(lStack_48 + _DAT_112ee88b0);
            func_0x000107c61170();
            bVar5 = bVar5 ^ bVar1 ^ 1;
            goto LAB_102ab0eb4;
          }
        }
      }
      func_0x000107c61170();
    }
  }
  bVar5 = 0;
LAB_102ab0eb4:
  return bVar5 & 1;
}



/* Entry: 102ab0ec8; end: 102ab0f47; -[_TtC12WidgetLogger22SCLockScreenWidgetInfo isEqual:] */

uint FUN_102ab0ec8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102ab0d3c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102ab0f48; end: 102ab0f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ab0f48(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ee88b8) + 0x10);
  plVar3 = (long *)(*(long *)(unaff_x20 + _DAT_112ee88b8) + 0x20);
  do {
    lVar2 = lVar1;
    if (lVar2 == 0) break;
    lVar4 = *plVar3;
    lVar1 = lVar2 + -1;
    plVar3 = plVar3 + 1;
  } while (lVar4 != *(long *)(unaff_x20 + _DAT_112ee8890));
  return lVar2 != 0;
}



/* Entry: 102ab0f8c; end: 102ab0fe7; -[_TtC12WidgetLogger22SCLockScreenWidgetInfo init] */

void FUN_102ab0f8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WidgetLogger.SCLockScreenWidgetInfo",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab0fb8);
  (*pcVar1)();
}



/* Entry: 102ab0fe8; end: 102ab1037; -[_TtC12WidgetLogger22SCLockScreenWidgetInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ab1008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab100c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab0fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ee88a0 + 8))
  ;
  return;
}



/* Entry: 102ab1038; end: 102ab1073;  */

void FUN_102ab1038(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110593338;
  if (lRam0000000112ee8960 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ee8960 = param_1;
  }
  return;
}



/* Entry: 102ab1074; end: 102ab10b7;  */

void FUN_102ab1074(long param_1,long *param_2,long param_3)

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



/* Entry: 102ab10b8; end: 102ab10ef;  */

void FUN_102ab10b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102ab10f0; end: 102ab1223;  */

void FUN_102ab10f0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126abe90;
  func_0x000107c610f8(PTR_PTR_1126abe90);
  func_0x000107c453e4();
  func_0x000107c5a71c();
  func_0x000107c5a714(puVar1);
  func_0x000107c5a704(puVar1);
  func_0x000107c5a718(puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
  puVar3 = PTR_PTR_1126c80b0;
  func_0x000107c61168(PTR_PTR_1126c80b0);
  func_0x000107c5e2c0();
  func_0x000107c61180();
  uVar4 = param_1;
  FUN_102ab32f8(param_1,puVar3);
  func_0x000107c61170(puVar3);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c45314(uStack_48);
  func_0x000107c61170(uStack_48);
  FUN_102ab15ec(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102ab1224; end: 102ab133b;  */

void FUN_102ab1224(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126abe98;
  func_0x000107c610f8(PTR_PTR_1126abe98);
  func_0x000107c453e4();
  func_0x000107c5a71c();
  func_0x000107c5a714(puVar1);
  func_0x000107c5a704(puVar1);
  func_0x000107c5a718(puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
  puVar3 = PTR_PTR_1126c80b0;
  func_0x000107c61168(PTR_PTR_1126c80b0);
  func_0x000107c5e2e8();
  func_0x000107c61180();
  FUN_102ab32f8(param_1,puVar3);
  func_0x000107c61170(puVar3);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c45314(uStack_38);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102ab133c; end: 102ab1443;  */

uint FUN_102ab133c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  bVar3 = *(byte *)(param_2 + 0x30);
  lVar6 = -0x2000000000000000;
  lVar4 = 0;
  if ((1 << (ulong)(*(byte *)(param_1 + 0x30) >> 5) & 0x3dU) == 0) {
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x000107c61434(lVar7);
      lVar4 = lVar5;
      lVar6 = lVar7;
    }
  }
  lVar7 = -0x2000000000000000;
  lVar5 = 0;
  if ((1 << (ulong)(bVar3 >> 5) & 0x3dU) == 0) {
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c61434(lVar2);
      lVar5 = lVar1;
      lVar7 = lVar2;
    }
  }
  if ((lVar4 == lVar5) && (lVar6 == lVar7)) {
    uVar8 = 0;
  }
  else {
    func_0x000107c605b8(lVar4,lVar6,lVar5,lVar7,1);
    uVar8 = (uint)lVar4;
  }
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(lVar7);
  return uVar8 & 1;
}



/* Entry: 102ab1444; end: 102ab15eb;  */

void FUN_102ab1444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126abea0;
  func_0x000107c610f8(PTR_PTR_1126abea0);
  func_0x000107c453e4();
  func_0x000107c5a204();
  func_0x000107c5a71c(puVar1);
  func_0x000107c5a714(puVar1);
  func_0x000107c5a704(puVar1);
  func_0x000107c5a718(puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
  puVar3 = PTR_PTR_1126c80b0;
  func_0x000107c61168(PTR_PTR_1126c80b0);
  func_0x000107c5e2d0();
  func_0x000107c61180();
  FUN_102ab32f8(param_1,puVar3);
  func_0x000107c61170(puVar3);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar4 = 0x745f657461647075;
    func_0x000107c5fadc(0x745f657461647075,0xeb00000000657079);
    func_0x000107c31218(param_2);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c5e508(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_2);
  }
  func_0x0001000d224c(&uStack_48);
  func_0x000107c45314(uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102ab15ec; end: 102ab187f;  */

void FUN_102ab15ec(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  if (((bVar2 & 0xe0) == 0x20) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (((uVar3 == *(ulong *)(unaff_x20 + 0x50) &&
          *(long *)(param_1 + 0x28) == *(long *)(unaff_x20 + 0x58)) ||
        (func_0x000107c605b8(), (uVar3 & 1) != 0)) && ((lVar1 != 0 && ((bVar2 & 1) == 0)))) {
      lVar4 = *(long *)(unaff_x20 + 0x60);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5fadc(uVar5,lVar1);
        func_0x000107c51e18(lVar4);
        func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 102ab1880; end: 102ab193b;  */

void FUN_102ab1880(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c4218c();
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102ab193c; end: 102ab1a5b;  */

undefined * FUN_102ab193c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab1a5c);
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
    puVar2 = (undefined *)0x112ee8aa8;
    func_0x0001000285a8(0x112ee8aa8,&UNK_10db15dc0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110593b90);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x38 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 102ab1a5c; end: 102ab1bf7;  */

ulong FUN_102ab1a5c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ab1b2c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ab1b30);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100c1f008(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000100c1f008(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f0e64c0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ab1bf8);
  (*pcVar2)();
}



/* Entry: 102ab1bf8; end: 102ab256b;  */

void FUN_102ab1bf8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x21;
  long lVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long *plVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lStack_158;
  uint uStack_148;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar24 = param_3[1];
  if (0 < lVar24) {
    lVar23 = 0;
    do {
      lVar32 = lVar23 + 1;
      if (lVar32 < lVar24) {
        lVar27 = *param_3;
        puVar21 = (undefined8 *)(lVar27 + lVar32 * 0x38);
        uVar26 = *puVar21;
        uVar25 = puVar21[1];
        uVar40 = puVar21[2];
        uVar39 = puVar21[3];
        uVar41 = puVar21[4];
        uVar45 = puVar21[5];
        uVar8 = *(undefined1 *)(puVar21 + 6);
        puVar21 = (undefined8 *)(lVar27 + lVar23 * 0x38);
        uVar42 = *puVar21;
        uVar46 = puVar21[1];
        uVar43 = puVar21[2];
        uVar47 = puVar21[3];
        uVar44 = puVar21[4];
        uVar48 = puVar21[5];
        uVar9 = *(undefined1 *)(puVar21 + 6);
        uStack_d8 = uVar42;
        uStack_d0 = uVar46;
        uStack_c8 = uVar43;
        uStack_c0 = uVar47;
        uStack_b8 = uVar44;
        uStack_b0 = uVar48;
        uStack_a8 = uVar9;
        uStack_a0 = uVar26;
        uStack_98 = uVar25;
        uStack_90 = uVar40;
        uStack_88 = uVar39;
        uStack_80 = uVar41;
        uStack_78 = uVar45;
        uStack_70 = uVar8;
        FUN_102ab3218();
        FUN_102ab3218(uVar42,uVar46,uVar43,uVar47,uVar44,uVar48,uVar9);
        puVar21 = &uStack_a0;
        FUN_102ab133c(puVar21,&uStack_d8);
        FUN_102ab34d0(uVar42,uVar46,uVar43,uVar47,uVar44,uVar48,uVar9);
        FUN_102ab34d0(uVar26,uVar25,uVar40,uVar39,uVar41,uVar45,uVar8);
        if (unaff_x21 != 0) goto LAB_102ab2500;
        lStack_158 = lVar23 * 0x38;
        plVar37 = (long *)(lVar27 + lStack_158 + 0x50);
        lVar27 = lVar23 + 2;
        do {
          lVar29 = lVar27;
          lVar32 = lVar24;
          if (lVar24 == lVar29) break;
          lVar32 = plVar37[4];
          lVar31 = plVar37[5];
          lVar27 = plVar37[6];
          lVar2 = plVar37[7];
          lVar22 = plVar37[8];
          lVar3 = plVar37[9];
          bVar10 = *(byte *)(plVar37 + 10);
          lVar30 = plVar37[-3];
          lVar4 = plVar37[-2];
          lVar1 = plVar37[-1];
          lVar5 = *plVar37;
          lVar38 = plVar37[1];
          lVar6 = plVar37[2];
          bVar11 = *(byte *)(plVar37 + 3);
          lVar14 = 0;
          lVar33 = -0x2000000000000000;
          if ((1 << (ulong)(bVar10 >> 5) & 0x3dU) == 0) {
            if (lVar2 == 0) {
              FUN_102ab3218(lVar32,lVar31,lVar27,0,lVar22,lVar3,bVar10);
              lVar14 = 0;
              lVar33 = -0x2000000000000000;
            }
            else {
              FUN_102ab3218(lVar32,lVar31,lVar27,lVar2,lVar22,lVar3,bVar10);
              func_0x000107c61434(lVar2);
              lVar14 = lVar27;
              lVar33 = lVar2;
            }
          }
          lVar28 = -0x2000000000000000;
          lVar19 = 0;
          if ((1 << (ulong)(bVar11 >> 5) & 0x3dU) == 0) {
            if (lVar5 == 0) {
              lVar19 = 0;
            }
            else {
              func_0x000107c61434(lVar5);
              lVar19 = lVar1;
              lVar28 = lVar5;
            }
          }
          if ((lVar14 == lVar19) && (lVar33 == lVar28)) {
            uStack_148 = 0;
          }
          else {
            func_0x000107c605b8(lVar14,lVar33,lVar19,lVar28,1);
            uStack_148 = (uint)lVar14;
          }
          FUN_102ab3218(lVar30,lVar4,lVar1,lVar5,lVar38,lVar6,bVar11);
          func_0x000107c6142c(lVar33);
          func_0x000107c6142c(lVar28);
          FUN_102ab34d0(lVar30,lVar4,lVar1,lVar5,lVar38,lVar6,bVar11);
          FUN_102ab34d0(lVar32,lVar31,lVar27,lVar2,lVar22,lVar3,bVar10);
          plVar37 = plVar37 + 7;
          lVar27 = lVar29 + 1;
          lVar32 = lVar29;
        } while ((((uint)puVar21 ^ uStack_148) & 1) == 0);
        if (((ulong)puVar21 & 1) != 0) {
          if (lVar32 < lVar23) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2548);
            (*pcVar12)();
          }
          if (lVar23 < lVar32) {
            lVar22 = *param_3;
            lVar27 = lVar32 * 0x38;
            lVar29 = lVar32;
            lVar24 = lVar23;
            do {
              lVar29 = lVar29 + -1;
              if (lVar24 != lVar29) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2560);
                  (*pcVar12)();
                }
                puVar21 = (undefined8 *)(lVar22 + lStack_158);
                uVar8 = *(undefined1 *)(puVar21 + 6);
                lVar30 = lVar22 + lVar27;
                uVar40 = puVar21[1];
                uVar26 = *puVar21;
                uVar42 = puVar21[3];
                uVar41 = puVar21[2];
                uVar44 = puVar21[5];
                uVar43 = puVar21[4];
                uVar39 = *(undefined8 *)(lVar30 + -0x20);
                uVar25 = *(undefined8 *)(lVar30 + -0x28);
                uVar46 = *(undefined8 *)(lVar30 + -0x10);
                uVar45 = *(undefined8 *)(lVar30 + -0x18);
                uVar48 = *(undefined8 *)(lVar30 + -0x30);
                uVar47 = *(undefined8 *)(lVar30 + -0x38);
                puVar21[6] = *(undefined8 *)(lVar30 + -8);
                puVar21[3] = uVar39;
                puVar21[2] = uVar25;
                puVar21[5] = uVar46;
                puVar21[4] = uVar45;
                puVar21[1] = uVar48;
                *puVar21 = uVar47;
                *(undefined8 *)(lVar30 + -0x30) = uVar40;
                *(undefined8 *)(lVar30 + -0x38) = uVar26;
                *(undefined8 *)(lVar30 + -0x20) = uVar42;
                *(undefined8 *)(lVar30 + -0x28) = uVar41;
                *(undefined8 *)(lVar30 + -0x10) = uVar44;
                *(undefined8 *)(lVar30 + -0x18) = uVar43;
                *(undefined1 *)(lVar30 + -8) = uVar8;
              }
              lVar24 = lVar24 + 1;
              lVar27 = lVar27 + -0x38;
              lStack_158 = lStack_158 + 0x38;
            } while (lVar24 < lVar29);
          }
        }
      }
      lVar24 = param_3[1];
      lVar27 = lVar32;
      if (lVar32 < lVar24) {
        if (SBORROW8(lVar32,lVar23)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab253c);
          (*pcVar12)();
        }
        if (lVar32 - lVar23 < param_4) {
          if (SCARRY8(lVar23,param_4)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2540);
            (*pcVar12)();
          }
          lVar29 = lVar23 + param_4;
          if (lVar24 <= lVar23 + param_4) {
            lVar29 = lVar24;
          }
          if (lVar29 < lVar23) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2544);
            (*pcVar12)();
          }
          if (lVar32 != lVar29) {
            lVar30 = *param_3;
            puVar21 = (undefined8 *)(lVar30 + lVar32 * 0x38 + -0x38);
            lVar24 = lVar23 - lVar32;
            puVar35 = puVar21;
            lVar22 = lVar24;
LAB_102ab2124:
            do {
              uVar25 = puVar21[7];
              uVar26 = puVar21[8];
              uVar7 = puVar21[9];
              lVar27 = puVar21[10];
              uVar42 = puVar21[0xb];
              uVar39 = puVar21[0xc];
              bVar10 = *(byte *)(puVar21 + 0xd);
              uVar40 = *puVar21;
              uVar43 = puVar21[1];
              uVar36 = puVar21[2];
              lVar1 = puVar21[3];
              uVar41 = puVar21[4];
              uVar44 = puVar21[5];
              lVar38 = -0x2000000000000000;
              bVar11 = *(byte *)(puVar21 + 6);
              uVar34 = (ulong)bVar11;
              uVar15 = 0;
              if ((1 << (ulong)(bVar10 >> 5) & 0x3dU) == 0) {
                if (lVar27 == 0) {
                  FUN_102ab3218(uVar25,uVar26,uVar7,0,uVar42,uVar39,bVar10);
                  uVar15 = 0;
                  uVar34 = (ulong)(uint)bVar11;
                }
                else {
                  FUN_102ab3218(uVar25,uVar26,uVar7,lVar27,uVar42,uVar39,bVar10);
                  func_0x000107c61434(lVar27);
                  uVar34 = (ulong)(uint)bVar11;
                  uVar15 = uVar7;
                  lVar38 = lVar27;
                }
              }
              lVar31 = -0x2000000000000000;
              uVar20 = 0;
              if ((1 << (uVar34 >> 5) & 0x3dU) == 0) {
                if (lVar1 == 0) {
                  uVar20 = 0;
                }
                else {
                  func_0x000107c61434(lVar1);
                  uVar20 = uVar36;
                  lVar31 = lVar1;
                }
              }
              if ((uVar15 == uVar20) && (lVar38 == lVar31)) {
                FUN_102ab3218(uVar40,uVar43,uVar36,lVar1,uVar41,uVar44,uVar34);
                func_0x000107c6142c(lVar38);
                func_0x000107c6142c(lVar31);
                FUN_102ab34d0(uVar40,uVar43,uVar36,lVar1,uVar41,uVar44,uVar34);
                FUN_102ab34d0(uVar25,uVar26,uVar7,lVar27,uVar42,uVar39,bVar10);
              }
              else {
                func_0x000107c605b8(uVar15,lVar38,uVar20,lVar31,1);
                FUN_102ab3218(uVar40,uVar43,uVar36,lVar1,uVar41,uVar44,uVar34);
                func_0x000107c6142c(lVar38);
                func_0x000107c6142c(lVar31);
                FUN_102ab34d0(uVar40,uVar43,uVar36,lVar1,uVar41,uVar44,uVar34);
                FUN_102ab34d0(uVar25,uVar26,uVar7,lVar27,uVar42,uVar39,bVar10);
                if ((uVar15 & 1) != 0) {
                  if (lVar30 == 0) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab254c);
                    (*pcVar12)();
                  }
                  uVar41 = puVar21[8];
                  uVar40 = puVar21[7];
                  uVar43 = puVar21[10];
                  uVar42 = puVar21[9];
                  uVar25 = puVar21[0xc];
                  uVar44 = puVar21[0xb];
                  puVar21[8] = puVar21[1];
                  puVar21[7] = *puVar21;
                  puVar21[10] = puVar21[3];
                  puVar21[9] = puVar21[2];
                  puVar21[0xc] = puVar21[5];
                  puVar21[0xb] = puVar21[4];
                  uVar26 = puVar21[6];
                  puVar21[1] = uVar41;
                  *puVar21 = uVar40;
                  puVar21[3] = uVar43;
                  puVar21[2] = uVar42;
                  puVar21[5] = uVar25;
                  puVar21[4] = uVar44;
                  *(undefined1 *)(puVar21 + 6) = *(undefined1 *)(puVar21 + 0xd);
                  puVar21[0xd] = uVar26;
                  bVar13 = lVar24 != -1;
                  lVar24 = lVar24 + 1;
                  puVar21 = puVar21 + -7;
                  if (bVar13) goto LAB_102ab2124;
                }
              }
              lVar32 = lVar32 + 1;
              puVar21 = puVar35 + 7;
              lVar24 = lVar22 + -1;
              lVar27 = lVar29;
              puVar35 = puVar21;
              lVar22 = lVar24;
            } while (lVar32 != lVar29);
          }
        }
      }
      puVar18 = puStack_58;
      if (lVar27 < lVar23) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2530);
        (*pcVar12)();
      }
      puVar16 = puStack_58;
      func_0x000107c61558();
      puVar17 = puVar18;
      if (((ulong)puVar16 & 1) == 0) {
        puVar17 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
      }
      uVar36 = *(ulong *)(puVar17 + 0x10);
      puVar18 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar36) {
        puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
        func_0x0001000a91e0(puVar18,uVar36 + 1,1,puVar17);
      }
      *(ulong *)(puVar18 + 0x10) = uVar36 + 1;
      *(long *)(puVar18 + uVar36 * 0x10 + 0x20) = lVar23;
      *(long *)(puVar18 + uVar36 * 0x10 + 0x28) = lVar27;
      puStack_58 = puVar18;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2564);
        (*pcVar12)();
      }
      FUN_102ab28b0(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_102ab2500;
      lVar24 = param_3[1];
      lVar23 = lVar27;
    } while (lVar27 < lVar24);
  }
  puVar18 = puStack_58;
  lVar24 = *param_1;
  if (lVar24 == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab256c);
    (*pcVar12)();
  }
  puVar16 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar16 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar36 = *(ulong *)(puVar18 + 0x10);
  while( true ) {
    puStack_58 = puVar18;
    if (uVar36 < 2) {
      func_0x000107c6142c(puVar18);
      return;
    }
    lVar23 = *param_3;
    if (lVar23 == 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2568);
      (*pcVar12)();
    }
    lVar27 = uVar36 - 1;
    lVar29 = *(long *)(puVar18 + uVar36 * 0x10);
    lVar32 = *(long *)(puVar18 + lVar27 * 0x10 + 0x28);
    FUN_102ab2b20(lVar23 + lVar29 * 0x38,lVar23 + *(long *)(puVar18 + lVar27 * 0x10 + 0x20) * 0x38,
                  lVar23 + lVar32 * 0x38,lVar24);
    if (unaff_x21 != 0) break;
    if (lVar32 < lVar29) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2534);
      (*pcVar12)();
    }
    puVar16 = puVar18;
    func_0x000107c61558();
    if (((ulong)puVar16 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar18 + 0x10) <= uVar36 - 2) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x102ab2538);
      (*pcVar12)();
    }
    *(long *)(puVar18 + uVar36 * 0x10) = lVar29;
    *(long *)((long)(puVar18 + uVar36 * 0x10) + 8) = lVar32;
    puStack_58 = puVar18;
    func_0x0001000a97cc(lVar27);
    uVar36 = *(ulong *)(puStack_58 + 0x10);
    puVar18 = puStack_58;
  }
LAB_102ab2500:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 102ab256c; end: 102ab28af;  */

void FUN_102ab256c(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_3 != param_2) {
    lVar12 = *param_4;
    puVar19 = (undefined8 *)(lVar12 + param_3 * 0x38 + -0x38);
    param_1 = param_1 - param_3;
    puVar20 = puVar19;
    lVar18 = param_1;
LAB_102ab2680:
    do {
      uVar13 = puVar19[7];
      uVar14 = puVar19[8];
      uVar3 = puVar19[9];
      lVar1 = puVar19[10];
      uVar23 = puVar19[0xb];
      uVar11 = puVar19[0xc];
      bVar5 = *(byte *)(puVar19 + 0xd);
      uVar21 = *puVar19;
      uVar24 = puVar19[1];
      uVar2 = puVar19[2];
      lVar4 = puVar19[3];
      uVar22 = puVar19[4];
      uVar25 = puVar19[5];
      bVar6 = *(byte *)(puVar19 + 6);
      uVar17 = (ulong)bVar6;
      uVar9 = 0;
      lVar15 = -0x2000000000000000;
      if ((1 << (ulong)(bVar5 >> 5) & 0x3dU) == 0) {
        if (lVar1 == 0) {
          FUN_102ab3218(uVar13,uVar14,uVar3,0,uVar23,uVar11,bVar5);
          uVar9 = 0;
          lVar15 = -0x2000000000000000;
          uVar17 = (ulong)(uint)bVar6;
        }
        else {
          FUN_102ab3218(uVar13,uVar14,uVar3,lVar1,uVar23,uVar11,bVar5);
          func_0x000107c61434(lVar1);
          uVar17 = (ulong)(uint)bVar6;
          uVar9 = uVar3;
          lVar15 = lVar1;
        }
      }
      lVar16 = -0x2000000000000000;
      uVar10 = 0;
      if ((1 << (uVar17 >> 5) & 0x3dU) == 0) {
        if (lVar4 == 0) {
          uVar10 = 0;
        }
        else {
          func_0x000107c61434(lVar4);
          uVar10 = uVar2;
          lVar16 = lVar4;
        }
      }
      if ((uVar9 == uVar10) && (lVar15 == lVar16)) {
        FUN_102ab3218(uVar21,uVar24,uVar2,lVar4,uVar22,uVar25,uVar17);
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(lVar16);
        FUN_102ab34d0(uVar21,uVar24,uVar2,lVar4,uVar22,uVar25,uVar17);
        FUN_102ab34d0(uVar13,uVar14,uVar3,lVar1,uVar23,uVar11,bVar5);
      }
      else {
        func_0x000107c605b8(uVar9,lVar15,uVar10,lVar16,1);
        FUN_102ab3218(uVar21,uVar24,uVar2,lVar4,uVar22,uVar25,uVar17);
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(lVar16);
        FUN_102ab34d0(uVar21,uVar24,uVar2,lVar4,uVar22,uVar25,uVar17);
        FUN_102ab34d0(uVar13,uVar14,uVar3,lVar1,uVar23,uVar11,bVar5);
        if ((uVar9 & 1) != 0) {
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102ab28b0);
            (*pcVar7)();
          }
          uVar22 = puVar19[8];
          uVar21 = puVar19[7];
          uVar24 = puVar19[10];
          uVar23 = puVar19[9];
          uVar11 = puVar19[0xc];
          uVar25 = puVar19[0xb];
          puVar19[8] = puVar19[1];
          puVar19[7] = *puVar19;
          puVar19[10] = puVar19[3];
          puVar19[9] = puVar19[2];
          puVar19[0xc] = puVar19[5];
          puVar19[0xb] = puVar19[4];
          uVar14 = puVar19[6];
          puVar19[1] = uVar22;
          *puVar19 = uVar21;
          puVar19[3] = uVar24;
          puVar19[2] = uVar23;
          puVar19[5] = uVar11;
          puVar19[4] = uVar25;
          *(undefined1 *)(puVar19 + 6) = *(undefined1 *)(puVar19 + 0xd);
          puVar19[0xd] = uVar14;
          bVar8 = param_1 != -1;
          param_1 = param_1 + 1;
          puVar19 = puVar19 + -7;
          if (bVar8) goto LAB_102ab2680;
        }
      }
      param_3 = param_3 + 1;
      puVar19 = puVar20 + 7;
      param_1 = lVar18 + -1;
      puVar20 = puVar19;
      lVar18 = param_1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102ab28b0; end: 102ab2b1f;  */

undefined8 FUN_102ab28b0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102ab2988;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2b08);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102ab29ec:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2af8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2b00);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2ae0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2ae4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2aec);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2af4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102ab2988:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2ae8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2af0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2afc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2b04);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102ab29ec;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2b0c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2ad4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2b20);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102ab2b20(lVar9 + lVar12 * 0x38,lVar9 + *plVar1 * 0x38,lVar9 + lVar7 * 0x38,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2ad8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab2adc);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 102ab2b20; end: 102ab3217;  */

undefined8
FUN_102ab2b20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uStack_d4;
  undefined8 *puStack_58;
  
  lVar18 = ((long)param_2 - (long)param_1) / 0x38;
  lVar3 = ((long)param_3 - (long)param_2) / 0x38;
  if (lVar18 < lVar3) {
    if ((param_4 != param_1) || (param_1 + lVar18 * 7 <= param_4)) {
      func_0x000107c610b8(param_4,param_1,lVar18 * 0x38);
    }
    puVar21 = param_4 + lVar18 * 7;
    puVar10 = param_1;
    if (0x37 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar26 = *param_2;
        uVar14 = param_2[1];
        uVar1 = param_2[2];
        lVar18 = param_2[3];
        uVar27 = param_2[4];
        uVar15 = param_2[5];
        bVar6 = *(byte *)(param_2 + 6);
        uVar28 = *param_4;
        uVar16 = param_4[1];
        uVar2 = param_4[2];
        lVar3 = param_4[3];
        uVar29 = param_4[4];
        uVar25 = param_4[5];
        bVar7 = *(byte *)(param_4 + 6);
        uVar8 = 0;
        lVar19 = -0x2000000000000000;
        if ((1 << (ulong)(bVar6 >> 5) & 0x3dU) == 0) {
          if (lVar18 == 0) {
            FUN_102ab3218(uVar26,uVar14,uVar1,0,uVar27,uVar15,bVar6);
            uVar8 = 0;
            lVar19 = -0x2000000000000000;
          }
          else {
            FUN_102ab3218(uVar26,uVar14,uVar1,lVar18,uVar27,uVar15,bVar6);
            func_0x000107c61434(lVar18);
            uVar8 = uVar1;
            lVar19 = lVar18;
          }
        }
        lVar23 = -0x2000000000000000;
        uVar11 = 0;
        if ((1 << (ulong)(bVar7 >> 5) & 0x3dU) == 0) {
          if (lVar3 == 0) {
            uVar11 = 0;
          }
          else {
            func_0x000107c61434(lVar3);
            uVar11 = uVar2;
            lVar23 = lVar3;
          }
        }
        if ((uVar8 == uVar11) && (lVar19 == lVar23)) {
          FUN_102ab3218(uVar28,uVar16,uVar2,lVar3,uVar29,uVar25,bVar7);
          func_0x000107c6142c(lVar19);
          func_0x000107c6142c(lVar23);
          FUN_102ab34d0(uVar28,uVar16,uVar2,lVar3,uVar29,uVar25,bVar7);
          FUN_102ab34d0(uVar26,uVar14,uVar1,lVar18,uVar27,uVar15,bVar6);
LAB_102ab2de8:
          puVar13 = param_2;
          puVar20 = param_4 + 7;
          param_2 = param_4;
        }
        else {
          func_0x000107c605b8(uVar8,lVar19,uVar11,lVar23,1);
          FUN_102ab3218(uVar28,uVar16,uVar2,lVar3,uVar29,uVar25,bVar7);
          func_0x000107c6142c(lVar19);
          func_0x000107c6142c(lVar23);
          FUN_102ab34d0(uVar28,uVar16,uVar2,lVar3,uVar29,uVar25,bVar7);
          FUN_102ab34d0(uVar26,uVar14,uVar1,lVar18,uVar27,uVar15,bVar6);
          if ((uVar8 & 1) == 0) goto LAB_102ab2de8;
          puVar13 = param_2 + 7;
          puVar20 = param_4;
        }
        param_4 = puVar20;
        if (puVar10 != param_2) {
          uVar27 = param_2[1];
          uVar26 = *param_2;
          uVar29 = param_2[3];
          uVar28 = param_2[2];
          uVar15 = param_2[5];
          uVar14 = param_2[4];
          puVar10[6] = param_2[6];
          puVar10[3] = uVar29;
          puVar10[2] = uVar28;
          puVar10[5] = uVar15;
          puVar10[4] = uVar14;
          puVar10[1] = uVar27;
          *puVar10 = uVar26;
        }
        puVar10 = puVar10 + 7;
        param_2 = puVar13;
      } while (param_4 < puVar21);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar3 * 7 <= param_4)) {
      func_0x000107c610b8(param_4,param_2,lVar3 * 0x38);
    }
    puVar21 = param_4 + lVar3 * 7;
    puVar10 = param_2;
    if ((param_1 < param_2) && (puStack_58 = param_3, 0x37 < (long)param_3 - (long)param_2)) {
      do {
        puVar20 = puVar21;
        lVar18 = 0;
        puVar13 = param_2 + -7;
        while( true ) {
          lVar3 = (long)puVar20 + lVar18;
          uVar25 = *(undefined8 *)(lVar3 + -0x38);
          uVar14 = *(undefined8 *)(lVar3 + -0x30);
          lVar19 = *(long *)(lVar3 + -0x28);
          lVar4 = *(long *)(lVar3 + -0x20);
          uVar15 = *(undefined8 *)(lVar3 + -0x18);
          uVar16 = *(undefined8 *)(lVar3 + -0x10);
          bVar6 = *(byte *)(lVar3 + -8);
          uVar26 = param_2[-7];
          uVar28 = param_2[-6];
          lVar23 = param_2[-5];
          lVar5 = param_2[-4];
          uVar27 = param_2[-3];
          uVar29 = param_2[-2];
          bVar7 = *(byte *)(param_2 + -1);
          lVar9 = 0;
          lVar17 = -0x2000000000000000;
          if ((1 << (ulong)(bVar6 >> 5) & 0x3dU) == 0) {
            if (lVar4 == 0) {
              FUN_102ab3218(uVar25,uVar14,lVar19,0,uVar15,uVar16,bVar6);
              lVar9 = 0;
              lVar17 = -0x2000000000000000;
            }
            else {
              FUN_102ab3218(uVar25,uVar14,lVar19,lVar4,uVar15,uVar16,bVar6);
              func_0x000107c61434(lVar4);
              lVar9 = lVar19;
              lVar17 = lVar4;
            }
          }
          lVar22 = -0x2000000000000000;
          lVar12 = 0;
          if ((1 << (ulong)(bVar7 >> 5) & 0x3dU) == 0) {
            if (lVar5 == 0) {
              lVar12 = 0;
            }
            else {
              func_0x000107c61434(lVar5);
              lVar12 = lVar23;
              lVar22 = lVar5;
            }
          }
          if ((lVar9 == lVar12) && (lVar17 == lVar22)) {
            uStack_d4 = 0;
          }
          else {
            func_0x000107c605b8(lVar9,lVar17,lVar12,lVar22,1);
            uStack_d4 = (uint)lVar9;
          }
          puVar10 = (undefined8 *)((long)puStack_58 + lVar18);
          puVar24 = puVar10 + -7;
          FUN_102ab3218(uVar26,uVar28,lVar23,lVar5,uVar27,uVar29,bVar7);
          func_0x000107c6142c(lVar17);
          func_0x000107c6142c(lVar22);
          FUN_102ab34d0(uVar26,uVar28,lVar23,lVar5,uVar27,uVar29,bVar7);
          FUN_102ab34d0(uVar25,uVar14,lVar19,lVar4,uVar15,uVar16,bVar6);
          if ((uStack_d4 & 1) != 0) break;
          if ((long)puStack_58 + lVar18 != lVar3) {
            uVar27 = *(undefined8 *)(lVar3 + -0x30);
            uVar26 = *(undefined8 *)(lVar3 + -0x38);
            uVar29 = *(undefined8 *)(lVar3 + -0x20);
            uVar28 = *(undefined8 *)(lVar3 + -0x28);
            uVar15 = *(undefined8 *)(lVar3 + -0x10);
            uVar14 = *(undefined8 *)(lVar3 + -0x18);
            puVar10[-1] = *(undefined8 *)(lVar3 + -8);
            puVar10[-4] = uVar29;
            puVar10[-5] = uVar28;
            puVar10[-2] = uVar15;
            puVar10[-3] = uVar14;
            puVar10[-6] = uVar27;
            *puVar24 = uVar26;
          }
          lVar18 = lVar18 + -0x38;
          puVar21 = (undefined8 *)((long)puVar20 + lVar18);
          puVar10 = param_2;
          if (puVar21 <= param_4) goto LAB_102ab31a8;
        }
        if (puVar10 != param_2) {
          uVar27 = param_2[-6];
          uVar26 = *puVar13;
          uVar29 = param_2[-4];
          uVar28 = param_2[-5];
          uVar15 = param_2[-2];
          uVar14 = param_2[-3];
          puVar10[-1] = param_2[-1];
          puVar10[-4] = uVar29;
          puVar10[-5] = uVar28;
          puVar10[-2] = uVar15;
          puVar10[-3] = uVar14;
          puVar10[-6] = uVar27;
          *puVar24 = uVar26;
        }
      } while ((param_1 < puVar13) &&
              (puVar21 = (undefined8 *)((long)puVar20 + lVar18), param_2 = puVar13,
              puStack_58 = puVar24, param_4 < (undefined8 *)((long)puVar20 + lVar18)));
      puVar21 = (undefined8 *)((long)puVar20 + lVar18);
      puVar10 = puVar13;
    }
  }
LAB_102ab31a8:
  if ((puVar10 != param_4) ||
     ((undefined8 *)
      ((long)puVar21 +
      ((((long)puVar21 - (long)param_4) / 0x38) * 0x38 - ((long)puVar21 - (long)param_4))) <=
      puVar10)) {
    func_0x000107c610b8(puVar10,param_4);
  }
  return 1;
}



/* Entry: 102ab3218; end: 102ab32f7;  */

/* WARNING: Possible PIC construction at 0x000102ab323c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab3240) */

void FUN_102ab3218(void)

{
  uint uVar1;
  undefined8 in_x5;
  uint in_w6;
  
  uVar1 = in_w6 >> 5 & 7;
  if (uVar1 == 6 || uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x5);
    return;
  }
  return;
}



/* Entry: 102ab32f8; end: 102ab34cf;  */

long FUN_102ab32f8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = 0x65707974;
    func_0x000107c5fadc(0x65707974,0xe400000000000000);
    uVar5 = (ulong)(*(byte *)(param_1 + 6) >> 2) & 0x38;
    uVar2 = *(undefined8 *)(&UNK_10db15cd8 + uVar5);
    func_0x000107c31214(uVar2);
    func_0x000107c61180();
    func_0x000107c5e508(param_2);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar1 = 0x657a6973;
    func_0x000107c5fadc(0x657a6973,0xe400000000000000);
    uVar2 = *param_1;
    func_0x000107c3120c(uVar2);
    func_0x000107c61180();
    lVar4 = param_2;
    func_0x000107c5e508(param_2);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar1 = 0x74616e6974736564;
    func_0x000107c5fadc(0x74616e6974736564,0xeb000000006e6f69);
    uVar2 = param_1[1];
    func_0x000107c31208(uVar2);
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5e508(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar1 = 0x656372756f73;
    func_0x000107c5fadc(0x656372756f73,0xe600000000000000);
    uVar2 = *(undefined8 *)(&UNK_10db15ca0 + uVar5);
    func_0x000107c31210(uVar2);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5e508(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  return lVar4;
}



/* Entry: 102ab34d0; end: 102ab350b;  */

/* WARNING: Possible PIC construction at 0x000102ab34f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab34f8) */

void FUN_102ab34d0(void)

{
  uint uVar1;
  undefined8 in_x3;
  uint in_w6;
  
  uVar1 = in_w6 >> 5 & 7;
  if (uVar1 == 6 || uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
    return;
  }
  return;
}



/* Entry: 102ab350c; end: 102ab367b;  */

uint FUN_102ab350c(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  bVar2 = *(byte *)(param_2 + 6);
  if ((((*(long *)(&UNK_10db15cd8 + (ulong)(bVar1 >> 5) * 8) !=
         *(long *)(&UNK_10db15cd8 + (ulong)(bVar2 >> 5) * 8)) ||
       ((bVar2 < 0xc0 && ((0x3dU >> (ulong)(bVar2 >> 5) & 1) != 0)))) ||
      ((bVar1 < 0xc0 && ((0x3dU >> (ulong)(bVar1 >> 5) & 1) != 0)))) || (*param_1 != *param_2))
  goto LAB_102ab3620;
  if (param_1[1] == param_2[1]) {
    lVar5 = 0;
    lVar4 = 0;
    if ((1 << (ulong)(bVar1 >> 5) & 0x3dU) == 0) {
      lVar5 = param_1[2];
      lVar4 = param_1[3];
      func_0x000107c61434(lVar4);
    }
    lVar7 = 0;
    lVar6 = 0;
    if ((1 << (ulong)(bVar2 >> 5) & 0x3dU) == 0) {
      lVar7 = param_2[2];
      lVar6 = param_2[3];
      func_0x000107c61434(lVar6);
    }
    if (lVar4 == 0) {
      lVar4 = lVar6;
      if (lVar6 != 0) goto LAB_102ab363c;
    }
    else {
      if (lVar6 == 0) {
LAB_102ab363c:
        func_0x000107c6142c(lVar4);
        goto LAB_102ab3640;
      }
      if ((lVar5 != lVar7) || (lVar4 != lVar6)) {
        func_0x000107c605b8(lVar5,lVar4,lVar7,lVar6,0);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar6);
        uVar3 = (uint)lVar5 ^ 1;
        goto LAB_102ab3624;
      }
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar6);
    }
LAB_102ab3620:
    uVar3 = 0;
  }
  else {
LAB_102ab3640:
    uVar3 = 1;
  }
LAB_102ab3624:
  return uVar3 & 1;
}



/* Entry: 102ab367c; end: 102ab3a47;  */

void FUN_102ab367c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  long extraout_x8;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  
  plVar2 = (long *)0x0;
  func_0x000107c5f9c8();
  lVar6 = plVar2[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  plVar8 = (long *)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5f9b0(plVar8);
  plVar7 = plVar8;
  plVar5 = plVar2;
  (**(code **)(lVar6 + 0x58))();
  iVar1 = (int)plVar7;
  if (iVar1 == *(int *)PTR___s9WidgetKit0A6FamilyO11systemSmallyA2CmFWC_110349dd8) {
    uVar10 = 3;
    plVar8 = plVar7;
    plVar2 = plVar5;
  }
  else if (iVar1 == *(int *)PTR___s9WidgetKit0A6FamilyO12systemMediumyA2CmFWC_110349de0) {
    uVar10 = 4;
    plVar8 = plVar7;
    plVar2 = plVar5;
  }
  else if (iVar1 == *(int *)PTR___s9WidgetKit0A6FamilyO11systemLargeyA2CmFWC_110349dd0) {
    uVar10 = 5;
    plVar8 = plVar7;
    plVar2 = plVar5;
  }
  else if ((PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_110349df0 == (undefined *)0x0) ||
          (iVar1 != *(int *)PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_110349df0)) {
    if ((PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_110349df8 == (undefined *)0x0) ||
       (iVar1 != *(int *)PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_110349df8)) {
      if ((PTR___s9WidgetKit0A6FamilyO15accessoryInlineyA2CmFWC_110349de8 == (undefined *)0x0) ||
         (iVar1 != *(int *)PTR___s9WidgetKit0A6FamilyO15accessoryInlineyA2CmFWC_110349de8)) {
        (**(code **)(lVar6 + 8))();
        uVar10 = 0xffffffffffffffff;
      }
      else {
        uVar10 = 2;
        plVar8 = plVar7;
        plVar2 = plVar5;
      }
    }
    else {
      uVar10 = 1;
      plVar8 = plVar7;
      plVar2 = plVar5;
    }
  }
  else {
    uVar10 = 0;
    plVar8 = plVar7;
    plVar2 = plVar5;
  }
  func_0x000107c5f9ac();
  plVar7 = plVar8;
  func_0x000102ab88b0();
  if (plVar8 == (long *)*plVar7 && plVar2 == (long *)plVar7[1]) {
    func_0x000107c6142c(plVar2);
  }
  else {
    plVar7 = plVar2;
    func_0x000107c605b8();
    func_0x000107c6142c();
    if (((ulong)plVar8 & 1) == 0) {
      func_0x000107c5f9ac();
      plVar8 = plVar2;
      plVar5 = plVar7;
      func_0x000102ab88bc();
      if ((plVar2 == (long *)*plVar8) && (plVar7 == (long *)plVar8[1])) {
        func_0x000107c6142c();
      }
      else {
        plVar5 = plVar7;
        func_0x000107c605b8();
        func_0x000107c6142c();
        if (((ulong)plVar2 & 1) == 0) {
          func_0x000107c5f9ac();
          plVar8 = plVar7;
          func_0x000102ab88c8();
          if ((plVar7 == (long *)*plVar8) && (plVar5 == (long *)plVar8[1])) {
            func_0x000107c6142c(plVar5);
          }
          else {
            plVar8 = plVar5;
            func_0x000107c605b8();
            func_0x000107c6142c();
            if (((ulong)plVar7 & 1) == 0) {
              func_0x000107c5f9ac();
              plVar7 = plVar5;
              func_0x000102ab88d4();
              if ((plVar5 == (long *)*plVar7) && (plVar8 == (long *)plVar7[1])) {
                func_0x000107c6142c(plVar8);
              }
              else {
                plVar2 = plVar8;
                func_0x000107c605b8();
                func_0x000107c6142c();
                if (((ulong)plVar5 & 1) == 0) {
                  func_0x000107c5f9ac();
                  plVar7 = plVar8;
                  plVar5 = plVar2;
                  func_0x000102ab88e0();
                  if ((plVar8 == (long *)*plVar7) && (plVar2 == (long *)plVar7[1])) {
                    func_0x000107c6142c();
                  }
                  else {
                    plVar5 = plVar2;
                    func_0x000107c605b8();
                    func_0x000107c6142c();
                    if (((ulong)plVar8 & 1) == 0) {
                      uVar10 = 0;
                      plVar7 = (long *)0x0;
                      plVar2 = (long *)0x0;
                      plVar5 = (long *)0x0;
                      plVar8 = (long *)0x0;
                      plVar9 = (long *)0x0;
                      bVar4 = 0xfe;
                      goto LAB_102ab3840;
                    }
                  }
                  func_0x000102ab3e24();
                  if (plVar5 == (long *)0x0) {
                    func_0x000102ab3c18();
                  }
                  plVar8 = plVar2;
                  plVar9 = plVar5;
                  func_0x000102ab3d20();
                  if (plVar9 == (long *)0x0) {
                    func_0x000102ab3b14();
                  }
                  bVar4 = 0xc0;
                  plVar7 = (long *)0x4;
                  goto LAB_102ab3840;
                }
              }
              plVar2 = (long *)0x0;
              plVar5 = (long *)0x0;
              plVar8 = (long *)0x0;
              plVar9 = (long *)0x0;
              bVar4 = 0x60;
              plVar7 = (long *)0x3;
              goto LAB_102ab3840;
            }
          }
          plVar2 = (long *)0x0;
          plVar5 = (long *)0x0;
          plVar8 = (long *)0x0;
          plVar9 = (long *)0x0;
          bVar4 = 0x40;
          plVar7 = (long *)0x1;
          goto LAB_102ab3840;
        }
      }
      FUN_102ab3a48();
      plVar2 = plVar7;
      func_0x000102ab3e24();
      if (plVar5 == (long *)0x0) {
        func_0x000102ab3c18();
      }
      plVar8 = plVar2;
      plVar9 = plVar5;
      func_0x000102ab3d20();
      if (plVar9 == (long *)0x0) {
        func_0x000102ab3b14();
      }
      plVar3 = plVar8;
      func_0x000102ab3f2c();
      bVar4 = (byte)plVar3 & 1 | 0x20;
      goto LAB_102ab3840;
    }
  }
  plVar7 = (long *)0x0;
  plVar2 = (long *)0x0;
  plVar5 = (long *)0x0;
  plVar8 = (long *)0x0;
  plVar9 = (long *)0x0;
  bVar4 = 0;
LAB_102ab3840:
  *param_1 = uVar10;
  param_1[1] = plVar7;
  param_1[2] = plVar2;
  param_1[3] = plVar5;
  param_1[4] = plVar8;
  param_1[5] = plVar9;
  *(byte *)(param_1 + 6) = bVar4;
  return;
}



/* Entry: 102ab3a48; end: 102ab401f;  */

undefined8 FUN_102ab3a48(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c5f9ac();
  plVar1 = param_1;
  func_0x000102ab88bc();
  if (param_1 == (long *)*plVar1 && param_2 == plVar1[1]) {
    func_0x000107c6142c();
    func_0x000107c5f9a8();
  }
  else {
    func_0x000107c605b8(param_1,param_2,(long *)*plVar1,plVar1[1],0);
    func_0x000107c6142c();
    if (((ulong)param_1 & 1) == 0) {
      return 0xffffffffffffffff;
    }
    func_0x000107c5f9a8();
  }
  if (param_2 != 0) {
    uVar2 = 0;
    func_0x000102ab7d94(0);
    lVar3 = param_2;
    func_0x000107c61480(param_2,uVar2);
    if (lVar3 != 0) {
      func_0x000107c4de60();
      func_0x000107c61170(param_2);
      uVar2 = 2;
      if (lVar3 != 1) {
        uVar2 = 0xffffffffffffffff;
      }
      if (lVar3 == 2) {
        return 1;
      }
      return uVar2;
    }
    func_0x000107c61170(param_2);
  }
  return 0xffffffffffffffff;
}



/* Entry: 102ab4020; end: 102ab47d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab4020(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  uStack_e8 = param_1;
  lStack_c8 = param_2;
  lStack_b0 = param_3;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  func_0x000107c613fc();
  puVar3 = &UNK_1105934a8;
  lStack_c0 = unaff_x20;
  func_0x000107c613fc(&UNK_1105934a8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  func_0x0001000285a8(0x112dd07d0,&UNK_10d991cb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar1 = FUN_102ab4850;
  uStack_f0 = param_5;
  func_0x0001000bdd8c(FUN_102ab4850,puVar3);
  pcStack_f8 = pcVar1;
  (**(code **)(lVar13 + 0x68))
            (auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0e64e0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar13 + 8))(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_100 = (undefined *)_DAT_113083868;
  uVar4 = *(undefined8 *)(param_4 + _DAT_113083868);
  lStack_d0 = param_4;
  func_0x000107c61174();
  uStack_b8 = param_6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lStack_e0 = param_7;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_7 != 0) {
    lStack_110 = _DAT_113091b70;
    uStack_138 = *(undefined8 *)(lStack_b0 + _DAT_113091b70);
    uStack_d8 = param_9;
    uVar11 = *(undefined8 *)(lStack_c8 + _DAT_113083f78);
    func_0x000107c615f0();
    func_0x000107c61174();
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar8 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    uVar11 = param_8;
    func_0x000107c5e2bc();
    func_0x000107c61180();
    lVar13 = 0;
    uStack_108 = param_8;
    func_0x0001005e1c04();
    func_0x000107c613fc();
    *(undefined8 *)(lVar13 + 0x40) = 0;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    func_0x0001000285a8(0x112ee8ab0,&UNK_10db15d18);
    func_0x000107c613fc();
    pcVar1 = pcStack_f8;
    pcVar5 = pcStack_f8;
    func_0x000107c6157c();
    func_0x0001000c2754();
    *(undefined8 *)(lVar13 + 0x10) = uVar4;
    *(code **)(lVar13 + 0x18) = pcVar1;
    *(undefined8 *)(lVar13 + 0x20) = param_6;
    *(long *)(lVar13 + 0x28) = param_7;
    *(undefined **)(lVar13 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar13 + 0x38) = puVar3;
    *(undefined8 *)(lVar13 + 0x50) = uVar8;
    *(long *)(lVar13 + 0x58) = lVar2;
    *(undefined8 *)(lVar13 + 0x60) = uVar11;
    *(code **)(lVar13 + 0x68) = pcVar5;
    func_0x000107c61174();
    lStack_118 = uVar4;
    func_0x000107c61174();
    func_0x000107c6157c(pcVar1);
    func_0x000107c61174();
    uStack_128 = param_6;
    func_0x000107c61174();
    lStack_130 = param_7;
    func_0x000107c61174();
    uVar4 = uStack_138;
    uVar8 = uStack_138;
    uStack_120 = uVar11;
    func_0x000107c41bd0();
    func_0x000107c61180();
    puVar9 = &UNK_1105934d0;
    puVar6 = puVar9;
    func_0x000107c613fc(&UNK_1105934d0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar13);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = &UNK_100c1deb0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_1105934e8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_80;
    func_0x000107c6157c(lVar13);
    func_0x000107c61574(puVar6);
    uVar11 = uVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar8);
    uVar8 = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar13 + 0x40) = uVar11;
    func_0x000107c61170(uVar8);
    uVar8 = uVar4;
    func_0x000107c5e370();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1105934d0,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,lVar13);
    func_0x000107c61574(lVar13);
    puStack_88 = (undefined *)0x102ab4860;
    puStack_a8 = puVar10;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593510;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_80);
    uVar11 = uVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lStack_118);
    func_0x000107c61574(pcVar1);
    func_0x000107c61170(uStack_128);
    func_0x000107c61170(lStack_130);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uStack_120);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar8);
    uVar4 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x48) = uVar11;
    func_0x000107c61170(uVar4);
    *(long *)(lStack_c0 + 0x10) = lVar13;
    func_0x0001005c6e80(0);
    func_0x000107c610f8();
    func_0x000107c6157c();
    func_0x0001005e1c50();
    lStack_118 = lVar13;
    func_0x000107c42c20(uStack_d8);
    uVar8 = *(undefined8 *)(lStack_d0 + (long)puStack_100);
    func_0x000107c61174();
    uVar4 = uStack_b8;
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lStack_b0 + lStack_110);
    lVar2 = 0;
    func_0x0001005e1cac();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x10) = uVar8;
    *(code **)(lVar2 + 0x18) = pcVar1;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined **)(lVar2 + 0x28) = puVar3;
    func_0x000107c61174();
    puStack_100 = puVar3;
    func_0x000107c6157c(pcVar1);
    func_0x000107c61174();
    lStack_110 = uVar8;
    func_0x000107c615f0(uVar12);
    func_0x000107c61174(uVar4);
    uVar8 = uVar12;
    func_0x000107c41bd0();
    func_0x000107c61180();
    puVar3 = &UNK_110593548;
    puVar10 = puVar3;
    func_0x000107c613fc(&UNK_110593548,0x18,7);
    func_0x000107c61644(puVar10 + 0x10,lVar2);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = &UNK_100c1dfcc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593560;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar10;
    func_0x000107c60bc4(ppuVar7);
    puVar10 = puStack_80;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar10);
    uVar11 = uVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar8);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = uVar11;
    func_0x000107c61170(uVar8);
    uVar8 = uVar12;
    func_0x000107c5e370();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110593548,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar2);
    func_0x000107c61574(lVar2);
    puStack_88 = (undefined *)0x102ab48a0;
    puStack_a8 = puVar9;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100c1de60;
    puStack_90 = &UNK_110593588;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_80);
    uVar11 = uVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lStack_110);
    func_0x000107c61574(pcVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puStack_100);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar8);
    uVar4 = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x38) = uVar11;
    func_0x000107c61170(lStack_d0);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lStack_c8);
    func_0x000107c61170(uStack_e8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uStack_108);
    func_0x000107c61170(uStack_d8);
    func_0x000107c61170(lStack_118);
    func_0x000107c61170(uVar4);
    *(long *)(lStack_c0 + 0x18) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab47d8);
  (*pcVar1)();
}



/* Entry: 102ab47d8; end: 102ab484f;  */

void FUN_102ab47d8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5e300();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102ab4850; end: 102ab4867;  */

void FUN_102ab4850(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5e300();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102ab4868; end: 102ab4893;  */

void FUN_102ab4868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ab4894; end: 102ab48ef;  */

void FUN_102ab4894(void)

{
  return;
}



/* Entry: 102ab48f0; end: 102ab6677;  */

void FUN_102ab48f0(long param_1,char param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long alStack_a0 [6];
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  func_0x000107c5f9b4();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  plVar12 = (long *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar16 = (long *)((long)plVar12 - extraout_x12);
  if (param_2 != '\x01') {
    lVar14 = *(long *)(param_1 + 0x10);
    alStack_a0[0] = param_1;
    alStack_a0[1] = param_3;
    if (lVar14 == 0) {
      alStack_a0[2] = 0;
      alStack_a0[3] = 0;
      lVar13 = 0;
      alStack_a0[4] = 0;
      lVar15 = 0;
    }
    else {
      alStack_a0[2] = 0;
      alStack_a0[3] = 0;
      lVar13 = 0;
      lVar15 = 0;
      param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
      alStack_a0[5] = *(long *)(lVar11 + 0x48);
      alStack_a0[4] = 0;
      pcStack_70 = *(code **)(lVar11 + 0x10);
      do {
        (*pcStack_70)(plVar16,param_1,lVar5);
        plVar6 = plVar12;
        plVar8 = plVar16;
        (**(code **)(lVar11 + 0x20))(plVar12,plVar16,lVar5);
        func_0x000107c5f9ac();
        plVar7 = plVar6;
        func_0x000102ab88b0();
        if (plVar6 == (long *)*plVar7 && plVar8 == (long *)plVar7[1]) {
          func_0x000107c6142c(plVar8);
LAB_102ab49bc:
          (**(code **)(lVar11 + 8))(plVar12,lVar5);
          bVar4 = SCARRY8(lVar15,1);
          lVar15 = lVar15 + 1;
          lVar2 = alStack_a0[4];
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab4d98);
            (*pcVar3)();
          }
        }
        else {
          plVar7 = plVar8;
          func_0x000107c605b8();
          func_0x000107c6142c();
          if (((ulong)plVar6 & 1) != 0) goto LAB_102ab49bc;
          func_0x000107c5f9ac();
          plVar6 = plVar8;
          func_0x000102ab88c8();
          if ((plVar8 == (long *)*plVar6) && (plVar7 == (long *)plVar6[1])) {
            func_0x000107c6142c(plVar7);
LAB_102ab4a9c:
            (**(code **)(lVar11 + 8))(plVar12,lVar5);
            bVar4 = SCARRY8(lVar13,1);
            lVar13 = lVar13 + 1;
            lVar2 = alStack_a0[4];
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab4d9c);
              (*pcVar3)();
            }
          }
          else {
            plVar6 = plVar7;
            func_0x000107c605b8();
            func_0x000107c6142c();
            if (((ulong)plVar8 & 1) != 0) goto LAB_102ab4a9c;
            func_0x000107c5f9ac();
            plVar8 = plVar7;
            func_0x000102ab88bc();
            if ((plVar7 == (long *)*plVar8) && (plVar6 == (long *)plVar8[1])) {
              func_0x000107c6142c(plVar6);
LAB_102ab4b08:
              (**(code **)(lVar11 + 8))(plVar12,lVar5);
              lVar2 = alStack_a0[4] + 1;
              if (SCARRY8(alStack_a0[4],1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab4da0);
                (*pcVar3)();
              }
            }
            else {
              plVar8 = plVar6;
              func_0x000107c605b8();
              func_0x000107c6142c();
              if (((ulong)plVar7 & 1) != 0) goto LAB_102ab4b08;
              func_0x000107c5f9ac();
              plVar7 = plVar6;
              func_0x000102ab88d4();
              if ((plVar6 == (long *)*plVar7) && (plVar8 == (long *)plVar7[1])) {
                func_0x000107c6142c(plVar8);
LAB_102ab4b7c:
                (**(code **)(lVar11 + 8))(plVar12,lVar5);
                bVar4 = SCARRY8(alStack_a0[3],1);
                alStack_a0[3] = alStack_a0[3] + 1;
                lVar2 = alStack_a0[4];
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab4da4);
                  (*pcVar3)();
                }
              }
              else {
                plVar7 = plVar8;
                func_0x000107c605b8();
                func_0x000107c6142c();
                if (((ulong)plVar6 & 1) != 0) goto LAB_102ab4b7c;
                func_0x000107c5f9ac();
                plVar6 = plVar8;
                func_0x000102ab88e0();
                if ((plVar8 == (long *)*plVar6) && (plVar7 == (long *)plVar6[1])) {
                  func_0x000107c6142c(plVar7);
                  (**(code **)(lVar11 + 8))(plVar12,lVar5);
LAB_102ab4c10:
                  bVar4 = SCARRY8(alStack_a0[2],1);
                  alStack_a0[2] = alStack_a0[2] + 1;
                  lVar2 = alStack_a0[4];
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ab4c24);
                    (*pcVar3)();
                  }
                }
                else {
                  func_0x000107c605b8(plVar8,plVar7,(long *)*plVar6,(long *)plVar6[1],0);
                  func_0x000107c6142c(plVar7);
                  (**(code **)(lVar11 + 8))(plVar12,lVar5);
                  lVar2 = alStack_a0[4];
                  if (((ulong)plVar8 & 1) != 0) goto LAB_102ab4c10;
                }
              }
            }
          }
        }
        alStack_a0[4] = lVar2;
        param_1 = param_1 + alStack_a0[5];
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puStack_68 = puVar1;
    func_0x000101687ce0(lVar15,0x6172656d6163,0xe600000000000000,puVar9);
    puVar9 = puStack_68;
    func_0x000107c61558(puStack_68);
    puVar10 = puStack_68;
    puStack_68 = puVar9;
    func_0x000101687ce0(alStack_a0[4],0x666d70,0xe300000000000000,puVar10);
    puVar9 = puStack_68;
    func_0x000107c61558(puStack_68);
    puVar10 = puStack_68;
    puStack_68 = puVar9;
    func_0x000101687ce0(lVar13,0x7961646874726962,0xe800000000000000,puVar10);
    puVar9 = puStack_68;
    puVar10 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_68 = puVar1;
    func_0x000101687ce0(alStack_a0[3],0x736569726f6d656d,0xe800000000000000,puVar10);
    puVar1 = puStack_68;
    func_0x000107c61558(puStack_68);
    puVar10 = puStack_68;
    puStack_68 = puVar1;
    func_0x000101687ce0(alStack_a0[2],0x6f4c646e65697266,0xee006e6f69746163,puVar10);
    puVar1 = puStack_68;
    func_0x000102ab4da4(puVar9);
    func_0x000102ab51d8(puVar1);
    lVar5 = alStack_a0[0];
    func_0x000102ab55d0(alStack_a0[0]);
    func_0x000102ab5ccc(lVar5);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar1);
  }
  return;
}


