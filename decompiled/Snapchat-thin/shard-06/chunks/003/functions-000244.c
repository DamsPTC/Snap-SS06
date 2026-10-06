/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047f5888; end: 1047f58d7; -[SCAdLeadGenerationFieldRequest encodeWithCoder:] */

void FUN_1047f5888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f56b0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f58d8; end: 1047f5907;  */

void FUN_1047f58d8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f5908(param_1);
  return;
}



/* Entry: 1047f5908; end: 1047f5d4f;  */

undefined8 FUN_1047f5908(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
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
  iVar2 = (int)&lStack_b0;
  iVar3 = (int)&lStack_b0;
  iVar4 = (int)&lStack_b0;
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
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar5 = 0;
    FUN_1047f4c4c(0);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&lStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar6 = lStack_b0;
    if ((uVar7 & 1) != 0) {
      uVar5 = 0x4445524955514552;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445524955514552,0xe800000000000000);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar5);
      uVar5 = 0x4c4542414c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
      lVar10 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
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
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        lVar9 = 0;
        lVar10 = 0;
      }
      else {
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar9 = lStack_a8;
        lVar10 = lStack_b0;
        if (iVar2 == 0) {
          lVar10 = 0;
          lVar9 = 0;
        }
      }
      uVar5 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20f270);
      lVar11 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar11 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar11);
        _swift_unknownObjectRelease(lVar11);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        lVar11 = 0;
      }
      else {
        uVar5 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar5,6);
        lVar11 = lStack_b0;
        if (iVar3 == 0) {
          lVar11 = 0;
        }
      }
      uVar5 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f290);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar8 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        lVar8 = 0;
      }
      else {
        uVar5 = 0x113090208;
        func_0x0001000285a8(0x113090208,&UNK_10dd35f68);
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar5,6);
        lVar8 = lStack_b0;
        if (iVar4 == 0) {
          lVar8 = 0;
        }
      }
      if (lVar9 == 0) {
        lVar10 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar10,lVar9);
        _swift_bridgeObjectRelease(lVar9);
      }
      if (lVar11 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar11;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar11,PTR___sSSN_11034da80);
        _swift_bridgeObjectRelease(lVar11);
      }
      if (lVar8 == 0) {
        lVar11 = 0;
      }
      else {
        uVar5 = 0;
        FUN_1047fab10(0);
        lVar11 = lVar8;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,uVar5);
        _swift_bridgeObjectRelease(lVar8);
      }
      func_0x00010c01b940();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar11);
      _objc_release(param_1);
      _objc_release(lVar6);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f5d50; end: 1047f5d77; -[SCAdLeadGenerationFieldRequest initWithCoder:] */

void FUN_1047f5d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f5908();
  return;
}



/* Entry: 1047f5d78; end: 1047f5daf; -[SCAdLeadGenerationFieldRequest description] */

void FUN_1047f5d78(void)

{
  undefined1 auStack_58 [72];
  
  _objc_retain();
  FUN_1047f5ed0(auStack_58);
  func_0x00010473fd84(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f5db0; end: 1047f5e2b; -[SCAdLeadGenerationFieldRequest init] */

void FUN_1047f5db0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdLeadGenerationFieldRequestWrapper.swift",0x35,2,0x72,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f5df8);
  (*pcVar1)();
}



/* Entry: 1047f5e2c; end: 1047f5ecf; -[SCAdLeadGenerationFieldRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f5e2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130901e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130901f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130901f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090200));
  return;
}



/* Entry: 1047f5ed0; end: 1047f61db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f5ed0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar11 = *(long *)(param_2 + _DAT_1130901e0);
  uVar14 = *(undefined8 *)(lVar11 + _DAT_1130901a0);
  uVar15 = *(undefined8 *)(lVar11 + _DAT_1130901a8);
  uVar2 = *(undefined8 *)(lVar11 + _DAT_1130901b0);
  uVar5 = ((undefined8 *)(lVar11 + _DAT_1130901b0))[1];
  uVar8 = *(undefined1 *)(param_2 + _DAT_1130901e8);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130901f0);
  uVar6 = ((undefined8 *)(param_2 + _DAT_1130901f0))[1];
  uVar17 = *(undefined8 *)(param_2 + _DAT_1130901f8);
  uVar19 = *(ulong *)(param_2 + _DAT_113090200);
  if (uVar19 == 0) {
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _objc_release(param_2);
    puVar13 = (undefined *)0x0;
  }
  else {
    if (uVar19 >> 0x3e == 0) {
      uVar18 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar18 = uVar19;
      if (-1 < (long)uVar19) {
        uVar18 = uVar19 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
    if (uVar18 == 0) {
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _objc_release(param_2);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar17);
      func_0x000101552980(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1047f61dc);
        (*pcVar9)();
      }
      if ((uVar19 & 0xc000000000000001) == 0) {
        plVar12 = (long *)(uVar19 + 0x20);
        do {
          puVar1 = (undefined8 *)(*plVar12 + _DAT_113090378);
          uVar4 = *puVar1;
          uVar7 = puVar1[1];
          uVar16 = *(undefined8 *)(*plVar12 + _DAT_113090380);
          uVar19 = *(ulong *)(puVar13 + 0x10);
          uVar20 = *(ulong *)(puVar13 + 0x18);
          _swift_bridgeObjectRetain(uVar7);
          if (uVar20 >> 1 <= uVar19) {
            func_0x000101552980(1 < uVar20,uVar19 + 1,1);
          }
          *(ulong *)(puVar13 + 0x10) = uVar19 + 1;
          *(undefined8 *)(puVar13 + uVar19 * 0x18 + 0x20) = uVar4;
          *(undefined8 *)(puVar13 + uVar19 * 0x18 + 0x28) = uVar7;
          *(undefined8 *)(puVar13 + uVar19 * 0x18 + 0x30) = uVar16;
          uVar18 = uVar18 - 1;
          plVar12 = plVar12 + 1;
        } while (uVar18 != 0);
      }
      else {
        uVar20 = 0;
        do {
          uVar10 = uVar20;
          func_0x0001030b6588(uVar20,uVar19);
          uVar4 = *(undefined8 *)(uVar10 + _DAT_113090378);
          uVar7 = ((undefined8 *)(uVar10 + _DAT_113090378))[1];
          uVar16 = *(undefined8 *)(uVar10 + _DAT_113090380);
          _swift_bridgeObjectRetain(uVar7);
          _swift_unknownObjectRelease(uVar10);
          uVar10 = *(ulong *)(puVar13 + 0x10);
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar10) {
            func_0x000101552980(1 < *(ulong *)(puVar13 + 0x18),uVar10 + 1,1);
          }
          uVar20 = uVar20 + 1;
          *(ulong *)(puVar13 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puVar13 + uVar10 * 0x18 + 0x20) = uVar4;
          *(undefined8 *)(puVar13 + uVar10 * 0x18 + 0x28) = uVar7;
          *(undefined8 *)(puVar13 + uVar10 * 0x18 + 0x30) = uVar16;
        } while (uVar18 != uVar20);
      }
      _objc_release(param_2);
    }
  }
  *param_1 = uVar14;
  param_1[1] = uVar15;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = uVar8;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  param_1[7] = uVar17;
  param_1[8] = puVar13;
  return;
}



/* Entry: 1047f61dc; end: 1047f61fb;  */

void FUN_1047f61dc(void)

{
  _objc_opt_self(&PTR_PTR_1129d71d8);
  return;
}



/* Entry: 1047f61fc; end: 1047f620b; -[SCAdMediaEndPageProperties ctaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f61fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090238);
}



/* Entry: 1047f620c; end: 1047f6257; -[SCAdMediaEndPageProperties url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f620c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090240);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090240))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f6258; end: 1047f625b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090238) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090240);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f625c; end: 1047f633b; -[SCAdMediaEndPageProperties initWithCtaType:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f625c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_113090238) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113090240);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f633c; end: 1047f64c3; -[SCAdMediaEndPageProperties hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f633c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113090238));
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090240);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113090240))[1];
  _objc_retain(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1047f64c4; end: 1047f6543; -[SCAdMediaEndPageProperties isEqual:] */

uint FUN_1047f64c4(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047f63e4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f6544; end: 1047f6547; -[SCAdMediaEndPageProperties copyWithZone:] */

void FUN_1047f6544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f6548; end: 1047f661b; -[SCAdMediaEndPageProperties encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x455059545f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f415443,0xe800000000000000);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090240);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(param_1 + _DAT_113090240))[1]);
  uVar2 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047f661c; end: 1047f664b;  */

