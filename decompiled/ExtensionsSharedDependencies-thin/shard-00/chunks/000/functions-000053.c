/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0010ed70; end: 0010f147;  */

void FUN_0010ed70(undefined8 param_1,ulong param_2,undefined1 *param_3,byte *param_4,uint param_5,
                 undefined8 param_6,byte *param_7,byte *param_8,byte *param_9)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  long unaff_x21;
  byte *pbVar20;
  byte abStack_2c0 [8];
  byte abStack_2b8 [8];
  byte abStack_2b0 [8];
  byte abStack_2a8 [8];
  byte abStack_2a0 [8];
  byte abStack_298 [8];
  byte abStack_290 [8];
  byte abStack_288 [8];
  byte abStack_280 [8];
  byte abStack_278 [8];
  byte abStack_270 [8];
  byte abStack_268 [8];
  byte abStack_260 [8];
  byte abStack_258 [8];
  byte abStack_250 [8];
  byte abStack_248 [8];
  byte abStack_240 [8];
  byte abStack_238 [8];
  byte abStack_230 [8];
  byte abStack_228 [8];
  byte abStack_220 [16];
  byte abStack_210 [8];
  byte abStack_208 [8];
  byte abStack_200 [8];
  byte abStack_1f8 [8];
  byte abStack_1f0 [8];
  byte abStack_1e8 [8];
  byte abStack_1e0 [8];
  byte abStack_1d8 [8];
  byte abStack_1d0 [8];
  byte abStack_1c8 [8];
  byte abStack_1c0 [8];
  byte abStack_1b8 [8];
  byte abStack_1b0 [8];
  byte abStack_1a8 [8];
  byte abStack_1a0 [8];
  byte abStack_198 [8];
  byte abStack_190 [8];
  byte abStack_188 [8];
  byte abStack_180 [8];
  byte abStack_178 [8];
  byte abStack_170 [16];
  byte abStack_160 [8];
  byte abStack_158 [8];
  byte abStack_150 [8];
  byte abStack_148 [8];
  byte abStack_140 [8];
  byte abStack_138 [24];
  byte abStack_120 [8];
  byte abStack_118 [8];
  ulong uStack_110;
  byte abStack_108 [8];
  byte abStack_100 [8];
  byte abStack_f8 [8];
  byte abStack_f0 [8];
  byte abStack_e8 [8];
  byte abStack_e0 [8];
  byte abStack_d8 [8];
  byte abStack_d0 [8];
  byte abStack_c8 [8];
  byte abStack_c0 [12];
  uint uStack_b4;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_78 [14];
  undefined2 uStack_6a;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (undefined1 *)0x0;
  uVar13 = param_6;
  pbVar14 = param_7;
  pbVar15 = param_8;
  uStack_b4 = param_5;
  pbStack_b0 = param_4;
  uStack_a0 = param_1;
  __sSS10FoundationE8EncodingVMa();
  uVar12 = (undefined2)param_5;
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar18 + 0x40));
  pbVar11 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_98 + 0x40));
  pbVar17 = pbVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pbVar19 = param_7;
  pbStack_a8 = param_8;
  (**(code **)(param_8 + 0x10))(param_7,param_8);
  uVar1 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  pbVar20 = param_7;
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    auStack_78[0] = (undefined1)param_2;
    auStack_78[1] = (undefined1)(param_2 >> 8);
    auStack_78[2] = (undefined1)(param_2 >> 0x10);
    auStack_78[3] = (undefined1)(param_2 >> 0x18);
    auStack_78[4] = (undefined1)(param_2 >> 0x20);
    auStack_78[5] = (undefined1)(param_2 >> 0x28);
    auStack_78[6] = (undefined1)(param_2 >> 0x30);
    auStack_78[7] = (undefined1)(param_2 >> 0x38);
    auStack_78[8] = SUB81(param_3,0);
    auStack_78[9] = (undefined1)((ulong)param_3 >> 8);
    auStack_78[10] = (undefined1)((ulong)param_3 >> 0x10);
    auStack_78[0xb] = (undefined1)((ulong)param_3 >> 0x18);
    auStack_78[0xc] = (undefined1)((ulong)param_3 >> 0x20);
    auStack_78[0xd] = (undefined1)((ulong)param_3 >> 0x28);
    uStack_6a = (undefined2)((ulong)param_3 >> 0x30);
    uVar12 = (short)pbVar19;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pbVar11);
    FUN_00033a8c();
    param_2 = 0;
    pbVar19 = pbVar11;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (pbVar11,0,PTR___sSSN_0099b040);
    (**(code **)(lVar18 + 8))(pbVar11,puVar5);
    puVar7 = param_3;
    _swift_bridgeObjectRelease();
    if (param_2 >> 0x3c < 0xf) {
      uVar3 = (uint)(param_2 >> 0x20);
      uVar16 = uVar3 >> 0x1e;
      pbVar14 = pbVar17;
      pbVar15 = param_7;
      pbVar20 = pbVar19;
      if (uVar3 >> 0x1e < 2) {
        if (uVar16 == 0) {
          auStack_78[0] = SUB81(pbVar19,0);
          auStack_78[1] = (undefined1)((ulong)pbVar19 >> 8);
          auStack_78[2] = (undefined1)((ulong)pbVar19 >> 0x10);
          auStack_78[3] = (undefined1)((ulong)pbVar19 >> 0x18);
          auStack_78[4] = (undefined1)((ulong)pbVar19 >> 0x20);
          auStack_78[5] = (undefined1)((ulong)pbVar19 >> 0x28);
          auStack_78[6] = (undefined1)((ulong)pbVar19 >> 0x30);
          auStack_78[7] = (undefined1)((ulong)pbVar19 >> 0x38);
          auStack_78[8] = (undefined1)param_2;
          auStack_78[9] = (undefined1)(param_2 >> 8);
          auStack_78[10] = (undefined1)(param_2 >> 0x10);
          auStack_78[0xb] = (undefined1)(param_2 >> 0x18);
          auStack_78[0xc] = (undefined1)(param_2 >> 0x20);
          auStack_78[0xd] = (undefined1)(param_2 >> 0x28);
          puVar10 = auStack_78 + (param_2 >> 0x30 & 0xff);
LAB_0010f0a0:
          puVar7 = auStack_78;
          pbVar20 = param_7;
          goto LAB_0010f104;
        }
        param_3 = (undefined1 *)(long)(int)pbVar19;
        puVar10 = (undefined1 *)(((long)pbVar19 >> 0x20) - (long)param_3);
        if ((long)pbVar19 >> 0x20 < (long)param_3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10f138);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (puVar7 == (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          puVar7 = (undefined1 *)0x0;
          puVar10 = (undefined1 *)0x0;
        }
        else {
          puVar6 = puVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8((long)param_3,(long)puVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10f144);
            (*pcVar4)();
          }
          puVar5 = puVar7 + ((long)param_3 - (long)puVar6);
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar10 <= (long)puVar6) {
            puVar6 = puVar10;
          }
          puVar7 = (undefined1 *)0x0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar7 = puVar5;
          }
          puVar10 = (undefined1 *)0x0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar10 = puVar6 + (long)puVar5;
          }
        }
        uVar12 = (undefined2)(uStack_b4 & 0x101);
        pbVar11 = pbStack_b0;
        uVar13 = param_6;
        param_9 = pbStack_a8;
        FUN_0010f148(puVar7,puVar10,pbStack_b0,uStack_b4 & 0x101,param_6);
      }
      else {
        if (uVar16 != 2) {
          auStack_78[8] = 0;
          auStack_78[9] = 0;
          auStack_78[10] = 0;
          auStack_78[0xb] = 0;
          auStack_78[0xc] = 0;
          auStack_78[0xd] = 0;
          auStack_78[0] = 0;
          auStack_78[1] = 0;
          auStack_78[2] = 0;
          auStack_78[3] = 0;
          auStack_78[4] = 0;
          auStack_78[5] = 0;
          auStack_78[6] = 0;
          auStack_78[7] = 0;
          puVar10 = auStack_78;
          goto LAB_0010f0a0;
        }
        lVar18 = *(long *)(pbVar19 + 0x10);
        param_3 = *(undefined1 **)(pbVar19 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar10 = puVar7;
        if (puVar7 != (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,(long)puVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10f140);
            (*pcVar4)();
          }
          puVar7 = puVar7 + (lVar18 - (long)puVar10);
        }
        if (SBORROW8((long)param_3,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10f13c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar5 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          if ((long)(param_3 + -lVar18) <= (long)puVar10) {
            puVar10 = param_3 + -lVar18;
          }
          puVar10 = puVar10 + (long)puVar7;
        }
LAB_0010f104:
        uVar12 = (undefined2)(uStack_b4 & 0x101);
        pbVar11 = pbStack_b0;
        uVar13 = param_6;
        param_9 = pbStack_a8;
        FUN_0010f148(puVar7,puVar10,pbStack_b0,uStack_b4 & 0x101,param_6);
      }
      FUN_00023344(pbVar19,param_2);
      lVar18 = lStack_98;
      if (unaff_x21 != 0) goto LAB_0010ef7c;
    }
  }
  lVar18 = lStack_98;
  pbVar11 = param_7;
  (**(code **)(lStack_98 + 0x10))(uStack_a0,pbVar17);
