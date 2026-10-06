/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049ba968; end: 1049ba9a7;  */

void FUN_1049ba968(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  (*param_4)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1049ba9a8; end: 1049ba9b3;  */

void FUN_1049ba9a8(undefined8 param_1,undefined8 param_2)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  (*(code *)0x1049ba7fc)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049ba9b4; end: 1049baa6f;  */

void FUN_1049ba9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  (*param_4)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049baa70; end: 1049baa87;  */

void FUN_1049baa70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a3418;
  func_0x0001048db364();
  _swift_initStaticObject();
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1049baa88; end: 1049baaa3;  */

void FUN_1049baa88(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049befd0(param_1,param_2,0x1130a10f8);
  return;
}



/* Entry: 1049baaa4; end: 1049bab23;  */

void FUN_1049baaa4(void)

{
  func_0x0001048db364(0x1130a3420);
  _swift_initStaticObject();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1049bab24; end: 1049babff;  */

uint FUN_1049bab24(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  uint uVar8;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  uVar8 = 0x6c6f6f62;
  if (cVar5 != '\x01') {
    uVar8 = 0x746e69;
  }
  lVar1 = -0x1c00000000000000;
  if (cVar5 != '\x01') {
    lVar1 = -0x1d00000000000000;
  }
  uVar7 = 0x7961727261;
  if (cVar5 != '\0') {
    uVar7 = (ulong)uVar8;
  }
  lVar2 = -0x1b00000000000000;
  if (cVar5 != '\0') {
    lVar2 = lVar1;
  }
  uVar8 = 0x6c6f6f62;
  if (cVar6 != '\x01') {
    uVar8 = 0x746e69;
  }
  lVar1 = -0x1c00000000000000;
  if (cVar6 != '\x01') {
    lVar1 = -0x1d00000000000000;
  }
  uVar3 = 0x7961727261;
  if (cVar6 != '\0') {
    uVar3 = (ulong)uVar8;
  }
  lVar4 = -0x1b00000000000000;
  if (cVar6 != '\0') {
    lVar4 = lVar1;
  }
  if ((uVar7 == uVar3) && (lVar2 == lVar4)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,lVar2,uVar3,lVar4,0);
    uVar8 = (uint)uVar7;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return uVar8 & 1;
}



/* Entry: 1049bac00; end: 1049badaf;  */

void FUN_1049bac00(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6c6f6f62;
  if (cVar4 != '\x01') {
    uVar5 = 0x746e69;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x7961727261;
  if (cVar4 != '\0') {
    uVar2 = (ulong)uVar5;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049badb0; end: 1049bae0f;  */

void FUN_1049badb0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar5 = 0x6c6f6f62;
  if (cVar4 != '\x01') {
    uVar5 = 0x746e69;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x7961727261;
  if (cVar4 != '\0') {
    uVar2 = (ulong)uVar5;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1049bae10; end: 1049bae43;  */

void FUN_1049bae10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001048db364();
  _swift_initStaticObject();
  *param_1 = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1049bae44; end: 1049bc463;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1049bae44(byte ******param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                  byte *******param_5,byte *******param_6)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *******pppppppbVar11;
  long lVar12;
  ulong uVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  byte *******pppppppbVar16;
  uint uVar17;
  byte ******ppppppbVar18;
  byte *******pppppppbVar19;
  byte *****pppppbVar20;
  ulong uVar21;
  byte *****pppppbVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  long lVar26;
  byte *******pppppppbVar27;
  ulong uVar28;
  byte *******pppppppbVar29;
  byte *pbVar30;
  undefined8 uVar31;
  ulong *puVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  byte *******unaff_x22;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined4 uVar40;
  byte *******unaff_x25;
  byte *******pppppppbVar41;
  undefined *unaff_x27;
  byte ******ppppppbVar42;
  ulong auStack_230 [8];
  uint uStack_1ec;
  ulong auStack_1e8 [5];
  undefined4 uStack_1bc;
  long alStack_1b8 [3];
  ulong auStack_1a0 [4];
  long alStack_180 [4];
  long alStack_160 [2];
  undefined1 auStack_150 [32];
  long alStack_130 [14];
  byte ******ppppppbStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppbVar7 = (byte *******)0x0;
  pppppppbVar23 = param_4;
  __sSS10FoundationE8EncodingVMa();
  ppppppbVar42 = pppppppbVar7[-1];
  lVar4 = -((long)ppppppbVar42[8] + 0xfU & 0xfffffffffffffff0);
  pppppppbVar41 = (byte *******)((long)&ppppppbStack_c0 + lVar4);
  _swift_bridgeObjectRetain(param_3);
  pppppppbVar24 = param_2;
  FUN_1049be958(param_2,param_3);
  ppppppbVar18 = ppppppbVar42;
  if (((uint)pppppppbVar24 & 0xff) == 3) {
LAB_1049bb4ac:
    pppppppbVar11 = unaff_x25;
    pppppppbVar8 = param_5;
    pppppppbVar16 = param_4;
    ppppppbVar42 = param_1;
    func_0x0001000bb420();
  }
  else {
    func_0x0001000bb420(param_4,&pppppppbStack_88);
    unaff_x27 = PTR___sypN_11034f1a8;
    pppppppbVar8 = (byte *******)&pppppppbStack_a8;
    pppppppbVar23 = (byte *******)(PTR___sypN_11034f1a8 + 8);
    param_6 = (byte *******)0x6;
    param_5 = (byte *******)PTR___sSSN_11034da80;
    _swift_dynamicCast(pppppppbVar8,&pppppppbStack_88);
    pppppppbVar25 = pppppppbStack_a0;
    pppppppbVar11 = pppppppbStack_a8;
    unaff_x22 = pppppppbVar24;
    if (((ulong)pppppppbVar8 & 1) == 0) goto LAB_1049bb4ac;
    pppppppbStack_88 = pppppppbStack_a8;
    pppppppbStack_80 = pppppppbStack_a0;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppppbVar41);
    func_0x000100e8b654();
    ppppppbVar18 = (byte ******)0x0;
    param_3 = pppppppbVar41;
    pppppppbVar23 = (byte *******)PTR___sSSN_11034da80;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF();
    (*(code *)ppppppbVar42[1])(pppppppbVar41,pppppppbVar7);
    param_2 = pppppppbVar25;
    if (0xe < (ulong)ppppppbVar18 >> 0x3c) {
LAB_1049baf58:
      _swift_bridgeObjectRelease(pppppppbVar25);
      param_5 = pppppppbVar8;
      unaff_x25 = pppppppbVar11;
      goto LAB_1049bb4ac;
    }
    pppppppbVar16 = param_3;
    ppppppbVar42 = ppppppbVar18;
    if (((ulong)pppppppbVar24 & 0xff) == 0) {
      _swift_bridgeObjectRelease(pppppppbVar25);
      puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      _swift_getInitializedObjCClass();
      pppppppbVar7 = param_3;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,ppppppbVar18);
      pppppppbStack_88 = (byte *******)0x0;
      param_6 = (byte *******)&pppppppbStack_88;
      param_5 = (byte *******)0x0;
      pppppppbVar23 = pppppppbVar7;
      _objc_msgSend(puVar9,PTR_s_JSONObjectWithData_options_error_11254dfe0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppppbVar7);
      param_2 = pppppppbStack_88;
      if (puVar9 == (undefined *)0x0) {
        pppppppbVar7 = pppppppbStack_88;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(pppppppbVar7);
        _swift_willThrow();
        func_0x0001000b44c0(param_3,ppppppbVar18);
        _swift_errorRelease(param_2);
        unaff_x25 = param_2;
      }
      else {
        _objc_retain();
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&pppppppbStack_88,puVar9);
        _swift_unknownObjectRelease(puVar9);
        param_2 = (byte *******)0x11309d6d0;
        func_0x0001048db364();
        pppppppbVar25 = (byte *******)&pppppppbStack_a8;
        pppppppbVar23 = (byte *******)(unaff_x27 + 8);
        param_6 = (byte *******)0x6;
        pppppppbVar8 = param_2;
        _swift_dynamicCast(pppppppbVar25,&pppppppbStack_88);
        unaff_x22 = pppppppbStack_a8;
        if (((ulong)pppppppbVar25 & 1) != 0) {
          param_1[3] = (byte *****)param_2;
          func_0x0001000b44c0();
          *param_1 = (byte *****)unaff_x22;
          goto LAB_1049bb4b8;
        }
LAB_1049bb4a0:
        func_0x0001000b44c0(param_3,ppppppbVar18);
        param_5 = pppppppbVar8;
        unaff_x22 = pppppppbVar24;
        unaff_x25 = pppppppbVar11;
      }
      goto LAB_1049bb4ac;
    }
    if (((uint)pppppppbVar24 & 0xff) == 1) {
      pppppppbVar27 = (byte *******)((ulong)pppppppbVar25 >> 0x38 & 0xf);
      pppppppbVar19 = (byte *******)((ulong)pppppppbVar11 & 0xffffffffffff);
      pppppppbVar29 = pppppppbVar19;
      if (((ulong)pppppppbVar25 & 0x2000000000000000) != 0) {
        pppppppbVar29 = pppppppbVar27;
      }
      if (pppppppbVar29 == (byte *******)0x0) {
        func_0x0001000b44c0(param_3,ppppppbVar18);
        goto LAB_1049baf58;
      }
      if (((ulong)pppppppbVar25 >> 0x3c & 1) == 0) {
        if (((ulong)pppppppbVar25 >> 0x3d & 1) == 0) {
          if (((ulong)pppppppbVar11 >> 0x3c & 1) == 0) {
            pppppppbVar29 = pppppppbVar11;
            pppppppbVar19 = pppppppbVar25;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pppppppbVar29 = (byte *******)(((ulong)pppppppbVar25 & 0xfffffffffffffff) + 0x20);
          }
          if (*(byte *)pppppppbVar29 == 0x2b) {
            if ((long)pppppppbVar19 < 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb78c);
              (*pcVar5)();
            }
            pbVar10 = (byte *)((long)pppppppbVar19 + -1);
            if (pbVar10 == (byte *)0x0) goto LAB_1049bb484;
            if (pppppppbVar29 == (byte *******)0x0) goto LAB_1049bb428;
            pppppppbVar7 = (byte *******)0x0;
            do {
              pppppppbVar29 = (byte *******)((long)pppppppbVar29 + 1);
              if (((9 < *(byte *)pppppppbVar29 - 0x30) ||
                  (lVar12 = (long)pppppppbVar7 * 10,
                  SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar29 - 0x30),
                 pppppppbVar7 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1049bb484;
              pppppppbVar24 = (byte *******)0x0;
              pbVar10 = pbVar10 + -1;
            } while (pbVar10 != (byte *)0x0);
          }
          else if (*(byte *)pppppppbVar29 == 0x2d) {
            if ((long)pppppppbVar19 < 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb784);
              (*pcVar5)();
            }
            pbVar10 = (byte *)((long)pppppppbVar19 + -1);
            if (pbVar10 == (byte *)0x0) {
LAB_1049bb484:
              pppppppbVar7 = (byte *******)0x0;
              pppppppbVar24 = (byte *******)0x1;
            }
            else if (pppppppbVar29 == (byte *******)0x0) {
LAB_1049bb428:
              pppppppbVar7 = (byte *******)0x0;
              pppppppbVar24 = (byte *******)0x0;
            }
            else {
              pppppppbVar7 = (byte *******)0x0;
              do {
                pppppppbVar29 = (byte *******)((long)pppppppbVar29 + 1);
                if (((9 < *(byte *)pppppppbVar29 - 0x30) ||
                    (lVar12 = (long)pppppppbVar7 * 10,
                    SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar29 - 0x30),
                   pppppppbVar7 = (byte *******)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
                goto LAB_1049bb484;
                pppppppbVar24 = (byte *******)0x0;
                pbVar10 = pbVar10 + -1;
              } while (pbVar10 != (byte *)0x0);
            }
          }
          else {
            if (pppppppbVar19 == (byte *******)0x0) goto LAB_1049bb484;
            if (pppppppbVar29 == (byte *******)0x0) goto LAB_1049bb428;
            pppppppbVar7 = (byte *******)0x0;
            do {
              if (((9 < *(byte *)pppppppbVar29 - 0x30) ||
                  (lVar12 = (long)pppppppbVar7 * 10,
                  SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar29 - 0x30),
                 pppppppbVar7 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1049bb484;
              pppppppbVar24 = (byte *******)0x0;
              pppppppbVar29 = (byte *******)((long)pppppppbVar29 + 1);
              pppppppbVar19 = (byte *******)((long)pppppppbVar19 + -1);
            } while (pppppppbVar19 != (byte *******)0x0);
          }
        }
        else {
          pppppppbStack_88 = pppppppbVar11;
          pppppppbStack_80 = (byte *******)((ulong)pppppppbVar25 & 0xffffffffffffff);
          uVar17 = (uint)pppppppbVar11 & 0xff;
          if (uVar17 == 0x2b) {
            if (pppppppbVar27 == (byte *******)0x0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb790);
              (*pcVar5)();
            }
            pbVar10 = (byte *)((long)pppppppbVar27 + -1);
            if (pbVar10 == (byte *)0x0) goto LAB_1049bb484;
            pppppppbVar7 = (byte *******)0x0;
            pbVar30 = (byte *)((ulong)&pppppppbStack_88 | 1);
            do {
              if (((9 < *pbVar30 - 0x30) ||
                  (lVar12 = (long)pppppppbVar7 * 10,
                  SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar30 - 0x30),
                 pppppppbVar7 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1049bb484;
              pppppppbVar24 = (byte *******)0x0;
              pbVar30 = pbVar30 + 1;
              pbVar10 = pbVar10 + -1;
            } while (pbVar10 != (byte *)0x0);
          }
          else if (uVar17 == 0x2d) {
            if (pppppppbVar27 == (byte *******)0x0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb788);
              (*pcVar5)();
            }
            pbVar10 = (byte *)((long)pppppppbVar27 + -1);
            if (pbVar10 == (byte *)0x0) goto LAB_1049bb484;
            pppppppbVar7 = (byte *******)0x0;
            pbVar30 = (byte *)((ulong)&pppppppbStack_88 | 1);
            do {
              if (((9 < *pbVar30 - 0x30) ||
                  (lVar12 = (long)pppppppbVar7 * 10,
                  SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar30 - 0x30),
                 pppppppbVar7 = (byte *******)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
              goto LAB_1049bb484;
              pppppppbVar24 = (byte *******)0x0;
              pbVar30 = pbVar30 + 1;
              pbVar10 = pbVar10 + -1;
            } while (pbVar10 != (byte *)0x0);
          }
          else {
            if (pppppppbVar27 == (byte *******)0x0) goto LAB_1049bb484;
            pppppppbVar7 = (byte *******)0x0;
            pppppppbVar29 = (byte *******)&pppppppbStack_88;
            do {
              if (((9 < *(byte *)pppppppbVar29 - 0x30) ||
                  (lVar12 = (long)pppppppbVar7 * 10,
                  SUB168(SEXT816((long)pppppppbVar7) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar29 - 0x30),
                 pppppppbVar7 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1049bb484;
              pppppppbVar24 = (byte *******)0x0;
              pppppppbVar29 = (byte *******)((long)pppppppbVar29 + 1);
              pppppppbVar27 = (byte *******)((long)pppppppbVar27 + -1);
            } while (pppppppbVar27 != (byte *******)0x0);
          }
        }
        pppppppbStack_a8 = (byte *******)CONCAT71(pppppppbStack_a8._1_7_,(char)pppppppbVar24);
        _swift_bridgeObjectRelease(pppppppbVar25);
        if ((int)pppppppbVar24 != 0) goto LAB_1049bb4a0;
      }
      else {
        pppppppbVar23 = (byte *******)0xa;
        pppppppbVar29 = pppppppbVar25;
        func_0x000100edba6c();
        _swift_bridgeObjectRelease(pppppppbVar25);
        pppppppbVar7 = pppppppbVar11;
        pppppppbVar11 = pppppppbVar29;
        if (((ulong)pppppppbVar29 & 1) != 0) goto LAB_1049bb4a0;
      }
      param_1[3] = (byte *****)PTR___sSbN_11034dd40;
      func_0x0001000b44c0();
      *(bool *)param_1 = pppppppbVar7 != (byte *******)0x0;
      param_2 = (byte *******)(ulong)(pppppppbVar7 != (byte *******)0x0);
      unaff_x22 = pppppppbVar24;
    }
    else {
      _swift_bridgeObjectRelease(pppppppbVar25);
      func_0x0001000bb420(param_4,&pppppppbStack_88);
      puVar9 = PTR___sSiN_11034deb0;
      pppppppbVar29 = (byte *******)&pppppppbStack_a8;
      pppppppbVar23 = (byte *******)(unaff_x27 + 8);
      param_6 = (byte *******)0x6;
      pppppppbVar8 = (byte *******)PTR___sSiN_11034deb0;
      _swift_dynamicCast(pppppppbVar29,&pppppppbStack_88);
      pppppppbVar25 = pppppppbStack_a8;
      if ((int)pppppppbVar29 == 0) {
        func_0x0001000bb420(param_4,&pppppppbStack_a8);
        pbVar10 = &bStack_b8;
        pppppppbVar23 = (byte *******)(unaff_x27 + 8);
        param_6 = (byte *******)0x6;
        pppppppbVar8 = (byte *******)PTR___sSSN_11034da80;
        _swift_dynamicCast(pbVar10,&pppppppbStack_a8);
        if ((int)pbVar10 == 0) {
          pppppppbVar25 = (byte *******)0x0;
          param_2 = (byte *******)0xe000000000000000;
        }
        else {
          pppppppbVar25 = (byte *******)CONCAT71(uStack_b7,bStack_b8);
          param_2 = pppppppbStack_b0;
        }
        pppppppbVar27 = (byte *******)((ulong)param_2 >> 0x38 & 0xf);
        pppppppbVar19 = (byte *******)((ulong)pppppppbVar25 & 0xffffffffffff);
        pppppppbVar29 = pppppppbVar19;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          pppppppbVar29 = pppppppbVar27;
        }
        if (pppppppbVar29 == (byte *******)0x0) {
          func_0x0001000b44c0(param_3);
          pppppppbVar16 = param_2;
          _swift_bridgeObjectRelease();
        }
        else {
          if (((ulong)param_2 >> 0x3c & 1) == 0) {
            if (((ulong)param_2 >> 0x3d & 1) == 0) {
              if (((ulong)pppppppbVar25 >> 0x3c & 1) == 0) {
                pppppppbVar19 = param_2;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
              }
              else {
                pppppppbVar25 = (byte *******)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
              }
              if (*(byte *)pppppppbVar25 == 0x2b) {
                if ((long)pppppppbVar19 < 1) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb79c);
                  (*pcVar5)();
                }
                pbVar10 = (byte *)((long)pppppppbVar19 + -1);
                if (pbVar10 == (byte *)0x0) goto LAB_1049bb5fc;
                if (pppppppbVar25 == (byte *******)0x0) goto LAB_1049bb60c;
                pppppppbVar29 = (byte *******)0x0;
                do {
                  pppppppbVar25 = (byte *******)((long)pppppppbVar25 + 1);
                  if (((9 < *(byte *)pppppppbVar25 - 0x30) ||
                      (lVar12 = (long)pppppppbVar29 * 10,
                      SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar25 - 0x30),
                     pppppppbVar29 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
                  goto LAB_1049bb5fc;
                  pbVar10 = pbVar10 + -1;
                } while (pbVar10 != (byte *)0x0);
              }
              else if (*(byte *)pppppppbVar25 == 0x2d) {
                if ((long)pppppppbVar19 < 1) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb794);
                  (*pcVar5)();
                }
                pbVar10 = (byte *)((long)pppppppbVar19 + -1);
                if (pbVar10 == (byte *)0x0) {
LAB_1049bb5fc:
                  pppppppbVar29 = (byte *******)0x0;
                  bStack_b8 = 1;
                  goto LAB_1049bb678;
                }
                if (pppppppbVar25 == (byte *******)0x0) {
LAB_1049bb60c:
                  pppppppbVar29 = (byte *******)0x0;
                }
                else {
                  pppppppbVar29 = (byte *******)0x0;
                  do {
                    pppppppbVar25 = (byte *******)((long)pppppppbVar25 + 1);
                    if (((9 < *(byte *)pppppppbVar25 - 0x30) ||
                        (lVar12 = (long)pppppppbVar29 * 10,
                        SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar25 - 0x30),
                       pppppppbVar29 = (byte *******)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
                    goto LAB_1049bb5fc;
                    pbVar10 = pbVar10 + -1;
                  } while (pbVar10 != (byte *)0x0);
                }
              }
              else {
                if (pppppppbVar19 == (byte *******)0x0) goto LAB_1049bb5fc;
                if (pppppppbVar25 == (byte *******)0x0) goto LAB_1049bb60c;
                pppppppbVar29 = (byte *******)0x0;
                do {
                  if (((9 < *(byte *)pppppppbVar25 - 0x30) ||
                      (lVar12 = (long)pppppppbVar29 * 10,
                      SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar25 - 0x30),
                     pppppppbVar29 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
                  goto LAB_1049bb5fc;
                  pppppppbVar25 = (byte *******)((long)pppppppbVar25 + 1);
                  pppppppbVar19 = (byte *******)((long)pppppppbVar19 + -1);
                } while (pppppppbVar19 != (byte *******)0x0);
              }
              bStack_b8 = 0;
            }
            else {
              pppppppbStack_a8 = pppppppbVar25;
              pppppppbStack_a0 = (byte *******)((ulong)param_2 & 0xffffffffffffff);
              uVar17 = (uint)pppppppbVar25 & 0xff;
              if (uVar17 == 0x2b) {
                if (pppppppbVar27 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb7a0);
                  (*pcVar5)();
                }
                pbVar10 = (byte *)((long)pppppppbVar27 + -1);
                if (pbVar10 == (byte *)0x0) goto LAB_1049bb66c;
                pppppppbVar29 = (byte *******)0x0;
                pbVar30 = (byte *)((ulong)&pppppppbStack_a8 | 1);
                do {
                  if (((9 < *pbVar30 - 0x30) ||
                      (lVar12 = (long)pppppppbVar29 * 10,
                      SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar13 = (ulong)(byte)(*pbVar30 - 0x30),
                     pppppppbVar29 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
                  goto LAB_1049bb66c;
                  bStack_b8 = 0;
                  pbVar30 = pbVar30 + 1;
                  pbVar10 = pbVar10 + -1;
                } while (pbVar10 != (byte *)0x0);
              }
              else if (uVar17 == 0x2d) {
                if (pppppppbVar27 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bb798);
                  (*pcVar5)();
                }
                pbVar10 = (byte *)((long)pppppppbVar27 + -1);
                if (pbVar10 == (byte *)0x0) {
LAB_1049bb66c:
                  pppppppbVar29 = (byte *******)0x0;
                  bStack_b8 = 1;
                }
                else {
                  pppppppbVar29 = (byte *******)0x0;
                  pbVar30 = (byte *)((ulong)&pppppppbStack_a8 | 1);
                  do {
                    if (((9 < *pbVar30 - 0x30) ||
                        (lVar12 = (long)pppppppbVar29 * 10,
                        SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar13 = (ulong)(byte)(*pbVar30 - 0x30),
                       pppppppbVar29 = (byte *******)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
                    goto LAB_1049bb66c;
                    bStack_b8 = 0;
                    pbVar30 = pbVar30 + 1;
                    pbVar10 = pbVar10 + -1;
                  } while (pbVar10 != (byte *)0x0);
                }
              }
              else {
                if (pppppppbVar27 == (byte *******)0x0) goto LAB_1049bb66c;
                pppppppbVar29 = (byte *******)0x0;
                pppppppbVar24 = (byte *******)&pppppppbStack_a8;
                do {
                  if (((9 < *(byte *)pppppppbVar24 - 0x30) ||
                      (lVar12 = (long)pppppppbVar29 * 10,
                      SUB168(SEXT816((long)pppppppbVar29) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar13 = (ulong)(byte)(*(byte *)pppppppbVar24 - 0x30),
                     pppppppbVar29 = (byte *******)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
                  goto LAB_1049bb66c;
                  bStack_b8 = 0;
                  pppppppbVar24 = (byte *******)((long)pppppppbVar24 + 1);
                  pppppppbVar27 = (byte *******)((long)pppppppbVar27 + -1);
                } while (pppppppbVar27 != (byte *******)0x0);
              }
            }
LAB_1049bb678:
            bVar2 = bStack_b8;
            pppppppbVar24 = (byte *******)(ulong)bStack_b8;
            _swift_bridgeObjectRelease(param_2);
            pppppppbVar25 = pppppppbVar29;
            if (bVar2 == 0) goto LAB_1049bb73c;
          }
          else {
            pppppppbVar23 = (byte *******)0xa;
            pppppppbVar11 = param_2;
            func_0x000100edba6c();
            _swift_bridgeObjectRelease(param_2);
            pppppppbVar7 = param_2;
            if (((ulong)pppppppbVar11 & 1) == 0) goto LAB_1049bb73c;
          }
          func_0x0001000b44c0();
          param_2 = (byte *******)puVar9;
          param_4 = pppppppbVar25;
        }
        param_1[1] = (byte *****)0x0;
        *param_1 = (byte *****)0x0;
        param_1[3] = (byte *****)0x0;
        param_1[2] = (byte *****)0x0;
        unaff_x22 = pppppppbVar24;
      }
      else {
LAB_1049bb73c:
        param_1[3] = (byte *****)puVar9;
        func_0x0001000b44c0();
        *param_1 = (byte *****)pppppppbVar25;
        param_2 = (byte *******)puVar9;
        unaff_x22 = pppppppbVar24;
        param_4 = pppppppbVar25;
      }
    }
  }
LAB_1049bb4b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(byte *******)((long)alStack_130 + lVar4 + 0x10) = ppppppbVar18;
  *(undefined **)((long)alStack_130 + lVar4 + 0x18) = unaff_x27;
  *(byte ********)((long)alStack_130 + lVar4 + 0x20) = pppppppbVar41;
  *(byte ********)((long)alStack_130 + lVar4 + 0x28) = pppppppbVar11;
  *(byte ********)((long)alStack_130 + lVar4 + 0x30) = pppppppbVar7;
  *(byte ********)((long)alStack_130 + lVar4 + 0x38) = param_4;
  *(byte ********)((long)alStack_130 + lVar4 + 0x40) = unaff_x22;
  *(byte ********)((long)alStack_130 + lVar4 + 0x48) = param_2;
  *(byte ********)((long)alStack_130 + lVar4 + 0x50) = param_3;
  *(byte *******)((long)alStack_130 + lVar4 + 0x58) = param_1;
  *(undefined1 **)((long)alStack_130 + lVar4 + 0x60) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_130 + lVar4 + 0x68) = 0x1049bb7a4;
  *(undefined8 *)((long)alStack_130 + lVar4) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar36 = *(long *)(lVar12 + -8);
  lVar26 = *(long *)(lVar36 + 0x40);
  if (pppppppbVar16[2] != (byte ******)0x0) {
    *(long *)((long)alStack_1b8 + lVar4) = lVar12;
    _swift_bridgeObjectRetain(pppppppbVar16);
    lVar12 = 0x746e657665;
    uVar13 = 0;
    func_0x000100029284(0x746e657665);
    if ((uVar13 & 1) == 0) {
LAB_1049bb9a8:
      _swift_bridgeObjectRelease(pppppppbVar16);
    }
    else {
      func_0x0001000bb420(pppppppbVar16[7] + lVar12 * 4,(long)alStack_160 + lVar4);
      _swift_bridgeObjectRelease(pppppppbVar16);
      uVar13 = (long)alStack_180 + lVar4;
      _swift_dynamicCast(uVar13,(long)alStack_160 + lVar4,PTR___sypN_11034f1a8 + 8,
                         PTR___sSSN_11034da80,6);
      if ((uVar13 & 1) != 0) {
        *(ulong *)((long)auStack_1e8 + lVar4 + 0x18) =
             (long)auStack_230 + (lVar4 - (lVar26 + 0xfU & 0xfffffffffffffff0));
        *(long *)((long)auStack_1e8 + lVar4 + 0x20) = lVar36;
        *(byte *******)((long)auStack_1e8 + lVar4 + 8) = ppppppbVar42;
        lVar12 = *(long *)((long)alStack_180 + lVar4);
        lVar26 = *(long *)((long)alStack_180 + lVar4 + 8);
        if ((lVar12 == -0x2fffffffffffffee) && (lVar26 == -0x7ffffffef0dd8bb0)) {
LAB_1049bb8d8:
          _swift_bridgeObjectRelease(lVar26);
          *(undefined4 *)((long)&uStack_1bc + lVar4) = 0;
          uVar31 = 0x800000010f227430;
          uVar40 = 1;
          uVar13 = 0xd000000000000010;
        }
        else {
          uVar13 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000012,0x800000010f227450,lVar12,lVar26,0);
          if ((uVar13 & 1) != 0) goto LAB_1049bb8d8;
          uVar13 = 0xd000000000000011;
          if ((lVar12 == -0x2fffffffffffffef) && (lVar26 == -0x7ffffffef0dd8b90)) {
            _swift_bridgeObjectRelease(0x800000010f227470);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000011,0x800000010f227470,lVar12,lVar26,0);
            _swift_bridgeObjectRelease(lVar26);
            if ((uVar13 & 1) == 0) {
              pppppppbVar16 = (byte *******)0xe500000000000000;
              goto LAB_1049bb9a8;
            }
          }
          uVar13 = 0x6d6f74737563;
          uVar40 = 0;
          uVar31 = 0xe600000000000000;
          *(undefined4 *)((long)&uStack_1bc + lVar4) = 1;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar13,uVar31,0x726568746f,0xe500000000000000,0);
        _swift_bridgeObjectRelease(uVar31);
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)((long)&uStack_1ec + lVar4) = uVar40;
          *(byte ********)((long)auStack_230 + lVar4 + 0x18) = pppppppbVar23;
          *(byte ********)((long)auStack_1e8 + lVar4 + 0x10) = pppppppbVar8;
          *(byte ********)((long)auStack_230 + lVar4 + 0x20) = param_6;
          uVar28 = 1L << ((ulong)*(byte *)(pppppppbVar16 + 4) & 0x3f);
          uVar13 = 0xffffffffffffffff;
          if ((long)uVar28 < 0x40) {
            uVar13 = ~(-1L << (uVar28 & 0x3f));
          }
          ppppppbVar18 = (byte ******)(uVar13 & (ulong)pppppppbVar16[8]);
          uVar13 = uVar28 + 0x3f >> 6;
          lVar26 = (long)alStack_160 + lVar4;
          *(char **)((long)auStack_230 + lVar4 + 0x38) = "},N";
          _swift_bridgeObjectRetain(pppppppbVar16);
          lVar12 = 0;
          *(undefined8 *)((long)auStack_230 + lVar4 + 0x28) = 0;
          *(ulong *)((long)auStack_1e8 + lVar4) = uVar13;
          do {
            for (; ppppppbVar18 != (byte ******)0x0;
                ppppppbVar18 = (byte ******)((long)ppppppbVar18 - 1U & (ulong)ppppppbVar18)) {
              uVar28 = ((ulong)ppppppbVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       ((ulong)ppppppbVar18 & 0x5555555555555555) << 1;
              uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
              uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
              uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
              uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) | lVar12 << 6;
              ppppppbVar42 = pppppppbVar16[7];
              pppppbVar15 = pppppppbVar16[6][uVar28 * 2];
              pcVar5 = (code *)(pppppppbVar16[6] + uVar28 * 2)[1];
              *(byte ******)((long)alStack_160 + lVar4) = pppppbVar15;
              *(code **)((long)alStack_160 + lVar4 + 8) = pcVar5;
              func_0x0001000bb420(ppppppbVar42 + uVar28 * 4,lVar26 + 0x10);
              _swift_bridgeObjectRetain_n(pcVar5,2);
              pppppbVar14 = pppppbVar15;
              pppppbVar20 = (byte *****)pcVar5;
              func_0x0001049bee6c(pppppbVar15,pcVar5,0x1130a0788,0x1130a0958);
              if (((uint)pppppbVar14 & 0xff) == 0x12) {
                func_0x0001000bb420(lVar26 + 0x10,(long)alStack_180 + lVar4);
                uVar28 = (long)auStack_1a0 + lVar4;
                _swift_dynamicCast(uVar28,(long)alStack_180 + lVar4,PTR___sypN_11034f1a8 + 8,
                                   PTR___sSSN_11034da80,6);
                if ((uVar28 & 1) != 0) {
                  uVar31 = *(undefined8 *)((long)auStack_1a0 + lVar4);
                  uVar28 = *(ulong *)((long)auStack_1a0 + lVar4 + 8);
                  if ((pppppbVar15 == (byte *****)0x655f6d6f74737563 &&
                       (byte *****)pcVar5 == (byte *****)0xed000073746e6576) ||
                     (pppppbVar14 = pppppbVar15,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (pppppbVar15,pcVar5,0x655f6d6f74737563,0xed000073746e6576,0),
                     ((ulong)pppppbVar14 & 1) != 0)) {
                    uVar17 = *(uint *)((long)&uStack_1ec + lVar4);
                    *(undefined8 *)((long)auStack_230 + lVar4 + 0x30) = uVar31;
                    if ((uVar17 & 1) == 0) {
                      uVar37 = 0xe600000000000000;
                      _swift_bridgeObjectRelease(0xe600000000000000);
                    }
                    else {
                      uVar37 = *(ulong *)((long)auStack_230 + lVar4 + 0x38);
                      uVar21 = 0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000010,uVar37 | 0x8000000000000000,0x6d6f74737563,
                                 0xe600000000000000,0);
                      uVar37 = uVar37 | 0x8000000000000000;
                      uVar31 = *(undefined8 *)((long)auStack_230 + lVar4 + 0x30);
                      _swift_bridgeObjectRelease(uVar37);
                      if ((uVar21 & 1) == 0) goto LAB_1049bbc98;
                    }
                    *(undefined8 *)((long)alStack_180 + lVar4) = uVar31;
                    *(ulong *)((long)alStack_180 + lVar4 + 8) = uVar28;
                    uVar38 = *(undefined8 *)((long)auStack_1e8 + lVar4 + 0x18);
                    __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar38);
                    func_0x000100e8b654();
                    uVar21 = 0;
                    uVar31 = uVar38;
                    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                              (uVar38,0,PTR___sSSN_11034da80,uVar37);
                    *(undefined8 *)((long)auStack_230 + lVar4 + 0x10) = uVar31;
                    (**(code **)(*(long *)((long)auStack_1e8 + lVar4 + 0x20) + 8))
                              (uVar38,*(undefined8 *)((long)alStack_1b8 + lVar4));
                    if (0xe < uVar21 >> 0x3c) goto LAB_1049bbc98;
                    *(ulong *)((long)auStack_230 + lVar4 + 8) = uVar28;
                    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                    _swift_getInitializedObjCClass();
                    uVar38 = *(undefined8 *)((long)auStack_230 + lVar4 + 0x10);
                    *(ulong *)((long)auStack_230 + lVar4) = uVar21;
                    uVar31 = uVar38;
                    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar38);
                    *(undefined8 *)((long)alStack_180 + lVar4) = 0;
                    _objc_msgSend(puVar9,PTR_s_JSONObjectWithData_options_error_11254dfe0,uVar31,0,
                                  (long)alStack_180 + lVar4);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar31);
                    uVar31 = *(undefined8 *)((long)alStack_180 + lVar4);
                    if (puVar9 == (undefined *)0x0) {
                      uVar39 = uVar31;
                      _objc_retain(uVar31);
                      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar31);
                      _objc_release(uVar39);
                      _swift_willThrow();
                      func_0x0001000b44c0(uVar38,*(undefined8 *)((long)auStack_230 + lVar4));
                      _swift_errorRelease(uVar31);
                      _swift_bridgeObjectRelease(*(undefined8 *)((long)auStack_230 + lVar4 + 8));
                      *(undefined8 *)((long)auStack_230 + lVar4 + 0x28) = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)((long)auStack_230 + lVar4);
                      _objc_retain(uVar31);
                      __ss018_bridgeAnyObjectToB0yypyXlSgF((long)alStack_180 + lVar4,puVar9);
                      _swift_unknownObjectRelease(puVar9);
                      uVar31 = 0x11309d5b0;
                      func_0x0001048db364(0x11309d5b0);
                      uVar13 = (long)auStack_1a0 + lVar4;
                      _swift_dynamicCast(uVar13,(long)alStack_180 + lVar4,PTR___sypN_11034f1a8 + 8,
                                         uVar31,6);
                      uVar28 = *(ulong *)((long)auStack_230 + lVar4 + 8);
                      if ((uVar13 & 1) != 0) {
                        uVar31 = *(undefined8 *)((long)auStack_1a0 + lVar4);
                        uVar37 = *(ulong *)((long)auStack_230 + lVar4 + 0x30) & 0xffffffffffff;
                        if ((uVar28 & 0x2000000000000000) != 0) {
                          uVar37 = uVar28 >> 0x38 & 0xf;
                        }
                        uVar13 = *(ulong *)((long)auStack_1e8 + lVar4);
                        if (uVar37 != 0) {
                          *(undefined **)((long)alStack_180 + lVar4) =
                               PTR___swiftEmptyArrayStorage_11034f1c8;
                          _swift_retain();
                          uVar34 = *(undefined8 *)((long)auStack_230 + lVar4 + 0x28);
                          FUN_1049b8b74(uVar31,(long)alStack_180 + lVar4);
                          *(undefined8 *)((long)auStack_230 + lVar4 + 0x28) = uVar34;
                          func_0x0001000b44c0(uVar38,uVar39);
                          _swift_bridgeObjectRelease(uVar28);
                          _swift_bridgeObjectRelease(uVar31);
                          uVar31 = *(undefined8 *)((long)alStack_180 + lVar4);
                          puVar35 = *(undefined8 **)((long)auStack_230 + lVar4 + 0x20);
                          _swift_bridgeObjectRelease(*puVar35);
                          *puVar35 = uVar31;
                          lVar26 = (long)alStack_160 + lVar4;
                          goto LAB_1049bb9f0;
                        }
                        _swift_bridgeObjectRelease();
                        func_0x0001000b44c0(uVar38,uVar39);
                        goto LAB_1049bbc98;
                      }
                      func_0x0001000b44c0(uVar38,uVar39);
                      _swift_bridgeObjectRelease(uVar28);
                    }
                    uVar13 = *(ulong *)((long)auStack_1e8 + lVar4);
                  }
                  else {
LAB_1049bbc98:
                    _swift_bridgeObjectRelease(uVar28);
                  }
                  lVar26 = (long)alStack_160 + lVar4;
                }
                uVar28 = 0x11309d4f0;
                func_0x0001048db364();
                _swift_initStaticObject();
                _swift_retain();
                _swift_bridgeObjectRetain(pcVar5);
                uVar37 = uVar28;
                __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
                          (uVar28,pppppbVar15,pcVar5);
                _swift_release(uVar28);
                _swift_bridgeObjectRelease(pcVar5);
                if (uVar37 < 3) {
                  _swift_bridgeObjectRetain(pcVar5);
                  FUN_1049bae44((long)alStack_180 + lVar4,pppppbVar15,pcVar5,lVar26 + 0x10);
                  if (*(long *)((long)alStack_180 + lVar4 + 0x18) == 0) {
                    func_0x0001049c057c((long)alStack_180 + lVar4,0x11309c428);
                    puVar32 = *(ulong **)((long)auStack_1e8 + lVar4 + 0x10);
                    uVar13 = *puVar32;
                    _swift_bridgeObjectRetain(uVar13);
                    pppppbVar14 = (byte *****)pcVar5;
                    func_0x000100029284();
                    _swift_bridgeObjectRelease(uVar13);
                    if (((ulong)pppppbVar14 & 1) == 0) {
                      *(undefined8 *)((long)auStack_1a0 + lVar4 + 8) = 0;
                      *(undefined8 *)((long)auStack_1a0 + lVar4) = 0;
                      *(undefined8 *)((long)auStack_1a0 + lVar4 + 0x18) = 0;
                      *(undefined8 *)((long)auStack_1a0 + lVar4 + 0x10) = 0;
                    }
                    else {
                      uVar13 = *puVar32;
                      _swift_isUniquelyReferenced_nonNull_native();
                      uVar28 = *puVar32;
                      *(ulong *)((long)alStack_1b8 + lVar4 + 0x10) = uVar28;
                      if ((uVar13 & 1) == 0) {
                        func_0x0001010fc388();
                        uVar28 = *(ulong *)((long)alStack_1b8 + lVar4 + 0x10);
                      }
                      _swift_bridgeObjectRelease
                                (*(undefined8 *)
                                  (*(long *)(uVar28 + 0x30) + (long)pppppbVar15 * 0x10 + 8));
                      func_0x000100102924(*(long *)(uVar28 + 0x38) + (long)pppppbVar15 * 0x20,
                                          (long)auStack_1a0 + lVar4);
                      func_0x0001010f6278(pppppbVar15,uVar28);
                      *puVar32 = uVar28;
                    }
                    uVar13 = *(ulong *)((long)auStack_1e8 + lVar4);
LAB_1049bc0dc:
                    _swift_bridgeObjectRelease(pcVar5);
                    func_0x0001049c057c((long)auStack_1a0 + lVar4,0x11309c428);
LAB_1049bc0f0:
                    lVar26 = (long)alStack_160 + lVar4;
                  }
                  else {
                    func_0x000100102924((long)alStack_180 + lVar4,(long)auStack_1a0 + lVar4);
                    puVar32 = *(ulong **)((long)auStack_1e8 + lVar4 + 0x10);
                    uVar13 = *puVar32;
                    _swift_isUniquelyReferenced_nonNull_native();
                    uVar37 = *puVar32;
                    *(ulong *)((long)alStack_1b8 + lVar4 + 0x10) = uVar37;
                    pppppbVar14 = pppppbVar15;
                    pppppbVar20 = (byte *****)pcVar5;
                    func_0x000100029284();
                    uVar28 = (ulong)~(uint)pppppbVar20 & 1;
                    lVar26 = *(long *)(uVar37 + 0x10) + uVar28;
                    if (SCARRY8(*(long *)(uVar37 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc444);
                      (*pcVar5)();
                    }
                    if (*(long *)(uVar37 + 0x18) < lVar26) {
                      func_0x000100102b0c(lVar26,uVar13);
                      pppppbVar14 = pppppbVar15;
                      pppppbVar22 = (byte *****)pcVar5;
                      func_0x000100029284();
                      if (((uint)pppppbVar20 & 1) != ((uint)pppppbVar22 & 1)) {
LAB_1049bc454:
                        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc464);
                        (*pcVar5)();
                      }
                    }
                    else if ((uVar13 & 1) == 0) {
                      func_0x0001010fc388();
                    }
                    uVar13 = *(ulong *)((long)auStack_1e8 + lVar4);
                    lVar26 = *(long *)((long)alStack_1b8 + lVar4 + 0x10);
                    if (((ulong)pppppbVar20 & 1) == 0) {
                      lVar36 = lVar26 + ((ulong)pppppbVar14 >> 6) * 8;
                      *(ulong *)(lVar36 + 0x40) =
                           *(ulong *)(lVar36 + 0x40) | 1L << ((ulong)pppppbVar14 & 0x3f);
                      plVar1 = (long *)(*(long *)(lVar26 + 0x30) + (long)pppppbVar14 * 0x10);
                      *plVar1 = (long)pppppbVar15;
                      plVar1[1] = (long)pcVar5;
                      func_0x000100102924((long)auStack_1a0 + lVar4,
                                          *(long *)(lVar26 + 0x38) + (long)pppppbVar14 * 0x20);
                      if (SCARRY8(*(long *)(lVar26 + 0x10),1)) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc448);
                        (*pcVar5)();
                      }
                      *(long *)(lVar26 + 0x10) = *(long *)(lVar26 + 0x10) + 1;
                    }
                    else {
                      lVar36 = *(long *)(lVar26 + 0x38) + (long)pppppbVar14 * 0x20;
                      func_0x000100183ab8(lVar36);
                      func_0x000100102924((long)auStack_1a0 + lVar4,lVar36);
                      _swift_bridgeObjectRelease(pcVar5);
                    }
                    plVar1 = alStack_130 + 0xb;
LAB_1049bc0b8:
                    **(long **)((long)plVar1 + lVar4 + -0x100) = lVar26;
                    lVar26 = (long)alStack_160 + lVar4;
                  }
                }
              }
              else {
                pcVar5 = (code *)pppppbVar20;
                if (lRam000000011309fee0 != -1) {
                  pcVar5 = FUN_1049ba5b4;
                  _swift_once(0x11309fee0);
                }
                lVar36 = lRam00000001138158a8;
                if (*(long *)(lRam00000001138158a8 + 0x10) != 0) {
                  _swift_bridgeObjectRetain(lRam00000001138158a8);
                  pppppbVar15 = pppppbVar14;
                  FUN_104999ff8();
                  if (((ulong)pcVar5 & 1) == 0) {
                    _swift_bridgeObjectRelease(lVar36);
                  }
                  else {
                    cVar3 = *(char *)(*(long *)(lVar36 + 0x38) + (long)pppppbVar15 * 2);
                    _swift_bridgeObjectRelease(lVar36);
                    if (cVar3 != '\0') {
                      if ((cVar3 != '\x01') || (*(long *)(lVar36 + 0x10) == 0)) goto LAB_1049bc0f0;
                      _swift_bridgeObjectRetain(lVar36);
                      pppppbVar15 = pppppbVar14;
                      FUN_104999ff8();
                      if (((ulong)pcVar5 & 1) == 0) {
                        _swift_bridgeObjectRelease(lVar36);
                        lVar26 = (long)alStack_160 + lVar4;
                        goto LAB_1049bb9f0;
                      }
                      bVar2 = *(byte *)(*(long *)(lVar36 + 0x38) + (long)pppppbVar15 * 2 + 1);
                      uVar28 = (ulong)bVar2;
                      _swift_bridgeObjectRelease(lVar36);
                      if (bVar2 == 0x12) {
                        lVar26 = (long)alStack_160 + lVar4;
                        goto LAB_1049bb9f0;
                      }
                      FUN_1049b9f6c();
                      pppppbVar15 = (byte *****)pcVar5;
                      FUN_1049b94e0(pppppbVar14);
                      FUN_1049bae44((long)alStack_180 + lVar4);
                      _swift_bridgeObjectRelease(pppppbVar15);
                      if (*(long *)((long)alStack_180 + lVar4 + 0x18) == 0) {
                        func_0x0001049c057c((long)alStack_180 + lVar4,0x11309c428);
                        puVar32 = *(ulong **)((long)auStack_230 + lVar4 + 0x18);
                        uVar37 = *puVar32;
                        _swift_bridgeObjectRetain(uVar37);
                        pppppbVar15 = (byte *****)pcVar5;
                        func_0x000100029284();
                        _swift_bridgeObjectRelease(uVar37);
                        if (((ulong)pppppbVar15 & 1) == 0) {
                          *(undefined8 *)((long)auStack_1a0 + lVar4 + 8) = 0;
                          *(undefined8 *)((long)auStack_1a0 + lVar4) = 0;
                          *(undefined8 *)((long)auStack_1a0 + lVar4 + 0x18) = 0;
                          *(undefined8 *)((long)auStack_1a0 + lVar4 + 0x10) = 0;
                        }
                        else {
                          uVar37 = *puVar32;
                          _swift_isUniquelyReferenced_nonNull_native();
                          uVar21 = *puVar32;
                          *(ulong *)((long)alStack_1b8 + lVar4 + 0x10) = uVar21;
                          if ((uVar37 & 1) == 0) {
                            func_0x0001010fc388();
                            uVar21 = *(ulong *)((long)alStack_1b8 + lVar4 + 0x10);
                          }
                          _swift_bridgeObjectRelease
                                    (*(undefined8 *)(*(long *)(uVar21 + 0x30) + uVar28 * 0x10 + 8));
                          func_0x000100102924(*(long *)(uVar21 + 0x38) + uVar28 * 0x20,
                                              (long)auStack_1a0 + lVar4);
                          func_0x0001010f6278(uVar28,uVar21);
                          *puVar32 = uVar21;
                        }
                        goto LAB_1049bc0dc;
                      }
                      func_0x000100102924((long)alStack_180 + lVar4,(long)auStack_1a0 + lVar4);
                      puVar32 = *(ulong **)((long)auStack_230 + lVar4 + 0x18);
                      uVar37 = *puVar32;
                      _swift_isUniquelyReferenced_nonNull_native();
                      uVar33 = *puVar32;
                      *(ulong *)((long)alStack_1b8 + lVar4 + 0x10) = uVar33;
                      *(ulong *)((long)auStack_230 + lVar4 + 0x10) = uVar28;
                      *(code **)((long)auStack_230 + lVar4 + 0x30) = pcVar5;
                      func_0x000100029284();
                      uVar21 = (ulong)~(uint)pcVar5 & 1;
                      lVar26 = *(long *)(uVar33 + 0x10) + uVar21;
                      if (!SCARRY8(*(long *)(uVar33 + 0x10),uVar21)) {
                        if (*(long *)(uVar33 + 0x18) < lVar26) {
                          func_0x000100102b0c(lVar26,uVar37);
                          uVar28 = *(ulong *)((long)auStack_230 + lVar4 + 0x10);
                          uVar17 = (uint)*(undefined8 *)((long)auStack_230 + lVar4 + 0x30);
                          func_0x000100029284();
                          if (((uint)pcVar5 & 1) != (uVar17 & 1)) goto LAB_1049bc454;
LAB_1049bc294:
                          lVar26 = *(long *)((long)alStack_1b8 + lVar4 + 0x10);
                          if (((ulong)pcVar5 & 1) == 0) goto LAB_1049bc330;
LAB_1049bc29c:
                          lVar36 = *(long *)(lVar26 + 0x38) + uVar28 * 0x20;
                          func_0x000100183ab8(lVar36);
                          func_0x000100102924((long)auStack_1a0 + lVar4,lVar36);
                          _swift_bridgeObjectRelease
                                    (*(undefined8 *)((long)auStack_230 + lVar4 + 0x30));
                        }
                        else {
                          if ((uVar37 & 1) != 0) goto LAB_1049bc294;
                          func_0x0001010fc388();
                          lVar26 = *(long *)((long)alStack_1b8 + lVar4 + 0x10);
                          if (((ulong)pcVar5 & 1) != 0) goto LAB_1049bc29c;
LAB_1049bc330:
                          lVar36 = lVar26 + (uVar28 >> 6) * 8;
                          *(ulong *)(lVar36 + 0x40) =
                               *(ulong *)(lVar36 + 0x40) | 1L << (uVar28 & 0x3f);
                          puVar35 = (undefined8 *)(*(long *)(lVar26 + 0x30) + uVar28 * 0x10);
                          uVar31 = *(undefined8 *)((long)auStack_230 + lVar4 + 0x30);
                          *puVar35 = *(undefined8 *)((long)auStack_230 + lVar4 + 0x10);
                          puVar35[1] = uVar31;
                          func_0x000100102924((long)auStack_1a0 + lVar4,
                                              *(long *)(lVar26 + 0x38) + uVar28 * 0x20);
                          if (SCARRY8(*(long *)(lVar26 + 0x10),1)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc454);
                            (*pcVar5)();
                          }
                          *(long *)(lVar26 + 0x10) = *(long *)(lVar26 + 0x10) + 1;
                        }
                        plVar1 = alStack_130 + 3;
                        goto LAB_1049bc0b8;
                      }
                      goto LAB_1049bc44c;
                    }
                    lVar26 = (long)alStack_160 + lVar4;
                    FUN_1049bc8a8(*(undefined8 *)((long)auStack_1e8 + lVar4 + 8),pppppbVar14,
                                  auStack_150 + lVar4);
                  }
                }
              }
LAB_1049bb9f0:
              func_0x0001049c057c((long)alStack_160 + lVar4,0x11309cd28);
            }
            bVar6 = SCARRY8(lVar12,1);
            lVar12 = lVar12 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc440);
              (*pcVar5)();
            }
            if ((long)uVar13 <= lVar12) goto LAB_1049bc3a0;
            ppppppbVar18 = (pppppppbVar16 + 8)[lVar12];
          } while( true );
        }
      }
    }
  }
  uVar40 = 2;
LAB_1049bb9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_130 + lVar4)) {
    return;
  }
  ___stack_chk_fail(uVar40);
LAB_1049bc44c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049bc450);
  (*pcVar5)();
LAB_1049bc3a0:
  _swift_release(pppppppbVar16);
  uVar40 = *(undefined4 *)((long)&uStack_1bc + lVar4);
  goto LAB_1049bb9b0;
}



/* Entry: 1049bc464; end: 1049bc56b;  */

void FUN_1049bc464(code *param_1,ulong param_2,code *param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  code cVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long alStack_d0 [6];
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long lStack_68;
  
  if (lRam000000011309fee0 != -1) {
    param_2 = 0;
    _swift_once(0x11309fee0);
  }
  pcVar7 = pcRam00000001138158a8;
  if (*(long *)(pcRam00000001138158a8 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(pcRam00000001138158a8);
  pcVar6 = param_3;
  FUN_104999ff8();
  if ((param_2 & 1) == 0) {
code_r0x00010bdc0014:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar7);
    return;
  }
  cVar2 = *(char *)(*(long *)(pcVar7 + 0x38) + (long)pcVar6 * 2);
  _swift_bridgeObjectRelease(pcVar7);
  if (cVar2 != '\0') {
    if (cVar2 != '\x01') {
      return;
    }
    pcVar6 = param_3;
    if (lRam000000011309fee0 != -1) {
      pcVar6 = FUN_1049ba5b4;
      _swift_once(0x11309fee0);
    }
    pcVar7 = pcRam00000001138158a8;
    if (*(long *)(pcRam00000001138158a8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(pcRam00000001138158a8);
      pcVar10 = param_3;
      FUN_104999ff8();
      if (((ulong)pcVar6 & 1) == 0) goto code_r0x00010bdc0014;
      bVar1 = *(byte *)(*(long *)(pcVar7 + 0x38) + (long)pcVar10 * 2 + 1);
      uVar15 = (ulong)bVar1;
      _swift_bridgeObjectRelease(pcVar7);
      if (bVar1 != 0x12) {
        FUN_1049b9f6c(uVar15);
        pcVar7 = pcVar6;
        FUN_1049b94e0(param_3);
        FUN_1049bae44(&stack0xffffffffffffffa0);
        _swift_bridgeObjectRelease(pcVar7);
        func_0x000100102934(&stack0xffffffffffffffa0,uVar15,pcVar6);
      }
    }
    return;
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = (code *)0x0;
  pcVar10 = param_3;
  __sSS10FoundationE8EncodingVMa();
  lVar17 = *(long *)(pcVar7 + -8);
  lVar4 = -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar16 = (code *)((long)alStack_d0 + lVar4 + 0x30);
  pcVar6 = param_3;
  FUN_1049b94e0();
  pcVar14 = param_3;
  if ((pcVar6 == (code *)0x6475) && (pcVar10 == (code *)0xe200000000000000)) {
    _swift_bridgeObjectRelease(0xe200000000000000);
LAB_1049bc964:
    func_0x0001000bb420(param_4,auStack_a0 + 0x18);
    puVar5 = PTR___sypN_11034f1a8;
    pcVar9 = (code *)(auStack_a0 + 8);
    pcVar13 = (code *)(auStack_a0 + 0x18);
    _swift_dynamicCast(pcVar9,pcVar13,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pcVar9 & 1) != 0) {
      pcStack_88 = pcStack_98;
      pcStack_80 = pcStack_90;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar16);
      func_0x000100e8b654();
      pcVar14 = (code *)0x0;
      pcVar10 = pcVar16;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (pcVar16,0,PTR___sSSN_11034da80,pcVar9);
      (**(code **)(lVar17 + 8))(pcVar16);
      pcVar9 = pcStack_90;
      _swift_bridgeObjectRelease();
      pcVar13 = pcVar7;
      param_4 = pcStack_90;
      if ((ulong)pcVar14 >> 0x3c < 0xf) {
        pcVar7 = (code *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        _swift_getInitializedObjCClass();
        pcVar6 = pcVar10;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pcVar10,pcVar14);
        pcStack_88 = (code *)0x0;
        _objc_msgSend(pcVar7,PTR_s_JSONObjectWithData_options_error_11254dfe0,pcVar6,0,
                      auStack_a0 + 0x18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar6);
        param_4 = pcStack_88;
        pcVar13 = pcVar14;
        if (pcVar7 == (code *)0x0) {
          pcVar7 = pcStack_88;
          _objc_retain();
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _objc_release(pcVar7);
          _swift_willThrow();
          func_0x0001000b44c0(pcVar10);
          pcVar9 = param_4;
          _swift_errorRelease();
          param_1 = param_4;
        }
        else {
          _objc_retain();
          __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_a0 + 0x18,pcVar7);
          _swift_unknownObjectRelease(pcVar7);
          uVar12 = 0x11309c420;
          func_0x0001048db364(0x11309c420);
          puVar11 = auStack_a0 + 8;
          _swift_dynamicCast(puVar11,auStack_a0 + 0x18,puVar5 + 8,uVar12,6);
          pcVar9 = pcVar10;
          if (((ulong)puVar11 & 1) == 0) {
            func_0x0001000b44c0();
            param_4 = pcVar7;
          }
          else {
            uVar12 = *(undefined8 *)param_1;
            _swift_isUniquelyReferenced_nonNull_native(uVar12);
            pcStack_88 = *(code **)param_1;
            FUN_1049bf1e8(pcStack_98,&UNK_100216600,0,uVar12,auStack_a0 + 0x18);
            _swift_bridgeObjectRelease(pcStack_98);
            func_0x0001000b44c0();
            *(code **)param_1 = pcStack_88;
            param_4 = (code *)0x0;
          }
        }
      }
    }
  }
  else {
    pcVar8 = pcVar6;
    pcVar13 = pcVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    pcVar9 = pcVar10;
    _swift_bridgeObjectRelease();
    if (((ulong)pcVar8 & 1) != 0) goto LAB_1049bc964;
    if (lRam000000011309fee0 != -1) {
      pcVar9 = (code *)0x11309fee0;
      pcVar13 = FUN_1049ba5b4;
      _swift_once();
    }
    pcVar7 = pcRam00000001138158a8;
    if (*(long *)(pcRam00000001138158a8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(pcRam00000001138158a8);
      FUN_104999ff8();
      if (((ulong)pcVar13 & 1) == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010bdc0014;
        goto LAB_1049bcc54;
      }
      bVar1 = *(byte *)(*(long *)(pcVar7 + 0x38) + (long)param_3 * 2 + 1);
      pcVar14 = (code *)(ulong)bVar1;
      _swift_bridgeObjectRelease();
      pcVar9 = pcVar7;
      if (bVar1 != 0x12) {
        FUN_1049b9f6c();
        FUN_1049bae44(auStack_a0 + 0x18,pcVar6,pcVar10,param_4);
        _swift_bridgeObjectRelease(pcVar10);
        pcVar9 = (code *)(auStack_a0 + 0x18);
        func_0x000100102934(pcVar9,pcVar14,pcVar13);
        pcVar13 = pcVar14;
        pcVar14 = param_1;
      }
    }
  }
  param_3 = pcVar9;
  pcVar7 = pcVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_1049bcc54:
  ___stack_chk_fail();
  *(code **)((long)alStack_d0 + lVar4) = pcVar10;
  *(code **)((long)alStack_d0 + lVar4 + 8) = param_4;
  *(code **)((long)alStack_d0 + lVar4 + 0x10) = pcVar7;
  *(code **)((long)alStack_d0 + lVar4 + 0x18) = param_1;
  *(undefined1 **)((long)alStack_d0 + lVar4 + 0x20) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d0 + lVar4 + 0x28) = FUN_1049bcc58;
  _swift_bridgeObjectRetain(pcVar13);
  pcVar7 = pcVar13;
  func_0x0001049beee8(param_3,pcVar13,0x1130a05c8);
  if (((uint)param_3 & 0xff) == 0xe) {
    _swift_bridgeObjectRetain(pcVar13);
  }
  else {
    if (lRam000000011309fef0 != -1) {
      pcVar7 = (code *)0x0;
      _swift_once(0x11309fef0);
    }
    lVar4 = lRam00000001138158b8;
    if (*(long *)(lRam00000001138158b8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lRam00000001138158b8);
      func_0x00010499a020();
      if (((ulong)pcVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
      }
      else {
        cVar3 = param_3[*(long *)(lVar4 + 0x38)];
        _swift_bridgeObjectRelease(lVar4);
        FUN_1049ba230(cVar3);
      }
    }
  }
  return;
}



/* Entry: 1049bc56c; end: 1049bc7a3;  */

void FUN_1049bc56c(code *param_1,code *param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code **ppcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_f0 [32];
  long alStack_d0 [8];
  undefined1 auStack_90 [8];
  code *apcStack_88 [2];
  code *pcStack_78;
  code *pcStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = (code *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar12 = *(long *)(pcVar3 + -8);
  lVar2 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + lVar2;
  pcVar8 = pcVar3;
  pcStack_78 = param_1;
  pcStack_70 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
  func_0x000100e8b654();
  pcVar9 = (code *)0x0;
  puVar4 = puVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar5,0,PTR___sSSN_11034da80,pcVar8);
  pcVar10 = pcVar3;
  (**(code **)(lVar12 + 8))(puVar5);
  pcVar8 = (code *)0x0;
  if ((ulong)pcVar9 >> 0x3c < 0xf) {
    pcVar8 = (code *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _swift_getInitializedObjCClass();
    puVar5 = puVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar4,pcVar9);
    pcStack_78 = (code *)0x0;
    _objc_msgSend(pcVar8,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar5,0,&pcStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    pcVar3 = pcStack_78;
    pcVar10 = pcVar9;
    if (pcVar8 == (code *)0x0) {
      param_1 = pcStack_78;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(param_1);
      _swift_willThrow();
      func_0x0001000b44c0(puVar4);
      _swift_errorRelease(pcVar3);
      param_2 = pcVar3;
    }
    else {
      _objc_retain();
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&pcStack_78,pcVar8);
      _swift_unknownObjectRelease(pcVar8);
      uVar6 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      ppcVar7 = apcStack_88;
      _swift_dynamicCast(ppcVar7,&pcStack_78,PTR___sypN_11034f1a8 + 8,uVar6,6);
      pcVar3 = pcVar8;
      if (((ulong)ppcVar7 & 1) != 0) {
        uVar11 = (ulong)param_1 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar11 = (ulong)param_2 >> 0x38 & 0xf;
        }
        pcVar3 = apcStack_88[0];
        if (uVar11 != 0) {
          pcStack_78 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          param_2 = (code *)0x0;
          FUN_1049b8b74(apcStack_88[0],&pcStack_78);
          func_0x0001000b44c0(puVar4);
          _swift_bridgeObjectRelease(apcStack_88[0]);
          pcVar8 = pcStack_78;
          goto LAB_1049bc76c;
        }
        _swift_bridgeObjectRelease(apcStack_88[0]);
      }
      func_0x0001000b44c0(puVar4);
    }
    pcVar8 = (code *)0x0;
  }
LAB_1049bc76c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail(pcVar8);
  *(undefined1 **)((long)alStack_d0 + lVar2) = puVar5;
  *(code **)((long)alStack_d0 + lVar2 + 8) = pcVar3;
  *(code **)((long)alStack_d0 + lVar2 + 0x10) = param_1;
  *(code **)((long)alStack_d0 + lVar2 + 0x18) = param_2;
  *(undefined1 **)((long)alStack_d0 + lVar2 + 0x20) = puVar4;
  *(code **)((long)alStack_d0 + lVar2 + 0x28) = pcVar9;
  *(undefined1 **)((long)alStack_d0 + lVar2 + 0x30) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d0 + lVar2 + 0x38) = FUN_1049bc7a4;
  pcVar3 = pcVar10;
  if (lRam000000011309fee0 != -1) {
    pcVar3 = FUN_1049ba5b4;
    _swift_once(0x11309fee0);
  }
  lVar12 = lRam00000001138158a8;
  if (*(long *)(lRam00000001138158a8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lRam00000001138158a8);
    pcVar8 = pcVar10;
    FUN_104999ff8();
    if (((ulong)pcVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar12);
      return;
    }
    bVar1 = *(byte *)(*(long *)(lVar12 + 0x38) + (long)pcVar8 * 2 + 1);
    uVar11 = (ulong)bVar1;
    _swift_bridgeObjectRelease(lVar12);
    if (bVar1 != 0x12) {
      FUN_1049b9f6c(uVar11);
      pcVar8 = pcVar3;
      FUN_1049b94e0(pcVar10);
      FUN_1049bae44(auStack_f0 + lVar2);
      _swift_bridgeObjectRelease(pcVar8);
      func_0x000100102934(auStack_f0 + lVar2,uVar11,pcVar3);
    }
  }
  return;
}



/* Entry: 1049bc7a4; end: 1049bc8a7;  */

void FUN_1049bc7a4(undefined8 param_1,code *param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 auStack_60 [32];
  
  pcVar4 = param_2;
  if (lRam000000011309fee0 != -1) {
    pcVar4 = FUN_1049ba5b4;
    _swift_once(0x11309fee0);
  }
  lVar2 = lRam00000001138158a8;
  if (*(long *)(lRam00000001138158a8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lRam00000001138158a8);
    pcVar3 = param_2;
    FUN_104999ff8();
    if (((ulong)pcVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
      return;
    }
    bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + (long)pcVar3 * 2 + 1);
    uVar5 = (ulong)bVar1;
    _swift_bridgeObjectRelease(lVar2);
    if (bVar1 != 0x12) {
      FUN_1049b9f6c(uVar5);
      pcVar3 = pcVar4;
      FUN_1049b94e0(param_2);
      FUN_1049bae44(auStack_60);
      _swift_bridgeObjectRelease(pcVar3);
      func_0x000100102934(auStack_60,uVar5,pcVar4);
    }
  }
  return;
}



/* Entry: 1049bc8a8; end: 1049bcc57;  */

void FUN_1049bc8a8(code *param_1,code *param_2,code *param_3)

{
  byte bVar1;
  code cVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  long alStack_d0 [6];
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = (code *)0x0;
  pcVar9 = param_2;
  __sSS10FoundationE8EncodingVMa();
  lVar15 = *(long *)(pcVar5 + -8);
  lVar3 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar14 = (code *)((long)alStack_d0 + lVar3 + 0x30);
  pcVar6 = param_2;
  FUN_1049b94e0();
  pcVar13 = param_2;
  if ((pcVar6 == (code *)0x6475) && (pcVar9 == (code *)0xe200000000000000)) {
    _swift_bridgeObjectRelease(0xe200000000000000);
LAB_1049bc964:
    func_0x0001000bb420(param_3,auStack_a0 + 0x18);
    puVar4 = PTR___sypN_11034f1a8;
    pcVar8 = (code *)(auStack_a0 + 8);
    pcVar12 = (code *)(auStack_a0 + 0x18);
    _swift_dynamicCast(pcVar8,pcVar12,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pcVar8 & 1) != 0) {
      pcStack_88 = pcStack_98;
      pcStack_80 = pcStack_90;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar14);
      func_0x000100e8b654();
      pcVar13 = (code *)0x0;
      pcVar9 = pcVar14;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (pcVar14,0,PTR___sSSN_11034da80,pcVar8);
      (**(code **)(lVar15 + 8))(pcVar14);
      pcVar8 = pcStack_90;
      _swift_bridgeObjectRelease();
      pcVar12 = pcVar5;
      param_3 = pcStack_90;
      if ((ulong)pcVar13 >> 0x3c < 0xf) {
        pcVar6 = (code *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        _swift_getInitializedObjCClass();
        pcVar5 = pcVar9;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pcVar9,pcVar13);
        pcStack_88 = (code *)0x0;
        _objc_msgSend(pcVar6,PTR_s_JSONObjectWithData_options_error_11254dfe0,pcVar5,0,
                      auStack_a0 + 0x18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar5);
        param_3 = pcStack_88;
        pcVar12 = pcVar13;
        if (pcVar6 == (code *)0x0) {
          pcVar6 = pcStack_88;
          _objc_retain();
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _objc_release(pcVar6);
          _swift_willThrow();
          func_0x0001000b44c0(pcVar9);
          pcVar8 = param_3;
          _swift_errorRelease();
          param_1 = param_3;
        }
        else {
          _objc_retain();
          __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_a0 + 0x18,pcVar6);
          _swift_unknownObjectRelease(pcVar6);
          uVar11 = 0x11309c420;
          func_0x0001048db364(0x11309c420);
          puVar10 = auStack_a0 + 8;
          _swift_dynamicCast(puVar10,auStack_a0 + 0x18,puVar4 + 8,uVar11,6);
          pcVar8 = pcVar9;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x0001000b44c0();
            param_3 = pcVar6;
          }
          else {
            uVar11 = *(undefined8 *)param_1;
            _swift_isUniquelyReferenced_nonNull_native(uVar11);
            pcStack_88 = *(code **)param_1;
            FUN_1049bf1e8(pcStack_98,&UNK_100216600,0,uVar11,auStack_a0 + 0x18);
            _swift_bridgeObjectRelease(pcStack_98);
            func_0x0001000b44c0();
            *(code **)param_1 = pcStack_88;
            param_3 = (code *)0x0;
          }
        }
      }
    }
  }
  else {
    pcVar7 = pcVar6;
    pcVar12 = pcVar9;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    pcVar8 = pcVar9;
    _swift_bridgeObjectRelease();
    if (((ulong)pcVar7 & 1) != 0) goto LAB_1049bc964;
    if (lRam000000011309fee0 != -1) {
      pcVar8 = (code *)0x11309fee0;
      pcVar12 = FUN_1049ba5b4;
      _swift_once();
    }
    pcVar5 = pcRam00000001138158a8;
    if (*(long *)(pcRam00000001138158a8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(pcRam00000001138158a8);
      func_0x000104999ff8();
      if (((ulong)pcVar12 & 1) == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar5);
          return;
        }
        goto LAB_1049bcc54;
      }
      bVar1 = *(byte *)(*(long *)(pcVar5 + 0x38) + (long)param_2 * 2 + 1);
      pcVar13 = (code *)(ulong)bVar1;
      _swift_bridgeObjectRelease();
      pcVar8 = pcVar5;
      if (bVar1 != 0x12) {
        FUN_1049b9f6c();
        FUN_1049bae44(auStack_a0 + 0x18,pcVar6,pcVar9,param_3);
        _swift_bridgeObjectRelease(pcVar9);
        pcVar8 = (code *)(auStack_a0 + 0x18);
        func_0x000100102934(pcVar8,pcVar13,pcVar12);
        pcVar12 = pcVar13;
        pcVar13 = param_1;
      }
    }
  }
  param_2 = pcVar8;
  pcVar5 = pcVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_1049bcc54:
  ___stack_chk_fail();
  *(code **)((long)alStack_d0 + lVar3) = pcVar9;
  *(code **)((long)alStack_d0 + lVar3 + 8) = param_3;
  *(code **)((long)alStack_d0 + lVar3 + 0x10) = pcVar5;
  *(code **)((long)alStack_d0 + lVar3 + 0x18) = param_1;
  *(undefined1 **)((long)alStack_d0 + lVar3 + 0x20) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d0 + lVar3 + 0x28) = FUN_1049bcc58;
  _swift_bridgeObjectRetain(pcVar12);
  pcVar6 = pcVar12;
  func_0x0001049beee8(param_2,pcVar12,0x1130a05c8);
  if (((uint)param_2 & 0xff) == 0xe) {
    _swift_bridgeObjectRetain(pcVar12);
  }
  else {
    if (lRam000000011309fef0 != -1) {
      pcVar6 = (code *)0x0;
      _swift_once(0x11309fef0);
    }
    lVar3 = lRam00000001138158b8;
    if (*(long *)(lRam00000001138158b8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lRam00000001138158b8);
      func_0x00010499a020();
      if (((ulong)pcVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar3);
      }
      else {
        cVar2 = param_2[*(long *)(lVar3 + 0x38)];
        _swift_bridgeObjectRelease(lVar3);
        FUN_1049ba230(cVar2);
      }
    }
  }
  return;
}



