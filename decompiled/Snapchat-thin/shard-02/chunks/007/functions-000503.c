/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102139908; end: 102139f5b;  */

void FUN_102139908(ulong *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined1 param_7,undefined8 param_8,byte param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  code *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong *puStack_218;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  long lStack_78;
  
  lVar5 = 0;
  puStack_218 = param_1;
  func_0x000107c5f83c();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar18 = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (ulong *)(param_2 + 0x50);
  uVar17 = *puVar15;
  uVar11 = *(ulong *)(param_2 + 0x58);
  if (((uVar11 != 0) && (uVar17 != param_3 || uVar11 != param_4)) &&
     (func_0x000107c605b8(uVar17,uVar11,param_3,param_4,0), (uVar17 & 1) == 0)) {
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar20 = *(undefined8 *)(param_2 + 0x58);
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *puVar15 = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    func_0x000107c61434(uVar20);
    func_0x00010213dd18(uVar6,uVar20,uVar3,uVar4);
    FUN_10213aff8(uVar6,uVar20,0,0);
    func_0x000107c6142c(uVar20);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  *(ulong *)(param_2 + 0x70) = param_3;
  *(ulong *)(param_2 + 0x78) = param_4;
  func_0x000107c6142c(uVar6);
  uVar17 = param_4;
  func_0x000107c61434();
  func_0x000107c5f830(puVar18);
  func_0x000107c5f82c();
  pcVar7 = *(code **)(lVar16 + 8);
  (*pcVar7)(puVar18,lVar5);
  func_0x000107c61428(param_2 + 0x40,&uStack_140,0x20,0);
  lVar16 = *(long *)(param_2 + 0x40);
  if (*(long *)(lVar16 + 0x10) != 0) {
    func_0x000107c61434(lVar16);
    uVar11 = param_3;
    uVar19 = param_4;
    func_0x000100029284();
    if ((uVar19 & 1) != 0) {
      puVar8 = (ulong *)(*(long *)(lVar16 + 0x38) + uVar11 * 0x30);
      uVar11 = *puVar8;
      uVar19 = puVar8[1];
      func_0x000107c61438(uVar19,2);
      func_0x000107c614a8(&uStack_140);
      func_0x000107c6142c(uVar19);
      func_0x000107c6142c(lVar16);
      uStack_220 = param_5;
      if ((uVar11 != param_5 || uVar19 != param_6) &&
         (uStack_220 = uVar11, func_0x000107c605b8(uVar11,uVar19,param_5,param_6,0),
         (uVar11 & 1) == 0)) {
        func_0x000107c61428(param_2 + 0x48,&uStack_1c8,0x21,0);
        func_0x000107c61434(param_4);
        FUN_10213b41c(&uStack_140,param_3,param_4);
        func_0x000107c6142c(param_4);
        func_0x00010213de48(&uStack_140,0x112e5b2f8,&UNK_10da60e28);
        func_0x000107c614a8(&uStack_1c8);
        uVar11 = *(ulong *)(param_2 + 0x58);
        if ((uVar11 != 0) &&
           (((uVar9 = *puVar15, uStack_228 = uVar11, uVar9 == param_3 && (param_4 == uVar11)) ||
            ((uVar10 = uVar9, func_0x000107c605b8(uVar9,uVar11,param_3,param_4,0), (uVar10 & 1) != 0
             && (uVar11 = *(ulong *)(param_2 + 0x58), uVar11 != 0)))))) {
          uVar10 = uStack_228;
          uStack_238 = *(undefined8 *)(param_2 + 0x60);
          uStack_230 = *(undefined8 *)(param_2 + 0x68);
          uStack_248 = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(param_2 + 0x58) = 0;
          *puVar15 = 0;
          *(undefined8 *)(param_2 + 0x68) = 0;
          *(undefined8 *)(param_2 + 0x60) = 0;
          uStack_240 = uVar9;
          func_0x000107c61434(uStack_228);
          func_0x00010213dd18(uStack_248,uVar11,uStack_238,uStack_230);
          FUN_10213aff8(uStack_240,uVar10,0,0);
          func_0x000107c6142c(uStack_228);
        }
      }
      goto LAB_102139b14;
    }
    func_0x000107c6142c(lVar16);
  }
  func_0x000107c614a8(&uStack_140);
  uStack_220 = 0;
  uVar19 = 0;
LAB_102139b14:
  FUN_102136d04(param_3,param_4,uVar17);
  func_0x000107c61434(param_4);
  uVar17 = param_6;
  func_0x000107c61434();
  func_0x000107c5f830(puVar18);
  func_0x000107c5f82c();
  (*pcVar7)(puVar18,lVar5);
  lStack_78 = uVar17 + 86400000000000;
  if (0xffffb16b6eb0ffff < uVar17) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x102139f5c);
    (*pcVar7)();
  }
  bStack_80 = param_9 & 1;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = param_8;
  func_0x000107c61428(param_2 + 0x40,&uStack_140,0x21,0);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61558(uVar6);
  uStack_1c8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0x8000000000000000;
  func_0x00010213b7f8(&uStack_a0,param_3,param_4,uVar6);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + 0x40) = uStack_1c8;
  func_0x000107c614a8(&uStack_140);
  func_0x000107c61428(param_2 + 0x88,&uStack_140,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000100403b00(&uStack_1c8,param_3,param_4);
  func_0x000107c614a8(&uStack_140);
  func_0x000107c6142c(uStack_1c0);
  func_0x000107c61428(param_2 + 0x48,auStack_b8,0,0);
  lVar14 = *(long *)(param_2 + 0x48);
  func_0x0001000285a8(0x112e5ad10,&UNK_10da60730);
  lVar16 = lVar14;
  func_0x000107c6048c();
  lVar5 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar14 + 0x40);
  if (uVar17 == 0) goto LAB_102139ccc;
  do {
    uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar17 = uVar17 - 1 & uVar17;
    while( true ) {
      uVar9 = LZCOUNT(uVar9);
      uVar10 = uVar9 | lVar5 << 6;
      puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + uVar10 * 0x10);
      puVar13 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar10 * 0x88);
      uStack_138 = puVar13[1];
      uStack_140 = *puVar13;
      uStack_108 = puVar13[7];
      uStack_110 = puVar13[6];
      uStack_f8 = puVar13[9];
      uStack_100 = puVar13[8];
      uStack_128 = puVar13[3];
      uStack_130 = puVar13[2];
      uStack_118 = puVar13[5];
      uStack_120 = puVar13[4];
      uStack_e8 = puVar13[0xb];
      uStack_f0 = puVar13[10];
      uVar20 = puVar13[0xd];
      uStack_e0 = puVar13[0xc];
      uStack_c0 = puVar13[0x10];
      uStack_d8 = (undefined1)uVar20;
      uStack_d7 = (undefined7)((ulong)uVar20 >> 8);
      uStack_c8 = (undefined1)puVar13[0xf];
      uStack_c7 = (undefined7)((ulong)puVar13[0xf] >> 8);
      uStack_d0 = (undefined1)puVar13[0xe];
      uStack_cf = (undefined7)((ulong)puVar13[0xe] >> 8);
      uVar6 = *puVar2;
      uVar3 = puVar2[1];
      uVar12 = (uVar9 & 0xffffffffffffffc0 | lVar5 << 6) >> 3;
      *(ulong *)(lVar16 + 0x40 + uVar12) = *(ulong *)(lVar16 + 0x40 + uVar12) | 1L << (uVar9 & 0x3f)
      ;
      puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar6;
      puVar2[1] = uVar3;
      puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar10 * 0x80);
      puVar2[5] = uStack_118;
      puVar2[4] = uStack_120;
      puVar2[7] = uStack_108;
      puVar2[6] = uStack_110;
      puVar2[1] = uStack_138;
      *puVar2 = uStack_140;
      puVar2[3] = uStack_128;
      puVar2[2] = uStack_130;
      *(ulong *)((long)puVar2 + 0x71) = CONCAT17(uStack_c8,uStack_cf);
      *(ulong *)((long)puVar2 + 0x69) = CONCAT17(uStack_d0,uStack_d7);
      puVar2[0xb] = uStack_e8;
      puVar2[10] = uStack_f0;
      puVar2[0xd] = uVar20;
      puVar2[0xc] = uStack_e0;
      puVar2[9] = uStack_f8;
      puVar2[8] = uStack_100;
      if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102139f58);
        (*pcVar7)();
      }
      *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      func_0x00010213dce4(&uStack_140,&uStack_1c8);
      func_0x000107c61434(uVar3);
      if (uVar17 != 0) break;
LAB_102139ccc:
      do {
        lVar1 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102139f54);
          (*pcVar7)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar1) {
          uVar6 = *(undefined8 *)(param_2 + 0x88);
          func_0x000107c61434(uVar6);
          FUN_102136964(lVar16,uVar6);
          func_0x000107c61574(lVar16);
          func_0x000107c6142c(uVar6);
          *puStack_218 = uStack_220;
          puStack_218[1] = uVar19;
          return;
        }
        uVar17 = ((ulong *)(lVar14 + 0x40))[lVar1];
        lVar5 = lVar5 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar5 = lVar1;
    }
  } while( true );
}



/* Entry: 102139f5c; end: 102139f5f;  */

void FUN_102139f5c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_260 [16];
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_17f;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  
  uVar3 = param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar3 = param_7 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    uVar3 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      FUN_10213d434(&uStack_1f0,param_8,param_9,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x18));
      uStack_128 = uStack_1a8;
      uStack_130 = uStack_1b0;
      uStack_118 = uStack_198;
      uStack_120 = uStack_1a0;
      uStack_110 = uStack_190;
      uStack_ff = uStack_17f;
      uStack_168 = uStack_1e8;
      uStack_170 = uStack_1f0;
      uStack_158 = uStack_1d8;
      uStack_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      uStack_138 = uStack_1b8;
      uStack_140 = uStack_1c0;
      iVar2 = (int)&uStack_170;
      func_0x000100ce4f00();
      if (iVar2 != 1) {
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_90 = uStack_110;
        uStack_7f = uStack_ff;
        uStack_e8 = uStack_168;
        uStack_f0 = uStack_170;
        uStack_d8 = uStack_158;
        uStack_e0 = uStack_160;
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        uStack_c0 = uStack_140;
        uVar4 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000100087bd4(&uStack_200,FUN_10213da08,auStack_260,uVar4);
        func_0x00010213de48(&uStack_1f0,0x112e5b2e8,&UNK_10da60e08);
        if (uStack_1f8 != 0) {
          if (((uStack_200 == param_1) && (uStack_1f8 == param_2)) ||
             (uVar3 = uStack_200, func_0x000107c605b8(uStack_200,uStack_1f8,param_1,param_2,0),
             (uVar3 & 1) != 0)) {
            func_0x000107c6142c(uStack_1f8);
          }
          else {
            func_0x0001000d224c(&uStack_200);
            uVar4 = *(undefined8 *)(uStack_200 + 0x20);
            func_0x000107c6157c(uVar4);
            puVar1 = PTR___sytN_11034f1b0;
            func_0x000100075034(0x10213da44,auStack_260,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar4);
            uVar4 = *(undefined8 *)(uStack_200 + 0x28);
            func_0x000107c6157c(uVar4);
            func_0x000100075034(0x10213da5c,auStack_260,puVar1 + 8);
            func_0x000107c61574(uVar4);
            func_0x000107c6142c(uStack_1f8);
            func_0x000107c61574(uStack_200);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 102139f60; end: 10213a3d3;  */

void FUN_102139f60(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  long extraout_x8;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  undefined8 *puStack_280;
  uint uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 *puStack_160;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = 0;
  puStack_280 = param_1;
  func_0x000107c5f83c();
  lVar19 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar21 = (long)&uStack_2c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x88,auStack_b0,0,0);
  uVar17 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61434(uVar17);
  lVar18 = param_3;
  func_0x0001000f66f0(param_3,param_4,uVar17);
  uStack_274 = (uint)lVar18;
  func_0x000107c6142c(uVar17);
  FUN_102137350(&uStack_98,param_3,param_4);
  uStack_2a8 = uStack_80;
  uStack_2b0 = uStack_88;
  uStack_298 = uStack_70;
  uStack_2a0 = uStack_78;
  lStack_2b8 = lStack_90;
  uStack_2c0 = uStack_98;
  func_0x000107c61428(param_2 + 0x48,auStack_158,0x20,0);
  lVar18 = *(long *)(param_2 + 0x48);
  lStack_288 = param_2;
  if (*(long *)(lVar18 + 0x10) != 0) {
    func_0x000107c61434(lVar18);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar11 = (undefined8 *)(*(long *)(lVar18 + 0x38) + param_3 * 0x88);
      uStack_270 = *puVar11;
      uStack_268 = puVar11[1];
      uStack_240 = puVar11[6];
      uStack_238 = puVar11[7];
      uStack_230 = puVar11[8];
      uStack_228 = puVar11[9];
      uStack_258 = puVar11[3];
      uStack_260 = puVar11[2];
      uStack_250 = puVar11[4];
      uStack_248 = puVar11[5];
      uStack_220 = puVar11[10];
      uStack_218 = puVar11[0xb];
      uStack_210 = puVar11[0xc];
      uStack_208 = puVar11[0xd];
      uStack_200 = puVar11[0xe];
      uStack_1f8 = puVar11[0xf];
      uStack_1f0 = puVar11[0x10];
      uStack_1e0 = *puVar11;
      uStack_1d8 = puVar11[1];
      uStack_1d0 = puVar11[2];
      uStack_1c8 = puVar11[3];
      uStack_1c0 = puVar11[4];
      uStack_1b8 = puVar11[5];
      uStack_1b0 = puVar11[6];
      uStack_1a8 = puVar11[7];
      uStack_198 = puVar11[9];
      uStack_1a0 = puVar11[8];
      uStack_190 = puVar11[10];
      uStack_188 = puVar11[0xb];
      uStack_180 = puVar11[0xc];
      puStack_160 = (undefined1 *)puVar11[0x10];
      uStack_178 = (undefined1)puVar11[0xd];
      uStack_177 = (undefined7)((ulong)puVar11[0xd] >> 8);
      uStack_168 = (undefined1)puVar11[0xf];
      uStack_167 = (undefined7)((ulong)puVar11[0xf] >> 8);
      uStack_170 = (undefined1)puVar11[0xe];
      uStack_16f = (undefined7)((ulong)puVar11[0xe] >> 8);
      func_0x00010213dea4(&uStack_1e0);
      FUN_10213dce4(&uStack_270,&uStack_140);
      func_0x000107c6142c(lVar18);
      uStack_d8 = CONCAT71(uStack_177,uStack_178);
      uStack_d0 = CONCAT71(uStack_16f,uStack_170);
      uStack_c8 = CONCAT71(uStack_167,uStack_168);
      uStack_e0 = uStack_180;
      puStack_c0 = puStack_160;
      uStack_118 = uStack_1b8;
      uStack_120 = uStack_1c0;
      uStack_108 = uStack_1a8;
      uStack_110 = uStack_1b0;
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
      uStack_138 = uStack_1d8;
      uStack_140 = uStack_1e0;
      uStack_128 = uStack_1c8;
      uStack_130 = uStack_1d0;
      goto LAB_10213a140;
    }
    func_0x000107c6142c(lVar18);
  }
  func_0x00010213de88(&uStack_140);
LAB_10213a140:
  uVar1 = uStack_274 & lStack_90 == 0;
  puVar10 = auStack_158;
  func_0x000107c614a8();
  func_0x000107c5f830(lVar21);
  func_0x000107c5f82c();
  (**(code **)(lVar19 + 8))(lVar21,lVar9);
  iVar8 = (int)&uStack_140;
  func_0x000100ce4f00();
  if (iVar8 == 1) {
    uStack_274 = 1;
  }
  else {
    func_0x00010213de48(&uStack_140,0x112e5b2f8,&UNK_10da60e28);
    uStack_274 = (uint)(puStack_c0 <= puVar10);
  }
  if (uVar1 == 0) {
LAB_10213a378:
    auVar5._8_8_ = uStack_2a8;
    auVar5._0_8_ = uStack_2b0;
    auVar23._8_8_ = uStack_2a8;
    auVar23._0_8_ = uStack_2b0;
    auVar6._8_8_ = uStack_298;
    auVar6._0_8_ = uStack_2a0;
    auVar22._8_8_ = uStack_298;
    auVar22._0_8_ = uStack_2a0;
    auVar22 = NEON_ext(auVar22,auVar6,8,1);
    auVar23 = NEON_ext(auVar23,auVar5,8,1);
    auVar4._8_8_ = lStack_2b8;
    auVar4._0_8_ = uStack_2c0;
    auVar24._8_8_ = lStack_2b8;
    auVar24._0_8_ = uStack_2c0;
    auVar24 = NEON_ext(auVar24,auVar4,8,1);
    puStack_280[1] = auVar24._0_8_;
    *puStack_280 = uStack_2c0;
    puStack_280[3] = auVar23._0_8_;
    puStack_280[2] = uStack_2b0;
    puStack_280[5] = auVar22._0_8_;
    puStack_280[4] = uStack_2a0;
    *(char *)(puStack_280 + 6) = (char)uStack_274;
    return;
  }
  lVar19 = *(long *)(lStack_288 + 0x48);
  func_0x0001000285a8(0x112e5ad10,&UNK_10da60730);
  lVar9 = lVar19;
  func_0x000107c6048c();
  lVar18 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(lVar19 + 0x40);
  if (uVar20 == 0) goto LAB_10213a248;
  do {
    uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar20 = uVar20 - 1 & uVar20;
    while( true ) {
      uVar12 = LZCOUNT(uVar12);
      uVar13 = uVar12 | lVar18 << 6;
      puVar11 = (undefined8 *)(*(long *)(lVar19 + 0x30) + uVar13 * 0x10);
      puVar16 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar13 * 0x88);
      uStack_1e0 = *puVar16;
      uStack_1d8 = puVar16[1];
      uStack_1b0 = puVar16[6];
      uStack_1a8 = puVar16[7];
      uStack_1a0 = puVar16[8];
      uStack_198 = puVar16[9];
      uStack_1c8 = puVar16[3];
      uStack_1d0 = puVar16[2];
      uStack_1c0 = puVar16[4];
      uStack_1b8 = puVar16[5];
      uStack_190 = puVar16[10];
      uStack_188 = puVar16[0xb];
      uStack_180 = puVar16[0xc];
      uVar3 = puVar16[0xd];
      puStack_160 = (undefined1 *)puVar16[0x10];
      uStack_178 = (undefined1)uVar3;
      uStack_177 = (undefined7)((ulong)uVar3 >> 8);
      uStack_168 = (undefined1)puVar16[0xf];
      uStack_167 = (undefined7)((ulong)puVar16[0xf] >> 8);
      uStack_170 = (undefined1)puVar16[0xe];
      uStack_16f = (undefined7)((ulong)puVar16[0xe] >> 8);
      uVar17 = *puVar11;
      uVar2 = puVar11[1];
      uVar15 = (uVar12 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
      *(ulong *)(lVar9 + 0x40 + uVar15) = *(ulong *)(lVar9 + 0x40 + uVar15) | 1L << (uVar12 & 0x3f);
      puVar11 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar13 * 0x10);
      *puVar11 = uVar17;
      puVar11[1] = uVar2;
      puVar11 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar13 * 0x80);
      puVar11[5] = uStack_1b8;
      puVar11[4] = uStack_1c0;
      puVar11[7] = uStack_1a8;
      puVar11[6] = uStack_1b0;
      puVar11[1] = uStack_1d8;
      *puVar11 = uStack_1e0;
      puVar11[3] = uStack_1c8;
      puVar11[2] = uStack_1d0;
      *(ulong *)((long)puVar11 + 0x71) = CONCAT17(uStack_168,uStack_16f);
      *(ulong *)((long)puVar11 + 0x69) = CONCAT17(uStack_170,uStack_177);
      puVar11[0xb] = uStack_188;
      puVar11[10] = uStack_190;
      puVar11[0xd] = uVar3;
      puVar11[0xc] = uStack_180;
      puVar11[9] = uStack_198;
      puVar11[8] = uStack_1a0;
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10213a3d4);
        (*pcVar7)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      FUN_10213dce4(&uStack_1e0,&uStack_270);
      func_0x000107c61434(uVar2);
      if (uVar20 != 0) break;
LAB_10213a248:
      do {
        lVar21 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10213a3d0);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar21) {
          uVar17 = *(undefined8 *)(lStack_288 + 0x88);
          func_0x000107c61434(uVar17);
          FUN_102136964(lVar9,uVar17);
          func_0x000107c61574(lVar9);
          func_0x000107c6142c(uVar17);
          goto LAB_10213a378;
        }
        uVar20 = ((ulong *)(lVar19 + 0x40))[lVar21];
        lVar18 = lVar18 + 1;
      } while (uVar20 == 0);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar18 = lVar21;
    }
  } while( true );
}



