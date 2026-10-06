/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033d772c; end: 1033d773b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d772c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f62ff8);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(lVar2 + 0x90,auStack_60,0,0);
    lVar1 = lVar2 + 0x90;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 0x98);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1033d773c; end: 1033d7777;  */

undefined8 FUN_1033d773c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1033d7778(param_1);
  return unaff_x20;
}



/* Entry: 1033d7778; end: 1033d7ae3;  */

void FUN_1033d7778(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e0 [112];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  long alStack_78 [3];
  
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  func_0x000107c61614(unaff_x20 + 0x90,0);
  uVar29 = *(undefined8 *)((long)param_1 + 0x6a);
  *(undefined8 *)(unaff_x20 + 0x82) = *(undefined8 *)((long)param_1 + 0x72);
  *(undefined8 *)(unaff_x20 + 0x7a) = uVar29;
  uVar16 = param_1[10];
  uVar29 = param_1[0xc];
  uVar17 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + 0x68) = param_1[0xb];
  *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar29;
  uVar16 = param_1[6];
  uVar29 = param_1[8];
  uVar17 = param_1[9];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[7];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar29;
  uVar29 = *param_1;
  uVar16 = param_1[3];
  uVar17 = param_1[2];
  uVar19 = param_1[5];
  uVar24 = param_1[4];
  *(undefined8 *)(unaff_x20 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar29;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar24;
  *(undefined1 *)(unaff_x20 + 0xa0) = *(undefined1 *)((long)param_1 + 0x79);
  lVar11 = param_1[1];
  lVar9 = *(long *)(lVar11 + 0x10);
  alStack_78[0] = lVar11;
  if (lVar9 != 0) {
    puVar8 = (undefined8 *)(lVar11 + 0x20);
    do {
      pauVar1 = (undefined1 (*) [16])(puVar8 + 6);
      uStack_210 = *(undefined8 *)*pauVar1;
      uStack_138 = puVar8[7];
      auVar2 = *pauVar1;
      auVar15 = *pauVar1;
      uStack_128 = puVar8[9];
      lStack_1f0 = *(long *)*(undefined1 (*) [16])(puVar8 + 8);
      auVar14 = *(undefined1 (*) [16])(puVar8 + 8);
      uStack_1f8 = puVar8[0xb];
      uVar16 = puVar8[10];
      uVar26 = *(ulong *)((long)puVar8 + 0x61);
      uStack_10f = (undefined7)uVar26;
      uVar6 = uStack_10f;
      uStack_108 = (undefined1)(uVar26 >> 0x38);
      uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x59) >> 0x38);
      uVar5 = uStack_110;
      lVar27 = puVar8[1];
      uVar17 = *puVar8;
      uVar24 = puVar8[3];
      uVar29 = puVar8[2];
      pauVar1 = (undefined1 (*) [16])(puVar8 + 4);
      uStack_148 = puVar8[5];
      uStack_230 = *(undefined8 *)*pauVar1;
      auVar4 = *pauVar1;
      auVar3 = *pauVar1;
      uStack_118 = (undefined1)uStack_1f8;
      uStack_117 = (undefined7)((ulong)uStack_1f8 >> 8);
      uStack_170 = uVar17;
      lStack_168 = lVar27;
      uStack_160 = uVar29;
      uStack_158 = uVar24;
      uStack_150 = uStack_230;
      uStack_140 = uStack_210;
      lStack_130 = lStack_1f0;
      uStack_120 = uVar16;
      if ((uVar26 & 0x100000000000000) != 0) {
        uVar19 = *puVar8;
        uVar21 = puVar8[1];
        uVar20 = puVar8[3];
        uVar18 = puVar8[2];
        uVar23 = puVar8[5];
        uVar22 = puVar8[4];
        uVar28 = puVar8[7];
        uVar25 = puVar8[6];
        uVar31 = puVar8[9];
        uVar30 = puVar8[8];
        uVar33 = puVar8[0xb];
        uVar32 = puVar8[10];
        uVar10 = puVar8[0xc];
        *(undefined1 *)(unaff_x20 + 0x120) = *(undefined1 *)(puVar8 + 0xd);
        *(undefined8 *)(unaff_x20 + 0x118) = uVar10;
        *(undefined8 *)(unaff_x20 + 0x110) = uVar33;
        *(undefined8 *)(unaff_x20 + 0x108) = uVar32;
        *(undefined8 *)(unaff_x20 + 0x100) = uVar31;
        *(undefined8 *)(unaff_x20 + 0xf8) = uVar30;
        *(undefined8 *)(unaff_x20 + 0xf0) = uVar28;
        *(undefined8 *)(unaff_x20 + 0xe8) = uVar25;
        *(undefined8 *)(unaff_x20 + 0xe0) = uVar23;
        *(undefined8 *)(unaff_x20 + 0xd8) = uVar22;
        *(undefined8 *)(unaff_x20 + 0xd0) = uVar20;
        *(undefined8 *)(unaff_x20 + 200) = uVar18;
        *(undefined8 *)(unaff_x20 + 0xc0) = uVar21;
        *(undefined8 *)(unaff_x20 + 0xb8) = uVar19;
        auVar14 = NEON_ext(auVar14,auVar14,8,1);
        uStack_220 = auVar14._0_8_;
        auVar15 = NEON_ext(auVar15,auVar2,8,1);
        uStack_240 = auVar15._0_8_;
        auVar15 = NEON_ext(auVar3,auVar4,8,1);
        uStack_250 = auVar15._0_8_;
        func_0x00010213ddd0(&uStack_170,&uStack_f0);
        func_0x00010213ddd0(&uStack_170,&uStack_f0);
        bVar13 = 1;
        uStack_90 = uVar5;
        uStack_8f = uVar6;
        goto LAB_1033d798c;
      }
      puVar8 = puVar8 + 0xe;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lStack_1f0 = *(long *)*(undefined1 (*) [16])(param_1 + 10);
  uStack_a8 = param_1[0xb];
  auVar14 = *(undefined1 (*) [16])(param_1 + 10);
  uVar19 = param_1[0xd];
  uVar16 = param_1[0xc];
  uStack_98 = (undefined1)uVar19;
  uVar10 = *(undefined8 *)((long)param_1 + 0x71);
  uVar21 = *(undefined8 *)((long)param_1 + 0x69);
  uStack_8f = (undefined7)uVar10;
  uVar6 = uStack_8f;
  bStack_88 = (byte)((ulong)uVar10 >> 0x38);
  bVar13 = bStack_88;
  uStack_97 = (undefined7)uVar21;
  uStack_90 = (undefined1)((ulong)uVar21 >> 0x38);
  uVar5 = uStack_90;
  lVar27 = param_1[3];
  uVar17 = param_1[2];
  uVar24 = param_1[5];
  uVar29 = param_1[4];
  pauVar1 = (undefined1 (*) [16])(param_1 + 6);
  uStack_c8 = param_1[7];
  uStack_230 = *(undefined8 *)*pauVar1;
  auVar4 = *pauVar1;
  auVar3 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(param_1 + 8);
  uStack_b8 = param_1[9];
  uStack_210 = *(undefined8 *)*pauVar1;
  auVar2 = *pauVar1;
  auVar15 = *pauVar1;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar24;
  *(undefined8 *)(unaff_x20 + 200) = uVar29;
  *(long *)(unaff_x20 + 0xc0) = lVar27;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_a8;
  *(long *)(unaff_x20 + 0xf8) = lStack_1f0;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x119) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x111) = uVar21;
  uStack_f0 = uVar17;
  lStack_e8 = lVar27;
  uStack_e0 = uVar29;
  uStack_d8 = uVar24;
  uStack_d0 = uStack_230;
  uStack_c0 = uStack_210;
  lStack_b0 = lStack_1f0;
  uStack_a0 = uVar16;
  if (lVar27 == 0) {
    FUN_1033d514c(param_1,&uStack_170);
    bVar7 = false;
  }
  else {
    uStack_1f8 = CONCAT71(uStack_97,uStack_98);
    auVar14 = NEON_ext(auVar14,auVar14,8,1);
    uStack_220 = auVar14._0_8_;
    auVar15 = NEON_ext(auVar15,auVar2,8,1);
    uStack_240 = auVar15._0_8_;
    auVar15 = NEON_ext(auVar3,auVar4,8,1);
    uStack_250 = auVar15._0_8_;
    lStack_130 = param_1[10];
    uStack_128 = param_1[0xb];
    uStack_120 = param_1[0xc];
    uStack_118 = (undefined1)param_1[0xd];
    uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
    uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
    uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
    uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
    uStack_170 = param_1[2];
    lStack_168 = param_1[3];
    uStack_158 = param_1[5];
    uStack_160 = param_1[4];
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    uStack_140 = param_1[8];
    uStack_138 = param_1[9];
    func_0x0001033d7c90(&uStack_f0,auStack_1e0,0x112e5b300,&UNK_10da60e30);
    func_0x00010213ddd0(&uStack_170,auStack_1e0);
    uStack_90 = uVar5;
    uStack_8f = uVar6;
LAB_1033d798c:
    uStack_c8 = uStack_250;
    uStack_d0 = uStack_230;
    uStack_b8 = uStack_240;
    uStack_c0 = uStack_210;
    uStack_a8 = uStack_220;
    lStack_b0 = lStack_1f0;
    uStack_98 = (undefined1)uStack_1f8;
    uStack_97 = (undefined7)((ulong)uStack_1f8 >> 8);
    bStack_88 = bVar13 & 1;
    uStack_f0 = uVar17;
    lStack_e8 = lVar27;
    uStack_e0 = uVar29;
    uStack_d8 = uVar24;
    uStack_a0 = uVar16;
    FUN_1033d514c(param_1,&uStack_170);
    func_0x0001021383b8(&uStack_f0);
    bVar7 = 0 < lStack_1f0;
  }
  *(bool *)(unaff_x20 + 0xa1) = bVar7;
  lVar9 = lVar11;
  if (*(ulong *)(lVar11 + 0x10) < 4) {
    func_0x0001033d7c90(alStack_78,&uStack_170,0x112f63090,&UNK_10dbbf390);
  }
  else {
    func_0x0001033d7c90(alStack_78,&uStack_170,0x112f63090,&UNK_10dbbf390);
    FUN_1033d7b5c(lVar11,lVar11 + 0x20,0,7);
    func_0x0001033d7c48(alStack_78);
  }
  *(long *)(unaff_x20 + 0xa8) = lVar9;
  uVar12 = *(ulong *)(lVar11 + 0x10);
  uVar26 = uVar12;
  if (2 < uVar12) {
    uVar26 = 3;
  }
  func_0x000107c61434(lVar11);
  func_0x0001033d5188(param_1);
  if (*(long *)(lVar11 + 0x10) != uVar12 - uVar26) {
    FUN_1033d7b5c(lVar11,lVar11 + 0x20,uVar26,uVar12 << 1 | 1);
    func_0x0001033d7c48(alStack_78);
  }
  *(long *)(unaff_x20 + 0xb0) = lVar11;
  return;
}



