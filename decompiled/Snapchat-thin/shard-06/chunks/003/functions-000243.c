/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047f0ea0; end: 1047f0eaf; -[SCAdMediaProductRatingInfo score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f0ea0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130900a0);
}



/* Entry: 1047f0eb0; end: 1047f0ebf; -[SCAdMediaProductRatingInfo base] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f0eb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130900a8);
}



/* Entry: 1047f0ec0; end: 1047f0ed3; -[SCAdMediaProductRatingInfo numberOfReviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f0ec0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130900b0);
}



/* Entry: 1047f0ed4; end: 1047f0fbb; -[SCAdMediaProductRatingInfo initWithScore:base:numberOfReviews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0ed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_1130900a0) = param_1;
  *(undefined8 *)(param_3 + _DAT_1130900a8) = param_2;
  *(undefined8 *)(param_3 + _DAT_1130900b0) = param_5;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f0fbc; end: 1047f104f; -[SCAdMediaProductRatingInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0fbc(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_1130900a0) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_1130900a0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_1130900a8) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_1130900a8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_1130900b0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f1050; end: 1047f1127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047f1050(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      dVar4 = *(double *)(unaff_x20 + _DAT_1130900a0);
      dVar5 = *(double *)(lStack_68 + _DAT_1130900a0);
      dVar6 = *(double *)(unaff_x20 + _DAT_1130900a8);
      dVar7 = *(double *)(lStack_68 + _DAT_1130900a8);
      lVar2 = *(long *)(unaff_x20 + _DAT_1130900b0);
      lVar3 = *(long *)(lStack_68 + _DAT_1130900b0);
      _objc_release();
      return lVar2 == lVar3 && (dVar6 == dVar7 && dVar4 == dVar5);
    }
  }
  return false;
}



/* Entry: 1047f1128; end: 1047f11a7; -[SCAdMediaProductRatingInfo isEqual:] */

uint FUN_1047f1128(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f1050(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f11a8; end: 1047f11ab; -[SCAdMediaProductRatingInfo copyWithZone:] */

void FUN_1047f11a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f11ac; end: 1047f128b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f11ac(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130900a0);
  uVar1 = 0x45524f4353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524f4353,0xe500000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130900a8);
  uVar1 = 0x45534142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534142,0xe400000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20f150);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047f128c; end: 1047f12db; -[SCAdMediaProductRatingInfo encodeWithCoder:] */

void FUN_1047f128c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f11ac(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f12dc; end: 1047f131b;  */

undefined8 FUN_1047f12dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047f13f4(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f131c; end: 1047f1357; -[SCAdMediaProductRatingInfo initWithCoder:] */

undefined8 FUN_1047f131c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047f13f4();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047f1358; end: 1047f1373; -[SCAdMediaProductRatingInfo description] */

void FUN_1047f1358(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f1374; end: 1047f13ef; -[SCAdMediaProductRatingInfo init] */

void FUN_1047f1374(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaProductRatingInfoWrapper.swift",0x31,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f13bc);
  (*pcVar1)();
}



/* Entry: 1047f13f0; end: 1047f13f3; -[SCAdMediaProductRatingInfo .cxx_destruct] */

void FUN_1047f13f0(void)

{
  return;
}



/* Entry: 1047f13f4; end: 1047f14c3;  */

void FUN_1047f13f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x45524f4353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524f4353,0xe500000000000000);
  func_0x00010bf66da0(param_2);
  uVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = 0x45534142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534142,0xe400000000000000);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20f150);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0422b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar2);
  return;
}



/* Entry: 1047f14c4; end: 1047f14e3;  */

void FUN_1047f14c4(void)

{
  _objc_opt_self(&PTR_PTR_1129d6e28);
  return;
}



/* Entry: 1047f14e4; end: 1047f14e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f14e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130900a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130900a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130900b0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f14e8; end: 1047f1533; -[SCAdMediaProductTag title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f14e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130900e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130900e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1534; end: 1047f1537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1534(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130900e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f1538; end: 1047f15f7; -[SCAdMediaProductTag initWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130900e0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f15f8; end: 1047f175b; -[SCAdMediaProductTag hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f15f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130900e0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130900e0))[1];
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



/* Entry: 1047f175c; end: 1047f17db; -[SCAdMediaProductTag isEqual:] */

uint FUN_1047f175c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047f168c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f17dc; end: 1047f17df; -[SCAdMediaProductTag copyWithZone:] */

void FUN_1047f17dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f17e0; end: 1047f187f; -[SCAdMediaProductTag encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f17e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130900e0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130900e0))[1];
  _objc_retain(param_3);
  _objc_retain(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  uVar2 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f1880; end: 1047f18af;  */

void FUN_1047f1880(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f18b0(param_1);
  return;
}



/* Entry: 1047f18b0; end: 1047f19eb;  */

undefined8 FUN_1047f18b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = 0;
  uVar1 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    _swift_dynamicCast(&uStack_80,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_80;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
      _swift_bridgeObjectRelease(uStack_78);
      func_0x00010c052bc0();
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



/* Entry: 1047f19ec; end: 1047f1a13; -[SCAdMediaProductTag initWithCoder:] */

void FUN_1047f19ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f18b0();
  return;
}



/* Entry: 1047f1a14; end: 1047f1a2f; -[SCAdMediaProductTag description] */

void FUN_1047f1a14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f1a30; end: 1047f1aab; -[SCAdMediaProductTag init] */

void FUN_1047f1a30(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaProductTagWrapper.swift",
             0x2a,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f1a78);
  (*pcVar1)();
}



/* Entry: 1047f1aac; end: 1047f1abf; -[SCAdMediaProductTag .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130900e0 + 8))
  ;
  return;
}



/* Entry: 1047f1ac0; end: 1047f1adf;  */

void FUN_1047f1ac0(void)

{
  _objc_opt_self(&PTR_PTR_1129d6f08);
  return;
}



/* Entry: 1047f1ae0; end: 1047f1ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1ae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130900e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f1ae4; end: 1047f1b13;  */

void FUN_1047f1ae4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f2068(param_1);
  return;
}