void FUN_1047f661c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f664c(param_1);
  return;
}



/* Entry: 1047f664c; end: 1047f67c3;  */

undefined8 FUN_1047f664c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0x455059545f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f415443,0xe800000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
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
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c006de0();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f67c4; end: 1047f67eb; -[SCAdMediaEndPageProperties initWithCoder:] */

void FUN_1047f67c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f664c();
  return;
}



/* Entry: 1047f67ec; end: 1047f6807; -[SCAdMediaEndPageProperties description] */

void FUN_1047f67ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f6808; end: 1047f6883; -[SCAdMediaEndPageProperties init] */

void FUN_1047f6808(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaEndPagePropertiesWrapper.swift",0x31,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f6850);
  (*pcVar1)();
}



/* Entry: 1047f6884; end: 1047f6897; -[SCAdMediaEndPageProperties .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090240 + 8))
  ;
  return;
}



/* Entry: 1047f6898; end: 1047f68b7;  */

void FUN_1047f6898(void)

{
  _objc_opt_self(&PTR_PTR_1129d72c8);
  return;
}



/* Entry: 1047f68b8; end: 1047f68bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f68b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090238) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090240);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f68bc; end: 1047f68c7; -[SCAdMediaLeadGeneration advertiserFormDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f68bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090270);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090270))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f68c8; end: 1047f6917; -[SCAdMediaLeadGeneration fieldRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f68c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090278);
  FUN_1047f61dc(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f6918; end: 1047f6923; -[SCAdMediaLeadGeneration privacyPolicyURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090280);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090280))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f6924; end: 1047f696b;  */

void FUN_1047f6924(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f696c; end: 1047f697b; -[SCAdMediaLeadGeneration customLegalDisclaimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f696c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090288));
  return;
}



/* Entry: 1047f697c; end: 1047f698b; -[SCAdMediaLeadGeneration bannerRenderInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f697c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090290));
  return;
}



/* Entry: 1047f698c; end: 1047f699b; -[SCAdMediaLeadGeneration iconRenderInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f698c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090298));
  return;
}



/* Entry: 1047f699c; end: 1047f69ab; -[SCAdMediaLeadGeneration endPageProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f699c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130902a0));
  return;
}



/* Entry: 1047f69ac; end: 1047f69bb; -[SCAdMediaLeadGeneration strategyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f69ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130902a8);
}



/* Entry: 1047f69bc; end: 1047f69cb; -[SCAdMediaLeadGeneration autofillConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f69bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130902b0);
}



/* Entry: 1047f69cc; end: 1047f6a27; -[SCAdMediaLeadGeneration advertiserFormTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f69cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130902b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130902b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f6a28; end: 1047f6c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090270);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090278) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090280);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090288) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113090290) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113090298) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130902a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130902a8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130902b0) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130902b8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f6c70; end: 1047f6d87; -[SCAdMediaLeadGeneration initWithAdvertiserFormDescription:fieldRequests:privacyPolicyURL:customLegalDisclaimer:bannerRenderInfo:iconRenderInfo:endPageProperties:strategyType:autofillConfig:advertiserFormTitle:] */

void FUN_1047f6c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = 0;
  FUN_1047f61dc();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_12 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x0001047f6b4c(param_3,param_2,param_4,param_5,uVar1,param_6,param_7,param_8,param_9,param_10
                      ,param_11,param_12,uVar2);
  return;
}



/* Entry: 1047f6d88; end: 1047f6db7;  */

void FUN_1047f6d88(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f6db8(param_1);
  return;
}



