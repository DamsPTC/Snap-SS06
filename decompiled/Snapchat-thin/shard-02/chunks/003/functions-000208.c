/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b69984; end: 101b699f7;  */

/* WARNING: Possible PIC construction at 0x000101b69a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b69a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b69a20) */
/* WARNING: Removing unreachable block (ram,0x000101b69a58) */

long FUN_101b69984(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,long param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_10 >> 0x3e);
  if (uVar1 == 2) {
    func_0x000107c61434(param_9);
    if (param_12 == 0) {
      return param_11;
    }
  }
  else {
    if (uVar1 != 0) {
      return param_1;
    }
    param_12 = param_2;
    param_13 = param_3;
    param_14 = param_4;
    if ((param_6 != '\x01') && (param_6 != '\0')) {
      return param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_12,param_12,param_13,param_14);
  return param_12;
}



/* Entry: 101b699f8; end: 101b69a6b;  */

/* WARNING: Possible PIC construction at 0x000101b69a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b69a20) */

void FUN_101b699f8(undefined8 param_1,undefined8 param_2)

{
  char in_w5;
  
  if ((in_w5 != '\x01') && (in_w5 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101b69a6c; end: 101b69aab;  */

void FUN_101b69a6c(undefined8 *param_1)

{
  FUN_101b69aac(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd])
  ;
  return;
}



/* Entry: 101b69aac; end: 101b69b1f;  */

/* WARNING: Possible PIC construction at 0x000101b69b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b69b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b69b48) */
/* WARNING: Removing unreachable block (ram,0x000101b69b80) */

long FUN_101b69aac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,long param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_10 >> 0x3e);
  if (uVar1 == 2) {
    func_0x000107c6142c(param_9);
    if (param_12 == 0) {
      return param_11;
    }
  }
  else {
    if (uVar1 != 0) {
      return param_1;
    }
    param_12 = param_2;
    param_13 = param_3;
    param_14 = param_4;
    if ((param_6 != '\x01') && (param_6 != '\0')) {
      return param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_12,param_12,param_13,param_14);
  return param_12;
}



/* Entry: 101b69b20; end: 101b69b93;  */

/* WARNING: Possible PIC construction at 0x000101b69b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b69b48) */

void FUN_101b69b20(undefined8 param_1,undefined8 param_2)

{
  char in_w5;
  
  if ((in_w5 != '\x01') && (in_w5 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b69b94; end: 101b69d4b;  */

undefined8 * FUN_101b69b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  FUN_101b69984(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  return param_1;
}



/* Entry: 101b69d4c; end: 101b69dbf;  */

undefined8 * FUN_101b69d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  uVar15 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar15;
  FUN_101b69aac(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar4,
                uVar8);
  return param_1;
}



/* Entry: 101b69dc0; end: 101b69ef7;  */

int FUN_101b69dc0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0xc) >> 4) & 0xe0000000 | (uint)param_1[10] >> 3;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 101b69ef8; end: 101b69f37;  */

void FUN_101b69ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d8ba4;
  func_0x000107c61520(&UNK_10d9d8ba4,&UNK_11044cce8);
  puRam0000000112e05940 = puVar1;
  return;
}



/* Entry: 101b69f38; end: 101b69f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b69f38(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_d0 [8];
  ulong auStack_c8 [9];
  undefined8 uStack_80;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3ebcc();
    auStack_c8[0] = param_1 & 0xffffffff;
    auStack_c8[2] = 0;
    auStack_c8[1] = 0;
    auStack_c8[4] = 0;
    auStack_c8[3] = 0;
    auStack_c8[6] = 0;
    auStack_c8[5] = 3;
    uStack_80 = 0;
    uVar3 = 0x112e05960;
    func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
    func_0x000107c5fd28(auStack_d0 + -extraout_x8,auStack_c8,uVar3);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar4 + 8))(auStack_d0 + -extraout_x8,lVar1);
  }
  return;
}



/* Entry: 101b69f5c; end: 101b69fb7;  */

void FUN_101b69f5c(void)

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
    FUN_101b6a2c8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e05950;
  plVar5 = (long *)&UNK_10d9d8ae8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101b69fb8; end: 101b6a037;  */

undefined * FUN_101b69fb8(undefined *param_1,undefined *param_2)

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
    FUN_101b69f5c();
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



/* Entry: 101b6a038; end: 101b6a257;  */

