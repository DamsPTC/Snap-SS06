/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047ae89c; end: 1047ae93b;  */

int FUN_1047ae89c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ae93c; end: 1047ae997;  */

byte FUN_1047ae93c(ulong param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return 0;
  }
  lVar26 = *(long *)(param_3 + 0x10);
  if (lVar26 == *(long *)(param_6 + 0x10)) {
    if ((lVar26 == 0) || (param_3 == param_6)) {
      bVar14 = 1;
    }
    else {
      lVar20 = 0;
      do {
        piVar1 = (int *)(param_3 + 0x20 + lVar20 * 0x18);
        lVar23 = *(long *)(piVar1 + 2);
        bVar14 = *(byte *)(piVar1 + 4);
        iVar11 = *piVar1;
        piVar1 = (int *)(param_6 + 0x20 + lVar20 * 0x18);
        iVar12 = *piVar1;
        lVar22 = *(long *)(piVar1 + 2);
        bVar13 = *(byte *)(piVar1 + 4);
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar22);
        if ((iVar11 != iVar12) ||
           (lVar27 = *(long *)(lVar23 + 0x10), lVar27 != *(long *)(lVar22 + 0x10))) {
LAB_10470b4d4:
          _swift_bridgeObjectRelease(lVar23);
          _swift_bridgeObjectRelease(lVar22);
          return 0;
        }
        if (lVar27 != 0 && lVar23 != lVar22) {
          lVar24 = 0;
          do {
            plVar29 = (long *)(lVar23 + 0x20 + lVar24 * 0x38);
            lVar19 = *plVar29;
            plVar28 = (long *)(lVar22 + 0x20 + lVar24 * 0x38);
            lVar21 = *plVar28;
            lVar25 = *(long *)(lVar19 + 0x10);
            if (lVar25 != *(long *)(lVar21 + 0x10)) goto LAB_10470b4d4;
            uVar16 = plVar29[1];
            lVar5 = plVar29[2];
            uVar18 = plVar29[3];
            lVar6 = plVar29[4];
            uVar15 = plVar29[5];
            lVar7 = plVar29[6];
            uVar2 = plVar28[1];
            lVar8 = plVar28[2];
            uVar3 = plVar28[3];
            lVar9 = plVar28[4];
            uVar4 = plVar28[5];
            lVar10 = plVar28[6];
            if (lVar25 != 0 && lVar19 != lVar21) {
              plVar29 = (long *)(lVar21 + 0x28);
              plVar28 = (long *)(lVar19 + 0x28);
              do {
                uVar17 = plVar28[-1];
                if ((uVar17 != plVar29[-1] || *plVar28 != *plVar29) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar17 & 1) == 0)) goto LAB_10470b4d4;
                plVar29 = plVar29 + 2;
                plVar28 = plVar28 + 2;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            if (lVar5 == 0) {
              if (lVar8 != 0) goto LAB_10470b4d4;
            }
            else if ((lVar8 == 0) ||
                    (((uVar16 != uVar2 || (lVar5 != lVar8)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar16,lVar5,uVar2,lVar8,0), (uVar16 & 1) == 0))))
            goto LAB_10470b4d4;
            if (lVar6 == 0) {
              if (lVar9 != 0) goto LAB_10470b4d4;
            }
            else if ((lVar9 == 0) ||
                    (((uVar18 != uVar3 || (lVar6 != lVar9)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar18 & 1) == 0)))) goto LAB_10470b4d4;
            if (((uVar15 != uVar4) || (lVar7 != lVar10)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar15 & 1) == 0)) goto LAB_10470b4d4;
            lVar24 = lVar24 + 1;
          } while (lVar24 != lVar27);
        }
        _swift_bridgeObjectRelease(lVar22);
        _swift_bridgeObjectRelease(lVar23);
      } while ((((bVar14 ^ bVar13) & 1) == 0) && (lVar20 = lVar20 + 1, lVar20 != lVar26));
      bVar14 = bVar14 ^ bVar13 ^ 1;
    }
  }
  else {
    bVar14 = 0;
  }
  return bVar14;
}



/* Entry: 1047ae998; end: 1047ae9f7;  */

void FUN_1047ae998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  func_0x0001046dbb64(auStack_78,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ae9f8; end: 1047aea27;  */

void FUN_1047ae9f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  
  lVar15 = unaff_x20[2];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar16 = *(long *)(lVar15 + 0x10);
  __ss6HasherV8_combineyySuF(lVar16);
  if (lVar16 != 0) {
    lVar17 = 0;
    do {
      puVar12 = (undefined8 *)(lVar15 + 0x20 + lVar17 * 0x18);
      uVar10 = *(undefined1 *)(puVar12 + 2);
      lVar5 = puVar12[1];
      __ss6HasherV8_combineyySuF(*puVar12);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar5 + 0x10));
      uVar13 = *(ulong *)(lVar5 + 0x10);
      if (uVar13 == 0) {
        _swift_bridgeObjectRetain(lVar5);
      }
      else {
        _swift_bridgeObjectRetain(lVar5);
        uVar20 = 0;
        do {
          if (*(ulong *)(lVar5 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1046dbda4);
            (*pcVar11)();
          }
          plVar14 = (long *)(lVar5 + 0x20 + uVar20 * 0x38);
          lVar1 = *plVar14;
          lVar6 = plVar14[1];
          lVar2 = plVar14[2];
          lVar7 = plVar14[3];
          lVar3 = plVar14[4];
          lVar8 = plVar14[5];
          lVar18 = plVar14[6];
          __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + 0x10));
          lVar19 = *(long *)(lVar1 + 0x10);
          if (lVar19 == 0) {
            _swift_bridgeObjectRetain(lVar3);
            _swift_bridgeObjectRetain(lVar18);
            _swift_bridgeObjectRetain(lVar1);
            _swift_bridgeObjectRetain(lVar2);
            if (lVar2 != 0) goto LAB_1046dbd1c;
LAB_1046dbd64:
            __ss6HasherV8_combineyys5UInt8VF(0);
            if (lVar3 == 0) goto LAB_1046dbd74;
LAB_1046dbc2c:
            __ss6HasherV8_combineyys5UInt8VF(1);
            __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar3);
          }
          else {
            _swift_bridgeObjectRetain(lVar3);
            _swift_bridgeObjectRetain(lVar18);
            _swift_bridgeObjectRetain(lVar1);
            _swift_bridgeObjectRetain(lVar2);
            puVar12 = (undefined8 *)(lVar1 + 0x28);
            do {
              uVar4 = puVar12[-1];
              uVar9 = *puVar12;
              _swift_bridgeObjectRetain(uVar9);
              __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar9);
              _swift_bridgeObjectRelease(uVar9);
              puVar12 = puVar12 + 2;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            if (lVar2 == 0) goto LAB_1046dbd64;
LAB_1046dbd1c:
            __ss6HasherV8_combineyys5UInt8VF(1);
            __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar2);
            if (lVar3 != 0) goto LAB_1046dbc2c;
