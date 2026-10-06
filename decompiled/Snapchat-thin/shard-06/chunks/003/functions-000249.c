/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10480d70c; end: 10480d78b; -[SCAdMediaSurveyQuestion isEqual:] */

uint FUN_10480d70c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10480d5f0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480d78c; end: 10480d78f; -[SCAdMediaSurveyQuestion copyWithZone:] */

void FUN_10480d78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480d790; end: 10480d893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130908c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130908c8))[1]);
  uVar1 = 0x54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130908d8);
  uVar2 = 0;
  FUN_10480e858(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x534543494f4843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534543494f4843,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10480d894; end: 10480d8e3; -[SCAdMediaSurveyQuestion encodeWithCoder:] */

void FUN_10480d894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10480d790(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480d8e4; end: 10480d913;  */

void FUN_10480d8e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480d914(param_1);
  return;
}



/* Entry: 10480d914; end: 10480dba7;  */

undefined8 FUN_10480d914(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
  lVar3 = param_1;
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
LAB_10480da24:
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) != 0) {
      uVar5 = 0x45505954;
      uVar8 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954);
      lVar3 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar5);
      FUN_1046bf16c(lVar3);
      if ((uVar8 & 0xff) != 1) {
        uVar5 = 0x534543494f4843;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534543494f4843,0xe700000000000000);
        lVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
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
        if (lStack_78 != 0) {
          uVar5 = 0x1130908e0;
          func_0x0001000285a8(0x1130908e0,&UNK_10dd362d8);
          _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
          if ((uVar6 & 1) != 0) {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
            _swift_bridgeObjectRelease(uStack_98);
            uVar7 = 0;
            FUN_10480e858(0);
            uVar5 = uStack_a0;
            __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a0,uVar7);
            _swift_bridgeObjectRelease(uStack_a0);
            func_0x00010c051780();
            _objc_release(uVar2);
            _objc_release(uVar5);
            _objc_release(param_1);
            return unaff_x20;
          }
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_98);
          goto LAB_10480da2c;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uStack_98);
        goto LAB_10480da24;
      }
      _swift_bridgeObjectRelease(uStack_98);
    }
    _objc_release(param_1);
  }
LAB_10480da2c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10480dba8; end: 10480dbcf; -[SCAdMediaSurveyQuestion initWithCoder:] */

void FUN_10480dba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480d914();
  return;
}



/* Entry: 10480dbd0; end: 10480dc27; -[SCAdMediaSurveyQuestion description] */

void FUN_10480dbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  FUN_10480dce0();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480dc28; end: 10480dca3; -[SCAdMediaSurveyQuestion init] */

void FUN_10480dc28(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaSurveyQuestionWrapper.swift",0x2e,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480dc70);
  (*pcVar1)();
}



/* Entry: 10480dca4; end: 10480dcdf; -[SCAdMediaSurveyQuestion .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480dca4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130908c8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130908d8));
  return;
}



/* Entry: 10480dce0; end: 10480decf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480dce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130908c8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130908c8))[1];
  uVar10 = *(ulong *)(param_1 + _DAT_1130908d8);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar11 == 0) {
    _swift_bridgeObjectRetain(uVar2);
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    func_0x0001015529b8(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10480ded0);
      (*pcVar8)();
    }
    uVar12 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar9 = uVar12;
        func_0x0001030b6c20();
      }
      uVar2 = *(undefined8 *)(uVar9 + _DAT_113090910);
      uVar3 = ((undefined8 *)(uVar9 + _DAT_113090910))[1];
      uVar4 = *(undefined1 *)(uVar9 + _DAT_113090918);
      uVar5 = *(undefined1 *)(uVar9 + _DAT_113090920);
      uVar6 = *(undefined1 *)(uVar9 + _DAT_113090928);
      _swift_bridgeObjectRetain(uVar3);
      _objc_release(uVar9);
      uVar9 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
        func_0x0001015529b8(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar7 + uVar9 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar7 + uVar9 * 0x18 + 0x28) = uVar3;
      puVar7[uVar9 * 0x18 + 0x30] = uVar4;
      puVar7[uVar9 * 0x18 + 0x31] = uVar5;
      puVar7[uVar9 * 0x18 + 0x32] = uVar6;
    } while (uVar11 != uVar12);
  }
  return uVar1;
}



/* Entry: 10480ded0; end: 10480deef;  */

void FUN_10480ded0(void)

{
  _objc_opt_self(&PTR_PTR_1129d8680);
  return;
}



