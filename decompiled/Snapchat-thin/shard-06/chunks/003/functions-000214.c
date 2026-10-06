/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046da9b8; end: 1046daa27; -[SCAdSnap withRenditionList:] */

void FUN_1046da9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1047c7534(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_1046da678(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1046daa28; end: 1046dae0f;  */

void FUN_1046daa28(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  code *pcVar11;
  ushort uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  char cStack_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  ushort uStack_68;
  
  lVar15 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar15);
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      plVar13 = (long *)(param_2 + 0x20 + lVar16 * 0x50);
      lStack_88 = plVar13[5];
      uVar14 = plVar13[4];
      uVar18 = plVar13[6];
      cStack_78 = (char)plVar13[7];
      cVar10 = cStack_78;
      uStack_77 = (undefined1)((ulong)plVar13[7] >> 8);
      uStack_6e = (undefined6)*(undefined8 *)((long)plVar13 + 0x42);
      uStack_68 = (ushort)((ulong)*(undefined8 *)((long)plVar13 + 0x42) >> 0x30);
      uVar12 = uStack_68;
      uStack_76 = (undefined6)*(undefined8 *)((long)plVar13 + 0x3a);
      uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)plVar13 + 0x3a) >> 0x30);
      lVar23 = plVar13[1];
      lVar22 = *plVar13;
      uVar24 = plVar13[3];
      lStack_a0 = plVar13[2];
      lStack_b0 = lVar22;
      lStack_a8 = lVar23;
      uStack_98 = uVar24;
      uStack_90 = uVar14;
      uStack_80 = uVar18;
      if (lStack_a0 < 0) {
        bVar9 = (byte)lStack_88;
        uVar7 = CONCAT62(uStack_6e,uStack_70);
        bVar8 = (byte)lStack_a0;
        __ss6HasherV8_combineyySuF(1);
        _swift_bridgeObjectRetain(lStack_a8);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar22,lVar23);
        __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
        uVar2 = 0;
        if ((uVar24 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar24;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
        uVar24 = 0;
        if ((uVar14 & 0x7fffffffffffffff) != 0) {
          uVar24 = uVar14;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar24);
        if (bVar9 == 2) {
          uVar12 = 0;
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(1);
          __ss6HasherV8_combineyys5UInt8VF(bVar9 & 1);
          if (cVar10 == '\x01') {
            __ss6HasherV8_combineyys5UInt8VF(0);
          }
          else {
            __ss6HasherV8_combineyys5UInt8VF(1);
            uVar14 = 0;
            if ((uVar18 & 0x7fffffffffffffff) != 0) {
              uVar14 = uVar18;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar14);
          }
          if ((uVar12 & 0xff) == 1) {
            __ss6HasherV8_combineyys5UInt8VF(0);
          }
          else {
            __ss6HasherV8_combineyys5UInt8VF(1);
            uVar14 = 0;
            if ((uVar7 & 0x7fffffffffffffff) != 0) {
              uVar14 = uVar7;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar14);
          }
          uVar12 = uVar12 >> 8 & 1;
        }
        __ss6HasherV8_combineyys5UInt8VF(uVar12);
LAB_1046daa7c:
        func_0x00010470769c(&lStack_b0);
      }
      else {
        __ss6HasherV8_combineyySuF(0);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar22 + 0x10));
        uVar14 = *(ulong *)(lVar22 + 0x10);
        if (uVar14 != 0) {
          _swift_bridgeObjectRetain(lStack_b0);
          uVar18 = 0;
          do {
            if (*(ulong *)(lVar22 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1046dacdc);
              (*pcVar11)();
            }
            puVar1 = (undefined8 *)(lVar22 + 0x20 + uVar18 * 0x20);
            uVar20 = puVar1[2];
            lVar23 = puVar1[3];
            uVar21 = *puVar1;
            uVar3 = puVar1[1];
            _swift_bridgeObjectRetain(uVar3);
            _swift_bridgeObjectRetain(lVar23);
            __sSS4hash4intoys6HasherVz_tF(param_1,uVar21,uVar3);
            __ss6HasherV8_combineyySuF(uVar20);
            __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar23 + 0x10));
            lVar17 = *(long *)(lVar23 + 0x10);
            if (lVar17 != 0) {
              puVar19 = (undefined1 *)(lVar23 + 0x32);
              do {
                uVar20 = *(undefined8 *)(puVar19 + -0x12);
                uVar21 = *(undefined8 *)(puVar19 + -10);
                uVar5 = puVar19[-2];
                uVar6 = puVar19[-1];
                uVar4 = *puVar19;
                _swift_bridgeObjectRetain(uVar21);
                __sSS4hash4intoys6HasherVz_tF(param_1,uVar20,uVar21);
                __ss6HasherV8_combineyys5UInt8VF(uVar5);
                __ss6HasherV8_combineyys5UInt8VF(uVar6);
                __ss6HasherV8_combineyys5UInt8VF(uVar4);
                _swift_bridgeObjectRelease(uVar21);
                lVar17 = lVar17 + -1;
                puVar19 = puVar19 + 0x18;
              } while (lVar17 != 0);
            }
            uVar18 = uVar18 + 1;
            _swift_bridgeObjectRelease(lVar23);
            _swift_bridgeObjectRelease(uVar3);
          } while (uVar18 != uVar14);
          goto LAB_1046daa7c;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar15);
  }
  return;
}



/* Entry: 1046dae10; end: 1046daeaf;  */

void FUN_1046dae10(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  lVar4 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar4);
  if (lVar4 != 0) {
    puVar7 = (undefined1 *)(param_2 + 0x32);
    do {
      uVar5 = *(undefined8 *)(puVar7 + -0x12);
      uVar6 = *(undefined8 *)(puVar7 + -10);
      uVar2 = puVar7[-2];
      uVar3 = puVar7[-1];
      uVar1 = *puVar7;
      _swift_bridgeObjectRetain(uVar6);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar6);
      __ss6HasherV8_combineyys5UInt8VF(uVar2);
      __ss6HasherV8_combineyys5UInt8VF(uVar3);
      __ss6HasherV8_combineyys5UInt8VF(uVar1);
      _swift_bridgeObjectRelease(uVar6);
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 0x18;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1046daeb0; end: 1046db863;  */

void FUN_1046daeb0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar7 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar7);
  if (lVar7 != 0) {
    puVar9 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar4 = *puVar9;
      lVar2 = puVar9[1];
      uVar5 = puVar9[2];
      lVar3 = puVar9[3];
      uVar6 = puVar9[4];
      lVar8 = puVar9[5];
      if (lVar2 == 1) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        func_0x00010470785c(uVar1,uVar4,1,uVar5,lVar3);
        _swift_bridgeObjectRetain(lVar8);
joined_r0x0001046daf14:
        if (lVar8 != 0) goto LAB_1046daf18;
LAB_1046db01c:
        __ss6HasherV8_combineyys5UInt8VF(0);
        lVar8 = 0;
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(uVar1);
        if (lVar2 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
          func_0x00010470785c(uVar1,uVar4,0,uVar5,lVar3);
          _swift_bridgeObjectRetain(lVar8);
        }
        else {
          __ss6HasherV8_combineyys5UInt8VF(1);
          func_0x00010470785c(uVar1,uVar4,lVar2,uVar5,lVar3);
          _swift_bridgeObjectRetain(lVar8);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
        }
        if (lVar3 == 0) {
          __ss6HasherV8_combineyys5UInt8VF(0);
          goto joined_r0x0001046daf14;
        }
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
        if (lVar8 == 0) goto LAB_1046db01c;
LAB_1046daf18:
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar8);
      }
      puVar9 = puVar9 + 7;
      func_0x000104707890(uVar1,uVar4,lVar2,uVar5,lVar3);
      _swift_bridgeObjectRelease(lVar8);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 1046db864; end: 1046db8db;  */

void FUN_1046db864(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x28);
    do {
      dVar4 = *pdVar2;
      dVar3 = 0.0;
      if (pdVar2[-1] != 0.0) {
        dVar3 = pdVar2[-1];
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      dVar3 = 0.0;
      if (dVar4 != 0.0) {
        dVar3 = dVar4;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      pdVar2 = pdVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1046db8dc; end: 1046db9b7;  */

void FUN_1046db8dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  
  lVar3 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    plVar7 = (long *)(param_2 + 0x28);
    do {
      lVar1 = *plVar7;
      lVar2 = plVar7[1];
      lVar5 = plVar7[2];
      dVar9 = (double)plVar7[3];
      lVar4 = plVar7[4];
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        lVar6 = plVar7[-1];
        __ss6HasherV8_combineyys5UInt8VF(1);
        _swift_bridgeObjectRetain(lVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar1);
      }
      plVar7 = plVar7 + 6;
      __ss6HasherV8_combineyySuF(lVar2);
      __ss6HasherV8_combineyySuF(lVar5);
      dVar8 = 0.0;
      if (dVar9 != 0.0) {
        dVar8 = dVar9;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar8);
      __ss6HasherV8_combineyySuF(lVar4);
      _swift_bridgeObjectRelease(lVar1);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1046db9b8; end: 1046dbda3;  */

void FUN_1046db9b8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar10);
  if (lVar10 != 0) {
    lVar13 = 0;
    do {
      plVar9 = (long *)(param_2 + 0x20 + lVar13 * 0x38);
      lVar1 = *plVar9;
      lVar5 = plVar9[1];
      lVar2 = plVar9[2];
      lVar6 = plVar9[3];
      lVar3 = plVar9[4];
      lVar7 = plVar9[5];
      lVar11 = plVar9[6];
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + 0x10));
      lVar12 = *(long *)(lVar1 + 0x10);
      if (lVar12 == 0) {
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(lVar11);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(lVar2);
        if (lVar2 != 0) goto LAB_1046dbae8;
LAB_1046dbb2c:
        __ss6HasherV8_combineyys5UInt8VF(0);
        if (lVar3 == 0) goto LAB_1046dbb38;
LAB_1046dba04:
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar3);
      }
      else {
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(lVar11);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(lVar2);
        puVar14 = (undefined8 *)(lVar1 + 0x28);
        do {
          uVar4 = puVar14[-1];
          uVar8 = *puVar14;
          _swift_bridgeObjectRetain(uVar8);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          puVar14 = puVar14 + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        if (lVar2 == 0) goto LAB_1046dbb2c;
LAB_1046dbae8:
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar2);
        if (lVar3 != 0) goto LAB_1046dba04;
LAB_1046dbb38:
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      lVar13 = lVar13 + 1;
      __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar11);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(lVar2);
    } while (lVar13 != lVar10);
  }
  return;
}



/* Entry: 1046dbda4; end: 1046dbe6b;  */

void FUN_1046dbda4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar5);
  if (lVar5 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x40);
    do {
      uVar1 = puVar7[-4];
      uVar3 = puVar7[-3];
      uVar2 = puVar7[-2];
      lVar4 = puVar7[-1];
      uVar6 = *puVar7;
      _swift_bridgeObjectRetain(lVar4);
      _swift_bridgeObjectRetain(uVar3);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar4);
      }
      puVar7 = puVar7 + 5;
      __ss6HasherV8_combineyySuF(uVar6);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease(uVar3);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1046dbe6c; end: 1046dbf5b;  */

void FUN_1046dbe6c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 >> 0x3e == 0) {
    __ss6HasherV8_combineyySuF(*(undefined8 *)((param_2 & 0xffffffffffffff8) + 0x10));
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar5);
    __ss6HasherV8_combineyySuF();
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046dbf5c);
      (*pcVar1)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      puVar4 = (undefined8 *)(param_2 + 0x20);
      do {
        uVar3 = *puVar4;
        _objc_retain(uVar3);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(uVar3);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar6 = 0;
      do {
        uVar2 = uVar6;
        func_0x0001002ec9a0(uVar6,param_2);
        uVar6 = uVar6 + 1;
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _swift_unknownObjectRelease(uVar2);
      } while (uVar5 != uVar6);
    }
  }
  return;
}



/* Entry: 1046dbf5c; end: 1046dc25b;  */

void FUN_1046dbf5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar8);
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      puVar7 = (undefined8 *)(param_2 + 0x20 + lVar11 * 0x18);
      lVar1 = puVar7[1];
      lVar3 = puVar7[2];
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        _swift_bridgeObjectRetain(lVar3);
      }
      else {
        uVar10 = *puVar7;
        __ss6HasherV8_combineyys5UInt8VF(1);
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(lVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar1);
      }
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + 0x10));
      lVar9 = *(long *)(lVar3 + 0x10);
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0x40);
        do {
          uVar10 = puVar7[-4];
          uVar4 = puVar7[-3];
          uVar6 = *(undefined1 *)(puVar7 + -2);
          uVar2 = puVar7[-1];
          uVar5 = *puVar7;
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,uVar4);
          __ss6HasherV8_combineyys5UInt8VF(uVar6);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar5);
          _swift_bridgeObjectRelease(uVar5);
          _swift_bridgeObjectRelease(uVar4);
          puVar7 = puVar7 + 5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar11 = lVar11 + 1;
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(lVar1);
    } while (lVar11 != lVar8);
  }
  return;
}



/* Entry: 1046dc25c; end: 1046dc3c3;  */

void FUN_1046dc25c(undefined8 param_1,long param_2)

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
  long lVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar11 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar11);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(param_2 + 0x48);
    do {
      uVar5 = puVar12[-4];
      uVar1 = puVar12[-3];
      uVar6 = puVar12[-2];
      uVar2 = puVar12[-1];
      uVar7 = *puVar12;
      uVar3 = puVar12[1];
      uVar8 = puVar12[2];
      uVar4 = puVar12[3];
      uVar9 = puVar12[4];
      uVar10 = puVar12[5];
      dVar16 = (double)puVar12[6];
      dVar15 = (double)puVar12[7];
      dVar14 = (double)puVar12[8];
      __ss6HasherV8_combineyySuF(puVar12[-5]);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,uVar3);
      __ss6HasherV8_combineyySuF(uVar8);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar9);
      __ss6HasherV8_combineyySuF(uVar10);
      dVar13 = 0.0;
      if (dVar16 != 0.0) {
        dVar13 = dVar16;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      dVar13 = 0.0;
      if (dVar15 != 0.0) {
        dVar13 = dVar15;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      dVar13 = 0.0;
      if (dVar14 != 0.0) {
        dVar13 = dVar14;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      puVar12 = puVar12 + 0xe;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



/* Entry: 1046dc3c4; end: 1046dc4a7;  */

void FUN_1046dc3c4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    plVar6 = (long *)(param_2 + 0x38);
    do {
      lVar1 = plVar6[-2];
      lVar2 = plVar6[-1];
      lVar4 = *plVar6;
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        _swift_bridgeObjectRetain(lVar4);
        if (lVar4 == 0) goto LAB_1046dc484;
LAB_1046dc3fc:
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar2,lVar4);
        _swift_bridgeObjectRelease(lVar4);
      }
      else {
        lVar5 = plVar6[-3];
        __ss6HasherV8_combineyys5UInt8VF(1);
        _swift_bridgeObjectRetain(lVar4);
        _swift_bridgeObjectRetain(lVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar1);
        if (lVar4 != 0) goto LAB_1046dc3fc;
LAB_1046dc484:
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      plVar6 = plVar6 + 4;
      _swift_bridgeObjectRelease(lVar1);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1046dc4a8; end: 1046dc5c3;  */

void FUN_1046dc4a8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
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
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
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
  undefined2 uStack_60;
  
  lVar3 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 0x30);
    do {
      dVar6 = (double)puVar4[-1];
      uStack_108 = puVar4[0xd];
      uStack_110 = puVar4[0xc];
      uStack_100 = puVar4[0xe];
      uStack_f8 = (undefined7)puVar4[0xf];
      uVar1 = *(undefined4 *)((long)puVar4 + 0x7f);
      uStack_f1 = (undefined1)uVar1;
      uStack_f0 = (undefined2)((uint)uVar1 >> 8);
      uStack_ee = (undefined1)((uint)uVar1 >> 0x18);
      uStack_148 = puVar4[5];
      uStack_150 = puVar4[4];
      uStack_138 = puVar4[7];
      uStack_140 = puVar4[6];
      uStack_128 = puVar4[9];
      uStack_130 = puVar4[8];
      uStack_118 = puVar4[0xb];
      uStack_120 = puVar4[10];
      uStack_168 = puVar4[1];
      uStack_170 = *puVar4;
      uStack_158 = puVar4[3];
      uStack_160 = puVar4[2];
      dVar5 = 0.0;
      if ((double)puVar4[-2] != 0.0) {
        dVar5 = (double)puVar4[-2];
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar5);
      dVar5 = 0.0;
      if (dVar6 != 0.0) {
        dVar5 = dVar6;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar5);
      iVar2 = (int)&uStack_170;
      FUN_1046c199c();
      if (iVar2 == 1) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uStack_68 = CONCAT17(uStack_f1,uStack_f8);
        uStack_78 = uStack_108;
        uStack_80 = uStack_110;
        uStack_70 = uStack_100;
        uStack_60 = uStack_f0;
        uStack_b8 = uStack_148;
        uStack_c0 = uStack_150;
        uStack_a8 = uStack_138;
        uStack_b0 = uStack_140;
        uStack_98 = uStack_128;
        uStack_a0 = uStack_130;
        uStack_88 = uStack_118;
        uStack_90 = uStack_120;
        uStack_d8 = uStack_168;
        uStack_e0 = uStack_170;
        uStack_c8 = uStack_158;
        uStack_d0 = uStack_160;
        __ss6HasherV8_combineyys5UInt8VF(1);
        FUN_10470dd8c(param_1);
      }
      puVar4 = puVar4 + 0x13;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1046dc5c4; end: 1046dd4af;  */

undefined8 FUN_1046dc5c4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  uint uStack_644;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined8 uStack_4cf;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined8 uStack_49f;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined8 uStack_39f;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined8 uStack_34f;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
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
  undefined1 uStack_210;
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
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
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
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar14 = 0;
  FUN_10477ea9c();
  lVar23 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar20 = (long)&uStack_660 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar28 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = lVar20 - extraout_x8_00;
  lVar28 = 0x11308dcb0;
  func_0x0001000285a8(0x11308dcb0,&UNK_10dd2f520);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = uVar27 - extraout_x8_01;
  uVar19 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = *param_1;
    if (((uVar21 != *param_2) || (param_1[1] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  if ((int)param_1[3] != (int)param_2[3]) {
    return 0;
  }
  uVar19 = param_1[4];
  if (((uVar19 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar19 & 1) == 0)) {
    return 0;
  }
  uVar19 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[6];
    if (((uVar21 != param_2[6]) || (param_1[7] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  uVar19 = param_2[9];
  if (param_1[9] == 0) {
    if (uVar19 != 0) {
      return 0;
    }
  }
  else {
    if (uVar19 == 0) {
      return 0;
    }
    uVar21 = param_1[8];
    if (((uVar21 != param_2[8]) || (param_1[9] != uVar19)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = 0;
  FUN_1046d90b0();
  iVar13 = *(int *)(lVar15 + 0x28);
  lVar28 = (long)*(int *)(lVar28 + 0x30);
  lStack_628 = lVar15;
  func_0x000104707758((long)param_1 + (long)iVar13,lVar25,0x112db3a00,&UNK_10d95dff0);
  func_0x000104707758((long)param_2 + (long)iVar13,lVar25 + lVar28,0x112db3a00,&UNK_10d95dff0);
  pcVar24 = *(code **)(lVar23 + 0x30);
  lVar23 = lVar25;
  (*pcVar24)(lVar25,1,lVar14);
  if ((int)lVar23 == 1) {
    lVar28 = lVar25 + lVar28;
    (*pcVar24)(lVar28,1,lVar14);
    if ((int)lVar28 != 1) {
LAB_1046dc8b0:
      func_0x00010470781c(lVar25,0x11308dcb0,&UNK_10dd2f520);
      return 0;
    }
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
  }
  else {
    func_0x000104707758(lVar25,uVar27,0x112db3a00,&UNK_10d95dff0);
    lVar23 = lVar25 + lVar28;
    (*pcVar24)(lVar23,1,lVar14);
    if ((int)lVar23 == 1) {
      func_0x0001047077e0(uVar27,FUN_10477ea9c);
      goto LAB_1046dc8b0;
    }
    func_0x0001047076d0(lVar25 + lVar28,lVar20,FUN_10477ea9c);
    uVar19 = uVar27;
    FUN_10477ede0(uVar27,lVar20);
    func_0x0001047077e0(lVar20,FUN_10477ea9c);
    func_0x0001047077e0(uVar27,FUN_10477ea9c);
    func_0x00010470781c(lVar25,0x112db3a00,&UNK_10d95dff0);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
  }
  lVar28 = lStack_628;
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x2c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x2c))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x30)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x30))) {
    return 0;
  }
  uVar19 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x34));
  lVar14 = *(long *)((long)param_2 + (long)*(int *)(lStack_628 + 0x34));
  if (uVar19 == 0) {
    if (lVar14 != 0) {
      return 0;
    }
  }
  else {
    if (lVar14 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar14);
    uVar27 = uVar19;
    _swift_bridgeObjectRetain();
    FUN_10470aeb8();
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar28 + 0x38));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar28 + 0x38));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(double *)((long)param_1 + (long)*(int *)(lVar28 + 0x3c)) !=
      *(double *)((long)param_2 + (long)*(int *)(lVar28 + 0x3c))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lVar28 + 0x40)) !=
      *(int *)((long)param_2 + (long)*(int *)(lVar28 + 0x40))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar28 + 0x44));
  uVar6 = *puVar17;
  uVar8 = puVar17[1];
  lVar14 = puVar17[2];
  uVar19 = puVar17[3];
  uVar22 = puVar17[4];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar28 + 0x44));
  uVar7 = *puVar17;
  uVar9 = puVar17[1];
  lVar28 = puVar17[2];
  uVar10 = puVar17[3];
  uVar26 = puVar17[4];
  uStack_638 = uVar19;
  uStack_630 = uVar22;
  if (lVar14 == 1) {
    if (lVar28 != 1) {
LAB_1046dca78:
      uStack_640 = uVar9;
      func_0x00010470785c(uVar7,uVar9,lVar28,uVar10,uVar26);
      uVar9 = uStack_630;
      uVar19 = uStack_638;
      func_0x00010470785c(uVar6,uVar8,lVar14,uStack_638,uStack_630);
      func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar9);
      func_0x000104707890(uVar7,uStack_640,lVar28,uVar10,uVar26);
      return 0;
    }
  }
  else {
    if (lVar28 == 1) goto LAB_1046dca78;
    auStack_98[0] = (undefined4)uVar7;
    auStack_c0[0] = (undefined4)uVar6;
    puVar16 = auStack_c0;
    uStack_660 = uVar26;
    uStack_658 = uVar7;
    uStack_650 = uVar10;
    uStack_b8 = uVar8;
    lStack_b0 = lVar14;
    uStack_a8 = uVar19;
    uStack_a0 = uVar22;
    uStack_90 = uVar9;
    lStack_88 = lVar28;
    uStack_80 = uVar10;
    uStack_78 = uVar26;
    FUN_1047508c0(puVar16,auStack_98);
    uVar7 = uStack_660;
    uStack_644 = (uint)puVar16;
    func_0x00010470785c(uStack_658,uVar9,lVar28,uStack_650,uStack_660);
    func_0x00010470785c(uVar6,uVar8,lVar14,uVar19,uVar22);
    _swift_bridgeObjectRelease(lVar28);
    _swift_bridgeObjectRelease(uVar7);
    func_0x000104707890(uVar6,uVar8,lVar14,uVar19,uVar22);
    if ((uStack_644 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x48));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x48));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x4c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x4c));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_f8 = uStack_520;
    uStack_100 = uStack_528;
    uStack_e8 = uStack_510;
    uStack_f0 = uStack_518;
    uStack_d8 = uStack_500;
    uStack_e0 = uStack_508;
    uStack_d0 = uStack_4f8;
    uStack_138 = uStack_560;
    uStack_140 = uStack_568;
    uStack_128 = uStack_550;
    uStack_130 = uStack_558;
    uStack_118 = uStack_540;
    uStack_120 = uStack_548;
    uStack_108 = uStack_530;
    uStack_110 = uStack_538;
    uStack_158 = uStack_580;
    uStack_160 = uStack_588;
    uStack_148 = uStack_570;
    uStack_150 = uStack_578;
    uStack_198 = uStack_428;
    uStack_1a0 = uStack_430;
    uStack_188 = uStack_418;
    uStack_190 = uStack_420;
    uStack_178 = uStack_408;
    uStack_180 = uStack_410;
    uStack_170 = (undefined1)uStack_400;
    uStack_1d8 = uStack_468;
    uStack_1e0 = uStack_470;
    uStack_1c8 = uStack_458;
    uStack_1d0 = uStack_460;
    uStack_1b8 = uStack_448;
    uStack_1c0 = uStack_450;
    uStack_1a8 = uStack_438;
    uStack_1b0 = uStack_440;
    uStack_1f8 = uStack_488;
    uStack_200 = uStack_490;
    uStack_1e8 = uStack_478;
    uStack_1f0 = uStack_480;
    puVar17 = &uStack_200;
    FUN_1047a4194(puVar17,&uStack_160);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x50));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x50));
  iVar13 = (int)&uStack_588;
  uStack_5b8 = puVar17[0xd];
  uStack_5c0 = puVar17[0xc];
  uStack_5a8 = puVar17[0xf];
  uStack_5b0 = puVar17[0xe];
  uStack_598 = puVar17[0x11];
  uStack_5a0 = puVar17[0x10];
  uStack_5f8 = puVar17[5];
  uStack_600 = puVar17[4];
  uStack_5e8 = puVar17[7];
  uStack_5f0 = puVar17[6];
  uStack_5d8 = puVar17[9];
  uStack_5e0 = puVar17[8];
  uStack_5c8 = puVar17[0xb];
  uStack_5d0 = puVar17[10];
  uStack_618 = puVar17[1];
  uStack_620 = *puVar17;
  uStack_608 = puVar17[3];
  uStack_610 = puVar17[2];
  uStack_510 = puVar3[0xf];
  uStack_518 = puVar3[0xe];
  uStack_500 = puVar3[0x11];
  uStack_508 = puVar3[0x10];
  uStack_520 = puVar3[0xd];
  uStack_528 = puVar3[0xc];
  uStack_560 = puVar3[5];
  uStack_568 = puVar3[4];
  uStack_550 = puVar3[7];
  uStack_558 = puVar3[6];
  uStack_540 = puVar3[9];
  uStack_548 = puVar3[8];
  uStack_530 = puVar3[0xb];
  uStack_538 = puVar3[10];
  uStack_580 = puVar3[1];
  uStack_588 = *puVar3;
  uStack_570 = puVar3[3];
  uStack_578 = puVar3[2];
  uStack_590 = CONCAT71(uStack_590._1_7_,*(undefined1 *)(puVar17 + 0x12));
  uStack_4f8 = *(undefined1 *)(puVar3 + 0x12);
  iVar12 = (int)&uStack_620;
  func_0x000103b72c50();
  if (iVar12 == 1) {
    func_0x000103b72c50();
    if (iVar13 != 1) {
      return 0;
    }
  }
  else {
    uStack_428 = uStack_5b8;
    uStack_430 = uStack_5c0;
    uStack_418 = uStack_5a8;
    uStack_420 = uStack_5b0;
    uStack_408 = uStack_598;
    uStack_410 = uStack_5a0;
    uStack_400 = CONCAT71(uStack_400._1_7_,(undefined1)uStack_590);
    uStack_468 = uStack_5f8;
    uStack_470 = uStack_600;
    uStack_458 = uStack_5e8;
    uStack_460 = uStack_5f0;
    uStack_448 = uStack_5d8;
    uStack_450 = uStack_5e0;
    uStack_438 = uStack_5c8;
    uStack_440 = uStack_5d0;
    uStack_488 = uStack_618;
    uStack_490 = uStack_620;
    uStack_478 = uStack_608;
    uStack_480 = uStack_610;
    func_0x000103b72c50();
    if (iVar13 == 1) {
      return 0;
    }
    uStack_238 = uStack_520;
    uStack_240 = uStack_528;
    uStack_228 = uStack_510;
    uStack_230 = uStack_518;
    uStack_218 = uStack_500;
    uStack_220 = uStack_508;
    uStack_210 = uStack_4f8;
    uStack_278 = uStack_560;
    uStack_280 = uStack_568;
    uStack_268 = uStack_550;
    uStack_270 = uStack_558;
    uStack_258 = uStack_540;
    uStack_260 = uStack_548;
    uStack_248 = uStack_530;
    uStack_250 = uStack_538;
    uStack_298 = uStack_580;
    uStack_2a0 = uStack_588;
    uStack_288 = uStack_570;
    uStack_290 = uStack_578;
    uStack_2d8 = uStack_428;
    uStack_2e0 = uStack_430;
    uStack_2c8 = uStack_418;
    uStack_2d0 = uStack_420;
    uStack_2b8 = uStack_408;
    uStack_2c0 = uStack_410;
    uStack_2b0 = (undefined1)uStack_400;
    uStack_318 = uStack_468;
    uStack_320 = uStack_470;
    uStack_308 = uStack_458;
    uStack_310 = uStack_460;
    uStack_2f8 = uStack_448;
    uStack_300 = uStack_450;
    uStack_2e8 = uStack_438;
    uStack_2f0 = uStack_440;
    uStack_338 = uStack_488;
    uStack_340 = uStack_490;
    uStack_328 = uStack_478;
    uStack_330 = uStack_480;
    puVar17 = &uStack_340;
    FUN_1047a4194(puVar17,&uStack_2a0);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x54));
  uVar6 = *puVar17;
  uVar19 = puVar17[1];
  uStack_630 = puVar17[2];
  lVar28 = puVar17[3];
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x54));
  uVar7 = *puVar17;
  lVar14 = puVar17[1];
  uVar8 = puVar17[2];
  lVar23 = puVar17[3];
  if (uVar19 != 2) {
    if (lVar14 == 2) goto LAB_1046dcf14;
    uVar27 = uVar19;
    lVar25 = lVar28;
    if (uVar19 == 1) {
      if (lVar14 == 1) {
LAB_1046dd04c:
        if (lVar28 == 1) {
          if (lVar23 != 1) {
            func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
            lVar25 = 1;
            goto LAB_1046dd120;
          }
          func_0x0001046d9138(uVar7,lVar14,uVar8,1);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,1);
          FUN_1047078fc(uVar7,lVar14);
        }
        else {
          if (lVar23 == 1) {
            lVar20 = 1;
            goto LAB_1046dd10c;
          }
          func_0x00010474dca4(uStack_630,uVar8,lVar28,lVar23);
          uStack_638 = CONCAT44(uStack_638._4_4_,(int)lVar25);
          func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
          func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
          FUN_1047078fc(uVar7,lVar14);
          if ((uStack_638 & 1) == 0) goto LAB_1046dd130;
        }
        FUN_1047078fc(uVar8,lVar23);
        func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dcee0;
      }
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
      uVar27 = 1;
    }
    else {
      if (lVar14 == 1) {
        func_0x0001046d9138(uVar7,1,uVar8,lVar23);
        func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
        goto LAB_1046dd130;
      }
      uVar21 = uVar19;
      func_0x00010474dca4(uVar6,uVar7,uVar19,lVar14);
      lVar20 = lVar23;
      if ((uVar21 & 1) != 0) goto LAB_1046dd04c;
LAB_1046dd10c:
      func_0x0001046d9138(uVar7,lVar14,uVar8,lVar20);
    }