LAB_1046dbd74:
            __ss6HasherV8_combineyys5UInt8VF(0);
          }
          uVar20 = uVar20 + 1;
          __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar18);
          _swift_bridgeObjectRelease(lVar18);
          _swift_bridgeObjectRelease(lVar3);
          _swift_bridgeObjectRelease(lVar1);
          _swift_bridgeObjectRelease(lVar2);
        } while (uVar20 != uVar13);
      }
      lVar17 = lVar17 + 1;
      __ss6HasherV8_combineyys5UInt8VF(uVar10);
      _swift_bridgeObjectRelease(lVar5);
    } while (lVar17 != lVar16);
  }
  return;
}



/* Entry: 1047aea28; end: 1047aea83;  */

void FUN_1047aea28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  func_0x0001046dbb64(auStack_78,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aea84; end: 1047aeae3;  */

byte FUN_1047aea84(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  
  uVar19 = *param_1;
  uVar11 = param_1[2];
  uVar25 = param_2[2];
  if ((uVar19 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar19 & 1) == 0)) {
    return 0;
  }
  lVar28 = *(long *)(uVar11 + 0x10);
  if (lVar28 == *(long *)(uVar25 + 0x10)) {
    if ((lVar28 == 0) || (uVar11 == uVar25)) {
      bVar15 = 1;
    }
    else {
      lVar21 = 0;
      do {
        piVar1 = (int *)(uVar11 + 0x20 + lVar21 * 0x18);
        lVar24 = *(long *)(piVar1 + 2);
        bVar15 = *(byte *)(piVar1 + 4);
        iVar12 = *piVar1;
        piVar1 = (int *)(uVar25 + 0x20 + lVar21 * 0x18);
        iVar13 = *piVar1;
        lVar23 = *(long *)(piVar1 + 2);
        bVar14 = *(byte *)(piVar1 + 4);
        _swift_bridgeObjectRetain(lVar24);
        _swift_bridgeObjectRetain(lVar23);
        if ((iVar12 != iVar13) ||
           (lVar29 = *(long *)(lVar24 + 0x10), lVar29 != *(long *)(lVar23 + 0x10))) {
LAB_10470b4d4:
          _swift_bridgeObjectRelease(lVar24);
          _swift_bridgeObjectRelease(lVar23);
          return 0;
        }
        if (lVar29 != 0 && lVar24 != lVar23) {
          lVar26 = 0;
          do {
            plVar31 = (long *)(lVar24 + 0x20 + lVar26 * 0x38);
            lVar20 = *plVar31;
            plVar30 = (long *)(lVar23 + 0x20 + lVar26 * 0x38);
            lVar22 = *plVar30;
            lVar27 = *(long *)(lVar20 + 0x10);
            if (lVar27 != *(long *)(lVar22 + 0x10)) goto LAB_10470b4d4;
            uVar19 = plVar31[1];
            lVar5 = plVar31[2];
            uVar18 = plVar31[3];
            lVar6 = plVar31[4];
            uVar16 = plVar31[5];
            lVar7 = plVar31[6];
            uVar2 = plVar30[1];
            lVar8 = plVar30[2];
            uVar3 = plVar30[3];
            lVar9 = plVar30[4];
            uVar4 = plVar30[5];
            lVar10 = plVar30[6];
            if (lVar27 != 0 && lVar20 != lVar22) {
              plVar31 = (long *)(lVar22 + 0x28);
              plVar30 = (long *)(lVar20 + 0x28);
              do {
                uVar17 = plVar30[-1];
                if ((uVar17 != plVar31[-1] || *plVar30 != *plVar31) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar17 & 1) == 0)) goto LAB_10470b4d4;
                plVar31 = plVar31 + 2;
                plVar30 = plVar30 + 2;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
            if (lVar5 == 0) {
              if (lVar8 != 0) goto LAB_10470b4d4;
            }
            else if ((lVar8 == 0) ||
                    (((uVar19 != uVar2 || (lVar5 != lVar8)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar19,lVar5,uVar2,lVar8,0), (uVar19 & 1) == 0))))
            goto LAB_10470b4d4;
            if (lVar6 == 0) {
              if (lVar9 != 0) goto LAB_10470b4d4;
            }
            else if ((lVar9 == 0) ||
                    (((uVar18 != uVar3 || (lVar6 != lVar9)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar18 & 1) == 0)))) goto LAB_10470b4d4;
            if (((uVar16 != uVar4) || (lVar7 != lVar10)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar16 & 1) == 0)) goto LAB_10470b4d4;
            lVar26 = lVar26 + 1;
          } while (lVar26 != lVar29);
        }
        _swift_bridgeObjectRelease(lVar23);
        _swift_bridgeObjectRelease(lVar24);
      } while ((((bVar15 ^ bVar14) & 1) == 0) && (lVar21 = lVar21 + 1, lVar21 != lVar28));
      bVar15 = bVar15 ^ bVar14 ^ 1;
    }
  }
  else {
    bVar15 = 0;
  }
  return bVar15;
}



