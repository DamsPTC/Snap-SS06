/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10474c140; end: 10474c2d7;  */

uint FUN_10474c140(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00010474c198(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10474c2d8; end: 10474c2db;  */

void FUN_10474c2d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32f80;
  _swift_getWitnessTable(&UNK_10dd32f80,&UNK_11079f2f8);
  puRam000000011308e788 = puVar1;
  return;
}



/* Entry: 10474c2dc; end: 10474c31b;  */

void FUN_10474c2dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32f80;
  _swift_getWitnessTable(&UNK_10dd32f80,&UNK_11079f2f8);
  puRam000000011308e788 = puVar1;
  return;
}



/* Entry: 10474c31c; end: 10474c3d3;  */

long FUN_10474c31c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474c3d4; end: 10474c467;  */

undefined8 * FUN_10474c3d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474c468; end: 10474c4db;  */

undefined8 * FUN_10474c468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474c4dc; end: 10474c583;  */

int FUN_10474c4dc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474c584; end: 10474c65b;  */

void FUN_10474c584(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar11 = unaff_x20[2];
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 7);
  uVar5 = *(undefined8 *)*pauVar1;
  auVar8 = *pauVar1;
  auVar12 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 5);
  uVar6 = *(undefined8 *)*pauVar1;
  auVar14 = *pauVar1;
  auVar13 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 3);
  uVar7 = *(undefined8 *)*pauVar1;
  auVar10 = *pauVar1;
  auVar9 = *pauVar1;
  uVar4 = *(undefined2 *)(unaff_x20 + 9);
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  if ((long)uVar11 < 0) {
    auVar12 = NEON_ext(auVar12,auVar8,8,1);
    auVar13 = NEON_ext(auVar13,auVar14,8,1);
    auVar14 = NEON_ext(auVar9,auVar10,8,1);
    uStack_80 = uVar11 & 0x7fffffffffffffff;
    uStack_70 = auVar14._0_8_;
    uStack_60 = auVar13._0_8_;
    uStack_50 = auVar12._0_8_;
    uStack_90 = uVar2;
    uStack_88 = uVar3;
    uStack_78 = uVar7;
    uStack_68 = uVar6;
    uStack_58 = uVar5;
    uStack_48 = uVar4;
    __ss6HasherV8_combineyySuF(1);
    FUN_10474b174(auStack_d8);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    func_0x0001046dacdc(auStack_d8,uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474c65c; end: 10474c703;  */

void FUN_10474c65c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar10 = *unaff_x20;
  if (unaff_x20[2] < 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_10474b174(param_1);
    return;
  }
  __ss6HasherV8_combineyySuF(0);
  lVar7 = *(long *)(lVar10 + 0x10);
  __ss6HasherV8_combineyySuF(lVar7);
  if (lVar7 != 0) {
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar13 * 0x20);
      uVar11 = puVar1[2];
      lVar2 = puVar1[3];
      uVar12 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(lVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar3);
      __ss6HasherV8_combineyySuF(uVar11);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + 0x10));
      lVar8 = *(long *)(lVar2 + 0x10);
      if (lVar8 != 0) {
        puVar9 = (undefined1 *)(lVar2 + 0x32);
        do {
          uVar11 = *(undefined8 *)(puVar9 + -0x12);
          uVar12 = *(undefined8 *)(puVar9 + -10);
          uVar5 = puVar9[-2];
          uVar6 = puVar9[-1];
          uVar4 = *puVar9;
          _swift_bridgeObjectRetain(uVar12);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar12);
          __ss6HasherV8_combineyys5UInt8VF(uVar5);
          __ss6HasherV8_combineyys5UInt8VF(uVar6);
          __ss6HasherV8_combineyys5UInt8VF(uVar4);
          _swift_bridgeObjectRelease(uVar12);
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 0x18;
        } while (lVar8 != 0);
      }
      lVar13 = lVar13 + 1;
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(uVar3);
    } while (lVar13 != lVar7);
  }
  return;
}



/* Entry: 10474c704; end: 10474c7d7;  */