LAB_0010ef7c:
  FUN_000ea918(param_6);
  pbVar19 = pbVar17;
  pbVar9 = param_7;
  (**(code **)(lVar18 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pbVar17 + -0x60) = param_6;
  *(ulong *)(pbVar17 + -0x50) = param_2;
  *(byte **)(pbVar17 + -0x48) = pbVar20;
  *(undefined1 **)(pbVar17 + -0x40) = param_3;
  *(byte **)(pbVar17 + -0x38) = pbVar17;
  *(undefined1 **)(pbVar17 + -0x30) = puVar5;
  *(byte **)(pbVar17 + -0x28) = param_7;
  *(long *)(pbVar17 + -0x20) = lVar18;
  *(long *)(pbVar17 + -0x18) = unaff_x21;
  *(undefined1 **)(pbVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(pbVar17 + -8) = FUN_0010f148;
  if ((pbVar19 != (byte *)0x0) && ((long)pbVar9 - (long)pbVar19 != 0)) {
    *(byte **)(pbVar17 + -0x200) = pbVar14;
    *(long *)(pbVar17 + -0x58) = unaff_x21;
    pbVar17[-0x1a0] = 0;
    pbVar17[-0x19f] = 0;
    pbVar17[-0x19e] = 0;
    pbVar17[-0x19d] = 0;
    pbVar17[-0x19c] = 0;
    pbVar17[-0x19b] = 0;
    pbVar17[-0x19a] = 0;
    pbVar17[-0x199] = 0;
    lVar18 = 0;
    func_0x000dfc88();
    _swift_allocObject();
    uVar8 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar18 + 0x10) = uVar8;
    *(undefined8 *)(lVar18 + 0x18) = 0x80;
    pbVar14 = pbVar19 + ((long)pbVar9 - (long)pbVar19);
    *(byte **)(pbVar17 + -0x1d0) = pbVar19;
    *(byte **)(pbVar17 + -0x1c8) = pbVar14;
    *(long *)(pbVar17 + -0x1c0) = lVar18;
    func_0x000c6fb4(uVar13,pbVar17 + -0x1f8);
    *(byte **)(pbVar17 + -0x1b8) = pbVar11;
    pbVar17[-0x1b0] = (byte)uVar12 & 1;
    pbVar17[-0x1af] = (byte)((ushort)uVar12 >> 8) & 1;
    if (SBORROW8((long)pbVar11,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10f3e8);
      (*pcVar4)();
    }
    *(byte **)(pbVar17 + -0x1a8) = pbVar11 + -1;
    do {
      bVar2 = *pbVar19;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar11 = pbVar19 + 1;
        do {
          if (pbVar11 == pbVar14) {
            *(byte **)(pbVar17 + -0x1d0) = pbVar14;
            goto LAB_0010f268;
          }
          pbVar19 = pbVar11 + 1;
          bVar2 = *pbVar11;
          pbVar11 = pbVar19;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar19 = pbVar19 + 1;
      }
      *(byte **)(pbVar17 + -0x1d0) = pbVar19;
    } while (pbVar19 != pbVar14);
LAB_0010f268:
    pbVar19 = pbVar15;
    _swift_conformsToProtocol(pbVar15,&DAT_00844958);
    if (pbVar19 == (byte *)0x0 || pbVar15 == (byte *)0x0) {
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,pbVar19,0,0);
      *pbVar19 = 6;
      _swift_willThrow();
      func_0x000c72b8(pbVar17 + -0x1f8);
    }
    else {
      (**(code **)(pbVar19 + 8))(pbVar17 + -0xa0,pbVar15,pbVar19);
      *(undefined8 *)(pbVar17 + -0x188) = *(undefined8 *)(pbVar17 + -0x98);
      *(undefined8 *)(pbVar17 + -400) = *(undefined8 *)(pbVar17 + -0xa0);
      *(undefined8 *)(pbVar17 + -0x178) = *(undefined8 *)(pbVar17 + -0x88);
      *(undefined8 *)(pbVar17 + -0x180) = *(undefined8 *)(pbVar17 + -0x90);
      *(undefined8 *)(pbVar17 + -0x168) = *(undefined8 *)(pbVar17 + -0x78);
      *(undefined8 *)(pbVar17 + -0x170) = *(undefined8 *)(pbVar17 + -0x80);
      *(undefined8 *)(pbVar17 + -0x118) = *(undefined8 *)(pbVar17 + -0x1c0);
      *(undefined8 *)(pbVar17 + -0x120) = *(undefined8 *)(pbVar17 + -0x1c8);
      *(undefined8 *)(pbVar17 + -0x108) = *(undefined8 *)(pbVar17 + -0x1b0);
      *(undefined8 *)(pbVar17 + -0x110) = *(undefined8 *)(pbVar17 + -0x1b8);
      *(undefined8 *)(pbVar17 + -0xf8) = *(undefined8 *)(pbVar17 + -0x1a0);
      *(undefined8 *)(pbVar17 + -0x100) = *(undefined8 *)(pbVar17 + -0x1a8);
      *(undefined8 *)(pbVar17 + -0x148) = *(undefined8 *)(pbVar17 + -0x1f0);
      *(undefined8 *)(pbVar17 + -0x150) = *(undefined8 *)(pbVar17 + -0x1f8);
      *(byte **)(pbVar17 + -0x160) = pbVar15;
      pbVar17[-0x198] = 0;
      pbVar17[-0x197] = 1;
      *(byte **)(pbVar17 + -0xb0) = param_9;
      *(undefined8 *)(pbVar17 + -0x138) = *(undefined8 *)(pbVar17 + -0x1e0);
      *(undefined8 *)(pbVar17 + -0x140) = *(undefined8 *)(pbVar17 + -0x1e8);
      *(undefined8 *)(pbVar17 + -0x128) = *(undefined8 *)(pbVar17 + -0x1d0);
      *(undefined8 *)(pbVar17 + -0x130) = *(undefined8 *)(pbVar17 + -0x1d8);
      *(undefined8 *)(pbVar17 + -200) = *(undefined8 *)(pbVar17 + -0x170);
      *(undefined8 *)(pbVar17 + -0xd0) = *(undefined8 *)(pbVar17 + -0x178);
      *(undefined8 *)(pbVar17 + -0xb8) = *(undefined8 *)(pbVar17 + -0x160);
      *(undefined8 *)(pbVar17 + -0xc0) = *(undefined8 *)(pbVar17 + -0x168);
      *(undefined8 *)(pbVar17 + -0xe8) = *(undefined8 *)(pbVar17 + -400);
      *(undefined8 *)(pbVar17 + -0xf0) = *(undefined8 *)(pbVar17 + -0x198);
      *(undefined8 *)(pbVar17 + -0xd8) = *(undefined8 *)(pbVar17 + -0x180);
      *(undefined8 *)(pbVar17 + -0xe0) = *(undefined8 *)(pbVar17 + -0x188);
      pbVar19 = pbVar17 + -0x150;
      lVar18 = *(long *)(pbVar17 + -0x58);
      (**(code **)(param_9 + 0x40))(pbVar19,&UNK_009aec48,&PTR_DAT_009aec70,pbVar15,param_9);
      if ((lVar18 == 0) && (*(long *)(pbVar17 + -0x128) != *(long *)(pbVar17 + -0x120))) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,pbVar19,0,0);
        *pbVar19 = 2;
        _swift_willThrow();
      }
      func_0x000c72ec(pbVar17 + -0x150);
    }
  }
  return;
}



/* Entry: 0010f148; end: 0010f3e7;  */

void FUN_0010f148(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 *param_7,long param_8)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long unaff_x21;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  byte bStack_1b0;
  byte bStack_1af;
  undefined6 uStack_1ae;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((param_1 != (byte *)0x0) && (param_2 - (long)param_1 != 0)) {
    uStack_1a0 = 0;
    lVar4 = 0;
    func_0x000dfc88();
    _swift_allocObject();
    uVar5 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_1d0 = param_1;
    pbStack_1c8 = pbVar1;
    lStack_1c0 = lVar4;
    func_0x000c6fb4(param_5,&uStack_1f8);
    bStack_1b0 = (byte)param_4 & 1;
    bStack_1af = (byte)((ulong)param_4 >> 8) & 1;
    lStack_1a8 = param_3 + -1;
    lStack_1b8 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10f3e8);
      (*pcVar3)();
    }
    do {
      bVar2 = *param_1;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar8 = param_1 + 1;
        do {
          pbStack_1d0 = pbVar1;
          if (pbVar8 == pbVar1) goto LAB_0010f268;
          param_1 = pbVar8 + 1;
          bVar2 = *pbVar8;
          pbVar8 = param_1;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        param_1 = param_1 + 1;
      }
      pbStack_1d0 = param_1;
    } while (param_1 != pbVar1);