LAB_1046dd120:
    func_0x0001046d9138(uVar6,uVar27,uStack_630,lVar25);
    FUN_1047078fc(uVar7,lVar14);
LAB_1046dd130:
    FUN_1047078fc(uVar8,lVar23);
    func_0x0001047078c4(uVar6,uVar19,uStack_630,lVar28);
    return 0;
  }
  if (lVar14 != 2) {
LAB_1046dcf14:
    func_0x0001046d9138(uVar7,lVar14,uVar8,lVar23);
    uVar9 = uStack_630;
    func_0x0001046d9138(uVar6,uVar19,uStack_630,lVar28);
    func_0x0001047078c4(uVar6,uVar19,uVar9,lVar28);
    func_0x0001047078c4(uVar7,lVar14,uVar8,lVar23);
    return 0;
  }
LAB_1046dcee0:
  pdVar4 = (double *)((long)param_1 + (long)*(int *)(lStack_628 + 0x58));
  pdVar5 = (double *)((long)param_2 + (long)*(int *)(lStack_628 + 0x58));
  cVar11 = *(char *)(pdVar5 + 1);
  if (*(char *)(pdVar4 + 1) == '\x01') {
    if (cVar11 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar11 == '\x01') {
      return 0;
    }
    if (*pdVar4 != *pdVar5) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x5c));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x5c));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x60));
  uVar19 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x60));
  uVar27 = puVar2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
  }
  else {
    if (uVar27 == 0) {
      return 0;
    }
    uVar21 = *puVar1;
    if (((uVar21 != *puVar2) || (uVar19 != uVar27)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 100)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 100))) {
    return 0;
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x68));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x68));
  if (*(char *)((long)puVar17 + 0x49) == '\x01') {
    if (*(char *)((long)puVar3 + 0x49) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)puVar3 + 0x49) == '\x01') {
      return 0;
    }
    uStack_368 = puVar3[5];
    uStack_370 = puVar3[4];
    uStack_360 = puVar3[6];
    uStack_358 = (undefined1)puVar3[7];
    uStack_34f = *(undefined8 *)((long)puVar3 + 0x41);
    uStack_357 = (undefined7)*(undefined8 *)((long)puVar3 + 0x39);
    uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0x39) >> 0x38);
    uStack_388 = puVar3[1];
    uStack_390 = *puVar3;
    uStack_378 = puVar3[3];
    uStack_380 = puVar3[2];
    uStack_3b8 = puVar17[5];
    uStack_3c0 = puVar17[4];
    uStack_3b0 = puVar17[6];
    uStack_3a8 = (undefined1)puVar17[7];
    uStack_39f = *(undefined8 *)((long)puVar17 + 0x41);
    uStack_3a7 = (undefined7)*(undefined8 *)((long)puVar17 + 0x39);
    uStack_3a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0x39) >> 0x38);
    uStack_3d8 = puVar17[1];
    uStack_3e0 = *puVar17;
    uStack_3c8 = puVar17[3];
    uStack_3d0 = puVar17[2];
    puVar17 = &uStack_3e0;
    FUN_10470a754(puVar17,&uStack_390);
    if (((ulong)puVar17 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x6c));
  puVar17 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x6c));
  uVar19 = *puVar1;
  uVar27 = puVar1[1];
  uVar6 = *puVar17;
  uVar21 = puVar17[1];
  if (uVar27 >> 0x3c < 0xf) {
    if (0xe < uVar21 >> 0x3c) goto LAB_1046dd2e0;
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    uVar18 = uVar19;
    func_0x000100e25fcc(uVar19,uVar27,uVar6,uVar21);
    func_0x0001000b44c0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar21 >> 0x3c < 0xf) {
LAB_1046dd2e0:
      func_0x000100de78a0(uVar19,uVar27);
      func_0x000100de78a0(uVar6,uVar21);
      func_0x0001000b44c0(uVar19,uVar27);
      func_0x0001000b44c0(uVar6,uVar21);
      return 0;
    }
    func_0x000100de78a0(uVar19,uVar27);
    func_0x000100de78a0(uVar6,uVar21);
    func_0x0001000b44c0(uVar19,uVar27);
  }
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_628 + 0x70));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_628 + 0x70));
  uStack_408 = puVar17[0x11];
  uStack_410 = puVar17[0x10];
  uStack_3f8 = puVar17[0x13];
  uStack_400 = puVar17[0x12];
  uStack_3e8 = puVar17[0x15];
  uStack_3f0 = puVar17[0x14];
  uStack_4e8 = puVar17[0x17];
  uStack_4f0 = puVar17[0x16];
  uStack_448 = puVar17[9];
  uStack_450 = puVar17[8];
  uStack_438 = puVar17[0xb];
  uStack_440 = puVar17[10];
  uStack_428 = puVar17[0xd];
  uStack_430 = puVar17[0xc];
  uStack_418 = puVar17[0xf];
  uStack_420 = puVar17[0xe];
  uStack_488 = puVar17[1];
  uStack_490 = *puVar17;
  uStack_478 = puVar17[3];
  uStack_480 = puVar17[2];
  uStack_468 = puVar17[5];
  uStack_470 = puVar17[4];
  uStack_458 = puVar17[7];
  uStack_460 = puVar17[6];
  uStack_4e0 = puVar17[0x18];
  uStack_4d8 = (undefined1)puVar17[0x19];
  uStack_4cf = *(undefined8 *)((long)puVar17 + 0xd1);
  uStack_4d7 = (undefined7)*(undefined8 *)((long)puVar17 + 0xc9);
  uStack_4d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar17 + 0xc9) >> 0x38);
  uStack_598 = puVar3[0x11];
  uStack_5a0 = puVar3[0x10];
  uStack_588 = puVar3[0x13];
  uStack_590 = puVar3[0x12];
  uStack_578 = puVar3[0x15];
  uStack_580 = puVar3[0x14];
  uStack_4b8 = puVar3[0x17];
  uStack_4c0 = puVar3[0x16];
  uStack_5d8 = puVar3[9];
  uStack_5e0 = puVar3[8];
  uStack_5c8 = puVar3[0xb];
  uStack_5d0 = puVar3[10];
  uStack_5b8 = puVar3[0xd];
  uStack_5c0 = puVar3[0xc];
  uStack_5a8 = puVar3[0xf];
  uStack_5b0 = puVar3[0xe];
  uStack_618 = puVar3[1];
  uStack_620 = *puVar3;
  uStack_608 = puVar3[3];
  uStack_610 = puVar3[2];
  uStack_5f8 = puVar3[5];
  uStack_600 = puVar3[4];
  uStack_5e8 = puVar3[7];
  uStack_5f0 = puVar3[6];
  uStack_4b0 = puVar3[0x18];
  uStack_4a8 = (undefined1)puVar3[0x19];
  uStack_49f = *(undefined8 *)((long)puVar3 + 0xd1);
  uStack_4a7 = (undefined7)*(undefined8 *)((long)puVar3 + 0xc9);
  uStack_4a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xc9) >> 0x38);
  puVar17 = &uStack_490;
  FUN_1047084a8(puVar17,&uStack_620);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  puVar17 = &uStack_4f0;
  FUN_104708144(puVar17,&uStack_4c0);
  if (((ulong)puVar17 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x74)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(lStack_628 + 0x78)) !=
      *(int *)((long)param_2 + (long)*(int *)(lStack_628 + 0x78))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lStack_628 + 0x7c)) !=
      *(char *)((long)param_2 + (long)*(int *)(lStack_628 + 0x7c))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_628 + 0x80));
  uVar19 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_628 + 0x80));
  uVar27 = param_2[1];
  if (uVar19 == 0) {
    if (uVar27 != 0) {
      return 0;
    }
    return 1;
  }
  if (uVar27 == 0) {
    return 0;
  }
  uVar21 = *param_1;
  if (((uVar21 != *param_2) || (uVar19 != uVar27)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar21 & 1) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 1046dd4b0; end: 1046dd4db;  */

void FUN_1046dd4b0(void)

{
  func_0x0001047077a0(0x11308db98,FUN_1046d90b0,&UNK_10dd2f3e0);
  return;
}



/* Entry: 1046dd4dc; end: 104707523;  */

long * FUN_1046dd4dc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  uint5 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  code *pcVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  code *pcVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  code *pcVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  undefined8 uVar46;
  
  uVar14 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar14 >> 0x11 & 1) != 0) {
    lVar39 = *param_2;
    *param_1 = lVar39;
    uVar40 = (ulong)uVar14 & 0xff;
    _swift_retain();
    return (long *)(lVar39 + (uVar40 + 0x10 & (uVar40 ^ 0xffffffffffffffff)));
  }
  lVar39 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar39;
  lVar36 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar36;
  lVar36 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar36;
  lVar19 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar19;
  lVar31 = param_2[9];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  param_1[8] = param_2[8];
  param_1[9] = lVar31;
  lVar16 = 0;
  FUN_10477ea9c();
  lVar45 = *(long *)(lVar16 + -8);
  pcVar37 = *(code **)(lVar45 + 0x30);
  _swift_bridgeObjectRetain(lVar39);
  _swift_bridgeObjectRetain(lVar36);
  _swift_bridgeObjectRetain(lVar19);
  _swift_bridgeObjectRetain(lVar31);
  puVar17 = puVar2;
  (*pcVar37)(puVar2,1,lVar16);
  if ((int)puVar17 == 0) {
    lVar39 = 0;
    FUN_10474425c();
    lVar36 = *(long *)(lVar39 + -8);
    puVar17 = puVar2;
    (**(code **)(lVar36 + 0x30))(puVar2,1,lVar39);
    if ((int)puVar17 == 0) {
      uVar43 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar43;
      lVar19 = puVar2[3];
      if (lVar19 == 1) {
        uVar43 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar43;
        puVar1[4] = puVar2[4];
      }
      else {
        puVar1[2] = puVar2[2];
        puVar1[3] = lVar19;
        uVar43 = puVar2[4];
        puVar1[4] = uVar43;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
      }
      lVar19 = puVar2[0xb];
      if (lVar19 == 1) {
        uVar43 = puVar2[5];
        puVar1[6] = puVar2[6];
        puVar1[5] = uVar43;
        uVar43 = puVar2[7];
        puVar1[8] = puVar2[8];
        puVar1[7] = uVar43;
        uVar43 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar43;
        puVar1[0xb] = puVar2[0xb];
LAB_1046dd75c:
        lVar19 = puVar2[0x12];
        if (lVar19 == 1) {
          uVar43 = puVar2[0xc];
          uVar44 = puVar2[0xf];
          uVar42 = puVar2[0xe];
          puVar1[0xd] = puVar2[0xd];
          puVar1[0xc] = uVar43;
          puVar1[0xf] = uVar44;
          puVar1[0xe] = uVar42;
          uVar43 = puVar2[0x10];
          puVar1[0x11] = puVar2[0x11];
          puVar1[0x10] = uVar43;
          puVar1[0x12] = puVar2[0x12];
        }
        else {
          lVar31 = puVar2[0xe];
          if (lVar31 == 1) {
            uVar43 = puVar2[0xc];
            uVar44 = puVar2[0xf];
            uVar42 = puVar2[0xe];
            puVar1[0xd] = puVar2[0xd];
            puVar1[0xc] = uVar43;
            puVar1[0xf] = uVar44;
            puVar1[0xe] = uVar42;
            puVar1[0x10] = puVar2[0x10];
          }
          else {
            uVar43 = puVar2[0xc];
            puVar1[0xd] = puVar2[0xd];
            puVar1[0xc] = uVar43;
            uVar43 = puVar2[0xf];
            uVar42 = puVar2[0x10];
            puVar1[0xe] = lVar31;
            puVar1[0xf] = uVar43;
            puVar1[0x10] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar1[0x11] = puVar2[0x11];
          puVar1[0x12] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
      }
      else {
        if (lVar19 != 2) {
          lVar31 = puVar2[7];
          if (lVar31 == 1) {
            uVar43 = puVar2[5];
            puVar1[6] = puVar2[6];
            puVar1[5] = uVar43;
            uVar43 = puVar2[7];
            puVar1[8] = puVar2[8];
            puVar1[7] = uVar43;
            puVar1[9] = puVar2[9];
          }
          else {
            uVar43 = puVar2[5];
            puVar1[6] = puVar2[6];
            puVar1[5] = uVar43;
            uVar43 = puVar2[8];
            uVar42 = puVar2[9];
            puVar1[7] = lVar31;
            puVar1[8] = uVar43;
            puVar1[9] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar1[10] = puVar2[10];
          puVar1[0xb] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
          goto LAB_1046dd75c;
        }
        uVar43 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar43;
        uVar43 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar43;
        uVar43 = puVar2[0xf];
        puVar1[0x10] = puVar2[0x10];
        puVar1[0xf] = uVar43;
        uVar43 = puVar2[0x11];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x11] = uVar43;
        uVar43 = puVar2[5];
        puVar1[6] = puVar2[6];
        puVar1[5] = uVar43;
        uVar43 = puVar2[7];
        puVar1[8] = puVar2[8];
        puVar1[7] = uVar43;
        uVar43 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar43;
      }
      lVar19 = puVar2[0x19];
      if (lVar19 == 1) {
        uVar43 = puVar2[0x13];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x13] = uVar43;
        uVar43 = puVar2[0x15];
        puVar1[0x16] = puVar2[0x16];
        puVar1[0x15] = uVar43;
        uVar43 = puVar2[0x17];
        puVar1[0x18] = puVar2[0x18];
        puVar1[0x17] = uVar43;
        puVar1[0x19] = puVar2[0x19];
      }
      else {
        lVar31 = puVar2[0x15];
        if (lVar31 == 1) {
          uVar43 = puVar2[0x13];
          puVar1[0x14] = puVar2[0x14];
          puVar1[0x13] = uVar43;
          uVar43 = puVar2[0x15];
          puVar1[0x16] = puVar2[0x16];
          puVar1[0x15] = uVar43;
          puVar1[0x17] = puVar2[0x17];
        }
        else {
          uVar43 = puVar2[0x13];
          puVar1[0x14] = puVar2[0x14];
          puVar1[0x13] = uVar43;
          uVar43 = puVar2[0x16];
          uVar42 = puVar2[0x17];
          puVar1[0x15] = lVar31;
          puVar1[0x16] = uVar43;
          puVar1[0x17] = uVar42;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar42);
        }
        puVar1[0x18] = puVar2[0x18];
        puVar1[0x19] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      lVar21 = (long)*(int *)(lVar39 + 0x24);
      lVar31 = 0;
      FUN_1047425ec();
      lVar32 = *(long *)(lVar31 + -8);
      lVar19 = (long)puVar2 + lVar21;
      (**(code **)(lVar32 + 0x30))(lVar19,1,lVar31);
      if ((int)lVar19 == 0) {
        lVar19 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar19 + -8) + 0x10))
                  ((long)puVar1 + lVar21,(long)puVar2 + lVar21,lVar19);
        (**(code **)(lVar32 + 0x38))((long)puVar1 + lVar21,0,1,lVar31);
      }
      else {
        lVar19 = 0x112db3fe8;
        func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
        _memcpy((long)puVar1 + lVar21,(long)puVar2 + lVar21,
                *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x28));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x28));
      lVar19 = puVar5[6];
      if (lVar19 == 0) {
        uVar43 = puVar5[4];
        uVar44 = puVar5[7];
        uVar42 = puVar5[6];
        puVar17[5] = puVar5[5];
        puVar17[4] = uVar43;
        puVar17[7] = uVar44;
        puVar17[6] = uVar42;
        uVar43 = puVar5[8];
        puVar17[9] = puVar5[9];
        puVar17[8] = uVar43;
        *(undefined1 *)(puVar17 + 10) = *(undefined1 *)(puVar5 + 10);
        uVar43 = *puVar5;
        uVar44 = puVar5[3];
        uVar42 = puVar5[2];
        puVar17[1] = puVar5[1];
        *puVar17 = uVar43;
        puVar17[3] = uVar44;
        puVar17[2] = uVar42;
      }
      else {
        uVar43 = *puVar5;
        puVar17[1] = puVar5[1];
        *puVar17 = uVar43;
        uVar40 = puVar5[3];
        if (uVar40 >> 0x3c < 0xf) {
          uVar43 = puVar5[2];
          func_0x00010006c00c(uVar43,uVar40);
          puVar17[2] = uVar43;
          puVar17[3] = uVar40;
          lVar19 = puVar5[6];
        }
        else {
          uVar43 = puVar5[2];
          puVar17[3] = puVar5[3];
          puVar17[2] = uVar43;
        }
        *(undefined2 *)(puVar17 + 4) = *(undefined2 *)(puVar5 + 4);
        puVar17[5] = puVar5[5];
        puVar17[6] = lVar19;
        *(undefined1 *)(puVar17 + 7) = *(undefined1 *)(puVar5 + 7);
        *(undefined2 *)((long)puVar17 + 0x39) = *(undefined2 *)((long)puVar5 + 0x39);
        uVar43 = puVar5[9];
        puVar17[8] = puVar5[8];
        puVar17[9] = uVar43;
        *(undefined1 *)(puVar17 + 10) = *(undefined1 *)(puVar5 + 10);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
      }
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x2c));
      uVar43 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar43;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x30));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x30));
      uVar44 = puVar5[4];
      uVar42 = puVar5[7];
      uVar43 = puVar5[6];
      puVar17[5] = puVar5[5];
      puVar17[4] = uVar44;
      puVar17[7] = uVar42;
      puVar17[6] = uVar43;
      uVar43 = *puVar5;
      uVar44 = puVar5[3];
      uVar42 = puVar5[2];
      puVar17[1] = puVar5[1];
      *puVar17 = uVar43;
      puVar17[3] = uVar44;
      puVar17[2] = uVar42;
      uVar44 = puVar5[0xc];
      uVar42 = puVar5[0xf];
      uVar43 = puVar5[0xe];
      puVar17[0xd] = puVar5[0xd];
      puVar17[0xc] = uVar44;
      puVar17[0xf] = uVar42;
      puVar17[0xe] = uVar43;
      uVar43 = puVar5[8];
      uVar44 = puVar5[0xb];
      uVar42 = puVar5[10];
      puVar17[9] = puVar5[9];
      puVar17[8] = uVar43;
      puVar17[0xb] = uVar44;
      puVar17[10] = uVar42;
      uVar43 = *(undefined8 *)((long)puVar5 + 0xbb);
      *(undefined8 *)((long)puVar17 + 0xc3) = *(undefined8 *)((long)puVar5 + 0xc3);
      *(undefined8 *)((long)puVar17 + 0xbb) = uVar43;
      uVar44 = puVar5[0x14];
      uVar42 = puVar5[0x17];
      uVar43 = puVar5[0x16];
      puVar17[0x15] = puVar5[0x15];
      puVar17[0x14] = uVar44;
      puVar17[0x17] = uVar42;
      puVar17[0x16] = uVar43;
      uVar43 = puVar5[0x10];
      uVar44 = puVar5[0x13];
      uVar42 = puVar5[0x12];
      puVar17[0x11] = puVar5[0x11];
      puVar17[0x10] = uVar43;
      puVar17[0x13] = uVar44;
      puVar17[0x12] = uVar42;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x34));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x34));
      uVar40 = puVar5[1];
      _swift_bridgeObjectRetain();
      if (uVar40 >> 0x3c < 0xf) {
        uVar43 = *puVar5;
        func_0x00010006c00c(uVar43,uVar40);
        *puVar17 = uVar43;
        puVar17[1] = uVar40;
      }
      else {
        uVar43 = *puVar5;
        puVar17[1] = puVar5[1];
        *puVar17 = uVar43;
      }
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x38));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x38));
      uVar40 = puVar5[1];
      if (uVar40 >> 0x3c < 0xf) {
        uVar43 = *puVar5;
        func_0x00010006c00c(uVar43,uVar40);
        *puVar17 = uVar43;
        puVar17[1] = uVar40;
      }
      else {
        uVar43 = *puVar5;
        puVar17[1] = puVar5[1];
        *puVar17 = uVar43;
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x3c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x3c));
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x40));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x40));
      *puVar17 = *puVar5;
      *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x44)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x44));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x48));
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x4c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x4c));
      uVar44 = puVar5[4];
      uVar42 = puVar5[7];
      uVar43 = puVar5[6];
      puVar17[5] = puVar5[5];
      puVar17[4] = uVar44;
      puVar17[7] = uVar42;
      puVar17[6] = uVar43;
      uVar43 = *puVar5;
      uVar44 = puVar5[3];
      uVar42 = puVar5[2];
      puVar17[1] = puVar5[1];
      *puVar17 = uVar43;
      puVar17[3] = uVar44;
      puVar17[2] = uVar42;
      *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar5 + 0x10);
      uVar44 = puVar5[0xc];
      uVar42 = puVar5[0xf];
      uVar43 = puVar5[0xe];
      puVar17[0xd] = puVar5[0xd];
      puVar17[0xc] = uVar44;
      puVar17[0xf] = uVar42;
      puVar17[0xe] = uVar43;
      uVar43 = puVar5[8];
      uVar44 = puVar5[0xb];
      uVar42 = puVar5[10];
      puVar17[9] = puVar5[9];
      puVar17[8] = uVar43;
      puVar17[0xb] = uVar44;
      puVar17[10] = uVar42;
      uVar42 = puVar5[0x11];
      puVar17[0x11] = uVar42;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x50));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x50));
      uVar43 = *(undefined8 *)((long)puVar5 + 9);
      *(undefined8 *)((long)puVar17 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
      *(undefined8 *)((long)puVar17 + 9) = uVar43;
      uVar43 = *puVar5;
      puVar17[1] = puVar5[1];
      *puVar17 = uVar43;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x54));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x54));
      uVar43 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar43;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x58));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x58));
      *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar5 + 1);
      *puVar17 = *puVar5;
      puVar3 = (undefined4 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x5c));
      puVar4 = (undefined4 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x5c));
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
      *puVar3 = *puVar4;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x60));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x60));
      uVar44 = *puVar5;
      puVar17[1] = puVar5[1];
      *puVar17 = uVar44;
      uVar44 = *(undefined8 *)((long)puVar5 + 0xd);
      *(undefined8 *)((long)puVar17 + 0x15) = *(undefined8 *)((long)puVar5 + 0x15);
      *(undefined8 *)((long)puVar17 + 0xd) = uVar44;
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 100));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 100));
      uVar44 = *puVar5;
      puVar17[1] = puVar5[1];
      *puVar17 = uVar44;
      *(undefined2 *)(puVar17 + 2) = *(undefined2 *)(puVar5 + 2);
      _memcpy((long)puVar1 + (long)*(int *)(lVar39 + 0x68),
              (long)puVar2 + (long)*(int *)(lVar39 + 0x68),0x133);
      puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar39 + 0x6c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar39 + 0x6c));
      *puVar17 = *puVar5;
      *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar5 + 1);
      pcVar37 = *(code **)(lVar36 + 0x38);
      _swift_bridgeObjectRetain(uVar42);
      _swift_bridgeObjectRetain(uVar43);
      (*pcVar37)(puVar1,0,1,lVar39);
    }
    else {
      lVar39 = 0x112db3ee8;
      func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar39 + -8) + 0x40));
    }
    puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x14));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x14));
    lVar39 = 0;
    FUN_104760f24();
    lVar36 = *(long *)(lVar39 + -8);
    puVar18 = puVar5;
    (**(code **)(lVar36 + 0x30))(puVar5,1,lVar39);
    if ((int)puVar18 == 0) {
      uVar43 = *puVar5;
      *puVar17 = uVar43;
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x14));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x14));
      lVar19 = 0;
      FUN_104739264();
      lVar31 = *(long *)(lVar19 + -8);
      pcVar37 = *(code **)(lVar31 + 0x30);
      _swift_bridgeObjectRetain(uVar43);
      puVar20 = puVar6;
      (*pcVar37)(puVar6,1,lVar19);
      if ((int)puVar20 == 0) {
        uVar43 = puVar6[1];
        *puVar18 = *puVar6;
        puVar18[1] = uVar43;
        uVar43 = puVar6[3];
        puVar18[2] = puVar6[2];
        puVar18[3] = uVar43;
        uVar42 = puVar6[5];
        puVar18[4] = puVar6[4];
        puVar18[5] = uVar42;
        uVar44 = puVar6[7];
        puVar18[6] = puVar6[6];
        puVar18[7] = uVar44;
        puVar18[8] = puVar6[8];
        lVar21 = puVar6[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
        _swift_bridgeObjectRetain(uVar42);
        _swift_bridgeObjectRetain(uVar44);
        if (lVar21 == 1) {
          uVar43 = puVar6[9];
          puVar18[10] = puVar6[10];
          puVar18[9] = uVar43;
          uVar43 = puVar6[0xb];
          puVar18[0xc] = puVar6[0xc];
          puVar18[0xb] = uVar43;
          uVar43 = puVar6[0xd];
          puVar18[0xe] = puVar6[0xe];
          puVar18[0xd] = uVar43;
          puVar18[0xf] = puVar6[0xf];
        }
        else {
          lVar32 = puVar6[0xb];
          if (lVar32 == 1) {
            uVar43 = puVar6[9];
            puVar18[10] = puVar6[10];
            puVar18[9] = uVar43;
            uVar43 = puVar6[0xb];
            puVar18[0xc] = puVar6[0xc];
            puVar18[0xb] = uVar43;
            puVar18[0xd] = puVar6[0xd];
          }
          else {
            uVar43 = puVar6[9];
            puVar18[10] = puVar6[10];
            puVar18[9] = uVar43;
            uVar43 = puVar6[0xc];
            uVar42 = puVar6[0xd];
            puVar18[0xb] = lVar32;
            puVar18[0xc] = uVar43;
            puVar18[0xd] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar18[0xe] = puVar6[0xe];
          puVar18[0xf] = lVar21;
          _swift_bridgeObjectRetain(lVar21);
        }
        uVar43 = puVar6[0x11];
        puVar18[0x10] = puVar6[0x10];
        puVar18[0x11] = uVar43;
        uVar42 = puVar6[0x13];
        puVar18[0x12] = puVar6[0x12];
        puVar18[0x13] = uVar42;
        lVar21 = (long)puVar18 + (long)*(int *)(lVar19 + 0x34);
        lVar32 = (long)puVar6 + (long)*(int *)(lVar19 + 0x34);
        lVar38 = 0;
        FUN_104742f28();
        lVar30 = *(long *)(lVar38 + -8);
        pcVar33 = *(code **)(lVar30 + 0x30);
        _swift_bridgeObjectRetain(uVar43);
        _swift_bridgeObjectRetain(uVar42);
        lVar22 = lVar32;
        (*pcVar33)(lVar32,1,lVar38);
        if ((int)lVar22 == 0) {
          lVar22 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar22 + -8) + 0x10))(lVar21,lVar32,lVar22);
          puVar20 = (undefined8 *)(lVar21 + *(int *)(lVar38 + 0x14));
          puVar9 = (undefined8 *)(lVar32 + *(int *)(lVar38 + 0x14));
          uVar43 = puVar9[1];
          *puVar20 = *puVar9;
          puVar20[1] = uVar43;
          *(undefined1 *)(lVar21 + *(int *)(lVar38 + 0x18)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar38 + 0x18));
          *(undefined1 *)(lVar21 + *(int *)(lVar38 + 0x1c)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar38 + 0x1c));
          puVar20 = (undefined8 *)(lVar21 + *(int *)(lVar38 + 0x20));
          puVar9 = (undefined8 *)(lVar32 + *(int *)(lVar38 + 0x20));
          *puVar20 = *puVar9;
          *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar9 + 1);
          *(undefined1 *)(lVar21 + *(int *)(lVar38 + 0x24)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar38 + 0x24));
          pcVar33 = *(code **)(lVar30 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar33)(lVar21,0,1,lVar38);
        }
        else {
          lVar22 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar21,lVar32,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
        }
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar19 + 0x38));
        puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x38));
        uVar43 = *puVar6;
        puVar20[1] = puVar6[1];
        *puVar20 = uVar43;
        uVar43 = *(undefined8 *)((long)puVar6 + 9);
        *(undefined8 *)((long)puVar20 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
        *(undefined8 *)((long)puVar20 + 9) = uVar43;
        (**(code **)(lVar31 + 0x38))(puVar18,0,1);
      }
      else {
        lVar21 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar18,puVar6,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x18));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x18));
      lVar21 = 0;
      FUN_10470fbcc();
      lVar32 = *(long *)(lVar21 + -8);
      pcVar33 = *(code **)(lVar32 + 0x30);
      puVar20 = puVar6;
      (*pcVar33)(puVar6,1,lVar21);
      if ((int)puVar20 == 0) {
        uVar43 = puVar6[1];
        *puVar18 = *puVar6;
        puVar18[1] = uVar43;
        uVar43 = puVar6[3];
        puVar18[2] = puVar6[2];
        puVar18[3] = uVar43;
        lVar22 = puVar6[10];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
        if (lVar22 == 1) {
          uVar43 = puVar6[4];
          uVar44 = puVar6[7];
          uVar42 = puVar6[6];
          puVar18[5] = puVar6[5];
          puVar18[4] = uVar43;
          puVar18[7] = uVar44;
          puVar18[6] = uVar42;
          uVar43 = puVar6[8];
          puVar18[9] = puVar6[9];
          puVar18[8] = uVar43;
          puVar18[10] = puVar6[10];
        }
        else {
          lVar38 = puVar6[6];
          if (lVar38 == 1) {
            uVar43 = puVar6[4];
            uVar44 = puVar6[7];
            uVar42 = puVar6[6];
            puVar18[5] = puVar6[5];
            puVar18[4] = uVar43;
            puVar18[7] = uVar44;
            puVar18[6] = uVar42;
            puVar18[8] = puVar6[8];
          }
          else {
            uVar43 = puVar6[4];
            puVar18[5] = puVar6[5];
            puVar18[4] = uVar43;
            uVar43 = puVar6[7];
            uVar42 = puVar6[8];
            puVar18[6] = lVar38;
            puVar18[7] = uVar43;
            puVar18[8] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar18[9] = puVar6[9];
          puVar18[10] = lVar22;
          _swift_bridgeObjectRetain(lVar22);
        }
        uVar43 = puVar6[0xb];
        puVar18[0xc] = puVar6[0xc];
        puVar18[0xb] = uVar43;
        uVar43 = *(undefined8 *)((long)puVar6 + 0x61);
        *(undefined8 *)((long)puVar18 + 0x69) = *(undefined8 *)((long)puVar6 + 0x69);
        *(undefined8 *)((long)puVar18 + 0x61) = uVar43;
        uVar43 = puVar6[0x10];
        puVar18[0xf] = puVar6[0xf];
        puVar18[0x10] = uVar43;
        *(undefined1 *)(puVar18 + 0x11) = *(undefined1 *)(puVar6 + 0x11);
        lVar22 = puVar6[0x14];
        _swift_bridgeObjectRetain();
        if (lVar22 == 1) {
          uVar43 = puVar6[0x12];
          puVar18[0x13] = puVar6[0x13];
          puVar18[0x12] = uVar43;
          puVar18[0x14] = puVar6[0x14];
        }
        else {
          *(undefined4 *)(puVar18 + 0x12) = *(undefined4 *)(puVar6 + 0x12);
          *(undefined1 *)((long)puVar18 + 0x94) = *(undefined1 *)((long)puVar6 + 0x94);
          puVar18[0x13] = puVar6[0x13];
          puVar18[0x14] = lVar22;
          _swift_bridgeObjectRetain(lVar22);
        }
        uVar43 = puVar6[0x15];
        uVar42 = puVar6[0x16];
        puVar18[0x15] = uVar43;
        puVar18[0x16] = uVar42;
        uVar44 = puVar6[0x17];
        puVar18[0x17] = uVar44;
        lVar22 = (long)puVar18 + (long)*(int *)(lVar21 + 0x38);
        lVar38 = (long)puVar6 + (long)*(int *)(lVar21 + 0x38);
        lVar29 = 0;
        FUN_104742f28();
        lVar35 = *(long *)(lVar29 + -8);
        pcVar41 = *(code **)(lVar35 + 0x30);
        _swift_bridgeObjectRetain(uVar43);
        _swift_bridgeObjectRetain(uVar42);
        _swift_bridgeObjectRetain(uVar44);
        lVar30 = lVar38;
        (*pcVar41)(lVar38,1,lVar29);
        if ((int)lVar30 == 0) {
          lVar30 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar38,lVar30);
          puVar6 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
          puVar20 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x14));
          uVar43 = puVar20[1];
          *puVar6 = *puVar20;
          puVar6[1] = uVar43;
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
               *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x18));
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
               *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x1c));
          puVar6 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
          puVar20 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x20));
          *puVar6 = *puVar20;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar20 + 1);
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
               *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x24));
          pcVar41 = *(code **)(lVar35 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar41)(lVar22,0,1,lVar29);
        }
        else {
          lVar30 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar22,lVar38,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
        }
        (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
      }
      else {
        lVar22 = 0x112db3cd8;
        func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
        _memcpy(puVar18,puVar6,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x1c));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x1c));
      if (puVar6[0x18] == 1) {
        _memcpy(puVar18,puVar6,0x260);
      }
      else {
        lVar22 = puVar6[1];
        if (lVar22 == 1) {
          uVar43 = *puVar6;
          puVar18[1] = puVar6[1];
          *puVar18 = uVar43;
          puVar18[2] = puVar6[2];
        }
        else {
          *puVar18 = *puVar6;
          puVar18[1] = lVar22;
          uVar43 = puVar6[2];
          puVar18[2] = uVar43;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
        }
        uVar40 = puVar6[5];
        if (uVar40 >> 0x3c == 0xb) {
          uVar43 = puVar6[3];
          puVar18[4] = puVar6[4];
          puVar18[3] = uVar43;
          puVar18[5] = puVar6[5];
        }
        else {
          puVar18[3] = puVar6[3];
          if (uVar40 >> 0x3c < 0xf) {
            uVar43 = puVar6[4];
            func_0x00010006c00c(uVar43,uVar40);
            puVar18[4] = uVar43;
            puVar18[5] = uVar40;
          }
          else {
            uVar43 = puVar6[4];
            puVar18[5] = puVar6[5];
            puVar18[4] = uVar43;
          }
        }
        *(undefined2 *)(puVar18 + 6) = *(undefined2 *)(puVar6 + 6);
        puVar18[7] = puVar6[7];
        lVar22 = puVar6[9];
        if (lVar22 == 1) {
          uVar43 = puVar6[0x10];
          uVar44 = puVar6[0x13];
          uVar42 = puVar6[0x12];
          puVar18[0x11] = puVar6[0x11];
          puVar18[0x10] = uVar43;
          puVar18[0x13] = uVar44;
          puVar18[0x12] = uVar42;
          uVar43 = puVar6[0x14];
          puVar18[0x15] = puVar6[0x15];
          puVar18[0x14] = uVar43;
          uVar43 = *(undefined8 *)((long)puVar6 + 0xaa);
          *(undefined8 *)((long)puVar18 + 0xb2) = *(undefined8 *)((long)puVar6 + 0xb2);
          *(undefined8 *)((long)puVar18 + 0xaa) = uVar43;
          uVar43 = puVar6[8];
          uVar44 = puVar6[0xb];
          uVar42 = puVar6[10];
          puVar18[9] = puVar6[9];
          puVar18[8] = uVar43;
          puVar18[0xb] = uVar44;
          puVar18[10] = uVar42;
          uVar43 = puVar6[0xc];
          uVar44 = puVar6[0xf];
          uVar42 = puVar6[0xe];
          puVar18[0xd] = puVar6[0xd];
          puVar18[0xc] = uVar43;
          puVar18[0xf] = uVar44;
          puVar18[0xe] = uVar42;
        }
        else {
          puVar18[8] = puVar6[8];
          puVar18[9] = lVar22;
          uVar46 = puVar6[0xb];
          puVar18[10] = puVar6[10];
          puVar18[0xb] = uVar46;
          uVar43 = puVar6[0xc];
          uVar42 = puVar6[0xd];
          puVar18[0xc] = uVar43;
          puVar18[0xd] = uVar42;
          uVar42 = puVar6[0xe];
          uVar44 = puVar6[0xf];
          puVar18[0xe] = uVar42;
          puVar18[0xf] = uVar44;
          uVar44 = puVar6[0x10];
          uVar11 = puVar6[0x11];
          puVar18[0x10] = uVar44;
          puVar18[0x11] = uVar11;
          lVar22 = puVar6[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar46);
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
          _swift_bridgeObjectRetain(uVar44);
          _swift_bridgeObjectRetain(uVar11);
          if (lVar22 == 1) {
            uVar43 = puVar6[0x12];
            puVar18[0x13] = puVar6[0x13];
            puVar18[0x12] = uVar43;
          }
          else {
            puVar18[0x12] = puVar6[0x12];
            puVar18[0x13] = lVar22;
            _swift_bridgeObjectRetain(lVar22);
          }
          uVar43 = puVar6[0x15];
          puVar18[0x14] = puVar6[0x14];
          puVar18[0x15] = uVar43;
          puVar18[0x16] = puVar6[0x16];
          *(undefined2 *)(puVar18 + 0x17) = *(undefined2 *)(puVar6 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar18 + 0xba) = *(undefined2 *)((long)puVar6 + 0xba);
        if (puVar6[0x18] == 0) {
          lVar22 = puVar6[0x18];
          uVar42 = puVar6[0x1b];
          uVar43 = puVar6[0x1a];
          puVar18[0x19] = puVar6[0x19];
          puVar18[0x18] = lVar22;
          puVar18[0x1b] = uVar42;
          puVar18[0x1a] = uVar43;
          uVar43 = puVar6[0x1c];
          uVar44 = puVar6[0x1f];
          uVar42 = puVar6[0x1e];
          puVar18[0x1d] = puVar6[0x1d];
          puVar18[0x1c] = uVar43;
          puVar18[0x1f] = uVar44;
          puVar18[0x1e] = uVar42;
        }
        else {
          puVar18[0x18] = puVar6[0x18];
          uVar43 = puVar6[0x19];
          puVar18[0x1a] = puVar6[0x1a];
          puVar18[0x19] = uVar43;
          uVar43 = puVar6[0x1c];
          puVar18[0x1b] = puVar6[0x1b];
          puVar18[0x1c] = uVar43;
          lVar22 = puVar6[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          if (lVar22 == 0) {
            uVar43 = puVar6[0x1d];
            puVar18[0x1e] = puVar6[0x1e];
            puVar18[0x1d] = uVar43;
            puVar18[0x1f] = puVar6[0x1f];
          }
          else {
            puVar18[0x1d] = puVar6[0x1d];
            puVar18[0x1e] = lVar22;
            uVar43 = puVar6[0x1f];
            puVar18[0x1f] = uVar43;
            _swift_bridgeObjectRetain(lVar22);
            _swift_bridgeObjectRetain(uVar43);
          }
        }
        *(undefined1 *)(puVar18 + 0x20) = *(undefined1 *)(puVar6 + 0x20);
        uVar43 = puVar6[0x22];
        puVar18[0x21] = puVar6[0x21];
        puVar18[0x22] = uVar43;
        uVar43 = puVar6[0x24];
        puVar18[0x23] = puVar6[0x23];
        puVar18[0x24] = uVar43;
        uVar42 = puVar6[0x25];
        puVar18[0x26] = puVar6[0x26];
        puVar18[0x25] = uVar42;
        uVar42 = *(undefined8 *)((long)puVar6 + 0x132);
        *(undefined8 *)((long)puVar18 + 0x13a) = *(undefined8 *)((long)puVar6 + 0x13a);
        *(undefined8 *)((long)puVar18 + 0x132) = uVar42;
        lVar22 = puVar6[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
        if (lVar22 == 0) {
          uVar43 = puVar6[0x29];
          uVar44 = puVar6[0x2c];
          uVar42 = puVar6[0x2b];
          puVar18[0x2a] = puVar6[0x2a];
          puVar18[0x29] = uVar43;
          puVar18[0x2c] = uVar44;
          puVar18[0x2b] = uVar42;
        }
        else {
          puVar18[0x29] = puVar6[0x29];
          puVar18[0x2a] = lVar22;
          uVar43 = puVar6[0x2c];
          puVar18[0x2b] = puVar6[0x2b];
          puVar18[0x2c] = uVar43;
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(uVar43);
        }
        uVar43 = puVar6[0x2e];
        puVar18[0x2d] = puVar6[0x2d];
        puVar18[0x2e] = uVar43;
        uVar43 = puVar6[0x2f];
        uVar42 = puVar6[0x30];
        *(undefined1 *)(puVar18 + 0x31) = *(undefined1 *)(puVar6 + 0x31);
        uVar40 = puVar6[0x36];
        uVar15 = *(uint5 *)(puVar6 + 0x39);
        puVar18[0x2f] = uVar43;
        puVar18[0x30] = uVar42;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar42);
        if ((((uVar40 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar43 = puVar6[0x32];
          uVar44 = puVar6[0x35];
          uVar42 = puVar6[0x34];
          puVar18[0x33] = puVar6[0x33];
          puVar18[0x32] = uVar43;
          puVar18[0x35] = uVar44;
          puVar18[0x34] = uVar42;
          uVar43 = puVar6[0x36];
          puVar18[0x37] = puVar6[0x37];
          puVar18[0x36] = uVar43;
          uVar43 = *(undefined8 *)((long)puVar6 + 0x1bd);
          *(undefined8 *)((long)puVar18 + 0x1c5) = *(undefined8 *)((long)puVar6 + 0x1c5);
          *(undefined8 *)((long)puVar18 + 0x1bd) = uVar43;
        }
        else {
          uVar43 = puVar6[0x32];
          uVar46 = puVar6[0x33];
          uVar42 = puVar6[0x34];
          uVar11 = puVar6[0x35];
          uVar44 = puVar6[0x37];
          uVar12 = puVar6[0x38];
          func_0x00010179a2b8(uVar43,uVar46,uVar42,uVar11,uVar40,uVar44,uVar12,(ulong)uVar15);
          puVar18[0x32] = uVar43;
          puVar18[0x33] = uVar46;
          puVar18[0x34] = uVar42;
          puVar18[0x35] = uVar11;
          puVar18[0x36] = uVar40;
          puVar18[0x37] = uVar44;
          puVar18[0x38] = uVar12;
          *(char *)((long)puVar18 + 0x1cc) = (char)(uVar15 >> 0x20);
          *(int *)(puVar18 + 0x39) = (int)uVar15;
        }
        *(undefined1 *)((long)puVar18 + 0x1cd) = *(undefined1 *)((long)puVar6 + 0x1cd);
        uVar43 = puVar6[0x3b];
        puVar18[0x3a] = puVar6[0x3a];
        puVar18[0x3b] = uVar43;
        *(undefined1 *)(puVar18 + 0x3c) = *(undefined1 *)(puVar6 + 0x3c);
        lVar22 = puVar6[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar22 == 0) {
          uVar43 = puVar6[0x3d];
          uVar44 = puVar6[0x40];
          uVar42 = puVar6[0x3f];
          puVar18[0x3e] = puVar6[0x3e];
          puVar18[0x3d] = uVar43;
          puVar18[0x40] = uVar44;
          puVar18[0x3f] = uVar42;
          uVar43 = puVar6[0x41];
          puVar18[0x42] = puVar6[0x42];
          puVar18[0x41] = uVar43;
        }
        else {
          puVar18[0x3d] = puVar6[0x3d];
          puVar18[0x3e] = lVar22;
          uVar43 = puVar6[0x40];
          puVar18[0x3f] = puVar6[0x3f];
          puVar18[0x40] = uVar43;
          puVar18[0x41] = puVar6[0x41];
          uVar42 = puVar6[0x42];
          puVar18[0x42] = uVar42;
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
        }
        *(undefined1 *)(puVar18 + 0x43) = *(undefined1 *)(puVar6 + 0x43);
        lVar22 = puVar6[0x45];
        if (lVar22 == 0) {
          uVar43 = puVar6[0x44];
          uVar44 = puVar6[0x47];
          uVar42 = puVar6[0x46];
          puVar18[0x45] = puVar6[0x45];
          puVar18[0x44] = uVar43;
          puVar18[0x47] = uVar44;
          puVar18[0x46] = uVar42;
          uVar43 = puVar6[0x48];
          puVar18[0x49] = puVar6[0x49];
          puVar18[0x48] = uVar43;
          puVar18[0x4a] = puVar6[0x4a];
        }
        else {
          puVar18[0x44] = puVar6[0x44];
          puVar18[0x45] = lVar22;
          puVar18[0x46] = puVar6[0x46];
          uVar43 = puVar6[0x47];
          puVar18[0x47] = uVar43;
          puVar18[0x48] = puVar6[0x48];
          uVar42 = puVar6[0x49];
          puVar18[0x49] = uVar42;
          puVar18[0x4a] = puVar6[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
        }
        puVar18[0x4b] = puVar6[0x4b];
        _swift_bridgeObjectRetain();
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x20));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x20));
      lVar22 = 0;
      func_0x00010471853c();
      lVar38 = *(long *)(lVar22 + -8);
      puVar20 = puVar6;
      (**(code **)(lVar38 + 0x30))(puVar6,1,lVar22);
      if ((int)puVar20 == 0) {
        uVar43 = puVar6[1];
        *puVar18 = *puVar6;
        puVar18[1] = uVar43;
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x14));
        puVar9 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar22 + 0x14));
        lVar30 = 0;
        FUN_10472f4dc();
        lVar29 = *(long *)(lVar30 + -8);
        pcVar41 = *(code **)(lVar29 + 0x30);
        _swift_bridgeObjectRetain(uVar43);
        puVar23 = puVar9;
        (*pcVar41)(puVar9,1,lVar30);
        if ((int)puVar23 == 0) {
          puVar23 = puVar9;
          (*pcVar37)(puVar9,1,lVar19);
          if ((int)puVar23 == 0) {
            uVar43 = puVar9[1];
            *puVar20 = *puVar9;
            puVar20[1] = uVar43;
            uVar43 = puVar9[3];
            puVar20[2] = puVar9[2];
            puVar20[3] = uVar43;
            uVar42 = puVar9[5];
            puVar20[4] = puVar9[4];
            puVar20[5] = uVar42;
            uVar44 = puVar9[7];
            puVar20[6] = puVar9[6];
            puVar20[7] = uVar44;
            puVar20[8] = puVar9[8];
            lVar35 = puVar9[0xf];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
            _swift_bridgeObjectRetain(uVar44);
            if (lVar35 == 1) {
              uVar43 = puVar9[9];
              puVar20[10] = puVar9[10];
              puVar20[9] = uVar43;
              uVar43 = puVar9[0xb];
              puVar20[0xc] = puVar9[0xc];
              puVar20[0xb] = uVar43;
              uVar43 = puVar9[0xd];
              puVar20[0xe] = puVar9[0xe];
              puVar20[0xd] = uVar43;
              puVar20[0xf] = puVar9[0xf];
            }
            else {
              lVar26 = puVar9[0xb];
              if (lVar26 == 1) {
                uVar43 = puVar9[9];
                puVar20[10] = puVar9[10];
                puVar20[9] = uVar43;
                uVar43 = puVar9[0xb];
                puVar20[0xc] = puVar9[0xc];
                puVar20[0xb] = uVar43;
                puVar20[0xd] = puVar9[0xd];
              }
              else {
                uVar43 = puVar9[9];
                puVar20[10] = puVar9[10];
                puVar20[9] = uVar43;
                uVar43 = puVar9[0xc];
                uVar42 = puVar9[0xd];
                puVar20[0xb] = lVar26;
                puVar20[0xc] = uVar43;
                puVar20[0xd] = uVar42;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar42);
              }
              puVar20[0xe] = puVar9[0xe];
              puVar20[0xf] = lVar35;
              _swift_bridgeObjectRetain(lVar35);
            }
            uVar43 = puVar9[0x11];
            puVar20[0x10] = puVar9[0x10];
            puVar20[0x11] = uVar43;
            uVar42 = puVar9[0x13];
            puVar20[0x12] = puVar9[0x12];
            puVar20[0x13] = uVar42;
            lVar35 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
            lVar26 = (long)puVar9 + (long)*(int *)(lVar19 + 0x34);
            lVar27 = 0;
            FUN_104742f28();
            lVar34 = *(long *)(lVar27 + -8);
            pcVar41 = *(code **)(lVar34 + 0x30);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
            lVar28 = lVar26;
            (*pcVar41)(lVar26,1,lVar27);
            if ((int)lVar28 == 0) {
              lVar28 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar35,lVar26,lVar28);
              puVar23 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x14));
              puVar10 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
              uVar43 = puVar10[1];
              *puVar23 = *puVar10;
              puVar23[1] = uVar43;
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x18)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x1c)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
              puVar23 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x20));
              puVar10 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
              *puVar23 = *puVar10;
              *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar10 + 1);
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x24)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
              pcVar41 = *(code **)(lVar34 + 0x38);
              _swift_bridgeObjectRetain();
              (*pcVar41)(lVar35,0,1,lVar27);
            }
            else {
              lVar28 = 0x112dcbf00;
              func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
              _memcpy(lVar35,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
            }
            puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
            puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar19 + 0x38));
            uVar43 = *puVar10;
            puVar23[1] = puVar10[1];
            *puVar23 = uVar43;
            uVar43 = *(undefined8 *)((long)puVar10 + 9);
            *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar10 + 0x11);
            *(undefined8 *)((long)puVar23 + 9) = uVar43;
            (**(code **)(lVar31 + 0x38))(puVar20,0,1);
          }
          else {
            lVar35 = 0x112db3ce0;
            func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
            _memcpy(puVar20,puVar9,*(undefined8 *)(*(long *)(lVar35 + -8) + 0x40));
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x14));
          puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar30 + 0x14));
          if (puVar10[0x18] == 1) {
            _memcpy(puVar23,puVar10,0x260);
          }
          else {
            lVar35 = puVar10[1];
            if (lVar35 == 1) {
              uVar43 = *puVar10;
              puVar23[1] = puVar10[1];
              *puVar23 = uVar43;
              puVar23[2] = puVar10[2];
            }
            else {
              *puVar23 = *puVar10;
              puVar23[1] = lVar35;
              uVar43 = puVar10[2];
              puVar23[2] = uVar43;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar43);
            }
            uVar40 = puVar10[5];
            if (uVar40 >> 0x3c == 0xb) {
              uVar43 = puVar10[3];
              puVar23[4] = puVar10[4];
              puVar23[3] = uVar43;
              puVar23[5] = puVar10[5];
            }
            else {
              puVar23[3] = puVar10[3];
              if (uVar40 >> 0x3c < 0xf) {
                uVar43 = puVar10[4];
                func_0x00010006c00c(uVar43,uVar40);
                puVar23[4] = uVar43;
                puVar23[5] = uVar40;
              }
              else {
                uVar43 = puVar10[4];
                puVar23[5] = puVar10[5];
                puVar23[4] = uVar43;
              }
            }
            *(undefined2 *)(puVar23 + 6) = *(undefined2 *)(puVar10 + 6);
            puVar23[7] = puVar10[7];
            lVar35 = puVar10[9];
            if (lVar35 == 1) {
              uVar43 = puVar10[0x10];
              uVar44 = puVar10[0x13];
              uVar42 = puVar10[0x12];
              puVar23[0x11] = puVar10[0x11];
              puVar23[0x10] = uVar43;
              puVar23[0x13] = uVar44;
              puVar23[0x12] = uVar42;
              uVar43 = puVar10[0x14];
              puVar23[0x15] = puVar10[0x15];
              puVar23[0x14] = uVar43;
              uVar43 = *(undefined8 *)((long)puVar10 + 0xaa);
              *(undefined8 *)((long)puVar23 + 0xb2) = *(undefined8 *)((long)puVar10 + 0xb2);
              *(undefined8 *)((long)puVar23 + 0xaa) = uVar43;
              uVar43 = puVar10[8];
              uVar44 = puVar10[0xb];
              uVar42 = puVar10[10];
              puVar23[9] = puVar10[9];
              puVar23[8] = uVar43;
              puVar23[0xb] = uVar44;
              puVar23[10] = uVar42;
              uVar43 = puVar10[0xc];
              uVar44 = puVar10[0xf];
              uVar42 = puVar10[0xe];
              puVar23[0xd] = puVar10[0xd];
              puVar23[0xc] = uVar43;
              puVar23[0xf] = uVar44;
              puVar23[0xe] = uVar42;
            }
            else {
              puVar23[8] = puVar10[8];
              puVar23[9] = lVar35;
              uVar46 = puVar10[0xb];
              puVar23[10] = puVar10[10];
              puVar23[0xb] = uVar46;
              uVar43 = puVar10[0xc];
              uVar42 = puVar10[0xd];
              puVar23[0xc] = uVar43;
              puVar23[0xd] = uVar42;
              uVar42 = puVar10[0xe];
              uVar44 = puVar10[0xf];
              puVar23[0xe] = uVar42;
              puVar23[0xf] = uVar44;
              uVar44 = puVar10[0x10];
              uVar11 = puVar10[0x11];
              puVar23[0x10] = uVar44;
              puVar23[0x11] = uVar11;
              lVar35 = puVar10[0x13];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar46);
              _swift_bridgeObjectRetain(uVar43);
              _swift_bridgeObjectRetain(uVar42);
              _swift_bridgeObjectRetain(uVar44);
              _swift_bridgeObjectRetain(uVar11);
              if (lVar35 == 1) {
                uVar43 = puVar10[0x12];
                puVar23[0x13] = puVar10[0x13];
                puVar23[0x12] = uVar43;
              }
              else {
                puVar23[0x12] = puVar10[0x12];
                puVar23[0x13] = lVar35;
                _swift_bridgeObjectRetain(lVar35);
              }
              uVar43 = puVar10[0x15];
              puVar23[0x14] = puVar10[0x14];
              puVar23[0x15] = uVar43;
              puVar23[0x16] = puVar10[0x16];
              *(undefined2 *)(puVar23 + 0x17) = *(undefined2 *)(puVar10 + 0x17);
              _swift_bridgeObjectRetain();
            }
            *(undefined2 *)((long)puVar23 + 0xba) = *(undefined2 *)((long)puVar10 + 0xba);
            if (puVar10[0x18] == 0) {
              lVar35 = puVar10[0x18];
              uVar42 = puVar10[0x1b];
              uVar43 = puVar10[0x1a];
              puVar23[0x19] = puVar10[0x19];
              puVar23[0x18] = lVar35;
              puVar23[0x1b] = uVar42;
              puVar23[0x1a] = uVar43;
              uVar43 = puVar10[0x1c];
              uVar44 = puVar10[0x1f];
              uVar42 = puVar10[0x1e];
              puVar23[0x1d] = puVar10[0x1d];
              puVar23[0x1c] = uVar43;
              puVar23[0x1f] = uVar44;
              puVar23[0x1e] = uVar42;
            }
            else {
              puVar23[0x18] = puVar10[0x18];
              uVar43 = puVar10[0x19];
              puVar23[0x1a] = puVar10[0x1a];
              puVar23[0x19] = uVar43;
              uVar43 = puVar10[0x1c];
              puVar23[0x1b] = puVar10[0x1b];
              puVar23[0x1c] = uVar43;
              lVar35 = puVar10[0x1e];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar43);
              if (lVar35 == 0) {
                uVar43 = puVar10[0x1d];
                puVar23[0x1e] = puVar10[0x1e];
                puVar23[0x1d] = uVar43;
                puVar23[0x1f] = puVar10[0x1f];
              }
              else {
                puVar23[0x1d] = puVar10[0x1d];
                puVar23[0x1e] = lVar35;
                uVar43 = puVar10[0x1f];
                puVar23[0x1f] = uVar43;
                _swift_bridgeObjectRetain(lVar35);
                _swift_bridgeObjectRetain(uVar43);
              }
            }
            *(undefined1 *)(puVar23 + 0x20) = *(undefined1 *)(puVar10 + 0x20);
            uVar43 = puVar10[0x22];
            puVar23[0x21] = puVar10[0x21];
            puVar23[0x22] = uVar43;
            uVar43 = puVar10[0x24];
            puVar23[0x23] = puVar10[0x23];
            puVar23[0x24] = uVar43;
            uVar42 = puVar10[0x25];
            puVar23[0x26] = puVar10[0x26];
            puVar23[0x25] = uVar42;
            uVar42 = *(undefined8 *)((long)puVar10 + 0x132);
            *(undefined8 *)((long)puVar23 + 0x13a) = *(undefined8 *)((long)puVar10 + 0x13a);
            *(undefined8 *)((long)puVar23 + 0x132) = uVar42;
            lVar35 = puVar10[0x2a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            if (lVar35 == 0) {
              uVar43 = puVar10[0x29];
              uVar44 = puVar10[0x2c];
              uVar42 = puVar10[0x2b];
              puVar23[0x2a] = puVar10[0x2a];
              puVar23[0x29] = uVar43;
              puVar23[0x2c] = uVar44;
              puVar23[0x2b] = uVar42;
            }
            else {
              puVar23[0x29] = puVar10[0x29];
              puVar23[0x2a] = lVar35;
              uVar43 = puVar10[0x2c];
              puVar23[0x2b] = puVar10[0x2b];
              puVar23[0x2c] = uVar43;
              _swift_bridgeObjectRetain(lVar35);
              _swift_bridgeObjectRetain(uVar43);
            }
            uVar43 = puVar10[0x2e];
            puVar23[0x2d] = puVar10[0x2d];
            puVar23[0x2e] = uVar43;
            uVar43 = puVar10[0x2f];
            uVar42 = puVar10[0x30];
            *(undefined1 *)(puVar23 + 0x31) = *(undefined1 *)(puVar10 + 0x31);
            uVar40 = puVar10[0x36];
            uVar15 = *(uint5 *)(puVar10 + 0x39);
            puVar23[0x2f] = uVar43;
            puVar23[0x30] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
            if ((((uVar40 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
               (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
              uVar43 = puVar10[0x32];
              uVar44 = puVar10[0x35];
              uVar42 = puVar10[0x34];
              puVar23[0x33] = puVar10[0x33];
              puVar23[0x32] = uVar43;
              puVar23[0x35] = uVar44;
              puVar23[0x34] = uVar42;
              uVar43 = puVar10[0x36];
              puVar23[0x37] = puVar10[0x37];
              puVar23[0x36] = uVar43;
              uVar43 = *(undefined8 *)((long)puVar10 + 0x1bd);
              *(undefined8 *)((long)puVar23 + 0x1c5) = *(undefined8 *)((long)puVar10 + 0x1c5);
              *(undefined8 *)((long)puVar23 + 0x1bd) = uVar43;
            }
            else {
              uVar43 = puVar10[0x32];
              uVar46 = puVar10[0x33];
              uVar42 = puVar10[0x34];
              uVar11 = puVar10[0x35];
              uVar44 = puVar10[0x37];
              uVar12 = puVar10[0x38];
              func_0x00010179a2b8(uVar43,uVar46,uVar42,uVar11,uVar40,uVar44,uVar12,(ulong)uVar15);
              puVar23[0x32] = uVar43;
              puVar23[0x33] = uVar46;
              puVar23[0x34] = uVar42;
              puVar23[0x35] = uVar11;
              puVar23[0x36] = uVar40;
              puVar23[0x37] = uVar44;
              puVar23[0x38] = uVar12;
              *(char *)((long)puVar23 + 0x1cc) = (char)(uVar15 >> 0x20);
              *(int *)(puVar23 + 0x39) = (int)uVar15;
            }
            *(undefined1 *)((long)puVar23 + 0x1cd) = *(undefined1 *)((long)puVar10 + 0x1cd);
            uVar43 = puVar10[0x3b];
            puVar23[0x3a] = puVar10[0x3a];
            puVar23[0x3b] = uVar43;
            *(undefined1 *)(puVar23 + 0x3c) = *(undefined1 *)(puVar10 + 0x3c);
            lVar35 = puVar10[0x3e];
            _swift_bridgeObjectRetain();
            if (lVar35 == 0) {
              uVar43 = puVar10[0x3d];
              uVar44 = puVar10[0x40];
              uVar42 = puVar10[0x3f];
              puVar23[0x3e] = puVar10[0x3e];
              puVar23[0x3d] = uVar43;
              puVar23[0x40] = uVar44;
              puVar23[0x3f] = uVar42;
              uVar43 = puVar10[0x41];
              puVar23[0x42] = puVar10[0x42];
              puVar23[0x41] = uVar43;
            }
            else {
              puVar23[0x3d] = puVar10[0x3d];
              puVar23[0x3e] = lVar35;
              uVar43 = puVar10[0x40];
              puVar23[0x3f] = puVar10[0x3f];
              puVar23[0x40] = uVar43;
              puVar23[0x41] = puVar10[0x41];
              uVar42 = puVar10[0x42];
              puVar23[0x42] = uVar42;
              _swift_bridgeObjectRetain(lVar35);
              _swift_bridgeObjectRetain(uVar43);
              _swift_bridgeObjectRetain(uVar42);
            }
            *(undefined1 *)(puVar23 + 0x43) = *(undefined1 *)(puVar10 + 0x43);
            lVar35 = puVar10[0x45];
            if (lVar35 == 0) {
              uVar43 = puVar10[0x44];
              uVar44 = puVar10[0x47];
              uVar42 = puVar10[0x46];
              puVar23[0x45] = puVar10[0x45];
              puVar23[0x44] = uVar43;
              puVar23[0x47] = uVar44;
              puVar23[0x46] = uVar42;
              uVar43 = puVar10[0x48];
              puVar23[0x49] = puVar10[0x49];
              puVar23[0x48] = uVar43;
              puVar23[0x4a] = puVar10[0x4a];
            }
            else {
              puVar23[0x44] = puVar10[0x44];
              puVar23[0x45] = lVar35;
              puVar23[0x46] = puVar10[0x46];
              uVar43 = puVar10[0x47];
              puVar23[0x47] = uVar43;
              puVar23[0x48] = puVar10[0x48];
              uVar42 = puVar10[0x49];
              puVar23[0x49] = uVar42;
              puVar23[0x4a] = puVar10[0x4a];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar43);
              _swift_bridgeObjectRetain(uVar42);
            }
            puVar23[0x4b] = puVar10[0x4b];
            _swift_bridgeObjectRetain();
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x18));
          puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar30 + 0x18));
          puVar24 = puVar10;
          (*pcVar33)(puVar10,1,lVar21);
          if ((int)puVar24 == 0) {
            uVar43 = puVar10[1];
            *puVar23 = *puVar10;
            puVar23[1] = uVar43;
            uVar43 = puVar10[3];
            puVar23[2] = puVar10[2];
            puVar23[3] = uVar43;
            lVar35 = puVar10[10];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            if (lVar35 == 1) {
              uVar43 = puVar10[4];
              uVar44 = puVar10[7];
              uVar42 = puVar10[6];
              puVar23[5] = puVar10[5];
              puVar23[4] = uVar43;
              puVar23[7] = uVar44;
              puVar23[6] = uVar42;
              uVar43 = puVar10[8];
              puVar23[9] = puVar10[9];
              puVar23[8] = uVar43;
              puVar23[10] = puVar10[10];
            }
            else {
              lVar26 = puVar10[6];
              if (lVar26 == 1) {
                uVar43 = puVar10[4];
                uVar44 = puVar10[7];
                uVar42 = puVar10[6];
                puVar23[5] = puVar10[5];
                puVar23[4] = uVar43;
                puVar23[7] = uVar44;
                puVar23[6] = uVar42;
                puVar23[8] = puVar10[8];
              }
              else {
                uVar43 = puVar10[4];
                puVar23[5] = puVar10[5];
                puVar23[4] = uVar43;
                uVar43 = puVar10[7];
                uVar42 = puVar10[8];
                puVar23[6] = lVar26;
                puVar23[7] = uVar43;
                puVar23[8] = uVar42;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar42);
              }
              puVar23[9] = puVar10[9];
              puVar23[10] = lVar35;
              _swift_bridgeObjectRetain(lVar35);
            }
            uVar43 = puVar10[0xb];
            puVar23[0xc] = puVar10[0xc];
            puVar23[0xb] = uVar43;
            uVar43 = *(undefined8 *)((long)puVar10 + 0x61);
            *(undefined8 *)((long)puVar23 + 0x69) = *(undefined8 *)((long)puVar10 + 0x69);
            *(undefined8 *)((long)puVar23 + 0x61) = uVar43;
            uVar43 = puVar10[0x10];
            puVar23[0xf] = puVar10[0xf];
            puVar23[0x10] = uVar43;
            *(undefined1 *)(puVar23 + 0x11) = *(undefined1 *)(puVar10 + 0x11);
            lVar35 = puVar10[0x14];
            _swift_bridgeObjectRetain();
            if (lVar35 == 1) {
              uVar43 = puVar10[0x12];
              puVar23[0x13] = puVar10[0x13];
              puVar23[0x12] = uVar43;
              puVar23[0x14] = puVar10[0x14];
            }
            else {
              *(undefined4 *)(puVar23 + 0x12) = *(undefined4 *)(puVar10 + 0x12);
              *(undefined1 *)((long)puVar23 + 0x94) = *(undefined1 *)((long)puVar10 + 0x94);
              puVar23[0x13] = puVar10[0x13];
              puVar23[0x14] = lVar35;
              _swift_bridgeObjectRetain(lVar35);
            }
            uVar43 = puVar10[0x15];
            uVar42 = puVar10[0x16];
            puVar23[0x15] = uVar43;
            puVar23[0x16] = uVar42;
            uVar44 = puVar10[0x17];
            puVar23[0x17] = uVar44;
            lVar35 = (long)puVar23 + (long)*(int *)(lVar21 + 0x38);
            lVar26 = (long)puVar10 + (long)*(int *)(lVar21 + 0x38);
            lVar27 = 0;
            FUN_104742f28();
            lVar34 = *(long *)(lVar27 + -8);
            pcVar33 = *(code **)(lVar34 + 0x30);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
            _swift_bridgeObjectRetain(uVar44);
            lVar28 = lVar26;
            (*pcVar33)(lVar26,1,lVar27);
            if ((int)lVar28 == 0) {
              lVar28 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar35,lVar26,lVar28);
              puVar10 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x14));
              puVar24 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
              uVar43 = puVar24[1];
              *puVar10 = *puVar24;
              puVar10[1] = uVar43;
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x18)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x1c)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
              puVar10 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x20));
              puVar24 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
              *puVar10 = *puVar24;
              *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar24 + 1);
              *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x24)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
              pcVar33 = *(code **)(lVar34 + 0x38);
              _swift_bridgeObjectRetain();
              (*pcVar33)(lVar35,0,1,lVar27);
            }
            else {
              lVar28 = 0x112dcbf00;
              func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
              _memcpy(lVar35,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
            }
            (**(code **)(lVar32 + 0x38))(puVar23,0,1,lVar21);
          }
          else {
            lVar21 = 0x112db3cd8;
            func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
            _memcpy(puVar23,puVar10,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x1c));
          puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar30 + 0x1c));
          lVar21 = 0;
          FUN_10475cf44();
          lVar32 = *(long *)(lVar21 + -8);
          puVar24 = puVar10;
          (**(code **)(lVar32 + 0x30))(puVar10,1,lVar21);
          if ((int)puVar24 == 0) {
            uVar43 = puVar10[1];
            *puVar23 = *puVar10;
            puVar23[1] = uVar43;
            uVar43 = puVar10[2];
            uVar42 = puVar10[3];
            _swift_bridgeObjectRetain();
            func_0x00010006c00c(uVar43,uVar42);
            puVar23[2] = uVar43;
            puVar23[3] = uVar42;
            puVar24 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar21 + 0x18));
            puVar7 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x18));
            puVar25 = puVar7;
            (*pcVar37)(puVar7,1,lVar19);
            if ((int)puVar25 == 0) {
              uVar43 = puVar7[1];
              *puVar24 = *puVar7;
              puVar24[1] = uVar43;
              uVar43 = puVar7[3];
              puVar24[2] = puVar7[2];
              puVar24[3] = uVar43;
              uVar42 = puVar7[5];
              puVar24[4] = puVar7[4];
              puVar24[5] = uVar42;
              uVar44 = puVar7[7];
              puVar24[6] = puVar7[6];
              puVar24[7] = uVar44;
              puVar24[8] = puVar7[8];
              lVar35 = puVar7[0xf];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar43);
              _swift_bridgeObjectRetain(uVar42);
              _swift_bridgeObjectRetain(uVar44);
              if (lVar35 == 1) {
                uVar43 = puVar7[9];
                puVar24[10] = puVar7[10];
                puVar24[9] = uVar43;
                uVar43 = puVar7[0xb];
                puVar24[0xc] = puVar7[0xc];
                puVar24[0xb] = uVar43;
                uVar43 = puVar7[0xd];
                puVar24[0xe] = puVar7[0xe];
                puVar24[0xd] = uVar43;
                puVar24[0xf] = puVar7[0xf];
              }
              else {
                lVar26 = puVar7[0xb];
                if (lVar26 == 1) {
                  uVar43 = puVar7[9];
                  puVar24[10] = puVar7[10];
                  puVar24[9] = uVar43;
                  uVar43 = puVar7[0xb];
                  puVar24[0xc] = puVar7[0xc];
                  puVar24[0xb] = uVar43;
                  puVar24[0xd] = puVar7[0xd];
                }
                else {
                  uVar43 = puVar7[9];
                  puVar24[10] = puVar7[10];
                  puVar24[9] = uVar43;
                  uVar43 = puVar7[0xc];
                  uVar42 = puVar7[0xd];
                  puVar24[0xb] = lVar26;
                  puVar24[0xc] = uVar43;
                  puVar24[0xd] = uVar42;
                  _swift_bridgeObjectRetain();
                  _swift_bridgeObjectRetain(uVar42);
                }
                puVar24[0xe] = puVar7[0xe];
                puVar24[0xf] = lVar35;
                _swift_bridgeObjectRetain(lVar35);
              }
              uVar43 = puVar7[0x11];
              puVar24[0x10] = puVar7[0x10];
              puVar24[0x11] = uVar43;
              uVar42 = puVar7[0x13];
              puVar24[0x12] = puVar7[0x12];
              puVar24[0x13] = uVar42;
              lVar35 = (long)puVar24 + (long)*(int *)(lVar19 + 0x34);
              lVar26 = (long)puVar7 + (long)*(int *)(lVar19 + 0x34);
              lVar27 = 0;
              FUN_104742f28();
              lVar34 = *(long *)(lVar27 + -8);
              pcVar33 = *(code **)(lVar34 + 0x30);
              _swift_bridgeObjectRetain(uVar43);
              _swift_bridgeObjectRetain(uVar42);
              lVar28 = lVar26;
              (*pcVar33)(lVar26,1,lVar27);
              if ((int)lVar28 == 0) {
                lVar28 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar35,lVar26,lVar28);
                puVar25 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x14));
                puVar8 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
                uVar43 = puVar8[1];
                *puVar25 = *puVar8;
                puVar25[1] = uVar43;
                *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x18)) =
                     *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
                *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x1c)) =
                     *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
                puVar25 = (undefined8 *)(lVar35 + *(int *)(lVar27 + 0x20));
                puVar8 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
                *puVar25 = *puVar8;
                *(undefined1 *)(puVar25 + 1) = *(undefined1 *)(puVar8 + 1);
                *(undefined1 *)(lVar35 + *(int *)(lVar27 + 0x24)) =
                     *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
                pcVar33 = *(code **)(lVar34 + 0x38);
                _swift_bridgeObjectRetain();
                (*pcVar33)(lVar35,0,1,lVar27);
              }
              else {
                lVar28 = 0x112dcbf00;
                func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
                _memcpy(lVar35,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
              }
              puVar25 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar19 + 0x38));
              puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar19 + 0x38));
              uVar43 = *puVar7;
              puVar25[1] = puVar7[1];
              *puVar25 = uVar43;
              uVar43 = *(undefined8 *)((long)puVar7 + 9);
              *(undefined8 *)((long)puVar25 + 0x11) = *(undefined8 *)((long)puVar7 + 0x11);
              *(undefined8 *)((long)puVar25 + 9) = uVar43;
              (**(code **)(lVar31 + 0x38))(puVar24,0,1);
            }
            else {
              lVar35 = 0x112db3ce0;
              func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
              _memcpy(puVar24,puVar7,*(undefined8 *)(*(long *)(lVar35 + -8) + 0x40));
            }
            puVar24 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar21 + 0x1c));
            puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x1c));
            if (puVar10[0x18] == 1) {
              _memcpy(puVar24,puVar10,0x260);
            }
            else {
              lVar35 = puVar10[1];
              if (lVar35 == 1) {
                uVar43 = *puVar10;
                puVar24[1] = puVar10[1];
                *puVar24 = uVar43;
                puVar24[2] = puVar10[2];
              }
              else {
                *puVar24 = *puVar10;
                puVar24[1] = lVar35;
                uVar43 = puVar10[2];
                puVar24[2] = uVar43;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar43);
              }
              uVar40 = puVar10[5];
              if (uVar40 >> 0x3c == 0xb) {
                uVar43 = puVar10[3];
                puVar24[4] = puVar10[4];
                puVar24[3] = uVar43;
                puVar24[5] = puVar10[5];
              }
              else {
                puVar24[3] = puVar10[3];
                if (uVar40 >> 0x3c < 0xf) {
                  uVar43 = puVar10[4];
                  func_0x00010006c00c(uVar43,uVar40);
                  puVar24[4] = uVar43;
                  puVar24[5] = uVar40;
                }
                else {
                  uVar43 = puVar10[4];
                  puVar24[5] = puVar10[5];
                  puVar24[4] = uVar43;
                }
              }
              *(undefined2 *)(puVar24 + 6) = *(undefined2 *)(puVar10 + 6);
              puVar24[7] = puVar10[7];
              lVar35 = puVar10[9];
              if (lVar35 == 1) {
                uVar43 = puVar10[0x10];
                uVar44 = puVar10[0x13];
                uVar42 = puVar10[0x12];
                puVar24[0x11] = puVar10[0x11];
                puVar24[0x10] = uVar43;
                puVar24[0x13] = uVar44;
                puVar24[0x12] = uVar42;
                uVar43 = puVar10[0x14];
                puVar24[0x15] = puVar10[0x15];
                puVar24[0x14] = uVar43;
                uVar43 = *(undefined8 *)((long)puVar10 + 0xaa);
                *(undefined8 *)((long)puVar24 + 0xb2) = *(undefined8 *)((long)puVar10 + 0xb2);
                *(undefined8 *)((long)puVar24 + 0xaa) = uVar43;
                uVar43 = puVar10[8];
                uVar44 = puVar10[0xb];
                uVar42 = puVar10[10];
                puVar24[9] = puVar10[9];
                puVar24[8] = uVar43;
                puVar24[0xb] = uVar44;
                puVar24[10] = uVar42;
                uVar43 = puVar10[0xc];
                uVar44 = puVar10[0xf];
                uVar42 = puVar10[0xe];
                puVar24[0xd] = puVar10[0xd];
                puVar24[0xc] = uVar43;
                puVar24[0xf] = uVar44;
                puVar24[0xe] = uVar42;
              }
              else {
                puVar24[8] = puVar10[8];
                puVar24[9] = lVar35;
                uVar46 = puVar10[0xb];
                puVar24[10] = puVar10[10];
                puVar24[0xb] = uVar46;
                uVar43 = puVar10[0xc];
                uVar42 = puVar10[0xd];
                puVar24[0xc] = uVar43;
                puVar24[0xd] = uVar42;
                uVar42 = puVar10[0xe];
                uVar44 = puVar10[0xf];
                puVar24[0xe] = uVar42;
                puVar24[0xf] = uVar44;
                uVar44 = puVar10[0x10];
                uVar11 = puVar10[0x11];
                puVar24[0x10] = uVar44;
                puVar24[0x11] = uVar11;
                lVar35 = puVar10[0x13];
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar46);
                _swift_bridgeObjectRetain(uVar43);
                _swift_bridgeObjectRetain(uVar42);
                _swift_bridgeObjectRetain(uVar44);
                _swift_bridgeObjectRetain(uVar11);
                if (lVar35 == 1) {
                  uVar43 = puVar10[0x12];
                  puVar24[0x13] = puVar10[0x13];
                  puVar24[0x12] = uVar43;
                }
                else {
                  puVar24[0x12] = puVar10[0x12];
                  puVar24[0x13] = lVar35;
                  _swift_bridgeObjectRetain();
                }
                uVar43 = puVar10[0x15];
                puVar24[0x14] = puVar10[0x14];
                puVar24[0x15] = uVar43;
                puVar24[0x16] = puVar10[0x16];
                *(undefined2 *)(puVar24 + 0x17) = *(undefined2 *)(puVar10 + 0x17);
                _swift_bridgeObjectRetain();
              }
              *(undefined2 *)((long)puVar24 + 0xba) = *(undefined2 *)((long)puVar10 + 0xba);
              if (puVar10[0x18] == 0) {
                lVar35 = puVar10[0x18];
                uVar42 = puVar10[0x1b];
                uVar43 = puVar10[0x1a];
                puVar24[0x19] = puVar10[0x19];
                puVar24[0x18] = lVar35;
                puVar24[0x1b] = uVar42;
                puVar24[0x1a] = uVar43;
                uVar43 = puVar10[0x1c];
                uVar44 = puVar10[0x1f];
                uVar42 = puVar10[0x1e];
                puVar24[0x1d] = puVar10[0x1d];
                puVar24[0x1c] = uVar43;
                puVar24[0x1f] = uVar44;
                puVar24[0x1e] = uVar42;
              }
              else {
                puVar24[0x18] = puVar10[0x18];
                uVar43 = puVar10[0x19];
                puVar24[0x1a] = puVar10[0x1a];
                puVar24[0x19] = uVar43;
                uVar43 = puVar10[0x1c];
                puVar24[0x1b] = puVar10[0x1b];
                puVar24[0x1c] = uVar43;
                lVar35 = puVar10[0x1e];
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar43);
                if (lVar35 == 0) {
                  uVar43 = puVar10[0x1d];
                  puVar24[0x1e] = puVar10[0x1e];
                  puVar24[0x1d] = uVar43;
                  puVar24[0x1f] = puVar10[0x1f];
                }
                else {
                  puVar24[0x1d] = puVar10[0x1d];
                  puVar24[0x1e] = lVar35;
                  uVar43 = puVar10[0x1f];
                  puVar24[0x1f] = uVar43;
                  _swift_bridgeObjectRetain(lVar35);
                  _swift_bridgeObjectRetain(uVar43);
                }
              }
              *(undefined1 *)(puVar24 + 0x20) = *(undefined1 *)(puVar10 + 0x20);
              uVar43 = puVar10[0x22];
              puVar24[0x21] = puVar10[0x21];
              puVar24[0x22] = uVar43;
              uVar43 = puVar10[0x24];
              puVar24[0x23] = puVar10[0x23];
              puVar24[0x24] = uVar43;
              uVar42 = puVar10[0x25];
              puVar24[0x26] = puVar10[0x26];
              puVar24[0x25] = uVar42;
              uVar42 = *(undefined8 *)((long)puVar10 + 0x132);
              *(undefined8 *)((long)puVar24 + 0x13a) = *(undefined8 *)((long)puVar10 + 0x13a);
              *(undefined8 *)((long)puVar24 + 0x132) = uVar42;
              lVar35 = puVar10[0x2a];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar43);
              if (lVar35 == 0) {
                uVar43 = puVar10[0x29];
                uVar44 = puVar10[0x2c];
                uVar42 = puVar10[0x2b];
                puVar24[0x2a] = puVar10[0x2a];
                puVar24[0x29] = uVar43;
                puVar24[0x2c] = uVar44;
                puVar24[0x2b] = uVar42;
              }
              else {
                puVar24[0x29] = puVar10[0x29];
                puVar24[0x2a] = lVar35;
                uVar43 = puVar10[0x2c];
                puVar24[0x2b] = puVar10[0x2b];
                puVar24[0x2c] = uVar43;
                _swift_bridgeObjectRetain(lVar35);
                _swift_bridgeObjectRetain(uVar43);
              }
              uVar43 = puVar10[0x2e];
              puVar24[0x2d] = puVar10[0x2d];
              puVar24[0x2e] = uVar43;
              uVar43 = puVar10[0x2f];
              uVar42 = puVar10[0x30];
              *(undefined1 *)(puVar24 + 0x31) = *(undefined1 *)(puVar10 + 0x31);
              uVar40 = puVar10[0x36];
              uVar15 = *(uint5 *)(puVar10 + 0x39);
              puVar24[0x2f] = uVar43;
              puVar24[0x30] = uVar42;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar42);
              if ((((uVar40 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
                 (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
                uVar43 = puVar10[0x32];
                uVar44 = puVar10[0x35];
                uVar42 = puVar10[0x34];
                puVar24[0x33] = puVar10[0x33];
                puVar24[0x32] = uVar43;
                puVar24[0x35] = uVar44;
                puVar24[0x34] = uVar42;
                uVar43 = puVar10[0x36];
                puVar24[0x37] = puVar10[0x37];
                puVar24[0x36] = uVar43;
                uVar43 = *(undefined8 *)((long)puVar10 + 0x1bd);
                *(undefined8 *)((long)puVar24 + 0x1c5) = *(undefined8 *)((long)puVar10 + 0x1c5);
                *(undefined8 *)((long)puVar24 + 0x1bd) = uVar43;
              }
              else {
                uVar43 = puVar10[0x32];
                uVar46 = puVar10[0x33];
                uVar42 = puVar10[0x34];
                uVar11 = puVar10[0x35];
                uVar44 = puVar10[0x37];
                uVar12 = puVar10[0x38];
                func_0x00010179a2b8(uVar43,uVar46,uVar42,uVar11,uVar40,uVar44,uVar12,(ulong)uVar15);
                puVar24[0x32] = uVar43;
                puVar24[0x33] = uVar46;
                puVar24[0x34] = uVar42;
                puVar24[0x35] = uVar11;
                puVar24[0x36] = uVar40;
                puVar24[0x37] = uVar44;
                puVar24[0x38] = uVar12;
                *(char *)((long)puVar24 + 0x1cc) = (char)(uVar15 >> 0x20);
                *(int *)(puVar24 + 0x39) = (int)uVar15;
              }
              *(undefined1 *)((long)puVar24 + 0x1cd) = *(undefined1 *)((long)puVar10 + 0x1cd);
              uVar43 = puVar10[0x3b];
              puVar24[0x3a] = puVar10[0x3a];
              puVar24[0x3b] = uVar43;
              *(undefined1 *)(puVar24 + 0x3c) = *(undefined1 *)(puVar10 + 0x3c);
              lVar35 = puVar10[0x3e];
              _swift_bridgeObjectRetain();
              if (lVar35 == 0) {
                uVar43 = puVar10[0x3d];
                uVar44 = puVar10[0x40];
                uVar42 = puVar10[0x3f];
                puVar24[0x3e] = puVar10[0x3e];
                puVar24[0x3d] = uVar43;
                puVar24[0x40] = uVar44;
                puVar24[0x3f] = uVar42;
                uVar43 = puVar10[0x41];
                puVar24[0x42] = puVar10[0x42];
                puVar24[0x41] = uVar43;
              }
              else {
                puVar24[0x3d] = puVar10[0x3d];
                puVar24[0x3e] = lVar35;
                uVar43 = puVar10[0x40];
                puVar24[0x3f] = puVar10[0x3f];
                puVar24[0x40] = uVar43;
                puVar24[0x41] = puVar10[0x41];
                uVar42 = puVar10[0x42];
                puVar24[0x42] = uVar42;
                _swift_bridgeObjectRetain(lVar35);
                _swift_bridgeObjectRetain(uVar43);
                _swift_bridgeObjectRetain(uVar42);
              }
              *(undefined1 *)(puVar24 + 0x43) = *(undefined1 *)(puVar10 + 0x43);
              lVar35 = puVar10[0x45];
              if (lVar35 == 0) {
                uVar43 = puVar10[0x44];
                uVar44 = puVar10[0x47];
                uVar42 = puVar10[0x46];
                puVar24[0x45] = puVar10[0x45];
                puVar24[0x44] = uVar43;
                puVar24[0x47] = uVar44;
                puVar24[0x46] = uVar42;
                uVar43 = puVar10[0x48];
                puVar24[0x49] = puVar10[0x49];
                puVar24[0x48] = uVar43;
                puVar24[0x4a] = puVar10[0x4a];
              }
              else {
                puVar24[0x44] = puVar10[0x44];
                puVar24[0x45] = lVar35;
                puVar24[0x46] = puVar10[0x46];
                uVar43 = puVar10[0x47];
                puVar24[0x47] = uVar43;
                puVar24[0x48] = puVar10[0x48];
                uVar42 = puVar10[0x49];
                puVar24[0x49] = uVar42;
                puVar24[0x4a] = puVar10[0x4a];
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar43);
                _swift_bridgeObjectRetain(uVar42);
              }
              puVar24[0x4b] = puVar10[0x4b];
              _swift_bridgeObjectRetain();
            }
            (**(code **)(lVar32 + 0x38))(puVar23,0,1,lVar21);
          }
          else {
            lVar21 = 0x112db3cc8;
            func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
            _memcpy(puVar23,puVar10,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
          }
          *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x20)) =
               *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar30 + 0x20));
          (**(code **)(lVar29 + 0x38))(puVar20,0,1);
        }
        else {
          lVar21 = 0x112db3e90;
          func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
          _memcpy(puVar20,puVar9,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x18)) =
             *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar22 + 0x18));
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x1c));
        puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar22 + 0x1c));
        *puVar20 = *puVar6;
        *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar6 + 1);
        pcVar33 = *(code **)(lVar38 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar33)(puVar18,0,1,lVar22);
      }
      else {
        lVar21 = 0x112db3cd0;
        func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
        _memcpy(puVar18,puVar6,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x24));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x24));
      lVar21 = puVar6[1];
      if (lVar21 == 1) {
        uVar43 = *puVar6;
        uVar44 = puVar6[3];
        uVar42 = puVar6[2];
        puVar18[1] = puVar6[1];
        *puVar18 = uVar43;
        puVar18[3] = uVar44;
        puVar18[2] = uVar42;
      }
      else {
        *puVar18 = *puVar6;
        puVar18[1] = lVar21;
        uVar43 = puVar6[3];
        puVar18[2] = puVar6[2];
        puVar18[3] = uVar43;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x28));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x28));
      lVar21 = puVar6[1];
      if (lVar21 == 1) {
        uVar43 = *puVar6;
        uVar44 = puVar6[3];
        uVar42 = puVar6[2];
        puVar18[1] = puVar6[1];
        *puVar18 = uVar43;
        puVar18[3] = uVar44;
        puVar18[2] = uVar42;
        uVar43 = puVar6[4];
        uVar44 = puVar6[7];
        uVar42 = puVar6[6];
        puVar18[5] = puVar6[5];
        puVar18[4] = uVar43;
        puVar18[7] = uVar44;
        puVar18[6] = uVar42;
      }
      else {
        *puVar18 = *puVar6;
        puVar18[1] = lVar21;
        uVar43 = puVar6[3];
        puVar18[2] = puVar6[2];
        puVar18[3] = uVar43;
        uVar42 = puVar6[5];
        puVar18[4] = puVar6[4];
        puVar18[5] = uVar42;
        uVar44 = puVar6[7];
        puVar18[6] = puVar6[6];
        puVar18[7] = uVar44;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
        _swift_bridgeObjectRetain(uVar42);
        _swift_bridgeObjectRetain(uVar44);
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x2c));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x2c));
      uVar43 = puVar6[1];
      *puVar18 = *puVar6;
      puVar18[1] = uVar43;
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x30));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x30));
      lVar21 = puVar6[1];
      _swift_bridgeObjectRetain();
      if (lVar21 == 0) {
        uVar43 = puVar6[0x18];
        uVar44 = puVar6[0x1b];
        uVar42 = puVar6[0x1a];
        puVar18[0x19] = puVar6[0x19];
        puVar18[0x18] = uVar43;
        puVar18[0x1b] = uVar44;
        puVar18[0x1a] = uVar42;
        uVar43 = puVar6[0x1c];
        puVar18[0x1d] = puVar6[0x1d];
        puVar18[0x1c] = uVar43;
        puVar18[0x1e] = puVar6[0x1e];
        uVar43 = puVar6[0x10];
        uVar44 = puVar6[0x13];
        uVar42 = puVar6[0x12];
        puVar18[0x11] = puVar6[0x11];
        puVar18[0x10] = uVar43;
        puVar18[0x13] = uVar44;
        puVar18[0x12] = uVar42;
        uVar43 = puVar6[0x14];
        uVar44 = puVar6[0x17];
        uVar42 = puVar6[0x16];
        puVar18[0x15] = puVar6[0x15];
        puVar18[0x14] = uVar43;
        puVar18[0x17] = uVar44;
        puVar18[0x16] = uVar42;
        uVar43 = puVar6[8];
        uVar44 = puVar6[0xb];
        uVar42 = puVar6[10];
        puVar18[9] = puVar6[9];
        puVar18[8] = uVar43;
        puVar18[0xb] = uVar44;
        puVar18[10] = uVar42;
        uVar43 = puVar6[0xc];
        uVar44 = puVar6[0xf];
        uVar42 = puVar6[0xe];
        puVar18[0xd] = puVar6[0xd];
        puVar18[0xc] = uVar43;
        puVar18[0xf] = uVar44;
        puVar18[0xe] = uVar42;
        uVar43 = *puVar6;
        uVar44 = puVar6[3];
        uVar42 = puVar6[2];
        puVar18[1] = puVar6[1];
        *puVar18 = uVar43;
        puVar18[3] = uVar44;
        puVar18[2] = uVar42;
        uVar43 = puVar6[4];
        uVar44 = puVar6[7];
        uVar42 = puVar6[6];
        puVar18[5] = puVar6[5];
        puVar18[4] = uVar43;
        puVar18[7] = uVar44;
        puVar18[6] = uVar42;
      }
      else {
        *puVar18 = *puVar6;
        puVar18[1] = lVar21;
        uVar43 = puVar6[2];
        uVar42 = puVar6[3];
        puVar18[2] = uVar43;
        puVar18[3] = uVar42;
        uVar42 = puVar6[4];
        puVar18[4] = uVar42;
        lVar32 = puVar6[6];
        _swift_bridgeObjectRetain(lVar21);
        _swift_bridgeObjectRetain(uVar43);
        _swift_bridgeObjectRetain(uVar42);
        if (lVar32 == 0) {
          uVar43 = puVar6[5];
          puVar18[6] = puVar6[6];
          puVar18[5] = uVar43;
          uVar43 = puVar6[7];
          puVar18[8] = puVar6[8];
          puVar18[7] = uVar43;
          puVar18[9] = puVar6[9];
        }
        else {
          puVar18[5] = puVar6[5];
          puVar18[6] = lVar32;
          uVar43 = puVar6[8];
          puVar18[7] = puVar6[7];
          puVar18[8] = uVar43;
          uVar42 = puVar6[9];
          puVar18[9] = uVar42;
          _swift_bridgeObjectRetain(lVar32);
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
        }
        lVar21 = puVar6[0x10];
        if (lVar21 == 1) {
          uVar43 = puVar6[10];
          uVar44 = puVar6[0xd];
          uVar42 = puVar6[0xc];
          puVar18[0xb] = puVar6[0xb];
          puVar18[10] = uVar43;
          puVar18[0xd] = uVar44;
          puVar18[0xc] = uVar42;
          uVar43 = puVar6[0xe];
          puVar18[0xf] = puVar6[0xf];
          puVar18[0xe] = uVar43;
          puVar18[0x10] = puVar6[0x10];
        }
        else {
          lVar32 = puVar6[0xc];
          if (lVar32 == 1) {
            uVar43 = puVar6[10];
            uVar44 = puVar6[0xd];
            uVar42 = puVar6[0xc];
            puVar18[0xb] = puVar6[0xb];
            puVar18[10] = uVar43;
            puVar18[0xd] = uVar44;
            puVar18[0xc] = uVar42;
            puVar18[0xe] = puVar6[0xe];
          }
          else {
            uVar43 = puVar6[10];
            puVar18[0xb] = puVar6[0xb];
            puVar18[10] = uVar43;
            uVar43 = puVar6[0xd];
            uVar42 = puVar6[0xe];
            puVar18[0xc] = lVar32;
            puVar18[0xd] = uVar43;
            puVar18[0xe] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar18[0xf] = puVar6[0xf];
          puVar18[0x10] = lVar21;
          _swift_bridgeObjectRetain(lVar21);
        }
        lVar21 = puVar6[0x17];
        if (lVar21 == 1) {
          uVar43 = puVar6[0x11];
          puVar18[0x12] = puVar6[0x12];
          puVar18[0x11] = uVar43;
          uVar43 = puVar6[0x13];
          puVar18[0x14] = puVar6[0x14];
          puVar18[0x13] = uVar43;
          uVar43 = puVar6[0x15];
          puVar18[0x16] = puVar6[0x16];
          puVar18[0x15] = uVar43;
          puVar18[0x17] = puVar6[0x17];
        }
        else {
          lVar32 = puVar6[0x13];
          if (lVar32 == 1) {
            uVar43 = puVar6[0x11];
            puVar18[0x12] = puVar6[0x12];
            puVar18[0x11] = uVar43;
            uVar43 = puVar6[0x13];
            puVar18[0x14] = puVar6[0x14];
            puVar18[0x13] = uVar43;
            puVar18[0x15] = puVar6[0x15];
          }
          else {
            uVar43 = puVar6[0x11];
            puVar18[0x12] = puVar6[0x12];
            puVar18[0x11] = uVar43;
            uVar43 = puVar6[0x14];
            uVar42 = puVar6[0x15];
            puVar18[0x13] = lVar32;
            puVar18[0x14] = uVar43;
            puVar18[0x15] = uVar42;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar18[0x16] = puVar6[0x16];
          puVar18[0x17] = lVar21;
          _swift_bridgeObjectRetain(lVar21);
        }
        uVar43 = puVar6[0x18];
        puVar18[0x19] = puVar6[0x19];
        puVar18[0x18] = uVar43;
        puVar18[0x1a] = puVar6[0x1a];
        uVar43 = puVar6[0x1b];
        puVar18[0x1c] = puVar6[0x1c];
        puVar18[0x1b] = uVar43;
        uVar43 = puVar6[0x1e];
        puVar18[0x1d] = puVar6[0x1d];
        puVar18[0x1e] = uVar43;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar43);
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x34));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x34));
      uVar40 = puVar6[1];
      if (uVar40 >> 0x3c < 0xf) {
        uVar43 = *puVar6;
        func_0x00010006c00c(uVar43,uVar40);
        *puVar18 = uVar43;
        puVar18[1] = uVar40;
      }
      else {
        uVar43 = *puVar6;
        puVar18[1] = puVar6[1];
        *puVar18 = uVar43;
      }
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x38));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x38));
      lVar21 = 0;
      FUN_10475cf44();
      lVar32 = *(long *)(lVar21 + -8);
      puVar20 = puVar6;
      (**(code **)(lVar32 + 0x30))(puVar6,1,lVar21);
      if ((int)puVar20 == 0) {
        uVar43 = puVar6[1];
        *puVar18 = *puVar6;
        puVar18[1] = uVar43;
        uVar43 = puVar6[2];
        uVar42 = puVar6[3];
        _swift_bridgeObjectRetain();
        func_0x00010006c00c(uVar43,uVar42);
        puVar18[2] = uVar43;
        puVar18[3] = uVar42;
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x18));
        puVar9 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x18));
        puVar23 = puVar9;
        (*pcVar37)(puVar9,1,lVar19);
        if ((int)puVar23 == 0) {
          uVar43 = puVar9[1];
          *puVar20 = *puVar9;
          puVar20[1] = uVar43;
          uVar43 = puVar9[3];
          puVar20[2] = puVar9[2];
          puVar20[3] = uVar43;
          uVar42 = puVar9[5];
          puVar20[4] = puVar9[4];
          puVar20[5] = uVar42;
          uVar44 = puVar9[7];
          puVar20[6] = puVar9[6];
          puVar20[7] = uVar44;
          puVar20[8] = puVar9[8];
          lVar22 = puVar9[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
          _swift_bridgeObjectRetain(uVar44);
          if (lVar22 == 1) {
            uVar43 = puVar9[9];
            puVar20[10] = puVar9[10];
            puVar20[9] = uVar43;
            uVar43 = puVar9[0xb];
            puVar20[0xc] = puVar9[0xc];
            puVar20[0xb] = uVar43;
            uVar43 = puVar9[0xd];
            puVar20[0xe] = puVar9[0xe];
            puVar20[0xd] = uVar43;
            puVar20[0xf] = puVar9[0xf];
          }
          else {
            lVar38 = puVar9[0xb];
            if (lVar38 == 1) {
              uVar43 = puVar9[9];
              puVar20[10] = puVar9[10];
              puVar20[9] = uVar43;
              uVar43 = puVar9[0xb];
              puVar20[0xc] = puVar9[0xc];
              puVar20[0xb] = uVar43;
              puVar20[0xd] = puVar9[0xd];
            }
            else {
              uVar43 = puVar9[9];
              puVar20[10] = puVar9[10];
              puVar20[9] = uVar43;
              uVar43 = puVar9[0xc];
              uVar42 = puVar9[0xd];
              puVar20[0xb] = lVar38;
              puVar20[0xc] = uVar43;
              puVar20[0xd] = uVar42;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar42);
            }
            puVar20[0xe] = puVar9[0xe];
            puVar20[0xf] = lVar22;
            _swift_bridgeObjectRetain(lVar22);
          }
          uVar43 = puVar9[0x11];
          puVar20[0x10] = puVar9[0x10];
          puVar20[0x11] = uVar43;
          uVar42 = puVar9[0x13];
          puVar20[0x12] = puVar9[0x12];
          puVar20[0x13] = uVar42;
          lVar22 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
          lVar38 = (long)puVar9 + (long)*(int *)(lVar19 + 0x34);
          lVar29 = 0;
          FUN_104742f28();
          lVar35 = *(long *)(lVar29 + -8);
          pcVar33 = *(code **)(lVar35 + 0x30);
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
          lVar30 = lVar38;
          (*pcVar33)(lVar38,1,lVar29);
          if ((int)lVar30 == 0) {
            lVar30 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar38,lVar30);
            puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
            puVar10 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x14));
            uVar43 = puVar10[1];
            *puVar23 = *puVar10;
            puVar23[1] = uVar43;
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x18));
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x1c));
            puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
            puVar10 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x20));
            *puVar23 = *puVar10;
            *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar10 + 1);
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x24));
            pcVar33 = *(code **)(lVar35 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar33)(lVar22,0,1,lVar29);
          }
          else {
            lVar30 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar22,lVar38,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
          puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar19 + 0x38));
          uVar43 = *puVar9;
          puVar23[1] = puVar9[1];
          *puVar23 = uVar43;
          uVar43 = *(undefined8 *)((long)puVar9 + 9);
          *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar9 + 0x11);
          *(undefined8 *)((long)puVar23 + 9) = uVar43;
          (**(code **)(lVar31 + 0x38))(puVar20,0,1);
        }
        else {
          lVar22 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar20,puVar9,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
        }
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x1c));
        puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x1c));
        if (puVar6[0x18] == 1) {
          _memcpy(puVar20,puVar6,0x260);
        }
        else {
          lVar22 = puVar6[1];
          if (lVar22 == 1) {
            uVar43 = *puVar6;
            puVar20[1] = puVar6[1];
            *puVar20 = uVar43;
            puVar20[2] = puVar6[2];
          }
          else {
            *puVar20 = *puVar6;
            puVar20[1] = lVar22;
            uVar43 = puVar6[2];
            puVar20[2] = uVar43;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
          }
          uVar40 = puVar6[5];
          if (uVar40 >> 0x3c == 0xb) {
            uVar43 = puVar6[3];
            puVar20[4] = puVar6[4];
            puVar20[3] = uVar43;
            puVar20[5] = puVar6[5];
          }
          else {
            puVar20[3] = puVar6[3];
            if (uVar40 >> 0x3c < 0xf) {
              uVar43 = puVar6[4];
              func_0x00010006c00c(uVar43,uVar40);
              puVar20[4] = uVar43;
              puVar20[5] = uVar40;
            }
            else {
              uVar43 = puVar6[4];
              puVar20[5] = puVar6[5];
              puVar20[4] = uVar43;
            }
          }
          *(undefined2 *)(puVar20 + 6) = *(undefined2 *)(puVar6 + 6);
          puVar20[7] = puVar6[7];
          lVar22 = puVar6[9];
          if (lVar22 == 1) {
            uVar43 = puVar6[0x10];
            uVar44 = puVar6[0x13];
            uVar42 = puVar6[0x12];
            puVar20[0x11] = puVar6[0x11];
            puVar20[0x10] = uVar43;
            puVar20[0x13] = uVar44;
            puVar20[0x12] = uVar42;
            uVar43 = puVar6[0x14];
            puVar20[0x15] = puVar6[0x15];
            puVar20[0x14] = uVar43;
            uVar43 = *(undefined8 *)((long)puVar6 + 0xaa);
            *(undefined8 *)((long)puVar20 + 0xb2) = *(undefined8 *)((long)puVar6 + 0xb2);
            *(undefined8 *)((long)puVar20 + 0xaa) = uVar43;
            uVar43 = puVar6[8];
            uVar44 = puVar6[0xb];
            uVar42 = puVar6[10];
            puVar20[9] = puVar6[9];
            puVar20[8] = uVar43;
            puVar20[0xb] = uVar44;
            puVar20[10] = uVar42;
            uVar43 = puVar6[0xc];
            uVar44 = puVar6[0xf];
            uVar42 = puVar6[0xe];
            puVar20[0xd] = puVar6[0xd];
            puVar20[0xc] = uVar43;
            puVar20[0xf] = uVar44;
            puVar20[0xe] = uVar42;
          }
          else {
            puVar20[8] = puVar6[8];
            puVar20[9] = lVar22;
            uVar46 = puVar6[0xb];
            puVar20[10] = puVar6[10];
            puVar20[0xb] = uVar46;
            uVar43 = puVar6[0xc];
            uVar42 = puVar6[0xd];
            puVar20[0xc] = uVar43;
            puVar20[0xd] = uVar42;
            uVar42 = puVar6[0xe];
            uVar44 = puVar6[0xf];
            puVar20[0xe] = uVar42;
            puVar20[0xf] = uVar44;
            uVar44 = puVar6[0x10];
            uVar11 = puVar6[0x11];
            puVar20[0x10] = uVar44;
            puVar20[0x11] = uVar11;
            lVar22 = puVar6[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar46);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
            _swift_bridgeObjectRetain(uVar44);
            _swift_bridgeObjectRetain(uVar11);
            if (lVar22 == 1) {
              uVar43 = puVar6[0x12];
              puVar20[0x13] = puVar6[0x13];
              puVar20[0x12] = uVar43;
            }
            else {
              puVar20[0x12] = puVar6[0x12];
              puVar20[0x13] = lVar22;
              _swift_bridgeObjectRetain();
            }
            uVar43 = puVar6[0x15];
            puVar20[0x14] = puVar6[0x14];
            puVar20[0x15] = uVar43;
            puVar20[0x16] = puVar6[0x16];
            *(undefined2 *)(puVar20 + 0x17) = *(undefined2 *)(puVar6 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar20 + 0xba) = *(undefined2 *)((long)puVar6 + 0xba);
          if (puVar6[0x18] == 0) {
            lVar22 = puVar6[0x18];
            uVar42 = puVar6[0x1b];
            uVar43 = puVar6[0x1a];
            puVar20[0x19] = puVar6[0x19];
            puVar20[0x18] = lVar22;
            puVar20[0x1b] = uVar42;
            puVar20[0x1a] = uVar43;
            uVar43 = puVar6[0x1c];
            uVar44 = puVar6[0x1f];
            uVar42 = puVar6[0x1e];
            puVar20[0x1d] = puVar6[0x1d];
            puVar20[0x1c] = uVar43;
            puVar20[0x1f] = uVar44;
            puVar20[0x1e] = uVar42;
          }
          else {
            puVar20[0x18] = puVar6[0x18];
            uVar43 = puVar6[0x19];
            puVar20[0x1a] = puVar6[0x1a];
            puVar20[0x19] = uVar43;
            uVar43 = puVar6[0x1c];
            puVar20[0x1b] = puVar6[0x1b];
            puVar20[0x1c] = uVar43;
            lVar22 = puVar6[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            if (lVar22 == 0) {
              uVar43 = puVar6[0x1d];
              puVar20[0x1e] = puVar6[0x1e];
              puVar20[0x1d] = uVar43;
              puVar20[0x1f] = puVar6[0x1f];
            }
            else {
              puVar20[0x1d] = puVar6[0x1d];
              puVar20[0x1e] = lVar22;
              uVar43 = puVar6[0x1f];
              puVar20[0x1f] = uVar43;
              _swift_bridgeObjectRetain(lVar22);
              _swift_bridgeObjectRetain(uVar43);
            }
          }
          *(undefined1 *)(puVar20 + 0x20) = *(undefined1 *)(puVar6 + 0x20);
          uVar43 = puVar6[0x22];
          puVar20[0x21] = puVar6[0x21];
          puVar20[0x22] = uVar43;
          uVar43 = puVar6[0x24];
          puVar20[0x23] = puVar6[0x23];
          puVar20[0x24] = uVar43;
          uVar42 = puVar6[0x25];
          puVar20[0x26] = puVar6[0x26];
          puVar20[0x25] = uVar42;
          uVar42 = *(undefined8 *)((long)puVar6 + 0x132);
          *(undefined8 *)((long)puVar20 + 0x13a) = *(undefined8 *)((long)puVar6 + 0x13a);
          *(undefined8 *)((long)puVar20 + 0x132) = uVar42;
          lVar22 = puVar6[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          if (lVar22 == 0) {
            uVar43 = puVar6[0x29];
            uVar44 = puVar6[0x2c];
            uVar42 = puVar6[0x2b];
            puVar20[0x2a] = puVar6[0x2a];
            puVar20[0x29] = uVar43;
            puVar20[0x2c] = uVar44;
            puVar20[0x2b] = uVar42;
          }
          else {
            puVar20[0x29] = puVar6[0x29];
            puVar20[0x2a] = lVar22;
            uVar43 = puVar6[0x2c];
            puVar20[0x2b] = puVar6[0x2b];
            puVar20[0x2c] = uVar43;
            _swift_bridgeObjectRetain(lVar22);
            _swift_bridgeObjectRetain(uVar43);
          }
          uVar43 = puVar6[0x2e];
          puVar20[0x2d] = puVar6[0x2d];
          puVar20[0x2e] = uVar43;
          uVar43 = puVar6[0x2f];
          uVar42 = puVar6[0x30];
          *(undefined1 *)(puVar20 + 0x31) = *(undefined1 *)(puVar6 + 0x31);
          uVar40 = puVar6[0x36];
          uVar15 = *(uint5 *)(puVar6 + 0x39);
          puVar20[0x2f] = uVar43;
          puVar20[0x30] = uVar42;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar42);
          if ((((uVar40 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar43 = puVar6[0x32];
            uVar44 = puVar6[0x35];
            uVar42 = puVar6[0x34];
            puVar20[0x33] = puVar6[0x33];
            puVar20[0x32] = uVar43;
            puVar20[0x35] = uVar44;
            puVar20[0x34] = uVar42;
            uVar43 = puVar6[0x36];
            puVar20[0x37] = puVar6[0x37];
            puVar20[0x36] = uVar43;
            uVar43 = *(undefined8 *)((long)puVar6 + 0x1bd);
            *(undefined8 *)((long)puVar20 + 0x1c5) = *(undefined8 *)((long)puVar6 + 0x1c5);
            *(undefined8 *)((long)puVar20 + 0x1bd) = uVar43;
          }
          else {
            uVar43 = puVar6[0x32];
            uVar46 = puVar6[0x33];
            uVar42 = puVar6[0x34];
            uVar11 = puVar6[0x35];
            uVar44 = puVar6[0x37];
            uVar12 = puVar6[0x38];
            func_0x00010179a2b8(uVar43,uVar46,uVar42,uVar11,uVar40,uVar44,uVar12,(ulong)uVar15);
            puVar20[0x32] = uVar43;
            puVar20[0x33] = uVar46;
            puVar20[0x34] = uVar42;
            puVar20[0x35] = uVar11;
            puVar20[0x36] = uVar40;
            puVar20[0x37] = uVar44;
            puVar20[0x38] = uVar12;
            *(char *)((long)puVar20 + 0x1cc) = (char)(uVar15 >> 0x20);
            *(int *)(puVar20 + 0x39) = (int)uVar15;
          }
          *(undefined1 *)((long)puVar20 + 0x1cd) = *(undefined1 *)((long)puVar6 + 0x1cd);
          uVar43 = puVar6[0x3b];
          puVar20[0x3a] = puVar6[0x3a];
          puVar20[0x3b] = uVar43;
          *(undefined1 *)(puVar20 + 0x3c) = *(undefined1 *)(puVar6 + 0x3c);
          lVar22 = puVar6[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar22 == 0) {
            uVar43 = puVar6[0x3d];
            uVar44 = puVar6[0x40];
            uVar42 = puVar6[0x3f];
            puVar20[0x3e] = puVar6[0x3e];
            puVar20[0x3d] = uVar43;
            puVar20[0x40] = uVar44;
            puVar20[0x3f] = uVar42;
            uVar43 = puVar6[0x41];
            puVar20[0x42] = puVar6[0x42];
            puVar20[0x41] = uVar43;
          }
          else {
            puVar20[0x3d] = puVar6[0x3d];
            puVar20[0x3e] = lVar22;
            uVar43 = puVar6[0x40];
            puVar20[0x3f] = puVar6[0x3f];
            puVar20[0x40] = uVar43;
            puVar20[0x41] = puVar6[0x41];
            uVar42 = puVar6[0x42];
            puVar20[0x42] = uVar42;
            _swift_bridgeObjectRetain(lVar22);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
          }
          *(undefined1 *)(puVar20 + 0x43) = *(undefined1 *)(puVar6 + 0x43);
          lVar22 = puVar6[0x45];
          if (lVar22 == 0) {
            uVar43 = puVar6[0x44];
            uVar44 = puVar6[0x47];
            uVar42 = puVar6[0x46];
            puVar20[0x45] = puVar6[0x45];
            puVar20[0x44] = uVar43;
            puVar20[0x47] = uVar44;
            puVar20[0x46] = uVar42;
            uVar43 = puVar6[0x48];
            puVar20[0x49] = puVar6[0x49];
            puVar20[0x48] = uVar43;
            puVar20[0x4a] = puVar6[0x4a];
          }
          else {
            puVar20[0x44] = puVar6[0x44];
            puVar20[0x45] = lVar22;
            puVar20[0x46] = puVar6[0x46];
            uVar43 = puVar6[0x47];
            puVar20[0x47] = uVar43;
            puVar20[0x48] = puVar6[0x48];
            uVar42 = puVar6[0x49];
            puVar20[0x49] = uVar42;
            puVar20[0x4a] = puVar6[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar20[0x4b] = puVar6[0x4b];
          _swift_bridgeObjectRetain();
        }
        (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
      }
      else {
        lVar21 = 0x112db3cc8;
        func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
        _memcpy(puVar18,puVar6,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
      }
      uVar43 = *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x3c));
      *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x3c)) = uVar43;
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x40));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x40));
      lVar21 = 0;
      FUN_104750be8();
      lVar32 = *(long *)(lVar21 + -8);
      pcVar33 = *(code **)(lVar32 + 0x30);
      _swift_bridgeObjectRetain(uVar43);
      puVar20 = puVar6;
      (*pcVar33)(puVar6,1,lVar21);
      if ((int)puVar20 == 0) {
        uVar43 = puVar6[1];
        *puVar18 = *puVar6;
        puVar18[1] = uVar43;
        puVar18[2] = puVar6[2];
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x18));
        puVar9 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x18));
        _swift_bridgeObjectRetain();
        puVar23 = puVar9;
        (*pcVar37)(puVar9,1,lVar19);
        if ((int)puVar23 == 0) {
          uVar43 = puVar9[1];
          *puVar20 = *puVar9;
          puVar20[1] = uVar43;
          uVar43 = puVar9[3];
          puVar20[2] = puVar9[2];
          puVar20[3] = uVar43;
          uVar42 = puVar9[5];
          puVar20[4] = puVar9[4];
          puVar20[5] = uVar42;
          uVar44 = puVar9[7];
          puVar20[6] = puVar9[6];
          puVar20[7] = uVar44;
          puVar20[8] = puVar9[8];
          lVar22 = puVar9[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
          _swift_bridgeObjectRetain(uVar44);
          if (lVar22 == 1) {
            uVar43 = puVar9[9];
            puVar20[10] = puVar9[10];
            puVar20[9] = uVar43;
            uVar43 = puVar9[0xb];
            puVar20[0xc] = puVar9[0xc];
            puVar20[0xb] = uVar43;
            uVar43 = puVar9[0xd];
            puVar20[0xe] = puVar9[0xe];
            puVar20[0xd] = uVar43;
            puVar20[0xf] = puVar9[0xf];
          }
          else {
            lVar38 = puVar9[0xb];
            if (lVar38 == 1) {
              uVar43 = puVar9[9];
              puVar20[10] = puVar9[10];
              puVar20[9] = uVar43;
              uVar43 = puVar9[0xb];
              puVar20[0xc] = puVar9[0xc];
              puVar20[0xb] = uVar43;
              puVar20[0xd] = puVar9[0xd];
            }
            else {
              uVar43 = puVar9[9];
              puVar20[10] = puVar9[10];
              puVar20[9] = uVar43;
              uVar43 = puVar9[0xc];
              uVar42 = puVar9[0xd];
              puVar20[0xb] = lVar38;
              puVar20[0xc] = uVar43;
              puVar20[0xd] = uVar42;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar42);
            }
            puVar20[0xe] = puVar9[0xe];
            puVar20[0xf] = lVar22;
            _swift_bridgeObjectRetain(lVar22);
          }
          uVar43 = puVar9[0x11];
          puVar20[0x10] = puVar9[0x10];
          puVar20[0x11] = uVar43;
          uVar42 = puVar9[0x13];
          puVar20[0x12] = puVar9[0x12];
          puVar20[0x13] = uVar42;
          lVar22 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
          lVar38 = (long)puVar9 + (long)*(int *)(lVar19 + 0x34);
          lVar29 = 0;
          FUN_104742f28();
          lVar35 = *(long *)(lVar29 + -8);
          pcVar37 = *(code **)(lVar35 + 0x30);
          _swift_bridgeObjectRetain(uVar43);
          _swift_bridgeObjectRetain(uVar42);
          lVar30 = lVar38;
          (*pcVar37)(lVar38,1,lVar29);
          if ((int)lVar30 == 0) {
            lVar30 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar38,lVar30);
            puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
            puVar10 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x14));
            uVar43 = puVar10[1];
            *puVar23 = *puVar10;
            puVar23[1] = uVar43;
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x18));
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x1c));
            puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
            puVar10 = (undefined8 *)(lVar38 + *(int *)(lVar29 + 0x20));
            *puVar23 = *puVar10;
            *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar10 + 1);
            *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
                 *(undefined1 *)(lVar38 + *(int *)(lVar29 + 0x24));
            pcVar37 = *(code **)(lVar35 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar37)(lVar22,0,1,lVar29);
          }
          else {
            lVar30 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar22,lVar38,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
          puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar19 + 0x38));
          uVar43 = *puVar10;
          puVar23[1] = puVar10[1];
          *puVar23 = uVar43;
          uVar43 = *(undefined8 *)((long)puVar10 + 9);
          *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar10 + 0x11);
          *(undefined8 *)((long)puVar23 + 9) = uVar43;
          (**(code **)(lVar31 + 0x38))(puVar20,0,1);
        }
        else {
          lVar19 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar20,puVar9,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
        }
        lVar19 = 0;
        FUN_104754770();
        puVar20 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x14));
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar19 + 0x14));
        if (puVar9[0x18] == 1) {
          _memcpy(puVar20,puVar9,0x260);
        }
        else {
          lVar19 = puVar9[1];
          if (lVar19 == 1) {
            uVar43 = *puVar9;
            puVar20[1] = puVar9[1];
            *puVar20 = uVar43;
            puVar20[2] = puVar9[2];
          }
          else {
            *puVar20 = *puVar9;
            puVar20[1] = lVar19;
            uVar43 = puVar9[2];
            puVar20[2] = uVar43;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
          }
          uVar40 = puVar9[5];
          if (uVar40 >> 0x3c == 0xb) {
            uVar43 = puVar9[3];
            puVar20[4] = puVar9[4];
            puVar20[3] = uVar43;
            puVar20[5] = puVar9[5];
          }
          else {
            puVar20[3] = puVar9[3];
            if (uVar40 >> 0x3c < 0xf) {
              uVar43 = puVar9[4];
              func_0x00010006c00c(uVar43,uVar40);
              puVar20[4] = uVar43;
              puVar20[5] = uVar40;
            }
            else {
              uVar43 = puVar9[4];
              puVar20[5] = puVar9[5];
              puVar20[4] = uVar43;
            }
          }
          *(undefined2 *)(puVar20 + 6) = *(undefined2 *)(puVar9 + 6);
          puVar20[7] = puVar9[7];
          lVar19 = puVar9[9];
          if (lVar19 == 1) {
            uVar43 = puVar9[0x10];
            uVar44 = puVar9[0x13];
            uVar42 = puVar9[0x12];
            puVar20[0x11] = puVar9[0x11];
            puVar20[0x10] = uVar43;
            puVar20[0x13] = uVar44;
            puVar20[0x12] = uVar42;
            uVar43 = puVar9[0x14];
            puVar20[0x15] = puVar9[0x15];
            puVar20[0x14] = uVar43;
            uVar43 = *(undefined8 *)((long)puVar9 + 0xaa);
            *(undefined8 *)((long)puVar20 + 0xb2) = *(undefined8 *)((long)puVar9 + 0xb2);
            *(undefined8 *)((long)puVar20 + 0xaa) = uVar43;
            uVar43 = puVar9[8];
            uVar44 = puVar9[0xb];
            uVar42 = puVar9[10];
            puVar20[9] = puVar9[9];
            puVar20[8] = uVar43;
            puVar20[0xb] = uVar44;
            puVar20[10] = uVar42;
            uVar43 = puVar9[0xc];
            uVar44 = puVar9[0xf];
            uVar42 = puVar9[0xe];
            puVar20[0xd] = puVar9[0xd];
            puVar20[0xc] = uVar43;
            puVar20[0xf] = uVar44;
            puVar20[0xe] = uVar42;
          }
          else {
            puVar20[8] = puVar9[8];
            puVar20[9] = lVar19;
            uVar46 = puVar9[0xb];
            puVar20[10] = puVar9[10];
            puVar20[0xb] = uVar46;
            uVar43 = puVar9[0xc];
            uVar42 = puVar9[0xd];
            puVar20[0xc] = uVar43;
            puVar20[0xd] = uVar42;
            uVar42 = puVar9[0xe];
            uVar44 = puVar9[0xf];
            puVar20[0xe] = uVar42;
            puVar20[0xf] = uVar44;
            uVar44 = puVar9[0x10];
            uVar11 = puVar9[0x11];
            puVar20[0x10] = uVar44;
            puVar20[0x11] = uVar11;
            lVar19 = puVar9[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar46);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
            _swift_bridgeObjectRetain(uVar44);
            _swift_bridgeObjectRetain(uVar11);
            if (lVar19 == 1) {
              uVar43 = puVar9[0x12];
              puVar20[0x13] = puVar9[0x13];
              puVar20[0x12] = uVar43;
            }
            else {
              puVar20[0x12] = puVar9[0x12];
              puVar20[0x13] = lVar19;
              _swift_bridgeObjectRetain(lVar19);
            }
            uVar43 = puVar9[0x15];
            puVar20[0x14] = puVar9[0x14];
            puVar20[0x15] = uVar43;
            puVar20[0x16] = puVar9[0x16];
            *(undefined2 *)(puVar20 + 0x17) = *(undefined2 *)(puVar9 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar20 + 0xba) = *(undefined2 *)((long)puVar9 + 0xba);
          if (puVar9[0x18] == 0) {
            lVar19 = puVar9[0x18];
            uVar42 = puVar9[0x1b];
            uVar43 = puVar9[0x1a];
            puVar20[0x19] = puVar9[0x19];
            puVar20[0x18] = lVar19;
            puVar20[0x1b] = uVar42;
            puVar20[0x1a] = uVar43;
            uVar43 = puVar9[0x1c];
            uVar44 = puVar9[0x1f];
            uVar42 = puVar9[0x1e];
            puVar20[0x1d] = puVar9[0x1d];
            puVar20[0x1c] = uVar43;
            puVar20[0x1f] = uVar44;
            puVar20[0x1e] = uVar42;
          }
          else {
            puVar20[0x18] = puVar9[0x18];
            uVar43 = puVar9[0x19];
            puVar20[0x1a] = puVar9[0x1a];
            puVar20[0x19] = uVar43;
            uVar43 = puVar9[0x1c];
            puVar20[0x1b] = puVar9[0x1b];
            puVar20[0x1c] = uVar43;
            lVar19 = puVar9[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            if (lVar19 == 0) {
              uVar43 = puVar9[0x1d];
              puVar20[0x1e] = puVar9[0x1e];
              puVar20[0x1d] = uVar43;
              puVar20[0x1f] = puVar9[0x1f];
            }
            else {
              puVar20[0x1d] = puVar9[0x1d];
              puVar20[0x1e] = lVar19;
              uVar43 = puVar9[0x1f];
              puVar20[0x1f] = uVar43;
              _swift_bridgeObjectRetain(lVar19);
              _swift_bridgeObjectRetain(uVar43);
            }
          }
          *(undefined1 *)(puVar20 + 0x20) = *(undefined1 *)(puVar9 + 0x20);
          uVar43 = puVar9[0x22];
          puVar20[0x21] = puVar9[0x21];
          puVar20[0x22] = uVar43;
          uVar43 = puVar9[0x24];
          puVar20[0x23] = puVar9[0x23];
          puVar20[0x24] = uVar43;
          uVar42 = puVar9[0x25];
          puVar20[0x26] = puVar9[0x26];
          puVar20[0x25] = uVar42;
          uVar42 = *(undefined8 *)((long)puVar9 + 0x132);
          *(undefined8 *)((long)puVar20 + 0x13a) = *(undefined8 *)((long)puVar9 + 0x13a);
          *(undefined8 *)((long)puVar20 + 0x132) = uVar42;
          lVar19 = puVar9[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar43);
          if (lVar19 == 0) {
            uVar43 = puVar9[0x29];
            uVar44 = puVar9[0x2c];
            uVar42 = puVar9[0x2b];
            puVar20[0x2a] = puVar9[0x2a];
            puVar20[0x29] = uVar43;
            puVar20[0x2c] = uVar44;
            puVar20[0x2b] = uVar42;
          }
          else {
            puVar20[0x29] = puVar9[0x29];
            puVar20[0x2a] = lVar19;
            uVar43 = puVar9[0x2c];
            puVar20[0x2b] = puVar9[0x2b];
            puVar20[0x2c] = uVar43;
            _swift_bridgeObjectRetain(lVar19);
            _swift_bridgeObjectRetain(uVar43);
          }
          uVar43 = puVar9[0x2e];
          puVar20[0x2d] = puVar9[0x2d];
          puVar20[0x2e] = uVar43;
          uVar43 = puVar9[0x2f];
          uVar42 = puVar9[0x30];
          *(undefined1 *)(puVar20 + 0x31) = *(undefined1 *)(puVar9 + 0x31);
          uVar40 = puVar9[0x36];
          uVar15 = *(uint5 *)(puVar9 + 0x39);
          puVar20[0x2f] = uVar43;
          puVar20[0x30] = uVar42;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar42);
          if ((((uVar40 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar43 = puVar9[0x32];
            uVar44 = puVar9[0x35];
            uVar42 = puVar9[0x34];
            puVar20[0x33] = puVar9[0x33];
            puVar20[0x32] = uVar43;
            puVar20[0x35] = uVar44;
            puVar20[0x34] = uVar42;
            uVar43 = puVar9[0x36];
            puVar20[0x37] = puVar9[0x37];
            puVar20[0x36] = uVar43;
            uVar43 = *(undefined8 *)((long)puVar9 + 0x1bd);
            *(undefined8 *)((long)puVar20 + 0x1c5) = *(undefined8 *)((long)puVar9 + 0x1c5);
            *(undefined8 *)((long)puVar20 + 0x1bd) = uVar43;
          }
          else {
            uVar43 = puVar9[0x32];
            uVar46 = puVar9[0x33];
            uVar42 = puVar9[0x34];
            uVar11 = puVar9[0x35];
            uVar44 = puVar9[0x37];
            uVar12 = puVar9[0x38];
            func_0x00010179a2b8(uVar43,uVar46,uVar42,uVar11,uVar40,uVar44,uVar12,(ulong)uVar15);
            puVar20[0x32] = uVar43;
            puVar20[0x33] = uVar46;
            puVar20[0x34] = uVar42;
            puVar20[0x35] = uVar11;
            puVar20[0x36] = uVar40;
            puVar20[0x37] = uVar44;
            puVar20[0x38] = uVar12;
            *(char *)((long)puVar20 + 0x1cc) = (char)(uVar15 >> 0x20);
            *(int *)(puVar20 + 0x39) = (int)uVar15;
          }
          *(undefined1 *)((long)puVar20 + 0x1cd) = *(undefined1 *)((long)puVar9 + 0x1cd);
          uVar43 = puVar9[0x3b];
          puVar20[0x3a] = puVar9[0x3a];
          puVar20[0x3b] = uVar43;
          *(undefined1 *)(puVar20 + 0x3c) = *(undefined1 *)(puVar9 + 0x3c);
          lVar19 = puVar9[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar19 == 0) {
            uVar43 = puVar9[0x3d];
            uVar44 = puVar9[0x40];
            uVar42 = puVar9[0x3f];
            puVar20[0x3e] = puVar9[0x3e];
            puVar20[0x3d] = uVar43;
            puVar20[0x40] = uVar44;
            puVar20[0x3f] = uVar42;
            uVar43 = puVar9[0x41];
            puVar20[0x42] = puVar9[0x42];
            puVar20[0x41] = uVar43;
          }
          else {
            puVar20[0x3d] = puVar9[0x3d];
            puVar20[0x3e] = lVar19;
            uVar43 = puVar9[0x40];
            puVar20[0x3f] = puVar9[0x3f];
            puVar20[0x40] = uVar43;
            puVar20[0x41] = puVar9[0x41];
            uVar42 = puVar9[0x42];
            puVar20[0x42] = uVar42;
            _swift_bridgeObjectRetain(lVar19);
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
          }
          *(undefined1 *)(puVar20 + 0x43) = *(undefined1 *)(puVar9 + 0x43);
          lVar19 = puVar9[0x45];
          if (lVar19 == 0) {
            uVar43 = puVar9[0x44];
            uVar44 = puVar9[0x47];
            uVar42 = puVar9[0x46];
            puVar20[0x45] = puVar9[0x45];
            puVar20[0x44] = uVar43;
            puVar20[0x47] = uVar44;
            puVar20[0x46] = uVar42;
            uVar43 = puVar9[0x48];
            puVar20[0x49] = puVar9[0x49];
            puVar20[0x48] = uVar43;
            puVar20[0x4a] = puVar9[0x4a];
          }
          else {
            puVar20[0x44] = puVar9[0x44];
            puVar20[0x45] = lVar19;
            puVar20[0x46] = puVar9[0x46];
            uVar43 = puVar9[0x47];
            puVar20[0x47] = uVar43;
            puVar20[0x48] = puVar9[0x48];
            uVar42 = puVar9[0x49];
            puVar20[0x49] = uVar42;
            puVar20[0x4a] = puVar9[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar43);
            _swift_bridgeObjectRetain(uVar42);
          }
          puVar20[0x4b] = puVar9[0x4b];
          _swift_bridgeObjectRetain();
        }
        puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x1c));
        puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x1c));
        uVar43 = *puVar6;
        uVar42 = puVar6[1];
        func_0x00010006c00c(uVar43,uVar42);
        *puVar20 = uVar43;
        puVar20[1] = uVar42;
        (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
      }
      else {
        lVar19 = 0x112db3cc0;
        func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
        _memcpy(puVar18,puVar6,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x44)) =
           *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x44));
      *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x48)) =
           *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x48));
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar39 + 0x4c));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar39 + 0x4c));
      uVar40 = puVar5[1];
      if (uVar40 >> 0x3c < 0xf) {
        uVar43 = *puVar5;
        func_0x00010006c00c(uVar43,uVar40);
        *puVar18 = uVar43;
        puVar18[1] = uVar40;
      }
      else {
        uVar43 = *puVar5;
        puVar18[1] = puVar5[1];
        *puVar18 = uVar43;
      }
      (**(code **)(lVar36 + 0x38))(puVar17,0,1,lVar39);
    }
    else {
      lVar39 = 0x112dcbf08;
      func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
      _memcpy(puVar17,puVar5,*(undefined8 *)(*(long *)(lVar39 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x18));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x1c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x1c));
    puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x20));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x20));
    *(undefined2 *)(puVar17 + 4) = *(undefined2 *)(puVar2 + 4);
    uVar44 = *puVar2;
    uVar42 = puVar2[3];
    uVar43 = puVar2[2];
    puVar17[1] = puVar2[1];
    *puVar17 = uVar44;
    puVar17[3] = uVar42;
    puVar17[2] = uVar43;
    pcVar37 = *(code **)(lVar45 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar37)(puVar1,0,1,lVar16);
  }
  else {
    lVar39 = 0x112db3a00;
    func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar39 + -8) + 0x40));
  }
  iVar13 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined1 *)((long)param_1 + (long)iVar13) = *(undefined1 *)((long)param_2 + (long)iVar13);
  iVar13 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar13);
  uVar43 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar43;
  iVar13 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar13) = *(undefined8 *)((long)param_2 + (long)iVar13);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  lVar39 = puVar2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar43);
  if (lVar39 == 1) {
    uVar43 = *puVar2;
    uVar44 = puVar2[3];
    uVar42 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar43;
    puVar1[3] = uVar44;
    puVar1[2] = uVar42;
    puVar1[4] = puVar2[4];
  }
  else {
    *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = lVar39;
    uVar43 = puVar2[4];
    puVar1[3] = puVar2[3];
    puVar1[4] = uVar43;
    _swift_bridgeObjectRetain(lVar39);
    _swift_bridgeObjectRetain(uVar43);
  }
  iVar13 = *(int *)(param_3 + 0x4c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar43 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar43;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar13);
  uVar43 = *puVar2;
  uVar44 = puVar2[3];
  uVar42 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar43;
  puVar1[3] = uVar44;
  puVar1[2] = uVar42;
  uVar44 = puVar2[8];
  uVar42 = puVar2[0xb];
  uVar43 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar44;
  puVar1[0xb] = uVar42;
  puVar1[10] = uVar43;
  uVar44 = puVar2[4];
  uVar42 = puVar2[7];
  uVar43 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar44;
  puVar1[7] = uVar42;
  puVar1[6] = uVar43;
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(puVar2 + 0x12);
  uVar43 = puVar2[0xe];
  uVar44 = puVar2[0x11];
  uVar42 = puVar2[0x10];
  puVar1[0xf] = puVar2[0xf];
  puVar1[0xe] = uVar43;
  puVar1[0x11] = uVar44;
  puVar1[0x10] = uVar42;
  uVar43 = puVar2[0xc];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar43;
  iVar13 = *(int *)(param_3 + 0x54);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(puVar2 + 0x12);
  uVar44 = *puVar2;
  uVar42 = puVar2[3];
  uVar43 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar44;
  puVar1[3] = uVar42;
  puVar1[2] = uVar43;
  uVar44 = puVar2[8];
  uVar42 = puVar2[0xb];
  uVar43 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar44;
  puVar1[0xb] = uVar42;
  puVar1[10] = uVar43;
  uVar44 = puVar2[4];
  uVar42 = puVar2[7];
  uVar43 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar44;
  puVar1[7] = uVar42;
  puVar1[6] = uVar43;
  uVar43 = puVar2[0xe];
  uVar44 = puVar2[0x11];
  uVar42 = puVar2[0x10];
  puVar1[0xf] = puVar2[0xf];
  puVar1[0xe] = uVar43;
  puVar1[0x11] = uVar44;
  puVar1[0x10] = uVar42;
  uVar43 = puVar2[0xc];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar43;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar13);
  lVar39 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (lVar39 == 1) {
    uVar43 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar43;
  }
  else {
    if (lVar39 == 2) {
      uVar43 = *puVar2;
      uVar44 = puVar2[3];
      uVar42 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar43;
      puVar1[3] = uVar44;
      puVar1[2] = uVar42;
      goto LAB_1046e0e74;
    }
    *puVar1 = *puVar2;
    puVar1[1] = lVar39;
    _swift_bridgeObjectRetain(lVar39);
  }
  lVar39 = puVar2[3];
  if (lVar39 == 1) {
    uVar43 = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar43;
  }
  else {
    puVar1[2] = puVar2[2];
    puVar1[3] = lVar39;
    _swift_bridgeObjectRetain();
  }