/* Entry: 1049bcc58; end: 1049bcc5b;  */

void FUN_1049bcc58(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  
  _swift_bridgeObjectRetain(param_2);
  uVar3 = param_2;
  func_0x0001049beee8(param_1,param_2,0x1130a05c8);
  if (((uint)param_1 & 0xff) == 0xe) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    if (lRam000000011309fef0 != -1) {
      uVar3 = 0;
      _swift_once(0x11309fef0);
    }
    lVar2 = lRam00000001138158b8;
    if (*(long *)(lRam00000001138158b8 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lRam00000001138158b8);
      func_0x00010499a020();
      if ((uVar3 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar2);
      }
      else {
        uVar1 = *(undefined1 *)(*(long *)(lVar2 + 0x38) + param_1);
        _swift_bridgeObjectRelease(lVar2);
        FUN_1049ba230(uVar1);
      }
    }
  }
  return;
}



/* Entry: 1049bcc5c; end: 1049bcea7;  */

void FUN_1049bcc5c(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_a0 [32];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar8 = *param_1;
  puStack_58 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_60 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar7 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar11 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(lVar8 + 0x40);
  _swift_bridgeObjectRetain_n(lVar8,2);
  _swift_retain_n(puVar9,2);
  lVar12 = 0;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar8 + 0x30) +
               (lVar12 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4));
      puStack_80 = (undefined *)*puVar1;
      uVar5 = puVar1[1];
      uStack_78 = uVar5;
      _swift_bridgeObjectRetain(uVar5);
      FUN_1049bcea8(&puStack_80,&puStack_58,lVar8,&puStack_60);
      _swift_bridgeObjectRelease(uVar5);
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(uVar7 + 0x3f >> 6) <= lVar12) {
      _swift_release(lVar8);
      _swift_bridgeObjectRelease(lVar8);
      puVar2 = puStack_58;
      puVar9 = puStack_60;
      if (*(long *)(puStack_58 + 0x10) != 0) {
        uVar5 = 0x11309c420;
        func_0x0001048db364();
        puStack_80 = puVar2;
        uStack_68 = uVar5;
        func_0x000100102924(&puStack_80,auStack_a0);
        _swift_bridgeObjectRetain(puVar2);
        puVar9 = puStack_60;
        puVar6 = puStack_60;
        _swift_isUniquelyReferenced_nonNull_native(puStack_60);
        func_0x0001001029e8(auStack_a0,0x645f6d6f74737563,0xeb00000000617461,puVar6);
      }
      uVar10 = *param_2;
      _swift_bridgeObjectRetain(puVar9);
      uVar11 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_2 = uVar10;
      uVar7 = uVar10;
      if ((uVar11 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014f1044(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *param_2 = uVar7;
      }
      uVar11 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar11) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001014f1044(uVar10,uVar11 + 1,1,uVar7);
        *param_2 = uVar10;
      }
      *(ulong *)(uVar10 + 0x10) = uVar11 + 1;
      *(undefined **)(uVar10 + uVar11 * 8 + 0x20) = puVar9;
      _swift_bridgeObjectRelease(puVar2);
      _swift_bridgeObjectRelease(puVar9);
      return;
    }
    uVar11 = ((ulong *)(lVar8 + 0x40))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bce60);
  (*pcVar3)();
}