/* Entry: 1047f6db8; end: 1047f72af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f6db8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
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
  
  _swift_getObjectType();
  uVar6 = param_1[1];
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_113090270);
  *puVar8 = *param_1;
  puVar8[1] = uVar6;
  lVar14 = param_1[2];
  lVar15 = *(long *)(lVar14 + 0x10);
  if (lVar15 == 0) {
    _swift_bridgeObjectRetain();
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain();
    func_0x0001046c754c(0,lVar15,0);
    puVar16 = puStack_d0;
    puVar8 = (undefined8 *)(lVar14 + 0x20);
    uVar6 = 0;
    FUN_1047f61dc(0);
    do {
      uStack_b8 = puVar8[1];
      uStack_c0 = *puVar8;
      uStack_a8 = puVar8[3];
      uStack_b0 = puVar8[2];
      uStack_98 = puVar8[5];
      uStack_a0 = puVar8[4];
      uStack_88 = puVar8[7];
      uStack_90 = puVar8[6];
      uStack_80 = puVar8[8];
      _objc_allocWithZone(uVar6);
      FUN_10473fd48(&uStack_c0,&uStack_128);
      puVar7 = &uStack_c0;
      FUN_1047f4f84();
      uVar1 = *(ulong *)(puVar16 + 0x10);
      puStack_d0 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
        func_0x0001046c754c(1 < *(ulong *)(puVar16 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_d0 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_d0 + uVar1 * 8 + 0x20) = puVar7;
      puVar8 = puVar8 + 9;
      lVar15 = lVar15 + -1;
      puVar16 = puStack_d0;
    } while (lVar15 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_113090278) = puStack_d0;
  uStack_c8 = param_1[4];
  puStack_d0 = (undefined *)param_1[3];
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_113090280);
  puVar8[1] = uStack_c8;
  *puVar8 = puStack_d0;
  lVar15 = param_1[6];
  if (lVar15 == 0) {
    _swift_bridgeObjectRetain(uStack_c8);
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar6 = param_1[8];
    uVar2 = param_1[9];
    uStack_118 = param_1[7];
    uStack_128 = param_1[5];
    lStack_120 = lVar15;
    uStack_110 = uVar6;
    uStack_108 = uVar2;
    FUN_1047fa3f8(0);
    _objc_allocWithZone();
    func_0x000100402194(&puStack_d0,&uStack_e0);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar2);
    puVar8 = &uStack_128;
    FUN_1047f98c4();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113090288) = puVar8;
  lVar15 = param_1[0x10];
  if (lVar15 == 1) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar6 = param_1[10];
    uVar3 = param_1[0xb];
    lVar14 = param_1[0xc];
    uVar4 = param_1[0xd];
    uVar2 = param_1[0xe];
    uVar5 = param_1[0xf];
    lVar11 = 0;
    FUN_1047fc144();
    lVar13 = lVar11;
    _objc_allocWithZone();
    plVar9 = (long *)0x0;
    if (lVar14 != 1) {
      lVar12 = 0;
      FUN_1047fcc14();
      lVar10 = lVar12;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_113090438) = uVar6;
      puVar8 = (undefined8 *)(lVar10 + _DAT_113090440);
      *puVar8 = uVar3;
      puVar8[1] = lVar14;
      puVar8 = (undefined8 *)(lVar10 + _DAT_113090448);
      *puVar8 = uVar4;
      puVar8[1] = uVar2;
      puVar16 = PTR_s_init_1125d9248;
      lStack_198 = lVar10;
      lStack_190 = lVar12;
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar2);
      plVar9 = &lStack_198;
      _objc_msgSendSuper2(plVar9,puVar16);
    }
    *(long **)(lVar13 + _DAT_113090400) = plVar9;
    puVar8 = (undefined8 *)(lVar13 + _DAT_113090408);
    *puVar8 = uVar5;
    puVar8[1] = lVar15;
    puVar16 = PTR_s_init_1125d9248;
    lStack_188 = lVar13;
    lStack_180 = lVar11;
    _swift_bridgeObjectRetain(lVar15);
    plVar9 = &lStack_188;
    _objc_msgSendSuper2(plVar9,puVar16);
  }
  *(long **)(unaff_x20 + _DAT_113090290) = plVar9;
  lVar15 = param_1[0x17];
  if (lVar15 == 1) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar6 = param_1[0x11];
    uVar3 = param_1[0x12];
    lVar14 = param_1[0x13];
    uVar4 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar5 = param_1[0x16];
    lVar11 = 0;
    FUN_1047fc144();
    lVar13 = lVar11;
    _objc_allocWithZone();
    plVar9 = (long *)0x0;
    if (lVar14 != 1) {
      lVar12 = 0;
      FUN_1047fcc14();
      lVar10 = lVar12;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_113090438) = uVar6;
      puVar8 = (undefined8 *)(lVar10 + _DAT_113090440);
      *puVar8 = uVar3;
      puVar8[1] = lVar14;
      puVar8 = (undefined8 *)(lVar10 + _DAT_113090448);
      *puVar8 = uVar4;
      puVar8[1] = uVar2;
      puVar16 = PTR_s_init_1125d9248;
      lStack_178 = lVar10;
      lStack_170 = lVar12;
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar2);
      plVar9 = &lStack_178;
      _objc_msgSendSuper2(plVar9,puVar16);
    }
    *(long **)(lVar13 + _DAT_113090400) = plVar9;
    puVar8 = (undefined8 *)(lVar13 + _DAT_113090408);
    *puVar8 = uVar5;
    puVar8[1] = lVar15;
    puVar16 = PTR_s_init_1125d9248;
    lStack_168 = lVar13;
    lStack_160 = lVar11;
    _swift_bridgeObjectRetain(lVar15);
    plVar9 = &lStack_168;
    _objc_msgSendSuper2(plVar9,puVar16);
  }
  *(long **)(unaff_x20 + _DAT_113090298) = plVar9;
  lVar15 = param_1[0x1a];
  if (lVar15 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar6 = param_1[0x18];
    uVar2 = param_1[0x19];
    lVar13 = 0;
    FUN_1047f6898();
    lVar14 = lVar13;
    _objc_allocWithZone();
    *(undefined8 *)(lVar14 + _DAT_113090238) = uVar6;
    puVar8 = (undefined8 *)(lVar14 + _DAT_113090240);
    *puVar8 = uVar2;
    puVar8[1] = lVar15;
    puVar16 = PTR_s_init_1125d9248;
    lStack_158 = lVar14;
    lStack_150 = lVar13;
    _swift_bridgeObjectRetain(lVar15);
    plVar9 = &lStack_158;
    _objc_msgSendSuper2(plVar9,puVar16);
  }
  *(long **)(unaff_x20 + _DAT_1130902a0) = plVar9;
  uVar6 = param_1[0x1c];
  *(undefined8 *)(unaff_x20 + _DAT_1130902a8) = param_1[0x1b];
  *(undefined8 *)(unaff_x20 + _DAT_1130902b0) = uVar6;
  uStack_d8 = param_1[0x1e];
  uStack_e0 = param_1[0x1d];
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130902b8);
  puVar8[1] = uStack_d8;
  *puVar8 = uStack_e0;
  func_0x0001047f87d0(&uStack_e0,auStack_138,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001017b6878(param_1);
  _objc_msgSendSuper2(&stack0xfffffffffffffeb8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f72b0; end: 1047f72e3; -[SCAdMediaLeadGeneration hash] */