LAB_1046e0e74:
  iVar13 = *(int *)(param_3 + 0x5c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar13);
  uVar43 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar43;
  iVar13 = *(int *)(param_3 + 100);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x60));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  uVar43 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar43;
  *(undefined8 *)((long)param_1 + (long)iVar13) = *(undefined8 *)((long)param_2 + (long)iVar13);
  iVar13 = *(int *)(param_3 + 0x6c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  uVar42 = *(undefined8 *)((long)puVar2 + 0x3a);
  *(undefined8 *)((long)puVar1 + 0x42) = *(undefined8 *)((long)puVar2 + 0x42);
  *(undefined8 *)((long)puVar1 + 0x3a) = uVar42;
  uVar46 = puVar2[4];
  uVar44 = puVar2[7];
  uVar42 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar46;
  puVar1[7] = uVar44;
  puVar1[6] = uVar42;
  uVar42 = *puVar2;
  uVar46 = puVar2[3];
  uVar44 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar42;
  puVar1[3] = uVar46;
  puVar1[2] = uVar44;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar13);
  uVar40 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar43);
  if (uVar40 >> 0x3c < 0xf) {
    uVar43 = *puVar2;
    func_0x00010006c00c(uVar43,uVar40);
    *puVar1 = uVar43;
    puVar1[1] = uVar40;
  }
  else {
    uVar43 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar43;
  }
  iVar13 = *(int *)(param_3 + 0x74);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  uVar44 = puVar2[8];
  uVar42 = puVar2[0xb];
  uVar43 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar44;
  puVar1[0xb] = uVar42;
  puVar1[10] = uVar43;
  uVar44 = puVar2[4];
  uVar42 = puVar2[7];
  uVar43 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar44;
  puVar1[7] = uVar42;
  puVar1[6] = uVar43;
  uVar44 = puVar2[0x10];
  uVar42 = puVar2[0x13];
  uVar43 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar44;
  puVar1[0x13] = uVar42;
  puVar1[0x12] = uVar43;
  uVar44 = puVar2[0xc];
  uVar42 = puVar2[0xf];
  uVar43 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar44;
  puVar1[0xf] = uVar42;
  puVar1[0xe] = uVar43;
  uVar43 = *(undefined8 *)((long)puVar2 + 0xc9);
  *(undefined8 *)((long)puVar1 + 0xd1) = *(undefined8 *)((long)puVar2 + 0xd1);
  *(undefined8 *)((long)puVar1 + 0xc9) = uVar43;
  uVar43 = puVar2[0x16];
  uVar44 = puVar2[0x19];
  uVar42 = puVar2[0x18];
  puVar1[0x17] = puVar2[0x17];
  puVar1[0x16] = uVar43;
  puVar1[0x19] = uVar44;
  puVar1[0x18] = uVar42;
  uVar43 = puVar2[0x14];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar43;
  uVar43 = *puVar2;
  uVar44 = puVar2[3];
  uVar42 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar43;
  puVar1[3] = uVar44;
  puVar1[2] = uVar42;
  *(undefined1 *)((long)param_1 + (long)iVar13) = *(undefined1 *)((long)param_2 + (long)iVar13);
  iVar13 = *(int *)(param_3 + 0x7c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined1 *)((long)param_1 + (long)iVar13) = *(undefined1 *)((long)param_2 + (long)iVar13);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x80));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  uVar43 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar43;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104707524; end: 10470753b;  */