/* Entry: 1047aeae4; end: 1047aeae7;  */

void FUN_1047aeae4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35280;
  _swift_getWitnessTable(&UNK_10dd35280,&UNK_1107a18b8);
  puRam000000011308ed88 = puVar1;
  return;
}



/* Entry: 1047aeae8; end: 1047aeb27;  */

void FUN_1047aeae8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35280;
  _swift_getWitnessTable(&UNK_10dd35280,&UNK_1107a18b8);
  puRam000000011308ed88 = puVar1;
  return;
}



/* Entry: 1047aeb28; end: 1047aeb8b;  */

void FUN_1047aeb28(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1047aeb8c; end: 1047aebef;  */

undefined8 * FUN_1047aeb8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1047aebf0; end: 1047aec33;  */

undefined8 * FUN_1047aebf0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1047aec34; end: 1047aece7;  */

int FUN_1047aec34(int *param_1,int param_2)

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



/* Entry: 1047aece8; end: 1047aed13;  */

void FUN_1047aece8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1047aee9c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1047aed14; end: 1047aed1f;  */

void FUN_1047aed14(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1047aed20; end: 1047aedcb;  */

void FUN_1047aed20(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047aedcc; end: 1047aee9b;  */

undefined1  [16] FUN_1047aedcc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1047aee80:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1047aee9c);
        (*pcVar1)();
      }
      uVar3 = 0xef73636974796c61;
      uVar2 = 0x6e41656c676f6f67;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe90000000000006d;
    uVar2 = 0x6165626874726f6e;
  }
  else {
    if (lStack_18 != 3) goto LAB_1047aee80;
    uVar3 = 0xeb00000000656c61;
    uVar2 = 0x6857656c70697274;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1047aee9c; end: 1047aeeaf;  */

undefined1  [16] FUN_1047aee9c(ulong param_1)

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



/* Entry: 1047aeeb0; end: 1047aeeef;  */

void FUN_1047aeeb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd352d0;
  _swift_getWitnessTable(&UNK_10dd352d0,&UNK_1107a1918);
  puRam000000011308ed90 = puVar1;
  return;
}



/* Entry: 1047aeef0; end: 1047aeeff;  */

undefined1  [16] FUN_1047aeef0(void)

{
  return ZEXT816(0x1107a1918);
}



/* Entry: 1047aef00; end: 1047aef0f; -[SCAdAnimation delayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047aef00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ed98);
}



/* Entry: 1047aef10; end: 1047aef1f; -[SCAdAnimation durationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047aef10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eda0);
}



/* Entry: 1047aef20; end: 1047aef2f; -[SCAdAnimation properties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047aef20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308eda8));
  return;
}



/* Entry: 1047aef30; end: 1047aefa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047aef30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ed98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308eda0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308eda8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047aefa4; end: 1047af023; -[SCAdAnimation initWithDelayMs:durationMs:properties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047aefa4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_11308ed98) = param_1;
  *(undefined8 *)(param_3 + _DAT_11308eda0) = param_2;
  *(undefined8 *)(param_3 + _DAT_11308eda8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_3;
  lStack_38 = lVar2;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047af024; end: 1047af11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af024(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_160 [8];
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
  undefined2 uStack_d0;
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
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  
  _objc_allocWithZone();
  uVar3 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308ed98) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308eda0) = uVar3;
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_40 = (undefined2)((uint)*(undefined4 *)((long)param_1 + 0x8f) >> 8);
  uStack_3e = (undefined1)((uint)*(undefined4 *)((long)param_1 + 0x8f) >> 0x18);
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_50 = param_1[0x10];
  uStack_48 = (undefined7)param_1[0x11];
  uStack_41 = (undefined1)((ulong)param_1[0x11] >> 0x38);
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  iVar1 = (int)&uStack_c0;
  FUN_1046c199c();
  if (iVar1 == 1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_d8 = CONCAT17(uStack_41,uStack_48);
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_e0 = uStack_50;
    uStack_d0 = uStack_40;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    FUN_1047d62b8(0);
    _objc_allocWithZone();
    puVar2 = &uStack_150;
    FUN_1047d5528();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11308eda8) = puVar2;
  _objc_msgSendSuper2(auStack_160,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047af120; end: 1047af153; -[SCAdAnimation hash] */