/* Entry: 1033d7ae4; end: 1033d7b5b;  */

void FUN_1033d7ae4(void)

{
  long unaff_x20;
  
  func_0x0001033d5188(unaff_x20 + 0x10);
  func_0x0001033d7cd8(unaff_x20 + 0x90);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  FUN_1033d7cfc(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                *(undefined8 *)(unaff_x20 + 0x118),*(undefined1 *)(unaff_x20 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033d7b5c; end: 1033d7c47;  */

undefined * FUN_1033d7b5c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d7c48);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = (undefined *)0x112e5b1d0;
      func_0x0001000285a8(0x112e5b1d0,&UNK_10da60e10);
      func_0x000107c613fc();
      puVar4 = puVar3;
      func_0x000107c610a4();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x70) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d7c44);
      (*pcVar2)();
    }
    func_0x000107c6140c(puVar3 + 0x20,param_2 + param_3 * 0x70,lVar1,&UNK_1106ba238);
  }
  return puVar3;
}



/* Entry: 1033d7c48; end: 1033d7cfb;  */

undefined8 FUN_1033d7c48(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f63090;
  func_0x0001000285a8(0x112f63090,&UNK_10dbbf390);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033d7cfc; end: 1033d7d6b;  */

/* WARNING: Possible PIC construction at 0x0001033d7d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d7d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d7d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d7d40) */
/* WARNING: Removing unreachable block (ram,0x0001033d7d30) */
/* WARNING: Removing unreachable block (ram,0x0001033d7d50) */

void FUN_1033d7cfc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1033d7d6c; end: 1033d7d8b;  */

void FUN_1033d7d6c(void)

{
  func_0x000107c61168(&PTR_PTR_112f630d8);
  return;
}



/* Entry: 1033d7d8c; end: 1033d7dbb;  */

void FUN_1033d7d8c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1033d7dbc; end: 1033d7dc7;  */

void FUN_1033d7dbc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1033d7dc8; end: 1033d7deb;  */

void FUN_1033d7dc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033d7dec; end: 1033d801f;  */

undefined1  [16] FUN_1033d7dec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1033d8020; end: 1033d803f;  */

void FUN_1033d8020(void)

{
  func_0x000107c61168(&PTR_PTR_112f631a8);
  return;
}



/* Entry: 1033d8040; end: 1033d824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033d8040(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f63208;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f63208);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1033d9be4();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1033d8250; end: 1033d8837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033d8250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f63208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63210) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63218) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63220) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4022000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar3);
  FUN_1033d8040();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x0001033d80bc();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x0001033d8188();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 0x19;
  *(undefined8 *)(puVar5 + 0x10) = 0xc;
  lVar1 = _DAT_112f63208;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112f63208);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x38) = uVar7;
  lVar1 = _DAT_112f63210;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112f63210);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x40) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x48) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x50) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x58) = uVar7;
  lVar1 = _DAT_112f63218;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112f63218);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x60) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x68) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x70) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x78) = uVar7;
  uVar7 = 0;
  func_0x000100847984(0);
  puVar8 = puVar5;
  func_0x000107c5fc48(puVar5,uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  return puVar2;
}



/* Entry: 1033d8838; end: 1033d8857; -[_TtC17LensLeaderboardUI10AvatarView initWithFrame:] */

void FUN_1033d8838(void)

{
  FUN_1033d8250();
  return;
}



/* Entry: 1033d8858; end: 1033d88df; -[_TtC17LensLeaderboardUI10AvatarView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d8858(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f63208) = 0;
  *(undefined8 *)(param_1 + _DAT_112f63210) = 0;
  *(undefined8 *)(param_1 + _DAT_112f63218) = 0;
  *(undefined8 *)(param_1 + _DAT_112f63220) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/AvatarView.swift",0x22,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d88e0);
  (*pcVar1)();
}



/* Entry: 1033d88e0; end: 1033d8997;  */

void FUN_1033d88e0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_9;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1033d8998;
  plVar2[0x10] = param_8;
  plVar2[0x11] = param_2;
  plVar2[0xe] = param_6;
  plVar2[0xf] = param_7;
  plVar2[0xc] = param_4;
  plVar2[0xd] = param_5;
  plVar2[0xb] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033ccf48,0,0);
  return;
}