void FUN_104707524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10470753c; end: 104707647;  */

void FUN_10470753c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_118 = &UNK_10dd2f418;
  puStack_100 = &UNK_10dd2f430;
  puStack_f8 = &UNK_10dd2f418;
  puStack_f0 = &UNK_10dd2f418;
  lVar2 = 0x13f;
  puStack_110 = puVar1;
  puStack_108 = puVar1;
  FUN_104707648();
  if (param_2 < 0x40) {
    lStack_e8 = *(long *)(lVar2 + -8) + 0x40;
    puStack_e0 = &UNK_10dd2f448;
    puStack_d8 = &UNK_10dd2f448;
    puStack_d0 = &UNK_10dd2f460;
    puStack_c8 = &UNK_10dd2f418;
    puStack_b0 = &UNK_10dd2f478;
    puStack_a8 = &UNK_10dd2f418;
    puStack_a0 = &UNK_10dd2f490;
    puStack_98 = &UNK_10dd2f490;
    puStack_90 = &UNK_10dd2f4a8;
    puStack_88 = &UNK_10dd2f4c0;
    puStack_80 = &UNK_10dd2f418;
    puStack_68 = &UNK_10dd2f4d8;
    puStack_60 = &UNK_10dd2f4f0;
    puStack_78 = &UNK_10dd2f418;
    puStack_58 = &UNK_10dd2f508;
    puStack_50 = &UNK_10dd2f448;
    puStack_40 = &UNK_10dd2f448;
    puStack_38 = &UNK_10dd2f418;
    puStack_c0 = puVar1;
    puStack_b8 = puVar1;
    puStack_70 = puVar1;
    puStack_48 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0x1d,&puStack_118,param_1 + 0x10);
  }
  return;
}



