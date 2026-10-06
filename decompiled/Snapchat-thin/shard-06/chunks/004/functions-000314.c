/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10491ac4c; end: 10491adef;  */

ulong FUN_10491ac4c(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad34);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad38);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10491adf0);
  (*pcVar2)();
}



/* Entry: 10491adf0; end: 10491aef7;  */

void FUN_10491adf0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  
  lVar6 = *(long *)(param_1 + 8);
  lVar2 = lVar6;
  __ss22_minimumMergeRunLengthyS2iF();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 < lVar6) {
    if (lVar6 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10491aef4);
      (*pcVar1)();
    }
    puVar5 = (undefined *)(lVar6 / 2);
    if (lVar6 < 2) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      uVar3 = 0;
      FUN_104936728(0);
      puVar4 = puVar5;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar5,uVar3);
      *(undefined **)(((ulong)puVar4 & 0xfffffffffffff8) + 0x10) = puVar5;
    }
    lStack_50 = ((ulong)puVar4 & 0xffffffffffffff8) + 0x20;
    puStack_48 = puVar5;
    FUN_10491aef8(&lStack_50,auStack_38,param_1,lVar2);
    *(undefined8 *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10491aef8);
      (*pcVar1)();
    }
    if (lVar6 != 0) {
      FUN_10491b2c0(0,lVar6,1,param_1);
    }
  }
  return;
}



/* Entry: 10491aef8; end: 10491b2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491aef8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_3[1];
  if (lVar17 < 1) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar16 = *param_3;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar20 = 0;
    do {
      puVar5 = puStack_58;
      lVar14 = lVar20 + 1;
      if (lVar14 < lVar17) {
        lVar6 = *(long *)(*(long *)(lVar16 + lVar14 * 8) + _DAT_11309da78);
        lVar8 = *(long *)(*(long *)(lVar16 + lVar20 * 8) + _DAT_11309da78);
        lVar19 = lVar20 + 2;
        lVar12 = lVar6;
        do {
          lVar11 = lVar19;
          lVar14 = lVar17;
          if (lVar17 == lVar11) break;
          lVar14 = *(long *)(*(long *)(lVar16 + lVar11 * 8) + _DAT_11309da78);
          bVar2 = lVar14 <= lVar12;
          lVar19 = lVar11 + 1;
          lVar12 = lVar14;
          lVar14 = lVar11;
        } while (lVar8 < lVar6 != bVar2);
        if (lVar8 < lVar6) {
          if (lVar14 < lVar20) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b294);
            (*pcVar1)();
          }
          if (lVar20 < lVar14) {
            puVar7 = (undefined8 *)(lVar16 + lVar14 * 8);
            puVar9 = (undefined8 *)(lVar16 + lVar20 * 8);
            lVar19 = lVar14;
            lVar17 = lVar20;
            do {
              puVar7 = puVar7 + -1;
              lVar19 = lVar19 + -1;
              if (lVar17 != lVar19) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b2b4);
                  (*pcVar1)();
                }
                uVar13 = *puVar9;
                *puVar9 = *puVar7;
                *puVar7 = uVar13;
              }
              lVar17 = lVar17 + 1;
              puVar9 = puVar9 + 1;
            } while (lVar17 < lVar19);
            lVar17 = param_3[1];
          }
        }
      }
      lVar19 = lVar14;
      if (lVar14 < lVar17) {
        if (SBORROW8(lVar14,lVar20)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b290);
          (*pcVar1)();
        }
        if (lVar14 - lVar20 < param_4) {
          if (SCARRY8(lVar20,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b298);
            (*pcVar1)();
          }
          lVar16 = lVar20 + param_4;
          if (lVar17 <= lVar20 + param_4) {
            lVar16 = lVar17;
          }
          if (lVar16 < lVar20) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b29c);
            (*pcVar1)();
          }
          if (lVar14 != lVar16) {
            lVar17 = *param_3;
            plVar10 = (long *)(lVar17 + lVar14 * 8 + -8);
            lVar12 = lVar20 - lVar14;
            do {
              lVar6 = *(long *)(lVar17 + lVar14 * 8);
              lVar19 = lVar12;
              plVar15 = plVar10;
              do {
                lVar8 = *plVar15;
                if (*(long *)(lVar6 + _DAT_11309da78) <= *(long *)(lVar8 + _DAT_11309da78)) break;
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b2a0);
                  (*pcVar1)();
                }
                *plVar15 = lVar6;
                plVar15[1] = lVar8;
                bVar2 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                plVar15 = plVar15 + -1;
              } while (bVar2);
              lVar14 = lVar14 + 1;
              plVar10 = plVar10 + 1;
              lVar12 = lVar12 + -1;
              lVar19 = lVar16;
            } while (lVar14 != lVar16);
          }
        }
      }
      if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b284);
        (*pcVar1)();
      }
      puVar3 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_104915184(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar18 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar18) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_104915184(puVar5,uVar18 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar18 + 1;
      *(long *)(puVar5 + uVar18 * 0x10 + 0x20) = lVar20;
      *(long *)(puVar5 + uVar18 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b2b8);
        (*pcVar1)();
      }
      FUN_10491b338(&puStack_58,*param_1,param_3);
      puVar5 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10491b254;
      lVar16 = *param_3;
      lVar17 = param_3[1];
      lVar20 = lVar19;
    } while (lVar19 < lVar17);
  }
  puVar5 = puStack_58;
  lVar17 = *param_1;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b2c0);
    (*pcVar1)();
  }
  puVar3 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar18 = *(ulong *)(puVar5 + 0x10);
  while (puStack_58 = puVar5, 1 < uVar18) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b2bc);
      (*pcVar1)();
    }
    lVar14 = uVar18 - 1;
    lVar19 = *(long *)(puVar5 + uVar18 * 0x10);
    lVar20 = *(long *)(puVar5 + lVar14 * 0x10 + 0x28);
    FUN_10491b5a4(lVar16 + lVar19 * 8,lVar16 + *(long *)(puVar5 + lVar14 * 0x10 + 0x20) * 8,
                  lVar16 + lVar20 * 8,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar20 < lVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b288);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b28c);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar18 * 0x10) = lVar19;
    *(long *)((long)(puVar5 + uVar18 * 0x10) + 8) = lVar20;
    puStack_58 = puVar5;
    FUN_10492fd30(lVar14);
    puVar5 = puStack_58;
    uVar18 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10491b254:
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Entry: 10491b2c0; end: 10491b337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491b2c0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 8);
      lVar6 = param_1;
      plVar7 = plVar4;
      do {
        lVar8 = *plVar7;
        if (*(long *)(lVar5 + _DAT_11309da78) <= *(long *)(lVar8 + _DAT_11309da78)) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10491b338);
          (*pcVar1)();
        }
        *plVar7 = lVar5;
        plVar7[1] = lVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10491b338; end: 10491b5a3;  */

undefined8 FUN_10491b338(ulong *param_1,undefined8 param_2,long *param_3)

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
LAB_10491b3f0:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b56c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b574);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b580);
            (*pcVar4)();
          }
          if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b588);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 <= lVar7 + lVar3) {
            lVar10 = uVar6 - 2;
            if (lVar3 <= lVar12) {
              lVar10 = lVar9;
            }
            goto LAB_10491b490;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b58c);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b57c);
          (*pcVar4)();
        }
        lVar2 = uVar8 + lVar9 * 0x10;
        lVar12 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b584);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b564);
          (*pcVar4)();
        }
        lVar12 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b568);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar7;
        if (SBORROW8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b570);
          (*pcVar4)();
        }
        if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b578);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar12 + lVar3 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40))
        goto LAB_10491b3f0;
        plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
        lVar2 = *plVar1;
        lVar7 = plVar1[1];
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b590);
          (*pcVar4)();
        }
        lVar10 = uVar6 - 2;
        if (lVar7 - lVar2 <= lVar12) {
          lVar10 = lVar9;
        }
      }
LAB_10491b490:
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b558);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b5a4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar2 = plVar1[1];
      FUN_10491b5a4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar2 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar2 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b55c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10491b560);
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



/* Entry: 10491b5a4; end: 10491b7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10491b5a4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar3;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar10 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar10 = lVar8;
  }
  lVar10 = lVar10 >> 3;
  lVar9 = (long)param_3 - (long)param_2;
  lVar11 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar11 = lVar9;
  }
  lVar11 = lVar11 >> 3;
  if (lVar10 < lVar11) {
    if ((param_4 != param_1) || (param_1 + lVar10 <= param_4)) {
      _memmove(param_4,param_1,lVar10 << 3);
    }
    plVar3 = param_4 + lVar10;
    plVar6 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar10 = *param_2;
        if (*(long *)(*param_4 + _DAT_11309da78) < *(long *)(lVar10 + _DAT_11309da78)) {
          plVar7 = param_4;
          plVar4 = param_2 + 1;
          plVar5 = param_2;
        }
        else {
          lVar10 = *param_4;
          plVar7 = param_4 + 1;
          plVar4 = param_2;
          plVar5 = param_4;
        }
        param_2 = plVar4;
        param_4 = plVar7;
        if (plVar6 != plVar5) {
          *plVar6 = lVar10;
        }
        plVar6 = plVar6 + 1;
      } while (param_4 < plVar3);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar11 <= param_4)) {
      _memmove(param_4,param_2,lVar11 << 3);
    }
    plVar5 = param_4 + lVar11;
    plVar3 = plVar5;
    plVar6 = param_2;
    if (7 < lVar9) {
      while (plVar3 = plVar5, plVar6 = param_2, param_1 < param_2) {
        plVar4 = param_2 + -1;
        plVar7 = param_3;
        while( true ) {
          param_3 = plVar7 + -1;
          plVar3 = plVar5 + -1;
          if (*(long *)(*plVar4 + _DAT_11309da78) < *(long *)(*plVar3 + _DAT_11309da78)) break;
          if (plVar7 != plVar5) {
            *param_3 = *plVar3;
          }
          plVar5 = plVar3;
          plVar7 = param_3;
          if (plVar3 <= param_4) goto LAB_10491b764;
        }
        if (plVar7 != param_2) {
          *param_3 = *plVar4;
        }
        plVar3 = plVar5;
        plVar6 = plVar4;
        param_2 = plVar4;
        if (plVar5 <= param_4) break;
      }
    }
  }
LAB_10491b764:
  uVar2 = (long)plVar3 - (long)param_4;
  uVar1 = uVar2 + 7;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  if ((plVar6 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar6)) {
    _memmove(plVar6,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10491b7c4; end: 10491b837;  */

ulong FUN_10491b7c4(undefined8 param_1,undefined8 param_2)

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
  if (7 < uVar2) {
    uVar2 = 8;
  }
  return uVar2;
}



/* Entry: 10491b838; end: 10491b943;  */

undefined8 FUN_10491b838(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10491b944; end: 10491baa3;  */

undefined * FUN_10491b944(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_58;
  
  puStack_58 = (undefined *)0x0;
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_10491ba6c:
      puStack_58 = (undefined *)0x0;
    }
    else {
      plVar9 = (long *)(param_1 + 0x20);
      uVar2 = 0;
      FUN_104936728(0);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      do {
        lVar7 = *plVar9;
        _objc_allocWithZone(uVar2);
        _swift_bridgeObjectRetain();
        FUN_104935bfc();
        if (lVar7 == 0) {
          _swift_bridgeObjectRelease(puVar5);
          goto LAB_10491ba6c;
        }
        _objc_retain();
        puVar4 = puVar5;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xfffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((long)puVar5 < 0) {
              puVar3 = puVar5;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x000104915028(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000104915028(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar7;
        _objc_release(lVar7);
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      puStack_58 = puVar5;
      FUN_104919a5c(&puStack_58);
    }
  }
  return puStack_58;
}



/* Entry: 10491baa4; end: 10491bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491baa4(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == 0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
    uVar13 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd94);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_1 + 0x20 + uVar13 * 8);
          _objc_retain();
        }
        else {
          uVar5 = uVar13;
          FUN_10491ac4c(uVar13,param_1,FUN_104936728,0x656c75524d4541,0xe700000000000000);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd90);
          (*pcVar3)();
        }
        uVar13 = uVar13 + 1;
        uVar14 = *(ulong *)(uVar5 + _DAT_11309da68);
        if (uVar14 >> 0x3e != 0) break;
        uVar17 = *(ulong *)((uVar14 & 0xfffffffffffff8) + 0x10);
        if (uVar17 != 0) goto LAB_10491bbc0;
LAB_10491bd6c:
        _objc_release();
        if (uVar13 == uVar11) {
          return;
        }
      }
      uVar17 = uVar14 & 0xffffffffffffff8;
      if ((long)uVar14 < 0) {
        uVar17 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (uVar17 == 0) goto LAB_10491bd6c;
LAB_10491bbc0:
      _swift_bridgeObjectRetain(uVar14);
      uVar15 = 0;
      do {
        if ((uVar14 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd8c);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar14 + 0x20 + uVar15 * 8);
          _objc_retain();
        }
        else {
          uVar6 = uVar15;
          FUN_10491ac4c(uVar15,uVar14,0x10491d944,0x746e6576454d4541,0xe800000000000000);
        }
        lVar10 = _DAT_11309d7b0;
        bVar4 = SCARRY8(uVar15,1);
        uVar15 = uVar15 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd88);
          (*pcVar3)();
        }
        _swift_beginAccess(uVar6 + _DAT_11309d7b0,auStack_80,0,0);
        lVar10 = *(long *)(uVar6 + lVar10);
        if (lVar10 != 0) {
          uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
          uVar16 = 0xffffffffffffffff;
          if ((long)uVar9 < 0x40) {
            uVar16 = ~(-1L << (uVar9 & 0x3f));
          }
          uVar16 = uVar16 & *(ulong *)(lVar10 + 0x40);
          _swift_bridgeObjectRetain(lVar10);
          lVar12 = 0;
          while( true ) {
            for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
              uVar2 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
              uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              puVar1 = (undefined8 *)
                       (*(long *)(lVar10 + 0x30) +
                       (lVar12 << 10 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 4));
              uVar7 = *puVar1;
              uVar8 = puVar1[1];
              __sSS10uppercasedSSyF(uVar7,uVar8);
              func_0x000100403b00(auStack_90,uVar7,uVar8);
              _swift_bridgeObjectRelease(uStack_88);
            }
            bVar4 = SCARRY8(lVar12,1);
            lVar12 = lVar12 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd84);
              (*pcVar3)();
            }
            if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
            uVar16 = ((ulong *)(lVar10 + 0x40))[lVar12];
          }
          _swift_release(lVar10);
        }
        _objc_release(uVar6);
      } while (uVar15 != uVar17);
      _objc_release(uVar5);
      _swift_bridgeObjectRelease(uVar14);
    } while (uVar13 != uVar11);
  }
  return;
}



/* Entry: 10491bdd8; end: 10491bf0f;  */

void FUN_10491bdd8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10491bf10; end: 10491bf17;  */

void FUN_10491bf10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010491bf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x98))();
  return;
}



/* Entry: 10491bf18; end: 10491c103;  */

int FUN_10491bf18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10491bf94;
        goto LAB_10491bf78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10491bf78:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_10491bf94:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10491c104; end: 10491c107;  */