/* Entry: 1047f1b14; end: 1047f1b23; -[SCAdMediaProductVariant productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f1b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090110);
}



/* Entry: 1047f1b24; end: 1047f1b2f; -[SCAdMediaProductVariant variantId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090118))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1b30; end: 1047f1b77; -[SCAdMediaProductVariant imageUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090120);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f1b78; end: 1047f1b83; -[SCAdMediaProductVariant label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090128);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090128))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1b84; end: 1047f1b8f; -[SCAdMediaProductVariant productWebPageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090130);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090130))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1b90; end: 1047f1b9b; -[SCAdMediaProductVariant title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090138);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090138))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1b9c; end: 1047f1bab; -[SCAdMediaProductVariant priceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090140));
  return;
}



/* Entry: 1047f1bac; end: 1047f1bbf; -[SCAdMediaProductVariant options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090148);
  FUN_1047f04c8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f1bc0; end: 1047f1bd3; -[SCAdMediaProductVariant tags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1bc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090150);
  FUN_1047f1ac0(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f1bd4; end: 1047f1c1f;  */

void FUN_1047f1bd4(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047f1c20; end: 1047f1c2f; -[SCAdMediaProductVariant ratingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090158));
  return;
}



/* Entry: 1047f1c30; end: 1047f1c3b; -[SCAdMediaProductVariant desc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1c30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090160);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090160))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f1c3c; end: 1047f1c83;  */

void FUN_1047f1c3c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1047f1c84; end: 1047f1f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f1c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090110) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090118);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090120) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090128);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090130);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090138);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113090140) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113090148) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113090150) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113090158) = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090160);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f1f2c; end: 1047f2067; -[SCAdMediaProductVariant initWithProductId:variantId:imageUrls:label:productWebPageUrl:title:priceInfo:options:tags:ratingInfo:desc:] */

void FUN_1047f1f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar2 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar3 = puVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  puVar4 = puVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = 0;
  FUN_1047f04c8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_10,uVar1);
  uVar1 = 0;
  FUN_1047f1ac0();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain();
  _objc_retain();
  func_0x0001047f1dd8(param_3,param_4,param_2,param_5,param_6,puVar2,param_7,puVar3,param_8,puVar4,
                      param_9,param_10,param_11,param_12,param_13,uVar1);
  return;
}



/* Entry: 1047f2068; end: 1047f266f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f2068(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *apuStack_148 [7];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113090110) = *param_1;
  uStack_88 = param_1[2];
  uStack_90 = param_1[1];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090118);
  puVar13[1] = uStack_88;
  *puVar13 = uStack_90;
  uStack_98 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113090120) = uStack_98;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090128);
  puVar13[1] = uStack_a8;
  *puVar13 = uStack_b0;
  uVar15 = param_1[6];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090130);
  puVar13[1] = param_1[7];
  *puVar13 = uVar15;
  uVar15 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090138);
  puVar13[1] = param_1[9];
  *puVar13 = uVar15;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  lVar7 = 0;
  FUN_1047ef78c();
  lVar18 = lVar7;
  _objc_allocWithZone();
  *(undefined8 *)(lVar18 + _DAT_11308ffc8) = uStack_110;
  uVar15 = param_1[0xb];
  puVar13 = (undefined8 *)(lVar18 + _DAT_11308ffd0);
  puVar13[1] = param_1[0xc];
  *puVar13 = uVar15;
  *(undefined8 *)(lVar18 + _DAT_11308ffd8) = uStack_f8;
  *(undefined8 *)(lVar18 + _DAT_11308ffe0) = uStack_f0;
  *(undefined8 *)(lVar18 + _DAT_11308ffe8) = uStack_e8;
  *(undefined8 *)(lVar18 + _DAT_11308fff0) = uStack_e0;
  func_0x000100402194(&uStack_90,apuStack_148);
  FUN_1047f42b4(&uStack_98,apuStack_148,0x112d38270,&UNK_10d905a20);
  func_0x000100402194(&uStack_b0,apuStack_148);
  func_0x000100402194(&uStack_c0,apuStack_148);
  func_0x000100402194(&uStack_d0,apuStack_148);
  func_0x00010473af04(&uStack_110,apuStack_148);
  plVar8 = &lStack_158;
  lStack_158 = lVar18;
  lStack_150 = lVar7;
  _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113090140) = plVar8;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_1[0x11];
  uVar19 = *(ulong *)(lVar18 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 != 0) {
    apuStack_148[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c74b0(0,uVar19,0);
    uVar14 = 0;
    do {
      puVar17 = apuStack_148[0];
      if (*(ulong *)(lVar18 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1047f2670);
        (*pcVar6)();
      }
      puVar13 = (undefined8 *)(lVar18 + 0x20 + uVar14 * 0x18);
      uVar15 = *puVar13;
      uVar22 = puVar13[1];
      lVar21 = puVar13[2];
      lVar9 = 0;
      FUN_1047f04c8();
      lVar12 = lVar9;
      _objc_allocWithZone();
      puVar13 = (undefined8 *)(lVar12 + _DAT_113090020);
      *puVar13 = uVar15;
      puVar13[1] = uVar22;
      lVar7 = *(long *)(lVar21 + 0x10);
      if (lVar7 == 0) {
        _swift_bridgeObjectRetain(uVar22);
        puVar20 = puVar16;
      }
      else {
        puStack_160 = puVar16;
        _swift_bridgeObjectRetain_n(uVar22,2);
        _swift_bridgeObjectRetain(lVar21);
        func_0x0001046c74e4(0,lVar7,0);
        puVar16 = puStack_160;
        lVar10 = 0;
        FUN_1047f0e80();
        puVar13 = (undefined8 *)(lVar21 + 0x40);
        do {
          uVar15 = puVar13[-4];
          uVar3 = puVar13[-3];
          uVar5 = *(undefined1 *)(puVar13 + -2);
          uVar23 = puVar13[-1];
          uVar4 = *puVar13;
          lVar11 = lVar10;
          _objc_allocWithZone();
          puVar1 = (undefined8 *)(lVar11 + _DAT_113090060);
          *puVar1 = uVar15;
          puVar1[1] = uVar3;
          *(undefined1 *)(lVar11 + _DAT_113090068) = uVar5;
          puVar1 = (undefined8 *)(lVar11 + _DAT_113090070);
          *puVar1 = uVar23;
          puVar1[1] = uVar4;
          puVar20 = PTR_s_init_1125d9248;
          lStack_170 = lVar11;
          lStack_168 = lVar10;
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          plVar8 = &lStack_170;
          _objc_msgSendSuper2(plVar8,puVar20);
          uVar2 = *(ulong *)(puVar16 + 0x10);
          puStack_160 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar2) {
            func_0x0001046c74e4(1 < *(ulong *)(puVar16 + 0x18),uVar2 + 1,1);
          }
          puVar20 = puStack_160;
          puVar13 = puVar13 + 5;
          *(ulong *)(puStack_160 + 0x10) = uVar2 + 1;
          *(long **)(puStack_160 + uVar2 * 8 + 0x20) = plVar8;
          lVar7 = lVar7 + -1;
          puVar16 = puStack_160;
        } while (lVar7 != 0);
        _swift_bridgeObjectRelease(lVar21);
        _swift_bridgeObjectRelease(uVar22);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      *(undefined **)(lVar12 + _DAT_113090028) = puVar20;
      plVar8 = &lStack_180;
      lStack_180 = lVar12;
      lStack_178 = lVar9;
      _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar17 + 0x10);
      apuStack_148[0] = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar2) {
        func_0x0001046c74b0(1 < *(ulong *)(puVar17 + 0x18),uVar2 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(apuStack_148[0] + 0x10) = uVar2 + 1;
      *(long **)(apuStack_148[0] + uVar2 * 8 + 0x20) = plVar8;
      puVar17 = apuStack_148[0];
    } while (uVar14 != uVar19);
  }
  *(undefined **)(unaff_x20 + _DAT_113090148) = puVar17;
  lVar7 = param_1[0x12];
  lVar18 = *(long *)(lVar7 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar18 != 0) {
    apuStack_148[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c747c(0,lVar18,0);
    puVar16 = apuStack_148[0];
    lVar12 = 0;
    FUN_1047f1ac0();
    puVar13 = (undefined8 *)(lVar7 + 0x28);
    do {
      uVar15 = puVar13[-1];
      uVar22 = *puVar13;
      lVar7 = lVar12;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar7 + _DAT_1130900e0);
      *puVar1 = uVar15;
      puVar1[1] = uVar22;
      puVar17 = PTR_s_init_1125d9248;
      lStack_190 = lVar7;
      lStack_188 = lVar12;
      _swift_bridgeObjectRetain(uVar22);
      plVar8 = &lStack_190;
      _objc_msgSendSuper2(plVar8,puVar17);
      uVar19 = *(ulong *)(puVar16 + 0x10);
      apuStack_148[0] = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar19) {
        func_0x0001046c747c(1 < *(ulong *)(puVar16 + 0x18),uVar19 + 1,1);
      }
      puVar13 = puVar13 + 2;
      *(ulong *)(apuStack_148[0] + 0x10) = uVar19 + 1;
      *(long **)(apuStack_148[0] + uVar19 * 8 + 0x20) = plVar8;
      lVar18 = lVar18 + -1;
      puVar16 = apuStack_148[0];
    } while (lVar18 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_113090150) = puVar16;
  uVar22 = param_1[0x13];
  uVar23 = param_1[0x14];
  uVar15 = param_1[0x15];
  lVar7 = 0;
  FUN_1047f14c4();
  lVar18 = lVar7;
  _objc_allocWithZone();
  *(undefined8 *)(lVar18 + _DAT_1130900a0) = uVar22;
  *(undefined8 *)(lVar18 + _DAT_1130900a8) = uVar23;
  *(undefined8 *)(lVar18 + _DAT_1130900b0) = uVar15;
  plVar8 = &lStack_1a0;
  lStack_1a0 = lVar18;
  lStack_198 = lVar7;
  _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113090158) = plVar8;
  uVar15 = param_1[0x17];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090160);
  *puVar13 = param_1[0x16];
  puVar13[1] = uVar15;
  _swift_bridgeObjectRetain();
  func_0x00010470dc5c(param_1);
  _objc_msgSendSuper2(auStack_1b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f2670; end: 1047f26a3; -[SCAdMediaProductVariant hash] */

