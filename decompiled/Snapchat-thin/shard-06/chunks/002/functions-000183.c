/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10464fdac; end: 1046500b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464fdac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (((undefined8 *)(unaff_x20 + _DAT_11308b350))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b350);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b358))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b358);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b360))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b360);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e4f4850,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b368))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b368);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x50495a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50495a,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  FUN_10464fc90(unaff_x20 + _DAT_113815108,puVar5,0x112d373d8,&UNK_10d9014c0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar3);
  puVar6 = (undefined1 *)0x0;
  if ((int)puVar4 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar7 + 8))(puVar5,lVar3);
    puVar6 = puVar4;
  }
  uVar1 = 0x5941444854524942;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5941444854524942,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar6);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815110))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815110);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209be0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1046500b4; end: 104650103; -[SCAutofillUserInfo encodeWithCoder:] */

void FUN_1046500b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10464fdac(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104650104; end: 104650133;  */

void FUN_104650104(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104650134(param_1);
  return;
}



/* Entry: 104650134; end: 104650833;  */

undefined8 FUN_104650134(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  long extraout_x8;
  long lVar13;
  code *pcVar14;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  lVar10 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar15 - extraout_x12;
  uVar2 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    uStack_c8 = 0;
    lVar10 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar10 = lStack_a8;
    uStack_c8 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_c8 = 0;
      lVar10 = 0;
    }
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  lVar18 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar18 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar18);
    _swift_unknownObjectRelease(lVar18);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    uStack_d0 = 0;
    lVar18 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar18 = lStack_a8;
    uStack_d0 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_d0 = 0;
      lVar18 = 0;
    }
  }
  uVar2 = 0x454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e4f4850,0xe500000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    uStack_d8 = 0;
    lVar4 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_a8;
    uStack_d8 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_d8 = 0;
      lVar4 = 0;
    }
  }
  uVar2 = 0x50495a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50495a,0xe300000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    uStack_e0 = 0;
    lVar5 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uStack_e0 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_e0 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0x5941444854524942;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5941444854524942,0xe800000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar12 = 1;
  }
  else {
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar7 = lVar13;
    _swift_dynamicCast(lVar13,&uStack_80,puVar1 + 8,lVar6,6);
    pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar12 = (uint)lVar7 ^ 1;
  }
  (*pcVar14)(lVar13,uVar12,1,lVar6);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209be0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010464fcd8(&uStack_80,0x112d387f8,&UNK_10d902650);
    uStack_e8 = 0;
    lVar6 = 0;
    uVar2 = uStack_c8;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uStack_e8 = uStack_b0;
    uVar2 = uStack_c8;
    if ((int)puVar3 == 0) {
      uStack_e8 = 0;
      lVar6 = 0;
    }
  }
  uStack_c8 = uVar2;
  if (lVar10 == 0) {
    uVar2 = 0;
    uVar8 = uStack_d0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar10);
    _swift_bridgeObjectRelease(lVar10);
    uVar8 = uStack_d0;
  }
  uStack_d0 = uVar8;
  if (lVar18 == 0) {
    uVar8 = 0;
    uVar9 = uStack_d8;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar18);
    _swift_bridgeObjectRelease(lVar18);
    uVar9 = uStack_d8;
  }
  uStack_d8 = uVar9;
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar19 = uStack_e0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    uVar19 = uStack_e0;
  }
  uStack_e0 = uVar19;
  if (lVar5 == 0) {
    uVar19 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar19,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  FUN_10464fc90(lVar13,puVar15,0x112d373d8,&UNK_10d9014c0);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(lVar10 + -8);
  puVar11 = puVar15;
  (**(code **)(lVar18 + 0x30))(puVar15,1,lVar10);
  puVar17 = (undefined1 *)0x0;
  if ((int)puVar11 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar18 + 8))(puVar15,lVar10);
    puVar17 = puVar11;
  }
  if (lVar6 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = uStack_e8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_e8,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010c00d380(unaff_x20);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(param_1);
  func_0x00010464fcd8(lVar13,0x112d373d8,&UNK_10d9014c0);
  return unaff_x20;
}



/* Entry: 104650834; end: 10465085b; -[SCAutofillUserInfo initWithCoder:] */

void FUN_104650834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104650134();
  return;
}



/* Entry: 10465085c; end: 1046508a3; -[SCAutofillUserInfo description] */

void FUN_10465085c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1046508a4();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046508a4; end: 1046509df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1046508a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = 0;
  FUN_104637d5c();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b350);
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308b358);
  uVar9 = puVar2[1];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar3) = puVar1[1];
  *puVar7 = uVar6;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar3) = uVar11;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar3) = uVar10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b360);
  uVar10 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308b368);
  uVar11 = puVar2[1];
  uVar13 = puVar2[1];
  uVar12 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3) = uVar6;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar13;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar12;
  FUN_10464fc90(unaff_x20 + _DAT_113815108,
                (undefined1 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x20)),0x112d373d8,
                &UNK_10d9014c0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815110);
  uVar6 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  func_0x000104638a78(puVar7);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1046509e0; end: 104650a5b; -[SCAutofillUserInfo init] */

void FUN_1046509e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/AutofillUserInfoWrapper.swift",0x33,2,0x74,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104650a28);
  (*pcVar1)();
}



/* Entry: 104650a5c; end: 104650af7; -[SCAutofillUserInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104650a5c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b350 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b358 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b360 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b368 + 8));
  func_0x00010464fcd8(param_1 + _DAT_113815108,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815110 + 8))
  ;
  return;
}



/* Entry: 104650af8; end: 104650aff;  */