/* Entry: 10213a3d4; end: 10213a4e7;  */

void FUN_10213a3d4(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 0x80);
      uStack_98 = puVar1[5];
      uStack_a0 = puVar1[4];
      uStack_88 = puVar1[7];
      uStack_90 = puVar1[6];
      uStack_b8 = puVar1[1];
      uStack_c0 = *puVar1;
      uStack_a8 = puVar1[3];
      uStack_b0 = puVar1[2];
      uStack_78 = puVar1[9];
      uStack_80 = puVar1[8];
      uStack_68 = puVar1[0xb];
      uStack_70 = puVar1[10];
      uStack_60 = puVar1[0xc];
      uStack_4f = *(undefined8 *)((long)puVar1 + 0x71);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x69) >> 0x38);
      uStack_58 = (undefined1)puVar1[0xd];
      uStack_57 = (undefined7)((ulong)puVar1[0xd] >> 8);
      uVar7 = puVar1[0xb];
      uVar6 = puVar1[10];
      uVar4 = puVar1[0xd];
      uVar3 = puVar1[0xc];
      uVar5 = *(undefined8 *)((long)puVar1 + 0x69);
      uVar9 = puVar1[9];
      uVar8 = puVar1[8];
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)puVar1 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar5;
      param_1[0xb] = uVar7;
      param_1[10] = uVar6;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
      param_1[9] = uVar9;
      param_1[8] = uVar8;
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar6 = puVar1[3];
      uVar5 = puVar1[2];
      uVar7 = puVar1[4];
      uVar9 = puVar1[7];
      uVar8 = puVar1[6];
      param_1[5] = puVar1[5];
      param_1[4] = uVar7;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      FUN_10213e098(&uStack_c0,auStack_140);
      func_0x000107c6142c(lVar2);
      func_0x00010213deec(param_1);
      return;
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x00010213ded0(&uStack_c0);
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = CONCAT71(uStack_57,uStack_58);
  param_1[0xc] = uStack_60;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_4f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_50,uStack_57);
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  return;
}



/* Entry: 10213a4e8; end: 10213a85f;  */

void FUN_10213a4e8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined8 uStack_23f;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined8 uStack_1af;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  uVar2 = 0;
  func_0x000107c5f83c();
  lVar6 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f830(lVar5);
  func_0x000107c5f82c();
  (**(code **)(lVar6 + 8))(lVar5,uVar2);
  func_0x000107c61428(param_2 + 0x40,&uStack_110,0x20,0);
  lVar5 = *(long *)(param_2 + 0x40);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10213a6b0:
    func_0x000107c614a8(&uStack_110);
  }
  else {
    func_0x000107c61434(lVar5);
    lVar6 = param_3;
    uVar2 = param_4;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar5);
      goto LAB_10213a6b0;
    }
    lVar6 = *(long *)(lVar5 + 0x38) + lVar6 * 0x30;
    uVar7 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(ulong *)(lVar6 + 0x28);
    func_0x000107c61434(uVar7);
    func_0x000107c614a8(&uStack_110);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(lVar5);
    if (uVar3 < uVar2) {
      func_0x000107c61428(param_2 + 0x48,auStack_88,0x20,0);
      lVar5 = *(long *)(param_2 + 0x48);
      if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10213a718:
        func_0x00010213de88(&uStack_110);
      }
      else {
        func_0x000107c61434(lVar5);
        func_0x000100029284();
        if ((param_4 & 1) == 0) {
          func_0x000107c6142c(lVar5);
          goto LAB_10213a718;
        }
        puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_3 * 0x88);
        uStack_198 = puVar4[1];
        uStack_1a0 = *puVar4;
        uStack_168 = puVar4[7];
        uStack_170 = puVar4[6];
        uStack_158 = puVar4[9];
        uStack_160 = puVar4[8];
        uStack_188 = puVar4[3];
        uStack_190 = puVar4[2];
        uStack_178 = puVar4[5];
        uStack_180 = puVar4[4];
        uStack_148 = puVar4[0xb];
        uStack_150 = puVar4[10];
        uStack_140 = puVar4[0xc];
        uStack_120 = puVar4[0x10];
        uStack_138 = (undefined1)puVar4[0xd];
        uStack_137 = (undefined7)((ulong)puVar4[0xd] >> 8);
        uStack_128 = (undefined1)puVar4[0xf];
        uStack_127 = (undefined7)((ulong)puVar4[0xf] >> 8);
        uStack_130 = (undefined1)puVar4[0xe];
        uStack_12f = (undefined7)((ulong)puVar4[0xe] >> 8);
        uStack_108 = puVar4[1];
        uStack_110 = *puVar4;
        uStack_f8 = puVar4[3];
        uStack_100 = puVar4[2];
        uStack_e8 = puVar4[5];
        uStack_f0 = puVar4[4];
        uStack_d8 = puVar4[7];
        uStack_e0 = puVar4[6];
        uStack_c8 = puVar4[9];
        uStack_d0 = puVar4[8];
        uStack_b8 = puVar4[0xb];
        uStack_c0 = puVar4[10];
        uStack_b0 = puVar4[0xc];
        uStack_90 = puVar4[0x10];
        uStack_a8 = (undefined1)puVar4[0xd];
        uStack_a7 = (undefined7)((ulong)puVar4[0xd] >> 8);
        uStack_98 = (undefined1)puVar4[0xf];
        uStack_97 = (undefined7)((ulong)puVar4[0xf] >> 8);
        uStack_a0 = (undefined1)puVar4[0xe];
        uStack_9f = (undefined7)((ulong)puVar4[0xe] >> 8);
        FUN_10213dce4(&uStack_1a0,&uStack_2b0);
        func_0x000107c6142c(lVar5);
        func_0x00010213dea4(&uStack_110);
      }
      iVar1 = (int)&uStack_110;
      func_0x000100ce4f00();
      if (iVar1 == 1) {
        func_0x00010213de48(&uStack_110,0x112e5b2f8,&UNK_10da60e28);
        func_0x000107c614a8(auStack_88);
        func_0x00010213ded0(&uStack_1a0);
        param_1[9] = uStack_158;
        param_1[8] = uStack_160;
        param_1[0xb] = uStack_148;
        param_1[10] = uStack_150;
        param_1[0xd] = CONCAT71(uStack_137,uStack_138);
        param_1[0xc] = uStack_140;
        *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_128,uStack_12f);
        *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_130,uStack_137);
        param_1[1] = uStack_198;
        *param_1 = uStack_1a0;
        param_1[3] = uStack_188;
        param_1[2] = uStack_190;
      }
      else {
        uStack_1d8 = uStack_c8;
        uStack_1e0 = uStack_d0;
        uStack_1c8 = uStack_b8;
        uStack_1d0 = uStack_c0;
        uStack_1b8 = uStack_a8;
        uStack_1c0 = uStack_b0;
        uStack_1af = CONCAT17(uStack_98,uStack_9f);
        uStack_1b7 = uStack_a7;
        uStack_1b0 = uStack_a0;
        uStack_218 = uStack_108;
        uStack_220 = uStack_110;
        uStack_208 = uStack_f8;
        uStack_210 = uStack_100;
        uStack_1f8 = uStack_e8;
        uStack_200 = uStack_f0;
        uStack_1e8 = uStack_d8;
        uStack_1f0 = uStack_e0;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_120 = uStack_90;
        uStack_138 = uStack_a8;
        uStack_137 = uStack_a7;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_127 = uStack_97;
        uStack_130 = uStack_a0;
        uStack_12f = uStack_9f;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        FUN_10213e098(&uStack_220,&uStack_2b0);
        func_0x000107c614a8(auStack_88);
        func_0x00010213de48(&uStack_1a0,0x112e5b2f8,&UNK_10da60e28);
        uStack_268 = uStack_1d8;
        uStack_270 = uStack_1e0;
        uStack_258 = uStack_1c8;
        uStack_260 = uStack_1d0;
        uStack_248 = uStack_1b8;
        uStack_250 = uStack_1c0;
        uStack_23f = uStack_1af;
        uStack_247 = uStack_1b7;
        uStack_240 = uStack_1b0;
        uStack_2a8 = uStack_218;
        uStack_2b0 = uStack_220;
        uStack_298 = uStack_208;
        uStack_2a0 = uStack_210;
        uStack_288 = uStack_1f8;
        uStack_290 = uStack_200;
        uStack_278 = uStack_1e8;
        uStack_280 = uStack_1f0;
        func_0x00010213deec(&uStack_2b0);
        param_1[9] = uStack_268;
        param_1[8] = uStack_270;
        param_1[0xb] = uStack_258;
        param_1[10] = uStack_260;
        param_1[0xd] = CONCAT71(uStack_247,uStack_248);
        param_1[0xc] = uStack_250;
        *(undefined8 *)((long)param_1 + 0x71) = uStack_23f;
        *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_240,uStack_247);
        param_1[1] = uStack_2a8;
        *param_1 = uStack_2b0;
        param_1[3] = uStack_298;
        param_1[2] = uStack_2a0;
        uStack_180 = uStack_290;
        uStack_178 = uStack_288;
        uStack_170 = uStack_280;
        uStack_168 = uStack_278;
      }
      goto LAB_10213a6e8;
    }
  }
  func_0x00010213ded0(&uStack_110);
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[0xd] = CONCAT71(uStack_a7,uStack_a8);
  param_1[0xc] = uStack_b0;
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_98,uStack_9f);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_a0,uStack_a7);
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  uStack_180 = uStack_f0;
  uStack_178 = uStack_e8;
  uStack_170 = uStack_e0;
  uStack_168 = uStack_d8;
LAB_10213a6e8:
  param_1[5] = uStack_178;
  param_1[4] = uStack_180;
  param_1[7] = uStack_168;
  param_1[6] = uStack_170;
  return;
}



/* Entry: 10213a860; end: 10213aa07;  */

/* WARNING: Removing unreachable block (ram,0x00010213a9fc) */

void FUN_10213a860(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  long lStack_90;
  ulong uStack_88;
  long lStack_58;
  
  if (param_4 != 0) {
    uStack_88 = 0xf000000000000000;
    lStack_90 = 0;
    func_0x000107c5ee2c(param_4,&lStack_90);
    uVar1 = uStack_88;
    lVar3 = lStack_90;
    if (uStack_88 >> 0x3c < 0xf) {
      func_0x00010006c00c(lStack_90,uStack_88);
      FUN_10213aa08(&lStack_58,&lStack_90);
      func_0x0001000b44c0(lVar3,uVar1);
      func_0x00010006c090(lStack_90,uStack_88);
      if (lStack_58 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar3 = lStack_58;
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c447a8();
        if ((int)lVar4 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar3);
        }
        else {
          lVar4 = lVar3;
          func_0x000107c3fbb4();
          func_0x000107c61180();
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10213a9fc);
            (*pcVar2)();
          }
          lVar5 = lVar4;
          func_0x000107c519c8();
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          if (lVar5 != param_3) {
            puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
            lStack_90 = param_3;
            func_0x000107c6057c();
            goto LAB_10213a8c0;
          }
        }
        puVar6 = (undefined *)0x0;
      }
      goto LAB_10213a8c0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10213a8c0:
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x38),0x10213e124,&lStack_90,
                      PTR___sytN_11034f1b0 + 8);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 10213aa08; end: 10213ab07;  */

void FUN_10213aa08(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_2;
  uVar1 = param_2[1];
  lVar2 = 0;
  FUN_10213e144(0,0x112e5af90,&PTR_PTR_1126be180);
  func_0x000107c614e8();
  func_0x000107c5ee20(uVar5,uVar1);
  func_0x000107c4e380();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  lVar3 = 0;
  func_0x000107c61174();
  lVar4 = lVar3;
  if (lVar2 == 0) {
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
    func_0x000107c614ac();
    lVar2 = 0;
  }
  *param_1 = lVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  func_0x000107c60e78();
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  func_0x000107c6142c(uVar5);
  lVar2 = *(long *)(lVar4 + 0x58);
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x50);
    uVar5 = *(undefined8 *)(lVar4 + 0x60);
    uVar1 = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    func_0x000107c61434(lVar2);
    func_0x00010213dd18(uVar7,lVar2,uVar5,uVar1);
    FUN_10213aff8(uVar7,lVar2,0,0);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 10213ab08; end: 10213ab97;  */

void FUN_10213ab08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  func_0x000107c6142c(uVar2);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    func_0x000107c61434(lVar3);
    func_0x00010213dd18(uVar4,lVar3,uVar2,uVar1);
    FUN_10213aff8(uVar4,lVar3,0,0);
    func_0x000107c6142c(lVar3);
  }
  return;
}



/* Entry: 10213ab98; end: 10213acfb;  */

void FUN_10213ab98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_158 [64];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_c0;
  long lStack_b8;
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
  byte bStack_58;
  
  uVar1 = 0x112e5b300;
  func_0x0001000285a8(0x112e5b300,&UNK_10da60e30);
  func_0x000100087bd4(&uStack_c0,FUN_10213df24,&uStack_110,uVar1);
  uVar1 = uStack_b0;
  uVar5 = uStack_a8;
  uVar6 = uStack_80;
  uVar7 = uStack_a0;
  uVar8 = uStack_98;
  uVar9 = uStack_90;
  uVar10 = uStack_88;
  if (lStack_b8 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c61434();
    uStack_78 = 0;
    bStack_58 = 1;
    uStack_70 = 0xe000000000000000;
    uStack_68 = 0;
    uStack_60 = 0;
    lStack_b8 = lVar2;
    uVar1 = 0;
    uVar5 = 0xe000000000000000;
    uStack_c0 = uVar6;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  bStack_58 = bStack_58 & 1;
  uStack_118 = param_4;
  uStack_110 = uStack_c0;
  lStack_108 = lStack_b8;
  uStack_b0 = uVar1;
  uStack_a8 = uVar5;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar10;
  uStack_80 = uVar6;
  func_0x00010213de0c(&uStack_110,auStack_158);
  puVar3 = PTR___ss5Int64VN_11034ee50;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c();
  FUN_1021383b8(&uStack_c0);
  param_1[1] = lStack_108;
  *param_1 = uStack_110;
  param_1[3] = uVar5;
  param_1[2] = uVar1;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[8] = uVar6;
  param_1[9] = puVar3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = puVar4;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



/* Entry: 10213acfc; end: 10213aedf;  */

void FUN_10213acfc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined8 uStack_20f;
  undefined1 auStack_1e0 [112];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x48,auStack_58,0x20,0);
  lVar3 = *(long *)(param_2 + 0x48);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 0x88);
      uStack_168 = puVar2[1];
      uStack_170 = *puVar2;
      uStack_138 = puVar2[7];
      uStack_140 = puVar2[6];
      uStack_128 = puVar2[9];
      uStack_130 = puVar2[8];
      uStack_158 = puVar2[3];
      uStack_160 = puVar2[2];
      uStack_148 = puVar2[5];
      uStack_150 = puVar2[4];
      uStack_118 = puVar2[0xb];
      uStack_120 = puVar2[10];
      uStack_108 = puVar2[0xd];
      uStack_110 = puVar2[0xc];
      uStack_f8 = puVar2[0xf];
      uStack_100 = puVar2[0xe];
      uStack_f0 = puVar2[0x10];
      uStack_d8 = puVar2[1];
      uStack_e0 = *puVar2;
      uStack_c8 = puVar2[3];
      uStack_d0 = puVar2[2];
      uStack_b8 = puVar2[5];
      uStack_c0 = puVar2[4];
      uStack_a8 = puVar2[7];
      uStack_b0 = puVar2[6];
      uStack_98 = puVar2[9];
      uStack_a0 = puVar2[8];
      uStack_88 = puVar2[0xb];
      uStack_90 = puVar2[10];
      uStack_80 = puVar2[0xc];
      uStack_60 = puVar2[0x10];
      uStack_78 = (undefined1)puVar2[0xd];
      uStack_77 = (undefined7)((ulong)puVar2[0xd] >> 8);
      uStack_68 = (undefined1)puVar2[0xf];
      uStack_67 = (undefined7)((ulong)puVar2[0xf] >> 8);
      uStack_70 = (undefined1)puVar2[0xe];
      uStack_6f = (undefined7)((ulong)puVar2[0xe] >> 8);
      FUN_10213dce4(&uStack_170,&uStack_270);
      func_0x000107c6142c(lVar3);
      func_0x00010213dea4(&uStack_e0);
      goto LAB_10213adf4;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x00010213de88(&uStack_e0);