undefined8 FUN_1047f72b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f72e4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f72e4; end: 1047f758f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f72e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090270);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090270))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090278);
  uVar1 = 0;
  FUN_1047f61dc(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090280);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090280))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_113090288) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047f948c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_113090290) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_113090298) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_1130902a0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + _DAT_113090238));
    uVar1 = *(undefined8 *)(lVar3 + _DAT_113090240);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar3 + _DAT_113090240))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130902a8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130902b0));
  if (((undefined8 *)(unaff_x20 + _DAT_1130902b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130902b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f7590; end: 1047f7947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f7590(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uStack_94;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047f87d0(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
    return 0;
  }
  plVar10 = &lStack_88;
  _swift_dynamicCast(plVar10,alStack_80,PTR___sypN_11034f1a8 + 8,lVar16,6);
  if (((ulong)plVar10 & 1) == 0) {
    return 0;
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_113090270);
  if (lVar16 == *(long *)(lStack_88 + _DAT_113090270) &&
      ((long *)(unaff_x20 + _DAT_113090270))[1] == ((long *)(lStack_88 + _DAT_113090270))[1]) {
    uStack_8c = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_8c = (uint)lVar16;
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_113090278);
  uVar15 = *(undefined8 *)(lStack_88 + _DAT_113090278);
  _swift_bridgeObjectRetain(uVar15);
  func_0x00010470d378(uVar13,uVar15);
  _swift_bridgeObjectRelease(uVar15);
  lVar16 = *(long *)(unaff_x20 + _DAT_113090280);
  if (lVar16 == *(long *)(lStack_88 + _DAT_113090280) &&
      ((long *)(unaff_x20 + _DAT_113090280))[1] == ((long *)(lStack_88 + _DAT_113090280))[1]) {
    uStack_94 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_94 = (uint)lVar16;
  }
  if (*(long *)(unaff_x20 + _DAT_113090288) == 0) {
    uVar6 = (uint)(*(long *)(lStack_88 + _DAT_113090288) == 0);
  }
  else {
    lVar16 = *(long *)(lStack_88 + _DAT_113090288);
    if (lVar16 == 0) {
      lVar11 = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
    }
    else {
      lVar11 = 0;
      FUN_1047fa3f8();
    }
    alStack_80[0] = lVar16;
    alStack_80[3] = lVar11;
    _objc_retain(lVar16);
    plVar10 = alStack_80;
    FUN_1047f9570(plVar10);
    uVar6 = (uint)plVar10;
    func_0x00010006e7f4(alStack_80);
  }
  if (*(long *)(unaff_x20 + _DAT_113090290) == 0) {
    uVar7 = (uint)(*(long *)(lStack_88 + _DAT_113090290) == 0);
  }
  else {
    lVar16 = *(long *)(lStack_88 + _DAT_113090290);
    if (lVar16 == 0) {
      lVar11 = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
    }
    else {
      lVar11 = 0;
      FUN_1047fc144();
    }
    alStack_80[0] = lVar16;
    alStack_80[3] = lVar11;
    _objc_retain(lVar16);
    plVar10 = alStack_80;
    func_0x0001047fb744(plVar10);
    uVar7 = (uint)plVar10;
    func_0x00010006e7f4(alStack_80);
  }
  if (*(long *)(unaff_x20 + _DAT_113090298) == 0) {
    uVar8 = (uint)(*(long *)(lStack_88 + _DAT_113090298) == 0);
  }
  else {
    lVar16 = *(long *)(lStack_88 + _DAT_113090298);
    if (lVar16 == 0) {
      lVar11 = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
    }
    else {
      lVar11 = 0;
      FUN_1047fc144();
    }
    alStack_80[0] = lVar16;
    alStack_80[3] = lVar11;
    _objc_retain(lVar16);
    plVar10 = alStack_80;
    func_0x0001047fb744(plVar10);
    uVar8 = (uint)plVar10;
    func_0x00010006e7f4(alStack_80);
  }
  if (*(long *)(unaff_x20 + _DAT_1130902a0) == 0) {
    uVar9 = (uint)(*(long *)(lStack_88 + _DAT_1130902a0) == 0);
  }
  else {
    lVar16 = *(long *)(lStack_88 + _DAT_1130902a0);
    if (lVar16 == 0) {
      lVar11 = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
    }
    else {
      lVar11 = 0;
      FUN_1047f6898();
    }
    alStack_80[0] = lVar16;
    alStack_80[3] = lVar11;
    _objc_retain(lVar16);
    plVar10 = alStack_80;
    func_0x0001047f63e4(plVar10);
    uVar9 = (uint)plVar10;
    func_0x00010006e7f4(alStack_80);
  }
  iVar2 = *(int *)(unaff_x20 + _DAT_1130902a8);
  iVar3 = *(int *)(lStack_88 + _DAT_1130902a8);
  iVar4 = *(int *)(unaff_x20 + _DAT_1130902b0);
  iVar5 = *(int *)(lStack_88 + _DAT_1130902b0);
  lVar16 = ((long *)(unaff_x20 + _DAT_1130902b8))[1];
  lVar11 = ((long *)(lStack_88 + _DAT_1130902b8))[1];
  if (lVar16 == 0) {
    _swift_bridgeObjectRetain(lVar11);
    _objc_release(lStack_88);
    if (lVar11 != 0) {
      _swift_bridgeObjectRelease(lVar11);
      uVar14 = 0;
      goto LAB_1047f78f0;
    }
LAB_1047f78d0:
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
    if (lVar11 != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_1130902b8);
      if ((lVar12 == *(long *)(lStack_88 + _DAT_1130902b8)) && (lVar16 == lVar11)) {
        _objc_release(lStack_88);
        goto LAB_1047f78d0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar14 = (uint)lVar12;
    }
    _objc_release(lStack_88);
  }
LAB_1047f78f0:
  uVar1 = 0;
  if (iVar4 == iVar5) {
    uVar1 = uStack_8c & (uint)uVar13 & uStack_94 & uVar6 & uVar7 &
            uVar8 & uVar9 & (uint)(iVar2 == iVar3);
  }
  return uVar1 & uVar14;
}



/* Entry: 1047f7948; end: 1047f79c7; -[SCAdMediaLeadGeneration isEqual:] */

uint FUN_1047f7948(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f7590(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f79c8; end: 1047f79cb; -[SCAdMediaLeadGeneration copyWithZone:] */

void FUN_1047f79c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f79cc; end: 1047f7d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f79cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090270);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090270))[1]);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f330);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090278);
  uVar2 = 0;
  FUN_1047f61dc(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x45525f444c454946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f444c454946,0xee00535453455551);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090280);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090280))[1]);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f350);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20f370);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f390);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ed70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20f3b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0x5947455441525453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5947455441525453,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x4c4c49464f545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c49464f545541,0xef4749464e4f435f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130902b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130902b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20f3d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047f7d1c; end: 1047f7d6b; -[SCAdMediaLeadGeneration encodeWithCoder:] */

void FUN_1047f7d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f79cc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f7d6c; end: 1047f7d9b;  */

void FUN_1047f7d6c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f7d9c(param_1);
  return;
}



/* Entry: 1047f7d9c; end: 1047f8597;  */

