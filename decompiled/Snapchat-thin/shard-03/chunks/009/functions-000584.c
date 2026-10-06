/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e2a28c; end: 102e2a2ef;  */

void FUN_102e2a28c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x112f1df90;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e2a2f0; end: 102e2a2fb;  */

void FUN_102e2a2f0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x112f1df90;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102e2a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102e29ef8(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 102e2a2fc; end: 102e2a353;  */

void FUN_102e2a2fc(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x112f1df90;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102e2a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 102e2a354; end: 102e2a397;  */

void FUN_102e2a354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1dfa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cce38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f1dfa0 = puVar1;
  return;
}



/* Entry: 102e2a398; end: 102e2a3b3;  */

void FUN_102e2a398(long param_1,long param_2)

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



/* Entry: 102e2a3b4; end: 102e2a567;  */

ulong FUN_102e2a3b4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2a498);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2a49c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cce38;
    func_0x000107c61168(PTR_PTR_1126cce38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126cce38;
    func_0x000107c61168(PTR_PTR_1126cce38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102e2a354(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2a568);
  (*pcVar2)();
}



/* Entry: 102e2a568; end: 102e2a583;  */

void FUN_102e2a568(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102e2a584();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102e2a584; end: 102e2a69f;  */

undefined * FUN_102e2a584(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2a6a0);
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
    puVar3 = (undefined *)0x112f1dfa8;
    func_0x0001000285a8(0x112f1dfa8,&UNK_10db56000);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105d94d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102e2a6a0; end: 102e2a943;  */

undefined * FUN_102e2a6a0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = param_1;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar12 = uVar2;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar3 = 0;
  FUN_102e2a354(0);
  uVar2 = uVar12;
  func_0x000107c5fc54(uVar12,uVar3);
  func_0x000107c61170(uVar12);
  if (uVar2 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar12 = uVar2;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar12 == 0) {
    func_0x000107c6142c(uVar2);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_102e2a568(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e2a944);
      (*pcVar1)();
    }
    uVar13 = 0;
    do {
      uVar9 = uVar2;
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar13;
        FUN_102e2a3b4();
      }
      uVar5 = uVar4;
      func_0x000107c3f70c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar10 = uVar9;
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar7 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c51ba4();
      func_0x000107c61180();
      uVar8 = uVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
        FUN_102e2a568(1 < *(ulong *)(puVar11 + 0x18),uVar4 + 1,1);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar11 + uVar4 * 0x28 + 0x20) = uVar6;
      *(ulong *)(puVar11 + uVar4 * 0x28 + 0x28) = uVar9;
      *(ulong *)(puVar11 + uVar4 * 0x28 + 0x30) = uVar7;
      *(ulong *)(puVar11 + uVar4 * 0x28 + 0x38) = uVar10;
      *(ulong *)(puVar11 + uVar4 * 0x28 + 0x40) = uVar8;
    } while (uVar12 != uVar13);
    func_0x000107c6142c(uVar2);
  }
  uVar2 = param_1;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar12 = uVar2;
  func_0x000107c51c5c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (uVar12 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = uVar12;
    func_0x000107c3f70c(uVar12);
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x000107c5faec(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
  }
  return puVar11;
}



/* Entry: 102e2a944; end: 102e2a9a7;  */

/* WARNING: Possible PIC construction at 0x000102e2a958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e2a95c) */