LAB_10213adf4:
  iVar1 = (int)&uStack_e0;
  func_0x000100ce4f00();
  if (iVar1 == 1) {
    func_0x00010213de48(&uStack_e0,0x112e5b2f8,&UNK_10da60e28);
    func_0x000107c614a8(auStack_58);
    *(undefined8 *)((long)param_1 + 0x61) = 0;
    *(undefined8 *)((long)param_1 + 0x59) = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_108 = CONCAT71(uStack_77,uStack_78);
    uStack_f8 = CONCAT71(uStack_67,uStack_68);
    uStack_100 = CONCAT71(uStack_6f,uStack_70);
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_20f = CONCAT17(uStack_68,uStack_6f);
    uStack_217 = uStack_77;
    uStack_210 = uStack_70;
    uStack_268 = uStack_c8;
    uStack_270 = uStack_d0;
    uStack_258 = uStack_b8;
    uStack_260 = uStack_c0;
    uStack_248 = uStack_a8;
    uStack_250 = uStack_b0;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_f0 = uStack_60;
    uStack_110 = uStack_80;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_168 = uStack_d8;
    uStack_170 = uStack_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    FUN_10213df40(&uStack_270,auStack_1e0);
    func_0x000107c614a8(auStack_58);
    func_0x00010213de48(&uStack_170,0x112e5b2f8,&UNK_10da60e28);
    param_1[9] = uStack_228;
    param_1[8] = uStack_230;
    param_1[0xb] = CONCAT71(uStack_217,uStack_218);
    param_1[10] = uStack_220;
    *(undefined8 *)((long)param_1 + 0x61) = uStack_20f;
    *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_210,uStack_217);
    param_1[1] = uStack_268;
    *param_1 = uStack_270;
    param_1[3] = uStack_258;
    param_1[2] = uStack_260;
    param_1[5] = uStack_248;
    param_1[4] = uStack_250;
    param_1[7] = uStack_238;
    param_1[6] = uStack_240;
  }
  return;
}



/* Entry: 10213aee0; end: 10213aff7;  */

void FUN_10213aee0(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x70);
  if ((uVar1 != param_2 || lVar3 != param_3) &&
     (func_0x000107c605b8(uVar1,lVar3,param_2,param_3,0), (uVar1 & 1) == 0)) {
    return;
  }
  if (param_5 == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) goto LAB_10213afc0;
    uVar2 = *(ulong *)(param_1 + 0x50);
    uVar1 = param_2;
    if (uVar2 != param_2 || param_3 != lVar3) {
      func_0x000107c605b8(uVar2,lVar3,param_2,param_3,0);
      if ((uVar2 & 1) == 0) goto LAB_10213afc0;
      lVar3 = *(long *)(param_1 + 0x58);
      uVar1 = *(ulong *)(param_1 + 0x50);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x50) = param_2;
    *(long *)(param_1 + 0x58) = param_3;
    *(undefined8 *)(param_1 + 0x60) = param_4;
    *(long *)(param_1 + 0x68) = param_5;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_3);
  }
  func_0x00010213dd18(uVar1,lVar3,uVar4,uVar5);
LAB_10213afc0:
  FUN_10213aff8(param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10213aff8; end: 10213b353;  */

void FUN_10213aff8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long alStack_318 [17];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined1 auStack_178 [128];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  func_0x000107c61428(unaff_x20 + 0x48,&uStack_290,0x20,0);
  lVar13 = *(long *)(unaff_x20 + 0x48);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    lVar4 = param_1;
    uVar14 = param_2;
    func_0x000100029284();
    if ((uVar14 & 1) != 0) {
      puVar7 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar4 * 0x88);
      uStack_1f8 = puVar7[1];
      uStack_200 = *puVar7;
      uStack_1c8 = puVar7[7];
      uStack_1d0 = puVar7[6];
      uStack_1b8 = puVar7[9];
      uStack_1c0 = puVar7[8];
      uStack_1e8 = puVar7[3];
      uStack_1f0 = puVar7[2];
      uStack_1d8 = puVar7[5];
      uStack_1e0 = puVar7[4];
      uStack_1a8 = puVar7[0xb];
      uStack_1b0 = puVar7[10];
      uStack_1a0 = puVar7[0xc];
      uStack_180 = puVar7[0x10];
      uStack_198 = (undefined1)puVar7[0xd];
      uStack_197 = (undefined7)((ulong)puVar7[0xd] >> 8);
      uStack_188 = (undefined1)puVar7[0xf];
      uStack_187 = (undefined7)((ulong)puVar7[0xf] >> 8);
      uStack_190 = (undefined1)puVar7[0xe];
      uStack_18f = (undefined7)((ulong)puVar7[0xe] >> 8);
      FUN_10213dce4(&uStack_200,auStack_178);
      func_0x000107c614a8(&uStack_290);
      func_0x000107c6142c(lVar13);
      uStack_a8 = uStack_1b8;
      uStack_b0 = uStack_1c0;
      uStack_98 = uStack_1a8;
      uStack_a0 = uStack_1b0;
      uStack_88 = uStack_198;
      uStack_90 = uStack_1a0;
      uStack_7f = CONCAT17(uStack_188,uStack_18f);
      uStack_87 = uStack_197;
      uStack_80 = uStack_190;
      uStack_e8 = uStack_1f8;
      uStack_f0 = uStack_200;
      uStack_d8 = uStack_1e8;
      uStack_e0 = uStack_1f0;
      uStack_c8 = uStack_1d8;
      uStack_d0 = uStack_1e0;
      uStack_b8 = uStack_1c8;
      uStack_c0 = uStack_1d0;
      FUN_10213dce4(&uStack_200,auStack_178);
      FUN_10213da74(auStack_178,&uStack_f0,param_3,param_4);
      func_0x00010213dd48(&uStack_200);
      func_0x000107c61434(param_2);
      func_0x00010213dd48(&uStack_200);
      uStack_f8 = uStack_180;
      func_0x000107c61428(unaff_x20 + 0x48,&uStack_290,0x21,0);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      func_0x000107c61558(uVar5);
      alStack_318[0] = *(long *)(unaff_x20 + 0x48);
      *(undefined8 *)(unaff_x20 + 0x48) = 0x8000000000000000;
      FUN_10213b674(auStack_178,param_1,param_2,uVar5);
      func_0x000107c6142c(param_2);
      lVar4 = alStack_318[0];
      *(long *)(unaff_x20 + 0x48) = alStack_318[0];
      func_0x000107c614a8(&uStack_290);
      func_0x0001000285a8(0x112e5ad10,&UNK_10da60730);
      lVar6 = lVar4;
      func_0x000107c6048c();
      lVar13 = 0;
      uVar10 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar14 = 0xffffffffffffffff;
      if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
        uVar14 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar14 = uVar14 & *(ulong *)(lVar4 + 0x40);
      if (uVar14 == 0) goto LAB_10213b204;
      do {
        uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        while( true ) {
          uVar8 = LZCOUNT(uVar8);
          uVar9 = uVar8 | lVar13 << 6;
          puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar9 * 0x10);
          puVar12 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar9 * 0x88);
          uStack_288 = puVar12[1];
          uStack_290 = *puVar12;
          uStack_258 = puVar12[7];
          uStack_260 = puVar12[6];
          uStack_248 = puVar12[9];
          uStack_250 = puVar12[8];
          uStack_278 = puVar12[3];
          uStack_280 = puVar12[2];
          uStack_268 = puVar12[5];
          uStack_270 = puVar12[4];
          uStack_238 = puVar12[0xb];
          uStack_240 = puVar12[10];
          uVar15 = puVar12[0xd];
          uStack_230 = puVar12[0xc];
          uStack_210 = puVar12[0x10];
          uStack_228 = (undefined1)uVar15;
          uStack_227 = (undefined7)((ulong)uVar15 >> 8);
          uStack_218 = (undefined1)puVar12[0xf];
          uStack_217 = (undefined7)((ulong)puVar12[0xf] >> 8);
          uStack_220 = (undefined1)puVar12[0xe];
          uStack_21f = (undefined7)((ulong)puVar12[0xe] >> 8);
          uVar5 = *puVar7;
          uVar2 = puVar7[1];
          uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
          *(ulong *)(lVar6 + 0x40 + uVar11) =
               *(ulong *)(lVar6 + 0x40 + uVar11) | 1L << (uVar8 & 0x3f);
          puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar9 * 0x10);
          *puVar7 = uVar5;
          puVar7[1] = uVar2;
          puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar9 * 0x80);
          puVar7[5] = uStack_268;
          puVar7[4] = uStack_270;
          puVar7[7] = uStack_258;
          puVar7[6] = uStack_260;
          puVar7[1] = uStack_288;
          *puVar7 = uStack_290;
          puVar7[3] = uStack_278;
          puVar7[2] = uStack_280;
          *(ulong *)((long)puVar7 + 0x71) = CONCAT17(uStack_218,uStack_21f);
          *(ulong *)((long)puVar7 + 0x69) = CONCAT17(uStack_220,uStack_227);
          puVar7[0xb] = uStack_238;
          puVar7[10] = uStack_240;
          puVar7[0xd] = uVar15;
          puVar7[0xc] = uStack_230;
          puVar7[9] = uStack_248;
          puVar7[8] = uStack_250;
          if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10213b354);
            (*pcVar3)();
          }
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
          FUN_10213dce4(&uStack_290,alStack_318);
          func_0x000107c61434(uVar2);
          if (uVar14 != 0) break;
LAB_10213b204:
          do {
            lVar1 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10213b350);
              (*pcVar3)();
            }
            if ((long)(uVar10 + 0x3f >> 6) <= lVar1) {
              FUN_102136964(lVar6,0);
              func_0x000107c61574(lVar6);
              return;
            }
            uVar14 = ((ulong *)(lVar4 + 0x40))[lVar1];
            lVar13 = lVar13 + 1;
          } while (uVar14 == 0);
          uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar13 = lVar1;
        }
      } while( true );
    }
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c614a8(&uStack_290);
  return;
}



/* Entry: 10213b354; end: 10213b38b;  */

void FUN_10213b354(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000f66f0(param_3,param_4,*param_2);
  *param_1 = (byte)param_3 & 1;
  return;
}



/* Entry: 10213b38c; end: 10213b41b;  */

undefined * FUN_10213b38c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1104d04f0;
  func_0x000107c613fc(&UNK_1104d04f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  pcVar2 = FUN_10213def0;
  func_0x0001000bfde0(FUN_10213def0,puVar1,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar2);
  return puVar1;
}



/* Entry: 10213b41c; end: 10213b567;  */

long * FUN_10213b41c(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_3 & 1) != 0) {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lStack_c8 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10213b96c();
    }
    lVar3 = lStack_c8;
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lStack_c8 + 0x30) + param_2 * 0x10 + 8));
    plVar2 = (long *)(*(long *)(lVar3 + 0x38) + param_2 * 0x88);
    lVar4 = *plVar2;
    param_1[1] = plVar2[1];
    *param_1 = lVar4;
    lVar5 = plVar2[3];
    lVar4 = plVar2[2];
    lVar7 = plVar2[5];
    lVar6 = plVar2[4];
    lVar8 = plVar2[6];
    lVar10 = plVar2[9];
    lVar9 = plVar2[8];
    param_1[7] = plVar2[7];
    param_1[6] = lVar8;
    param_1[9] = lVar10;
    param_1[8] = lVar9;
    param_1[3] = lVar5;
    param_1[2] = lVar4;
    param_1[5] = lVar7;
    param_1[4] = lVar6;
    lVar5 = plVar2[0xb];
    lVar4 = plVar2[10];
    lVar7 = plVar2[0xd];
    lVar6 = plVar2[0xc];
    lVar9 = plVar2[0xf];
    lVar8 = plVar2[0xe];
    param_1[0x10] = plVar2[0x10];
    param_1[0xd] = lVar7;
    param_1[0xc] = lVar6;
    param_1[0xf] = lVar9;
    param_1[0xe] = lVar8;
    param_1[0xb] = lVar5;
    param_1[10] = lVar4;
    func_0x00010213c3a0(param_2,lVar3);
    *unaff_x20 = lVar3;
    return param_1;
  }
  plVar2 = &lStack_c8;
  FUN_10213de88(plVar2);
  param_1[0xd] = lStack_60;
  param_1[0xc] = lStack_68;
  param_1[0xf] = lStack_50;
  param_1[0xe] = lStack_58;
  param_1[0x10] = lStack_48;
  param_1[5] = lStack_a0;
  param_1[4] = lStack_a8;
  param_1[7] = lStack_90;
  param_1[6] = lStack_98;
  param_1[9] = lStack_80;
  param_1[8] = lStack_88;
  param_1[0xb] = lStack_70;
  param_1[10] = lStack_78;
  param_1[1] = lStack_c0;
  *param_1 = lStack_c8;
  param_1[3] = lStack_b0;
  param_1[2] = lStack_b8;
  return plVar2;
}



/* Entry: 10213b568; end: 10213b673;  */

void FUN_10213b568(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10213bb5c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x30);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = (ulong)*(byte *)(puVar2 + 2);
    uVar7 = puVar2[3];
    uVar8 = (ulong)*(byte *)(puVar2 + 4);
    uVar9 = puVar2[5];
    func_0x00010213c574(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  return;
}



/* Entry: 10213b674; end: 10213b96b;  */

ulong FUN_10213b674(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10213b74c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10213bcfc(lVar6,param_4 & 1);
    uVar4 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10213b714);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10213b96c();
    lVar6 = *unaff_x20;
    goto joined_r0x00010213b760;
  }
  lVar6 = *unaff_x20;
joined_r0x00010213b760:
  if ((uVar3 & 1) != 0) {
    uVar4 = *(long *)(lVar6 + 0x38) + uVar4 * 0x88;
    func_0x0001021383ec(uVar4,param_1,&UNK_1104d02c0);
    return uVar4;
  }
  lVar5 = lVar6 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar4 * 0x88);
  uVar10 = *param_1;
  puVar8[1] = param_1[1];
  *puVar8 = uVar10;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  uVar13 = param_1[5];
  uVar12 = param_1[4];
  uVar14 = param_1[6];
  uVar16 = param_1[9];
  uVar15 = param_1[8];
  puVar8[7] = param_1[7];
  puVar8[6] = uVar14;
  puVar8[9] = uVar16;
  puVar8[8] = uVar15;
  puVar8[3] = uVar11;
  puVar8[2] = uVar10;
  puVar8[5] = uVar13;
  puVar8[4] = uVar12;
  uVar11 = param_1[0xb];
  uVar10 = param_1[10];
  uVar13 = param_1[0xd];
  uVar12 = param_1[0xc];
  uVar15 = param_1[0xf];
  uVar14 = param_1[0xe];
  puVar8[0x10] = param_1[0x10];
  puVar8[0xd] = uVar13;
  puVar8[0xc] = uVar12;
  puVar8[0xf] = uVar15;
  puVar8[0xe] = uVar14;
  puVar8[0xb] = uVar11;
  puVar8[10] = uVar10;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10213b7f8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 10213b96c; end: 10213bb5b;  */

void FUN_10213b96c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_178 [136];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001000285a8(0x112e5ad20,&UNK_10da60740);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar12 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar12 + 0x40);
    if (uVar7 == 0) goto LAB_10213ba54;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
        lVar11 = uVar9 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar4 = puVar2[1];
        lVar10 = uVar9 * 0x88;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar10);
        uStack_d8 = puVar3[3];
        uStack_e0 = puVar3[2];
        uStack_c8 = puVar3[5];
        uStack_d0 = puVar3[4];
        uStack_b8 = puVar3[7];
        uStack_c0 = puVar3[6];
        uStack_a8 = puVar3[9];
        uStack_b0 = puVar3[8];
        uStack_88 = puVar3[0xd];
        uStack_90 = puVar3[0xc];
        uStack_78 = puVar3[0xf];
        uStack_80 = puVar3[0xe];
        uStack_70 = puVar3[0x10];
        uStack_98 = puVar3[0xb];
        uStack_a0 = puVar3[10];
        uStack_e8 = puVar3[1];
        uStack_f0 = *puVar3;
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uStack_e8;
        *puVar2 = uStack_f0;
        puVar2[7] = uStack_b8;
        puVar2[6] = uStack_c0;
        puVar2[9] = uStack_a8;
        puVar2[8] = uStack_b0;
        puVar2[3] = uStack_d8;
        puVar2[2] = uStack_e0;
        puVar2[5] = uStack_c8;
        puVar2[4] = uStack_d0;
        puVar2[0x10] = uStack_70;
        puVar2[0xd] = uStack_88;
        puVar2[0xc] = uStack_90;
        puVar2[0xf] = uStack_78;
        puVar2[0xe] = uStack_80;
        puVar2[0xb] = uStack_98;
        puVar2[10] = uStack_a0;
        func_0x000107c61434();
        FUN_10213dce4(&uStack_f0,auStack_178);
        if (uVar7 != 0) break;
LAB_10213ba54:
        do {
          lVar10 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10213bb5c);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_10213bb2c;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar13 = lVar10;
      }
    } while( true );
  }
LAB_10213bb2c:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 10213bb5c; end: 10213bcfb;  */

