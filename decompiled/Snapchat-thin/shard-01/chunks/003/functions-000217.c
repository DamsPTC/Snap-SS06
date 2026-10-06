/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ea8a00; end: 100ea8b9f;  */

void FUN_100ea8a00(long param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  *param_2 = 1;
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uStack_38 = 0xffffffffffffffff;
    puStack_60 = &uStack_38;
    puStack_40 = puStack_60;
    func_0x00010486ddec(0x100ea98b8,auStack_50,0x100ea98bc,auStack_70);
    func_0x000107c5da60();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea8ae4);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c4bc90(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 100ea8ba0; end: 100ea8bbf;  */

void FUN_100ea8ba0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 100ea8bc0; end: 100ea8c03;  */

void FUN_100ea8bc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ea8c04; end: 100ea8c43;  */

void FUN_100ea8c04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = 0x656c707061;
  param_1[1] = 0xe500000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100ea8c44; end: 100ea8ca3;  */

void FUN_100ea8c44(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Entry: 100ea8ca4; end: 100ea8d7f;  */

void FUN_100ea8ca4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c4458c();
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c4f544();
  func_0x000107c6057c(puVar1,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  uVar2 = param_3[1];
  *param_3 = 0x5f726f727265;
  param_3[1] = 0xe600000000000000;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 100ea8d80; end: 100ea8d9f;  */

void FUN_100ea8d80(void)

{
  func_0x000107c61168(&PTR_PTR_112d471b8);
  return;
}



/* Entry: 100ea8da0; end: 100ea8e13;  */

void FUN_100ea8da0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0x656c707061;
  puVar2[1] = 0xe500000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100ea8e14; end: 100ea8e67;  */

void FUN_100ea8e14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ea8e68; end: 100ea8f03;  */

void FUN_100ea8e68(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 10;
  return;
}



/* Entry: 100ea8f04; end: 100ea8f23;  */

void FUN_100ea8f04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ea8f24; end: 100ea8f4b;  */

void FUN_100ea8f24(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0xd000000000000018;
  puVar2[1] = 0x800000010ef170e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100ea8f4c; end: 100ea8f6b;  */

void FUN_100ea8f4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ea8f6c; end: 100ea8f93;  */

void FUN_100ea8f6c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0xd000000000000019;
  puVar2[1] = 0x800000010ef170c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100ea8f94; end: 100ea8fb3;  */

void FUN_100ea8f94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ea8fb4; end: 100ea8fdb;  */

void FUN_100ea8fb4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0x676e656c6c616863;
  puVar2[1] = 0xea00000000006465;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100ea8fdc; end: 100ea8ffb;  */

void FUN_100ea8fdc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ea8ffc; end: 100ea9003;  */

void FUN_100ea8ffc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c4458c();
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c4f544();
  func_0x000107c6057c(puVar2,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  uVar3 = puVar1[1];
  *puVar1 = 0x5f726f727265;
  puVar1[1] = 0xe600000000000000;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 100ea9004; end: 100ea902f;  */

long FUN_100ea9004(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100ea9030; end: 100ea908b;  */

void FUN_100ea9030(void)

{
  byte in_stack_00000010;
  
  if (in_stack_00000010 >> 6 != 1) {
    if (in_stack_00000010 >> 6 == 0) {
      FUN_100ea91f0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100ea908c; end: 100ea9107;  */

/* WARNING: Possible PIC construction at 0x000100ea90e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea90e8) */

void FUN_100ea908c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  if ((param_2 >> 0x3d & 1) == 0) {
    func_0x00010006c00c();
    func_0x00010006c00c(param_3,param_4);
  }
  else {
    func_0x00010006c00c(param_1,param_2 & 0xdfffffffffffffff);
    FUN_100de78a0(param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_stack_00000008);
  return;
}



/* Entry: 100ea9108; end: 100ea9153;  */

void FUN_100ea9108(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_3 != 2) {
      return;
    }
  }
  else if (((param_3 != 3) && (param_3 != 4)) && (param_3 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100ea9154; end: 100ea91ef;  */

void FUN_100ea9154(undefined8 *param_1)

{
  func_0x000100ea9194(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7],param_1[8],param_1[9],*(undefined1 *)(param_1 + 10));
  return;
}



/* Entry: 100ea91f0; end: 100ea9213;  */

void FUN_100ea91f0(void)

{
  char in_stack_00000010;
  code *UNRECOVERED_JUMPTABLE;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (in_stack_00000010 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100ea9200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ea9210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100ea9214; end: 100ea928f;  */

/* WARNING: Possible PIC construction at 0x000100ea926c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea9270) */

void FUN_100ea9214(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if ((param_2 >> 0x3d & 1) == 0) {
    func_0x00010006c090();
    func_0x00010006c090(param_3,param_4);
  }
  else {
    func_0x00010006c090(param_1,param_2 & 0xdfffffffffffffff);
    func_0x0001000b44c0(param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 100ea9290; end: 100ea92db;  */

void FUN_100ea9290(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    if (param_3 != 2) {
      return;
    }
  }
  else if (((param_3 != 3) && (param_3 != 4)) && (param_3 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100ea92dc; end: 100ea9467;  */

undefined8 * FUN_100ea92dc(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar11;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined1 *)(param_2 + 10);
  FUN_100ea9030(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = uVar11;
  return param_1;
}



/* Entry: 100ea9468; end: 100ea948b;  */

void FUN_100ea9468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 100ea948c; end: 100ea94ff;  */

undefined8 * FUN_100ea948c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined1 *)(param_2 + 10);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar12 = param_1[9];
  uVar10 = *(undefined1 *)(param_1 + 10);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 10) = uVar9;
  func_0x000100ea9194(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12,uVar10);
  return param_1;
}



/* Entry: 100ea9500; end: 100ea964f;  */

int FUN_100ea9500(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0x14) >> 6) | (*(byte *)(param_1 + 0x14) >> 1 & 0x1f) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ea9650; end: 100ea9793;  */

uint FUN_100ea9650(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  byte bStack_90;
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
  byte bStack_30;
  
  bVar10 = *(byte *)(param_1 + 10) >> 6;
  bStack_90 = *(byte *)(param_2 + 10);
  if (bVar10 == 0) {
    if (bStack_90 < 0x40) {
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      uStack_70 = param_1[2];
      uStack_68 = param_1[3];
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      uStack_48 = param_1[7];
      uStack_50 = param_1[6];
      uStack_38 = param_1[9];
      uStack_40 = param_1[8];
      bStack_30 = *(byte *)(param_1 + 10) & 0x3f;
      lStack_d8 = param_2[1];
      lStack_e0 = *param_2;
      lStack_d0 = param_2[2];
      lStack_c8 = param_2[3];
      lStack_b8 = param_2[5];
      lStack_c0 = param_2[4];
      lStack_b0 = param_2[6];
      lStack_a8 = param_2[7];
      lStack_98 = param_2[9];
      lStack_a0 = param_2[8];
      FUN_100ea9794();
      puVar5 = param_1;
      func_0x000100ea97d4();
      puVar6 = puVar5;
      func_0x000100ea9814();
      puVar7 = &uStack_80;
      func_0x000107c606d0(puVar7,&lStack_e0,&UNK_110361290,&UNK_110361330,param_1,puVar5,puVar6);
      uVar3 = (uint)puVar7;
      goto LAB_100ea9780;
    }
  }
  else if (bVar10 == 1) {
    if ((bStack_90 & 0xc0) == 0x40) {
      uVar8 = *param_1;
      lVar9 = *param_2;
      uVar4 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(uVar8,lVar9,uVar4);
      uVar3 = (uint)uVar8;
      goto LAB_100ea9780;
    }
  }
  else if (((char)bStack_90 < -0x40) && (bStack_90 == 0x80)) {
    lVar2 = param_2[7];
    lVar9 = param_2[6];
    lVar28 = param_2[3];
    lVar27 = param_2[2];
    lVar30 = param_2[5];
    lVar29 = param_2[4];
    bVar10 = (byte)lVar27 | (byte)lVar9 | (byte)lVar29 | *(byte *)(param_2 + 8);
    bVar11 = (byte)((ulong)lVar27 >> 8) | (byte)((ulong)lVar9 >> 8) |
             (byte)((ulong)lVar29 >> 8) | *(byte *)((long)param_2 + 0x41);
    bVar12 = (byte)((ulong)lVar27 >> 0x10) | (byte)((ulong)lVar9 >> 0x10) |
             (byte)((ulong)lVar29 >> 0x10) | *(byte *)((long)param_2 + 0x42);
    bVar13 = (byte)((ulong)lVar27 >> 0x18) | (byte)((ulong)lVar9 >> 0x18) |
             (byte)((ulong)lVar29 >> 0x18) | *(byte *)((long)param_2 + 0x43);
    bVar14 = (byte)((ulong)lVar27 >> 0x20) | (byte)((ulong)lVar9 >> 0x20) |
             (byte)((ulong)lVar29 >> 0x20) | *(byte *)((long)param_2 + 0x44);
    bVar15 = (byte)((ulong)lVar27 >> 0x28) | (byte)((ulong)lVar9 >> 0x28) |
             (byte)((ulong)lVar29 >> 0x28) | *(byte *)((long)param_2 + 0x45);
    bVar16 = (byte)((ulong)lVar27 >> 0x30) | (byte)((ulong)lVar9 >> 0x30) |
             (byte)((ulong)lVar29 >> 0x30) | *(byte *)((long)param_2 + 0x46);
    bVar17 = (byte)((ulong)lVar27 >> 0x38) | (byte)((ulong)lVar9 >> 0x38) |
             (byte)((ulong)lVar29 >> 0x38) | *(byte *)((long)param_2 + 0x47);
    bVar18 = (byte)lVar28 | (byte)lVar2 | (byte)lVar30 | *(byte *)(param_2 + 9);
    bVar19 = (byte)((ulong)lVar28 >> 8) | (byte)((ulong)lVar2 >> 8) |
             (byte)((ulong)lVar30 >> 8) | *(byte *)((long)param_2 + 0x49);
    bVar20 = (byte)((ulong)lVar28 >> 0x10) | (byte)((ulong)lVar2 >> 0x10) |
             (byte)((ulong)lVar30 >> 0x10) | *(byte *)((long)param_2 + 0x4a);
    bVar21 = (byte)((ulong)lVar28 >> 0x18) | (byte)((ulong)lVar2 >> 0x18) |
             (byte)((ulong)lVar30 >> 0x18) | *(byte *)((long)param_2 + 0x4b);
    bVar22 = (byte)((ulong)lVar28 >> 0x20) | (byte)((ulong)lVar2 >> 0x20) |
             (byte)((ulong)lVar30 >> 0x20) | *(byte *)((long)param_2 + 0x4c);
    bVar23 = (byte)((ulong)lVar28 >> 0x28) | (byte)((ulong)lVar2 >> 0x28) |
             (byte)((ulong)lVar30 >> 0x28) | *(byte *)((long)param_2 + 0x4d);
    bVar24 = (byte)((ulong)lVar28 >> 0x30) | (byte)((ulong)lVar2 >> 0x30) |
             (byte)((ulong)lVar30 >> 0x30) | *(byte *)((long)param_2 + 0x4e);
    bVar25 = (byte)((ulong)lVar28 >> 0x38) | (byte)((ulong)lVar2 >> 0x38) |
             (byte)((ulong)lVar30 >> 0x38) | *(byte *)((long)param_2 + 0x4f);
    auVar26[1] = bVar11;
    auVar26[0] = bVar10;
    auVar26[2] = bVar12;
    auVar26[3] = bVar13;
    auVar26[4] = bVar14;
    auVar26[5] = bVar15;
    auVar26[6] = bVar16;
    auVar26[7] = bVar17;
    auVar26[8] = bVar18;
    auVar26[9] = bVar19;
    auVar26[10] = bVar20;
    auVar26[0xb] = bVar21;
    auVar26[0xc] = bVar22;
    auVar26[0xd] = bVar23;
    auVar26[0xe] = bVar24;
    auVar26[0xf] = bVar25;
    auVar1[1] = bVar11;
    auVar1[0] = bVar10;
    auVar1[2] = bVar12;
    auVar1[3] = bVar13;
    auVar1[4] = bVar14;
    auVar1[5] = bVar15;
    auVar1[6] = bVar16;
    auVar1[7] = bVar17;
    auVar1[8] = bVar18;
    auVar1[9] = bVar19;
    auVar1[10] = bVar20;
    auVar1[0xb] = bVar21;
    auVar1[0xc] = bVar22;
    auVar1[0xd] = bVar23;
    auVar1[0xe] = bVar24;
    auVar1[0xf] = bVar25;
    auVar26 = NEON_ext(auVar26,auVar1,8,1);
    if ((CONCAT17(bVar17 | auVar26[7],
                  CONCAT16(bVar16 | auVar26[6],
                           CONCAT15(bVar15 | auVar26[5],
                                    CONCAT14(bVar14 | auVar26[4],
                                             CONCAT13(bVar13 | auVar26[3],
                                                      CONCAT12(bVar12 | auVar26[2],
                                                               CONCAT11(bVar11 | auVar26[1],
                                                                        bVar10 | auVar26[0])))))))
         == 0 && param_2[1] == 0) && *param_2 == 0) {
      uVar3 = 1;
      goto LAB_100ea9780;
    }
  }
  uVar3 = 0;
LAB_100ea9780:
  return uVar3 & 1;
}



/* Entry: 100ea9794; end: 100ea9853;  */

void FUN_100ea9794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d47238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90e4bc;
  func_0x000107c61520(&UNK_10d90e4bc,&UNK_110361290);
  puRam0000000112d47238 = puVar1;
  return;
}



/* Entry: 100ea9854; end: 100ea98df;  */

void FUN_100ea9854(long param_1,long param_2)

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



/* Entry: 100ea98e0; end: 100ea993f; -[_TtC12OAuthFeature28OAuthAppleCredentialProvider init] */

void FUN_100ea98e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OAuthFeature.OAuthAppleCredentialProvider",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea990c);
  (*pcVar1)();
}



/* Entry: 100ea9940; end: 100ea99af; -[_TtC12OAuthFeature28OAuthAppleCredentialProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea9940(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d47250));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d47258));
  FUN_100eaaeb4(param_1 + _DAT_112d47260);
  func_0x000100eaa04c(*(undefined8 *)(param_1 + _DAT_112d47268),
                      ((undefined8 *)(param_1 + _DAT_112d47268))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d47270 + 8))
  ;
  return;
}



/* Entry: 100ea99b0; end: 100ea99cf;  */

void FUN_100ea99b0(void)

{
  func_0x000107c61168(&PTR_PTR_11279d1c8);
  return;
}



/* Entry: 100ea99d0; end: 100ea9c6f;  */

/* WARNING: Possible PIC construction at 0x000100ea9a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea9a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea9b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea9b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea9c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea9c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea9c2c) */
/* WARNING: Removing unreachable block (ram,0x000100ea9b68) */
/* WARNING: Removing unreachable block (ram,0x000100ea9b20) */
/* WARNING: Removing unreachable block (ram,0x000100ea9b50) */
/* WARNING: Removing unreachable block (ram,0x000100ea9b28) */
/* WARNING: Removing unreachable block (ram,0x000100ea9b54) */
/* WARNING: Removing unreachable block (ram,0x000100ea9a68) */
/* WARNING: Removing unreachable block (ram,0x000100ea9a44) */
/* WARNING: Removing unreachable block (ram,0x000100ea9c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea99d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d47268);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100eaa04c(uVar2,uVar3);
  puVar4 = PTR__OBJC_CLASS___ASAuthorizationAppleIDProvider_1126a5e88;
  func_0x000107c610f8(PTR__OBJC_CLASS___ASAuthorizationAppleIDProvider_1126a5e88);
  func_0x000107c6157c(param_2);
  func_0x000107c453e4(puVar4);
  func_0x000107c40b3c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 100ea9c70; end: 100ea9c8f;  */

void FUN_100ea9c70(void)

{
  FUN_100ea99d0();
  return;
}



/* Entry: 100ea9c90; end: 100ea9f6b;  */

undefined8 FUN_100ea9c90(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d472b0;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d472b0,&UNK_10d90e4a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar9 - extraout_x12_01;
  lVar2 = unaff_x20;
  func_0x000107c43ba0();
  func_0x000107c61180();
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x000107c5ed00();
  }
  else {
    func_0x000107c5ecfc(lVar9);
    func_0x000107c61170(lVar2);
    lVar2 = 0;
    func_0x000107c5ed00();
  }
  lVar11 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar11 + 0x38);
  (*pcVar5)(lVar9,bVar1,1,lVar2);
  FUN_100eaaed4(lVar9,lVar6);
  func_0x000107c5ed00(0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  uVar4 = 1;
  lVar9 = lVar6;
  (*pcVar10)(lVar6,1,lVar2);
  if ((int)lVar9 == 1) {
    func_0x000100eaaf24(lVar6,0x112d472b0,&UNK_10d90e4a0);
    lVar9 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5ecf0();
    (**(code **)(lVar11 + 8))(lVar6,lVar2);
  }
  uVar3 = uStack_68;
  FUN_100eaa828(uStack_68,lVar9,uVar4,0xd00000000000002d,0x800000010ef171c0);
  lStack_70 = lVar9;
  func_0x000107c6142c(uVar4);
  func_0x000107c43ba0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5ecfc(lVar8);
    func_0x000107c61170(unaff_x20);
  }
  (*pcVar5)(lVar8,unaff_x20 == 0,1,lVar2);
  FUN_100eaaed4(lVar8,lVar7);
  uVar4 = 1;
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  if ((int)lVar6 == 1) {
    func_0x000100eaaf24(lVar7,0x112d472b0,&UNK_10d90e4a0);
    lVar6 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5ecf4();
    (**(code **)(lVar11 + 8))(lVar7,lVar2);
  }
  FUN_100eaa828(uStack_68,lVar6,uVar4,0xd00000000000002c,0x800000010ef171f0);
  func_0x000107c6142c(uVar4);
  return uVar3;
}



/* Entry: 100ea9f6c; end: 100ea9fd3; -[_TtC12OAuthFeature28OAuthAppleCredentialProvider authorizationController:didCompleteWithAuthorization:] */

/* WARNING: Possible PIC construction at 0x000100ea9fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea9fb8) */

void FUN_100ea9f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100eaa99c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ea9fd4; end: 100eaa03b; -[_TtC12OAuthFeature28OAuthAppleCredentialProvider authorizationController:didCompleteWithError:] */

/* WARNING: Possible PIC construction at 0x000100eaa01c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eaa020) */

void FUN_100ea9fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100eaaca0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100eaa03c; end: 100eaa05b; -[_TtC12OAuthFeature28OAuthAppleCredentialProvider presentationAnchorForAuthorizationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaa03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d47250));
  return;
}



/* Entry: 100eaa05c; end: 100eaa0d3;  */

void FUN_100eaa05c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000100eaaf64(0,param_1,param_2);
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



/* Entry: 100eaa0d4; end: 100eaa827;  */

undefined1  [16]
FUN_100eaa0d4(undefined8 *****param_1,undefined8 *****param_2,undefined8 param_3,
             undefined8 *****param_4,undefined8 *****param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined8 *****pppppuVar15;
  undefined8 ***pppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****unaff_x23;
  undefined8 *****unaff_x24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 auStack_168 [2];
  long alStack_158 [9];
  undefined1 auStack_110 [16];
  undefined8 ****ppppuStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****appppuStack_98 [3];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  pppppuVar15 = param_2;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_100ea8d80();
  ppuStack_78 = &PTR_DAT_110360d08;
  appppuStack_98[0] = param_1;
  uStack_80 = uVar4;
  func_0x000107c6157c(param_1);
  pppppuVar17 = param_2;
  func_0x000107c45004();
  func_0x000107c61180();
  if (pppppuVar17 == (undefined8 *****)0x0) {
    pppppuVar15 = appppuStack_98;
    func_0x0001000a8868(pppppuVar15,uVar4);
    pppuVar16 = (*pppppuVar15)[3];
    pppppuVar17 = (undefined8 *****)0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef17120);
    puVar14 = (undefined *)0x1;
    pppppuVar15 = pppppuVar17;
    func_0x000104cf60dc(pppuVar16);
    func_0x000107c61170(pppppuVar17);
LAB_100eaa6b0:
    pppppuVar17 = (undefined8 *****)0x0;
LAB_100eaa6b4:
    uVar4 = 0;
  }
  else {
    param_1 = pppppuVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(pppppuVar17);
    func_0x000107c5fb04(auStack_110 + lVar3);
    pppppuVar17 = param_1;
    pppppuVar6 = pppppuVar15;
    func_0x000107c5faf0(param_1,pppppuVar15,auStack_110 + lVar3);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar6 = appppuStack_98;
      func_0x0001000a8868(pppppuVar6,uStack_80);
      param_2 = (undefined8 *****)(*pppppuVar6)[3];
      unaff_x23 = (undefined8 *****)0xd000000000000016;
      func_0x000107c5fadc(0xd000000000000016,0x800000010ef17140);
      puVar14 = (undefined *)0x1;
      func_0x000104cf60dc(param_2,unaff_x23);
      func_0x000107c61170(unaff_x23);
      func_0x00010006c090(param_1);
      goto LAB_100eaa6b4;
    }
    pppuStack_e0 = (undefined8 ****)0x2e;
    uStack_d8 = 0xe100000000000000;
    ppppuStack_b8 = pppppuVar17;
    ppppuStack_b0 = pppppuVar6;
    FUN_100e8b654();
    puVar14 = PTR___sSSN_11034da80;
    ppppuVar5 = &pppuStack_e0;
    param_4 = pppppuVar17;
    param_5 = pppppuVar17;
    func_0x000107c601dc(ppppuVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar17,pppppuVar17)
    ;
    func_0x000107c6142c(pppppuVar6);
    if (ppppuVar5[2] < (undefined8 ***)0x2) {
      func_0x000107c6142c(ppppuVar5);
      pppppuVar7 = appppuStack_98;
      func_0x0001000a8868(pppppuVar7,uStack_80);
      pppuVar16 = (*pppppuVar7)[3];
      param_2 = (undefined8 *****)0x50676e697373696d;
      func_0x000107c5fadc(0x50676e697373696d,0xee0064616f6c7961);
      puVar14 = (undefined *)0x1;
      func_0x000104cf60dc(pppuVar16,param_2);
      func_0x000107c61170(param_2);
      func_0x00010006c090(param_1);
      unaff_x23 = pppppuVar17;
      unaff_x24 = pppppuVar6;
      goto LAB_100eaa6b0;
    }
    ppppuVar8 = (undefined8 ****)ppppuVar5[6];
    pppppuVar6 = (undefined8 *****)ppppuVar5[7];
    func_0x000107c61434(pppppuVar6);
    func_0x000107c6142c(ppppuVar5);
    pppuStack_e0 = (undefined8 ****)0x2d;
    uStack_d8 = 0xe100000000000000;
    ppppuStack_100 = (undefined8 ****)0x2b;
    uStack_f8 = 0xe100000000000000;
    ppppuStack_b8 = ppppuVar8;
    ppppuStack_b0 = pppppuVar6;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x38) = pppppuVar17;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x40) = pppppuVar17;
    pppppuVar7 = (undefined8 *****)&pppuStack_e0;
    pppppuVar10 = &ppppuStack_100;
    *(undefined **)((long)alStack_158 + lVar3 + 0x28) = puVar14;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x30) = pppppuVar17;
    func_0x000107c601fc(pppppuVar7,pppppuVar10,0,0,0,1,puVar14,puVar14);
    func_0x000107c6142c(pppppuVar6);
    pppuStack_e0 = (undefined8 ****)0x5f;
    uStack_d8 = 0xe100000000000000;
    ppppuStack_100 = (undefined8 *****)0x2f;
    uStack_f8 = 0xe100000000000000;
    ppppuStack_b8 = pppppuVar7;
    ppppuStack_b0 = pppppuVar10;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x38) = pppppuVar17;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x40) = pppppuVar17;
    pppppuVar7 = (undefined8 *****)&pppuStack_e0;
    pppppuVar11 = &ppppuStack_100;
    *(undefined **)((long)alStack_158 + lVar3 + 0x28) = puVar14;
    *(undefined8 ******)((long)alStack_158 + lVar3 + 0x30) = pppppuVar17;
    param_4 = (undefined8 *****)0x0;
    param_5 = (undefined8 *****)0x0;
    func_0x000107c601fc(pppppuVar7,pppppuVar11,0,0,0,1,puVar14,puVar14);
    func_0x000107c6142c(pppppuVar10);
    ppppuStack_f0 = pppppuVar7;
    ppppuStack_e8 = pppppuVar11;
    while (unaff_x23 = (undefined8 *****)ppppuStack_e8,
          pppppuVar17 = (undefined8 *****)ppppuStack_f0,
          pppppuVar7 = (undefined8 *****)ppppuStack_f0,
          func_0x000107c5fb5c(ppppuStack_f0,ppppuStack_e8), ((ulong)pppppuVar7 & 3) != 0) {
      func_0x000107c5fb78(0x3d,0xe100000000000000);
    }
    unaff_x24 = unaff_x23;
    func_0x000107c5ee08(pppppuVar17,unaff_x23,0);
    if (0xe < (ulong)unaff_x24 >> 0x3c) {
      pppppuVar17 = appppuStack_98;
      func_0x0001000a8868(pppppuVar17,uStack_80);
      pppuVar16 = (*pppppuVar17)[3];
      param_2 = (undefined8 *****)0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010ef17160);
      puVar14 = (undefined *)0x1;
      func_0x000104cf60dc(pppuVar16,param_2);
      func_0x000107c61170(param_2);
      unaff_x24 = pppppuVar6;
LAB_100eaa69c:
      func_0x00010006c090(param_1);
LAB_100eaa6a8:
      func_0x000107c6142c(unaff_x23);
      goto LAB_100eaa6b0;
    }
    puVar14 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    param_2 = pppppuVar17;
    func_0x000107c5ee20(pppppuVar17,unaff_x24);
    pppuStack_e0 = (undefined8 ****)0x0;
    param_5 = (undefined8 *****)&pppuStack_e0;
    param_4 = (undefined8 *****)0x0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    ppppuVar5 = (undefined8 ****)pppuStack_e0;
    func_0x000107c61174(pppuStack_e0);
    if (puVar14 == (undefined *)0x0) {
      ppppuVar8 = ppppuVar5;
      func_0x000107c5ed30();
      func_0x000107c61170(ppppuVar5);
      func_0x000107c61654();
      pppppuVar6 = appppuStack_98;
      func_0x0001000a8868(pppppuVar6,uStack_80);
      pppuVar16 = (*pppppuVar6)[3];
      param_2 = (undefined8 *****)0xd000000000000016;
      func_0x000107c5fadc(0xd000000000000016,0x800000010ef17180);
      puVar14 = (undefined *)0x1;
      func_0x000104cf60dc(pppuVar16,param_2);
      func_0x000107c61170(param_2);
      func_0x0001000b44c0(pppppuVar17,unaff_x24);
      func_0x00010006c090(param_1);
      func_0x000107c614ac(ppppuVar8);
      goto LAB_100eaa6a8;
    }
    func_0x000107c60234(&ppppuStack_b8,puVar14);
    func_0x000107c615e8(puVar14);
    func_0x0001000bb420(&ppppuStack_b8,&pppuStack_e0);
    param_4 = (undefined8 *****)0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar1 = PTR___sypN_11034f1a8;
    pppppuVar6 = &ppppuStack_100;
    puVar14 = PTR___sypN_11034f1a8 + 8;
    param_5 = (undefined8 *****)0x6;
    func_0x000107c6147c(pppppuVar6,&pppuStack_e0,puVar14,param_4,6);
    ppppuVar5 = ppppuStack_100;
    if (((ulong)pppppuVar6 & 1) == 0) {
      FUN_100eaaeb4(&ppppuStack_b8);
      func_0x0001000b44c0(pppppuVar17,unaff_x24);
      goto LAB_100eaa69c;
    }
    param_2 = (undefined8 *****)0x6c69616d65;
    if ((undefined8 ****)ppppuStack_100[2] == (undefined8 ****)0x0) {
LAB_100eaa708:
      pppppuVar6 = appppuStack_98;
      func_0x0001000a8868(pppppuVar6,uStack_80);
      pppuVar16 = (*pppppuVar6)[3];
      uVar13 = 0x800000010ef171a0;
      uVar4 = 0xd000000000000016;
    }
    else {
      func_0x000107c61434(ppppuStack_100);
      uVar12 = 0;
      pppppuVar6 = param_2;
      func_0x000100029284(0x6c69616d65);
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(ppppuVar5);
        goto LAB_100eaa708;
      }
      func_0x0001000bb420(ppppuVar5[7] + (long)pppppuVar6 * 4,&pppuStack_e0);
      func_0x000107c6142c(ppppuVar5);
      pppppuVar6 = &ppppuStack_100;
      param_5 = (undefined8 *****)0x6;
      param_4 = (undefined8 *****)PTR___sSSN_11034da80;
      func_0x000107c6147c(pppppuVar6,&pppuStack_e0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar4 = uStack_f8;
      if (((ulong)pppppuVar6 & 1) == 0) goto LAB_100eaa708;
      pppppuVar6 = (undefined8 *****)ppppuStack_100;
      func_0x000107c5fb5c(ppppuStack_100,uStack_f8);
      func_0x000107c6142c(uVar4);
      if ((long)pppppuVar6 < 1) goto LAB_100eaa708;
      pppppuVar6 = appppuStack_98;
      func_0x0001000a8868(pppppuVar6,uStack_80);
      pppuVar16 = (*pppppuVar6)[3];
      uVar4 = 0x6c69616d45736168;
      uVar13 = 0xe800000000000000;
    }
    func_0x000107c5fadc(uVar4,uVar13);
    func_0x000104cf60dc(pppuVar16,uVar4,1);
    func_0x000107c61170(uVar4);
    if ((undefined8 ****)ppppuVar5[2] == (undefined8 ****)0x0) {
LAB_100eaa798:
      uStack_d8 = 0;
      pppuStack_e0 = (undefined8 ****)0x0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x000107c61434(ppppuVar5);
      uVar12 = 0;
      pppppuVar6 = param_2;
      func_0x000100029284(0x6c69616d65);
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(ppppuVar5);
        goto LAB_100eaa798;
      }
      func_0x0001000bb420(ppppuVar5[7] + (long)pppppuVar6 * 4,&pppuStack_e0);
      func_0x000107c6142c(ppppuVar5);
    }
    func_0x00010006c090(param_1,pppppuVar15);
    func_0x0001000b44c0(pppppuVar17,unaff_x24);
    func_0x000107c6142c(ppppuVar5);
    FUN_100eaaeb4(&ppppuStack_b8);
    func_0x000107c6142c(unaff_x23);
    if (lStack_c8 == 0) {
      pppppuVar15 = (undefined8 *****)0x112d387f8;
      puVar14 = &UNK_10d902650;
      func_0x000100eaaf24(&pppuStack_e0);
      goto LAB_100eaa6b0;
    }
    iVar2 = (int)&ppppuStack_100;
    pppppuVar15 = (undefined8 *****)&pppuStack_e0;
    puVar14 = puVar1 + 8;
    param_5 = (undefined8 *****)0x6;
    param_4 = (undefined8 *****)PTR___sSSN_11034da80;
    func_0x000107c6147c();
    uVar4 = uStack_f8;
    pppppuVar17 = (undefined8 *****)ppppuStack_100;
    if (iVar2 == 0) {
      pppppuVar17 = (undefined8 *****)0x0;
      uVar4 = 0;
    }
  }
  pppppuVar6 = appppuStack_98;
  FUN_100eaaeb4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar18._8_8_ = uVar4;
    auVar18._0_8_ = pppppuVar17;
    return auVar18;
  }
  func_0x000107c60e78();
  *(undefined8 ******)((long)alStack_158 + lVar3 + 8) = unaff_x24;
  *(undefined8 ******)((long)alStack_158 + lVar3 + 0x10) = unaff_x23;
  *(undefined8 ******)((long)alStack_158 + lVar3 + 0x18) = param_1;
  *(undefined8 ******)((long)alStack_158 + lVar3 + 0x20) = param_2;
  *(undefined8 ******)((long)alStack_158 + lVar3 + 0x28) = pppppuVar17;
  *(undefined8 *)((long)alStack_158 + lVar3 + 0x30) = uVar4;
  *(undefined1 **)((long)alStack_158 + lVar3 + 0x38) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_158 + lVar3 + 0x40) = FUN_100eaa828;
  if (puVar14 != (undefined *)0x0) {
    uVar12 = (ulong)pppppuVar15 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      func_0x000107c61434(puVar14);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (pppppuVar6 != (undefined8 *****)0x0) {
        pppppuVar17 = pppppuVar15;
        func_0x000107c5fadc(pppppuVar15,puVar14);
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c56bcc(pppppuVar6);
        func_0x000107c61170(pppppuVar6);
        func_0x000107c61170(pppppuVar17);
        func_0x000107c61170(param_4);
      }
      goto LAB_100eaa97c;
    }
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pppppuVar6 == (undefined8 *****)0x0) {
    puVar14 = (undefined *)0x0;
    pppppuVar15 = (undefined8 *****)0x0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    pppppuVar15 = pppppuVar6;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar6);
    func_0x000107c61170(param_4);
    if (pppppuVar15 == (undefined8 *****)0x0) {
      pppppuVar15 = (undefined8 *****)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      *(undefined8 ******)((long)alStack_158 + lVar3) = pppppuVar15;
      uVar4 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar9 = (long)auStack_168 + lVar3;
      func_0x000107c6147c(lVar9,(long)alStack_158 + lVar3,uVar4,PTR___sSSN_11034da80,6);
      pppppuVar15 = *(undefined8 ******)((long)auStack_168 + lVar3);
      puVar14 = *(undefined **)((long)auStack_168 + lVar3 + 8);
      if ((int)lVar9 == 0) {
        pppppuVar15 = (undefined8 *****)0x0;
        puVar14 = (undefined *)0x0;
      }
    }
  }
