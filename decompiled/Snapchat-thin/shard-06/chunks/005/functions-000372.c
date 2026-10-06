/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a45264; end: 104a45267; -[GTMOAuth2Compatibility .cxx_destruct] */

void FUN_104a45264(void)

{
  return;
}



/* Entry: 104a45268; end: 104a45367;  */

undefined * FUN_104a45268(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104a45368);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x1130a5408;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&UNK_1107bf848);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104a45368; end: 104a453df;  */

undefined * FUN_104a45368(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x1130a5400;
    func_0x0001048db364();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Entry: 104a453e0; end: 104a453f3;  */

/* WARNING: Removing unreachable block (ram,0x000104a45284) */
/* WARNING: Removing unreachable block (ram,0x000104a45294) */
/* WARNING: Removing unreachable block (ram,0x000104a45364) */
/* WARNING: Removing unreachable block (ram,0x000104a452a0) */
/* WARNING: Removing unreachable block (ram,0x000104a452a8) */
/* WARNING: Removing unreachable block (ram,0x000104a45318) */
/* WARNING: Removing unreachable block (ram,0x000104a45320) */
/* WARNING: Removing unreachable block (ram,0x000104a45324) */
/* WARNING: Removing unreachable block (ram,0x000104a45328) */
/* WARNING: Removing unreachable block (ram,0x000104a45330) */

undefined * FUN_104a453e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x1130a5408;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 6) << 1;
  }
  _swift_arrayInitWithCopy(puVar3 + 0x20,param_1 + 0x20,lVar5,&UNK_1107bf848);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Entry: 104a453f4; end: 104a4545b;  */

void FUN_104a453f4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    FUN_104a46034();
  }
  uStack_38 = *(undefined8 *)(uVar2 + 0x10);
  lStack_40 = uVar2 + 0x20;
  FUN_104a4545c(&lStack_40);
  *param_1 = uVar2;
  return;
}



/* Entry: 104a4545c; end: 104a45557;  */

void FUN_104a4545c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  
  lVar5 = *(long *)(param_1 + 8);
  lVar2 = lVar5;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar2 < lVar5) {
    if (lVar5 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a45554);
      (*pcVar1)();
    }
    puVar6 = (undefined *)(lVar5 / 2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < lVar5) {
      uVar3 = 0x1130a53f8;
      func_0x0001048db364(0x1130a53f8);
      puVar4 = puVar6;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar6,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar6;
    }
    puStack_50 = puVar4 + 0x20;
    puStack_48 = puVar6;
    FUN_104a45558(&puStack_50,auStack_38,param_1,lVar2);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a45558);
      (*pcVar1)();
    }
    if (lVar5 != 0) {
      FUN_104a45954(0,lVar5,1,param_1);
    }
  }
  return;
}



/* Entry: 104a45558; end: 104a45953;  */

void FUN_104a45558(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long unaff_x21;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar20 = param_3[1];
  if (0 < lVar20) {
    lVar13 = 0;
    do {
      lVar19 = lVar13 + 1;
      if (lVar19 < lVar20) {
        lVar17 = *param_3;
        puVar16 = (ulong *)(lVar17 + lVar19 * 0x20);
        uVar18 = *puVar16;
        puVar21 = (ulong *)(lVar17 + lVar13 * 0x20);
        if (uVar18 == *puVar21 && puVar16[1] == puVar21[1]) {
          uVar18 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
        lVar15 = lVar13 + 2;
        lVar19 = lVar15;
        if (lVar15 < lVar20) {
          puVar16 = puVar21 + 5;
          do {
            uVar8 = puVar16[3];
            if (uVar8 == puVar16[-1] && puVar16[4] == *puVar16) {
              if ((uVar18 & 1) != 0) goto LAB_104a45648;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              lVar19 = lVar15;
              if ((((uint)uVar18 ^ (uint)uVar8) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            puVar16 = puVar16 + 4;
            lVar19 = lVar20;
          } while (lVar20 != lVar15);
        }
        lVar15 = lVar19;
        if ((uVar18 & 1) != 0) {
LAB_104a45648:
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45928);
            (*pcVar6)();
          }
          lVar19 = lVar15;
          if (lVar13 < lVar15) {
            lVar12 = lVar15 << 5;
            lVar14 = lVar13 << 5;
            lVar20 = lVar13;
            do {
              lVar15 = lVar15 + -1;
              if (lVar20 != lVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45948);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar17 + lVar14);
                lVar2 = lVar17 + lVar12;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar24 = puVar1[3];
                uVar22 = puVar1[2];
                uVar28 = *(undefined8 *)(lVar2 + -0x20);
                uVar27 = *(undefined8 *)(lVar2 + -8);
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x18);
                *puVar1 = uVar28;
                puVar1[3] = uVar27;
                puVar1[2] = uVar26;
                *(undefined8 *)(lVar2 + -0x20) = uVar4;
                *(undefined8 *)(lVar2 + -0x18) = uVar5;
                *(undefined8 *)(lVar2 + -8) = uVar24;
                *(undefined8 *)(lVar2 + -0x10) = uVar22;
              }
              lVar20 = lVar20 + 1;
              lVar12 = lVar12 + -0x20;
              lVar14 = lVar14 + 0x20;
            } while (lVar20 < lVar15);
          }
        }
      }
      lVar20 = param_3[1];
      lVar17 = lVar19;
      if (lVar19 < lVar20) {
        if (SBORROW8(lVar19,lVar13)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45924);
          (*pcVar6)();
        }
        if (lVar19 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x104a4592c);
            (*pcVar6)();
          }
          lVar15 = lVar13 + param_4;
          if (lVar20 <= lVar13 + param_4) {
            lVar15 = lVar20;
          }
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45930);
            (*pcVar6)();
          }
          if (lVar19 != lVar15) {
            lVar14 = *param_3;
            puVar16 = (ulong *)(lVar14 + lVar19 * 0x20 + -0x20);
            lVar20 = lVar13 - lVar19;
            do {
              puVar21 = (ulong *)(lVar14 + lVar19 * 0x20);
              uVar18 = *puVar21;
              uVar8 = puVar21[1];
              lVar17 = lVar20;
              puVar21 = puVar16;
              do {
                if ((uVar18 == *puVar21 && uVar8 == puVar21[1]) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar18 & 1) == 0)) break;
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45934);
                  (*pcVar6)();
                }
                uVar18 = puVar21[4];
                uVar8 = puVar21[5];
                uVar25 = puVar21[7];
                uVar23 = puVar21[6];
                puVar21[5] = puVar21[1];
                puVar21[4] = *puVar21;
                puVar21[7] = puVar21[3];
                puVar21[6] = puVar21[2];
                *puVar21 = uVar18;
                puVar21[1] = uVar8;
                puVar21[3] = uVar25;
                puVar21[2] = uVar23;
                puVar21 = puVar21 + -4;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar7);
              lVar19 = lVar19 + 1;
              puVar16 = puVar16 + 4;
              lVar20 = lVar20 + -1;
              lVar17 = lVar15;
            } while (lVar19 != lVar15);
          }
        }
      }
      puVar11 = puStack_58;
      if (lVar17 < lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45914);
        (*pcVar6)();
      }
      puVar9 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_104915184(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar18 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar18) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_104915184(puVar11,uVar18 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar18 + 1;
      *(long *)(puVar11 + uVar18 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar11 + uVar18 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104a4594c);
        (*pcVar6)();
      }
      FUN_104a45a20(&puStack_58,*param_1,param_3);
      puVar11 = puStack_58;
      if (unaff_x21 != 0) goto LAB_104a458e4;
      lVar20 = param_3[1];
      lVar13 = lVar17;
    } while (lVar17 < lVar20);
  }
  puVar11 = puStack_58;
  lVar20 = *param_1;
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45954);
    (*pcVar6)();
  }
  puVar9 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar16 = (ulong *)(puVar11 + 0x10);
  uVar18 = *puVar16;
  while (1 < uVar18) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45950);
      (*pcVar6)();
    }
    plVar3 = (long *)(puVar11 + uVar18 * 0x10);
    lVar19 = *plVar3;
    puVar21 = puVar16 + uVar18 * 2;
    uVar8 = puVar21[1];
    FUN_104a45c8c(lVar13 + lVar19 * 0x20,lVar13 + *puVar21 * 0x20,lVar13 + uVar8 * 0x20,lVar20);
    if (unaff_x21 != 0) break;
    if ((long)uVar8 < lVar19) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45918);
      (*pcVar6)();
    }
    if (*puVar16 <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104a4591c);
      (*pcVar6)();
    }
    *plVar3 = lVar19;
    plVar3[1] = uVar8;
    uVar8 = *puVar16;
    lVar13 = uVar8 - uVar18;
    if (uVar8 < uVar18) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104a45920);
      (*pcVar6)();
    }
    uVar18 = uVar8 - 1;
    _memmove(puVar21,puVar21 + 2,lVar13 * 0x10);
    *puVar16 = uVar18;
  }
LAB_104a458e4:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Entry: 104a45954; end: 104a45a1f;  */

void FUN_104a45954(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x20 + -0x20);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar5 + param_3 * 0x20);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((uVar3 == *puVar8 && uVar4 == puVar8[1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) == 0)) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104a45a20);
          (*pcVar1)();
        }
        uVar3 = puVar8[4];
        uVar4 = puVar8[5];
        uVar10 = puVar8[7];
        uVar9 = puVar8[6];
        puVar8[5] = puVar8[1];
        puVar8[4] = *puVar8;
        puVar8[7] = puVar8[3];
        puVar8[6] = puVar8[2];
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[3] = uVar10;
        puVar8[2] = uVar9;
        puVar8 = puVar8 + -4;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 4;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 104a45a20; end: 104a45c8b;  */

undefined8 FUN_104a45a20(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar12 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
LAB_104a45ad8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c54);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c5c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c68);
            (*pcVar4)();
          }
          if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c70);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 <= lVar7 + lVar3) {
            lVar10 = uVar6 - 2;
            if (lVar3 <= lVar12) {
              lVar10 = lVar9;
            }
            goto LAB_104a45b78;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c74);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar7 = plVar1[1];
          bVar5 = SBORROW8(lVar7,lVar2);
          lVar7 = lVar7 - lVar2;
        }
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c64);
          (*pcVar4)();
        }
        lVar2 = uVar8 + lVar9 * 0x10;
        lVar12 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c6c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar2 - lVar12 < lVar7) {
          return 1;
        }
      }
      else {
        lVar2 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c4c);
          (*pcVar4)();
        }
        lVar12 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c50);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar7;
        if (SBORROW8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c58);
          (*pcVar4)();
        }
        if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c60);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar12 + lVar3 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40))
        goto LAB_104a45ad8;
        plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
        lVar2 = *plVar1;
        lVar7 = plVar1[1];
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c78);
          (*pcVar4)();
        }
        lVar10 = uVar6 - 2;
        if (lVar7 - lVar2 <= lVar12) {
          lVar10 = lVar9;
        }
      }
LAB_104a45b78:
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c40);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c8c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar2 = plVar1[1];
      FUN_104a45c8c(lVar9 + lVar12 * 0x20,lVar9 + *plVar1 * 0x20,lVar9 + lVar2 * 0x20,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar2 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c44);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a45c48);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar2;
      *param_1 = uVar8;
      FUN_10492fd30(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 104a45c8c; end: 104a45eaf;  */

undefined8 FUN_104a45c8c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar6 = (long)param_2 - (long)param_1;
  lVar4 = lVar6 + 0x1f;
  if (-1 < lVar6) {
    lVar4 = lVar6;
  }
  lVar4 = lVar4 >> 5;
  lVar8 = (long)param_3 - (long)param_2;
  lVar10 = lVar8 + 0x1f;
  if (-1 < lVar8) {
    lVar10 = lVar8;
  }
  lVar10 = lVar10 >> 5;
  if (lVar4 < lVar10) {
    if ((param_4 != param_1) || (param_1 + lVar4 * 4 <= param_4)) {
      _memmove(param_4,param_1,lVar4 << 5);
    }
    puVar5 = param_4 + lVar4 * 4;
    puVar2 = param_1;
    if (0x1f < lVar6) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar11 & 1) == 0)) {
          puVar3 = param_4 + 4;
          puVar9 = param_4;
        }
        else {
          puVar3 = param_4;
          puVar9 = param_2;
          param_2 = param_2 + 4;
        }
        param_4 = puVar3;
        if (puVar2 != puVar9) {
          uVar11 = *puVar9;
          uVar12 = puVar9[3];
          uVar1 = puVar9[2];
          puVar2[1] = puVar9[1];
          *puVar2 = uVar11;
          puVar2[3] = uVar12;
          puVar2[2] = uVar1;
        }
        puVar2 = puVar2 + 4;
      } while (param_4 < puVar5);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar10 * 4 <= param_4)) {
      _memmove(param_4,param_2,lVar10 << 5);
    }
    puVar9 = param_4 + lVar10 * 4;
    puVar2 = param_2;
    puVar5 = puVar9;
    if (0x1f < lVar8) {
      while (puVar2 = param_2, puVar5 = puVar9, param_1 < param_2) {
        puVar7 = param_2 + -4;
        puVar3 = param_3;
        while( true ) {
          param_3 = puVar3 + -4;
          puVar5 = puVar9 + -4;
          uVar11 = *puVar5;
          if ((uVar11 != param_2[-4] || puVar9[-3] != param_2[-3]) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) != 0)) break;
          if (puVar3 != puVar9) {
            uVar11 = *puVar5;
            uVar12 = puVar9[-1];
            uVar1 = puVar9[-2];
            puVar3[-3] = puVar9[-3];
            *param_3 = uVar11;
            puVar3[-1] = uVar12;
            puVar3[-2] = uVar1;
          }
          puVar9 = puVar5;
          puVar3 = param_3;
          if (puVar5 <= param_4) goto LAB_104a45e50;
        }
        if (puVar3 != param_2) {
          uVar11 = *puVar7;
          uVar12 = param_2[-1];
          uVar1 = param_2[-2];
          puVar3[-3] = param_2[-3];
          *param_3 = uVar11;
          puVar3[-1] = uVar12;
          puVar3[-2] = uVar1;
        }
        puVar2 = puVar7;
        puVar5 = puVar9;
        param_2 = puVar7;
        if (puVar9 <= param_4) break;
      }
    }
  }