void FUN_10213bb5c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  
  func_0x0001000285a8(0x112e5ad30,&UNK_10da60750);
  lVar18 = *unaff_x20;
  lVar10 = lVar18;
  func_0x000107c6048c();
  if (*(long *)(lVar18 + 0x10) != 0) {
    lVar1 = lVar18 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar18 || lVar1 + uVar11 * 8 <= lVar10 + 0x40U) {
      func_0x000107c610b8(lVar10 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar19 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar18 + 0x40);
    if (uVar11 == 0) goto LAB_10213bc38;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar19 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x30) + lVar15);
        uVar5 = puVar2[1];
        lVar14 = uVar13 * 0x30;
        puVar3 = (undefined8 *)(*(long *)(lVar18 + 0x38) + lVar14);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = *(undefined1 *)(puVar3 + 2);
        uVar17 = puVar3[3];
        uVar8 = *(undefined1 *)(puVar3 + 4);
        uVar16 = puVar3[5];
        puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar15);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar14);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        *(undefined1 *)(puVar2 + 2) = uVar7;
        puVar2[3] = uVar17;
        *(undefined1 *)(puVar2 + 4) = uVar8;
        puVar2[5] = uVar16;
        func_0x000107c61434();
        func_0x000107c61434(uVar6);
        if (uVar11 != 0) break;
LAB_10213bc38:
        do {
          lVar14 = lVar19 + 1;
          if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10213bcfc);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_10213bcd4;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar19 = lVar19 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar19 = lVar14;
      }
    } while( true );
  }
LAB_10213bcd4:
  func_0x000107c61574(lVar18);
  *unaff_x20 = lVar10;
  return;
}



/* Entry: 10213bcfc; end: 10213c72f;  */

void FUN_10213bcfc(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e5ad20;
  func_0x0001000285a8(0x112e5ad20,&UNK_10da60740);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_10213c078:
    func_0x000107c61574(lVar13);
LAB_10213c080:
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10213c0a8);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar13);
            goto LAB_10213c080;
          }
          uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar14 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_10213c078;
        }
        uVar14 = puVar15[lVar17];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar17 << 6;
    if ((param_2 & 1) == 0) {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar16 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x88);
      uStack_178 = puVar8[1];
      uStack_180 = *puVar8;
      uStack_148 = puVar8[7];
      uStack_150 = puVar8[6];
      uStack_138 = puVar8[9];
      uStack_140 = puVar8[8];
      uStack_168 = puVar8[3];
      uStack_170 = puVar8[2];
      uStack_158 = puVar8[5];
      uStack_160 = puVar8[4];
      uStack_118 = puVar8[0xd];
      uStack_120 = puVar8[0xc];
      uStack_108 = puVar8[0xf];
      uStack_110 = puVar8[0xe];
      uStack_100 = puVar8[0x10];
      uStack_128 = puVar8[0xb];
      uStack_130 = puVar8[10];
      func_0x000107c61434(uVar16);
      FUN_10213dce4(&uStack_180,&uStack_f0);
      uStack_88 = uStack_118;
      uStack_90 = uStack_120;
      uStack_78 = uStack_108;
      uStack_80 = uStack_110;
      uStack_70 = uStack_100;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_b8 = uStack_148;
      uStack_c0 = uStack_150;
      uStack_a8 = uStack_138;
      uStack_b0 = uStack_140;
      uStack_98 = uStack_128;
      uStack_a0 = uStack_130;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar16 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x88);
      uStack_98 = puVar8[0xb];
      uStack_a0 = puVar8[10];
      uStack_88 = puVar8[0xd];
      uStack_90 = puVar8[0xc];
      uStack_78 = puVar8[0xf];
      uStack_80 = puVar8[0xe];
      uStack_70 = puVar8[0x10];
      uStack_d8 = puVar8[3];
      uStack_e0 = puVar8[2];
      uStack_c8 = puVar8[5];
      uStack_d0 = puVar8[4];
      uStack_b8 = puVar8[7];
      uStack_c0 = puVar8[6];
      uStack_a8 = puVar8[9];
      uStack_b0 = puVar8[8];
      uStack_e8 = puVar8[1];
      uStack_f0 = *puVar8;
    }
    func_0x000107c6068c(&uStack_180,*(undefined8 *)(lVar5 + 0x28));
    puVar8 = &uStack_180;
    func_0x000107c5fb58(puVar8,uVar4,uVar16);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar6 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10213c0ac);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar11 != uVar6) {
          uVar9 = uVar11;
        }
        bVar2 = (bool)(uVar11 == uVar6 | bVar2);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar9 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x10);
    *puVar8 = uVar4;
    puVar8[1] = uVar16;
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x88);
    puVar8[0xb] = uStack_98;
    puVar8[10] = uStack_a0;
    puVar8[0xd] = uStack_88;
    puVar8[0xc] = uStack_90;
    puVar8[0xf] = uStack_78;
    puVar8[0xe] = uStack_80;
    puVar8[0x10] = uStack_70;
    puVar8[3] = uStack_d8;
    puVar8[2] = uStack_e0;
    puVar8[5] = uStack_c8;
    puVar8[4] = uStack_d0;
    puVar8[7] = uStack_b8;
    puVar8[6] = uStack_c0;
    puVar8[9] = uStack_a8;
    puVar8[8] = uStack_b0;
    puVar8[1] = uStack_e8;
    *puVar8 = uStack_f0;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar17;
  } while( true );
}



/* Entry: 10213c730; end: 10213c94b;  */

undefined * FUN_10213c730(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined auStack_90 [8];
  undefined *puStack_88;
  undefined *apuStack_80 [2];
  undefined1 auStack_70 [16];
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar13 * 8;
  uStack_60 = param_2;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar11 = uVar14, func_0x000107c61594(uVar14,8), (uVar11 & 1) == 0)) {
      func_0x000107c6158c(uVar14,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      param_2 = 0x10213debc;
      FUN_10213cfd0(apuStack_80,uVar14,uVar13,param_1,0x10213debc,auStack_70,&puStack_88);
      puVar5 = apuStack_80[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_88;
      }
      puVar7 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar14,0xffffffffffffffff);
      puVar1 = puVar5;
      goto joined_r0x00010213c900;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_90 + -(uVar14 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar5,uVar14);
  puVar7 = param_1;
  FUN_10213c94c(puVar5,uVar13);
  puVar1 = unaff_x21;
joined_r0x00010213c900:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    puVar7 = (undefined *)0x0;
    param_2 = 0;
    func_0x000100029b9c(2,0x12);
    if (iVar4 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_88,uVar6);
    }
    func_0x000107c61574();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  lVar8 = 0;
  lVar9 = 0;
  uVar13 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar7 + 0x40);
  do {
    lVar10 = lVar9;
    if (uVar14 == 0) {
      do {
        lVar9 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10213ca44);
          (*pcVar2)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar9) {
          FUN_10213cc00();
          return param_1;
        }
        uVar14 = *(ulong *)((long)(puVar7 + 0x40) + lVar9 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar14 == 0);
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar9 * 0x40;
    }
    else {
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar9 << 6;
    }
    if (*(ulong *)(*(long *)(puVar7 + 0x38) + uVar11 * 0x30 + 0x28) <= param_2) {
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar11 & 0x3f);
      bVar3 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10213ca28);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10213c94c; end: 10213ca43;  */

void FUN_10213c94c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(param_3 + 0x40);
  do {
    lVar7 = lVar4;
    if (uVar6 == 0) {
      do {
        lVar4 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10213ca44);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar4) {
          FUN_10213cc00();
          return;
        }
        uVar6 = ((ulong *)(param_3 + 0x40))[lVar4];
        lVar7 = lVar7 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 * 0x40;
    }
    else {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
    }
    if (*(ulong *)(*(long *)(param_3 + 0x38) + uVar8 * 0x30 + 0x28) <= param_4) {
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar8 & 0x3f);
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10213ca28);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 10213ca44; end: 10213cbff;  */

void FUN_10213ca44(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  long lVar10;
  long lStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  lStack_b8 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_58 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_58 = uStack_58 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_58 == 0) {
      do {
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10213cc00);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          FUN_10213cc00(param_1,param_2,lStack_b8,param_3);
          return;
        }
        uStack_58 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar6 = lVar6 + 1;
      } while (uStack_58 == 0);
      uVar5 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
    }
    else {
      uVar5 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
      lVar10 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar9 = uVar5 | lVar10 << 6;
    puVar7 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    uStack_70 = *puVar7;
    uVar1 = puVar7[1];
    puVar7 = (undefined8 *)(*(long *)(param_3 + 0x38) + uVar9 * 0x30);
    uStack_a0 = *puVar7;
    uVar2 = puVar7[1];
    uStack_90 = *(undefined1 *)(puVar7 + 2);
    uStack_88 = puVar7[3];
    uStack_80 = *(undefined1 *)(puVar7 + 4);
    uStack_78 = puVar7[5];
    uStack_98 = uVar2;
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    puVar7 = &uStack_70;
    (*param_4)(puVar7,&uStack_a0);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar10;
    if (((ulong)puVar7 & 1) != 0) {
      uVar9 = (uVar5 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar5 & 0x3f);
      bVar4 = SCARRY8(lStack_b8,1);
      lStack_b8 = lStack_b8 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10213cbc4);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 10213cc00; end: 10213ce93;  */

undefined * FUN_10213cc00(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 auStack_a8 [72];
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar9 = param_4;
    }
    else {
      func_0x0001000285a8(0x112e5ad30,&UNK_10da60750);
      puVar9 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar21 = 0;
      }
      else {
        uVar21 = *param_1;
      }
      lVar12 = 0;
      do {
        if (uVar21 == 0) {
          do {
            lVar20 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10213ce8c);
              (*pcVar7)();
            }
            if (param_2 <= lVar20) {
              return puVar9;
            }
            uVar21 = param_1[lVar20];
            lVar12 = lVar12 + 1;
          } while (uVar21 == 0);
          uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar21 = uVar21 - 1 & uVar21;
        }
        else {
          uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar21 = uVar21 - 1 & uVar21;
          lVar20 = lVar12;
        }
        uVar11 = LZCOUNT(uVar11) | lVar20 << 6;
        puVar16 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar11 * 0x10);
        puVar13 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar11 * 0x30);
        uVar1 = *puVar16;
        uVar3 = puVar16[1];
        uVar2 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = *(undefined1 *)(puVar13 + 2);
        uVar17 = puVar13[3];
        uVar6 = *(undefined1 *)(puVar13 + 4);
        uVar14 = puVar13[5];
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar9 + 0x28));
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar4);
        puVar10 = auStack_a8;
        func_0x000107c5fb58(puVar10,uVar1,uVar3);
        func_0x000107c606a8();
        uVar19 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar18 = (ulong)puVar10 & (uVar19 ^ 0xffffffffffffffff);
        uVar15 = uVar18 >> 6;
        uVar11 = -1L << (uVar18 & 0x3f) &
                 (*(ulong *)(puVar9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar8 = false;
          uVar11 = 0x3f - uVar19 >> 6;
          do {
            uVar18 = uVar15 + 1;
            if ((uVar18 == uVar11) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10213ce90);
              (*pcVar7)();
            }
            uVar15 = 0;
            if (uVar18 != uVar11) {
              uVar15 = uVar18;
            }
            bVar8 = (bool)(uVar18 == uVar11 | bVar8);
          } while (*(ulong *)(puVar9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar9 + uVar15 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar18 & 0x7fffffffffffffc0;
        }
        uVar15 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar15 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar9 + uVar15 + 0x40);
        puVar16 = (undefined8 *)(*(long *)(puVar9 + 0x30) + uVar11 * 0x10);
        *puVar16 = uVar1;
        puVar16[1] = uVar3;
        puVar16 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar11 * 0x30);
        *puVar16 = uVar2;
        puVar16[1] = uVar4;
        *(undefined1 *)(puVar16 + 2) = uVar5;
        puVar16[3] = uVar17;
        *(undefined1 *)(puVar16 + 4) = uVar6;
        puVar16[5] = uVar14;
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
        bVar8 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10213ce94);
          (*pcVar7)();
        }
        lVar12 = lVar20;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar9;
}



/* Entry: 10213ce94; end: 10213ceaf;  */

void FUN_10213ce94(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10213ceb0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10213ceb0; end: 10213cfcf;  */

undefined * FUN_10213ceb0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10213cfd0);
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
    puVar2 = (undefined *)0x112e5b1d0;
    func_0x0001000285a8(0x112e5b1d0,&UNK_10da60e10);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x70) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106ba238);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x70 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 10213cfd0; end: 10213d09b;  */

void FUN_10213cfd0(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10213d09c);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_10213ca44(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10213d098);
  (*pcVar1)();
}



/* Entry: 10213d09c; end: 10213d3b3;  */

void FUN_10213d09c(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_88;
  undefined *puStack_70;
  
  puVar10 = param_2;
  puVar4 = param_3;
  func_0x000107c5d984();
  func_0x000107c61180();
  puVar11 = puVar4;
  if (puVar10 == (undefined *)0x0) {
LAB_10213d114:
    func_0x000107c61434(param_5);
    puVar4 = param_5;
    puStack_70 = param_4;
  }
  else {
    puStack_70 = puVar10;
    func_0x000107c5faec();
    puVar11 = puVar4;
    func_0x000107c61170(puVar10);
    uVar1 = (ulong)puStack_70 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar4);
      goto LAB_10213d114;
    }
  }
  puVar10 = param_2;
  func_0x000107c3e544();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
    puStack_88 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    puVar6 = puVar11;
  }
  else {
    puStack_88 = puVar10;
    func_0x000107c5faec();
    puVar6 = puVar11;
    func_0x000107c61170(puVar10);
    puVar10 = puVar11;
  }
  puVar11 = param_2;
  func_0x000107c51d04();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    puVar8 = puVar6;
  }
  else {
    puVar12 = puVar11;
    func_0x000107c5faec();
    puVar8 = puVar6;
    func_0x000107c61170(puVar11);
    puVar11 = puVar6;
  }
  puVar6 = param_2;
  func_0x000107c42120();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    puVar6 = (undefined *)0xe000000000000000;
    puVar3 = puVar8;
    if (puVar10 == (undefined *)0x0) goto LAB_10213d228;
LAB_10213d1c8:
    uVar1 = (ulong)puStack_88 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar10);
      puStack_88 = (undefined *)0x0;
      puVar10 = (undefined *)0x0;
    }
    if (puVar11 != (undefined *)0x0) goto LAB_10213d1f4;
LAB_10213d234:
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar6;
    func_0x000107c5faec();
    puVar3 = puVar8;
    func_0x000107c61170(puVar6);
    puVar6 = puVar8;
    if (puVar10 != (undefined *)0x0) goto LAB_10213d1c8;
LAB_10213d228:
    puStack_88 = (undefined *)0x0;
    if (puVar11 == (undefined *)0x0) goto LAB_10213d234;
LAB_10213d1f4:
    uVar1 = (ulong)puVar12 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar11);
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
  }
  func_0x000107c61434(puVar4);
  puVar8 = param_2;
  func_0x000107c42154();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    puVar2 = puVar8;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(puVar8);
    func_0x000107c6142c(puVar3);
    uVar1 = (ulong)puVar2 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c42154();
      func_0x000107c61180();
      if (param_2 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        puVar5 = (undefined *)0xe000000000000000;
      }
      else {
        puVar8 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      goto LAB_10213d31c;
    }
  }
  func_0x000107c519c8();
  puVar8 = PTR___ss5Int64VN_11034ee50;
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c();
LAB_10213d31c:
  if ((puStack_70 == param_4) && (puVar4 == param_5)) {
    bVar7 = 1;
  }
  else {
    puVar3 = puStack_70;
    func_0x000107c605b8(puStack_70,puVar4,param_4,param_5,0);
    bVar7 = (byte)puVar3;
  }
  func_0x000107c6142c(puVar4);
  *param_1 = puStack_70;
  param_1[1] = puVar4;
  param_1[2] = puVar9;
  param_1[3] = puVar6;
  param_1[4] = puStack_88;
  param_1[5] = puVar10;
  param_1[6] = puVar12;
  param_1[7] = puVar11;
  param_1[8] = param_3;
  param_1[9] = puVar8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = puVar5;
  *(byte *)(param_1 + 0xd) = bVar7 & 1;
  return;
}



/* Entry: 10213d3b4; end: 10213d433;  */