undefined8 FUN_1047f7d9c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  long lVar12;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar4 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f330);
  uVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_b8;
    uVar4 = uStack_c0;
    if (((ulong)puVar6 & 1) == 0) {
LAB_1047f8400:
      _objc_release(param_1);
      goto LAB_1047f8408;
    }
    uVar7 = 0x45525f444c454946;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f444c454946,0xee00535453455551);
    uVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar5 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
      _swift_unknownObjectRelease(uVar5);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      uVar7 = 0x1130902c0;
      func_0x0001000285a8(0x1130902c0,&UNK_10dd35fc0);
      puVar6 = &uStack_c0;
      _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar7,6);
      uVar7 = uStack_c0;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar8 = 0xd000000000000012;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f350)
        ;
        uVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (uVar5 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
          _swift_unknownObjectRelease(uVar5);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar7);
          goto LAB_1047f8044;
        }
        puVar6 = &uStack_c0;
        _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar3 = lStack_b8;
        uVar8 = uStack_c0;
        if (((ulong)puVar6 & 1) != 0) {
          uVar9 = 0xd000000000000017;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000017,0x800000010f20f370);
          uVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (uVar5 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
            _swift_unknownObjectRelease(uVar5);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uStack_d0 = 0;
          }
          else {
            uVar9 = 0;
            FUN_1047fa3f8(0);
            puVar6 = &uStack_c0;
            _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar9,6);
            uStack_d0 = uStack_c0;
            if ((int)puVar6 == 0) {
              uStack_d0 = 0;
            }
          }
          uVar9 = 0xd000000000000012;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000012,0x800000010f20f390);
          uVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (uVar5 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
            _swift_unknownObjectRelease(uVar5);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uStack_d8 = 0;
          }
          else {
            uVar9 = 0;
            FUN_1047fc144(0);
            puVar6 = &uStack_c0;
            _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar9,6);
            uStack_d8 = uStack_c0;
            if ((int)puVar6 == 0) {
              uStack_d8 = 0;
            }
          }
          uVar9 = 0xd000000000000010;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000010,0x800000010f20ed70);
          uVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (uVar5 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
            _swift_unknownObjectRelease(uVar5);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uStack_e0 = 0;
          }
          else {
            uVar9 = 0;
            FUN_1047fc144(0);
            puVar6 = &uStack_c0;
            _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar9,6);
            uStack_e0 = uStack_c0;
            if ((int)puVar6 == 0) {
              uStack_e0 = 0;
            }
          }
          uVar9 = 0xd000000000000013;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000013,0x800000010f20f3b0);
          uVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (uVar5 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
            _swift_unknownObjectRelease(uVar5);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            FUN_1047f6898(0);
            puVar6 = &uStack_c0;
            _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar9,6);
            uVar9 = uStack_c0;
            if ((int)puVar6 == 0) {
              uVar9 = 0;
            }
          }
          uVar10 = 0x5947455441525453;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x5947455441525453,0xed0000455059545f);
          uVar5 = param_1;
          func_0x00010bf66f40();
          _objc_release(uVar10);
          if (uVar5 < 3) {
            uVar10 = 0x4c4c49464f545541;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x4c4c49464f545541,0xef4749464e4f435f);
            uVar5 = param_1;
            func_0x00010bf66f40();
            _objc_release(uVar10);
            if (uVar5 < 3) {
              uVar10 = 0xd000000000000015;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000015,0x800000010f20f3d0);
              uVar5 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              if (uVar5 == 0) {
                uStack_a8 = 0;
                uStack_b0 = 0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
                _swift_unknownObjectRelease(uVar5);
              }
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              lStack_78 = lStack_98;
              uStack_80 = uStack_a0;
              if (lStack_98 == 0) {
                func_0x00010006e7f4(&uStack_90);
              }
              else {
                puVar6 = &uStack_c0;
                _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
                if ((int)puVar6 != 0) {
                  uStack_f8 = uStack_c0;
                  lVar12 = lStack_b8;
                  goto LAB_1047f849c;
                }
              }
              uStack_f8 = 0;
              lVar12 = 0;
LAB_1047f849c:
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar2);
              _swift_bridgeObjectRelease(lVar2);
              uVar11 = 0;
              FUN_1047f61dc(0);
              uVar10 = uVar7;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar7,uVar11);
              _swift_bridgeObjectRelease(uVar7);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar3);
              _swift_bridgeObjectRelease(lVar3);
              if (lVar12 == 0) {
                uStack_f8 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f8,lVar12);
                _swift_bridgeObjectRelease(lVar12);
              }
              func_0x00010bff27a0();
              _objc_release(uVar4);
              _objc_release(uVar10);
              _objc_release(uVar8);
              _objc_release(uStack_f8);
              _objc_release(param_1);
              _objc_release(uStack_d0);
              _objc_release(uStack_d8);
              _objc_release(uStack_e0);
              _objc_release(uVar9);
              return unaff_x20;
            }
          }
          _objc_release(uStack_d0);
          _objc_release(uStack_d8);
          _objc_release(uStack_e0);
          _objc_release(uVar9);
          _swift_bridgeObjectRelease(lVar2);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(lVar3);
          goto LAB_1047f8400;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar7);
      }
      _swift_bridgeObjectRelease(lVar2);
      goto LAB_1047f8408;
    }
    _objc_release(param_1);
LAB_1047f8044:
    _swift_bridgeObjectRelease(lVar2);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_1047f8408:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f8598; end: 1047f85bf; -[SCAdMediaLeadGeneration initWithCoder:] */

void FUN_1047f8598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f7d9c();
  return;
}



/* Entry: 1047f85c0; end: 1047f860b; -[SCAdMediaLeadGeneration description] */

void FUN_1047f85c0(undefined8 param_1)