LAB_104a45e50:
  uVar1 = (long)puVar5 - (long)param_4;
  uVar11 = uVar1 + 0x1f;
  if (-1 < (long)uVar1) {
    uVar11 = uVar1;
  }
  if ((puVar2 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xffffffffffffffe0)) <= puVar2)) {
    _memmove(puVar2,param_4,((long)uVar11 >> 5) << 5);
  }
  return 1;
}



/* Entry: 104a45eb0; end: 104a46033;  */

long FUN_104a45eb0(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar10 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)-uVar8 < 0x40) {
    uVar12 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar10;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    lVar9 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
    lVar9 = param_3;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104a46034);
      (*pcVar5)();
    }
    lVar13 = 0;
    uVar15 = 0x3f - uVar8 >> 6;
    lVar14 = lVar13;
    lVar4 = 1;
    lVar9 = 0;
    while( true ) {
      while (lVar11 = lVar4, uVar12 != 0) {
        uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        uVar7 = lVar13 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar7);
        uVar2 = puVar1[1];
        puVar3 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar7);
        uVar17 = puVar3[1];
        uVar16 = *puVar3;
        *param_2 = *puVar1;
        param_2[1] = uVar2;
        param_2[3] = uVar17;
        param_2[2] = uVar16;
        if (lVar11 == param_3) {
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRetain(uVar2);
          lVar9 = param_3;
          goto LAB_104a45fe4;
        }
        param_2 = param_2 + 4;
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar2);
        lVar14 = lVar13;
        lVar4 = lVar11 + 1;
        lVar9 = lVar11;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104a45fb4);
          (*pcVar5)();
        }
      }
      bVar6 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104a46030);
        (*pcVar5)();
      }
      if ((long)uVar15 <= lVar13) break;
      uVar12 = puVar10[lVar13];
      lVar4 = lVar11;
    }
    uVar12 = 0;
    if ((long)uVar15 <= lVar14 + 1) {
      uVar15 = lVar14 + 1;
    }
    lVar13 = uVar15 - 1;
  }
LAB_104a45fe4:
  *param_1 = param_4;
  param_1[1] = (long)puVar10;
  param_1[2] = ~uVar8;
  param_1[3] = lVar13;
  param_1[4] = uVar12;
  return lVar9;
}



/* Entry: 104a46034; end: 104a46047;  */

/* WARNING: Removing unreachable block (ram,0x000104a46068) */
/* WARNING: Removing unreachable block (ram,0x000104a46078) */
/* WARNING: Removing unreachable block (ram,0x000104a46164) */
/* WARNING: Removing unreachable block (ram,0x000104a46084) */
/* WARNING: Removing unreachable block (ram,0x000104a4608c) */
/* WARNING: Removing unreachable block (ram,0x000104a460fc) */
/* WARNING: Removing unreachable block (ram,0x000104a46104) */
/* WARNING: Removing unreachable block (ram,0x000104a46108) */
/* WARNING: Removing unreachable block (ram,0x000104a4610c) */
/* WARNING: Removing unreachable block (ram,0x000104a4611c) */