void FUN_10213d3b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c519c8();
  if (lVar1 == 0) {
    func_0x000107c42154();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 10213d434; end: 10213da07;  */

void FUN_10213d434(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  undefined8 ***pppuStack_300;
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 ***pppuStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 ***pppuStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0;
  FUN_10213e144(0,0x112e5af98,&PTR_PTR_1126be190);
  func_0x000107c614e8();
  func_0x000107c5ee20(param_2,param_3);
  pppuStack_100 = (undefined8 ****)0x0;
  func_0x000107c4e380();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  ppppuVar10 = (undefined8 ****)pppuStack_100;
  if (uVar4 == 0) {
    ppppuVar14 = (undefined8 ****)pppuStack_100;
    func_0x000107c61174();
    func_0x000107c5ed30(ppppuVar10);
    func_0x000107c61170(ppppuVar14);
    func_0x000107c61654();
    func_0x000107c614ac(ppppuVar10);
LAB_10213d994:
    func_0x00010213ded0(&pppuStack_100);
  }
  else {
    func_0x000107c61174();
    uVar20 = uVar4;
    func_0x000107c4aca4();
    func_0x000107c61180();
    if (uVar20 == 0) {
LAB_10213d98c:
      func_0x000107c61170(uVar4);
      goto LAB_10213d994;
    }
    pppuStack_100 = (undefined8 ****)0x0;
    uVar5 = 0;
    FUN_10213e144(0,0x112e5afa0,&PTR_PTR_1126a9f18);
    ppppuVar10 = &pppuStack_100;
    func_0x000107c5fc50(uVar20,ppppuVar10,uVar5);
    func_0x000107c61170(uVar20);
    pppuVar2 = pppuStack_100;
    if ((undefined8 ****)pppuStack_100 == (undefined8 ****)0x0) goto LAB_10213d98c;
    ppppuVar14 = (undefined8 ****)((ulong)pppuStack_100 & 0xffffffffffffff8);
    if ((ulong)pppuStack_100 >> 0x3e == 0) {
      ppppuVar18 = (undefined8 ****)ppppuVar14[2];
    }
    else {
      ppppuVar18 = (undefined8 ****)pppuStack_100;
      if (-1 < (long)pppuStack_100) {
        ppppuVar18 = ppppuVar14;
      }
      func_0x000107c60480();
    }
    puStack_288 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppppuVar18 != (undefined8 ****)0x0) {
      ppppuVar19 = (undefined8 ****)0x0;
      do {
        while( true ) {
          if (((ulong)pppuVar2 & 0xc000000000000001) == 0) {
            if (ppppuVar14[2] <= ppppuVar19) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10213d798);
              (*pcVar3)();
            }
            ppppuVar6 = (undefined8 ****)pppuVar2[(long)ppppuVar19 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar6 = ppppuVar19;
            ppppuVar10 = (undefined8 ****)pppuVar2;
            func_0x000102136518();
          }
          ppppuVar1 = (undefined8 ****)((long)ppppuVar19 + 1);
          if (SCARRY8((long)ppppuVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10213d794);
            (*pcVar3)();
          }
          ppppuVar7 = ppppuVar6;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (ppppuVar7 != (undefined8 ****)0x0) break;
LAB_10213d584:
          func_0x000107c61170(ppppuVar6);
          ppppuVar19 = (undefined8 ****)((long)ppppuVar19 + 1);
          if (ppppuVar1 == ppppuVar18) goto LAB_10213d7b8;
        }
        ppppuVar8 = ppppuVar7;
        func_0x000107c5faec();
        ppppuVar12 = ppppuVar10;
        func_0x000107c61170(ppppuVar7);
        func_0x000107c6142c(ppppuVar10);
        uVar20 = (ulong)ppppuVar8 & 0xffffffffffff;
        if (((ulong)ppppuVar10 & 0x2000000000000000) != 0) {
          uVar20 = (ulong)ppppuVar10 >> 0x38 & 0xf;
        }
        ppppuVar10 = ppppuVar12;
        if (uVar20 == 0) goto LAB_10213d584;
        ppppuVar10 = ppppuVar6;
        func_0x000107c519c8();
        if (ppppuVar10 == (undefined8 ****)0x0) {
          ppppuVar7 = ppppuVar6;
          func_0x000107c42154();
          func_0x000107c61180();
          ppppuVar10 = ppppuVar12;
          if (ppppuVar7 != (undefined8 ****)0x0) {
            ppppuVar8 = ppppuVar7;
            func_0x000107c5faec();
            ppppuVar10 = ppppuVar12;
            func_0x000107c61170(ppppuVar7);
            func_0x000107c6142c(ppppuVar12);
            uVar20 = (ulong)ppppuVar8 & 0xffffffffffff;
            if (((ulong)ppppuVar12 & 0x2000000000000000) != 0) {
              uVar20 = (ulong)ppppuVar12 >> 0x38 & 0xf;
            }
            if (uVar20 != 0) goto LAB_10213d678;
          }
          goto LAB_10213d584;
        }
LAB_10213d678:
        ppppuVar10 = ppppuVar1;
        FUN_10213d09c(&uStack_1e0,ppppuVar6,ppppuVar1,param_5,param_6);
        func_0x000107c61170(ppppuVar6);
        puVar9 = puStack_288;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          ppppuVar10 = (undefined8 ****)(*(long *)(puStack_288 + 0x10) + 1);
          puStack_288 = (undefined *)0x0;
          FUN_1021362cc(0,ppppuVar10,1);
        }
        uVar20 = *(ulong *)(puStack_288 + 0x10);
        ppppuVar19 = (undefined8 ****)(uVar20 + 1);
        if (*(ulong *)(puStack_288 + 0x18) >> 1 <= uVar20) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_288 + 0x18));
          ppppuVar10 = ppppuVar19;
          FUN_1021362cc(puVar9,ppppuVar19,1,puStack_288);
          puStack_288 = puVar9;
        }
        *(undefined8 *****)(puStack_288 + 0x10) = ppppuVar19;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x38) = uStack_1c8;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x30) = uStack_1d0;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x48) = uStack_1b8;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x40) = uStack_1c0;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x28) = uStack_1d8;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x20) = uStack_1e0;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x81) = uStack_17f;
        *(ulong *)(puStack_288 + uVar20 * 0x70 + 0x79) = CONCAT17(uStack_180,uStack_187);
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x68) = uStack_198;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x60) = uStack_1a0;
        *(ulong *)(puStack_288 + uVar20 * 0x70 + 0x78) = CONCAT71(uStack_187,uStack_188);
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x70) = uStack_190;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x58) = uStack_1a8;
        *(undefined8 *)(puStack_288 + uVar20 * 0x70 + 0x50) = uStack_1b0;
        ppppuVar19 = ppppuVar1;
      } while (ppppuVar1 != ppppuVar18);
    }
LAB_10213d7b8:
    func_0x000107c6142c(pppuVar2);
    lVar16 = *(long *)(puStack_288 + 0x10);
    if (lVar16 != 0) {
      puVar13 = (undefined8 *)(puStack_288 + 0x20);
      lVar15 = lVar16;
      do {
        puStack_2d8 = (undefined *)puVar13[7];
        pppuStack_2e0 = (undefined8 ***)puVar13[6];
        puStack_2e8 = (undefined *)puVar13[9];
        pppuStack_2f0 = (undefined8 ***)puVar13[8];
        uStack_2f8 = puVar13[0xb];
        pppuStack_300 = (undefined8 ***)puVar13[10];
        uVar20 = *(ulong *)((long)puVar13 + 0x61);
        uStack_9f = (undefined7)uVar20;
        uStack_98 = (undefined1)(uVar20 >> 0x38);
        uVar17 = uStack_98;
        uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar13 + 0x59) >> 0x38);
        puStack_278 = (undefined *)puVar13[1];
        pppuStack_280 = (undefined8 ***)*puVar13;
        puStack_298 = (undefined *)puVar13[3];
        pppuStack_2a0 = (undefined8 ***)puVar13[2];
        puStack_2a8 = (undefined *)puVar13[5];
        pppuStack_2b0 = (undefined8 ***)puVar13[4];
        uStack_a8 = (undefined1)uStack_2f8;
        uStack_a7 = (undefined7)((ulong)uStack_2f8 >> 8);
        pppuStack_100 = pppuStack_280;
        puStack_f8 = puStack_278;
        pppuStack_f0 = pppuStack_2a0;
        puStack_e8 = puStack_298;
        pppuStack_e0 = pppuStack_2b0;
        puStack_d8 = puStack_2a8;
        pppuStack_d0 = pppuStack_2e0;
        puStack_c8 = puStack_2d8;
        pppuStack_c0 = pppuStack_2f0;
        puStack_b8 = puStack_2e8;
        pppuStack_b0 = pppuStack_300;
        if ((uVar20 & 0x100000000000000) != 0) {
          uVar5 = CONCAT71(uStack_9f,uStack_a0);
          func_0x00010213ddd0(&pppuStack_100,&uStack_260);
          goto LAB_10213d90c;
        }
        puVar13 = puVar13 + 0xe;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar20 = uVar4;
    func_0x000107c44810();
    if ((int)uVar20 == 0) {
LAB_10213d8b8:
      if (lVar16 == 0) {
        func_0x000107c6142c(puStack_288);
        goto LAB_10213d98c;
      }
      uVar5 = 0;
      uVar17 = 0;
      puStack_278 = (undefined *)0x0;
      pppuStack_280 = (undefined8 ****)0x0;
      puStack_2a8 = (undefined *)0x0;
      pppuStack_2b0 = (undefined8 ****)0x0;
      puStack_298 = (undefined *)0x0;
      pppuStack_2a0 = (undefined8 ****)0x0;
      puStack_2e8 = (undefined *)0x0;
      pppuStack_2f0 = (undefined8 ****)0x0;
      puStack_2d8 = (undefined *)0x0;
      pppuStack_2e0 = (undefined8 ****)0x0;
      uStack_2f8 = 0;
      pppuStack_300 = (undefined8 ****)0x0;
    }
    else {
      uVar20 = uVar4;
      func_0x000107c41040();
      func_0x000107c61180();
      if (uVar20 == 0) goto LAB_10213da00;
      uVar11 = uVar20;
      FUN_10213d3b4();
      func_0x000107c61170(uVar20);
      if ((uVar11 & 1) == 0) goto LAB_10213d8b8;
      uVar20 = uVar4;
      func_0x000107c41040();
      func_0x000107c61180();
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10213da08);
        (*pcVar3)();
      }
      uVar11 = uVar4;
      func_0x000107c4d35c(uVar4);
      FUN_10213d09c(&pppuStack_170,uVar20,(long)(int)uVar11 + 1,param_5,param_6);
      puStack_278 = puStack_168;
      pppuStack_280 = pppuStack_170;
      puStack_2a8 = puStack_148;
      pppuStack_2b0 = pppuStack_150;
      puStack_298 = puStack_158;
      pppuStack_2a0 = pppuStack_160;
      puStack_2e8 = puStack_128;
      pppuStack_2f0 = pppuStack_130;
      puStack_2d8 = puStack_138;
      pppuStack_2e0 = pppuStack_140;
      uStack_2f8 = uStack_118;
      pppuStack_300 = pppuStack_120;
      func_0x000107c61170(uVar20);
      uVar5 = uStack_110;
      uVar17 = uStack_108;
    }
LAB_10213d90c:
    func_0x000107c61170(uVar4);
    uStack_260 = param_4 == '\x02';
    puStack_258 = puStack_288;
    puStack_248 = puStack_278;
    pppuStack_250 = pppuStack_280;
    puStack_238 = puStack_298;
    pppuStack_240 = pppuStack_2a0;
    puStack_228 = puStack_2a8;
    pppuStack_230 = pppuStack_2b0;
    puStack_218 = puStack_2d8;
    pppuStack_220 = pppuStack_2e0;
    puStack_208 = puStack_2e8;
    pppuStack_210 = pppuStack_2f0;
    uStack_1f8 = (undefined1)uStack_2f8;
    uStack_1f7 = (undefined7)((ulong)uStack_2f8 >> 8);
    pppuStack_200 = pppuStack_300;
    uStack_1f0 = (undefined1)uVar5;
    uStack_1ef = (undefined7)((ulong)uVar5 >> 8);
    uStack_1e8 = uVar17;
    func_0x00010213deec(&uStack_260);
    puStack_b8 = puStack_218;
    pppuStack_c0 = pppuStack_220;
    uStack_a8 = SUB81(puStack_208,0);
    uStack_a7 = (undefined7)((ulong)puStack_208 >> 8);
    pppuStack_b0 = pppuStack_210;
    uStack_98 = uStack_1f8;
    uStack_a0 = SUB81(pppuStack_200,0);
    uStack_9f = (undefined7)((ulong)pppuStack_200 >> 8);
    uStack_8f = CONCAT17(uStack_1e8,uStack_1ef);
    uStack_97 = uStack_1f7;
    uStack_90 = uStack_1f0;
    pppuStack_100 = (undefined8 ***)CONCAT71(uStack_25f,uStack_260);
    puStack_f8 = puStack_258;
    puStack_e8 = puStack_248;
    pppuStack_f0 = pppuStack_250;
    puStack_d8 = puStack_238;
    pppuStack_e0 = pppuStack_240;
    puStack_c8 = puStack_228;
    pppuStack_d0 = pppuStack_230;
  }
  param_1[9] = puStack_b8;
  param_1[8] = pppuStack_c0;
  param_1[0xb] = CONCAT71(uStack_a7,uStack_a8);
  param_1[10] = pppuStack_b0;
  param_1[0xd] = CONCAT71(uStack_97,uStack_98);
  param_1[0xc] = CONCAT71(uStack_9f,uStack_a0);
  *(undefined8 *)((long)param_1 + 0x71) = uStack_8f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_90,uStack_97);
  param_1[1] = puStack_f8;
  *param_1 = pppuStack_100;
  param_1[3] = puStack_e8;
  param_1[2] = pppuStack_f0;
  param_1[5] = puStack_d8;
  param_1[4] = pppuStack_e0;
  param_1[7] = puStack_c8;
  param_1[6] = pppuStack_d0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
LAB_10213da00:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10213da04);
  (*pcVar3)();
}



/* Entry: 10213da08; end: 10213da73;  */

void FUN_10213da08(void)

{
  long unaff_x20;
  
  FUN_1021390c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10213da74; end: 10213dce3;  */

void FUN_10213da74(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_150 [112];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte bStack_78;
  undefined *puStack_70;
  
  lVar3 = *(long *)(param_2 + 8);
  lVar6 = *(long *)(lVar3 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10213ce94(0,lVar6,0);
    puVar8 = (undefined8 *)(lVar3 + 0x20);
    do {
      puVar4 = puStack_70;
      uVar17 = puVar8[9];
      uVar15 = puVar8[8];
      uVar11 = puVar8[0xb];
      uVar9 = puVar8[10];
      uVar14 = puVar8[7];
      uVar13 = puVar8[6];
      uStack_7f = (undefined7)*(undefined8 *)((long)puVar8 + 0x61);
      bStack_78 = (byte)((ulong)*(undefined8 *)((long)puVar8 + 0x61) >> 0x38);
      bVar2 = bStack_78;
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x59) >> 0x38);
      uStack_88 = (undefined1)uVar11;
      uStack_87 = (undefined7)((ulong)uVar11 >> 8);
      uVar12 = puVar8[1];
      uVar10 = *puVar8;
      uVar18 = puVar8[3];
      uVar16 = puVar8[2];
      uVar5 = puVar8[5];
      uVar19 = puVar8[4];
      uStack_e0 = uVar10;
      lStack_d8 = uVar12;
      uStack_d0 = uVar16;
      uStack_c8 = uVar18;
      uStack_c0 = uVar19;
      uStack_b8 = uVar5;
      uStack_b0 = uVar13;
      uStack_a8 = uVar14;
      uStack_a0 = uVar15;
      uStack_98 = uVar17;
      uStack_90 = uVar9;
      if (bStack_78 == '\x01') {
        func_0x00010213de0c(&uStack_e0,auStack_150);
        func_0x000107c61434(uVar9);
        func_0x000107c61434(param_4);
        uVar11 = param_3;
        uVar7 = param_4;
      }
      else {
        uVar7 = CONCAT71(uStack_7f,uStack_80);
        func_0x00010213ddd0(&uStack_e0,auStack_150);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puStack_70 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10213ce94(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x20) = uVar10;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x28) = uVar12;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x30) = uVar16;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x38) = uVar18;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x48) = uVar5;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x40) = uVar19;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x58) = uVar14;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x50) = uVar13;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x60) = uVar15;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x68) = uVar17;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x70) = uVar9;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x78) = uVar11;
      *(undefined8 *)(puStack_70 + uVar1 * 0x70 + 0x80) = uVar7;
      puVar8 = puVar8 + 0xe;
      puStack_70[uVar1 * 0x70 + 0x88] = bVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puStack_70;
    } while (lVar6 != 0);
  }
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  uVar16 = *(undefined8 *)(param_2 + 0x38);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  uVar17 = *(undefined8 *)(param_2 + 0x48);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  uVar18 = *(undefined8 *)(param_2 + 0x58);
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  uVar19 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  bVar2 = param_2[0x78];
  if (lVar6 != 0) {
    uStack_88 = (undefined1)uVar19;
    uStack_87 = (undefined7)((ulong)uVar19 >> 8);
    uStack_80 = (undefined1)uVar5;
    uStack_7f = (undefined7)((ulong)uVar5 >> 8);
    uStack_e0 = uVar11;
    lStack_d8 = lVar6;
    uStack_d0 = uVar9;
    uStack_c8 = uVar15;
    uStack_c0 = uVar10;
    uStack_b8 = uVar16;
    uStack_b0 = uVar12;
    uStack_a8 = uVar17;
    uStack_a0 = uVar13;
    uStack_98 = uVar18;
    uStack_90 = uVar14;
    bStack_78 = bVar2;
    if ((bVar2 & 1) == 0) {
      func_0x00010213ddd0(&uStack_e0,auStack_150);
    }
    else {
      func_0x000107c61434(param_4);
      func_0x00010213de0c(&uStack_e0,auStack_150);
      func_0x000107c61434(uVar14);
      uVar19 = param_3;
      uVar5 = param_4;
    }
    bVar2 = bVar2 & 1;
  }
  *param_1 = *param_2;
  *(undefined **)(param_1 + 8) = puVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  *(long *)(param_1 + 0x18) = lVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  *(undefined8 *)(param_1 + 0x38) = uVar16;
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  *(undefined8 *)(param_1 + 0x48) = uVar17;
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  *(undefined8 *)(param_1 + 0x58) = uVar18;
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  *(undefined8 *)(param_1 + 0x68) = uVar19;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  param_1[0x78] = bVar2;
  return;
}



/* Entry: 10213dce4; end: 10213dd73;  */

undefined8 FUN_10213dce4(undefined8 param_1,undefined8 param_2)

{
  FUN_102138080(param_2,param_1,&UNK_1104d02c0);
  return param_2;
}



/* Entry: 10213dd74; end: 10213dd9b;  */

void FUN_10213dd74(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  
  lStack_38 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lStack_38 != 0) {
    func_0x0001007d6d78(&lStack_38);
  }
  lStack_38 = lVar1;
  func_0x0001007d6d78(&lStack_38);
  return;
}



/* Entry: 10213dd9c; end: 10213de87;  */

undefined8 FUN_10213dd9c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001021383ec(param_2,param_1,&UNK_1104d02c0);
  return param_2;
}



/* Entry: 10213de88; end: 10213deef;  */