/* Entry: 104707648; end: 1047078fb;  */

void FUN_104707648(long param_1)

{
  long lVar1;
  
  if (lRam000000011308dc08 == 0) {
    lVar1 = 0xff;
    FUN_10477ea9c();
    __sSqMa();
    if (lVar1 == 0) {
      lRam000000011308dc08 = param_1;
    }
  }
  return;
}



/* Entry: 1047078fc; end: 104707917;  */

void FUN_1047078fc(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104707918; end: 104707a57;  */

void FUN_104707918(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  dVar3 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar3 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  return;
}



/* Entry: 104707a58; end: 104707a5f;  */

void FUN_104707a58(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  dVar3 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar3 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104707a60; end: 104707a97;  */

void FUN_104707a60(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104707918(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104707a98; end: 104707adb;  */

uint FUN_104707a98(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_104707adc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104707adc; end: 104707b8f;  */

bool FUN_104707adc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  if (((param_1[2] == param_2[2]) && (param_1[3] == param_2[3])) &&
     ((double)param_1[4] == (double)param_2[4])) {
    return (int)param_1[5] == (int)param_2[5];
  }
  return false;
}



/* Entry: 104707b90; end: 104707b93;  */

void FUN_104707b90(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f570;
  _swift_getWitnessTable(&UNK_10dd2f570,&UNK_11079ba50);
  puRam000000011308dcb8 = puVar1;
  return;
}



/* Entry: 104707b94; end: 104707bd3;  */

void FUN_104707b94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f570;
  _swift_getWitnessTable(&UNK_10dd2f570,&UNK_11079ba50);
  puRam000000011308dcb8 = puVar1;
  return;
}



/* Entry: 104707bd4; end: 104707bff;  */

long FUN_104707bd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104707c00; end: 104707c07;  */

void FUN_104707c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104707c08; end: 104707c3b;  */

undefined8 * FUN_104707c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104707c3c; end: 104707ca7;  */

undefined8 * FUN_104707c3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 104707ca8; end: 104707cf3;  */

undefined8 * FUN_104707ca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 104707cf4; end: 104707dc3;  */

int FUN_104707cf4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
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



/* Entry: 104707dc4; end: 104707e43;  */

uint FUN_104707dc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_104707e44(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104707e44; end: 104707f3f;  */

bool FUN_104707e44(double *param_1,double *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
        ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))
       && (param_1[8] == param_2[8])))) &&
     ((((param_1[9] == param_2[9] && (param_1[10] == param_2[10])) && (param_1[0xb] == param_2[0xb])
       ) && ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))))) {
    return *(int *)(param_1 + 0xe) == *(int *)(param_2 + 0xe);
  }
  return false;
}