ulong FUN_101b6a038(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b6a160);
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
  FUN_101b69fb8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b6a15c);
      (*pcVar1)();
    }
    func_0x000101b6a160(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101b6a258; end: 101b6a2c7;  */

void FUN_101b6a258(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_101b6a038(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101b6a2c8; end: 101b6a30b;  */

void FUN_101b6a2c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05948 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e05948 = puVar1;
  return;
}



/* Entry: 101b6a30c; end: 101b6a33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6a30c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uStack_c8 = 3;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 4;
    uStack_80 = 0;
    uVar3 = 0x112e05960;
    func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
    func_0x000107c5fd28(auStack_d0 + -extraout_x8,&uStack_c8,uVar3);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar4 + 8))(auStack_d0 + -extraout_x8,lVar1);
  }
  return;
}



/* Entry: 101b6a33c; end: 101b6a4ef;  */

ulong FUN_101b6a33c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b6a420);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b6a424);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
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
    puVar4 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
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
  FUN_101b6a2c8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b6a4f0);
  (*pcVar2)();
}



/* Entry: 101b6a4f0; end: 101b6a5eb;  */

void FUN_101b6a4f0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    lVar5 = 0;
    lVar4 = 0;
    param_3 = -0x7ffffffef0fff570;
    lVar3 = -0x2fffffffffffffe9;
    lVar6 = -0x2000000000000000;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5ed2c();
    lVar4 = lVar1;
    func_0x000107c42210();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5faec();
    lVar6 = param_3;
    func_0x000107c61170(lVar4);
    func_0x000107c61174();
    lVar4 = lVar1;
    func_0x000107c3fcb0();
    lVar2 = lVar1;
    func_0x000107c4b85c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar5 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c614ac(param_2);
  }
  *param_1 = lVar3;
  param_1[1] = param_3;
  param_1[2] = lVar4;
  param_1[3] = lVar5;
  param_1[4] = lVar6;
  return;
}



/* Entry: 101b6a5ec; end: 101b6a623;  */

void FUN_101b6a5ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c3f750();
      uVar3 = param_1;
      func_0x000107c3f750(lVar2);
      func_0x000107c5ea20(lVar2);
      lStack_f0 = lVar1;
      uStack_e8 = param_1;
      uStack_e0 = param_2;
      uStack_d8 = uVar3;
      lStack_c0 = lVar1;
      uStack_b8 = param_1;
      uStack_b0 = param_2;
      uStack_a8 = uVar3;
      lStack_90 = lVar1;
      uStack_88 = param_1;
      uStack_80 = param_2;
      uStack_78 = uVar3;
      func_0x000103b3598c(0x101b6a5f4,auStack_a0,0x101b6a604,auStack_d0,FUN_101b69024,0,0x101b6a614,
                          auStack_100,FUN_101b6911c,0,0x101b69120,0,0x101b69124,0,0x101b69128,0);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 101b6a624; end: 101b6a693;  */

undefined8 FUN_101b6a624(undefined8 param_1,undefined8 param_2)

{
  FUN_101f47880(param_2,param_1);
  return param_2;
}



/* Entry: 101b6a694; end: 101b6a783;  */

uint FUN_101b6a694(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101b6a784; end: 101b6a7c3;  */

void FUN_101b6a784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d8b7c;
  func_0x000107c61520(&UNK_10d9d8b7c,&UNK_11044cce8);
  puRam0000000112e05978 = puVar1;
  return;
}



/* Entry: 101b6a7c4; end: 101b6a7f3;  */

void FUN_101b6a7c4(long param_1,long param_2)

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



/* Entry: 101b6a7f4; end: 101b6a83f;  */

void FUN_101b6a7f4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_11034d660 + 0x40;
  puStack_20 = &UNK_10d9d8c20;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 101b6a840; end: 101b6a94b;  */

void FUN_101b6a840(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lVar7 = *unaff_x20;
  func_0x000107c61428(unaff_x20 + 7,auStack_70,0x20,0);
  lVar6 = unaff_x20[7];
  uVar1 = 0;
  func_0x000107c5eec8(0);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = 0;
  func_0x000107c5fd30(0,uVar8);
  uVar3 = uVar2;
  func_0x00010085581c();
  func_0x000107c5fa14(lVar6,uVar1,uVar2,uVar3);
  func_0x000107c614a8(auStack_70);
  uVar4 = 0;
  uStack_60 = uVar8;
  func_0x000107c5fa0c(0,uVar1,uVar2,uVar3);
  puVar5 = PTR___sSD6ValuesVyxq__GSTsMc_11034d700;
  func_0x000107c61520(PTR___sSD6ValuesVyxq__GSTsMc_11034d700,uVar4);
  func_0x000107c5fc14(FUN_101b6a978,auStack_70,uVar4,puVar5);
  func_0x000107c6142c(lVar6);
  func_0x0001000834e4(unaff_x20 + 2);
  func_0x000107c6142c(unaff_x20[7]);
  return;
}