/* Entry: 1049bcea8; end: 1049bd34b;  */

void FUN_1049bcea8(ulong *param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  uVar9 = 0;
  uVar2 = *param_1;
  pcVar3 = (code *)param_1[1];
  _swift_bridgeObjectRetain(pcVar3);
  uVar7 = uVar2;
  pcVar12 = pcVar3;
  func_0x0001049bedf0(uVar2,pcVar3,0x1130a0398,0x1130a0550);
  if (((uint)uVar7 & 0xff) == 0x11) {
    return;
  }
  if (lRam000000011309fee8 != -1) {
    pcVar12 = FUN_1049ba634;
    _swift_once(0x11309fee8);
  }
  lVar6 = lRam00000001138158b0;
  if (*(long *)(lRam00000001138158b0 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(lRam00000001138158b0);
  uVar8 = uVar7;
  func_0x00010499a00c();
  if (((ulong)pcVar12 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  pbVar1 = (byte *)(*(long *)(lVar6 + 0x38) + uVar8 * 2);
  bVar4 = *pbVar1;
  bVar5 = pbVar1[1];
  _swift_bridgeObjectRelease(lVar6);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      pcVar13 = (code *)0xe900000000000061;
      uVar9 = 0x7461645f72657375;
    }
    else {
      pcVar13 = (code *)0xe800000000000000;
      uVar9 = 0x617461645f707061;
    }
LAB_1049bd038:
    pcVar12 = pcVar13;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar9,pcVar13,0x645f6d6f74737563,0xeb00000000617461,0);
    _swift_bridgeObjectRelease(pcVar13);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  else {
    if (bVar4 != 2) {
      if (bVar4 == 3) {
        pcVar13 = (code *)0xed000073746e6576;
        uVar9 = 0x655f6d6f74737563;
        goto LAB_1049bd038;
      }
      FUN_1049b8e98();
      if ((uVar7 == 0x614e746e6576655f) && (pcVar12 == (code *)0xea0000000000656d)) {
        _swift_bridgeObjectRelease(0xea0000000000656d);
LAB_1049bd158:
        if (*(long *)(param_3 + 0x10) == 0) goto LAB_1049bd200;
        _swift_bridgeObjectRetain(param_3);
        uVar8 = uVar2;
        pcVar13 = pcVar3;
        func_0x000100029284(uVar2);
        if (((ulong)pcVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(param_3);
          goto LAB_1049bd200;
        }
        func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar8 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(param_3);
        puVar11 = PTR___sSSN_11034da80;
        _swift_dynamicCast(&puStack_a0,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if ((uVar9 & 1) == 0) goto LAB_1049bd200;
        func_0x0001049bebb4();
        _swift_bridgeObjectRelease(uStack_98);
        puStack_68 = puVar11;
        uVar9 = 0x616e5f746e657665;
      }
      else {
        uVar8 = uVar7;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,pcVar12,0x614e746e6576655f,0xea0000000000656d,0);
        _swift_bridgeObjectRelease(pcVar12);
        if ((uVar8 & 1) != 0) goto LAB_1049bd158;
LAB_1049bd200:
        if ((uVar7 == 0x656d6954676f6c5f) && (pcVar12 == (code *)0xe800000000000000)) {
          _swift_bridgeObjectRelease(0xe800000000000000);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar7,pcVar12,0x656d6954676f6c5f,0xe800000000000000,0);
          _swift_bridgeObjectRelease(pcVar12);
          if ((uVar7 & 1) == 0) {
            return;
          }
        }
        uVar10 = 0x11309c428;
        func_0x0001048db364();
        puVar11 = &UNK_1107bb690;
        uStack_88 = uVar10;
        _swift_allocObject(&UNK_1107bb690,0x30,7);
        puStack_a0 = puVar11;
        if (*(long *)(param_3 + 0x10) == 0) {
LAB_1049bd2c8:
          *(undefined8 *)(puVar11 + 0x18) = 0;
          *(undefined8 *)(puVar11 + 0x10) = 0;
          *(undefined8 *)(puVar11 + 0x28) = 0;
          *(undefined8 *)(puVar11 + 0x20) = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_3);
          uVar9 = uVar2;
          pcVar12 = pcVar3;
          func_0x000100029284(uVar2);
          if (((ulong)pcVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(param_3);
            goto LAB_1049bd2c8;
          }
          func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar9 * 0x20,puVar11 + 0x10);
          _swift_bridgeObjectRelease(param_3);
        }
        FUN_1049bae44(auStack_80,uVar2,pcVar3,&puStack_a0);
        func_0x000100183ab8(&puStack_a0);
        uVar9 = 0x69745f746e657665;
      }
      pcVar12 = (code *)0xea0000000000656d;
      goto LAB_1049bd30c;
    }
    _swift_bridgeObjectRelease(0xeb00000000617461);
  }
  uVar9 = (ulong)bVar5;
  FUN_1049b9ce0(uVar9);
  uVar10 = 0x11309c428;
  func_0x0001048db364();
  puVar11 = &UNK_1107bb690;
  uStack_88 = uVar10;
  _swift_allocObject(&UNK_1107bb690,0x30,7);
  puStack_a0 = puVar11;
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_1049bd0f4:
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    uVar7 = uVar2;
    pcVar13 = pcVar3;
    func_0x000100029284(uVar2);
    if (((ulong)pcVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      goto LAB_1049bd0f4;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar7 * 0x20,puVar11 + 0x10);
    _swift_bridgeObjectRelease(param_3);
  }
  FUN_1049bae44(auStack_80,uVar2,pcVar3,&puStack_a0);
  func_0x000100183ab8(&puStack_a0);
LAB_1049bd30c:
  func_0x000100102934(auStack_80,uVar9,pcVar12);
  return;
}



/* Entry: 1049bd34c; end: 1049bd357;  */

undefined * FUN_1049bd34c(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [32];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  puStack_48 = PTR___sSSN_11034da80;
  puStack_60 = (undefined *)0x707061;
  uStack_58 = 0xe300000000000000;
  func_0x000100102924(&puStack_60,auStack_80);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(auStack_80,0x735f6e6f69746361,0xed0000656372756f,puVar2);
  uVar3 = 0x11309c420;
  func_0x0001048db364();
  puStack_60 = param_1;
  puStack_48 = (undefined *)uVar3;
  func_0x000100102924(&puStack_60,auStack_80);
  _swift_bridgeObjectRetain(param_1);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(auStack_80,0x7461645f72657375,0xe900000000000061,puVar2);
  puStack_60 = param_2;
  puStack_48 = (undefined *)uVar3;
  func_0x000100102924(&puStack_60,auStack_80);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(auStack_80,0x617461645f707061,0xe800000000000000,puVar2);
  _swift_bridgeObjectRetain(param_3);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  puStack_60 = puVar1;
  FUN_1049bf1e8(param_3,&UNK_100216600,0,puVar2,&puStack_60);
  _swift_bridgeObjectRelease(param_3);
  return puStack_60;
}



/* Entry: 1049bd358; end: 1049be957;  */

undefined * FUN_1049bd358(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puStack_68;
  
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    do {
      uVar7 = *puVar9;
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRetain(uVar7);
      puVar3 = puVar2;
      _swift_retain(puVar2);
      _swift_isUniquelyReferenced_nonNull_native();
      puStack_68 = puVar2;
      FUN_1049bf1e8(param_1,&UNK_100216600,0,puVar3,&puStack_68);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = puStack_68;
      _swift_bridgeObjectRetain(uVar7);
      puVar4 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native(puVar3);
      puStack_68 = puVar3;
      FUN_1049bf1e8(uVar7,&UNK_100216600,0,puVar4,&puStack_68);
      _swift_bridgeObjectRelease(uVar7);
      puVar3 = puStack_68;
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001014f1044(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001014f1044(puVar6,uVar1 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar6 + uVar1 * 8 + 0x20) = puVar3;
      _swift_bridgeObjectRelease(uVar7);
      puVar9 = puVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar6;
}



/* Entry: 1049be958; end: 1049bf043;  */

undefined4 FUN_1049be958(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0x6f666e69747865;
  if (((((param_1 != 0x6f666e69747865 || param_2 != -0x1900000000000000) &&
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (0x6f666e69747865,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) == 0)) &&
       ((uVar1 = 0x656863735f6c7275, param_1 != 0x656863735f6c7275 ||
        (param_2 != -0x14ffffffff8c9a93)))) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x656863735f6c7275,0xeb0000000073656d,param_1,param_2,0), (uVar1 & 1) == 0)) &&
     (((((uVar1 = 0x5f746e65746e6f63, param_1 != 0x5f746e65746e6f63 ||
         (param_2 != -0x14ffffffff8c9b97)) &&
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (0x5f746e65746e6f63,0xeb00000000736469,param_1,param_2,0), (uVar1 & 1) == 0)) &&
       ((uVar1 = 0, param_1 != 0x65746e6f635f6266 || (param_2 != -0x12ffff9b96a08b92)))) &&
      ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x65746e6f635f6266,0xed000064695f746e,param_1,param_2,0), (uVar1 & 1) == 0 &&
       ((param_1 != -0x2fffffffffffffe9 || (param_2 != -0x7ffffffef0ddd1d0)))))))) {
    uVar1 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f222e30,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0xd00000000000001b;
      if (((((param_1 != -0x2fffffffffffffe5) || (param_2 != -0x7ffffffef0ddd4d0)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001b,0x800000010f222b30,param_1,param_2,0), (uVar1 & 1) == 0))
          && ((uVar1 = 0, param_1 != -0x2fffffffffffffe4 || (param_2 != -0x7ffffffef0ddd4b0)))) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd00000000000001c,0x800000010f222b50,param_1,param_2,0), (uVar1 & 1) == 0)) {
        uVar1 = 0x656d6954676f6c5f;
        if ((param_1 == 0x656d6954676f6c5f) && (param_2 == -0x1800000000000000)) {
          _swift_bridgeObjectRelease(0xe800000000000000);
          return 2;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x656d6954676f6c5f,0xe800000000000000,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Entry: 1049bf044; end: 1049bf1e7;  */

undefined * FUN_1049bf044(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [32];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  puStack_48 = PTR___sSSN_11034da80;
  puStack_60 = (undefined *)0x707061;
  uStack_58 = 0xe300000000000000;
  func_0x000100102924(&puStack_60,auStack_80);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(auStack_80,0x735f6e6f69746361,0xed0000656372756f,puVar2);
  uVar3 = 0x11309c420;
  func_0x0001048db364();
  puStack_60 = param_1;
  puStack_48 = (undefined *)uVar3;
  func_0x000100102924(&puStack_60,auStack_80);
  _swift_bridgeObjectRetain(param_1);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(auStack_80,0x7461645f72657375,0xe900000000000061,puVar2);
  puStack_60 = param_2;
  puStack_48 = (undefined *)uVar3;
  func_0x000100102924(&puStack_60,auStack_80);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(auStack_80,0x617461645f707061,0xe800000000000000,puVar2);
  _swift_bridgeObjectRetain(param_3);
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  puStack_60 = puVar1;
  FUN_1049bf1e8(param_3,&UNK_100216600,0,puVar2,&puStack_60);
  _swift_bridgeObjectRelease(param_3);
  return puStack_60;
}



/* Entry: 1049bf1e8; end: 1049bf51f;  */

void FUN_1049bf1e8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_1049bf4dc;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_1049bf518:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf51c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_1049bf2ec:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf2fc);
      (*pcVar3)();
    }