/* Entry: 104707f40; end: 104707f6b;  */

long FUN_104707f40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104707f6c; end: 104707fd3;  */

int FUN_104707f6c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104707fd4; end: 104708083;  */

void FUN_104707fd4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  return;
}



/* Entry: 104708084; end: 1047080bf;  */

void FUN_104708084(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104707fd4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047080c0; end: 1047080c3;  */

void FUN_1047080c0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  return;
}



/* Entry: 1047080c4; end: 1047080fb;  */

void FUN_1047080c4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104707fd4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047080fc; end: 104708143;  */

uint FUN_1047080fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_104708144(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104708144; end: 1047081eb;  */

undefined8 FUN_104708144(long *param_1,long *param_2)

{
  bool bVar1;
  
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  if ((char)param_1[3] == '\x01') {
    if ((char)param_2[3] != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if (((char)param_2[3] != '\x01') &&
       (bVar1 = false, !NAN((double)param_1[2]) && !NAN((double)param_2[2]))) {
      bVar1 = (double)param_1[2] == (double)param_2[2];
    }
    if (!bVar1) {
      return 0;
    }
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] == '\x01') {
      return 1;
    }
  }
  else if (((char)param_2[5] != '\x01') && (param_1[4] == param_2[4])) {
    return 1;
  }
  return 0;
}