void FUN_104650af8(void)

{
  if (lRam000000011308b398 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e816814);
  return;
}



/* Entry: 104650b00; end: 104650b37;  */

void FUN_104650b00(undefined8 param_1)

{
  if (lRam000000011308b398 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e816814);
  return;
}



/* Entry: 104650b38; end: 104650c5f;  */

void FUN_104650b38(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10dd23058;
  puStack_48 = &UNK_10dd23058;
  puStack_40 = &UNK_10dd23058;
  puStack_38 = &UNK_10dd23058;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd23058;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 104650c60; end: 104650c9f;  */

void FUN_104650c60(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104650ca0; end: 104650cbb; -[SCWebBrowser3pAnalyticsType description] */

void FUN_104650ca0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104650cbc; end: 104650d03; -[SCWebBrowser3pAnalyticsType init] */

void FUN_104650cbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebBrowser3pAnalyticsTypeWrapper.swift",0x3c,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104650d04);
  (*pcVar1)();
}



/* Entry: 104650d04; end: 104650d07; -[SCWebBrowser3pAnalyticsType copyWithZone:] */

void FUN_104650d04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104650d08; end: 104650db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104650d08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0xed000045424f4441;
  if (*(char *)(unaff_x20 + _DAT_11308b3a8) != '\x01') {
    uVar2 = 0xea00000000004147;
  }
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104650db4; end: 104650e03; -[SCWebBrowser3pAnalyticsType encodeWithCoder:] */

void FUN_104650db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104650d08(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104650e04; end: 104650e33;  */

void FUN_104650e04(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104650e34(param_1);
  return;
}



/* Entry: 104650e34; end: 10465107b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104650e34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_b0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_104651044;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_10465103c:
    _objc_release(param_1);
LAB_104651044:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x15ffffffffffbeb9)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xea00000000004147,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11308b3a8) = 0;
    goto LAB_104650f78;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffbabdb0bbbf)) {
    _swift_bridgeObjectRelease(0xed000045424f4441);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xed000045424f4441,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_10465103c;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308b3a8) = 1;
  puVar5 = auStack_a0;
LAB_104650f78:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 10465107c; end: 1046510a3; -[SCWebBrowser3pAnalyticsType initWithCoder:] */

void FUN_10465107c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104650e34();
  return;
}



/* Entry: 1046510a4; end: 1046510ab; +[SCWebBrowser3pAnalyticsType ga] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046510a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308b3a8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046510ac; end: 1046510b3; +[SCWebBrowser3pAnalyticsType adobe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046510ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308b3a8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046510b4; end: 104651103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046510b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308b3a8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104651104; end: 10465111f; -[SCWebBrowser3pAnalyticsType matchGa:adobe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104651104(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11308b3a8) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010465111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 104651120; end: 104651153;  */

void FUN_104651120(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104651154; end: 104651157; -[SCWebBrowser3pAnalyticsType .cxx_destruct] */

void FUN_104651154(void)

{
  return;
}



/* Entry: 104651158; end: 104651177;  */

void FUN_104651158(void)

{
  _objc_opt_self(&PTR_PTR_1129ce388);
  return;
}



/* Entry: 104651178; end: 1046512df;  */

int FUN_104651178(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1046511f4;
        goto LAB_1046511d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046511d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1046511f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1046512e0; end: 10465131f;  */

void FUN_1046512e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b3d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd230b4;
  _swift_getWitnessTable(&UNK_10dd230b4,&UNK_110792e58);
  puRam000000011308b3d8 = puVar1;
  return;
}



/* Entry: 104651320; end: 10465134f;  */

void FUN_104651320(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000104651d90(param_1);
  return;
}



/* Entry: 104651350; end: 1046515e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104651350(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  lVar10 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar9 = 0;
  FUN_104638d5c();
  iVar6 = *(int *)(lVar9 + 0x14);
  lVar10 = 0;
  __s10Foundation3URLVMa();
  pcVar16 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  (*pcVar16)((long)param_1 + (long)iVar6,1,1,lVar10);
  iVar3 = *(int *)(lVar9 + 0x18);
  iVar4 = *(int *)(lVar9 + 0x1c);
  (*pcVar16)((long)param_1 + (long)iVar4,1,1,lVar10);
  iVar7 = *(int *)(lVar9 + 0x30);
  lVar11 = 0;
  FUN_1046305a8();
  pcVar16 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
  (*pcVar16)((long)param_1 + (long)iVar7,1,1,lVar11);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11308b3e0);
  func_0x00010137dd74(param_2 + _DAT_113815118,(long)param_1 + (long)iVar6);
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)(param_2 + _DAT_113815120);
  lVar10 = _DAT_113815128;
  _swift_bridgeObjectRetain();
  func_0x00010137dd74(param_2 + lVar10,(long)param_1 + (long)iVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20)) =
       *(undefined1 *)(param_2 + _DAT_113815130);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24)) =
       *(undefined1 *)(param_2 + _DAT_113815138);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28)) =
       *(undefined1 *)(param_2 + _DAT_113815140);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c)) =
       *(undefined1 *)(param_2 + _DAT_113815148);
  bVar2 = *(long *)(param_2 + _DAT_113815150) == 0;
  if (!bVar2) {
    _objc_retain();
    FUN_1046465c0(puVar13);
  }
  (*pcVar16)(puVar13,bVar2,1,lVar11);
  iVar3 = *(int *)(lVar9 + 0x34);
  FUN_1046520c0(puVar13,(long)param_1 + (long)iVar7);
  if (*(long *)(param_2 + _DAT_113815158) == 0) {
    uVar12 = 0;
    uVar14 = 0;
    uVar17 = 0;
    uVar15 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_2 + _DAT_113815158) + _DAT_1130914b8);
    puVar1 = (undefined8 *)(lVar10 + _DAT_1130914e8);
    uVar12 = *puVar1;
    uVar14 = puVar1[1];
    puVar1 = (undefined8 *)(lVar10 + _DAT_1130914f0);
    uVar17 = *puVar1;
    uVar15 = puVar1[1];
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar15);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  *puVar1 = uVar12;
  puVar1[1] = uVar14;
  puVar1[2] = uVar17;
  puVar1[3] = uVar15;
  puVar1 = (undefined8 *)(param_2 + _DAT_113815160);
  uVar12 = puVar1[1];
  uVar17 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar17;
  uVar5 = *(undefined1 *)(param_2 + _DAT_113815168);
  _swift_bridgeObjectRetain(uVar12);
  _objc_release(param_2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c)) = uVar5;
  return;
}



/* Entry: 1046515e4; end: 1046515f3; -[SCWebBrowserConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046515e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b3e0);
}



/* Entry: 1046515f4; end: 1046515ff; -[SCWebBrowserConfig expectedInitialURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046515f4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104652d1c(param_1 + _DAT_113815118,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104651600; end: 10465165f; -[SCWebBrowserConfig initialRequestHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104651600(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815120);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104651660; end: 10465166b; -[SCWebBrowserConfig destinationUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104651660(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104652d1c(param_1 + _DAT_113815128,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10465166c; end: 10465174b;  */

void FUN_10465166c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104652d1c(param_1 + *param_3,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10465174c; end: 10465175b; -[SCWebBrowserConfig enableSpotlightCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10465174c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815130);
}



/* Entry: 10465175c; end: 10465176b; -[SCWebBrowserConfig dismissButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10465175c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815138);
}



/* Entry: 10465176c; end: 10465177b; -[SCWebBrowserConfig actionMenuButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10465176c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815140);
}



/* Entry: 10465177c; end: 10465178b; -[SCWebBrowserConfig disableFullScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10465177c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815148);
}



/* Entry: 10465178c; end: 10465179b; -[SCWebBrowserConfig adConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465178c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815150));
  return;
}



/* Entry: 10465179c; end: 1046517ab; -[SCWebBrowserConfig engagementStreamMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465179c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815158));
  return;
}



/* Entry: 1046517ac; end: 104651807; -[SCWebBrowserConfig dynamicScriptConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046517ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815160))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815160);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104651808; end: 104651817; -[SCWebBrowserConfig alwaysCheckSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104651808(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815168);
}



/* Entry: 104651818; end: 104651b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104651818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308b3e0) = param_1;
  FUN_104652d1c(param_2,unaff_x20 + _DAT_113815118,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(unaff_x20 + _DAT_113815120) = param_3;
  FUN_104652d1c(param_4,unaff_x20 + _DAT_113815128,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)(unaff_x20 + _DAT_113815130) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113815138) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113815140) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113815148) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113815150) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113815158) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815160);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113815168) = param_13;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000104652d64(param_4,0x112d36580,&UNK_10d9016d0);
  func_0x000104652d64(param_2,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 104651b68; end: 1046520bf; -[SCWebBrowserConfig initWithSource:expectedInitialURL:initialRequestHeaders:destinationUrl:enableSpotlightCta:dismissButtonHidden:actionMenuButtonHidden:disableFullScreen:adConfig:engagementStreamMetadata:dynamicScriptConfig:alwaysCheckSafeBrowsing:] */

void FUN_104651b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
                  ,undefined4 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined1 param_14)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  code *pcVar5;
  long alStack_b0 [4];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar1 = 0x112d36580;
  uStack_78 = param_3;
  uStack_70 = param_1;
  uStack_68 = param_7;
  uStack_64 = param_8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar1 - extraout_x12;
  if (param_4 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4,param_4);
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,param_4 == 0,1);
  if (param_5 == 0) {
    lStack_80 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lStack_80 = param_5;
  }
  if (param_6 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    uVar3 = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1,1,1,lVar2);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar1,param_6);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    uVar3 = 0;
    (*pcVar5)(lVar1,0,1,lVar2);
  }
  if (param_13 == 0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = param_13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_13);
  }
  *(undefined1 *)(lVar4 + -0x10) = param_14;
  *(long *)(lVar4 + -0x20) = lVar2;
  *(undefined8 *)(lVar4 + -0x18) = uVar3;
  *(undefined8 *)(lVar4 + -0x30) = param_11;
  *(undefined8 *)(lVar4 + -0x28) = param_12;
  func_0x0001046519c4(uStack_78,lVar4,lStack_80,lVar1,uStack_68,uStack_64,(undefined1)param_9,
                      param_9._1_1_);
  return;
}