/* Entry: 101b6a94c; end: 101b6a96b;  */

void FUN_101b6a94c(void)

{
  FUN_101b6a840();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b6a96c; end: 101b6a977;  */

void FUN_101b6a96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6784c4);
  return;
}



/* Entry: 101b6a978; end: 101b6a9b7;  */

void FUN_101b6a978(void)

{
  long unaff_x20;
  
  func_0x000107c5fd30(0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5fd2c();
  return;
}



/* Entry: 101b6a9b8; end: 101b6c263;  */

void FUN_101b6a9b8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long extraout_x8_01;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 *puStack_b0;
  undefined1 auStack_88 [40];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)&puStack_b0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4();
  lVar3 = 0x112e05b40;
  func_0x0001000285a8(0x112e05b40,&UNK_10d9d8d78);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar6 - extraout_x8;
  lVar15 = 0x112e05b48;
  func_0x0001000285a8(0x112e05b48,&UNK_10d9d8d80);
  lVar10 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(lVar11 - extraout_x8_00);
  *puVar16 = 0;
  (**(code **)(lVar10 + 0x68))
            (puVar16,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar15);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x000101b6d6a8(param_1,lVar11,puVar16);
  }
  else {
    func_0x000107c5fd10(param_1,lVar11,&UNK_1104a35e0,puVar16,&UNK_1104a35e0);
  }
  (**(code **)(lVar10 + 8))(puVar16,lVar15);
  puVar4 = &UNK_11044cf68;
  func_0x000107c613fc(&UNK_11044cf68,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  FUN_101b6dd08(unaff_x20 + 0x10,auStack_88);
  puStack_b0 = puVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)puVar16 - uVar9;
  pcVar17 = *(code **)(lVar13 + 0x10);
  (*pcVar17)(lVar15,lVar6,lVar2);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar8 + 0x40 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &UNK_11044cf90;
  func_0x000107c613fc(&UNK_11044cf90,uVar12 + lVar14,uVar8 | 7);
  FUN_101b6dd4c(auStack_88,puVar5 + 0x10);
  *(undefined **)(puVar5 + 0x38) = puVar4;
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar12,lVar15,lVar2);
  func_0x000107c5fd1c(FUN_101b6f97c,puVar5,lVar3);
  puVar16 = puStack_b0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar16 - uVar9;
  (*pcVar17)(lVar10,lVar6,lVar2);
  lVar15 = 0x112e05b50;
  func_0x0001000285a8(0x112e05b50,&UNK_10d9d8d88);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar10 - extraout_x8_01;
  (**(code **)(lVar7 + 0x10))(lVar15,lVar11,lVar3);
  (**(code **)(lVar7 + 0x38))(lVar15,0,1,lVar3);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_88,0x21,0);
  func_0x000101b6b5bc(lVar15,lVar10);
  func_0x000107c614a8(auStack_88);
  (**(code **)(lVar7 + 8))(lVar11,lVar3);
  (**(code **)(lVar13 + 8))(lVar6,lVar2);
  return;
}



/* Entry: 101b6c264; end: 101b6c377;  */

void FUN_101b6c264(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar4 = 0;
    cVar1 = *(char *)(unaff_x20 + 0x10);
  }
  else {
    lVar4 = lVar3;
    func_0x000107c61498();
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    cVar1 = *(char *)(unaff_x20 + 0x10);
  }
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    if (lVar2 != 0) {
      func_0x000107c58b7c(lVar2);
    }
  }
  else if (lVar2 != 0) {
    func_0x000107c58b7c(lVar2);
  }
  if (lVar4 != 0) {
    func_0x000107c61174(lVar4);
    func_0x000107c550b4();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 101b6c378; end: 101b6c40b;  */

void FUN_101b6c378(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61610(unaff_x20 + 0x70);
  return;
}



/* Entry: 101b6c40c; end: 101b6c44b;  */

void FUN_101b6c40c(void)

{
  FUN_101b6c378();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b6c44c; end: 101b6c86f;  */

void FUN_101b6c44c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = 0;
  FUN_101f357fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_80 +
           (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
           (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puStack_78 = PTR_DAT_11269d748;
    func_0x000107c61498();
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    FUN_101b6fb88(param_1,puVar3);
    func_0x000107c614c4(puVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101b6c560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&UNK_100cc7738 + ((ulong)puVar3 & 0xffffffff) * 4) + 0x101b6c554))();
    return;
  }
  return;
}



/* Entry: 101b6c870; end: 101b6c9db;  */