/* Entry: 10480def0; end: 10480df7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480def0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090910);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(byte *)(unaff_x20 + _DAT_113090918) = (byte)param_3 & 1;
  *(byte *)(unaff_x20 + _DAT_113090920) = (byte)((ulong)param_3 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_113090928) = (byte)((ulong)param_3 >> 0x10) & 1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480df80; end: 10480dfcb; -[SCAdMediaSurveyQuestionChoice choice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480df80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090910);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090910))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480dfcc; end: 10480dfdb; -[SCAdMediaSurveyQuestionChoice isFixed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480dfcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090918);
}



/* Entry: 10480dfdc; end: 10480dfeb; -[SCAdMediaSurveyQuestionChoice isExclusive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480dfdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090920);
}



/* Entry: 10480dfec; end: 10480dffb; -[SCAdMediaSurveyQuestionChoice isTerminal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480dfec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090928);
}



/* Entry: 10480dffc; end: 10480e08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480dffc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090910);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113090918) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113090920) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113090928) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480e090; end: 10480e12b; -[SCAdMediaSurveyQuestionChoice initWithChoice:isFixed:isExclusive:isTerminal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e090(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113090910);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_113090918) = param_4;
  *(undefined1 *)(param_1 + _DAT_113090920) = param_5;
  *(undefined1 *)(param_1 + _DAT_113090928) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480e12c; end: 10480e15f; -[SCAdMediaSurveyQuestionChoice hash] */

undefined8 FUN_10480e12c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480e160();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480e160; end: 10480e20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e160(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090910);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090910))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090918));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090920));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090928));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10480e20c; end: 10480e337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10480e20c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar9 = &lStack_78;
    _swift_dynamicCast(plVar9,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar9 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113090910);
      if (lVar8 == *(long *)(lStack_78 + _DAT_113090910) &&
          ((long *)(unaff_x20 + _DAT_113090910))[1] == ((long *)(lStack_78 + _DAT_113090910))[1]) {
        uVar7 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar8;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113090918);
      bVar2 = *(byte *)(lStack_78 + _DAT_113090918);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113090920);
      bVar4 = *(byte *)(lStack_78 + _DAT_113090920);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113090928);
      bVar6 = *(byte *)(lStack_78 + _DAT_113090928);
      _objc_release(lStack_78);
      uVar7 = uVar7 & ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1);
      goto LAB_10480e318;
    }
  }
  uVar7 = 0;
LAB_10480e318:
  return uVar7 & 1;
}



/* Entry: 10480e338; end: 10480e3b7; -[SCAdMediaSurveyQuestionChoice isEqual:] */

uint FUN_10480e338(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10480e20c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480e3b8; end: 10480e3bb; -[SCAdMediaSurveyQuestionChoice copyWithZone:] */

void FUN_10480e3b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480e3bc; end: 10480e4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e3bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090910);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090910))[1]);
  uVar1 = 0x4543494f4843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543494f4843,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x44455849465f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44455849465f5349,0xe800000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x554c4358455f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554c4358455f5349,0xec00000045564953);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x494d5245545f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494d5245545f5349,0xeb000000004c414e);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10480e4fc; end: 10480e54b; -[SCAdMediaSurveyQuestionChoice encodeWithCoder:] */

void FUN_10480e4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10480e3bc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480e54c; end: 10480e57b;  */

void FUN_10480e54c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480e57c(param_1);
  return;
}



/* Entry: 10480e57c; end: 10480e783;  */

undefined8 FUN_10480e57c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = 0;
  uVar1 = 0x4543494f4843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543494f4843,0xe600000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = 0x44455849465f5349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44455849465f5349,0xe800000000000000);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar1 = 0x554c4358455f5349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554c4358455f5349,0xec00000045564953);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar1 = 0x494d5245545f5349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494d5245545f5349,0xeb000000004c414e);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar1 = uStack_a0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
      _swift_bridgeObjectRelease(uStack_98);
      func_0x00010bffe120();
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



/* Entry: 10480e784; end: 10480e7ab; -[SCAdMediaSurveyQuestionChoice initWithCoder:] */

void FUN_10480e784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480e57c();
  return;
}



/* Entry: 10480e7ac; end: 10480e7c7; -[SCAdMediaSurveyQuestionChoice description] */

void FUN_10480e7ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480e7c8; end: 10480e843; -[SCAdMediaSurveyQuestionChoice init] */

void FUN_10480e7c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaSurveyQuestionChoiceWrapper.swift",0x34,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480e810);
  (*pcVar1)();
}



/* Entry: 10480e844; end: 10480e857; -[SCAdMediaSurveyQuestionChoice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090910 + 8))
  ;
  return;
}



/* Entry: 10480e858; end: 10480e877;  */

void FUN_10480e858(void)

{
  _objc_opt_self(&PTR_PTR_1129d8760);
  return;
}



