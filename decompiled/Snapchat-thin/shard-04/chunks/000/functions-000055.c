/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10304e2e0; end: 10304e3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304e2e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112f35b90);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    uStack_70 = uVar4;
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    func_0x0001007d6d78(&uStack_70);
    func_0x000107c61574(uVar3);
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,&uStack_70,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10304e3c8; end: 10304e453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304e3c8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *param_1;
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar5 + _DAT_113077248);
    puVar2 = (undefined8 *)(lVar5 + _DAT_113077250);
    FUN_10304a9a0(*puVar1,puVar1[1],*puVar2,puVar2[1],uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10304e454; end: 10304e5cf;  */

void FUN_10304e454(void)

{
  undefined8 in_x4;
  long unaff_x20;
  
  FUN_10304afa8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),in_x4);
  return;
}



/* Entry: 10304e5d0; end: 10304e607;  */

void FUN_10304e5d0(void)

{
  FUN_10304e608(&DAT_112f35be8);
  return;
}



/* Entry: 10304e608; end: 10304e6a7;  */

void FUN_10304e608(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *param_1;
  func_0x000107c61428(lVar1 + lVar7,auStack_68,0x21,0);
  uVar5 = *(undefined8 *)(lVar1 + lVar7);
  func_0x000107c61558(uVar5);
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined8 *)(lVar1 + lVar7) = 0x8000000000000000;
  FUN_10304cc34(uVar4,uVar3,uVar2,uVar5);
  *(undefined8 *)(lVar1 + lVar7) = uVar6;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 10304e6a8; end: 10304e6c7;  */

void FUN_10304e6a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1a18);
  return;
}



/* Entry: 10304e6c8; end: 10304e6d7;  */

undefined1  [16] FUN_10304e6c8(void)

{
  return ZEXT816(0x1106010d0);
}



/* Entry: 10304e6d8; end: 10304e753;  */

long FUN_10304e6d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10304e754; end: 10304e80f;  */

undefined4 * FUN_10304e754(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  return param_1;
}



/* Entry: 10304e810; end: 10304e953;  */

undefined1 * FUN_10304e810(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[0x78] = param_2[0x78];
  return param_1;
}



/* Entry: 10304e954; end: 10304ea27;  */

undefined1 * FUN_10304e954(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  func_0x000107c61170(uVar1);
  param_1[0x78] = param_2[0x78];
  return param_1;
}



/* Entry: 10304ea28; end: 10304eaf3;  */

int FUN_10304ea28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10304eaf4; end: 10304eb37;  */

void FUN_10304eaf4(long param_1,long *param_2,long param_3)

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



/* Entry: 10304eb38; end: 10304eb3b;  */

void FUN_10304eb38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e07c;
  func_0x000107c61520(&UNK_10db7e07c,&UNK_1106010d0);
  puRam0000000112f35d98 = puVar1;
  return;
}



/* Entry: 10304eb3c; end: 10304eb7b;  */

void FUN_10304eb3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e07c;
  func_0x000107c61520(&UNK_10db7e07c,&UNK_1106010d0);
  puRam0000000112f35d98 = puVar1;
  return;
}



/* Entry: 10304eb7c; end: 10304eb7f;  */

void FUN_10304eb7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e04c;
  func_0x000107c61520(&UNK_10db7e04c,&UNK_1106010d0);
  puRam0000000112f35da0 = puVar1;
  return;
}



/* Entry: 10304eb80; end: 10304ebbf;  */

void FUN_10304eb80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e04c;
  func_0x000107c61520(&UNK_10db7e04c,&UNK_1106010d0);
  puRam0000000112f35da0 = puVar1;
  return;
}



/* Entry: 10304ebc0; end: 10304ebc3;  */

void FUN_10304ebc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e16c;
  func_0x000107c61520(&UNK_10db7e16c,&UNK_1106010d0);
  puRam0000000112f35da8 = puVar1;
  return;
}



/* Entry: 10304ebc4; end: 10304ec03;  */

void FUN_10304ebc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e16c;
  func_0x000107c61520(&UNK_10db7e16c,&UNK_1106010d0);
  puRam0000000112f35da8 = puVar1;
  return;
}



/* Entry: 10304ec04; end: 10304ec07;  */

void FUN_10304ec04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e0a4;
  func_0x000107c61520(&UNK_10db7e0a4,&UNK_1106010d0);
  puRam0000000112f35db0 = puVar1;
  return;
}



/* Entry: 10304ec08; end: 10304ec73;  */

void FUN_10304ec08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e0a4;
  func_0x000107c61520(&UNK_10db7e0a4,&UNK_1106010d0);
  puRam0000000112f35db0 = puVar1;
  return;
}



/* Entry: 10304ec74; end: 10304ecb3;  */

undefined8 FUN_10304ec74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10304ecb4; end: 10304eccf;  */