undefined * FUN_104a46034(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x1130a5400;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 5) << 1;
  }
  uVar5 = 0x1130a53f8;
  func_0x0001048db364(0x1130a53f8);
  _swift_arrayInitWithCopy(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 104a46048; end: 104a46167;  */

undefined * FUN_104a46048(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104a46168);
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
    puVar3 = (undefined *)0x1130a5400;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x1130a53f8;
    func_0x0001048db364(0x1130a53f8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104a46168; end: 104a46cd3;  */

/* WARNING: Removing unreachable block (ram,0x000104a46980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a46168(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long extraout_x8;
  undefined8 ****ppppuVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 ***pppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 ***pppuVar28;
  long lVar29;
  undefined8 ****ppppuVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ***pppuStack_228;
  long lStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ****ppppuStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  undefined8 ***pppuStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  char *pcStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ****ppppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_1f0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1f0 + 0x40));
  lVar13 = (long)&uStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar22 = *(undefined8 ****)(param_1 + _DAT_1130a5260);
  pppuVar21 = pppuVar22;
  pppuVar14 = (undefined8 ***)PTR_s_refreshToken_112626fb0;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar21 == (undefined8 ***)0x0) {
    pppuVar28 = (undefined8 ***)0x0;
    pppuVar14 = (undefined8 ***)0x0;
  }
  else {
    pppuVar28 = pppuVar21;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(pppuVar21);
  }
  pppuVar21 = pppuVar22;
  _objc_msgSend(pppuVar22,PTR_s_lastTokenResponse_112600350);
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar29 - extraout_x12_00;
  lStack_1f8 = lVar13;
  lStack_1d0 = lVar29;
  lStack_1c8 = lVar5;
  if (pppuVar21 != (undefined8 ***)0x0) {
    pppuVar23 = pppuVar21;
    pppuVar25 = (undefined8 ***)PTR_s_accessToken_112598ce0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar21);
    if (pppuVar23 != (undefined8 ***)0x0) {
      pppuVar21 = pppuVar23;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(pppuVar23);
      goto LAB_104a462c4;
    }
  }
  pppuVar21 = (undefined8 ***)0x0;
  pppuVar25 = (undefined8 ***)0x0;
LAB_104a462c4:
  ppppuVar30 = (undefined8 ****)0x11309caf0;
  func_0x0001048db364();
  _swift_initStackObject();
  ppppuVar30[3] = (undefined8 ***)0xe;
  ppppuVar30[2] = (undefined8 ***)0x7;
  ppppuVar30[4] = (undefined8 ***)0x5f68736572666572;
  ppppuVar30[5] = (undefined8 ***)0xed00006e656b6f74;
  ppppuVar30[6] = pppuVar28;
  ppppuVar30[7] = pppuVar14;
  ppppuVar30[8] = (undefined8 ***)0x745f737365636361;
  ppppuVar30[9] = (undefined8 ***)0xec0000006e656b6f;
  ppppuVar30[10] = pppuVar21;
  ppppuVar30[0xb] = pppuVar25;
  ppppuVar30[0xc] = (undefined8 ***)0x5065636976726573;
  ppppuVar30[0xd] = (undefined8 ***)0xef72656469766f72;
  pppuVar21 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5268))[1];
  ppppuVar30[0xe] = *(undefined8 ****)(param_1 + _DAT_1130a5268);
  ppppuVar30[0xf] = pppuVar21;
  ppppuVar30[0x10] = (undefined8 ***)0x444972657375;
  ppppuVar30[0x11] = (undefined8 ***)0xe600000000000000;
  pppuVar14 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5270))[1];
  ppppuVar30[0x12] = *(undefined8 ****)(param_1 + _DAT_1130a5270);
  ppppuVar30[0x13] = pppuVar14;
  ppppuVar30[0x14] = (undefined8 ***)0x69616d4572657375;
  ppppuVar30[0x15] = (undefined8 ***)0xe90000000000006c;
  pppuVar28 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5278))[1];
  ppppuVar30[0x16] = *(undefined8 ****)(param_1 + _DAT_1130a5278);
  ppppuVar30[0x17] = pppuVar28;
  ppppuVar30[0x18] = (undefined8 ***)0xd000000000000013;
  ppppuVar30[0x19] = (undefined8 ***)0x800000010f22d570;
  pppuVar23 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5280))[1];
  ppppuVar30[0x1a] = *(undefined8 ****)(param_1 + _DAT_1130a5280);
  ppppuVar30[0x1b] = pppuVar23;
  ppppuVar30[0x1c] = (undefined8 ***)0x65706f6373;
  ppppuVar30[0x1d] = (undefined8 ***)0xe500000000000000;
  _swift_bridgeObjectRetain();
  pppuVar23 = (undefined8 ***)PTR_s_scope_112631b68;
  _swift_bridgeObjectRetain(pppuVar21);
  _swift_bridgeObjectRetain(pppuVar14);
  _swift_bridgeObjectRetain(pppuVar28);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar22 == (undefined8 ***)0x0) {
    pppuVar21 = (undefined8 ***)0x0;
    pppuVar23 = (undefined8 ***)0x0;
  }
  else {
    pppuVar21 = pppuVar22;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(pppuVar22);
  }
  ppppuVar30[0x1e] = pppuVar21;
  ppppuVar30[0x1f] = pppuVar23;
  ppppuVar6 = ppppuVar30;
  func_0x000101480964();
  _swift_setDeallocating(ppppuVar30);
  uVar7 = 0x11309caf8;
  func_0x0001048db364(0x11309caf8);
  _swift_arrayDestroy(ppppuVar30 + 4,7,uVar7);
  pppppuVar24 = (undefined8 *****)ppppuVar6[2];
  pppppuVar8 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar24 != (undefined8 *****)0x0) {
    pppppuVar8 = pppppuVar24;
    FUN_104a45368(pppppuVar24,0);
    pppppuVar9 = &ppppuStack_190;
    FUN_104a45eb0(pppppuVar9,pppppuVar8 + 4,pppppuVar24,ppppuVar6);
    pppuVar21 = pppuStack_188;
    _swift_bridgeObjectRetain(ppppuVar6);
    FUN_104a477b0(ppppuStack_190,pppuVar21,uStack_180,uStack_178,uStack_170);
    if (pppppuVar9 != pppppuVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a4651c);
      (*pcVar4)();
    }
  }
  ppppuStack_190 = pppppuVar8;
  FUN_104a453f4(&ppppuStack_190);
  ppppuVar30 = (undefined8 ****)ppppuStack_190[2];
  pppppuVar8 = (undefined8 *****)ppppuStack_190;
  ppppuVar15 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar30 == (undefined8 ****)0x0) {
LAB_104a468e0:
    _swift_bridgeObjectRelease(ppppuVar6);
    _swift_release(pppppuVar8);
    uVar7 = 0x11309c618;
    ppppuStack_190 = ppppuVar15;
    func_0x0001048db364(0x11309c618);
    uVar16 = uVar7;
    func_0x00010011d734();
    uVar17 = 0x26;
    uVar19 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,uVar7,uVar16);
    _swift_bridgeObjectRelease(ppppuVar15);
    uVar1 = uVar17 & 0xffffffffffff;
    if ((uVar19 & 0x2000000000000000) != 0) {
      uVar1 = uVar19 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(uVar19);
      uVar17 = 0;
      uVar19 = 0;
    }
    auVar31._8_8_ = uVar19;
    auVar31._0_8_ = uVar17;
    return auVar31;
  }
  ppppuVar20 = (undefined8 ****)0x0;
  ppppuStack_230 = ppppuStack_190 + 4;
  pppuStack_238 = (undefined8 ***)((long)ppppuVar30 + -1);
  uStack_248 = 4;
  uStack_250 = 2;
  ppppuStack_208 = ppppuStack_190;
  pcStack_1a8 = "@64@0:8@16@24@32@40@48^@56";
  pppuStack_218 = ppppuVar30;
  pppuStack_210 = ppppuVar6;
LAB_104a46584:
  pppppuVar24 = (undefined8 *****)(ppppuStack_230 + (long)ppppuVar20 * 4);
  pppppuVar8 = (undefined8 *****)ppppuStack_208;
  ppppuVar26 = ppppuVar20;
  pppuStack_228 = ppppuVar15;
  do {
    if (pppppuVar8[2] <= ppppuVar26) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a46980);
      (*pcVar4)();
    }
    if (ppppuVar6[2] != (undefined8 ***)0x0) {
      pppppuVar9 = (undefined8 *****)*pppppuVar24;
      ppppuVar15 = pppppuVar24[1];
      ppppuVar27 = pppppuVar24[3];
      _swift_bridgeObjectRetain(ppppuVar27);
      _swift_bridgeObjectRetain(ppppuVar6);
      _swift_bridgeObjectRetain(ppppuVar15);
      pppppuVar10 = pppppuVar9;
      ppppuVar20 = ppppuVar15;
      func_0x000100029284();
      if (((ulong)ppppuVar20 & 1) == 0) {
        _swift_bridgeObjectRelease(ppppuVar27);
        _swift_bridgeObjectRelease(ppppuVar15);
        ppppuVar15 = ppppuVar6;
      }
      else {
        ppppuStack_1b0 = (undefined8 ****)ppppuVar6[7][(long)pppppuVar10 * 2];
        ppppuVar20 = (undefined8 ****)(ppppuVar6[7] + (long)pppppuVar10 * 2)[1];
        pppuStack_1a0 = ppppuVar27;
        _swift_bridgeObjectRetain(ppppuVar20);
        _swift_bridgeObjectRelease(ppppuVar6);
        lVar5 = lStack_200;
        if (ppppuVar20 != (undefined8 ****)0x0) {
          pppuStack_1b8 = ppppuVar20;
          __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
                    (lStack_200,0xd000000000000013,(ulong)pcStack_1a8 | 0x8000000000000000);
          lVar13 = lStack_1f8;
          __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lStack_1f8);
          lVar29 = lStack_1d0;
          __s10Foundation12CharacterSetV19symmetricDifferenceyA2CF(lStack_1d0,lVar5);
          lVar3 = lStack_1c8;
          pcVar4 = *(code **)(lStack_1f0 + 8);
          lVar11 = lVar13;
          (*pcVar4)(lVar13,lStack_1c8);
          pppuStack_1c0 = ppppuVar15;
          ppppuStack_190 = pppppuVar9;
          pppuStack_188 = ppppuVar15;
          func_0x000100e8b654();
          lVar12 = lVar29;
          ppppuVar30 = (undefined8 ****)PTR___sSSN_11034da80;
          lStack_1e8 = lVar11;
          __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF()
          ;
          lStack_220 = lVar12;
          (*pcVar4)(lVar29,lVar3);
          pcStack_1e0 = pcVar4;
          (*pcVar4)(lVar5,lVar3);
          pppuStack_1d8 = ppppuVar30;
          if (ppppuVar30 == (undefined8 ****)0x0) {
            _swift_bridgeObjectRelease(pppuStack_1a0);
            _swift_bridgeObjectRelease(pppuStack_1c0);
            ppppuVar30 = (undefined8 ****)pppuStack_1b8;
          }
          else {
            __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
                      (lVar5,0xd000000000000013,(ulong)pcStack_1a8 | 0x8000000000000000);
            __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lVar13);
            lVar29 = lStack_1d0;
            __s10Foundation12CharacterSetV19symmetricDifferenceyA2CF(lStack_1d0,lVar5);
            lVar3 = lStack_1c8;
            pcVar4 = pcStack_1e0;
            (*pcStack_1e0)(lVar13,lStack_1c8);
            pppuVar21 = pppuStack_1b8;
            ppppuStack_190 = ppppuStack_1b0;
            pppuStack_188 = pppuStack_1b8;
            lVar13 = lVar29;
            puVar18 = PTR___sSSN_11034da80;
            __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                      (lVar29,PTR___sSSN_11034da80,lStack_1e8);
            (*pcVar4)(lVar29,lVar3);
            (*pcVar4)(lVar5,lVar3);
            _swift_bridgeObjectRelease(pppuVar21);
            if (puVar18 != (undefined *)0x0) break;
            _swift_bridgeObjectRelease(pppuStack_1a0);
            _swift_bridgeObjectRelease(pppuStack_1c0);
            ppppuVar30 = (undefined8 ****)pppuStack_1d8;
          }
          _swift_bridgeObjectRelease(ppppuVar30);
          pppppuVar8 = (undefined8 *****)ppppuStack_208;
          ppppuVar6 = (undefined8 ****)pppuStack_210;
          ppppuVar30 = (undefined8 ****)pppuStack_218;
          goto LAB_104a465ac;
        }
        _swift_bridgeObjectRelease(pppuStack_1a0);
      }
      _swift_bridgeObjectRelease(ppppuVar15);
    }
LAB_104a465ac:
    ppppuVar26 = (undefined8 ****)((long)ppppuVar26 + 1);
    pppppuVar24 = pppppuVar24 + 4;
    ppppuVar15 = (undefined8 ****)pppuStack_228;
    if (ppppuVar30 == ppppuVar26) goto LAB_104a468e0;
  } while( true );
  lVar5 = 0x11309c7e0;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = uStack_248;
  *(undefined8 *)(lVar5 + 0x10) = uStack_250;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  lVar29 = lVar5;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x20) = lStack_220;
  *(undefined8 ****)(lVar5 + 0x28) = pppuStack_1d8;
  *(undefined **)(lVar5 + 0x60) = puVar2;
  *(long *)(lVar5 + 0x68) = lVar29;
  *(long *)(lVar5 + 0x40) = lVar29;
  *(long *)(lVar5 + 0x48) = lVar13;
  *(undefined **)(lVar5 + 0x50) = puVar18;
  pppuVar14 = (undefined8 ***)0x40253d4025;
  pppuVar22 = (undefined8 ***)0xe500000000000000;
  __sSS10FoundationE6format9argumentsS2Sh_Says7CVarArg_pGhtcfC
            (0x40253d4025,0xe500000000000000,lVar5);
  _swift_bridgeObjectRelease(pppuStack_1a0);
  _swift_bridgeObjectRelease(pppuStack_1c0);
  _swift_bridgeObjectRelease(lVar5);
  pppuVar21 = pppuStack_228;
  ppppuVar15 = (undefined8 ****)pppuStack_228;
  _swift_isUniquelyReferenced_nonNull_native();
  ppppuVar6 = (undefined8 ****)pppuStack_210;
  ppppuVar30 = (undefined8 ****)pppuStack_218;
  ppppuVar20 = (undefined8 ****)pppuVar21;
  if (((ulong)ppppuVar15 & 1) == 0) {
    ppppuVar20 = (undefined8 ****)0x0;
    func_0x0001000d182c(0,(long)pppuVar21[2] + 1,1,pppuVar21);
  }
  pppuVar21 = ppppuVar20[2];
  ppppuVar15 = ppppuVar20;
  if ((undefined8 ***)((ulong)ppppuVar20[3] >> 1) <= pppuVar21) {
    ppppuVar15 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar20[3]);
    func_0x0001000d182c(ppppuVar15,(undefined8 ***)((long)pppuVar21 + 1U),1,ppppuVar20);
  }
  ppppuVar20 = (undefined8 ****)((long)ppppuVar26 + 1);
  ppppuVar15[2] = (undefined8 ***)((long)pppuVar21 + 1U);
  ppppuVar15[(long)pppuVar21 * 2 + 4] = pppuVar14;
  ppppuVar15[(long)pppuVar21 * 2 + 5] = pppuVar22;
  pppppuVar8 = (undefined8 *****)ppppuStack_208;
  if ((undefined8 ****)pppuStack_238 == ppppuVar26) goto LAB_104a468e0;
  goto LAB_104a46584;
}



/* Entry: 104a46cd4; end: 104a4774f;  */

undefined *
FUN_104a46cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long alStack_120 [6];
  long alStack_f0 [2];
  code *pcStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar22 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined8 *)(lVar22 - extraout_x12_00);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar25 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104a46994(param_1,param_2);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar17,param_4,param_5);
  pcVar15 = *(code **)(extraout_x12_01 + 0x30);
  puVar3 = puVar17;
  (*pcVar15)(puVar17,1,lVar2);
  if ((int)puVar3 == 1) {
    _swift_bridgeObjectRelease(param_1);
    func_0x0001000293e4();
    func_0x000104a47770();
    _swift_allocError(&UNK_1107bfdc8,puVar17,0,0);
    *puVar17 = param_4;
    puVar17[1] = param_5;
    *(undefined1 *)(puVar17 + 2) = 4;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_5);
    return param_5;
  }
  lStack_c0 = param_9;
  (**(code **)(extraout_x12_01 + 0x20))(lVar25,puVar17,lVar2);
  puVar4 = PTR_PTR_1126ae348;
  _objc_allocWithZone();
  puVar5 = puVar4;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar6 = puVar5;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  _objc_msgSend(puVar4,PTR_s_initWithAuthorizationEndpoint_to_1125db060,puVar5,puVar6);
  _objc_release(puVar5);
  _objc_release(puVar6);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar14 = 0;
    lVar7 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar7 = 0x65706f6373;
    uVar13 = 0;
    func_0x000100029284();
    if ((uVar13 & 1) == 0) {
      uVar14 = 0;
      lVar7 = 0;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x10);
      uVar14 = *puVar3;
      lVar7 = puVar3[1];
      _swift_bridgeObjectRetain(lVar7);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  pcStack_e0 = *(code **)(extraout_x12_01 + 0x10);
  (*pcStack_e0)(lVar22,lVar25,lVar2);
  pcStack_d8 = *(code **)(extraout_x12_01 + 0x38);
  lStack_a8 = extraout_x12_01;
  (*pcStack_d8)(lVar22,0,1,lVar2);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db9558;
  _objc_retain(&PTR____CFConstantStringClassReference_110db9558);
  _objc_retain();
  uVar9 = param_6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  if (lStack_c0 == 0) {
    uVar26 = 0;
    if (lVar7 == 0) goto LAB_104a46fcc;
LAB_104a46fa8:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  else {
    uVar26 = param_8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8);
    if (lVar7 != 0) goto LAB_104a46fa8;
LAB_104a46fcc:
    uVar14 = 0;
  }
  lVar7 = lVar22;
  (*pcVar15)(lVar22,1,lVar2);
  if ((int)lVar7 == 1) {
    lVar7 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lStack_a8 + 8))(lVar22,lVar2);
  }
  puVar5 = PTR_PTR_1126ae370;
  _objc_allocWithZone();
  *(undefined8 *)(lVar25 + -0x18) = 0;
  *(undefined8 *)(lVar25 + -0x20) = 0;
  *(undefined8 *)(lVar25 + -8) = 0;
  *(undefined8 *)(lVar25 + -0x10) = 0;
  *(undefined8 *)(lVar25 + -0x28) = 0;
  *(undefined8 *)(lVar25 + -0x30) = 0;
  _objc_msgSend();
  _objc_release(puVar4);
  _objc_release(uVar9);
  uVar20 = 0xed00006e656b6f74;
  _objc_release(uVar26);
  _objc_release(uVar14);
  _objc_release(lVar7);
  _objc_release(ppuVar8);
  lVar23 = 0x5f68736572666572;
  _objc_retain();
  lVar22 = param_1;
  FUN_104a44c2c(param_1);
  lVar7 = lVar22;
  func_0x000104a44e30();
  _swift_bridgeObjectRelease(lVar22);
  puVar6 = PTR_PTR_1126ae390;
  _objc_allocWithZone();
  uVar14 = 0x1130a53e0;
  func_0x0001048db364();
  lVar22 = lVar7;
  uStack_d0 = uVar14;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar7,PTR___sSSN_11034da80,uVar14,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar7);
  _objc_msgSend(puVar6,PTR_s_initWithRequest_parameters__1125ed520,puVar5,lVar22);
  puStack_c8 = puVar5;
  puStack_b0 = puVar6;
  _objc_release(puVar5);
  _objc_release(lVar22);
  _swift_bridgeObjectRetain(param_1);
  lVar7 = 0x65706f6373;
  uVar14 = 0xe500000000000000;
  func_0x0001014c4e50(0x65706f6373,0xe500000000000000);
  _swift_bridgeObjectRelease(uVar14);
  uVar13 = uVar20;
  func_0x0001014c4e50(0x5f68736572666572,0xed00006e656b6f74);
  _swift_bridgeObjectRelease(uVar13);
  lVar22 = lStack_b8;
  (*pcStack_e0)(lStack_b8,lVar25,lVar2);
  (*pcStack_d8)(lVar22,0,1,lVar2);
  if (*(long *)(param_1 + 0x10) == 0) {
    _objc_retain(puVar4);
    lVar7 = 0;
    pcStack_e0 = (code *)0x0;
LAB_104a47280:
    uVar14 = 0;
    lVar23 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    _objc_retain(puVar4);
    uVar13 = 0;
    func_0x000100029284();
    if ((uVar13 & 1) == 0) {
      pcStack_e0 = (code *)0x0;
      lVar7 = 0;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x10);
      pcStack_e0 = (code *)*puVar3;
      lVar7 = puVar3[1];
      _swift_bridgeObjectRetain(lVar7);
    }
    _swift_bridgeObjectRelease(param_1);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_104a47280;
    _swift_bridgeObjectRetain(param_1);
    func_0x000100029284();
    if ((uVar20 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104a47280;
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar23 * 0x10);
    uVar14 = *puVar3;
    lVar23 = puVar3[1];
    _swift_bridgeObjectRetain(lVar23);
    _swift_bridgeObjectRelease(param_1);
  }
  uVar9 = 0x6e656b6f74;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e656b6f74,0xe500000000000000);
  lStack_90 = lVar22;
  pcStack_d8 = (code *)uVar9;
  (*pcVar15)(lVar22,1,lVar2);
  if ((int)lStack_90 == 1) {
    lStack_90 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lStack_a8 + 8))(lVar22,lVar2);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  alStack_f0[1] = param_1;
  if (lStack_c0 == 0) {
    uStack_88 = 0;
    if (lVar7 == 0) goto LAB_104a47350;
LAB_104a4730c:
    pcVar15 = pcStack_e0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pcStack_e0,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    if (lVar23 != 0) goto LAB_104a4732c;
LAB_104a4735c:
    uVar14 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    uStack_88 = param_8;
    if (lVar7 != 0) goto LAB_104a4730c;
LAB_104a47350:
    pcVar15 = (code *)0x0;
    if (lVar23 == 0) goto LAB_104a4735c;
LAB_104a4732c:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,lVar23);
    _swift_bridgeObjectRelease(lVar23);
  }
  puVar5 = PTR_PTR_1126ae368;
  _objc_allocWithZone();
  lVar22 = param_1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(lVar25 + -0x10) = 0;
  *(long *)(lVar25 + -8) = lVar22;
  *(code **)(lVar25 + -0x20) = pcVar15;
  *(undefined8 *)(lVar25 + -0x18) = uVar14;
  pcVar1 = pcStack_d8;
  _objc_msgSend(puVar5,PTR_s_initWithConfiguration_grantType__112525658,puVar4,pcStack_d8,0,
                lStack_90,param_6,uStack_88);
  _objc_release(puVar4);
  _objc_release(pcVar1);
  _objc_release(lStack_90);
  _objc_release(param_6);
  _objc_release(uStack_88);
  _objc_release(pcVar15);
  _objc_release(uVar14);
  _objc_release(lVar22);
  _objc_retain();
  lVar22 = alStack_f0[1];
  lVar7 = alStack_f0[1];
  FUN_104a44c2c(alStack_f0[1]);
  lVar23 = lVar7;
  func_0x000104a44e30();
  _swift_bridgeObjectRelease(lVar7);
  puVar6 = PTR_PTR_1126ae398;
  _objc_allocWithZone();
  lVar7 = lVar23;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar23,PTR___sSSN_11034da80,uStack_d0,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar23);
  _objc_msgSend(puVar6,PTR_s_initWithRequest_parameters__1125ed520,puVar5,lVar7);
  _objc_release(puVar5);
  _objc_release(lVar7);
  puVar10 = PTR_PTR_1126ae388;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_msgSend();
  if (*(long *)(lVar22 + 0x10) == 0) {
    uVar9 = 0;
    uVar14 = 0;
LAB_104a475ac:
    uVar24 = 0;
    uVar21 = 0;
    uVar26 = 0;
    uVar19 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar22);
    lVar7 = 0x5065636976726573;
    uVar13 = 0;
    func_0x000100029284();
    if ((uVar13 & 1) == 0) {
      uVar14 = 0;
      uVar9 = 0;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar22 + 0x38) + lVar7 * 0x10);
      uVar14 = *puVar3;
      uVar9 = puVar3[1];
      _swift_bridgeObjectRetain(uVar9);
    }
    _swift_bridgeObjectRelease(lVar22);
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_104a475ac;
    _swift_bridgeObjectRetain(lVar22);
    lVar7 = 0x444972657375;
    uVar13 = 0;
    func_0x000100029284();
    if ((uVar13 & 1) == 0) {
      uVar26 = 0;
      uVar19 = 0;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar22 + 0x38) + lVar7 * 0x10);
      uVar26 = *puVar3;
      uVar19 = puVar3[1];
      _swift_bridgeObjectRetain(uVar19);
    }
    _swift_bridgeObjectRelease(lVar22);
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar21 = 0;
      uVar24 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar22);
      lVar7 = 0x69616d4572657375;
      uVar13 = 0;
      func_0x000100029284();
      if ((uVar13 & 1) == 0) {
        uVar24 = 0;
        uVar21 = 0;
      }
      else {
        puVar3 = (undefined8 *)(*(long *)(lVar22 + 0x38) + lVar7 * 0x10);
        uVar24 = *puVar3;
        uVar21 = puVar3[1];
        _swift_bridgeObjectRetain(uVar21);
      }
      _swift_bridgeObjectRelease(lVar22);
      if (*(long *)(lVar22 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar22);
        uVar13 = 0;
        lVar7 = -0x2fffffffffffffed;
        func_0x000100029284();
        if ((uVar13 & 1) == 0) {
          uVar16 = 0;
          uVar18 = 0;
        }
        else {
          puVar3 = (undefined8 *)(*(long *)(lVar22 + 0x38) + lVar7 * 0x10);
          uVar16 = *puVar3;
          uVar18 = puVar3[1];
          _swift_bridgeObjectRetain(uVar18);
        }
        _swift_bridgeObjectRelease(lVar22);
        goto LAB_104a475bc;
      }
    }
  }
  uVar16 = 0;
  uVar18 = 0;