void FUN_102e2a944(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102e2a9a8; end: 102e2aa0b;  */

undefined8 * FUN_102e2a9a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102e2aa0c; end: 102e2aa4f;  */

undefined8 * FUN_102e2aa0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102e2aa50; end: 102e2aaef;  */

int FUN_102e2aa50(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e2aaf0; end: 102e2ab4b;  */

long FUN_102e2aaf0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e2ab4c; end: 102e2ac23;  */

undefined8 * FUN_102e2ab4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102e2ac24; end: 102e2ac77;  */

undefined8 * FUN_102e2ac24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102e2ac78; end: 102e2ad23;  */

int FUN_102e2ac78(int *param_1,int param_2)

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



/* Entry: 102e2ad24; end: 102e2adcb;  */

undefined8 FUN_102e2ad24(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar6 = *param_1;
  uVar7 = param_1[2];
  uVar4 = param_1[3];
  uVar2 = param_1[4];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar10 = param_2[4];
  if (((uVar6 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar6 & 1) == 0))
     || ((uVar7 != uVar1 || uVar4 != uVar3 &&
         (func_0x000107c605b8(uVar7,uVar4,uVar1,uVar3,0), (uVar7 & 1) == 0)))) {
    return 0;
  }
  lVar8 = *(long *)(uVar2 + 0x10);
  if (lVar8 == *(long *)(uVar10 + 0x10)) {
    if ((lVar8 != 0) && (uVar2 != uVar10)) {
      plVar9 = (long *)(uVar10 + 0x28);
      plVar11 = (long *)(uVar2 + 0x28);
      do {
        uVar4 = plVar11[-1];
        if ((uVar4 != plVar9[-1] || *plVar11 != *plVar9) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) goto code_r0x00010142d02c;
        plVar9 = plVar9 + 2;
        plVar11 = plVar11 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = 1;
  }
  else {
code_r0x00010142d02c:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 102e2adcc; end: 102e2add7;  */

undefined * FUN_102e2adcc(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 102e2add8; end: 102e2af17;  */

undefined8 FUN_102e2add8(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 == 0) || (param_1 == param_2)) {
      uVar8 = 1;
    }
    else {
      lVar13 = 0;
      do {
        puVar1 = (ulong *)(param_1 + 0x20 + lVar13 * 0x28);
        uVar6 = *puVar1;
        uVar7 = puVar1[2];
        uVar4 = puVar1[3];
        uVar14 = puVar1[4];
        puVar2 = (ulong *)(param_2 + 0x20 + lVar13 * 0x28);
        uVar3 = puVar2[2];
        uVar5 = puVar2[3];
        uVar15 = puVar2[4];
        if ((((uVar6 != *puVar2 || puVar1[1] != puVar2[1]) &&
             (func_0x000107c605b8(), (uVar6 & 1) == 0)) ||
            ((uVar7 != uVar3 || uVar4 != uVar5 &&
             (func_0x000107c605b8(uVar7,uVar4,uVar3,uVar5,0), (uVar7 & 1) == 0)))) ||
           (lVar9 = *(long *)(uVar14 + 0x10), lVar9 != *(long *)(uVar15 + 0x10)))
        goto LAB_102e2aef0;
        if (lVar9 != 0 && uVar14 != uVar15) {
          plVar10 = (long *)(uVar15 + 0x28);
          plVar11 = (long *)(uVar14 + 0x28);
          do {
            uVar6 = plVar11[-1];
            if ((uVar6 != plVar10[-1] || *plVar11 != *plVar10) &&
               (func_0x000107c605b8(), (uVar6 & 1) == 0)) goto LAB_102e2aef0;
            plVar10 = plVar10 + 2;
            plVar11 = plVar11 + 2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        lVar13 = lVar13 + 1;
        uVar8 = 1;
      } while (lVar13 != lVar12);
    }
  }
  else {
LAB_102e2aef0:
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 102e2af18; end: 102e2af23; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2af18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dfb0;
  func_0x000107c61428(param_1 + _DAT_112f1dfb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e2af24; end: 102e2af2f; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2af24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dfb0;
  func_0x000107c61428(param_1 + _DAT_112f1dfb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e2af30; end: 102e2af3b; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter lifeCycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2af30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dfb8;
  func_0x000107c61428(param_1 + _DAT_112f1dfb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e2af3c; end: 102e2af7f;  */

void FUN_102e2af3c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e2af80; end: 102e2af8b; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter setLifeCycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2af80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dfb8;
  func_0x000107c61428(param_1 + _DAT_112f1dfb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e2af8c; end: 102e2afdf;  */

void FUN_102e2af8c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e2afe0; end: 102e2b18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2afe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f1dfb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1dfb8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfc0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f1dfc8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfe0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfe8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e2b190; end: 102e2b1ef; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter init] */

void FUN_102e2b190(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwiftUI.LensExplorerRouter",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e2b1bc);
  (*pcVar1)();
}



/* Entry: 102e2b1f0; end: 102e2b287; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2b1f0(long param_1)

{
  func_0x000100d286b0(param_1 + _DAT_112f1dfb0);
  func_0x000100d286b0(param_1 + _DAT_112f1dfb8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1dfd0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1dfd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1dfe0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1dfe8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f1dfc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f1dfc8);
  return;
}



/* Entry: 102e2b288; end: 102e2b2c7; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102e2b288(long param_1)

{
  param_1 = param_1 + _DAT_112f1dfc8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61170(param_1);
  }
  return param_1 != 0;
}



/* Entry: 102e2b2c8; end: 102e2b2cb; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter presentLensExplorerFrom:accessoryView:] */

void FUN_102e2b2c8(void)

{
  return;
}



/* Entry: 102e2b2cc; end: 102e2b92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2b2cc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112ebc640;
  func_0x0001000285a8(0x112ebc640,&UNK_10dad6460);
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = &stack0xffffffffffffff30 + -extraout_x8;
  lVar16 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar18 - extraout_x8_00;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1dfd0);
  func_0x000107c4f068(uVar3);
  func_0x000107c61180();
  puVar4 = &UNK_1105d95d8;
  func_0x000107c613fc(&UNK_1105d95d8,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_70;
  puVar5 = &UNK_1105d9600;
  func_0x000107c613fc(&UNK_1105d9600,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e2c2c8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  ppuStack_80 = (undefined **)0x102e2c300;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1020ca114;
  puStack_88 = &UNK_1105d9618;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c4c5a8(uVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  uVar14 = uStack_68;
  uVar12 = uStack_70;
  uVar17 = *(undefined8 *)(param_1 + _DAT_112f1dfe0);
  puVar7 = &UNK_1105d9650;
  func_0x000107c613fc(&UNK_1105d9650,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar17;
  func_0x0001000285a8(0x112f1e018,&UNK_10db560b8);
  func_0x000107c613fc();
  func_0x000107c61434(uVar14);
  func_0x000107c61174();
  pcVar1 = FUN_102e2c320;
  func_0x0001000bdd8c(FUN_102e2c320,puVar7);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1dfe8);
  puVar7 = &UNK_1105d9678;
  func_0x000107c613fc(&UNK_1105d9678,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  uVar3 = 0x102e2c328;
  func_0x0001000bdd8c(0x102e2c328,puVar7);
  puVar8 = (undefined *)0x0;
  func_0x000102e29fec();
  puVar7 = puVar8;
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x28) = uVar14;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(code **)(puVar7 + 0x10) = pcVar1;
  (**(code **)(lVar15 + 0x68))
            (puVar18,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
             ,lVar2);
  func_0x000107c6157c(puVar7);
  func_0x0001000d52ec(lVar16,puVar18);
  (**(code **)(lVar15 + 8))(puVar18,lVar2);
  ppuStack_80 = &PTR_DAT_1105d9138;
  uVar9 = 0;
  puStack_a0 = puVar7;
  puStack_88 = puVar8;
  FUN_102e2fb44();
  uVar3 = uVar9;
  func_0x000107c613fc();
  func_0x0001000c6518(&puStack_a0,puVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  puVar19 = (undefined8 *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar19);
  puVar10 = (undefined *)*puVar19;
  FUN_102e2bca0(puVar10,lVar16,uVar3);
  func_0x0001000834e4(&puStack_a0);
  func_0x0001000285a8(0x112ea2b08,&UNK_10dab4f20);
  uVar3 = uVar17;
  func_0x000107c4f754();
  func_0x000107c61180();
  uVar11 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112ea2b00,&UNK_10db560c0);
  uVar3 = uVar17;
  func_0x000107c4f758();
  func_0x000107c61180();
  uVar12 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112f1e020,&UNK_10db560c8);
  uVar3 = uVar17;
  func_0x000107c51b4c();
  func_0x000107c61180();
  uVar13 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112f1e028,&UNK_10db560d0);
  uVar3 = uVar17;
  func_0x000107c403d8();
  func_0x000107c61180();
  uVar14 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112ea2b10,&UNK_10dab4f28);
  func_0x000107c412bc();
  func_0x000107c61180();
  uVar3 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  lVar16 = 0;
  func_0x000102e2c790();
  func_0x000107c613fc();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102e2bff8();
  *(undefined8 *)(lVar16 + 0x10) = uVar11;
  *(undefined8 *)(lVar16 + 0x18) = uVar12;
  *(undefined8 *)(lVar16 + 0x20) = uVar13;
  *(undefined8 *)(lVar16 + 0x28) = uVar14;
  *(undefined8 *)(lVar16 + 0x30) = uVar3;
  *(undefined **)(lVar16 + 0x38) = puVar8;
  FUN_102e2c330();
  puVar8 = puVar10;
  func_0x000107c6157c();
  func_0x000107c5f31c();
  puStack_a0 = puVar8;
  uStack_98 = uVar9;
  puStack_90 = (undefined *)lVar16;
  func_0x0001000285a8(0x112f1e038,&UNK_10db560e0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(lVar16);
  ppuVar6 = &puStack_a0;
  func_0x000107c5f458(ppuVar6);
  func_0x000107c61604(param_1 + _DAT_112f1dfc8,ppuVar6);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1dfc0);
  *(undefined8 *)(param_1 + _DAT_112f1dfc0) = param_2;
  func_0x000107c615e8(uVar3);
  func_0x000107c615f0(param_2);
  func_0x000107c3e2c0();
  lVar2 = _DAT_112f1dfb0;
  func_0x000107c61428(param_1 + _DAT_112f1dfb0,&puStack_a0,0,0);
  param_1 = param_1 + lVar2;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4b0f4();
    func_0x000107c615e8(param_1);
  }
  func_0x000107c61170(ppuVar6);
  func_0x000107c61574(lVar16);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar7);
  uVar3 = uStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c6142c(uVar3);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",99,0x30,0x3e,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e2b92c);
  (*pcVar1)();
}



/* Entry: 102e2b92c; end: 102e2b943;  */

void FUN_102e2b92c(void)

{
  long unaff_x20;
  
  FUN_102e2b2cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e2b944; end: 102e2b9ef;  */

void FUN_102e2b944(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e2b9f0; end: 102e2ba7f; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter presentLensExplorerWith:accessoryView:] */

void FUN_102e2b9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5fcec(0);
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100f7a598(FUN_102e2c494,auStack_50,"LensExplorerSwiftUI/LensExplorerRouter.swift",0x2c,2
                      ,0x2e);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e2ba80; end: 102e2ba83; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter presentFeedFullPageWith:] */

void FUN_102e2ba80(void)

{
  return;
}



/* Entry: 102e2ba84; end: 102e2baf3;  */

void FUN_102e2ba84(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102e2baf4();
    func_0x000107c61170(param_1);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 102e2baf4; end: 102e2bb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2baf4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f1dfc0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1dfc0) = 0;
  func_0x000107c615e8(uVar1);
  lVar2 = _DAT_112f1dfb0;
  func_0x000107c61428(unaff_x20 + _DAT_112f1dfb0,auStack_38,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4b0ec();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112f1dfb8;
  func_0x000107c61428(unaff_x20 + _DAT_112f1dfb8,auStack_50,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4b0f0();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102e2bb9c; end: 102e2bc27; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter dismissIfNeededWithAnimated:completion:] */

void FUN_102e2bb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1105d9538;
    func_0x000107c613fc(&UNK_1105d9538,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_102e2c294;
  }
  func_0x000107c61174(param_1);
  FUN_102e2c108(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e2bc28; end: 102e2bc4f; -[_TtC19LensExplorerSwiftUI18LensExplorerRouter removeViewController] */

void FUN_102e2bc28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e2baf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e2bc50; end: 102e2bc9f;  */

void FUN_102e2bc50(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x10);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e2bca0);
  (*pcVar3)();
}



/* Entry: 102e2bca0; end: 102e2c107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e2bca0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar3 = 0x112ebc648;
  uStack_a0 = param_2;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  lVar13 = *(long *)(lVar3 + -8);
  lStack_a8 = *(long *)(lVar13 + 0x40);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_a8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112eb7548;
  puStack_b8 = auStack_d0 + -extraout_x8;
  func_0x0001000285a8(0x112eb7548,&UNK_10dace100);
  lStack_c8 = *(long *)(lVar3 + -8);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  lVar3 = 0x112f1e048;
  func_0x0001000285a8(0x112f1e048,&UNK_10db56610);
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_01;
  lVar4 = 0x112f1e050;
  func_0x0001000285a8(0x112f1e050,&UNK_10db560f0);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar17 - extraout_x8_02;
  uVar5 = 0;
  func_0x000102e29fec();
  lVar1 = _DAT_112f1e2e0;
  ppuStack_68 = &PTR_DAT_1105d9138;
  puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
  auStack_88[0] = param_1;
  uStack_70 = uVar5;
  func_0x000107c5f1fc(lVar16,&puStack_98,&UNK_1105d9a40);
  (**(code **)(lVar11 + 0x20))(param_3 + lVar1,lVar16,lVar4);
  lVar4 = _DAT_112f1e2e8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112f1e058;
  func_0x0001000285a8(0x112f1e058,&UNK_10db563e0);
  func_0x000107c5f1fc(lVar17,&puStack_98,uVar5);
  (**(code **)(lVar14 + 0x20))(param_3 + lVar4,lVar17,lVar3);
  lVar3 = _DAT_112f1e2f0;
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  uVar5 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5f1fc(lVar15,&puStack_98,uVar5);
  (**(code **)(lStack_c8 + 0x20))(param_3 + lVar3,lVar15,lStack_c0);
  *(undefined8 *)(param_3 + _DAT_112f1e308) = 0;
  *(undefined8 *)(param_3 + _DAT_112f1e310) = 0;
  FUN_102e2c374(auStack_88,param_3 + _DAT_112f1e2f8);
  uVar5 = uStack_a0;
  lVar3 = lStack_b0;
  pcVar9 = *(code **)(lVar13 + 0x10);
  (*pcVar9)(param_3 + _DAT_112f1e300,uStack_a0,lStack_b0);
  puVar2 = puStack_b8;
  (*pcVar9)(puStack_b8,uVar5,lVar3);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar12 = lStack_a8 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_1105d96a0;
  func_0x000107c613fc(&UNK_1105d96a0,uVar12 + 8,uVar8 | 7);
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar10,puVar2,lVar3);
  *(long *)(puVar6 + uVar12) = param_3;
  func_0x000107c6157c(param_3);
  *(undefined **)(lVar16 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 8;
  func_0x0001001ca524(8,4,0x38,4,0,0,&UNK_10db560f8,puVar6);
  func_0x000107c61574(puVar6);
  (**(code **)(lVar13 + 8))(uVar5,lVar3);
  func_0x0001000834e4(auStack_88);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112f1e310);
  *(undefined8 *)(param_3 + _DAT_112f1e310) = uVar7;
  func_0x000107c61574(uVar5);
  return param_3;
}



/* Entry: 102e2c108; end: 102e2c273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2c108(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + _DAT_112f1dfc8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    func_0x000107c61170();
    lVar4 = _DAT_112f1dfb0;
    func_0x000107c61428(unaff_x20 + _DAT_112f1dfb0,auStack_58,0,0);
    lVar4 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c4b0e8();
      func_0x000107c615e8(lVar4);
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112f1dfc0);
    if (lVar4 != 0) {
      puVar1 = &UNK_1105d9560;
      func_0x000107c613fc(&UNK_1105d9560,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      puVar2 = &UNK_1105d9588;
      func_0x000107c613fc(&UNK_1105d9588,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(code **)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      uStack_68 = 0x102e2c2a0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_1105d95a0;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c615f0(lVar4);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 102e2c274; end: 102e2c293;  */

void FUN_102e2c274(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8798);
  return;
}



/* Entry: 102e2c294; end: 102e2c2c7;  */

void FUN_102e2c294(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102e2c29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102e2c2c8; end: 102e2c31f;  */

void FUN_102e2c2c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102e2c320; end: 102e2c32f;  */

void FUN_102e2c320(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e2c330; end: 102e2c373;  */

void FUN_102e2c330(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f1e030 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102e2fb44(0xff);
  puVar2 = &UNK_10db565cc;
  func_0x000107c61520(&UNK_10db565cc,uVar1);
  puRam0000000112f1e030 = puVar2;
  return;
}



/* Entry: 102e2c374; end: 102e2c3b7;  */

long FUN_102e2c374(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102e2c3b8; end: 102e2c44f;  */

void FUN_102e2c3b8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e2c450;
  plVar1[6] = unaff_x20 + uVar3;
  plVar1[7] = lVar4;
  lVar4 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  plVar1[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[9] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar1[0xb] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0xc] = lVar2;
  plVar1[0xd] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e2f094,lVar2,lVar4);
  return;
}



/* Entry: 102e2c450; end: 102e2c48b;  */

void FUN_102e2c450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e2c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e2c48c; end: 102e2c493;  */

void FUN_102e2c48c(long param_1,long param_2)

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



/* Entry: 102e2c494; end: 102e2c4a7;  */

void FUN_102e2c494(void)

{
  FUN_102e2b92c();
  return;
}



/* Entry: 102e2c4a8; end: 102e2c743;  */

void FUN_102e2c4a8(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x12;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *apuStack_d0 [2];
  long lStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [2];
  long alStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar12 = *param_2;
  uVar2 = param_2[1];
  func_0x000107c61428(unaff_x20 + 0x38,alStack_a0,0x20,0);
  lVar11 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(lVar11 + 0x10);
  func_0x000107c61434(uVar2);
  if (lVar9 != 0) {
    func_0x000107c61434(lVar11);
    lVar9 = lVar12;
    uVar7 = uVar2;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x38) + lVar9 * 0x10);
      lVar12 = *plVar1;
      lVar9 = plVar1[1];
      func_0x000107c6157c(lVar9);
      func_0x000107c614a8(alStack_a0);
      func_0x000107c6142c(lVar11);
      func_0x000107c6142c(uVar2);
      goto LAB_102e2c720;
    }
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c614a8(alStack_a0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_102e294a8();
  lVar11 = lVar4;
  plStack_b8 = param_1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x10) = uVar6;
  *(undefined8 *)(lVar11 + 0x18) = uVar3;
  lStack_68 = param_2[3];
  lStack_70 = param_2[2];
  lStack_78 = param_2[4];
  ppuStack_80 = &PTR_DAT_1105d90b0;
  lVar9 = 0;
  lStack_c0 = lVar12;
  alStack_a0[0] = lVar11;
  lStack_88 = lVar4;
  FUN_102e2d288();
  lVar5 = lVar9;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_a0,lVar4);
  apuStack_d0[1] = (undefined1 *)apuStack_d0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)apuStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  param_1 = plStack_b8;
  uVar8 = *puVar10;
  *(long *)(lVar5 + 0x50) = lVar4;
  *(undefined ***)(lVar5 + 0x58) = &PTR_DAT_1105d90b0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  lVar12 = *param_2;
  lVar13 = param_2[3];
  lVar4 = param_2[2];
  *(long *)(lVar5 + 0x18) = param_2[1];
  *(long *)(lVar5 + 0x10) = lVar12;
  *(long *)(lVar5 + 0x28) = lVar13;
  *(long *)(lVar5 + 0x20) = lVar4;
  *(long *)(lVar5 + 0x30) = param_2[4];
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000100402194(&lStack_70,auStack_b0);
  FUN_10268e98c(&lStack_78,auStack_b0);
  func_0x000107c6157c(lVar11);
  func_0x0001000834e4(alStack_a0);
  func_0x000102e2c7b0();
  lVar12 = lVar5;
  func_0x000107c6157c();
  func_0x000107c5f31c();
  func_0x000107c61428(unaff_x20 + 0x38,alStack_a0,0x21,0);
  func_0x000107c6157c(lVar9);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61558(uVar6);
  auStack_b0[0] = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0x8000000000000000;
  FUN_102e2c7f4(lVar12,lVar9,lStack_c0,uVar2,uVar6);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x20 + 0x38) = auStack_b0[0];
  func_0x000107c614a8(alStack_a0);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(lVar11);
LAB_102e2c720:
  *param_1 = lVar12;
  param_1[1] = lVar9;
  return;
}



/* Entry: 102e2c744; end: 102e2c7f3;  */

void FUN_102e2c744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e2c7f4; end: 102e2ca8f;  */

void FUN_102e2c7f4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_3;
  uVar5 = param_4;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2c8d0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102e2ca90(lVar6,param_5 & 1);
    uVar8 = param_4;
    func_0x000100029284();
    lVar3 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2c898);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000102e2c918();
    lVar6 = *unaff_x20;
    goto joined_r0x000102e2c8e4;
  }
  lVar6 = *unaff_x20;
joined_r0x000102e2c8e4:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  FUN_102e2bc50();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102e2ca90; end: 102e2cd43;  */

void FUN_102e2ca90(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112f1e040;
  func_0x0001000285a8(0x112f1e040,&UNK_10db56150);
  lVar9 = lVar19;
  func_0x000107c60490(lVar19,lVar1,param_2,uVar8);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_102e2cd10:
    func_0x000107c61574(lVar19);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102e2cd40);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
            if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
          }
          goto LAB_102e2cd10;
        }
        uVar17 = puVar18[lVar20];
        lVar12 = lVar12 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar12;
    }
    lVar12 = (LZCOUNT(uVar11) | lVar20 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + lVar12);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar12);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c6157c(uVar5);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar8,uVar4);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102e2cd44);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Entry: 102e2cd44; end: 102e2cd4b;  */