{
  undefined1 auStack_118 [248];
  
  _objc_retain();
  FUN_1047f8818(auStack_118);
  _objc_release(param_1);
  func_0x0001017b6878(auStack_118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f860c; end: 1047f86af;  */

void FUN_1047f860c(undefined8 *param_1,undefined8 param_2)

{
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
  
  FUN_1047f8818(&uStack_128);
  _objc_release(param_2);
  param_1[0x19] = uStack_60;
  param_1[0x18] = uStack_68;
  param_1[0x1b] = uStack_50;
  param_1[0x1a] = uStack_58;
  param_1[0x1d] = uStack_40;
  param_1[0x1c] = uStack_48;
  param_1[0x1e] = uStack_38;
  param_1[0x11] = uStack_a0;
  param_1[0x10] = uStack_a8;
  param_1[0x13] = uStack_90;
  param_1[0x12] = uStack_98;
  param_1[0x15] = uStack_80;
  param_1[0x14] = uStack_88;
  param_1[0x17] = uStack_70;
  param_1[0x16] = uStack_78;
  param_1[9] = uStack_e0;
  param_1[8] = uStack_e8;
  param_1[0xb] = uStack_d0;
  param_1[10] = uStack_d8;
  param_1[0xd] = uStack_c0;
  param_1[0xc] = uStack_c8;
  param_1[0xf] = uStack_b0;
  param_1[0xe] = uStack_b8;
  param_1[1] = uStack_120;
  *param_1 = uStack_128;
  param_1[3] = uStack_110;
  param_1[2] = uStack_118;
  param_1[5] = uStack_100;
  param_1[4] = uStack_108;
  param_1[7] = uStack_f0;
  param_1[6] = uStack_f8;
  return;
}



/* Entry: 1047f86b0; end: 1047f872b; -[SCAdMediaLeadGeneration init] */

void FUN_1047f86b0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaLeadGenerationWrapper.swift",0x2e,2,0xa1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f86f8);
  (*pcVar1)();
}



/* Entry: 1047f872c; end: 1047f8817; -[SCAdMediaLeadGeneration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f872c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090270 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090278));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090280 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090288));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090290));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090298));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130902a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130902b8 + 8))
  ;
  return;
}



/* Entry: 1047f8818; end: 1047f8d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f8818(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_140;
  undefined8 uStack_130;
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
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_113090270);
  uVar14 = ((undefined8 *)(param_2 + _DAT_113090270))[1];
  uVar22 = *(ulong *)(param_2 + _DAT_113090278);
  if (uVar22 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = uVar22 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar22) {
      uVar24 = uVar22;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar24 == 0) {
    _swift_bridgeObjectRetain(uVar14);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(uVar14);
    func_0x0001046c75b4(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1047f8b38);
      (*pcVar11)();
    }
    uVar21 = 0;
    do {
      puVar20 = puStack_a0;
      if ((uVar22 & 0xc000000000000001) == 0) {
        _objc_retain(*(undefined8 *)(uVar22 + uVar21 * 8 + 0x20));
      }
      else {
        func_0x0001030b68c0(uVar21,uVar22);
      }
      FUN_1047f5ed0(&uStack_120);
      uVar12 = *(ulong *)(puVar20 + 0x10);
      puStack_a0 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar12) {
        func_0x0001046c75b4(1 < *(ulong *)(puVar20 + 0x18),uVar12 + 1,1);
      }
      uVar21 = uVar21 + 1;
      *(ulong *)(puStack_a0 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x28) = uStack_118;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x20) = uStack_120;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x60) = uStack_e0;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x48) = uStack_f8;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x40) = uStack_100;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x58) = uStack_e8;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x50) = uStack_f0;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x38) = uStack_108;
      *(undefined8 *)(puStack_a0 + uVar12 * 0x48 + 0x30) = uStack_110;
      puVar20 = puStack_a0;
    } while (uVar24 != uVar21);
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_113090280);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113090280))[1];
  lVar18 = *(long *)(param_2 + _DAT_113090288);
  if (lVar18 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uVar27 = 0;
    uVar26 = 0;
    puVar25 = (undefined *)0x0;
  }
  else {
    uVar26 = *(undefined8 *)(lVar18 + _DAT_113090328);
    uStack_178 = ((undefined8 *)(lVar18 + _DAT_113090328))[1];
    uVar27 = *(undefined8 *)(lVar18 + _DAT_113090330);
    uStack_180 = ((undefined8 *)(lVar18 + _DAT_113090330))[1];
    uVar22 = *(ulong *)(lVar18 + _DAT_113090338);
    if (uVar22 >> 0x3e == 0) {
      uVar24 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar24 = uVar22 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar22) {
        uVar24 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar24 == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uStack_178);
      _swift_bridgeObjectRetain(uStack_180);
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_a0 = puVar25;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uStack_178);
      _swift_bridgeObjectRetain(uStack_180);
      _objc_retain();
      func_0x00010155294c(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1047f8d54);
        (*pcVar11)();
      }
      uVar21 = 0;
      do {
        puVar25 = puStack_a0;
        if ((uVar22 & 0xc000000000000001) == 0) {
          uVar12 = *(ulong *)(uVar22 + uVar21 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar12 = uVar21;
          func_0x0001030b6724();
        }
        uVar19 = *(undefined8 *)(uVar12 + _DAT_1130902f0);
        uVar32 = ((undefined8 *)(uVar12 + _DAT_1130902f0))[1];
        uVar5 = *(undefined1 *)(uVar12 + _DAT_1130902f8);
        _swift_bridgeObjectRetain(uVar32);
        _objc_release(uVar12);
        uVar12 = *(ulong *)(puVar25 + 0x10);
        puStack_a0 = puVar25;
        if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar12) {
          func_0x00010155294c(1 < *(ulong *)(puVar25 + 0x18),uVar12 + 1,1);
        }
        puVar25 = puStack_a0;
        uVar21 = uVar21 + 1;
        *(ulong *)(puStack_a0 + 0x10) = uVar12 + 1;
        *(undefined8 *)(puStack_a0 + uVar12 * 0x18 + 0x20) = uVar19;
        *(undefined8 *)(puStack_a0 + uVar12 * 0x18 + 0x28) = uVar32;
        puStack_a0[uVar12 * 0x18 + 0x30] = uVar5;
      } while (uVar24 != uVar21);
      _objc_release(lVar18);
    }
  }
  if (*(long *)(param_2 + _DAT_113090290) == 0) {
    uVar19 = 1;
    uStack_1c0 = 0;
    uStack_1b0 = 0;
    uStack_140 = 0;
    uStack_130 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0;
  }
  else {
    FUN_1047fc030(&uStack_d8);
    auVar7._8_8_ = uStack_c0;
    auVar7._0_8_ = uStack_c8;
    auVar30._8_8_ = uStack_c0;
    auVar30._0_8_ = uStack_c8;
    auVar6._8_8_ = uStack_d0;
    auVar6._0_8_ = uStack_d8;
    auVar29._8_8_ = uStack_d0;
    auVar29._0_8_ = uStack_d8;
    uStack_140 = uStack_d8;
    uStack_130 = auStack_b8._0_8_;
    auVar28 = NEON_ext(auStack_b8,auStack_b8,8,1);
    uStack_1a0 = auVar28._0_8_;
    uStack_190 = uStack_c8;
    auVar30 = NEON_ext(auVar30,auVar7,8,1);
    auVar29 = NEON_ext(auVar29,auVar6,8,1);
    uStack_1c0 = auVar29._0_8_;
    uStack_1b0 = auVar30._0_8_;
    uVar19 = uStack_a8;
  }
  if (*(long *)(param_2 + _DAT_113090298) == 0) {
    puVar31 = (undefined *)0x0;
    uStack_70 = 1;
    uVar34 = 0;
    uStack_90 = 0;
    uVar33 = 0;
    auStack_80._0_8_ = 0;
    uVar32 = 0;
  }
  else {
    FUN_1047fc030(&puStack_a0);
    auVar10._8_8_ = uStack_88;
    auVar10._0_8_ = uStack_90;
    auVar9._8_8_ = uStack_88;
    auVar9._0_8_ = uStack_90;
    auVar8._8_8_ = uStack_98;
    auVar8._0_8_ = puStack_a0;
    auVar28._8_8_ = uStack_98;
    auVar28._0_8_ = puStack_a0;
    auVar29 = NEON_ext(auStack_80,auStack_80,8,1);
    uVar32 = auVar29._0_8_;
    auVar29 = NEON_ext(auVar9,auVar10,8,1);
    uVar33 = auVar29._0_8_;
    auVar29 = NEON_ext(auVar28,auVar8,8,1);
    uVar34 = auVar29._0_8_;
    puVar31 = puStack_a0;
  }
  lVar18 = *(long *)(param_2 + _DAT_1130902a0);
  if (lVar18 == 0) {
    uVar17 = 0;
    uVar23 = 0;
    uVar13 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar18 + _DAT_113090238);
    uVar23 = *(undefined8 *)(lVar18 + _DAT_113090240);
    uVar13 = ((undefined8 *)(lVar18 + _DAT_113090240))[1];
    _swift_bridgeObjectRetain();
  }
  uVar15 = *(undefined8 *)(param_2 + _DAT_1130902a8);
  uVar16 = *(undefined8 *)(param_2 + _DAT_1130902b0);
  puVar1 = (undefined8 *)(param_2 + _DAT_1130902b8);
  *param_1 = uVar2;
  param_1[1] = uVar14;
  param_1[2] = puVar20;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar26;
  param_1[6] = uStack_178;
  param_1[7] = uVar27;
  param_1[8] = uStack_180;
  param_1[9] = puVar25;
  param_1[0xb] = uStack_1c0;
  param_1[10] = uStack_140;
  param_1[0xd] = uStack_1b0;
  param_1[0xc] = uStack_190;
  param_1[0xf] = uStack_1a0;
  param_1[0xe] = uStack_130;
  param_1[0x10] = uVar19;
  param_1[0x12] = uVar34;
  param_1[0x11] = puVar31;
  param_1[0x14] = uVar33;
  param_1[0x13] = uStack_90;
  param_1[0x16] = uVar32;
  param_1[0x15] = auStack_80._0_8_;
  param_1[0x17] = uStack_70;
  param_1[0x18] = uVar17;
  param_1[0x19] = uVar23;
  param_1[0x1a] = uVar13;
  param_1[0x1b] = uVar15;
  param_1[0x1c] = uVar16;
  uVar14 = puVar1[1];
  uVar2 = *puVar1;
  param_1[0x1e] = puVar1[1];
  param_1[0x1d] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar14);
  return;
}



/* Entry: 1047f8d54; end: 1047f8d73;  */

void FUN_1047f8d54(void)

{
  _objc_opt_self(&PTR_PTR_1129d73a0);
  return;
}



/* Entry: 1047f8d74; end: 1047f8dbf; -[SCAdMediaLeadGenerationLegalConsentCheckbox label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f8d74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130902f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130902f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f8dc0; end: 1047f8dd3; -[SCAdMediaLeadGenerationLegalConsentCheckbox required] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047f8dc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130902f8);
}



/* Entry: 1047f8dd4; end: 1047f8eb3; -[SCAdMediaLeadGenerationLegalConsentCheckbox initWithLabel:required:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f8dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130902f0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_1130902f8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f8eb4; end: 1047f8ee7; -[SCAdMediaLeadGenerationLegalConsentCheckbox hash] */

undefined8 FUN_1047f8eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f8ee8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f8ee8; end: 1047f904f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f8ee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130902f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130902f0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130902f8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f9050; end: 1047f90cf; -[SCAdMediaLeadGenerationLegalConsentCheckbox isEqual:] */

uint FUN_1047f9050(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047f8f6c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f90d0; end: 1047f90d3; -[SCAdMediaLeadGenerationLegalConsentCheckbox copyWithZone:] */

void FUN_1047f90d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f90d4; end: 1047f91b3; -[SCAdMediaLeadGenerationLegalConsentCheckbox encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f90d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130902f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130902f0))[1];
  _objc_retain(param_3);
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4445524955514552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445524955514552,0xe800000000000000);
  func_0x00010bf92da0(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047f91b4; end: 1047f91e3;  */

void FUN_1047f91b4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f91e4(param_1);
  return;
}