LAB_104a475bc:
  _swift_bridgeObjectRelease(lVar22);
  uVar11 = 0;
  FUN_104a43d08(0);
  _objc_allocWithZone();
  *(undefined8 *)(lVar25 + -0x10) = uVar18;
  puVar12 = puVar10;
  FUN_104a43020(uVar11,puVar10,uVar14,uVar9,uVar26,uVar19,uVar24,uVar21,uVar16);
  _objc_release(puVar4);
  _objc_release(puStack_c8);
  _objc_release(puVar5);
  _objc_release(puStack_b0);
  _objc_release(puVar6);
  _objc_release(puVar10);
  (**(code **)(lStack_a8 + 8))(lVar25,lVar2);
  return puVar12;
}



/* Entry: 104a47750; end: 104a477af;  */

void FUN_104a47750(void)

{
  _objc_opt_self(&PTR_PTR_1129ecf08);
  return;
}



/* Entry: 104a477b0; end: 104a477f3;  */

void FUN_104a477b0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104a477f4; end: 104a478eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a477f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5418);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a478ec; end: 104a4792b;  */

void FUN_104a478ec(void)

{
  if (lRam00000001130a51c0 != -1) {
    _swift_once(0x1130a51c0,0x104a47894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a5410);
  return;
}



/* Entry: 104a4792c; end: 104a4796b; +[GTMKeychainAttribute useDataProtectionKeychain] */

void FUN_104a4792c(void)

{
  if (lRam00000001130a51c0 != -1) {
    _swift_once(0x1130a51c0,0x104a47894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a5410);
  return;
}



/* Entry: 104a4796c; end: 104a479d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a4796c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5418);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 104a479d4; end: 104a47a43; +[GTMKeychainAttribute keychainAccessGroupWithName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a479d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130a5418);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a47a44; end: 104a47a8f;  */

void FUN_104a47a44(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a47a90; end: 104a47aef; -[GTMKeychainAttribute init] */

void FUN_104a47a90(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("GTMAppAuth.KeychainAttribute",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a47abc);
  (*pcVar1)();
}



/* Entry: 104a47af0; end: 104a47b1f; -[GTMKeychainAttribute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a47af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a5418 + 8))
  ;
  return;
}



/* Entry: 104a47b20; end: 104a47b8f;  */

undefined8 * FUN_104a47b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104a47b90; end: 104a47c87;  */

int FUN_104a47b90(int *param_1,uint param_2)

{
  int iVar1;
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
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104a47c88; end: 104a47cc7; -[_TtC10GTMAppAuth15KeychainWrapper accountName] */

void FUN_104a47c88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a47cc8; end: 104a47d2b; -[_TtC10GTMAppAuth15KeychainWrapper initWithKeychainAttributes:] */

long FUN_104a47cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100979f8c(0);
  uVar2 = uVar1;
  func_0x00010097a008();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = 0x687475414f;
  *(undefined8 *)(param_1 + 0x18) = 0xe500000000000000;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return param_1;
}



/* Entry: 104a47d2c; end: 104a47e6b;  */

long FUN_104a47d2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_110 [176];
  long alStack_60 [2];
  
  lVar3 = 0x11309c610;
  func_0x0001048db364();
  puVar6 = auStack_110;
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  uVar4 = *(undefined8 *)PTR__kSecClass_1103477e0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined1 **)(lVar3 + 0x28) = puVar6;
  uVar7 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  uVar4 = 0;
  func_0x0001014bede8();
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  uVar4 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar3 + 0x50) = uVar4;
  *(undefined1 **)(lVar3 + 0x58) = puVar6;
  puVar2 = PTR___sSSN_11034da80;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(lVar3 + 0x78) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  uVar4 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar3 + 0x80) = uVar4;
  *(undefined1 **)(lVar3 + 0x88) = puVar6;
  *(undefined **)(lVar3 + 0xa8) = puVar2;
  *(undefined8 *)(lVar3 + 0x90) = param_1;
  *(undefined8 *)(lVar3 + 0x98) = param_2;
  _objc_retain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  lVar5 = lVar3;
  func_0x000100214a84();
  _swift_setDeallocating(lVar3);
  uVar4 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),3,uVar4);
  alStack_60[0] = lVar5;
  FUN_104a47e6c(*(undefined8 *)(unaff_x20 + 0x20),alStack_60);
  return alStack_60[0];
}



/* Entry: 104a47e6c; end: 104a4844f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a47e6c(ulong param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar5 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    puVar20 = (ulong *)(param_1 + 0x38);
    uVar18 = ~uVar5;
    uVar5 = -uVar5;
    uVar21 = 0xffffffffffffffff;
    if ((long)uVar5 < 0x40) {
      uVar21 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar21 = uVar21 & *puVar20;
    uVar5 = param_1;
    puVar4 = param_2;
    _swift_bridgeObjectRetain();
    lStack_78 = 0;
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar5 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar4 = (ulong *)0x0;
    func_0x000100979f8c();
    puVar20 = puVar4;
    func_0x00010097a008();
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar5,puVar4,puVar20);
    uVar18 = uStack_80;
    puVar20 = puStack_88;
    param_1 = uStack_90;
    uVar21 = uStack_70;
  }
  uVar11 = *(ulong *)PTR__kSecAttrAccessGroup_110347788;
  uVar14 = *(ulong *)PTR__kSecUseDataProtectionKeychain_110347820;
  uVar12 = *(ulong *)PTR__kCFBooleanTrue_11034ab90;
  lVar19 = lStack_78;
LAB_104a47f68:
  do {
    lVar2 = lVar19;
    uVar15 = uVar21;
    if ((long)param_1 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (uVar5 == 0) goto LAB_104a483f0;
      uVar6 = 0;
      uStack_d0 = uVar5;
      func_0x000100979f8c(0);
      puVar9 = &uStack_d0;
      _swift_dynamicCast(&uStack_b0,puVar9,PTR___syXlN_11034f1a0 + 8,uVar6,7);
      uVar5 = uStack_b0;
    }
    else {
      while (uVar15 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a48430);
          (*pcVar3)();
        }
        if ((long)(uVar18 + 0x40 >> 6) <= lVar1) {
          uVar21 = 0;
          goto LAB_104a483f0;
        }
        lVar2 = lVar1;
        uVar15 = puVar20[lVar1];
      }
      uVar5 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) +
                        (lVar2 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3));
      _objc_retain();
      puVar9 = puVar4;
    }
    if (uVar5 == 0) {
LAB_104a483f0:
      func_0x000104a49310(param_1,puVar20,uVar18,lVar19,uVar21);
      return;
    }
    uVar16 = ((ulong *)(uVar5 + _DAT_1130a5418))[1];
    lVar19 = lVar2;
    uVar21 = uVar15;
    if (uVar16 == 0) {
      uVar15 = uVar14;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar12 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        puStack_98 = (undefined *)0x0;
        uStack_a0 = 0;
        FUN_104a49318(&uStack_b0,0x11309c428);
        uVar16 = *param_2;
        _swift_bridgeObjectRetain(uVar16);
        puVar4 = puVar9;
        func_0x000100029284();
        _swift_bridgeObjectRelease(uVar16);
        if (((ulong)puVar4 & 1) == 0) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          uVar16 = *param_2;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = *param_2;
          if ((uVar16 & 1) == 0) {
            func_0x0001010fc388();
          }
          _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(uVar8 + 0x30) + uVar15 * 0x10 + 8));
          func_0x000100102924(*(long *)(uVar8 + 0x38) + uVar15 * 0x20,&uStack_d0);
          func_0x0001010f6278(uVar15,uVar8);
          *param_2 = uVar8;
        }
        _swift_bridgeObjectRelease(puVar9);
        puVar4 = (ulong *)0x11309c428;
        FUN_104a49318(&uStack_d0);
        _objc_release();
      }
      else {
        puVar7 = (undefined *)0x0;
        func_0x0001014bedd4();
        uStack_b0 = uVar12;
        puStack_98 = puVar7;
        func_0x000100102924(&uStack_b0,&uStack_d0);
        _objc_retain(uVar12);
        uVar8 = *param_2;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar17 = *param_2;
        uVar16 = uVar15;
        puVar4 = puVar9;
        func_0x000100029284();
        uVar13 = (ulong)~(uint)puVar4 & 1;
        lVar2 = *(long *)(uVar17 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(uVar17 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a4843c);
          (*pcVar3)();
        }
        if (*(long *)(uVar17 + 0x18) < lVar2) {
          func_0x000100102b0c(lVar2,uVar8);
          uVar16 = uVar15;
          puVar10 = puVar9;
          func_0x000100029284();
          if (((uint)puVar4 & 1) != ((uint)puVar10 & 1)) {
LAB_104a48440:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a48450);
            (*pcVar3)();
          }
LAB_104a4827c:
          if (((ulong)puVar4 & 1) != 0) goto LAB_104a48284;
LAB_104a4837c:
          lVar2 = uVar17 + (uVar16 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar16 & 0x3f);
          puVar4 = (ulong *)(*(long *)(uVar17 + 0x30) + uVar16 * 0x10);
          *puVar4 = uVar15;
          puVar4[1] = (ulong)puVar9;
          puVar4 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar16 * 0x20);
          func_0x000100102924(&uStack_d0);
          if (SCARRY8(*(long *)(uVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a48440);
            (*pcVar3)();
          }
          *(long *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + 1;
        }
        else {
          if ((uVar8 & 1) != 0) goto LAB_104a4827c;
          func_0x0001010fc388();
          if (((ulong)puVar4 & 1) == 0) goto LAB_104a4837c;
LAB_104a48284:
          puVar4 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar16 * 0x20);
          FUN_104a49354(puVar4);
          func_0x000100102924(&uStack_d0);
          _swift_bridgeObjectRelease(puVar9);
        }
        *param_2 = uVar17;
        _objc_release();
      }
      goto LAB_104a47f68;
    }
    uVar15 = *(ulong *)(uVar5 + _DAT_1130a5418);
    uVar8 = uVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_98 = PTR___sSSN_11034da80;
    uStack_b0 = uVar15;
    uStack_a8 = uVar16;
    func_0x000100102924(&uStack_b0,&uStack_d0);
    _swift_bridgeObjectRetain(uVar16);
    uVar16 = *param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar17 = *param_2;
    uVar15 = uVar8;
    puVar4 = puVar9;
    func_0x000100029284();
    uVar13 = (ulong)~(uint)puVar4 & 1;
    lVar2 = *(long *)(uVar17 + 0x10) + uVar13;
    if (SCARRY8(*(long *)(uVar17 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a48434);
      (*pcVar3)();
    }
    if (*(long *)(uVar17 + 0x18) < lVar2) {
      func_0x000100102b0c(lVar2,uVar16);
      uVar15 = uVar8;
      puVar10 = puVar9;
      func_0x000100029284();
      if (((uint)puVar4 & 1) != ((uint)puVar10 & 1)) goto LAB_104a48440;
joined_r0x000104a482f4:
      if (((ulong)puVar4 & 1) != 0) goto LAB_104a481b0;
LAB_104a482f8:
      lVar2 = uVar17 + (uVar15 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar15 & 0x3f);
      puVar4 = (ulong *)(*(long *)(uVar17 + 0x30) + uVar15 * 0x10);
      *puVar4 = uVar8;
      puVar4[1] = (ulong)puVar9;
      puVar4 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar15 * 0x20);
      func_0x000100102924(&uStack_d0);
      if (SCARRY8(*(long *)(uVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a48438);
        (*pcVar3)();
      }
      *(long *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + 1;
    }
    else {
      if ((uVar16 & 1) == 0) {
        func_0x0001010fc388();
        goto joined_r0x000104a482f4;
      }
      if (((ulong)puVar4 & 1) == 0) goto LAB_104a482f8;
LAB_104a481b0:
      puVar4 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar15 * 0x20);
      FUN_104a49354(puVar4);
      func_0x000100102924(&uStack_d0);
      _swift_bridgeObjectRelease(puVar9);
    }
    *param_2 = uVar17;
    _objc_release();
  } while( true );
}



/* Entry: 104a48450; end: 104a484df; -[_TtC10GTMAppAuth15KeychainWrapper keychainQueryForService:] */