/* Entry: 10480e878; end: 10480e8bf; -[SCAdQuestionAnswerValue selectedChoices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e878(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090958);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10480e8c0; end: 10480e8cf; -[SCAdQuestionAnswerValue selectedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090960));
  return;
}



/* Entry: 10480e8d0; end: 10480e8df; -[SCAdQuestionAnswerValue questionPresentedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090968));
  return;
}



/* Entry: 10480e8e0; end: 10480e8ef; -[SCAdQuestionAnswerValue questionSubmittedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e8e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090970));
  return;
}



/* Entry: 10480e8f0; end: 10480e94b; -[SCAdQuestionAnswerValue openEndedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e8f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090978))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090978);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480e94c; end: 10480eaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480e94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090958) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090960) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090968) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090970) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090978);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480eaa4; end: 10480eb97; -[SCAdQuestionAnswerValue initWithSelectedChoices:selectedTimestampMs:questionPresentedTimestampMs:questionSubmittedTimestampMs:openEndedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480eaa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar3 = PTR___sSiN_11034deb0;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_7 == 0) {
    param_7 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113090958) = param_3;
  *(undefined8 *)(param_1 + _DAT_113090960) = param_4;
  *(undefined8 *)(param_1 + _DAT_113090968) = param_5;
  *(undefined8 *)(param_1 + _DAT_113090970) = param_6;
  plVar1 = (long *)(param_1 + _DAT_113090978);
  *plVar1 = param_7;
  plVar1[1] = (long)puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 10480eb98; end: 10480ebc7;  */

void FUN_10480eb98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480ebc8(param_1);
  return;
}



/* Entry: 10480ebc8; end: 10480ed17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480ebc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  uVar3 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090958) = uVar3;
  uStack_58 = uVar3;
  if (*(char *)(param_1 + 2) == '\x01') {
    _swift_bridgeObjectRetain(uVar3);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar4 = param_1[1];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar3);
    func_0x00010c00e360(uVar4);
  }
  *(undefined **)(unaff_x20 + _DAT_113090960) = puVar2;
  if (*(char *)(param_1 + 4) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[3];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_113090968) = puVar2;
  if (*(char *)(param_1 + 6) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[5];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_113090970) = puVar2;
  uVar3 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090978);
  puVar1[1] = param_1[8];
  *puVar1 = uVar3;
  FUN_10480f484(&uStack_58,0x112d4b170,&UNK_10d911a80);
  _objc_msgSendSuper2(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480ed18; end: 10480ed4b; -[SCAdQuestionAnswerValue hash] */

undefined8 FUN_10480ed18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480ed4c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480ed4c; end: 10480eedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480ed4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090958);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSiN_11034deb0);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113090960);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_113090968);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_113090970);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113090978))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090978);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10480eedc; end: 10480f177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10480eedc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    FUN_10480f484(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090958);
      func_0x0001020f35dc(uVar2,*(undefined8 *)(lStack_78 + _DAT_113090958));
      lVar5 = *(long *)(unaff_x20 + _DAT_113090960);
      lVar9 = *(long *)(lStack_78 + _DAT_113090960);
      uVar6 = (uint)(lVar5 == 0 && lVar9 == 0);
      if (lVar5 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar6 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar9);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_113090968);
      lVar9 = *(long *)(lStack_78 + _DAT_113090968);
      uVar8 = (uint)(lVar5 == 0 && lVar9 == 0);
      if (lVar5 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar9);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_113090970);
      lVar9 = *(long *)(lStack_78 + _DAT_113090970);
      uVar4 = (uint)(lVar5 == 0 && lVar9 == 0);
      if ((lVar5 != 0) && (lVar9 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain(lVar5);
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar9);
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_113090978))[1];
      lVar5 = ((long *)(lStack_78 + _DAT_113090978))[1];
      if (lVar9 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_78);
        if (lVar5 == 0) {
LAB_10480f120:
          uVar7 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
        if (lVar5 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_113090978);
          if ((lVar3 == *(long *)(lStack_78 + _DAT_113090978)) && (lVar9 == lVar5)) {
            _objc_release(lStack_78);
            goto LAB_10480f120;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar3;
        }
        _objc_release(lStack_78);
      }
      if (((uint)uVar2 & uVar6 & uVar8 & 1) != 0) {
        uVar4 = uVar4 & uVar7;
        goto LAB_10480f158;
      }
    }
  }
  uVar4 = 0;
LAB_10480f158:
  return uVar4 & 1;
}



/* Entry: 10480f178; end: 10480f207; -[SCAdQuestionAnswerValue isEqual:] */