/* Entry: 1033d8998; end: 1033d8a03;  */

void FUN_1033d8998(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033d8a04,uVar3,uVar1);
  return;
}



/* Entry: 1033d8a04; end: 1033d8ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d8a04(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    lVar2 = *(long *)(unaff_x22 + 0x48);
    lVar6 = lVar2;
    if ((lVar5 != 0) && (lVar6 = lVar5, lVar2 != 0)) {
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x0001033d8188();
      func_0x000107c55258();
      func_0x000107c61170(lVar3);
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112f63218);
      func_0x000107c550d8(uVar4);
      func_0x0001033d80bc();
      func_0x000107c550d8();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x48);
  }
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001033d8ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033d8ae8; end: 1033d8b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d8ae8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f63220;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f63220);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar2);
  func_0x0001033d8188();
  func_0x000107c55258();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f63218),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1033d8b84; end: 1033d8bb7;  */

void FUN_1033d8b84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033d8bb8; end: 1033d8c0f; -[_TtC17LensLeaderboardUI10AvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d8bb8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f63208));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f63210));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f63218));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63220));
  return;
}



/* Entry: 1033d8c10; end: 1033d8c2f;  */

void FUN_1033d8c10(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7410);
  return;
}



/* Entry: 1033d8c30; end: 1033d8ca3;  */

void FUN_1033d8c30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001030baf1c();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  puRam00000001138072c8 = puVar2;
  uRam00000001138072d0 = 0;
  return;
}



/* Entry: 1033d8ca4; end: 1033d8ccb; +[_TtC17LensLeaderboardUI12GradientView layerClass] */

void FUN_1033d8ca4(void)

{
  FUN_1033da228(0,0x112d57230,&PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1033d8ccc; end: 1033d90d7;  */

/* WARNING: Possible PIC construction at 0x0001033d8f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d8fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d900c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001033d8f40) */
/* WARNING: Removing unreachable block (ram,0x0001033d8f80) */
/* WARNING: Removing unreachable block (ram,0x0001033d8fb0) */
/* WARNING: Removing unreachable block (ram,0x0001033d9010) */

void FUN_1033d8ccc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    FUN_1033d9d8c(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d90c4);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar10 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar10;
        func_0x000107c3ab24();
        func_0x000107c61180();
        uVar9 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
          FUN_1033d9d8c(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puVar6 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar6 + uVar9 * 8 + 0x20) = uVar4;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar8 != 0);
    }
    else {
      uVar9 = 0;
      do {
        uVar2 = uVar9;
        FUN_1033da06c(uVar9,param_1,&PTR__OBJC_CLASS___UIColor_1126aea70,0x112d48390);
        uVar3 = uVar2;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c615e8(uVar2);
        uVar2 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          FUN_1033d9d8c(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar6 + uVar2 * 8 + 0x20) = uVar3;
      } while (uVar8 != uVar9);
    }
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) != 1) goto LAB_1033d8ec8;
  }
  else {
    puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar5 = puVar6;
    }
    puVar7 = puVar5;
    func_0x000107c60480();
    if ((puVar7 != (undefined *)0x1) || (func_0x000107c60480(), puVar5 == (undefined *)0x0))
    goto LAB_1033d8ec8;
  }
  if (((ulong)puVar6 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d90d8);
      (*pcVar1)();
    }
    puVar5 = *(undefined **)(puVar6 + 0x20);
    func_0x000107c61174();
  }
  else {
    puVar5 = (undefined *)0x0;
    FUN_1033d9ecc(0,puVar6);
  }
  puVar7 = puVar5;
  func_0x0001028b6d3c();
  func_0x000107c6142c(puVar6);
  func_0x000107c613fc(puVar7,((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                      *(ushort *)(puVar7 + 0x34) | 7);
  *(undefined8 *)(puVar7 + 0x18) = 5;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  *(undefined **)(puVar7 + 0x28) = puVar5;
  func_0x000107c61174(puVar5);
  puVar6 = puVar7;
LAB_1033d8ec8:
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar4 = unaff_x20;
  func_0x000107c61490(unaff_x20,puVar5,0,0,0);
  FUN_1033d92b8(puVar6);
  func_0x000107c5fc48();
  func_0x000107c6142c(puVar6);
  func_0x000107c535a0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1033d90d8; end: 1033d920b; -[_TtC17LensLeaderboardUI12GradientView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033d90d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  lVar5 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112f63250) = 0;
  lVar4 = _DAT_112f63258;
  if (lRam0000000112f63288 != -1) {
    func_0x000107c61568(0x112f63288,FUN_1033d8c30);
  }
  uVar2 = uRam00000001138072d0;
  uVar1 = uRam00000001138072c8;
  *(undefined8 *)(param_5 + lVar4) = uRam00000001138072c8;
  ((undefined8 *)(param_5 + lVar4))[1] = uVar2;
  puVar3 = PTR_s_initWithFrame__1125e2948;
  lStack_60 = param_5;
  lStack_58 = lVar5;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,puVar3);
  uVar1 = *(undefined8 *)((long)plVar6 + _DAT_112f63258);
  uVar2 = ((undefined8 *)((long)plVar6 + _DAT_112f63258))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61174(plVar6);
  func_0x000107c61434(uVar1);
  FUN_1033d8ccc();
  func_0x000107c61170(plVar6);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  return (undefined1 *)plVar6;
}