LAB_100eaa97c:
  auVar19._8_8_ = puVar14;
  auVar19._0_8_ = pppppuVar15;
  return auVar19;
}



/* Entry: 100eaa828; end: 100eaa99b;  */

undefined1  [16]
FUN_100eaa828(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(param_3);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar1 = param_2;
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c56bcc(param_1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(param_4);
      }
      goto LAB_100eaa97c;
    }
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    lVar2 = param_1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    if (lVar2 == 0) {
      param_2 = 0;
      param_3 = 0;
    }
    else {
      uVar3 = 0x112d373e8;
      lStack_48 = lVar2;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      puVar4 = &uStack_58;
      func_0x000107c6147c(puVar4,&lStack_48,uVar3,PTR___sSSN_11034da80,6);
      param_2 = uStack_58;
      param_3 = uStack_50;
      if ((int)puVar4 == 0) {
        param_2 = 0;
        param_3 = 0;
      }
    }
  }
LAB_100eaa97c:
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 100eaa99c; end: 100eaac9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaa99c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long extraout_x8;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_160 [80];
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)&lStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40d6c();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___ASAuthorizationAppleIDCredential_1126a5e90;
  func_0x000107c61168();
  lVar3 = param_1;
  func_0x000107c6148c();
  if (lVar3 == 0) {
LAB_100eaab08:
    func_0x000107c615e8(param_1);
  }
  else {
    lVar14 = lVar3;
    func_0x000107c45004();
    func_0x000107c61180();
    if (lVar14 == 0) goto LAB_100eaab08;
    lVar4 = lVar14;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar14);
    lVar14 = ((long *)(unaff_x20 + _DAT_112d47270))[1];
    if (lVar14 == 0) {
      func_0x00010006c090(lVar4,puVar2);
      goto LAB_100eaab08;
    }
    lStack_c0 = *(long *)(unaff_x20 + _DAT_112d47270);
    lVar5 = lVar14;
    lStack_168 = lVar4;
    uStack_b8 = lVar14;
    func_0x000107c61434();
    func_0x000107c5fb04(lVar13);
    FUN_100e8b654();
    uVar9 = 0;
    lVar4 = lVar13;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c60214();
    lStack_170 = lVar4;
    (**(code **)(lVar15 + 8))(lVar13);
    func_0x000107c6142c(lVar14);
    if (uVar9 >> 0x3c < 0xf) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d47258);
      FUN_100ea9c90();
      puVar7 = (undefined8 *)(unaff_x20 + _DAT_112d47260);
      func_0x0001000a8868(puVar7,puVar7[3]);
      uVar8 = *puVar7;
      FUN_100eaa0d4();
      lStack_110 = lStack_168;
      lStack_100 = lStack_170;
      pcVar11 = *(code **)(unaff_x20 + _DAT_112d47268);
      puStack_108 = puVar2;
      uStack_f8 = uVar9;
      uStack_f0 = uVar6;
      lStack_e8 = lVar1;
      puStack_e0 = puVar10;
      lStack_d8 = lVar5;
      uStack_d0 = uVar8;
      lStack_c8 = lVar3;
      if (pcVar11 == (code *)0x0) {
        func_0x000107c615e8(param_1);
        func_0x000100eaaf24(&lStack_110,0x112d472a0,&UNK_10d90e488);
        return;
      }
      uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112d47268))[1];
      uStack_b8 = (ulong)puVar2 & 0xcfffffffffffffff;
      lStack_c0 = lStack_168;
      lStack_b0 = lStack_170;
      uStack_70 = 0;
      uStack_a8 = uVar9;
      uStack_a0 = uVar6;
      lStack_98 = lVar1;
      puStack_90 = puVar10;
      lStack_88 = lVar5;
      uStack_80 = uVar8;
      lStack_78 = lVar3;
      FUN_100eaae54(pcVar11,uVar12);
      FUN_100eaae64(&lStack_110,auStack_160);
      (*pcVar11)(&lStack_c0);
      func_0x000107c615e8(param_1);
      func_0x000100eaaf24(&lStack_110,0x112d472a0,&UNK_10d90e488);
      func_0x000100eaaf24(&lStack_110,0x112d472a0,&UNK_10d90e488);
      goto LAB_100eaab54;
    }
    func_0x00010006c090(lStack_168,puVar2);
    func_0x000107c615e8(param_1);
  }
  pcVar11 = *(code **)(unaff_x20 + _DAT_112d47268);
  if (pcVar11 == (code *)0x0) {
    return;
  }
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112d47268))[1];
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = CONCAT71(lStack_b0._1_7_,6);
  uStack_70 = 1;
  func_0x000107c6157c(uVar12);
  (*pcVar11)(&lStack_c0);