LAB_0010f268:
    puVar6 = param_7;
    _swift_conformsToProtocol(param_7,&DAT_00844958);
    if (puVar6 == (undefined1 *)0x0 || param_7 == (undefined1 *)0x0) {
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar6,0,0);
      *puVar6 = 6;
      _swift_willThrow();
      func_0x000c72b8(&uStack_1f8);
    }
    else {
      (**(code **)(puVar6 + 8))(&uStack_a0,param_7,puVar6);
      uStack_188 = uStack_98;
      uStack_190 = uStack_a0;
      uStack_178 = uStack_88;
      uStack_180 = uStack_90;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      lStack_118 = lStack_1c0;
      pbStack_120 = pbStack_1c8;
      uStack_108 = CONCAT62(uStack_1ae,CONCAT11(bStack_1af,bStack_1b0));
      lStack_110 = lStack_1b8;
      uStack_f8 = uStack_1a0;
      lStack_100 = lStack_1a8;
      uStack_148 = uStack_1f0;
      uStack_150 = uStack_1f8;
      uStack_198 = 0x100;
      uStack_138 = uStack_1e0;
      uStack_140 = uStack_1e8;
      pbStack_128 = pbStack_1d0;
      uStack_130 = uStack_1d8;
      uStack_c8 = uStack_80;
      uStack_d0 = uStack_88;
      uStack_c0 = uStack_78;
      uStack_f0 = CONCAT62(uStack_196,0x100);
      uStack_e8 = uStack_a0;
      uStack_d8 = uStack_90;
      uStack_e0 = uStack_98;
      puVar7 = &uStack_150;
      puStack_160 = param_7;
      puStack_b8 = param_7;
      lStack_b0 = param_8;
      (**(code **)(param_8 + 0x40))(puVar7,&UNK_009aec48,&PTR_DAT_009aec70,param_7,param_8);
      if ((unaff_x21 == 0) && (pbStack_128 != pbStack_120)) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,puVar7,0,0);
        *(undefined1 *)puVar7 = 2;
        _swift_willThrow();
      }
      func_0x000c72ec(&uStack_150);
    }
  }
  return;
}



/* Entry: 0010f3e8; end: 0010f41b;  */

undefined8 FUN_0010f3e8(undefined8 param_1)

{
  (*(code *)(undefined *)0x12ecec)();
  return param_1;
}



/* Entry: 0010f41c; end: 0010f49b;  */

void FUN_0010f41c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  long unaff_x21;
  
  (**(code **)(param_5 + 0x10))(param_4,param_5);
  (*param_2)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  }
  return;
}



/* Entry: 0010f49c; end: 0010f4a3;  */

undefined8 FUN_0010f49c(void)

{
  return 1;
}



/* Entry: 0010f4a4; end: 0010f533;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_0010f4a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 0010f534; end: 0010f57f;  */

void FUN_0010f534(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  _swift_getDynamicType();
  _swift_getMetatypeMetadata(param_1);
  __sSS10reflectingSSx_tclufC(auStack_28,param_1);
  return;
}



/* Entry: 0010f580; end: 0010f687;  */

uint FUN_0010f580(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = (int)&uStack_100;
  FUN_000ea51c(param_1,auStack_c0);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_100,auStack_c0,uVar2,&UNK_009b4bc8,6);
  if (iVar1 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_00116058(0,0,0,0,0,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_98 = uStack_100;
    uStack_90 = uStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_70 = uStack_d8;
    uStack_68 = uStack_d0;
    FUN_001a7120();
    FUN_00116058(uStack_100,uStack_f8,uStack_f0,uStack_e8,uStack_e0,uStack_d8,uStack_d0);
  }
  return unaff_w20 & 1;
}



/* Entry: 0010f688; end: 0010f783;  */

uint FUN_0010f688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined1 auStack_c8 [40];
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
  
  FUN_000ea51c(param_1,auStack_c8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_009af9e0,6);
  if ((int)puVar2 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    FUN_00116514(&uStack_140,0xaefea8,&UNK_007d9c80);
    unaff_w20 = 0;
  }
  else {
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_150 = uStack_d0;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_30 = uStack_d0;
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    uStack_38 = uStack_d8;
    uStack_40 = uStack_e0;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    FUN_001434bc();
    FUN_00116514(&uStack_1c0,0xaefea8,&UNK_007d9c80);
  }
  return unaff_w20 & 1;
}



/* Entry: 0010f784; end: 0010f9c7;  */

uint FUN_0010f784(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_000ea51c(param_1,auStack_a8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_d8;
  _swift_dynamicCast(puVar2,auStack_a8,uVar1,&UNK_009b4018,6);
  if ((int)puVar2 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0xff;
    uStack_c8 = 0x2000000000000000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00116144(0,0,0x2000000000000000,0xff,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_80 = uStack_d8;
    uStack_78 = uStack_d0;
    uStack_70 = uStack_c8;
    uStack_68 = (undefined1)uStack_c0;
    uStack_60 = uStack_b8;
    uStack_58 = uStack_b0;
    FUN_0019ae20();
    func_0x00116144(uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8,uStack_b0);
  }
  return unaff_w20 & 1;
}



/* Entry: 0010f9c8; end: 0010fde7;  */

uint FUN_0010f9c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [40];
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
  
  FUN_000ea51c(param_1,auStack_d8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_160;
  _swift_dynamicCast(puVar2,auStack_d8,uVar1,&UNK_009b48e0,6);
  if ((int)puVar2 == 0) {
    func_0x001160bc(&uStack_b0);
    uStack_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_108 = uStack_58;
    uStack_110 = uStack_60;
    uStack_f8 = uStack_48;
    uStack_100 = uStack_50;
    uStack_e8 = uStack_38;
    uStack_f0 = uStack_40;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    FUN_00116514(&uStack_160,0xaefe10,&UNK_007d9be8);
    unaff_w20 = 0;
  }
  else {
    func_0x001160d4(&uStack_160);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_48 = uStack_f8;
    uStack_50 = uStack_100;
    uStack_38 = uStack_e8;
    uStack_40 = uStack_f0;
    FUN_001a4df4();
    FUN_00116514(&uStack_1e0,0xaefe10,&UNK_007d9be8);
  }
  return unaff_w20 & 1;
}



/* Entry: 0010fde8; end: 0010fed7;  */

uint FUN_0010fde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_000ea51c(param_1,auStack_68);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar3,&UNK_009af680,6);
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  if (iVar1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else if ((param_4 == uStack_70) || (uVar2 = uStack_70, FUN_000c46a8(), (uVar2 & 1) != 0)) {
    FUN_00038814(param_2,param_3,uVar3,uVar4);
    uVar6 = (uint)param_2;
    FUN_00116410(uVar3,uVar4,uVar5);
    goto LAB_0010febc;
  }
  FUN_00116410(uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_0010febc:
  return uVar6 & 1;
}



/* Entry: 0010fed8; end: 0010ffc7;  */

uint FUN_0010fed8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 auStack_c8 [40];
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
  undefined8 uStack_3f;
  
  FUN_000ea51c(param_1,auStack_c8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_009b2050,6);
  if ((int)puVar2 == 0) {
    uStack_df = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    FUN_00116514(&uStack_140,0xaefe70,&UNK_007d9c48);
    unaff_w20 = 0;
  }
  else {
    uStack_168 = uStack_f8;
    uStack_170 = uStack_100;
    uStack_160 = uStack_f0;
    uStack_14f = uStack_df;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_3f = uStack_df;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    FUN_0016e43c();
    FUN_00116514(&uStack_1b0,0xaefe70,&UNK_007d9c48);
  }
  return unaff_w20 & 1;
}



/* Entry: 0010ffc8; end: 00110107;  */

uint FUN_0010ffc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_18e;
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
  undefined8 uStack_fe;
  undefined1 auStack_e8 [40];
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
  undefined8 uStack_50;
  undefined8 uStack_3e;
  
  FUN_000ea51c(param_1,auStack_e8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_180;
  _swift_dynamicCast(puVar2,auStack_e8,uVar1,&UNK_009b20d8,6);
  if ((int)puVar2 == 0) {
    func_0x001163a8(&uStack_c0);
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_110 = uStack_50;
    uStack_fe = uStack_3e;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    FUN_00116514(&uStack_180,0xaefe68,&UNK_007d9c40);
    unaff_w20 = 0;
  }
  else {
    func_0x001163cc(&uStack_180);
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    uStack_1a0 = uStack_110;
    uStack_18e = uStack_fe;
    uStack_1e8 = uStack_158;
    uStack_1f0 = uStack_160;
    uStack_1d8 = uStack_148;
    uStack_1e0 = uStack_150;
    uStack_1c8 = uStack_138;
    uStack_1d0 = uStack_140;
    uStack_1b8 = uStack_128;
    uStack_1c0 = uStack_130;
    uStack_208 = uStack_178;
    uStack_210 = uStack_180;
    uStack_1f8 = uStack_168;
    uStack_200 = uStack_170;
    uStack_58 = uStack_118;
    uStack_60 = uStack_120;
    uStack_50 = uStack_110;
    uStack_3e = uStack_fe;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    FUN_0016f1b8();
    FUN_00116514(&uStack_210,0xaefe68,&UNK_007d9c40);
  }
  return unaff_w20 & 1;
}



/* Entry: 00110108; end: 001105fb;  */

uint FUN_00110108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_10f;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3f;
  
  FUN_000ea51c(param_1,auStack_a8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_100;
  _swift_dynamicCast(puVar2,auStack_a8,uVar1,&UNK_009b1ac8,6);
  if ((int)puVar2 == 0) {
    uStack_bf = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    FUN_00116514(&uStack_100,0xaefe90,&UNK_007e1580);
    unaff_w20 = 0;
  }
  else {
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_120 = uStack_d0;
    uStack_10f = uStack_bf;
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_50 = uStack_d0;
    uStack_3f = uStack_bf;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    FUN_00168020();
    FUN_00116514(&uStack_150,0xaefe90,&UNK_007e1580);
  }
  return unaff_w20 & 1;
}



/* Entry: 001105fc; end: 00110787;  */

uint FUN_001105fc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  byte bStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,&UNK_009b2b08,6);
  bVar7 = bStack_70;
  lVar6 = lStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 1;
    bStack_70 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    lVar6 = 1;
    bVar7 = 0;
  }
  else {
    lVar8 = unaff_x20[3];
    if (lVar8 == 0) {
      if (lStack_78 == 0) {
LAB_001106e0:
        if (*(byte *)(unaff_x20 + 4) == 2) {
          if (bVar7 == 2) {
LAB_001106f4:
            uVar3 = *unaff_x20;
            FUN_00038814(uVar3,unaff_x20[1],uVar2,uVar4);
            uVar10 = (uint)uVar3;
            func_0x001162c0(uVar2,uVar4,uVar5,lVar6,bVar7);
            goto LAB_0011076c;
          }
        }
        else if (bVar7 == 2) {
          bVar7 = 2;
        }
        else if (((*(byte *)(unaff_x20 + 4) ^ bVar7) & 1) == 0) goto LAB_001106f4;
      }
    }
    else if (lStack_78 == 0) {
      lVar6 = 0;
    }
    else {
      uVar9 = unaff_x20[2];
      if (((uVar9 == uStack_80) && (lVar8 == lStack_78)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,lVar8,uStack_80,lStack_78,0), (uVar9 & 1) != 0)) goto LAB_001106e0;
    }
  }
  func_0x001162c0(uVar2,uVar4,uVar5,lVar6,bVar7);
  uVar10 = 0;
