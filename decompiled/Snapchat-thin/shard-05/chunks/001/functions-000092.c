/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b25e38; end: 103b25e3b; -[_TtC25SingleSnapPlayerMediaUtil33SingleSnapPlayerMediaErrorHelpers .cxx_destruct] */

void FUN_103b25e38(void)

{
  return;
}



/* Entry: 103b25e3c; end: 103b25e93;  */

void FUN_103b25e3c(void)

{
  func_0x000107c61168(&PTR_PTR_11292a0f0);
  return;
}



/* Entry: 103b25e94; end: 103b25ebb;  */

uint FUN_103b25e94(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long alStack_70 [2];
  
  if (*param_1 != *param_2) {
    return 0;
  }
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  alStack_70[1] = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_70[1] + 0x40));
  lVar7 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar3 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar11 = (long *)(lVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar12 = (long *)((long)plVar11 - extraout_x12_01);
  lVar6 = 0x112feccc8;
  func_0x0001000285a8(0x112feccc8,&UNK_10dc56388);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)plVar12 - extraout_x8_01;
  lVar5 = (long)*(int *)(lVar6 + 0x30);
  func_0x000101e3cf64((long)param_1 + (long)iVar1,lVar4);
  func_0x000101e3cf64((long)param_2 + (long)iVar1,lVar4 + lVar5);
  lVar6 = lVar4;
  func_0x000107c614c4(lVar4,lVar3);
  if ((int)lVar6 == 0) {
    func_0x000101e3cf64(lVar4,plVar12);
    lVar2 = *plVar12;
    lVar6 = lVar4 + lVar5;
    func_0x000107c614c4(lVar6,lVar3);
    if ((int)lVar6 == 0) {
      lVar6 = *(long *)(lVar4 + lVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar2);
LAB_103b2e144:
      uVar8 = (uint)(lVar2 == lVar6);
LAB_103b2e14c:
      func_0x000101e3cee4(lVar4);
      goto LAB_103b2e154;
    }
    func_0x000107c61170(lVar2);
  }
  else if ((int)lVar6 == 1) {
    func_0x000101e3cf64(lVar4,plVar11);
    lVar2 = *plVar11;
    lVar6 = lVar4 + lVar5;
    func_0x000107c614c4(lVar6,lVar3);
    if ((int)lVar6 == 1) {
      lVar6 = *(long *)(lVar4 + lVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(lVar2);
      goto LAB_103b2e144;
    }
    func_0x000107c615e8(lVar2);
  }
  else {
    func_0x000101e3cf64(lVar4,lVar10);
    lVar6 = lVar4 + lVar5;
    func_0x000107c614c4(lVar6,lVar3);
    lVar3 = alStack_70[1];
    if ((int)lVar6 == 2) {
      pcVar9 = *(code **)(alStack_70[1] + 0x20);
      (*pcVar9)(lVar7,lVar10,lVar2);
      lVar6 = alStack_70[0];
      (*pcVar9)(alStack_70[0],lVar4 + lVar5,lVar2);
      lVar5 = lVar7;
      func_0x000107c5edac(lVar7,lVar6);
      uVar8 = (uint)lVar5;
      pcVar9 = *(code **)(lVar3 + 8);
      (*pcVar9)(lVar6,lVar2);
      (*pcVar9)(lVar7,lVar2);
      goto LAB_103b2e14c;
    }
    (**(code **)(alStack_70[1] + 8))(lVar10,lVar2);
  }
  func_0x000103b2e604(lVar4);
  uVar8 = 0;
LAB_103b2e154:
  return uVar8 & 1;
}



/* Entry: 103b25ebc; end: 103b25faf;  */

long * FUN_103b25ebc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar6 = (long)*(int *)(param_3 + 0x14);
    uVar2 = 0;
    FUN_103b2dc40(0);
    lVar3 = (long)param_2 + lVar6;
    func_0x000107c614c4(lVar3,uVar2);
    if ((int)lVar3 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3)
      ;
      uVar4 = 2;
    }
    else if ((int)lVar3 == 1) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      func_0x000107c615f0();
      uVar4 = 1;
    }
    else {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      func_0x000107c61174();
      uVar4 = 0;
    }
    func_0x000107c6159c((long)param_1 + lVar6,uVar2,uVar4);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103b25fb0; end: 103b2603b;  */

void FUN_103b25fb0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(int *)(param_2 + 0x14);
  uVar2 = 0;
  FUN_103b2dc40(0);
  lVar3 = param_1 + lVar4;
  func_0x000107c614c4(lVar3,uVar2);
  iVar1 = (int)lVar3;
  if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000103b2602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + lVar4,lVar3);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + lVar4));
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 103b2603c; end: 103b261c3;  */

undefined8 * FUN_103b2603c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  uVar1 = 0;
  FUN_103b2dc40(0);
  lVar2 = (long)param_2 + lVar4;
  func_0x000107c614c4(lVar2,uVar1);
  if ((int)lVar2 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3);
  }
  else if ((int)lVar2 == 1) {
    *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
    func_0x000107c615f0();
  }
  else {
    *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
    func_0x000107c61174();
  }
  func_0x000107c6159c((long)param_1 + lVar4,uVar1,lVar2);
  return param_1;
}



/* Entry: 103b261c4; end: 103b26313;  */