undefined8 FUN_1047f2670(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f26a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f26a4; end: 1047f2957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f26a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090110));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090118))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090120);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090128);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090128))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090130))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090138);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090138))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  FUN_1047eebe8();
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090148);
  uVar2 = 0;
  FUN_1047f04c8(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090150);
  uVar2 = 0;
  FUN_1047f1ac0(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113090158);
  __ss6HasherVABycfC(auStack_d0);
  dVar4 = 0.0;
  if (*(double *)(lVar3 + _DAT_1130900a0) != 0.0) {
    dVar4 = *(double *)(lVar3 + _DAT_1130900a0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (*(double *)(lVar3 + _DAT_1130900a8) != 0.0) {
    dVar4 = *(double *)(lVar3 + _DAT_1130900a8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + _DAT_1130900b0));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090160);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090160))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f2958; end: 1047f2c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f2958(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uStack_9c;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  FUN_1047f42b4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_113090110);
      lVar8 = *(long *)(lStack_88 + _DAT_113090110);
      lVar2 = *(long *)(unaff_x20 + _DAT_113090118);
      if (lVar2 == *(long *)(lStack_88 + _DAT_113090118) &&
          ((long *)(unaff_x20 + _DAT_113090118))[1] == ((long *)(lStack_88 + _DAT_113090118))[1]) {
        uStack_9c = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_9c = (uint)lVar2 ^ 1;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113090120);
      func_0x00010142cfc4(uVar4,*(undefined8 *)(lStack_88 + _DAT_113090120));
      lVar2 = *(long *)(unaff_x20 + _DAT_113090128);
      if (lVar2 == *(long *)(lStack_88 + _DAT_113090128) &&
          ((long *)(unaff_x20 + _DAT_113090128))[1] == ((long *)(lStack_88 + _DAT_113090128))[1]) {
        uVar16 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar16 = (uint)lVar2 ^ 1;
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090130);
      if ((lVar2 == *(long *)(lStack_88 + _DAT_113090130)) &&
         (((long *)(unaff_x20 + _DAT_113090130))[1] == ((long *)(lStack_88 + _DAT_113090130))[1])) {
        uVar15 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar15 = (uint)lVar2 ^ 1;
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090138);
      if ((lVar2 == *(long *)(lStack_88 + _DAT_113090138)) &&
         (((long *)(unaff_x20 + _DAT_113090138))[1] == ((long *)(lStack_88 + _DAT_113090138))[1])) {
        uVar11 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar11 = (uint)lVar2 ^ 1;
      }
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113090140);
      uVar5 = 0;
      FUN_1047ef78c();
      auStack_80[0] = uVar12;
      lStack_68 = uVar5;
      _objc_retain(uVar12);
      uVar1 = 0;
      FUN_1047eecec();
      func_0x00010006e7f4(auStack_80);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113090148);
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113090148);
      _swift_bridgeObjectRetain(uVar12);
      func_0x00010470d404(uVar5,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_113090150);
      uVar13 = *(undefined8 *)(lStack_88 + _DAT_113090150);
      _swift_bridgeObjectRetain(uVar13);
      func_0x00010470d418(uVar12,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_113090158);
      uVar13 = 0;
      FUN_1047f14c4();
      auStack_80[0] = uVar14;
      lStack_68 = uVar13;
      _objc_retain(uVar14);
      puVar6 = auStack_80;
      FUN_1047f1050(puVar6);
      func_0x00010006e7f4(auStack_80);
      lVar2 = *(long *)(unaff_x20 + _DAT_113090160);
      if ((lVar2 == *(long *)(lStack_88 + _DAT_113090160)) &&
         (((long *)(unaff_x20 + _DAT_113090160))[1] == ((long *)(lStack_88 + _DAT_113090160))[1])) {
        uVar10 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar10 = (uint)lVar2;
      }
      _objc_release(lStack_88);
      uVar7 = 0;
      if ((((((lVar9 != lVar8 | uStack_9c | (uint)uVar4 ^ 0xffffffff | uVar16 | uVar15 | uVar11) & 1
             ) == 0) && (((uVar1 ^ 1) & 1) == 0)) && ((((uint)uVar5 ^ 1) & 1) == 0)) &&
         ((((uint)uVar12 ^ 1) & 1) == 0)) {
        uVar7 = (uint)puVar6 & uVar10;
      }
      goto LAB_1047f2a30;
    }
  }
  uVar7 = 0;