LAB_0011076c:
  return uVar10 & 1;
}



/* Entry: 00110788; end: 001108e7;  */

uint FUN_00110788(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 uStack_1f0;
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
  undefined1 uStack_120;
  undefined1 auStack_118 [40];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  FUN_000ea51c(param_1,auStack_118);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_1e0;
  _swift_dynamicCast(puVar2,auStack_118,uVar1,&UNK_009b1880,6);
  if ((int)puVar2 == 0) {
    func_0x0011643c(&uStack_f0);
    uStack_138 = uStack_48;
    uStack_140 = uStack_50;
    uStack_128 = uStack_38;
    uStack_130 = uStack_40;
    uStack_120 = uStack_30;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    uStack_148 = uStack_58;
    uStack_150 = uStack_60;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    FUN_00116514(&uStack_1e0,0xaefea0,&UNK_007d9c78);
    unaff_w20 = 0;
  }
  else {
    func_0x00116460(&uStack_1e0);
    uStack_208 = uStack_138;
    uStack_210 = uStack_140;
    uStack_1f8 = uStack_128;
    uStack_200 = uStack_130;
    uStack_248 = uStack_178;
    uStack_250 = uStack_180;
    uStack_238 = uStack_168;
    uStack_240 = uStack_170;
    uStack_228 = uStack_158;
    uStack_230 = uStack_160;
    uStack_218 = uStack_148;
    uStack_220 = uStack_150;
    uStack_288 = uStack_1b8;
    uStack_290 = uStack_1c0;
    uStack_278 = uStack_1a8;
    uStack_280 = uStack_1b0;
    uStack_268 = uStack_198;
    uStack_270 = uStack_1a0;
    uStack_258 = uStack_188;
    uStack_260 = uStack_190;
    uStack_2a8 = uStack_1d8;
    uStack_2b0 = uStack_1e0;
    uStack_298 = uStack_1c8;
    uStack_2a0 = uStack_1d0;
    uStack_48 = uStack_138;
    uStack_50 = uStack_140;
    uStack_38 = uStack_128;
    uStack_40 = uStack_130;
    uStack_88 = uStack_178;
    uStack_90 = uStack_180;
    uStack_78 = uStack_168;
    uStack_80 = uStack_170;
    uStack_68 = uStack_158;
    uStack_70 = uStack_160;
    uStack_58 = uStack_148;
    uStack_60 = uStack_150;
    uStack_c8 = uStack_1b8;
    uStack_d0 = uStack_1c0;
    uStack_b8 = uStack_1a8;
    uStack_c0 = uStack_1b0;
    uStack_a8 = uStack_198;
    uStack_b0 = uStack_1a0;
    uStack_98 = uStack_188;
    uStack_a0 = uStack_190;
    uStack_1f0 = uStack_120;
    uStack_30 = uStack_120;
    uStack_e8 = uStack_1d8;
    uStack_f0 = uStack_1e0;
    uStack_d8 = uStack_1c8;
    uStack_e0 = uStack_1d0;
    FUN_00164544();
    FUN_00116514(&uStack_2b0,0xaefea0,&UNK_007d9c78);
  }
  return unaff_w20 & 1;
}



/* Entry: 001108e8; end: 00110b03;  */

uint FUN_001108e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,code *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_78);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar3,param_5,6);
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
LAB_001109e4:
    FUN_00116410(uVar3,uVar4,uVar5);
    uVar6 = 0;
  }
  else {
    if (param_4 != uStack_80) {
      _swift_retain(param_4);
      _swift_retain(uVar5);
      uVar2 = param_4;
      (*param_6)(param_4,uVar5);
      _swift_release(uVar5);
      _swift_release(param_4);
      if ((uVar2 & 1) == 0) goto LAB_001109e4;
    }
    FUN_00038814(param_2,param_3,uVar3,uVar4);
    uVar6 = (uint)param_2;
    FUN_00116410(uVar3,uVar4,uVar5);
  }
  return uVar6 & 1;
}



/* Entry: 00110b04; end: 00110c17;  */

uint FUN_00110b04(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined2 uStack_64;
  
  iVar1 = (int)&uStack_100;
  FUN_000ea51c(param_1,auStack_c0);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_100,auStack_c0,uVar2,&UNK_009b33d0,6);
  if (iVar1 == 0) {
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d2 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_001161d0(0,0,0,0,0,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_98 = uStack_100;
    uStack_90 = uStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_64 = uStack_cc;
    uStack_68 = uStack_d0;
    func_0x00182f04();
    FUN_001161d0(uStack_100,uStack_f8,uStack_f0,uStack_e8,uStack_e0,CONCAT26(uStack_d2,uStack_d8),
                 (ulong)CONCAT24(uStack_cc,uStack_d0));
  }
  return unaff_w20 & 1;
}



/* Entry: 00110c18; end: 00110d43;  */

uint FUN_00110c18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_16f;
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
  undefined8 uStack_ef;
  undefined1 auStack_d8 [40];
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
  undefined8 uStack_3f;
  
  FUN_000ea51c(param_1,auStack_d8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_160;
  _swift_dynamicCast(puVar2,auStack_d8,uVar1,&UNK_009b2828,6);
  if ((int)puVar2 == 0) {
    func_0x001162f0(&uStack_b0);
    uStack_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_108 = uStack_58;
    uStack_110 = uStack_60;
    uStack_100 = uStack_50;
    uStack_ef = uStack_3f;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    FUN_00116514(&uStack_160,0xaefe48,&UNK_007d9c20);
    unaff_w20 = 0;
  }
  else {
    func_0x0011630c(&uStack_160);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_180 = uStack_100;
    uStack_16f = uStack_ef;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_50 = uStack_100;
    uStack_3f = uStack_ef;
    FUN_0017924c();
    FUN_00116514(&uStack_1e0,0xaefe48,&UNK_007d9c20);
  }
  return unaff_w20 & 1;
}



/* Entry: 00110d44; end: 00110e43;  */

uint FUN_00110d44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined1 auStack_c8 [40];
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
  
  FUN_000ea51c(param_1,auStack_c8);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_009b19b8,6);
  if ((int)puVar2 == 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 1;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_d8 = 0;
    FUN_00116514(&uStack_140,0xaefe98,&UNK_007d9c70);
    unaff_w20 = 0;
  }
  else {
    uStack_168 = uStack_f8;
    uStack_170 = uStack_100;
    uStack_160 = uStack_f0;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    FUN_0016701c();
    FUN_00116514(&uStack_1b0,0xaefe98,&UNK_007d9c70);
  }
  return unaff_w20 & 1;
}



/* Entry: 00110e44; end: 00110fb3;  */