LAB_100eaab54:
  func_0x000100eaa04c(pcVar11,uVar12);
  return;
}



/* Entry: 100eaaca0; end: 100eaae53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaaca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lStack_a0;
  long alStack_98 [2];
  undefined1 uStack_88;
  undefined1 uStack_48;
  
  plVar3 = &lStack_a0;
  alStack_98[0] = param_1;
  func_0x000107c614b0();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  func_0x000100e21e2c(0);
  func_0x000107c6147c(&lStack_a0,alStack_98,uVar5,uVar2,6);
  lVar1 = lStack_a0;
  if ((int)plVar3 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d47268);
    if (pcVar4 == (code *)0x0) {
      return;
    }
    uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d47268))[1];
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    uStack_88 = 6;
    uStack_48 = 1;
    func_0x000107c6157c(uVar5);
    (*pcVar4)(alStack_98);
  }
  else {
    alStack_98[0] = lStack_a0;
    FUN_100e27278();
    func_0x000107c5ed1c(&lStack_a0,uVar2,plVar3);
    if (lStack_a0 == 0x3e9) {
      uVar6 = 6;
      lVar7 = 2;
    }
    else {
      alStack_98[0] = lVar1;
      func_0x000107c5ed1c(&lStack_a0,uVar2,plVar3);
      uVar6 = 0;
      lVar7 = lStack_a0;
    }
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d47268);
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61170(lVar1);
      FUN_100ea9290(lVar7,0,uVar6);
      return;
    }
    uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d47268))[1];
    alStack_98[1] = 0;
    uStack_48 = 1;
    alStack_98[0] = lVar7;
    uStack_88 = uVar6;
    FUN_100eaae54(pcVar4,uVar5);
    FUN_100ea9108(lVar7,0,uVar6);
    (*pcVar4)(alStack_98);
    func_0x000107c61170(lVar1);
    FUN_100ea9290(lVar7,0,uVar6);
    FUN_100ea9290(lVar7,0,uVar6);
  }
  func_0x000100eaa04c(pcVar4,uVar5);
  return;
}



/* Entry: 100eaae54; end: 100eaae63;  */