/* Entry: 1033d920c; end: 1033d92b7; -[_TtC17LensLeaderboardUI12GradientView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d920c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  *(undefined8 *)(param_1 + _DAT_112f63250) = 0;
  lVar1 = _DAT_112f63258;
  if (lRam0000000112f63288 != -1) {
    func_0x000107c61568(0x112f63288,FUN_1033d8c30);
  }
  uVar2 = uRam00000001138072d0;
  *(undefined8 *)(param_1 + lVar1) = uRam00000001138072c8;
  ((undefined8 *)(param_1 + lVar1))[1] = uVar2;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/GradientView.swift",0x24,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1033d92b8);
  (*pcVar3)();
}



/* Entry: 1033d92b8; end: 1033d947b;  */

undefined * FUN_1033d92b8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d947c);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000100ef8bfc(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1033d9ecc(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x000100ef8bfc(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1033d947c; end: 1033d9557; -[_TtC17LensLeaderboardUI12GradientView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d947c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_traitCollectionDidChange__11267bf88;
  lStack_40 = param_1;
  lStack_38 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3,param_3);
  lVar4 = param_1;
  func_0x000107c5ce94();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c44820();
  func_0x000107c61170(lVar4);
  if ((int)lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f63258);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112f63258))[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar1);
    FUN_1033d8ccc();
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033d9558; end: 1033d987f;  */

/* WARNING: Possible PIC construction at 0x0001033d95dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d9618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d96d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d9788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d97f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d9814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d9824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d9834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d9818) */
/* WARNING: Removing unreachable block (ram,0x0001033d97fc) */
/* WARNING: Removing unreachable block (ram,0x0001033d978c) */
/* WARNING: Removing unreachable block (ram,0x0001033d96d8) */
/* WARNING: Removing unreachable block (ram,0x0001033d961c) */
/* WARNING: Removing unreachable block (ram,0x0001033d95e0) */
/* WARNING: Removing unreachable block (ram,0x0001033d9828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d9558(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112f63250;
  if ((param_1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
    if (*(long *)(unaff_x20 + _DAT_112f63250) != 0) {
      func_0x000107c4ff30();
      puVar2 = *(undefined **)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112f63250) != 0) {
      return;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1033d9880; end: 1033d9b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d9880(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f63250);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c609cc();
    lVar2 = lVar1;
    if (0.0 < param_1) {
      func_0x000107c3ec60();
      func_0x000107c609b0();
      if (0.0 < param_1) {
        lVar7 = 0x536c6164654d626c;
        func_0x000107c3ec60();
        func_0x000107c609cc();
        dVar8 = param_1;
        func_0x000107c3ec60();
        func_0x000107c609b0();
        if (dVar8 < param_1) {
          dVar8 = param_1;
        }
        func_0x000107c61174();
        uVar9 = 0;
        func_0x000107c52e44(0,0,dVar8 * 1.4,dVar8 + dVar8);
        func_0x000107c3ec60();
        func_0x000107c609bc();
        uVar4 = uVar9;
        func_0x000107c3ec60();
        func_0x000107c609c0();
        func_0x000107c575ec(uVar9,uVar4,lVar1);
        func_0x000107c61170(lVar1);
        lVar2 = lVar7;
        func_0x000107c5fadc(0x536c6164654d626c,0xec000000656e6968);
        lVar3 = lVar1;
        func_0x000107c3dcf8();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
        if (lVar3 == 0) {
          uVar4 = 0x6e6f697469736f70;
          func_0x000107c5fadc(0x6e6f697469736f70,0xea0000000000782e);
          puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
          func_0x000107c61168(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
          func_0x000107c3dd18();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          dVar10 = -dVar8;
          func_0x000107c5f06c(dVar10);
          func_0x000107c54ce4(puVar5);
          func_0x000107c61170(uVar4);
          func_0x000107c3ec60();
          func_0x000107c609cc();
          func_0x000107c5f06c(dVar8 + dVar10);
          func_0x000107c59e64(puVar5);
          func_0x000107c61170(unaff_x20);
          func_0x000107c61174(puVar5);
          func_0x000107c54358(0x4003333333333333);
          func_0x000107c57d30(0x7f800000,puVar5);
          puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
          func_0x000107c61168(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
          func_0x000107c43be8();
          func_0x000107c61180();
          func_0x000107c59dfc(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
          func_0x000107c5fadc(0x536c6164654d626c,0xec000000656e6968);
          func_0x000107c3d5a4(lVar1);
          func_0x000107c61170(puVar5);
          lVar2 = lVar7;
          lVar3 = lVar1;
        }
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1033d9b44; end: 1033d9b6b; -[_TtC17LensLeaderboardUI12GradientView layoutSubviews] */

void FUN_1033d9b44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033d9880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033d9b6c; end: 1033d9b9f;  */

void FUN_1033d9b6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033d9ba0; end: 1033d9be3; -[_TtC17LensLeaderboardUI12GradientView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033d9bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d9bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d9ba0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f63250));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f63258));
  return;
}



/* Entry: 1033d9be4; end: 1033d9c03;  */

void FUN_1033d9be4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d74e0);
  return;
}



/* Entry: 1033d9c04; end: 1033d9c5f;  */

/* WARNING: Possible PIC construction at 0x0001033d9c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d9c1c) */

void FUN_1033d9c04(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1033d9c60; end: 1033d9cbb;  */

undefined8 * FUN_1033d9c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033d9cbc; end: 1033d9cf7;  */

undefined8 * FUN_1033d9cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033d9cf8; end: 1033d9d8b;  */

int FUN_1033d9cf8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033d9d8c; end: 1033d9da7;  */

void FUN_1033d9d8c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1033d9da8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1033d9da8; end: 1033d9ecb;  */

undefined * FUN_1033d9da8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d9ecc);
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
    func_0x0001028b6d3c();
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
    func_0x000100ef8bfc(0);
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



/* Entry: 1033d9ecc; end: 1033da06b;  */

ulong FUN_1033d9ecc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d9fa0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d9fa4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100ef8bfc(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c614a0();
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
    uVar3 = 0;
    func_0x000100ef8bfc(0);
    uVar4 = param_1;
    func_0x000107c614a0(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x52726f6c6f434743,0xea00000000006665);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033da06c);
  (*pcVar2)();
}