LAB_1049bf300:
    if ((uVar5 & 1) != 0) goto LAB_1049bf304;
LAB_1049bf35c:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1049bf51c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf520);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_1049bf300;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_1049bf35c;
LAB_1049bf304:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    func_0x000100183ab8(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    func_0x000100183ab8(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_1049bf518;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_1049bf2ec;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1049bf51c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      func_0x000100183ab8(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      func_0x000100183ab8(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_1049bf4dc:
  func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  _swift_release(param_3);
  return;
}



/* Entry: 1049bf520; end: 1049bf68f;  */

void FUN_1049bf520(undefined8 param_1,undefined *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if ((param_3 & 1) == 0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_bridgeObjectRetain(param_1);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    puStack_58 = puVar1;
    FUN_1049bf1e8(param_1,&UNK_100216600,0,puVar2,&puStack_58);
    _swift_bridgeObjectRelease(param_1);
    puVar1 = puStack_58;
    puStack_40 = PTR___sSSN_11034da80;
    puStack_58 = (undefined *)0xd000000000000010;
    uStack_50 = 0x800000010f222df0;
    func_0x000100102924(&puStack_58,auStack_78);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    func_0x0001001029e8(auStack_78,0x616e5f746e657665,0xea0000000000656d,puVar2);
    puStack_40 = PTR___sSiN_11034deb0;
    puStack_58 = param_2;
    func_0x000100102924(&puStack_58,auStack_78);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    func_0x0001001029e8(auStack_78,0x69745f746e657665,0xea0000000000656d,puVar2);
    lVar3 = 0x11309d660;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x20) = puVar1;
  }
  return;
}



/* Entry: 1049bf690; end: 1049c0613;  */

void FUN_1049bf690(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4a204;
  _swift_getWitnessTable(&UNK_10dd4a204,&UNK_1107bafb0);
  puRam00000001130a3428 = puVar1;
  return;
}



/* Entry: 1049c0614; end: 1049c0617;  */

void FUN_1049c0614(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar11 = param_1;
    lVar7 = lVar1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar11 = uVar11 + 1 & uVar8;
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      lVar10 = *(long *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
      lVar5 = lVar10;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar10);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar13);
      _objc_retain(lVar10);
      puVar6 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar6,lVar5,lVar7);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(lVar7);
      _objc_release(lVar10);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar11) {
        if (uVar9 < uVar11) {
code_r0x0001049be8a4:
          if ((long)param_1 < (long)uVar9) goto code_r0x0001049be80c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 0x20);
        if ((param_1 != uVar12) || (puVar3 + 4 <= puVar2)) {
          uVar13 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar13;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          param_1 = uVar12;
        }
      }
      else if (uVar11 <= uVar9) goto code_r0x0001049be8a4;