undefined8 * FUN_103b261c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  FUN_103b2dc40();
  lVar2 = (long)param_2 + lVar3;
  func_0x000107c614c4(lVar2,lVar1);
  if ((int)lVar2 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar2);
    func_0x000107c6159c((long)param_1 + lVar3,lVar1,2);
  }
  else {
    func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103b26314; end: 103b2632b;  */

void FUN_103b26314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103b2632c; end: 103b263a3;  */

void FUN_103b2632c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  FUN_103b2dc40();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103b263a4; end: 103b263a7;  */

ulong FUN_103b263a4(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    if (param_6 == '\0') {
      uVar2 = 0;
      FUN_103b269d4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(param_1,param_4,uVar2);
      return (ulong)((uint)param_1 & 1);
    }
  }
  else if (param_3 == '\x01') {
    if (param_6 == '\x01') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else {
    uVar1 = param_2 + (ulong)(param_1 >= 4);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 4))) {
      uVar1 = param_2 + (ulong)(param_1 >= 2);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
        if (param_1 == 0 && param_2 == 0) {
          if ((param_6 == '\x02') && (param_5 == 0 && param_4 == 0)) {
            return 1;
          }
        }
        else if (((param_6 == '\x02') && (param_4 == 1)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 2 && param_2 == 0) {
        if (((param_6 == '\x02') && (param_4 == 2)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x02') && (param_4 == 3)) && (param_5 == 0)) {
        return 1;
      }
    }
    else {
      uVar1 = param_2 + (ulong)(param_1 >= 6);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 6))) {
        if (param_1 == 4 && param_2 == 0) {
          if (((param_6 == '\x02') && (param_4 == 4)) && (param_5 == 0)) {
            return 1;
          }
        }
        else if (((param_6 == '\x02') && (param_4 == 5)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 6 && param_2 == 0) {
        if (((param_6 == '\x02') && (param_4 == 6)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x02') && (param_4 == 7)) && (param_5 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103b263a8; end: 103b263f7;  */

void FUN_103b263a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103b26994();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 103b263f8; end: 103b2641b;  */

void FUN_103b263f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 103b2641c; end: 103b26577;  */

/* WARNING: Possible PIC construction at 0x000103b2652c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b26530) */

undefined * FUN_103b2641c(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [80];
  
  puVar10 = auStack_d0;
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 == '\x01') {
    unaff_x21 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_80;
    func_0x000107c61534();
    *(undefined8 *)(unaff_x21 + 0x18) = 2;
    *(undefined8 *)(unaff_x21 + 0x10) = 1;
    uVar9 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    unaff_x22 = (undefined8 *)(unaff_x21 + 0x20);
    *unaff_x22 = uVar9;
    *(undefined **)(unaff_x21 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(unaff_x21 + 0x28) = puVar10;
    *(undefined8 *)(unaff_x21 + 0x30) = param_1;
    *(undefined8 *)(unaff_x21 + 0x38) = param_2;
    uVar9 = 1;
  }
  else {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_3 != '\0') goto code_r0x000100214a84;
    unaff_x21 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(unaff_x21 + 0x18) = 2;
    *(undefined8 *)(unaff_x21 + 0x10) = 1;
    uVar9 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    func_0x000107c5faec();
    unaff_x22 = (undefined8 *)(unaff_x21 + 0x20);
    *unaff_x22 = uVar9;
    *(undefined1 **)(unaff_x21 + 0x28) = puVar10;
    uVar9 = 0;
    FUN_103b269d4(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    *(undefined8 *)(unaff_x21 + 0x48) = uVar9;
    *(undefined8 *)(unaff_x21 + 0x30) = param_1;
    uVar9 = 0;
  }
  func_0x000101e49dd8(param_1,param_2,uVar9);
  unaff_x30 = 0x103b26530;
  register0x00000008 = (BADSPACEBASE *)auStack_d0;
  puVar6 = unaff_x21;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
  unaff_x29 = puVar1;
code_r0x000100214a84:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar12 = *(undefined **)(puVar6 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar7 = puVar12;
    func_0x000107c60498();
    puVar6 = puVar6 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar6,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar3 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar4 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar8 = uVar3;
      uVar11 = uVar4;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar5)();
      }
      uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar11 + 0x40) = *(ulong *)(puVar7 + uVar11 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar7 + 0x38) + uVar8 * 0x20);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar6 = puVar6 + 0x30;
      puVar12 = puVar12 + -1;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 103b26578; end: 103b265d3;  */

undefined1  [16] FUN_103b26578(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f19fa50;
  auVar1._0_8_ = 0xd000000000000037;
  return auVar1;
}



/* Entry: 103b265d4; end: 103b267cf;  */

ulong FUN_103b265d4(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    if (param_6 == '\0') {
      uVar2 = 0;
      FUN_103b269d4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(param_1,param_4,uVar2);
      return (ulong)((uint)param_1 & 1);
    }
  }
  else if (param_3 == '\x01') {
    if (param_6 == '\x01') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else {
    uVar1 = param_2 + (ulong)(param_1 >= 4);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 4))) {
      uVar1 = param_2 + (ulong)(param_1 >= 2);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
        if (param_1 == 0 && param_2 == 0) {
          if ((param_6 == '\x02') && (param_5 == 0 && param_4 == 0)) {
            return 1;
          }
        }
        else if (((param_6 == '\x02') && (param_4 == 1)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 2 && param_2 == 0) {
        if (((param_6 == '\x02') && (param_4 == 2)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x02') && (param_4 == 3)) && (param_5 == 0)) {
        return 1;
      }
    }
    else {
      uVar1 = param_2 + (ulong)(param_1 >= 6);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 6))) {
        if (param_1 == 4 && param_2 == 0) {
          if (((param_6 == '\x02') && (param_4 == 4)) && (param_5 == 0)) {
            return 1;
          }
        }
        else if (((param_6 == '\x02') && (param_4 == 5)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (param_1 == 6 && param_2 == 0) {
        if (((param_6 == '\x02') && (param_4 == 6)) && (param_5 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x02') && (param_4 == 7)) && (param_5 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103b267d0; end: 103b267e3;  */

void FUN_103b267d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e324c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc556f0;
  func_0x000107c61520(&UNK_10dc556f0,&UNK_1106d42b0);
  puRam0000000112e324c8 = puVar1;
  return;
}



/* Entry: 103b267e4; end: 103b2687f;  */

undefined8 * FUN_103b267e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101e49dd8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103b26880; end: 103b268c3;  */

undefined8 * FUN_103b26880(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000101e49df8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103b268c4; end: 103b26993;  */

int FUN_103b268c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b26994; end: 103b269d3;  */

void FUN_103b26994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55758;
  func_0x000107c61520(&UNK_10dc55758,&UNK_1106d42b0);
  puRam0000000112fec890 = puVar1;
  return;
}



/* Entry: 103b269d4; end: 103b26a13;  */

void FUN_103b269d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b26a14; end: 103b26a2f;  */

undefined8 * FUN_103b26a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101e49dd8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103b26a30; end: 103b26adb;  */

void FUN_103b26a30(void)

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



/* Entry: 103b26adc; end: 103b26adf;  */

void FUN_103b26adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55820;
  func_0x000107c61520(&UNK_10dc55820,&UNK_1106d43a0);
  puRam0000000112fec898 = puVar1;
  return;
}



/* Entry: 103b26ae0; end: 103b26b1f;  */

void FUN_103b26ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55820;
  func_0x000107c61520(&UNK_10dc55820,&UNK_1106d43a0);
  puRam0000000112fec898 = puVar1;
  return;
}



/* Entry: 103b26b20; end: 103b26c83;  */

int FUN_103b26b20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b26b9c;
        goto LAB_103b26b80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b26b80:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103b26b9c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b26c84; end: 103b26ccb; -[_TtC28SingleSnapPlayerMediaService28SingleSnapPlayerMediaService mediaResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b26c84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fec8a0;
  func_0x000107c61428(param_1 + _DAT_112fec8a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b26ccc; end: 103b26d93; -[_TtC28SingleSnapPlayerMediaService28SingleSnapPlayerMediaService setMediaResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b26ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fec8a0;
  func_0x000107c61428(param_1 + _DAT_112fec8a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b26d94; end: 103b26df3; -[_TtC28SingleSnapPlayerMediaService28SingleSnapPlayerMediaService init] */

void FUN_103b26d94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerMediaService.SingleSnapPlayerMediaService",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b26dc0);
  (*pcVar1)();
}



/* Entry: 103b26df4; end: 103b26e6b; -[_TtC28SingleSnapPlayerMediaService28SingleSnapPlayerMediaService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b26df4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fec8a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fec8a8));
  return;
}



/* Entry: 103b26e6c; end: 103b26ea7; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer initWithPage:] */

undefined8 FUN_103b26e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b27ae4();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103b26ea8; end: 103b26eaf; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer type] */

undefined8 FUN_103b26ea8(void)

{
  return 0x20;
}



/* Entry: 103b26eb0; end: 103b26eb7; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer layerContentType] */

undefined8 FUN_103b26eb0(void)

{
  return 1;
}



/* Entry: 103b26eb8; end: 103b26f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b26eb8(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined8 **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uVar2 = 0x112fec2d0;
  func_0x0001000285a8(0x112fec2d0,&UNK_10dc55350);
  pppuVar3 = &ppuStack_30;
  func_0x000107c5fb18();
  ppuStack_30 = pppuVar3;
  uStack_28 = uVar2;
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = ppuStack_30;
  return auVar1;
}



/* Entry: 103b26f5c; end: 103b26fb3; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer layerCacheKey] */

void FUN_103b26f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b26eb8();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b26fb4; end: 103b27067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103b26fb4(void)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112fec8e8);
  dVar3 = *pdVar1;
  if ((dVar3 != 0.0) && (pdVar1[1] != 0.0)) {
    dVar2 = *(double *)(unaff_x20 + _DAT_112fec8f0);
    if ((dVar2 != 0.0) && (dVar4 = ((double *)(unaff_x20 + _DAT_112fec8f0))[1], dVar4 != 0.0)) {
      dVar3 = pdVar1[1] / dVar3;
      dVar4 = dVar4 / dVar2;
      if (dVar4 < dVar3) {
        dVar4 = dVar3;
      }
      return dVar4;
    }
  }
  dVar2 = *(double *)(unaff_x20 + _DAT_112fec8f0);
  if ((dVar2 != 0.0) && (dVar4 = ((double *)(unaff_x20 + _DAT_112fec8f0))[1], dVar4 != 0.0)) {
    return dVar4 / dVar2;
  }
  if ((dVar3 != 0.0) && (pdVar1[1] != 0.0)) {
    return pdVar1[1] / dVar3;
  }
  return 1.7777777777777777;
}



/* Entry: 103b27068; end: 103b27617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103b27068(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  char cVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  double *pdVar19;
  double *pdVar20;
  long lVar21;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  
  lVar16 = unaff_x20;
  func_0x000107c614f0();
  FUN_103b28b6c(param_2,&uStack_b0,0x112d387f8,&UNK_10d902650);
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_b0);
    return false;
  }
  plVar17 = &lStack_e8;
  func_0x000107c6147c(plVar17,&uStack_b0,PTR___sypN_11034f1a8 + 8,lVar16,6);
  lVar16 = lStack_e8;
  if (((ulong)plVar17 & 1) == 0) {
    return false;
  }
  if ((*(int *)(unaff_x20 + _DAT_112fec8d8) != *(int *)(lStack_e8 + _DAT_112fec8d8)) ||
     (*(long *)(unaff_x20 + _DAT_112fec908) != *(long *)(lStack_e8 + _DAT_112fec908)))
  goto LAB_103b273f4;
  plVar17 = (long *)(unaff_x20 + _DAT_112fec8e0);
  puVar1 = (undefined8 *)(lStack_e8 + _DAT_112fec8e0);
  uVar3 = *puVar1;
  lVar6 = puVar1[1];
  uVar4 = puVar1[2];
  lVar7 = puVar1[3];
  uVar5 = puVar1[4];
  uVar8 = puVar1[5];
  uVar14 = *(undefined2 *)(puVar1 + 6);
  lVar21 = *plVar17;
  lVar9 = plVar17[1];
  lVar22 = plVar17[2];
  lVar10 = plVar17[3];
  lVar18 = plVar17[4];
  lVar11 = plVar17[5];
  uVar15 = (undefined2)plVar17[6];
  if (lVar9 == 0) {
    if (lVar6 != 0) goto LAB_103b27264;
    func_0x000101e595f0(uVar3,0,uVar4);
    func_0x000101e595f0(lVar21,0,lVar22,lVar10,lVar18,lVar11,uVar15);
    func_0x000101ad91a0(lVar21,0,lVar22,lVar10,lVar18,lVar11,uVar15);
  }
  else {
    if (lVar6 == 0) {
LAB_103b27264:
      func_0x000101e595f0(uVar3,lVar6,uVar4);
      func_0x000101e595f0(lVar21,lVar9,lVar22,lVar10,lVar18,lVar11,uVar15);
      func_0x000107c61170(lStack_e8);
      func_0x000101ad91a0(lVar21,lVar9,lVar22,lVar10,lVar18,lVar11,uVar15);
      func_0x000101ad91a0(uVar3,lVar6,uVar4,lVar7,uVar5,uVar8,uVar14);
      return false;
    }
    lStack_e8 = lVar21;
    lStack_e0 = lVar9;
    lStack_d8 = lVar22;
    lStack_d0 = lVar10;
    lStack_c8 = lVar18;
    lStack_c0 = lVar11;
    uStack_b8 = uVar15;
    uStack_b0 = uVar3;
    lStack_a8 = lVar6;
    uStack_a0 = uVar4;
    lStack_98 = lVar7;
    uStack_90 = uVar5;
    uStack_88 = uVar8;
    uStack_80 = uVar14;
    func_0x000101e595f0(uVar3,lVar6,uVar4);
    func_0x000101e595f0(uVar3,lVar6,uVar4,lVar7,uVar5,uVar8,uVar14);
    func_0x000101e595f0(lVar21,lVar9,lVar22,lVar10,lVar18,lVar11,uVar15);
    plVar17 = &lStack_e8;
    func_0x000103b297e0(plVar17,&uStack_b0);
    func_0x000101ad91a0(uVar3,lVar6,uVar4,lVar7,uVar5,uVar8,uVar14);
    func_0x000101ad91a0(uVar3,lVar6,uVar4,lVar7,uVar5,uVar8,uVar14);
    func_0x000101ad91a0(lVar21,lVar9,lVar22,lVar10,lVar18,lVar11,uVar15);
    if (((ulong)plVar17 & 1) == 0) goto LAB_103b273f4;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec8f8);
  lVar22 = puVar1[4];
  puVar2 = (undefined8 *)(lVar16 + _DAT_112fec8f8);
  lVar21 = puVar2[4];
  if (lVar22 == 0) {
    if (lVar21 == 0) goto LAB_103b2746c;
  }
  else if (lVar21 != 0) {
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    dVar25 = (double)puVar1[2];
    uVar23 = puVar1[3];
    uVar4 = *puVar2;
    uVar8 = puVar2[1];
    dVar26 = (double)puVar2[2];
    uVar24 = puVar2[3];
    func_0x000107c61434(lVar21);
    func_0x000107c61434(lVar22);
    if ((((int)uVar3 != (int)uVar4) || ((((uint)uVar8 ^ (uint)uVar5) & 1) != 0)) ||
       (dVar25 != dVar26)) {
      func_0x000107c61170(lVar16);
      func_0x000107c6142c(lVar22);
      func_0x000107c6142c(lVar21);
      return false;
    }
    if ((uVar23 == uVar24) && (lVar22 == lVar21)) {
      func_0x000107c6142c(lVar22);
      func_0x000107c6142c(lVar21);
    }
    else {
      func_0x000107c605b8(uVar23,lVar22,uVar24,lVar21,0);
      func_0x000107c6142c(lVar22);
      func_0x000107c6142c(lVar21);
      if ((uVar23 & 1) == 0) goto LAB_103b273f4;
    }
LAB_103b2746c:
    lVar21 = *(long *)(unaff_x20 + _DAT_112fec900);
    lVar22 = *(long *)(lVar16 + _DAT_112fec900);
    if (lVar21 == 0) {
      if (lVar22 != 0) goto LAB_103b273f4;
    }
    else {
      if ((lVar22 == 0) || (lVar18 = *(long *)(lVar21 + 0x10), lVar18 != *(long *)(lVar22 + 0x10)))
      goto LAB_103b273f4;
      if ((lVar18 != 0) && (lVar21 != lVar22)) {
        pdVar19 = (double *)(lVar21 + 0x20);
        pdVar20 = (double *)(lVar22 + 0x20);
        do {
          param_1 = *pdVar19;
          if (param_1 != *pdVar20) goto LAB_103b273f4;
          lVar18 = lVar18 + -1;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        } while (lVar18 != 0);
      }
    }
    FUN_103b26fb4();
    dVar25 = param_1;
    FUN_103b26fb4();
    if ((param_1 != dVar25) ||
       (*(char *)(unaff_x20 + _DAT_112fec940) != *(char *)(lVar16 + _DAT_112fec940)))
    goto LAB_103b273f4;
    uVar23 = *(ulong *)(unaff_x20 + _DAT_112fec950);
    lVar21 = *(long *)(lVar16 + _DAT_112fec950);
    if (uVar23 == 0) {
      if (lVar21 != 0) goto LAB_103b273f4;
    }
    else {
      if (lVar21 == 0) goto LAB_103b273f4;
      FUN_103baff10(0);
      func_0x000107c61174(lVar21);
      func_0x000107c61174();
      uVar24 = uVar23;
      func_0x000107c60118();
      func_0x000107c61170(uVar23);
      func_0x000107c61170(lVar21);
      if ((uVar24 & 1) == 0) goto LAB_103b273f4;
    }
    uVar23 = *(ulong *)(unaff_x20 + _DAT_112fec918);
    lVar21 = *(long *)(lVar16 + _DAT_112fec918);
    if (uVar23 == 0) {
      if (lVar21 == 0) {
LAB_103b275c0:
        dVar25 = *(double *)(unaff_x20 + _DAT_112fec920);
        cVar12 = *(char *)((double *)(unaff_x20 + _DAT_112fec920) + 1);
        dVar26 = *(double *)(lVar16 + _DAT_112fec920);
        cVar13 = *(char *)((double *)(lVar16 + _DAT_112fec920) + 1);
        func_0x000107c61170(lVar16);
        if (cVar12 != '\x01') {
          return dVar25 == dVar26 && cVar13 != '\x01';
        }
        return cVar13 == '\x01';
      }
    }
    else if (lVar21 != 0) {
      func_0x000107c61434(lVar21);
      uVar24 = uVar23;
      func_0x000107c61434();
      FUN_103b27794();
      func_0x000107c6142c(uVar23);
      func_0x000107c6142c(lVar21);
      if ((uVar24 & 1) != 0) goto LAB_103b275c0;
    }
    goto LAB_103b273f4;
  }
  func_0x000107c61434(lVar22);
  func_0x000107c6142c();
LAB_103b273f4:
  func_0x000107c61170(lVar16);
  return false;
}



/* Entry: 103b27618; end: 103b27697; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer isEqual:] */

uint FUN_103b27618(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b27068(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b27698; end: 103b276f7; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer init] */

void FUN_103b27698(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerOperaLayerAPI.SingleSnapPlayerOperaLayer",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b276c4);
  (*pcVar1)();
}



/* Entry: 103b276f8; end: 103b27793; -[_TtC29SingleSnapPlayerOperaLayerAPI26SingleSnapPlayerOperaLayer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b27768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b2776c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b276f8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fec8e0);
  func_0x000101ad91a0(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                      *(undefined2 *)(puVar1 + 6));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fec8f8 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fec900));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fec918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fec938));
  return;
}



/* Entry: 103b27794; end: 103b279d7;  */

uint FUN_103b27794(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b279d8);
          (*pcVar1)();
        }
        func_0x00010444693c(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103b27978);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2797c);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103b27980);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_103b278a0;
LAB_103b27870:
              FUN_103b22688(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_103b22688(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_103b27870;
LAB_103b278a0:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103b27984);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_103b279b0;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_103b279b0:
  return uVar8 & 1;
}



/* Entry: 103b279d8; end: 103b27ae3;  */

void FUN_103b279d8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  FUN_103b28b6c(param_2,auStack_90,0x112d387f8,&UNK_10d902650);
  puVar1 = PTR___sypN_11034f1a8;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    uVar2 = 0;
    FUN_103b2c594(0);
    puVar3 = &uStack_98;
    func_0x000107c6147c(puVar3,auStack_90,puVar1 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000103b2bff0(&uStack_70,uStack_98);
      goto LAB_103b27ac4;
    }
  }
  FUN_103b28b6c(param_2,auStack_90,0x112d387f8,&UNK_10d902650);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    puVar3 = &uStack_70;
    func_0x000107c6147c(puVar3,auStack_90,puVar1 + 8,&UNK_1106d4aa0,6);
    if ((int)puVar3 != 0) goto LAB_103b27ac4;
  }
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
LAB_103b27ac4:
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  *(undefined2 *)(param_1 + 6) = uStack_40;
  return;
}



/* Entry: 103b27ae4; end: 103b28b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b27ae4(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  byte bVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte bStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  
  func_0x000107c614f0();
  puVar17 = *(undefined8 **)(param_1 + _DAT_11307abc8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e9d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e9d8);
  puVar11 = param_2;
  if (puVar17[2] == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    func_0x000107c61434(puVar17);
  }
  else {
    func_0x000107c61438(puVar17,2);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      puVar11 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(param_2);
      param_2 = puVar17;
    }
  }
  func_0x000107c6142c(param_2);
  FUN_103b279d8(&uStack_b0,&uStack_d0);
  func_0x00010006e7f4(&uStack_d0);
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112fec8e0);
  puVar12[1] = uStack_a8;
  *puVar12 = uStack_b0;
  puVar12[3] = uStack_98;
  puVar12[2] = uStack_a0;
  puVar12[5] = uStack_88;
  puVar12[4] = uStack_90;
  *(undefined2 *)(puVar12 + 6) = uStack_80;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c238;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c238);
  puVar12 = puVar11;
  uVar10 = uStack_a0;
  if (puVar17[2] == 0) {
LAB_103b27c4c:
    uVar9 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      uVar10 = uStack_a0;
      goto LAB_103b27c4c;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
    uVar9 = uStack_90;
    uVar10 = uStack_a0;
  }
  func_0x000107c6142c(puVar11);
  puVar5 = PTR___sypN_11034f1a8;
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b27cb0:
    uVar8 = 1;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,PTR___sypN_11034f1a8 + 8,PTR___sSuN_11034e220,6);
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b27cb0;
    uVar19 = 1;
    if (CONCAT71(uStack_ef,bStack_f0) == 2) {
      uVar19 = 2;
    }
    uVar8 = 0;
    if (CONCAT71(uStack_ef,bStack_f0) != 0) {
      uVar8 = uVar19;
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec8d8) = uVar8;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0ea18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0ea18);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b27d20:
    uVar9 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b27d20;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
LAB_103b27e10:
    func_0x00010006e7f4(&uStack_d0);
LAB_103b27e18:
    uVar8 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,PTR___sSbN_11034dd40,6);
    if (((int)pbVar7 == 0) || ((bStack_f0 & 1) == 0)) goto LAB_103b27e18;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0e818;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e818);
    puVar12 = puVar11;
    if (puVar17[2] == 0) {
LAB_103b27dc0:
      uVar9 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      func_0x000100029284(ppuVar6);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_103b27dc0;
      }
      puVar12 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(puVar11);
      puVar11 = puVar17;
    }
    func_0x000107c6142c(puVar11);
    puVar11 = puVar12;
    if (lStack_b8 == 0) goto LAB_103b27e10;
    uVar8 = 0x112fec988;
    func_0x0001000285a8(0x112fec988,&UNK_10dc55948);
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,uVar8,6);
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b27e18;
    uVar8 = CONCAT71(uStack_ef,bStack_f0);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec918) = uVar8;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c538;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c538);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b27e88:
    uVar9 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b27e88;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
    uVar8 = uVar9;
LAB_103b27efc:
    uVar14 = 1;
    uVar9 = 0;
  }
  else {
    uVar8 = 0;
    FUN_103b28bd4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,uVar8,6);
    uVar8 = uVar9;
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b27efc;
    uVar19 = CONCAT71(uStack_ef,bStack_f0);
    func_0x000107c4223c(uVar19);
    uVar8 = uVar9;
    func_0x000107c61170(uVar19);
    uVar14 = 0;
  }
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_112fec920);
  *puVar11 = uVar9;
  *(undefined1 *)(puVar11 + 1) = uVar14;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0d438;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d438);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b27f78:
    uVar8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b27f78;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
    uVar9 = uVar8;
    uVar19 = uVar10;
LAB_103b27fec:
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    FUN_103b28bd4(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,uVar9,6);
    uVar9 = uVar8;
    uVar19 = uVar10;
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b27fec;
    uVar2 = CONCAT71(uStack_ef,bStack_f0);
    func_0x000107c3ab3c(uVar2);
    uVar9 = uVar8;
    uVar19 = uVar10;
    func_0x000107c61170(uVar2);
  }
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112fec8f0);
  *puVar12 = uVar8;
  puVar12[1] = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0d418;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d418);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b28064:
    uVar9 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28064;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b280d8:
    uVar9 = 0;
    uVar19 = 0;
  }
  else {
    uVar10 = 0;
    FUN_103b28bd4(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,uVar10,6);
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b280d8;
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
    func_0x000107c3ab3c(uVar10);
    func_0x000107c61170(uVar10);
  }
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_112fec8e8);
  *puVar11 = uVar9;
  puVar11[1] = uVar19;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0d398;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d398);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b28150:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28150;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b28198:
    uVar10 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,PTR___sSdN_11034dd90,6);
    if ((int)pbVar7 == 0) goto LAB_103b28198;
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec928) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e9e918;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e9e918);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b28208:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28208;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b28250:
    bVar15 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,PTR___sSbN_11034dd40,6);
    bVar15 = bStack_f0;
    if ((int)pbVar7 == 0) goto LAB_103b28250;
  }
  *(byte *)(unaff_x20 + _DAT_112fec910) = bVar15;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c558;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c558);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b282c0:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b282c0;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    func_0x000104446cc0(0);
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,uVar10,6);
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
    if ((int)pbVar7 == 0) {
      uVar10 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec938) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e9f8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e9f8);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b28380:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28380;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b283c8:
    uVar10 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,PTR___sSiN_11034deb0,6);
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b283c8;
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec908) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c3b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c3b8);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b28438:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28438;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
LAB_103b28578:
    func_0x00010006e7f4(&uStack_d0);
LAB_103b28580:
    uVar10 = 0;
    puVar12 = (undefined8 *)(unaff_x20 + _DAT_112fec8f8);
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[4] = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,PTR___sSiN_11034deb0,6);
    if ((((ulong)pbVar7 & 1) == 0) || (uVar3 = CONCAT71(uStack_ef,bStack_f0), 4 < uVar3))
    goto LAB_103b28580;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0c338;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c338);
    puVar12 = puVar11;
    if (puVar17[2] == 0) {
LAB_103b284e0:
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      func_0x000100029284(ppuVar6);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_103b284e0;
      }
      puVar12 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(puVar11);
      puVar11 = puVar17;
    }
    func_0x000107c6142c(puVar11);
    puVar11 = puVar12;
    if (lStack_b8 == 0) goto LAB_103b28578;
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pbVar7 & 1) == 0) goto LAB_103b28580;
    uVar4 = CONCAT71(uStack_ef,bStack_f0);
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0c3f8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c3f8);
    puVar12 = puVar11;
    if (puVar17[2] == 0) {
LAB_103b28994:
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      func_0x000100029284(ppuVar6);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_103b28994;
      }
      puVar12 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(puVar11);
      puVar11 = puVar17;
    }
    func_0x000107c6142c(puVar11);
    if (lStack_b8 == 0) {
      func_0x00010006e7f4(&uStack_d0);
LAB_103b289e4:
      uVar18 = 1;
    }
    else {
      pbVar7 = &bStack_f0;
      puVar12 = &uStack_d0;
      func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,PTR___sSbN_11034dd40,6);
      if ((int)pbVar7 == 0) goto LAB_103b289e4;
      uVar18 = (ulong)~(uint)bStack_f0 & 1;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0c418;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c418);
    puVar13 = puVar12;
    if (puVar17[2] == 0) {
LAB_103b28a48:
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      func_0x000100029284(ppuVar6);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_103b28a48;
      }
      puVar13 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar17;
    }
    func_0x000107c6142c(puVar12);
    if (lStack_b8 == 0) {
      func_0x00010006e7f4(&uStack_d0);
LAB_103b28a90:
      uVar16 = 0;
    }
    else {
      pbVar7 = &bStack_f0;
      puVar13 = &uStack_d0;
      func_0x000107c6147c(pbVar7,puVar13,puVar5 + 8,PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
      if ((int)pbVar7 == 0) goto LAB_103b28a90;
      uVar16 = CONCAT71(uStack_ef,bStack_f0);
    }
    puVar1 = (ulong *)(unaff_x20 + _DAT_112fec8f8);
    *puVar1 = uVar3;
    puVar1[1] = uVar18;
    puVar1[2] = uVar16;
    puVar1[3] = uVar4;
    puVar1[4] = uStack_e8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0c498;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c498);
    puVar11 = puVar13;
    if (puVar17[2] == 0) {
LAB_103b28b0c:
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      func_0x000100029284(ppuVar6);
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_103b28b0c;
      }
      puVar11 = &uStack_d0;
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
      func_0x000107c6142c(puVar13);
      puVar13 = puVar17;
    }
    func_0x000107c6142c(puVar13);
    if (lStack_b8 == 0) {
      func_0x00010006e7f4(&uStack_d0);
LAB_103b28b64:
      uVar10 = 0;
    }
    else {
      uVar10 = 0x112d3d588;
      func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
      pbVar7 = &bStack_f0;
      puVar11 = &uStack_d0;
      func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,uVar10,6);
      if (((ulong)pbVar7 & 1) == 0) goto LAB_103b28b64;
      uVar10 = CONCAT71(uStack_ef,bStack_f0);
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec900) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c738;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c738);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b28604:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28604;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b2864c:
    bVar15 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,PTR___sSbN_11034dd40,6);
    bVar15 = bStack_f0;
    if ((int)pbVar7 == 0) goto LAB_103b2864c;
  }
  *(byte *)(unaff_x20 + _DAT_112fec930) = bVar15;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c678;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c678);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b286bc:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b286bc;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b28704:
    bVar15 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,PTR___sSbN_11034dd40,6);
    bVar15 = bStack_f0;
    if ((int)pbVar7 == 0) goto LAB_103b28704;
  }
  *(byte *)(unaff_x20 + _DAT_112fec940) = bVar15;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c6d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c6d8);
  puVar12 = puVar11;
  if (puVar17[2] == 0) {
LAB_103b28774:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b28774;
    }
    puVar12 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar11);
    puVar11 = puVar17;
  }
  func_0x000107c6142c(puVar11);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
LAB_103b287bc:
    bVar15 = 0;
  }
  else {
    pbVar7 = &bStack_f0;
    puVar12 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar12,puVar5 + 8,PTR___sSbN_11034dd40,6);
    bVar15 = bStack_f0;
    if ((int)pbVar7 == 0) goto LAB_103b287bc;
  }
  *(byte *)(unaff_x20 + _DAT_112fec948) = bVar15;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c698;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c698);
  puVar11 = puVar12;
  if (puVar17[2] == 0) {
LAB_103b2882c:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      goto LAB_103b2882c;
    }
    puVar11 = &uStack_d0;
    func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar17;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    FUN_103baff10(0);
    pbVar7 = &bStack_f0;
    puVar11 = &uStack_d0;
    func_0x000107c6147c(pbVar7,puVar11,puVar5 + 8,uVar10,6);
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
    if ((int)pbVar7 == 0) {
      uVar10 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec950) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c6b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c6b8);
  if (puVar17[2] != 0) {
    func_0x000107c61434(puVar17);
    puVar12 = puVar11;
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar12 & 1) != 0) {
      func_0x0001000bb420(puVar17[7] + (long)ppuVar6 * 0x20,&uStack_d0);
      func_0x000107c6142c(puVar11);
      puVar11 = puVar17;
      goto LAB_103b288f4;
    }
    func_0x000107c6142c(puVar17);
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
LAB_103b288f4:
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c(puVar17);
  if (lStack_b8 == 0) {
    func_0x00010006e7f4(&uStack_d0);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    FUN_103bb05d8(0);
    pbVar7 = &bStack_f0;
    func_0x000107c6147c(pbVar7,&uStack_d0,puVar5 + 8,uVar10,6);
    uVar10 = CONCAT71(uStack_ef,bStack_f0);
    if ((int)pbVar7 == 0) {
      uVar10 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fec958) = uVar10;
  func_0x000107c61154(&stack0xffffffffffffff20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b28b6c; end: 103b28bb3;  */

undefined8 FUN_103b28b6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103b28bb4; end: 103b28bd3;  */

void FUN_103b28bb4(void)

{
  func_0x000107c61168(&PTR_PTR_11292a268);
  return;
}



/* Entry: 103b28bd4; end: 103b28c13;  */

void FUN_103b28bd4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b28c14; end: 103b28c5b;  */

uint FUN_103b28c14(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103b28c5c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b28c5c; end: 103b28cbf;  */

long FUN_103b28c5c(int *param_1,int *param_2)

{
  long lVar1;
  
  if (((*param_1 == *param_2) && (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) == 0)) &&
     (*(double *)(param_1 + 4) == *(double *)(param_2 + 4))) {
    lVar1 = *(long *)(param_1 + 6);
    if (lVar1 != *(long *)(param_2 + 6) || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar1,*(long *)(param_1 + 8),*(long *)(param_2 + 6),*(long *)(param_2 + 8),0);
      return lVar1;
    }
    return 1;
  }
  return 0;
}



/* Entry: 103b28cc0; end: 103b28ceb;  */

long FUN_103b28cc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b28cec; end: 103b28cf3;  */

void FUN_103b28cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 103b28cf4; end: 103b28dd7;  */

undefined8 * FUN_103b28cf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103b28dd8; end: 103b28e77;  */

int FUN_103b28dd8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b28e78; end: 103b28ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b28e78(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x000100bf4c30(param_1,unaff_x20 + _DAT_112fec990);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103b28ee8; end: 103b28f47; -[_TtC31SingleSnapPlayerFactoryServices31SingleSnapPlayerFactoryServices init] */

void FUN_103b28ee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerFactoryServices.SingleSnapPlayerFactoryServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b28f14);
  (*pcVar1)();
}