/* Entry: 1046520c0; end: 10465214b;  */

undefined8 FUN_1046520c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10465214c; end: 10465217f; -[SCWebBrowserConfig hash] */

undefined8 FUN_10465214c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104652180();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104652180; end: 1046524d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104652180(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar4 - extraout_x12;
  __ss6HasherVABycfC(auStack_98);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b3e0));
  FUN_104652d1c(unaff_x20 + _DAT_113815118,lVar8,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar2 = lVar8;
  (*pcVar10)(lVar8,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000104652d64(lVar8,0x112d36580,&UNK_10d9016d0);
    lVar8 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    lVar8 = lVar2;
    func_0x00010bfde980(lVar2);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  lVar2 = *(long *)(unaff_x20 + _DAT_113815120);
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar8 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  FUN_104652d1c(unaff_x20 + _DAT_113815128,puVar4,0x112d36580,&UNK_10d9016d0);
  puVar3 = puVar4;
  (*pcVar10)(puVar4,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x000104652d64(puVar4,0x112d36580,&UNK_10d9016d0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(puVar4,lVar1);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815130));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815138));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815140));
  uVar5 = (ulong)*(byte *)(unaff_x20 + _DAT_113815148);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  if (*(long *)(unaff_x20 + _DAT_113815150) == 0) {
    uVar5 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104649064();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(long *)(unaff_x20 + _DAT_113815158) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048368b0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113815160))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113815160);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6);
    uVar7 = uVar6;
    func_0x00010bfde980();
    _objc_release(uVar6);
  }
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815168));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046524d8; end: 104652d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046524d8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar19;
  uint uVar20;
  long unaff_x20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  code *pcVar32;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  uint uStack_b4;
  uint uStack_90;
  long lStack_88;
  long alStack_80 [4];
  
  lVar24 = unaff_x20;
  _swift_getObjectType();
  lVar13 = 0;
  __s10Foundation3URLVMa();
  lVar31 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar28 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
  lVar26 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar26 - extraout_x12;
  lVar17 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar17 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar18 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar23 - extraout_x12_02;
  FUN_104652d1c(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x000104652d64(alStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar14 = &lStack_88;
    _swift_dynamicCast(plVar14,alStack_80,PTR___sypN_11034f1a8 + 8,lVar24,6);
    lVar24 = _DAT_113815118;
    if (((ulong)plVar14 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308b3e0);
      iVar2 = *(int *)(lStack_88 + _DAT_11308b3e0);
      puStack_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      FUN_104652d1c(lStack_88 + _DAT_113815118,lVar27,0x112d36580,&UNK_10d9016d0);
      lVar19 = (long)*(int *)(lVar28 + 0x30);
      FUN_104652d1c(unaff_x20 + lVar24,lVar29,0x112d36580,&UNK_10d9016d0);
      FUN_104652d1c(lVar27,lVar29 + lVar19,0x112d36580,&UNK_10d9016d0);
      pcVar30 = *(code **)(lVar31 + 0x30);
      lVar24 = lVar29;
      (*pcVar30)(lVar29,1,lVar13);
      if ((int)lVar24 == 1) {
        func_0x000104652d64(lVar27,0x112d36580,&UNK_10d9016d0);
        lVar19 = lVar29 + lVar19;
        (*pcVar30)(lVar19,1,lVar13);
        if ((int)lVar19 == 1) {
          func_0x000104652d64(lVar29,0x112d36580,&UNK_10d9016d0);
          uStack_b4 = 1;
        }
        else {
LAB_104652828:
          func_0x000104652d64(lVar29,0x112d7e680,&UNK_10d95e350);
          uStack_b4 = 0;
        }
      }
      else {
        FUN_104652d1c(lVar29,lVar23,0x112d36580,&UNK_10d9016d0);
        lVar24 = lVar29 + lVar19;
        (*pcVar30)(lVar24,1,lVar13);
        puVar12 = puStack_c8;
        if ((int)lVar24 == 1) {
          func_0x000104652d64(lVar27,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar31 + 8))(lVar23,lVar13);
          goto LAB_104652828;
        }
        puVar15 = puStack_c8;
        (**(code **)(lVar31 + 0x20))(puStack_c8,lVar29 + lVar19,lVar13);
        func_0x000101553b98();
        lVar24 = lVar23;
        __sSQ2eeoiySbx_xtFZTj(lVar23,puVar12,lVar13,puVar15);
        uStack_b4 = (uint)lVar24;
        pcVar32 = *(code **)(lVar31 + 8);
        (*pcVar32)(puVar12,lVar13);
        func_0x000104652d64(lVar27,0x112d36580,&UNK_10d9016d0);
        (*pcVar32)(lVar23,lVar13);
        func_0x000104652d64(lVar29,0x112d36580,&UNK_10d9016d0);
      }
      lVar23 = *(long *)(unaff_x20 + _DAT_113815120);
      lVar24 = *(long *)(lStack_88 + _DAT_113815120);
      uVar21 = (uint)(lVar23 == 0 && lVar24 == 0);
      if ((lVar23 != 0) && (lVar24 != 0)) {
        _swift_bridgeObjectRetain(lVar24);
        lVar27 = lVar23;
        _swift_bridgeObjectRetain();
        uVar21 = (uint)lVar27;
        func_0x000101058cd4();
        _swift_bridgeObjectRelease(lVar23);
        _swift_bridgeObjectRelease(lVar24);
      }
      lVar24 = _DAT_113815128;
      FUN_104652d1c(lStack_88 + _DAT_113815128,lVar18,0x112d36580,&UNK_10d9016d0);
      lVar28 = (long)*(int *)(lVar28 + 0x30);
      FUN_104652d1c(unaff_x20 + lVar24,lVar26,0x112d36580,&UNK_10d9016d0);
      FUN_104652d1c(lVar18,lVar26 + lVar28,0x112d36580,&UNK_10d9016d0);
      lVar24 = lVar26;
      (*pcVar30)(lVar26,1,lVar13);
      if ((int)lVar24 == 1) {
        func_0x000104652d64(lVar18,0x112d36580,&UNK_10d9016d0);
        lVar28 = lVar26 + lVar28;
        (*pcVar30)(lVar28,1,lVar13);
        if ((int)lVar28 == 1) {
          func_0x000104652d64(lVar26,0x112d36580,&UNK_10d9016d0);
          uStack_90 = 1;
        }
        else {
LAB_104652a60:
          func_0x000104652d64(lVar26,0x112d7e680,&UNK_10d95e350);
          uStack_90 = 0;
        }
      }
      else {
        FUN_104652d1c(lVar26,lVar17,0x112d36580,&UNK_10d9016d0);
        lVar24 = lVar26 + lVar28;
        (*pcVar30)(lVar24,1,lVar13);
        puVar12 = puStack_c8;
        if ((int)lVar24 == 1) {
          func_0x000104652d64(lVar18,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar31 + 8))(lVar17,lVar13);
          goto LAB_104652a60;
        }
        puVar15 = puStack_c8;
        (**(code **)(lVar31 + 0x20))(puStack_c8,lVar26 + lVar28,lVar13);
        func_0x000101553b98();
        lVar28 = lVar17;
        __sSQ2eeoiySbx_xtFZTj(lVar17,puVar12,lVar13,puVar15);
        uStack_90 = (uint)lVar28;
        pcVar30 = *(code **)(lVar31 + 8);
        (*pcVar30)(puVar12,lVar13);
        func_0x000104652d64(lVar18,0x112d36580,&UNK_10d9016d0);
        (*pcVar30)(lVar17,lVar13);
        func_0x000104652d64(lVar26,0x112d36580,&UNK_10d9016d0);
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_113815130);
      bVar4 = *(byte *)(lStack_88 + _DAT_113815130);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113815138);
      bVar6 = *(byte *)(lStack_88 + _DAT_113815138);
      bVar7 = *(byte *)(unaff_x20 + _DAT_113815140);
      bVar8 = *(byte *)(lStack_88 + _DAT_113815140);
      bVar9 = *(byte *)(unaff_x20 + _DAT_113815148);
      puStack_c8 = (undefined1 *)
                   CONCAT44(puStack_c8._4_4_,(uint)*(byte *)(lStack_88 + _DAT_113815148));
      if (*(long *)(unaff_x20 + _DAT_113815150) == 0) {
        uVar25 = (uint)(*(long *)(lStack_88 + _DAT_113815150) == 0);
      }
      else {
        lVar28 = *(long *)(lStack_88 + _DAT_113815150);
        if (lVar28 == 0) {
          lVar17 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar17 = 0;
          FUN_10464ec90();
        }
        alStack_80[0] = lVar28;
        alStack_80[3] = lVar17;
        _objc_retain(lVar28);
        uVar25 = 0;
        FUN_104649a40();
        func_0x000104652d64(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_113815158) == 0) {
        uVar20 = (uint)(*(long *)(lStack_88 + _DAT_113815158) == 0);
      }
      else {
        lVar28 = *(long *)(lStack_88 + _DAT_113815158);
        if (lVar28 == 0) {
          lVar17 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar17 = 0;
          FUN_104836f30();
        }
        alStack_80[0] = lVar28;
        alStack_80[3] = lVar17;
        _objc_retain(lVar28);
        uVar20 = 0;
        func_0x00010483697c();
        func_0x000104652d64(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      lVar28 = ((long *)(unaff_x20 + _DAT_113815160))[1];
      lVar17 = ((long *)(lStack_88 + _DAT_113815160))[1];
      uVar22 = (uint)(lVar28 == 0 && lVar17 == 0);
      if ((lVar28 != 0) && (lVar17 != 0)) {
        lVar24 = *(long *)(unaff_x20 + _DAT_113815160);
        if ((lVar24 == *(long *)(lStack_88 + _DAT_113815160)) && (lVar28 == lVar17)) {
          uVar22 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar22 = (uint)lVar24;
        }
      }
      bVar10 = *(byte *)(unaff_x20 + _DAT_113815168);
      bVar11 = *(byte *)(lStack_88 + _DAT_113815168);
      _objc_release(lStack_88);
      uVar16 = 0;
      if (((((iVar1 == iVar2 & uVar21 & uStack_b4 & uStack_90) == 1) && (((bVar3 ^ bVar4) & 1) == 0)
           ) && (((bVar5 ^ bVar6) & 1) == 0)) &&
         (((((bVar7 ^ bVar8) & 1) == 0 && (((bVar9 ^ (uint)puStack_c8) & 1) == 0)) &&
          ((((uVar25 ^ 1) & 1) == 0 && (((uVar20 ^ 1) & 1) == 0)))))) {
        uVar16 = uVar22 & ((bVar10 ^ bVar11) ^ 1);
      }
      goto LAB_1046527a4;
    }
  }
  uVar16 = 0;