code_r0x0001049be80c:
      uVar12 = uVar12 + 1 & uVar8;
      lVar7 = lVar5;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1049be958);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Entry: 1049c0618; end: 1049c0667;  */

void FUN_1049c0618(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1049c0668; end: 1049c06a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0668(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_getObjectType(param_2);
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34c8,auStack_58,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d0,auStack_70,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_unknownObjectRelease(uVar2);
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d8,auStack_88,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar2);
  _swift_unknownObjectRetain(param_2);
  return;
}



/* Entry: 1049c06a8; end: 1049c06ab;  */

ulong FUN_1049c06a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 1049c06ac; end: 1049c0737;  */

undefined1  [16] FUN_1049c06ac(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0xea00000000006469;
  uVar4 = 0x5f74657361746164;
  if (param_1 != 2) {
    uVar1 = 0xea00000000007965;
    uVar4 = 0x6b5f737365636361;
  }
  uVar2 = 0x746e696f70646e65;
  if (param_1 != 0) {
    uVar2 = 0x6c62616e655f7369;
  }
  uVar3 = 0xe800000000000000;
  if (param_1 != 0) {
    uVar3 = 0xea00000000006465;
  }
  if (param_1 < 2) {
    uVar1 = uVar3;
    uVar4 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 1049c0738; end: 1049c088f;  */

uint FUN_1049c0738(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  
  bVar6 = *param_1;
  bVar7 = *param_2;
  lVar1 = -0x15ffffffffff9b97;
  lVar8 = 0x5f74657361746164;
  if (bVar6 != 2) {
    lVar1 = -0x15ffffffffff869b;
    lVar8 = 0x6b5f737365636361;
  }
  lVar2 = 0x746e696f70646e65;
  if (bVar6 != 0) {
    lVar2 = 0x6c62616e655f7369;
  }
  lVar3 = -0x1800000000000000;
  if (bVar6 != 0) {
    lVar3 = -0x15ffffffffff9b9b;
  }
  if (bVar6 < 2) {
    lVar1 = lVar3;
    lVar8 = lVar2;
  }
  lVar2 = -0x15ffffffffff9b97;
  lVar3 = 0x5f74657361746164;
  if (bVar7 != 2) {
    lVar2 = -0x15ffffffffff869b;
    lVar3 = 0x6b5f737365636361;
  }
  lVar4 = 0x746e696f70646e65;
  if (bVar7 != 0) {
    lVar4 = 0x6c62616e655f7369;
  }
  lVar5 = -0x1800000000000000;
  if (bVar7 != 0) {
    lVar5 = -0x15ffffffffff9b9b;
  }
  if (bVar7 < 2) {
    lVar2 = lVar5;
    lVar3 = lVar4;
  }
  if ((lVar8 == lVar3) && (lVar1 == lVar2)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar8,lVar1,lVar3,lVar2,0);
    uVar9 = (uint)lVar8;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar2);
  return uVar9 & 1;
}



/* Entry: 1049c0890; end: 1049c0b03;  */

void FUN_1049c0890(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xea00000000006469;
  uVar5 = 0x5f74657361746164;
  if (bVar4 != 2) {
    uVar1 = 0xea00000000007965;
    uVar5 = 0x6b5f737365636361;
  }
  uVar2 = 0x746e696f70646e65;
  if (bVar4 != 0) {
    uVar2 = 0x6c62616e655f7369;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xea00000000006465;
  }
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar5 = uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049c0b04; end: 1049c0b93;  */

void FUN_1049c0b04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xea00000000006469;
  uVar5 = 0x5f74657361746164;
  if (bVar4 != 2) {
    uVar1 = 0xea00000000007965;
    uVar5 = 0x6b5f737365636361;
  }
  uVar2 = 0x746e696f70646e65;
  if (bVar4 != 0) {
    uVar2 = 0x6c62616e655f7369;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xea00000000006465;
  }
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar5 = uVar2;
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1049c0b94; end: 1049c0d3b;  */

void FUN_1049c0b94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar9 = (long)&uStack_70 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  lVar10 = lVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar5 = lVar10 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  func_0x0001049c38ec(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_70 = uVar6;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4ac68;
  func_0x0001049c392c(0x112d4ac68,puVar2,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  _swift_retain(puVar1);
  uVar7 = 0x11309d9b0;
  func_0x0001048db364(0x11309d9b0);
  uVar8 = 0x112d4ac78;
  func_0x0001049c37ec(0x112d4ac78,0x11309d9b8,puVar2);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_68,uVar7,uVar8,lVar4,uVar6);
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar3);
  uVar6 = 0xd000000000000012;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000012,0x800000010f227710,lVar5,lVar10,lVar9,0);
  uRam00000001130a34b8 = uVar6;
  return;
}