/* Entry: 103b28f48; end: 103b28f57; -[_TtC31SingleSnapPlayerFactoryServices31SingleSnapPlayerFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b28f48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fec990))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fec990));
  return;
}



/* Entry: 103b28f58; end: 103b28fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b28f58(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x000100bf4484(param_1,unaff_x20 + _DAT_112fec9c0);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103b28fc8; end: 103b29027; -[_TtC32SingleSnapPlayerAnalyticsService32SingleSnapPlayerAnalyticsService init] */

void FUN_103b28fc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerAnalyticsService.SingleSnapPlayerAnalyticsService",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b28ff4);
  (*pcVar1)();
}



/* Entry: 103b29028; end: 103b2904f; -[_TtC32SingleSnapPlayerAnalyticsService32SingleSnapPlayerAnalyticsService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b29028(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fec9c0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fec9c0));
  return;
}



/* Entry: 103b29050; end: 103b2908f;  */

void FUN_103b29050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55b90;
  func_0x000107c61520(&UNK_10dc55b90,&UNK_1106d4748);
  puRam0000000112fec9f0 = puVar1;
  return;
}



/* Entry: 103b29090; end: 103b2913b;  */

void FUN_103b29090(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b2913c; end: 103b2917b;  */

void FUN_103b2913c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103b2917c; end: 103b291bf;  */

void FUN_103b2917c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103b291c0; end: 103b291c7;  */

void FUN_103b291c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103b291c8; end: 103b29753;  */

int FUN_103b291c8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b29754; end: 103b297e3;  */

bool FUN_103b29754(long *param_1,long *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[1] == param_2[1] && param_1[2] == param_2[2];
  }
  return false;
}