void FUN_10213de88(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10213def0; end: 10213df23;  */

void FUN_10213def0(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000f66f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*param_2);
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 10213df24; end: 10213df3f;  */

void FUN_10213df24(void)

{
  long unaff_x20;
  
  FUN_10213acfc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10213df40; end: 10213df8f;  */

undefined8 FUN_10213df40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e5b300;
  func_0x0001000285a8(0x112e5b300,&UNK_10da60e30);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10213df90; end: 10213dfc7;  */

void FUN_10213df90(void)

{
  long unaff_x20;
  
  FUN_102137714(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10213dfc8; end: 10213dfdb;  */

void FUN_10213dfc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong uStack_110;
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar6 = 0;
  func_0x000107c5f83c();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)&puStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar1 + 0x10,auStack_108,0,0);
  puVar7 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61648();
  if (puVar7 != (undefined *)0x0) {
    uStack_110 = 0;
    puVar8 = &UNK_1104d0590;
    lStack_168 = lVar16;
    func_0x000107c613fc(&UNK_1104d0590,0x18,7);
    *(ulong **)(puVar8 + 0x10) = &uStack_110;
    puVar9 = &UNK_1104d05b8;
    func_0x000107c613fc(&UNK_1104d05b8,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x10213e02c;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uStack_d0 = 0x10213e058;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_100f15b68;
    puStack_d8 = &UNK_1104d05d0;
    ppuVar10 = &puStack_f0;
    puStack_c8 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_c8);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar10);
    uVar12 = uStack_110;
    if (uStack_110 == 0) {
      uVar15 = 0x112d35ff8;
      puStack_e0 = puVar7;
      puStack_d8 = puVar3;
      uStack_d0 = uVar14;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000100087bd4(auStack_160,FUN_10213e184,&puStack_f0,uVar15);
      func_0x000107c61574(puVar7);
      func_0x000107c6142c(uStack_158);
    }
    else {
      uVar11 = uStack_110;
      puStack_190 = puVar3;
      uStack_188 = uVar15;
      uStack_180 = uVar14;
      puStack_178 = puVar8;
      func_0x000107c61174(uStack_110);
      func_0x0001000d224c(&puStack_f0);
      puVar3 = puStack_f0;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar15 = *(undefined8 *)(puVar7 + 0x10);
      uVar2 = *(undefined8 *)(puVar7 + 0x18);
      uVar4 = *(undefined1 *)(unaff_x20 + 0x38);
      lStack_170 = lVar6;
      func_0x000107c61174(uVar11);
      func_0x000107c61434(uVar2);
      FUN_1021355f4(uVar14,uVar13,uVar15,uVar2,uVar12,uVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(uVar2);
      func_0x000107c5ee30();
      func_0x000107c61170(uVar11);
      uVar14 = *(undefined8 *)(puVar7 + 0x10);
      uVar15 = *(undefined8 *)(puVar7 + 0x18);
      func_0x000107c61434(uVar15);
      FUN_10213d434(&puStack_f0,uVar12,uVar13,uVar4,uVar14,uVar15);
      func_0x000107c6142c(uVar15);
      func_0x00010006c090(uVar12,uVar13);
      func_0x000107c5f830(lVar17);
      func_0x000107c5f82c();
      (**(code **)(lStack_168 + 8))(lVar17,lStack_170);
      lStack_130 = uVar12 + 180000000000;
      if (0xffffffd61729f7ff < uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102137ba0);
        (*pcVar5)();
      }
      uVar14 = *(undefined8 *)(puVar7 + 0x38);
      puStack_140 = puStack_190;
      uStack_138 = uStack_180;
      uStack_128 = uStack_188;
      ppuStack_150 = &puStack_f0;
      puStack_148 = puVar7;
      func_0x000107c6157c(uVar14);
      func_0x000100087bd4(FUN_10213e078,auStack_160,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar14);
      func_0x000107c61170(uVar11);
      func_0x00010213de48(&puStack_f0,0x112e5b2e8,&UNK_10da60e08);
      func_0x000107c61574(puVar7);
      puVar8 = puStack_178;
    }
    uVar12 = uStack_110;
    func_0x000107c61574(puVar8);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 10213dfdc; end: 10213e077;  */

undefined8 * FUN_10213dfdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  param_2[3] = param_1[3];
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 4);
  param_2[5] = param_1[5];
  func_0x000107c61434(uVar1);
  return param_2;
}



/* Entry: 10213e078; end: 10213e097;  */

void FUN_10213e078(void)

{
  long unaff_x20;
  
  FUN_102137c38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10213e098; end: 10213e0cb;  */

undefined8 FUN_10213e098(undefined8 param_1,undefined8 param_2)

{
  FUN_102138994(param_2,param_1,&UNK_1104d0450);
  return param_2;
}



/* Entry: 10213e0cc; end: 10213e143;  */

void FUN_10213e0cc(void)

{
  long unaff_x20;
  
  FUN_102139908(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10213e144; end: 10213e183;  */

void FUN_10213e144(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10213e184; end: 10213e197;  */

void FUN_10213e184(void)

{
  func_0x00010213dfac();
  return;
}



/* Entry: 10213e198; end: 10213e1a7;  */

void FUN_10213e198(long param_1,long param_2)

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



/* Entry: 10213e1a8; end: 10213e1cf;  */

void FUN_10213e1a8(void)

{
  func_0x00010213da44();
  return;
}



/* Entry: 10213e1d0; end: 10213e1ef;  */

long FUN_10213e1d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10213e1f0; end: 10213e23b;  */

void FUN_10213e1f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10213e23c; end: 10213e24b;  */

void FUN_10213e23c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10213e24c; end: 10213e2cf;  */

void FUN_10213e24c(void)

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



/* Entry: 10213e2d0; end: 10213e33f;  */

long FUN_10213e2d0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    *(long *)(unaff_x20 + 0x68) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 10213e340; end: 10213e6c7;  */

undefined8
FUN_10213e340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *unaff_x20;
  uVar6 = param_1;
  uVar9 = param_2;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112e5b308,&UNK_10da60e50);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar3 = lVar2;
  func_0x0001000d224c(&uStack_68);
  FUN_10212fb94();
  func_0x000107c61574(uStack_68);
  puVar8 = &UNK_1104d0618;
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1104d0618,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1104d0640;
  func_0x000107c613fc(&UNK_1104d0640,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  func_0x000107c61434(param_2);
  uVar6 = 0;
  func_0x000100775264(0,1,FUN_10213e7cc,puVar5,&UNK_1104d09e8);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(puVar5);
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1104d0618,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1104d0668;
  func_0x000107c613fc(&UNK_1104d0668,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  puVar4 = &UNK_1104d0690;
  func_0x000107c613fc(&UNK_1104d0690,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10213e90c;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar9);
  uVar7 = 0;
  func_0x0001048898b8(0,1,FUN_10213eb78,puVar4,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c613fc(&UNK_1104d0618,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar5 = &UNK_1104d06b8;
  func_0x000107c613fc(&UNK_1104d06b8,0x90,7);
  *(undefined **)(puVar5 + 0x10) = puVar8;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  *(undefined8 *)(puVar5 + 0x30) = param_4;
  *(undefined8 *)(puVar5 + 0x38) = param_5;
  *(undefined8 *)(puVar5 + 0x40) = param_6;
  *(undefined8 *)(puVar5 + 0x48) = param_7;
  *(undefined8 *)(puVar5 + 0x50) = param_8;
  *(undefined8 *)(puVar5 + 0x58) = param_9;
  *(undefined8 *)(puVar5 + 0x60) = param_10;
  *(undefined8 *)(puVar5 + 0x68) = param_11;
  puVar5[0x70] = (undefined1)param_12;
  puVar5[0x71] = param_12._1_1_;
  puVar5[0x72] = param_12._2_1_;
  *(undefined8 *)(puVar5 + 0x78) = uVar1;
  *(undefined8 *)(puVar5 + 0x80) = uVar9;
  *(long *)(puVar5 + 0x88) = lVar2;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_8);
  func_0x000107c61434(param_10);
  func_0x000107c6157c(lVar2);
  uVar6 = 0;
  func_0x00010488a220(0,1,FUN_10213ec9c,puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar5);
  puVar8 = &UNK_1104d06e0;
  func_0x000107c613fc(&UNK_1104d06e0,0x20,7);
  *(long *)(puVar8 + 0x10) = lVar2;
  *(undefined8 *)(puVar8 + 0x18) = uVar10;
  func_0x000107c6157c(lVar2);
  func_0x000104888fc0(0,1,FUN_10213f180,puVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar8);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar2);
  return uVar6;
}



/* Entry: 10213e6c8; end: 10213e7cb;  */

void FUN_10213e6c8(undefined1 *param_1,byte *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  bVar1 = *param_2;
  uVar2 = 2;
  if (bVar1 < 2) {
    uVar2 = 2;
    if (bVar1 != 0) {
      uVar2 = 0;
    }
LAB_10213e798:
    *param_1 = uVar2;
    return;
  }
  if (bVar1 != 2) goto LAB_10213e798;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x0001000d224c(auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    (**(code **)(lStack_70 + 0x10))(param_4,param_5,uStack_78,lStack_70);
    func_0x000107c61574(param_3);
    func_0x0001000834e4(auStack_90);
    if ((param_4 & 1) != 0) {
      uVar2 = 1;
      goto LAB_10213e7a4;
    }
  }
  uVar2 = 3;
LAB_10213e7a4:
  *param_1 = uVar2;
  return;
}



/* Entry: 10213e7cc; end: 10213e7e7;  */

void FUN_10213e7cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10213e6c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10213e7e8; end: 10213e90b;  */

void FUN_10213e7e8(byte param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bStack_59;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    bStack_59 = false;
    func_0x000104888f7c(&bStack_59);
  }
  else {
    if (param_1 < 2) {
      if (param_1 != 0) {
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      }
      else {
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      }
      bStack_59 = param_1 == 0;
      func_0x000104888f7c(&bStack_59);
    }
    else {
      FUN_10213e91c(param_3,param_4,param_1 == 2,param_1 != 2,param_5,param_6);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10213e90c; end: 10213e91b;  */

void FUN_10213e90c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  bool bStack_59;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    bStack_59 = false;
    func_0x000104888f7c(&bStack_59);
  }
  else {
    if (param_1 < 2) {
      if (param_1 != 0) {
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      }
      else {
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      }
      bStack_59 = param_1 == 0;
      func_0x000104888f7c(&bStack_59);
    }
    else {
      FUN_10213e91c(uVar2,uVar1,param_1 == 2,param_1 != 2,uVar3,uVar5);
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 10213e91c; end: 10213eb77;  */

undefined8
FUN_10213e91c(double param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5,
             undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = *unaff_x20;
  func_0x000107c6071c();
  param_1 = param_1 * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10213eb70);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x0001000d224c(auStack_88);
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lStack_68 + 8))(param_2,param_3,uStack_70,lStack_68);
      func_0x0001000834e4(auStack_88);
      puVar2 = &UNK_1104d0618;
      func_0x000107c613fc(&UNK_1104d0618,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      puVar3 = &UNK_1104d0e20;
      func_0x000107c613fc(&UNK_1104d0e20,0x40,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = param_4 & 1;
      puVar3[0x19] = param_5 & 1;
      *(long *)(puVar3 + 0x20) = (long)param_1;
      *(undefined8 *)(puVar3 + 0x28) = param_6;
      *(undefined8 *)(puVar3 + 0x30) = param_7;
      *(undefined8 *)(puVar3 + 0x38) = uVar5;
      puVar2 = &UNK_1104d0e48;
      func_0x000107c613fc(&UNK_1104d0e48,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x102142e24;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      func_0x000107c61434(param_7);
      uVar4 = 0;
      func_0x0001048898b8(0,1,FUN_102142e3c,puVar2,PTR___sSbN_11034dd40);
      func_0x000107c61574(param_2);
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1104d0618;
      func_0x000107c613fc(&UNK_1104d0618,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      puVar3 = &UNK_1104d0e70;
      func_0x000107c613fc(&UNK_1104d0e70,0x40,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = param_4 & 1;
      puVar3[0x19] = param_5 & 1;
      *(long *)(puVar3 + 0x20) = (long)param_1;
      *(undefined8 *)(puVar3 + 0x28) = param_6;
      *(undefined8 *)(puVar3 + 0x30) = param_7;
      *(undefined8 *)(puVar3 + 0x38) = uVar5;
      func_0x000107c61434(param_7);
      uVar5 = 0;
      func_0x000104889f74(0,1,0x102142e94,puVar3);
      func_0x000107c61574(uVar4);
      func_0x000107c61574(puVar3);
      return uVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10213eb78);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10213eb74);
  (*pcVar1)();
}



/* Entry: 10213eb78; end: 10213eba3;  */

void FUN_10213eb78(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 10213eba4; end: 10213ec9b;  */

void FUN_10213eba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10213ed04(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12
                  ,param_13,param_14);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10213ec9c; end: 10213ed03;  */

void FUN_10213ec9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10213eba4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined1 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10213ed04; end: 10213f09b;  */

void FUN_10213ed04(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  byte param_17,undefined4 param_18,undefined8 param_19)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uVar12 = *unaff_x20;
  func_0x0001000d224c(&puStack_98);
  puVar8 = puStack_98;
  if (puStack_98 != (undefined1 *)0x0) {
    func_0x0001000d224c(&puStack_98);
    puVar1 = puStack_98;
    if (puStack_98 != (undefined1 *)0x0) {
      func_0x000107c6071c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10213f094);
        (*pcVar2)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10213f098);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10213f09c);
        (*pcVar2)();
      }
      uVar3 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      uVar4 = param_10;
      func_0x000107c5fadc(param_10,param_11);
      uVar5 = param_2;
      func_0x000107c5fadc(param_2,param_3);
      puVar7 = puVar8;
      func_0x000107c614f0();
      func_0x000100bcb214();
      puVar9 = &UNK_1104d0c90;
      func_0x000107c613fc(&UNK_1104d0c90,0xa8,7);
      *(undefined8 *)(puVar9 + 0x10) = param_15;
      *(undefined8 *)(puVar9 + 0x18) = param_16;
      *(undefined8 *)(puVar9 + 0x20) = param_2;
      *(undefined8 *)(puVar9 + 0x28) = param_3;
      *(undefined8 *)(puVar9 + 0x30) = param_4;
      *(undefined8 *)(puVar9 + 0x38) = param_5;
      *(undefined8 *)(puVar9 + 0x40) = param_6;
      *(undefined8 *)(puVar9 + 0x48) = param_7;
      *(undefined8 *)(puVar9 + 0x50) = param_8;
      *(undefined8 *)(puVar9 + 0x58) = param_9;
      *(undefined8 *)(puVar9 + 0x60) = param_10;
      *(undefined8 *)(puVar9 + 0x68) = param_11;
      puVar9[0x70] = param_17 & 1;
      puVar9[0x71] = param_13._2_1_;
      *(long *)(puVar9 + 0x78) = (long)param_1;
      *(undefined8 **)(puVar9 + 0x80) = unaff_x20;
      *(undefined8 *)(puVar9 + 0x88) = param_19;
      *(undefined8 *)(puVar9 + 0x90) = param_12;
      puVar9[0x98] = (undefined1)param_13;
      puVar9[0x99] = param_13._1_1_ & 1;
      *(undefined8 *)(puVar9 + 0xa0) = uVar12;
      pcStack_78 = FUN_102142cf8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_10213e1f0;
      puStack_80 = &UNK_1104d0ca8;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar9;
      func_0x000107c60bc4();
      puVar9 = puStack_70;
      func_0x000107c61434(param_16);
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_5);
      func_0x000107c61434(param_7);
      func_0x000107c61434(param_9);
      func_0x000107c61434(param_11);
      func_0x000107c6157c();
      func_0x000107c6157c(param_19);
      func_0x000107c61574(puVar9);
      func_0x000107c5c2c8(puVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(puVar8);
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      goto LAB_10213f06c;
    }
    func_0x000107c615e8(puVar8);
  }
  puVar7 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar8 = puVar7;
  FUN_10213f3c4();
  puVar9 = &UNK_1104d0958;
  func_0x000107c613f8(&UNK_1104d0958,puVar8,0,0);
  *puVar8 = 0;
  puVar10 = puVar9;
  func_0x000107c5ed2c();
  puVar11 = puVar10;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar10);
  func_0x000107c614ac(puVar9);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puStack_98 = puVar7;
  func_0x000100b60084(&puStack_98);
LAB_10213f06c:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 10213f09c; end: 10213f17f;  */

void FUN_10213f09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000038,0x800000010f064ef0);
  uVar1 = 0x112d393f0;
  uStack_58 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  func_0x0001007d6c6c(3,uStack_50,uStack_48,param_3,&PTR_DAT_1104d0850);
  func_0x000107c6142c(uVar1);
  func_0x00010488ade0(param_1);
  return;
}



/* Entry: 10213f180; end: 10213f187;  */

void FUN_10213f180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3a,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5fb78(0xd000000000000038,0x800000010f064ef0);
  uVar2 = 0x112d393f0;
  uStack_58 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_48;
  func_0x0001007d6c6c(3,uStack_50,uStack_48,uVar1,&PTR_DAT_1104d0850);
  func_0x000107c6142c(uVar2);
  func_0x00010488ade0(param_1);
  return;
}



/* Entry: 10213f188; end: 10213f3c3;  */

undefined1 * FUN_10213f188(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar8 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar5 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_90);
    puVar4 = puStack_90;
    if (puStack_90 != (undefined *)0x0) {
      func_0x0001000285a8(0x112e5b308,&UNK_10da60e50);
      func_0x000107c613fc();
      lVar2 = 0;
      func_0x00010095c380();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c614f0(puStack_90);
      puVar6 = puStack_90;
      func_0x000100bcb214();
      uStack_70 = 0x10213f404;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_10213e1f0;
      puStack_78 = &UNK_1104d06f8;
      lStack_68 = lVar2;
      func_0x000107c60bc4(&puStack_90);
      lVar1 = lStack_68;
      func_0x000107c6157c(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c440f0(puVar5);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar6);
      puVar9 = *(undefined1 **)(lVar2 + 0x10);
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(lVar2);
      return puVar9;
    }
    func_0x000107c615e8(puVar5);
  }
  func_0x0001000285a8(0x112e5b310,&UNK_10da60e58);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar9 = puVar4;
  FUN_10213f3c4();
  puVar5 = &UNK_1104d0958;
  func_0x000107c613f8(&UNK_1104d0958,puVar9,0,0);
  *puVar9 = 0;
  puVar6 = puVar5;
  func_0x000107c5ed2c();
  puVar7 = puVar6;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar6);
  func_0x000107c614ac(puVar5);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puStack_90 = puVar4;
  func_0x000104888f7c(&puStack_90);
  func_0x000107c61170(puVar4);
  return (undefined1 *)ppuVar8;
}



/* Entry: 10213f3c4; end: 10213f427;  */

void FUN_10213f3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61054;
  func_0x000107c61520(&UNK_10da61054,&UNK_1104d0958);
  puRam0000000112e5b318 = puVar1;
  return;
}



/* Entry: 10213f428; end: 10213f443;  */