/* Entry: 1049c0d3c; end: 1049c0d8b;  */

void FUN_1049c0d3c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1049c34d4();
  _objc_allocWithZone();
  _objc_msgSend();
  uRam00000001130a34c0 = uVar1;
  return;
}



/* Entry: 1049c0d8c; end: 1049c0dcb;  */

void FUN_1049c0d8c(void)

{
  if (lRam000000011309ff00 != -1) {
    _swift_once(0x11309ff00,FUN_1049c0d3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a34c0);
  return;
}



/* Entry: 1049c0dcc; end: 1049c0e0b; +[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager shared] */

void FUN_1049c0dcc(void)

{
  if (lRam000000011309ff00 != -1) {
    _swift_once(0x11309ff00,FUN_1049c0d3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a34c0);
  return;
}



/* Entry: 1049c0e0c; end: 1049c0e4f; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager isSDKGKEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049c0e0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(param_1 + _DAT_1130a34c8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1049c0e50; end: 1049c0e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049c0e50(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34c8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049c0e90; end: 1049c0edf; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager setIsSDKGKEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0e90(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(param_1 + _DAT_1130a34c8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1049c0ee0; end: 1049c0f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0ee0(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34c8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1049c0f70; end: 1049c0f7b; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0f70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(param_1 + _DAT_1130a34d0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049c0f7c; end: 1049c0f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0f7c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049c0f88; end: 1049c0f93; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager setFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(param_1 + _DAT_1130a34d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049c0f94; end: 1049c0fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0f94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049c0fe0; end: 1049c0feb; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager settings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c0fe0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(param_1 + _DAT_1130a34d8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049c0fec; end: 1049c102f;  */

void FUN_1049c0fec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049c1030; end: 1049c107b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1030(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049c107c; end: 1049c1087; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager setSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(param_1 + _DAT_1130a34d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049c1088; end: 1049c10e7;  */

void FUN_1049c1088(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1049c10e8; end: 1049c1183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c10e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049c1184; end: 1049c1257; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager configRefreshTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1184(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  lVar5 = _DAT_1130a34e0;
  puVar4 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_1130a34e0,auStack_48,0,0);
  FUN_1049c3860(param_1 + lVar5,puVar4,0x11309c628);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049c1258; end: 1049c12b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1258(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e0,auStack_48,0,0);
  FUN_1049c3860(unaff_x20 + lVar1,param_1,0x11309c628);
  return;
}



/* Entry: 1049c12b4; end: 1049c1397; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager setConfigRefreshTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c12b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_1130a34e0;
  _swift_beginAccess(param_1 + _DAT_1130a34e0,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 1049c1398; end: 1049c1433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1398(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e0,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 1049c1434; end: 1049c1477; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager isLoadingConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049c1434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34e8;
  _swift_beginAccess(param_1 + _DAT_1130a34e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1049c1478; end: 1049c14b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049c1478(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a34e8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049c14b8; end: 1049c1507; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager setIsLoadingConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c14b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34e8;
  _swift_beginAccess(param_1 + _DAT_1130a34e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1049c1508; end: 1049c166b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1508(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34e8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1049c166c; end: 1049c172b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c166c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_1130a34c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a34d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a34d8) = 0;
  lVar2 = _DAT_1130a34e0;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined1 *)(unaff_x20 + _DAT_1130a34e8) = 0;
  *(undefined **)(unaff_x20 + _DAT_1130a34f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,puVar1);
  return;
}



/* Entry: 1049c172c; end: 1049c17eb; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c172c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130a34c8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130a34d0) = 0;
  *(undefined8 *)(param_1 + _DAT_1130a34d8) = 0;
  lVar2 = _DAT_1130a34e0;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + lVar2,1,1,lVar4);
  *(undefined1 *)(param_1 + _DAT_1130a34e8) = 0;
  *(undefined **)(param_1 + _DAT_1130a34f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _swift_retain();
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1049c17ec; end: 1049c1867; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager configureWithFactory:settings:] */

void FUN_1049c17ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _swift_getObjectType(param_4);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  FUN_1049c2ff8(param_3,param_4,param_1,uVar1);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049c1868; end: 1049c18b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1868(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34c8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 1;
  return;
}



/* Entry: 1049c18b4; end: 1049c1903; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c18b4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(param_1 + _DAT_1130a34c8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = 1;
  return;
}



/* Entry: 1049c1904; end: 1049c1c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1904(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_1130a34c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34c8,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar6) == '\x01') {
    puVar2 = &UNK_1107bb730;
    _swift_allocObject(&UNK_1107bb730,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    lVar6 = _DAT_1130a34d8;
    _swift_beginAccess(unaff_x20 + _DAT_1130a34d8,auStack_70,0,0);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 == 0) {
      _objc_retain();
      _swift_bridgeObjectRetain(param_1);
    }
    else {
      _objc_retain();
      _swift_bridgeObjectRetain(param_1);
      puVar5 = PTR_s_appID_11259ee40;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        lVar3 = lVar6;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(lVar6);
        if (lRam000000011309fef8 != -1) {
          _swift_once(0x11309fef8,FUN_1049c0b94);
        }
        uVar1 = uRam00000001130a34b8;
        puVar4 = &UNK_1107bb758;
        _swift_allocObject(&UNK_1107bb758,0x38,7);
        *(long *)(puVar4 + 0x10) = unaff_x20;
        *(code **)(puVar4 + 0x18) = FUN_1049c312c;
        *(undefined **)(puVar4 + 0x20) = puVar2;
        *(long *)(puVar4 + 0x28) = lVar3;
        *(undefined **)(puVar4 + 0x30) = puVar5;
        _objc_retain(unaff_x20);
        _swift_retain(puVar2);
        FUN_1049c3138(uVar1,0x1049c3134,puVar4);
        _swift_release(puVar4);
        _swift_release(puVar2);
        return;
      }
    }
    lVar6 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010f227490;
    __ss5print_9separator10terminatoryypd_S2StF();
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Entry: 1049c1c44; end: 1049c1dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1c44(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_1130a34d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34d8,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    puVar5 = PTR_s_appID_11259ee40;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar2);
      if (lRam000000011309fef8 != -1) {
        _swift_once(0x11309fef8,FUN_1049c0b94);
      }
      uVar1 = uRam00000001130a34b8;
      puVar4 = &UNK_1107bb780;
      _swift_allocObject(&UNK_1107bb780,0x38,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(code **)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      *(long *)(puVar4 + 0x28) = lVar3;
      *(undefined **)(puVar4 + 0x30) = puVar5;
      _objc_retain();
      _swift_retain(param_2);
      FUN_1049c3138(uVar1,FUN_1049c39c8,puVar4);
      _swift_release(puVar4);
      return;
    }
  }
  lVar2 = 0x11309d598;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f227490;
  __ss5print_9separator10terminatoryypd_S2StF();
  _swift_bridgeObjectRelease(lVar2);
  (*param_1)(0);
  return;
}



/* Entry: 1049c1dd4; end: 1049c1e43; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager recordEvent:] */

void FUN_1049c1dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_retain(param_1);
  FUN_1049c1904(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1049c1e44; end: 1049c2207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c1e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar3 = 0;
  ppuVar9 = &puStack_b0;
  puVar1 = &UNK_1107bb8e0;
  _swift_allocObject(&UNK_1107bb8e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  lVar4 = _DAT_1130a34f0;
  _swift_beginAccess(param_1 + _DAT_1130a34f0,&puStack_b0,0x21,0);
  uVar13 = *(ulong *)(param_1 + lVar4);
  _swift_retain(param_3);
  uVar2 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_1 + lVar4) = uVar13;
  uVar10 = uVar13;
  if ((uVar2 & 1) == 0) {
    uVar10 = 0;
    func_0x0001024f9ad0(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    *(ulong *)(param_1 + lVar4) = uVar10;
  }
  uVar2 = *(ulong *)(uVar10 + 0x10);
  uVar13 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001024f9ad0(uVar13,uVar2 + 1,1,uVar10);
  }
  *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
  lVar12 = uVar13 + uVar2 * 0x10;
  *(code **)(lVar12 + 0x20) = FUN_1049c3834;
  *(undefined **)(lVar12 + 0x28) = puVar1;
  *(ulong *)(param_1 + lVar4) = uVar13;
  _swift_endAccess();
  FUN_1049c2208();
  lVar4 = _DAT_1130a34e8;
  if ((uVar3 & 1) == 0) {
    FUN_1049c23e4(1);
  }
  else {
    _swift_beginAccess(param_1 + _DAT_1130a34e8,auStack_68,1,0);
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar4) = 1;
      lVar12 = _DAT_1130a34d0;
      _swift_beginAccess(param_1 + _DAT_1130a34d0,auStack_80,0,0);
      lVar12 = *(long *)(param_1 + lVar12);
      if (lVar12 == 0) {
        lVar12 = 0x11309d598;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar12 + 0x18) = 2;
        *(undefined8 *)(lVar12 + 0x10) = 1;
        *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
        *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000030;
        *(undefined8 *)(lVar12 + 0x28) = 0x800000010f227650;
        __ss5print_9separator10terminatoryypd_S2StF();
        _swift_bridgeObjectRelease(lVar12);
        FUN_1049c23e4(0);
        *(undefined1 *)(param_1 + lVar4) = 0;
      }
      else {
        lVar4 = 0x11309c7e0;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar4 + 0x18) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 2;
        puVar1 = PTR___sSSN_11034da80;
        *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
        lVar5 = lVar4;
        func_0x00010075bbf0();
        *(undefined8 *)(lVar4 + 0x20) = param_4;
        *(undefined8 *)(lVar4 + 0x28) = param_5;
        *(undefined **)(lVar4 + 0x60) = puVar1;
        *(long *)(lVar4 + 0x68) = lVar5;
        *(long *)(lVar4 + 0x40) = lVar5;
        *(undefined8 *)(lVar4 + 0x48) = 0xd000000000000014;
        *(undefined8 *)(lVar4 + 0x50) = 0x800000010f227630;
        _swift_unknownObjectRetain(lVar12);
        _swift_bridgeObjectRetain(param_5);
        uVar6 = 0x40252f4025;
        uVar11 = 0xe500000000000000;
        __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x40252f4025,0xe500000000000000,lVar4);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar11);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000100214a84();
        _swift_release(puVar8);
        puVar8 = puVar7;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar7,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(puVar7);
        lVar4 = lVar12;
        _objc_msgSend(lVar12,PTR_s_createGraphRequestWithGraphPath__112525490,uVar6,puVar8,0,0);
        _objc_retainAutoreleasedReturnValue();
        _swift_unknownObjectRelease(lVar12);
        _objc_release(uVar6);
        _objc_release(puVar8);
        puVar1 = &UNK_1107bb908;
        _swift_allocObject(&UNK_1107bb908,0x18,7);
        *(long *)(puVar1 + 0x10) = param_1;
        pcStack_90 = FUN_1049c3858;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_1048e305c;
        puStack_98 = &UNK_1107bb920;
        puStack_88 = puVar1;
        __Block_copy(&puStack_b0);
        puVar1 = puStack_88;
        _objc_retain(param_1);
        _swift_release(puVar1);
        lVar12 = lVar4;
        _objc_msgSend(lVar4,PTR_s_startWithCompletion__1126720c8,ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        __Block_release(ppuVar9);
        _swift_unknownObjectRelease(lVar4);
        _swift_unknownObjectRelease(lVar12);
      }
    }
  }
  return;
}