/* Entry: 103b297e4; end: 103b2983b;  */

uint FUN_103b297e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined2 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined2 *)(param_2 + 6);
  FUN_103b2983c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103b2983c; end: 103b299ab;  */

byte FUN_103b2983c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar1 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar1 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar1) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar1 + 0x20);
        do {
          uStack_c8 = puVar6[1];
          uStack_d0 = *puVar6;
          uStack_b8 = puVar6[3];
          uStack_c0 = puVar6[2];
          uStack_a8 = puVar6[5];
          uStack_b0 = puVar6[4];
          uStack_a0 = puVar6[6];
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_80 = puVar7[2];
          uStack_68 = puVar7[5];
          uStack_70 = puVar7[4];
          uStack_60 = puVar7[6];
          func_0x000101e49e18(&uStack_d0,auStack_108);
          func_0x000101e49e18(&uStack_90,auStack_108);
          puVar2 = &uStack_d0;
          func_0x000103b2d8b4(puVar2,&uStack_90);
          func_0x000101e49e54(&uStack_90);
          func_0x000101e49e54(&uStack_d0);
          if (((ulong)puVar2 & 1) == 0) goto LAB_103b29974;
          puVar7 = puVar7 + 7;
          puVar6 = puVar6 + 7;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (param_1[3] == param_2[3]) {
        bVar3 = 0;
        if ((param_1[4] != param_2[4]) || (param_1[5] != param_2[5])) goto LAB_103b29978;
        if ((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0) {
          bVar3 = *(byte *)((long)param_1 + 0x31) ^ *(byte *)((long)param_2 + 0x31) ^ 1;
          goto LAB_103b29978;
        }
      }
    }
  }