ulong FUN_10491c104(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10491c108; end: 10491c17b;  */

ulong FUN_10491c108(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10491c17c; end: 10491c203;  */

undefined8 FUN_10491c17c(void)

{
  return 4;
}



/* Entry: 10491c204; end: 10491c32b;  */

uint FUN_10491c204(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = -0x15ffffffffff9a93;
  bVar4 = *param_1;
  bVar5 = *param_2;
  lVar7 = 0x79636e6572727563;
  if (bVar4 != 2) {
    lVar7 = 0x746e756f6d61;
  }
  lVar1 = -0x1800000000000000;
  if (bVar4 != 2) {
    lVar1 = -0x1a00000000000000;
  }
  lVar2 = lVar8;
  lVar3 = 0x616e5f746e657665;
  if (bVar4 != 0) {
    lVar2 = -0x1a00000000000000;
    lVar3 = 0x7365756c6176;
  }
  if (bVar4 < 2) {
    lVar1 = lVar2;
    lVar7 = lVar3;
  }
  lVar2 = 0x79636e6572727563;
  if (bVar5 != 2) {
    lVar2 = 0x746e756f6d61;
  }
  lVar3 = -0x1800000000000000;
  if (bVar5 != 2) {
    lVar3 = -0x1a00000000000000;
  }
  lVar6 = 0x616e5f746e657665;
  if (bVar5 != 0) {
    lVar8 = -0x1a00000000000000;
    lVar6 = 0x7365756c6176;
  }
  if (bVar5 < 2) {
    lVar3 = lVar8;
    lVar2 = lVar6;
  }
  if ((lVar7 == lVar2) && (lVar1 == lVar3)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar7,lVar1,lVar2,lVar3,0);
    uVar9 = (uint)lVar7;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar3);
  return uVar9 & 1;
}



/* Entry: 10491c32c; end: 10491c557;  */

void FUN_10491c32c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xea0000000000656d;
  uVar1 = 0x79636e6572727563;
  if (bVar3 != 2) {
    uVar1 = 0x746e756f6d61;
  }
  uVar2 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar4 = 0x616e5f746e657665;
  if (bVar3 != 0) {
    uVar5 = 0xe600000000000000;
    uVar4 = 0x7365756c6176;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10491c558; end: 10491c643;  */

void FUN_10491c558(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xea0000000000656d;
  uVar1 = 0x79636e6572727563;
  if (bVar3 != 2) {
    uVar1 = 0x746e756f6d61;
  }
  uVar2 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar4 = 0x616e5f746e657665;
  if (bVar3 != 0) {
    uVar5 = 0xe600000000000000;
    uVar4 = 0x7365756c6176;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10491c644; end: 10491c667;  */

void FUN_10491c644(undefined1 *param_1,undefined1 param_2)

{
  FUN_10491d7c4();
  *param_1 = param_2;
  return;
}



/* Entry: 10491c668; end: 10491c67f;  */

undefined1  [16] FUN_10491c668(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10491c680; end: 10491c6cf;  */

void FUN_10491c680(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010491dadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10491c6d0; end: 10491c767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10491c6d0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309d7a8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10491c768; end: 10491c797;  */

void FUN_10491c768(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10491c798(param_1);
  return;
}



/* Entry: 10491c798; end: 10491cc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491c798(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  lVar3 = _DAT_11309d7b0;
  *(undefined8 *)(unaff_x20 + _DAT_11309d7b0) = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      _swift_bridgeObjectRetain(param_1);
      lVar5 = 0x616e5f746e657665;
      uVar12 = 0xea0000000000656d;
      func_0x000100029284(0x616e5f746e657665);
      if ((uVar12 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
      }
      else {
        func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,&puStack_90);
        _swift_bridgeObjectRelease(param_1);
        puVar18 = PTR___sypN_11034f1a8;
        ppuVar6 = &puStack_a0;
        _swift_dynamicCast(ppuVar6,&puStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)ppuVar6 & 1) != 0) {
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d7a8);
          *puVar1 = puStack_a0;
          puVar1[1] = puStack_98;
          if (*(long *)(param_1 + 0x10) != 0) {
            _swift_bridgeObjectRetain(param_1);
            lVar5 = 0x7365756c6176;
            uVar12 = 0;
            func_0x000100029284(0x7365756c6176);
            if ((uVar12 & 1) != 0) {
              func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,&puStack_90);
              _swift_bridgeObjectRelease(param_1);
              goto LAB_10491c90c;
            }
            _swift_bridgeObjectRelease(param_1);
          }
          uStack_88 = 0;
          puStack_90 = (undefined *)0x0;
          lStack_78 = 0;
          uStack_80 = 0;
LAB_10491c90c:
          _swift_bridgeObjectRelease(param_1);
          if (lStack_78 == 0) {
            func_0x00010006e7f4(&puStack_90);
          }
          else {
            uVar7 = 0x11309d5b0;
            func_0x0001048db364(0x11309d5b0);
            ppuVar6 = &puStack_a0;
            _swift_dynamicCast(ppuVar6,&puStack_90,puVar18 + 8,uVar7,6);
            puVar11 = puStack_a0;
            puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (((ulong)ppuVar6 & 1) != 0) {
              uVar12 = *(ulong *)(puStack_a0 + 0x10);
              if (uVar12 != 0) {
                puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                _swift_retain();
                func_0x0001010fe67c();
                _swift_release(puVar16);
                uVar17 = 0;
                do {
                  if (*(ulong *)(puVar11 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10491cc80);
                    (*pcVar4)();
                  }
                  puVar16 = *(undefined **)(puVar11 + uVar17 * 8 + 0x20);
                  if (*(long *)(puVar16 + 0x10) == 0) {
LAB_10491cc24:
                    _swift_bridgeObjectRelease(puVar8);
LAB_10491cc2c:
                    _swift_bridgeObjectRelease(puVar11);
LAB_10491cc30:
                    param_1 = puVar1[1];
                    goto LAB_10491c8b4;
                  }
                  _swift_bridgeObjectRetain_n(puVar16,2);
                  lVar5 = 0x79636e6572727563;
                  uVar15 = 0;
                  func_0x000100029284(0x79636e6572727563);
                  if ((uVar15 & 1) == 0) {
                    _swift_bridgeObjectRelease(puVar8);
                    _swift_bridgeObjectRelease(puVar11);
                    _swift_bridgeObjectRelease_n(puVar16,2);
                    goto LAB_10491cc30;
                  }
                  func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&puStack_90);
                  _swift_bridgeObjectRelease(puVar16);
                  ppuVar6 = &puStack_a0;
                  _swift_dynamicCast(ppuVar6,&puStack_90,puVar18 + 8,PTR___sSSN_11034da80,6);
                  puVar10 = puStack_98;
                  puVar9 = puStack_a0;
                  if (((ulong)ppuVar6 & 1) == 0) {
                    _swift_bridgeObjectRelease(puVar8);
                    puVar8 = puVar16;
                    goto LAB_10491cc24;
                  }
                  if (*(long *)(puVar16 + 0x10) == 0) {
LAB_10491cbd0:
                    _swift_bridgeObjectRelease(puVar8);
                    puVar8 = puVar16;
LAB_10491cc1c:
                    _swift_bridgeObjectRelease(puVar8);
                    puVar8 = puVar10;
                    goto LAB_10491cc24;
                  }
                  lVar5 = 0x746e756f6d61;
                  uVar15 = 0;
                  func_0x000100029284(0x746e756f6d61);
                  if ((uVar15 & 1) == 0) goto LAB_10491cbd0;
                  func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&puStack_90);
                  _swift_bridgeObjectRelease(puVar16);
                  ppuVar6 = &puStack_a0;
                  _swift_dynamicCast(ppuVar6,&puStack_90,puVar18 + 8,PTR___sSdN_11034dd90,6);
                  puVar18 = puStack_a0;
                  if (((ulong)ppuVar6 & 1) == 0) goto LAB_10491cc1c;
                  uVar15 = (ulong)puVar9 & 0xffffffffffff;
                  if (((ulong)puVar10 & 0x2000000000000000) != 0) {
                    uVar15 = (ulong)puVar10 >> 0x38 & 0xf;
                  }
                  if (uVar15 == 0) {
                    _swift_bridgeObjectRelease(puVar8);
                    _swift_bridgeObjectRelease(puVar11);
                    puVar11 = puVar10;
                    goto LAB_10491cc2c;
                  }
                  puVar13 = puVar10;
                  __sSS10uppercasedSSyF();
                  _swift_bridgeObjectRelease(puVar10);
                  puVar16 = puVar8;
                  _swift_isUniquelyReferenced_nonNull_native();
                  puVar10 = puVar9;
                  puVar14 = puVar13;
                  puStack_90 = puVar8;
                  func_0x000100029284();
                  uVar15 = (ulong)~(uint)puVar14 & 1;
                  lVar5 = *(long *)(puVar8 + 0x10) + uVar15;
                  if (SCARRY8(*(long *)(puVar8 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10491cc84);
                    (*pcVar4)();
                  }
                  if (*(long *)(puVar8 + 0x18) < lVar5) {
                    func_0x000101432e00(lVar5,puVar16);
                    puVar10 = puVar9;
                    puVar16 = puVar13;
                    func_0x000100029284();
                    if (((uint)puVar14 & 1) != ((uint)puVar16 & 1)) {
                      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10491cc98);
                      (*pcVar4)();
                    }
LAB_10491cb4c:
                    if (((ulong)puVar14 & 1) == 0) goto LAB_10491cb50;
LAB_10491c990:
                    _swift_bridgeObjectRelease(puVar13);
                    *(undefined **)(*(long *)(puStack_90 + 0x38) + (long)puVar10 * 8) = puVar18;
                  }
                  else {
                    if (((ulong)puVar16 & 1) != 0) goto LAB_10491cb4c;
                    func_0x000101432c98();
                    if (((ulong)puVar14 & 1) != 0) goto LAB_10491c990;
LAB_10491cb50:
                    *(ulong *)(puStack_90 + ((ulong)puVar10 >> 6) * 8 + 0x40) =
                         *(ulong *)(puStack_90 + ((ulong)puVar10 >> 6) * 8 + 0x40) |
                         1L << ((ulong)puVar10 & 0x3f);
                    puVar2 = (undefined8 *)(*(long *)(puStack_90 + 0x30) + (long)puVar10 * 0x10);
                    *puVar2 = puVar9;
                    puVar2[1] = puVar13;
                    *(undefined **)(*(long *)(puStack_90 + 0x38) + (long)puVar10 * 8) = puVar18;
                    if (SCARRY8(*(long *)(puStack_90 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10491cc88);
                      (*pcVar4)();
                    }
                    *(long *)(puStack_90 + 0x10) = *(long *)(puStack_90 + 0x10) + 1;
                  }
                  puVar16 = puStack_90;
                  uVar17 = uVar17 + 1;
                  puVar18 = PTR___sypN_11034f1a8;
                  puVar8 = puStack_90;
                } while (uVar12 != uVar17);
                _swift_bridgeObjectRelease(puVar11);
                _swift_beginAccess(unaff_x20 + lVar3,&puStack_90,1,0);
                puStack_a0 = *(undefined **)(unaff_x20 + lVar3);
                *(undefined **)(unaff_x20 + lVar3) = puVar16;
              }
              _swift_bridgeObjectRelease(puStack_a0);
            }
          }
          _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
          return;
        }
      }
    }
LAB_10491c8b4:
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar3));
  _swift_deallocPartialClassInstance();
  return;
}



/* Entry: 10491cc98; end: 10491cc9f; +[_TtC8FBAEMKit8AEMEvent supportsSecureCoding] */

undefined8 FUN_10491cc98(void)

{
  return 1;
}



/* Entry: 10491cca0; end: 10491cca7;  */

undefined8 FUN_10491cca0(void)

{
  return 1;
}



/* Entry: 10491cca8; end: 10491ccd7;  */

void FUN_10491cca8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10491ccd8(param_1);
  return;
}



/* Entry: 10491ccd8; end: 10491cedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10491ccd8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10491d838(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar7 = 0x616e5f746e657665;
  lVar3 = lVar2;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar3 == 0) {
    lVar8 = 0;
    lVar7 = -0x2000000000000000;
  }
  else {
    lVar8 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  lVar3 = 0x11309d6d8;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  uVar4 = 0;
  FUN_10491d838(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = 0;
  FUN_10491d838(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  *(long *)(lVar3 + 0x30) = lVar2;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (auStack_70,lVar3,0x7365756c6176,0xe600000000000000);
  _swift_bridgeObjectRelease(lVar3);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    uVar4 = 0;
  }
  else {
    uVar4 = 0x11309d7b8;
    func_0x0001048db364(0x11309d7b8);
    puVar5 = &uStack_88;
    _swift_dynamicCast(puVar5,auStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_88;
    if ((int)puVar5 == 0) {
      uVar4 = 0;
    }
  }
  _objc_allocWithZone();
  lVar3 = _DAT_11309d7b0;
  *(undefined8 *)(unaff_x20 + _DAT_11309d7b0) = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_11309d7a8);
  *plVar1 = lVar8;
  plVar1[1] = lVar7;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_70,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  puVar6 = auStack_80;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar6;
}



/* Entry: 10491cedc; end: 10491cf03; -[_TtC8FBAEMKit8AEMEvent initWithCoder:] */

void FUN_10491cedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10491ccd8();
  return;
}



/* Entry: 10491cf04; end: 10491d053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491cf04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d7a8);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = 0x616e5f746e657665;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x616e5f746e657665,0xea0000000000656d);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar5 = _DAT_11309d7b0;
  _swift_beginAccess(unaff_x20 + _DAT_11309d7b0,auStack_70,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    lVar3 = lVar5;
    _swift_bridgeObjectRetain(lVar5);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar5);
    uVar4 = 0x7365756c6176;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7365756c6176,0xe600000000000000);
    _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar3,uVar4);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10491d054; end: 10491d0a3; -[_TtC8FBAEMKit8AEMEvent encodeWithCoder:] */

void FUN_10491d054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10491cf04(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10491d0a4; end: 10491d243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10491d0a4(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = alStack_78;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar3 & 1) != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_11309d7a8);
      _swift_beginAccess(puVar1,auStack_60,0,0);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      puVar1 = (ulong *)(alStack_78[0] + _DAT_11309d7a8);
      _swift_beginAccess(puVar1,alStack_78,0,0);
      if ((uVar4 == *puVar1 && uVar2 == puVar1[1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,*puVar1,puVar1[1],0), (uVar4 & 1) != 0)) {
        lVar6 = _DAT_11309d7b0;
        _swift_beginAccess(unaff_x20 + _DAT_11309d7b0,auStack_90,0,0);
        lVar5 = _DAT_11309d7b0;
        lVar7 = *(long *)(unaff_x20 + lVar6);
        _swift_beginAccess(alStack_78[0] + _DAT_11309d7b0,auStack_a8,0,0);
        lVar6 = *(long *)(alStack_78[0] + lVar5);
        if (lVar7 == 0) {
          _swift_bridgeObjectRetain(lVar6);
          _objc_release(alStack_78[0]);
          if (lVar6 == 0) {
            uVar8 = 1;
            goto LAB_10491d220;
          }
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_10491d21c;
        }
        if (lVar6 != 0) {
          _swift_bridgeObjectRetain(lVar6);
          lVar5 = lVar7;
          _swift_bridgeObjectRetain(lVar7);
          uVar8 = (uint)lVar5;
          func_0x0001016e661c();
          _swift_bridgeObjectRelease(lVar7);
          _objc_release(alStack_78[0]);
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_10491d220;
        }
      }
      _objc_release(alStack_78[0]);
    }
  }
LAB_10491d21c:
  uVar8 = 0;
LAB_10491d220:
  return uVar8 & 1;
}



/* Entry: 10491d244; end: 10491d2c3; -[_TtC8FBAEMKit8AEMEvent isEqual:] */

uint FUN_10491d244(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10491d0a4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10491d2c4; end: 10491d30f;  */

void FUN_10491d2c4(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10491d310; end: 10491d36f; -[_TtC8FBAEMKit8AEMEvent init] */

void FUN_10491d310(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBAEMKit.AEMEvent",0x11,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10491d33c);
  (*pcVar1)();
}



/* Entry: 10491d370; end: 10491d3ab; -[_TtC8FBAEMKit8AEMEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491d370(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d7a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309d7b0));
  return;
}



/* Entry: 10491d3ac; end: 10491d3b7;  */

void FUN_10491d3ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001048db364(0x11309d650);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10491d480;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_10491d480:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10491d514);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10491d4ec;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10491d4ec:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10491d3b8; end: 10491d513;  */

void FUN_10491d3b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001048db364();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10491d480;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_10491d480:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10491d514);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10491d4ec;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10491d4ec:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10491d514; end: 10491d52b;  */

void FUN_10491d514(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x11309d688;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001048db364(0x11309d688);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10491d790:
    _swift_release(lVar17);
LAB_10491d798:
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10491d7c0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar17);
            goto LAB_10491d798;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_10491d790;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10491d7c4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10491d52c; end: 10491d7c3;  */

void FUN_10491d52c(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001048db364(param_3);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10491d790:
    _swift_release(lVar17);
LAB_10491d798:
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10491d7c0);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar17);
            goto LAB_10491d798;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_10491d790;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar3,uVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10491d7c4);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10491d7c4; end: 10491d837;  */

ulong FUN_10491d7c4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10491d838; end: 10491d96f;  */