/* Entry: 1049c2208; end: 1049c23e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1049c2208(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar8 = auStack_b0 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar1 = _DAT_1130a34e0;
  lVar9 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)puVar8 - uVar4;
  lVar7 = lVar6 - uVar4;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e0,auStack_78,0,0);
  FUN_1049c3860(unaff_x20 + lVar1,puVar8,0x11309c628);
  puVar3 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1049c38b0(puVar8,0x11309c628);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar2);
    __s10Foundation4DateVACycfC(lVar6);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar7);
    pcVar5 = *(code **)(lVar9 + 8);
    (*pcVar5)(lVar6,lVar2);
    (*pcVar5)(lVar7,lVar2);
    if (param_1 < 86400.0) {
      if (lRam000000011309ff08 != -1) {
        _swift_once(0x11309ff08,FUN_1049c3af4);
      }
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puRam00000001130a3538) + 0x98))
                (&uStack_a8);
      if (lStack_a0 == 0) {
        return true;
      }
      FUN_1049c32e8(uStack_a8,lStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
      return lStack_a0 == 0;
    }
  }
  return true;
}



/* Entry: 1049c23e4; end: 1049c24ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c23e4(byte param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_1130a34f0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34f0,auStack_68,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar3);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar4);
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    do {
      pcVar1 = (code *)puVar6[-1];
      uVar2 = *puVar6;
      bStack_69 = param_1 & 1;
      _swift_retain(uVar2);
      (*pcVar1)(&bStack_69);
      _swift_release(uVar2);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = *(long *)(unaff_x20 + lVar3);
  }
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  _swift_bridgeObjectRelease(lVar4);
  return;
}



/* Entry: 1049c24ac; end: 1049c257b;  */

void FUN_1049c24ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (lRam000000011309fef8 != -1) {
    _swift_once(0x11309fef8,FUN_1049c0b94);
  }
  uVar1 = uRam00000001130a34b8;
  FUN_1049c3860(param_2,&uStack_50,0x11309c428);
  puVar2 = &UNK_1107bb958;
  _swift_allocObject(&UNK_1107bb958,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = uStack_48;
  *(undefined8 *)(puVar2 + 0x20) = uStack_50;
  *(undefined8 *)(puVar2 + 0x38) = uStack_38;
  *(undefined8 *)(puVar2 + 0x30) = uStack_40;
  _swift_errorRetain(param_3);
  _objc_retain(param_4);
  FUN_1049c3138(uVar1,FUN_1049c38a4,puVar2);
  _swift_release(puVar2);
  return;
}



/* Entry: 1049c257c; end: 1049c2d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c257c(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    lVar6 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    _swift_getErrorValue(param_1,auStack_b8,auStack_d0);
    _swift_errorRetain(param_1);
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar6 + 0x20) = uStack_c8;
    *(undefined8 *)(lVar6 + 0x28) = uStack_c0;
    __ss5print_9separator10terminatoryypd_S2StF(lVar6,0x20,0xe100000000000000,10,0xe100000000000000)
    ;
    _swift_bridgeObjectRelease(lVar6);
    FUN_1049c23e4(0);
    _swift_errorRelease(param_1);
    goto LAB_1049c288c;
  }
  FUN_1049c3860(param_3,&uStack_80,0x11309c428);
  if (puStack_68 == (undefined *)0x0) {
LAB_1049c2804:
    func_0x0001049c38b0(&uStack_80,0x11309c428);
LAB_1049c2814:
    lVar6 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000036;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010f227690;
    __ss5print_9separator10terminatoryypd_S2StF();
LAB_1049c287c:
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar4 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar16 = PTR___sypN_11034f1a8;
    puVar5 = &uStack_a0;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar3 = uStack_a0;
    if (((ulong)puVar5 & 1) == 0) goto LAB_1049c2814;
    if (*(long *)(uStack_a0 + 0x10) == 0) {
LAB_1049c26e0:
      uStack_78 = 0;
      uStack_80 = 0;
      puStack_68 = (undefined *)0x0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uStack_a0);
      lVar6 = 0x61746164;
      uVar17 = 0;
      func_0x000100029284(0x61746164);
      if ((uVar17 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar3);
        goto LAB_1049c26e0;
      }
      func_0x0001000bb420(*(long *)(uVar3 + 0x38) + lVar6 * 0x20,&uStack_80);
      _swift_bridgeObjectRelease(uVar3);
    }
    _swift_bridgeObjectRelease(uVar3);
    if (puStack_68 == (undefined *)0x0) goto LAB_1049c2804;
    uVar4 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    puVar5 = &uStack_a0;
    _swift_dynamicCast(puVar5,&uStack_80,puVar16 + 8,uVar4,6);
    uVar3 = uStack_a0;
    if (((ulong)puVar5 & 1) == 0) goto LAB_1049c2814;
    if (*(long *)(uStack_a0 + 0x10) == 0) {
      _swift_bridgeObjectRelease(uStack_a0);
      goto LAB_1049c2814;
    }
    uVar18 = *(undefined8 *)(uStack_a0 + 0x20);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRelease(uVar3);
    puVar10 = PTR_PTR_1126add78;
    _swift_getInitializedObjCClass();
    puVar2 = PTR___sSSN_11034da80;
    uVar4 = uVar18;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar18,PTR___sSSN_11034da80,puVar16 + 8,PTR___sSSSHsWP_11034da90);
    uVar7 = 0x746e696f70646e65;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746e696f70646e65,0xe800000000000000);
    uVar8 = 0;
    func_0x0001049c38ec(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    _swift_getObjCClassFromMetadata();
    puVar9 = puVar10;
    _objc_msgSend(puVar10,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar4,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar7);
    if (puVar9 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar9);
      _swift_unknownObjectRelease(puVar9);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
LAB_1049c2c08:
      _swift_bridgeObjectRelease(uVar18);
      func_0x0001049c38b0(&uStack_80,0x11309c428);
LAB_1049c2c3c:
      lVar6 = 0x11309d598;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined **)(lVar6 + 0x38) = puVar2;
      *(undefined8 *)(lVar6 + 0x20) = 0xd00000000000003a;
      *(undefined8 *)(lVar6 + 0x28) = 0x800000010f2276d0;
      __ss5print_9separator10terminatoryypd_S2StF();
      goto LAB_1049c287c;
    }
    puVar11 = &uStack_b0;
    _swift_dynamicCast(puVar11,&uStack_80,puVar16 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_a8;
    uVar4 = uStack_b0;
    if (((ulong)puVar11 & 1) == 0) {
LAB_1049c2c34:
      _swift_bridgeObjectRelease(uVar18);
      goto LAB_1049c2c3c;
    }
    uVar12 = uVar18;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar18,PTR___sSSN_11034da80,puVar16 + 8,PTR___sSSSHsWP_11034da90);
    uVar13 = 0x5f74657361746164;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f74657361746164,0xea00000000006469);
    puVar9 = puVar10;
    _objc_msgSend(puVar10,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar12,uVar13,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar13);
    if (puVar9 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar9);
      _swift_unknownObjectRelease(puVar9);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
LAB_1049c2c00:
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_1049c2c08;
    }
    puVar11 = &uStack_b0;
    _swift_dynamicCast(puVar11,&uStack_80,puVar16 + 8,PTR___sSSN_11034da80,6);
    uVar13 = uStack_a8;
    uVar12 = uStack_b0;
    if (((ulong)puVar11 & 1) == 0) {
LAB_1049c2c2c:
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_1049c2c34;
    }
    uVar14 = uVar18;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar18,PTR___sSSN_11034da80,puVar16 + 8,PTR___sSSSHsWP_11034da90);
    uVar15 = 0x6b5f737365636361;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b5f737365636361,0xea00000000007965);
    puVar9 = puVar10;
    _objc_msgSend(puVar10,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar14,uVar15,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar15);
    if (puVar9 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar9);
      _swift_unknownObjectRelease(puVar9);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(uVar13);
      goto LAB_1049c2c00;
    }
    puVar11 = &uStack_b0;
    _swift_dynamicCast(puVar11,&uStack_80,puVar16 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar13);
      goto LAB_1049c2c2c;
    }
    if (lRam000000011309ff08 != -1) {
      _swift_once(0x11309ff08,FUN_1049c3af4);
    }
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puRam00000001130a3538) + 200))
              (uVar12,uVar13,uVar4,uVar7,uStack_b0,uStack_a8);
    _swift_bridgeObjectRelease(uStack_a8);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = uVar18;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar18,PTR___sSSN_11034da80,puVar16 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar18);
    uVar7 = 0x6c62616e655f7369;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c62616e655f7369,0xea00000000006465);
    uVar8 = 0;
    func_0x0001049c38ec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _swift_getObjCClassFromMetadata();
    puVar16 = puVar10;
    _objc_msgSend(puVar10,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar4,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar7);
    if (puVar16 == (undefined *)0x0) {
      puStack_68 = PTR___sSbN_11034dd40;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar16);
      _swift_unknownObjectRelease(puVar16);
      func_0x000100102924(&uStack_a0,&uStack_80);
    }
    puVar5 = &uStack_80;
    func_0x0001006732c8(puVar5,puStack_68);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000100183ab8(&uStack_80);
    _objc_msgSend(puVar10,PTR_s_boolValue__1125a56a0,puVar5);
    _swift_unknownObjectRelease(puVar5);
  }
  FUN_1049c23e4(puVar10);
LAB_1049c288c:
  puVar1 = (undefined1 *)(param_2 + _DAT_1130a34e8);
  _swift_beginAccess(puVar1,&uStack_80,1,0);
  *puVar1 = 0;
  return;
}



/* Entry: 1049c2d1c; end: 1049c2d6f; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager loadWithBlock:] */

void FUN_1049c2d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_1049c35b8();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049c2d70; end: 1049c2ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1049c2d70(double param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  puVar9 = auStack_80 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar2 = _DAT_1130a34e0;
  lVar10 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar9 - uVar5;
  lVar8 = lVar7 - uVar5;
  _swift_beginAccess(unaff_x20 + _DAT_1130a34e0,auStack_78,0,0);
  FUN_1049c3860(unaff_x20 + lVar2,puVar9,0x11309c628);
  puVar4 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_1049c38b0(puVar9,0x11309c628);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar3);
    __s10Foundation4DateVACycfC(lVar7);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar8);
    pcVar6 = *(code **)(lVar10 + 8);
    (*pcVar6)(lVar7,lVar3);
    (*pcVar6)(lVar8,lVar3);
    bVar1 = param_1 < 86400.0;
  }
  return bVar1;
}



/* Entry: 1049c2ecc; end: 1049c2eff; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager shouldRefresh] */

uint FUN_1049c2ecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049c2208();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049c2f00; end: 1049c2f33; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager isRefreshTimestampValid] */

uint FUN_1049c2f00(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049c2d70();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049c2f34; end: 1049c2f63; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager executeBlocksWithIsEnabled:] */

void FUN_1049c2f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049c23e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049c2f64; end: 1049c2f97;  */

void FUN_1049c2f64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049c2f98; end: 1049c2ff7; -[_TtC12FBSDKCoreKit25FBSDKAppEventsCAPIManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c2f98(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a34d0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a34d8));
  FUN_1049c38b0(param_1 + _DAT_1130a34e0,0x11309c628);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a34f0));
  return;
}



/* Entry: 1049c2ff8; end: 1049c30b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c2ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130a34c8;
  _swift_beginAccess(param_3 + _DAT_1130a34c8,auStack_58,1,0);
  *(undefined1 *)(param_3 + lVar1) = 0;
  lVar1 = _DAT_1130a34d0;
  _swift_beginAccess(param_3 + _DAT_1130a34d0,auStack_70,1,0);
  uVar2 = *(undefined8 *)(param_3 + lVar1);
  *(undefined8 *)(param_3 + lVar1) = param_1;
  _swift_unknownObjectRelease(uVar2);
  lVar1 = _DAT_1130a34d8;
  _swift_beginAccess(param_3 + _DAT_1130a34d8,auStack_88,1,0);
  uVar2 = *(undefined8 *)(param_3 + lVar1);
  *(undefined8 *)(param_3 + lVar1) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar2);
  _swift_unknownObjectRetain(param_2);
  return;
}



/* Entry: 1049c30b8; end: 1049c312b;  */

ulong FUN_1049c30b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 1049c312c; end: 1049c3137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c312c(ulong param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((param_1 & 1) != 0) {
    if (lRam000000011309ff08 != -1) {
      _swift_once(0x11309ff08,FUN_1049c3af4);
    }
    puVar2 = puRam00000001130a3538;
    lVar6 = _DAT_1130a34d8;
    uStack_50 = 0x4b4453534f694246;
    uStack_48 = 0xe90000000000002e;
    _swift_beginAccess(lVar4 + _DAT_1130a34d8,auStack_68,0,0);
    lVar4 = *(long *)(lVar4 + lVar6);
    if (lVar4 == 0) {
      puVar5 = (undefined *)0xe700000000000000;
      lVar6 = 0x6e776f6e6b6e55;
    }
    else {
      puVar5 = PTR_s_sdkVersion_112632650;
      _objc_msgSend(lVar4,PTR_s_sdkVersion_112632650);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar4);
    }
    __sSS6appendyySSF(lVar6,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    uVar3 = uStack_48;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0xd0))
              (uVar1,uStack_50,uStack_48);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 1049c3138; end: 1049c32e7;  */

void FUN_1049c3138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = (long)&uStack_a0 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar4 + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107bb8a8;
  ppuVar5 = &puStack_90;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __Block_copy(ppuVar5);
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x0001049c392c(0x112d4af88,puVar2,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar1);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  func_0x0001049c37ec(0x112d4af98,0x11309c6f8,puVar2);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_98,uVar7,uVar8,lVar3,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar10,ppuVar5);
  __Block_release(ppuVar5);
  (**(code **)(lVar12 + 8))(lVar10,lVar3);
  (**(code **)(lVar9 + 8))(lVar11,lVar4);
  _swift_release(uStack_68);
  return;
}



/* Entry: 1049c32e8; end: 1049c34cb;  */

void FUN_1049c32e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
    return;
  }
  return;
}



/* Entry: 1049c34cc; end: 1049c34d3;  */

void FUN_1049c34cc(void)

{
  if (lRam00000001130a3528 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e826b24);
  return;
}



/* Entry: 1049c34d4; end: 1049c35b7;  */

void FUN_1049c34d4(undefined8 param_1)

{
  if (lRam00000001130a3528 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e826b24);
  return;
}



/* Entry: 1049c35b8; end: 1049c3787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c35b8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  puVar2 = &UNK_1107bb868;
  _swift_allocObject(&UNK_1107bb868,0x18,7);
  *(long *)(puVar2 + 0x10) = param_2;
  lVar6 = _DAT_1130a34d8;
  _swift_beginAccess(param_1 + _DAT_1130a34d8,auStack_58,0,0);
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar6 == 0) {
    __Block_copy(param_2);
  }
  else {
    __Block_copy(param_2);
    puVar5 = PTR_s_appID_11259ee40;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar3 = lVar6;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar6);
      if (lRam000000011309fef8 != -1) {
        _swift_once(0x11309fef8,FUN_1049c0b94);
      }
      uVar1 = uRam00000001130a34b8;
      puVar4 = &UNK_1107bb890;
      _swift_allocObject(&UNK_1107bb890,0x38,7);
      *(long *)(puVar4 + 0x10) = param_1;
      *(code **)(puVar4 + 0x18) = FUN_1049c3788;
      *(undefined **)(puVar4 + 0x20) = puVar2;
      *(long *)(puVar4 + 0x28) = lVar3;
      *(undefined **)(puVar4 + 0x30) = puVar5;
      _objc_retain(param_1);
      _swift_retain(puVar2);
      FUN_1049c3138(uVar1,0x1049c39cc,puVar4);
      _swift_release(puVar2);
      puVar2 = puVar4;
      goto LAB_1049c3754;
    }
  }
  lVar6 = 0x11309d598;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar6 + 0x28) = 0x800000010f227490;
  __ss5print_9separator10terminatoryypd_S2StF();
  _swift_bridgeObjectRelease(lVar6);
  (**(code **)(param_2 + 0x10))(param_2,0);
LAB_1049c3754:
  _swift_release(puVar2);
  return;
}



/* Entry: 1049c3788; end: 1049c378f;  */