LAB_103b29974:
  bVar3 = 0;
LAB_103b29978:
  return bVar3 & 1;
}



/* Entry: 103b299ac; end: 103b29a53;  */

long FUN_103b299ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b29a54; end: 103b29adf;  */

undefined8 * FUN_103b29a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  return param_1;
}



/* Entry: 103b29ae0; end: 103b29b43;  */

undefined8 * FUN_103b29ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  return param_1;
}



/* Entry: 103b29b44; end: 103b29beb;  */

int FUN_103b29b44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x32) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b29bec; end: 103b29df7;  */

long FUN_103b29bec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b29df8; end: 103b29e4f;  */

uint FUN_103b29df8(undefined8 *param_1,undefined8 *param_2)

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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103b29e50(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103b29e50; end: 103b29f0f;  */

bool FUN_103b29e50(long param_1,long param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *(double *)(param_1 + 8);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_2 + 8);
  dVar3 = *(double *)(param_2 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x40);
  if ((uVar1 == *(ulong *)(param_2 + 0x40) && *(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48)
      ) || (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    if (((uVar1 == *(ulong *)(param_2 + 0x20)) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) ||
       (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      if (((uVar1 == *(ulong *)(param_2 + 0x30)) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
        return dVar2 < dVar4 != dVar5 <= dVar3;
      }
    }
  }
  return false;
}



/* Entry: 103b29f10; end: 103b29f6b;  */

long FUN_103b29f10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b29f6c; end: 103b2a073;  */

undefined8 * FUN_103b29f6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103b2a074; end: 103b2a0df;  */

undefined8 * FUN_103b2a074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103b2a0e0; end: 103b2a18b;  */

int FUN_103b2a0e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b2a18c; end: 103b2a337;  */

/* WARNING: Possible PIC construction at 0x000103b2a1a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b2a1a4) */

void FUN_103b2a18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103b2a338; end: 103b2a41f;  */

bool FUN_103b2a338(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = cVar1 == '\x01' && lVar4 == 0;
  if (*param_1 != 0) {
    bVar2 = cVar1 == '\x01' && lVar4 != 0;
  }
  bVar3 = cVar1 != '\x01' && *param_1 == lVar4;
  if ((char)param_1[1] == '\x01') {
    bVar3 = bVar2;
  }
  return bVar3;
}



/* Entry: 103b2a420; end: 103b2a4bb;  */

bool FUN_103b2a420(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x58);
  dVar6 = *(double *)(param_2 + 0x18);
  dVar7 = *(double *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x48);
  if (uVar1 == *(ulong *)(param_2 + 0x58) && *(long *)(param_1 + 0x60) == *(long *)(param_2 + 0x60))
  {
    if (lVar2 != lVar3) {
      return false;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (lVar2 != lVar3) {
      return false;
    }
  }
  return dVar4 < dVar5 != dVar7 <= dVar6;
}



/* Entry: 103b2a4bc; end: 103b2a57b;  */

long FUN_103b2a4bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b2a57c; end: 103b2a62f;  */

undefined8 * FUN_103b2a57c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103b2a630; end: 103b2a6ab;  */

undefined8 * FUN_103b2a630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = param_2[0xc];
  uVar2 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103b2a6ac; end: 103b2a75b;  */

int FUN_103b2a6ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b2a75c; end: 103b2a937;  */

long FUN_103b2a75c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b2a938; end: 103b2a983; -[SCSingleSnapPlayerConfig playerDomain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2a938(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feca00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feca00))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2a984; end: 103b2a993; -[SCSingleSnapPlayerConfig contentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2a984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feca08);
}



/* Entry: 103b2a994; end: 103b2a9a3; -[SCSingleSnapPlayerConfig loadingIndicatorSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2a994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feca10);
}



/* Entry: 103b2a9a4; end: 103b2a9b3; -[SCSingleSnapPlayerConfig loadingIndicatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2a9a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feca18);
}



/* Entry: 103b2a9b4; end: 103b2a9c3; -[SCSingleSnapPlayerConfig enableBuiltInErrorScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2a9b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca20);
}



/* Entry: 103b2a9c4; end: 103b2a9d3; -[SCSingleSnapPlayerConfig enableRetryOnMediaErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2a9c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca28);
}



/* Entry: 103b2a9d4; end: 103b2a9e3; -[SCSingleSnapPlayerConfig flickerFixSspAutoAdvance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2a9d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca30);
}



/* Entry: 103b2a9e4; end: 103b2a9f3; -[SCSingleSnapPlayerConfig playerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2a9e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feca38);
}



/* Entry: 103b2a9f4; end: 103b2aa03; -[SCSingleSnapPlayerConfig disablePauseUponSeekForNeoplayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2a9f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca40);
}



/* Entry: 103b2aa04; end: 103b2aa13; -[SCSingleSnapPlayerConfig useImageContentControllerCallbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca48);
}



/* Entry: 103b2aa14; end: 103b2aa23; -[SCSingleSnapPlayerConfig enableImageWatchTimeFix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca50);
}



/* Entry: 103b2aa24; end: 103b2aa33; -[SCSingleSnapPlayerConfig enableMuteVolumeCacheFix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca58);
}



/* Entry: 103b2aa34; end: 103b2aa43; -[SCSingleSnapPlayerConfig deferFirstFrameTeardownUntilVideoStarts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca60);
}



/* Entry: 103b2aa44; end: 103b2aa53; -[SCSingleSnapPlayerConfig firstFrameRevealHandoffEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca68);
}