uint FUN_10480f178(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10480eedc(&uStack_40);
  _objc_release(param_1);
  FUN_10480f484(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10480f208; end: 10480f20b; -[SCAdQuestionAnswerValue copyWithZone:] */

void FUN_10480f208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480f20c; end: 10480f28f; -[SCAdQuestionAnswerValue description] */

void FUN_10480f20c(undefined8 param_1)

{
  undefined8 auStack_88 [7];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_10480f378(auStack_88);
  _objc_release(param_1);
  uStack_28 = auStack_88[0];
  FUN_10480f484(&uStack_28,0x112d4b170,&UNK_10d911a80);
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  FUN_10480f484(&uStack_40,0x112d35ff8,&UNK_10d900cd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480f290; end: 10480f30b; -[SCAdQuestionAnswerValue init] */

void FUN_10480f290(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdQuestionAnswerValueWrapper.swift",0x2e,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480f2d8);
  (*pcVar1)();
}



/* Entry: 10480f30c; end: 10480f377; -[SCAdQuestionAnswerValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480f30c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090958));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090960));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090968));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090970));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090978 + 8))
  ;
  return;
}



/* Entry: 10480f378; end: 10480f483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480f378(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_113090958);
  lVar5 = *(long *)(param_3 + _DAT_113090960);
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    uVar6 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    func_0x00010bf885a0(lVar5);
    uVar6 = param_2;
  }
  uVar7 = 0;
  bVar2 = *(long *)(param_3 + _DAT_113090968) == 0;
  if (bVar2) {
    uVar8 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar8 = param_2;
  }
  bVar3 = *(long *)(param_3 + _DAT_113090970) == 0;
  if (!bVar3) {
    func_0x00010bf885a0();
    uVar7 = param_2;
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_113090978);
  *param_1 = uVar4;
  param_1[1] = uVar6;
  *(bool *)(param_1 + 2) = lVar5 == 0;
  param_1[3] = uVar8;
  *(bool *)(param_1 + 4) = bVar2;
  param_1[5] = uVar7;
  *(bool *)(param_1 + 6) = bVar3;
  uVar4 = puVar1[1];
  uVar6 = *puVar1;
  param_1[8] = puVar1[1];
  param_1[7] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar4);
  return;
}



/* Entry: 10480f484; end: 10480f4c3;  */

undefined8 FUN_10480f484(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10480f4c4; end: 10480f4e3;  */

void FUN_10480f4c4(void)

{
  _objc_opt_self(&PTR_PTR_1129d8848);
  return;
}



/* Entry: 10480f4e4; end: 10480f58f;  */

void FUN_10480f4e4(void)

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



/* Entry: 10480f590; end: 10480f5cf;  */

void FUN_10480f590(undefined1 *param_1,long *param_2)

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



/* Entry: 10480f5d0; end: 10480f61b; -[SCAdSnapSticker description] */

void FUN_10480f5d0(undefined8 param_1)

{
  undefined1 auStack_70 [80];
  
  _objc_retain();
  FUN_10481023c(auStack_70);
  _objc_release(param_1);
  func_0x00010470769c(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480f61c; end: 10480f663; -[SCAdSnapSticker init] */

void FUN_10480f61c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSnapStickerWrapper.swift",0x26,
             2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480f664);
  (*pcVar1)();
}



/* Entry: 10480f664; end: 10480f697; -[SCAdSnapSticker hash] */

undefined8 FUN_10480f664(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480f698();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480f698; end: 10480f91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480f698(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130909a8));
  lVar2 = *(long *)(unaff_x20 + _DAT_1130909b0);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10480ded0(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  if (*(long *)(unaff_x20 + _DAT_1130909b8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10480b8ec();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10480f91c; end: 10480f99b; -[SCAdSnapSticker isEqual:] */

uint FUN_10480f91c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010480f774(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480f99c; end: 10480f99f; -[SCAdSnapSticker copyWithZone:] */

void FUN_10480f99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480f9a0; end: 10480fb1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480f9a0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  if (*(char *)(unaff_x20 + _DAT_1130909a8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_1130909b8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10480fb18);
      (*pcVar1)();
    }
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210040);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0xd000000000000015;
    uVar3 = 0x800000010f210060;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _DAT_1130909b0);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10480fb1c);
      (*pcVar1)();
    }
    uVar2 = 0;
    FUN_10480ded0(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210080);
    func_0x00010bf93020(param_1);
    _objc_release(lVar4);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xee00594556525553;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10480fb1c; end: 10480fb6b; -[SCAdSnapSticker encodeWithCoder:] */

void FUN_10480fb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10480f9a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480fb6c; end: 10480fb9b;  */

void FUN_10480fb6c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480fb9c(param_1);
  return;
}



/* Entry: 10480fb9c; end: 10480ff7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10480fb9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = auStack_c0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar3 = param_1;
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) goto LAB_10480ff28;
  plVar4 = &lStack_a0;
  _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar3 = lStack_a0;
  if (((ulong)plVar4 & 1) == 0) {
LAB_10480ff3c:
    _objc_release(param_1);
  }
  else {
    uVar5 = 0x5f45505954425553;
    if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x11ffa6baa9adaaad)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f45505954425553,0xee00594556525553,lStack_a0,lStack_98,0), (uVar5 & 1) != 0))
    {
      _swift_bridgeObjectRelease(lStack_98);
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210080);
      lVar3 = param_1;
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
      if (lStack_78 != 0) {
        uVar2 = 0x113090898;
        func_0x0001000285a8(0x113090898,&UNK_10dd362b8);
        plVar4 = &lStack_a0;
        _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
        if (((ulong)plVar4 & 1) != 0) {
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130909a8) = 0;
          *(long *)(unaff_x20 + _DAT_1130909b0) = lStack_a0;
          *(undefined8 *)(unaff_x20 + _DAT_1130909b8) = 0;
          _objc_msgSendSuper2(auStack_c0,PTR_s_init_1125d9248);
          goto LAB_10480fdac;
        }
        goto LAB_10480ff3c;
      }
    }
    else {
      if ((lVar3 == -0x2fffffffffffffeb) && (lStack_98 == -0x7ffffffef0deffa0)) {
        _swift_bridgeObjectRelease(0x800000010f210060);
      }
      else {
        uVar5 = 0xd000000000000015;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000015,0x800000010f210060,lVar3,lStack_98,0);
        _swift_bridgeObjectRelease(lStack_98);
        if ((uVar5 & 1) == 0) goto LAB_10480ff3c;
      }
      uVar2 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210040);
      lVar3 = param_1;
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
      if (lStack_78 != 0) {
        uVar2 = 0;
        FUN_10480c360(0);
        plVar4 = &lStack_a0;
        _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
        if (((ulong)plVar4 & 1) != 0) {
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130909a8) = 1;
          *(undefined8 *)(unaff_x20 + _DAT_1130909b0) = 0;
          *(long *)(unaff_x20 + _DAT_1130909b8) = lStack_a0;
          puVar1 = PTR_s_init_1125d9248;
          lVar3 = lStack_a0;
          _objc_retain(lStack_a0);
          puVar6 = auStack_b0;
          _objc_msgSendSuper2(puVar6,puVar1);
          _objc_release(lVar3);
LAB_10480fdac:
          _objc_release(param_1);
          _swift_getObjectType();
          _swift_deallocPartialClassInstance();
          return puVar6;
        }
        goto LAB_10480ff3c;
      }
    }
LAB_10480ff28:
    uStack_90 = uStack_70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
    lStack_78 = lStack_58;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 10480ff80; end: 10480ffa7; -[SCAdSnapSticker initWithCoder:] */

void FUN_10480ff80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480fb9c();
  return;
}



/* Entry: 10480ffa8; end: 10481002b; +[SCAdSnapSticker surveyWithQuestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480ffa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = 0;
  FUN_10480ded0(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130909a8) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130909b0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_1130909b8) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481002c; end: 10481010f; +[SCAdSnapSticker arExperience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481002c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130909a8) = 1;
  *(undefined8 *)(lVar2 + _DAT_1130909b0) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130909b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104810110; end: 1048101cf; -[SCAdSnapSticker matchSurvey:arExperience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104810110(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1130909a8) != '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_1130909b0);
    if (lVar3 != 0) {
      uVar2 = 0;
      FUN_10480ded0(0);
      _objc_retain(param_1);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
      (**(code **)(param_3 + 0x10))(param_3,lVar3);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048101d0);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + _DAT_1130909b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104810158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048101cc);
  (*pcVar1)();
}



/* Entry: 1048101d0; end: 104810203;  */

void FUN_1048101d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104810204; end: 10481023b; -[SCAdSnapSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104810204(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130909b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130909b8));
  return;
}



/* Entry: 10481023c; end: 104810613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481023c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  
  if (*(char *)(param_6 + _DAT_1130909a8) == '\x01') {
    lVar9 = *(long *)(param_6 + _DAT_1130909b8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x104810610);
      (*pcVar8)();
    }
    _objc_retain();
    FUN_10480c24c(&puStack_c0);
    _objc_release(lVar9);
    uVar13 = uStack_b0 & 1 | 0x8000000000000000;
    param_3 = uStack_a8;
    in_register_00005028 = uStack_a0;
    param_4 = uStack_98;
    in_register_00005048 = uStack_90;
    param_5 = uStack_88;
    in_register_00005068 = uStack_80;
  }
  else {
    uVar13 = *(ulong *)(param_6 + _DAT_1130909b0);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x104810614);
      (*pcVar8)();
    }
    uVar15 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar18 = uVar13;
      if (-1 < (long)uVar13) {
        uVar18 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar16 = uVar15;
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      func_0x00010155299c(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10481060c);
        (*pcVar8)();
      }
      uVar21 = 0;
      do {
        puVar7 = puStack_c0;
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar15 + 0x10) <= (long)uVar21) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1048105f4);
            (*pcVar8)();
          }
          uVar10 = *(ulong *)(uVar13 + 0x20 + uVar21 * 8);
          _objc_retain();
        }
        else {
          uVar10 = uVar21;
          func_0x0001030b6a84(uVar21,uVar13);
        }
        uVar1 = *(undefined8 *)(uVar10 + _DAT_1130908c8);
        uVar16 = ((undefined8 *)(uVar10 + _DAT_1130908c8))[1];
        uVar17 = *(undefined8 *)(uVar10 + _DAT_1130908d0);
        uVar14 = *(ulong *)(uVar10 + _DAT_1130908d8);
        if (uVar14 >> 0x3e == 0) {
          uVar11 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
          if (uVar11 == 0) goto LAB_104810530;
LAB_1048103c0:
          _swift_bridgeObjectRetain(uVar16);
          func_0x0001015529b8(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1048105f0);
            (*pcVar8)();
          }
          uVar22 = 0;
          do {
            if ((uVar14 & 0xc000000000000001) == 0) {
              uVar12 = *(ulong *)(uVar14 + uVar22 * 8 + 0x20);
              _objc_retain();
            }
            else {
              uVar12 = uVar22;
              func_0x0001030b6c20();
            }
            uVar2 = *(undefined8 *)(uVar12 + _DAT_113090910);
            uVar3 = ((undefined8 *)(uVar12 + _DAT_113090910))[1];
            uVar4 = *(undefined1 *)(uVar12 + _DAT_113090918);
            uVar5 = *(undefined1 *)(uVar12 + _DAT_113090920);
            uVar6 = *(undefined1 *)(uVar12 + _DAT_113090928);
            _swift_bridgeObjectRetain(uVar3);
            _objc_release(uVar12);
            uVar12 = *(ulong *)(puVar19 + 0x10);
            if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar12) {
              func_0x0001015529b8(1 < *(ulong *)(puVar19 + 0x18),uVar12 + 1,1);
            }
            uVar22 = uVar22 + 1;
            *(ulong *)(puVar19 + 0x10) = uVar12 + 1;
            *(undefined8 *)(puVar19 + uVar12 * 0x18 + 0x20) = uVar2;
            *(undefined8 *)(puVar19 + uVar12 * 0x18 + 0x28) = uVar3;
            puVar19[uVar12 * 0x18 + 0x30] = uVar4;
            puVar19[uVar12 * 0x18 + 0x31] = uVar5;
            puVar19[uVar12 * 0x18 + 0x32] = uVar6;
          } while (uVar11 != uVar22);
          _objc_release(uVar10);
          puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar11 = uVar14 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar14) {
            uVar11 = uVar14;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if (uVar11 != 0) goto LAB_1048103c0;
LAB_104810530:
          _swift_bridgeObjectRetain(uVar16);
          _objc_release(uVar10);
          puVar20 = puVar19;
        }
        uVar10 = *(ulong *)(puVar7 + 0x10);
        puStack_c0 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
          func_0x00010155299c(1 < *(ulong *)(puVar7 + 0x18),uVar10 + 1,1);
        }
        uVar21 = uVar21 + 1;
        *(ulong *)(puStack_c0 + 0x10) = uVar10 + 1;
        *(undefined8 *)(puStack_c0 + uVar10 * 0x20 + 0x20) = uVar1;
        *(ulong *)(puStack_c0 + uVar10 * 0x20 + 0x28) = uVar16;
        *(undefined8 *)(puStack_c0 + uVar10 * 0x20 + 0x30) = uVar17;
        *(undefined **)(puStack_c0 + uVar10 * 0x20 + 0x38) = puVar19;
        puVar19 = puVar20;
      } while (uVar21 != uVar18);
    }
    uStack_78 = (undefined2)uVar16;
    uVar13 = 0;
    uStack_b8 = 0;
  }
  param_1[1] = uStack_b8;
  *param_1 = puStack_c0;
  param_1[2] = uVar13;
  param_1[4] = in_register_00005028;
  param_1[3] = param_3;
  param_1[6] = in_register_00005048;
  param_1[5] = param_4;
  param_1[8] = in_register_00005068;
  param_1[7] = param_5;
  *(undefined2 *)(param_1 + 9) = uStack_78;
  return;
}



/* Entry: 104810614; end: 104810633;  */

void FUN_104810614(void)

{
  _objc_opt_self(&PTR_PTR_1129d8930);
  return;
}



/* Entry: 104810634; end: 10481079b;  */

int FUN_104810634(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048106b0;
        goto LAB_104810694;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104810694:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048106b0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10481079c; end: 1048107db;  */

void FUN_10481079c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130909e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36378;
  _swift_getWitnessTable(&UNK_10dd36378,&UNK_1107a1be0);
  puRam00000001130909e8 = puVar1;
  return;
}



/* Entry: 1048107dc; end: 10481082b; -[SCAdSurveyAnswerValue answers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048107dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130909f0);
  FUN_10480f4c4(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10481082c; end: 10481083b; -[SCAdSurveyAnswerValue submittedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481082c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130909f8));
  return;
}



/* Entry: 10481083c; end: 104810903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481083c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130909f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130909f8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104810904; end: 1048109d3; -[SCAdSurveyAnswerValue initWithAnswers:submittedTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104810904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = 0;
  FUN_10480f4c4(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar3);
  *(undefined8 *)(param_1 + _DAT_1130909f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130909f8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1048109d4; end: 104810cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048109d4(long param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  _swift_getObjectType();
  lVar15 = *(long *)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar15 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_1);
    func_0x000103094ff4(0,lVar15,0);
    puVar13 = puStack_88;
    lVar8 = 0;
    FUN_10480f4c4();
    lVar14 = 0;
    do {
      lVar9 = param_1 + lVar14;
      uVar12 = *(undefined8 *)(lVar9 + 0x20);
      uVar18 = *(undefined8 *)(lVar9 + 0x28);
      cVar5 = *(char *)(lVar9 + 0x30);
      uVar17 = *(undefined8 *)(lVar9 + 0x38);
      cVar6 = *(char *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x48);
      cVar7 = *(char *)(lVar9 + 0x50);
      uVar2 = *(undefined8 *)(lVar9 + 0x58);
      uVar4 = *(undefined8 *)(lVar9 + 0x60);
      lVar9 = lVar8;
      _objc_allocWithZone();
      *(undefined8 *)(lVar9 + _DAT_113090958) = uVar12;
      if (cVar5 == '\x01') {
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain_n(uVar12,2);
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_allocWithZone();
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain_n(uVar12,2);
        func_0x00010c00e360(uVar18);
      }
      *(undefined **)(lVar9 + _DAT_113090960) = puVar10;
      if (cVar6 == '\x01') {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_allocWithZone();
        func_0x00010c00e360(uVar17);
      }
      *(undefined **)(lVar9 + _DAT_113090968) = puVar10;
      if (cVar7 == '\x01') {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_allocWithZone();
        func_0x00010c00e360(uVar16);
      }
      *(undefined **)(lVar9 + _DAT_113090970) = puVar10;
      puVar1 = (undefined8 *)(lVar9 + _DAT_113090978);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar12);
      plVar11 = &lStack_98;
      lStack_98 = lVar9;
      lStack_90 = lVar8;
      _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
      uVar3 = *(ulong *)(puVar13 + 0x10);
      puStack_88 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
        func_0x000103094ff4(1 < *(ulong *)(puVar13 + 0x18),uVar3 + 1,1);
      }
      puVar13 = puStack_88;
      *(ulong *)(puStack_88 + 0x10) = uVar3 + 1;
      *(long **)(puStack_88 + uVar3 * 8 + 0x20) = plVar11;
      lVar14 = lVar14 + 0x48;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_1130909f0) = puVar13;
  if (param_3 == '\x01') {
    _swift_bridgeObjectRelease(param_1);
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_2);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_1130909f8) = puVar13;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104810cbc; end: 104810cef; -[SCAdSurveyAnswerValue hash] */

undefined8 FUN_104810cbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104810cf0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104810cf0; end: 104810db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104810cf0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130909f0);
  uVar1 = 0;
  FUN_10480f4c4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  uVar1 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_1130909f8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104810db4; end: 104810f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104810db4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130909f0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130909f0);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010470d454(uVar5,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      lVar8 = *(long *)(unaff_x20 + _DAT_1130909f8);
      lVar6 = *(long *)(lStack_68 + _DAT_1130909f8);
      if (lVar8 == 0) {
        lVar3 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 != 0) {
          uVar4 = 0;
          goto LAB_104810ed8;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        lVar3 = lStack_68;
        if (lVar6 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar6);
          _objc_retain(lVar8);
          lVar2 = lVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar4 = (uint)lVar2;
          _objc_release(lVar8);
          _objc_release(lVar6);
        }
LAB_104810ed8:
        _objc_release(lVar3);
      }
      uVar4 = (uint)uVar5 & uVar4;
      goto LAB_104810ee4;
    }
  }
  uVar4 = 0;