/* WARNING: Removing unreachable block (ram,0x000103048468) */
/* WARNING: Removing unreachable block (ram,0x000103047fc4) */
/* WARNING: Removing unreachable block (ram,0x000103048da8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ecb4(undefined8 param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  code cVar7;
  code *pcVar8;
  bool bVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  undefined *puVar13;
  code *pcVar14;
  byte *pbVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  code *pcVar24;
  code *pcVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code **ppcVar29;
  code *pcVar30;
  code *pcVar31;
  ulong uVar32;
  long *plVar33;
  uint uVar34;
  ulong uVar35;
  undefined *puVar36;
  ulong uVar37;
  ulong uVar38;
  code *pcVar39;
  ulong uVar40;
  code *pcVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  code *pcVar44;
  long lVar45;
  long unaff_x20;
  code *pcVar46;
  code *pcVar47;
  code *pcVar48;
  code *pcVar49;
  undefined1 *puVar50;
  code *pcVar51;
  code *pcVar52;
  code *pcVar53;
  code *pcStack_198;
  code *pcStack_168;
  code *pcStack_160;
  code *pcStack_150;
  long *plStack_138;
  code *apcStack_130 [2];
  code *pcStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined1 auStack_108 [24];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_d0;
  code *pcStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar16 = *(long *)(unaff_x20 + 0x10);
  pcVar8 = *(code **)(unaff_x20 + 0x18);
  pbVar1 = (byte *)(unaff_x20 + 0x20);
  puVar50 = auStack_108;
  func_0x000107c61428(lVar16 + 0x10,puVar50,0,0);
  puVar10 = (undefined *)(lVar16 + 0x10);
  func_0x000107c61618();
  if (puVar10 == (undefined *)0x0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
  pcStack_110 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  pcStack_120 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar11 = *(code **)(puVar10 + _DAT_112f35c88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar11 != (code *)0x0) {
    pcVar48 = pcVar11;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar11);
    if (pcVar48 != (code *)0x0) {
      pcStack_150 = pcVar48;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar48);
      goto LAB_10304700c;
    }
  }
  pcStack_150 = (code *)0x0;
  puVar50 = (undefined1 *)0x0;
LAB_10304700c:
  pcVar11 = *(code **)(unaff_x20 + 0x68);
  uVar35 = (ulong)pcVar11 >> 0x3e;
  if (uVar35 == 0) {
    pcVar48 = *(code **)(((ulong)pcVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar48 = (code *)((ulong)pcVar11 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar11) {
      pcVar48 = pcVar11;
    }
    func_0x000107c60480();
  }
  pcVar39 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar48 != (code *)0x0) {
    pcStack_a0 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar30 = (code *)((ulong)pcVar48 & ((long)pcVar48 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,pcVar30,0);
    if ((long)pcVar48 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103049770);
      (*pcVar8)();
    }
    pcVar49 = (code *)0x0;
    do {
      pcVar39 = pcStack_a0;
      if (((ulong)pcVar11 & 0xc000000000000001) == 0) {
        pcVar46 = *(code **)(pcVar11 + (long)pcVar49 * 8 + 0x20);
        func_0x000107c61174();
        pcVar25 = pcVar30;
      }
      else {
        pcVar46 = pcVar49;
        pcVar25 = pcVar11;
        FUN_10304c794(pcVar49,pcVar11,&PTR_PTR_1126d4dd8,0x112d4c900);
      }
      func_0x000107c61174();
      pcVar41 = pcVar46;
      func_0x000107c4f348();
      func_0x000107c61180();
      pcVar12 = pcVar41;
      func_0x000107c4f38c();
      func_0x000107c61180();
      pcVar24 = pcVar12;
      func_0x000107c5faec();
      pcVar30 = pcVar25;
      func_0x000107c61170(pcVar46);
      func_0x000107c61170(pcVar46);
      func_0x000107c61170(pcVar41);
      func_0x000107c61170(pcVar12);
      uVar38 = *(ulong *)(pcVar39 + 0x10);
      pcVar46 = (code *)(uVar38 + 1);
      pcStack_a0 = pcVar39;
      if (*(ulong *)(pcVar39 + 0x18) >> 1 <= uVar38) {
        pcVar30 = pcVar46;
        func_0x000100403514(1 < *(ulong *)(pcVar39 + 0x18),pcVar46,1);
      }
      pcVar49 = pcVar49 + 1;
      *(code **)(pcStack_a0 + 0x10) = pcVar46;
      *(code **)(pcStack_a0 + uVar38 * 0x10 + 0x20) = pcVar24;
      *(code **)(pcStack_a0 + uVar38 * 0x10 + 0x28) = pcVar25;
      pcVar39 = pcStack_a0;
    } while (pcVar48 != pcVar49);
  }
  pcVar48 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar30 = pcVar8;
  func_0x00010304fa18(pcVar8,pcStack_150,puVar50,pcVar39);
  func_0x000107c6142c(pcVar39);
  func_0x000107c6142c(puVar50);
  if ((ulong)pcVar30 >> 0x3e == 0) {
    pcVar39 = *(code **)(((ulong)pcVar30 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar39 = (code *)((ulong)pcVar30 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar30) {
      pcVar39 = pcVar30;
    }
    func_0x000107c60480();
  }
  pcVar49 = (code *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (pcVar39 != (code *)0x0) {
    pcVar46 = (code *)0x0;
    pcVar41 = (code *)((ulong)pcVar11 & 0xffffffffffffff8);
    pcVar25 = pcVar41;
    if ((code *)0x7fffffffffffffff < pcVar11) {
      pcVar25 = pcVar11;
    }
    uVar4 = *(undefined1 *)(unaff_x20 + 0x25);
    puVar36 = (undefined *)((ulong)pcVar48 & 0xffffffffffffff8);
    puVar22 = puVar36;
    if ((undefined *)0x7fffffffffffffff < pcVar48) {
      puVar22 = pcVar48;
    }
    bVar5 = *(byte *)(unaff_x20 + 0x21);
    bVar6 = *(byte *)(unaff_x20 + 0x23);
    do {
      if (((ulong)pcVar30 & 0xc000000000000001) == 0) {
        if (*(code **)(((ulong)pcVar30 & 0xffffffffffffff8) + 0x10) <= pcVar46) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10304906c);
          (*pcVar8)();
        }
        pcVar12 = *(code **)(pcVar30 + (long)pcVar46 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        pcVar12 = pcVar46;
        pcStack_150 = pcVar30;
        FUN_10304c950();
      }
      bVar9 = SCARRY8((long)pcVar46,1);
      pcVar46 = pcVar46 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103049068);
        (*pcVar8)();
      }
      uVar34 = (uint)(byte)pcVar12[_DAT_112fe6d58];
      if ((byte)pcVar12[_DAT_112fe6d58] < 3) {
        if (uVar34 == 0) goto LAB_103047db4;
        if (uVar34 == 1) {
          pcStack_198 = *(code **)(puVar10 + _DAT_112f35ce8);
          func_0x000108f48528();
          if (((((int)pcStack_198 == 0) || ((puVar10[_DAT_112f35cc8] & 1) == 0)) &&
              (((bVar5 & 1) != 0 || ((*pbVar1 & 1) != 0)))) && ((bVar6 & 1) != 0)) {
            FUN_103049bd0();
LAB_103047344:
            if (pcStack_198 != (code *)0x0) {
              func_0x000107c61174();
              if ((ulong)pcVar48 >> 0x3e == 0) {
                puVar13 = *(undefined **)(puVar36 + 0x10);
              }
              else {
                puVar13 = puVar22;
                func_0x000107c60480(puVar22);
              }
              pcVar14 = (code *)0x0;
              FUN_10304daf8(0,puVar13 + 1,1,pcVar48,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
              uVar37 = (ulong)pcVar14 & 0xffffffffffffff8;
              uVar38 = *(ulong *)(uVar37 + 0x10);
              pcVar24 = pcVar14;
              if (*(ulong *)(uVar37 + 0x18) >> 1 <= uVar38) {
                pcVar24 = (code *)(ulong)(1 < *(ulong *)(uVar37 + 0x18));
                FUN_10304daf8(pcVar24,uVar38 + 1,1,pcVar14,0x112e3c238,&PTR_PTR_1126c51c8,
                              0x112e3c240,&UNK_10da27d40);
                uVar37 = (ulong)pcVar24 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar37 + 0x10) = uVar38 + 1;
              *(code **)(uVar37 + uVar38 * 8 + 0x20) = pcStack_198;
              goto LAB_103047db0;
            }
          }
          goto LAB_103047db4;
        }
        if ((*(byte *)(unaff_x20 + 0x24) & 1) == 0) {
          pcStack_198 = (code *)0x0;
        }
        else {
          pcStack_198 = (code *)PTR_PTR_1126cf4e8;
          func_0x000107c610f8();
          func_0x000107c46f1c();
        }
        pbVar15 = pbVar1;
        FUN_103046574();
        if (((ulong)pbVar15 & 1) != 0) {
          uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar27,*(undefined8 *)((long)(puVar10 + _DAT_112f35cd0) + 8));
          uVar28 = *(undefined8 *)(puVar10 + _DAT_112f35cd8);
          uVar42 = *(undefined8 *)((long)(puVar10 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar28,uVar42);
          lVar16 = *(long *)(puVar10 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar16 == 0) {
LAB_1030477f8:
            uVar42 = 0xe000000000000000;
          }
          else {
            lVar23 = lVar16;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar16);
            if (lVar23 == 0) {
              lVar16 = 0;
              goto LAB_1030477f8;
            }
            lVar16 = lVar23;
            func_0x000107c5faec(lVar23);
            func_0x000107c61170(lVar23);
          }
          uVar43 = uVar42;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar42);
          lVar23 = *(long *)(puVar10 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar23 == 0) {
LAB_10304786c:
            lVar23 = 0;
            uVar43 = 0xe000000000000000;
          }
          else {
            lVar20 = lVar23;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar23);
            if (lVar20 == 0) goto LAB_10304786c;
            lVar23 = lVar20;
            func_0x000107c5faec(lVar20);
            func_0x000107c61170(lVar20);
          }
          puVar13 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar23,uVar43);
          func_0x000107c6142c(uVar43);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar27);
          func_0x000107c61170(uVar28);
          func_0x000107c61170(lVar16);
          func_0x000107c61170(lVar23);
          if ((ulong)pcVar48 >> 0x3e == 0) {
            puVar21 = *(undefined **)(puVar36 + 0x10);
          }
          else {
            puVar21 = puVar22;
            func_0x000107c60480(puVar22);
          }
          pcVar24 = (code *)0x0;
          FUN_10304daf8(0,puVar21 + 1,1,pcVar48,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                        &UNK_10da27d40);
          uVar37 = (ulong)pcVar24 & 0xffffffffffffff8;
          uVar38 = *(ulong *)(uVar37 + 0x10);
          pcVar48 = pcVar24;
          if (*(ulong *)(uVar37 + 0x18) >> 1 <= uVar38) {
            pcVar48 = (code *)(ulong)(1 < *(ulong *)(uVar37 + 0x18));
            FUN_10304daf8(pcVar48,uVar38 + 1,1,pcVar24,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar37 = (ulong)pcVar48 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar37 + 0x10) = uVar38 + 1;
          *(undefined **)(uVar37 + uVar38 * 8 + 0x20) = puVar13;
        }
        pbVar15 = pbVar1;
        func_0x000103046678();
        if (((ulong)pbVar15 & 1) != 0) {
          uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar27,*(undefined8 *)((long)(puVar10 + _DAT_112f35cd0) + 8));
          uVar28 = *(undefined8 *)(puVar10 + _DAT_112f35cd8);
          uVar42 = *(undefined8 *)((long)(puVar10 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar28,uVar42);
          lVar16 = *(long *)(puVar10 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar16 == 0) {
LAB_103047a00:
            uVar42 = 0xe000000000000000;
          }
          else {
            lVar23 = lVar16;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar16);
            if (lVar23 == 0) {
              lVar16 = 0;
              goto LAB_103047a00;
            }
            lVar16 = lVar23;
            func_0x000107c5faec(lVar23);
            func_0x000107c61170(lVar23);
          }
          uVar43 = uVar42;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar42);
          lVar23 = *(long *)(puVar10 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar23 == 0) {
LAB_103047a74:
            lVar23 = 0;
            uVar43 = 0xe000000000000000;
          }
          else {
            lVar20 = lVar23;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar23);
            if (lVar20 == 0) goto LAB_103047a74;
            lVar23 = lVar20;
            func_0x000107c5faec(lVar20);
            func_0x000107c61170(lVar20);
          }
          puVar13 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar23,uVar43);
          func_0x000107c6142c(uVar43);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar27);
          func_0x000107c61170(uVar28);
          func_0x000107c61170(lVar16);
          func_0x000107c61170(lVar23);
          pcVar24 = pcVar48;
          func_0x000107c61550();
          if ((((int)pcVar24 == 0) || ((long)pcVar48 < 0)) ||
             (pcVar24 = pcVar48, ((ulong)pcVar48 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar48 >> 0x3e == 0) {
              pcVar14 = *(code **)(((ulong)pcVar48 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar14 = (code *)((ulong)pcVar48 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar48) {
                pcVar14 = pcVar48;
              }
              func_0x000107c60480(pcVar14);
            }
            pcVar24 = (code *)0x0;
            FUN_10304daf8(0,pcVar14 + 1,1,pcVar48,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
          }
          uVar37 = (ulong)pcVar24 & 0xffffffffffffff8;
          uVar38 = *(ulong *)(uVar37 + 0x10);
          pcVar48 = pcVar24;
          if (*(ulong *)(uVar37 + 0x18) >> 1 <= uVar38) {
            pcVar48 = (code *)(ulong)(1 < *(ulong *)(uVar37 + 0x18));
            FUN_10304daf8(pcVar48,uVar38 + 1,1,pcVar24,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar37 = (ulong)pcVar48 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar37 + 0x10) = uVar38 + 1;
          *(undefined **)(uVar37 + uVar38 * 8 + 0x20) = puVar13;
        }
        pbVar15 = pbVar1;
        func_0x00010304677c();
        pcVar24 = pcVar48;
        if (((ulong)pbVar15 & 1) != 0) {
          uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar27,*(undefined8 *)((long)(puVar10 + _DAT_112f35cd0) + 8));
          uVar28 = *(undefined8 *)(puVar10 + _DAT_112f35cd8);
          uVar42 = *(undefined8 *)((long)(puVar10 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar28,uVar42);
          lVar16 = *(long *)(puVar10 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar16 == 0) {
LAB_103047c2c:
            uVar42 = 0xe000000000000000;
          }
          else {
            lVar23 = lVar16;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar16);
            if (lVar23 == 0) {
              lVar16 = 0;
              goto LAB_103047c2c;
            }
            lVar16 = lVar23;
            func_0x000107c5faec(lVar23);
            func_0x000107c61170(lVar23);
          }
          uVar43 = uVar42;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar42);
          lVar23 = *(long *)(puVar10 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar23 == 0) {
LAB_103047ca0:
            lVar23 = 0;
            uVar43 = 0xe000000000000000;
          }
          else {
            lVar20 = lVar23;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar23);
            if (lVar20 == 0) goto LAB_103047ca0;
            lVar23 = lVar20;
            func_0x000107c5faec(lVar20);
            func_0x000107c61170(lVar20);
          }
          puVar13 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar23,uVar43);
          func_0x000107c6142c(uVar43);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar27);
          func_0x000107c61170(uVar28);
          func_0x000107c61170(lVar16);
          func_0x000107c61170(lVar23);
          func_0x000107c61550();
          if ((((int)pcVar24 == 0) || ((long)pcVar48 < 0)) || (((ulong)pcVar48 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar48 >> 0x3e == 0) {
              pcVar24 = *(code **)(((ulong)pcVar48 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar24 = (code *)((ulong)pcVar48 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar48) {
                pcVar24 = pcVar48;
              }
              func_0x000107c60480(pcVar24);
            }
            pcVar14 = (code *)0x0;
            FUN_10304daf8(0,pcVar24 + 1,1,pcVar48,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            pcVar48 = pcVar14;
          }
          uVar37 = (ulong)pcVar48 & 0xffffffffffffff8;
          uVar38 = *(ulong *)(uVar37 + 0x10);
          pcVar24 = pcVar48;
          if (*(ulong *)(uVar37 + 0x18) >> 1 <= uVar38) {
            pcVar24 = (code *)(ulong)(1 < *(ulong *)(uVar37 + 0x18));
            FUN_10304daf8(pcVar24,uVar38 + 1,1,pcVar48,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar37 = (ulong)pcVar24 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar37 + 0x10) = uVar38 + 1;
          *(undefined **)(uVar37 + uVar38 * 8 + 0x20) = puVar13;
        }
LAB_103047db0:
        func_0x000107c61170(pcStack_198);
        pcVar48 = pcVar24;
      }
      else if (1 < uVar34 - 5) {
        if (uVar34 == 3) {
          pcVar24 = *(code **)(unaff_x20 + 0x80);
          if ((ulong)pcVar24 >> 0x3e == 0) {
            pcVar14 = *(code **)(((ulong)pcVar24 & 0xffffffffffffff8) + 0x10);
            pcStack_198 = pcStack_150;
          }
          else {
            pcVar14 = (code *)((ulong)pcVar24 & 0xffffffffffffff8);
            if ((code *)0x7fffffffffffffff < pcVar24) {
              pcVar14 = pcVar24;
            }
            func_0x000107c60480();
            pcStack_198 = pcStack_150;
          }
          if (pcVar14 != (code *)0x0) {
            pcVar51 = (code *)0x0;
            pcVar47 = pcVar12 + _DAT_112fe6d50;
LAB_103047458:
            if (((ulong)pcVar24 & 0xc000000000000001) == 0) {
              if (*(code **)(((ulong)pcVar24 & 0xffffffffffffff8) + 0x10) <= pcVar51) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103049078);
                (*pcVar8)();
              }
              pcVar48 = *(code **)(pcVar24 + (long)pcVar51 * 8 + 0x20);
              func_0x000107c61174();
              pcVar17 = pcStack_198;
            }
            else {
              pcVar48 = pcVar51;
              pcVar17 = pcVar24;
              FUN_10304c794(pcVar51,pcVar24,&PTR_PTR_1126b47a0,0x112d55c08);
            }
            pcVar53 = pcVar51 + 1;
            if (SCARRY8((long)pcVar51,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103049074);
              (*pcVar8)();
            }
            pcVar44 = pcVar48;
            func_0x000107c4f638();
            func_0x000107c61180();
            pcStack_198 = pcVar17;
            if (pcVar44 == (code *)0x0) goto LAB_103047438;
            pcVar18 = pcVar44;
            func_0x000107c5faec();
            pcStack_198 = pcVar17;
            func_0x000107c61170(pcVar44);
            if ((pcVar18 == *(code **)pcVar47) && (pcVar17 == *(code **)(pcVar47 + 8))) {
              func_0x000107c6142c(pcVar17);
            }
            else {
              pcStack_198 = pcVar17;
              func_0x000107c605b8();
              func_0x000107c6142c(pcVar17);
              if (((ulong)pcVar18 & 1) == 0) goto LAB_103047438;
            }
            pcVar24 = pcVar48;
            func_0x000107c4f638();
            func_0x000107c61180();
            if (pcVar24 != (code *)0x0) {
              pcVar14 = pcVar24;
              func_0x000107c5faec();
              func_0x000107c61170(pcVar24);
              pcVar24 = pcVar48;
              func_0x000107c4f280();
              pcVar17 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((((pcVar24 != (code *)0x3) &&
                   (pcVar24 = pcVar48, func_0x000107c5d0f0(), pcVar24 != (code *)0xa)) &&
                  ((pcVar24 = pcVar48, func_0x000107c5d0f0(), pcVar24 != (code *)0x6 ||
                   (((byte)puVar10[_DAT_112f35d40 + 1] >> 6 & 1) == 0)))) &&
                 ((pcVar24 = pcVar48, func_0x000107c5d0f0(), pcVar24 != (code *)0x7 ||
                  (-1 < (char)puVar10[_DAT_112f35d40 + 1])))) {
                uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35cd8);
                func_0x000107c5fadc(uVar27,*(undefined8 *)((long)(puVar10 + _DAT_112f35cd8) + 8));
                func_0x000104886d18(&pcStack_a0);
                if ((char)pcStack_a0 == '\x01') {
                  uVar38 = (ulong)pcVar14 & 0xffffffffffff;
                  if (((ulong)pcStack_198 & 0x2000000000000000) != 0) {
                    uVar38 = (ulong)pcStack_198 >> 0x38 & 0xf;
                  }
                  if (uVar38 == 0) goto LAB_1030480a8;
                  lVar16 = *(long *)(puVar10 + _DAT_112f35c70);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar16 == 0) goto LAB_1030480a8;
                  uVar28 = 0x112f35dd0;
                  puStack_90 = puVar10;
                  pcStack_88 = pcVar14;
                  pcStack_80 = pcStack_198;
                  func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                  func_0x000100087bd4(&lStack_f0,FUN_103051db8,&pcStack_a0,uVar28);
                  if ((char)lStack_e8 == '\x01') {
                    func_0x000107c5fadc(pcVar14,pcStack_198);
                    func_0x000107c41160(lVar16);
                    func_0x000107c61170(pcVar14);
                    pcVar44 = (code *)PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                  }
                  else {
                    pcVar44 = (code *)PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                  }
                  func_0x000107c46f1c();
                  func_0x000107c615e8(lVar16);
                }
                else {
LAB_1030480a8:
                  pcVar44 = (code *)0x0;
                }
                func_0x000107c6142c(pcStack_198);
                pcStack_198 = pcVar48;
                func_0x0001069719d4(pcVar48,uVar27,0,pcVar44,uVar4);
                func_0x000107c61180();
                func_0x000107c61170(pcVar48);
                func_0x000107c61170(uVar27);
LAB_10304862c:
                func_0x000107c61170(pcVar44);
                pcVar48 = pcVar17;
                goto LAB_103047344;
              }
              func_0x000107c61170(pcVar48);
              goto LAB_103048300;
            }
            func_0x000107c61170(pcVar48);
            pcVar48 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
        }
        else {
          pcVar24 = *(code **)(pcVar12 + _DAT_112fe6d50);
          pcVar14 = *(code **)(pcVar12 + _DAT_112fe6d50 + 8);
          pcVar51 = *(code **)(puVar10 + _DAT_112f35c88);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (pcVar51 == (code *)0x0) {
LAB_103047624:
            pcVar51 = (code *)0x0;
            pcStack_198 = (code *)0x0;
          }
          else {
            pcVar47 = pcVar51;
            func_0x000107c4f38c();
            func_0x000107c61180();
            func_0x000107c615e8(pcVar51);
            if (pcVar47 == (code *)0x0) goto LAB_103047624;
            pcVar51 = pcVar47;
            func_0x000107c5faec();
            func_0x000107c61170(pcVar47);
            pcStack_198 = pcStack_150;
          }
          if (uVar35 == 0) {
            pcVar47 = *(code **)(pcVar41 + 0x10);
          }
          else {
            pcVar47 = pcVar25;
            func_0x000107c60480();
          }
          pcVar17 = pcVar48;
          if (pcVar47 != (code *)0x0) {
            uVar38 = (ulong)pcVar47 & ((long)pcVar47 >> 0x3f ^ 0xffffffffffffffffU);
            pcStack_a0 = pcVar48;
            func_0x000100403514(0,uVar38,0);
            if ((long)pcVar47 < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103049088);
              (*pcVar8)();
            }
            pcVar53 = pcVar11 + 0x20;
            if (((ulong)pcVar11 & 0xc000000000000001) == 0) {
              do {
                pcVar48 = pcStack_a0;
                uVar43 = *(undefined8 *)pcVar53;
                func_0x000107c61174();
                func_0x000107c61174();
                uVar27 = uVar43;
                func_0x000107c4f348();
                func_0x000107c61180();
                uVar28 = uVar27;
                func_0x000107c4f38c();
                func_0x000107c61180();
                uVar42 = uVar28;
                func_0x000107c5faec();
                uVar32 = uVar38;
                func_0x000107c61170(uVar43);
                func_0x000107c61170(uVar43);
                func_0x000107c61170(uVar27);
                func_0x000107c61170(uVar28);
                uVar40 = *(ulong *)(pcVar48 + 0x10);
                uVar37 = uVar40 + 1;
                pcStack_a0 = pcVar48;
                if (*(ulong *)(pcVar48 + 0x18) >> 1 <= uVar40) {
                  uVar32 = uVar37;
                  func_0x000100403514(1 < *(ulong *)(pcVar48 + 0x18),uVar37,1);
                }
                *(ulong *)(pcStack_a0 + 0x10) = uVar37;
                *(undefined8 *)(pcStack_a0 + uVar40 * 0x10 + 0x20) = uVar42;
                *(ulong *)(pcStack_a0 + uVar40 * 0x10 + 0x28) = uVar38;
                pcVar47 = pcVar47 + -1;
                uVar38 = uVar32;
                pcVar48 = pcStack_a0;
                pcVar53 = pcVar53 + 8;
                pcVar17 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              } while (pcVar47 != (code *)0x0);
            }
            else {
              pcVar53 = (code *)0x0;
              do {
                pcVar48 = pcStack_a0;
                pcVar17 = pcVar53;
                pcVar31 = pcVar11;
                FUN_10304c794(pcVar53,pcVar11,&PTR_PTR_1126d4dd8,0x112d4c900);
                pcVar44 = pcVar17;
                func_0x000107c615f0();
                func_0x000107c4f348();
                func_0x000107c61180();
                pcVar18 = pcVar44;
                func_0x000107c4f38c();
                func_0x000107c61180();
                pcVar19 = pcVar18;
                func_0x000107c5faec();
                func_0x000107c615ec(pcVar17,2);
                func_0x000107c61170(pcVar44);
                func_0x000107c61170(pcVar18);
                uVar38 = *(ulong *)(pcVar48 + 0x10);
                pcStack_a0 = pcVar48;
                if (*(ulong *)(pcVar48 + 0x18) >> 1 <= uVar38) {
                  func_0x000100403514(1 < *(ulong *)(pcVar48 + 0x18),uVar38 + 1,1);
                }
                pcVar53 = pcVar53 + 1;
                *(ulong *)(pcStack_a0 + 0x10) = uVar38 + 1;
                *(code **)(pcStack_a0 + uVar38 * 0x10 + 0x20) = pcVar19;
                *(code **)(pcStack_a0 + uVar38 * 0x10 + 0x28) = pcVar31;
                pcVar48 = pcStack_a0;
                pcVar17 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              } while (pcVar47 != pcVar53);
            }
          }
          pcVar47 = pcVar24;
          func_0x000100077018(pcVar24,pcVar14,pcVar48);
          if (((ulong)pcVar47 & 1) == 0) {
            if (pcStack_198 != (code *)0x0) {
              uVar38 = (ulong)pcVar51 & 0xffffffffffff;
              if (((ulong)pcStack_198 & 0x2000000000000000) != 0) {
                uVar38 = (ulong)pcStack_198 >> 0x38 & 0xf;
              }
              if ((uVar38 != 0) &&
                 (pcVar47 = pcVar51, func_0x000100077018(pcVar51,pcStack_198,pcVar48),
                 pcVar14 = pcStack_198, pcVar24 = pcVar51, ((ulong)pcVar47 & 1) != 0))
              goto LAB_103048188;
              func_0x000107c6142c(pcStack_198);
            }
            func_0x000107c6142c(pcVar48);
            pcVar48 = pcVar17;
          }
          else {
LAB_103048188:
            func_0x000107c61434(pcVar14);
            func_0x000107c6142c(pcVar48);
            if (uVar35 == 0) {
              pcVar48 = *(code **)(pcVar41 + 0x10);
            }
            else {
              pcVar48 = pcVar25;
              func_0x000107c60480();
            }
            if (pcVar48 != (code *)0x0) {
              pcVar47 = (code *)0x0;
              do {
                pcVar53 = pcVar11;
                if (((ulong)pcVar11 & 0xc000000000000001) == 0) {
                  if (*(code **)(pcVar41 + 0x10) <= pcVar47) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x103049084);
                    (*pcVar8)();
                  }
                  pcVar44 = *(code **)(pcVar11 + (long)pcVar47 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  pcVar44 = pcVar47;
                  FUN_10304c794(pcVar47,pcVar11,&PTR_PTR_1126d4dd8,0x112d4c900);
                }
                if (SCARRY8((long)pcVar47,1)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103049080);
                  (*pcVar8)();
                }
                pcVar52 = pcVar47 + 1;
                pcVar18 = pcVar44;
                func_0x000107c4f348();
                func_0x000107c61180();
                pcVar19 = pcVar18;
                func_0x000107c4f38c();
                func_0x000107c61180();
                func_0x000107c61170(pcVar18);
                pcVar18 = pcVar19;
                func_0x000107c5faec();
                pcVar31 = pcVar53;
                func_0x000107c61170(pcVar19);
                if (pcVar18 == pcVar24 && pcVar53 == pcVar14) {
                  func_0x000107c6142c(pcVar53);
LAB_103048318:
                  if (pcStack_198 == (code *)0x0) {
                    func_0x000107c6142c(pcVar14);
                    if (*(int *)(pcVar12 + _DAT_112fe6d70) == 1) {
LAB_10304844c:
                      func_0x000104886d18(&pcStack_a0);
                      pcVar48 = pcStack_a0;
                      pcVar24 = pcVar44;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar14 = pcVar24;
                      func_0x000107c44f0c();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar24);
                      pcVar24 = pcVar14;
                      func_0x000107c5faec();
                      pcVar51 = pcVar31;
                      func_0x000107c61170(pcVar14);
                      if (*(long *)(pcVar48 + 0x10) == 0) {
LAB_10304877c:
                        func_0x000107c6142c(pcVar31);
                        pcVar24 = pcVar48;
                      }
                      else {
                        func_0x000107c61434(pcVar48);
                        pcVar51 = pcVar31;
                        func_0x000100029284();
                        if (((ulong)pcVar51 & 1) == 0) {
                          func_0x000107c6142c(pcVar31);
                          pcVar31 = pcVar48;
                          goto LAB_10304877c;
                        }
                        puVar2 = (ulong *)(*(long *)(pcVar48 + 0x38) + (long)pcVar24 * 0x10);
                        uVar37 = *puVar2;
                        pcVar24 = (code *)puVar2[1];
                        func_0x000107c61434(pcVar24);
                        pcVar51 = (code *)0x2;
                        func_0x000107c61430(pcVar48);
                        func_0x000107c6142c(pcVar31);
                        uVar38 = uVar37 & 0xffffffffffff;
                        if (((ulong)pcVar24 & 0x2000000000000000) != 0) {
                          uVar38 = (ulong)pcVar24 >> 0x38 & 0xf;
                        }
                        if (uVar38 != 0) {
                          pcVar48 = pcVar44;
                          func_0x000107c4f348();
                          func_0x000107c61180();
                          pcVar14 = pcVar48;
                          func_0x000107c5cab0();
                          func_0x000107c61180();
                          func_0x000107c61170(pcVar48);
                          pcVar48 = pcVar14;
                          func_0x000107c5faec();
                          func_0x000107c61170(pcVar14);
                          pcStack_a0 = pcVar48;
                          pcStack_98 = pcVar51;
                          func_0x000107c5fb78(0x20b7c220,0xa400000000000000);
                          pcVar48 = pcVar24;
                          func_0x000107c5fb78(uVar37);
                          func_0x000107c6142c(pcVar24);
                          uVar27 = 0;
                          pcStack_198 = pcStack_a0;
                          pcVar51 = pcStack_98;
                          goto LAB_1030487d4;
                        }
                      }
                      func_0x000107c6142c(pcVar24);
                      pcVar48 = pcVar44;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar24 = pcVar48;
                      func_0x000107c5cab0();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar48);
                      pcStack_198 = pcVar24;
                      func_0x000107c5faec();
                      pcVar48 = pcVar51;
                      func_0x000107c61170(pcVar24);
                      uVar27 = 0;
LAB_1030487d4:
                      pcVar24 = pcVar44;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar14 = pcVar24;
                      func_0x000107c4f38c();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar24);
                      pcVar24 = pcVar48;
                      if (pcVar14 == (code *)0x0) {
                        pcVar14 = (code *)0x0;
                        func_0x000107c5faec(0);
                        pcVar24 = pcVar48;
                        func_0x000107c5fadc();
                        func_0x000107c6142c(pcVar48);
                      }
                      pcVar48 = (code *)PTR_PTR_1126c3320;
                      func_0x000107c61168();
                      func_0x000107c5cb00();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar14);
                      pcVar14 = pcVar24;
                      pcVar47 = pcVar48;
                      if (pcVar48 == (code *)0x0) {
                        pcVar47 = (code *)0x0;
                        func_0x000107c5faec(0);
                        pcVar14 = pcVar24;
                        func_0x000107c5fadc();
                        func_0x000107c6142c(pcVar24);
                      }
                      func_0x000107c5faec();
                      uVar38 = (ulong)pcVar48 & 0xffffffffffff;
                      if (((ulong)pcVar14 & 0x2000000000000000) != 0) {
                        uVar38 = (ulong)pcVar14 >> 0x38 & 0xf;
                      }
                      if (uVar38 != 0) {
                        uVar28 = 0x112f35dd0;
                        puStack_90 = puVar10;
                        pcStack_88 = pcVar48;
                        pcStack_80 = pcVar14;
                        func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                        func_0x000100087bd4(&lStack_f0,FUN_103051e40,&pcStack_a0,uVar28);
                        if ((char)lStack_e8 == '\x01') {
                          lVar16 = *(long *)(puVar10 + _DAT_112f35c70);
                          func_0x000107c5c734();
                          func_0x000107c61180();
                          if (lVar16 != 0) {
                            func_0x000107c5fadc(pcVar48,pcVar14);
                            func_0x000107c4115c();
                            func_0x000107c615e8(lVar16);
                            func_0x000107c61170(pcVar48);
                          }
                        }
                      }
                      puVar13 = PTR_PTR_1126cf4e8;
                      func_0x000107c610f8(PTR_PTR_1126cf4e8);
                      func_0x000107c46f1c();
                      pcVar48 = pcVar44;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      func_0x000107c6142c(pcVar14);
                      if (pcVar51 == (code *)0x0) {
                        func_0x000107c61174(puVar13);
                        pcVar24 = (code *)0x0;
                      }
                      else {
                        func_0x000107c61174(puVar13);
                        func_0x000107c5fadc(pcStack_198,pcVar51);
                        func_0x000107c6142c(pcVar51);
                        pcVar24 = pcStack_198;
                      }
                      pcStack_198 = pcVar48;
                      func_0x0001069715d8(pcVar48,pcVar47,puVar13,pcVar24,uVar27);
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar44);
                      func_0x000107c61170(puVar13);
                      func_0x000107c61170(puVar13);
                      func_0x000107c61170(pcVar24);
                      func_0x000107c61170(pcVar47);
                      func_0x000107c61170(pcVar48);
                      pcVar48 = pcVar17;
                      goto LAB_103047344;
                    }
                    uVar34 = (uint)*(undefined8 *)(puVar10 + _DAT_112f35d40);
LAB_1030484ac:
                    if ((uVar34 >> 0xd & 1) != 0) goto LAB_1030485dc;
                    uVar27 = 0;
                  }
                  else {
                    if ((pcVar24 == pcVar51) && (pcStack_198 == pcVar14)) {
                      func_0x000107c6142c(pcVar14);
                      func_0x000107c6142c(pcStack_198);
                      if (*(int *)(pcVar12 + _DAT_112fe6d70) == 1) {
LAB_103048410:
                        pcVar24 = *(code **)(puVar10 + _DAT_112f35cb0);
                        if (pcVar24 == (code *)0x0) {
                          pcStack_198 = (code *)0x0;
                          uVar27 = 1;
                          pcVar48 = pcVar31;
                          pcVar51 = (code *)0x0;
                        }
                        else {
                          func_0x000107c5c364();
                          func_0x000107c61180();
                          pcStack_198 = pcVar24;
                          func_0x000107c5faec();
                          pcVar48 = pcVar31;
                          func_0x000107c61170(pcVar24);
                          uVar27 = 1;
                          pcVar51 = pcVar31;
                        }
                        goto LAB_1030487d4;
                      }
                      uVar34 = (uint)*(undefined8 *)(puVar10 + _DAT_112f35d40);
                    }
                    else {
                      pcVar31 = pcVar14;
                      func_0x000107c605b8();
                      func_0x000107c6142c(pcVar14);
                      func_0x000107c6142c(pcStack_198);
                      if (*(int *)(pcVar12 + _DAT_112fe6d70) == 1) {
                        if (((ulong)pcVar24 & 1) == 0) goto LAB_10304844c;
                        goto LAB_103048410;
                      }
                      uVar34 = (uint)*(undefined8 *)(puVar10 + _DAT_112f35d40);
                      if (((ulong)pcVar24 & 1) == 0) goto LAB_1030484ac;
                    }
                    if ((uVar34 >> 0xc & 1) != 0) {
LAB_1030485dc:
                      func_0x000107c61170(pcVar44);
                      pcVar48 = pcVar17;
                      goto LAB_103047db4;
                    }
                    uVar27 = 1;
                  }
                  pcVar48 = pcVar44;
                  func_0x000107c4f348();
                  func_0x000107c61180();
                  pcVar24 = pcVar44;
                  func_0x000107c4f348();
                  func_0x000107c61180();
                  pcVar14 = pcVar24;
                  func_0x000107c4f38c();
                  func_0x000107c61180();
                  func_0x000107c61170(pcVar24);
                  pcVar24 = pcVar14;
                  func_0x000107c5faec();
                  func_0x000107c61170(pcVar14);
                  if (puVar10[_DAT_112f35bd0] == '\x01') {
                    uVar38 = (ulong)pcVar24 & 0xffffffffffff;
                    if (((ulong)pcVar31 & 0x2000000000000000) != 0) {
                      uVar38 = (ulong)pcVar31 >> 0x38 & 0xf;
                    }
                    if (uVar38 == 0) goto LAB_1030485ec;
                    lVar16 = *(long *)(puVar10 + _DAT_112f35c70);
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    if (lVar16 == 0) goto LAB_1030485ec;
                    uVar28 = 0x112f35dd0;
                    puStack_90 = puVar10;
                    pcStack_88 = pcVar24;
                    pcStack_80 = pcVar31;
                    func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                    func_0x000100087bd4(&lStack_f0,FUN_1030504c4,&pcStack_a0,uVar28);
                    lVar23 = lStack_f0;
                    if ((char)lStack_e8 == '\x01') {
                      func_0x000107c5fadc(pcVar24,pcVar31);
                      lVar23 = lVar16;
                      func_0x000107c4115c();
                      func_0x000107c61170(pcVar24);
                    }
                    if (lVar23 == 0) {
                      func_0x000108f42294(*(undefined8 *)(puVar10 + _DAT_112f35ce8));
                    }
                    puVar13 = PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                    func_0x000107c46f1c();
                    func_0x000107c615e8(lVar16);
                  }
                  else {
LAB_1030485ec:
                    puVar13 = (undefined *)0x0;
                  }
                  func_0x000107c6142c(pcVar31);
                  pcStack_198 = pcVar48;
                  func_0x0001069713fc(pcVar48,puVar13,uVar27);
                  func_0x000107c61180();
                  func_0x000107c61170(pcVar48);
                  func_0x000107c61170(puVar13);
                  goto LAB_10304862c;
                }
                pcVar31 = pcVar53;
                func_0x000107c605b8(pcVar18,pcVar53,pcVar24,pcVar14,0);
                func_0x000107c6142c(pcVar53);
                if (((ulong)pcVar18 & 1) != 0) goto LAB_103048318;
                func_0x000107c61170(pcVar44);
                pcVar47 = pcVar47 + 1;
              } while (pcVar52 != pcVar48);
            }
            func_0x000107c6142c(pcVar14);
LAB_103048300:
            func_0x000107c6142c(pcStack_198);
            pcVar48 = pcVar17;
          }
        }
      }
LAB_103047db4:
      uVar38 = *(ulong *)(pcVar12 + _DAT_112fe6d50);
      pcVar24 = *(code **)(pcVar12 + _DAT_112fe6d50 + 8);
      func_0x000107c61434(pcVar48);
      pcVar51 = pcVar49;
      func_0x000107c61558();
      uVar37 = uVar38;
      pcVar47 = pcVar24;
      pcStack_a0 = pcVar49;
      func_0x000100029284();
      pcVar14 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar40 = (ulong)~(uint)pcVar47 & 1;
      lVar16 = *(long *)(pcVar49 + 0x10) + uVar40;
      if (SCARRY8(*(long *)(pcVar49 + 0x10),uVar40)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103049070);
        (*pcVar8)();
      }
      if (*(long *)(pcVar49 + 0x18) < lVar16) {
        func_0x00010304d2e8(lVar16,pcVar51);
        uVar37 = uVar38;
        pcStack_150 = pcVar24;
        func_0x000100029284();
        pcVar14 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((uint)pcVar47 & 1) != ((uint)pcStack_150 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1030497dc);
          (*pcVar8)();
        }
      }
      else {
        pcStack_150 = pcVar47;
        if (((ulong)pcVar51 & 1) == 0) {
          func_0x00010304cee4();
        }
      }
      pcVar49 = pcStack_a0;
      if (((ulong)pcVar47 & 1) == 0) {
        *(ulong *)(pcStack_a0 + (uVar37 >> 6) * 8 + 0x40) =
             *(ulong *)(pcStack_a0 + (uVar37 >> 6) * 8 + 0x40) | 1L << (uVar37 & 0x3f);
        puVar2 = (ulong *)(*(long *)(pcStack_a0 + 0x30) + uVar37 * 0x10);
        *puVar2 = uVar38;
        puVar2[1] = (ulong)pcVar24;
        *(code **)(*(long *)(pcStack_a0 + 0x38) + uVar37 * 8) = pcVar48;
        if (SCARRY8(*(long *)(pcStack_a0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10304907c);
          (*pcVar8)();
        }
        *(long *)(pcStack_a0 + 0x10) = *(long *)(pcStack_a0 + 0x10) + 1;
        func_0x000107c61434(pcVar24);
      }
      else {
        uVar27 = *(undefined8 *)(*(long *)(pcStack_a0 + 0x38) + uVar37 * 8);
        *(code **)(*(long *)(pcStack_a0 + 0x38) + uVar37 * 8) = pcVar48;
        func_0x000107c6142c(uVar27);
      }
      func_0x000101eef5a8(&pcStack_120,pcVar48);
      func_0x000107c61170(pcVar12);
      pcVar48 = pcVar14;
    } while (pcVar46 != pcVar39);
  }
  func_0x000107c6142c(pcVar30);
  puVar22 = puStack_118;
  func_0x000107c61434();
  func_0x000101eef5a8();
  pcVar48 = pcStack_120;
  func_0x000107c61434();
  pcVar11 = pcVar48;
  func_0x000101eef5a8();
  pcVar39 = *(code **)(unaff_x20 + 0x80);
  if ((ulong)pcVar39 >> 0x3e == 0) {
    pcVar30 = *(code **)(((ulong)pcVar39 & 0xffffffffffffff8) + 0x10);
    lVar16 = _DAT_112f35c70;
  }
  else {
    pcVar30 = (code *)((ulong)pcVar39 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar39) {
      pcVar30 = pcVar39;
    }
    func_0x000107c60480();
    pcVar11 = (code *)0x0;
    lVar16 = _DAT_112f35c70;
  }
  _DAT_112f35c70 = lVar16;
  if (pcVar30 != (code *)0x0) {
    pcVar46 = (code *)0x0;
    puVar3 = (undefined8 *)(puVar10 + _DAT_112f35cd8);
    uVar4 = *(undefined1 *)(unaff_x20 + 0x25);
    do {
      if (((ulong)pcVar39 & 0xc000000000000001) == 0) {
        if (*(code **)(((ulong)pcVar39 & 0xffffffffffffff8) + 0x10) <= pcVar46) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103049064);
          (*pcVar8)();
        }
        pcVar11 = *(code **)(pcVar39 + (long)pcVar46 * 8 + 0x20);
        func_0x000107c61174();
        pcVar25 = pcStack_150;
      }
      else {
        pcVar11 = pcVar46;
        pcVar25 = pcVar39;
        FUN_10304c794(pcVar46,pcVar39,&PTR_PTR_1126b47a0,0x112d55c08);
      }
      pcVar41 = pcVar46 + 1;
      if (SCARRY8((long)pcVar46,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103049060);
        (*pcVar8)();
      }
      pcVar12 = pcVar11;
      func_0x000107c5d0f0();
      pcStack_150 = pcVar25;
      if (pcVar12 == (code *)0xa) {
LAB_103048c68:
        func_0x000107c61170();
      }
      else {
        pcVar12 = pcVar11;
        func_0x000107c4f638();
        func_0x000107c61180();
        pcStack_150 = pcVar25;
        if (pcVar12 == (code *)0x0) goto LAB_103048c68;
        func_0x000107c61170();
        pcVar12 = pcVar11;
        func_0x000107c4f638();
        func_0x000107c61180();
        if (pcVar12 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1030497c8);
          (*pcVar8)();
        }
        pcVar24 = pcVar12;
        func_0x000107c5faec();
        func_0x000107c61170(pcVar12);
        if (*(long *)(pcVar49 + 0x10) == 0) {
LAB_103048d48:
          func_0x000107c6142c(pcVar25);
          pcVar25 = (code *)*puVar3;
          pcVar12 = (code *)puVar3[1];
          func_0x000107c5fadc();
          pcVar24 = pcVar11;
          func_0x000107c4f638();
          func_0x000107c61180();
          if (pcVar24 == (code *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1030497cc);
            (*pcVar8)();
          }
          pcVar14 = pcVar24;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar24);
          func_0x000104886d18(&pcStack_a0);
          if (((ulong)pcStack_a0 & 1) == 0) {
LAB_103048eb0:
            func_0x000107c6142c(pcVar12);
            puVar36 = (undefined *)0x0;
          }
          else {
            uVar35 = (ulong)pcVar14 & 0xffffffffffff;
            if (((ulong)pcVar12 & 0x2000000000000000) != 0) {
              uVar35 = (ulong)pcVar12 >> 0x38 & 0xf;
            }
            if (uVar35 == 0) goto LAB_103048eb0;
            lVar23 = *(long *)(puVar10 + lVar16);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar23 == 0) goto LAB_103048eb0;
            uVar27 = 0x112f35dd0;
            puStack_90 = puVar10;
            pcStack_88 = pcVar14;
            pcStack_80 = pcVar12;
            func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
            func_0x000100087bd4(&lStack_f0,FUN_1030502a0,&pcStack_a0,uVar27);
            if ((char)lStack_e8 == '\x01') {
              func_0x000107c5fadc(pcVar14,pcVar12);
              func_0x000107c41160(lVar23);
              func_0x000107c61170(pcVar14);
              puVar36 = PTR_PTR_1126cf4e8;
              func_0x000107c610f8(PTR_PTR_1126cf4e8);
              func_0x000107c46f1c();
              func_0x000107c6142c(pcVar12);
              func_0x000107c615e8(lVar23);
            }
            else {
              puVar36 = PTR_PTR_1126cf4e8;
              func_0x000107c610f8(PTR_PTR_1126cf4e8);
              func_0x000107c46f1c();
              func_0x000107c6142c(pcVar12);
              func_0x000107c615e8(lVar23);
            }
          }
          pcVar12 = pcVar11;
          pcStack_150 = pcVar25;
          func_0x0001069719d4(pcVar11,pcVar25,0,puVar36,uVar4);
          func_0x000107c61180();
          func_0x000107c61170(pcVar25);
          func_0x000107c61170(puVar36);
          pcVar25 = pcStack_110;
          if (pcVar12 == (code *)0x0) {
            func_0x000107c61170();
          }
          else {
            func_0x000107c61174();
            pcVar24 = pcVar25;
            func_0x000107c61550();
            if ((((int)pcVar24 == 0) || ((long)pcVar25 < 0)) ||
               (pcVar24 = pcVar25, ((ulong)pcVar25 >> 0x3e & 1) != 0)) {
              if ((ulong)pcVar25 >> 0x3e == 0) {
                pcStack_150 = *(code **)(((ulong)pcVar25 & 0xffffffffffffff8) + 0x10);
              }
              else {
                pcStack_150 = (code *)((ulong)pcVar25 & 0xffffffffffffff8);
                if ((code *)0x7fffffffffffffff < pcVar25) {
                  pcStack_150 = pcVar25;
                }
                func_0x000107c60480();
              }
              pcStack_150 = pcStack_150 + 1;
              pcVar24 = (code *)0x0;
              FUN_10304daf8(0,pcStack_150,1,pcVar25,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
            }
            uVar38 = (ulong)pcVar24 & 0xffffffffffffff8;
            uVar35 = *(ulong *)(uVar38 + 0x10);
            pcVar25 = (code *)(uVar35 + 1);
            pcVar14 = pcVar24;
            if (*(ulong *)(uVar38 + 0x18) >> 1 <= uVar35) {
              pcVar14 = (code *)(ulong)(1 < *(ulong *)(uVar38 + 0x18));
              pcStack_150 = pcVar25;
              FUN_10304daf8(pcVar14,pcVar25,1,pcVar24,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
              uVar38 = (ulong)pcVar14 & 0xffffffffffffff8;
            }
            *(code **)(uVar38 + 0x10) = pcVar25;
            *(code **)(uVar38 + uVar35 * 8 + 0x20) = pcVar12;
            func_0x000107c61170(pcVar11);
            func_0x000107c61170();
            pcVar11 = pcVar12;
            pcStack_110 = pcVar14;
          }
        }
        else {
          func_0x000107c61434(pcVar49);
          pcStack_150 = pcVar25;
          func_0x000100029284(pcVar24);
          if (((ulong)pcStack_150 & 1) == 0) {
            func_0x000107c6142c(pcVar25);
            pcVar25 = pcVar49;
            goto LAB_103048d48;
          }
          func_0x000107c61170(pcVar11);
          func_0x000107c6142c(pcVar25);
          pcVar11 = pcVar49;
          func_0x000107c6142c();
        }
      }
      pcVar46 = pcVar46 + 1;
    } while (pcVar41 != pcVar30);
  }
  pcVar39 = pcStack_110;
  uVar35 = (ulong)pcStack_110 >> 0x3e;
  if (uVar35 == 0) {
    pcStack_168 = *(code **)((code *)((ulong)pcStack_110 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar11 = (code *)((ulong)pcStack_110 & 0xffffffffffffff8);
    if (((ulong)pcStack_110 & 0x8000000000000000) != 0) {
      pcVar11 = pcStack_110;
    }
    func_0x000107c60480();
    pcStack_168 = pcVar11;
  }
  lVar16 = _DAT_112f35d40;
  if (((puVar10[_DAT_112f35d40 + 2] & 1) != 0) && ((*(byte *)(unaff_x20 + 0x98) & 1) != 0)) {
    FUN_1030502f4();
    pcVar30 = pcVar39;
    func_0x000107c61550();
    if ((uVar35 != 0) || (pcVar46 = pcVar39, ((ulong)pcVar30 & 1) == 0)) {
      if (uVar35 == 0) {
        pcVar30 = *(code **)((code *)((ulong)pcVar39 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pcVar30 = (code *)((ulong)pcVar39 & 0xffffffffffffff8);
        if (((ulong)pcVar39 & 0x8000000000000000) != 0) {
          pcVar30 = pcVar39;
        }
        func_0x000107c60480(pcVar30);
      }
      pcVar46 = (code *)0x0;
      FUN_10304daf8(0,pcVar30 + 1,1,pcVar39,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                    &UNK_10da27d40);
    }
    uVar38 = (ulong)pcVar46 & 0xffffffffffffff8;
    uVar35 = *(ulong *)(uVar38 + 0x10);
    pcVar39 = pcVar46;
    if (*(ulong *)(uVar38 + 0x18) >> 1 <= uVar35) {
      pcVar39 = (code *)(ulong)(1 < *(ulong *)(uVar38 + 0x18));
      FUN_10304daf8(pcVar39,uVar35 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                    &UNK_10da27d40);
      uVar38 = (ulong)pcVar39 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar38 + 0x10) = uVar35 + 1;
    *(code **)(uVar38 + uVar35 * 8 + 0x20) = pcVar11;
  }
  pcVar11 = (code *)((ulong)pcVar39 & 0xffffffffffffff8);
  if ((ulong)pcVar39 >> 0x3e == 0) {
    pcVar30 = *(code **)(pcVar11 + 0x10);
    lVar23 = _DAT_112f35cc0;
    lVar20 = _DAT_112f35d00;
  }
  else {
    pcVar30 = pcVar11;
    if ((code *)0x7fffffffffffffff < pcVar39) {
      pcVar30 = pcVar39;
    }
    func_0x000107c60480();
    lVar23 = _DAT_112f35cc0;
    lVar20 = _DAT_112f35d00;
  }
  _DAT_112f35cc0 = lVar23;
  _DAT_112f35d00 = lVar20;
  pcStack_160 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar30 != (code *)0x0) {
    pcVar46 = (code *)0x0;
    do {
      while( true ) {
        if (((ulong)pcVar39 & 0xc000000000000001) == 0) {
          if (*(code **)(pcVar11 + 0x10) <= pcVar46) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x103049328);
            (*pcVar8)();
          }
          pcVar25 = *(code **)(pcVar39 + (long)pcVar46 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pcVar25 = pcVar46;
          FUN_10304c794(pcVar46,pcVar39,&PTR_PTR_1126c51c8,0x112e3c238);
        }
        pcVar41 = pcVar46 + 1;
        if (SCARRY8((long)pcVar46,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103049324);
          (*pcVar8)();
        }
        if (*(ulong *)(puVar10 + lVar20) < 0x1c &&
            (1L << (*(ulong *)(puVar10 + lVar20) & 0x3f) & 0xc004400U) != 0) break;
LAB_1030492a0:
        pcVar46 = pcStack_160;
        func_0x000107c61558();
        pcStack_a0 = pcStack_160;
        if (((ulong)pcVar46 & 1) == 0) {
          func_0x0001029bd1a0(0,*(long *)(pcStack_160 + 0x10) + 1,1);
        }
        uVar35 = *(ulong *)(pcStack_a0 + 0x10);
        if (*(ulong *)(pcStack_a0 + 0x18) >> 1 <= uVar35) {
          func_0x0001029bd1a0(1 < *(ulong *)(pcStack_a0 + 0x18),uVar35 + 1,1);
        }
        *(ulong *)(pcStack_a0 + 0x10) = uVar35 + 1;
        *(code **)(pcStack_a0 + uVar35 * 8 + 0x20) = pcVar25;
        pcVar46 = pcVar41;
        pcStack_160 = pcStack_a0;
        if (pcVar41 == pcVar30) goto LAB_103049360;
      }
      lVar26 = *(long *)(puVar10 + lVar23);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar26 == 0) {
        lVar45 = 0;
      }
      else {
        lVar45 = lVar26;
        func_0x000107c5a97c();
        func_0x000107c615e8(lVar26);
      }
      pcVar12 = pcVar25;
      FUN_103967f3c(pcVar25,lVar45);
      if (((ulong)pcVar12 & 1) != 0) goto LAB_1030492a0;
      func_0x000107c61170(pcVar25);
      pcVar46 = pcVar46 + 1;
    } while (pcVar41 != pcVar30);
  }
LAB_103049360:
  plVar33 = (long *)(puVar10 + _DAT_112f35d20);
  pcVar11 = pcStack_160;
  if (*(byte *)(plVar33 + 4) == 2) {
    apcStack_130[0] = pcStack_160;
    func_0x000107c6157c(pcStack_160);
  }
  else {
    lStack_e8 = plVar33[1];
    lStack_f0 = *plVar33;
    lStack_d8 = plVar33[3];
    lStack_e0 = plVar33[2];
    bStack_d0 = *(byte *)(plVar33 + 4) & 1;
    uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35d28);
    func_0x000107c6157c(uVar27);
    func_0x0001000d224c(&pcStack_a0);
    func_0x000107c61574(uVar27);
    uVar35 = *(ulong *)(unaff_x20 + 0x58);
    if (uVar35 == 0) {
      uVar38 = 0;
      uVar35 = 0xe000000000000000;
    }
    else {
      uVar38 = *(ulong *)(unaff_x20 + 0x50) & 0xffffffffffff;
    }
    func_0x000107c61434();
    func_0x000107c6142c(uVar35);
    pcVar46 = pcStack_80;
    pcVar30 = pcStack_88;
    if ((uVar35 & 0x2000000000000000) != 0) {
      uVar38 = uVar35 >> 0x38 & 0xf;
    }
    func_0x0001000a8868(&pcStack_a0,pcStack_88);
    plVar33 = &lStack_f0;
    (**(code **)(pcVar46 + 8))(pcStack_160,plVar33,uVar38 != 0,pcVar30,pcVar46);
    func_0x000107c61574(pcStack_160);
    uVar27 = *(undefined8 *)(puVar10 + _DAT_112f35b88);
    plStack_138 = plVar33;
    apcStack_130[0] = pcVar11;
    func_0x000107c61438(pcVar11,2);
    func_0x000107c6157c(uVar27);
    func_0x000100087c34(&plStack_138);
    func_0x000107c61574(uVar27);
    func_0x000107c6142c(pcVar11);
    func_0x0001000834e4(&pcStack_a0);
  }
  pcVar30 = (code *)((ulong)pcVar8 & 0xffffffffffffff8);
  if ((ulong)pcVar8 >> 0x3e == 0) {
    pcVar46 = *(code **)(pcVar30 + 0x10);
  }
  else {
    pcVar46 = pcVar30;
    if ((code *)0x7fffffffffffffff < pcVar8) {
      pcVar46 = pcVar8;
    }
    func_0x000107c60480();
  }
  pcVar25 = (code *)0x0;
  do {
    pcVar41 = pcVar25;
    if (pcVar46 == pcVar41) break;
    if (((ulong)pcVar8 & 0xc000000000000001) == 0) {
      if (*(code **)(pcVar30 + 0x10) <= pcVar41) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10304973c);
        (*pcVar8)();
      }
      pcVar25 = *(code **)(pcVar8 + (long)pcVar41 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      pcVar25 = pcVar41;
      FUN_10304c950();
    }
    if (SCARRY8((long)pcVar41,1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103049530);
      (*pcVar8)();
    }
    cVar7 = pcVar25[_DAT_112fe6d58];
    func_0x000107c61170();
    pcVar25 = pcVar41 + 1;
  } while (cVar7 != (code)0x2);
  if (((long)pcVar11 < 0) || (((ulong)pcVar11 >> 0x3e & 1) != 0)) {
    pcVar8 = (code *)((ulong)pcVar11 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar11) {
      pcVar8 = pcVar11;
    }
    func_0x000107c60480();
  }
  else {
    pcVar8 = *(code **)(((ulong)pcVar11 & 0xffffffffffffff8) + 0x10);
  }
  func_0x000107c6142c(pcVar11);
  if ((pcVar8 == (code *)0x0) ||
     (((pcVar46 == pcVar41 || (pcStack_168 == (code *)0x0)) &&
      (((byte)puVar10[lVar16 + 2] >> 1 & 1) != 0)))) {
    uVar27 = 0;
    FUN_103050598(0,0x112d56378,&PTR_PTR_1126ae790);
    func_0x000107c6157c(param_1);
    func_0x000100bc7fa4(uVar27);
    FUN_10304285c();
    func_0x000107c5c528();
    func_0x000107c615e8(uVar27);
    uVar28 = *(undefined8 *)(puVar10 + _DAT_112f35b28);
    func_0x000107c430c0(uVar28);
    func_0x000107c61180();
    uVar27 = uVar28;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(uVar28);
    puVar36 = &UNK_110601250;
    func_0x000107c613fc(&UNK_110601250,0x20,7);
    *(code **)(puVar36 + 0x10) = FUN_1030502cc;
    *(undefined8 *)(puVar36 + 0x18) = param_1;
    pcStack_80 = FUN_103050434;
    pcStack_a0 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = (code *)0x42000000;
    puStack_90 = &UNK_101218f4c;
    pcStack_88 = (code *)&UNK_110601268;
    ppcVar29 = &pcStack_a0;
    puStack_78 = puVar36;
    func_0x000107c60bc4(ppcVar29);
    puVar36 = puStack_78;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar36);
    func_0x000107c5c320(uVar27);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppcVar29);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar27);
  }
  else {
    func_0x000100087f6c(apcStack_130);
    func_0x000100c7f554();
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  func_0x000107c6142c(pcVar49);
  func_0x000107c6142c(pcVar39);
  func_0x000107c6142c(puVar22);
  func_0x000107c6142c(pcVar48);
  func_0x000107c6142c(pcVar11);
  func_0x000107c61170(puVar10);
  return;
LAB_103047438:
  func_0x000107c61170(pcVar48);
  pcVar51 = pcVar51 + 1;
  pcVar48 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar53 == pcVar14) goto LAB_103047db4;
  goto LAB_103047458;
}



/* Entry: 10304ecd0; end: 10304ee7b;  */