undefined8 FUN_1047af120(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047af154();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047af154; end: 1047af213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af154(void)

{
  double dVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308ed98) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308ed98);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308eda0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308eda0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (*(long *)(unaff_x20 + _DAT_11308eda8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047d4d58();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047af214; end: 1047af367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047af214(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_78;
  long alStack_70 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_70);
  if (alStack_70[3] == 0) {
    func_0x00010006e7f4(alStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,alStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar7 = *(double *)(unaff_x20 + _DAT_11308ed98);
      dVar8 = *(double *)(lStack_78 + _DAT_11308ed98);
      dVar9 = *(double *)(unaff_x20 + _DAT_11308eda0);
      dVar10 = *(double *)(lStack_78 + _DAT_11308eda0);
      if (*(long *)(unaff_x20 + _DAT_11308eda8) == 0) {
        lVar6 = *(long *)(lStack_78 + _DAT_11308eda8);
        lVar5 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_78);
        if (lVar6 == 0) {
          uVar1 = 1;
        }
        else {
          _objc_release(lVar5);
          uVar1 = 0;
        }
      }
      else {
        lVar5 = *(long *)(lStack_78 + _DAT_11308eda8);
        if (lVar5 == 0) {
          uVar3 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          uVar3 = 0;
          FUN_1047d62b8();
        }
        alStack_70[0] = lVar5;
        alStack_70[3] = uVar3;
        _objc_retain(lVar5);
        plVar2 = alStack_70;
        FUN_1047d4fdc(plVar2);
        uVar1 = (uint)plVar2;
        _objc_release(lStack_78);
        func_0x00010006e7f4(alStack_70);
      }
      uVar4 = 0;
      if (dVar9 == dVar10) {
        uVar4 = (uint)(dVar7 == dVar8);
      }
      return uVar4 & uVar1;
    }
  }
  return 0;
}



/* Entry: 1047af368; end: 1047af3e7; -[SCAdAnimation isEqual:] */

uint FUN_1047af368(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047af214(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047af3e8; end: 1047af3eb; -[SCAdAnimation copyWithZone:] */

void FUN_1047af3e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047af3ec; end: 1047af4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af3ec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ed98);
  uVar1 = 0x534d5f59414c4544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534d5f59414c4544,0xe800000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308eda0);
  uVar1 = 0x4e4f495441525544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441525544,0xeb00000000534d5f);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x49545245504f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545245504f5250,0xea00000000005345);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047af4e0; end: 1047af52f; -[SCAdAnimation encodeWithCoder:] */

void FUN_1047af4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047af3ec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047af530; end: 1047af56f;  */

undefined8 FUN_1047af530(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047af744(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047af570; end: 1047af5ab; -[SCAdAnimation initWithCoder:] */

undefined8 FUN_1047af570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047af744();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047af5ac; end: 1047af5ef; -[SCAdAnimation description] */

void FUN_1047af5ac(undefined8 param_1)

{
  undefined1 auStack_b8 [152];
  
  _objc_retain();
  FUN_1047af67c(auStack_b8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047af5f0; end: 1047af66b; -[SCAdAnimation init] */

void FUN_1047af5f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdAnimationWrapper.swift",0x24,2,
             0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047af638);
  (*pcVar1)();
}



/* Entry: 1047af66c; end: 1047af67b; -[SCAdAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308eda8));
  return;
}



/* Entry: 1047af67c; end: 1047af743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af67c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined7 uStack_40;
  undefined4 uStack_39;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_11308ed98);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11308eda0);
  lVar1 = *(long *)(param_2 + _DAT_11308eda8);
  if (lVar1 == 0) {
    func_0x00010155b578(&uStack_b8);
  }
  else {
    _objc_retain();
    FUN_1047d5bac(&uStack_b8);
    _objc_release(lVar1);
    func_0x00010155b77c(&uStack_b8);
  }
  param_1[0xd] = uStack_60;
  param_1[0xc] = uStack_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = uStack_58;
  param_1[0x11] = CONCAT17((undefined1)uStack_39,uStack_40);
  param_1[0x10] = uStack_48;
  *(undefined4 *)((long)param_1 + 0x8f) = uStack_39;
  param_1[5] = uStack_a0;
  param_1[4] = uStack_a8;
  param_1[7] = uStack_90;
  param_1[6] = uStack_98;
  param_1[9] = uStack_80;
  param_1[8] = uStack_88;
  param_1[0xb] = uStack_70;
  param_1[10] = uStack_78;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uStack_b0;
  param_1[2] = uStack_b8;
  return;
}



/* Entry: 1047af744; end: 1047af8c3;  */

undefined8 FUN_1047af744(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0x534d5f59414c4544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534d5f59414c4544,0xe800000000000000);
  func_0x00010bf66da0(param_2);
  uVar3 = param_1;
  _objc_release(uVar1);
  uVar1 = 0x4e4f495441525544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441525544,0xeb00000000534d5f);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0x49545245504f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545245504f5250,0xea00000000005345);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_2);
    _swift_unknownObjectRelease(param_2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1047d62b8(0);
    puVar2 = &uStack_88;
    _swift_dynamicCast(puVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_88;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c00a2a0(param_1,uVar3);
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1047af8c4; end: 1047af8e3;  */

void FUN_1047af8c4(void)

{
  _objc_opt_self(&PTR_PTR_1129d3250);
  return;
}



/* Entry: 1047af8e4; end: 1047af8f3; -[SCAdBrandInfoInteractionBehavior brandIconInteractionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047af8e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308edd8);
}



/* Entry: 1047af8f4; end: 1047af903; -[SCAdBrandInfoInteractionBehavior brandAttributionInteractionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047af8f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ede0);
}



/* Entry: 1047af904; end: 1047af91b; -[SCAdBrandInfoInteractionBehavior brandSwipeInteractionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047af904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ede8);
}



/* Entry: 1047af91c; end: 1047afa77; -[SCAdBrandInfoInteractionBehavior initWithBrandIconInteractionType:brandAttributionInteractionType:brandSwipeInteractionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047af91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308edd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308ede0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308ede8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047afa78; end: 1047afae7; -[SCAdBrandInfoInteractionBehavior hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047afa78(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308edd8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308ede0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308ede8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047afae8; end: 1047afbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047afae8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308edd8);
      iVar2 = *(int *)(lStack_68 + _DAT_11308edd8);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11308ede0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308ede0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308ede8);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_11308ede8);
      _objc_release();
      return (iVar1 == iVar2 && (int)uVar6 == (int)uVar7) && (int)uVar5 == (int)uVar8;
    }
  }
  return false;
}



/* Entry: 1047afbb8; end: 1047afc37; -[SCAdBrandInfoInteractionBehavior isEqual:] */

uint FUN_1047afbb8(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047afae8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047afc38; end: 1047afc3b; -[SCAdBrandInfoInteractionBehavior copyWithZone:] */

void FUN_1047afc38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047afc3c; end: 1047afd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047afc3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d150);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20d170);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d1a0);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047afd30; end: 1047afd7f; -[SCAdBrandInfoInteractionBehavior encodeWithCoder:] */