/* Entry: 1047f91e4; end: 1047f9363;  */

undefined8 FUN_1047f91e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
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
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = 0x4445524955514552;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445524955514552,0xe800000000000000);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c021480();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f9364; end: 1047f938b; -[SCAdMediaLeadGenerationLegalConsentCheckbox initWithCoder:] */

void FUN_1047f9364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f91e4();
  return;
}



/* Entry: 1047f938c; end: 1047f93a7; -[SCAdMediaLeadGenerationLegalConsentCheckbox description] */

void FUN_1047f938c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f93a8; end: 1047f9423; -[SCAdMediaLeadGenerationLegalConsentCheckbox init] */

void FUN_1047f93a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaLeadGenerationLegalConsentCheckboxWrapper.swift",0x42,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f93f0);
  (*pcVar1)();
}



/* Entry: 1047f9424; end: 1047f9437; -[SCAdMediaLeadGenerationLegalConsentCheckbox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130902f0 + 8))
  ;
  return;
}



/* Entry: 1047f9438; end: 1047f9457;  */

void FUN_1047f9438(void)

{
  _objc_opt_self(&PTR_PTR_1129d74b8);
  return;
}



/* Entry: 1047f9458; end: 1047f945b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9458(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130902f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130902f8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f945c; end: 1047f948b;  */

void FUN_1047f945c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f98c4(param_1);
  return;
}



/* Entry: 1047f948c; end: 1047f956f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f948c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090328);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090328))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090330);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090330))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090338);
  uVar1 = 0;
  FUN_1047f9438(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f9570; end: 1047f96c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f9570(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    FUN_1047fa3b8(auStack_60,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar5 = *(ulong *)(unaff_x20 + _DAT_113090328);
      if (uVar5 == *(ulong *)(lStack_68 + _DAT_113090328) &&
          ((ulong *)(unaff_x20 + _DAT_113090328))[1] == ((ulong *)(lStack_68 + _DAT_113090328))[1])
      {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_113090330);
      if (lVar1 == *(long *)(lStack_68 + _DAT_113090330) &&
          ((long *)(unaff_x20 + _DAT_113090330))[1] == ((long *)(lStack_68 + _DAT_113090330))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar1;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113090338);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_113090338);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00010470d364(uVar4,uVar6);
      _objc_release(lStack_68);
      _swift_bridgeObjectRelease(uVar6);
      if ((uVar5 & 1) != 0) {
        uVar3 = uVar3 & (uint)uVar4;
        goto LAB_1047f96a8;
      }
    }
  }
  uVar3 = 0;
LAB_1047f96a8:
  return uVar3 & 1;
}



/* Entry: 1047f96c4; end: 1047f96cf; -[SCAdMediaLeadGenerationLegalDisclaimer title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f96c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090328);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090328))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f96d0; end: 1047f96db; -[SCAdMediaLeadGenerationLegalDisclaimer body] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f96d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090330);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090330))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f96dc; end: 1047f9723;  */