undefined * FUN_10304ecd0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar9 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar9;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10304ee3c);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_2 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar8;
          FUN_10304c794(uVar8,param_2,&PTR_PTR_1126b3568,0x112d60fb0);
        }
        uVar1 = uVar8 + 1;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10304ee38);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        if (param_1 == 0) break;
        if (param_1 == 2) {
          func_0x000108f43138();
          goto joined_r0x00010304ed98;
        }
        if ((param_1 != 1) || (func_0x000108f430b0(), (uVar5 & 1) != 0)) goto LAB_10304edc0;
LAB_10304ed30:
        func_0x000107c61170(uVar4);
        uVar8 = uVar8 + 1;
        if (uVar1 == uVar7) {
          return puVar2;
        }
      }
      func_0x000108f43028();
joined_r0x00010304ed98:
      if ((uVar5 & 1) == 0) goto LAB_10304ed30;
LAB_10304edc0:
      puVar6 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000102f03278(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar8 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
        func_0x000102f03278(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar2 + uVar8 * 8 + 0x20) = uVar4;
      uVar8 = uVar1;
    } while (uVar1 != uVar7);
  }
  return puVar2;
}



/* Entry: 10304ee7c; end: 10304ef87;  */

void FUN_10304ee7c(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_10304ecd0(param_3,param_1);
  if (param_3 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar3 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    func_0x000107c6142c();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c41164();
      func_0x000107c615e8(param_2);
    }
  }
  else {
    if ((param_3 & 0xc000000000000001) == 0) {
      if (*(long *)((param_3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10304ef88);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_10304c794(0,param_3,&PTR_PTR_1126b3568,0x112d60fb0);
    }
    func_0x000107c6142c(param_3);
    func_0x000108f43540(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10304ef88; end: 10305029f;  */

undefined * FUN_10304ef88(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 == 0) {
    bVar4 = (param_1 & 0xc000000000000001) == 0;
  }
  else {
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10304f170);
      (*pcVar3)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      bVar4 = true;
    }
    else {
      uVar8 = 0;
      do {
        FUN_10304c794(uVar8,param_1,&PTR_PTR_1126d4dd8,0x112d4c900);
        func_0x000107c615e8();
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
      bVar4 = false;
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if (bVar4) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10304f16c);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar8;
          FUN_10304c794(uVar8,param_1,&PTR_PTR_1126d4dd8,0x112d4c900);
        }
        uVar1 = uVar8 + 1;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10304f168);
          (*pcVar3)();
        }
        uVar6 = uVar5;
        func_0x000107c3f408();
        if ((uVar6 & 1) != 0) break;
        func_0x000107c61170(uVar5);
        uVar8 = uVar8 + 1;
        if (uVar1 == uVar9) {
          return puVar2;
        }
      }
      puVar7 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10304d584(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar8 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
        FUN_10304d584(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar2 + uVar8 * 8 + 0x20) = uVar5;
      uVar8 = uVar1;
    } while (uVar1 != uVar9);
  }
  return puVar2;
}