/* Entry: 1033da06c; end: 1033da227;  */

ulong FUN_1033da06c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033da150);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033da154);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1033da228(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033da228);
  (*pcVar2)();
}



/* Entry: 1033da228; end: 1033da267;  */

void FUN_1033da228(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033da268; end: 1033da26f;  */

undefined8 * FUN_1033da268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1033da270; end: 1033da637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033da270(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f63290;
  uVar2 = 0;
  FUN_1033dc430();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithStyle_reuseIdentifier__1125f1528,
                      param_1,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c58e44();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar5 = puVar4;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3fa94(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  lVar1 = _DAT_112f63290;
  func_0x000107c5a050(*(undefined8 *)(puVar3 + _DAT_112f63290));
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar2 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar2 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar2 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar5 + 0x30) = uVar2;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar8 = puVar6;
  func_0x000107c5ce8c(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar2 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar5 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar9);
  return puVar3;
}



/* Entry: 1033da638; end: 1033da67f; -[_TtC17LensLeaderboardUI18LeaderboardRowCell initWithStyle:reuseIdentifier:] */

void FUN_1033da638(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_1033da270(param_3,param_4,param_2);
  return;
}



/* Entry: 1033da680; end: 1033da6ff; -[_TtC17LensLeaderboardUI18LeaderboardRowCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da680(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f63290;
  uVar3 = 0;
  FUN_1033dc430();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/LeaderboardRowCell.swift",0x2a,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033da700);
  (*pcVar2)();
}



/* Entry: 1033da700; end: 1033da773; -[_TtC17LensLeaderboardUI18LeaderboardRowCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da700(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_prepareForReuse_112620008;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1033db69c();
  FUN_1033d8ae8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1033da774; end: 1033da7a7;  */

void FUN_1033da774(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033da7a8; end: 1033da7b7; -[_TtC17LensLeaderboardUI18LeaderboardRowCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63290));
  return;
}



/* Entry: 1033da7b8; end: 1033da7d7;  */

void FUN_1033da7b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d75a0);
  return;
}