void FUN_10491d838(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10491d970; end: 10491d977;  */

void FUN_10491d970(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010491d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 10491d978; end: 10491dfb3;  */

int FUN_10491d978(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10491d9f4;
        goto LAB_10491d9d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10491d9d8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10491d9f4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10491dfb4; end: 10491e063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491dfb4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (**(code **)(lVar5 + 0x10))(auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  lVar1 = _DAT_11309d850;
  lVar4 = *param_2;
  _swift_beginAccess(lVar4 + _DAT_11309d850,auStack_58,0x21,0);
  (**(code **)(lVar5 + 0x28))(lVar4 + lVar1,auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2)
  ;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 10491e064; end: 10491e133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491e064(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309d850;
  _swift_beginAccess(unaff_x20 + _DAT_11309d850,auStack_48,0,0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,lVar2);
  return;
}



/* Entry: 10491e134; end: 10491e533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10491e134(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309d858);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10491e534; end: 10491e5bf;  */

void FUN_10491e534(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  func_0x000104924710(param_1,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                      0x11309c628);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0x238))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10491e5c0; end: 10491e783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491e5c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309d888;
  _swift_beginAccess(unaff_x20 + _DAT_11309d888,auStack_48,0,0);
  func_0x000104924710(unaff_x20 + lVar1,param_1,0x11309c628);
  return;
}



/* Entry: 10491e784; end: 10491e787;  */

ulong FUN_10491e784(undefined8 param_1,undefined8 param_2)

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
  if (2 < uVar2) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 10491e788; end: 10491e7d3;  */

undefined1  [16] FUN_10491e788(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x444e415242;
    if (param_1 != '\x01') {
      uVar1 = 0x53415043;
    }
    uVar2 = 0xe500000000000000;
    if (param_1 != '\x01') {
      uVar2 = 0xe400000000000000;
    }
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xe700000000000000;
  auVar4._0_8_ = 0x544c5541464544;
  return auVar4;
}



/* Entry: 10491e7d4; end: 10491e8bb;  */

uint FUN_10491e7d4(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  lVar2 = 0x444e415242;
  if (cVar5 != '\x01') {
    lVar2 = 0x53415043;
  }
  lVar1 = -0x1b00000000000000;
  if (cVar5 != '\x01') {
    lVar1 = -0x1c00000000000000;
  }
  lVar7 = 0x544c5541464544;
  if (cVar5 != '\0') {
    lVar7 = lVar2;
  }
  lVar2 = -0x1900000000000000;
  if (cVar5 != '\0') {
    lVar2 = lVar1;
  }
  lVar1 = 0x444e415242;
  if (cVar6 != '\x01') {
    lVar1 = 0x53415043;
  }
  lVar3 = -0x1b00000000000000;
  if (cVar6 != '\x01') {
    lVar3 = -0x1c00000000000000;
  }
  lVar4 = 0x544c5541464544;
  if (cVar6 != '\0') {
    lVar4 = lVar1;
  }
  lVar1 = -0x1900000000000000;
  if (cVar6 != '\0') {
    lVar1 = lVar3;
  }
  if ((lVar7 == lVar4) && (lVar2 == lVar1)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar7,lVar2,lVar4,lVar1,0);
    uVar8 = (uint)lVar7;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar1);
  return uVar8 & 1;
}



/* Entry: 10491e8bc; end: 10491ea7b;  */

void FUN_10491e8bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x444e415242;
  if (cVar4 != '\x01') {
    uVar3 = 0x53415043;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x544c5541464544;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10491ea7c; end: 10491eacf;  */

void FUN_10491ea7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x444e415242;
  if (cVar4 != '\x01') {
    uVar3 = 0x53415043;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x544c5541464544;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10491ead0; end: 10491fd9b;  */

void FUN_10491ead0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long alStack_190 [13];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lVar8;
  
  lVar13 = 0x11309c628;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = auStack_120 + -uVar12;
  lVar13 = (long)puVar14 - uVar12;
  if (param_1 == 0) {
    return;
  }
  lStack_c8 = 0x6e676961706d6163;
  uStack_c0 = 0xec0000007364695f;
  puVar10 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&lStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491ebac:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491ebac;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  puVar10 = PTR___sypN_11034f1a8;
  if (lStack_78 == 0) goto LAB_10491ed30;
  plVar6 = &lStack_c8;
  _swift_dynamicCast(plVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uVar2 = uStack_c0;
  lVar1 = lStack_c8;
  if (((ulong)plVar6 & 1) == 0) goto LAB_10491ed54;
  lStack_c8 = 0x656b6f745f736361;
  uStack_c0 = 0xe90000000000006e;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&lStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491ec70:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491ec70;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    _swift_bridgeObjectRelease(uVar2);
LAB_10491ed30:
    _swift_bridgeObjectRelease(param_1);
    func_0x000104924754(&uStack_90,0x11309c428);
    return;
  }
  plVar6 = &lStack_c8;
  _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar6 & 1) == 0) {
    _swift_bridgeObjectRelease(uVar2);
LAB_10491ed54:
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  uStack_d8 = uStack_c0;
  lStack_d0 = lStack_c8;
  uStack_90 = 0x735f646572616873;
  uStack_88 = 0xed00007465726365;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&uStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491ed88:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491ed88;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
    uStack_e8 = 0;
    lStack_e0 = 0;
  }
  else {
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
    uStack_e8 = uStack_c0;
    lStack_e0 = lStack_c8;
    if ((int)plVar6 == 0) {
      lStack_e0 = 0;
      uStack_e8 = 0;
    }
  }
  uStack_90 = 0x695f6769666e6f63;
  uStack_88 = 0xe900000000000064;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&uStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491ee58:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491ee58;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
    uStack_f8 = 0;
    lStack_f0 = 0;
  }
  else {
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
    uStack_f8 = uStack_c0;
    lStack_f0 = lStack_c8;
    if ((int)plVar6 == 0) {
      lStack_f0 = 0;
      uStack_f8 = 0;
    }
  }
  uStack_90 = 0x7369747265766461;
  uStack_88 = 0xed000064695f7265;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&uStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491ef38:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491ef38;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
    uStack_108 = 0;
    lStack_100 = 0;
  }
  else {
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
    uStack_108 = uStack_c0;
    lStack_100 = lStack_c8;
    if ((int)plVar6 == 0) {
      lStack_100 = 0;
      uStack_108 = 0;
    }
  }
  uStack_90 = 0x5f676f6c61746163;
  uStack_88 = 0xea00000000006469;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&uStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491f010:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491f010;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
    lStack_110 = 0;
    uStack_118 = 0;
  }
  else {
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
    uStack_118 = uStack_c0;
    lStack_110 = lStack_c8;
    if ((int)plVar6 == 0) {
      lStack_110 = 0;
      uStack_118 = 0;
    }
  }
  lStack_c8 = 0x6565645f74736574;
  uStack_c0 = 0xed00006b6e696c70;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&lStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491f100:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491f100;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
LAB_10491f180:
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,uVar7,6);
    lVar9 = lStack_c8;
    if (((ulong)plVar6 & 1) == 0) goto LAB_10491f180;
    lVar8 = lStack_c8;
    _objc_msgSend(lStack_c8,PTR_s_boolValue_1125a5698);
    uVar3 = (undefined1)lVar8;
    _objc_release(lVar9);
  }
  lStack_c8 = 0x6e616b735f736168;
  uStack_c0 = 0xe800000000000000;
  puVar11 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_b8,&lStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10491f1f8:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar5 = auStack_b8;
    func_0x000100df95d0(puVar5);
    if (((ulong)puVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10491f1f8;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_1);
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x000104924754(&uStack_90,0x11309c428);
  }
  else {
    uVar7 = 0;
    func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar6 = &lStack_c8;
    _swift_dynamicCast(plVar6,&uStack_90,puVar10 + 8,uVar7,6);
    lVar9 = lStack_c8;
    if (((ulong)plVar6 & 1) != 0) {
      lVar8 = lStack_c8;
      _objc_msgSend(lStack_c8,PTR_s_boolValue_1125a5698);
      uVar4 = (undefined1)lVar8;
      _objc_release(lVar9);
      goto LAB_10491f28c;
    }
  }
  uVar4 = 0;
LAB_10491f28c:
  lVar9 = 0;
  __s10Foundation4DateVMa();
  pcVar15 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar15)(lVar13,1,1,lVar9);
  (*pcVar15)(puVar14,1,1,lVar9);
  pcVar15 = *(code **)(unaff_x20 + 0x260);
  *(undefined1 *)(lVar13 + -5) = 1;
  *(undefined1 *)(lVar13 + -6) = uVar4;
  *(undefined1 *)(lVar13 + -7) = uVar3;
  *(undefined1 *)(lVar13 + -8) = 1;
  *(undefined8 *)(lVar13 + -0x18) = 0xffffffffffffffff;
  *(undefined1 **)(lVar13 + -0x10) = puVar14;
  *(undefined8 *)(lVar13 + -0x28) = 0;
  *(undefined8 *)(lVar13 + -0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar13 + -0x38) = 0xffffffffffffffff;
  *(undefined8 *)(lVar13 + -0x30) = 0;
  *(undefined8 *)(lVar13 + -0x48) = 0x544c5541464544;
  *(undefined8 *)(lVar13 + -0x40) = 0xe700000000000000;
  *(long *)(lVar13 + -0x50) = lVar13;
  *(undefined8 *)(lVar13 + -0x58) = uStack_118;
  *(long *)(lVar13 + -0x60) = lStack_110;
  *(undefined8 *)(lVar13 + -0x68) = uStack_108;
  *(long *)(lVar13 + -0x70) = lStack_100;
  (*pcVar15)(lVar1,uVar2,lStack_d0,uStack_d8,lStack_e0,uStack_e8,lStack_f0,uStack_f8);
  return;
}



/* Entry: 10491fd9c; end: 104920693;  */