void FUN_1047afd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047afc3c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047afd80; end: 1047afdaf;  */

void FUN_1047afd80(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047afdb0(param_1);
  return;
}



/* Entry: 1047afdb0; end: 1047afeeb;  */

undefined8 FUN_1047afdb0(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d150);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    uVar1 = 0xd000000000000022;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20d170);
    uVar2 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar1);
    if (uVar2 < 3) {
      uVar1 = 0xd00000000000001c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d1a0);
      uVar2 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar1);
      if (uVar2 < 3) {
        func_0x00010bff9640();
        _objc_release(param_1);
        return unaff_x20;
      }
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047afeec; end: 1047aff13; -[SCAdBrandInfoInteractionBehavior initWithCoder:] */

void FUN_1047afeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047afdb0();
  return;
}



/* Entry: 1047aff14; end: 1047aff2f; -[SCAdBrandInfoInteractionBehavior description] */

void FUN_1047aff14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047aff30; end: 1047affab; -[SCAdBrandInfoInteractionBehavior init] */

void FUN_1047aff30(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdBrandInfoInteractionBehaviorWrapper.swift",0x37,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047aff78);
  (*pcVar1)();
}



/* Entry: 1047affac; end: 1047affaf; -[SCAdBrandInfoInteractionBehavior .cxx_destruct] */

void FUN_1047affac(void)

{
  return;
}



/* Entry: 1047affb0; end: 1047affcf;  */

void FUN_1047affb0(void)

{
  _objc_opt_self(&PTR_PTR_1129d3330);
  return;
}



/* Entry: 1047affd0; end: 1047affd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047affd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308edd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ede0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ede8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047affd4; end: 1047b001f; -[SCAdBrandNameProfileInfo profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047affd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308ee18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308ee18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b0020; end: 1047b002f; -[SCAdBrandNameProfileInfo profileIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b0020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ee20));
  return;
}



/* Entry: 1047b0030; end: 1047b003f; -[SCAdBrandNameProfileInfo darkProfileIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b0030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ee28));
  return;
}



/* Entry: 1047b0040; end: 1047b004f; -[SCAdBrandNameProfileInfo isDefaultProfileLogo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b0040(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ee30);
}



/* Entry: 1047b0050; end: 1047b005f; -[SCAdBrandNameProfileInfo isGenericProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b0050(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ee38);
}



/* Entry: 1047b0060; end: 1047b006f; -[SCAdBrandNameProfileInfo genericIconType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b0060(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ee40);
}



/* Entry: 1047b0070; end: 1047b00cb; -[SCAdBrandNameProfileInfo hostAccountUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b0070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308ee48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308ee48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b00cc; end: 1047b00db; -[SCAdBrandNameProfileInfo isPublisherProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b00cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ee50);
}



/* Entry: 1047b00dc; end: 1047b01cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b00dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ee18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee20) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee28) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11308ee30) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11308ee38) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee40) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ee48);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11308ee50) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b01cc; end: 1047b02f7; -[SCAdBrandNameProfileInfo initWithProfileId:profileIcon:darkProfileIcon:isDefaultProfileLogo:isGenericProfile:genericIconType:hostAccountUserId:isPublisherProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b01cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_9 == 0) {
    param_9 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11308ee18);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308ee20) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308ee28) = param_5;
  *(undefined1 *)(param_1 + _DAT_11308ee30) = param_6;
  *(undefined1 *)(param_1 + _DAT_11308ee38) = param_7;
  *(undefined8 *)(param_1 + _DAT_11308ee40) = param_8;
  plVar2 = (long *)(param_1 + _DAT_11308ee48);
  *plVar2 = param_9;
  plVar2[1] = lVar5;
  *(undefined1 *)(param_1 + _DAT_11308ee50) = param_10;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1047b02f8; end: 1047b0327;  */

void FUN_1047b02f8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b0328(param_1);
  return;
}