/* Entry: 1047081ec; end: 10470822b;  */

void FUN_1047081ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f660;
  _swift_getWitnessTable(&UNK_10dd2f660,&UNK_11079bbc8);
  puRam000000011308dcc0 = puVar1;
  return;
}



/* Entry: 10470822c; end: 104708257;  */

long FUN_10470822c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104708258; end: 1047082bf;  */

int FUN_104708258(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047082c0; end: 10470839f;  */

void FUN_1047082c0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = unaff_x20[8];
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[9]);
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xb]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xc]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xd]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x10]);
  uVar1 = unaff_x20[0x12];
  __ss6HasherV8_combineyySuF(unaff_x20[0x11]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[0x13]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x14]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x15]);
  return;
}



/* Entry: 1047083a0; end: 1047083db;  */

void FUN_1047083a0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047082c0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047083dc; end: 1047083df;  */

void FUN_1047083dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = unaff_x20[8];
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[9]);
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xb]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xc]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xd]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x10]);
  uVar1 = unaff_x20[0x12];
  __ss6HasherV8_combineyySuF(unaff_x20[0x11]);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[0x13]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x14]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x15]);
  return;
}



/* Entry: 1047083e0; end: 104708417;  */

void FUN_1047083e0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047082c0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104708418; end: 1047084a7;  */