/* WARNING: Removing unreachable block (ram,0x0001049202d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10491fd9c(undefined8 *****param_1,ulong param_2,ulong param_3,undefined8 *param_4,
                  ulong param_5,undefined8 ******param_6,ulong param_7,undefined8 ******param_8,
                  uint param_9,byte param_10)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ******ppppppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *unaff_x20;
  undefined8 ******ppppppuVar14;
  undefined8 ****ppppuVar15;
  uint uVar16;
  code *pcVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 **ppuVar20;
  ulong *puVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 *****pppppuVar24;
  undefined1 auStack_1a0 [8];
  undefined8 *puStack_198;
  ulong uStack_190;
  undefined1 *puStack_188;
  ulong uStack_180;
  uint uStack_174;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined8 ****ppppuStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 *****apppppuStack_c8 [3];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 ****ppppuStack_88;
  undefined8 ***apppuStack_80 [2];
  
  puVar4 = auStack_1a0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x2b0))();
  if (param_8 != (undefined8 ******)0x0) {
    ppppppuVar14 = param_8;
    FUN_104922294();
    lVar8 = _DAT_11309d740;
    if (((ulong)ppppppuVar14 & 1) == 0) {
      uStack_174 = param_9;
      _swift_beginAccess((undefined *)((long)param_8 + _DAT_11309d740),auStack_a0,0,0);
      ppppppuVar14 = *(undefined8 *******)((long)param_8 + lVar8);
      _swift_bridgeObjectRetain(ppppppuVar14);
      uVar5 = param_2;
      func_0x0001000f66f0(param_2,param_3,ppppppuVar14);
      _swift_bridgeObjectRelease(ppppppuVar14);
      puVar21 = (ulong *)PTR__swift_isaMask_11034f488;
      if ((uVar5 & 1) != 0) {
        puStack_188 = (undefined1 *)CONCAT44(puStack_188._4_4_,(uint)param_10);
        uStack_180 = param_3;
        if ((param_10 & 1) == 0) {
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x2a0))();
          lVar8 = _DAT_11309d730;
          _swift_beginAccess((undefined *)((long)param_8 + _DAT_11309d730),auStack_e0,0,0);
          func_0x000104924710((undefined *)((long)param_8 + lVar8),&ppppuStack_108,0x11309d5a8);
          if (lStack_f0 == 0) {
            ppppppuVar14 = (undefined8 ******)&ppppuStack_108;
            func_0x000104924754(ppppppuVar14,0x11309d5a8);
          }
          else {
            func_0x000104915da4(&ppppuStack_108,apppppuStack_c8);
            func_0x0001000a8868(apppppuStack_c8,uStack_b0);
            uVar5 = param_7;
            (**(code **)(lStack_a8 + 8))(param_7,uStack_b0,lStack_a8);
            if ((uVar5 & 1) == 0) {
              _objc_release(param_8);
              _swift_bridgeObjectRelease(param_7);
              func_0x000104924790(apppppuStack_c8);
              goto LAB_10491fe84;
            }
            ppppppuVar14 = apppppuStack_c8;
            func_0x000104924790(ppppppuVar14);
            puVar21 = (ulong *)PTR__swift_isaMask_11034f488;
          }
        }
        else {
          param_7 = 0;
        }
        (**(code **)((*puVar21 & *unaff_x20) + 0x1d0))();
        uStack_190 = param_2;
        func_0x0001000f66f0(param_2,uStack_180,ppppppuVar14);
        _swift_bridgeObjectRelease(ppppppuVar14);
        uVar5 = uStack_180;
        uVar16 = (uint)param_2 ^ 1;
        if (((param_2 & 1) == 0) && ((uStack_174 & 1) != 0)) {
          pcVar17 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x1e0);
          _swift_bridgeObjectRetain(uStack_180);
          ppppppuVar14 = apppppuStack_c8;
          (*pcVar17)();
          func_0x000100403b00(&ppppuStack_108,uStack_190,uVar5);
          _swift_bridgeObjectRelease(uStack_100);
          (*(code *)ppppppuVar14)(apppppuStack_c8,0);
          uVar16 = 1;
        }
        puVar6 = (undefined8 *)((long)param_8 + _DAT_11309d718);
        _swift_beginAccess(puVar6,auStack_120,0,0);
        puVar13 = (undefined8 *)*puVar6;
        uVar5 = puVar6[1];
        if (param_5 == 0) {
          _swift_bridgeObjectRetain(uVar5);
        }
        else {
          puStack_198 = puVar13;
          __sSS10uppercasedSSyF();
          lVar8 = _DAT_11309d748;
          _swift_beginAccess((undefined *)((long)param_8 + _DAT_11309d748),auStack_170,0,0);
          uVar19 = *(undefined8 *)((long)param_8 + lVar8);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar19);
          puVar6 = param_4;
          func_0x0001000f66f0(param_4,param_5,uVar19);
          _swift_bridgeObjectRelease(uVar19);
          if (((ulong)puVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(param_5);
            puVar13 = puStack_198;
          }
          else {
            _swift_bridgeObjectRelease(uVar5);
            uVar5 = param_5;
            puVar13 = param_4;
          }
        }
        puVar21 = (ulong *)PTR__swift_isaMask_11034f488;
        if (((ulong)puStack_188 & 1) == 0) {
          puVar1 = (ulong *)((long)param_8 + _DAT_11309d720);
          _swift_beginAccess(puVar1,auStack_138,0,0);
          puVar21 = (ulong *)PTR__swift_isaMask_11034f488;
          uVar7 = *puVar1;
          if ((uVar7 != 0x53415043 || puVar1[1] != 0xe400000000000000) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar7,puVar1[1],0x53415043,0xe400000000000000,0), (uVar7 & 1) == 0))
          goto LAB_104920100;
          if (lRam000000011309d060 != -1) {
            _swift_once(0x11309d060,FUN_104936ee0);
          }
          lVar8 = _DAT_11309d730;
          _swift_beginAccess((undefined *)((long)param_8 + _DAT_11309d730),auStack_150,0,0);
          func_0x000104924710((undefined *)((long)param_8 + lVar8),apppppuStack_c8,0x11309d5a8);
          if ((param_7 == 0) || (*(long *)(param_7 + 0x10) == 0)) {
LAB_104920320:
            func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            ppppppuVar14 = (undefined8 ******)0x0;
            __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
            _swift_bridgeObjectRelease(param_7);
            param_6 = apppppuStack_c8;
            func_0x000104924754(param_6,0x11309d5a8);
            uVar7 = uStack_180;
          }
          else {
            _swift_bridgeObjectRetain(param_7);
            lVar8 = 0x65746e6f635f6266;
            uVar7 = 0;
            func_0x000100029284(0x65746e6f635f6266);
            if ((uVar7 & 1) == 0) {
              _swift_bridgeObjectRelease(param_7);
              goto LAB_104920320;
            }
            func_0x0001000bb420(*(long *)(param_7 + 0x38) + lVar8 * 0x20,&ppppuStack_108);
            _swift_bridgeObjectRelease(param_7);
            uVar19 = 0x11309d5b0;
            func_0x0001048db364(0x11309d5b0);
            ppppuVar15 = apppuStack_80;
            _swift_dynamicCast(ppppuVar15,&ppppuStack_108,PTR___sypN_11034f1a8 + 8,uVar19,6);
            pppuVar3 = apppuStack_80[0];
            if (((ulong)ppppuVar15 & 1) == 0) goto LAB_104920320;
            ppppuStack_108 = (undefined8 *****)0x0;
            ppuVar20 = apppuStack_80[0][2];
            puVar4 = auStack_1a0;
            if (ppuVar20 != (undefined8 **)0x0) {
              pppuVar22 = (undefined8 ***)apppuStack_80[0][4];
              puStack_198 = puVar13;
              puStack_188 = auStack_1a0;
              apppuStack_80[0] = pppuVar22;
              _swift_bridgeObjectRetain(pppuVar22);
              FUN_104936f58(&ppppuStack_88,&ppppuStack_108,apppuStack_80,apppppuStack_c8);
              pppuVar23 = pppuVar3 + 5;
              while( true ) {
                ppuVar20 = (undefined8 **)((long)ppuVar20 + -1);
                _swift_bridgeObjectRelease(pppuVar22);
                ppppuStack_108 = ppppuStack_88;
                puVar4 = puStack_188;
                puVar13 = puStack_198;
                if (ppuVar20 == (undefined8 **)0x0) break;
                pppuVar22 = (undefined8 ***)*pppuVar23;
                apppuStack_80[0] = pppuVar22;
                _swift_bridgeObjectRetain(pppuVar22);
                FUN_104936f58(&ppppuStack_88,&ppppuStack_108,apppuStack_80,apppppuStack_c8);
                pppuVar23 = pppuVar23 + 1;
              }
            }
            param_1 = (undefined8 *****)ppppuStack_108;
            uVar7 = uStack_180;
            puVar21 = (ulong *)PTR__swift_isaMask_11034f488;
            _swift_bridgeObjectRelease(pppuVar3);
            ppppppuVar14 = (undefined8 ******)PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_allocWithZone();
            _objc_msgSend();
            _swift_bridgeObjectRelease(param_7);
            param_6 = apppppuStack_c8;
            func_0x000104924754(param_6,0x11309d5a8);
          }
LAB_104920364:
          (**(code **)((*puVar21 & *unaff_x20) + 0x1e8))();
          if (param_6[2] == (undefined8 *****)0x0) {
LAB_1049203cc:
            _swift_bridgeObjectRelease(param_6);
            puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
            ppppuVar15 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
            _swift_retain();
            func_0x000100214a84();
            _swift_release(puVar2);
          }
          else {
            _swift_bridgeObjectRetain(param_6);
            lVar8 = *(long *)(puVar4 + 0x10);
            uVar12 = uVar7;
            func_0x000100029284();
            if ((uVar12 & 1) == 0) {
              _swift_bridgeObjectRelease(param_6);
              goto LAB_1049203cc;
            }
            ppppuVar15 = param_6[7][lVar8];
            _swift_bridgeObjectRetain(ppppuVar15);
            _swift_bridgeObjectRelease_n(param_6,2);
          }
          uVar18 = *(uint *)(puVar4 + 0x2c);
          pppppuVar24 = param_1;
          if (ppppuVar15[2] == (undefined8 ***)0x0) {
LAB_10492049c:
            param_1 = (undefined8 *****)0x0;
          }
          else {
            _swift_bridgeObjectRetain(ppppuVar15);
            puVar6 = puVar13;
            uVar12 = uVar5;
            func_0x000100029284(puVar13);
            if ((uVar12 & 1) == 0) {
              _swift_bridgeObjectRelease(ppppuVar15);
              pppppuVar24 = param_1;
              goto LAB_10492049c;
            }
            func_0x0001000bb420(ppppuVar15[7] + (long)puVar6 * 4,apppppuStack_c8);
            _swift_bridgeObjectRelease(ppppuVar15);
            uVar19 = 0;
            func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            puVar9 = puVar4 + 0x98;
            _swift_dynamicCast(puVar9,apppppuStack_c8,PTR___sypN_11034f1a8 + 8,uVar19,6);
            pppppuVar24 = param_1;
            if (((ulong)puVar9 & 1) == 0) goto LAB_10492049c;
            uVar19 = *(undefined8 *)(puVar4 + 0x98);
            _objc_msgSend(uVar19,PTR_s_doubleValue_1125bfb10);
            uVar18 = *(uint *)(puVar4 + 0x2c);
            pppppuVar24 = param_1;
            _objc_release(uVar19);
          }
          _objc_msgSend(ppppppuVar14,PTR_s_doubleValue_1125bfb10);
          if ((double)param_1 < (double)pppppuVar24) {
            if ((uVar18 & 1) == 0) {
              _swift_bridgeObjectRelease(ppppuVar15);
              _objc_release(param_8);
              _objc_release(ppppppuVar14);
              _swift_bridgeObjectRelease(uVar5);
              uVar16 = 1;
            }
            else {
              uVar19 = 0;
              func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              apppppuStack_c8[0] = ppppppuVar14;
              uStack_b0 = uVar19;
              func_0x000100102924(apppppuStack_c8,puVar4 + 0x98);
              _objc_retain(ppppppuVar14);
              ppppuVar10 = ppppuVar15;
              _swift_isUniquelyReferenced_nonNull_native(ppppuVar15);
              apppuStack_80[0] = ppppuVar15;
              func_0x0001001029e8(puVar4 + 0x98,puVar13,uVar5,ppppuVar10);
              _swift_bridgeObjectRelease(uVar5);
              pppuVar3 = apppuStack_80[0];
              pcVar17 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x1f8);
              _swift_bridgeObjectRetain(uVar7);
              _swift_retain(pppuVar3);
              ppppppuVar11 = apppppuStack_c8;
              (*pcVar17)();
              uVar19 = *puVar13;
              _swift_isUniquelyReferenced_nonNull_native(uVar19);
              *(undefined8 *)(puVar4 + 0x98) = *puVar13;
              *puVar13 = 0x8000000000000000;
              FUN_10492435c(pppuVar3,*(undefined8 *)(puVar4 + 0x10),uVar7,uVar19,&UNK_102761bd4,
                            FUN_10491d514);
              _swift_bridgeObjectRelease(uVar7);
              *puVar13 = *(undefined8 *)(puVar4 + 0x98);
              (*(code *)ppppppuVar11)(apppppuStack_c8,0);
              _swift_release(pppuVar3);
              _objc_release(param_8);
              _objc_release(ppppppuVar14);
              uVar16 = 1;
            }
            goto LAB_10491fe88;
          }
          _swift_bridgeObjectRelease(ppppuVar15);
          _objc_release(param_8);
          param_8 = ppppppuVar14;
        }
        else {
LAB_104920100:
          _swift_bridgeObjectRelease(param_7);
          if (param_6 != (undefined8 ******)0x0) {
            _objc_retain();
            puVar4 = auStack_1a0;
            ppppppuVar14 = param_6;
            uVar7 = uStack_180;
            goto LAB_104920364;
          }
        }
        _objc_release(param_8);
        _swift_bridgeObjectRelease(uVar5);
        goto LAB_10491fe88;
      }
    }
    _objc_release(param_8);
  }
LAB_10491fe84:
  uVar16 = 0;
LAB_10491fe88:
  return uVar16 & 1;
}



/* Entry: 104920694; end: 1049210db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104920694(long param_1,ulong param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte **ppbVar14;
  long lVar15;
  ulong *puVar16;
  ulong *unaff_x20;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 auStack_180 [12];
  uint uStack_174;
  undefined1 *puStack_170;
  long lStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  uint uStack_134;
  long lStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  code *pcStack_118;
  ulong uStack_110;
  byte *pbStack_108;
  long lStack_d8;
  byte *pbStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [24];
  char cStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar15 = 0x11309c628;
  uStack_134 = param_4;
  func_0x0001048db364();
  puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
  puStack_170 = auStack_180 +
                -(*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x2b0))();
  lStack_168 = _DAT_11309d738;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_11309d738,auStack_80,0,0);
    pbStack_148 = *(byte **)(param_1 + lStack_168);
    if ((ulong)pbStack_148 >> 0x3e == 0) {
      pbVar17 = *(byte **)(((ulong)pbStack_148 & 0xfffffffffffff8) + 0x10);
    }
    else {
      pbVar17 = (byte *)((ulong)pbStack_148 & 0xffffffffffffff8);
      if ((long)pbStack_148 < 0) {
        pbVar17 = pbStack_148;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (pbVar17 != (byte *)0x0) {
      pcStack_118 = *(code **)((*puVar16 & *unaff_x20) + 0x170);
      uStack_110 = (ulong)pbStack_148 & 0xc000000000000001;
      uStack_150 = (ulong)pbStack_148 & 0xffffffffffffff8;
      pbStack_158 = pbStack_148 + 0x20;
      pbStack_160 = (byte *)((ulong)&pbStack_c8 | 1);
      _swift_bridgeObjectRetain();
      uStack_174 = 0;
      pbVar20 = (byte *)0x0;
      lStack_130 = param_1;
      pbStack_120 = pbVar17;
      do {
        if (uStack_110 == 0) {
          if (*(byte **)(uStack_150 + 0x10) <= pbVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104921074);
            (*pcVar5)();
          }
          pbVar17 = *(byte **)(pbStack_158 + (long)pbVar20 * 8);
          _objc_retain();
        }
        else {
          pbVar17 = pbVar20;
          FUN_10491aa4c(pbVar20,pbStack_148);
        }
        bVar6 = SCARRY8((long)pbVar20,1);
        pbVar20 = pbVar20 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104921070);
          (*pcVar5)();
        }
        lStack_d8 = *(long *)(pbVar17 + _DAT_11309da78);
        pbVar7 = pbVar17;
        (*pcStack_118)();
        if ((((ulong)pbVar7 & 1) != 0) && ((uStack_134 & 1) != 0)) {
          pbVar18 = *(byte **)(pbVar17 + _DAT_11309da68);
          pbVar23 = (byte *)((ulong)pbVar18 & 0xffffffffffffff8);
          pbStack_128 = pbVar17;
          if ((ulong)pbVar18 >> 0x3e == 0) {
            pbVar24 = *(byte **)(pbVar23 + 0x10);
          }
          else {
            pbVar7 = pbVar23;
            if ((long)pbVar18 < 0) {
              pbVar7 = pbVar18;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            pbVar24 = pbVar7;
          }
          pbVar21 = (byte *)0x0;
          do {
            puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
            param_1 = lStack_130;
            pbVar17 = pbStack_128;
            if (pbVar24 == pbVar21) goto LAB_104920ebc;
            if (((ulong)pbVar18 & 0xc000000000000001) == 0) {
              if (*(byte **)(pbVar23 + 0x10) <= pbVar21) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10492105c);
                (*pcVar5)();
              }
              pbVar7 = *(byte **)(pbVar18 + (long)pbVar21 * 8 + 0x20);
              _objc_retain();
            }
            else {
              pbVar7 = pbVar21;
              func_0x00010491aa6c(pbVar21,pbVar18);
            }
            if (SCARRY8((long)pbVar21,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104921058);
              (*pcVar5)();
            }
            puVar16 = (ulong *)(pbVar7 + _DAT_11309d7a8);
            _swift_beginAccess(puVar16,auStack_98,0,0);
            uVar9 = *puVar16;
            pbVar17 = (byte *)puVar16[1];
            if (uVar9 == param_2 && pbVar17 == param_3) {
              _objc_release(pbVar7);
              break;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar9,pbVar17,param_2,param_3,0);
            _objc_release();
            pbVar21 = pbVar21 + 1;
          } while ((uVar9 & 1) == 0);
          pbVar7 = *(byte **)(lStack_130 + lStack_168);
          if ((ulong)pbVar7 >> 0x3e == 0) {
            pbVar18 = *(byte **)(((ulong)pbVar7 & 0xfffffffffffff8) + 0x10);
          }
          else {
            pbVar18 = (byte *)((ulong)pbVar7 & 0xffffffffffffff8);
            if ((long)pbVar7 < 0) {
              pbVar18 = pbVar7;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
          pbStack_140 = pbVar7;
          _swift_bridgeObjectRetain();
          pbVar23 = pbStack_140;
          if (pbVar18 != (byte *)0x0) {
            pbVar24 = (byte *)0x0;
            uVar13 = (ulong)pbStack_140 & 0xc000000000000001;
            uVar9 = (ulong)pbStack_140 & 0xffffffffffffff8;
            pbStack_108 = pbVar18;
            do {
              if (uVar13 == 0) {
                if (*(byte **)(uVar9 + 0x10) <= pbVar24) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10492106c);
                  (*pcVar5)();
                }
                pbVar18 = *(byte **)(pbVar23 + (long)pbVar24 * 8 + 0x20);
                _objc_retain();
              }
              else {
                pbVar18 = pbVar24;
                pbVar17 = pbStack_140;
                FUN_10491aa4c();
              }
              bVar6 = SCARRY8((long)pbVar24,1);
              pbVar24 = pbVar24 + 1;
              if (bVar6) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x104921068);
                (*pcVar5)();
              }
              pbVar7 = pbVar18;
              (**(code **)((*puVar16 & *unaff_x20) + 0xe0))();
              pbVar10 = (byte *)((ulong)pbVar17 >> 0x38 & 0xf);
              pbVar8 = (byte *)((ulong)pbVar7 & 0xffffffffffff);
              pbVar21 = pbVar8;
              if (((ulong)pbVar17 & 0x2000000000000000) != 0) {
                pbVar21 = pbVar10;
              }
              if (pbVar21 == (byte *)0x0) {
                _swift_bridgeObjectRelease(pbVar17);
              }
              else if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
                if (((ulong)pbVar17 >> 0x3d & 1) == 0) {
                  if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
                    pbVar8 = pbVar17;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                  }
                  else {
                    pbVar7 = (byte *)(((ulong)pbVar17 & 0xfffffffffffffff) + 0x20);
                  }
                  if (*pbVar7 == 0x2b) {
                    if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x104921084);
                      (*pcVar5)();
                    }
                    pbVar8 = pbVar8 + -1;
                    if (pbVar8 == (byte *)0x0) goto LAB_104920c50;
                    if (pbVar7 == (byte *)0x0) goto LAB_104920c60;
                    pbVar19 = (byte *)0x0;
                    do {
                      pbVar7 = pbVar7 + 1;
                      if (((9 < *pbVar7 - 0x30) ||
                          (lVar15 = (long)pbVar19 * 10,
                          SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                         (uVar11 = (ulong)(byte)(*pbVar7 - 0x30),
                         pbVar19 = (byte *)(lVar15 + uVar11), SCARRY8(lVar15,uVar11)))
                      goto LAB_104920c50;
                      pbVar8 = pbVar8 + -1;
                    } while (pbVar8 != (byte *)0x0);
                  }
                  else if (*pbVar7 == 0x2d) {
                    if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x104921080);
                      (*pcVar5)();
                    }
                    pbVar8 = pbVar8 + -1;
                    if (pbVar8 == (byte *)0x0) {
LAB_104920c50:
                      pbVar19 = (byte *)0x0;
                      cStack_a0 = '\x01';
                      goto LAB_104920ccc;
                    }
                    if (pbVar7 == (byte *)0x0) {
LAB_104920c60:
                      pbVar19 = (byte *)0x0;
                    }
                    else {
                      pbVar19 = (byte *)0x0;
                      do {
                        pbVar7 = pbVar7 + 1;
                        if (((9 < *pbVar7 - 0x30) ||
                            (lVar15 = (long)pbVar19 * 10,
                            SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                           (uVar11 = (ulong)(byte)(*pbVar7 - 0x30),
                           pbVar19 = (byte *)(lVar15 - uVar11), SBORROW8(lVar15,uVar11)))
                        goto LAB_104920c50;
                        pbVar8 = pbVar8 + -1;
                      } while (pbVar8 != (byte *)0x0);
                    }
                  }
                  else {
                    if (pbVar8 == (byte *)0x0) goto LAB_104920c50;
                    if (pbVar7 == (byte *)0x0) goto LAB_104920c60;
                    pbVar19 = (byte *)0x0;
                    do {
                      if (((9 < *pbVar7 - 0x30) ||
                          (lVar15 = (long)pbVar19 * 10,
                          SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                         (uVar11 = (ulong)(byte)(*pbVar7 - 0x30),
                         pbVar19 = (byte *)(lVar15 + uVar11), SCARRY8(lVar15,uVar11)))
                      goto LAB_104920c50;
                      pbVar7 = pbVar7 + 1;
                      pbVar8 = pbVar8 + -1;
                    } while (pbVar8 != (byte *)0x0);
                  }
                  cStack_a0 = '\0';
                }
                else {
                  pbStack_c8 = pbVar7;
                  uStack_c0 = (ulong)pbVar17 & 0xffffffffffffff;
                  uVar1 = (uint)pbVar7 & 0xff;
                  if (uVar1 == 0x2b) {
                    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x104921078);
                      (*pcVar5)();
                    }
                    pbVar10 = pbVar10 + -1;
                    if (pbVar10 == (byte *)0x0) goto LAB_104920cc0;
                    pbVar19 = (byte *)0x0;
                    pbVar7 = pbStack_160;
                    do {
                      if (((9 < *pbVar7 - 0x30) ||
                          (lVar15 = (long)pbVar19 * 10,
                          SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                         (uVar11 = (ulong)(byte)(*pbVar7 - 0x30),
                         pbVar19 = (byte *)(lVar15 + uVar11), SCARRY8(lVar15,uVar11)))
                      goto LAB_104920cc0;
                      cStack_a0 = '\0';
                      pbVar7 = pbVar7 + 1;
                      pbVar10 = pbVar10 + -1;
                    } while (pbVar10 != (byte *)0x0);
                  }
                  else if (uVar1 == 0x2d) {
                    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10492107c);
                      (*pcVar5)();
                    }
                    pbVar10 = pbVar10 + -1;
                    if (pbVar10 == (byte *)0x0) {
LAB_104920cc0:
                      pbVar19 = (byte *)0x0;
                      cStack_a0 = '\x01';
                    }
                    else {
                      pbVar19 = (byte *)0x0;
                      pbVar7 = pbStack_160;
                      do {
                        if (((9 < *pbVar7 - 0x30) ||
                            (lVar15 = (long)pbVar19 * 10,
                            SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                           (uVar11 = (ulong)(byte)(*pbVar7 - 0x30),
                           pbVar19 = (byte *)(lVar15 - uVar11), SBORROW8(lVar15,uVar11)))
                        goto LAB_104920cc0;
                        cStack_a0 = '\0';
                        pbVar7 = pbVar7 + 1;
                        pbVar10 = pbVar10 + -1;
                      } while (pbVar10 != (byte *)0x0);
                    }
                  }
                  else {
                    if (pbVar10 == (byte *)0x0) goto LAB_104920cc0;
                    pbVar19 = (byte *)0x0;
                    ppbVar14 = &pbStack_c8;
                    do {
                      if (((9 < *(byte *)ppbVar14 - 0x30) ||
                          (lVar15 = (long)pbVar19 * 10,
                          SUB168(SEXT816((long)pbVar19) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                         (uVar11 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30),
                         pbVar19 = (byte *)(lVar15 + uVar11), SCARRY8(lVar15,uVar11)))
                      goto LAB_104920cc0;
                      cStack_a0 = '\0';
                      ppbVar14 = (byte **)((long)ppbVar14 + 1);
                      pbVar10 = pbVar10 + -1;
                    } while (pbVar10 != (byte *)0x0);
                  }
                }
LAB_104920ccc:
                cVar4 = cStack_a0;
                _swift_bridgeObjectRelease(pbVar17);
                pbVar21 = pbVar17;
                pbVar7 = pbVar19;
                if (cVar4 == '\0') {
LAB_104920cdc:
                  uVar11 = (ulong)pbVar7 & 7;
                  if (-1 < -(long)pbVar7) {
                    uVar11 = -(-(long)pbVar7 & 7U);
                  }
                  uVar12 = *(ulong *)(pbVar18 + _DAT_11309da70) & 7;
                  uVar2 = -*(ulong *)(pbVar18 + _DAT_11309da70);
                  if (-1 < (long)uVar2) {
                    uVar12 = -(uVar2 & 7);
                  }
                  pbVar17 = pbVar21;
                  if (uVar11 == uVar12) {
                    pbVar8 = *(byte **)(pbVar18 + _DAT_11309da68);
                    pbVar10 = (byte *)((ulong)pbVar8 & 0xffffffffffffff8);
                    if ((ulong)pbVar8 >> 0x3e == 0) {
                      pbVar19 = *(byte **)(pbVar10 + 0x10);
                    }
                    else {
                      pbVar19 = pbVar10;
                      if ((long)pbVar8 < 0) {
                        pbVar19 = pbVar8;
                      }
                      __ss18_CocoaArrayWrapperV8endIndexSivg();
                    }
                    pbVar22 = (byte *)0x0;
LAB_104920d44:
                    pbVar17 = pbVar21;
                    if (pbVar19 != pbVar22) {
                      if (((ulong)pbVar8 & 0xc000000000000001) == 0) {
                        if (*(byte **)(pbVar10 + 0x10) <= pbVar22) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x104921064);
                          (*pcVar5)();
                        }
                        pbVar7 = *(byte **)(pbVar8 + (long)pbVar22 * 8 + 0x20);
                        _objc_retain();
                      }
                      else {
                        pbVar7 = pbVar22;
                        func_0x00010491aa6c(pbVar22,pbVar8);
                      }
                      if (SCARRY8((long)pbVar22,1)) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104921060);
                        (*pcVar5)();
                      }
                      puVar16 = (ulong *)(pbVar7 + _DAT_11309d7a8);
                      _swift_beginAccess(puVar16,auStack_b8,0,0);
                      uVar11 = *puVar16;
                      pbVar21 = (byte *)puVar16[1];
                      if (uVar11 != param_2 || pbVar21 != param_3) goto code_r0x000104920da8;
                      _swift_bridgeObjectRelease(pbStack_140);
                      _objc_release(pbVar18);
                      goto LAB_104920e88;
                    }
                  }
                }
              }
              else {
                pbVar8 = pbVar17;
                func_0x000100edba6c();
                pbVar21 = pbVar8;
                _swift_bridgeObjectRelease(pbVar17);
                pbVar17 = pbVar21;
                if (((ulong)pbVar8 & 1) == 0) goto LAB_104920cdc;
              }
              _objc_release(pbVar18);
              puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
            } while (pbVar24 != pbStack_108);
          }
          pbVar7 = pbStack_140;
          _swift_bridgeObjectRelease();
          param_1 = lStack_130;
          pbVar17 = pbStack_128;
        }
LAB_104920ebc:
        (**(code **)((*puVar16 & *unaff_x20) + 0x218))();
        if ((long)pbVar7 < lStack_d8) {
          (**(code **)((*puVar16 & *unaff_x20) + 0x1d0))();
          pbVar18 = pbVar7;
          (**(code **)((*puVar16 & *unaff_x20) + 0x1e8))();
          pbVar23 = pbVar7;
          FUN_104935798(pbVar7,pbVar18);
          _swift_bridgeObjectRelease(pbVar7);
          _swift_bridgeObjectRelease(pbVar18);
          if (((ulong)pbVar23 & 1) != 0) {
            (**(code **)((*puVar16 & *unaff_x20) + 0x208))
                      (*(undefined8 *)(pbVar17 + _DAT_11309da70));
            (**(code **)((*puVar16 & *unaff_x20) + 0x220))(lStack_d8);
            puVar3 = puStack_170;
            __s10Foundation4DateVACycfC(puStack_170);
            lVar15 = 0;
            __s10Foundation4DateVMa();
            uStack_174 = 1;
            (**(code **)(*(long *)(lVar15 + -8) + 0x38))(puVar3,0,1,lVar15);
            puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x238))(puVar3);
            (**(code **)((*puVar16 & *unaff_x20) + 0x250))(0);
          }
        }
        _objc_release(pbVar17);
      } while (pbVar20 != pbStack_120);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(pbStack_148);
      goto LAB_1049210b8;
    }
    _objc_release(param_1);
  }
  uStack_174 = 0;
LAB_1049210b8:
  return uStack_174 & 1;
code_r0x000104920da8:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar11,pbVar21,param_2,param_3,0);
  _objc_release(pbVar7);
  pbVar22 = pbVar22 + 1;
  if ((uVar11 & 1) != 0) {
    _swift_bridgeObjectRelease(pbStack_140);
    pbVar7 = pbVar18;
LAB_104920e88:
    _objc_release();
    bVar6 = SCARRY8(lStack_d8,0x20);
    lStack_d8 = lStack_d8 + 0x20;
    puVar16 = (ulong *)PTR__swift_isaMask_11034f488;
    param_1 = lStack_130;
    pbVar17 = pbStack_128;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104921088);
      (*pcVar5)();
    }
    goto LAB_104920ebc;
  }
  goto LAB_104920d44;
}



/* Entry: 1049210dc; end: 10492117f;  */