uint FUN_00110e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  int iStack_78;
  undefined1 uStack_74;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,param_6,6);
  if (iVar1 == 0) {
    uStack_88 = 0xf000000000000000;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_74 = 0;
    iStack_78 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)CONCAT14(uStack_74,iStack_78);
    if ((param_4 & 0xff00000000) == 0x100000000) {
      if ((uStack_80 & 0xff00000000) == 0x100000000) {
LAB_00110f3c:
        if ((param_5 & 0xff00000000) == 0x100000000) {
          if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
LAB_00110f74:
            FUN_00038814(param_2,param_3,uStack_90,uStack_88);
            uVar4 = (uint)param_2;
            (*param_7)(uStack_90,uStack_88,uStack_80,uVar3);
            goto LAB_00110f10;
          }
        }
        else if (((uVar3 & 0xffffffff00000000) != 0x100000000) && ((int)param_5 == iStack_78))
        goto LAB_00110f74;
      }
    }
    else if (((uStack_80 & 0xff00000000) != 0x100000000) && ((int)param_4 == (int)uStack_80))
    goto LAB_00110f3c;
  }
  (*param_7)(uStack_90,uStack_88,uStack_80,uVar3);
  uVar4 = 0;
LAB_00110f10:
  return uVar4 & 1;
}



/* Entry: 00110fb4; end: 001110d3;  */

uint FUN_00110fb4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&uStack_b0;
  FUN_000ea51c(param_1,auStack_88);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_b0,auStack_88,uVar2,param_6,6);
  uVar5 = uStack_98;
  uVar4 = uStack_a0;
  uVar3 = uStack_a8;
  uVar2 = uStack_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    (*param_7)(param_2,uStack_b0);
    if (((param_2 & 1) != 0) && (FUN_00038814(param_3,param_4,uVar3,uVar4), (param_3 & 1) != 0)) {
      FUN_000e17c0(param_5,uVar5);
      uVar6 = (uint)param_5;
      FUN_00116464(uVar2,uVar3,uVar4,uVar5);
      goto LAB_001110b0;
    }
  }
  FUN_00116464(uVar2,uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_001110b0:
  return uVar6 & 1;
}



/* Entry: 001110d4; end: 0011150f;  */

uint FUN_001110d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_000ea51c(param_1,auStack_98);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_e0;
  _swift_dynamicCast(puVar2,auStack_98,uVar1,&UNK_009b32c0,6);
  if ((int)puVar2 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_00116514(&uStack_e0,0xaefe28,&UNK_007d9c00);
    unaff_w20 = 0;
  }
  else {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_f0 = uStack_a0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
    uStack_38 = uStack_a8;
    uStack_40 = uStack_b0;
    uStack_30 = uStack_a0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    func_0x00182d7c();
    FUN_00116514(&uStack_130,0xaefe28,&UNK_007d9c00);
  }
  return unaff_w20 & 1;
}



/* Entry: 00111510; end: 00111613;  */

uint FUN_00111510(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  iVar1 = (int)&uStack_e0;
  FUN_000ea51c(param_1,auStack_a8);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_e0,auStack_a8,uVar2,&UNK_009b2678,6);
  if (iVar1 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 1;
    uStack_b8 = 0;
    FUN_00116310(0,0,0,0,1,0);
    unaff_w20 = 0;
  }
  else {
    uStack_80 = uStack_e0;
    uStack_78 = uStack_d8;
    uStack_70 = (undefined1)uStack_d0;
    uStack_6f = (undefined1)((ulong)uStack_d0 >> 8);
    uStack_68 = uStack_c8;
    uStack_60 = uStack_c0;
    uStack_58 = uStack_b8;
    func_0x00182c8c();
    FUN_00116310(uStack_e0,uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
  }
  return unaff_w20 & 1;
}



/* Entry: 00111614; end: 001117a3;  */

uint FUN_00111614(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,&UNK_009b25f0,6);
  lVar7 = lStack_70;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_70 = 1;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar7 = 1;
  }
  else {
    uVar10 = (uint)uStack_80 & 0xff;
    if (*(byte *)(unaff_x20 + 2) == 0xc) {
      if (uVar10 == 0xc) {
LAB_001116e8:
        lVar8 = unaff_x20[4];
        if (lVar8 == 0) {
          if (lStack_70 == 0) goto LAB_00111758;
        }
        else if ((lStack_70 != 0) &&
                (((uVar9 = unaff_x20[3], uVar9 == uStack_78 && (lVar8 == lStack_70)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar9,lVar8,uStack_78,lStack_70,0), (uVar9 & 1) != 0)))) {
LAB_00111758:
          uVar3 = *unaff_x20;
          FUN_00038814(uVar3,unaff_x20[1],uVar2,uVar4);
          uVar10 = (uint)uVar3;
          func_0x00116340(uVar2,uVar4,uVar5,uVar6,lVar7);
          goto LAB_001116bc;
        }
      }
    }
    else if ((uVar10 != 0xc) && (*(byte *)(unaff_x20 + 2) == uVar10)) goto LAB_001116e8;
  }
  func_0x00116340(uVar2,uVar4,uVar5,uVar6,lVar7);
  uVar10 = 0;
LAB_001116bc:
  return uVar10 & 1;
}



/* Entry: 001117a4; end: 001118bf;  */

uint FUN_001117a4(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_000ea51c(param_1,auStack_78);
  uVar4 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar4,param_6,6);
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  lVar3 = lStack_98;
  uVar2 = uStack_a0;
  if (iVar1 == 0) {
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uVar2 = 0;
    lVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else if ((param_2 == uStack_a0 && lStack_98 == param_3) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_2,param_3,uStack_a0,lStack_98,0), (param_2 & 1) != 0)) {
    FUN_00038814(param_4,param_5,uVar4,uVar5);
    uVar6 = (uint)param_4;
    func_0x00116198(uVar2,lVar3,uVar4,uVar5);
    goto LAB_0011188c;
  }
  func_0x00116198(uVar2,lVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_0011188c:
  return uVar6 & 1;
}



/* Entry: 001118c0; end: 00111a0b;  */

uint FUN_001118c0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&uStack_b0;
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_b0,auStack_88,uVar3,param_6,6);
  uVar6 = uStack_98;
  uVar5 = uStack_a0;
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    if (param_5 != uStack_98) {
      _swift_retain(param_5);
      _swift_retain(uVar6);
      uVar2 = param_5;
      (*param_7)(param_5,uVar6);
      _swift_release(uVar6);
      _swift_release(param_5);
      if ((uVar2 & 1) == 0) goto LAB_001119e0;
    }
    FUN_00038814(param_2,param_3,uVar3,uVar4);
    if ((param_2 & 1) != 0) {
      FUN_000e17c0(param_4,uVar5);
      uVar7 = (uint)param_4;
      func_0x00116370(uVar3,uVar4,uVar5,uVar6);
      goto LAB_001119e8;
    }
  }
LAB_001119e0:
  func_0x00116370(uVar3,uVar4,uVar5,uVar6);
  uVar7 = 0;
LAB_001119e8:
  return uVar7 & 1;
}



/* Entry: 00111a0c; end: 00111ae7;  */

uint FUN_00111a0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_000ea51c(param_1,auStack_98);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar2 = &uStack_e0;
  _swift_dynamicCast(puVar2,auStack_98,uVar1,&UNK_009b2790,6);
  if ((int)puVar2 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_00116514(&uStack_e0,0xaefe50,&UNK_007dafc0);
    unaff_w20 = 0;
  }
  else {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_f0 = uStack_a0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
    uStack_38 = uStack_a8;
    uStack_40 = uStack_b0;
    uStack_30 = uStack_a0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    FUN_00178628();
    FUN_00116514(&uStack_130,0xaefe50,&UNK_007dafc0);
  }
  return unaff_w20 & 1;
}



/* Entry: 00111ae8; end: 00111bdb;  */

uint FUN_00111ae8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&dStack_90;
  FUN_000ea51c(param_2,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&dStack_90,auStack_78,uVar2,&UNK_009b5298,6);
  if (iVar1 == 0) {
    dStack_90 = 0.0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_1 == dStack_90) {
    FUN_00038814(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    func_0x0011603c(dStack_90,uStack_88,uStack_80);
    goto LAB_00111bbc;
  }
  func_0x0011603c(dStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_00111bbc:
  return uVar3 & 1;
}



/* Entry: 00111bdc; end: 00111cc3;  */

uint FUN_00111bdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&lStack_80;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&lStack_80,auStack_68,uVar2,param_5,6);
  if (iVar1 == 0) {
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
  }
  else if (param_2 == lStack_80) {
    FUN_00038814(param_3,param_4,uStack_78,uStack_70);
    uVar3 = (uint)param_3;
    (*param_6)(param_2,uStack_78,uStack_70);
    goto LAB_00111ca8;
  }
  (*param_6)(lStack_80,uStack_78,uStack_70);
  uVar3 = 0;
LAB_00111ca8:
  return uVar3 & 1;
}



/* Entry: 00111cc4; end: 00111db7;  */