undefined * FUN_101b6c870(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar4 + -8);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    func_0x000100403514(0,lVar4,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lStack_78 = *(long *)(lVar9 + 0x48);
    pcStack_80 = *(code **)(lVar9 + 0x10);
    do {
      puVar3 = puStack_68;
      lVar2 = lStack_70;
      lVar5 = lVar8;
      lVar6 = param_1;
      (*pcStack_80)(lVar8,param_1,lStack_70);
      func_0x000107c5eeac();
      lVar7 = lVar6;
      func_0x000107c5fb1c();
      func_0x000107c6142c(lVar6);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(long *)(puStack_68 + uVar1 * 0x10 + 0x20) = lVar5;
      *(long *)(puStack_68 + uVar1 * 0x10 + 0x28) = lVar7;
      param_1 = param_1 + lStack_78;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puStack_68;
}



/* Entry: 101b6c9dc; end: 101b6ca7f;  */

void FUN_101b6c9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5fd20();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_40 = param_3;
  uStack_38 = param_4;
  (**(code **)(extraout_x8 + 0x68))
            (auStack_50 + -extraout_x12,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20);
  func_0x000107c5fd48(param_1,param_3,auStack_50 + -extraout_x12,FUN_101b6d458,auStack_50,param_3);
  return;
}



/* Entry: 101b6ca80; end: 101b6cbb7;  */

/* WARNING: Removing unreachable block (ram,0x000101b6cb4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6ca80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  
  FUN_101b6cbb8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(long *)(unaff_x20 + 0x60) = param_2;
  func_0x000107c61170(uVar1);
  func_0x000107c61604(unaff_x20 + 0x70,param_1);
  func_0x000107c61174(param_2);
  FUN_101b6c264();
  if (*(char *)(unaff_x20 + 0x90) != '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar2 = unaff_x20 + 0x70;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c532c0(uVar4,uVar3,uVar1);
      func_0x000107c61170(lVar2);
    }
  }
  puStack_58 = PTR_DAT_11269d748;
  func_0x000107c61498(param_1,1,&puStack_58,0,0,0);
  FUN_101b68488();
  FUN_101b6cce0(param_2 + _DAT_113803b00);
  *(undefined1 *)(unaff_x20 + 0x11) = 2;
  return;
}



/* Entry: 101b6cbb8; end: 101b6ccdf;  */

/* WARNING: Possible PIC construction at 0x000101b6cc2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b6cc30) */

void FUN_101b6cbb8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  func_0x000107c61574(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
  }
  else {
    func_0x000107c61174();
    FUN_101b6812c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101b6cce0; end: 101b6ced3;  */

void FUN_101b6cce0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_80 [8];
  char *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112e05968;
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  lVar10 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_80 + -extraout_x8;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar12 - extraout_x8_00;
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar3 = unaff_x20 + 0x20;
  func_0x0001000a8868();
  pcStack_78 = "cyMapImplementation.swift";
  lVar4 = 0;
  lStack_70 = lVar3;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,1,1,lVar4);
  puVar5 = &UNK_11044cfe0;
  func_0x000107c613fc(&UNK_11044cfe0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  (**(code **)(lVar10 + 0x10))(puVar12,param_1,lVar2);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_11044d008;
  func_0x000107c613fc(&UNK_11044d008,uVar15 + 8,uVar9 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar13,puVar12,lVar2);
  *(undefined **)(puVar6 + uVar15) = puVar5;
  uVar7 = 0xd000000000000023;
  (**(code **)(lVar1 + 8))
            (0xd000000000000023,(ulong)pcStack_78 | 0x8000000000000000,lVar11,&UNK_10d9d8dc8,puVar6,
             PTR___sytN_11034f1b0 + 8,uStack_68,lVar1);
  FUN_101b6fcfc(lVar11,0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
  func_0x000107c61574(uVar8);
  return;
}



/* Entry: 101b6ced4; end: 101b6cf3f;  */

void FUN_101b6ced4(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x4;
  lVar2 = 0x112e05b70;
  func_0x0001000285a8(0x112e05b70,&UNK_10d9d8dd0);
  *(long *)(unaff_x22 + 0x1b8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6cf40,0,0);
  return;
}



/* Entry: 101b6cf40; end: 101b6cfd7;  */

void FUN_101b6cf40(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 400,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b6cfd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0xf0,*(undefined8 *)(unaff_x22 + 0x1b8));
  return;
}



/* Entry: 101b6cfd8; end: 101b6d01f;  */

void FUN_101b6cfd8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6d020,0,0);
  return;
}



/* Entry: 101b6d020; end: 101b6d1d3;  */