LAB_1047f2a30:
  return uVar7 & 1;
}



/* Entry: 1047f2c88; end: 1047f2d07; -[SCAdMediaProductVariant isEqual:] */

uint FUN_1047f2c88(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f2958(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f2d08; end: 1047f2d0b; -[SCAdMediaProductVariant copyWithZone:] */

void FUN_1047f2d08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f2d0c; end: 1047f30b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f2d0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090118))[1]);
  uVar2 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090120);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0x52555f4547414d49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f4547414d49,0xea0000000000534c);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090128);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090128))[1]);
  uVar2 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090130))[1]);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20f1e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090138);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090138))[1]);
  uVar2 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4e495f4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4543495250,0xea00000000004f46);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090148);
  uVar1 = 0;
  FUN_1047f04c8(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x534e4f4954504f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e4f4954504f,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090150);
  uVar1 = 0;
  FUN_1047f1ac0(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x53474154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53474154,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0x495f474e49544152;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f474e49544152,0xeb000000004f464e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090160);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090160))[1]);
  uVar2 = 0x43534544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x43534544,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047f30b4; end: 1047f3103; -[SCAdMediaProductVariant encodeWithCoder:] */

void FUN_1047f30b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f2d0c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f3104; end: 1047f3133;  */

void FUN_1047f3104(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f3134(param_1);
  return;
}



/* Entry: 1047f3134; end: 1047f3b0b;  */