void FUN_104a48450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_retain(param_1);
  FUN_104a47d2c(param_3,param_2);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  uVar1 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a484e0; end: 104a487e3;  */

/* WARNING: Removing unreachable block (ram,0x000104a48870) */

undefined1  [16] FUN_104a484e0(undefined8 ****param_1,undefined8 ***param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  long extraout_x8;
  undefined8 ****unaff_x20;
  undefined8 ***unaff_x22;
  undefined8 ****ppppuVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_120 [16];
  undefined8 **appuStack_a0 [4];
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined *puStack_68;
  undefined8 **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000104a47770();
    pppuVar6 = (undefined8 ***)&UNK_1107bfdc8;
    plVar13 = (long *)0x0;
    puVar14 = (undefined8 *)0x0;
    _swift_allocError();
    *param_1 = (undefined8 ***)0x0;
    param_1[1] = (undefined8 ***)0x0;
    *(undefined1 *)(param_1 + 2) = 9;
    _swift_willThrow();
    ppuStack_78 = unaff_x22;
    goto LAB_104a487a0;
  }
  ppuStack_60 = (undefined8 ***)0x0;
  ppppuVar2 = param_1;
  pppuVar6 = param_2;
  FUN_104a47d2c();
  uVar3 = *(undefined8 *)PTR__kSecReturnData_110347818;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_68 = PTR___sSbN_11034dd40;
  pppuStack_80 = (undefined8 ***)CONCAT71(pppuStack_80._1_7_,1);
  func_0x000100102924(&pppuStack_80,appuStack_a0);
  ppppuVar15 = ppppuVar2;
  _swift_isUniquelyReferenced_nonNull_native(ppppuVar2);
  func_0x0001001029e8(appuStack_a0,uVar3,pppuVar6,ppppuVar15);
  _swift_bridgeObjectRelease(pppuVar6);
  uVar4 = *(undefined8 *)PTR__kSecMatchLimit_1103477f0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar4);
  ppppuVar15 = *(undefined8 *****)PTR__kSecMatchLimitOne_110347800;
  uVar5 = 0;
  func_0x0001014bede8();
  pppuStack_80 = ppppuVar15;
  puStack_68 = (undefined *)uVar5;
  func_0x000100102924(&pppuStack_80,appuStack_a0);
  _objc_retain(ppppuVar15);
  ppppuVar15 = ppppuVar2;
  _swift_isUniquelyReferenced_nonNull_native(ppppuVar2);
  func_0x0001001029e8(appuStack_a0,uVar4,uVar3,ppppuVar15);
  _swift_bridgeObjectRelease(uVar3);
  ppppuVar15 = ppppuVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (ppppuVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_release(ppppuVar2);
  ppppuVar2 = ppppuVar15;
  _SecItemCopyMatching(ppppuVar15,&ppuStack_60);
  _objc_release();
  if ((int)ppppuVar2 == -0x62d4) {
    func_0x000104a47770();
    plVar13 = (long *)0x0;
    puVar14 = (undefined8 *)0x0;
    _swift_allocError();
    *ppppuVar15 = param_1;
    ppppuVar15[1] = param_2;
    *(undefined1 *)(ppppuVar15 + 2) = 1;
LAB_104a48784:
    _swift_willThrow();
    pppuVar6 = (undefined8 ***)ppuStack_60;
    _swift_bridgeObjectRetain(param_2);
    param_1 = ppppuVar15;
    unaff_x20 = ppppuVar2;
  }
  else {
    if ((int)ppppuVar2 == 0) {
      ppppuVar15 = (undefined8 ****)0x0;
      if ((undefined8 ***)ppuStack_60 != (undefined8 ***)0x0) {
        appuStack_a0[0] = ppuStack_60;
        _swift_unknownObjectRetain();
        ppppuVar15 = &pppuStack_80;
        ppppuVar12 = (undefined8 ****)appuStack_a0;
        plVar13 = (long *)(PTR___syXlN_11034f1a0 + 8);
        puVar14 = (undefined8 *)PTR___s10Foundation4DataVN_110350ae0;
        _swift_dynamicCast();
        unaff_x20 = (undefined8 ****)pppuStack_80;
        if (((ulong)ppppuVar15 & 1) != 0) {
          pppuVar6 = (undefined8 ***)ppuStack_60;
          _swift_unknownObjectRelease(ppuStack_60);
          param_1 = ppppuVar12;
          goto LAB_104a487a0;
        }
      }
      func_0x000104a47770();
      plVar13 = (long *)0x0;
      puVar14 = (undefined8 *)0x0;
      _swift_allocError();
      *ppppuVar15 = param_1;
      ppppuVar15[1] = param_2;
      *(undefined1 *)(ppppuVar15 + 2) = 2;
      goto LAB_104a48784;
    }
    unaff_x20 = (undefined8 ****)((ulong)ppppuVar2 & 0xffffffff);
    func_0x000104a47770();
    plVar13 = (long *)0x0;
    puVar14 = (undefined8 *)0x0;
    _swift_allocError();
    *ppppuVar15 = unaff_x20;
    ppppuVar15[1] = (undefined8 ***)0x0;
    *(undefined1 *)(ppppuVar15 + 2) = 0;
    _swift_willThrow();
    pppuVar6 = (undefined8 ***)ppuStack_60;
    param_1 = ppppuVar15;
  }
  _swift_unknownObjectRelease(pppuVar6);
  ppuStack_78 = param_2;
LAB_104a487a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar7 = 0;
    __sSS10FoundationE8EncodingVMa();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _swift_retain(pppuVar6);
    plVar8 = plVar13;
    ppppuVar15 = param_1;
    FUN_104a484e0();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
    ;
    plVar10 = plVar8;
    ppppuVar2 = ppppuVar15;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (plVar8,ppppuVar15,auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    if (ppppuVar2 == (undefined8 ****)0x0) {
      func_0x000104a47770();
      puVar11 = &UNK_1107bfdc8;
      _swift_allocError(&UNK_1107bfdc8,plVar10,0,0);
      *plVar10 = (long)plVar13;
      plVar10[1] = (long)param_1;
      *(undefined1 *)(plVar10 + 2) = 2;
      _swift_willThrow();
      _swift_release(pppuVar6);
      func_0x00010006c090(plVar8,ppppuVar15);
      if (puVar14 == (undefined8 *)0x0) {
        _swift_errorRelease(puVar11);
        plVar10 = (long *)0x0;
      }
      else {
        puVar9 = puVar11;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        _swift_errorRelease(puVar11);
        _objc_autorelease(puVar9);
        plVar10 = (long *)0x0;
        *puVar14 = puVar9;
      }
    }
    else {
      func_0x00010006c090(plVar8,ppppuVar15);
      _swift_bridgeObjectRelease(param_1);
      _swift_release(pppuVar6);
      ppppuVar15 = ppppuVar2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(plVar10,ppppuVar2);
      _swift_bridgeObjectRelease(ppppuVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar10);
    auVar17._8_8_ = ppppuVar15;
    auVar17._0_8_ = plVar10;
    return auVar17;
  }
  auVar16._8_8_ = ppuStack_78;
  auVar16._0_8_ = unaff_x20;
  return auVar16;
}



/* Entry: 104a487e4; end: 104a4898f; -[_TtC10GTMAppAuth15KeychainWrapper passwordForService:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a48870) */

void FUN_104a487e4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _swift_retain(param_1);
  puVar2 = param_3;
  lVar1 = param_2;
  FUN_104a484e0();
  __sSS10FoundationE8EncodingV4utf8ACvgZ(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = puVar2;
  lVar6 = lVar1;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
            (puVar2,lVar1,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (lVar6 == 0) {
    func_0x000104a47770();
    puVar5 = &UNK_1107bfdc8;
    _swift_allocError(&UNK_1107bfdc8,puVar4,0,0);
    *puVar4 = param_3;
    puVar4[1] = param_2;
    *(undefined1 *)(puVar4 + 2) = 2;
    _swift_willThrow();
    _swift_release(param_1);
    func_0x00010006c090(puVar2,lVar1);
    if (param_4 == (undefined8 *)0x0) {
      _swift_errorRelease(puVar5);
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puVar5;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _swift_errorRelease(puVar5);
      _objc_autorelease(puVar3);
      puVar4 = (undefined8 *)0x0;
      *param_4 = puVar3;
    }
  }
  else {
    func_0x00010006c090(puVar2,lVar1);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a48990; end: 104a48a6b; -[_TtC10GTMAppAuth15KeychainWrapper passwordDataForService:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a489f8) */
/* WARNING: Removing unreachable block (ram,0x000104a48a48) */
/* WARNING: Removing unreachable block (ram,0x000104a489fc) */

void FUN_104a48990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_retain(param_1);
  uVar2 = param_2;
  FUN_104a484e0(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  uVar1 = param_3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,uVar2);
  func_0x00010006c090(param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a48a6c; end: 104a48baf;  */

void FUN_104a48a6c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000104a47770();
    _swift_allocError(&UNK_1107bfdc8,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 9;
  }
  else {
    puVar2 = param_1;
    FUN_104a47d2c();
    puVar3 = puVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(puVar2);
    puVar2 = puVar3;
    _SecItemDelete();
    _objc_release();
    if ((int)puVar2 == -0x62d4) {
      func_0x000104a47770();
      _swift_allocError(&UNK_1107bfdc8,puVar3,0,0);
      *puVar3 = param_1;
      puVar3[1] = param_2;
      uVar4 = 7;
    }
    else {
      __s6Darwin5noErrs5Int32Vvg();
      if ((int)puVar2 == (int)puVar3) {
        return;
      }
      func_0x000104a47770();
      _swift_allocError(&UNK_1107bfdc8,puVar3,0,0);
      *puVar3 = param_1;
      puVar3[1] = param_2;
      uVar4 = 6;
    }
    *(undefined1 *)(puVar3 + 2) = uVar4;
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_willThrow();
  return;
}



/* Entry: 104a48bb0; end: 104a48c4f; -[_TtC10GTMAppAuth15KeychainWrapper removePasswordForService:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a48c08) */
/* WARNING: Removing unreachable block (ram,0x000104a48c30) */
/* WARNING: Removing unreachable block (ram,0x000104a48c10) */

undefined8 FUN_104a48bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_retain(param_1);
  FUN_104a48a6c(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  return 1;
}



/* Entry: 104a48c50; end: 104a48f37;  */

void FUN_104a48c50(undefined8 *param_1,ulong param_2,ulong *param_3,ulong param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined8 **ppuVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  undefined8 *puStack_80;
  ulong uStack_78;
  char cStack_70;
  undefined8 *puStack_68;
  
  uVar8 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar8 = param_4 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    func_0x000104a47770();
    _swift_allocError(&UNK_1107bfdc8,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 9;
    goto LAB_104a48d7c;
  }
  FUN_104a48a6c(param_3,param_4);
  if (unaff_x21 != 0) {
    _swift_errorRetain();
    uVar4 = 0x11309d9a0;
    func_0x0001048db364(0x11309d9a0);
    ppuVar2 = &puStack_80;
    _swift_dynamicCast(ppuVar2,&stack0xffffffffffffff60,uVar4,&UNK_1107bfdc8,0);
    if ((int)ppuVar2 != 0) {
      if (cStack_70 == '\a') {
        FUN_104a4928c(puStack_80,uStack_78);
        _swift_errorRelease();
        _swift_errorRelease(unaff_x21);
        goto LAB_104a48d0c;
      }
      FUN_104a4928c(puStack_80,uStack_78);
    }
    _swift_errorRelease(unaff_x21);
LAB_104a48d7c:
    _swift_willThrow();
    return;
  }
LAB_104a48d0c:
  uVar1 = (uint)(param_2 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
      if ((param_2 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_104a48db4;
    }
    lVar10 = (long)(int)param_1;
    lVar11 = (long)param_1 >> 0x20;
  }
  else {
    if (uVar9 != 2) {
      return;
    }
    lVar10 = param_1[2];
    lVar11 = param_1[3];
  }
  if (lVar10 == lVar11) {
    return;
  }
LAB_104a48db4:
  puVar3 = param_3;
  uVar8 = param_4;
  FUN_104a47d2c(param_3,param_4);
  uVar4 = *(undefined8 *)PTR__kSecValueData_110347828;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar4);
  puStack_68 = (undefined8 *)PTR___s10Foundation4DataVN_110350ae0;
  puStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000100102924(&puStack_80,&stack0xffffffffffffff60);
  func_0x00010006c00c(param_1,param_2);
  puVar5 = puVar3;
  _swift_isUniquelyReferenced_nonNull_native(puVar3);
  func_0x0001001029e8(&stack0xffffffffffffff60,uVar4,uVar8,puVar5);
  _swift_bridgeObjectRelease(uVar8);
  if (param_5 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)PTR__kSecAttrAccessible_110347790;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar6);
    puVar7 = param_5;
    _swift_getObjectType();
    puStack_80 = param_5;
    puStack_68 = puVar7;
    func_0x000100102924(&puStack_80,&stack0xffffffffffffff60);
    _swift_unknownObjectRetain(param_5);
    puVar5 = puVar3;
    _swift_isUniquelyReferenced_nonNull_native(puVar3);
    func_0x0001001029e8(&stack0xffffffffffffff60,uVar6,uVar4,puVar5);
    _swift_bridgeObjectRelease(uVar4);
  }
  puVar5 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar5;
  _SecItemAdd(puVar5,0);
  _objc_release();
  __s6Darwin5noErrs5Int32Vvg();
  if ((int)puVar3 == (int)puVar5) {
    return;
  }
  func_0x000104a47770();
  _swift_allocError(&UNK_1107bfdc8,puVar5,0,0);
  *puVar5 = (ulong)param_3;
  puVar5[1] = param_4;
  *(undefined1 *)(puVar5 + 2) = 8;
  _swift_willThrow();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Entry: 104a48f38; end: 104a49033; -[_TtC10GTMAppAuth15KeychainWrapper setPassword:forService:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a48fe4) */
/* WARNING: Removing unreachable block (ram,0x000104a4900c) */
/* WARNING: Removing unreachable block (ram,0x000104a48fec) */

undefined8
FUN_104a48f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_2;
  func_0x000100e35e30(param_3,param_2);
  FUN_104a48c50();
  func_0x00010006c090(param_3,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(param_1);
  return 1;
}



/* Entry: 104a49034; end: 104a4913f; -[_TtC10GTMAppAuth15KeychainWrapper setPassword:forService:accessibility:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a490f0) */
/* WARNING: Removing unreachable block (ram,0x000104a49118) */
/* WARNING: Removing unreachable block (ram,0x000104a490f8) */

undefined8
FUN_104a49034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_2;
  func_0x000100e35e30(param_3,param_2);
  FUN_104a48c50();
  func_0x00010006c090(param_3,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(param_1);
  _swift_unknownObjectRelease(param_5);
  return 1;
}



/* Entry: 104a49140; end: 104a4925f; -[_TtC10GTMAppAuth15KeychainWrapper setPasswordWithData:forService:accessibility:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a49210) */
/* WARNING: Removing unreachable block (ram,0x000104a49238) */
/* WARNING: Removing unreachable block (ram,0x000104a49218) */

undefined8
FUN_104a49140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_1);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  uVar2 = param_2;
  _objc_release(uVar1);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_104a48c50(param_3,param_2,uVar1,uVar2,param_5);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(param_1);
  _swift_unknownObjectRelease(param_5);
  func_0x00010006c090(param_3,param_2);
  return 1;
}



/* Entry: 104a49260; end: 104a4928b;  */

void FUN_104a49260(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104a4928c; end: 104a49317;  */

void FUN_104a4928c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 5) {
    if (param_3 < 3) {
      if ((param_3 != 1) && (param_3 != 2)) {
        return;
      }
    }
    else {
      if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      if (param_3 != 4) {
        return;
      }
    }
  }
  else if (param_3 < 7) {
    if ((param_3 != 5) && (param_3 != 6)) {
      return;
    }
  }
  else if ((param_3 != 7) && (param_3 != 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104a49318; end: 104a49353;  */

undefined8 FUN_104a49318(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104a49354; end: 104a49373;  */

void FUN_104a49354(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a49368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 104a49374; end: 104a49393; -[GTMKeychainStore keychainHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49374(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130a54f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a49394; end: 104a493a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49394(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_1130a54f8));
  return;
}



/* Entry: 104a493a4; end: 104a4945f; -[GTMKeychainStore itemName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a493a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a5500);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104a49460; end: 104a49523; -[GTMKeychainStore setItemName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a5500);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a49524; end: 104a49563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a49524(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a5500;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5500,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104a4ca24;
  return auVar2;
}



/* Entry: 104a49564; end: 104a495e7; -[GTMKeychainStore keychainAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49564(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a5508;
  _swift_beginAccess(param_1 + _DAT_1130a5508,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000100979f8c(0);
  func_0x00010097a008();
  uVar2 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a495e8; end: 104a4962b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a495e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a5508;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5508,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104a4962c; end: 104a496fb; -[GTMKeychainStore setKeychainAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a4962c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  func_0x000100979f8c(0);
  uVar3 = uVar2;
  func_0x00010097a008();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar2,uVar3);
  lVar1 = _DAT_1130a5508;
  _swift_beginAccess(param_1 + _DAT_1130a5508,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104a496fc; end: 104a4973b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a496fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a5508;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5508,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104a4973c;
  return auVar2;
}



/* Entry: 104a4973c; end: 104a4973f;  */

void FUN_104a4973c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104a49740; end: 104a49923;  */

undefined8 FUN_104a49740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  lVar1 = 0;
  func_0x000100979e80();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0x687475414f;
  *(undefined8 *)(lVar1 + 0x18) = 0xe500000000000000;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  _swift_bridgeObjectRetain(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar2 = 0;
  func_0x000100979f8c(0);
  uVar3 = uVar2;
  func_0x00010097a008();
  uVar4 = param_3;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(param_3,uVar2,uVar3);
  _swift_bridgeObjectRelease(param_3);
  _objc_msgSend(unaff_x20,PTR_s_initWithItemName_keychainAttribu_112525660,param_1,uVar4,lVar1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _swift_release(lVar1);
  return unaff_x20;
}



/* Entry: 104a49924; end: 104a49a17; -[GTMKeychainStore initWithItemName:keychainAttributes:] */

undefined8
FUN_104a49924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000100979f8c(0);
  uVar2 = uVar1;
  func_0x00010097a008();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_4,uVar1,uVar2);
  lVar3 = 0;
  func_0x000100979e80();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = 0x687475414f;
  *(undefined8 *)(lVar3 + 0x18) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x20) = param_4;
  _objc_retain(param_3);
  uVar2 = param_4;
  _swift_bridgeObjectRetain(param_4);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(param_4);
  _objc_msgSend(param_1,PTR_s_initWithItemName_keychainAttribu_112525660,param_3,uVar2,lVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _swift_release(lVar3);
  return param_1;
}



/* Entry: 104a49a18; end: 104a49c07;  */

undefined8 FUN_104a49a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar1 = param_3;
  _objc_msgSend(param_3,PTR_s_keychainAttributes_112525670);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000100979f8c(0);
  uVar3 = uVar2;
  func_0x00010097a008();
  uVar4 = uVar1;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(uVar1,uVar2,uVar3);
  _objc_release(uVar1);
  uVar1 = uVar4;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar4,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _objc_msgSend(unaff_x20,PTR_s_initWithItemName_keychainAttribu_112525660,param_1,uVar1,param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_3);
  return unaff_x20;
}



/* Entry: 104a49c08; end: 104a49d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130a5510) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a5518) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5500);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130a5508) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130a54f8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a49d40; end: 104a49d7f;  */

void FUN_104a49d40(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  func_0x000100979db0(param_1,param_2);
  return;
}



/* Entry: 104a49d80; end: 104a49dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a49d80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5500);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_bridgeObjectRetain(uVar3);
  FUN_104a49e00(param_1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104a49e00; end: 104a49f5f;  */

/* WARNING: Removing unreachable block (ram,0x000104a49ff8) */
/* WARNING: Removing unreachable block (ram,0x000104a4a020) */
/* WARNING: Removing unreachable block (ram,0x000104a4a000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104a49e00(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  uVar6 = param_3;
  FUN_104a4a044();
  uVar5 = param_3;
  if (unaff_x21 == 0) {
    unaff_x22 = *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_1103477a0;
    uVar8 = *(ulong *)(unaff_x20 + _DAT_1130a54f8);
    _objc_retain();
    uVar4 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,uVar7);
    uVar5 = param_2;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    uStack_60 = 0;
    uVar6 = uVar4;
    _objc_msgSend(uVar8,PTR_s_setPasswordWithData_forService_a_112525698,uVar4,uVar5,unaff_x22,
                  &uStack_60);
    _objc_release(uVar4);
    _objc_release(uVar5);
    unaff_x20 = uStack_60;
    unaff_x19 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar5 = uStack_60;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(uVar5);
      _swift_willThrow();
      _objc_release(unaff_x22);
      func_0x00010006c090(param_1,uVar7);
      unaff_x21 = unaff_x20;
    }
    else {
      _objc_retain();
      _objc_release(unaff_x22);
      func_0x00010006c090(param_1,uVar7);
      unaff_x20 = uVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_68 = FUN_104a49f60;
    puVar1 = (undefined8 *)(param_1 + _DAT_1130a5500);
    uStack_a0 = param_2;
    uStack_98 = uVar5;
    uStack_90 = unaff_x22;
    uStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    uStack_78 = unaff_x19;
    puStack_70 = &stack0xfffffffffffffff0;
    _swift_beginAccess(puVar1,auStack_b8,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    _objc_retain(uVar6);
    _objc_retain(param_1);
    _swift_bridgeObjectRetain(uVar3);
    FUN_104a49e00(uVar6,uVar2,uVar3);
    _objc_release(param_1);
    _objc_release(uVar6);
    _swift_bridgeObjectRelease(uVar3);
    return 1;
  }
  return param_1;
}



/* Entry: 104a49f60; end: 104a4a043; -[GTMKeychainStore saveAuthSession:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a49ff8) */
/* WARNING: Removing unreachable block (ram,0x000104a4a020) */
/* WARNING: Removing unreachable block (ram,0x000104a4a000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a49f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a5500);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _objc_retain(param_3);
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(uVar3);
  FUN_104a49e00(param_3,uVar2,uVar3);
  _objc_release(param_1);
  _objc_release(param_3);
  _swift_bridgeObjectRelease(uVar3);
  return 1;
}



/* Entry: 104a4a044; end: 104a4a17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a4a044(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_retain();
  _objc_retain();
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f22db50);
  uVar3 = 0;
  FUN_104a43d08(0);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend(puVar1,PTR_s_setClassName_forClass__112525688,uVar2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a5510);
  *(undefined **)(unaff_x20 + _DAT_1130a5510) = puVar1;
  _objc_release(uVar2);
  _objc_msgSend(puVar1,PTR_s_encodeObject_forKey__1125c25b0,param_1,
                *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_msgSend(puVar1,PTR_s_finishEncoding_1125c97c0);
  puVar4 = puVar1;
  puVar6 = PTR_s_encodedData_1125c26d8;
  _objc_msgSend(puVar1,PTR_s_encodedData_1125c26d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = puVar4;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 104a4a17c; end: 104a4a243; -[GTMKeychainStore saveAuthSession:withItemName:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4a1f8) */
/* WARNING: Removing unreachable block (ram,0x000104a4a220) */
/* WARNING: Removing unreachable block (ram,0x000104a4a200) */

undefined8
FUN_104a4a17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a49e00(param_3,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 104a4a244; end: 104a4a313;  */

/* WARNING: Removing unreachable block (ram,0x000104a4a370) */
/* WARNING: Removing unreachable block (ram,0x000104a4a398) */
/* WARNING: Removing unreachable block (ram,0x000104a4a378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a4a244(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a54f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  puVar3 = PTR_s_removePasswordForService_error__112525680;
  uVar2 = param_1;
  _objc_msgSend(uVar5,PTR_s_removePasswordForService_error__112525680,param_1);
  _objc_release(param_1);
  uVar1 = 0;
  if ((int)uVar5 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar1);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar2);
    _objc_retain(uVar1);
    FUN_104a4a244(uVar2,puVar3);
    _swift_bridgeObjectRelease(puVar3);
    _objc_release(uVar1);
    return 1;
  }
  return uVar1;
}



/* Entry: 104a4a314; end: 104a4a3b7; -[GTMKeychainStore removeAuthSessionWithItemName:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4a370) */
/* WARNING: Removing unreachable block (ram,0x000104a4a398) */
/* WARNING: Removing unreachable block (ram,0x000104a4a378) */

undefined8 FUN_104a4a314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_104a4a244(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_1);
  return 1;
}



/* Entry: 104a4a3b8; end: 104a4a4c3;  */

/* WARNING: Removing unreachable block (ram,0x000104a4a4f8) */
/* WARNING: Removing unreachable block (ram,0x000104a4a520) */
/* WARNING: Removing unreachable block (ram,0x000104a4a500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a4a3b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130a54f8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5500);
  _swift_beginAccess(puVar1,auStack_50,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uStack_58 = 0;
  _objc_msgSend(uVar4,PTR_s_removePasswordForService_error__112525680,uVar3,&uStack_58);
  _objc_release(uVar3);
  uVar3 = uStack_58;
  if ((int)uVar4 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar3);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain();
    FUN_104a4a3b8();
    _objc_release(uVar3);
    return 1;
  }
  return uVar3;
}



/* Entry: 104a4a4c4; end: 104a4a53f; -[GTMKeychainStore removeAuthSessionWithError:] */

/* WARNING: Removing unreachable block (ram,0x000104a4a4f8) */
/* WARNING: Removing unreachable block (ram,0x000104a4a520) */
/* WARNING: Removing unreachable block (ram,0x000104a4a500) */

undefined8 FUN_104a4a4c4(undefined8 param_1)

{
  _objc_retain();
  FUN_104a4a3b8();
  _objc_release(param_1);
  return 1;
}



/* Entry: 104a4a540; end: 104a4a7c3;  */

/* WARNING: Removing unreachable block (ram,0x000104a4a82c) */
/* WARNING: Removing unreachable block (ram,0x000104a4a860) */
/* WARNING: Removing unreachable block (ram,0x000104a4a830) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104a4a540(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long lVar8;
  long unaff_x21;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)((long)unaff_x20 + _DAT_1130a54f8);
  puVar2 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  puVar5 = PTR_s_passwordDataForService_error__112525678;
  puVar6 = puVar2;
  _objc_msgSend(lVar8,PTR_s_passwordDataForService_error__112525678,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar1 = 0;
  _objc_retain();
  if (lVar8 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(lVar1);
    _swift_willThrow();
  }
  else {
    lVar1 = lVar8;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar8);
    _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(lVar1,puVar5);
    lVar8 = lVar1;
    func_0x00010130c4a4(lVar1,puVar5);
    func_0x00010006c090(lVar1,puVar5);
    puVar2 = unaff_x20;
    if (unaff_x21 == 0) {
      _objc_retain();
      _objc_msgSend();
      puVar2 = (undefined8 *)0x0;
      FUN_104a43d08();
      puVar6 = puVar2;
      _swift_getObjCClassFromMetadata();
      uVar3 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f22db50);
      puVar4 = (undefined8 *)PTR_s_setClass_forClassName__11263cbc8;
      _objc_msgSend(lVar8,PTR_s_setClass_forClassName__11263cbc8,puVar6,uVar3);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_1130a5518);
      *(long *)((long)unaff_x20 + _DAT_1130a5518) = lVar8;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar3);
      puVar6 = puVar4;
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                (puVar2,uVar3,puVar4);
      _swift_bridgeObjectRelease();
      if (puVar2 != (undefined8 *)0x0) {
        _objc_release(lVar8);
        func_0x00010006c090(lVar1,puVar5);
        unaff_x20 = puVar2;
        goto LAB_104a4a658;
      }
      func_0x000104a47770();
      puVar6 = (undefined8 *)0x0;
      _swift_allocError(&UNK_1107bfdc8,puVar4,0);
      *puVar4 = param_1;
      puVar4[1] = param_2;
      *(undefined1 *)(puVar4 + 2) = 5;
      _swift_willThrow();
      _swift_bridgeObjectRetain(param_2);
      _objc_release(lVar8);
    }
    func_0x00010006c090(lVar1,puVar5);
    unaff_x20 = puVar2;
  }
LAB_104a4a658:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar6);
    _objc_retain(lVar1);
    FUN_104a4a540(puVar6,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  return unaff_x20;
}



/* Entry: 104a4a7c4; end: 104a4a883; -[GTMKeychainStore retrieveAuthSessionWithItemName:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4a82c) */
/* WARNING: Removing unreachable block (ram,0x000104a4a860) */
/* WARNING: Removing unreachable block (ram,0x000104a4a830) */

void FUN_104a4a7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_104a4a540(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104a4a884; end: 104a4ab37;  */

/* WARNING: Removing unreachable block (ram,0x000104a4ab74) */
/* WARNING: Removing unreachable block (ram,0x000104a4aba8) */
/* WARNING: Removing unreachable block (ram,0x000104a4ab78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a4a884(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(unaff_x20 + _DAT_1130a54f8);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a5500);
  _swift_beginAccess(plVar1,auStack_80,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  _swift_bridgeObjectRetain(lVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar2,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  puVar7 = PTR_s_passwordDataForService_error__112525678;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = 0;
  _objc_retain();
  if (lVar8 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(lVar2);
    _swift_willThrow();
  }
  else {
    lVar2 = lVar8;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar8);
    _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(lVar2,puVar7);
    lVar3 = lVar2;
    func_0x00010130c4a4(lVar2,puVar7);
    func_0x00010006c090(lVar2,puVar7);
    if (unaff_x21 == 0) {
      _objc_retain();
      _objc_msgSend();
      lVar4 = 0;
      FUN_104a43d08();
      lVar8 = lVar4;
      _swift_getObjCClassFromMetadata();
      uVar5 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f22db50);
      plVar6 = (long *)PTR_s_setClass_forClassName__11263cbc8;
      _objc_msgSend(lVar3,PTR_s_setClass_forClassName__11263cbc8,lVar8,uVar5);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a5518);
      *(long *)(unaff_x20 + _DAT_1130a5518) = lVar3;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar5);
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                (lVar4,uVar5,plVar6,lVar4);
      _swift_bridgeObjectRelease();
      if (lVar4 != 0) {
        _objc_release(lVar3);
        func_0x00010006c090(lVar2,puVar7);
        unaff_x20 = lVar4;
        goto LAB_104a4a9d0;
      }
      unaff_x20 = *plVar1;
      lVar8 = plVar1[1];
      func_0x000104a47770();
      _swift_allocError();
      *plVar6 = unaff_x20;
      plVar6[1] = lVar8;
      *(undefined1 *)(plVar6 + 2) = 5;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar8);
      _objc_release(lVar3);
    }
    func_0x00010006c090(lVar2,puVar7);
  }
LAB_104a4a9d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    lVar3 = lVar2;
    FUN_104a4a884();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return lVar3;
  }
  return unaff_x20;
}



/* Entry: 104a4ab38; end: 104a4abc7; -[GTMKeychainStore retrieveAuthSessionWithError:] */

/* WARNING: Removing unreachable block (ram,0x000104a4ab74) */
/* WARNING: Removing unreachable block (ram,0x000104a4aba8) */
/* WARNING: Removing unreachable block (ram,0x000104a4ab78) */

void FUN_104a4ab38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104a4a884();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a4abc8; end: 104a4ad77;  */

/* WARNING: Removing unreachable block (ram,0x000104a4ae64) */
/* WARNING: Removing unreachable block (ram,0x000104a4af00) */
/* WARNING: Removing unreachable block (ram,0x000104a4ae9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104a4abc8(undefined *param_1,undefined **param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *unaff_x21;
  undefined *puVar16;
  undefined8 auStack_120 [2];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = *(undefined **)(unaff_x20 + _DAT_1130a54f8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a5500);
  uVar8 = param_5;
  lVar9 = param_6;
  uVar12 = param_7;
  _swift_beginAccess(puVar1,auStack_80,0,0);
  puVar3 = (undefined *)*puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  puStack_88 = (undefined *)0x0;
  ppuVar7 = &puStack_88;
  puVar16 = PTR_s_passwordForService_error__11261aef0;
  puVar10 = puVar3;
  _objc_msgSend(puVar13,PTR_s_passwordForService_error__11261aef0,puVar3,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar15 = puStack_88;
  if (puVar13 == (undefined *)0x0) {
    puVar5 = puStack_88;
    _objc_retain();
    unaff_x21 = puVar15;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    puVar13 = puVar5;
    _objc_release(puVar5);
    _swift_willThrow();
    puVar11 = puVar16;
  }
  else {
    puVar5 = puVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_retain(puVar15);
    _objc_release(puVar13);
    puVar4 = puVar5;
    puVar11 = puVar16;
    uVar8 = param_3;
    lVar9 = param_4;
    uVar12 = param_5;
    uStack_b0 = param_7;
    FUN_104a46cd4(puVar5,puVar16,param_1,param_2,param_3,param_4,param_5,param_6);
    puVar13 = puVar16;
    puVar3 = puVar16;
    if (unaff_x21 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar16);
      puVar10 = param_1;
      ppuVar7 = param_2;
      puVar15 = puVar4;
    }
    else {
      _swift_bridgeObjectRelease(puVar16);
      puVar10 = param_1;
      ppuVar7 = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_104a4ad78;
    lVar6 = 0;
    auStack_120[0] = uVar12;
    puStack_110 = puVar3;
    uStack_108 = param_7;
    uStack_100 = param_3;
    lStack_f8 = param_4;
    uStack_f0 = param_5;
    lStack_e8 = param_6;
    puStack_e0 = puVar5;
    puStack_d8 = unaff_x21;
    puStack_d0 = puVar15;
    puStack_c8 = unaff_x21;
    puStack_c0 = &stack0xfffffffffffffff0;
    __s10Foundation3URLVMa();
    lVar14 = *(long *)(lVar6 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
    puVar15 = (undefined *)((long)auStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar15,puVar10);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(ppuVar7);
    puVar3 = puVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar8);
    if (lVar9 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar9);
    }
    _objc_retain(puVar13);
    puVar10 = puVar15;
    FUN_104a4abc8(puVar15,ppuVar7,puVar11,uVar8,puVar3,lVar9,puVar16);
    (**(code **)(lVar14 + 8))(puVar15,lVar6);
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(puVar3);
    _objc_release(puVar13);
    _swift_bridgeObjectRelease(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  return puVar15;
}



/* Entry: 104a4ad78; end: 104a4af2b; -[GTMKeychainStore retrieveAuthSessionInGTMOAuth2FormatWithTokenURL:redirectURI:clientID:clientSecret:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4ae64) */
/* WARNING: Removing unreachable block (ram,0x000104a4af00) */
/* WARNING: Removing unreachable block (ram,0x000104a4ae9c) */

void FUN_104a4ad78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  auStack_70[0] = param_7;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_1);
  lVar2 = lVar5;
  FUN_104a4abc8(lVar5,param_4,param_2,param_5,uVar3,param_6,uVar6);
  (**(code **)(lVar4 + 8))(lVar5,lVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104a4af2c; end: 104a4b127;  */

/* WARNING: Removing unreachable block (ram,0x000104a4b1b8) */
/* WARNING: Removing unreachable block (ram,0x000104a4b1ec) */
/* WARNING: Removing unreachable block (ram,0x000104a4b1bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a4af2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lRam00000001130a51b8 != -1) {
    _swift_once(0x1130a51b8,0x104a44b28);
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  func_0x000100028790();
  lVar9 = *(long *)(unaff_x20 + _DAT_1130a54f8);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a5500);
  _swift_beginAccess(plVar1,auStack_80,0,0);
  lVar3 = *plVar1;
  lVar5 = plVar1[1];
  _swift_bridgeObjectRetain(lVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  puStack_88 = (undefined *)0x0;
  ppuVar8 = &puStack_88;
  puVar6 = PTR_s_passwordForService_error__11261aef0;
  lVar5 = lVar3;
  _objc_msgSend(lVar9,PTR_s_passwordForService_error__11261aef0,lVar3,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar7 = puStack_88;
  if (lVar9 == 0) {
    puVar4 = puStack_88;
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar4);
    _swift_willThrow();
  }
  else {
    lVar3 = lVar9;
    puVar4 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_retain(puVar7);
    _objc_release(lVar9);
    ppuVar8 = (undefined **)0xd000000000000019;
    puVar6 = puVar4;
    FUN_104a46cd4(lVar3,puVar4,lVar2,0xd000000000000019,0x800000010f22db70,param_1,param_2,param_3,
                  param_4);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(puVar4);
      lVar5 = lVar2;
      param_3 = lVar3;
    }
    else {
      _swift_bridgeObjectRelease(puVar4);
      lVar5 = lVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    puVar7 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(ppuVar8);
    _objc_retain(puVar4);
    FUN_104a4af2c(lVar5,puVar6,ppuVar8,puVar7);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar7);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return lVar5;
  }
  return param_3;
}



/* Entry: 104a4b128; end: 104a4b213; -[GTMKeychainStore retrieveAuthSessionForGoogleInGTMOAuth2FormatWithClientID:clientSecret:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4b1b8) */
/* WARNING: Removing unreachable block (ram,0x000104a4b1ec) */
/* WARNING: Removing unreachable block (ram,0x000104a4b1bc) */

void FUN_104a4b128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_1);
  FUN_104a4af2c(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104a4b214; end: 104a4b397;  */

/* WARNING: Removing unreachable block (ram,0x000104a4b3ec) */
/* WARNING: Removing unreachable block (ram,0x000104a4b414) */
/* WARNING: Removing unreachable block (ram,0x000104a4b3f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104a4b214(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  FUN_104a46168();
  if (param_2 == 0) {
    func_0x000104a47770();
    puVar4 = (undefined8 *)0x0;
    _swift_allocError(&UNK_1107bfdc8,puVar2,0);
    *puVar2 = param_1;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 3;
    _swift_willThrow();
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a54f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130a5500);
    _swift_beginAccess(puVar4,auStack_60,0,0);
    uVar3 = *puVar4;
    uVar1 = puVar4[1];
    _swift_bridgeObjectRetain(uVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uStack_68 = 0;
    puVar4 = puVar2;
    _objc_msgSend(uVar5,PTR_s_setPassword_forService_accessibi_112525690,puVar2,uVar3,
                  *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_1103477a0,
                  &uStack_68);
    _objc_release(puVar2);
    _objc_release(uVar3);
    param_1 = (undefined8 *)uStack_68;
    if ((int)uVar5 == 0) {
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(param_1);
      _swift_willThrow();
      goto LAB_104a4b360;
    }
  }
  _objc_retain(param_1);
LAB_104a4b360:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    _objc_retain(param_1);
    FUN_104a4b214(puVar4);
    _objc_release(param_1);
    _objc_release(puVar4);
    return (undefined8 *)1;
  }
  return param_1;
}



/* Entry: 104a4b398; end: 104a4b433; -[GTMKeychainStore saveWithGTMOAuth2FormatForAuthSession:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a4b3ec) */
/* WARNING: Removing unreachable block (ram,0x000104a4b414) */
/* WARNING: Removing unreachable block (ram,0x000104a4b3f4) */

undefined8 FUN_104a4b398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a4b214(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 104a4b434; end: 104a4b47f;  */

void FUN_104a4b434(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a4b480; end: 104a4b4df; -[GTMKeychainStore init] */

void FUN_104a4b480(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("GTMAppAuth.KeychainStore",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a4b4ac);
  (*pcVar1)();
}



/* Entry: 104a4b4e0; end: 104a4b54b; -[GTMKeychainStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a4b4e0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a54f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a5510));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a5518));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a5500 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a5508));
  return;
}



/* Entry: 104a4b54c; end: 104a4b567;  */

undefined1  [16] FUN_104a4b54c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f22dbb0;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 104a4b568; end: 104a4b993;  */

/* WARNING: Possible PIC construction at 0x000104a4b960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a4b6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a4b964) */
/* WARNING: Removing unreachable block (ram,0x000104a4b6e0) */
/* WARNING: Removing unreachable block (ram,0x000104a4b974) */

undefined * FUN_104a4b568(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_310 [720];
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar4 = *unaff_x20;
  puVar6 = (undefined8 *)unaff_x20[1];
  bVar7 = *(byte *)(unaff_x20 + 2);
  if (bVar7 < 5) {
    unaff_x20 = (undefined8 *)0x11309c610;
    if (bVar7 < 2) {
      if (bVar7 == 0) {
        func_0x0001048db364();
        _swift_initStackObject();
        unaff_x20[3] = 2;
        unaff_x20[2] = 1;
        unaff_x21 = unaff_x20 + 4;
        *unaff_x21 = 0x737574617473;
        unaff_x20[5] = 0xe600000000000000;
        unaff_x20[9] = PTR___ss5Int32VN_11034ee20;
        *(int *)(unaff_x20 + 6) = (int)uVar4;
        unaff_x30 = 0x104a4b6e0;
        register0x00000008 = (BADSPACEBASE *)auStack_310;
        puVar9 = unaff_x20;
        unaff_x19 = uVar4;
        unaff_x29 = puVar1;
        goto code_r0x000100214a84;
      }
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x656d614e6d657469;
      unaff_x20[9] = PTR___sSSN_11034da80;
      unaff_x20[5] = 0xe800000000000000;
      unaff_x20[6] = uVar4;
      unaff_x20[7] = puVar6;
      uVar12 = 1;
    }
    else if (bVar7 == 2) {
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x656d614e6d657469;
      unaff_x20[9] = PTR___sSSN_11034da80;
      unaff_x20[5] = 0xe800000000000000;
      unaff_x20[6] = uVar4;
      unaff_x20[7] = puVar6;
      uVar12 = 2;
    }
    else if (bVar7 == 3) {
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x7373655368747561;
      unaff_x20[5] = 0xeb000000006e6f69;
      uVar12 = 0;
      FUN_104a43d08();
      unaff_x20[9] = uVar12;
      unaff_x20[6] = uVar4;
      uVar12 = 3;
    }
    else {
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x7463657269646572;
      unaff_x20[9] = PTR___sSSN_11034da80;
      unaff_x20[5] = 0xeb00000000495255;
      unaff_x20[6] = uVar4;
      unaff_x20[7] = puVar6;
      uVar12 = 4;
    }
  }
  else if (bVar7 < 7) {
    unaff_x20 = (undefined8 *)0x11309c610;
    if (bVar7 == 5) {
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x656d614e6d657469;
      unaff_x20[9] = PTR___sSSN_11034da80;
      unaff_x20[5] = 0xe800000000000000;
      unaff_x20[6] = uVar4;
      unaff_x20[7] = puVar6;
      uVar12 = 5;
    }
    else {
      func_0x0001048db364();
      _swift_initStackObject();
      unaff_x20[3] = 2;
      unaff_x20[2] = 1;
      unaff_x22 = unaff_x20 + 4;
      *unaff_x22 = 0x656d614e6d657469;
      unaff_x20[9] = PTR___sSSN_11034da80;
      unaff_x20[5] = 0xe800000000000000;
      unaff_x20[6] = uVar4;
      unaff_x20[7] = puVar6;
      uVar12 = 6;
    }
  }
  else if (bVar7 == 7) {
    unaff_x20 = (undefined8 *)0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    unaff_x20[3] = 2;
    unaff_x20[2] = 1;
    unaff_x22 = unaff_x20 + 4;
    *unaff_x22 = 0x656d614e6d657469;
    unaff_x20[9] = PTR___sSSN_11034da80;
    unaff_x20[5] = 0xe800000000000000;
    unaff_x20[6] = uVar4;
    unaff_x20[7] = puVar6;
    uVar12 = 7;
  }
  else {
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (bVar7 != 8) goto code_r0x000100214a84;
    unaff_x20 = (undefined8 *)0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    unaff_x20[3] = 2;
    unaff_x20[2] = 1;
    unaff_x22 = unaff_x20 + 4;
    *unaff_x22 = 0x656d614e6d657469;
    unaff_x20[9] = PTR___sSSN_11034da80;
    unaff_x20[5] = 0xe800000000000000;
    unaff_x20[6] = uVar4;
    unaff_x20[7] = puVar6;
    uVar12 = 8;
  }
  FUN_104a4c704(uVar4,puVar6,uVar12);
  unaff_x30 = 0x104a4b964;
  register0x00000008 = (BADSPACEBASE *)auStack_310;
  puVar9 = unaff_x20;
  unaff_x19 = uVar4;
  unaff_x21 = puVar6;
  unaff_x29 = puVar1;
code_r0x000100214a84:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = (undefined *)puVar9[2];
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar10 = puVar14;
    func_0x000107c60498();
    puVar9 = puVar9 + 4;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar3 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar11 = uVar3;
      uVar13 = uVar5;
      func_0x000100029284();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar8)();
      }
      uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar13 + 0x40) =
           *(ulong *)(puVar10 + uVar13 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar5;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar10 + 0x38) + uVar11 * 0x20);
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar8)();
      }
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar9 = puVar9 + 6;
      puVar14 = puVar14 + -1;
    } while (puVar14 != (undefined *)0x0);
    func_0x000107c61574(puVar10);
  }
  return puVar10;
}