/* Entry: 1033da7d8; end: 1033db5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da7d8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  bool bVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long unaff_x20;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lStack_88;
  
  func_0x000107c526c0(0x3ff0000000000000);
  bVar11 = *(byte *)(param_1 + 0xd);
  if ((bVar11 & 1) == 0) {
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
  }
  else {
    if (lRam0000000112f62c30 != -1) {
      func_0x000107c61568(0x112f62c30,0x1033ccebc);
    }
    puVar13 = puRam00000001138072b8;
    func_0x000107c61174(puRam00000001138072b8);
  }
  func_0x000107c52b50();
  func_0x000107c61170(puVar13);
  FUN_1033db5e8();
  func_0x000107c550d8();
  func_0x000107c61170(puVar13);
  puVar13 = &DAT_112f632c8;
  FUN_1033db6b0(&DAT_112f632c8,FUN_1033dd0b8);
  lVar14 = param_1[8];
  uVar25 = param_1[9];
  uVar3 = param_1[10];
  lVar20 = param_1[0xb];
  lVar23 = param_1[0xc];
  FUN_1033dc700(lVar14);
  func_0x000107c61170(puVar13);
  puVar13 = &DAT_112f632d0;
  FUN_1033db6b0(&DAT_112f632d0,FUN_1033d8c10);
  uVar19 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  lVar7 = param_1[3];
  uVar5 = param_1[4];
  uVar8 = param_1[5];
  uVar21 = param_1[6];
  uVar9 = param_1[7];
  uVar28 = uVar4;
  lVar26 = lVar7;
  func_0x000100ed7ed4();
  if (lVar26 == 0) {
    uVar28 = 0;
    lVar27 = 0;
  }
  else {
    lVar27 = lVar26;
    func_0x000107c5fb24();
    lVar22 = lVar27;
    func_0x000107c6142c(lVar26);
    lVar26 = lVar22;
  }
  FUN_1033dd0d8();
  if (lVar14 == 0) {
    if (lRam0000000112f63288 != -1) {
      func_0x000107c61568(0x112f63288,FUN_1033d8c30);
    }
    lVar26 = lRam00000001138072d0;
    lVar14 = lRam00000001138072c8;
    func_0x000107c61434(lRam00000001138072d0);
    func_0x000107c61434(lVar14);
  }
  lVar22 = _DAT_112f63220;
  lVar24 = *(long *)(puVar13 + _DAT_112f63220);
  if (lVar24 == 0) {
    uVar15 = 0;
  }
  else {
    func_0x000107c6157c(lVar24);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar24);
    uVar15 = *(undefined8 *)(puVar13 + lVar22);
  }
  *(undefined8 *)(puVar13 + lVar22) = 0;
  func_0x000107c61574(uVar15);
  func_0x0001033d80bc();
  if (lVar27 == 0) {
    uVar28 = 0;
  }
  else {
    func_0x000107c5fadc(uVar28,lVar27);
  }
  func_0x000107c59c6c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  lVar16 = *(long *)(puVar13 + _DAT_112f63210);
  func_0x000107c550d8();
  func_0x0001033d8040();
  plVar1 = (long *)(lVar16 + _DAT_112f63258);
  lVar24 = *plVar1;
  lVar10 = plVar1[1];
  *plVar1 = lVar14;
  plVar1[1] = lVar26;
  func_0x000107c61434(lVar26);
  func_0x000107c61434(lVar14);
  func_0x000107c6142c(lVar24);
  func_0x000107c6142c(lVar10);
  FUN_1033d8ccc(lVar14,lVar26);
  func_0x000107c61170(lVar16);
  func_0x0001033d8188();
  func_0x000107c550d8();
  func_0x000107c61170(lVar16);
  func_0x000107c55258(*(undefined8 *)(puVar13 + _DAT_112f63218));
  if (uVar8 == 0) {
    func_0x000107c6142c(lVar26);
    func_0x000107c6142c(lVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c6142c(lVar27);
  }
  else {
    uVar2 = uVar5 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar2 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c6142c(lVar26);
      func_0x000107c6142c(lVar14);
      func_0x000107c61170(puVar13);
      func_0x000107c6142c(lVar27);
    }
    else {
      puVar17 = &UNK_11064df40;
      func_0x000107c613fc(&UNK_11064df40,0x18,7);
      func_0x000107c61614(puVar17 + 0x10,puVar13);
      puVar18 = &UNK_11064df90;
      func_0x000107c613fc(&UNK_11064df90,0x50,7);
      *(undefined8 *)(puVar18 + 0x10) = param_2;
      *(undefined8 *)(puVar18 + 0x18) = uVar19;
      *(undefined8 *)(puVar18 + 0x20) = uVar6;
      *(ulong *)(puVar18 + 0x28) = uVar5;
      *(ulong *)(puVar18 + 0x30) = uVar8;
      *(undefined8 *)(puVar18 + 0x38) = uVar21;
      *(undefined8 *)(puVar18 + 0x40) = uVar9;
      *(undefined **)(puVar18 + 0x48) = puVar17;
      func_0x000107c61434();
      func_0x000107c61434(uVar8);
      func_0x000107c6157c(param_2);
      func_0x000107c61434(uVar6);
      uVar19 = 0xe;
      func_0x0001001ca524(0xe,4,0x38,4,0,0,&UNK_10dbbf4e0,puVar18,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar18);
      func_0x000107c6142c(lVar26);
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar27);
      lVar27 = *(long *)(puVar13 + lVar22);
      *(undefined8 *)(puVar13 + lVar22) = uVar19;
      func_0x000107c61170(puVar13);
      func_0x000107c61574(lVar27);
    }
  }
  func_0x0001033db728();
  uVar19 = uVar4;
  lVar14 = lVar7;
  func_0x000107c5fadc(uVar4);
  func_0x000107c59c6c(lVar27);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar19);
  lStack_88 = *(long *)(unaff_x20 + _DAT_112f632d8);
  func_0x000107c5a100();
  if (lVar23 == 0) {
    lVar26 = 0;
    bVar12 = false;
    lVar14 = lStack_88;
    lStack_88 = lVar20;
  }
  else {
    func_0x0001033dd668();
    lVar27 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar27 + 0x18) = 2;
    *(undefined8 *)(lVar27 + 0x10) = 1;
    *(undefined **)(lVar27 + 0x38) = PTR___sSSN_11034da80;
    lVar26 = lVar27;
    func_0x00010075bbf0();
    *(long *)(lVar27 + 0x40) = lVar26;
    *(long *)(lVar27 + 0x20) = lVar20;
    *(long *)(lVar27 + 0x28) = lVar23;
    func_0x000107c61434(lVar23);
    lVar26 = lVar14;
    func_0x000107c5fb00(lStack_88,lVar14,lVar27);
    func_0x000107c6142c(lVar14);
    bVar12 = lVar26 != 0;
    if (((bVar11 & 1) != 0) && (lVar26 != 0)) {
      lVar20 = lVar26;
      func_0x000107c61434(lVar26);
      func_0x0001033db804();
      lVar14 = lStack_88;
      func_0x000107c5fadc(lStack_88,lVar26);
      func_0x000107c6142c(lVar26);
      func_0x000107c59c6c(lVar20);
      func_0x000107c61170(lVar20);
      bVar12 = true;
      goto LAB_1033dad94;
    }
  }
  func_0x0001033db804();
  func_0x000107c59c6c();
LAB_1033dad94:
  func_0x000107c61170(lVar14);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112f632e0);
  func_0x000107c550d8(uVar21);
  func_0x0001033db8dc();
  uVar19 = uVar25;
  func_0x000107c5fadc(uVar25,uVar3);
  func_0x000107c59c6c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  lVar20 = _DAT_112f632e8;
  func_0x000107c5a100(*(undefined8 *)(unaff_x20 + _DAT_112f632e8));
  lVar14 = lRam0000000112f62c58;
  uVar19 = *(undefined8 *)(unaff_x20 + lVar20);
  func_0x000107c61174(uVar19);
  if (lVar14 != -1) {
    func_0x000107c61568(0x112f62c58,FUN_1033ccdb8);
  }
  func_0x000107c59c78();
  func_0x000107c61170(uVar19);
  if (bVar12) {
    func_0x000107c61434(lVar26);
    func_0x000107c5fb78(lStack_88,lVar26);
    func_0x000107c61430(lVar26,2);
    uVar19 = 0x202c;
    uVar21 = 0xe200000000000000;
  }
  else {
    uVar19 = 0;
    uVar21 = 0xe000000000000000;
  }
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(0xe000000000000000);
  puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar13);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fb78(uVar4,lVar7);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fb78(uVar25,uVar3);
  func_0x000107c5fb78(0x73746e696f7020,0xe700000000000000);
  func_0x000107c5fb78(uVar19,uVar21);
  func_0x000107c6142c(uVar21);
  uVar19 = 0x206b6e6152;
  func_0x000107c5fadc(0x206b6e6152,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x000107c520fc(unaff_x20);
  func_0x000107c61170(uVar19);
  if ((bVar11 & 1) == 0) {
    func_0x000107c520f4(unaff_x20);
    uVar25 = 0;
  }
  else {
    uVar19 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f148ff0);
    func_0x000107c520f4(unaff_x20);
    func_0x000107c61170(uVar19);
    func_0x000107c5fadc(uVar25,uVar3);
  }
  func_0x000107c52104(unaff_x20);
  func_0x000107c61170(uVar25);
  return;
}



/* Entry: 1033db5e8; end: 1033db69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033db5e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f632c0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f632c0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    if (lRam0000000112f62c48 != -1) {
      func_0x000107c61568(0x112f62c48,0x1033ccef0);
    }
    func_0x000107c52b50(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1033db69c; end: 1033db6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033db69c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f632d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f632d0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1033d8c10();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1033db6b0; end: 1033db93b;  */

long FUN_1033db6b0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1033db93c; end: 1033dba17;  */

undefined * FUN_1033db93c(void)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c5a100(puVar2);
  lVar1 = lRam0000000112f62c58;
  func_0x000107c61174(puVar2);
  if (lVar1 != -1) {
    func_0x000107c61568(0x112f62c58,FUN_1033ccdb8);
  }
  func_0x000107c59c78(puVar2);
  func_0x000107c59c74(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x447a0000,puVar2);
  func_0x000107c537fc(0x447a0000,puVar2);
  return puVar2;
}



/* Entry: 1033dba18; end: 1033dbb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033dba18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f632f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f632f0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001033dba7c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033dbb6c; end: 1033dbc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033dbb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f632c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f632f0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1033dbc48();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1033dbc48; end: 1033dc31f;  */