undefined8 FUN_1047f3134(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x20;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  uVar2 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
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
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_b8;
    lVar3 = lStack_c0;
    if (((ulong)plVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1047f3acc;
    }
    uVar5 = 0x52555f4547414d49;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f4547414d49,0xea0000000000534c);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      uVar5 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar5,6);
      lVar6 = lStack_c0;
      if (((ulong)plVar4 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar5 = 0x4c4542414c;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
        lVar7 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar7 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
          _swift_unknownObjectRelease(lVar7);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
LAB_1047f3a60:
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_1047f3a68;
        }
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        uVar5 = uStack_b8;
        lVar7 = lStack_c0;
        if (((ulong)plVar4 & 1) == 0) {
          _objc_release(param_1);
        }
        else {
          uVar8 = 0xd000000000000014;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000014,0x800000010f20f1e0);
          lVar9 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          if (lVar9 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
            _swift_unknownObjectRelease(lVar9);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            _objc_release(param_1);
LAB_1047f3a58:
            _swift_bridgeObjectRelease(uVar5);
            goto LAB_1047f3a60;
          }
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar8 = uStack_b8;
          lVar9 = lStack_c0;
          if (((ulong)plVar4 & 1) == 0) {
            _objc_release(param_1);
          }
          else {
            uVar10 = 0x454c544954;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
            lVar11 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            if (lVar11 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar11);
              _swift_unknownObjectRelease(lVar11);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              _objc_release(param_1);
LAB_1047f3a50:
              _swift_bridgeObjectRelease(uVar8);
              goto LAB_1047f3a58;
            }
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            uVar10 = uStack_b8;
            lVar11 = lStack_c0;
            if (((ulong)plVar4 & 1) == 0) {
              _objc_release(param_1);
            }
            else {
              uVar12 = 0x4e495f4543495250;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x4e495f4543495250,0xea00000000004f46);
              lVar13 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar12);
              if (lVar13 == 0) {
                uStack_a8 = 0;
                uStack_b0 = 0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar13);
                _swift_unknownObjectRelease(lVar13);
              }
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              lStack_78 = lStack_98;
              uStack_80 = uStack_a0;
              if (lStack_98 == 0) {
LAB_1047f3a44:
                _objc_release(param_1);
                _swift_bridgeObjectRelease(uVar10);
                goto LAB_1047f3a50;
              }
              uVar12 = 0;
              FUN_1047ef78c(0);
              plVar4 = &lStack_c0;
              _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar12,6);
              lVar13 = lStack_c0;
              if (((ulong)plVar4 & 1) != 0) {
                uVar12 = 0x534e4f4954504f;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x534e4f4954504f,0xe700000000000000);
                lVar14 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar12);
                if (lVar14 == 0) {
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar14);
                  _swift_unknownObjectRelease(lVar14);
                }
                uStack_88 = uStack_a8;
                uStack_90 = uStack_b0;
                lStack_78 = lStack_98;
                uStack_80 = uStack_a0;
                if (lStack_98 == 0) {
                  _objc_release(param_1);
                  param_1 = lVar13;
                  goto LAB_1047f3a44;
                }
                uVar12 = 0x113090168;
                func_0x0001000285a8(0x113090168,&UNK_10dd35f10);
                plVar4 = &lStack_c0;
                _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar12,6);
                lVar14 = lStack_c0;
                if (((ulong)plVar4 & 1) == 0) {
                  _objc_release(param_1);
                  param_1 = lVar13;
                }
                else {
                  uVar12 = 0x53474154;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0x53474154,0xe400000000000000);
                  lVar15 = param_1;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  if (lVar15 == 0) {
                    uStack_a8 = 0;
                    uStack_b0 = 0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar15);
                    _swift_unknownObjectRelease(lVar15);
                  }
                  uStack_88 = uStack_a8;
                  uStack_90 = uStack_b0;
                  lStack_78 = lStack_98;
                  uStack_80 = uStack_a0;
                  if (lStack_98 == 0) {
                    _objc_release(param_1);
                    _swift_bridgeObjectRelease(lVar14);
                    param_1 = lVar13;
                    goto LAB_1047f3a44;
                  }
                  uVar12 = 0x113090170;
                  func_0x0001000285a8(0x113090170,&UNK_10dd35f18);
                  plVar4 = &lStack_c0;
                  _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar12,6);
                  lVar15 = lStack_c0;
                  if (((ulong)plVar4 & 1) == 0) {
                    _objc_release(param_1);
                    _swift_bridgeObjectRelease(lVar14);
                    param_1 = lVar13;
                  }
                  else {
                    uVar12 = 0x495f474e49544152;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0x495f474e49544152,0xeb000000004f464e);
                    lVar16 = param_1;
                    func_0x00010bf67000();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar12);
                    if (lVar16 == 0) {
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      lStack_98 = 0;
                      uStack_a0 = 0;
                    }
                    else {
                      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar16);
                      _swift_unknownObjectRelease(lVar16);
                    }
                    uStack_88 = uStack_a8;
                    uStack_90 = uStack_b0;
                    lStack_78 = lStack_98;
                    uStack_80 = uStack_a0;
                    if (lStack_98 == 0) {
LAB_1047f3a2c:
                      _objc_release(param_1);
                      _swift_bridgeObjectRelease(lVar15);
                      _swift_bridgeObjectRelease(lVar14);
                      param_1 = lVar13;
                      goto LAB_1047f3a44;
                    }
                    uVar12 = 0;
                    FUN_1047f14c4(0);
                    plVar4 = &lStack_c0;
                    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar12,6);
                    lVar16 = lStack_c0;
                    if (((ulong)plVar4 & 1) != 0) {
                      uVar12 = 0x43534544;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0x43534544,0xe400000000000000);
                      lVar17 = param_1;
                      func_0x00010bf67000();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar12);
                      if (lVar17 == 0) {
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        lStack_98 = 0;
                        uStack_a0 = 0;
                      }
                      else {
                        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar17);
                        _swift_unknownObjectRelease(lVar17);
                      }
                      uStack_88 = uStack_a8;
                      uStack_90 = uStack_b0;
                      lStack_78 = lStack_98;
                      uStack_80 = uStack_a0;
                      if (lStack_98 == 0) {
                        _objc_release(param_1);
                        param_1 = lVar16;
                        goto LAB_1047f3a2c;
                      }
                      plVar4 = &lStack_c0;
                      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
                      if (((ulong)plVar4 & 1) != 0) {
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,uVar2);
                        _swift_bridgeObjectRelease(uVar2);
                        lVar17 = lVar6;
                        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                  (lVar6,PTR___sSSN_11034da80);
                        _swift_bridgeObjectRelease(lVar6);
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,uVar5);
                        _swift_bridgeObjectRelease(uVar5);
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar9,uVar8);
                        _swift_bridgeObjectRelease(uVar8);
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar11,uVar10);
                        _swift_bridgeObjectRelease(uVar10);
                        uVar2 = 0;
                        FUN_1047f04c8(0);
                        lVar6 = lVar14;
                        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar14,uVar2);
                        _swift_bridgeObjectRelease(lVar14);
                        uVar2 = 0;
                        FUN_1047f1ac0(0);
                        lVar14 = lVar15;
                        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar15,uVar2);
                        _swift_bridgeObjectRelease(lVar15);
                        lVar15 = lStack_c0;
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,uStack_b8);
                        _swift_bridgeObjectRelease(uStack_b8);
                        func_0x00010c03a800();
                        _objc_release(lVar3);
                        _objc_release(lVar17);
                        _objc_release(lVar7);
                        _objc_release(lVar9);
                        _objc_release(lVar11);
                        _objc_release(lVar6);
                        _objc_release(lVar14);
                        _objc_release(lVar15);
                        _objc_release(param_1);
                        _objc_release(lVar16);
                        _objc_release(lVar13);
                        return unaff_x20;
                      }
                      _objc_release(param_1);
                      param_1 = lVar16;
                    }
                    _objc_release(param_1);
                    _swift_bridgeObjectRelease(lVar15);
                    _swift_bridgeObjectRelease(lVar14);
                    param_1 = lVar13;
                  }
                }
              }
              _objc_release(param_1);
              _swift_bridgeObjectRelease(uVar10);
            }
            _swift_bridgeObjectRelease(uVar8);
          }
          _swift_bridgeObjectRelease(uVar5);
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1047f3acc;
    }
    _objc_release(param_1);
LAB_1047f3a68:
    _swift_bridgeObjectRelease(uVar2);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_1047f3acc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f3b0c; end: 1047f3b33; -[SCAdMediaProductVariant initWithCoder:] */

void FUN_1047f3b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f3134();
  return;
}



/* Entry: 1047f3b34; end: 1047f3b7f; -[SCAdMediaProductVariant description] */

void FUN_1047f3b34(undefined8 param_1)