/* Entry: 104a4b994; end: 104a4ba33;  */

undefined1 FUN_104a4b994(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  long *unaff_x20;
  
  bVar3 = *(byte *)(unaff_x20 + 2);
  if (bVar3 < 5) {
    uVar2 = 4;
    if (bVar3 != 3) {
      uVar2 = 5;
    }
    uVar1 = 3;
    if (bVar3 != 2) {
      uVar1 = uVar2;
    }
    if (bVar3 < 2) {
      uVar1 = bVar3 != 0;
    }
    return uVar1;
  }
  if (bVar3 < 7) {
    uVar2 = 7;
    if (bVar3 != 5) {
      uVar2 = 8;
    }
    return uVar2;
  }
  if (bVar3 == 7) {
    return 9;
  }
  if (bVar3 == 8) {
    return 10;
  }
  uVar2 = 2;
  if (*unaff_x20 != 0 || unaff_x20[1] != 0) {
    uVar2 = 6;
  }
  return uVar2;
}



/* Entry: 104a4ba34; end: 104a4ba83;  */

void FUN_104a4ba34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104a4c9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 104a4ba84; end: 104a4bab3;  */

void FUN_104a4ba84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 104a4bab4; end: 104a4bacb;  */

void FUN_104a4bab4(void)

{
  func_0x000104a4c788();
  return;
}