/* Entry: 1030502a0; end: 1030502cb;  */

void FUN_1030502a0(void)

{
  long unaff_x20;
  
  FUN_10304c050(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1030502cc; end: 1030502f3;  */

void FUN_1030502cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 1030502f4; end: 103050433;  */

undefined * FUN_1030502f4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  undefined8 auStack_60 [2];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f11b000);
  lVar5 = lVar4;
  func_0x000108f59254();
  func_0x000107c61180();
  if (lVar5 != 0) {
    puVar6 = PTR_PTR_1126c51c8;
    func_0x000107c61168(PTR_PTR_1126c51c8);
    puVar7 = puVar6;
    func_0x000108f5926c();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ee88(&stack0xffffffffffffffb0 + lVar1,0);
    func_0x000107c5ee70();
    (**(code **)(lVar9 + 8))(&stack0xffffffffffffffb0 + lVar1,lVar3);
    *(undefined8 *)((long)auStack_60 + lVar1) = 0;
    *(undefined8 *)((long)auStack_60 + lVar1 + 8) = 0;
    func_0x000107c41154(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103050434);
  (*pcVar2)();
}



/* Entry: 103050434; end: 1030504c3;  */

void FUN_103050434(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lStack_38 = 0;
  uVar3 = 0;
  FUN_103050598(0,0x112e3c238,&PTR_PTR_1126c51c8);
  func_0x000107c5fc50(param_1,&lStack_38,uVar3);
  lVar2 = lStack_38;
  if (lStack_38 != 0) {
    (*pcVar1)(lStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  (*pcVar1)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1030504c4; end: 1030504d7;  */

void FUN_1030504c4(void)

{
  FUN_1030504d8();
  return;
}



/* Entry: 1030504d8; end: 103050597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030504d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f35be8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + _DAT_112f35be8,auStack_58,0x20,0);
  lVar3 = *(long *)(lVar3 + lVar1);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar6 = 0;
    bVar4 = true;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    bVar4 = (uVar5 & 1) == 0;
    if (bVar4) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar2 * 8);
    }
    func_0x000107c6142c(lVar3);
  }
  *param_1 = uVar6;
  *(bool *)(param_1 + 1) = bVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103050598; end: 103050643;  */

void FUN_103050598(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103050644; end: 1030508e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103050644(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar14 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c3db60();
    func_0x000107c61180();
    puVar12 = PTR___sypN_11034f1a8;
    lVar16 = lVar14;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar14);
    puVar11 = PTR___sSSN_11034da80;
    lVar15 = lVar16;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    for (lVar14 = *(long *)(lVar16 + 0x10); lVar14 != 0; lVar14 = lVar14 + -1) {
      lVar15 = lVar15 + 0x20;
      func_0x0001000bb420(lVar15,&puStack_e8);
      func_0x000100102924(&puStack_e8,auStack_b8);
      puVar6 = &uStack_98;
      func_0x000107c6147c(puVar6,auStack_b8,puVar12 + 8,puVar11,6);
      lVar4 = lStack_90;
      uVar2 = uStack_98;
      if ((((ulong)puVar6 & 1) != 0) && (lStack_90 != 0)) {
        puVar7 = puVar8;
        func_0x000107c61558();
        puVar9 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_10304dc58(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_10304dc58(puVar8,uVar1 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar2;
        *(long *)(puVar8 + uVar1 * 0x10 + 0x28) = lVar4;
      }
    }
    func_0x000107c6142c(lVar16);
    lVar15 = _DAT_112f35cb8;
    lVar14 = *(long *)(puVar8 + 0x10);
    if (lVar14 != 0) {
      puVar6 = (undefined8 *)(puVar8 + 0x28);
      do {
        lVar16 = *(long *)(lVar5 + lVar15);
        if (lVar16 != 0) {
          uVar2 = puVar6[-1];
          uVar3 = *puVar6;
          func_0x000107c61434(uVar3);
          uVar10 = uVar2;
          func_0x000107c5fadc(uVar2,uVar3);
          puVar11 = &UNK_110600e00;
          func_0x000107c613fc(&UNK_110600e00,0x18,7);
          func_0x000107c61614(puVar11 + 0x10,lVar5);
          puVar12 = &UNK_1106012a0;
          func_0x000107c613fc(&UNK_1106012a0,0x28,7);
          *(undefined **)(puVar12 + 0x10) = puVar11;
          *(undefined8 *)(puVar12 + 0x18) = uVar2;
          *(undefined8 *)(puVar12 + 0x20) = uVar3;
          pcStack_c8 = FUN_1030508e4;
          puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e0 = 0x42000000;
          puStack_d8 = &UNK_100f11160;
          puStack_d0 = &UNK_1106012b8;
          ppuVar13 = &puStack_e8;
          puStack_c0 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_c0);
          func_0x000107c43254(lVar16);
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(uVar10);
        }
        puVar6 = puVar6 + 2;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1030508e4; end: 103050a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030508e4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_2 != 0) {
    ppuVar7 = &puStack_b0;
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
      lVar3 = lVar5 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        uVar9 = *(undefined8 *)(lVar3 + _DAT_112f35d38);
        func_0x000107c61434(param_2);
        func_0x000107c61174(uVar9);
        func_0x000107c61170(lVar3);
        puVar4 = &UNK_110600e00;
        func_0x000107c613fc(&UNK_110600e00,0x18,7);
        func_0x000107c61428(lVar5 + 0x10,auStack_80,0,0);
        lVar5 = lVar5 + 0x10;
        func_0x000107c61618(lVar5);
        func_0x000107c61614(puVar4 + 0x10,lVar5);
        func_0x000107c61170(lVar5);
        puVar6 = &UNK_1106012f0;
        func_0x000107c613fc(&UNK_1106012f0,0x38,7);
        *(undefined **)(puVar6 + 0x10) = puVar4;
        *(undefined8 *)(puVar6 + 0x18) = uVar2;
        *(undefined8 *)(puVar6 + 0x20) = uVar8;
        *(ulong *)(puVar6 + 0x28) = param_1;
        *(ulong *)(puVar6 + 0x30) = param_2;
        pcStack_90 = FUN_103050a70;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1000f6b44;
        puStack_98 = &UNK_110601308;
        puStack_88 = puVar6;
        func_0x000107c60bc4(&puStack_b0);
        puVar4 = puStack_88;
        func_0x000107c61434(uVar8);
        func_0x000107c61574(puVar4);
        func_0x000107c4e524(uVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(uVar9);
      }
    }
  }
  return;
}



/* Entry: 103050a70; end: 103050c5b;  */

/* WARNING: Removing unreachable block (ram,0x000103050ae4) */
/* WARNING: Removing unreachable block (ram,0x000103050b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103050a70(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar11 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112f35c18;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(lVar7 + _DAT_112f35c18);
  func_0x000107c6157c(uVar10);
  func_0x000104886d18(&lStack_80);
  func_0x000107c61574(uVar10);
  if (*(long *)(lStack_80 + 0x10) != 0) {
    func_0x000107c61434(lStack_80);
    lVar8 = lVar3;
    uVar9 = uVar2;
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(lStack_80 + 0x38) + lVar8 * 0x10);
      uVar9 = *puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434(uVar5);
      func_0x000107c6142c(lStack_80);
      if (uVar9 == uVar4 && uVar5 == uVar11) {
        func_0x000107c6142c(uVar5);
      }
      else {
        func_0x000107c605b8(uVar9,uVar5,uVar4,uVar11,0);
        func_0x000107c6142c(uVar5);
        if ((uVar9 & 1) == 0) goto LAB_103050b98;
      }
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(lStack_80);
      return;
    }
    func_0x000107c6142c(lStack_80);
  }
LAB_103050b98:
  lVar8 = lStack_80;
  func_0x000107c61558(lStack_80);
  func_0x000107c61434(uVar11);
  func_0x00010018433c(uVar4,uVar11,lVar3,uVar2,lVar8);
  uVar10 = *(undefined8 *)(lVar7 + lVar6);
  func_0x000107c6157c(uVar10);
  func_0x0001007d6d78(&lStack_80);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar7 + _DAT_112f35ba0);
  func_0x000107c6157c(uVar10);
  func_0x0001002a64a8();
  func_0x000107c61170(lVar7);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(lStack_80);
  return;
}



/* Entry: 103050c5c; end: 103050d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103050c5c(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f35d38);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    pcStack_58 = FUN_103050d3c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110601330;
    ppuVar2 = &puStack_78;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103050d3c; end: 103050da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103050d3c(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103050da8; end: 1030511eb;  */

void FUN_103050da8(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long lVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined8 uStack_110;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  byte abStack_79 [9];
  
  lVar19 = *param_2;
  puVar15 = (ulong *)(lVar19 + 0x40);
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  puVar2 = *(undefined **)(unaff_x20 + 0x18);
  uVar21 = -1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar23 = 0xffffffffffffffff;
  if (-uVar21 < 0x40) {
    uVar23 = ~(-1L << (-uVar21 & 0x3f));
  }
  uVar23 = uVar23 & *puVar15;
  puVar8 = (undefined *)0x2;
  func_0x000107c61438(lVar19);
  lVar17 = 0;
  uVar14 = uVar23;
  lVar18 = lVar17;
  do {
    while (uVar23 == 0) {
      bVar4 = SCARRY8(lVar17,1);
      lVar17 = lVar17 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1030511e4);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar21 >> 6) <= lVar17) {
        uVar14 = 0;
        uVar11 = 0;
LAB_103051198:
        func_0x000107c6142c(lVar19);
        func_0x0001030512bc(lVar19,puVar15,~uVar21,lVar18,uVar14);
        *param_1 = uVar11;
        return;
      }
      uVar23 = puVar15[lVar17];
    }
    uVar20 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    puVar13 = *(undefined **)
               (*(long *)(lVar19 + 0x38) + LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) * 8 +
               lVar17 * 0x200);
    puVar16 = puVar13;
    func_0x000107c615f0();
    func_0x000107c447dc();
    if ((((ulong)puVar16 & 1) == 0) &&
       (puVar16 = puVar13, func_0x000107c49b6c(), ((ulong)puVar16 & 1) == 0)) {
      abStack_79[0] = 0;
      puVar16 = puVar13;
      func_0x000107c5c3a8();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        uStack_110 = 0;
        puVar9 = puVar8;
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &UNK_110601390;
        func_0x000107c613fc(&UNK_110601390,0x18,7);
        *(byte **)(puVar8 + 0x10) = abStack_79;
        puVar5 = &UNK_1106013b8;
        puVar9 = (undefined *)0x20;
        func_0x000107c613fc(&UNK_1106013b8,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x1030512d4;
        *(undefined **)(puVar5 + 0x18) = puVar8;
        pcStack_90 = FUN_1030512e4;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1020ca114;
        puStack_98 = &UNK_1106013d0;
        ppuVar6 = &puStack_b0;
        puStack_88 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_88);
        func_0x000107c4c594(puVar16);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar16);
        if ((abStack_79[0] & 1) != 0) {
          func_0x0001030512c4(0x1030512d4);
          goto LAB_103050e4c;
        }
        uStack_110 = 0x1030512d4;
      }
      puVar16 = puVar13;
      func_0x000107c4e04c();
      func_0x000107c61180();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar16 != (undefined *)0x0) {
        puVar9 = (undefined *)0x112d64d20;
        func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
        puVar5 = puVar16;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar16);
      }
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar16 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar16 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar16 != (undefined *)0x0) {
        lVar12 = 4;
        do {
          uVar20 = lVar12 - 4;
          if (((ulong)puVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1030511ec);
              (*pcVar3)();
            }
            uVar22 = *(ulong *)(puVar5 + lVar12 * 8);
            func_0x000107c615f0(uVar22);
            puVar10 = puVar9;
          }
          else {
            uVar22 = uVar20;
            puVar10 = puVar5;
            func_0x0001011be488();
          }
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1030511e8);
            (*pcVar3)();
          }
          puVar24 = (undefined *)(lVar12 + -3);
          uVar20 = uVar22;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (uVar20 == 0) {
            func_0x000107c615e8(uVar22);
LAB_103051170:
            func_0x000107c6142c(puVar5);
            func_0x0001030512c4(uStack_110,puVar8);
            func_0x000107c615e8(puVar13);
            uVar11 = 1;
            goto LAB_103051198;
          }
          uVar7 = uVar20;
          func_0x000107c5faec();
          puVar9 = puVar10;
          func_0x000107c61170(uVar20);
          if ((uVar7 == uVar1) && (puVar10 == puVar2)) {
            func_0x000107c6142c(puVar10);
            func_0x000107c615e8(uVar22);
          }
          else {
            puVar9 = puVar10;
            func_0x000107c605b8(uVar7,puVar10,uVar1,puVar2,0);
            func_0x000107c6142c(puVar10);
            func_0x000107c615e8(uVar22);
            if ((uVar7 & 1) == 0) goto LAB_103051170;
          }
          lVar12 = lVar12 + 1;
        } while (puVar24 != puVar16);
      }
      func_0x000107c6142c();
      func_0x0001030512c4(uStack_110);
    }