void FUN_101b6d020(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(ulong *)(unaff_x22 + 0x208) = *(ulong *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0xe8);
  if ((((~(uint)*(undefined8 *)(unaff_x22 + 0xa8) & 0xfffffff8) == 0) &&
      ((*(ulong *)(unaff_x22 + 0xb0) & 0xfffffffe00000000) == 0xe00000000)) &&
     (*(ulong *)(unaff_x22 + 200) >> 0x20 == 0)) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x1b8));
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b6d0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x1b0) + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x248) = lVar2;
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar4 = uVar3;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x250) = uVar4;
    uVar4 = 0x112d45220;
    FUN_101b6f7a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6d1d4,uVar3,uVar4);
    return;
  }
  FUN_101b6fcfc(unaff_x22 + 0x80,0x112e05b78,&UNK_10d9d8dd8);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b6cfd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,unaff_x22 + 0xf0,*(undefined8 *)(unaff_x22 + 0x1b8));
  return;
}



/* Entry: 101b6d1d4; end: 101b6d2eb;  */

void FUN_101b6d1d4(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x250));
  uVar2 = (uint)((ulong)uVar3 >> 0x3e);
  if (uVar2 == 0) {
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x1f0);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x1f8);
    *(char *)(unaff_x22 + 0x188) = (char)*(undefined8 *)(unaff_x22 + 0x200);
    func_0x000101b6bc04(unaff_x22 + 0x160);
  }
  else {
    if (uVar2 == 1) {
      func_0x000101b6be1c(*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1e0),
                          *(undefined8 *)(unaff_x22 + 0x1e8),*(undefined1 *)(unaff_x22 + 0x1f0));
      goto LAB_101b6d2a0;
    }
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x1f0);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x200);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1f8);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x210);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x218);
    *(ulong *)(unaff_x22 + 0x58) = *(ulong *)(unaff_x22 + 0x220) & 0x3fffffffffffffff;
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x230);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x228);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x240);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x238);
    func_0x000101b6c028();
  }
  FUN_101b6fcfc(unaff_x22 + 0x80,0x112e05b78,&UNK_10d9d8dd8);
LAB_101b6d2a0:
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x248));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b6cfd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0xf0,*(undefined8 *)(unaff_x22 + 0x1b8));
  return;
}



/* Entry: 101b6d2ec; end: 101b6d327;  */

undefined1 FUN_101b6d2ec(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 101b6d328; end: 101b6d35b;  */

void FUN_101b6d328(long *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  cVar1 = *(char *)(*param_1 + 0x10);
  *(char *)(*param_1 + 0x10) = (char)lVar2;
  if ((char)lVar2 != cVar1) {
    FUN_101b6c264();
  }
  return;
}



/* Entry: 101b6d35c; end: 101b6d363;  */

undefined1 FUN_101b6d35c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x11);
}



/* Entry: 101b6d364; end: 101b6d3df;  */

void FUN_101b6d364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  *(undefined8 *)(unaff_x20 + 0x88) = param_3;
  *(undefined1 *)(unaff_x20 + 0x90) = 0;
  lVar1 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c532c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101b6d3e0; end: 101b6d3e3;  */

void FUN_101b6d3e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = 0;
  FUN_101f357fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_80 +
           (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
           (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puStack_78 = PTR_DAT_11269d748;
    func_0x000107c61498();
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    FUN_101b6fb88(param_1,puVar3);
    func_0x000107c614c4(puVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101b6c560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&UNK_100cc7738 + ((ulong)puVar3 & 0xffffffff) * 4) + 0x101b6c554))();
    return;
  }
  return;
}



/* Entry: 101b6d3e4; end: 101b6d443;  */

void FUN_101b6d3e4(void)

{
  FUN_101b6a9b8();
  return;
}



/* Entry: 101b6d444; end: 101b6d457;  */

void FUN_101b6d444(void)

{
  FUN_101b6c9dc();
  return;
}



/* Entry: 101b6d458; end: 101b6d487;  */

void FUN_101b6d458(void)

{
  long unaff_x20;
  
  func_0x000107c5fd30(0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5fd2c();
  return;
}



/* Entry: 101b6d488; end: 101b6dd07;  */

void FUN_101b6d488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar2 = 0x112e05970;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e05970,&UNK_10d9d8b10);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e05968;
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e05b98;
  func_0x0001000285a8(0x112e05b98,&UNK_10d9d8df8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_11044cb18,puVar11,FUN_101b6fcc4,auStack_80,&UNK_11044cb18);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101b6fe7c(lVar9,lVar8,0x112e05b98,&UNK_10d9d8df8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    FUN_101b6fcfc(lVar9,0x112e05b98,&UNK_10d9d8df8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b6d6a8);
  (*pcVar1)();
}



/* Entry: 101b6dd08; end: 101b6dd4b;  */