LAB_1046527a4:
  return uVar16 & 1;
}



/* Entry: 104652d1c; end: 104652da3;  */

undefined8 FUN_104652d1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104652da4; end: 104652e33; -[SCWebBrowserConfig isEqual:] */

uint FUN_104652da4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046524d8(&uStack_40);
  _objc_release(param_1);
  func_0x000104652d64(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104652e34; end: 104652e37; -[SCWebBrowserConfig copyWithZone:] */

void FUN_104652e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104652e38; end: 104652ec3; -[SCWebBrowserConfig description] */

void FUN_104652e38(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104651350(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000104652110(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_104638d5c);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104652ec4; end: 104652f3f; -[SCWebBrowserConfig init] */

void FUN_104652ec4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebBrowserConfigWrapper.swift",0x33,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104652f0c);
  (*pcVar1)();
}



/* Entry: 104652f40; end: 104652fe3; -[SCWebBrowserConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104652f40(long param_1)

{
  func_0x000104652d64(param_1 + _DAT_113815118,0x112d36580,&UNK_10d9016d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815120));
  func_0x000104652d64(param_1 + _DAT_113815128,0x112d36580,&UNK_10d9016d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815150));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815160 + 8))
  ;
  return;
}



/* Entry: 104652fe4; end: 104652feb;  */

void FUN_104652fe4(void)

{
  if (lRam000000011308b410 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8168d4);
  return;
}



/* Entry: 104652fec; end: 104653023;  */

void FUN_104652fec(undefined8 param_1)

{
  if (lRam000000011308b410 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8168d4);
  return;
}



/* Entry: 104653024; end: 1046530cb;  */

void FUN_104653024(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = &UNK_10dd23178;
    puStack_60 = &UNK_10dd23190;
    puStack_58 = &UNK_10dd23190;
    puStack_50 = &UNK_10dd23190;
    puStack_48 = &UNK_10dd23190;
    puStack_40 = &UNK_10dd23178;
    puStack_38 = &UNK_10dd23178;
    puStack_30 = &UNK_10dd231a8;
    puStack_28 = &UNK_10dd23190;
    lStack_68 = lStack_78;
    _swift_updateClassMetadata2(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 1046530cc; end: 1046530db; -[SCWebBrowserEvent timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046530cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b420);
}



/* Entry: 1046530dc; end: 1046530eb; -[SCWebBrowserEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046530dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b428));
  return;
}



/* Entry: 1046530ec; end: 1046530fb; -[SCWebBrowserEvent config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046530ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308b430));
  return;
}



/* Entry: 1046530fc; end: 104653177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046530fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308b420) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308b428) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308b430) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104653178; end: 104653207; -[SCWebBrowserEvent initWithTimestampMs:eventType:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104653178(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11308b420) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308b428) = param_4;
  *(undefined8 *)(param_2 + _DAT_11308b430) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104653208; end: 1046534d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104653208(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  
  lVar1 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_10464151c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308b420) = *param_1;
  lVar1 = 0;
  FUN_10463e554();
  func_0x000104653d24((long)param_1 + (long)*(int *)(lVar1 + 0x14),lVar4,FUN_10464151c);
  FUN_104654d9c();
  *(long *)(unaff_x20 + _DAT_11308b428) = lVar4;
  func_0x000104653d24((long)param_1 + (long)*(int *)(lVar1 + 0x18),puVar3,FUN_1046305a8);
  uVar2 = 0;
  FUN_10464ec90(0);
  _objc_allocWithZone();
  FUN_1046487dc(puVar3,uVar2);
  *(undefined1 **)(unaff_x20 + _DAT_11308b430) = puVar3;
  puVar3 = auStack_60;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  func_0x000104653d68(param_1);
  return puVar3;
}



/* Entry: 1046534d8; end: 104653603; -[SCWebBrowserEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1046534d8(long param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  dVar2 = 0.0;
  if (*(double *)(param_1 + _DAT_11308b420) != 0.0) {
    dVar2 = *(double *)(param_1 + _DAT_11308b420);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  _objc_retain();
  lVar1 = param_1;
  FUN_104653dc4();
  __ss6HasherV8_combineyySuF();
  FUN_104649064();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104653604; end: 104653733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104653604(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar8 = *(double *)(unaff_x20 + _DAT_11308b420);
      dVar9 = *(double *)(lStack_68 + _DAT_11308b420);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308b428);
      uVar3 = 0;
      FUN_10465512c();
      auStack_60[0] = uVar7;
      lStack_48 = uVar3;
      _objc_retain(uVar7);
      puVar4 = auStack_60;
      FUN_104653f38(puVar4);
      func_0x00010006e7f4(auStack_60);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308b430);
      uVar3 = 0;
      FUN_10464ec90();
      auStack_60[0] = uVar7;
      lStack_48 = uVar3;
      _objc_retain(uVar7);
      puVar5 = auStack_60;
      FUN_104649a40(puVar5);
      _objc_release(lStack_68);
      func_0x00010006e7f4(auStack_60);
      if (dVar8 == dVar9) {
        uVar6 = (uint)puVar4 & (uint)puVar5;
        goto LAB_104653718;
      }
    }
  }
  uVar6 = 0;
LAB_104653718:
  return uVar6 & 1;
}



/* Entry: 104653734; end: 1046537b3; -[SCWebBrowserEvent isEqual:] */

uint FUN_104653734(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104653604(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046537b4; end: 1046537b7; -[SCWebBrowserEvent copyWithZone:] */

void FUN_1046537b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046537b8; end: 1046538a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046537b8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308b420);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x59545f544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f544e455645,0xea00000000004550);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4749464e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4749464e4f43,0xe600000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1046538a8; end: 1046538f7; -[SCWebBrowserEvent encodeWithCoder:] */

void FUN_1046538a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046537b8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046538f8; end: 104653927;  */

void FUN_1046538f8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104653928(param_1);
  return;
}



/* Entry: 104653928; end: 104653b6b;  */

undefined8 FUN_104653928(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0x59545f544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f544e455645,0xea00000000004550);
  lVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_104653b10:
    _objc_release(param_2);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar2 = 0;
    FUN_10465512c(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_98;
    _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_98;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x4749464e4f43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4749464e4f43,0xe600000000000000);
      lVar5 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        _objc_release(param_2);
        param_2 = lVar3;
        goto LAB_104653b10;
      }
      uVar2 = 0;
      FUN_10464ec90(0);
      plVar4 = &lStack_98;
      _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c052b20(param_1);
        _objc_release(param_2);
        _objc_release(lStack_98);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_2);
      param_2 = lVar3;
    }
    _objc_release(param_2);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104653b6c; end: 104653b93; -[SCWebBrowserEvent initWithCoder:] */