/* WARNING: Possible PIC construction at 0x0001033dbc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbd08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbe44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbe98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbf7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dbfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033dc264) */
/* WARNING: Removing unreachable block (ram,0x0001033dc20c) */
/* WARNING: Removing unreachable block (ram,0x0001033dc1ac) */
/* WARNING: Removing unreachable block (ram,0x0001033dc154) */
/* WARNING: Removing unreachable block (ram,0x0001033dc100) */
/* WARNING: Removing unreachable block (ram,0x0001033dc0a8) */
/* WARNING: Removing unreachable block (ram,0x0001033dc074) */
/* WARNING: Removing unreachable block (ram,0x0001033dc030) */
/* WARNING: Removing unreachable block (ram,0x0001033dbfdc) */
/* WARNING: Removing unreachable block (ram,0x0001033dbf80) */
/* WARNING: Removing unreachable block (ram,0x0001033dbf2c) */
/* WARNING: Removing unreachable block (ram,0x0001033dbed8) */
/* WARNING: Removing unreachable block (ram,0x0001033dbe9c) */
/* WARNING: Removing unreachable block (ram,0x0001033dbe48) */
/* WARNING: Removing unreachable block (ram,0x0001033dbdf4) */
/* WARNING: Removing unreachable block (ram,0x0001033dbda0) */
/* WARNING: Removing unreachable block (ram,0x0001033dbd28) */
/* WARNING: Removing unreachable block (ram,0x0001033dbd0c) */
/* WARNING: Removing unreachable block (ram,0x0001033dbcf0) */
/* WARNING: Removing unreachable block (ram,0x0001033dbcc0) */
/* WARNING: Removing unreachable block (ram,0x0001033dbc90) */
/* WARNING: Removing unreachable block (ram,0x0001033dc2b8) */

void FUN_1033dbc48(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c55528();
  FUN_1033db5e8();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1033dc320; end: 1033dc33f; -[_TtC17LensLeaderboardUI18LeaderboardRowView initWithFrame:] */

void FUN_1033dc320(void)

{
  FUN_1033dbb6c();
  return;
}



/* Entry: 1033dc340; end: 1033dc373; -[_TtC17LensLeaderboardUI18LeaderboardRowView initWithCoder:] */

undefined8 FUN_1033dc340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001033dc450();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1033dc374; end: 1033dc3a7;  */

void FUN_1033dc374(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033dc3a8; end: 1033dc42f; -[_TtC17LensLeaderboardUI18LeaderboardRowView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033dc3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dc404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033dc3e8) */
/* WARNING: Removing unreachable block (ram,0x0001033dc3c8) */
/* WARNING: Removing unreachable block (ram,0x0001033dc408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dc3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f632c0));
  return;
}



/* Entry: 1033dc430; end: 1033dc4fb;  */

void FUN_1033dc430(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7658);
  return;
}



/* Entry: 1033dc4fc; end: 1033dc53b;  */

void FUN_1033dc4fc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033dc53c; end: 1033dc5db;  */

void FUN_1033dc53c(void)

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
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1033dc6fc;
  plVar10[5] = lVar8;
  lVar8 = 0;
  func_0x000107c5fcec();
  plVar10[6] = lVar8;
  func_0x000107c5fce8();
  plVar10[7] = lVar8;
  plVar9 = (long *)0xa0;
  func_0x000107c615b8();
  plVar10[8] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_1033d8998;
  plVar9[0x10] = lVar4;
  plVar9[0x11] = lVar1;
  plVar9[0xe] = lVar3;
  plVar9[0xf] = lVar7;
  plVar9[0xc] = lVar2;
  plVar9[0xd] = lVar6;
  plVar9[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033ccf48,0,0);
  return;
}



/* Entry: 1033dc5dc; end: 1033dc61f;  */

void FUN_1033dc5dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033dc620; end: 1033dc6bf;  */

void FUN_1033dc620(void)

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
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1033dc6c0;
  plVar10[5] = lVar8;
  lVar8 = 0;
  func_0x000107c5fcec();
  plVar10[6] = lVar8;
  func_0x000107c5fce8();
  plVar10[7] = lVar8;
  plVar9 = (long *)0xa0;
  func_0x000107c615b8();
  plVar10[8] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_1033d8998;
  plVar9[0x10] = lVar4;
  plVar9[0x11] = lVar1;
  plVar9[0xe] = lVar3;
  plVar9[0xf] = lVar7;
  plVar9[0xc] = lVar2;
  plVar9[0xd] = lVar6;
  plVar9[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033ccf48,0,0);
  return;
}



/* Entry: 1033dc6c0; end: 1033dc6fb;  */

void FUN_1033dc6c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001033dc6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1033dc6fc; end: 1033dc6ff;  */

void FUN_1033dc6fc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001033dc6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1033dc700; end: 1033dc97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dc700(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar2 = param_1;
  func_0x0001033dcb00();
  puVar4 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0);
  puVar6 = puVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar5);
  func_0x000107c59c6c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  FUN_1033dd0d8();
  if (param_1 == 0) {
    func_0x0001033dcaa0();
    func_0x000107c550d8();
    func_0x000107c61170(param_1);
    lVar2 = _DAT_112f63250;
    lVar8 = *(long *)(unaff_x20 + _DAT_112f63320);
    lVar9 = *(long *)(lVar8 + _DAT_112f63250);
    if (lVar9 == 0) {
      func_0x000107c61174(lVar8);
      uVar3 = 0;
    }
    else {
      func_0x000107c61174(lVar8);
      func_0x000107c4ff30(lVar9);
      uVar3 = *(undefined8 *)(lVar8 + lVar2);
    }
    *(undefined8 *)(lVar8 + lVar2) = 0;
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar3);
    lVar2 = lRam0000000112f63358;
    puVar10 = (undefined8 *)(unaff_x20 + _DAT_112f63328);
    puVar4 = (undefined *)*puVar10;
    func_0x000107c61174(puVar4);
    if (lVar2 != -1) {
      func_0x000107c61568(0x112f63358,0x1033dd018);
    }
    func_0x000107c59c78(puVar4);
  }
  else {
    lVar2 = param_1;
    func_0x0001033dcaa0();
    func_0x000107c550d8();
    func_0x000107c61170(lVar2);
    lVar9 = _DAT_112f63320;
    lVar7 = *(long *)(unaff_x20 + _DAT_112f63320);
    plVar1 = (long *)(lVar7 + _DAT_112f63258);
    lVar2 = *plVar1;
    lVar8 = plVar1[1];
    *plVar1 = param_1;
    plVar1[1] = (long)puVar6;
    func_0x000107c61434(puVar6);
    func_0x000107c61174(lVar7);
    func_0x000107c61434(param_1);
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(lVar8);
    FUN_1033d8ccc(param_1,puVar6);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(param_1);
    func_0x000107c61170(lVar7);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar9);
    func_0x000107c61174(uVar3);
    FUN_1033d9558(1);
    func_0x000107c61170(uVar3);
    puVar10 = (undefined8 *)(unaff_x20 + _DAT_112f63328);
    uVar3 = *puVar10;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(uVar3);
    func_0x000107c3ea80(puVar4);
    func_0x000107c61180();
    func_0x000107c59c78(uVar3);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c5a100(*puVar10);
  return;
}