uint FUN_1049210dc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong *unaff_x20;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  lVar2 = param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x140))();
  if (lVar2 != 0) {
    _swift_bridgeObjectRelease(lVar2);
    (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0x2b0))();
    if (param_3 != 0) {
      FUN_104921180(param_1,param_2,param_3);
      _objc_release(param_3);
      return (uint)param_1 & 1;
    }
  }
  return 0;
}



/* Entry: 104921180; end: 10492171f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104921180(ulong param_1,byte *param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte **ppbVar16;
  long lVar17;
  ulong *unaff_x20;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [24];
  char cStack_80;
  byte abStack_78 [24];
  
  lVar17 = _DAT_11309d738;
  pbVar9 = abStack_78;
  _swift_beginAccess(param_3 + _DAT_11309d738,pbVar9,0,0);
  pbVar7 = *(byte **)(param_3 + lVar17);
  if ((ulong)pbVar7 >> 0x3e == 0) {
    pbVar18 = *(byte **)(((ulong)pbVar7 & 0xfffffffffffff8) + 0x10);
  }
  else {
    pbVar18 = (byte *)((ulong)pbVar7 & 0xffffffffffffff8);
    if ((long)pbVar7 < 0) {
      pbVar18 = pbVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain();
  if (pbVar18 != (byte *)0x0) {
    pbVar19 = (byte *)0x0;
    do {
      if (((ulong)pbVar7 & 0xc000000000000001) == 0) {
        if (*(byte **)(((ulong)pbVar7 & 0xffffffffffffff8) + 0x10) <= pbVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1049216f0);
          (*pcVar5)();
        }
        pbVar8 = *(byte **)(pbVar7 + (long)pbVar19 * 8 + 0x20);
        _objc_retain();
      }
      else {
        pbVar8 = pbVar19;
        pbVar9 = pbVar7;
        func_0x00010491aa4c();
      }
      bVar6 = SCARRY8((long)pbVar19,1);
      pbVar19 = pbVar19 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1049216ec);
        (*pcVar5)();
      }
      pbVar15 = pbVar8;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xe0))();
      pbVar12 = (byte *)((ulong)pbVar9 >> 0x38 & 0xf);
      pbVar11 = (byte *)((ulong)pbVar15 & 0xffffffffffff);
      pbVar10 = pbVar11;
      if (((ulong)pbVar9 & 0x2000000000000000) != 0) {
        pbVar10 = pbVar12;
      }
      if (pbVar10 == (byte *)0x0) {
        _swift_bridgeObjectRelease(pbVar9);
      }
      else if (((ulong)pbVar9 >> 0x3c & 1) == 0) {
        if (((ulong)pbVar9 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
            pbVar11 = pbVar9;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar15 = (byte *)(((ulong)pbVar9 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar15 == 0x2b) {
            if ((long)pbVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10492171c);
              (*pcVar5)();
            }
            pbVar11 = pbVar11 + -1;
            if (pbVar11 == (byte *)0x0) goto LAB_104921498;
            if (pbVar15 == (byte *)0x0) goto LAB_1049214a8;
            pbVar20 = (byte *)0x0;
            do {
              pbVar15 = pbVar15 + 1;
              if (((9 < *pbVar15 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar15 - 0x30), pbVar20 = (byte *)(lVar17 + uVar13),
                 SCARRY8(lVar17,uVar13))) goto LAB_104921498;
              pbVar11 = pbVar11 + -1;
            } while (pbVar11 != (byte *)0x0);
          }
          else if (*pbVar15 == 0x2d) {
            if ((long)pbVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104921720);
              (*pcVar5)();
            }
            pbVar11 = pbVar11 + -1;
            if (pbVar11 == (byte *)0x0) {
LAB_104921498:
              pbVar20 = (byte *)0x0;
              cStack_80 = '\x01';
              goto LAB_104921514;
            }
            if (pbVar15 == (byte *)0x0) {
LAB_1049214a8:
              pbVar20 = (byte *)0x0;
            }
            else {
              pbVar20 = (byte *)0x0;
              do {
                pbVar15 = pbVar15 + 1;
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar20 * 10,
                    SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar13 = (ulong)(byte)(*pbVar15 - 0x30), pbVar20 = (byte *)(lVar17 - uVar13),
                   SBORROW8(lVar17,uVar13))) goto LAB_104921498;
                pbVar11 = pbVar11 + -1;
              } while (pbVar11 != (byte *)0x0);
            }
          }
          else {
            if (pbVar11 == (byte *)0x0) goto LAB_104921498;
            if (pbVar15 == (byte *)0x0) goto LAB_1049214a8;
            pbVar20 = (byte *)0x0;
            do {
              if (((9 < *pbVar15 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar15 - 0x30), pbVar20 = (byte *)(lVar17 + uVar13),
                 SCARRY8(lVar17,uVar13))) goto LAB_104921498;
              pbVar15 = pbVar15 + 1;
              pbVar11 = pbVar11 + -1;
            } while (pbVar11 != (byte *)0x0);
          }
          cStack_80 = '\0';
        }
        else {
          pbStack_a8 = pbVar15;
          uStack_a0 = (ulong)pbVar9 & 0xffffffffffffff;
          uVar2 = (uint)pbVar15 & 0xff;
          if (uVar2 == 0x2b) {
            if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104921714);
              (*pcVar5)();
            }
            pbVar12 = pbVar12 + -1;
            if (pbVar12 == (byte *)0x0) goto LAB_104921508;
            pbVar20 = (byte *)0x0;
            pbVar15 = (byte *)((ulong)&pbStack_a8 | 1);
            do {
              if (((9 < *pbVar15 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar15 - 0x30), pbVar20 = (byte *)(lVar17 + uVar13),
                 SCARRY8(lVar17,uVar13))) goto LAB_104921508;
              cStack_80 = '\0';
              pbVar15 = pbVar15 + 1;
              pbVar12 = pbVar12 + -1;
            } while (pbVar12 != (byte *)0x0);
          }
          else if (uVar2 == 0x2d) {
            if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104921718);
              (*pcVar5)();
            }
            pbVar12 = pbVar12 + -1;
            if (pbVar12 == (byte *)0x0) {
LAB_104921508:
              pbVar20 = (byte *)0x0;
              cStack_80 = '\x01';
            }
            else {
              pbVar20 = (byte *)0x0;
              pbVar15 = (byte *)((ulong)&pbStack_a8 | 1);
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar20 * 10,
                    SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar13 = (ulong)(byte)(*pbVar15 - 0x30), pbVar20 = (byte *)(lVar17 - uVar13),
                   SBORROW8(lVar17,uVar13))) goto LAB_104921508;
                cStack_80 = '\0';
                pbVar15 = pbVar15 + 1;
                pbVar12 = pbVar12 + -1;
              } while (pbVar12 != (byte *)0x0);
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) goto LAB_104921508;
            pbVar20 = (byte *)0x0;
            ppbVar16 = &pbStack_a8;
            do {
              if (((9 < *(byte *)ppbVar16 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*(byte *)ppbVar16 - 0x30),
                 pbVar20 = (byte *)(lVar17 + uVar13), SCARRY8(lVar17,uVar13))) goto LAB_104921508;
              cStack_80 = '\0';
              ppbVar16 = (byte **)((long)ppbVar16 + 1);
              pbVar12 = pbVar12 + -1;
            } while (pbVar12 != (byte *)0x0);
          }
        }
LAB_104921514:
        cVar4 = cStack_80;
        _swift_bridgeObjectRelease(pbVar9);
        pbVar10 = pbVar9;
        pbVar15 = pbVar20;
        if (cVar4 == '\0') {
LAB_104921524:
          uVar13 = (ulong)pbVar15 & 7;
          if (-1 < -(long)pbVar15) {
            uVar13 = -(-(long)pbVar15 & 7U);
          }
          uVar14 = *(ulong *)(pbVar8 + _DAT_11309da70) & 7;
          uVar3 = -*(ulong *)(pbVar8 + _DAT_11309da70);
          if (-1 < (long)uVar3) {
            uVar14 = -(uVar3 & 7);
          }
          pbVar9 = pbVar10;
          if (uVar13 == uVar14) {
            pbVar11 = *(byte **)(pbVar8 + _DAT_11309da68);
            pbVar15 = (byte *)((ulong)pbVar11 & 0xffffffffffffff8);
            if ((ulong)pbVar11 >> 0x3e == 0) {
              pbVar12 = *(byte **)(pbVar15 + 0x10);
            }
            else {
              pbVar12 = pbVar15;
              if ((long)pbVar11 < 0) {
                pbVar12 = pbVar11;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            pbVar20 = (byte *)0x0;
            while (pbVar9 = pbVar10, pbVar12 != pbVar20) {
              if (((ulong)pbVar11 & 0xc000000000000001) == 0) {
                if (*(byte **)(pbVar15 + 0x10) <= pbVar20) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1049216e8);
                  (*pcVar5)();
                }
                pbVar9 = *(byte **)(pbVar11 + (long)pbVar20 * 8 + 0x20);
                _objc_retain();
              }
              else {
                pbVar9 = pbVar20;
                func_0x00010491aa6c(pbVar20,pbVar11);
              }
              if (SCARRY8((long)pbVar20,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1049216e4);
                (*pcVar5)();
              }
              puVar1 = (ulong *)(pbVar9 + _DAT_11309d7a8);
              _swift_beginAccess(puVar1,auStack_98,0,0);
              uVar13 = *puVar1;
              pbVar10 = (byte *)puVar1[1];
              if (uVar13 == param_1 && pbVar10 == param_2) {
                _swift_bridgeObjectRelease(pbVar7);
                _objc_release(pbVar8);
                goto LAB_1049216b8;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar13,pbVar10,param_1,param_2,0);
              _objc_release(pbVar9);
              pbVar20 = pbVar20 + 1;
              if ((uVar13 & 1) != 0) {
                _swift_bridgeObjectRelease(pbVar7);
                pbVar9 = pbVar8;
LAB_1049216b8:
                _objc_release(pbVar9);
                return 1;
              }
            }
          }
        }
      }
      else {
        pbVar11 = pbVar9;
        func_0x000100edba6c();
        pbVar10 = pbVar11;
        _swift_bridgeObjectRelease(pbVar9);
        pbVar9 = pbVar10;
        if (((ulong)pbVar11 & 1) == 0) goto LAB_104921524;
      }
      _objc_release(pbVar8);
    } while (pbVar19 != pbVar18);
  }
  _swift_bridgeObjectRelease(pbVar7);
  return 0;
}



/* Entry: 104921720; end: 10492176b;  */

uint FUN_104921720(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x2b0))();
  uVar1 = param_1;
  FUN_104922294();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10492176c; end: 104921caf;  */