void FUN_104653b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104653928();
  return;
}



/* Entry: 104653b94; end: 104653c6f; -[SCWebBrowserEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104653b94(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = 0;
  FUN_10463e554();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *puVar4 = *(undefined8 *)(param_1 + _DAT_11308b420);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11308b428);
  iVar1 = *(int *)(lVar3 + 0x14);
  _objc_retain();
  _objc_retain(uVar5);
  FUN_10465433c((undefined1 *)((long)puVar4 + (long)iVar1));
  iVar1 = *(int *)(lVar2 + 0x18);
  _objc_retain(*(undefined8 *)(param_1 + _DAT_11308b430));
  FUN_1046465c0((undefined1 *)((long)puVar4 + (long)iVar1));
  _objc_release(param_1);
  func_0x000104653d68(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104653c70; end: 104653ceb; -[SCWebBrowserEvent init] */

void FUN_104653c70(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebBrowserEventWrapper.swift",0x32,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104653cb8);
  (*pcVar1)();
}



/* Entry: 104653cec; end: 104653da3; -[SCWebBrowserEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104653cec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b428));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308b430));
  return;
}



/* Entry: 104653da4; end: 104653dc3;  */

void FUN_104653da4(void)

{
  _objc_opt_self(&PTR_PTR_1129ce578);
  return;
}