uint FUN_00111cc4(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,param_5,6);
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_2 == (int)uStack_90) {
    FUN_00038814(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    (*param_6)(uStack_90,uStack_88,uStack_80);
    goto LAB_00111d98;
  }
  (*param_6)(uStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_00111d98:
  return uVar3 & 1;
}



/* Entry: 00111db8; end: 00111eab;  */

uint FUN_00111db8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_2,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,&UNK_009b5318,6);
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_1 == (float)uStack_90) {
    FUN_00038814(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    func_0x0011603c(uStack_90,uStack_88,uStack_80);
    goto LAB_00111e8c;
  }
  func_0x0011603c(uStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_00111e8c:
  return uVar3 & 1;
}



/* Entry: 00111eac; end: 00111f9b;  */

uint FUN_00111eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_000ea51c(param_1,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar2,&UNK_009b2b90,6);
  if (iVar1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_00116294(0,0,0,0);
    uVar3 = 0;
  }
  else {
    FUN_00186180(param_2,param_3,param_4,param_5,uStack_a0,uStack_98,uStack_90,uStack_88);
    uVar3 = (uint)param_2;
    FUN_00116294(uStack_a0,uStack_98,uStack_90,uStack_88);
  }
  return uVar3 & 1;
}



/* Entry: 00111f9c; end: 0011205f;  */

uint FUN_00111f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar2,param_4,6);
  if (iVar1 == 0) {
    uStack_78 = 0xf000000000000000;
    uStack_80 = 0;
    (*param_5)(0,0xf000000000000000);
    uVar3 = 0;
  }
  else {
    FUN_00038814(param_2,param_3,uStack_80,uStack_78);
    uVar3 = (uint)param_2;
    (*param_5)(uStack_80,uStack_78);
  }
  return uVar3 & 1;
}



/* Entry: 00112060; end: 00112177;  */

uint FUN_00112060(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_000ea51c(param_1,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar2,&UNK_009b5698,6);
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  if (iVar1 == 0) {
    uStack_98 = 0xf000000000000000;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    FUN_00038814(param_2,param_3,uStack_a0,uStack_98);
    if ((param_2 & 1) != 0) {
      FUN_00038814(param_4,param_5,uVar4,uVar5);
      uVar6 = (uint)param_4;
      FUN_00115fe4(uVar2,uVar3,uVar4,uVar5);
      goto LAB_00112158;
    }
  }
  FUN_00115fe4(uVar2,uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_00112158:
  return uVar6 & 1;
}



/* Entry: 00112178; end: 00112273;  */

uint FUN_00112178(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  FUN_000ea51c(param_1,auStack_68);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  plVar2 = &lStack_88;
  _swift_dynamicCast(plVar2,auStack_68,uVar1,param_6,6);
  if ((int)plVar2 == 0) {
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
    lVar3 = 0;
  }
  else {
    lVar3 = lStack_88;
    if ((param_2 == lStack_88) && (lVar3 = param_2, param_3 == (int)uStack_80)) {
      FUN_00038814(param_4,param_5);
      uVar4 = (uint)param_4;
      (*param_7)(param_2,uStack_80,uStack_78,uStack_70);
      goto LAB_00112250;
    }
  }
  (*param_7)(lVar3,uStack_80,uStack_78,uStack_70);
  uVar4 = 0;
LAB_00112250:
  return uVar4 & 1;
}



/* Entry: 00112274; end: 0011258b;  */

uint FUN_00112274(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_000ea51c(param_1,auStack_78);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,param_5,6);
  uVar4 = uStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    (*param_6)(param_2,uStack_90);
    if ((param_2 & 1) != 0) {
      FUN_00038814(param_3,param_4,uVar3,uVar4);
      uVar5 = (uint)param_3;
      FUN_00116218(uVar2,uVar3,uVar4);
      goto LAB_0011234c;
    }
  }
  FUN_00116218(uVar2,uVar3,uVar4);
  uVar5 = 0;
LAB_0011234c:
  return uVar5 & 1;
}



/* Entry: 0011258c; end: 0011267f;  */

uint FUN_0011258c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_000ea51c(param_1,auStack_68);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar2,&UNK_009b5598,6);
  if (iVar1 == 0) {
    uStack_80 = 2;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else if ((param_2 & 1) == ((uint)uStack_80 & 1)) {
    FUN_00038814(param_3,param_4,uStack_78,uStack_70);
    uVar3 = (uint)param_3;
    FUN_00116020(uStack_80,uStack_78,uStack_70);
    goto LAB_00112664;
  }
  FUN_00116020(uStack_80,uStack_78,uStack_70);
  uVar3 = 0;
LAB_00112664:
  return uVar3 & 1;
}



/* Entry: 00112680; end: 001127f3;  */

uint FUN_00112680(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  uint unaff_w20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar3 = puVar4;
  _swift_dynamicCast(puVar4,auStack_88,uVar2,param_2,6);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar4,1,1,param_2);
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    unaff_w20 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,param_2);
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,param_2);
    __sSQ2eeoiySbx_xtFZTj();
    (**(code **)(lVar6 + 8))(lVar5,param_2);
  }
  return unaff_w20 & 1;
}



/* Entry: 001127f4; end: 001128c7;  */

uint FUN_001127f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x18))(param_2,param_3,param_4);
  return (uint)param_2 & 1;
}



/* Entry: 001128c8; end: 0011293f;  */