undefined8 * FUN_10492176c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong *unaff_x20;
  long lVar19;
  long lVar20;
  undefined8 auStack_d0 [4];
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar8 = PTR__swift_isaMask_11034f488;
  lVar19 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)&puStack_b0 + lVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x110))();
  if (param_2 != 0) {
    uVar16 = param_2;
    _swift_bridgeObjectRelease();
    (**(code **)((*(ulong *)puVar8 & *unaff_x20) + 0xf8))();
    if (uVar16 != 0) {
      uVar15 = uVar16;
      (**(code **)((*(ulong *)puVar8 & *unaff_x20) + 0x298))();
      _swift_bridgeObjectRelease(uVar16);
      if (uVar15 >> 0x3c < 0xf) {
        puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
        _objc_allocWithZone();
        puVar10 = PTR_s_initWithLength__1125e6378;
        _objc_msgSend();
        if (puVar4 != (undefined *)0x0) {
          puVar5 = puVar4;
          uStack_98 = param_2;
          (**(code **)((*(ulong *)puVar8 & *unaff_x20) + 0xe0))();
          uVar6 = 0x7c;
          puStack_70 = (undefined8 *)puVar5;
          puStack_68 = (undefined8 *)puVar10;
          __sSS6appendyySSF(0x7c,0xe100000000000000);
          (**(code **)((*(ulong *)puVar8 & *unaff_x20) + 0x200))();
          puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar8 = PTR___sSiN_11034deb0;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          uStack_80 = uVar6;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar5);
          __sSS6appendyySSF(0x7c,0xe100000000000000);
          uStack_80 = param_1;
          __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar8,puVar10);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar10);
          uVar6 = 0x7265767265737c;
          __sSS6appendyySSF(0x7265767265737c,0xe700000000000000);
          puVar14 = puStack_68;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar20);
          func_0x000100e8b654();
          uVar16 = 0;
          lVar7 = lVar20;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (lVar20,0,PTR___sSSN_11034da80,uVar6);
          (**(code **)(lVar19 + 8))(lVar20,lVar3);
          _swift_bridgeObjectRelease(puVar14);
          if (uVar16 >> 0x3c < 0xf) {
            puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_allocWithZone();
            uVar2 = uStack_98;
            func_0x00010006c00c(uStack_98,uVar15);
            uVar9 = uVar2;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2,uVar15);
            _objc_msgSend(puVar8,PTR_s_initWithData__1125dfa60,uVar9);
            puStack_b0 = puVar4;
            _objc_release(uVar9);
            func_0x0001000b44c0(uVar2,uVar15);
            puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_allocWithZone(PTR__OBJC_CLASS___NSData_1126ae778);
            func_0x00010006c00c(lVar7,uVar16);
            lVar3 = lVar7;
            uStack_a0 = uVar16;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar7,uVar16);
            _objc_msgSend(puVar4,PTR_s_initWithData__1125dfa60,lVar3);
            _objc_release(lVar3);
            func_0x0001000b44c0(lVar7,uVar16);
            puVar10 = puVar8;
            puStack_a8 = puVar8;
            _objc_retainAutorelease(puVar8);
            _objc_msgSend();
            _objc_msgSend(puVar8,PTR_s_length_1126018a8);
            puVar5 = puVar4;
            _objc_retainAutorelease(puVar4);
            _objc_msgSend();
            puVar11 = puVar4;
            _objc_msgSend(puVar4,PTR_s_length_1126018a8);
            puVar12 = puStack_b0;
            _objc_retainAutorelease();
            puVar13 = puVar12;
            _objc_msgSend();
            _CCHmac(4,puVar10,puVar8,puVar5,puVar11,puVar13);
            puVar8 = puVar12;
            puVar5 = PTR_s_base64EncodedStringWithOptions__1125a3110;
            _objc_msgSend(puVar12,PTR_s_base64EncodedStringWithOptions__1125a3110,0);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar8;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar8);
            puVar8 = PTR___sSSN_11034da80;
            uStack_80 = 0x2f;
            uStack_78 = 0xe100000000000000;
            uStack_90 = 0x5f;
            uStack_88 = 0xe100000000000000;
            puStack_70 = (undefined8 *)puVar10;
            puStack_68 = (undefined8 *)puVar5;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar6;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar6;
            puVar14 = &uStack_80;
            puVar17 = &uStack_90;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar6;
            *(undefined **)((long)auStack_d0 + lVar1) = PTR___sSSN_11034da80;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (puVar14,puVar17,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
            _swift_bridgeObjectRelease(puVar5);
            uStack_80 = 0x2b;
            uStack_78 = 0xe100000000000000;
            uStack_90 = 0x2d;
            uStack_88 = 0xe100000000000000;
            puStack_70 = puVar14;
            puStack_68 = puVar17;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar6;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar6;
            puVar14 = &uStack_80;
            puVar18 = &uStack_90;
            *(undefined **)((long)auStack_d0 + lVar1) = puVar8;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar6;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (puVar14,puVar18,0,0,0,1,puVar8,puVar8);
            _swift_bridgeObjectRelease(puVar17);
            uStack_80 = 0x3d;
            uStack_78 = 0xe100000000000000;
            uStack_90 = 0;
            uStack_88 = 0xe000000000000000;
            puStack_70 = puVar14;
            puStack_68 = puVar18;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar6;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar6;
            puVar14 = &uStack_80;
            *(undefined **)((long)auStack_d0 + lVar1) = puVar8;
            *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar6;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (puVar14,&uStack_90,0,0,0,1,puVar8,puVar8);
            _objc_release(puStack_a8);
            _objc_release(puVar4);
            _objc_release(puVar12);
            func_0x0001000b44c0(lVar7,uStack_a0);
            func_0x0001000b44c0(uStack_98,uVar15);
            _swift_bridgeObjectRelease(puVar18);
            return puVar14;
          }
          _objc_release(puVar4);
          param_2 = uStack_98;
        }
        func_0x0001000b44c0(param_2,uVar15);
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 104921cb0; end: 104921e4f;  */

undefined1  [16] FUN_104921cb0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar7 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar7 = param_2 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    lVar8 = 0;
    puVar9 = (undefined8 *)0xf000000000000000;
  }
  else {
    uVar3 = param_1;
    __sSS5countSivg();
    uVar7 = uVar3 & 3;
    if (-1 < (long)-uVar3) {
      uVar7 = -(-uVar3 & 3);
    }
    lVar8 = uVar3 + (4 - uVar7);
    if (SCARRY8(uVar3,4 - uVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104921e50);
      (*pcVar2)();
    }
    uStack_70 = 0x2d;
    uStack_68 = 0xe100000000000000;
    uStack_80 = 0x2b;
    uStack_78 = 0xe100000000000000;
    puStack_60 = (undefined8 *)param_1;
    puStack_58 = (undefined8 *)param_2;
    func_0x000100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    puVar9 = &uStack_70;
    puVar5 = &uStack_80;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar9,puVar5,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
               uVar3,uVar3,uVar3);
    uStack_70 = 0x5f;
    uStack_68 = 0xe100000000000000;
    uStack_80 = 0x2f;
    uStack_78 = 0xe100000000000000;
    puVar4 = &uStack_70;
    puVar6 = &uStack_80;
    puStack_60 = puVar9;
    puStack_58 = puVar5;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar4,puVar6,0,0,0,1,puVar1,puVar1,puVar1,uVar3,uVar3,uVar3);
    _swift_bridgeObjectRelease(puVar5);
    uStack_70 = 0x3d;
    uStack_68 = 0xe100000000000000;
    puVar5 = &uStack_70;
    puStack_60 = puVar4;
    puStack_58 = puVar6;
    __sSy10FoundationE7padding8toLength7withPad10startingAtSSSi_qd__SitSyRd__lF
              (lVar8,puVar5,0,puVar1,puVar1,uVar3,uVar3);
    _swift_bridgeObjectRelease(puVar6);
    puVar9 = puVar5;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (lVar8,puVar5,0);
    _swift_bridgeObjectRelease(puVar5);
  }
  auVar10._8_8_ = puVar9;
  auVar10._0_8_ = lVar8;
  return auVar10;
}



/* Entry: 104921e50; end: 104922293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ***** FUN_104921e50(double param_1,ulong *****param_2)

{
  long lVar1;
  ulong *****pppppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *****pppppuVar6;
  ulong uVar7;
  long lVar8;
  ulong *****unaff_x20;
  ulong ****ppppuVar9;
  ulong *****unaff_x21;
  long lVar10;
  ulong *****unaff_x22;
  long lVar11;
  ulong *****unaff_x23;
  long lVar12;
  uint uVar13;
  ulong *****pppppuVar14;
  ulong unaff_x25;
  long lVar15;
  ulong *****pppppuVar16;
  ulong *****unaff_x26;
  ulong *****unaff_x27;
  long lVar17;
  ulong ****ppppuVar18;
  code *pcVar19;
  double dVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double dVar21;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  ulong auStack_130 [14];
  ulong ***apppuStack_c0 [2];
  ulong ****ppppuStack_b0;
  ulong ***pppuStack_a8;
  ulong ****ppppuStack_a0;
  ulong ***pppuStack_88;
  ulong ****ppppuStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = (ulong *****)0x0;
  __sSS10FoundationE8EncodingVMa();
  ppppuVar18 = pppppuVar2[-1];
  lVar1 = -((long)ppppuVar18[8] + 0xfU & 0xfffffffffffffff0);
  pppppuVar14 = (ulong *****)((long)auStack_130 + lVar1 + 0x70);
  pppppuVar16 = pppppuVar2;
  if (param_2 != (ulong *****)0x0) {
    unaff_x22 = (ulong *****)0x65746e6f635f6266;
    ppppuVar9 = param_2[2];
    pppppuVar16 = param_2;
    _swift_bridgeObjectRetain();
    unaff_x20 = (ulong *****)0x0;
    if (ppppuVar9 != (ulong ****)0x0) {
      uVar7 = 0;
      pppppuVar16 = unaff_x22;
      func_0x000100029284();
      unaff_x20 = param_2;
      if ((uVar7 & 1) != 0) {
        func_0x0001000bb420(param_2[7] + (long)pppppuVar16 * 4,&pppuStack_88);
        pppppuVar16 = (ulong *****)&pppuStack_a8;
        _swift_dynamicCast(pppppuVar16,&pppuStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                          );
        ppppuVar9 = ppppuStack_a0;
        if (((ulong)pppppuVar16 & 1) != 0) {
          pppuStack_88 = pppuStack_a8;
          ppppuStack_80 = ppppuStack_a0;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppuVar14);
          func_0x000100e8b654();
          unaff_x20 = (ulong *****)&pppuStack_88;
          unaff_x25 = 0;
          unaff_x26 = pppppuVar14;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (pppppuVar14,0,PTR___sSSN_11034da80,pppppuVar16);
          (*(code *)ppppuVar18[1])(pppppuVar14,pppppuVar2);
          pppppuVar16 = (ulong *****)ppppuVar9;
          _swift_bridgeObjectRelease();
          unaff_x21 = (ulong *****)ppppuVar9;
          if (unaff_x25 >> 0x3c < 0xf) {
            puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            _swift_getInitializedObjCClass();
            unaff_x21 = unaff_x26;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(unaff_x26,unaff_x25);
            ppppuStack_b0 = (ulong ****)0x0;
            _objc_msgSend(puVar3,PTR_s_JSONObjectWithData_options_error_11254dfe0,unaff_x21,0,
                          &ppppuStack_b0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x21);
            unaff_x20 = (ulong *****)ppppuStack_b0;
            _objc_retain();
            if (puVar3 == (undefined *)0x0) {
              unaff_x21 = unaff_x20;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
              _objc_release(unaff_x20);
              _swift_willThrow();
              func_0x0001000b44c0(unaff_x26,unaff_x25);
              pppppuVar16 = unaff_x21;
              _swift_errorRelease();
              unaff_x27 = unaff_x21;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&pppuStack_a8,puVar3);
              _swift_unknownObjectRelease(puVar3);
              func_0x000100102924(&pppuStack_a8,&pppuStack_88);
              func_0x0001000bb420(&pppuStack_88,&pppuStack_a8);
              pppppuVar16 = param_2;
              _swift_isUniquelyReferenced_nonNull_native(param_2);
              unaff_x20 = &ppppuStack_b0;
              ppppuStack_b0 = (ulong ****)param_2;
              func_0x0001001029e8(&pppuStack_a8,0x65746e6f635f6266,0xea0000000000746e,pppppuVar16);
              func_0x0001000b44c0(unaff_x26,unaff_x25);
              pppppuVar16 = (ulong *****)&pppuStack_88;
              func_0x000104924790();
              param_2 = (ulong *****)ppppuStack_b0;
            }
          }
        }
      }
    }
    unaff_x23 = pppppuVar2;
    if (param_2[2] != (ulong ****)0x0) {
      unaff_x21 = (ulong *****)0xed000064695f746e;
      _swift_bridgeObjectRetain(param_2);
      pppppuVar16 = unaff_x22;
      pppppuVar6 = unaff_x21;
      func_0x000100029284(0x65746e6f635f6266);
      unaff_x20 = param_2;
      if (((ulong)pppppuVar6 & 1) == 0) {
        pppppuVar16 = param_2;
        _swift_bridgeObjectRelease();
      }
      else {
        func_0x0001000bb420(param_2[7] + (long)pppppuVar16 * 4,&pppuStack_88);
        _swift_bridgeObjectRelease(param_2);
        pppppuVar16 = (ulong *****)&pppuStack_a8;
        _swift_dynamicCast(pppppuVar16,&pppuStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                          );
        if (((ulong)pppppuVar16 & 1) != 0) {
          pppuStack_88 = pppuStack_a8;
          ppppuStack_80 = ppppuStack_a0;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppuVar14);
          func_0x000100e8b654();
          unaff_x25 = 0;
          unaff_x26 = pppppuVar14;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (pppppuVar14,0,PTR___sSSN_11034da80,pppppuVar16);
          (*(code *)ppppuVar18[1])(pppppuVar14,pppppuVar2);
          pppppuVar16 = (ulong *****)ppppuStack_a0;
          _swift_bridgeObjectRelease();
          unaff_x20 = (ulong *****)&pppuStack_88;
          unaff_x27 = (ulong *****)ppppuStack_a0;
          if (unaff_x25 >> 0x3c < 0xf) {
            puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            _swift_getInitializedObjCClass();
            unaff_x23 = unaff_x26;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(unaff_x26,unaff_x25);
            ppppuStack_b0 = (ulong ****)0x0;
            _objc_msgSend(puVar3,PTR_s_JSONObjectWithData_options_error_11254dfe0,unaff_x23,0,
                          &ppppuStack_b0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x23);
            unaff_x20 = (ulong *****)ppppuStack_b0;
            _objc_retain();
            if (puVar3 == (undefined *)0x0) {
              unaff_x21 = unaff_x20;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
              _objc_release(unaff_x20);
              _swift_willThrow();
              func_0x0001000b44c0(unaff_x26,unaff_x25);
              pppppuVar16 = unaff_x21;
              _swift_errorRelease();
              unaff_x22 = unaff_x21;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&pppuStack_a8,puVar3);
              _swift_unknownObjectRelease(puVar3);
              func_0x000100102924(&pppuStack_a8,&pppuStack_88);
              func_0x0001000bb420(&pppuStack_88,&pppuStack_a8);
              pppppuVar16 = param_2;
              _swift_isUniquelyReferenced_nonNull_native(param_2);
              ppppuStack_b0 = (ulong ****)param_2;
              func_0x0001001029e8(&pppuStack_a8,0x65746e6f635f6266,0xed000064695f746e,pppppuVar16);
              func_0x0001000b44c0(unaff_x26,unaff_x25);
              pppppuVar16 = (ulong *****)&pppuStack_88;
              func_0x000104924790();
              param_2 = (ulong *****)ppppuStack_b0;
              unaff_x20 = &ppppuStack_b0;
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)auStack_130 + lVar1) = unaff_d9;
  *(undefined8 *)((long)auStack_130 + lVar1 + 8) = unaff_d8;
  *(ulong *****)((long)auStack_130 + lVar1 + 0x10) = ppppuVar18;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x18) = unaff_x27;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x20) = unaff_x26;
  *(ulong *)((long)auStack_130 + lVar1 + 0x28) = unaff_x25;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x30) = pppppuVar14;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x38) = unaff_x23;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x40) = unaff_x22;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x48) = unaff_x21;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x50) = unaff_x20;
  *(ulong ******)((long)auStack_130 + lVar1 + 0x58) = param_2;
  *(undefined1 **)((long)auStack_130 + lVar1 + 0x60) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_130 + lVar1 + 0x68) = FUN_104922294;
  lVar4 = 0x11309c628;
  func_0x0001048db364();
  lVar10 = (long)&uStack_150 +
           (lVar1 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar4 = _DAT_11309d708;
  lVar17 = *(long *)(lVar5 + -8);
  uVar7 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar10 - uVar7;
  lVar15 = lVar11 - uVar7;
  lVar12 = lVar15 - uVar7;
  if (pppppuVar16 == (ulong *****)0x0) {
    pppppuVar16 = (ulong *****)0x1;
  }
  else {
    _swift_beginAccess((long)pppppuVar16 + _DAT_11309d708,auStack_148 + lVar1,0,0);
    lVar8 = *(long *)((long)pppppuVar16 + lVar4) * 0x15180;
    if (SUB168(SEXT816(*(long *)((long)pppppuVar16 + lVar4)) * SEXT816(0x15180),8) != lVar8 >> 0x3f)
    {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x1049224c4);
      (*pcVar19)();
    }
    dVar21 = (double)lVar8;
    _objc_retain();
    *(ulong ******)((long)&uStack_150 + lVar1) = pppppuVar16;
    __s10Foundation4DateVACycfC(lVar12);
    puVar3 = PTR__swift_isaMask_11034f488;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & (ulong)*unaff_x20) + 0x188))(lVar15);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar15);
    pcVar19 = *(code **)(lVar17 + 8);
    dVar20 = param_1;
    (*pcVar19)(lVar15,lVar5);
    (*pcVar19)(lVar12,lVar5);
    pppppuVar16 = (ulong *****)(ulong)(dVar21 < param_1);
    (**(code **)((*(ulong *)puVar3 & (ulong)*unaff_x20) + 0x230))(lVar10);
    lVar4 = lVar10;
    (**(code **)(lVar17 + 0x30))(lVar10,1,lVar5);
    if ((int)lVar4 == 1) {
      _objc_release(*(undefined8 *)((long)&uStack_150 + lVar1));
      func_0x000104924754(lVar10,0x11309c628);
    }
    else {
      (**(code **)(lVar17 + 0x20))(lVar11,lVar10,lVar5);
      __s10Foundation4DateVACycfC(lVar12);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
      _objc_release(*(undefined8 *)((long)&uStack_150 + lVar1));
      (*pcVar19)(lVar12,lVar5);
      (*pcVar19)(lVar11,lVar5);
      uVar13 = (uint)(dVar21 < param_1);
      if (86400.0 < dVar20) {
        uVar13 = 1;
      }
      pppppuVar16 = (ulong *****)(ulong)uVar13;
    }
  }
  return pppppuVar16;
}



/* Entry: 104922294; end: 10492298f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104922294(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  puVar7 = auStack_88 + (-8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar2 = _DAT_11309d708;
  lVar12 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)puVar7 - uVar5;
  lVar11 = lVar8 - uVar5;
  lVar9 = lVar11 - uVar5;
  if (param_2 == 0) {
    bVar10 = true;
  }
  else {
    _swift_beginAccess(param_2 + _DAT_11309d708,auStack_88,0,0);
    lVar6 = *(long *)(param_2 + lVar2) * 0x15180;
    if (SUB168(SEXT816(*(long *)(param_2 + lVar2)) * SEXT816(0x15180),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1049224c4);
      (*pcVar13)();
    }
    dVar15 = (double)lVar6;
    _objc_retain();
    lStack_90 = param_2;
    __s10Foundation4DateVACycfC(lVar9);
    puVar1 = PTR__swift_isaMask_11034f488;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x188))(lVar11);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
    pcVar13 = *(code **)(lVar12 + 8);
    dVar14 = param_1;
    (*pcVar13)(lVar11,lVar3);
    (*pcVar13)(lVar9,lVar3);
    bVar10 = dVar15 < param_1;
    (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0x230))(puVar7);
    puVar4 = puVar7;
    (**(code **)(lVar12 + 0x30))(puVar7,1,lVar3);
    if ((int)puVar4 == 1) {
      _objc_release(lStack_90);
      func_0x000104924754(puVar7,0x11309c628);
    }
    else {
      (**(code **)(lVar12 + 0x20))(lVar8,puVar7,lVar3);
      __s10Foundation4DateVACycfC(lVar9);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar8);
      _objc_release(lStack_90);
      (*pcVar13)(lVar9,lVar3);
      (*pcVar13)(lVar8,lVar3);
      bVar10 = 86400.0 < dVar14 || dVar15 < param_1;
    }
  }
  return bVar10;
}



/* Entry: 104922990; end: 104922baf;  */