void FUN_100eaae54(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100eaae64; end: 100eaaeb3;  */

undefined8 FUN_100eaae64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d472a0;
  func_0x0001000285a8(0x112d472a0,&UNK_10d90e488);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eaaeb4; end: 100eaaed3;  */

void FUN_100eaaeb4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100eaaec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100eaaed4; end: 100eaafcf;  */

undefined8 FUN_100eaaed4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d472b0;
  func_0x0001000285a8(0x112d472b0,&UNK_10d90e4a0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eaafd0; end: 100eab007;  */

void FUN_100eaafd0(undefined8 *param_1)

{
  FUN_100ea9214(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9]);
  return;
}



/* Entry: 100eab008; end: 100eab163;  */

undefined8 * FUN_100eab008(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  FUN_100ea908c(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  return param_1;
}



/* Entry: 100eab164; end: 100eab1c7;  */

undefined8 * FUN_100eab164(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  uVar11 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  FUN_100ea9214(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 100eab1c8; end: 100eab2cb;  */

int FUN_100eab1c8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100eab2cc; end: 100eab323;  */

uint FUN_100eab2cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000100eab604(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 100eab324; end: 100eab403;  */

undefined * FUN_100eab324(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  if ((uVar1 >> 0x3d & 1) == 0) {
    puVar4 = PTR_PTR_1126aefd8;
    func_0x000107c61168(PTR_PTR_1126aefd8);
    func_0x000107c5ee20(uVar3,uVar1);
    func_0x000107c5ee20(uVar5,uVar2);
    func_0x000107c3df40(puVar4);
  }
  else {
    func_0x000107c5ee20(uVar3,uVar1 & 0xdfffffffffffffff);
    if (uVar2 >> 0x3c < 0xf) {
      func_0x000107c5ee20(uVar5,uVar2);
    }
    else {
      uVar5 = 0;
    }
    puVar4 = PTR_PTR_1126aefd8;
    func_0x000107c61168(PTR_PTR_1126aefd8);
    func_0x000107c44454();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  return puVar4;
}



/* Entry: 100eab404; end: 100eab91f;  */

void FUN_100eab404(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar3 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar13 = unaff_x20[4];
  uVar11 = unaff_x20[5];
  uVar10 = unaff_x20[6];
  uVar12 = unaff_x20[7];
  uVar5 = unaff_x20[8];
  uVar7 = unaff_x20[9];
  uVar8 = uVar12;
  if ((uVar9 >> 0x3d & 1) == 0) {
    func_0x00010486de80(0);
    func_0x00010006c00c(uVar3,uVar9);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar11);
    func_0x000107c61434();
    func_0x00010486dd30();
    uVar2 = 0;
    if (uVar11 != 0) {
      uVar2 = uVar13 & 0xffffffffffff;
    }
    uVar1 = 0xe000000000000000;
    if (uVar11 != 0) {
      uVar1 = uVar11;
    }
    func_0x000107c61434(uVar11);
    func_0x000107c6142c(uVar1);
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c6142c(uVar11);
      uVar13 = 0;
      uVar11 = 0;
    }
    uVar2 = 0;
    if (uVar12 != 0) {
      uVar2 = uVar10 & 0xffffffffffff;
    }
    uVar1 = 0xe000000000000000;
    if (uVar12 != 0) {
      uVar1 = uVar12;
    }
    func_0x000107c61434(uVar12);
    func_0x000107c6142c(uVar1);
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c6142c(uVar12);
      uVar10 = 0;
      uVar12 = 0;
    }
    func_0x00010486d6b0(0);
    func_0x000107c610f8();
    func_0x00010006c00c(uVar4,uVar6);
  }
  else {
    uVar9 = uVar9 & 0xdfffffffffffffff;
    func_0x00010486de80(0);
    func_0x00010006c00c(uVar3,uVar9);
    FUN_100de78a0(uVar4,uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar12);
    func_0x00010486dd40();
    func_0x00010486d6b0(0);
    func_0x000107c610f8();
  }
  func_0x00010486c668(uVar8,uVar13,uVar11,uVar10,uVar12,uVar5,uVar7,uVar3,uVar9,uVar4,uVar6);
  return;
}



/* Entry: 100eab920; end: 100eab92f;  */

void FUN_100eab920(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 < 3) {
    if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
  }
  else if (((bVar1 != 3) && (bVar1 != 4)) && (bVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 100eab930; end: 100eab9cb;  */

undefined8 * FUN_100eab930(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100ea9108(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100eab9cc; end: 100eaba0f;  */

undefined8 * FUN_100eab9cc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100ea9290(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100eaba10; end: 100eabadf;  */

int FUN_100eaba10(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100eabae0; end: 100eabd43;  */

undefined1  [16] FUN_100eabae0(ulong param_1,long param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  ulong auStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      uStack_60 = 0x454c4941465f5341;
      uStack_58 = 0xea00000000005f44;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      auStack_80[0] = param_1;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uStack_30 = uStack_60;
      uStack_28 = uStack_58;
    }
    else if (param_3 == 1) {
      uStack_30 = 0x5f444947;
      uStack_28 = 0xe400000000000000;
      uStack_40 = 0;
      uStack_38 = 0xe000000000000000;
      puStack_90 = &uStack_40;
      puStack_70 = puStack_90;
      puStack_50 = puStack_90;
      func_0x000104065378(FUN_100eac108,&uStack_60,0x100eac110,auStack_80,0x100eac138,auStack_a0);
      uVar2 = uStack_38;
      func_0x000107c5fb78(uStack_40,uStack_38);
      func_0x000107c6142c(uVar2);
    }
    else {
      uStack_30 = 0x52455f4e49474f4c;
      uStack_28 = 0xeb00000000524f52;
    }
  }
  else if (param_3 < 5) {
    uStack_30 = 0x5f544e554f434341;
    uStack_28 = 0xee0044454b434f4c;
    if (param_3 != 3) {
      uStack_30 = 0xd000000000000012;
      uStack_28 = 0x800000010ef17250;
    }
  }
  else if (param_3 == 5) {
    uStack_30 = 0xd000000000000017;
    uStack_28 = 0x800000010ef17270;
  }
  else {
    uVar1 = param_2 + (ulong)(param_1 >= 2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
      uStack_30 = 0x4e574f4e4b4e55;
      if (param_1 != 0 || param_2 != 0) {
        uStack_30 = 0x505055535f544f4e;
      }
      uStack_28 = 0xe700000000000000;
      if (param_1 != 0 || param_2 != 0) {
        uStack_28 = 0xed0000444554524f;
      }
    }
    else if (param_1 == 2 && param_2 == 0) {
      uStack_30 = 0x45434e41435f5341;
      uStack_28 = 0xec00000044454c4c;
    }
    else if (param_1 == 3 && param_2 == 0) {
      uStack_30 = 0x434e41435f444947;
      uStack_28 = 0xed000044454c4c45;
    }
    else {
      uStack_30 = 0xd000000000000011;
      uStack_28 = 0x800000010ef17290;
    }
  }
  auVar4._8_8_ = uStack_28;
  auVar4._0_8_ = uStack_30;
  return auVar4;
}



/* Entry: 100eabd44; end: 100eabe13;  */

void FUN_100eabd44(long param_1,long param_2,uint param_3)

{
  param_3 = param_3 & 0xff;
  if (param_3 - 2 < 4) {
    FUN_100ea9108();
  }
  else if ((param_3 == 1) ||
          ((param_3 == 6 &&
           ((param_1 == 0 && param_2 == 0 ||
            ((param_1 != 1 || param_2 != 0 && (param_1 == 4 && param_2 == 0)))))))) {
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 100eabe14; end: 100eabe3f;  */

void FUN_100eabe14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100eabe40; end: 100eabecb;  */

void FUN_100eabe40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  uVar1 = param_2[1];
  *param_2 = 0x4f435f524f525245;
  param_2[1] = 0xeb000000005f4544;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100eabecc; end: 100eabf03;  */

void FUN_100eabecc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_1 != -5) {
    return;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_2[1] = 0;
  *param_2 = 3;
  bVar3 = *(byte *)(param_2 + 2);
  *(undefined1 *)(param_2 + 2) = 6;
  if (bVar3 < 3) {
    if (bVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if (bVar3 != 2) {
      return;
    }
  }
  else if (((bVar3 != 3) && (bVar3 != 4)) && (bVar3 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eabf04; end: 100eac107;  */

ulong FUN_100eabf04(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        return (ulong)(param_1 == param_4);
      }
    }
    else if (param_3 == 1) {
      if (param_6 == '\x01') {
        uVar2 = 0;
        func_0x0001007bbbf8(0);
        func_0x000107c60118(param_1,param_4,uVar2);
        return (ulong)((uint)param_1 & 1);
      }
    }
    else if (param_6 == '\x02') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      goto 
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
    }
  }
  else {
    if (param_3 < 5) {
      if (param_3 == 3) {
        if (param_6 != '\x03') {
          return 0;
        }
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 1;
        }
      }
      else {
        if (param_6 != '\x04') {
          return 0;
        }
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 1;
        }
      }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
    if (param_3 == 5) {
      if (param_6 == '\x05') {
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 1;
        }
        goto 
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
      }
    }
    else {
      uVar1 = param_2 + (ulong)(param_1 >= 2);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
        if (param_1 == 0 && param_2 == 0) {
          if ((param_6 == '\x06') && (param_5 == 0 && param_4 == 0)) {
            return 1;
          }
        }
        else if (((param_6 == '\x06') && (param_4 == 1)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 2 && param_2 == 0) {
        if (((param_6 == '\x06') && (param_4 == 2)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 3 && param_2 == 0) {
        if (((param_6 == '\x06') && (param_4 == 3)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x06') && (param_4 == 4)) && (param_5 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 100eac108; end: 100eac167;  */

void FUN_100eac108(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  uVar1 = puVar3[1];
  *puVar3 = 0x4f435f524f525245;
  puVar3[1] = 0xeb000000005f4544;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100eac168; end: 100eacbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100eac168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  long alStack_230 [4];
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 auStack_170 [2];
  undefined8 *puStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  long lStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  
  lStack_1c0 = param_11;
  lStack_1a8 = param_10;
  lStack_1b8 = param_9;
  lVar2 = 0;
  uStack_1d0 = param_8;
  uStack_1c8 = param_2;
  lStack_1b0 = param_7;
  lStack_1a0 = param_3;
  uStack_190 = param_4;
  func_0x000100eb36a0();
  lStack_1e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = (long)alStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1f0 = lVar11;
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x0001000c6560();
  uStack_1f8 = uVar3;
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar6 = uStack_190;
  lVar2 = lStack_1a0;
  lVar7 = lStack_1a8;
  lVar4 = lStack_1b0;
  lVar10 = lStack_1b8;
  *(long *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(long *)(unaff_x20 + 0x40) = lStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = lStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(long *)(unaff_x20 + 0x58) = lStack_1b8;
  *(long *)(unaff_x20 + 0x60) = lStack_1a8;
  func_0x000107c61174();
  lStack_188 = param_1;
  func_0x000107c61174();
  uStack_198 = uVar6;
  func_0x000107c61174();
  uStack_190 = param_5;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = uStack_1d0;
  func_0x000107c61174();
  uVar3 = uStack_1c8;
  func_0x000107c61174();
  uStack_1d0 = uVar3;
  func_0x000107c61174();
  uStack_1c8 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = lStack_1c0;
  func_0x000107c61174();
  lStack_1a0 = lVar5;
  func_0x000100ead440();
  lVar15 = lStack_188;
  lVar12 = _DAT_113093568;
  lVar2 = _DAT_113093560;
  lStack_1b0 = uVar6;
  if (lVar5 == 0) {
    lStack_1e8 = unaff_x20;
    func_0x000107c61428(lStack_188 + _DAT_113093560,&lStack_140,0,0);
    lVar2 = lVar15 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uStack_1d0);
      func_0x000107c61170(uStack_1c8);
      func_0x000107c61170(uStack_198);
      func_0x000107c61170(uStack_190);
      func_0x000107c61170(param_6);
    }
    else {
      uVar3 = *(undefined8 *)(lVar15 + _DAT_113093568);
      func_0x00010486bd10(0);
      lStack_1b8 = lVar4;
      func_0x000107c61174(uVar3);
      uVar6 = uVar3;
      func_0x00010486bac0();
      func_0x000107c41bec(lVar2);
      func_0x000107c61170(lVar15);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uStack_1d0);
      func_0x000107c61170(uStack_1c8);
      func_0x000107c61170(uStack_198);
      func_0x000107c61170(uStack_190);
      func_0x000107c61170(param_6);
      lVar4 = lStack_1b8;
    }
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lStack_1b0);
    func_0x000107c61170(lStack_1a0);
  }
  else {
    uVar6 = *(undefined8 *)(lStack_188 + _DAT_113093568);
    lStack_1d8 = lVar7;
    lStack_1c0 = param_6;
    lStack_1a8 = lVar5;
    func_0x000107c61174();
    lStack_1b8 = lVar4;
    func_0x000107c4c038();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar10 + _DAT_112d48350);
    lVar7 = 0;
    lStack_200 = lVar10;
    FUN_100ea8d80();
    lVar2 = lVar7;
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(lVar2 + 0x10) = uVar6;
    puVar8 = PTR_PTR_1126a5ea8;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    *(undefined **)(lVar2 + 0x18) = puVar8;
    *(long *)(lVar2 + 0x20) = lVar4;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    uVar9 = *(undefined8 *)(lVar15 + lVar12);
    func_0x000107c61174(uVar9);
    uVar6 = uStack_198;
    uVar3 = uStack_198;
    func_0x000107c4ec80();
    func_0x000107c61180();
    ppuStack_c8 = &PTR_DAT_110360d08;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    puStack_160 = &uStack_c0;
    lStack_128 = lStack_1a8;
    plStack_118 = alStack_e8;
    lStack_1e0 = lVar2;
    puStack_130 = puStack_160;
    lStack_120 = uVar3;
    alStack_e8[0] = lVar2;
    lStack_d0 = lVar7;
    func_0x000107c6157c(lVar2);
    func_0x00010486ddec(0x100ead568,&lStack_140,0x100ead574,auStack_170);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x0001000834e4(alStack_e8);
    lVar2 = lStack_188;
    if (lStack_a8 == 0) {
      func_0x000100ead5d8(&uStack_c0,0x112d472b8,&UNK_10d90e590);
      lVar4 = _DAT_113093560;
      lVar10 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61428(lVar10 + _DAT_113093560,&lStack_140,0,0);
      lVar10 = lVar10 + lVar4;
      func_0x000107c61618();
      if (lVar10 == 0) {
        func_0x000107c61170(lStack_200);
      }
      else {
        uVar9 = *(undefined8 *)(lVar2 + lVar12);
        func_0x00010486bd10(0);
        func_0x000107c61174(uVar9);
        uVar3 = uVar9;
        func_0x00010486bac0();
        func_0x000107c41bec(lVar10);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar3);
        lVar2 = lStack_200;
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lStack_1d8);
      func_0x000107c61170(uStack_1d0);
      func_0x000107c61170(uStack_1c8);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uStack_190);
      func_0x000107c61170(lStack_1c0);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(lStack_1b0);
      func_0x000107c61170(lStack_1a0);
      func_0x000107c61170(lStack_1a8);
      func_0x000107c61574(lStack_1e0);
      lStack_1e8 = unaff_x20;
    }
    else {
      func_0x000100ead57c(&uStack_c0,auStack_90);
      lVar2 = lStack_1c0;
      func_0x000107c4ac74();
      func_0x000107c61180();
      uVar6 = uStack_190;
      alStack_230[2] = lVar2;
      func_0x000107c4ec80();
      func_0x000107c61180();
      lVar12 = lStack_1e0;
      lVar15 = *(long *)(unaff_x20 + 0x10);
      lStack_210 = _DAT_113093568;
      uVar9 = *(undefined8 *)(lVar15 + _DAT_113093568);
      alStack_230[3] = *(undefined8 *)(lVar15 + _DAT_113093578);
      ppuStack_c8 = &PTR_DAT_110360d08;
      alStack_e8[0] = lStack_1e0;
      lVar10 = 0;
      lStack_d0 = lVar7;
      FUN_100eb1928();
      func_0x000107c613fc();
      func_0x0001000c6518(alStack_e8,lVar7);
      lStack_208 = lVar11;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      puVar14 = (undefined8 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar14);
      auStack_170[0] = *puVar14;
      ppuStack_150 = &PTR_DAT_110360d08;
      lStack_158 = lVar7;
      FUN_100ead594(auStack_90,lVar10 + _DAT_112d47450);
      *(long *)(lVar10 + _DAT_112d47458) = lVar2;
      *(undefined8 *)(lVar10 + _DAT_112d47460) = uVar6;
      FUN_100ead594(auStack_170,lVar10 + _DAT_112d47468);
      lVar2 = alStack_230[3];
      *(undefined8 *)(lVar10 + _DAT_112d47470) = uVar9;
      *(long *)(lVar10 + _DAT_112d47478) = alStack_230[3];
      uVar3 = 0;
      FUN_100eb2860(0);
      lVar10 = lStack_1f0;
      func_0x000107c6159c(lStack_1f0,uVar3,8);
      plVar13 = (long *)(lVar10 + *(int *)(lStack_1e8 + 0x14));
      alStack_230[1] = 0x3000000000000000;
      alStack_230[0] = 0;
      plVar13[1] = 0x3000000000000000;
      *plVar13 = 0;
      plVar13[3] = 0;
      plVar13[2] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[9] = 0;
      plVar13[8] = 0;
      plStack_118 = (long *)plVar13[5];
      lStack_120 = plVar13[4];
      lStack_108 = plVar13[7];
      lStack_110 = plVar13[6];
      lStack_f8 = plVar13[9];
      lStack_100 = plVar13[8];
      lStack_138 = plVar13[1];
      lStack_140 = *plVar13;
      lStack_128 = plVar13[3];
      puStack_130 = (undefined8 *)plVar13[2];
      lStack_1e8 = unaff_x20;
      func_0x000107c61580(lVar12,2);
      func_0x000107c61174(uVar9);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(uVar9);
      func_0x000107c61174(lVar2);
      lVar4 = alStack_230[2];
      func_0x000107c61174(alStack_230[2]);
      func_0x000107c61174(uVar6);
      func_0x000100ead5d8(&lStack_140,0x112d472c0,&UNK_10d90e810);
      plVar13[1] = alStack_230[1];
      *plVar13 = alStack_230[0];
      plVar13[3] = 0;
      plVar13[2] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[9] = 0;
      plVar13[8] = 0;
      func_0x000103dbf4dc();
      func_0x000107c61574(lVar12);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar2);
      func_0x0001000834e4(auStack_170);
      func_0x0001000834e4(alStack_e8);
      lVar2 = lStack_188;
      lVar12 = _DAT_113093560;
      uVar9 = *(undefined8 *)(lVar15 + _DAT_113093570);
      func_0x000107c61428(lStack_188 + _DAT_113093560,alStack_e8,0,0);
      lVar2 = lVar2 + lVar12;
      func_0x000107c61618();
      uVar6 = *(undefined8 *)(lVar15 + lStack_210);
      uVar3 = *(undefined8 *)(lStack_1d8 + _DAT_112f60f00);
      lStack_208 = uVar9;
      lStack_1f0 = lVar2;
      func_0x000107c615f0(uVar9);
      func_0x000107c61174();
      lStack_210 = uVar6;
      func_0x000107c61174();
      lVar2 = lStack_1a0;
      alStack_230[3] = uVar3;
      func_0x000107c3fa04();
      func_0x000107c61180();
      alStack_230[2] = lVar2;
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100eacc00);
        (*pcVar1)();
      }
      lVar11 = 0;
      FUN_100eaf394();
      lVar5 = lVar11;
      func_0x000107c610f8();
      lVar2 = _DAT_112d473c8;
      func_0x000107c613fc(uStack_1f8,0x20,7);
      lVar12 = lVar10;
      alStack_230[0] = lVar10;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(long *)(lVar5 + lVar2) = lVar12;
      *(undefined8 *)(lVar5 + _DAT_112d47410) = 0;
      lVar2 = _DAT_112d47418;
      func_0x000107c61614(lVar5 + _DAT_112d47418,0);
      lVar15 = lStack_1a8;
      uVar3 = uStack_1c8;
      uVar6 = uStack_1d0;
      lVar7 = lStack_208;
      *(undefined8 *)(lVar5 + _DAT_112d47420) = 0;
      *(long *)(lVar5 + _DAT_112d473d0) = lVar10;
      *(undefined8 *)(lVar5 + _DAT_112d473d8) = uStack_1d0;
      *(undefined8 *)(lVar5 + _DAT_112d473e0) = uStack_1c8;
      *(long *)(lVar5 + _DAT_112d473e8) = lStack_1a8;
      *(long *)(lVar5 + _DAT_112d473f0) = lStack_208;
      func_0x000107c61604(lVar5 + lVar2,lStack_1f0);
      lVar4 = lStack_210;
      lVar10 = alStack_230[3];
      lVar12 = alStack_230[2];
      *(long *)(lVar5 + _DAT_112d473f8) = lStack_210;
      *(long *)(lVar5 + _DAT_112d47400) = alStack_230[3];
      *(long *)(lVar5 + _DAT_112d47408) = alStack_230[2];
      puVar8 = PTR_s_init_1125d9248;
      lStack_180 = lVar5;
      lStack_178 = lVar11;
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar3);
      func_0x000107c615f0(lVar7);
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar10);
      lVar2 = alStack_230[0];
      func_0x000107c6157c(alStack_230[0]);
      func_0x000107c61174(lVar15);
      func_0x000107c615f0(lVar12);
      plVar13 = &lStack_180;
      func_0x000107c61154(plVar13,puVar8);
      func_0x000107c61574(lStack_1e0);
      func_0x000107c61170(uStack_198);
      func_0x000107c61170(uStack_190);
      func_0x000107c61170(lStack_1c0);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(lStack_1b0);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lStack_200);
      func_0x000107c61170(lStack_1a0);
      func_0x000107c61578(lVar2,2);
      func_0x000107c61170(lVar15);
      func_0x000107c615e8(lStack_208);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(lStack_188);
      func_0x000107c61170(lStack_1d8);
      func_0x000107c615e8(lStack_1f0);
      func_0x0001000834e4(auStack_90);
      uVar6 = *(undefined8 *)(lStack_1e8 + 0x70);
      *(long **)(lStack_1e8 + 0x70) = plVar13;
      func_0x000107c61170(uVar6);
    }
  }
  return lStack_1e8;
}



/* Entry: 100eacc00; end: 100eacd27;  */

/* WARNING: Possible PIC construction at 0x000100eacc6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eacc70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eacc00(void)

{
  char *pcVar1;
  long unaff_x20;
  code *pcVar2;
  
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    pcVar2 = *(code **)(**(long **)(*(long *)(unaff_x20 + 0x70) + _DAT_112d473d0) + 0x98);
    func_0x000107c61174();
    (*pcVar2)();
    pcVar1 = "run(state:)";
    func_0x0001000c10c0("run(state:)");
    func_0x000107c61180();
    func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
    return;
  }
  return;
}



/* Entry: 100eacd28; end: 100eacdc3;  */

void FUN_100eacd28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100eacdc4; end: 100eacde3;  */

void FUN_100eacdc4(void)

{
  FUN_100eacc00();
  return;
}



/* Entry: 100eacde4; end: 100eacdeb;  */

undefined8 FUN_100eacde4(void)

{
  return 0;
}



/* Entry: 100eacdec; end: 100ead1e7;  */

undefined * FUN_100eacdec(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_b8;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar15 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar15;
    uVar15 = -uVar15;
    uVar8 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar8 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar8 = uVar8 & *puVar12;
    puVar7 = param_1;
    func_0x000107c61434();
    lVar13 = 0;
  }
  else {
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar7 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x000100ead690(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar7,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    lVar13 = lStack_70;
    uVar8 = uStack_68;
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_100eaced4:
  lVar2 = lVar13;
  uVar15 = uVar8;
  if (-1 < (long)param_1) goto joined_r0x000100eacf10;
  while (func_0x000107c602ac(), puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    puStack_90 = puVar7;
    func_0x000100ead690(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
    uVar15 = uVar8;
    lVar2 = lVar13;
    lVar16 = lVar13;
    puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    puVar10 = puStack_58;
    while( true ) {
      lVar13 = lVar2;
      PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
      if (puVar10 == (undefined *)0x0) goto LAB_100ead1a0;
      func_0x000107c61168(puVar7);
      puVar14 = puVar10;
      func_0x000107c6148c(puVar10,puVar7);
      if (puVar14 == (undefined *)0x0) {
        func_0x000107c61170();
        puVar7 = puVar10;
      }
      else {
        func_0x000107c5e408();
        func_0x000107c61180();
        uVar5 = 0;
        func_0x000100ead690(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar7 = puVar14;
        func_0x000107c5fc54(puVar14,uVar5);
        func_0x000107c61170(puVar14);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar14 = puVar7;
          }
          func_0x000107c60480();
        }
        if (puVar14 != (undefined *)0x0) {
          uVar15 = 0;
          do {
            if (((ulong)puVar7 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100ead1e4);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(puVar7 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar15;
              FUN_100de9de8(uVar15,puVar7);
            }
            puVar1 = (undefined *)(uVar15 + 1);
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100ead1e0);
              (*pcVar3)();
            }
            uVar9 = uVar6;
            func_0x000107c49f64();
            if ((int)uVar9 != 0) {
              func_0x000107c61170(puVar10);
              func_0x000107c6142c(puVar7);
              puVar7 = puStack_b8;
              func_0x000107c61550();
              if (((((ulong)puVar7 & 1) == 0) || ((long)puStack_b8 < 0)) ||
                 (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
                if ((ulong)puStack_b8 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puStack_b8) {
                    puVar10 = puStack_b8;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar7 = (undefined *)0x0;
                FUN_100dea1c8(0,puVar10 + 1,1,puStack_b8);
                puStack_b8 = puVar7;
              }
              uVar9 = (ulong)puStack_b8 & 0xffffffffffffff8;
              uVar15 = *(ulong *)(uVar9 + 0x10);
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_100dea1c8(puVar7,uVar15 + 1,1,puStack_b8);
                uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
                puStack_b8 = puVar7;
              }
              *(ulong *)(uVar9 + 0x10) = uVar15 + 1;
              *(ulong *)(uVar9 + uVar15 * 8 + 0x20) = uVar6;
              goto LAB_100eaced4;
            }
            func_0x000107c61170(uVar6);
            uVar15 = uVar15 + 1;
          } while (puVar1 != puVar14);
        }
        func_0x000107c61170(puVar10);
        func_0x000107c6142c();
      }
      lVar2 = lVar13;
      uVar15 = uVar8;
      if ((long)param_1 < 0) break;
joined_r0x000100eacf10:
      while (uVar8 == 0) {
        lVar16 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ead1e8);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar16) {
          uVar8 = 0;
          goto LAB_100ead19c;
        }
        lVar2 = lVar16;
        uVar8 = puVar12[lVar16];
      }
      uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      lVar16 = lVar13;
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
  }
LAB_100ead19c:
  puStack_58 = (undefined *)0x0;
  uVar15 = uVar8;
  lVar16 = lVar13;
LAB_100ead1a0:
  FUN_100deaf38(param_1,puVar12,uVar11,lVar16,uVar15);
  return puStack_b8;
}



/* Entry: 100ead1e8; end: 100ead3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ead1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar6;
  undefined8 *puVar7;
  long alStack_e0 [6];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined8 auStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long *aplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  FUN_100ead594(param_4,aplStack_78);
  func_0x0001000c6518(aplStack_78,lStack_60);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_60 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar6 = *puVar7;
  lVar2 = 0;
  FUN_100ea8d80();
  ppuStack_80 = &PTR_DAT_110360d08;
  lVar3 = 0;
  auStack_a0[0] = uVar6;
  lStack_88 = lVar2;
  FUN_100ea99b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_a0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  alStack_e0[3] = *puVar7;
  ppuStack_a8 = &PTR_DAT_110360d08;
  puVar7 = (undefined8 *)(lVar4 + _DAT_112d47268);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)(lVar4 + _DAT_112d47270);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d47250) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d47258) = param_3;
  lStack_b0 = lVar2;
  FUN_100ead594(alStack_e0 + 3,lVar4 + _DAT_112d47260);
  puVar1 = PTR_s_init_1125d9248;
  alStack_e0[1] = lVar4;
  alStack_e0[2] = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar5 = alStack_e0 + 1;
  func_0x000107c61154(plVar5,puVar1);
  func_0x0001000834e4(alStack_e0 + 3);
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(aplStack_78);
  ppuStack_58 = &PTR_DAT_1103611f8;
  aplStack_78[0] = plVar5;
  lStack_60 = lVar3;
  FUN_100ead640(aplStack_78,param_1);
  return;
}



/* Entry: 100ead3c0; end: 100ead567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ead3c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_58 [3];
  long lStack_40;
  undefined **ppuStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_1130525f0);
  lVar1 = 0;
  func_0x000100eb7698();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  ppuStack_38 = &PTR_DAT_1103623f8;
  alStack_58[0] = lVar2;
  lStack_40 = lVar1;
  func_0x000107c615f0(uVar3);
  FUN_100ead640(alStack_58,param_1);
  return;
}



/* Entry: 100ead568; end: 100ead593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ead568(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_e0 [6];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined8 auStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long *aplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100ead594(*(undefined8 *)(unaff_x20 + 0x28),aplStack_78);
  func_0x0001000c6518(aplStack_78,lStack_60);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_60 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uVar9 = *puVar10;
  lVar5 = 0;
  FUN_100ea8d80();
  ppuStack_80 = &PTR_DAT_110360d08;
  lVar6 = 0;
  auStack_a0[0] = uVar9;
  lStack_88 = lVar5;
  FUN_100ea99b0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_a0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar10);
  alStack_e0[3] = *puVar10;
  ppuStack_a8 = &PTR_DAT_110360d08;
  puVar10 = (undefined8 *)(lVar7 + _DAT_112d47268);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar7 + _DAT_112d47270);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112d47250) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d47258) = uVar2;
  lStack_b0 = lVar5;
  FUN_100ead594(alStack_e0 + 3,lVar7 + _DAT_112d47260);
  puVar4 = PTR_s_init_1125d9248;
  alStack_e0[1] = lVar7;
  alStack_e0[2] = lVar6;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  plVar8 = alStack_e0 + 1;
  func_0x000107c61154(plVar8,puVar4);
  func_0x0001000834e4(alStack_e0 + 3);
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(aplStack_78);
  ppuStack_58 = &PTR_DAT_1103611f8;
  aplStack_78[0] = plVar8;
  lStack_60 = lVar6;
  FUN_100ead640(aplStack_78,uVar1);
  return;
}



/* Entry: 100ead594; end: 100ead617;  */

long FUN_100ead594(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ead618; end: 100ead61f;  */

void FUN_100ead618(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100eadacc(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100ead620; end: 100ead63f;  */

void FUN_100ead620(void)

{
  func_0x000107c61168(&PTR_PTR_112d47308);
  return;
}



/* Entry: 100ead640; end: 100ead6cf;  */

undefined8 FUN_100ead640(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d472b8;
  func_0x0001000285a8(0x112d472b8,&UNK_10d90e590);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ead6d0; end: 100ead733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ead6d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d47420;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47420);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100ead734();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100ead734; end: 100ead993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ead734(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = 0;
  func_0x000100eb7b7c();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c550d8(uVar1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112d473e8);
  func_0x000107c3d89c(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 9;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  uVar6 = uVar1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c4acb0(uVar8);
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar6 = uVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c5cbe4(uVar8);
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar6 = uVar1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c5ce8c(uVar8);
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  uVar6 = uVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(puVar3 + 0x38) = uVar4;
  uVar6 = 0;
  FUN_100eaf964(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar7);
  return uVar1;
}



/* Entry: 100ead994; end: 100eada6f;  */

/* WARNING: Possible PIC construction at 0x000100ead9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ead9dc) */

void FUN_100ead994(void)

{
  char *pcVar1;
  
  pcVar1 = "run(state:)";
  func_0x0001000c10c0("run(state:)");
  func_0x000107c61180();
  func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
  return;
}



/* Entry: 100eada70; end: 100eadacb;  */

void FUN_100eada70(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100eadacc(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100eadacc; end: 100eadd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eadacc(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100eb2860();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = (undefined8 *)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100eaf9f0(param_1,puVar5);
  puVar6 = puVar5;
  func_0x000107c614c4(puVar5,lVar4);
  iVar2 = (int)puVar6;
  if (iVar2 < 5) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar7 = *puVar5;
        FUN_100ead6d0();
        func_0x000107c550d8();
        func_0x000107c61170(puVar6);
        puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112d473f0);
        FUN_10129f6cc(0);
        func_0x000107c610f8();
        func_0x000107c615f0(puVar6);
        func_0x000107c61174(uVar7);
        func_0x000107c61174();
        func_0x00010129f608(puVar6);
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d473d8));
        func_0x000107c61170(uVar7);
      }
      else {
        if (iVar2 != 1) goto LAB_100eadc38;
        puVar6 = (undefined8 *)*puVar5;
        FUN_100eadd6c(puVar6);
      }
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          (**(code **)(lVar10 + 0x20))(puVar9,puVar5,lVar3);
          FUN_100eae0a8(puVar9);
          (**(code **)(lVar10 + 8))(puVar9,lVar3);
          return;
        }
        goto LAB_100eadc38;
      }
      func_0x000100eafa34(puVar5,FUN_100eb2860);
      puVar6 = puVar5;
LAB_100eadd18:
      FUN_100ead6d0();
      func_0x000107c550d8();
    }
LAB_100eadd2c:
    func_0x000107c61170(puVar6);
  }
  else {
    if (iVar2 < 7) {
      if (iVar2 == 5) {
        puVar6 = (undefined8 *)*puVar5;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        func_0x000100eae478(puVar6,uVar7,uVar8);
        func_0x00010006c090(uVar7,uVar8);
        goto LAB_100eadd2c;
      }
      if (iVar2 == 6) {
        uVar7 = *puVar5;
        uVar8 = puVar5[1];
        uVar1 = *(undefined1 *)(puVar5 + 2);
        func_0x000100eae62c(uVar7,uVar8,uVar1);
        FUN_100ea9290(uVar7,uVar8,uVar1);
        return;
      }
    }
    else {
      if (iVar2 == 7) {
        uVar7 = *puVar5;
        uVar8 = puVar5[1];
        FUN_100eae750(uVar7,uVar8);
        func_0x000100eaf8c8(uVar7,uVar8);
        return;
      }
      if (iVar2 == 10) goto LAB_100eadd18;
    }
LAB_100eadc38:
    func_0x000100eafa34(puVar5,FUN_100eb2860);
  }
  return;
}



/* Entry: 100eadd6c; end: 100eae0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eadd6c(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar3 = param_1;
  FUN_100ead6d0();
  func_0x000107c550d8();
  func_0x000107c61170();
  func_0x000108b9a8ac();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100eae0a4);
    (*pcVar2)();
  }
  puVar4 = &UNK_1103613e0;
  func_0x000107c613fc(&UNK_1103613e0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110361458;
  func_0x000107c613fc(&UNK_110361458,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100eaf900;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_110361470;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c6157c(puVar4);
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  puVar5 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574();
  func_0x000108b9a87c();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar4 = &UNK_1103613e0;
    func_0x000107c613fc(&UNK_1103613e0,0x18,7);
    lVar11 = unaff_x20;
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_80 = FUN_100eaf908;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_110361498;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(puVar4);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_78;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c4cd90();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170();
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 5;
    *(undefined8 *)(param_1 + 0x10) = 2;
    *(undefined **)(param_1 + 0x20) = puVar8;
    *(undefined **)(param_1 + 0x28) = puVar7;
    puVar4 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar7);
    func_0x000107c5fadc(lVar3,lVar11);
    func_0x000107c6142c(lVar11);
    uVar10 = 0;
    FUN_100eaf964(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar11 = param_1;
    func_0x000107c5fc48(param_1,uVar10);
    func_0x000107c61574(param_1);
    func_0x000107c48d50(puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar11);
    func_0x000107c59bc8(puVar4);
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d473f0));
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eae0a8);
  (*pcVar2)();
}



/* Entry: 100eae0a8; end: 100eae477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eae0a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long alStack_e0 [7];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a0 = param_1;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  lVar16 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)&uStack_a0 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar12 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar12 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar14 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12_00;
  FUN_100ead6d0();
  func_0x000107c550d8();
  func_0x000107c61170(lVar2);
  pcVar11 = *(code **)(lVar10 + 0x38);
  (*pcVar11)(lVar17,1,1,lVar1);
  (*pcVar11)(lVar12,1,1,lVar1);
  lVar2 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar19,1,1,lVar2);
  *(undefined1 *)(lVar13 + -8) = 0;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  *(undefined8 *)(lVar13 + -0x18) = 0;
  *(undefined8 *)(lVar13 + -0x20) = 0;
  *(undefined8 *)(lVar13 + -0x28) = 0;
  *(undefined8 *)(lVar13 + -0x30) = 0;
  *(undefined8 *)(lVar13 + -0x38) = 0;
  *(long *)(lVar13 + -0x40) = lVar19;
  func_0x000104638e24(lVar13,2,lVar17,0,lVar12,0,0,0,0);
  puVar3 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000107c43bf4();
  func_0x000107c61180();
  (**(code **)(lVar10 + 0x10))(lVar15,uStack_a0,lVar1);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar18 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110361548;
  func_0x000107c613fc(&UNK_110361548,uVar18 + lVar16,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar18,lVar15,lVar1);
  pcStack_70 = FUN_100eaf9a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e38b5c;
  puStack_78 = &UNK_110361560;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_68);
  pcVar7 = "showWebBrowsing(_:)";
  func_0x0001000c10c0("showWebBrowsing(_:)");
  func_0x000107c61180();
  func_0x000107c5dc68(puVar4);
  func_0x000107c615e8(pcVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar4);
  uVar8 = 0;
  func_0x0001000956f0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_100eaf9f0(lVar13,lVar14,&SUB_104638d5c);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar14);
  lVar2 = lVar14;
  func_0x000103c5d254();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar14);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d473e0));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000100eafa34(lVar13,&SUB_104638d5c);
  return;
}



/* Entry: 100eae478; end: 100eae74f;  */

/* WARNING: Possible PIC construction at 0x000100eae4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eae508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eae560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eae5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eae604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eae5f8) */
/* WARNING: Removing unreachable block (ram,0x000100eae564) */
/* WARNING: Removing unreachable block (ram,0x000100eae580) */
/* WARNING: Removing unreachable block (ram,0x000100eae5a8) */
/* WARNING: Removing unreachable block (ram,0x000100eae5c0) */
/* WARNING: Removing unreachable block (ram,0x000100eae50c) */
/* WARNING: Removing unreachable block (ram,0x000100eae520) */
/* WARNING: Removing unreachable block (ram,0x000100eae4b8) */
/* WARNING: Removing unreachable block (ram,0x000100eae608) */
/* WARNING: Removing unreachable block (ram,0x000100eae60c) */

void FUN_100eae478(undefined8 param_1)

{
  FUN_100ead6d0();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eae750; end: 100eaea13;  */

/* WARNING: Possible PIC construction at 0x000100eae77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eae780) */
/* WARNING: Removing unreachable block (ram,0x000100eae7fc) */
/* WARNING: Removing unreachable block (ram,0x000100eae794) */

void FUN_100eae750(undefined8 param_1)

{
  FUN_100ead6d0();
  func_0x000107c4ff34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eaea14; end: 100eaedbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaea14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = param_1;
  func_0x000108b9a8c4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar12 = &UNK_1103613e0;
    puVar4 = puVar12;
    func_0x000107c613fc(&UNK_1103613e0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_80 = FUN_100eafa70;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_110361588;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c6157c(puVar4);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    puVar1 = puStack_78;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar1);
    puVar4 = PTR_PTR_1126b17e8;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c475fc();
    func_0x000107c61170(param_1);
    puVar7 = puVar4;
    func_0x000107c4e820();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170();
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 3;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    func_0x000107c61174();
    puVar9 = puVar4;
    func_0x000107c4e828(puVar4);
    func_0x000107c61180();
    puVar1 = PTR___sSSN_11034da80;
    puVar10 = puVar9;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar9);
    puVar9 = puVar4;
    func_0x000107c5d804();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar9);
    func_0x000107c613fc(&UNK_1103613e0,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    puVar9 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c6157c(puVar12);
    func_0x000107c5fadc(puVar8,param_2);
    func_0x000107c6142c(param_2);
    uVar13 = 0;
    FUN_100eaf964(0,0x112d360a8,&PTR_PTR_1126aed70);
    puVar14 = puVar7;
    func_0x000107c5fc48(puVar7,uVar13);
    func_0x000107c61574(puVar7);
    puVar7 = puVar10;
    func_0x000107c5fc48(puVar10,puVar1);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar11;
    func_0x000107c5fc48(puVar11,puVar1);
    func_0x000107c6142c(puVar11);
    pcStack_80 = FUN_100eafa98;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100e39198;
    puStack_88 = &UNK_1103615b0;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar12;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    func_0x000107c46ddc(puVar9);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c59bc8(puVar9);
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d473f0));
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eaedc0);
  (*pcVar2)();
}