long FUN_101b6dd08(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101b6dd4c; end: 101b6dd77;  */

undefined8 * FUN_101b6dd4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101b6dd78; end: 101b6ddf3;  */

void FUN_101b6dd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  FUN_101b6fcfc(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000101b6ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 101b6ddf4; end: 101b6debf;  */

void FUN_101b6ddf4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar2 = *(long *)(param_4 + 0x38);
  func_0x0001000285a8(param_5,param_6);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            (lVar2 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1,param_3,param_5);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b6dec0);
  (*pcVar1)();
}



/* Entry: 101b6dec0; end: 101b6ea93;  */

void FUN_101b6dec0(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar3 = param_3;
  func_0x000107c61434(lVar6);
  func_0x0001000c8928(param_2);
  func_0x000107c6142c(lVar6);
  if ((uVar3 & 1) == 0) {
    func_0x0001000285a8(param_3,param_4);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_3 - 8) + 0x38);
    uVar4 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar6 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101b6e1e0(param_3,param_4,param_5,param_6);
    }
    lVar5 = *(long *)(lVar6 + 0x30);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_2,lVar2);
    lVar2 = *(long *)(lVar6 + 0x38);
    uVar3 = param_3;
    func_0x0001000285a8(param_3,param_4);
    lVar5 = *(long *)(uVar3 - 8);
    (**(code **)(lVar5 + 0x20))(param_1,lVar2 + *(long *)(lVar5 + 0x48) * param_2,uVar3);
    func_0x000101b6e814(param_2,lVar6,param_3,param_4);
    *unaff_x20 = lVar6;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x38);
    uVar4 = 0;
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b6e000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,1,param_3);
  return;
}



/* Entry: 101b6ea94; end: 101b6eaeb;  */

void FUN_101b6ea94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b6fec4;
  plVar1[8] = param_4;
  plVar1[9] = param_5;
  lVar2 = 0x112e05b50;
  func_0x0001000285a8(0x112e05b50,&UNK_10d9d8d88);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f234,0,0);
  return;
}



/* Entry: 101b6eaec; end: 101b6eb43;  */

void FUN_101b6eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b6fec8;
  plVar1[8] = param_4;
  plVar1[9] = param_5;
  lVar2 = 0x112e05b28;
  func_0x0001000285a8(0x112e05b28,&UNK_10d9d8d48);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f424,0,0);
  return;
}



/* Entry: 101b6eb44; end: 101b6eb9b;  */

void FUN_101b6eb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b6eb9c;
  plVar1[8] = param_4;
  plVar1[9] = param_5;
  lVar2 = 0x112e05b00;
  func_0x0001000285a8(0x112e05b00,&UNK_10d9d8cf8);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f614,0,0);
  return;
}



/* Entry: 101b6eb9c; end: 101b6ebdf;  */

void FUN_101b6eb9c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101b6ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101b6ebe0; end: 101b6ec83;  */

void FUN_101b6ebe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b6ec84;
  plVar5[2] = param_1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8(0x70,uVar1,uVar2);
  plVar5[3] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_101b6eb9c;
  plVar3[8] = lVar4;
  plVar3[9] = unaff_x20 + (uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0x112e05b00;
  func_0x0001000285a8(0x112e05b00,&UNK_10d9d8cf8);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f614,0,0);
  return;
}



/* Entry: 101b6ec84; end: 101b6ecbf;  */

void FUN_101b6ec84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b6ecbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b6ecc0; end: 101b6f1cf;  */

undefined * FUN_101b6ecc0(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0x112e05bb8;
  func_0x0001000285a8(0x112e05bb8,&UNK_10d9d8e20);
  lVar9 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e05b08,&UNK_10d9d8d00);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar10 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar9 + 0x48);
    func_0x000107c6157c();
    do {
      puVar5 = puVar7;
      FUN_101b6fe7c(param_1,puVar7,0x112e05bb8,&UNK_10d9d8e20);
      puVar4 = puVar7;
      func_0x0001000c8928();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b6ee6c);
        (*pcVar2)();
      }
      uVar6 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) =
           *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
      lVar11 = *(long *)(puVar3 + 0x30);
      lVar9 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7,lVar9);
      lVar11 = *(long *)(puVar3 + 0x38);
      lVar9 = 0x112e05af0;
      func_0x0001000285a8(0x112e05af0,&UNK_10d9d8ce8);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7 + iVar1,
                 lVar9);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b6ee70);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 101b6f1d0; end: 101b6f233;  */

void FUN_101b6f1d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar1 = 0x112e05b50;
  func_0x0001000285a8(0x112e05b50,&UNK_10d9d8d88);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f234,0,0);
  return;
}