void FUN_10213f428(long param_1,long param_2)

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



/* Entry: 10213f444; end: 10213fa0f;  */

undefined **
FUN_10213f444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             byte param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_90);
  puVar7 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_90);
    puVar5 = puStack_90;
    if (puStack_90 != (undefined *)0x0) {
      func_0x0001000285a8(0x112e5b308,&UNK_10da60e50);
      func_0x000107c613fc();
      lVar1 = 0;
      func_0x00010095c380();
      uVar2 = param_3;
      func_0x000107c5fadc(param_3,param_4);
      uVar3 = param_5;
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c614f0();
      puVar4 = puStack_90;
      func_0x000100bcb214();
      puVar8 = &UNK_1104d0618;
      func_0x000107c613fc(&UNK_1104d0618,0x18,7);
      func_0x000107c61644(puVar8 + 0x10);
      puVar9 = &UNK_1104d0730;
      func_0x000107c613fc(&UNK_1104d0730,0x68,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = param_3;
      *(undefined8 *)(puVar9 + 0x20) = param_4;
      *(undefined8 *)(puVar9 + 0x28) = param_5;
      *(undefined8 *)(puVar9 + 0x30) = param_6;
      puVar9[0x38] = param_8;
      *(undefined8 *)(puVar9 + 0x40) = param_7;
      puVar9[0x48] = param_9 & 1;
      *(undefined8 *)(puVar9 + 0x50) = param_1;
      *(undefined8 *)(puVar9 + 0x58) = param_2;
      *(long *)(puVar9 + 0x60) = lVar1;
      pcStack_70 = FUN_10213fa10;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_10213e1f0;
      puStack_78 = &UNK_1104d0748;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar9;
      func_0x000107c60bc4();
      puVar8 = puStack_68;
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_6);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(lVar1);
      func_0x000107c61574(puVar8);
      func_0x000107c4b688(puVar7);
      func_0x000107c615e8(puVar7);
      func_0x000107c615e8(puVar5);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      ppuVar10 = *(undefined ***)(lVar1 + 0x10);
      func_0x000107c6157c(ppuVar10);
      func_0x000107c61574(lVar1);
      return ppuVar10;
    }
    func_0x000107c615e8(puVar7);
  }
  func_0x0001000285a8(0x112e5b310,&UNK_10da60e58);
  puVar5 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar6 = puVar5;
  FUN_10213f3c4();
  puVar7 = &UNK_1104d0958;
  func_0x000107c613f8(&UNK_1104d0958,puVar6,0,0);
  *puVar6 = 0;
  puVar8 = puVar7;
  func_0x000107c5ed2c();
  puVar9 = puVar8;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar8);
  func_0x000107c614ac(puVar7);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  ppuVar10 = &puStack_90;
  puStack_90 = puVar5;
  func_0x000104888f7c(ppuVar10);
  func_0x000107c61170(puVar5);
  return ppuVar10;
}



/* Entry: 10213fa10; end: 10213fa57;  */

void FUN_10213fa10(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010213f740(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10213fa58; end: 10213fc83;  */

void FUN_10213fa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar9 = *unaff_x20;
  uVar5 = unaff_x20[0xc];
  func_0x000107c6157c(uVar5);
  uVar7 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100075034(auStack_90,FUN_10213fc84,0,uVar7);
  func_0x000107c61574(uVar5);
  uVar7 = unaff_x20[5];
  puVar1 = &UNK_1104d0780;
  func_0x000107c613fc(&UNK_1104d0780,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  pcVar2 = FUN_10213fce0;
  func_0x0001000d5158(FUN_10213fce0,puVar1,&UNK_1104d0450);
  func_0x000107c61574(puVar1);
  func_0x000107c6157c(uVar7);
  pcVar6 = FUN_102141b54;
  func_0x0001000bfde0(FUN_102141b54,uVar7,&UNK_1106ba3d0);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar7);
  uVar7 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar6);
  plVar8 = (long *)unaff_x20[10];
  plVar3 = plVar8;
  func_0x000107c615f0();
  func_0x000104883b8c(0x4014000000000000);
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(plVar8);
  puVar1 = &UNK_1104d0618;
  func_0x000107c613fc(&UNK_1104d0618,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar4 = &UNK_1104d07a8;
  func_0x000107c613fc(&UNK_1104d07a8,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  pcVar6 = *(code **)(*plVar3 + 0x60);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102141ba8;
  puVar1 = puVar4;
  (*pcVar6)();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  uVar7 = unaff_x20[0xc];
  pcStack_80 = pcVar2;
  puStack_78 = puVar1;
  func_0x000107c6157c(uVar7);
  func_0x000100075034(FUN_102141bb8,auStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(pcVar2);
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 10213fc84; end: 10213fcdf;  */

void FUN_10213fc84(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = param_2[1];
    func_0x000107c614f0(lVar1);
    (**(code **)(lVar2 + 8))();
  }
  *(bool *)param_1 = lVar1 == 0;
  return;
}



/* Entry: 10213fce0; end: 10213fce7;  */

void FUN_10213fce0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  lVar4 = *param_2;
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 0x80);
      uStack_98 = puVar1[5];
      uStack_a0 = puVar1[4];
      uStack_88 = puVar1[7];
      uStack_90 = puVar1[6];
      uStack_b8 = puVar1[1];
      uStack_c0 = *puVar1;
      uStack_a8 = puVar1[3];
      uStack_b0 = puVar1[2];
      uStack_78 = puVar1[9];
      uStack_80 = puVar1[8];
      uStack_68 = puVar1[0xb];
      uStack_70 = puVar1[10];
      uStack_60 = puVar1[0xc];
      uStack_4f = *(undefined8 *)((long)puVar1 + 0x71);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x69) >> 0x38);
      uStack_58 = (undefined1)puVar1[0xd];
      uStack_57 = (undefined7)((ulong)puVar1[0xd] >> 8);
      uVar9 = puVar1[0xb];
      uVar8 = puVar1[10];
      uVar6 = puVar1[0xd];
      uVar5 = puVar1[0xc];
      uVar7 = *(undefined8 *)((long)puVar1 + 0x69);
      uVar11 = puVar1[9];
      uVar10 = puVar1[8];
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)puVar1 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar7;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      param_1[9] = uVar11;
      param_1[8] = uVar10;
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      uVar9 = puVar1[4];
      uVar11 = puVar1[7];
      uVar10 = puVar1[6];
      param_1[5] = puVar1[5];
      param_1[4] = uVar9;
      param_1[7] = uVar11;
      param_1[6] = uVar10;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      FUN_10213e098(&uStack_c0,auStack_140);
      func_0x000107c6142c(lVar4);
      func_0x00010213deec(param_1);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x00010213ded0(&uStack_c0);
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = CONCAT71(uStack_57,uStack_58);
  param_1[0xc] = uStack_60;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_4f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_50,uStack_57);
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  return;
}



/* Entry: 10213fce8; end: 10213ff4f;  */

void FUN_10213fce8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined3 uStack_68;
  undefined5 uStack_65;
  undefined3 uStack_60;
  undefined8 uStack_5d;
  
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_70 = param_1[0xc];
  uStack_68 = (undefined3)param_1[0xd];
  uStack_5d = *(undefined8 *)((long)param_1 + 0x73);
  uStack_65 = (undefined5)*(undefined8 *)((long)param_1 + 0x6b);
  uStack_60 = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0x6b) >> 0x28);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    iVar1 = (int)&uStack_d0;
    FUN_102142c8c();
    if (iVar1 == 1) {
      puStack_118 = (undefined *)0x0;
      uStack_110 = 0xe000000000000000;
      func_0x000107c602fc(0x2f);
      func_0x000107c6142c(uStack_110);
      puStack_118 = (undefined *)0xd00000000000002d;
      uStack_110 = 0x800000010f064ec0;
      func_0x000107c5fb78(param_5,param_6);
      uVar4 = uStack_110;
      func_0x0001007d6c6c(3,puStack_118,uStack_110,param_7,&PTR_DAT_1104d0850);
      func_0x000107c6142c(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      puVar2 = &UNK_1104d0b78;
      func_0x000107c613fc(&UNK_1104d0b78,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = param_3;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      pcStack_f8 = FUN_102142c94;
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0x42000000;
      puStack_108 = &UNK_1000f6b44;
      puStack_100 = &UNK_1104d0b90;
      ppuVar3 = &puStack_118;
      puStack_f0 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_f0;
      func_0x000107c6157c(param_4);
      func_0x000107c615f0(uVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(param_2);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      puVar2 = &UNK_1104d0bc8;
      func_0x000107c613fc(&UNK_1104d0bc8,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = param_3;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      *(long *)(puVar2 + 0x20) = param_2;
      pcStack_f8 = FUN_102142cb8;
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0x42000000;
      puStack_108 = &UNK_1000f6b44;
      puStack_100 = &UNK_1104d0be0;
      ppuVar3 = &puStack_118;
      puStack_f0 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_f0;
      func_0x000107c615f0(uVar4);
      func_0x000107c6157c(param_4);
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar4);
      func_0x000107c61574(param_2);
      func_0x000107c60bd0(ppuVar3);
    }
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10213ff50; end: 1021400a3;  */

void FUN_10213ff50(code *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  
  pcVar1 = param_1;
  func_0x00010213ffbc();
  if (pcVar1 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c614f0();
    uVar3 = (uint)pcVar2;
    (**(code **)(param_2 + 8))();
    func_0x000107c615e8(pcVar1);
  }
  (*param_1)(uVar3 & 1);
  return;
}



/* Entry: 1021400a4; end: 10214035b;  */

void FUN_1021400a4(ulong *param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar4 = *param_1;
  puVar6 = (ulong *)(uVar4 + 0x10);
  uVar8 = *puVar6;
  if (uVar8 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = 0;
    lVar9 = 0x30;
    do {
      puVar7 = (undefined1 *)(uVar4 + lVar9 + -0x10);
      puVar2 = puVar7;
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
LAB_102140138:
        uVar8 = uVar5 + 1;
        uVar3 = *puVar6;
        if (uVar3 - 1 != uVar5) goto LAB_102140178;
        goto LAB_10214014c;
      }
      func_0x000107c615e8();
      func_0x000107c61618();
      if ((puVar7 != (undefined1 *)0x0) && (func_0x000107c615e8(), puVar7 == param_2))
      goto LAB_102140138;
      uVar5 = uVar5 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar8 != uVar5);
    uVar5 = *puVar6;
    uVar8 = uVar5;
  }
  goto LAB_10214028c;
LAB_102140178:
  do {
    if (uVar3 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102140308);
      (*pcVar1)();
    }
    func_0x000102142a18(uVar4 + lVar9,auStack_70);
    puVar2 = auStack_70;
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      func_0x000102142a50(auStack_70);
    }
    else {
      func_0x000107c615e8();
      puVar2 = auStack_70;
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
        func_0x000102142a50(auStack_70);
      }
      else {
        func_0x000107c615e8();
        func_0x000102142a50(auStack_70);
        if (puVar2 == param_2) goto LAB_102140160;
      }
      if (uVar8 != uVar5) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10214030c);
          (*pcVar1)();
        }
        uVar3 = *puVar6;
        if (uVar3 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140310);
          (*pcVar1)();
        }
        func_0x000102142a18(uVar4 + 0x20 + uVar5 * 0x10,auStack_70);
        if (uVar3 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140314);
          (*pcVar1)();
        }
        func_0x000102142a18(uVar4 + lVar9,auStack_80);
        uVar3 = uVar4;
        func_0x000107c61558();
        if ((uVar3 & 1) == 0) {
          FUN_102142a74();
        }
        if (*(ulong *)(uVar4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140318);
          (*pcVar1)();
        }
        FUN_102142a88(auStack_80,uVar4 + uVar5 * 0x10 + 0x20);
        if (*(ulong *)(uVar4 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10214031c);
          (*pcVar1)();
        }
        FUN_102142a88(auStack_70,uVar4 + lVar9);
        *param_1 = uVar4;
      }
      uVar5 = uVar5 + 1;
    }
LAB_102140160:
    uVar8 = uVar8 + 1;
    puVar6 = (ulong *)(uVar4 + 0x10);
    uVar3 = *puVar6;
    lVar9 = lVar9 + 0x10;
  } while (uVar8 != uVar3);
LAB_10214014c:
  if ((long)uVar8 < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10214015c);
    (*pcVar1)();
  }
LAB_10214028c:
  func_0x000102142b98(uVar5,uVar8);
  uStack_68 = param_3;
  func_0x000107c61614(auStack_70,param_2);
  uVar5 = *param_1;
  uVar4 = uVar5;
  func_0x000107c61558();
  uVar8 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
    func_0x0001021363ec(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar8 + 0x10);
  uVar5 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001021363ec(uVar5,uVar4 + 1,1,uVar8);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  FUN_102142c54(auStack_70,uVar5 + uVar4 * 0x10 + 0x20);
  *param_1 = uVar5;
  return;
}



/* Entry: 10214035c; end: 10214057b;  */

void FUN_10214035c(ulong *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  uVar5 = *param_1;
  puVar9 = (ulong *)(uVar5 + 0x10);
  uVar7 = *puVar9;
  if (uVar7 == 0) {
    uVar4 = 0;
    uVar7 = 0;
  }
  else {
    uVar4 = 0;
    lVar8 = 0x30;
    do {
      puVar6 = (undefined1 *)(uVar5 + lVar8 + -0x10);
      puVar2 = puVar6;
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
LAB_1021403e8:
        uVar7 = uVar4 + 1;
        uVar3 = *puVar9;
        if (uVar3 - 1 != uVar4) goto LAB_102140424;
        goto LAB_1021403fc;
      }
      func_0x000107c615e8();
      func_0x000107c61618();
      if ((puVar6 != (undefined1 *)0x0) && (func_0x000107c615e8(), puVar6 == param_2))
      goto LAB_1021403e8;
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar7 != uVar4);
    uVar4 = *puVar9;
    uVar7 = uVar4;
  }
  goto LAB_102140534;
LAB_102140424:
  do {
    if (uVar3 <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102140568);
      (*pcVar1)();
    }
    func_0x000102142a18(uVar5 + lVar8,auStack_70);
    puVar2 = auStack_70;
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      func_0x000102142a50(auStack_70);
    }
    else {
      func_0x000107c615e8();
      puVar2 = auStack_70;
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
        func_0x000102142a50(auStack_70);
      }
      else {
        func_0x000107c615e8();
        func_0x000102142a50(auStack_70);
        if (puVar2 == param_2) goto LAB_10214040c;
      }
      if (uVar7 != uVar4) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10214056c);
          (*pcVar1)();
        }
        uVar3 = *puVar9;
        if (uVar3 <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140570);
          (*pcVar1)();
        }
        func_0x000102142a18(uVar5 + 0x20 + uVar4 * 0x10,auStack_70);
        if (uVar3 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140574);
          (*pcVar1)();
        }
        func_0x000102142a18(uVar5 + lVar8,auStack_80);
        uVar3 = uVar5;
        func_0x000107c61558();
        if ((uVar3 & 1) == 0) {
          FUN_102142a74();
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102140578);
          (*pcVar1)();
        }
        FUN_102142a88(auStack_80,uVar5 + uVar4 * 0x10 + 0x20);
        if (*(ulong *)(uVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10214057c);
          (*pcVar1)();
        }
        FUN_102142a88(auStack_70,uVar5 + lVar8);
        *param_1 = uVar5;
      }
      uVar4 = uVar4 + 1;
    }
LAB_10214040c:
    uVar7 = uVar7 + 1;
    puVar9 = (ulong *)(uVar5 + 0x10);
    uVar3 = *puVar9;
    lVar8 = lVar8 + 0x10;
  } while (uVar7 != uVar3);
LAB_1021403fc:
  if ((long)uVar7 < (long)uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102140408);
    (*pcVar1)();
  }
LAB_102140534:
  func_0x000102142b98(uVar4,uVar7);
  return;
}



/* Entry: 10214057c; end: 102140a6b;  */

void FUN_10214057c(double param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,long param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21,undefined4 param_22)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 auStack_1c0 [2];
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  byte bStack_9f;
  undefined5 uStack_9d;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_190 = 0;
  uStack_188 = 0;
  puVar4 = &UNK_1104d0ce0;
  func_0x000107c613fc(&UNK_1104d0ce0,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_188;
  puVar5 = &UNK_1104d0d08;
  func_0x000107c613fc(&UNK_1104d0d08,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102142f10;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x102142f5c;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0x42000000;
  puStack_f0 = &UNK_100f15b68;
  puStack_e8 = &UNK_1104d0d20;
  ppuVar6 = &puStack_100;
  puStack_d8 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_d8;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104d0d58;
  func_0x000107c613fc(&UNK_1104d0d58,0x18,7);
  *(long **)(puVar7 + 0x10) = &lStack_190;
  puVar8 = &UNK_1104d0d80;
  func_0x000107c613fc(&UNK_1104d0d80,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_102142d70;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_e0 = 0x102142d9c;
  puStack_100 = puVar1;
  uStack_f8 = 0x42000000;
  puStack_f0 = &UNK_100e27b38;
  puStack_e8 = &UNK_1104d0d98;
  ppuVar9 = &puStack_100;
  puStack_d8 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_d8;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  lVar12 = lStack_190;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_8);
  func_0x000107c61434();
  func_0x000107c61434();
  func_0x000107c61434();
  func_0x000107c614b0(lVar12);
  func_0x000107c6071c();
  param_1 = param_1 * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102140a5c);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102140a60);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102140a64);
    (*pcVar3)();
  }
  lStack_108 = (long)param_1;
  uStack_c8 = param_10;
  uStack_c0 = param_11;
  uStack_b8 = param_12;
  uStack_b0 = param_13;
  uStack_a8 = param_14;
  uStack_a0 = 4;
  param_15._0_1_ = (byte)param_15 & 1;
  lStack_98 = lVar12;
  uStack_90 = param_17;
  uStack_148 = param_10;
  uStack_120 = CONCAT53(uStack_9d,CONCAT12(param_15._1_1_,CONCAT11((byte)param_15,4)));
  lStack_118 = lVar12;
  uStack_110 = param_17;
  uStack_138 = param_12;
  uStack_140 = param_11;
  uStack_128 = param_14;
  uStack_130 = param_13;
  puStack_180 = param_3;
  uStack_178 = param_4;
  uStack_170 = param_5;
  uStack_168 = param_6;
  uStack_160 = param_7;
  uStack_158 = param_8;
  uStack_150 = param_9;
  puStack_100 = param_3;
  uStack_f8 = param_4;
  puStack_f0 = (undefined *)param_5;
  puStack_e8 = (undefined *)param_6;
  uStack_e0 = param_7;
  puStack_d8 = (undefined *)param_8;
  uStack_d0 = param_9;
  bStack_9f = (byte)param_15;
  lStack_88 = lStack_108;
  FUN_102140a6c(&puStack_180);
  auStack_1c0[0] = param_2;
  func_0x000100b60084(auStack_1c0);
  uVar2 = uStack_188;
  if (lStack_190 == 0) {
    lVar12 = *(long *)(param_18 + 0x48);
    uVar10 = uStack_188;
    func_0x000107c61174(uStack_188);
    FUN_10213a860(param_5,param_6,param_21,uVar2);
    func_0x000107c61170(uVar10);
    lStack_1b0 = lVar12;
    uStack_1a8 = param_5;
    uStack_1a0 = param_6;
    func_0x000100087bd4(*(undefined8 *)(lVar12 + 0x38),FUN_102142dbc,auStack_1c0,
                        PTR___sytN_11034f1b0 + 8);
    uVar10 = uStack_188;
    uVar11 = uStack_188;
    func_0x000107c61174(uStack_188);
    func_0x0001000d224c(auStack_1c0);
    uVar2 = auStack_1c0[0];
    FUN_102135194(param_5,param_6,param_13,param_14,uVar10,(undefined1)param_22);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uVar11);
    func_0x0001000d224c(auStack_1c0);
    uVar2 = auStack_1c0[0];
    FUN_102135a08(param_13,param_14);
    FUN_102135034(&puStack_100);
    func_0x000107c61574(uVar2);
  }
  else {
    FUN_102140bcc(&puStack_180,0,0xe000000000000000,param_21,(byte)param_15,(undefined1)param_22,
                  param_22._1_1_ & 1);
    FUN_102135034(&puStack_100);
  }
  func_0x000107c614ac(lStack_190);
  uVar2 = uStack_188;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar2);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6f,0x156,0x21,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",0x6f,0x158,0x19,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102140a6c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102140a68);
  (*pcVar3)();
}