void FUN_10474c704(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar11 = unaff_x20[2];
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 7);
  uVar5 = *(undefined8 *)*pauVar1;
  auVar8 = *pauVar1;
  auVar12 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 5);
  uVar6 = *(undefined8 *)*pauVar1;
  auVar14 = *pauVar1;
  auVar13 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 3);
  uVar7 = *(undefined8 *)*pauVar1;
  auVar10 = *pauVar1;
  auVar9 = *pauVar1;
  uVar4 = *(undefined2 *)(unaff_x20 + 9);
  __ss6HasherV5_seedABSi_tcfC(auStack_d8);
  if ((long)uVar11 < 0) {
    auVar12 = NEON_ext(auVar12,auVar8,8,1);
    auVar13 = NEON_ext(auVar13,auVar14,8,1);
    auVar14 = NEON_ext(auVar9,auVar10,8,1);
    uStack_80 = uVar11 & 0x7fffffffffffffff;
    uStack_70 = auVar14._0_8_;
    uStack_60 = auVar13._0_8_;
    uStack_50 = auVar12._0_8_;
    uStack_90 = uVar2;
    uStack_88 = uVar3;
    uStack_78 = uVar7;
    uStack_68 = uVar6;
    uStack_58 = uVar5;
    uStack_48 = uVar4;
    __ss6HasherV8_combineyySuF(1);
    FUN_10474b174(auStack_d8);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    func_0x0001046dacdc(auStack_d8,uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474c7d8; end: 10474c82f;  */

uint FUN_10474c7d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined8 uStack_60;
  undefined8 uStack_58;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined2)param_1[7];
  uStack_6e = *(undefined8 *)((long)param_1 + 0x42);
  uStack_76 = (undefined6)*(undefined8 *)((long)param_1 + 0x3a);
  uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x3a) >> 0x30);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined2)param_2[7];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x42);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x3a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x3a) >> 0x30);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10474c830(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10474c830; end: 10474c9b3;  */

undefined8 FUN_10474c830(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  byte abStack_d0 [8];
  ulong uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  byte bStack_af;
  byte abStack_a8 [8];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  
  uVar16 = *param_1;
  uVar19 = param_1[2];
  if ((long)uVar19 < 0) {
    uVar20 = param_2[2];
    if ((long)uVar20 < 0) {
      dVar26 = (double)param_1[3];
      dVar25 = (double)param_1[4];
      uVar12 = param_1[5];
      uVar2 = param_1[6];
      uVar4 = param_1[7];
      uVar18 = param_1[8];
      uVar13 = param_1[9];
      dVar28 = (double)param_2[3];
      dVar27 = (double)param_2[4];
      bVar6 = (byte)param_2[5];
      uVar3 = param_2[6];
      uVar5 = param_2[7];
      uVar22 = param_2[8];
      uVar14 = param_2[9];
      if (((((uVar16 == *param_2) && (param_1[1] == param_2[1])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,param_1[1],*param_2,param_2[1],0), (uVar16 & 1) != 0)) &&
          (((((uint)uVar19 ^ (uint)uVar20) & 1) == 0 && (dVar26 == dVar28)))) && (dVar25 == dVar27))
      {
        if ((byte)uVar12 == 2) {
          if (bVar6 == 2) {
            return 1;
          }
        }
        else if (bVar6 != 2) {
          abStack_a8[0] = bVar6 & 1;
          lStack_98 = CONCAT71(lStack_98._1_7_,(char)uVar5);
          uStack_88 = CONCAT62(uStack_88._2_6_,(short)uVar14) & 0xffffffffffff01ff;
          abStack_d0[0] = (byte)uVar12 & 1;
          uStack_c0 = (undefined1)uVar4;
          uStack_b0 = (undefined1)(short)uVar13;
          bStack_af = (byte)((ushort)(short)uVar13 >> 8) & 1;
          pbVar17 = abStack_d0;
          uStack_c8 = uVar2;
          uStack_b8 = uVar18;
          uStack_a0 = uVar3;
          uStack_90 = uVar22;
          FUN_10474a550(pbVar17,abStack_a8);
          if (((ulong)pbVar17 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  else if (-1 < (long)param_2[2]) {
    uStack_90 = *param_2;
    lStack_98 = *(long *)(uVar16 + 0x10);
    if (lStack_98 == *(long *)(uStack_90 + 0x10)) {
      if ((lStack_98 == 0) || (uVar16 == uStack_90)) {
        uVar15 = 1;
      }
      else {
        lVar21 = 0;
        uStack_88 = uVar16 + 0x20;
        uStack_90 = uStack_90 + 0x20;
        do {
          puVar1 = (ulong *)(uStack_88 + lVar21 * 0x20);
          uVar16 = *puVar1;
          uVar2 = puVar1[1];
          uVar19 = puVar1[2];
          uVar3 = puVar1[3];
          puVar1 = (ulong *)(uStack_90 + lVar21 * 0x20);
          uVar4 = puVar1[1];
          uVar20 = puVar1[2];
          uVar5 = puVar1[3];
          if ((uVar16 != *puVar1 || uVar2 != uVar4) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar16,uVar2,*puVar1,uVar4,0), (uVar16 & 1) == 0)) goto LAB_10470adb4;
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          if (((int)uVar19 != (int)uVar20) ||
             (lVar24 = *(long *)(uVar3 + 0x10), lVar24 != *(long *)(uVar5 + 0x10))) {
LAB_10470ad94:
            _swift_bridgeObjectRelease(uVar3);
            _swift_bridgeObjectRelease(uVar2);
            _swift_bridgeObjectRelease(uVar5);
            _swift_bridgeObjectRelease(uVar4);
            goto LAB_10470adb4;
          }
          if (lVar24 != 0 && uVar3 != uVar5) {
            pbVar17 = (byte *)(uVar5 + 0x32);
            pbVar23 = (byte *)(uVar3 + 0x32);
            do {
              uVar16 = *(ulong *)(pbVar23 + -0x12);
              bVar8 = pbVar23[-2];
              bVar9 = pbVar23[-1];
              bVar6 = *pbVar23;
              bVar10 = pbVar17[-2];
              bVar11 = pbVar17[-1];
              bVar7 = *pbVar17;
              if (uVar16 == *(ulong *)(pbVar17 + -0x12) &&
                  *(long *)(pbVar23 + -10) == *(long *)(pbVar17 + -10)) {
                if (bVar8 != bVar10) goto LAB_10470ad94;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                if (((uVar16 & 1) == 0) || (((bVar8 ^ bVar10) & 1) != 0)) goto LAB_10470ad94;
              }
              if ((((bVar9 ^ bVar11) & 1) != 0) || (((bVar6 ^ bVar7) & 1) != 0)) goto LAB_10470ad94;
              pbVar23 = pbVar23 + 0x18;
              pbVar17 = pbVar17 + 0x18;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          lVar21 = lVar21 + 1;
          _swift_bridgeObjectRelease(uVar5);
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar3);
          _swift_bridgeObjectRelease(uVar2);
          uVar15 = 1;
        } while (lVar21 != lStack_98);
      }
    }
    else {
LAB_10470adb4:
      uVar15 = 0;
    }
    return uVar15;
  }
  return 0;
}



/* Entry: 10474c9b4; end: 10474c9b7;  */

void FUN_10474c9b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33008;
  _swift_getWitnessTable(&UNK_10dd33008,&UNK_11079f3d8);
  puRam000000011308e790 = puVar1;
  return;
}



/* Entry: 10474c9b8; end: 10474c9f7;  */

void FUN_10474c9b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33008;
  _swift_getWitnessTable(&UNK_10dd33008,&UNK_11079f3d8);
  puRam000000011308e790 = puVar1;
  return;
}



/* Entry: 10474c9f8; end: 10474ca23;  */

long FUN_10474c9f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474ca24; end: 10474ca2f;  */

void FUN_10474ca24(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (-1 < param_3) {
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10474ca30; end: 10474ca6f;  */

void FUN_10474ca30(undefined8 *param_1)

{
  FUN_10474ca70(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],*(undefined2 *)(param_1 + 9));
  return;
}



/* Entry: 10474ca70; end: 10474ca7b;  */

void FUN_10474ca70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (-1 < param_3) {
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10474ca7c; end: 10474cbf7;  */

undefined8 * FUN_10474ca7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar10 = param_2[8];
  uVar9 = *(undefined2 *)(param_2 + 9);
  FUN_10474ca24(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  param_1[8] = uVar10;
  *(undefined2 *)(param_1 + 9) = uVar9;
  return param_1;
}



/* Entry: 10474cbf8; end: 10474cc67;  */

undefined8 * FUN_10474cbf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = param_2[8];
  uVar9 = *(undefined2 *)(param_2 + 9);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar10 = *(undefined2 *)(param_1 + 9);
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
  param_1[8] = uVar12;
  *(undefined2 *)(param_1 + 9) = uVar9;
  FUN_10474ca70(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 10474cc68; end: 10474cd67;  */

int FUN_10474cc68(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x4a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 10474cd68; end: 10474ce67;  */

undefined8
FUN_10474cd68(long param_1,double param_2,char param_3,long param_4,double param_5,char param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_4 + 0x10)) {
    if (lVar2 != 0 && param_1 != param_4) {
      puVar3 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_c8 = puVar3[5];
        uStack_d0 = puVar3[4];
        uStack_b8 = puVar3[7];
        uStack_c0 = puVar3[6];
        uStack_b0 = puVar3[8];
        uStack_e8 = puVar3[1];
        uStack_f0 = *puVar3;
        uStack_d8 = puVar3[3];
        uStack_e0 = puVar3[2];
        uStack_78 = puVar4[5];
        uStack_80 = puVar4[4];
        uStack_68 = puVar4[7];
        uStack_70 = puVar4[6];
        uStack_60 = puVar4[8];
        uStack_98 = puVar4[1];
        uStack_a0 = *puVar4;
        uStack_88 = puVar4[3];
        uStack_90 = puVar4[2];
        uVar1 = 0;
        func_0x00010474c198(&uStack_f0,&uStack_a0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 9;
        puVar3 = puVar3 + 9;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 == '\x01') {
      if (param_6 == '\x01') {
        return 1;
      }
    }
    else if ((param_6 != '\x01') && (param_2 == param_5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10474ce68; end: 10474ceeb;  */

void FUN_10474ce68(undefined8 param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046dc0b8(auStack_78,param_1);
  if (param_3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474ceec; end: 10474cef7;  */

void FUN_10474ceec(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  cVar4 = *(char *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046dc0b8(auStack_78,uVar2);
  if (cVar4 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474cef8; end: 10474cfd7;  */

void FUN_10474cef8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 *unaff_x20;
  
  uVar2 = unaff_x20[1];
  cVar3 = *(char *)(unaff_x20 + 2);
  func_0x0001046dc0b8(param_1,*unaff_x20);
  if (cVar3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 10474cfd8; end: 10474d047;  */

undefined8 FUN_10474cfd8(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  uVar5 = *param_1;
  dVar6 = (double)param_1[1];
  uVar2 = param_1[2];
  dVar7 = (double)param_2[1];
  cVar1 = *(char *)(param_2 + 2);
  FUN_10470b920(uVar5,*param_2);
  if ((uVar5 & 1) == 0) {
LAB_10474d034:
    uVar4 = 0;
  }
  else {
    if ((char)uVar2 == '\x01') {
      if (cVar1 != '\x01') goto LAB_10474d034;
    }
    else {
      bVar3 = false;
      if ((cVar1 != '\x01') && (bVar3 = false, !NAN(dVar6) && !NAN(dVar7))) {
        bVar3 = dVar6 == dVar7;
      }
      if (!bVar3) goto LAB_10474d034;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10474d048; end: 10474d04b;  */

void FUN_10474d048(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33080;
  _swift_getWitnessTable(&UNK_10dd33080,&UNK_11079f488);
  puRam000000011308e798 = puVar1;
  return;
}



/* Entry: 10474d04c; end: 10474d08b;  */

void FUN_10474d04c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33080;
  _swift_getWitnessTable(&UNK_10dd33080,&UNK_11079f488);
  puRam000000011308e798 = puVar1;
  return;
}



/* Entry: 10474d08c; end: 10474d093;  */

void FUN_10474d08c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10474d094; end: 10474d0e7;  */

undefined8 * FUN_10474d094(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 10474d0e8; end: 10474d12b;  */

undefined8 * FUN_10474d0e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10474d12c; end: 10474d1cb;  */

int FUN_10474d12c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474d1cc; end: 10474d36f;  */

void FUN_10474d1cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474d370; end: 10474d3b7;  */

uint FUN_10474d370(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_10474d3b8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10474d3b8; end: 10474d447;  */

bool FUN_10474d3b8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 == 0) goto LAB_10474d420;
    }
    else if ((uVar1 != 0) &&
            ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == uVar1 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
LAB_10474d420:
      return param_1[4] == param_2[4];
    }
  }
  return false;
}



/* Entry: 10474d448; end: 10474d44b;  */

void FUN_10474d448(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33104;
  _swift_getWitnessTable(&UNK_10dd33104,&UNK_11079f540);
  puRam000000011308e7a0 = puVar1;
  return;
}



/* Entry: 10474d44c; end: 10474d48b;  */

void FUN_10474d44c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33104;
  _swift_getWitnessTable(&UNK_10dd33104,&UNK_11079f540);
  puRam000000011308e7a0 = puVar1;
  return;
}



/* Entry: 10474d48c; end: 10474d523;  */

long FUN_10474d48c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474d524; end: 10474d597;  */

undefined8 * FUN_10474d524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10474d598; end: 10474d5e3;  */

undefined8 * FUN_10474d598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10474d5e4; end: 10474d683;  */

int FUN_10474d5e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474d684; end: 10474d723;  */

void FUN_10474d684(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,param_1,param_2);
  }
  if (param_3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(auStack_78,param_3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474d724; end: 10474d72f;  */

void FUN_10474d724(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,lVar2);
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(auStack_78,lVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474d730; end: 10474d7cb;  */

void FUN_10474d730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar4 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar4);
  }
  if (lVar3 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar4 = *(long *)(lVar3 + 0x10);
    __ss6HasherV8_combineyySuF(lVar4);
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 0x40);
      do {
        uVar6 = puVar7[-4];
        uVar2 = puVar7[-3];
        uVar1 = puVar7[-2];
        lVar3 = puVar7[-1];
        uVar5 = *puVar7;
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(uVar2);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar2);
        if (lVar3 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
        }
        puVar7 = puVar7 + 5;
        __ss6HasherV8_combineyySuF(uVar5);
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(uVar2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474d7cc; end: 10474d863;  */

void FUN_10474d7cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,lVar2);
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(auStack_78,lVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474d864; end: 10474d87f;  */

undefined8 FUN_10474d864(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (((uVar3 != *param_2) || (uVar1 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar1,*param_2,uVar2,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar4 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) && (FUN_10470d174(uVar4,uVar5), (uVar4 & 1) != 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10474d880; end: 10474d903;  */

undefined8
FUN_10474d880(ulong param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  if (param_2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if ((param_6 != 0) && (FUN_10470d174(param_3,param_6), (param_3 & 1) != 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10474d904; end: 10474d907;  */

void FUN_10474d904(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3317c;
  _swift_getWitnessTable(&UNK_10dd3317c,&UNK_11079f600);
  puRam000000011308e7a8 = puVar1;
  return;
}



/* Entry: 10474d908; end: 10474d947;  */

void FUN_10474d908(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3317c;
  _swift_getWitnessTable(&UNK_10dd3317c,&UNK_11079f600);
  puRam000000011308e7a8 = puVar1;
  return;
}



/* Entry: 10474d948; end: 10474d9ab;  */

void FUN_10474d948(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10474d9ac; end: 10474da0f;  */

undefined8 * FUN_10474d9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474da10; end: 10474da53;  */

undefined8 * FUN_10474da10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474da54; end: 10474db1b;  */

int FUN_10474da54(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10474db1c; end: 10474db9f;  */

void FUN_10474db1c(double param_1,long param_2)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046db864(auStack_78,param_2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474dba0; end: 10474dbab;  */

void FUN_10474dba0(void)

{
  double dVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  dVar3 = *unaff_x20;
  dVar1 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (dVar1 == 0.0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046db864(auStack_78,dVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474dbac; end: 10474dc0f;  */

void FUN_10474dbac(void)

{
  long lVar1;
  double dVar2;
  double *unaff_x20;
  double *pdVar3;
  double dVar4;
  
  dVar2 = unaff_x20[1];
  dVar4 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar4 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  if (dVar2 != 0.0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar1 = *(long *)((long)dVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar1);
    if (lVar1 != 0) {
      pdVar3 = (double *)((long)dVar2 + 0x28);
      do {
        dVar2 = *pdVar3;
        dVar4 = 0.0;
        if (pdVar3[-1] != 0.0) {
          dVar4 = pdVar3[-1];
        }
        __ss6HasherV8_combineyys6UInt64VF(dVar4);
        dVar4 = 0.0;
        if (dVar2 != 0.0) {
          dVar4 = dVar2;
        }
        __ss6HasherV8_combineyys6UInt64VF(dVar4);
        pdVar3 = pdVar3 + 2;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474dc10; end: 10474dc8f;  */

void FUN_10474dc10(void)

{
  double dVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  dVar3 = *unaff_x20;
  dVar1 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (dVar1 == 0.0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046db864(auStack_78,dVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474dc90; end: 10474dd1b;  */

undefined8 FUN_10474dc90(double *param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  
  dVar2 = param_1[1];
  dVar3 = param_2[1];
  if (*param_1 == *param_2) {
    if (dVar2 == 0.0) {
      if (dVar3 == 0.0) {
        return 1;
      }
    }
    else if ((dVar3 != 0.0) &&
            (lVar4 = *(long *)((long)dVar2 + 0x10), lVar4 == *(long *)((long)dVar3 + 0x10))) {
      if (lVar4 == 0) {
        return 1;
      }
      if (dVar2 == dVar3) {
        return 1;
      }
      pdVar5 = (double *)((long)dVar3 + 0x28);
      pdVar6 = (double *)((long)dVar2 + 0x28);
      while( true ) {
        bVar1 = false;
        if ((pdVar6[-1] == pdVar5[-1]) && (bVar1 = false, !NAN(*pdVar6) && !NAN(*pdVar5))) {
          bVar1 = *pdVar6 == *pdVar5;
        }
        if (!bVar1) break;
        pdVar5 = pdVar5 + 2;
        pdVar6 = pdVar6 + 2;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 10474dd1c; end: 10474dd5b;  */

void FUN_10474dd1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33200;
  _swift_getWitnessTable(&UNK_10dd33200,&UNK_11079f6b8);
  puRam000000011308e7b0 = puVar1;
  return;
}



/* Entry: 10474dd5c; end: 10474dd63;  */

void FUN_10474dd5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10474dd64; end: 10474dddb;  */

undefined8 * FUN_10474dd64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474dddc; end: 10474de9f;  */

int FUN_10474dddc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10474dea0; end: 10474df6f;  */

void FUN_10474dea0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  if (param_3 != 1) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    if (param_3 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1046db864(param_1,param_3);
      goto joined_r0x00010474df14;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
joined_r0x00010474df14:
  if (param_5 != 1) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_4 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    if (param_5 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      lVar2 = *(long *)(param_5 + 0x10);
      __ss6HasherV8_combineyySuF(lVar2);
      if (lVar2 != 0) {
        pdVar3 = (double *)(param_5 + 0x28);
        do {
          dVar5 = *pdVar3;
          dVar4 = 0.0;
          if (pdVar3[-1] != 0.0) {
            dVar4 = pdVar3[-1];
          }
          __ss6HasherV8_combineyys6UInt64VF(dVar4);
          dVar4 = 0.0;
          if (dVar5 != 0.0) {
            dVar4 = dVar5;
          }
          __ss6HasherV8_combineyys6UInt64VF(dVar4);
          pdVar3 = pdVar3 + 2;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      return;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474df70; end: 10474dfcb;  */

void FUN_10474df70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10474dea0(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474dfcc; end: 10474dfd7;  */

void FUN_10474dfcc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *unaff_x20;
  double *pdVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar4 != 1) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    if (uVar4 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1046db864(param_1,uVar4);
      goto joined_r0x00010474df14;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
joined_r0x00010474df14:
  if (uVar5 != 1) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    if (uVar5 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      lVar6 = *(long *)(uVar5 + 0x10);
      __ss6HasherV8_combineyySuF(lVar6);
      if (lVar6 != 0) {
        pdVar7 = (double *)(uVar5 + 0x28);
        do {
          dVar9 = *pdVar7;
          dVar8 = 0.0;
          if (pdVar7[-1] != 0.0) {
            dVar8 = pdVar7[-1];
          }
          __ss6HasherV8_combineyys6UInt64VF(dVar8);
          dVar8 = 0.0;
          if (dVar9 != 0.0) {
            dVar8 = dVar9;
          }
          __ss6HasherV8_combineyys6UInt64VF(dVar8);
          pdVar7 = pdVar7 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      return;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474dfd8; end: 10474e02f;  */

void FUN_10474dfd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_10474dea0(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474e030; end: 10474e0db;  */

undefined8 FUN_10474e030(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_1[3];
  uVar5 = param_2[2];
  lVar2 = param_2[3];
  if (uVar1 == 1) {
    if (param_2[1] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[1] == 1) {
      return 0;
    }
    func_0x00010474dca4(*param_1,*param_2);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (uVar3 == 1) {
    if (lVar2 == 1) {
      return 1;
    }
  }
  else if ((lVar2 != 1) && (func_0x00010474dca4(uVar4,uVar5,uVar3,lVar2), (uVar3 & 1) != 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10474e0dc; end: 10474e0df;  */

void FUN_10474e0dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33290;
  _swift_getWitnessTable(&UNK_10dd33290,&UNK_11079f770);
  puRam000000011308e7b8 = puVar1;
  return;
}



/* Entry: 10474e0e0; end: 10474e11f;  */

void FUN_10474e0e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33290;
  _swift_getWitnessTable(&UNK_10dd33290,&UNK_11079f770);
  puRam000000011308e7b8 = puVar1;
  return;
}



/* Entry: 10474e120; end: 10474e1fb;  */

long FUN_10474e120(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474e1fc; end: 10474e2f7;  */

undefined8 * FUN_10474e1fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  if (lVar1 == 1) {
    if (param_2[1] != 1) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      goto LAB_10474e27c;
    }
  }
  else {
    if (param_2[1] != 1) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_10474e27c;
    }
    func_0x0001017b691c(param_1);
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
LAB_10474e27c:
  lVar1 = param_1[3];
  if (lVar1 == 1) {
    if (param_2[3] != 1) {
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (param_2[3] != 1) {
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar1);
      return param_1;
    }
    func_0x0001017b691c(param_1 + 2);
  }
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10474e2f8; end: 10474e393;  */

undefined8 * FUN_10474e2f8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[1] != 1) {
    lVar1 = param_2[1];
    if (lVar1 != 1) {
      *param_1 = *param_2;
      param_1[1] = lVar1;
      _swift_bridgeObjectRelease();
      goto LAB_10474e348;
    }
    func_0x0001017b691c(param_1);
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
LAB_10474e348:
  if (param_1[3] != 1) {
    lVar1 = param_2[3];
    if (lVar1 != 1) {
      param_1[2] = param_2[2];
      param_1[3] = lVar1;
      _swift_bridgeObjectRelease();
      return param_1;
    }
    func_0x0001017b691c(param_1 + 2);
  }
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10474e394; end: 10474e45b;  */

int FUN_10474e394(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 10474e45c; end: 10474e5cb;  */

void FUN_10474e45c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  if (uVar3 >> 0x3c < 0xf) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar3);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474e5cc; end: 10474e5e7;  */

undefined8 FUN_10474e5cc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  lVar2 = param_2[1];
  uVar5 = param_2[2];
  if (*param_1 != *param_2) {
    return 0;
  }
  if (uVar4 >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar1,uVar4);
      func_0x000100de78a0(lVar2,uVar5);
      uVar3 = uVar1;
      func_0x000100e25fcc(uVar1,uVar4,lVar2,uVar5);
      func_0x0001000b44c0(lVar2,uVar5);
      func_0x0001000b44c0(uVar1,uVar4);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (0xe < uVar5 >> 0x3c) {
    func_0x000100de78a0(uVar1,uVar4);
    func_0x000100de78a0(lVar2,uVar5);
    func_0x0001000b44c0(uVar1,uVar4);
    return 1;
  }
  func_0x000100de78a0(uVar1,uVar4);
  func_0x000100de78a0(lVar2,uVar5);
  func_0x0001000b44c0(uVar1,uVar4);
  func_0x0001000b44c0(lVar2,uVar5);
  return 0;
}



/* Entry: 10474e5e8; end: 10474e703;  */

undefined8
FUN_10474e5e8(long param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,ulong param_6
             )

{
  ulong uVar1;
  
  if (param_1 != param_4) {
    return 0;
  }
  if (param_3 >> 0x3c < 0xf) {
    if (param_6 >> 0x3c < 0xf) {
      func_0x000100de78a0(param_2,param_3);
      func_0x000100de78a0(param_5,param_6);
      uVar1 = param_2;
      func_0x000100e25fcc(param_2,param_3,param_5,param_6);
      func_0x0001000b44c0(param_5,param_6);
      func_0x0001000b44c0(param_2,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (0xe < param_6 >> 0x3c) {
    func_0x000100de78a0(param_2,param_3);
    func_0x000100de78a0(param_5,param_6);
    func_0x0001000b44c0(param_2,param_3);
    return 1;
  }
  func_0x000100de78a0(param_2,param_3);
  func_0x000100de78a0(param_5,param_6);
  func_0x0001000b44c0(param_2,param_3);
  func_0x0001000b44c0(param_5,param_6);
  return 0;
}



/* Entry: 10474e704; end: 10474e707;  */

void FUN_10474e704(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33320;
  _swift_getWitnessTable(&UNK_10dd33320,&UNK_11079f828);
  puRam000000011308e7c0 = puVar1;
  return;
}



/* Entry: 10474e708; end: 10474e747;  */

void FUN_10474e708(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33320;
  _swift_getWitnessTable(&UNK_10dd33320,&UNK_11079f828);
  puRam000000011308e7c0 = puVar1;
  return;
}



/* Entry: 10474e748; end: 10474e763;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10474e748(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xe < uVar2 >> 0x3c) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar3 = (uint)(uVar2 >> 0x3e);
  if (uVar3 == 1) {
    uVar1 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10474e764; end: 10474e877;  */

undefined8 * FUN_10474e764(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[1];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[1] = uVar2;
    param_1[2] = uVar1;
  }
  else {
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
  }
  return param_1;
}



/* Entry: 10474e878; end: 10474e903;  */

undefined8 * FUN_10474e878(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_2 + 1;
  *param_1 = *param_2;
  if ((ulong)param_1[2] >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[1];
      param_1[1] = *puVar3;
      param_1[2] = uVar2;
      func_0x00010006c090(uVar1);
    }
    else {
      func_0x0001006e5814(param_1 + 1);
      uVar1 = *puVar3;
      param_1[2] = param_2[2];
      param_1[1] = uVar1;
    }
  }
  else {
    uVar1 = *puVar3;
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
  }
  return param_1;
}



/* Entry: 10474e904; end: 10474e9c7;  */

int FUN_10474e904(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xb < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xc;
  }
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  iVar1 = 0xe - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  if ((uVar2 >> 0x1c & 3) == 0) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 10474e9c8; end: 10474ea4f;  */

void FUN_10474e9c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474ea50; end: 10474eab7;  */

void FUN_10474ea50(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  if (lVar2 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar1,lVar2);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474eab8; end: 10474eb3b;  */

void FUN_10474eab8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474eb3c; end: 10474eb57;  */

undefined8 FUN_10474eb3c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (((uVar4 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,param_1[1],*param_2,param_2[1],0), (uVar4 & 1) == 0)) {
    return 0;
  }
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else if ((uVar3 == 0) ||
          (((uVar5 != uVar1 || (uVar2 != uVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 10474eb58; end: 10474ebf7;  */

undefined8
FUN_10474eb58(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 10474ebf8; end: 10474ebfb;  */

void FUN_10474ebf8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd333b0;
  _swift_getWitnessTable(&UNK_10dd333b0,&UNK_11079f8e0);
  puRam000000011308e7c8 = puVar1;
  return;
}



/* Entry: 10474ebfc; end: 10474ec3b;  */

void FUN_10474ebfc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd333b0;
  _swift_getWitnessTable(&UNK_10dd333b0,&UNK_11079f8e0);
  puRam000000011308e7c8 = puVar1;
  return;
}



/* Entry: 10474ec3c; end: 10474eccb;  */

long FUN_10474ec3c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474eccc; end: 10474ed37;  */

undefined8 * FUN_10474eccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474ed38; end: 10474ed7b;  */

undefined8 * FUN_10474ed38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474ed7c; end: 10474ee13;  */

int FUN_10474ed7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474ee14; end: 10474eec3;  */

void FUN_10474ee14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  }
  if (param_4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_3,param_4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474eec4; end: 10474eecf;  */

void FUN_10474eec4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,lVar3);
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474eed0; end: 10474f017;  */

void FUN_10474eed0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar1);
  }
  if (lVar3 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474f018; end: 10474f033;  */

undefined8 FUN_10474f018(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10474f034; end: 10474f0eb;  */

undefined8
FUN_10474f034(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10474f0ec; end: 10474f0ef;  */

void FUN_10474f0ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33434;
  _swift_getWitnessTable(&UNK_10dd33434,&UNK_11079f998);
  puRam000000011308e7d0 = puVar1;
  return;
}



/* Entry: 10474f0f0; end: 10474f12f;  */

void FUN_10474f0f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33434;
  _swift_getWitnessTable(&UNK_10dd33434,&UNK_11079f998);
  puRam000000011308e7d0 = puVar1;
  return;
}