LAB_104810ee4:
  return uVar4 & 1;
}



/* Entry: 104810f08; end: 104810f87; -[SCAdSurveyAnswerValue isEqual:] */

uint FUN_104810f08(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104810db4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104810f88; end: 104810f8b; -[SCAdSurveyAnswerValue copyWithZone:] */

void FUN_104810f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104810f8c; end: 10481104f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104810f8c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130909f0);
  uVar1 = 0;
  FUN_10480f4c4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x53524557534e41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53524557534e41,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f2100a0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104811050; end: 10481109f; -[SCAdSurveyAnswerValue encodeWithCoder:] */

void FUN_104811050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104810f8c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048110a0; end: 1048110cf;  */

void FUN_1048110a0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048110d0(param_1);
  return;
}



/* Entry: 1048110d0; end: 1048112ef;  */

undefined8 FUN_1048110d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x53524557534e41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53524557534e41,0xe700000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
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
    uVar2 = 0x113090a00;
    func_0x0001000285a8(0x113090a00,&UNK_10dd36418);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_88;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f2100a0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        func_0x00010006e7f4(&uStack_60);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_88;
        _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
        uVar5 = uStack_88;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = 0;
      FUN_10480f4c4(0);
      uVar7 = uVar2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar6);
      _swift_bridgeObjectRelease(uVar2);
      func_0x00010bff3220();
      _objc_release(uVar7);
      _objc_release(param_1);
      _objc_release(uVar5);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1048112f0; end: 104811317; -[SCAdSurveyAnswerValue initWithCoder:] */