/* Entry: 1033dc980; end: 1033dcb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dc980(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x0001033dcb00();
  uVar2 = 0x3f;
  func_0x000107c5fadc(0x3f,0xe100000000000000);
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x0001033dcaa0();
  func_0x000107c550d8();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112f63250;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f63320);
  lVar4 = *(long *)(lVar3 + _DAT_112f63250);
  if (lVar4 == 0) {
    func_0x000107c61174(lVar3);
    uVar2 = 0;
  }
  else {
    func_0x000107c61174(lVar3);
    func_0x000107c4ff30(lVar4);
    uVar2 = *(undefined8 *)(lVar3 + lVar1);
  }
  *(undefined8 *)(lVar3 + lVar1) = 0;
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  lVar3 = lRam0000000112f63358;
  lVar1 = _DAT_112f63328;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f63328);
  func_0x000107c61174(uVar2);
  if (lVar3 != -1) {
    func_0x000107c61568(0x112f63358,0x1033dd018);
  }
  func_0x000107c59c78();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 1033dcb98; end: 1033dcf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033dcb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f63320) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63328) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x0001033dcaa0();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x0001033dcb00();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 0x11;
  *(undefined8 *)(puVar5 + 0x10) = 8;
  puVar3 = puVar2;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar6 = puVar3;
  func_0x000107c40290(0x403a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined1 **)(puVar5 + 0x20) = puVar6;
  puVar3 = puVar2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar6 = puVar3;
  func_0x000107c40290(0x403a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined1 **)(puVar5 + 0x28) = puVar6;
  lVar1 = _DAT_112f63320;
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112f63320);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3f75c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c40290(0x403a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar5 + 0x40) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c40290(0x403a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar5 + 0x48) = uVar8;
  lVar1 = _DAT_112f63328;
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112f63328);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3f75c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x50) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x58) = uVar8;
  uVar8 = 0;
  func_0x0001033dd2f4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  return puVar2;
}



/* Entry: 1033dcf88; end: 1033dcfa7; -[_TtC17LensLeaderboardUI9MedalView initWithFrame:] */

void FUN_1033dcf88(void)

{
  FUN_1033dcb98();
  return;
}



/* Entry: 1033dcfa8; end: 1033dd07f; -[_TtC17LensLeaderboardUI9MedalView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dcfa8(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f63320) = 0;
  *(undefined8 *)(param_1 + _DAT_112f63328) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/MedalView.swift",0x21,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dd018);
  (*pcVar1)();
}



/* Entry: 1033dd080; end: 1033dd0b7; -[_TtC17LensLeaderboardUI9MedalView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033dd09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033dd0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dd080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63320));
  return;
}



/* Entry: 1033dd0b8; end: 1033dd0d7;  */

void FUN_1033dd0b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7740);
  return;
}



/* Entry: 1033dd0d8; end: 1033dd253;  */

undefined1  [16] FUN_1033dd0d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (param_1 - 1U < 3) {
    func_0x0001030baf1c();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 7;
    *(undefined8 *)(param_1 + 0x10) = 3;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar2 = puVar1;
    func_0x000107c5af88();
    func_0x000107c61180();
    *(undefined **)(param_1 + 0x20) = puVar2;
    puVar2 = puVar1;
    func_0x000107c5af88();
    func_0x000107c61180();
    *(undefined **)(param_1 + 0x28) = puVar2;
    func_0x000107c5af88();
    func_0x000107c61180();
    *(undefined **)(param_1 + 0x30) = puVar1;
    func_0x000100673624();
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 7;
    *(undefined8 *)(puVar1 + 0x10) = 3;
    uVar3 = 0;
    func_0x0001033dd2f4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c60108(0x3fd3333333333333);
    *(undefined8 *)(puVar1 + 0x20) = uVar3;
    func_0x000107c60108(0x3fe0000000000000);
    *(undefined8 *)(puVar1 + 0x28) = uVar3;
    func_0x000107c60108(0x3fe6666666666666);
    *(undefined8 *)(puVar1 + 0x30) = uVar3;
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 1033dd254; end: 1033dd333;  */

undefined8 FUN_1033dd254(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1033d9be4(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  uVar2 = uVar1;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x402a000000000000);
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar2);
  func_0x000107c5a378(uVar1,param_2,0);
  func_0x000107c61170(uVar1);
  return uVar1;
}



/* Entry: 1033dd334; end: 1033dd7ff;  */

undefined1  [16] FUN_1033dd334(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f149120);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f149070);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dd400);
  (*pcVar1)();
}



/* Entry: 1033dd800; end: 1033dd95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033dd800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1033ddeec();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f63368) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f63370) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033dd95c);
  (*pcVar2)();
}



/* Entry: 1033dd95c; end: 1033dd9bb; -[_TtC25PlayGamesScopeGraphBridge40PlayGamesScopeGraphBridgeSaberEntryPoint init] */

void FUN_1033dd95c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesScopeGraphBridge.PlayGamesScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dd988);
  (*pcVar1)();
}



/* Entry: 1033dd9bc; end: 1033dd9f3; -[_TtC25PlayGamesScopeGraphBridge40PlayGamesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033dd9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033dd9dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dd9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63368));
  return;
}



/* Entry: 1033dd9f4; end: 1033dda1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dd9f4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f63370),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f63368));
  return;
}



/* Entry: 1033dda1c; end: 1033dda3b;  */

void FUN_1033dda1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7800);
  return;
}



/* Entry: 1033dda3c; end: 1033dda9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033dda3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f63588);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1033ddaa0; end: 1033ddaa7;  */

void FUN_1033ddaa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033ddaa8; end: 1033ddb47;  */

void FUN_1033ddaa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ddb48; end: 1033ddb67;  */

void FUN_1033ddb48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1033ddb68; end: 1033ddbcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033ddb68(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f63590);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1033ddbcc; end: 1033ddbd3;  */

void FUN_1033ddbcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033ddbd4; end: 1033ddc73;  */

void FUN_1033ddbd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ddc74; end: 1033ddc93;  */

void FUN_1033ddc74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1033ddc94; end: 1033ddd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033ddc94(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f63540) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f63548);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ddd1c);
  (*pcVar2)();
}



/* Entry: 1033ddd1c; end: 1033dde03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033ddd1c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f63540);
  *(undefined **)(unaff_x20 + _DAT_112f63540) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f63548);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f63548))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11064e0e0;
  func_0x000107c613fc(&UNK_11064e0e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1033dde08,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1033dde04; end: 1033dde0f;  */

void FUN_1033dde04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033dde10; end: 1033dde6f; -[_TtC25PlayGamesScopeGraphBridge38PlayGamesScopedServicesSaberEntryPoint init] */

void FUN_1033dde10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesScopeGraphBridge.PlayGamesScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dde3c);
  (*pcVar1)();
}