{
  undefined1 auStack_e0 [192];
  
  _objc_retain();
  FUN_1047f3cc8(auStack_e0);
  _objc_release(param_1);
  func_0x00010470dc5c(auStack_e0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f3b80; end: 1047f3bfb; -[SCAdMediaProductVariant init] */

void FUN_1047f3b80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaProductVariantWrapper.swift",0x2e,2,0xb7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f3bc8);
  (*pcVar1)();
}



/* Entry: 1047f3bfc; end: 1047f3cc7; -[SCAdMediaProductVariant .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f3bfc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090118 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090120));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090128 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090130 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090138 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090140));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090148));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090150));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090160 + 8))
  ;
  return;
}



/* Entry: 1047f3cc8; end: 1047f42b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f3cc8(undefined8 *param_1,long param_2)

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
  undefined8 uVar11;
  undefined1 uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar21 = *(undefined8 *)(param_2 + _DAT_113090110);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113090118);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113090118))[1];
  uVar17 = *(undefined8 *)(param_2 + _DAT_113090120);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113090128);
  uVar7 = ((undefined8 *)(param_2 + _DAT_113090128))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_113090130);
  uVar8 = ((undefined8 *)(param_2 + _DAT_113090130))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_113090138);
  uVar9 = ((undefined8 *)(param_2 + _DAT_113090138))[1];
  func_0x0001047ef6f4(&uStack_a0,*(undefined8 *)(param_2 + _DAT_113090140));
  uVar23 = *(ulong *)(param_2 + _DAT_113090148);
  if (uVar23 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar24 = uVar23 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar23) {
      uVar24 = uVar23;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar22;
  if (uVar24 == 0) {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    func_0x000101552a08(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1047f42b0);
      (*pcVar13)();
    }
    uVar14 = 0;
    do {
      if ((uVar23 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar23 & 0xffffffffffffff8) + 0x10) <= (long)uVar14) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1047f4068);
          (*pcVar13)();
        }
        uVar16 = *(ulong *)(uVar23 + 0x20 + uVar14 * 8);
        _objc_retain();
      }
      else {
        uVar16 = uVar14;
        func_0x0001030b6250(uVar14,uVar23);
      }
      uVar5 = *(undefined8 *)(uVar16 + _DAT_113090020);
      uVar10 = ((undefined8 *)(uVar16 + _DAT_113090020))[1];
      uVar20 = *(ulong *)(uVar16 + _DAT_113090028);
      if (uVar20 >> 0x3e == 0) {
        uVar27 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
        if (uVar27 != 0) goto LAB_1047f3e80;
LAB_1047f3fd8:
        _swift_bridgeObjectRetain(uVar10);
        _objc_release(uVar16);
        puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar27 = uVar20 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar20) {
          uVar27 = uVar20;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar27 == 0) goto LAB_1047f3fd8;
LAB_1047f3e80:
        puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_bridgeObjectRetain(uVar10);
        func_0x000101552a24(0,uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1047f4064);
          (*pcVar13)();
        }
        uVar25 = 0;
        do {
          if ((uVar20 & 0xc000000000000001) == 0) {
            uVar15 = *(ulong *)(uVar20 + uVar25 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar15 = uVar25;
            func_0x0001030b63ec();
          }
          uVar19 = *(undefined8 *)(uVar15 + _DAT_113090060);
          uVar29 = ((undefined8 *)(uVar15 + _DAT_113090060))[1];
          uVar12 = *(undefined1 *)(uVar15 + _DAT_113090068);
          uVar28 = *(undefined8 *)(uVar15 + _DAT_113090070);
          uVar11 = ((undefined8 *)(uVar15 + _DAT_113090070))[1];
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar11);
          _objc_release(uVar15);
          uVar15 = *(ulong *)(puVar26 + 0x10);
          if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar15) {
            func_0x000101552a24(1 < *(ulong *)(puVar26 + 0x18),uVar15 + 1,1);
          }
          uVar25 = uVar25 + 1;
          *(ulong *)(puVar26 + 0x10) = uVar15 + 1;
          *(undefined8 *)(puVar26 + uVar15 * 0x28 + 0x20) = uVar19;
          *(undefined8 *)(puVar26 + uVar15 * 0x28 + 0x28) = uVar29;
          puVar26[uVar15 * 0x28 + 0x30] = uVar12;
          *(undefined8 *)(puVar26 + uVar15 * 0x28 + 0x38) = uVar28;
          *(undefined8 *)(puVar26 + uVar15 * 0x28 + 0x40) = uVar11;
        } while (uVar27 != uVar25);
        _objc_release(uVar16);
      }
      uVar16 = *(ulong *)(puVar22 + 0x10);
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar16) {
        func_0x000101552a08(1 < *(ulong *)(puVar22 + 0x18),uVar16 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar22 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar22 + uVar16 * 0x18 + 0x20) = uVar5;
      *(undefined8 *)(puVar22 + uVar16 * 0x18 + 0x28) = uVar10;
      *(undefined **)(puVar22 + uVar16 * 0x18 + 0x30) = puVar26;
    } while (uVar14 != uVar24);
  }
  uVar23 = *(ulong *)(param_2 + _DAT_113090150);
  if (uVar23 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = uVar23 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar23) {
      uVar24 = uVar23;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar24 != 0) {
    func_0x0001015529ec(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1047f42b4);
      (*pcVar13)();
    }
    uVar14 = 0;
    do {
      if ((uVar23 & 0xc000000000000001) == 0) {
        uVar16 = *(ulong *)(uVar23 + uVar14 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar16 = uVar14;
        func_0x0001030b60b4(uVar14,uVar23);
      }
      uVar5 = *(undefined8 *)(uVar16 + _DAT_1130900e0);
      uVar10 = ((undefined8 *)(uVar16 + _DAT_1130900e0))[1];
      _swift_bridgeObjectRetain(uVar10);
      _objc_release(uVar16);
      uVar16 = *(ulong *)(puVar26 + 0x10);
      if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar16) {
        func_0x0001015529ec(1 < *(ulong *)(puVar26 + 0x18),uVar16 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar26 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar26 + uVar16 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar26 + uVar16 * 0x10 + 0x28) = uVar10;
    } while (uVar24 != uVar14);
  }
  lVar18 = *(long *)(param_2 + _DAT_113090158);
  uVar28 = *(undefined8 *)(lVar18 + _DAT_1130900a0);
  uVar29 = *(undefined8 *)(lVar18 + _DAT_1130900a8);
  uVar19 = *(undefined8 *)(lVar18 + _DAT_1130900b0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113090160);
  uVar10 = ((undefined8 *)(param_2 + _DAT_113090160))[1];
  *param_1 = uVar21;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = uVar17;
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  param_1[8] = uVar4;
  param_1[9] = uVar9;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0x10] = uStack_70;
  param_1[0x11] = puVar22;
  param_1[0x12] = puVar26;
  param_1[0x13] = uVar28;
  param_1[0x14] = uVar29;
  param_1[0x15] = uVar19;
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1047f42b4; end: 1047f42fb;  */

undefined8 FUN_1047f42b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047f42fc; end: 1047f431b;  */

void FUN_1047f42fc(void)

{
  _objc_opt_self(&PTR_PTR_1129d6fd8);
  return;
}



/* Entry: 1047f431c; end: 1047f432b; -[SCAdLeadGenerationFieldIdentifier validationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f431c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130901a0);
}



/* Entry: 1047f432c; end: 1047f433b; -[SCAdLeadGenerationFieldIdentifier standardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f432c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130901a8);
}



/* Entry: 1047f433c; end: 1047f4397; -[SCAdLeadGenerationFieldIdentifier customId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f433c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130901b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130901b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f4398; end: 1047f439f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130901a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130901a8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130901b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f43a0; end: 1047f4543; -[SCAdLeadGenerationFieldIdentifier initWithValidationType:standardType:customId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f43a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_1130901a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130901a8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_1130901b0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f4544; end: 1047f4617; -[SCAdLeadGenerationFieldIdentifier hash] */

undefined8 FUN_1047f4544(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001047f4578();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f4618; end: 1047f4753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f4618(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return 0;
  }
  plVar5 = &lStack_68;
  _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(unaff_x20 + _DAT_1130901a0);
  iVar2 = *(int *)(lStack_68 + _DAT_1130901a0);
  iVar3 = *(int *)(unaff_x20 + _DAT_1130901a8);
  iVar4 = *(int *)(lStack_68 + _DAT_1130901a8);
  lVar7 = ((long *)(unaff_x20 + _DAT_1130901b0))[1];
  lVar9 = ((long *)(lStack_68 + _DAT_1130901b0))[1];
  if (lVar7 == 0) {
    _swift_bridgeObjectRetain(lVar9);
    _objc_release(lStack_68);
    if (lVar9 != 0) {
      _swift_bridgeObjectRelease(lVar9);
      uVar8 = 0;
      goto LAB_1047f472c;
    }
LAB_1047f4728:
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if (lVar9 != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_1130901b0);
      if (lVar6 == *(long *)(lStack_68 + _DAT_1130901b0) && lVar7 == lVar9) {
        _objc_release(lStack_68);
        goto LAB_1047f4728;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar8 = (uint)lVar6;
    }
    _objc_release(lStack_68);
  }
LAB_1047f472c:
  return (iVar1 == iVar2 && iVar3 == iVar4) & uVar8;
}



/* Entry: 1047f4754; end: 1047f47d3; -[SCAdLeadGenerationFieldIdentifier isEqual:] */

uint FUN_1047f4754(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f4618(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f47d4; end: 1047f47d7; -[SCAdLeadGenerationFieldIdentifier copyWithZone:] */

void FUN_1047f47d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f47d8; end: 1047f48f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f47d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x49544144494c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49544144494c4156,0xef455059545f4e4f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x445241444e415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241444e415453,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130901b0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130901b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x495f4d4f54535543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4f54535543,0xe900000000000044);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047f48f8; end: 1047f4947; -[SCAdLeadGenerationFieldIdentifier encodeWithCoder:] */

void FUN_1047f48f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f47d8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f4948; end: 1047f4977;  */

void FUN_1047f4948(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f4978(param_1);
  return;
}



/* Entry: 1047f4978; end: 1047f4b77;  */

undefined8 FUN_1047f4978(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
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
  uVar1 = 0x49544144494c4156;
  uVar4 = 0x545f4e4f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49544144494c4156);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001046b27a8(lVar2);
  if ((uVar4 & 0xff) == 1) {
LAB_1047f4a40:
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar1 = 0x445241444e415453;
  uVar4 = 0x5059545f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241444e415453);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001046b2160(lVar2);
  if ((uVar4 & 0xff) == 1) goto LAB_1047f4a40;
  uVar1 = 0x495f4d4f54535543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4f54535543,0xe900000000000044);
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
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_1047f4b34;
    }
  }
  uVar1 = 0;