/* Entry: 1047b0328; end: 1047b052b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b0328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  _swift_getObjectType();
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11308ee18);
  puVar6[1] = uStack_e8;
  *puVar6 = uStack_f0;
  lVar7 = param_1[8];
  if (lVar7 == 1) {
    _swift_bridgeObjectRetain(uStack_e8);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_1[6];
    uVar5 = param_1[7];
    uVar2 = param_1[4];
    uVar8 = param_1[5];
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    uStack_a0 = uVar4;
    uStack_98 = uVar3;
    uStack_90 = uVar2;
    uStack_88 = uVar8;
    uStack_80 = uVar1;
    uStack_78 = uVar5;
    lStack_70 = lVar7;
    FUN_1047fc144(0);
    _objc_allocWithZone();
    func_0x000100402194(&uStack_f0,&uStack_d8);
    func_0x000104711a50(uVar4,uVar3,uVar2,uVar8,uVar1,uVar5,lVar7);
    puVar6 = &uStack_a0;
    FUN_1047fba30();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11308ee20) = puVar6;
  lVar7 = param_1[0xf];
  if (lVar7 == 1) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_1[0xb];
    uVar4 = param_1[0xc];
    uVar2 = param_1[9];
    uVar5 = param_1[10];
    uStack_b0 = param_1[0xe];
    uStack_b8 = param_1[0xd];
    uVar8 = param_1[0xd];
    uStack_d8 = uVar2;
    uStack_d0 = uVar5;
    uStack_c8 = uVar1;
    uStack_c0 = uVar4;
    lStack_a8 = lVar7;
    FUN_1047fc144(0);
    _objc_allocWithZone();
    func_0x00010470dc90(uVar2,uVar5,uVar1,uVar4,uVar8);
    _swift_bridgeObjectRetain(lVar7);
    puVar6 = &uStack_d8;
    FUN_1047fba30();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11308ee28) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_11308ee30) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(unaff_x20 + _DAT_11308ee38) = *(undefined1 *)((long)param_1 + 0x81);
  *(undefined8 *)(unaff_x20 + _DAT_11308ee40) = param_1[0x11];
  uStack_f8 = param_1[0x13];
  uStack_100 = param_1[0x12];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11308ee48);
  puVar6[1] = uStack_f8;
  *puVar6 = uStack_100;
  func_0x0001047b12f8(&uStack_100,auStack_110,0x112d35ff8,&UNK_10d900cd0);
  func_0x00010207f4a4(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11308ee50) = *(undefined1 *)(param_1 + 0x14);
  _objc_msgSendSuper2(&stack0xfffffffffffffee0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b052c; end: 1047b055f; -[SCAdBrandNameProfileInfo hash] */

undefined8 FUN_1047b052c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047b0560();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047b0560; end: 1047b06e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b0560(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ee18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308ee18))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11308ee20) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308ee28) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308ee30));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308ee38));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ee40));
  if (((undefined8 *)(unaff_x20 + _DAT_11308ee48))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ee48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308ee50));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047b06e4; end: 1047b0977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047b06e4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x20;
  long lVar14;
  uint uVar15;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047b12f8(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar9 = &lStack_88;
    _swift_dynamicCast(plVar9,alStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    if (((ulong)plVar9 & 1) != 0) {
      lVar14 = *(long *)(unaff_x20 + _DAT_11308ee18);
      if (lVar14 == *(long *)(lStack_88 + _DAT_11308ee18) &&
          ((long *)(unaff_x20 + _DAT_11308ee18))[1] == ((long *)(lStack_88 + _DAT_11308ee18))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar14;
      }
      if (*(long *)(unaff_x20 + _DAT_11308ee20) == 0) {
        uStack_90 = (uint)(*(long *)(lStack_88 + _DAT_11308ee20) == 0);
      }
      else {
        lVar14 = *(long *)(lStack_88 + _DAT_11308ee20);
        if (lVar14 == 0) {
          lVar10 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar10 = 0;
          FUN_1047fc144();
        }
        alStack_80[0] = lVar14;
        alStack_80[3] = lVar10;
        _objc_retain(lVar14);
        uStack_90 = 0;
        func_0x0001047fb744();
        func_0x00010006e7f4(alStack_80);
      }
      if (*(long *)(unaff_x20 + _DAT_11308ee28) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_11308ee28) == 0);
      }
      else {
        lVar14 = *(long *)(lStack_88 + _DAT_11308ee28);
        if (lVar14 == 0) {
          lVar10 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar10 = 0;
          FUN_1047fc144();
        }
        alStack_80[0] = lVar14;
        alStack_80[3] = lVar10;
        _objc_retain(lVar14);
        uVar13 = 0;
        func_0x0001047fb744();
        func_0x00010006e7f4(alStack_80);
      }
      cVar3 = *(char *)(unaff_x20 + _DAT_11308ee30);
      cVar4 = *(char *)(lStack_88 + _DAT_11308ee30);
      cVar5 = *(char *)(unaff_x20 + _DAT_11308ee38);
      cVar6 = *(char *)(lStack_88 + _DAT_11308ee38);
      iVar1 = *(int *)(unaff_x20 + _DAT_11308ee40);
      iVar2 = *(int *)(lStack_88 + _DAT_11308ee40);
      lVar14 = ((long *)(unaff_x20 + _DAT_11308ee48))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_11308ee48))[1];
      uVar15 = (uint)(lVar14 == 0 && lVar10 == 0);
      if ((lVar14 != 0) && (lVar10 != 0)) {
        lVar11 = *(long *)(unaff_x20 + _DAT_11308ee48);
        if ((lVar11 == *(long *)(lStack_88 + _DAT_11308ee48)) && (lVar14 == lVar10)) {
          uVar15 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar15 = (uint)lVar11;
        }
      }
      bVar7 = *(byte *)(unaff_x20 + _DAT_11308ee50);
      bVar8 = *(byte *)(lStack_88 + _DAT_11308ee50);
      _objc_release(lStack_88);
      uVar12 = 0;
      if (((((uStack_8c & uStack_90 & uVar13 & 1) != 0) && (cVar3 == cVar4)) && (cVar5 == cVar6)) &&
         (iVar1 == iVar2)) {
        uVar12 = uVar15 & ((bVar7 ^ bVar8) ^ 1);
      }
      goto LAB_1047b07a4;
    }
  }
  uVar12 = 0;
LAB_1047b07a4:
  return uVar12 & 1;
}



/* Entry: 1047b0978; end: 1047b09f7; -[SCAdBrandNameProfileInfo isEqual:] */

uint FUN_1047b0978(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047b06e4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047b09f8; end: 1047b09fb; -[SCAdBrandNameProfileInfo copyWithZone:] */

void FUN_1047b09f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b09fc; end: 1047b0c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b09fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ee18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308ee18))[1]);
  uVar3 = 0x5f454c49464f5250;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f454c49464f5250,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f454c49464f5250,0xec0000004e4f4349);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20d200);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d220);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20d240);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20d260);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308ee48))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ee48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d280);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d2a0);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047b0c70; end: 1047b0cbf; -[SCAdBrandNameProfileInfo encodeWithCoder:] */