/* Entry: 100eaedc0; end: 100eaee9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaedc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d473f0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    ppuVar2 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    lStack_60 = param_2;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_60;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 100eaeea0; end: 100eaef7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaeea0(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + _DAT_112d473d0);
    func_0x000107c6157c(plVar3);
    func_0x000107c61170(param_1);
    func_0x000107c6159c(puVar2,lVar1,8);
    (**(code **)(*plVar3 + 0xb0))(puVar2);
    func_0x000107c61574(plVar3);
    func_0x000100eafa34(puVar2,FUN_100eb20b0);
  }
  return;
}



/* Entry: 100eaef80; end: 100eaf0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100eaef80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112d473f0);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar9 + 0x10))(auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_1103615e8;
    func_0x000107c613fc(&UNK_1103615e8,uVar8 + lVar7,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = param_2;
    (**(code **)(lVar9 + 0x20))
              (puVar3 + uVar8,auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar1);
    pcStack_78 = FUN_100eafaa0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000b0c7c;
    puStack_80 = &UNK_110361600;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar6);
  }
  return 1;
}



/* Entry: 100eaf100; end: 100eaf20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf100(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + _DAT_112d473d0);
    func_0x000107c6157c(plVar4);
    func_0x000107c61170(param_1);
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_2,lVar2);
    func_0x000107c6159c(puVar3,lVar1,4);
    (**(code **)(*plVar4 + 0xb0))(puVar3);
    func_0x000107c61574(plVar4);
    func_0x000100eafa34(puVar3,FUN_100eb20b0);
  }
  return;
}



/* Entry: 100eaf20c; end: 100eaf25b;  */

void FUN_100eaf20c(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100eaf25c; end: 100eaf2bb; -[_TtC12OAuthFeature18OAuthFeatureRouter init] */

void FUN_100eaf25c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OAuthFeature.OAuthFeatureRouter",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eaf288);
  (*pcVar1)();
}



/* Entry: 100eaf2bc; end: 100eaf393; -[_TtC12OAuthFeature18OAuthFeatureRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100eaf2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eaf318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eaf338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eaf368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eaf33c) */
/* WARNING: Removing unreachable block (ram,0x000100eaf31c) */
/* WARNING: Removing unreachable block (ram,0x000100eaf2fc) */
/* WARNING: Removing unreachable block (ram,0x000100eaf36c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf2bc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d473c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d473d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d473d8));
  return;
}



/* Entry: 100eaf394; end: 100eaf3b3;  */

void FUN_100eaf394(void)

{
  func_0x000107c61168(&PTR_PTR_11279d2a8);
  return;
}