/* Entry: 102140a6c; end: 102140bcb;  */

void FUN_102140a6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *unaff_x20;
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f064f60);
  func_0x000107c5fb78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  func_0x000107c5fb78(0xd000000000000011,0x800000010f064cb0);
  func_0x000107c5fb78(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  func_0x000107c5fb78(0x736563637573202c,0xeb00000000203a73);
  bVar3 = *(long *)(param_1 + 0x68) != 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar1 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,uVar4,&PTR_DAT_1104d0850);
  func_0x000107c6142c(uVar1);
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x0001021432a4(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102140bcc; end: 1021411bf;  */

/* WARNING: Removing unreachable block (ram,0x000102140d28) */

void FUN_102140bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uVar14 = *unaff_x20;
  func_0x0001000d224c(&puStack_f0);
  puVar6 = puStack_f0;
  if (puStack_f0 != (undefined *)0x0) {
    puVar11 = (undefined *)*param_1;
    uVar1 = param_1[1];
    uStack_80 = 1;
    if ((param_5 & 1) == 0) {
      uStack_80 = 2;
    }
    uStack_e0 = param_1[10];
    uVar7 = param_1[0xb];
    uStack_d0 = param_1[2];
    uVar2 = param_1[3];
    uStack_b0 = param_1[4];
    uVar3 = param_1[5];
    uStack_a0 = param_1[6];
    uVar4 = param_1[7];
    uStack_90 = param_1[8];
    uVar5 = param_1[9];
    uStack_70._0_3_ =
         CONCAT12(*(undefined1 *)((long)param_1 + 0x62),
                  CONCAT11(*(undefined1 *)(param_1 + 0xc),param_6));
    uStack_70 = CONCAT13(param_7,(undefined3)uStack_70) & 0x1ffffff;
    puStack_f0 = puVar11;
    uStack_e8 = uVar1;
    uStack_d8 = uVar7;
    uStack_c8 = uVar2;
    uStack_c0 = param_2;
    uStack_b8 = param_3;
    uStack_a8 = uVar3;
    uStack_98 = uVar4;
    uStack_88 = uVar5;
    uStack_78 = param_4;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(param_3);
    FUN_10213e2d0();
    uStack_110 = CONCAT71(uStack_7f,uStack_80);
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_100 = uStack_70;
    puStack_158 = (undefined *)uStack_c8;
    pcStack_160 = (code *)uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_178 = uStack_e8;
    puStack_180 = puStack_f0;
    puStack_168 = (undefined *)uStack_d8;
    puStack_170 = (undefined *)uStack_e0;
    uVar7 = param_3;
    func_0x000102142dd8();
    puVar13 = &UNK_1104cfe88;
    ppuVar8 = &puStack_180;
    func_0x000107c5eb4c(ppuVar8,&UNK_1104cfe88,uVar7);
    func_0x000107c61574(param_3);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0xe000000000000000;
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(uStack_178);
    puStack_180 = (undefined *)0xd00000000000002a;
    uStack_178 = 0x800000010f064f30;
    func_0x000107c5fb78(puVar11,uVar1);
    uVar1 = uStack_178;
    func_0x0001007d6c6c(1,puStack_180,uStack_178,uVar14,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
    ppuVar9 = ppuVar8;
    func_0x000107c5ee20(ppuVar8,puVar13);
    ppuVar10 = ppuVar9;
    FUN_102134de0();
    puVar11 = &UNK_1104d0dd0;
    func_0x000107c613fc(&UNK_1104d0dd0,0xa0,7);
    *(undefined8 *)(puVar11 + 0x78) = uStack_88;
    *(undefined8 *)(puVar11 + 0x70) = uStack_90;
    *(undefined8 *)(puVar11 + 0x88) = uStack_78;
    *(ulong *)(puVar11 + 0x80) = CONCAT71(uStack_7f,uStack_80);
    *(uint *)(puVar11 + 0x90) = uStack_70;
    *(undefined8 *)(puVar11 + 0x38) = uStack_c8;
    *(undefined8 *)(puVar11 + 0x30) = uStack_d0;
    *(undefined8 *)(puVar11 + 0x48) = uStack_b8;
    *(undefined8 *)(puVar11 + 0x40) = uStack_c0;
    *(undefined8 *)(puVar11 + 0x58) = uStack_a8;
    *(undefined8 *)(puVar11 + 0x50) = uStack_b0;
    *(undefined8 *)(puVar11 + 0x68) = uStack_98;
    *(undefined8 *)(puVar11 + 0x60) = uStack_a0;
    *(undefined8 *)(puVar11 + 0x18) = uStack_e8;
    *(undefined **)(puVar11 + 0x10) = puStack_f0;
    *(undefined8 *)(puVar11 + 0x28) = uStack_d8;
    *(undefined8 *)(puVar11 + 0x20) = uStack_e0;
    *(undefined8 *)(puVar11 + 0x98) = uVar14;
    pcStack_160 = FUN_102142e18;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0x42000000;
    puStack_170 = &UNK_100ff4e14;
    puStack_168 = &UNK_1104d0de8;
    ppuVar12 = &puStack_180;
    puStack_158 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_158);
    func_0x000107c5c2c0(puVar6);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(ppuVar10);
    func_0x00010006c090(ppuVar8,puVar13);
    func_0x000107c615e8(puVar6);
  }
  return;
}



/* Entry: 1021411c0; end: 102141317;  */

undefined1 *
FUN_1021411c0(undefined8 param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [24];
  undefined1 uStack_51;
  
  func_0x0001007d6c6c(2,0xd000000000000029,0x800000010f064f80,param_8,&PTR_DAT_1104d0850);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uStack_51 = 0;
    puVar2 = &uStack_51;
    func_0x000104888f7c(puVar2);
  }
  else {
    func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    func_0x0001021410c8(0,param_3 & 1,param_4 & 1,2,param_5,param_6,param_7,lVar1);
    func_0x000107c61574(param_2);
    puVar2 = *(undefined1 **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(lVar1);
  }
  return puVar2;
}



/* Entry: 102141318; end: 10214141f;  */

void FUN_102141318(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar2 = *param_1;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x2a);
    func_0x000107c5fb78(0xd000000000000028,0x800000010f064fb0);
    uVar1 = 0x112d393f0;
    uStack_58 = uVar2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_48;
    func_0x0001007d6c6c(3,uStack_50,uStack_48,param_4,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
    func_0x00010488ade0(uVar2);
  }
  else {
    uStack_50 = CONCAT71(uStack_50._1_7_,param_3) & 0xffffffffffffff01;
    func_0x000100b60084(&uStack_50);
  }
  return;
}



/* Entry: 102141420; end: 1021415a3;  */

void FUN_102141420(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    uStack_40 = uStack_d0;
    uStack_38 = uStack_c8;
    func_0x000107c5fb78(0xd000000000000021,0x800000010f064a30);
    uStack_68 = param_2[0xd];
    uStack_70 = param_2[0xc];
    uStack_58 = param_2[0xf];
    uStack_60 = param_2[0xe];
    uStack_50 = *(undefined4 *)(param_2 + 0x10);
    uStack_a8 = param_2[5];
    uStack_b0 = param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    uStack_88 = param_2[9];
    uStack_90 = param_2[8];
    uStack_78 = param_2[0xb];
    uStack_80 = param_2[10];
    uStack_c8 = param_2[1];
    uStack_d0 = *param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    func_0x000107c603d0(&uStack_d0,&uStack_40,&UNK_1104cfe88,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    func_0x0001007d6c6c(1,uStack_40,uStack_38,param_3,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
  }
  else {
    uStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x1f);
    func_0x000107c6142c(uStack_c8);
    uStack_d0 = 0xd00000000000001d;
    uStack_c8 = 0x800000010f064a60;
    func_0x000107c614cc(param_1,auStack_d8,auStack_f0);
    uVar1 = uStack_e0;
    func_0x000107c60640(uStack_e8,uStack_e0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    uVar1 = uStack_c8;
    func_0x0001007d6c6c(3,uStack_d0,uStack_c8,param_3,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 1021415a4; end: 102141637;  */

void FUN_1021415a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102141638; end: 10214171b;  */

void FUN_102141638(void)

{
  FUN_10213e340();
  return;
}



/* Entry: 10214171c; end: 102141733;  */

void FUN_10214171c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x102142f74,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102141734; end: 102141797;  */

void FUN_102141734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(param_5,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102141798; end: 1021417bb;  */

void FUN_102141798(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001021417a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1021417bc; end: 10214192f;  */

void FUN_1021417bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined8 uStack_1d6;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_14f;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_4f;
  
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = 0x112e5b2e8;
  uStack_128 = param_2;
  uStack_120 = param_3;
  func_0x0001000285a8(0x112e5b2e8,&UNK_10da60e08);
  func_0x000100087bd4(&uStack_c0,0x102141c34,&uStack_140,uVar2);
  iVar1 = (int)&uStack_c0;
  FUN_102141c50();
  if (iVar1 == 1) {
    func_0x000102141c68(&uStack_140);
  }
  else {
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_160 = uStack_60;
    uStack_14f = uStack_4f;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    func_0x000107c6157c();
    func_0x0001021429d0(&uStack_c0,&uStack_140,0x112e5b2e8,&UNK_10da60e08);
    FUN_102141930(&uStack_248,&uStack_1c0);
    FUN_102141c84(&uStack_c0);
    FUN_102141c84(&uStack_c0);
    func_0x000107c61574();
    FUN_102141ccc(&uStack_248);
    uStack_f8 = uStack_200;
    uStack_100 = uStack_208;
    uStack_e8 = uStack_1f0;
    uStack_f0 = uStack_1f8;
    uStack_d8 = uStack_1e0;
    uStack_e0 = uStack_1e8;
    uStack_ce = uStack_1d6;
    uStack_d6 = uStack_1de;
    uStack_d0 = uStack_1d8;
    uStack_138 = uStack_240;
    uStack_140 = uStack_248;
    uStack_128 = uStack_230;
    uStack_130 = uStack_238;
    uStack_118 = uStack_220;
    uStack_120 = uStack_228;
    uStack_108 = uStack_210;
    uStack_110 = uStack_218;
  }
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = CONCAT62(uStack_d6,uStack_d8);
  param_1[0xc] = uStack_e0;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_ce;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_d0,uStack_d6);
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Entry: 102141930; end: 102141b53;  */

void FUN_102141930(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x0001000d224c(&uStack_140);
  uVar3 = uStack_140;
  func_0x000100087bd4(&uStack_c0,FUN_102142fb0,uStack_140,&UNK_1106ba5f0);
  func_0x000107c61574(uVar3);
  bVar2 = (char)uStack_c0 != '\x02';
  uVar3 = *(undefined8 *)(param_2 + 8);
  uStack_78 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = *(undefined8 *)(param_2 + 0x50);
  uStack_70 = *(undefined8 *)(param_2 + 0x60);
  uStack_68 = (undefined1)*(undefined8 *)(param_2 + 0x68);
  uStack_5f = *(undefined8 *)(param_2 + 0x71);
  uStack_67 = (undefined7)*(undefined8 *)(param_2 + 0x69);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = *(undefined8 *)(param_2 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = *(undefined8 *)(param_2 + 0x38);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  uStack_88 = *(undefined8 *)(param_2 + 0x48);
  uStack_90 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x0001021429d0(&uStack_c0,&uStack_140,0x112e5b300,&UNK_10da60e30);
  func_0x0001039dde90(&uStack_140,bVar2,uVar1,uVar3,&uStack_c0);
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = CONCAT62(uStack_d6,uStack_d8);
  param_1[0xc] = uStack_e0;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_ce;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_d0,uStack_d6);
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Entry: 102141b54; end: 102141b5b;  */

void FUN_102141b54(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  uStack_78 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = *(undefined8 *)(param_2 + 0x50);
  uStack_70 = *(undefined8 *)(param_2 + 0x60);
  uStack_68 = (undefined1)*(undefined8 *)(param_2 + 0x68);
  uStack_5f = *(undefined8 *)(param_2 + 0x71);
  uStack_67 = (undefined7)*(undefined8 *)(param_2 + 0x69);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = *(undefined8 *)(param_2 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = *(undefined8 *)(param_2 + 0x38);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  uStack_88 = *(undefined8 *)(param_2 + 0x48);
  uStack_90 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x0001021429d0(&uStack_c0,&uStack_140,0x112e5b300,&UNK_10da60e30);
  func_0x0001000d224c(&uStack_140);
  uVar2 = uStack_140;
  func_0x000100087bd4(&cStack_141,0x102142fc4,uStack_140,&UNK_1106ba5f0);
  func_0x000107c61574(uVar2);
  func_0x0001039dde90(&uStack_140,cStack_141 != '\x02',uVar1,uVar3,&uStack_c0);
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = CONCAT62(uStack_d6,uStack_d8);
  param_1[0xc] = uStack_e0;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_ce;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_d0,uStack_d6);
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Entry: 102141b5c; end: 102141ba7;  */

void FUN_102141b5c(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102141ba8; end: 102141bb7;  */

void FUN_102141ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined3 uStack_68;
  undefined5 uStack_65;
  undefined3 uStack_60;
  undefined8 uStack_5d;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_70 = param_1[0xc];
  uStack_68 = (undefined3)param_1[0xd];
  uStack_5d = *(undefined8 *)((long)param_1 + 0x73);
  uStack_65 = (undefined5)*(undefined8 *)((long)param_1 + 0x6b);
  uStack_60 = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0x6b) >> 0x28);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  func_0x000107c61428(lVar6 + 0x10,auStack_e8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    iVar5 = (int)&uStack_d0;
    FUN_102142c8c();
    if (iVar5 == 1) {
      puStack_118 = (undefined *)0x0;
      uStack_110 = 0xe000000000000000;
      func_0x000107c602fc(0x2f);
      func_0x000107c6142c(uStack_110);
      puStack_118 = (undefined *)0xd00000000000002d;
      uStack_110 = 0x800000010f064ec0;
      func_0x000107c5fb78(uVar3,uVar9);
      uVar9 = uStack_110;
      func_0x0001007d6c6c(3,puStack_118,uStack_110,uVar4,&PTR_DAT_1104d0850);
      func_0x000107c6142c(uVar9);
      uVar9 = *(undefined8 *)(lVar6 + 0x50);
      puVar7 = &UNK_1104d0b78;
      func_0x000107c613fc(&UNK_1104d0b78,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      pcStack_f8 = FUN_102142c94;
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0x42000000;
      puStack_108 = &UNK_1000f6b44;
      puStack_100 = &UNK_1104d0b90;
      ppuVar8 = &puStack_118;
      puStack_f0 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_f0;
      func_0x000107c6157c(uVar1);
      func_0x000107c615f0(uVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(uVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(lVar6);
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x50);
      puVar7 = &UNK_1104d0bc8;
      func_0x000107c613fc(&UNK_1104d0bc8,0x28,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      *(long *)(puVar7 + 0x20) = lVar6;
      pcStack_f8 = FUN_102142cb8;
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0x42000000;
      puStack_108 = &UNK_1000f6b44;
      puStack_100 = &UNK_1104d0be0;
      ppuVar8 = &puStack_118;
      puStack_f0 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_f0;
      func_0x000107c615f0(uVar9);
      func_0x000107c6157c(uVar1);
      func_0x000107c6157c(lVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(uVar9);
      func_0x000107c61574(lVar6);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c615e8(uVar9);
  }
  return;
}



/* Entry: 102141bb8; end: 102141c03;  */

void FUN_102141bb8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 102141c04; end: 102141c4f;  */

void FUN_102141c04(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1021400a4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102141c50; end: 102141c83;  */

int FUN_102141c50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102141c84; end: 102141ccb;  */

undefined8 FUN_102141c84(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5b2e8;
  func_0x0001000285a8(0x112e5b2e8,&UNK_10da60e08);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102141ccc; end: 102141ccf;  */

void FUN_102141ccc(void)

{
  return;
}



/* Entry: 102141cd0; end: 102141ceb;  */

void FUN_102141cd0(void)

{
  long unaff_x20;
  
  FUN_102139f60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}