void FUN_1047b0c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b09fc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b0cc0; end: 1047b0cef;  */

void FUN_1047b0cc0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b0cf0(param_1);
  return;
}



/* Entry: 1047b0cf0; end: 1047b11bf;  */

undefined8 FUN_1047b0cf0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar9 = 0x5f454c49464f5250;
  uVar3 = uVar9;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f454c49464f5250,0xea00000000004449);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_a8;
    uVar3 = uStack_b0;
    if (((ulong)puVar5 & 1) != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f454c49464f5250,0xec0000004e4f4349);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (uVar4 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        FUN_1047fc144(0);
        puVar5 = &uStack_b0;
        _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,uVar9,6);
        uVar9 = uStack_b0;
        if ((int)puVar5 == 0) {
          uVar9 = 0;
        }
      }
      uVar6 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20d200);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (uVar4 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        FUN_1047fc144(0);
        puVar5 = &uStack_b0;
        _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,uVar6,6);
        uVar6 = uStack_b0;
        if ((int)puVar5 == 0) {
          uVar6 = 0;
        }
      }
      uVar7 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d220);
      func_0x00010bf66ce0();
      _objc_release(uVar7);
      uVar7 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20d240);
      func_0x00010bf66ce0();
      _objc_release(uVar7);
      uVar7 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20d260);
      uVar4 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar7);
      if (uVar4 < 3) {
        uVar7 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d280)
        ;
        uVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
          _swift_unknownObjectRelease(uVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x00010006e7f4(&uStack_80);
        }
        else {
          puVar5 = &uStack_b0;
          _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar7 = uStack_b0;
          lVar10 = lStack_a8;
          if ((int)puVar5 != 0) goto LAB_1047b10f0;
        }
        uVar7 = 0;
        lVar10 = 0;
LAB_1047b10f0:
        uVar8 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d2a0)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar8);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
        _swift_bridgeObjectRelease(lVar2);
        if (lVar10 == 0) {
          uVar7 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar10);
          _swift_bridgeObjectRelease(lVar10);
        }
        func_0x00010c03afa0();
        _objc_release(uVar3);
        _objc_release(uVar7);
        _objc_release(param_1);
        _objc_release(uVar9);
        _objc_release(uVar6);
        return unaff_x20;
      }
      _objc_release(uVar9);
      _objc_release(uVar6);
      _swift_bridgeObjectRelease(lVar2);
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047b11c0; end: 1047b11e7; -[SCAdBrandNameProfileInfo initWithCoder:] */

void FUN_1047b11c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047b0cf0();
  return;
}



/* Entry: 1047b11e8; end: 1047b121b; -[SCAdBrandNameProfileInfo description] */

void FUN_1047b11e8(void)

{
  undefined1 auStack_b8 [168];
  
  FUN_1047b1340(auStack_b8);
  func_0x00010207f4a4(auStack_b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b121c; end: 1047b1297; -[SCAdBrandNameProfileInfo init] */

void FUN_1047b121c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdBrandNameProfileInfoWrapper.swift",0x2f,2,0x87,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b1264);
  (*pcVar1)();
}



/* Entry: 1047b1298; end: 1047b133f; -[SCAdBrandNameProfileInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1298(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ee18 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ee20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ee28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308ee48 + 8))
  ;
  return;
}



/* Entry: 1047b1340; end: 1047b15a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1340(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_11308ee18);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11308ee18))[1];
  lVar10 = *(long *)(param_2 + _DAT_11308ee20);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar13 = 1;
  }
  else {
    lVar7 = *(long *)(lVar10 + _DAT_113090400);
    if (lVar7 == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_90 = 1;
    }
    else {
      uStack_70 = *(undefined8 *)(lVar7 + _DAT_113090438);
      uStack_78 = *(undefined8 *)(lVar7 + _DAT_113090440);
      uStack_90 = ((undefined8 *)(lVar7 + _DAT_113090440))[1];
      uStack_88 = *(undefined8 *)(lVar7 + _DAT_113090448);
      uStack_80 = ((undefined8 *)(lVar7 + _DAT_113090448))[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uStack_90);
    }
    uStack_98 = *(undefined8 *)(lVar10 + _DAT_113090408);
    uVar13 = ((undefined8 *)(lVar10 + _DAT_113090408))[1];
    _swift_bridgeObjectRetain(uVar13);
  }
  lVar10 = *(long *)(param_2 + _DAT_11308ee28);
  if (lVar10 == 0) {
    uVar14 = 0;
    uVar11 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar6 = 1;
    uVar12 = 0;
  }
  else {
    lVar7 = *(long *)(lVar10 + _DAT_113090400);
    if (lVar7 == 0) {
      uVar14 = 0;
      uVar11 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar15 = 1;
    }
    else {
      uVar17 = *(undefined8 *)(lVar7 + _DAT_113090438);
      uVar16 = *(undefined8 *)(lVar7 + _DAT_113090440);
      uVar15 = ((undefined8 *)(lVar7 + _DAT_113090440))[1];
      uVar11 = *(undefined8 *)(lVar7 + _DAT_113090448);
      uVar14 = ((undefined8 *)(lVar7 + _DAT_113090448))[1];
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar15);
    }
    uVar12 = *(undefined8 *)(lVar10 + _DAT_113090408);
    uVar6 = ((undefined8 *)(lVar10 + _DAT_113090408))[1];
    _swift_bridgeObjectRetain();
  }
  uVar3 = *(undefined1 *)(param_2 + _DAT_11308ee30);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11308ee38);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11308ee40);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11308ee50);
  puVar1 = (undefined8 *)(param_2 + _DAT_11308ee48);
  *param_1 = uVar9;
  param_1[1] = uVar2;
  param_1[2] = uStack_70;
  param_1[3] = uStack_78;
  param_1[4] = uStack_90;
  param_1[5] = uStack_88;
  param_1[6] = uStack_80;
  param_1[7] = uStack_98;
  param_1[8] = uVar13;
  param_1[9] = uVar17;
  param_1[10] = uVar16;
  param_1[0xb] = uVar15;
  param_1[0xc] = uVar11;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar12;
  param_1[0xf] = uVar6;
  *(undefined1 *)(param_1 + 0x10) = uVar3;
  *(undefined1 *)((long)param_1 + 0x81) = uVar4;
  param_1[0x11] = uVar8;
  uVar9 = puVar1[1];
  uVar13 = *puVar1;
  param_1[0x13] = puVar1[1];
  param_1[0x12] = uVar13;
  *(undefined1 *)(param_1 + 0x14) = uVar5;
  _swift_bridgeObjectRetain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar9);
  return;
}



/* Entry: 1047b15a4; end: 1047b15c3;  */

void FUN_1047b15a4(void)

{
  _objc_opt_self(&PTR_PTR_1129d3410);
  return;
}



/* Entry: 1047b15c4; end: 1047b1657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b15c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ee80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee90) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308ee98) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b1658; end: 1047b16a3; -[SCAdBrandSafetyPods identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308ee80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308ee80))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b16a4; end: 1047b16b3; -[SCAdBrandSafetyPods fullPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b16a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ee88));
  return;
}



/* Entry: 1047b16b4; end: 1047b16c3; -[SCAdBrandSafetyPods standardPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b16b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ee90));
  return;
}



/* Entry: 1047b16c4; end: 1047b16d3; -[SCAdBrandSafetyPods limitedPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b16c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ee98));
  return;
}



/* Entry: 1047b16d4; end: 1047b178b; -[SCAdBrandSafetyPods initWithIdentifier:fullPod:standardPod:limitedPod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b16d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308ee80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308ee88) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308ee90) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308ee98) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1047b178c; end: 1047b17bb;  */

void FUN_1047b178c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b17bc(param_1);
  return;
}