undefined * FUN_104922990(char param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) goto LAB_104922b84;
  uVar5 = 0x544c5541464544;
  uVar3 = 0x444e415242;
  if (param_1 == '\0') {
    uVar7 = 0xe700000000000000;
    uVar1 = uVar5;
LAB_104922a08:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar1,uVar7,0x444e415242,0xe500000000000000,0);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar1 & 1) == 0) {
      if (param_1 == '\0') {
        uVar3 = 0xe700000000000000;
        lVar2 = *(long *)(param_2 + 0x10);
      }
      else {
        uVar5 = uVar3;
        if (param_1 != '\x01') {
          uVar5 = 0x53415043;
        }
        uVar3 = 0xe500000000000000;
        if (param_1 != '\x01') {
          uVar3 = 0xe400000000000000;
        }
        lVar2 = *(long *)(param_2 + 0x10);
      }
      if (lVar2 != 0) {
        _swift_bridgeObjectRetain(param_2);
        uVar1 = uVar3;
        func_0x000100029284();
        if ((uVar1 & 1) != 0) {
          puVar6 = *(undefined **)(*(long *)(param_2 + 0x38) + uVar5 * 8);
          _swift_bridgeObjectRetain(puVar6);
          _swift_bridgeObjectRelease(uVar3);
          _swift_bridgeObjectRelease(param_2);
          return puVar6;
        }
        _swift_bridgeObjectRelease(uVar3);
        uVar3 = param_2;
      }
      _swift_bridgeObjectRelease(uVar3);
LAB_104922b84:
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      return puVar6;
    }
  }
  else {
    if (param_1 != '\x01') {
      uVar7 = 0xe400000000000000;
      uVar1 = 0x53415043;
      goto LAB_104922a08;
    }
    _swift_bridgeObjectRelease(0xe500000000000000);
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_104922aac:
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar2 = 0x53415043;
    uVar5 = 0;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_104922aac;
    }
    puVar6 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar2 * 8);
    _swift_bridgeObjectRetain(puVar6);
    _swift_bridgeObjectRelease(param_2);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    uVar5 = 0;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      puVar4 = *(undefined **)(*(long *)(param_2 + 0x38) + uVar3 * 8);
      _swift_bridgeObjectRetain(puVar4);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_104922b10;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_104922b10:
  FUN_1049244c8(puVar4);
  return puVar6;
}



/* Entry: 104922bb0; end: 104922c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104922bb0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = _DAT_11309d710;
  _swift_beginAccess(param_1 + _DAT_11309d710,auStack_48,0,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x1c0))
            (*(undefined8 *)(param_1 + lVar4));
  puVar1 = (undefined8 *)(param_1 + _DAT_11309d720);
  _swift_beginAccess(puVar1,auStack_60,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11309d858);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar5 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRelease(uVar5);
  return;
}



/* Entry: 104922c7c; end: 104922c83; +[_TtC8FBAEMKit13AEMInvocation supportsSecureCoding] */

undefined8 FUN_104922c7c(void)

{
  return 1;
}



/* Entry: 104922c84; end: 104922c8b;  */

undefined8 FUN_104922c84(void)

{
  return 1;
}



/* Entry: 104922c8c; end: 104922cbb;  */

void FUN_104922c8c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104922cbc(param_1);
  return;
}



/* Entry: 104922cbc; end: 1049237db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104922cbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined4 uStack_184;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *apuStack_e8 [3];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar7 = 0x11309c628;
  func_0x0001048db364();
  puVar15 = auStack_1b0 + -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  __s10Foundation4DateVMa();
  lStack_118 = *(long *)(lVar8 + -8);
  lStack_120 = (long)puVar15 - (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11309d820);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_11309d828);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11309d830);
  *puVar4 = 0;
  puVar4[1] = 0;
  lVar7 = _DAT_11309d888;
  pcStack_110 = *(code **)(lStack_118 + 0x38);
  (*pcStack_110)(unaff_x20 + _DAT_11309d888,1,1,lVar8);
  puVar9 = (undefined *)0x0;
  func_0x0001049247b0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar10 = puVar9;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  puStack_100 = puVar10;
  if (puVar10 != (undefined *)0x0) {
    puVar10 = puVar9;
    lStack_128 = lVar8;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
              (puVar9,0x656b6f745f736361,0xe90000000000006e,puVar9);
    puVar16 = puStack_100;
    puStack_108 = puVar10;
    if (puVar10 != (undefined *)0x0) {
      puVar10 = puVar9;
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                (puVar9,0x6d5f6769666e6f63,0xeb0000000065646f,puVar9);
      puStack_148 = puVar10;
      if (puVar10 != (undefined *)0x0) {
        lStack_158 = lVar7;
        puVar10 = puVar9;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                  (puVar9,0x735f646572616873,0xed00007465726365,puVar9);
        puVar16 = puVar9;
        puStack_130 = puVar10;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                  (puVar9,0x666e6f635f736361,0xed000064695f6769,puVar9);
        puVar10 = puVar9;
        puStack_168 = puVar16;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                  (puVar9,0x7369747265766461,0xed000064695f7265,puVar9);
        puVar16 = puVar9;
        puStack_138 = puVar10;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                  (puVar9,0x5f676f6c61746163,0xea00000000006469,puVar9);
        puVar10 = (undefined *)0x0;
        puStack_170 = puVar16;
        func_0x0001049247b0(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
        puStack_180 = puVar10;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF()
        ;
        puStack_160 = puVar15;
        puStack_150 = puVar10;
        if (puVar10 == (undefined *)0x0) {
          puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_allocWithZone();
          _objc_msgSend();
          puStack_150 = puVar10;
        }
        uVar11 = 0x695f6769666e6f63;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x695f6769666e6f63,0xe900000000000064)
        ;
        uVar12 = param_1;
        _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar11);
        uStack_178 = uVar12;
        _objc_release(uVar11);
        lVar7 = 0x11309d6d8;
        func_0x0001048db364();
        lVar8 = lVar7;
        _swift_allocObject();
        *(undefined8 *)(lVar8 + 0x18) = 4;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        uVar12 = 0;
        func_0x0001049247b0(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        *(undefined **)(lVar8 + 0x28) = puVar9;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
                  (auStack_88,lVar8,0x646564726f636572,0xef73746e6576655f);
        _swift_bridgeObjectRelease(lVar8);
        puVar10 = PTR___sypN_11034f1a8;
        if (lStack_70 == 0) {
          func_0x000104924754(auStack_88,0x11309c428);
          puStack_140 = (undefined *)0x0;
        }
        else {
          ppuVar18 = apuStack_a0;
          _swift_dynamicCast(ppuVar18,auStack_88,PTR___sypN_11034f1a8 + 8,uVar12,6);
          puStack_140 = apuStack_a0[0];
          if ((int)ppuVar18 == 0) {
            puStack_140 = (undefined *)0x0;
          }
        }
        _swift_allocObject(lVar7,0x38,7);
        *(undefined8 *)(lVar7 + 0x18) = 6;
        *(undefined8 *)(lVar7 + 0x10) = 3;
        uVar12 = 0;
        func_0x0001049247b0(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
        *(undefined8 *)(lVar7 + 0x20) = uVar12;
        *(undefined **)(lVar7 + 0x28) = puVar9;
        uVar12 = 0;
        func_0x0001049247b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        *(undefined8 *)(lVar7 + 0x30) = uVar12;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
                  (auStack_88,lVar7,0x646564726f636572,0xef7365756c61765f);
        _swift_bridgeObjectRelease(lVar7);
        if (lStack_70 == 0) {
          func_0x000104924754(auStack_88,0x11309c428);
          puStack_198 = (undefined *)0x0;
        }
        else {
          uVar12 = 0x11309d898;
          func_0x0001048db364(0x11309d898);
          ppuVar18 = apuStack_a0;
          _swift_dynamicCast(ppuVar18,auStack_88,puVar10 + 8,uVar12,6);
          puStack_198 = apuStack_a0[0];
          if ((int)ppuVar18 == 0) {
            puStack_198 = (undefined *)0x0;
          }
        }
        puVar10 = puStack_100;
        uVar11 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21c630)
        ;
        uVar12 = param_1;
        _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar11);
        uStack_1a0 = uVar12;
        _objc_release(uVar11);
        uVar11 = 0x797469726f697270;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x797469726f697270,0xe800000000000000)
        ;
        uVar12 = param_1;
        _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar11);
        uStack_1a8 = uVar12;
        _objc_release(uVar11);
        puVar9 = puStack_180;
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                  (puStack_180,0xd000000000000014,0x800000010f21c650,puStack_180);
        uVar11 = 0x65726767615f7369;
        puStack_190 = puVar9;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65726767615f7369,0xed00006465746167)
        ;
        uVar12 = param_1;
        _objc_msgSend(param_1,PTR_s_decodeBoolForKey__1125b74e0,uVar11);
        puStack_100 = (undefined *)CONCAT44(puStack_100._4_4_,(int)uVar12);
        _objc_release(uVar11);
        uVar11 = 0x6e616b735f736168;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e616b735f736168,0xe800000000000000)
        ;
        uVar12 = param_1;
        _objc_msgSend(param_1,PTR_s_decodeBoolForKey__1125b74e0,uVar11);
        puStack_180 = (undefined *)CONCAT44(puStack_180._4_4_,(int)uVar12);
        _objc_release(uVar11);
        uVar12 = 0xd000000000000020;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f21c670)
        ;
        uVar11 = param_1;
        puVar16 = PTR_s_decodeBoolForKey__1125b74e0;
        _objc_msgSend(param_1,PTR_s_decodeBoolForKey__1125b74e0,uVar12);
        uStack_184 = (undefined4)uVar11;
        _objc_release(uVar12);
        puVar9 = puVar10;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar5 = (undefined8 *)(unaff_x20 + _DAT_11309d808);
        *puVar5 = puVar9;
        puVar5[1] = puVar16;
        puVar9 = puStack_108;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar5 = (undefined8 *)(unaff_x20 + _DAT_11309d810);
        *puVar5 = puVar9;
        puVar5[1] = puVar16;
        if (puStack_130 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar9 = puStack_130;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        puVar15 = puStack_160;
        puVar19 = auStack_88;
        _swift_beginAccess(puVar1,puVar19,1,0);
        uVar12 = puVar1[1];
        *puVar1 = puVar9;
        puVar1[1] = puVar16;
        _swift_bridgeObjectRelease(uVar12);
        puVar9 = puStack_168;
        if (puStack_168 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          puVar19 = (undefined1 *)0x0;
        }
        else {
          puVar16 = puStack_168;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        ppuVar18 = apuStack_a0;
        _swift_beginAccess(puVar2,ppuVar18,1,0);
        uVar12 = puVar2[1];
        *puVar2 = puVar16;
        puVar2[1] = puVar19;
        _swift_bridgeObjectRelease(uVar12);
        if (puStack_138 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          ppuVar18 = (undefined **)0x0;
        }
        else {
          puVar16 = puStack_138;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        puVar20 = puStack_148;
        puVar19 = auStack_b8;
        _swift_beginAccess(puVar3,puVar19,1,0);
        uVar12 = puVar3[1];
        *puVar3 = puVar16;
        puVar3[1] = ppuVar18;
        _swift_bridgeObjectRelease(uVar12);
        puVar16 = puStack_170;
        if (puStack_170 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
          puVar19 = (undefined1 *)0x0;
        }
        else {
          puVar17 = puStack_170;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        _swift_beginAccess(puVar4,auStack_d0,1,0);
        uVar12 = puVar4[1];
        *puVar4 = puVar17;
        puVar4[1] = puVar19;
        _swift_bridgeObjectRelease(uVar12);
        lVar7 = lStack_120;
        puVar17 = puStack_150;
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                  (lStack_120,puStack_150);
        (**(code **)(lStack_118 + 0x20))(unaff_x20 + _DAT_11309d850,lVar7,lStack_128);
        puVar13 = puVar20;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d858);
        *puVar1 = puVar13;
        puVar1[1] = lVar7;
        *(undefined8 *)(unaff_x20 + _DAT_11309d860) = uStack_178;
        if (puStack_140 != (undefined *)0x0) {
          apuStack_e8[0] = (undefined *)0x0;
          puVar13 = puStack_140;
          _objc_retain();
          __sSh10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo5NSSetC_ShyxGSgztFZ();
          _objc_release(puVar13);
          puVar13 = apuStack_e8[0];
          if (apuStack_e8[0] != (undefined *)0x0) goto LAB_1049235bc;
        }
        puVar13 = PTR___swiftEmptySetSingleton_11034f1d8;
        _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        _swift_bridgeObjectRelease(0);
LAB_1049235bc:
        *(undefined **)(unaff_x20 + _DAT_11309d868) = puVar13;
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar14 = puStack_198;
        if (puStack_198 == (undefined *)0x0) {
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          func_0x000102762c70();
          _swift_release(puVar13);
        }
        puVar13 = puStack_190;
        *(undefined **)(unaff_x20 + _DAT_11309d870) = puVar14;
        *(undefined8 *)(unaff_x20 + _DAT_11309d878) = uStack_1a0;
        *(undefined8 *)(unaff_x20 + _DAT_11309d880) = uStack_1a8;
        bVar6 = puStack_190 == (undefined *)0x0;
        if (bVar6) {
          _objc_release(puVar20);
          _objc_release(puVar17);
          _objc_release(puStack_108);
          puVar20 = puStack_130;
          puVar17 = puStack_138;
          puVar13 = puStack_140;
        }
        else {
          __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                    (puVar15,puStack_190);
          _objc_release(puVar20);
          _objc_release(puVar17);
          _objc_release(puStack_108);
          _objc_release(puVar10);
          puVar10 = puStack_130;
          puVar20 = puVar9;
          puVar17 = puVar16;
          puVar9 = puStack_138;
          puVar16 = puStack_140;
        }
        _objc_release(puVar10);
        _objc_release(puVar20);
        _objc_release(puVar9);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar13);
        (*pcStack_110)(puVar15,bVar6,1,lStack_128);
        lVar7 = lStack_158;
        _swift_beginAccess(unaff_x20 + lStack_158,apuStack_e8,0x21,0);
        func_0x000100ed9cbc(puVar15,unaff_x20 + lVar7);
        _swift_endAccess(apuStack_e8);
        *(char *)(unaff_x20 + _DAT_11309d890) = (char)puStack_100;
        *(undefined1 *)(unaff_x20 + _DAT_11309d838) = 0;
        *(char *)(unaff_x20 + _DAT_11309d840) = (char)puStack_180;
        *(char *)(unaff_x20 + _DAT_11309d848) = (char)uStack_184;
        func_0x0001049246d8();
        puVar15 = &stack0xffffffffffffff08;
        _objc_msgSendSuper2(puVar15,PTR_s_init_1125d9248);
        _objc_release(param_1);
        return puVar15;
      }
      _objc_release(puStack_100);
      puVar16 = puStack_108;
    }
    _objc_release(puVar16);
  }
  _objc_release(param_1);
  _swift_bridgeObjectRelease(puVar1[1]);
  _swift_bridgeObjectRelease(puVar2[1]);
  _swift_bridgeObjectRelease(puVar3[1]);
  _swift_bridgeObjectRelease(puVar4[1]);
  func_0x000104924754(unaff_x20 + lVar7,0x11309c628);
  func_0x0001049246d8(0);
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 1049237dc; end: 104923803; -[_TtC8FBAEMKit13AEMInvocation initWithCoder:] */

void FUN_1049237dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104922cbc();
  return;
}