/* Entry: 104653dc4; end: 104653f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104653dc4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308b460));
  func_0x000104655098(unaff_x20 + _DAT_11308b468,puVar3,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000104655058(puVar3,0x112d36580,&UNK_10d9016d0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x00010bfde980(puVar2);
    _objc_release(puVar2);
  }
  __ss6HasherV8_combineyySuF(puVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b470) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308b470);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104653f38; end: 10465433b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104653f38(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(lVar12 - extraout_x8_00);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)puVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  func_0x000104655098(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar8 = 0x112d387f8;
    puVar9 = &UNK_10d902650;
    puVar10 = auStack_80;
LAB_1046541a0:
    func_0x000104655058(puVar10,uVar8,puVar9);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar11,6);
    lVar11 = _DAT_11308b468;
    if (((ulong)plVar6 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_11308b460);
      if (bVar2 == *(byte *)(lStack_88 + _DAT_11308b460)) {
        if (bVar2 < 3) {
          if ((bVar2 != 0) && (bVar2 != 1)) {
            lStack_90 = lStack_88;
            func_0x000104655098(lStack_88 + _DAT_11308b468,lVar14,0x112d36580,&UNK_10d9016d0);
            iVar3 = *(int *)(lVar5 + 0x30);
            func_0x000104655098(unaff_x20 + lVar11,puVar10,0x112d36580,&UNK_10d9016d0);
            func_0x000104655098(lVar14,puVar10 + iVar3,0x112d36580,&UNK_10d9016d0);
            pcVar16 = *(code **)(lVar17 + 0x30);
            puVar7 = puVar10;
            (*pcVar16)(puVar10,1,lVar4);
            if ((int)puVar7 == 1) {
              _objc_release(lStack_90);
              func_0x000104655058(lVar14,0x112d36580,&UNK_10d9016d0);
              puVar7 = puVar10 + iVar3;
              (*pcVar16)(puVar7,1,lVar4);
              if ((int)puVar7 == 1) {
                func_0x000104655058(puVar10,0x112d36580,&UNK_10d9016d0);
                uVar15 = 1;
                goto LAB_1046541b0;
              }
            }
            else {
              func_0x000104655098(puVar10,lVar13,0x112d36580,&UNK_10d9016d0);
              puVar7 = puVar10 + iVar3;
              (*pcVar16)(puVar7,1,lVar4);
              if ((int)puVar7 != 1) {
                lVar5 = lVar12;
                (**(code **)(lVar17 + 0x20))(lVar12,puVar10 + iVar3,lVar4);
                func_0x000101553b98();
                lVar11 = lVar13;
                __sSQ2eeoiySbx_xtFZTj(lVar13,lVar12,lVar4,lVar5);
                uVar15 = (uint)lVar11;
                _objc_release(lStack_90);
                pcVar16 = *(code **)(lVar17 + 8);
                (*pcVar16)(lVar12,lVar4);
                func_0x000104655058(lVar14,0x112d36580,&UNK_10d9016d0);
                (*pcVar16)(lVar13,lVar4);
                func_0x000104655058(puVar10,0x112d36580,&UNK_10d9016d0);
                goto LAB_1046541b0;
              }
              _objc_release(lStack_90);
              func_0x000104655058(lVar14,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar17 + 8))(lVar13,lVar4);
            }
            uVar8 = 0x112d7e680;
            puVar9 = &UNK_10d95e350;
            goto LAB_1046541a0;
          }
        }
        else if ((bVar2 != 3) && (bVar2 == 4)) {
          lVar13 = *(long *)(unaff_x20 + _DAT_11308b470);
          lVar5 = ((long *)(unaff_x20 + _DAT_11308b470))[1];
          lVar11 = *(long *)(lStack_88 + _DAT_11308b470);
          cVar1 = (char)((long *)(lStack_88 + _DAT_11308b470))[1];
          _objc_release();
          if ((char)lVar5 == '\x01') {
            uVar15 = (uint)(cVar1 == '\x01');
          }
          else {
            uVar15 = (uint)(cVar1 != '\x01' && lVar13 == lVar11);
          }
          goto LAB_1046541b0;
        }
        _objc_release();
        uVar15 = 1;
        goto LAB_1046541b0;
      }
      _objc_release();
    }
  }
  uVar15 = 0;
LAB_1046541b0:
  return uVar15 & 1;
}



/* Entry: 10465433c; end: 1046545b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465433c(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0x11308b478;
  func_0x0001000285a8(0x11308b478,&UNK_10dd231d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined8 *)(puVar6 + -extraout_x12);
  lVar3 = 0;
  FUN_10464151c();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(puVar7,1,1,lVar3);
  lVar2 = _DAT_11308b468;
  bVar1 = *(byte *)(param_2 + _DAT_11308b460);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
      uVar5 = 2;
    }
    else if (bVar1 == 1) {
      FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
      uVar5 = 3;
    }
    else {
      FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
      func_0x000104655098(param_2 + lVar2,puVar7,0x112d36580,&UNK_10d9016d0);
      uVar5 = 0;
    }
  }
  else if (bVar1 == 3) {
    FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
    uVar5 = 4;
  }
  else if (bVar1 == 4) {
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308b470) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1046545b8);
      (*pcVar9)();
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_11308b470);
    FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
    *puVar7 = uVar5;
    uVar5 = 1;
  }
  else {
    FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
    uVar5 = 5;
  }
  _swift_storeEnumTagMultiPayload(puVar7,lVar3,uVar5);
  (*pcVar9)(puVar7,0,1,lVar3);
  func_0x000104655098(puVar7,puVar6,0x11308b478,&UNK_10dd231d8);
  puVar4 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 != 1) {
    _objc_release(param_2);
    func_0x0001046550e0(puVar6,param_1);
    FUN_104655058(puVar7,0x11308b478,&UNK_10dd231d8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1046545b4);
  (*pcVar9)();
}



/* Entry: 1046545b8; end: 10465468b;  */