/* Entry: 101b6f234; end: 101b6f30b;  */

void FUN_101b6f234(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
    uVar3 = 0x112d45220;
    FUN_101b6f7a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f30c,uVar2,uVar3);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101b6f30c; end: 101b6f3bf;  */

void FUN_101b6f30c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar1 + 0x38,unaff_x22 + 0x28,0x21,0);
  FUN_101b6dec0(uVar3,uVar2,0x112e05b40,&UNK_10d9d8d78,0x112e05b58,&UNK_10d9d8d90);
  func_0x000107c614a8(unaff_x22 + 0x28);
  func_0x000107c61574(lVar1);
  FUN_101b6fcfc(uVar3,0x112e05b50,&UNK_10d9d8d88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101b6f3c0; end: 101b6f423;  */

void FUN_101b6f3c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar1 = 0x112e05b28;
  func_0x0001000285a8(0x112e05b28,&UNK_10d9d8d48);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f424,0,0);
  return;
}



/* Entry: 101b6f424; end: 101b6f4fb;  */

void FUN_101b6f424(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
    uVar3 = 0x112d45220;
    FUN_101b6f7a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f4fc,uVar2,uVar3);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101b6f4fc; end: 101b6f5af;  */

void FUN_101b6f4fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar1 + 0x38,unaff_x22 + 0x28,0x21,0);
  FUN_101b6dec0(uVar3,uVar2,0x112e05b18,&UNK_10d9d8d38,0x112e05b30,&UNK_10d9d8d50);
  func_0x000107c614a8(unaff_x22 + 0x28);
  func_0x000107c61574(lVar1);
  FUN_101b6fcfc(uVar3,0x112e05b28,&UNK_10d9d8d48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101b6f5b0; end: 101b6f613;  */

void FUN_101b6f5b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar1 = 0x112e05b00;
  func_0x0001000285a8(0x112e05b00,&UNK_10d9d8cf8);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f614,0,0);
  return;
}



/* Entry: 101b6f614; end: 101b6f6eb;  */

void FUN_101b6f614(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
    uVar3 = 0x112d45220;
    FUN_101b6f7a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f6ec,uVar2,uVar3);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101b6f6ec; end: 101b6f79f;  */

void FUN_101b6f6ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar1 + 0x38,unaff_x22 + 0x28,0x21,0);
  FUN_101b6dec0(uVar3,uVar2,0x112e05af0,&UNK_10d9d8ce8,0x112e05b08,&UNK_10d9d8d00);
  func_0x000107c614a8(unaff_x22 + 0x28);
  func_0x000107c61574(lVar1);
  FUN_101b6fcfc(uVar3,0x112e05b00,&UNK_10d9d8cf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101b6f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101b6f7a0; end: 101b6f7df;  */

void FUN_101b6f7a0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101b6f7e0; end: 101b6f817;  */

void FUN_101b6f7e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b6dd78(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e05b00,&UNK_10d9d8cf8,0x112e05af0,
                &UNK_10d9d8ce8);
  return;
}



/* Entry: 101b6f818; end: 101b6f82b;  */

void FUN_101b6f818(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x000101b6b3fc(param_1,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                      unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)),&UNK_11044cf40,
                      &UNK_10d9d8d60);
  return;
}



/* Entry: 101b6f82c; end: 101b6f8cf;  */

void FUN_101b6f82c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b6fecc;
  plVar5[2] = param_1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8(0x70,uVar1,uVar2);
  plVar5[3] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = 0x101b6fec8;
  plVar3[8] = lVar4;
  plVar3[9] = unaff_x20 + (uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0x112e05b28;
  func_0x0001000285a8(0x112e05b28,&UNK_10d9d8d48);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f424,0,0);
  return;
}



/* Entry: 101b6f8d0; end: 101b6f907;  */

void FUN_101b6f8d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b6dd78(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e05b28,&UNK_10d9d8d48,0x112e05b18,
                &UNK_10d9d8d38);
  return;
}



/* Entry: 101b6f908; end: 101b6f97b;  */

void FUN_101b6f908(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b6f97c; end: 101b6f98f;  */

void FUN_101b6f97c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x000101b6b3fc(param_1,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                      unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)),&UNK_11044cfb8,
                      &UNK_10d9d8da0);
  return;
}



/* Entry: 101b6f990; end: 101b6f9ef;  */

void FUN_101b6f990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x000101b6b3fc(param_1,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                      unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)),param_2,param_3);
  return;
}



/* Entry: 101b6f9f0; end: 101b6fa37;  */

undefined8 FUN_101b6f9f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101b6fa38; end: 101b6faab;  */