void FUN_102e2cd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102e2cd4c; end: 102e2cdbb;  */

undefined8 * FUN_102e2cd4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102e2cdbc; end: 102e2ce5f;  */

int FUN_102e2cdbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e2ce60; end: 102e2cf37;  */

void FUN_102e2ce60(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &uStack_70;
  uStack_70 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uStack_68 = uVar7;
  func_0x000100e8b654();
  func_0x000107c61434(uVar7);
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  puVar2 = (undefined1 *)puVar1;
  func_0x000107c5f588();
  puVar3 = puVar2;
  puVar5 = (undefined1 *)puVar1;
  puVar6 = puVar4;
  uVar7 = param_2;
  func_0x000107c5f5d4();
  func_0x000107c61574(puVar2);
  func_0x000100f795bc(puVar1,puVar4,param_2);
  func_0x000107c6142c(param_5);
  *param_1 = puVar3;
  param_1[1] = puVar5;
  *(char *)(param_1 + 2) = (char)puVar6;
  param_1[3] = uVar7;
  return;
}



/* Entry: 102e2cf38; end: 102e2cfef;  */

/* WARNING: Removing unreachable block (ram,0x000102e2cf74) */

void FUN_102e2cf38(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000a8868(param_2 + 0x38,*(undefined8 *)(param_2 + 0x50));
  FUN_102e29190(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  if (*(long *)(param_2 + 0x60) == 0) {
    uVar1 = 8;
    func_0x0001001ca524(8,4,0x38,4,0,0,&UNK_10db56250,0,PTR___sytN_11034f1b0 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102e2cff0; end: 102e2cffb;  */

void FUN_102e2cff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 102e2cffc; end: 102e2d0f7;  */

void FUN_102e2cffc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  func_0x000107c5f564();
  func_0x000107c5f28c(param_1);
  puVar4 = &UNK_1105d9748;
  func_0x000107c613fc(&UNK_1105d9748,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  lVar5 = 0x112f1e130;
  func_0x0001000285a8(0x112f1e130,&UNK_10db561c0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = 0x102e2d100;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar4 = &UNK_1105d9770;
  func_0x000107c613fc(&UNK_1105d9770,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  lVar5 = 0x112f1e138;
  func_0x0001000285a8(0x112f1e138,&UNK_10db561c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0x102e2d108;
  puVar1[3] = puVar4;
  func_0x000107c61580(uVar3,2);
  return;
}



/* Entry: 102e2d0f8; end: 102e2d12f;  */

void FUN_102e2d0f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 in_x3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &uStack_70;
  uStack_70 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x28);
  uStack_68 = uVar8;
  func_0x000100e8b654();
  func_0x000107c61434(uVar8);
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  puVar3 = (undefined1 *)puVar2;
  func_0x000107c5f588();
  puVar4 = puVar3;
  puVar6 = (undefined1 *)puVar2;
  puVar7 = puVar5;
  uVar8 = uVar1;
  func_0x000107c5f5d4();
  func_0x000107c61574(puVar3);
  func_0x000100f795bc(puVar2,puVar5,uVar1);
  func_0x000107c6142c(in_x3);
  *param_1 = puVar4;
  param_1[1] = puVar6;
  *(char *)(param_1 + 2) = (char)puVar7;
  param_1[3] = uVar8;
  return;
}



/* Entry: 102e2d130; end: 102e2d19f;  */

void FUN_102e2d130(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102e2d1a0; end: 102e2d1ef;  */

void FUN_102e2d1a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f1e150 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e158;
  func_0x00010002969c(0x112f1e158,&UNK_10db561d0);
  puVar2 = PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700;
  func_0x000107c61520(PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700,uVar1);
  puRam0000000112f1e150 = puVar2;
  return;
}



/* Entry: 102e2d1f0; end: 102e2d1f7;  */

undefined8 * FUN_102e2d1f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 102e2d1f8; end: 102e2d287;  */

void FUN_102e2d1f8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x60);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e2d288; end: 102e2d2a7;  */

void FUN_102e2d288(void)

{
  func_0x000107c61168(&PTR_PTR_112f1e1a0);
  return;
}



/* Entry: 102e2d2a8; end: 102e2d2b3;  */

undefined * FUN_102e2d2a8(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 102e2d2b4; end: 102e2d31b;  */

void FUN_102e2d2b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e2d31c,uVar1,uVar2);
  return;
}



/* Entry: 102e2d31c; end: 102e2d34b;  */

void FUN_102e2d31c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e2d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e2d34c; end: 102e2d3d7;  */

void FUN_102e2d34c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e2d3d8; end: 102e2d43b;  */

undefined8 * FUN_102e2d3d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102e2d43c; end: 102e2d47f;  */

undefined8 * FUN_102e2d43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61574(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102e2d480; end: 102e2d527;  */

int FUN_102e2d480(int *param_1,int param_2)

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



/* Entry: 102e2d528; end: 102e2d6bf;  */

void FUN_102e2d528(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uStack_70;
  undefined2 auStack_68 [4];
  
  lVar2 = 0x112f1e2c0;
  func_0x0001000285a8(0x112f1e2c0,&UNK_10db564c0);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  func_0x000107c5f2bc(lVar8);
  uVar5 = 0x800000010f110c50;
  uVar3 = 0xd000000000000015;
  func_0x000107c5f414();
  *(undefined2 *)(lVar8 + -8) = 0x100;
  *(undefined8 *)(lVar8 + -0x10) = 0;
  uVar6 = (ulong)(param_4 & 1);
  func_0x000107c5f5d8();
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(puVar7,lVar8,lVar2);
  (*pcVar10)(param_1,puVar7,lVar2);
  lVar4 = 0x112f1e2c8;
  func_0x0001000285a8(0x112f1e2c8,&UNK_10db564c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x30));
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  *(char *)(puVar1 + 2) = (char)uVar6;
  puVar1[3] = param_5;
  func_0x000100f8a880(uVar3,uVar5,uVar6);
  pcVar10 = *(code **)(lVar9 + 8);
  func_0x000107c61434(param_5);
  (*pcVar10)(lVar8,lVar2);
  func_0x000100f795bc(uVar3,uVar5,uVar6);
  func_0x000107c6142c(param_5);
  (*pcVar10)(puVar7,lVar2);
  return;
}



/* Entry: 102e2d6c0; end: 102e2d70b;  */

void FUN_102e2d6c0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c5f438();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar1 = 0x112f1e2b8;
  func_0x0001000285a8(0x112f1e2b8,&UNK_10db564b8);
  FUN_102e2d528((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 102e2d70c; end: 102e2d8fb;  */

void FUN_102e2d70c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x12;
  code *pcVar11;
  long lVar12;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112e02cd8;
  uStack_68 = param_2;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lStack_70 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  puStack_78 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  uVar7 = 0x800000010f110c70;
  uVar4 = 0xd00000000000001a;
  func_0x000107c5f414();
  *(undefined2 *)(lVar12 + -8) = 0x100;
  *(undefined8 *)(lVar12 + -0x10) = 0;
  uVar9 = (ulong)(param_4 & 1);
  func_0x000107c5f5d8();
  uVar5 = 0x7972746552;
  uVar8 = 0xe500000000000000;
  uVar10 = uVar9;
  uStack_88 = uVar4;
  uStack_80 = param_5;
  func_0x000107c5f414(0x7972746552,0xe500000000000000);
  func_0x000107c6157c(param_3);
  func_0x000107c5f740(lVar12,uVar5,uVar8,(uint)uVar10 & 1,param_5,uStack_68,param_3);
  lVar2 = lStack_70;
  puVar1 = puStack_78;
  pcVar11 = *(code **)(lStack_70 + 0x10);
  (*pcVar11)(puStack_78,lVar12,lVar3);
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  *param_1 = uStack_88;
  param_1[1] = uVar7;
  *(char *)(param_1 + 2) = (char)uVar9;
  param_1[3] = uStack_80;
  lVar6 = 0x112e578c0;
  func_0x0001000285a8(0x112e578c0,&UNK_10db564e0);
  (*pcVar11)((long)param_1 + (long)*(int *)(lVar6 + 0x30),puVar1,lVar3);
  func_0x000100f8a880(uVar4,uVar7,uVar9);
  pcVar11 = *(code **)(lVar2 + 8);
  func_0x000107c61434(uVar5);
  (*pcVar11)(lVar12,lVar3);
  (*pcVar11)(puVar1,lVar3);
  func_0x000100f795bc(uVar4,uVar7,uVar9);
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 102e2d8fc; end: 102e2d95b;  */

void FUN_102e2d8fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c5f438();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar3 = 0x112e578b8;
  func_0x0001000285a8(0x112e578b8,&UNK_10db564d0);
  FUN_102e2d70c((long)param_1 + (long)*(int *)(lVar3 + 0x2c),uVar1,uVar2);
  return;
}



/* Entry: 102e2d95c; end: 102e2df8f;  */

void FUN_102e2d95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code **ppcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long alStack_140 [6];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  alStack_140[4] = param_2;
  alStack_140[5] = param_4;
  uStack_e8 = param_1;
  func_0x000107c5f364();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar14 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_110 = lVar14;
  func_0x000107c5f36c();
  lStack_100 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar3 = (code *)0x112f1e220;
  func_0x0001000285a8(0x112f1e220,&UNK_10db562d8);
  lStack_108 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8_01;
  lVar1 = 0x112f1e228;
  func_0x0001000285a8(0x112f1e228,&UNK_10db562e0);
  lStack_f0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0x112f1e230;
  lStack_f8 = lVar12 - extraout_x8_02;
  func_0x0001000285a8(0x112f1e230,&UNK_10db562e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((lVar12 - extraout_x8_02) - extraout_x8_03);
  puVar5 = &UNK_10db562f0;
  func_0x000107c614e0(&UNK_10db562f0);
  puVar6 = &UNK_10db56318;
  func_0x000107c614e0(&UNK_10db56318);
  func_0x000107c5f20c(&pcStack_e0,param_3,puVar5,puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  if ((byte)pcStack_e0 < 2) {
    FUN_102e2e4f0();
    puVar5 = puVar6;
    func_0x000102e2e530();
    pcStack_e0 = (code *)0x0;
    lStack_d8 = 0;
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    func_0x000107c5f490(&uStack_90,&pcStack_e0,&UNK_1105d9968,&UNK_1105d9940,puVar6,puVar5);
    puVar13[1] = uStack_88;
    *puVar13 = uStack_90;
    *(undefined1 *)(puVar13 + 2) = uStack_80;
    func_0x000107c6159c(puVar13,lVar4,0);
    uVar8 = 0x112f1e258;
    func_0x0001000285a8(0x112f1e258,&UNK_10db56370);
    uVar9 = uVar8;
    FUN_102e2e478();
    uVar7 = 0x112f1e250;
    FUN_102e2e908(0x112f1e250,0x112f1e220,&UNK_10db562d8,
                  PTR___s7SwiftUI7TabViewVyxq_GAA0D0AAMc_1103499d0);
    puStack_c8 = PTR___s7SwiftUI16PageTabViewStyleVAA0deF0AAWP_110348b08;
    ppcVar11 = &pcStack_e0;
    pcStack_e0 = pcVar3;
    lStack_d8 = lVar2;
    uStack_d0 = uVar7;
    func_0x000107c614f4(ppcVar11,
                        PTR___s7SwiftUI4ViewPAAE03tabC5StyleyQrqd__AA03TabcE0Rd__lFQOMQ_110349430,1)
    ;
    func_0x000107c5f490(uStack_e8,puVar13,uVar8,lVar1,uVar9,ppcVar11);
  }
  else {
    alStack_140[1] = lVar4;
    alStack_140[2] = lVar2;
    alStack_140[3] = lVar1;
    if ((byte)pcStack_e0 == 2) {
      pcStack_e0 = FUN_102e2e570;
      uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
      lStack_d8 = param_3;
      FUN_102e2e4f0();
      puVar5 = puVar6;
      func_0x000102e2e530();
      func_0x000107c61580(param_3,2);
      func_0x000107c5f490(&uStack_90,&pcStack_e0,&UNK_1105d9968,&UNK_1105d9940,puVar6,puVar5);
      *puVar13 = uStack_90;
      puVar13[1] = uStack_88;
      *(undefined1 *)(puVar13 + 2) = uStack_80;
      func_0x000107c6159c(puVar13,alStack_140[1],0);
      FUN_102e2e570(uStack_90,uStack_88,uStack_80);
      uVar8 = 0x112f1e258;
      func_0x0001000285a8(0x112f1e258,&UNK_10db56370);
      uVar9 = uVar8;
      FUN_102e2e478();
      uVar7 = 0x112f1e250;
      FUN_102e2e908(0x112f1e250,0x112f1e220,&UNK_10db562d8,
                    PTR___s7SwiftUI7TabViewVyxq_GAA0D0AAMc_1103499d0);
      lStack_d8 = alStack_140[2];
      puStack_c8 = PTR___s7SwiftUI16PageTabViewStyleVAA0deF0AAWP_110348b08;
      ppcVar11 = &pcStack_e0;
      pcStack_e0 = pcVar3;
      uStack_d0 = uVar7;
      func_0x000107c614f4(ppcVar11,
                          PTR___s7SwiftUI4ViewPAAE03tabC5StyleyQrqd__AA03TabcE0Rd__lFQOMQ_110349430,
                          1);
      func_0x000107c5f490(uStack_e8,puVar13,uVar8,alStack_140[3],uVar9,ppcVar11);
      func_0x000107c61574(param_3);
      func_0x000102e2e58c(uStack_90,uStack_88,uStack_80);
    }
    else {
      uVar7 = 0;
      FUN_102e2fb44(0);
      uVar8 = uVar7;
      FUN_102e2c330();
      lVar1 = alStack_140[4];
      lVar4 = alStack_140[4];
      func_0x000107c5f320(alStack_140[4],param_3,uVar7,uVar8);
      puVar5 = &UNK_10db56338;
      func_0x000107c614e0(&UNK_10db56338);
      func_0x000107c5f324(&uStack_90);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(puVar5);
      uStack_b0 = uStack_90;
      uStack_a8 = uStack_88;
      uStack_98 = uStack_78;
      uStack_d0 = lVar1;
      uStack_c0 = alStack_140[5];
      uVar8 = 0x112d35ff8;
      puStack_c8 = (undefined *)param_3;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      uVar7 = 0x112f1e238;
      func_0x0001000285a8(0x112f1e238,&UNK_10db56368);
      uVar9 = uVar7;
      func_0x0001011bfb3c();
      uVar10 = uVar9;
      FUN_102e2e394();
      func_0x000107c5f79c(lVar12,&uStack_b0,0x102e2e388,&pcStack_e0,uVar8,uVar7,uVar9,uVar10);
      lVar1 = lStack_110;
      func_0x000107c5f360(lStack_110);
      func_0x000107c5f368(lVar14,lVar1);
      uVar8 = 0x112f1e250;
      FUN_102e2e908(0x112f1e250,0x112f1e220,&UNK_10db562d8,
                    PTR___s7SwiftUI7TabViewVyxq_GAA0D0AAMc_1103499d0);
      lVar2 = lStack_f8;
      lVar1 = alStack_140[2];
      puVar5 = PTR___s7SwiftUI16PageTabViewStyleVAA0deF0AAWP_110348b08;
      func_0x000107c5f5e8(lStack_f8,lVar14,pcVar3,alStack_140[2],uVar8,
                          PTR___s7SwiftUI16PageTabViewStyleVAA0deF0AAWP_110348b08);
      (**(code **)(lStack_100 + 8))(lVar14,lVar1);
      (**(code **)(lStack_108 + 8))(lVar12,pcVar3);
      lVar14 = lStack_f0;
      lVar4 = alStack_140[3];
      (**(code **)(lStack_f0 + 0x10))(puVar13,lVar2,alStack_140[3]);
      func_0x000107c6159c(puVar13,alStack_140[1],1);
      uVar7 = 0x112f1e258;
      func_0x0001000285a8(0x112f1e258,&UNK_10db56370);
      uVar9 = uVar7;
      FUN_102e2e478();
      lStack_d8 = lVar1;
      puStack_c8 = puVar5;
      ppcVar11 = &pcStack_e0;
      pcStack_e0 = pcVar3;
      uStack_d0 = uVar8;
      func_0x000107c614f4(ppcVar11,
                          PTR___s7SwiftUI4ViewPAAE03tabC5StyleyQrqd__AA03TabcE0Rd__lFQOMQ_110349430,
                          1);
      func_0x000107c5f490(uStack_e8,puVar13,uVar7,lVar4,uVar9,ppcVar11);
      (**(code **)(lVar14 + 8))(lVar2,lVar4);
    }
  }
  return;
}



/* Entry: 102e2df90; end: 102e2e123;  */

void FUN_102e2df90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_10db56378;
  func_0x000107c614e0(&UNK_10db56378);
  puVar3 = &UNK_10db563a0;
  func_0x000107c614e0(&UNK_10db563a0);
  func_0x000107c5f20c(&puStack_78,param_3,puVar2,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  puStack_58 = puStack_78;
  puVar2 = &UNK_10db563c0;
  func_0x000107c614e0(&UNK_10db563c0);
  puVar3 = &UNK_1105d98c0;
  func_0x000107c613fc(&UNK_1105d98c0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar4 = 0x112f1e058;
  func_0x0001000285a8(0x112f1e058,&UNK_10db563e0);
  uVar5 = 0x112f1e278;
  func_0x0001000285a8(0x112f1e278,&UNK_10db563e8);
  uVar6 = 0x112f1e280;
  FUN_102e2e908(0x112f1e280,0x112f1e058,&UNK_10db563e0,PTR___sSayxGSksMc_11034dd18);
  uVar7 = uVar6;
  FUN_102e2e438();
  puVar1 = PTR___sSSSHsWP_11034da90;
  puStack_78 = &UNK_1105d9720;
  puStack_70 = PTR___sSSN_11034da80;
  puStack_60 = PTR___sSSSHsWP_11034da90;
  ppuVar8 = &puStack_78;
  uStack_68 = uVar7;
  func_0x000107c614f4(ppuVar8,&DAT_10e69d0a0,1);
  func_0x000107c5f788(param_1,&puStack_58,puVar2,FUN_102e2e5d0,puVar3,uVar4,uVar5,uVar6,puVar1,
                      ppuVar8);
  return;
}



/* Entry: 102e2e124; end: 102e2e1bf;  */

void FUN_102e2e124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = param_2[4];
  FUN_102e2c4a8(&uStack_80,&uStack_70);
  uVar2 = uStack_68;
  uVar1 = uStack_70;
  iVar3 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar3 == 0) {
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    func_0x000107c61434(uVar2);
  }
  else {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *param_1 = uStack_80;
  param_1[1] = uStack_78;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 102e2e1c0; end: 102e2e267;  */

/* WARNING: Possible PIC construction at 0x000102e2e210: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2e1c0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112f1e308);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + _DAT_112f1e310);
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
  }
  else {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 102e2e268; end: 102e2e35b;  */

void FUN_102e2e268(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  FUN_102e2d95c(uVar2,uVar3,uVar6);
  puVar4 = &UNK_1105d9870;
  func_0x000107c613fc(&UNK_1105d9870,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  lVar5 = 0x112f1e210;
  func_0x0001000285a8(0x112f1e210,&UNK_10db562c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = FUN_102e2e35c;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar4 = &UNK_1105d9898;
  func_0x000107c613fc(&UNK_1105d9898,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  lVar5 = 0x112f1e218;
  func_0x0001000285a8(0x112f1e218,&UNK_10db562d0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_102e2e37c;
  puVar1[3] = puVar4;
  func_0x000107c61580(uVar3,2);
  func_0x000107c61580(uVar6,2);
  return;
}



/* Entry: 102e2e35c; end: 102e2e37b;  */

void FUN_102e2e35c(void)

{
  func_0x000102e2e9f0();
  return;
}



/* Entry: 102e2e37c; end: 102e2e393;  */

/* WARNING: Possible PIC construction at 0x000102e2e210: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e2e37c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + _DAT_112f1e308);
  if (lVar2 == 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f1e310);
    if (lVar2 == 0) {
      return *(long *)(unaff_x20 + 0x10);
    }
    func_0x000107c6157c(lVar2,lVar1,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c5fd50();
  }
  else {
    func_0x000107c6157c(lVar2,lVar1,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return lVar2;
}



/* Entry: 102e2e394; end: 102e2e437;  */

void FUN_102e2e394(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112f1e240 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e238;
  func_0x00010002969c(0x112f1e238,&UNK_10db56368);
  uVar2 = uVar1;
  FUN_102e2e438();
  puStack_40 = &UNK_1105d9720;
  puStack_38 = PTR___sSSN_11034da80;
  puStack_28 = PTR___sSSSHsWP_11034da90;
  ppuVar3 = &puStack_40;
  uStack_30 = uVar2;
  func_0x000107c614f4(ppuVar3,&DAT_10e69d0a0,1);
  puVar4 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8;
  ppuStack_48 = ppuVar3;
  func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,uVar1,
                      &ppuStack_48);
  puRam0000000112f1e240 = puVar4;
  return;
}



/* Entry: 102e2e438; end: 102e2e477;  */

void FUN_102e2e438(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db56170;
  func_0x000107c61520(&UNK_10db56170,&UNK_1105d9720);
  puRam0000000112f1e248 = puVar1;
  return;
}



/* Entry: 102e2e478; end: 102e2e4ef;  */

void FUN_102e2e478(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f1e260 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e258;
  func_0x00010002969c(0x112f1e258,&UNK_10db56370);
  uVar2 = uVar1;
  FUN_102e2e4f0();
  uVar3 = uVar2;
  func_0x000102e2e530();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112f1e260 = puVar4;
  return;
}



/* Entry: 102e2e4f0; end: 102e2e56f;  */

void FUN_102e2e4f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db56468;
  func_0x000107c61520(&UNK_10db56468,&UNK_1105d9968);
  puRam0000000112f1e268 = puVar1;
  return;
}



/* Entry: 102e2e570; end: 102e2e5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2e570(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  char acStack_58 [40];
  
  puVar1 = &UNK_10db56670;
  func_0x000107c614e0(&UNK_10db56670);
  puVar2 = &UNK_10db56698;
  func_0x000107c614e0(&UNK_10db56698);
  func_0x000107c5f20c(acStack_58);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  if (acStack_58[0] != '\x01') {
    puVar1 = &UNK_10db56670;
    func_0x000107c614e0(&UNK_10db56670);
    puVar2 = &UNK_10db56698;
    func_0x000107c614e0(&UNK_10db56698);
    func_0x000107c5f20c(acStack_58);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
    if (acStack_58[0] != '\x03') {
      func_0x000107c614e0(&UNK_10db56670);
      func_0x000107c614e0(&UNK_10db56698);
      acStack_58[0] = '\x01';
      func_0x000107c6157c();
      func_0x000107c5f210(acStack_58);
      puVar1 = &UNK_1105d9a60;
      func_0x000107c613fc(&UNK_1105d9a60,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      FUN_102e2c374(unaff_x20 + _DAT_112f1e2f8,acStack_58);
      puVar2 = &UNK_1105d9a88;
      func_0x000107c613fc(&UNK_1105d9a88,0x40,7);
      FUN_102e2ff1c(acStack_58,puVar2 + 0x10);
      *(undefined **)(puVar2 + 0x38) = puVar1;
      uVar3 = 8;
      func_0x0001001ca524(8,4,0x38,4,0,0,&UNK_10db566c0,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1e308);
      *(undefined8 *)(unaff_x20 + _DAT_112f1e308) = uVar3;
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 102e2e5a4; end: 102e2e5cf;  */

void FUN_102e2e5a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e2e5d0; end: 102e2e5e3;  */

void FUN_102e2e5d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = param_2[4];
  FUN_102e2c4a8(&uStack_80,&uStack_70,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_68;
  uVar1 = uStack_70;
  iVar3 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar3 == 0) {
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    func_0x000107c61434(uVar2);
  }
  else {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *param_1 = uStack_80;
  param_1[1] = uStack_78;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 102e2e5e4; end: 102e2e64f;  */

undefined8 * FUN_102e2e5e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 102e2e650; end: 102e2e717;  */

int FUN_102e2e650(ulong *param_1,int param_2)

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



/* Entry: 102e2e718; end: 102e2e787;  */

void FUN_102e2e718(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102e2e788; end: 102e2e7f7;  */

void FUN_102e2e788(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f1e298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e2a0;
  func_0x00010002969c(0x112f1e2a0,&UNK_10db56408);
  uVar2 = uVar1;
  FUN_102e2e7f8();
  puVar3 = PTR___s7SwiftUI5GroupVyxGAA4ViewA2aERzlMc_110349720;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI5GroupVyxGAA4ViewA2aERzlMc_110349720,uVar1,&uStack_28);
  puRam0000000112f1e298 = puVar3;
  return;
}



/* Entry: 102e2e7f8; end: 102e2e8e7;  */

void FUN_102e2e7f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (puRam0000000112f1e2a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e2b0;
  func_0x00010002969c(0x112f1e2b0,&UNK_10db56410);
  uVar2 = uVar1;
  FUN_102e2e478();
  uVar3 = 0x112f1e220;
  func_0x00010002969c(0x112f1e220,&UNK_10db562d8);
  uVar4 = 0xff;
  func_0x000107c5f36c();
  uVar5 = 0x112f1e250;
  FUN_102e2e908(0x112f1e250,0x112f1e220,&UNK_10db562d8,
                PTR___s7SwiftUI7TabViewVyxq_GAA0D0AAMc_1103499d0);
  puStack_48 = PTR___s7SwiftUI16PageTabViewStyleVAA0deF0AAWP_110348b08;
  puVar6 = &uStack_60;
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  uStack_50 = uVar5;
  func_0x000107c614f4(puVar6,
                      PTR___s7SwiftUI4ViewPAAE03tabC5StyleyQrqd__AA03TabcE0Rd__lFQOMQ_110349430,1);
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_70 = uVar2;
  puStack_68 = puVar6;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_70);
  puRam0000000112f1e2a8 = puVar7;
  return;
}