LAB_1047f4b34:
  func_0x00010c060380();
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1047f4b78; end: 1047f4b9f; -[SCAdLeadGenerationFieldIdentifier initWithCoder:] */

void FUN_1047f4b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f4978();
  return;
}



/* Entry: 1047f4ba0; end: 1047f4bbb; -[SCAdLeadGenerationFieldIdentifier description] */

void FUN_1047f4ba0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f4bbc; end: 1047f4c37; -[SCAdLeadGenerationFieldIdentifier init] */

void FUN_1047f4bbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdLeadGenerationFieldIdentifierWrapper.swift",0x38,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f4c04);
  (*pcVar1)();
}



/* Entry: 1047f4c38; end: 1047f4c4b; -[SCAdLeadGenerationFieldIdentifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130901b0 + 8))
  ;
  return;
}



/* Entry: 1047f4c4c; end: 1047f4c6b;  */

void FUN_1047f4c4c(void)

{
  _objc_opt_self(&PTR_PTR_1129d70f8);
  return;
}



/* Entry: 1047f4c6c; end: 1047f4c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130901a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130901a8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130901b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f4c74; end: 1047f4c83; -[SCAdLeadGenerationFieldRequest identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130901e0));
  return;
}



/* Entry: 1047f4c84; end: 1047f4c93; -[SCAdLeadGenerationFieldRequest required] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047f4c84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130901e8);
}



/* Entry: 1047f4c94; end: 1047f4cef; -[SCAdLeadGenerationFieldRequest label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4c94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130901f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130901f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f4cf0; end: 1047f4d43; -[SCAdLeadGenerationFieldRequest subFieldLabelsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4cf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130901f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1047f4d44; end: 1047f4d9f; -[SCAdLeadGenerationFieldRequest subFieldsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4d44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113090200);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047fab10(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1047f4da0; end: 1047f4e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4da0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130901e0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_1130901e8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130901f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130901f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090200) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f4e4c; end: 1047f4f53; -[SCAdLeadGenerationFieldRequest initWithIdentifier:required:label:subFieldLabelsArray:subFieldsArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4e4c(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_6 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_6,PTR___sSSN_11034da80);
  }
  if (param_7 != 0) {
    uVar3 = 0;
    FUN_1047fab10(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar3);
  }
  _objc_retain();
  *(undefined8 *)(param_1 + _DAT_1130901e0) = param_3;
  *(undefined1 *)(param_1 + _DAT_1130901e8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_1130901f0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_1130901f8) = param_6;
  *(long *)(param_1 + _DAT_113090200) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f4f54; end: 1047f4f83;  */

void FUN_1047f4f54(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f4f84(param_1);
  return;
}