/* Entry: 104a4bacc; end: 104a4badf;  */

bool FUN_104a4bacc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104a4bae0; end: 104a4bbbb;  */

void FUN_104a4bae0(void)

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



/* Entry: 104a4bbbc; end: 104a4bbc7;  */

void FUN_104a4bbbc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104a4bbc8; end: 104a4bd63;  */

ulong FUN_104a4bbc8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4bc98);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4bc9c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100979f8c(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    func_0x000100979f8c(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f22dcc0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4bd64);
  (*pcVar2)();
}



/* Entry: 104a4bd64; end: 104a4c433;  */

uint FUN_104a4bd64(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *param_1;
  lVar8 = param_1[1];
  bVar3 = *(byte *)(param_1 + 2);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  cVar4 = (char)param_2[2];
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (cVar4 == '\0') {
          FUN_104a4928c(lVar6,lVar8,0);
          FUN_104a4928c(lVar1,lVar2,0);
          return (uint)((int)lVar6 == (int)lVar1);
        }
        goto LAB_104a4c11c;
      }
      if (cVar4 == '\x01') {
        if ((lVar6 == lVar1) && (lVar8 == lVar2)) {
          FUN_104a4c704(lVar6,lVar8,1);
          FUN_104a4c704(lVar6,lVar8,1);
          FUN_104a4928c(lVar6,lVar8,1);
          FUN_104a4928c(lVar6,lVar8,1);
          return 1;
        }
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,1);
        FUN_104a4c704(lVar6,lVar8,1);
        FUN_104a4928c(lVar6,lVar8,1);
        uVar9 = 1;
        goto LAB_104a4c418;
      }
    }
    else if (bVar3 == 2) {
      if (cVar4 == '\x02') {
        if ((lVar6 == lVar1) && (lVar8 == lVar2)) {
          FUN_104a4c704(lVar6,lVar8,2);
          FUN_104a4c704(lVar6,lVar8,2);
          FUN_104a4928c(lVar6,lVar8,2);
          uVar9 = 2;
          goto LAB_104a4c188;
        }
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,2);
        FUN_104a4c704(lVar6,lVar8,2);
        FUN_104a4928c(lVar6,lVar8,2);
        uVar9 = 2;
        goto LAB_104a4c418;
      }
    }
    else {
      if (bVar3 == 3) {
        if (cVar4 != '\x03') {
          _objc_retain(lVar6);
          goto LAB_104a4c11c;
        }
        func_0x0001007bbbf8(0);
        FUN_104a4c704(lVar1,lVar2,3);
        FUN_104a4c704(lVar6,lVar8,3);
        lVar7 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(lVar6,lVar1);
        uVar5 = (uint)lVar7;
        FUN_104a4928c(lVar6,lVar8,3);
        uVar9 = 3;
LAB_104a4c418:
        FUN_104a4928c(lVar1,lVar2,uVar9);
        return uVar5 & 1;
      }
      if (cVar4 == '\x04') {
        if ((lVar6 == lVar1) && (lVar8 == lVar2)) {
          FUN_104a4c704(lVar6,lVar8,4);
          FUN_104a4c704(lVar6,lVar8,4);
          FUN_104a4928c(lVar6,lVar8,4);
          uVar9 = 4;
          goto LAB_104a4c188;
        }
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,4);
        FUN_104a4c704(lVar6,lVar8,4);
        FUN_104a4928c(lVar6,lVar8,4);
        uVar9 = 4;
        goto LAB_104a4c418;
      }
    }
  }
  else if (bVar3 < 7) {
    if (bVar3 == 5) {
      if (cVar4 == '\x05') {
        if ((lVar6 != lVar1) || (lVar8 != lVar2)) {
          lVar7 = lVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar6,lVar8,lVar1,lVar2,0);
          uVar5 = (uint)lVar7;
          FUN_104a4c704(lVar1,lVar2,5);
          FUN_104a4c704(lVar6,lVar8,5);
          FUN_104a4928c(lVar6,lVar8,5);
          uVar9 = 5;
          goto LAB_104a4c418;
        }
        FUN_104a4c704(lVar6,lVar8,5);
        FUN_104a4c704(lVar6,lVar8,5);
        FUN_104a4928c(lVar6,lVar8,5);
        uVar9 = 5;
LAB_104a4c188:
        FUN_104a4928c(lVar6,lVar8,uVar9);
        return 1;
      }
    }
    else if (cVar4 == '\x06') {
      if ((lVar6 != lVar1) || (lVar8 != lVar2)) {
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,6);
        FUN_104a4c704(lVar6,lVar8,6);
        FUN_104a4928c(lVar6,lVar8,6);
        uVar9 = 6;
        goto LAB_104a4c418;
      }
      FUN_104a4c704(lVar6,lVar8,6);
      FUN_104a4c704(lVar6,lVar8,6);
      FUN_104a4928c(lVar6,lVar8,6);
      uVar9 = 6;
      goto LAB_104a4c188;
    }
  }
  else if (bVar3 == 7) {
    if (cVar4 == '\a') {
      if ((lVar6 != lVar1) || (lVar8 != lVar2)) {
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,7);
        FUN_104a4c704(lVar6,lVar8,7);
        FUN_104a4928c(lVar6,lVar8,7);
        uVar9 = 7;
        goto LAB_104a4c418;
      }
      FUN_104a4c704(lVar6,lVar8,7);
      FUN_104a4c704(lVar6,lVar8,7);
      FUN_104a4928c(lVar6,lVar8,7);
      uVar9 = 7;
      goto LAB_104a4c188;
    }
  }
  else {
    if (bVar3 != 8) {
      if (lVar6 == 0 && lVar8 == 0) {
        if ((cVar4 == '\t') && (lVar2 == 0 && lVar1 == 0)) {
          FUN_104a4928c(lVar6,lVar8,9);
          lVar6 = 0;
          lVar8 = 0;
          uVar9 = 9;
          goto LAB_104a4c188;
        }
      }
      else if (((cVar4 == '\t') && (lVar1 == 1)) && (lVar2 == 0)) {
        FUN_104a4928c(lVar6,lVar8,9);
        FUN_104a4928c(1,0,9);
        return 1;
      }
      goto LAB_104a4c11c;
    }
    if (cVar4 == '\b') {
      if ((lVar6 != lVar1) || (lVar8 != lVar2)) {
        lVar7 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar6,lVar8,lVar1,lVar2,0);
        uVar5 = (uint)lVar7;
        FUN_104a4c704(lVar1,lVar2,8);
        FUN_104a4c704(lVar6,lVar8,8);
        FUN_104a4928c(lVar6,lVar8,8);
        uVar9 = 8;
        goto LAB_104a4c418;
      }
      FUN_104a4c704(lVar6,lVar8,8);
      FUN_104a4c704(lVar6,lVar8,8);
      FUN_104a4928c(lVar6,lVar8,8);
      uVar9 = 8;
      goto LAB_104a4c188;
    }
  }
  _swift_bridgeObjectRetain(lVar8);