LAB_103050e4c:
    uVar23 = uVar23 - 1 & uVar23;
    func_0x000107c615e8(puVar13);
    uVar14 = uVar23;
    lVar18 = lVar17;
  } while( true );
}



/* Entry: 1030511ec; end: 1030512bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030511ec(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112f35c48);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    auStack_60[0] = uVar1;
    func_0x0001007d6d78(auStack_60);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1030512bc; end: 1030512e3;  */

void FUN_1030512bc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1030512e4; end: 103051303;  */

void FUN_1030512e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103051304; end: 1030513c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103051304(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112f35ba8);
    uStack_49 = uVar1;
    if ((*(byte *)(lVar2 + _DAT_112f35d40 + 1) >> 1 & 1) != 0) {
      uStack_49 = 1;
    }
    func_0x000107c6157c(uVar3);
    func_0x0001007d6d78(&uStack_49);
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar3);
    func_0x0001002a64a8();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1030513c4; end: 1030514f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030513c4(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1030514f8; end: 1030515ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030514f8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10304ef88();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35c28);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar2);
    func_0x000100087c34(&uStack_50);
    func_0x000107c61574(uVar2);
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar3);
    func_0x0001002a64a8();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1030515ac; end: 1030516af;  */

/* WARNING: Removing unreachable block (ram,0x000103051610) */
/* WARNING: Removing unreachable block (ram,0x000103051658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030515ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35b78);
    func_0x000107c6157c(uVar2);
    func_0x000104886d18(auStack_68);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35c30);
    func_0x000107c6157c(uVar2);
    func_0x000104886d18(auStack_68);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030516b0; end: 103051773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030516b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f35c30);
    uStack_40 = uVar2;
    func_0x000107c6157c(uVar3);
    func_0x0001007d6d78(&uStack_40);
    func_0x000107c61574(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35b78);
    uStack_40 = CONCAT71(uStack_40._1_7_,1);
    func_0x000107c6157c(uVar2);
    func_0x0001007d6d78(&uStack_40);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35ba0);
    func_0x000107c6157c(uVar2);
    func_0x0001002a64a8();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103051774; end: 1030517bb;  */