/* Entry: 1047f4f84; end: 1047f528b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f4f84(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined *apuStack_a8 [2];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  uVar12 = *param_1;
  uVar3 = param_1[1];
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  lVar5 = 0;
  FUN_1047f4c4c();
  lVar6 = lVar5;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_1130901a0) = uVar12;
  *(undefined8 *)(lVar6 + _DAT_1130901a8) = uVar3;
  uVar12 = param_1[2];
  puVar11 = (undefined8 *)(lVar6 + _DAT_1130901b0);
  puVar11[1] = param_1[3];
  *puVar11 = uVar12;
  func_0x0001047f5e88(&uStack_70,&uStack_80,0x112d35ff8,&UNK_10d900cd0);
  plVar7 = &lStack_98;
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130901e0) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_1130901e8) = *(undefined1 *)(param_1 + 4);
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_1130901f0);
  puVar11[1] = uStack_78;
  *puVar11 = uStack_80;
  uStack_88 = param_1[7];
  lVar6 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_1130901f8) = uStack_88;
  if (lVar6 == 0) {
    func_0x0001047f5e88(&uStack_80,apuStack_a8,0x112d35ff8,&UNK_10d900cd0);
    func_0x0001047f5e88(&uStack_88,apuStack_a8,0x112d445a8,&UNK_10d990150);
    func_0x00010473fd84(param_1);
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x10);
    if (lVar5 == 0) {
      func_0x0001047f5e88(&uStack_80,apuStack_a8,0x112d35ff8,&UNK_10d900cd0);
      func_0x0001047f5e88(&uStack_88,apuStack_a8,0x112d445a8,&UNK_10d990150);
      func_0x00010473fd84(param_1);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x0001047f5e88(&uStack_80,apuStack_a8,0x112d35ff8,&UNK_10d900cd0);
      func_0x0001047f5e88(&uStack_88,apuStack_a8,0x112d445a8,&UNK_10d990150);
      apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c7518(0,lVar5,0);
      puVar10 = apuStack_a8[0];
      lVar8 = 0;
      FUN_1047fab10();
      puVar11 = (undefined8 *)(lVar6 + 0x30);
      do {
        uVar12 = puVar11[-2];
        uVar3 = puVar11[-1];
        uVar9 = *puVar11;
        lVar6 = lVar8;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar6 + _DAT_113090378);
        *puVar1 = uVar12;
        puVar1[1] = uVar3;
        *(undefined8 *)(lVar6 + _DAT_113090380) = uVar9;
        puVar4 = PTR_s_init_1125d9248;
        lStack_c8 = lVar6;
        lStack_c0 = lVar8;
        _swift_bridgeObjectRetain(uVar3);
        plVar7 = &lStack_c8;
        _objc_msgSendSuper2(plVar7,puVar4);
        uVar2 = *(ulong *)(puVar10 + 0x10);
        apuStack_a8[0] = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
          func_0x0001046c7518(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
        }
        puVar10 = apuStack_a8[0];
        puVar11 = puVar11 + 3;
        *(ulong *)(apuStack_a8[0] + 0x10) = uVar2 + 1;
        *(long **)(apuStack_a8[0] + uVar2 * 8 + 0x20) = plVar7;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      func_0x00010473fd84(param_1);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113090200) = puVar10;
  _objc_msgSendSuper2(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f528c; end: 1047f52bf; -[SCAdLeadGenerationFieldRequest hash] */

undefined8 FUN_1047f528c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f52c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f52c0; end: 1047f53f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f52c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  func_0x0001047f4578();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130901e8));
  if (((undefined8 *)(unaff_x20 + _DAT_1130901f0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130901f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_1130901f8);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  lVar4 = *(long *)(unaff_x20 + _DAT_113090200);
  lVar2 = lVar4;
  if (lVar4 != 0) {
    uVar3 = 0;
    FUN_1047fab10(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar3);
    lVar2 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f53f4; end: 1047f562b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f53f4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x20;
  uint uVar12;
  uint uVar13;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047f5e88(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)(lStack_88 + _DAT_1130901e0);
      uVar4 = 0;
      FUN_1047f4c4c();
      auStack_80[0] = uVar10;
      lStack_68 = uVar4;
      _objc_retain(uVar10);
      uVar5 = 0;
      FUN_1047f4618();
      func_0x00010006e7f4(auStack_80);
      bVar1 = *(byte *)(unaff_x20 + _DAT_1130901e8);
      bVar2 = *(byte *)(lStack_88 + _DAT_1130901e8);
      lVar7 = ((long *)(unaff_x20 + _DAT_1130901f0))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_1130901f0))[1];
      uVar11 = (uint)(lVar7 == 0 && lVar8 == 0);
      if (lVar7 != 0 && lVar8 != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_1130901f0);
        if ((lVar6 == *(long *)(lStack_88 + _DAT_1130901f0)) && (lVar7 == lVar8)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar6;
        }
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_1130901f8);
      uVar12 = (uint)(lVar7 == 0 && *(long *)(lStack_88 + _DAT_1130901f8) == 0);
      if ((lVar7 != 0) && (*(long *)(lStack_88 + _DAT_1130901f8) != 0)) {
        func_0x00010142cfc4();
        uVar12 = (uint)lVar7;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113090200);
      lVar7 = *(long *)(lStack_88 + _DAT_113090200);
      if (lVar8 == 0) {
        _swift_bridgeObjectRetain(lVar7);
        _objc_release(lStack_88);
        if (lVar7 != 0) {
          _swift_bridgeObjectRelease(lVar7);
          goto LAB_1047f55f8;
        }
        uVar13 = 1;
      }
      else if (lVar7 == 0) {
        _objc_release(lStack_88);
LAB_1047f55f8:
        uVar13 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar7);
        lVar6 = lVar8;
        _swift_bridgeObjectRetain(lVar8);
        uVar13 = (uint)lVar6;
        func_0x00010470d42c();
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(lVar7);
        _objc_release(lStack_88);
      }
      uVar9 = 0;
      if ((((uVar5 & 1) != 0) && (uVar9 = 0, ((bVar1 ^ bVar2) & 1) == 0)) &&
         (((uVar11 ^ 1) & 1) == 0)) {
        uVar9 = uVar12 & uVar13;
      }
      goto LAB_1047f551c;
    }
  }
  uVar9 = 0;
LAB_1047f551c:
  return uVar9 & 1;
}



/* Entry: 1047f562c; end: 1047f56ab; -[SCAdLeadGenerationFieldRequest isEqual:] */

uint FUN_1047f562c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047f53f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f56ac; end: 1047f56af; -[SCAdLeadGenerationFieldRequest copyWithZone:] */

void FUN_1047f56ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f56b0; end: 1047f5887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f56b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4445524955514552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445524955514552,0xe800000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130901f0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130901f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130901f8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20f270);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_113090200);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1047fab10(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f290);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