void FUN_1047f96dc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f9724; end: 1047f9773; -[SCAdMediaLeadGenerationLegalDisclaimer consentCheckboxes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090338);
  FUN_1047f9438(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f9774; end: 1047f97ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090328);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090330);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090338) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f9800; end: 1047f98c3; -[SCAdMediaLeadGenerationLegalDisclaimer initWithTitle:body:consentCheckboxes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = 0;
  FUN_1047f9438(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113090328);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113090330);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_113090338) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f98c4; end: 1047f9ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f98c4(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  undefined *apuStack_98 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113090328);
  puVar5[1] = uStack_68;
  *puVar5 = uStack_70;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113090330);
  puVar5[1] = uStack_78;
  *puVar5 = uStack_80;
  lVar9 = param_1[4];
  lVar10 = *(long *)(lVar9 + 0x10);
  lStack_88 = lVar9;
  if (lVar10 == 0) {
    FUN_1047fa3b8(&lStack_88,0x113090340,&UNK_10dd36028);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100402194(&uStack_70,apuStack_98);
    func_0x000100402194(&uStack_80,apuStack_98);
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c7580(0,lVar10,0);
    puVar11 = apuStack_98[0];
    lVar7 = 0;
    FUN_1047f9438();
    puVar12 = (undefined1 *)(lVar9 + 0x30);
    do {
      uVar1 = *(undefined8 *)(puVar12 + -0x10);
      uVar3 = *(undefined8 *)(puVar12 + -8);
      uVar4 = *puVar12;
      lVar9 = lVar7;
      _objc_allocWithZone();
      puVar5 = (undefined8 *)(lVar9 + _DAT_1130902f0);
      *puVar5 = uVar1;
      puVar5[1] = uVar3;
      *(undefined1 *)(lVar9 + _DAT_1130902f8) = uVar4;
      puVar6 = PTR_s_init_1125d9248;
      lStack_a8 = lVar9;
      lStack_a0 = lVar7;
      _swift_bridgeObjectRetain(uVar3);
      plVar8 = &lStack_a8;
      _objc_msgSendSuper2(plVar8,puVar6);
      uVar2 = *(ulong *)(puVar11 + 0x10);
      apuStack_98[0] = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        func_0x0001046c7580(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
      }
      puVar11 = apuStack_98[0];
      *(ulong *)(apuStack_98[0] + 0x10) = uVar2 + 1;
      *(long **)(apuStack_98[0] + uVar2 * 8 + 0x20) = plVar8;
      puVar12 = puVar12 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000100bcb1dc(&uStack_70);
    func_0x000100bcb1dc(&uStack_80);
    FUN_1047fa3b8(&lStack_88,0x113090340,&UNK_10dd36028);
  }
  *(undefined **)(unaff_x20 + _DAT_113090338) = puVar11;
  _objc_msgSendSuper2(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f9ab4; end: 1047f9ae7; -[SCAdMediaLeadGenerationLegalDisclaimer hash] */

undefined8 FUN_1047f9ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f948c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f9ae8; end: 1047f9b77; -[SCAdMediaLeadGenerationLegalDisclaimer isEqual:] */

uint FUN_1047f9ae8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f9570(&uStack_40);
  _objc_release(param_1);
  FUN_1047fa3b8(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047f9b78; end: 1047f9b7b; -[SCAdMediaLeadGenerationLegalDisclaimer copyWithZone:] */

void FUN_1047f9b78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f9b7c; end: 1047f9c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f9b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090328);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090328))[1]);
  uVar1 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090330);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090330))[1]);
  uVar1 = 0x59444f42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59444f42,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090338);
  uVar2 = 0;
  FUN_1047f9438(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0fb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047f9c9c; end: 1047f9ceb; -[SCAdMediaLeadGenerationLegalDisclaimer encodeWithCoder:] */

void FUN_1047f9c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f9b7c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f9cec; end: 1047f9d1b;  */

void FUN_1047f9cec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f9d1c(param_1);
  return;
}



/* Entry: 1047f9d1c; end: 1047fa057;  */

undefined8 FUN_1047f9d1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
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
  
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar2 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_a8;
    uVar2 = uStack_b0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1047f9ffc;
    }
    uVar5 = 0x59444f42;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59444f42,0xe400000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar5 = uStack_b0;
      if ((uVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar7 = 0xd000000000000012;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0fb0)
        ;
        lVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (lVar3 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
          _swift_unknownObjectRelease(lVar3);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_a8);
          goto LAB_1047f9fdc;
        }
        uVar7 = 0x113090348;
        func_0x0001000285a8(0x113090348,&UNK_10dd36030);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar7,6);
        if ((uVar8 & 1) != 0) {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar9);
          _swift_bridgeObjectRelease(uVar9);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uStack_a8);
          _swift_bridgeObjectRelease(uStack_a8);
          uVar7 = 0;
          FUN_1047f9438(0);
          uVar9 = uStack_b0;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_b0,uVar7);
          _swift_bridgeObjectRelease(uStack_b0);
          func_0x00010c052d40();
          _objc_release(uVar2);
          _objc_release(uVar5);
          _objc_release(uVar9);
          _objc_release(param_1);
          return unaff_x20;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uStack_a8);
      }
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_1047f9ffc;
    }
    _objc_release(param_1);
LAB_1047f9fdc:
    _swift_bridgeObjectRelease(uVar9);
  }
  FUN_1047fa3b8(&uStack_80,0x112d387f8,&UNK_10d902650);
LAB_1047f9ffc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047fa058; end: 1047fa07f; -[SCAdMediaLeadGenerationLegalDisclaimer initWithCoder:] */

void FUN_1047fa058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f9d1c();
  return;
}



/* Entry: 1047fa080; end: 1047fa103; -[SCAdMediaLeadGenerationLegalDisclaimer description] */

void FUN_1047fa080(undefined8 param_1)

{
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
  
  _objc_retain();
  FUN_1047fa1d0(&uStack_70);
  _objc_release(param_1);
  uStack_28 = uStack_68;
  uStack_30 = uStack_70;
  func_0x000100bcb1dc(&uStack_30);
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  func_0x000100bcb1dc(&uStack_40);
  uStack_48 = uStack_50;
  FUN_1047fa3b8(&uStack_48,0x113090340,&UNK_10dd36028);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fa104; end: 1047fa17f; -[SCAdMediaLeadGenerationLegalDisclaimer init] */

void FUN_1047fa104(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaLeadGenerationLegalDisclaimerWrapper.swift",0x3d,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fa14c);
  (*pcVar1)();
}



/* Entry: 1047fa180; end: 1047fa1cf; -[SCAdMediaLeadGenerationLegalDisclaimer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa180(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090328 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090330 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090338));
  return;
}



/* Entry: 1047fa1d0; end: 1047fa3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa1d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113090328);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113090328))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113090330);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113090330))[1];
  uVar10 = *(ulong *)(param_2 + _DAT_113090338);
  if (uVar10 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar12 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
  if (uVar12 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010155294c(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1047fa3b8);
      (*pcVar8)();
    }
    uVar11 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(uVar10 + uVar11 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar9 = uVar11;
        func_0x0001030b6724();
      }
      uVar3 = *(undefined8 *)(uVar9 + _DAT_1130902f0);
      uVar6 = ((undefined8 *)(uVar9 + _DAT_1130902f0))[1];
      uVar7 = *(undefined1 *)(uVar9 + _DAT_1130902f8);
      _swift_bridgeObjectRetain(uVar6);
      _objc_release(uVar9);
      uVar9 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
        func_0x00010155294c(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar13 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar13 + uVar9 * 0x18 + 0x20) = uVar3;
      *(undefined8 *)(puVar13 + uVar9 * 0x18 + 0x28) = uVar6;
      puVar13[uVar9 * 0x18 + 0x30] = uVar7;
    } while (uVar12 != uVar11);
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = puVar13;
  return;
}



/* Entry: 1047fa3b8; end: 1047fa3f7;  */

undefined8 FUN_1047fa3b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1047fa3f8; end: 1047fa417;  */

void FUN_1047fa3f8(void)

{
  _objc_opt_self(&PTR_PTR_1129d7590);
  return;
}



/* Entry: 1047fa418; end: 1047fa463; -[SCAdMediaLeadGenerationMultiSelectSubField label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090378);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090378))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fa464; end: 1047fa477; -[SCAdMediaLeadGenerationMultiSelectSubField preferredStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fa464(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090380);
}



/* Entry: 1047fa478; end: 1047fa4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090378);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090380) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fa4e4; end: 1047fa557; -[SCAdMediaLeadGenerationMultiSelectSubField initWithLabel:preferredStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113090378);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113090380) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}