/* Entry: 1047b17bc; end: 1047b194f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b17bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ee80);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    _swift_bridgeObjectRetain(uStack_58);
    uVar4 = 0;
  }
  else {
    uVar3 = param_1[4];
    uVar4 = param_1[2];
    FUN_1047b68dc(0);
    _objc_allocWithZone();
    func_0x000100402194(&uStack_60,auStack_80);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1047b604c(uVar4,lVar2,uVar3);
  }
  *(undefined8 *)(unaff_x20 + _DAT_11308ee88) = uVar4;
  lVar2 = param_1[6];
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_1[7];
    uVar4 = param_1[5];
    FUN_1047b68dc(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1047b604c(uVar4,lVar2,uVar3);
  }
  *(undefined8 *)(unaff_x20 + _DAT_11308ee90) = uVar4;
  lVar2 = param_1[9];
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar3 = param_1[10];
    uVar4 = param_1[8];
    FUN_1047b68dc(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1047b604c(uVar4,lVar2,uVar3);
  }
  func_0x0001046c2da0(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308ee98) = uVar4;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b1950; end: 1047b1953; -[SCAdBrandSafetyPods copyWithZone:] */

void FUN_1047b1950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b1954; end: 1047b1a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1954(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ee80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308ee80))[1]);
  uVar1 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x444f505f4c4c5546;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f505f4c4c5546,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0x445241444e415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241444e415453,0xec000000444f505f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0x5f444554494d494c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f444554494d494c,0xeb00000000444f50);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047b1a9c; end: 1047b1aeb; -[SCAdBrandSafetyPods encodeWithCoder:] */

void FUN_1047b1a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b1954(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b1aec; end: 1047b1b1b;  */

void FUN_1047b1aec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b1b1c(param_1);
  return;
}



/* Entry: 1047b1b1c; end: 1047b1eb3;  */

undefined8 FUN_1047b1b1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  uVar7 = 0;
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar5 = uStack_b0;
    if ((uVar7 & 1) != 0) {
      uVar8 = 0x444f505f4c4c5546;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f505f4c4c5546,0xe800000000000000);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
        _swift_unknownObjectRelease(lVar6);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        FUN_1047b68dc(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar8,6);
        uVar8 = uStack_b0;
        if (iVar2 == 0) {
          uVar8 = 0;
        }
      }
      uVar9 = 0x445241444e415453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241444e415453,0xec000000444f505f);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
        _swift_unknownObjectRelease(lVar6);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        FUN_1047b68dc(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar9,6);
        uVar9 = uStack_b0;
        if (iVar3 == 0) {
          uVar9 = 0;
        }
      }
      uVar10 = 0x5f444554494d494c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f444554494d494c,0xeb00000000444f50);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
        _swift_unknownObjectRelease(lVar6);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        FUN_1047b68dc(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar10,6);
        uVar10 = uStack_b0;
        if (iVar4 == 0) {
          uVar10 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uStack_a8);
      _swift_bridgeObjectRelease(uStack_a8);
      func_0x00010c01b6c0();
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar10);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047b1eb4; end: 1047b1edb; -[SCAdBrandSafetyPods initWithCoder:] */

void FUN_1047b1eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047b1b1c();
  return;
}



/* Entry: 1047b1edc; end: 1047b1f13; -[SCAdBrandSafetyPods description] */

void FUN_1047b1edc(void)

{
  undefined1 auStack_68 [88];
  
  _objc_retain();
  FUN_1047b1fec(auStack_68);
  func_0x0001046c2da0(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