/* Entry: 104923804; end: 10492406b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104923804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0x11309c628;
  func_0x0001048db364();
  lVar10 = (long)&pcStack_80 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  puVar2 = PTR__swift_isaMask_11034f488;
  lVar9 = *(long *)(lVar4 + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar4;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xe0))();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  uVar5 = 0x6e676961706d6163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e676961706d6163,0xec0000007364695f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar4,uVar5);
  _objc_release(lVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)((long)unaff_x20 + _DAT_11309d810);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)((long)unaff_x20 + _DAT_11309d810))[1]);
  uVar6 = 0x656b6f745f736361;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656b6f745f736361,0xe90000000000006e);
  puVar8 = PTR_s_encodeObject_forKey__1125c25b0;
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar6);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0xf8))();
  if (puVar8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
  }
  uVar5 = 0x735f646572616873;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x735f646572616873,0xed00007465726365);
  puVar8 = PTR_s_encodeObject_forKey__1125c25b0;
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar6,uVar5);
  _swift_unknownObjectRelease(uVar6);
  _objc_release(uVar5);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x110))();
  if (puVar8 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
  }
  uVar6 = 0x666e6f635f736361;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x666e6f635f736361,0xed000064695f6769);
  puVar8 = PTR_s_encodeObject_forKey__1125c25b0;
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar6);
  _swift_unknownObjectRelease(uVar5);
  _objc_release(uVar6);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x128))();
  if (puVar8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
  }
  uVar5 = 0x7369747265766461;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7369747265766461,0xed000064695f7265);
  puVar8 = PTR_s_encodeObject_forKey__1125c25b0;
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar6,uVar5);
  _swift_unknownObjectRelease(uVar6);
  _objc_release(uVar5);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x140))();
  lStack_70 = lVar10;
  if (puVar8 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
  }
  uVar6 = 0x5f676f6c61746163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f676f6c61746163,0xea00000000006469);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar6);
  _swift_unknownObjectRelease(uVar5);
  _objc_release(uVar6);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x188))(lVar11);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  pcStack_80 = *(code **)(lVar9 + 8);
  lStack_78 = lVar9;
  (*pcStack_80)(lVar11,lStack_68);
  uVar5 = 0x6d617473656d6974;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d617473656d6974,0xe900000000000070);
  puVar8 = PTR_s_encodeObject_forKey__1125c25b0;
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar6,uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x1a0))();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar8);
  uVar6 = 0x6d5f6769666e6f63;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d5f6769666e6f63,0xeb0000000065646f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar6);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x1b8))();
  uVar7 = 0x695f6769666e6f63;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x695f6769666e6f63,0xe900000000000064);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar6,uVar7);
  _objc_release(uVar7);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x1d0))();
  puVar1 = PTR___sSSSHsWP_11034da90;
  puVar8 = PTR___sSSN_11034da80;
  uVar5 = uVar7;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar7);
  uVar12 = 0x646564726f636572;
  uVar6 = uVar12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x646564726f636572,0xef73746e6576655f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar6);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x1e8))();
  uVar5 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  uVar7 = uVar6;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(uVar6,puVar8,uVar5,puVar1);
  _swift_bridgeObjectRelease(uVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x646564726f636572,0xef7365756c61765f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar7,uVar12);
  _objc_release(uVar7);
  _objc_release(uVar12);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x200))();
  uVar5 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21c630);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar12,uVar5);
  _objc_release(uVar5);
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x218))();
  uVar6 = 0x797469726f697270;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x797469726f697270,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar5,uVar6);
  lVar9 = lStack_68;
  _objc_release(uVar6);
  lVar4 = lStack_70;
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x230))(lStack_70);
  lVar10 = lVar4;
  (**(code **)(lStack_78 + 0x30))(lVar4,1,lVar9);
  if ((int)lVar10 == 1) {
    lVar10 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (*pcStack_80)(lVar4,lVar9);
  }
  uVar5 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f21c650);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar10,uVar5);
  _swift_unknownObjectRelease(lVar10);
  _objc_release(uVar5);
  uVar3 = (uint)uVar5;
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x248))();
  uVar5 = 0x65726767615f7369;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65726767615f7369,0xed00006465746167);
  _objc_msgSend(param_1,PTR_s_encodeBool_forKey__1125c2510,uVar3 & 1,uVar5);
  _objc_release(uVar5);
  uVar3 = (uint)uVar5;
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x158))();
  uVar5 = 0x6e616b735f736168;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e616b735f736168,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeBool_forKey__1125c2510,uVar3 & 1,uVar5);
  _objc_release(uVar5);
  uVar3 = (uint)uVar5;
  (**(code **)((*(ulong *)puVar2 & *unaff_x20) + 0x170))();
  uVar5 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f21c670);
  _objc_msgSend(param_1,PTR_s_encodeBool_forKey__1125c2510,uVar3 & 1,uVar5);
  _objc_release(uVar5);
  return;
}



/* Entry: 10492406c; end: 1049240bb; -[_TtC8FBAEMKit13AEMInvocation encodeWithCoder:] */

void FUN_10492406c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104923804(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049240bc; end: 104924107;  */

void FUN_1049240bc(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104924108; end: 104924167; -[_TtC8FBAEMKit13AEMInvocation init] */

void FUN_104924108(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBAEMKit.AEMInvocation",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104924134);
  (*pcVar1)();
}



/* Entry: 104924168; end: 10492426b; -[_TtC8FBAEMKit13AEMInvocation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104924168(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d808 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d810 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d818 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d820 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d828 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d830 + 8));
  lVar1 = _DAT_11309d850;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d858 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d868));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d870));
  func_0x000104924754(param_1 + _DAT_11309d888,0x11309c628);
  return;
}



/* Entry: 10492426c; end: 104924347;  */

undefined8 FUN_10492426c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uStack_58 = uVar1;
    uStack_48 = param_1;
    _swift_bridgeObjectRetain(uVar1);
    (*param_2)(&uStack_60,&uStack_48,&uStack_58);
    if (unaff_x21 == 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      while( true ) {
        lVar3 = lVar3 + -1;
        _swift_bridgeObjectRelease(uVar1);
        uStack_48 = uStack_60;
        param_1 = uStack_60;
        if (lVar3 == 0) break;
        uVar1 = *puVar2;
        uStack_58 = uVar1;
        _swift_bridgeObjectRetain(uVar1);
        (*param_2)(&uStack_60,&uStack_48,&uStack_58);
        puVar2 = puVar2 + 1;
      }
    }
    else {
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Entry: 104924348; end: 10492435b;  */

void FUN_104924348(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244b4);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar9 + 0x18);
  if ((lVar5 < lVar6) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar6) || ((param_4 & 1) != 0)) {
      (*(code *)0x10491d520)(lVar6,param_4 & 1);
      uVar3 = param_2;
      uVar8 = param_3;
      func_0x000100029284();
      if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244c8);
        (*pcVar2)();
      }
    }
    else {
      FUN_10491d3ac();
    }
  }
  lVar6 = *unaff_x20;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244b8);
  (*pcVar2)();
}



/* Entry: 10492435c; end: 1049244c7;  */

void FUN_10492435c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,code *param_5,
                  code *param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244b4);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar9 + 0x18);
  if ((lVar5 < lVar6) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar6) || ((param_4 & 1) != 0)) {
      (*param_6)(lVar6,param_4 & 1);
      uVar3 = param_2;
      uVar8 = param_3;
      func_0x000100029284();
      if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244c8);
        (*pcVar2)();
      }
    }
    else {
      (*param_5)();
    }
  }
  lVar6 = *unaff_x20;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1049244b8);
  (*pcVar2)();
}



/* Entry: 1049244c8; end: 104924663;  */

void FUN_1049244c8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001049245b4(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10492fe3c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1049245b0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1049245b4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049245ac);
  (*pcVar1)();
}



/* Entry: 104924664; end: 1049246d7;  */

ulong FUN_104924664(undefined8 param_1,undefined8 param_2)

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
  if (2 < uVar2) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 1049246d8; end: 104924833;  */

void FUN_1049246d8(undefined8 param_1)

{
  if (lRam000000011309d8d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e825d6c);
  return;
}



/* Entry: 104924834; end: 10492483b;  */

void FUN_104924834(void)

{
  if (lRam000000011309d8d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e825d6c);
  return;
}



/* Entry: 10492483c; end: 104924923;  */

void FUN_10492483c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_c0 = &UNK_10dd489d0;
  puStack_b8 = &UNK_10dd489d0;
  puStack_b0 = &UNK_10dd489e8;
  puStack_a8 = &UNK_10dd489e8;
  puStack_a0 = &UNK_10dd489e8;
  puStack_98 = &UNK_10dd489e8;
  puStack_90 = &UNK_10dd48a00;
  puStack_88 = &UNK_10dd48a00;
  puStack_80 = &UNK_10dd48a00;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = &UNK_10dd489d0;
    puStack_68 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_60 = PTR___sBbWV_11034d660 + 0x40;
    lVar1 = 0x13f;
    puStack_58 = puStack_60;
    puStack_50 = puStack_68;
    puStack_48 = puStack_68;
    func_0x0001000776dc();
    if (param_2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &UNK_10dd48a00;
      _swift_updateClassMetadata2(param_1,0x100,0x12,&puStack_c0,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 104924924; end: 104924df3;  */

void FUN_104924924(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010492493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xe0))();
  return;
}



/* Entry: 104924df4; end: 104924e63;  */

void FUN_104924df4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104924e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x260))();
  return;
}



/* Entry: 104924e64; end: 104924fa7;  */

void FUN_104924e64(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104924e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x268))();
  return;
}



/* Entry: 104924fa8; end: 10492514f;  */

int FUN_104924fa8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104925024;
        goto LAB_104925008;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104925008:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104925024:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104925150; end: 1049251b7;  */

void FUN_104925150(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1049251b8; end: 1049251cb;  */

bool FUN_1049251b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1049251cc; end: 104925277;  */

void FUN_1049251cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104925278; end: 104925287;  */

void FUN_104925278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104925288; end: 10492537b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104925288(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309d8e0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10492537c; end: 1049253f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10492537c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_11309d8e8);
  lVar2 = plVar1[1];
  if (lVar2 == 0) {
    FUN_104925410();
    lVar2 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = 0;
  }
  else {
    unaff_x20 = *plVar1;
    param_2 = lVar2;
  }
  _swift_bridgeObjectRetain(lVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}



/* Entry: 1049253f4; end: 10492540f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049253f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d8e8);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 104925410; end: 104925577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104925410(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0x4d4541534f694246;
  uStack_38 = 0xef302e302e37312e;
  puVar1 = (ulong *)(param_1 + _DAT_11309d8e0);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  uVar8 = puVar1[1];
  if (uVar8 != 0) {
    uVar9 = *puVar1;
    uVar2 = uVar9 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar2 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _swift_bridgeObjectRetain(uVar8);
      __sSS6appendyySSF(uVar9,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      __sSS6appendyySSF(0x2f,0xe100000000000000);
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
  }
  iVar5 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar5 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_msgSend();
    _objc_release(puVar6);
    uVar4 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    if ((int)puVar7 != 0) {
      _swift_bridgeObjectRetain(uStack_38);
      __sSS6appendyySSF(0x534f63616d2f,0xe600000000000000);
      _swift_bridgeObjectRelease(uVar4);
      uStack_40 = uVar3;
      uStack_38 = uVar4;
    }
  }
  auVar10._8_8_ = uStack_38;
  auVar10._0_8_ = uStack_40;
  return auVar10;
}



/* Entry: 104925578; end: 1049255ab;  */

undefined1  [16] FUN_104925578(long *param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  plVar1 = param_1;
  FUN_10492537c();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1049255ac;
  return auVar2;
}



/* Entry: 1049255ac; end: 1049255cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049255ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(param_1[2] + _DAT_11309d8e8);
  uVar3 = puVar1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1049255cc; end: 104925cd7;  */

void FUN_1049255cc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,code *param_8,undefined8 param_9)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x20;
  undefined1 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 auStack_140 [8];
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_b8;
  undefined1 auStack_b0 [80];
  
  lVar3 = 0;
  lStack_118 = param_7;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar3 + -8);
  puVar18 = auStack_140 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11309c5e0;
  func_0x0001048db364();
  puVar20 = puVar18 + -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar4 + -8);
  uVar14 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)puVar20 - uVar14;
  lVar19 = lVar16 - uVar14;
  puStack_f0 = (undefined *)0xd000000000000021;
  uStack_e8 = 0x800000010f21c830;
  __sSS6appendyySSF(param_1,param_2);
  uVar17 = uStack_e8;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar20,puStack_f0,uStack_e8);
  _swift_bridgeObjectRelease(uVar17);
  puVar5 = puVar20;
  (**(code **)(lVar15 + 0x30))(puVar20,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x000104925d18(puVar20,0x11309c5e0);
    func_0x000104925cd8();
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    puStack_e0 = (undefined *)0x0;
    puVar7 = &UNK_1107b85d8;
    _swift_allocError(&UNK_1107b85d8,puVar20,0,0);
    *puVar20 = 1;
    (*param_8)(&puStack_f0,puVar7);
    _swift_errorRelease(puVar7);
    func_0x000104925d18(&puStack_f0,0x11309c428);
    return;
  }
  pcStack_138 = param_8;
  (**(code **)(lVar15 + 0x20))(lVar19,puVar20,lVar4);
  lStack_128 = lVar15;
  lStack_120 = lVar19;
  (**(code **)(lVar15 + 0x10))(lVar16,lVar19,lVar4);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (puVar18,0x404e000000000000,lVar16,0);
  lVar15 = lStack_118;
  _swift_bridgeObjectRetain(lStack_118);
  lVar16 = lVar15;
  __s10Foundation10URLRequestV10httpMethodSSSgvs(param_6,lVar15);
  FUN_10492537c();
  __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF();
  _swift_bridgeObjectRelease(lVar16);
  __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
            (0xd000000000000010,0x800000010f21c860,0x2d746e65746e6f43,0xec00000065707954);
  __s10Foundation10URLRequestV23httpShouldHandleCookiesSbvs(0);
  lVar16 = 0;
  func_0x0001049355fc();
  _swift_initStackObject();
  *(undefined8 *)(lVar16 + 0x18) = 0xc000000000000000;
  *(undefined8 *)(lVar16 + 0x10) = 0;
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar7 = PTR___sSSN_11034da80;
  *(undefined **)(lVar16 + 0x20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_d8 = puVar7;
  puStack_f0 = (undefined *)0x6e6f736a;
  uStack_e8 = 0xe400000000000000;
  func_0x000100102924(&puStack_f0,auStack_b0);
  _swift_retain(puVar12);
  uVar14 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_isUniquelyReferenced_nonNull_native();
  uStack_b8 = param_3;
  func_0x0001001029e8(auStack_b0,0x74616d726f66,0xe600000000000000,uVar14);
  uVar14 = uStack_b8;
  puStack_d8 = puVar7;
  puStack_f0 = (undefined *)0x736f69;
  uStack_e8 = 0xe300000000000000;
  func_0x000100102924(&puStack_f0,auStack_b0);
  uVar6 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native(uVar14);
  uStack_b8 = uVar14;
  func_0x0001001029e8(auStack_b0,0x6b6473,0xe300000000000000,uVar6);
  uVar14 = uStack_b8;
  puStack_d8 = puVar7;
  puStack_f0 = (undefined *)0x65736c6166;
  uStack_e8 = 0xe500000000000000;
  func_0x000100102924(&puStack_f0,auStack_b0);
  uVar6 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native(uVar14);
  uStack_b8 = uVar14;
  func_0x0001001029e8(auStack_b0,0x5f6564756c636e69,0xef73726564616568,uVar6);
  uVar14 = uStack_b8;
  lStack_130 = lVar4;
  if (lVar15 == 0) {
    uVar2 = 0;
  }
  else if ((param_6 == 0x54534f50) && (lVar15 == -0x1c00000000000000)) {
    uVar2 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_6,lVar15,0x54534f50,0xe400000000000000,0);
    uVar2 = (uint)param_6;
  }
  lVar4 = lStack_120;
  lVar15 = lVar16;
  FUN_1049264c8(uVar14,lVar16,uVar2 & 1);
  _swift_release();
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  pcVar1 = pcStack_138;
  if (lVar15 == 0) {
LAB_104925ac4:
    func_0x000104934f60();
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
  }
  else {
    if ((uVar14 == 0x54534f50) && (lVar15 == -0x1c00000000000000)) {
      _swift_bridgeObjectRelease(0xe400000000000000);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar15);
      if ((uVar14 & 1) == 0) goto LAB_104925ac4;
    }
    FUN_104934e58();
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (0x70697a67,0xe400000000000000,0xd000000000000010,0x800000010f21c880);
  }
  puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined1 *)0x0) {
    func_0x000104925cd8();
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    puStack_e0 = (undefined *)0x0;
    puVar12 = &UNK_1107b85d8;
    _swift_allocError(&UNK_1107b85d8,puVar7,0,0);
    *puVar7 = 0;
    (*pcVar1)(&puStack_f0,puVar12);
    _swift_errorRelease(puVar12);
    _swift_setDeallocating(lVar16);
    func_0x00010006c090(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + 0x20));
    func_0x000104925d18(&puStack_f0,0x11309c428);
  }
  else {
    puVar8 = PTR_PTR_1126add80;
    _objc_allocWithZone(PTR_PTR_1126add80);
    _objc_msgSend();
    puVar9 = puVar8;
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    puVar12 = &UNK_1107b84d8;
    _swift_allocObject(&UNK_1107b84d8,0x18,7);
    _swift_unknownObjectWeakInit(puVar12 + 0x10,unaff_x20);
    puVar10 = &UNK_1107b8500;
    _swift_allocObject(&UNK_1107b8500,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar1;
    *(undefined8 *)(puVar10 + 0x18) = param_9;
    *(undefined **)(puVar10 + 0x20) = puVar12;
    pcStack_d0 = FUN_104926c98;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_1012d0a0c;
    puStack_d8 = &UNK_1107b8518;
    ppuVar11 = &puStack_f0;
    puStack_c8 = puVar10;
    __Block_copy(ppuVar11);
    puVar12 = puStack_c8;
    _swift_retain(param_9);
    _swift_release(puVar12);
    _objc_msgSend(puVar8,PTR_s_executeURLRequest_completionHand_1125c45b8,puVar9,ppuVar11);
    __Block_release(ppuVar11);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _swift_setDeallocating(lVar16);
    func_0x00010006c090(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18));
    uVar17 = *(undefined8 *)(lVar16 + 0x20);
    _objc_release(puVar7);
    _swift_bridgeObjectRelease(uVar17);
  }
  (**(code **)(lVar13 + 8))(puVar18,lVar3);
  (**(code **)(lStack_128 + 8))(lVar4,lStack_130);
  return;
}