void FUN_103051774(void)

{
  FUN_1030517bc(0x10304f5dc,&DAT_112f35be8);
  return;
}



/* Entry: 1030517bc; end: 10305182f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030517bc(code *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + _DAT_112f35cf8);
  (*param_1)();
  lVar3 = *param_2;
  func_0x000107c61428(lVar4 + lVar3,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar4 + lVar3);
  *(undefined8 *)(lVar4 + lVar3) = uVar1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103051830; end: 103051837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103051830(ulong param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long extraout_x8;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  byte *unaff_x24;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong auStack_120 [8];
  byte abStack_e0 [12];
  uint uStack_d4;
  byte *pbStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  uint uStack_b4;
  ulong uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  byte *pbStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar5 = (byte *)0x0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(pbVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar7 = abStack_e0 + lVar13;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar6 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    uVar19 = 1;
    uVar15 = 0;
    lVar6 = unaff_x20;
  }
  else {
    pbVar11 = param_2;
    pbStack_d0 = pbVar7;
    FUN_103046574();
    pbVar7 = param_2;
    func_0x000103046678();
    uVar15 = 1;
    if (((ulong)pbVar11 & 1) != 0) {
      uVar15 = 2;
    }
    if (((ulong)pbVar7 & 1) == 0) {
      uVar15 = (ulong)pbVar11 & 1;
    }
    pbVar7 = param_2;
    func_0x00010304677c();
    lVar10 = uVar15 + ((ulong)pbVar7 & 1);
    uStack_b4 = (uint)param_2[3];
    lStack_c8 = lVar18;
    pbStack_c0 = pbVar5;
    uStack_b0 = param_3;
    pbStack_a8 = param_2;
    lStack_a0 = lVar6;
    if ((param_2[3] & 1) != 0) {
      uVar15 = *(ulong *)(param_2 + 0x48);
      if (uVar15 >> 0x3e == 0) {
        uVar19 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar19 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar19 = uVar15;
        }
        func_0x000107c60480();
      }
      if (uVar19 != 0) {
        if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103046570);
          (*pcVar2)();
        }
        uVar20 = 0;
        do {
          if ((uVar15 & 0xc000000000000001) == 0) {
            uVar8 = *(ulong *)(uVar15 + uVar20 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar20;
            FUN_10304c794(uVar20,uVar15,&PTR_PTR_1126d4dd8,0x112d4c900);
          }
          uVar17 = uVar8;
          func_0x000107c3f408();
          func_0x000107c61170(uVar8);
          if (((int)uVar17 != 0) && (bVar3 = SCARRY8(lVar10,1), lVar10 = lVar10 + 1, bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1030460a8);
            (*pcVar2)();
          }
          uVar20 = uVar20 + 1;
        } while (uVar19 != uVar20);
      }
    }
    lVar6 = lStack_a0;
    if (SCARRY8(lVar10,3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046538);
      (*pcVar2)();
    }
    lVar18 = lVar10 + 3;
    if (lVar10 <= lVar10 + 3) {
      lVar18 = lVar10;
    }
    iVar4 = (int)*(undefined8 *)(lStack_a0 + _DAT_112f35ce8);
    func_0x000108f48528();
    if (iVar4 == 0) {
      uVar14 = 1;
    }
    else {
      uVar14 = *(byte *)(lVar6 + _DAT_112f35cc8) ^ 1;
    }
    uVar15 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar19 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar19 = uVar15;
      if (0x7fffffffffffffff < param_1) {
        uVar19 = param_1;
      }
      func_0x000107c60480();
    }
    pbVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar19 != 0) {
      uVar20 = 0;
      do {
        while( true ) {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103046528);
              (*pcVar2)();
            }
            uVar8 = *(ulong *)(param_1 + uVar20 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar20;
            FUN_10304c950(uVar20,param_1);
          }
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103046524);
            (*pcVar2)();
          }
          uVar17 = uVar20 + 1;
          if (*(char *)(uVar8 + _DAT_112fe6d58) != '\x01') break;
          pbVar5 = pbVar7;
          lStack_98 = lVar18;
          func_0x000107c61558();
          uStack_d4 = uVar14;
          pbStack_88 = pbVar7;
          if (((ulong)pbVar5 & 1) == 0) {
            func_0x00010304d5c0(0,*(long *)(pbVar7 + 0x10) + 1,1);
          }
          uVar20 = *(ulong *)(pbStack_88 + 0x10);
          if (*(ulong *)(pbStack_88 + 0x18) >> 1 <= uVar20) {
            func_0x00010304d5c0(1 < *(ulong *)(pbStack_88 + 0x18),uVar20 + 1,1);
          }
          *(ulong *)(pbStack_88 + 0x10) = uVar20 + 1;
          *(ulong *)(pbStack_88 + uVar20 * 8 + 0x20) = uVar8;
          pbVar7 = pbStack_88;
          lVar18 = lStack_98;
          uVar20 = uVar17;
          uVar14 = uStack_d4;
          if (uVar17 == uVar19) goto LAB_103046228;
        }
        func_0x000107c61170();
        uVar20 = uVar20 + 1;
      } while (uVar17 != uVar19);
    }
LAB_103046228:
    if (((long)pbVar7 < 0) || (((ulong)pbVar7 >> 0x3e & 1) != 0)) {
      pbVar5 = pbVar7;
      func_0x000107c60480();
    }
    else {
      pbVar5 = *(byte **)(pbVar7 + 0x10);
    }
    unaff_x24 = pbStack_a8;
    uVar15 = uStack_b0;
    func_0x000107c61574(pbVar7);
    if (((uVar14 & 0 < (long)pbVar5) != 0) &&
       (bVar3 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046564);
      (*pcVar2)();
    }
    uVar14 = uStack_b4;
    if ((unaff_x24[1] & 1) == 0) {
      uVar14 = uStack_b4 & *unaff_x24;
    }
    if (((uVar14 & 1) != 0) && (bVar3 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046568);
      (*pcVar2)();
    }
    lVar16 = *(long *)(unaff_x24 + 0x60);
    uVar9 = 0;
    FUN_103050598(0,0x112d55c08,&PTR_PTR_1126b47a0);
    lVar6 = lVar16;
    func_0x000107c5fc48(lVar16,uVar9);
    lVar10 = lVar6;
    func_0x000106971dac();
    func_0x000107c61170(lVar6);
    if (((((uint)uVar15 >> 4 & 1) != 0) && (-1 < lVar10)) &&
       (bVar3 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304656c);
      (*pcVar2)();
    }
    lStack_98 = lVar18;
    func_0x000107c5fc48(lVar16,uVar9);
    pbVar7 = pbStack_d0;
    lVar6 = lVar16;
    func_0x000107c5eea0(pbStack_d0);
    func_0x000107c5ee70();
    (**(code **)(lStack_c8 + 8))(pbVar7,pbStack_c0);
    func_0x000106979890();
    func_0x000107c61180();
    pbVar5 = pbVar7;
    func_0x000106979890();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x24 + 0x68);
    lStack_90 = 0;
    pbStack_88 = (byte *)0x0;
    *(undefined8 *)((long)auStack_120 + lVar13 + 0x30) = *(undefined8 *)(unaff_x24 + 0x70);
    *(undefined8 *)((long)auStack_120 + lVar13 + 0x38) = uVar9;
    func_0x000106978a54(lVar16,lVar6,&pbStack_88,&lStack_90,uVar15 >> 4 & 1,pbVar7,pbVar5,1);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(pbVar7);
    func_0x000107c61170(pbVar5);
    param_2 = pbStack_88;
    lVar6 = lStack_90;
    if (pbStack_88 == (byte *)0x0) {
      func_0x000107c61174(lStack_90);
      pbVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_10304649c;
LAB_1030463d8:
      pbVar5 = *(byte **)(((ulong)pbVar7 & 0xffffffffffffff8) + 0x10);
      if (pbVar5 != (byte *)0x0) goto LAB_1030463e4;
LAB_1030464b4:
      unaff_x20 = 0;
    }
    else {
      pbStack_88 = (byte *)0x0;
      func_0x000107c61174(lStack_90);
      pbVar7 = param_2;
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c5fc50();
      func_0x000107c61170(pbVar7);
      pbVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pbStack_88 != (byte *)0x0) {
        pbVar7 = pbStack_88;
      }
      if ((ulong)pbVar7 >> 0x3e == 0) goto LAB_1030463d8;
LAB_10304649c:
      pbVar5 = (byte *)((ulong)pbVar7 & 0xffffffffffffff8);
      if ((byte *)0x7fffffffffffffff < pbVar7) {
        pbVar5 = pbVar7;
      }
      func_0x000107c60480();
      if (pbVar5 == (byte *)0x0) goto LAB_1030464b4;
LAB_1030463e4:
      unaff_x24 = (byte *)0x0;
      unaff_x20 = 0;
      do {
        if (((ulong)pbVar7 & 0xc000000000000001) == 0) {
          if (*(byte **)(((ulong)pbVar7 & 0xffffffffffffff8) + 0x10) <= unaff_x24) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103046530);
            (*pcVar2)();
          }
          pbVar11 = *(byte **)(pbVar7 + (long)unaff_x24 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pbVar11 = unaff_x24;
          FUN_10304c794(unaff_x24,pbVar7,&PTR_PTR_1126b47a0,0x112d55c08);
        }
        pbVar1 = unaff_x24 + 1;
        if (SCARRY8((long)unaff_x24,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10304652c);
          (*pcVar2)();
        }
        pbVar12 = pbVar11;
        func_0x000107c4f638();
        func_0x000107c61180();
        if (pbVar12 == (byte *)0x0) {
          func_0x000107c61170(pbVar11);
          unaff_x20 = 0;
        }
        else {
          func_0x000107c61170();
          func_0x000107c61170(pbVar11);
          bVar3 = SCARRY8(unaff_x20,1);
          unaff_x20 = unaff_x20 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103046534);
            (*pcVar2)();
          }
        }
        unaff_x24 = unaff_x24 + 1;
      } while (pbVar1 != pbVar5);
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lStack_a0);
    func_0x000107c6142c(pbVar7);
    uVar15 = lStack_98 + unaff_x20;
    if (SCARRY8(lStack_98,unaff_x20)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046560);
      (*pcVar2)();
    }
    uVar19 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar15;
  }
  func_0x000107c60e78();
  *(byte **)((long)auStack_120 + lVar13) = unaff_x24;
  *(byte **)((long)auStack_120 + lVar13 + 8) = pbVar5;
  *(byte **)((long)auStack_120 + lVar13 + 0x10) = pbVar7;
  *(byte **)((long)auStack_120 + lVar13 + 0x18) = param_2;
  *(long *)((long)auStack_120 + lVar13 + 0x20) = lVar6;
  *(long *)((long)auStack_120 + lVar13 + 0x28) = unaff_x20;
  *(undefined1 **)((long)auStack_120 + lVar13 + 0x30) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_120 + lVar13 + 0x38) = FUN_103046574;
  lVar13 = *(long *)(lVar6 + _DAT_112f35c90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 == 0) {
    uVar14 = 0;
  }
  else {
    lVar18 = lVar13;
    func_0x000107c44b1c();
    uVar14 = (uint)lVar18;
    func_0x000107c615e8(lVar13);
  }
  uVar20 = *(ulong *)(lVar6 + _DAT_112f35c88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar20 != 0) {
    uVar8 = uVar20;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar20);
    if (uVar8 != 0) {
      uVar20 = uVar8;
      func_0x000107c5faec(uVar8);
      func_0x000107c61170(uVar8);
      uVar20 = uVar20 & 0xffffffffffff;
      goto LAB_103046628;
    }
  }
  uVar20 = 0;
  uVar19 = 0xe000000000000000;
LAB_103046628:
  func_0x000107c6142c(uVar19);
  if ((uVar19 & 0x2000000000000000) != 0) {
    uVar20 = uVar19 >> 0x38 & 0xf;
  }
  return (ulong)((uVar20 == 0 | uVar14) &
                 (uint)((int)*(undefined8 *)(uVar15 + 0x40) != 0 | *(byte *)(uVar15 + 3)) & 1);
}



/* Entry: 103051838; end: 1030518f3;  */