LAB_104a4c11c:
  FUN_104a4c704(lVar1,lVar2,cVar4);
  FUN_104a4928c(lVar6,lVar8,bVar3);
  FUN_104a4928c(lVar1,lVar2,cVar4);
  return 0;
}



/* Entry: 104a4c434; end: 104a4c703;  */

undefined * FUN_104a4c434(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001048db364(0x1130a5558);
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4c700);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        _objc_retain();
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000100979f8c(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _objc_release(uVar5);
              goto LAB_104a4c61c;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4c704);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_104a4c61c:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        FUN_104a4bbc8(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4c6f8);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000100979f8c(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _swift_unknownObjectRelease(puVar7);
              goto joined_r0x000104a4c508;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104a4c6fc);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x000104a4c508:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 104a4c704; end: 104a4c79f;  */

void FUN_104a4c704(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 5) {
    if (param_3 < 3) {
      if ((param_3 != 1) && (param_3 != 2)) {
        return;
      }
    }
    else {
      if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_11034d2d8)();
        return;
      }
      if (param_3 != 4) {
        return;
      }
    }
  }
  else if (param_3 < 7) {
    if ((param_3 != 5) && (param_3 != 6)) {
      return;
    }
  }
  else if ((param_3 != 7) && (param_3 != 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 104a4c7a0; end: 104a4c7ff;  */

void FUN_104a4c7a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a5520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4db10;
  _swift_getWitnessTable(&UNK_10dd4db10,&UNK_1107bfde8);
  puRam00000001130a5520 = puVar1;
  return;
}



/* Entry: 104a4c800; end: 104a4c823;  */

void FUN_104a4c800(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e827a18);
  return;
}



/* Entry: 104a4c824; end: 104a4c8bf;  */

undefined8 * FUN_104a4c824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_104a4c704(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 104a4c8c0; end: 104a4c903;  */

undefined8 * FUN_104a4c8c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104a4928c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 104a4c904; end: 104a4c9e3;  */

int FUN_104a4c904(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