void FUN_101b6fa38(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b6faac; end: 101b6fb4f;  */

void FUN_101b6faac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b6fed0;
  plVar5[2] = param_1;
  plVar3 = (long *)0x70;
  func_0x000107c615b8(0x70,uVar1,uVar2);
  plVar5[3] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_101b6fec4;
  plVar3[8] = lVar4;
  plVar3[9] = unaff_x20 + (uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0x112e05b50;
  func_0x0001000285a8(0x112e05b50,&UNK_10d9d8d88);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6f234,0,0);
  return;
}



/* Entry: 101b6fb50; end: 101b6fb87;  */

void FUN_101b6fb50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b6dd78(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e05b50,&UNK_10d9d8d88,0x112e05b40,
                &UNK_10d9d8d78);
  return;
}



/* Entry: 101b6fb88; end: 101b6fbcb;  */

undefined8 FUN_101b6fb88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101f357fc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101b6fbcc; end: 101b6fbd3;  */

undefined1  [16] FUN_101b6fbcc(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c5fb78(0xd000000000000021,0x800000010f000b70);
  uVar2 = 0x112d393f0;
  uStack_38 = uVar3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_38,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 101b6fbd4; end: 101b6fc7f;  */

void FUN_101b6fbd4(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e05968;
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101b6fed4;
  plVar2[0x35] = unaff_x20 + uVar3;
  plVar2[0x36] = lVar4;
  lVar4 = 0x112e05b70;
  func_0x0001000285a8(0x112e05b70,&UNK_10d9d8dd0,uVar1);
  plVar2[0x37] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x38] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x39] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b6cf40,0,0);
  return;
}



/* Entry: 101b6fc80; end: 101b6fc87;  */

void FUN_101b6fc80(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101b6fc88; end: 101b6fcc3;  */

undefined8 FUN_101b6fc88(undefined8 param_1,undefined8 param_2)

{
  FUN_101f3b798(param_2,param_1);
  return param_2;
}



/* Entry: 101b6fcc4; end: 101b6fcfb;  */

void FUN_101b6fcc4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b6dd78(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e05b98,&UNK_10d9d8df8,0x112e05960,
                &UNK_10d9d8b00);
  return;
}



/* Entry: 101b6fcfc; end: 101b6fd3b;  */

undefined8 FUN_101b6fcfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101b6fd3c; end: 101b6fe7b;  */

void FUN_101b6fd3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x11) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  func_0x000107c61614(unaff_x20 + 0x70,0);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined1 *)(unaff_x20 + 0x90) = 1;
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  FUN_101b6dd08(param_2,unaff_x20 + 0x20);
  lVar1 = 0x112e05ba0;
  func_0x0001000285a8(0x112e05ba0,&UNK_10d9d8e08);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101b6f020();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  FUN_101b6dd08(param_2,lVar1 + 0x10);
  *(long *)(unaff_x20 + 0x48) = lVar1;
  lVar1 = 0x112e05ba8;
  func_0x0001000285a8(0x112e05ba8,&UNK_10d9d8e10);
  func_0x000107c613fc();
  puVar2 = puVar3;
  func_0x000101b6ee70();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  FUN_101b6dd08(param_2,lVar1 + 0x10);
  *(long *)(unaff_x20 + 0x50) = lVar1;
  lVar1 = 0x112e05bb0;
  func_0x0001000285a8(0x112e05bb0,&UNK_10d9d8e18);
  func_0x000107c613fc();
  func_0x000101b6ecc0();
  *(undefined **)(lVar1 + 0x38) = puVar3;
  FUN_101b6dd08(param_2,lVar1 + 0x10);
  *(long *)(unaff_x20 + 0x58) = lVar1;
  FUN_101b6c264();
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 101b6fe7c; end: 101b6fec3;  */

undefined8 FUN_101b6fe7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101b6fec4; end: 101b6fed7;  */

void FUN_101b6fec4(undefined1 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *unaff_x22;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101b6ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101b6fed8; end: 101b6ff83;  */

void FUN_101b6fed8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101b705c4();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x18) = uStack_48;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11044d050;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b6ff84; end: 101b6ff8f;  */

void FUN_101b6ff84(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101b705c4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_50;
  *(undefined8 *)(lVar2 + 0x18) = uStack_48;
  *(undefined8 *)(lVar2 + 0x20) = uStack_58;
  *(undefined8 *)(lVar2 + 0x28) = uStack_60;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11044d050;
  *param_1 = lVar2;
  return;
}



/* Entry: 101b6ff90; end: 101b700ab;  */

void FUN_101b6ff90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101b700ac; end: 101b700c7;  */

undefined1  [16] FUN_101b700ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f000c80;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 101b700c8; end: 101b70103;  */

void FUN_101b700c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