void FUN_103051838(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = SUB81(&uStack_a0,0);
  uVar2 = *param_2;
  uStack_58 = param_2[10];
  uStack_60 = param_2[9];
  uStack_48 = param_2[0xc];
  uStack_50 = param_2[0xb];
  uStack_40 = param_2[0xd];
  uStack_38 = (undefined1)param_2[0xe];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x71) >> 0x38);
  uStack_98 = param_2[2];
  uStack_a0 = param_2[1];
  uStack_88 = param_2[4];
  uStack_90 = param_2[3];
  uStack_78 = param_2[6];
  uStack_80 = param_2[5];
  uStack_68 = param_2[8];
  uStack_70 = param_2[7];
  (**(code **)(unaff_x20 + 0x10))(uVar2,&uStack_a0,param_2[0x11]);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 1030518f4; end: 1030518f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030518f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0x112d5ba30;
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35b60);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1030518f8; end: 10305197f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030518f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0x112d5ba30;
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35b60);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 103051980; end: 1030519a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103051980(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112f35c00);
      func_0x000107c6157c(uVar2);
      func_0x000107c61170(lVar1);
      lStack_50 = lVar3;
      func_0x0001007d6d78(&lStack_50);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 1030519a4; end: 103051a27;  */

void FUN_1030519a4(long *param_1,long *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + *param_2);
      func_0x000107c6157c(uVar2);
      func_0x000107c61170(lVar1);
      lStack_50 = lVar3;
      func_0x0001007d6d78(&lStack_50);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 103051a28; end: 103051da7;  */

/* WARNING: Removing unreachable block (ram,0x000103051b48) */
/* WARNING: Removing unreachable block (ram,0x000103051bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103051a28(undefined1 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_f8;
  undefined8 auStack_b8 [3];
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [32];
  
  uVar13 = *(ulong *)(param_2 + 0x10);
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d88);
    (*pcVar12)();
  }
  if (uVar13 == 1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d8c);
    (*pcVar12)();
  }
  if (uVar13 < 3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d90);
    (*pcVar12)();
  }
  if (uVar13 == 3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d94);
    (*pcVar12)();
  }
  if (uVar13 < 5) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d98);
    (*pcVar12)();
  }
  if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d9c);
    (*pcVar12)();
  }
  if (*(long *)(param_4 + 0x10) == 1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051da0);
    (*pcVar12)();
  }
  uVar7 = *(undefined1 *)(param_2 + 0x20);
  uVar8 = *(undefined1 *)(param_2 + 0x21);
  uVar9 = *(undefined1 *)(param_2 + 0x22);
  uVar10 = *(undefined1 *)(param_2 + 0x23);
  uVar11 = *(undefined1 *)(param_2 + 0x24);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  uVar5 = *(undefined8 *)(param_4 + 0x38);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar16 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar16 == 0) {
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar4);
    uStack_f8 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar16 + _DAT_112f35c10);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(uVar15);
    func_0x000107c61434(uVar4);
    func_0x000107c61170(lVar16);
    func_0x000104886d18(auStack_a0);
    func_0x000107c61574(uVar15);
    uStack_f8 = auStack_a0[0];
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a0,0,0);
  lVar16 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar16 == 0) {
    uVar13 = *(ulong *)(param_3 + 0x10);
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar16 + _DAT_112f35c08);
    func_0x000107c6157c(uVar15);
    func_0x000107c61170(lVar16);
    func_0x000104886d18(auStack_b8);
    func_0x000107c61574(uVar15);
    uVar13 = *(ulong *)(param_3 + 0x10);
    uVar15 = auStack_b8[0];
  }
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051d84);
    (*pcVar12)();
  }
  if (uVar13 == 1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051da4);
    (*pcVar12)();
  }
  if (uVar13 < 3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103051da8);
    (*pcVar12)();
  }
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x30);
  puVar17 = auStack_b8;
  func_0x000107c61428(unaff_x20 + 0x10,puVar17,0,0);
  lVar16 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar16 == 0) {
LAB_103051cd4:
    lVar16 = 0;
  }
  else {
    lVar14 = *(long *)(lVar16 + _DAT_112f35c88);
    func_0x000107c61174();
    func_0x000107c61170(lVar16);
    lVar16 = lVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    if (lVar16 != 0) {
      lVar14 = lVar16;
      func_0x000107c4f38c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar16);
      if (lVar14 != 0) {
        lVar16 = lVar14;
        func_0x000107c5faec();
        func_0x000107c61170(lVar14);
        goto LAB_103051cdc;
      }
      goto LAB_103051cd4;
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_103051cdc:
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = uVar11;
  param_1[5] = (byte)((ulong)param_8 >> 8) & 1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar18;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  *(long *)(param_1 + 0x50) = lVar16;
  *(undefined8 **)(param_1 + 0x58) = puVar17;
  *(undefined8 *)(param_1 + 0x60) = param_7;
  *(undefined8 *)(param_1 + 0x68) = uStack_f8;
  *(undefined8 *)(param_1 + 0x70) = uVar15;
  param_1[0x78] = param_9 & 1;
  func_0x000107c61434();
  func_0x000107c61434(param_6);
  return;
}



/* Entry: 103051da8; end: 103051db7;  */

void FUN_103051da8(undefined4 *param_1,undefined8 *param_2)