void FUN_1048112f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048110d0();
  return;
}



/* Entry: 104811318; end: 10481135b; -[SCAdSurveyAnswerValue description] */

void FUN_104811318(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104811458();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481135c; end: 1048113a3;  */

undefined8 FUN_10481135c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104811458();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048113a4; end: 10481141f; -[SCAdSurveyAnswerValue init] */

void FUN_1048113a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSurveyAnswerValueWrapper.swift"
             ,0x2c,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048113ec);
  (*pcVar1)();
}



/* Entry: 104811420; end: 104811457; -[SCAdSurveyAnswerValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104811420(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130909f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130909f8));
  return;
}



/* Entry: 104811458; end: 1048116c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104811458(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(ulong *)(param_2 + _DAT_1130909f0);
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    func_0x000102bc78c4(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1048116c8);
      (*pcVar6)();
    }
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar7 = uVar10;
        func_0x0001046c4eec(uVar10,uVar8);
      }
      uVar11 = *(undefined8 *)(uVar7 + _DAT_113090958);
      lVar12 = *(long *)(uVar7 + _DAT_113090960);
      if (lVar12 == 0) {
        _swift_bridgeObjectRetain(uVar11);
        uVar13 = 0;
      }
      else {
        _swift_bridgeObjectRetain(uVar11);
        func_0x00010bf885a0(lVar12);
        uVar13 = param_1;
      }
      uVar14 = 0;
      bVar1 = *(long *)(uVar7 + _DAT_113090968) == 0;
      if (bVar1) {
        uVar15 = 0;
      }
      else {
        func_0x00010bf885a0();
        uVar15 = param_1;
      }
      bVar2 = *(long *)(uVar7 + _DAT_113090970) == 0;
      if (!bVar2) {
        func_0x00010bf885a0();
        uVar14 = param_1;
      }
      uVar3 = *(undefined8 *)(uVar7 + _DAT_113090978);
      uVar4 = ((undefined8 *)(uVar7 + _DAT_113090978))[1];
      _swift_bridgeObjectRetain(uVar4);
      _objc_release(uVar7);
      uVar7 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        func_0x000102bc78c4(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x20) = uVar11;
      uVar10 = uVar10 + 1;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x28) = uVar13;
      puVar5[uVar7 * 0x48 + 0x30] = lVar12 == 0;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x38) = uVar15;
      puVar5[uVar7 * 0x48 + 0x40] = bVar1;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x48) = uVar14;
      puVar5[uVar7 * 0x48 + 0x50] = bVar2;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x58) = uVar3;
      *(undefined8 *)(puVar5 + uVar7 * 0x48 + 0x60) = uVar4;
    } while (uVar9 != uVar10);
  }
  if (*(long *)(param_2 + _DAT_1130909f8) != 0) {
    func_0x00010bf885a0();
  }
  return puVar5;
}



/* Entry: 1048116c8; end: 1048116e7;  */

void FUN_1048116c8(void)

{
  _objc_opt_self(&PTR_PTR_1129d8a08);
  return;
}



/* Entry: 1048116e8; end: 104811733; -[SCAdMediaCookie cookieName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048116e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090a30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090a30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104811734; end: 10481178f; -[SCAdMediaCookie cookieContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104811734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090a38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090a38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104811790; end: 10481179f; -[SCAdMediaCookie cookieType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104811790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090a40);
}



/* Entry: 1048117a0; end: 10481182b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048117a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090a30);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090a38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090a40) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}