void FUN_1049c3788(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1049c3790; end: 1049c37c3;  */

void FUN_1049c3790(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049c37c4; end: 1049c37d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c37c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  ppuVar10 = &puStack_b0;
  puVar2 = &UNK_1107bb8e0;
  _swift_allocObject(&UNK_1107bb8e0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar13;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  lVar5 = _DAT_1130a34f0;
  _swift_beginAccess(lVar11 + _DAT_1130a34f0,&puStack_b0,0x21,0);
  uVar16 = *(ulong *)(lVar11 + lVar5);
  _swift_retain(uVar7);
  uVar3 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar11 + lVar5) = uVar16;
  uVar12 = uVar16;
  if ((uVar3 & 1) == 0) {
    uVar12 = 0;
    func_0x0001024f9ad0(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
    *(ulong *)(lVar11 + lVar5) = uVar12;
  }
  uVar3 = *(ulong *)(uVar12 + 0x10);
  uVar16 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar3) {
    uVar16 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001024f9ad0(uVar16,uVar3 + 1,1,uVar12);
  }
  *(ulong *)(uVar16 + 0x10) = uVar3 + 1;
  lVar15 = uVar16 + uVar3 * 0x10;
  *(code **)(lVar15 + 0x20) = FUN_1049c3834;
  *(undefined **)(lVar15 + 0x28) = puVar2;
  *(ulong *)(lVar11 + lVar5) = uVar16;
  _swift_endAccess();
  FUN_1049c2208();
  lVar5 = _DAT_1130a34e8;
  if ((uVar4 & 1) == 0) {
    FUN_1049c23e4(1);
  }
  else {
    _swift_beginAccess(lVar11 + _DAT_1130a34e8,auStack_68,1,0);
    if ((*(byte *)(lVar11 + lVar5) & 1) == 0) {
      *(undefined1 *)(lVar11 + lVar5) = 1;
      lVar15 = _DAT_1130a34d0;
      _swift_beginAccess(lVar11 + _DAT_1130a34d0,auStack_80,0,0);
      lVar15 = *(long *)(lVar11 + lVar15);
      if (lVar15 == 0) {
        lVar15 = 0x11309d598;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar15 + 0x18) = 2;
        *(undefined8 *)(lVar15 + 0x10) = 1;
        *(undefined **)(lVar15 + 0x38) = PTR___sSSN_11034da80;
        *(undefined8 *)(lVar15 + 0x20) = 0xd000000000000030;
        *(undefined8 *)(lVar15 + 0x28) = 0x800000010f227650;
        __ss5print_9separator10terminatoryypd_S2StF();
        _swift_bridgeObjectRelease(lVar15);
        FUN_1049c23e4(0);
        *(undefined1 *)(lVar11 + lVar5) = 0;
      }
      else {
        lVar5 = 0x11309c7e0;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar5 + 0x18) = 4;
        *(undefined8 *)(lVar5 + 0x10) = 2;
        puVar2 = PTR___sSSN_11034da80;
        *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
        lVar6 = lVar5;
        func_0x00010075bbf0();
        *(undefined8 *)(lVar5 + 0x20) = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar14;
        *(undefined **)(lVar5 + 0x60) = puVar2;
        *(long *)(lVar5 + 0x68) = lVar6;
        *(long *)(lVar5 + 0x40) = lVar6;
        *(undefined8 *)(lVar5 + 0x48) = 0xd000000000000014;
        *(undefined8 *)(lVar5 + 0x50) = 0x800000010f227630;
        _swift_unknownObjectRetain(lVar15);
        _swift_bridgeObjectRetain(uVar14);
        uVar7 = 0x40252f4025;
        uVar13 = 0xe500000000000000;
        __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x40252f4025,0xe500000000000000,lVar5);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar13);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000100214a84();
        _swift_release(puVar9);
        puVar9 = puVar8;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar8,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(puVar8);
        lVar5 = lVar15;
        _objc_msgSend(lVar15,PTR_s_createGraphRequestWithGraphPath__112525490,uVar7,puVar9,0,0);
        _objc_retainAutoreleasedReturnValue();
        _swift_unknownObjectRelease(lVar15);
        _objc_release(uVar7);
        _objc_release(puVar9);
        puVar2 = &UNK_1107bb908;
        _swift_allocObject(&UNK_1107bb908,0x18,7);
        *(long *)(puVar2 + 0x10) = lVar11;
        pcStack_90 = FUN_1049c3858;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_1048e305c;
        puStack_98 = &UNK_1107bb920;
        puStack_88 = puVar2;
        __Block_copy(&puStack_b0);
        puVar2 = puStack_88;
        _objc_retain(lVar11);
        _swift_release(puVar2);
        lVar11 = lVar5;
        _objc_msgSend(lVar5,PTR_s_startWithCompletion__1126720c8,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        __Block_release(ppuVar10);
        _swift_unknownObjectRelease(lVar5);
        _swift_unknownObjectRelease(lVar11);
      }
    }
  }
  return;
}



/* Entry: 1049c37d4; end: 1049c3833;  */

void FUN_1049c37d4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049c3834; end: 1049c3857;  */

void FUN_1049c3834(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1049c3858; end: 1049c385f;  */

void FUN_1049c3858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (lRam000000011309fef8 != -1) {
    _swift_once(0x11309fef8,FUN_1049c0b94);
  }
  uVar1 = uRam00000001130a34b8;
  FUN_1049c3860(param_2,&uStack_50,0x11309c428);
  puVar2 = &UNK_1107bb958;
  _swift_allocObject(&UNK_1107bb958,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = uStack_48;
  *(undefined8 *)(puVar2 + 0x20) = uStack_50;
  *(undefined8 *)(puVar2 + 0x38) = uStack_38;
  *(undefined8 *)(puVar2 + 0x30) = uStack_40;
  _swift_errorRetain(param_3);
  _objc_retain(uVar3);
  FUN_1049c3138(uVar1,FUN_1049c38a4,puVar2);
  _swift_release(puVar2);
  return;
}



/* Entry: 1049c3860; end: 1049c38a3;  */

undefined8 FUN_1049c3860(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1049c38a4; end: 1049c38af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c38a4(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar8 != 0) {
    lVar5 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    _swift_getErrorValue(lVar8,auStack_b8,auStack_d0);
    _swift_errorRetain(lVar8);
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar5 + 0x20) = uStack_c8;
    *(undefined8 *)(lVar5 + 0x28) = uStack_c0;
    __ss5print_9separator10terminatoryypd_S2StF(lVar5,0x20,0xe100000000000000,10,0xe100000000000000)
    ;
    _swift_bridgeObjectRelease(lVar5);
    FUN_1049c23e4(0);
    _swift_errorRelease(lVar8);
    goto LAB_1049c288c;
  }
  FUN_1049c3860(unaff_x20 + 0x20,&uStack_80,0x11309c428);
  if (puStack_68 == (undefined *)0x0) {
LAB_1049c2804:
    func_0x0001049c38b0(&uStack_80,0x11309c428);
LAB_1049c2814:
    lVar8 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar8 + 0x20) = 0xd000000000000036;
    *(undefined8 *)(lVar8 + 0x28) = 0x800000010f227690;
    __ss5print_9separator10terminatoryypd_S2StF();
LAB_1049c287c:
    _swift_bridgeObjectRelease(lVar8);
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar6 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar18 = PTR___sypN_11034f1a8;
    puVar7 = &uStack_a0;
    _swift_dynamicCast(puVar7,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
    uVar4 = uStack_a0;
    if (((ulong)puVar7 & 1) == 0) goto LAB_1049c2814;
    if (*(long *)(uStack_a0 + 0x10) == 0) {
LAB_1049c26e0:
      uStack_78 = 0;
      uStack_80 = 0;
      puStack_68 = (undefined *)0x0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uStack_a0);
      lVar8 = 0x61746164;
      uVar19 = 0;
      func_0x000100029284(0x61746164);
      if ((uVar19 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar4);
        goto LAB_1049c26e0;
      }
      func_0x0001000bb420(*(long *)(uVar4 + 0x38) + lVar8 * 0x20,&uStack_80);
      _swift_bridgeObjectRelease(uVar4);
    }
    _swift_bridgeObjectRelease(uVar4);
    if (puStack_68 == (undefined *)0x0) goto LAB_1049c2804;
    uVar6 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    puVar7 = &uStack_a0;
    _swift_dynamicCast(puVar7,&uStack_80,puVar18 + 8,uVar6,6);
    uVar4 = uStack_a0;
    if (((ulong)puVar7 & 1) == 0) goto LAB_1049c2814;
    if (*(long *)(uStack_a0 + 0x10) == 0) {
      _swift_bridgeObjectRelease(uStack_a0);
      goto LAB_1049c2814;
    }
    uVar20 = *(undefined8 *)(uStack_a0 + 0x20);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRelease(uVar4);
    puVar12 = PTR_PTR_1126add78;
    _swift_getInitializedObjCClass();
    puVar3 = PTR___sSSN_11034da80;
    uVar6 = uVar20;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar20,PTR___sSSN_11034da80,puVar18 + 8,PTR___sSSSHsWP_11034da90);
    uVar9 = 0x746e696f70646e65;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746e696f70646e65,0xe800000000000000);
    uVar10 = 0;
    func_0x0001049c38ec(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    _swift_getObjCClassFromMetadata();
    puVar11 = puVar12;
    _objc_msgSend(puVar12,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar6,uVar9,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar9);
    if (puVar11 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar11);
      _swift_unknownObjectRelease(puVar11);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
LAB_1049c2c08:
      _swift_bridgeObjectRelease(uVar20);
      func_0x0001049c38b0(&uStack_80,0x11309c428);
LAB_1049c2c3c:
      lVar8 = 0x11309d598;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(lVar8 + 0x18) = 2;
      *(undefined8 *)(lVar8 + 0x10) = 1;
      *(undefined **)(lVar8 + 0x38) = puVar3;
      *(undefined8 *)(lVar8 + 0x20) = 0xd00000000000003a;
      *(undefined8 *)(lVar8 + 0x28) = 0x800000010f2276d0;
      __ss5print_9separator10terminatoryypd_S2StF();
      goto LAB_1049c287c;
    }
    puVar13 = &uStack_b0;
    _swift_dynamicCast(puVar13,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_a8;
    uVar6 = uStack_b0;
    if (((ulong)puVar13 & 1) == 0) {
LAB_1049c2c34:
      _swift_bridgeObjectRelease(uVar20);
      goto LAB_1049c2c3c;
    }
    uVar14 = uVar20;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar20,PTR___sSSN_11034da80,puVar18 + 8,PTR___sSSSHsWP_11034da90);
    uVar15 = 0x5f74657361746164;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f74657361746164,0xea00000000006469);
    puVar11 = puVar12;
    _objc_msgSend(puVar12,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar14,uVar15,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar15);
    if (puVar11 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar11);
      _swift_unknownObjectRelease(puVar11);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
LAB_1049c2c00:
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_1049c2c08;
    }
    puVar13 = &uStack_b0;
    _swift_dynamicCast(puVar13,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    uVar15 = uStack_a8;
    uVar14 = uStack_b0;
    if (((ulong)puVar13 & 1) == 0) {
LAB_1049c2c2c:
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_1049c2c34;
    }
    uVar16 = uVar20;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar20,PTR___sSSN_11034da80,puVar18 + 8,PTR___sSSSHsWP_11034da90);
    uVar17 = 0x6b5f737365636361;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b5f737365636361,0xea00000000007965);
    puVar11 = puVar12;
    _objc_msgSend(puVar12,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar16,uVar17,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar17);
    if (puVar11 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar11);
      _swift_unknownObjectRelease(puVar11);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    if (puStack_88 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(uVar15);
      goto LAB_1049c2c00;
    }
    puVar13 = &uStack_b0;
    _swift_dynamicCast(puVar13,&uStack_80,puVar18 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar15);
      goto LAB_1049c2c2c;
    }
    if (lRam000000011309ff08 != -1) {
      _swift_once(0x11309ff08,FUN_1049c3af4);
    }
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puRam00000001130a3538) + 200))
              (uVar14,uVar15,uVar6,uVar9,uStack_b0,uStack_a8);
    _swift_bridgeObjectRelease(uStack_a8);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar9);
    uVar6 = uVar20;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar20,PTR___sSSN_11034da80,puVar18 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar20);
    uVar9 = 0x6c62616e655f7369;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c62616e655f7369,0xea00000000006465);
    uVar10 = 0;
    func_0x0001049c38ec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _swift_getObjCClassFromMetadata();
    puVar18 = puVar12;
    _objc_msgSend(puVar12,PTR_s_dictionary_objectForKey_ofType__1125ba140,uVar6,uVar9,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar9);
    if (puVar18 == (undefined *)0x0) {
      puStack_68 = PTR___sSbN_11034dd40;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,puVar18);
      _swift_unknownObjectRelease(puVar18);
      func_0x000100102924(&uStack_a0,&uStack_80);
    }
    puVar7 = &uStack_80;
    func_0x0001006732c8(puVar7,puStack_68);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000100183ab8(&uStack_80);
    _objc_msgSend(puVar12,PTR_s_boolValue__1125a56a0,puVar7);
    _swift_unknownObjectRelease(puVar7);
  }
  FUN_1049c23e4(puVar12);
LAB_1049c288c:
  puVar1 = (undefined1 *)(lVar2 + _DAT_1130a34e8);
  _swift_beginAccess(puVar1,&uStack_80,1,0);
  *puVar1 = 0;
  return;
}



/* Entry: 1049c38b0; end: 1049c39c7;  */

undefined8 FUN_1049c38b0(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1049c39c8; end: 1049c39cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c39c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  ppuVar10 = &puStack_b0;
  puVar2 = &UNK_1107bb8e0;
  _swift_allocObject(&UNK_1107bb8e0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar13;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  lVar5 = _DAT_1130a34f0;
  _swift_beginAccess(lVar11 + _DAT_1130a34f0,&puStack_b0,0x21,0);
  uVar16 = *(ulong *)(lVar11 + lVar5);
  _swift_retain(uVar7);
  uVar3 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar11 + lVar5) = uVar16;
  uVar12 = uVar16;
  if ((uVar3 & 1) == 0) {
    uVar12 = 0;
    func_0x0001024f9ad0(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
    *(ulong *)(lVar11 + lVar5) = uVar12;
  }
  uVar3 = *(ulong *)(uVar12 + 0x10);
  uVar16 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar3) {
    uVar16 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001024f9ad0(uVar16,uVar3 + 1,1,uVar12);
  }
  *(ulong *)(uVar16 + 0x10) = uVar3 + 1;
  lVar15 = uVar16 + uVar3 * 0x10;
  *(code **)(lVar15 + 0x20) = FUN_1049c3834;
  *(undefined **)(lVar15 + 0x28) = puVar2;
  *(ulong *)(lVar11 + lVar5) = uVar16;
  _swift_endAccess();
  FUN_1049c2208();
  lVar5 = _DAT_1130a34e8;
  if ((uVar4 & 1) == 0) {
    FUN_1049c23e4(1);
  }
  else {
    _swift_beginAccess(lVar11 + _DAT_1130a34e8,auStack_68,1,0);
    if ((*(byte *)(lVar11 + lVar5) & 1) == 0) {
      *(undefined1 *)(lVar11 + lVar5) = 1;
      lVar15 = _DAT_1130a34d0;
      _swift_beginAccess(lVar11 + _DAT_1130a34d0,auStack_80,0,0);
      lVar15 = *(long *)(lVar11 + lVar15);
      if (lVar15 == 0) {
        lVar15 = 0x11309d598;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar15 + 0x18) = 2;
        *(undefined8 *)(lVar15 + 0x10) = 1;
        *(undefined **)(lVar15 + 0x38) = PTR___sSSN_11034da80;
        *(undefined8 *)(lVar15 + 0x20) = 0xd000000000000030;
        *(undefined8 *)(lVar15 + 0x28) = 0x800000010f227650;
        __ss5print_9separator10terminatoryypd_S2StF();
        _swift_bridgeObjectRelease(lVar15);
        FUN_1049c23e4(0);
        *(undefined1 *)(lVar11 + lVar5) = 0;
      }
      else {
        lVar5 = 0x11309c7e0;
        func_0x0001048db364();
        _swift_allocObject();
        *(undefined8 *)(lVar5 + 0x18) = 4;
        *(undefined8 *)(lVar5 + 0x10) = 2;
        puVar2 = PTR___sSSN_11034da80;
        *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
        lVar6 = lVar5;
        func_0x00010075bbf0();
        *(undefined8 *)(lVar5 + 0x20) = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar14;
        *(undefined **)(lVar5 + 0x60) = puVar2;
        *(long *)(lVar5 + 0x68) = lVar6;
        *(long *)(lVar5 + 0x40) = lVar6;
        *(undefined8 *)(lVar5 + 0x48) = 0xd000000000000014;
        *(undefined8 *)(lVar5 + 0x50) = 0x800000010f227630;
        _swift_unknownObjectRetain(lVar15);
        _swift_bridgeObjectRetain(uVar14);
        uVar7 = 0x40252f4025;
        uVar13 = 0xe500000000000000;
        __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x40252f4025,0xe500000000000000,lVar5);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar13);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000100214a84();
        _swift_release(puVar9);
        puVar9 = puVar8;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar8,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(puVar8);
        lVar5 = lVar15;
        _objc_msgSend(lVar15,PTR_s_createGraphRequestWithGraphPath__112525490,uVar7,puVar9,0,0);
        _objc_retainAutoreleasedReturnValue();
        _swift_unknownObjectRelease(lVar15);
        _objc_release(uVar7);
        _objc_release(puVar9);
        puVar2 = &UNK_1107bb908;
        _swift_allocObject(&UNK_1107bb908,0x18,7);
        *(long *)(puVar2 + 0x10) = lVar11;
        pcStack_90 = FUN_1049c3858;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_1048e305c;
        puStack_98 = &UNK_1107bb920;
        puStack_88 = puVar2;
        __Block_copy(&puStack_b0);
        puVar2 = puStack_88;
        _objc_retain(lVar11);
        _swift_release(puVar2);
        lVar11 = lVar5;
        _objc_msgSend(lVar5,PTR_s_startWithCompletion__1126720c8,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        __Block_release(ppuVar10);
        _swift_unknownObjectRelease(lVar5);
        _swift_unknownObjectRelease(lVar11);
      }
    }
  }
  return;
}



/* Entry: 1049c39d0; end: 1049c39e7;  */

void FUN_1049c39d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1049c39e8; end: 1049c3a33; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c39e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3540);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a3540))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049c3a34; end: 1049c3a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049c3a34(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3540);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3540) + 8))
  ;
  return auVar1;
}