ulong FUN_001128c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  byte *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20) & 0xff;
  if ((char)((ulong)param_7 >> 0x20) == '\x01') {
    if (uVar2 != 1) {
      return 0;
    }
  }
  else {
    if (uVar2 == 1) {
      return 0;
    }
    if ((int)param_7 != (int)param_3) {
      return 0;
    }
  }
  uVar2 = (uint)((ulong)param_4 >> 0x20) & 0xff;
  if ((char)((ulong)param_8 >> 0x20) == '\x01') {
    if (uVar2 != 1) {
      return 0;
    }
  }
  else {
    if (uVar2 == 1) {
      return 0;
    }
    if ((int)param_8 != (int)param_4) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_6 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_5;
  if ((ulong)param_6 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_5 != 0) || (param_6 != (byte *)0xc000000000000000)) || (param_2 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_1 != 0 || (param_2 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_6 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_5 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_2 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar11,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_1)) goto LAB_0003899c;
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (uVar13 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_5;
          abStack_70[1] = (byte)((ulong)param_5 >> 8);
          abStack_70[2] = (byte)((ulong)param_5 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_5 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_5 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_5 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_5 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_5 >> 0x38);
          abStack_70[8] = (byte)param_6;
          abStack_70[9] = (byte)((ulong)param_6 >> 8);
          abStack_70[10] = (byte)((ulong)param_6 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_6 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_6 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_6 >> 0x28);
          param_6 = abStack_70 + ((ulong)param_6 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_5 >> 0x20) - lVar17;
        if (param_5 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_5 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_5 = 0;
        }
        else {
          lVar7 = param_5;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_5 = (lVar17 - lVar7) + param_5;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_5 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_5);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_6 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_5 + 0x10);
        lVar7 = *(long *)(param_5 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_5;
        if (param_5 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_5 = (lVar17 - lVar6) + param_5;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_5 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_5);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_6 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_5,pbVar9,param_1,param_2);
      uVar12 = (ulong)abStack_70[0];
      param_6 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_6 - uVar12;
  if (SBORROW8((long)param_6,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_1 - lVar6;
  if (SBORROW8(param_1,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_6;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_6;
    }
    if (SBORROW8(uVar14,(long)param_6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_1 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_6 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (param_1 < 1) {
    return uVar14;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00112940; end: 00112a5b;  */

ulong FUN_00112940(long *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong *unaff_x20;
  long lVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar11 = param_1[3];
  if (unaff_x20[3] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar13 = unaff_x20[2];
    if ((uVar13 != param_1[2] || unaff_x20[3] != uVar11) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar13 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 4);
  if ((byte)unaff_x20[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)unaff_x20[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar11 = *unaff_x20;
  pbVar8 = (byte *)unaff_x20[1];
  lVar10 = *param_1;
  uVar13 = param_1[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar8 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar13 >> 0x20);
  uVar16 = uVar4 >> 0x1e;
  iVar6 = (int)uVar11;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar15 = 0;
    if ((((uVar11 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar13 >> 0x3e < 3)) ||
       ((uVar15 = 0, lVar10 != 0 || (uVar13 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar15 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar11 >> 0x20);
        if (SBORROW4(iVar14,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar15 = (ulong)(iVar14 - iVar6);
      }
joined_r0x000389b8:
      if (1 < uVar4 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar17 = uVar13 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar15 != (long)(iVar14 - (int)lVar10)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar15 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
        if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (uVar16 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar11 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar17 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar15 != uVar17) {
LAB_0003899c:
        uVar11 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar15) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar11;
          abStack_70[1] = (byte)(uVar11 >> 8);
          abStack_70[2] = (byte)(uVar11 >> 0x10);
          abStack_70[3] = (byte)(uVar11 >> 0x18);
          abStack_70[4] = (byte)(uVar11 >> 0x20);
          abStack_70[5] = (byte)(uVar11 >> 0x28);
          abStack_70[6] = (byte)(uVar11 >> 0x30);
          abStack_70[7] = (byte)(uVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar11 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar6;
        uVar15 = ((long)uVar11 >> 0x20) - lVar18;
        if ((long)uVar11 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar11 = 0;
        }
        else {
          uVar17 = uVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          uVar11 = (lVar18 - uVar17) + uVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar11 != 0) {
            if ((long)uVar15 <= (long)uVar17) {
              uVar17 = uVar15;
            }
            pbVar9 = (byte *)(uVar17 + uVar11);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(uVar11 + 0x10);
        lVar2 = *(long *)(uVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar15 = uVar11;
        if (uVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar15)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          uVar11 = (lVar18 - uVar15) + uVar11;
        }
        uVar17 = lVar2 - lVar18;
        if (SBORROW8(lVar2,lVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar11 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar17 <= (long)uVar15) {
            uVar15 = uVar17;
          }
          pbVar9 = (byte *)(uVar15 + uVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar11,pbVar9,lVar10,uVar13);
      uVar11 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar11 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar18 = (long)pbVar8 - uVar11;
  if (SBORROW8((long)pbVar8,uVar11)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar17 = *unaff_x20;
  uVar15 = uVar17 & 0xffffffffffffff8;
  uVar11 = uVar15 + 0x20 + uVar11 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar11;
  _swift_arrayDestroy(uVar11,lVar18,uVar7);
  lVar2 = lVar10 - lVar18;
  if (SBORROW8(lVar10,lVar18)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar2 != 0) {
    if (uVar17 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
      lVar18 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar15;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar13 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar18 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar11 = uVar11 + lVar10 * 8;
    uVar13 = uVar15 + 0x20 + (long)pbVar8 * 8;
    if (uVar11 != uVar13 || uVar13 + lVar18 * 8 <= uVar11) {
      _memmove(uVar11,uVar13,lVar18 << 3);
    }
    if (uVar17 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar13 = uVar15;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar13 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar13 + lVar2;
  }
  if (lVar10 < 1) {
    return uVar13;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar5)();
}



/* Entry: 00112a5c; end: 00112bfb;  */

uint FUN_00112a5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *unaff_x20;
  uStack_78 = (undefined1)unaff_x20[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)unaff_x20 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 9) >> 0x38);
  uVar11 = *param_1;
  uStack_98 = (undefined1)param_1[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_001160f4(&uStack_80,auStack_c0);
      FUN_001160f4(&uStack_a0,auStack_c0);
      FUN_000f2330(uVar10,uVar2,uVar3,0xff);
LAB_00112bcc:
      uVar9 = unaff_x20[4];
      FUN_00038814(uVar9,unaff_x20[5],param_1[4],param_1[5]);
      uVar7 = (uint)uVar9;
      goto LAB_00112bd8;
    }
LAB_00112b14:
    FUN_001160f4(&uStack_80,auStack_c0);
    FUN_001160f4(&uStack_a0,auStack_c0);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_00112b14;
    FUN_001160f4(&uStack_80,auStack_c0);
    FUN_001160f4(&uStack_a0,auStack_c0);
    uVar8 = uVar10;
    FUN_0019ac28(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_00112bcc;
  }
  uVar7 = 0;
LAB_00112bd8:
  return uVar7 & 1;
}



/* Entry: 00112bfc; end: 00112c37;  */

uint FUN_00112bfc(void)

{
  uint unaff_w20;
  
  __sSQ2eeoiySbx_xtFZTj();
  return unaff_w20 & 1;
}



/* Entry: 00112c38; end: 00112c4b;  */

undefined8 FUN_00112c38(void)

{
  return 1;
}



/* Entry: 00112c4c; end: 00112cbb;  */

ulong FUN_00112c4c(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  if ((unaff_x20[2] != uVar9) && (FUN_000c46a8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar9 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar9 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar9 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar9 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar9 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar9 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar9 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar9 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar9 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar9) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar9 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar9 <= (long)uVar16) {
              uVar16 = uVar9;
            }
            pbVar11 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar9 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar9)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar9) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar9) {
            uVar9 = uVar16;
          }
          pbVar11 = (byte *)(uVar9 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar9 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar9 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar9;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar9 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00112cbc; end: 00112cc3;  */

undefined8 FUN_00112cbc(void)

{
  return 1;
}



/* Entry: 00112cc4; end: 00112d6b;  */

/* WARNING: Removing unreachable block (ram,0x00112d38) */

void FUN_00112cc4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_40 = unaff_x20[0x10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_d0 = param_1[8];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  FUN_001423ec(&uStack_110);
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = uStack_d0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}



/* Entry: 00112d6c; end: 00112dbf;  */

uint FUN_00112d6c(uint param_1)

{
  func_0x0010fcb8();
  return param_1 & 1;
}



/* Entry: 00112dc0; end: 00112e3f;  */

uint FUN_00112dc0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_c0;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_001444c4(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 00112e40; end: 00112e47;  */

undefined8 FUN_00112e40(void)

{
  return 1;
}



/* Entry: 00112e48; end: 00112eeb;  */

/* WARNING: Removing unreachable block (ram,0x00112eb8) */

void FUN_00112e48(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_40 = unaff_x20[0xe];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_001430f8(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 00112eec; end: 00112f3f;  */

uint FUN_00112eec(uint param_1)

{
  FUN_0010f688();
  return param_1 & 1;
}



/* Entry: 00112f40; end: 00112fbf;  */

uint FUN_00112f40(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  func_0x00144388(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 00112fc0; end: 00112fc7;  */

undefined8 FUN_00112fc0(void)

{
  return 1;
}



/* Entry: 00112fc8; end: 0011304f;  */

/* WARNING: Removing unreachable block (ram,0x0011301c) */

void FUN_00112fc8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_00143be0(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 00113050; end: 001130d7;  */

uint FUN_00113050(uint param_1)

{
  func_0x0010f87c();
  return param_1 & 1;
}



/* Entry: 001130d8; end: 001130e3;  */

/* WARNING: Removing unreachable block (ram,0x0014cda4) */
/* WARNING: Removing unreachable block (ram,0x0014ce1c) */

void FUN_001130d8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_2e8 [200];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined1 uStack_70;
  
  lVar5 = *unaff_x20;
  lVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  lVar6 = unaff_x20[3];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_140 = param_1[8];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  lVar8 = *(long *)(lVar5 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    uStack_1a8 = uStack_158;
    uStack_1b0 = uStack_160;
    uStack_198 = uStack_148;
    uStack_1a0 = uStack_150;
    uStack_190 = uStack_140;
    uStack_1c8 = uStack_178;
    uStack_1d0 = uStack_180;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    puVar7 = (undefined8 *)(lVar5 + 0x20);
    while( true ) {
      lVar8 = lVar8 + -1;
      uStack_88 = puVar7[0x15];
      uStack_90 = puVar7[0x14];
      uStack_78 = puVar7[0x17];
      uStack_80 = puVar7[0x16];
      uStack_70 = *(undefined1 *)(puVar7 + 0x18);
      uStack_c8 = puVar7[0xd];
      uStack_d0 = puVar7[0xc];
      uStack_b8 = puVar7[0xf];
      uStack_c0 = puVar7[0xe];
      uStack_a8 = puVar7[0x11];
      uStack_b0 = puVar7[0x10];
      uStack_98 = puVar7[0x13];
      uStack_a0 = puVar7[0x12];
      uStack_108 = puVar7[5];
      uStack_110 = puVar7[4];
      uStack_f8 = puVar7[7];
      uStack_100 = puVar7[6];
      uStack_e8 = puVar7[9];
      uStack_f0 = puVar7[8];
      uStack_d8 = puVar7[0xb];
      uStack_e0 = puVar7[10];
      uStack_128 = puVar7[1];
      uStack_130 = *puVar7;
      uStack_118 = puVar7[3];
      uStack_120 = puVar7[2];
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      uStack_1e0 = uStack_190;
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      FUN_00191df8(&uStack_130,auStack_2e8);
      FUN_00163d2c(&uStack_220);
      func_0x00191e2c(&uStack_130);
      if (lVar8 == 0) break;
      uStack_1a8 = uStack_1f8;
      uStack_1b0 = uStack_200;
      uStack_198 = uStack_1e8;
      uStack_1a0 = uStack_1f0;
      uStack_190 = uStack_1e0;
      uStack_1c8 = uStack_218;
      uStack_1d0 = uStack_220;
      uStack_1b8 = uStack_208;
      uStack_1c0 = uStack_210;
      puVar7 = puVar7 + 0x19;
    }
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_140 = uStack_1e0;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
  }
  FUN_0013bd14(&uStack_180,536000000,0x1ff2b601,lVar6);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar2;
      lVar6 = lVar2 >> 0x20;
      goto LAB_0014ce90;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_0014ce24;
  }
  else {
    if (uVar4 != 2) goto LAB_0014ce24;
    lVar5 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)(lVar2 + 0x18);
LAB_0014ce90:
    if (lVar5 == lVar6) goto LAB_0014ce24;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,lVar2,uVar1);
LAB_0014ce24:
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[8] = uStack_140;
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  return;
}



/* Entry: 001130e4; end: 00113113;  */

uint FUN_001130e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00110fb4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b17f8,FUN_001496e0)
  ;
  return (uint)param_1 & 1;
}



/* Entry: 00113114; end: 0011311f;  */

void FUN_00113114(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  (*(code *)0x1844b8)(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],*param_1,param_1[1],
                      param_1[2],param_1[3]);
  return;
}



/* Entry: 00113120; end: 001131d7;  */

/* WARNING: Removing unreachable block (ram,0x001131a4) */

void FUN_00113120(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined1 uStack_40;
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_110 = param_1[8];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  FUN_00163d2c(&uStack_150);
  param_1[5] = uStack_128;
  param_1[4] = uStack_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  param_1[8] = uStack_110;
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = uStack_138;
  param_1[2] = uStack_140;
  return;
}



/* Entry: 001131d8; end: 0011323b;  */

uint FUN_001131d8(uint param_1)

{
  FUN_00110788();
  return param_1 & 1;
}



/* Entry: 0011323c; end: 001132db;  */

uint FUN_0011323c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_100;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = *(undefined1 *)(param_1 + 0x18);
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  func_0x00183ea4(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 001132dc; end: 001132e7;  */

/* WARNING: Removing unreachable block (ram,0x00114c10) */

void FUN_001132dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_001656a0(unaff_x20[2],&uStack_90);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 001132e8; end: 00113317;  */

uint FUN_001132e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001108e8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b1938,FUN_00166030);
  return (uint)param_1 & 1;
}



/* Entry: 00113318; end: 00113323;  */

ulong FUN_00113318(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar18 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar18) {
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    uVar9 = uVar16;
    FUN_00166030(uVar16,uVar18);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar18 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar18) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar11 = (byte *)(uVar18 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
        }
        uVar18 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar16 = uVar18 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00113324; end: 001133c3;  */

/* WARNING: Removing unreachable block (ram,0x00113390) */

void FUN_00113324(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_00166d20(&uStack_f0);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[8] = uStack_b0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 001133c4; end: 0011340f;  */

uint FUN_001133c4(uint param_1)

{
  FUN_00110d44();
  return param_1 & 1;
}



/* Entry: 00113410; end: 00113477;  */

uint FUN_00113410(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_30 = param_1[10];
  uStack_28 = (undefined1)param_1[0xb];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_8f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_a0 = unaff_x20[10];
  uStack_98 = (undefined1)unaff_x20[0xb];
  uStack_97 = (undefined7)((ulong)unaff_x20[0xb] >> 8);
  FUN_00185278(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 00113478; end: 001134a3;  */

undefined8 FUN_00113478(void)

{
  return 1;
}



/* Entry: 001134a4; end: 0011353b;  */

/* WARNING: Removing unreachable block (ram,0x00113508) */

void FUN_001134a4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[7];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_00167ca0(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 0011353c; end: 0011357f;  */

uint FUN_0011353c(uint param_1)

{
  FUN_00110108();
  return param_1 & 1;
}



/* Entry: 00113580; end: 001135d7;  */

uint FUN_00113580(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = param_1[6];
  uStack_28 = (undefined1)param_1[7];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_80 = unaff_x20[6];
  uStack_78 = (undefined1)unaff_x20[7];
  uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00184f8c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 001135d8; end: 001135df;  */

undefined8 FUN_001135d8(void)

{
  return 1;
}



/* Entry: 001135e0; end: 0011366f;  */

/* WARNING: Removing unreachable block (ram,0x0011363c) */

void FUN_001135e0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined2)unaff_x20[5];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  FUN_00168aac(&uStack_c0);
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 00113670; end: 001136b3;  */

uint FUN_00113670(uint param_1)

{
  func_0x001101e8();
  return param_1 & 1;
}



/* Entry: 001136b4; end: 0011370b;  */

uint FUN_001136b4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_30 = param_1[4];
  uStack_28 = (undefined2)param_1[5];
  uStack_1e = *(undefined8 *)((long)param_1 + 0x32);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_1 + 0x2a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x2a) >> 0x30);
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_70 = unaff_x20[4];
  uStack_68 = (undefined2)unaff_x20[5];
  uStack_5e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_66 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  func_0x00183294(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0011370c; end: 001137b7;  */

/* WARNING: Removing unreachable block (ram,0x00113784) */

void FUN_0011370c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_e0 = param_1[8];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  FUN_001696a0(&uStack_120);
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = uStack_e0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  return;
}



/* Entry: 001137b8; end: 00113813;  */

uint FUN_001137b8(uint param_1)

{
  func_0x001103b8();
  return param_1 & 1;
}



/* Entry: 00113814; end: 001138a3;  */

uint FUN_00113814(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = *(undefined1 *)(param_1 + 0x12);
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  func_0x00184aa8(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 001138a4; end: 00113927;  */

void FUN_001138a4(void)

{
  FUN_0014d6d4();
  return;
}



/* Entry: 00113928; end: 0011397f;  */

uint FUN_00113928(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_00183404(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 00113980; end: 0011398b;  */

/* WARNING: Removing unreachable block (ram,0x00114c10) */

void FUN_00113980(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_0016b7b0(unaff_x20[2],&uStack_90);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0011398c; end: 001139bb;  */

uint FUN_0011398c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001108e8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b1ec8,FUN_0016bd9c);
  return (uint)param_1 & 1;
}



/* Entry: 001139bc; end: 00113a13;  */

ulong FUN_001139bc(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar18 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar18) {
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    uVar9 = uVar16;
    FUN_0016bd9c(uVar16,uVar18);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar18 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar18) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar11 = (byte *)(uVar18 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
        }
        uVar18 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar16 = uVar18 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00113a14; end: 00113aa3;  */

uint FUN_00113a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *unaff_x20;
  
  FUN_00110e44(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint5 *)(unaff_x20 + 2),
               (ulong)*(uint5 *)(unaff_x20 + 3),param_4,param_5);
  return (uint)param_1 & 1;
}



/* Entry: 00113aa4; end: 00113aaf;  */

/* WARNING: Removing unreachable block (ram,0x00114c10) */

void FUN_00113aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_0016d308(unaff_x20[2],&uStack_90);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00113ab0; end: 00113adf;  */

uint FUN_00113ab0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001108e8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b1fd0,FUN_0016d72c);
  return (uint)param_1 & 1;
}



/* Entry: 00113ae0; end: 00113aeb;  */

ulong FUN_00113ae0(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar18 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar18) {
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    uVar9 = uVar16;
    FUN_0016d72c(uVar16,uVar18);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar18 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar18) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar11 = (byte *)(uVar18 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
        }
        uVar18 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar16 = uVar18 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00113aec; end: 00113b8b;  */

/* WARNING: Removing unreachable block (ram,0x00113b58) */

void FUN_00113aec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_0016e154(&uStack_f0);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[8] = uStack_b0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 00113b8c; end: 00113bd7;  */

uint FUN_00113b8c(uint param_1)

{
  FUN_0010fed8();
  return param_1 & 1;
}



/* Entry: 00113bd8; end: 00113c3f;  */

uint FUN_00113bd8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_30 = param_1[10];
  uStack_28 = (undefined1)param_1[0xb];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_8f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_a0 = unaff_x20[10];
  uStack_98 = (undefined1)unaff_x20[0xb];
  uStack_97 = (undefined7)((ulong)unaff_x20[0xb] >> 8);
  FUN_00183aec(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 00113c40; end: 00113ce7;  */

/* WARNING: Removing unreachable block (ram,0x00113cb4) */

void FUN_00113c40(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_50 = unaff_x20[0xe];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_48 = (undefined2)unaff_x20[0xf];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_d0 = param_1[8];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  FUN_0016edec(&uStack_110);
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = uStack_d0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}



/* Entry: 00113ce8; end: 00113d3b;  */

uint FUN_00113ce8(uint param_1)

{
  FUN_0010ffc8();
  return param_1 & 1;
}



/* Entry: 00113d3c; end: 00113dbf;  */

uint FUN_00113d3c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_40 = param_1[0xe];
  uStack_38 = (undefined2)param_1[0xf];
  uStack_2e = *(undefined8 *)((long)param_1 + 0x82);
  uStack_36 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_d0 = unaff_x20[0xe];
  uStack_c8 = (undefined2)unaff_x20[0xf];
  uStack_be = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  func_0x00183720(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 00113dc0; end: 00113dcb;  */

/* WARNING: Removing unreachable block (ram,0x00113fb0) */

void FUN_00113dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_001705dc(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00113dcc; end: 00113dfb;  */

uint FUN_00113dcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001118c0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b2170,FUN_00171a74)
  ;
  return (uint)param_1 & 1;
}



/* Entry: 00113dfc; end: 00113e07;  */

bool FUN_00113dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    FUN_00171a74(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_000e1304(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (FUN_000e1d94(lVar8), (uVar13 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar7;
    }
    FUN_000e1304(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    FUN_0001393c(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    FUN_0001393c(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_000e2ecc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 00113e08; end: 00113e97;  */

/* WARNING: Removing unreachable block (ram,0x00113e64) */

void FUN_00113e08(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_00172ac0(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}