{
  uint7 uVar1;
  long unaff_x20;
  undefined1 auStack_a0 [4];
  byte bStack_9c;
  byte bStack_9b;
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
  byte bStack_28;
  
  (**(code **)(unaff_x20 + 0x10))
            (auStack_a0,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
             *(undefined1 *)(param_2 + 7));
  uVar1 = CONCAT16(auStack_a0[3],
                   (uint6)(CONCAT14(auStack_a0[2],
                                    (uint)(CONCAT12(auStack_a0[1],(ushort)(auStack_a0[0] & 1)) &
                                          0x1ffff)) & 0x1ffffffff)) & 0x1ffffffffffff;
  *param_1 = CONCAT13((char)(uVar1 >> 0x30),
                      CONCAT12((char)(uVar1 >> 0x20),CONCAT11((char)(uVar1 >> 0x10),(char)uVar1)));
  *(byte *)(param_1 + 1) = bStack_9c & 1;
  *(byte *)((long)param_1 + 5) = bStack_9b & 1;
  *(undefined8 *)(param_1 + 4) = uStack_90;
  *(undefined8 *)(param_1 + 2) = uStack_98;
  *(undefined8 *)(param_1 + 8) = uStack_80;
  *(undefined8 *)(param_1 + 6) = uStack_88;
  *(undefined8 *)(param_1 + 0xc) = uStack_70;
  *(undefined8 *)(param_1 + 10) = uStack_78;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  *(undefined8 *)(param_1 + 0xe) = uStack_68;
  *(undefined8 *)(param_1 + 0x12) = uStack_58;
  *(undefined8 *)(param_1 + 0x16) = uStack_48;
  *(undefined8 *)(param_1 + 0x14) = uStack_50;
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  *(undefined8 *)(param_1 + 0x1a) = uStack_38;
  *(byte *)(param_1 + 0x1e) = bStack_28 & 1;
  return;
}



/* Entry: 103051db8; end: 103051dcb;  */

void FUN_103051db8(void)

{
  FUN_1030502a0();
  return;
}



/* Entry: 103051dcc; end: 103051e3f;  */

void FUN_103051dcc(long param_1,long param_2)

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



/* Entry: 103051e40; end: 103051e53;  */

void FUN_103051e40(void)

{
  FUN_1030504c4();
  return;
}



/* Entry: 103051e54; end: 103051e57;  */

void FUN_103051e54(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10304522c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103051e58; end: 103051f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103051e58(long param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c613fc();
  if (*(char *)(param_2 + _DAT_11307ce50) == '\0') {
    func_0x00010008a7c8(&uStack_48);
    func_0x000100083b20(&uStack_50);
    func_0x000107c61574(uStack_48);
    uVar1 = *(undefined8 *)(param_1 + _DAT_113083f10);
    func_0x000107c615f0(uVar1);
    func_0x000107c3e2c0();
    func_0x000107c61170(uStack_50);
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return unaff_x20;
}



/* Entry: 103051f2c; end: 103051f73;  */

void FUN_103051f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103051f74; end: 1030522a7;  */

void FUN_103051f74(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103052298);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5c5e8();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0xd000000000000078;
  func_0x000107c5fadc(0xd000000000000078,0x800000010f11b070);
  func_0x000107c59c6c(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c59c74(puVar3);
  func_0x000107c56ba8(puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305229c);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 7;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  puVar5 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030522a0);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar8 = puVar5;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar7);
  *(undefined **)(lVar2 + 0x20) = puVar8;
  puVar5 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40284(0xc040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar2 + 0x28) = puVar8;
    puVar5 = puVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = unaff_x20;
      func_0x000107c3f764(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar9 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar6);
      *(undefined **)(lVar2 + 0x30) = puVar9;
      uVar4 = 0;
      func_0x000100847984(0);
      lVar6 = lVar2;
      func_0x000107c5fc48(lVar2,uVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030522a8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030522a4);
  (*pcVar1)();
}



/* Entry: 1030522a8; end: 1030522cf; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation24EmptyStateViewController viewDidLoad] */

void FUN_1030522a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103051f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030522d0; end: 103052387; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation24EmptyStateViewController initWithNibName:bundle:] */

undefined1 * FUN_1030522d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 103052388; end: 103052407; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation24EmptyStateViewController initWithCoder:] */

undefined1 * FUN_103052388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103052408; end: 10305245b;  */

void FUN_103052408(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10305245c; end: 103052563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10305245c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long lStack_48;
  
  func_0x000107c613fc();
  if (*(char *)(param_2 + _DAT_11307ce50) == '\x01') {
    func_0x000100083b20(&lStack_48);
    uVar2 = *(undefined8 *)(lStack_48 + _DAT_113097748);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lStack_48);
    func_0x000107c5bb50(uVar2);
    func_0x000107c615e8(uVar2);
    func_0x0001000b9aa4();
    uVar1 = 0;
    func_0x00010305243c(0);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c57f18(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return unaff_x20;
}



/* Entry: 103052564; end: 1030525ab;  */

void FUN_103052564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030525ac; end: 103052983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030525ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f36078) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f36080) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f36088) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f36090) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f36098) = param_5;
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,puVar5);
  if (*(char *)(param_2 + _DAT_11307ce50) == '\x01') {
    func_0x000100083b20(alStack_90);
    lVar1 = alStack_90[0];
    uVar9 = *(undefined8 *)(alStack_90[0] + _DAT_113097748);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lVar1);
    func_0x000107c5bb50(uVar9);
    func_0x000107c615e8(uVar9);
    func_0x000100083b20(alStack_90);
    lVar1 = alStack_90[0];
    func_0x000107c5fcec(0);
    pcVar3 = FUN_103052a3c;
    plVar8 = alStack_90;
    uStack_80 = param_8;
    uStack_78 = param_7;
    FUN_103052a54(FUN_103052a3c,plVar8,
                  "UserNavigationScopedDevelopmentFeatureImplementation/SCUserNavigationScopeDevelopmentScopeInitializationPlugin.swift"
                  ,0x74,2,0x35);
    func_0x000107c4f6f4();
    lVar4 = lVar1;
    func_0x000107c41418(lVar1);
    func_0x000107c61180();
    func_0x000107c5a1dc();
    func_0x000107c615e8(lVar4);
    puVar5 = PTR_PTR_1126ce4b0;
    func_0x000107c61168(PTR_PTR_1126ce4b0);
    func_0x000107c5c660();
    func_0x000107c61180();
    func_0x000107c5e58c();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e45c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    lVar4 = lVar1;
    func_0x000107c4f224();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000107c508d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar6;
    func_0x000107c5c658();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar6 = lVar4;
    func_0x000107c3d8b0();
    func_0x000107c61180();
    func_0x000107c5a2cc();
    func_0x000107c53e08(lVar6);
    uVar9 = *(undefined8 *)(puVar2 + _DAT_112f36088);
    *(long *)(puVar2 + _DAT_112f36088) = lVar6;
    func_0x000107c615f0(lVar6);
    func_0x000107c615e8(uVar9);
    lVar7 = lVar4;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(puVar2 + _DAT_112f36080);
    *(long *)(puVar2 + _DAT_112f36080) = lVar7;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar9);
    func_0x000107c4f01c(lVar7);
    func_0x000107c3e2c0(*(undefined8 *)(param_1 + _DAT_113083f10));
    func_0x000100083b20(alStack_90);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61170(pcVar3);
    func_0x000107c61170(plVar8);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_8);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(alStack_90[0]);
  }
  else {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_8);
  }
  return puVar2;
}



/* Entry: 103052984; end: 103052a3b;  */

void FUN_103052984(undefined8 *param_1)

{
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  *param_1 = uStack_50;
  func_0x000100083b20(auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 8))(uStack_78,lStack_70);
  param_1[1] = uStack_78;
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 103052a3c; end: 103052a53;  */

void FUN_103052a3c(void)

{
  long unaff_x20;
  
  FUN_103052984(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103052a54; end: 103052c13;  */

undefined1  [16]
FUN_103052a54(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined1 auVar6 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar5 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,puStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103052c14);
    (*pcVar1)();
  }
  puVar2 = &UNK_110601920;
  func_0x000107c613fc(&UNK_110601920,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&puStack_70);
  if (unaff_x21 == 0) {
    puVar4 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    puVar3 = puStack_70;
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103052b78);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    uStack_68 = param_3;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103052b74);
      (*pcVar1)();
    }
  }
  auVar6._8_8_ = uStack_68;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 103052c14; end: 103052dcb;  */

undefined8
FUN_103052c14(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103052dcc);
    (*pcVar1)();
  }
  puVar2 = &UNK_1106018f8;
  func_0x000107c613fc(&UNK_1106018f8,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    param_2 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103052d30);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103052cd0);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 103052dcc; end: 103052eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103052dcc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [16];
  
  lVar1 = _DAT_112f36078;
  plVar2 = *(long **)(unaff_x20 + _DAT_112f36078);
  plVar5 = plVar2;
  if (plVar2 == (long *)0x0) {
    func_0x000107c5fcec();
    uVar6 = 0x103052f50;
    FUN_103052c14(0x103052f50,auStack_60,
                  "UserNavigationScopedDevelopmentFeatureImplementation/SCUserNavigationScopeDevelopmentScopeInitializationPlugin.swift"
                  ,0x74,2,0x60,plVar2);
    lVar3 = 0;
    func_0x000103052f68();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112f360a0) = uVar6;
    plVar5 = &lStack_78;
    lStack_78 = lVar4;
    lStack_70 = lVar3;
    func_0x000107c61154(plVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long **)(unaff_x20 + lVar1) = plVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
    plVar2 = (long *)0x0;
  }
  func_0x000107c61174(plVar2);
  return plVar5;
}



/* Entry: 103052eb0; end: 103052f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103052eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_103053554(lStack_38 + 0x28,auStack_68);
  func_0x000107c61574(lStack_38);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = 0;
  (**(code **)(lStack_48 + 8))(0,0,uStack_50,lStack_48);
  *param_1 = uVar1;
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 103052f50; end: 103052f87;  */

void FUN_103052f50(void)

{
  long unaff_x20;
  
  FUN_103052eb0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103052f88; end: 103052fbb; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation57SCUserNavigationScopeDevelopmentScopeInitializationPlugin inflateViewController] */

void FUN_103052f88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103052dcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103052fbc; end: 103052fd3; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation57SCUserNavigationScopeDevelopmentScopeInitializationPlugin deflateViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103052fbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f36078);
  *(undefined8 *)(param_1 + _DAT_112f36078) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103052fd4; end: 103052fff; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation57SCUserNavigationScopeDevelopmentScopeInitializationPlugin init] */

void FUN_103052fd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavigationScopedDevelopmentFeatureImplementation.SCUserNavigationScopeDevelopmentScopeInitializationPlugin"
                      ,0x6e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103053000);
  (*pcVar1)();
}



/* Entry: 103053000; end: 103053003;  */

void FUN_103053000(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103053004; end: 10305306b; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementation57SCUserNavigationScopeDevelopmentScopeInitializationPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103053050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103053054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103053004(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f36098));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f36090));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f36078));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f36080));
  return;
}



/* Entry: 10305306c; end: 103053077;  */

undefined1  [16] FUN_10305306c(void)

{
  return ZEXT816(0);
}



/* Entry: 103053078; end: 1030530cf; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController initWithCoder:] */

void FUN_103053078(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "UserNavigationScopedDevelopmentFeatureImplementation/SCUserNavigationScopeDevelopmentScopeInitializationPlugin.swift"
                      ,0x74,2,0x79,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030530d0);
  (*pcVar1)();
}



/* Entry: 1030530d0; end: 10305348f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030530d0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f360a0);
  func_0x000107c3d614();
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103053468);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305346c);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103053470);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103053474);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103053478);
    (*pcVar1)();
  }
  lVar5 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x20) = lVar2;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305347c);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103053480);
    (*pcVar1)();
  }
  lVar5 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x28) = lVar2;
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103053488);
      (*pcVar1)();
    }
    lVar5 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar3 + 0x30) = lVar2;
    lVar2 = lVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar2 = unaff_x20;
        func_0x000107c5ce8c(unaff_x20);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        lVar5 = lVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        *(long *)(lVar3 + 0x38) = lVar5;
        uVar7 = 0;
        func_0x000100847984(0);
        lVar2 = lVar3;
        func_0x000107c5fc48(lVar3,uVar7);
        func_0x000107c61574(lVar3);
        func_0x000107c3d048(puVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c41c30(lVar8);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103053490);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10305348c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103053484);
  (*pcVar1)();
}



/* Entry: 103053490; end: 1030534b7; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController viewDidLoad] */

void FUN_103053490(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030530d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030534b8; end: 103053517; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController initWithNibName:bundle:] */

void FUN_1030534b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavigationScopedDevelopmentFeatureImplementation.DevelopmentDeckBaseViewController"
                      ,0x56,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030534e4);
  (*pcVar1)();
}



/* Entry: 103053518; end: 103053553; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103053518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f360a0));
  return;
}



/* Entry: 103053554; end: 103053597;  */

long FUN_103053554(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103053598; end: 1030535ab;  */

void FUN_103053598(void)

{
  FUN_103052a3c();
  return;
}



/* Entry: 1030535ac; end: 1030535af; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030535ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f360a0));
  return;
}



/* Entry: 1030535b0; end: 1030535b3; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030535b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f360a0));
  return;
}



/* Entry: 1030535b4; end: 1030535bb; -[_TtC52UserNavigationScopedDevelopmentFeatureImplementationP33_C4B3A2A5D5F51EE4FC95E8D027AFF96033DevelopmentDeckBaseViewController childViewControllerForHomeIndicatorAutoHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030535b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f360a0));
  return;
}



/* Entry: 1030535bc; end: 103053607;  */

void FUN_1030535bc(undefined8 param_1)

{
  func_0x0001000285a8(0x112e412f8,&UNK_10da2fc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10305365c,param_1);
  return;
}



/* Entry: 103053608; end: 10305365b;  */

void FUN_103053608(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_103053750();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106019d8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10305365c; end: 103053663;  */

void FUN_10305365c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_103053750();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106019d8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103053664; end: 103053693;  */

void FUN_103053664(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103053694; end: 1030536b7;  */

void FUN_103053694(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030536b8; end: 10305373f;  */

void FUN_1030536b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puStack_40 = &UNK_110601a38;
  ppuStack_38 = &PTR_DAT_110601a10;
  func_0x000104471544(&uStack_58,param_1,param_2,uVar1,uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x0001000834e4(&uStack_58);
  return;
}