void FUN_1046545b8(void)

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



/* Entry: 10465468c; end: 1046546ab;  */

void FUN_10465468c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1046546ac; end: 104654723; -[SCWebBrowserEventType description] */

void FUN_1046546ac(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10464151c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_10465433c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10463ff60(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104654724; end: 10465476b; -[SCWebBrowserEventType init] */

void FUN_104654724(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebBrowserEventTypeWrapper.swift",0x36,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10465476c);
  (*pcVar1)();
}



/* Entry: 10465476c; end: 10465479f; -[SCWebBrowserEventType hash] */

undefined8 FUN_10465476c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104653dc4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046547a0; end: 10465482f; -[SCWebBrowserEventType isEqual:] */

uint FUN_1046547a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104653f38(&uStack_40);
  _objc_release(param_1);
  FUN_104655058(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104654830; end: 104654833; -[SCWebBrowserEventType copyWithZone:] */

void FUN_104654830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104654834; end: 10465483b; +[SCWebBrowserEventType initWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654834(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = 0;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10465483c; end: 104654843; +[SCWebBrowserEventType initDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465483c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = 1;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104654844; end: 104654967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654844(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = param_3;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104654968; end: 104654ab7; +[SCWebBrowserEventType loadUrlWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654968(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_50 - extraout_x8;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar2,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_3 == 0,1);
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308b460) = 2;
  func_0x000104655098(lVar2,lVar3 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar4 = &lStack_50;
  lStack_50 = lVar3;
  lStack_48 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000104655058(lVar2,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 104654ab8; end: 104654abf; +[SCWebBrowserEventType subsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654ab8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = 3;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104654ac0; end: 104654bdb; +[SCWebBrowserEventType additionalNavigationWithNavigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_50 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = 4;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar3 = &lStack_50;
  lStack_50 = lVar2;
  lStack_48 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104654bdc; end: 104654be3; +[SCWebBrowserEventType adobeAnalyticsPing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654bdc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b460) = 5;
  func_0x000104655098(lVar4,lVar2 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104655058(lVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104654be4; end: 104654c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654be4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308b460);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      (*param_1)();
    }
    else if (bVar1 == 1) {
      (*param_3)();
    }
    else {
      (*param_5)(unaff_x20 + _DAT_11308b468);
    }
  }
  else if (bVar1 == 3) {
    (*param_7)();
  }
  else if (bVar1 == 4) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b470) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104654c9c);
      (*pcVar2)();
    }
    (*param_9)(*(undefined8 *)(unaff_x20 + _DAT_11308b470));
  }
  else {
    (*param_12)();
  }
  return;
}



/* Entry: 104654c9c; end: 104654d37; -[SCWebBrowserEventType matchInitWillBegin:initDidEnd:loadUrl:subsequentNavigation:additionalNavigation:adobeAnalyticsPing:] */

void FUN_104654c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104654be4(0x10465539c,auStack_40,0x1046553c0,auStack_60,0x1046553a8,auStack_80,0x1046553c4,
                auStack_a0,0x1046553b0,auStack_c0,0x1046553c8,auStack_e0);
  _objc_release(param_1);
  return;
}



/* Entry: 104654d38; end: 104654d6b;  */

void FUN_104654d38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104654d6c; end: 104654d9b; -[SCWebBrowserEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104654d6c(long param_1)

{
  FUN_104655058(param_1 + _DAT_11308b468,0x112d36580,&UNK_10d9016d0);
  return;
}