uint FUN_104708418(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_28 = param_2[0x15];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1047084a8(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1047084a8; end: 10470860b;  */

bool FUN_1047084a8(int *param_1,int *param_2)

{
  ulong uVar1;
  
  if (((*param_1 != *param_2) || (param_1[2] != param_2[2] || param_1[4] != param_2[4])) ||
     (param_1[6] != param_2[6])) {
    return false;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000104709bb0(uVar1,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                      *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10),
                      *(undefined8 *)(param_2 + 0xc));
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0xe);
    func_0x0001047099d8(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0xe),
                        *(undefined8 *)(param_2 + 0x10));
    if ((((((uVar1 & 1) != 0) && (param_1[0x12] == param_2[0x12])) &&
         ((param_1[0x14] == param_2[0x14] &&
          ((param_1[0x16] == param_2[0x16] && (param_1[0x18] == param_2[0x18])))))) &&
        (param_1[0x1a] == param_2[0x1a])) &&
       (((param_1[0x1c] == param_2[0x1c] && (param_1[0x1e] == param_2[0x1e])) &&
        (param_1[0x20] == param_2[0x20])))) {
      uVar1 = *(ulong *)(param_1 + 0x22);
      func_0x00010470a0a0(uVar1,*(undefined8 *)(param_1 + 0x24),*(undefined8 *)(param_2 + 0x22),
                          *(undefined8 *)(param_2 + 0x24));
      if ((((uVar1 & 1) != 0) && (param_1[0x26] == param_2[0x26])) &&
         (param_1[0x28] == param_2[0x28])) {
        return param_1[0x2a] == param_2[0x2a];
      }
    }
  }
  return false;
}



/* Entry: 10470860c; end: 10470860f;  */

void FUN_10470860c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f6e4;
  _swift_getWitnessTable(&UNK_10dd2f6e4,&UNK_11079bc88);
  puRam000000011308dcc8 = puVar1;
  return;
}



/* Entry: 104708610; end: 10470864f;  */

void FUN_104708610(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f6e4;
  _swift_getWitnessTable(&UNK_10dd2f6e4,&UNK_11079bc88);
  puRam000000011308dcc8 = puVar1;
  return;
}



/* Entry: 104708650; end: 10470867b;  */

long FUN_104708650(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10470867c; end: 104708703;  */

int FUN_10470867c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x2c] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104708704; end: 104708813;  */

void FUN_104708704(void)

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
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104708814; end: 10470884f;  */

bool FUN_104708814(undefined8 *param_1,undefined8 *param_2)

{
  return (int)*param_1 == (int)*param_2 &&
         ((int)param_1[1] == (int)param_2[1] && (int)param_1[2] == (int)param_2[2]);
}



/* Entry: 104708850; end: 10470888f;  */

void FUN_104708850(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f760;
  _swift_getWitnessTable(&UNK_10dd2f760,&UNK_11079bd78);
  puRam000000011308dcd0 = puVar1;
  return;
}



/* Entry: 104708890; end: 1047088eb;  */

int FUN_104708890(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047088ec; end: 104708997;  */

void FUN_1047088ec(void)

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



/* Entry: 104708998; end: 10470899b;  */

void FUN_104708998(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f7f0;
  _swift_getWitnessTable(&UNK_10dd2f7f0,&UNK_11079bde0);
  puRam000000011308dcd8 = puVar1;
  return;
}



/* Entry: 10470899c; end: 1047089db;  */

void FUN_10470899c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f7f0;
  _swift_getWitnessTable(&UNK_10dd2f7f0,&UNK_11079bde0);
  puRam000000011308dcd8 = puVar1;
  return;
}



/* Entry: 1047089dc; end: 1047089ff;  */

bool FUN_1047089dc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104708a00; end: 104708aab;  */

void FUN_104708a00(void)

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



/* Entry: 104708aac; end: 104708aaf;  */

void FUN_104708aac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f880;
  _swift_getWitnessTable(&UNK_10dd2f880,&UNK_11079be40);
  puRam000000011308dce0 = puVar1;
  return;
}



/* Entry: 104708ab0; end: 104708aef;  */

void FUN_104708ab0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f880;
  _swift_getWitnessTable(&UNK_10dd2f880,&UNK_11079be40);
  puRam000000011308dce0 = puVar1;
  return;
}



/* Entry: 104708af0; end: 104708b13;  */

bool FUN_104708af0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104708b14; end: 104708c33;  */

void FUN_104708b14(void)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  FUN_1047082c0();
  uVar6 = *(ulong *)(unaff_x20 + 0xc0);
  cVar2 = *(char *)(unaff_x20 + 200);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  cVar3 = *(char *)(unaff_x20 + 0xd8);
  if (*(char *)(unaff_x20 + 0xb8) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (cVar2 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (cVar3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  return;
}



/* Entry: 104708c34; end: 104708c6f;  */

void FUN_104708c34(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104708b14(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104708c70; end: 104708c73;  */

void FUN_104708c70(void)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  FUN_1047082c0();
  uVar6 = *(ulong *)(unaff_x20 + 0xc0);
  cVar2 = *(char *)(unaff_x20 + 200);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  cVar3 = *(char *)(unaff_x20 + 0xd8);
  if (*(char *)(unaff_x20 + 0xb8) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (cVar2 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (cVar3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  return;
}



/* Entry: 104708c74; end: 104708cab;  */

void FUN_104708c74(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104708b14(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104708cac; end: 104708d73;  */

uint FUN_104708cac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
  uStack_1d8 = param_1[0x17];
  uStack_1e0 = param_1[0x16];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_1d0 = param_1[0x18];
  uStack_1c8 = (undefined1)param_1[0x19];
  uStack_1bf = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_1c7 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_1c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_28 = param_2[0x15];
  uStack_30 = param_2[0x14];
  uStack_1a8 = param_2[0x17];
  uStack_1b0 = param_2[0x16];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_1a0 = param_2[0x18];
  uStack_198 = (undefined1)param_2[0x19];
  uStack_18f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_2 + 0xc9);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  puVar2 = &uStack_180;
  FUN_1047084a8(puVar2,&uStack_d0);
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_104708144(&uStack_1e0,&uStack_1b0);
  }
  return uVar1 & 1;
}



/* Entry: 104708d74; end: 104708e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104708d74(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
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
  
  plVar4 = &lStack_120;
  uStack_110 = 0;
  uStack_108 = 1;
  uStack_100 = 0;
  uStack_f8 = 1;
  uStack_f0 = 0;
  uStack_e8 = 1;
  lVar1 = 0;
  FUN_1047cdac4();
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar2 = lVar1;
  _objc_allocWithZone();
  FUN_1047cbe84(0);
  _objc_allocWithZone();
  puVar3 = &uStack_e0;
  FUN_1047c986c();
  *(undefined8 **)(lVar2 + _DAT_11308f538) = puVar3;
  FUN_1047c92a8(0);
  _objc_allocWithZone();
  puVar3 = &uStack_110;
  FUN_1047c87cc();
  *(undefined8 **)(lVar2 + _DAT_11308f540) = puVar3;
  lStack_120 = lVar2;
  lStack_118 = lVar1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_init_1125d9248);
  puRam00000001138151d8 = (undefined1 *)plVar4;
  return;
}



/* Entry: 104708e54; end: 104708e93; +[SCAdSpec identity] */

void FUN_104708e54(void)

{
  if (lRam000000011308dce8 != -1) {
    _swift_once(0x11308dce8,FUN_104708d74);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151d8);
  return;
}



/* Entry: 104708e94; end: 104708e97;  */

void FUN_104708e94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f904;
  _swift_getWitnessTable(&UNK_10dd2f904,&UNK_11079bef8);
  puRam000000011308dcf0 = puVar1;
  return;
}



/* Entry: 104708e98; end: 104708ed7;  */

void FUN_104708e98(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f904;
  _swift_getWitnessTable(&UNK_10dd2f904,&UNK_11079bef8);
  puRam000000011308dcf0 = puVar1;
  return;
}



/* Entry: 104708ed8; end: 104708f03;  */

long FUN_104708ed8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104708f04; end: 104708f97;  */

int FUN_104708f04(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0xd9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104708f98; end: 1047090b7;  */

void FUN_104708f98(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (cVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047090b8; end: 1047090bb;  */

void FUN_1047090b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f980;
  _swift_getWitnessTable(&UNK_10dd2f980,&UNK_11079bfb0);
  puRam000000011308dcf8 = puVar1;
  return;
}



/* Entry: 1047090bc; end: 1047090fb;  */

void FUN_1047090bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dcf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2f980;
  _swift_getWitnessTable(&UNK_10dd2f980,&UNK_11079bfb0);
  puRam000000011308dcf8 = puVar1;
  return;
}



/* Entry: 1047090fc; end: 104709193;  */

undefined8 FUN_1047090fc(long *param_1,long *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  return 1;
}



/* Entry: 104709194; end: 1047092b3;  */

void FUN_104709194(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (cVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047092b4; end: 1047092b7;  */

void FUN_1047092b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fa10;
  _swift_getWitnessTable(&UNK_10dd2fa10,&UNK_11079c068);
  puRam000000011308dd00 = puVar1;
  return;
}



/* Entry: 1047092b8; end: 1047092f7;  */

void FUN_1047092b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fa10;
  _swift_getWitnessTable(&UNK_10dd2fa10,&UNK_11079c068);
  puRam000000011308dd00 = puVar1;
  return;
}



/* Entry: 1047092f8; end: 10470938f;  */

undefined8 FUN_1047092f8(long *param_1,long *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  return 1;
}



/* Entry: 104709390; end: 1047093ff;  */

void FUN_104709390(ulong param_1,char param_2)

{
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (param_2 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_1 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104709400; end: 10470940b;  */

void FUN_104709400(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if ((char)uVar1 == '\x01') {
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
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470940c; end: 1047094c7;  */

void FUN_10470940c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  if ((char)unaff_x20[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 1047094c8; end: 1047094cb;  */

void FUN_1047094c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2faa0;
  _swift_getWitnessTable(&UNK_10dd2faa0,&UNK_11079c120);
  puRam000000011308dd08 = puVar1;
  return;
}



/* Entry: 1047094cc; end: 10470950b;  */

void FUN_1047094cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2faa0;
  _swift_getWitnessTable(&UNK_10dd2faa0,&UNK_11079c120);
  puRam000000011308dd08 = puVar1;
  return;
}



/* Entry: 10470950c; end: 1047095a3;  */

undefined8 FUN_10470950c(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) != '\x01') && (bVar1 = false, !NAN(*param_1) && !NAN(*param_2))) {
      bVar1 = *param_1 == *param_2;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1047095a4; end: 10470964f;  */

void FUN_1047095a4(void)

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



/* Entry: 104709650; end: 104709653;  */

void FUN_104709650(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fb40;
  _swift_getWitnessTable(&UNK_10dd2fb40,&UNK_11079c180);
  puRam000000011308dd10 = puVar1;
  return;
}



/* Entry: 104709654; end: 104709693;  */

void FUN_104709654(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fb40;
  _swift_getWitnessTable(&UNK_10dd2fb40,&UNK_11079c180);
  puRam000000011308dd10 = puVar1;
  return;
}



/* Entry: 104709694; end: 1047096b7;  */

bool FUN_104709694(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1047096b8; end: 104709763;  */

void FUN_1047096b8(void)

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



/* Entry: 104709764; end: 104709767;  */

void FUN_104709764(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fbd0;
  _swift_getWitnessTable(&UNK_10dd2fbd0,&UNK_11079c1e0);
  puRam000000011308dd18 = puVar1;
  return;
}



/* Entry: 104709768; end: 1047097a7;  */

void FUN_104709768(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2fbd0;
  _swift_getWitnessTable(&UNK_10dd2fbd0,&UNK_11079c1e0);
  puRam000000011308dd18 = puVar1;
  return;
}


