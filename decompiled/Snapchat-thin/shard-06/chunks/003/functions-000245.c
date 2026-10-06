/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047fa558; end: 1047fa6df; -[SCAdMediaLeadGenerationMultiSelectSubField hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fa558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090378);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090378))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090380);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1047fa6e0; end: 1047fa75f; -[SCAdMediaLeadGenerationMultiSelectSubField isEqual:] */

uint FUN_1047fa6e0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047fa600(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047fa760; end: 1047fa763; -[SCAdMediaLeadGenerationMultiSelectSubField copyWithZone:] */

void FUN_1047fa760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fa764; end: 1047fa817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fa764(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090378);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090378))[1]);
  uVar1 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f4b0);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047fa818; end: 1047fa867; -[SCAdMediaLeadGenerationMultiSelectSubField encodeWithCoder:] */

void FUN_1047fa818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047fa764(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fa868; end: 1047fa897;  */

void FUN_1047fa868(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fa898(param_1);
  return;
}



/* Entry: 1047fa898; end: 1047faa3b;  */

undefined8 FUN_1047fa898(long param_1)

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
      uVar4 = 0xf20f4b0;
      uVar1 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
      lVar2 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar1);
      FUN_1046b1e98(lVar2);
      if ((uVar4 & 0xff) != 1) {
        uVar1 = uStack_90;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
        _swift_bridgeObjectRelease(uStack_88);
        func_0x00010c021420();
        _objc_release(uVar1);
        _objc_release(param_1);
        return unaff_x20;
      }
      _swift_bridgeObjectRelease(uStack_88);
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047faa3c; end: 1047faa63; -[SCAdMediaLeadGenerationMultiSelectSubField initWithCoder:] */

void FUN_1047faa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fa898();
  return;
}



/* Entry: 1047faa64; end: 1047faa7f; -[SCAdMediaLeadGenerationMultiSelectSubField description] */

void FUN_1047faa64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047faa80; end: 1047faafb; -[SCAdMediaLeadGenerationMultiSelectSubField init] */

void FUN_1047faa80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaLeadGenerationMultiSelectSubFieldWrapper.swift",0x41,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047faac8);
  (*pcVar1)();
}



/* Entry: 1047faafc; end: 1047fab0f; -[SCAdMediaLeadGenerationMultiSelectSubField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047faafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090378 + 8))
  ;
  return;
}



/* Entry: 1047fab10; end: 1047fab2f;  */

void FUN_1047fab10(void)

{
  _objc_opt_self(&PTR_PTR_1129d7670);
  return;
}



/* Entry: 1047fab30; end: 1047fab33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fab30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1047fab34; end: 1047fab43; -[SCAdAutoAdvanceInfo enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047fab34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130903b0);
}



/* Entry: 1047fab44; end: 1047fab53; -[SCAdAutoAdvanceInfo numberOfLoops] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1047fab44(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1130903b8);
}



/* Entry: 1047fab54; end: 1047fab63; -[SCAdAutoAdvanceInfo videoLengthThresholdMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fab54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130903c0);
}



/* Entry: 1047fab64; end: 1047fab73; -[SCAdAutoAdvanceInfo imageAdsAutoAdvanceDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fab64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130903c8);
}



/* Entry: 1047fab74; end: 1047fab83; -[SCAdAutoAdvanceInfo firstPlayAutoAdvanceMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fab74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130903d0));
  return;
}



/* Entry: 1047fab84; end: 1047fac1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fab84(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130903b0) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_1130903b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130903c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130903c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130903d0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fac20; end: 1047fadef; -[SCAdAutoAdvanceInfo initWithEnable:numberOfLoops:videoLengthThresholdMs:imageAdsAutoAdvanceDurationMs:firstPlayAutoAdvanceMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fac20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined1 *)(param_3 + _DAT_1130903b0) = param_5;
  *(undefined4 *)(param_3 + _DAT_1130903b8) = param_6;
  *(undefined8 *)(param_3 + _DAT_1130903c0) = param_1;
  *(undefined8 *)(param_3 + _DAT_1130903c8) = param_2;
  *(undefined8 *)(param_3 + _DAT_1130903d0) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1047fadf0; end: 1047fae23; -[SCAdAutoAdvanceInfo hash] */

undefined8 FUN_1047fadf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047fae24();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fae24; end: 1047faf13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fae24(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130903b0));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_1130903b8));
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_1130903c0) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_1130903c0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_1130903c8) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_1130903c8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_1130903d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047faf14; end: 1047fb0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047faf14(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
    return 0;
  }
  plVar7 = &lStack_98;
  _swift_dynamicCast(plVar7,auStack_90,PTR___sypN_11034f1a8 + 8,lVar11,6);
  if (((ulong)plVar7 & 1) == 0) {
    return 0;
  }
  bVar5 = *(byte *)(unaff_x20 + _DAT_1130903b0);
  bVar6 = *(byte *)(lStack_98 + _DAT_1130903b0);
  iVar3 = *(int *)(unaff_x20 + _DAT_1130903b8);
  iVar4 = *(int *)(lStack_98 + _DAT_1130903b8);
  dVar13 = *(double *)(unaff_x20 + _DAT_1130903c0);
  dVar14 = *(double *)(lStack_98 + _DAT_1130903c0);
  dVar15 = *(double *)(unaff_x20 + _DAT_1130903c8);
  dVar16 = *(double *)(lStack_98 + _DAT_1130903c8);
  lVar12 = *(long *)(unaff_x20 + _DAT_1130903d0);
  lVar11 = *(long *)(lStack_98 + _DAT_1130903d0);
  if (lVar12 == 0) {
    lVar9 = lVar11;
    _objc_retain(lVar11);
    _objc_release(lStack_98);
    if (lVar11 == 0) {
      uVar10 = 1;
      goto LAB_1047fb064;
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar9 = lStack_98;
    if (lVar11 != 0) {
      func_0x0001002ed07c(0);
      _objc_retain(lVar11);
      _objc_retain(lVar12);
      lVar8 = lVar12;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      uVar10 = (uint)lVar8;
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
  }
  _objc_release(lVar9);
LAB_1047fb064:
  uVar1 = 0;
  if (dVar13 == dVar14) {
    uVar1 = ((bVar5 ^ bVar6) ^ 1) & (uint)(iVar3 == iVar4);
  }
  uVar2 = 0;
  if (dVar15 == dVar16) {
    uVar2 = uVar1;
  }
  return uVar2 & uVar10;
}



/* Entry: 1047fb0b0; end: 1047fb12f; -[SCAdAutoAdvanceInfo isEqual:] */

uint FUN_1047fb0b0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047faf14(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047fb130; end: 1047fb133; -[SCAdAutoAdvanceInfo copyWithZone:] */

void FUN_1047fb130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fb134; end: 1047fb2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb134(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c42414e45,0xe600000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f5f5245424d554e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f5245424d554e,0xef53504f4f4c5f46);
  func_0x00010bf92f80(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130903c0);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20f520);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130903c8);
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20f540);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20f570);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047fb2b0; end: 1047fb2ff; -[SCAdAutoAdvanceInfo encodeWithCoder:] */

void FUN_1047fb2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047fb134(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fb300; end: 1047fb33f;  */

undefined8 FUN_1047fb300(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047fb434(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fb340; end: 1047fb37b; -[SCAdAutoAdvanceInfo initWithCoder:] */

undefined8 FUN_1047fb340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047fb434();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047fb37c; end: 1047fb3a7; -[SCAdAutoAdvanceInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb37c(long param_1)

{
  func_0x00010c067ec0(*(undefined8 *)(param_1 + _DAT_1130903d0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fb3a8; end: 1047fb423; -[SCAdAutoAdvanceInfo init] */

void FUN_1047fb3a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdAutoAdvanceInfoWrapper.swift",
             0x2a,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fb3f0);
  (*pcVar1)();
}



/* Entry: 1047fb424; end: 1047fb433; -[SCAdAutoAdvanceInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130903d0));
  return;
}



/* Entry: 1047fb434; end: 1047fb633;  */

undefined8 FUN_1047fb434(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = 0x454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c42414e45,0xe600000000000000);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar1);
  uVar1 = 0x4f5f5245424d554e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f5245424d554e,0xef53504f4f4c5f46);
  func_0x00010bf66ee0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20f520);
  func_0x00010bf66da0(param_2);
  uVar3 = param_1;
  _objc_release(uVar1);
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20f540);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20f570);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_2);
    _swift_unknownObjectRelease(param_2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_98;
    _swift_dynamicCast(puVar2,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_98;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c00f720(param_1,uVar3);
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1047fb634; end: 1047fb653;  */

void FUN_1047fb634(void)

{
  _objc_opt_self(&PTR_PTR_1129d7748);
  return;
}



/* Entry: 1047fb654; end: 1047fb683;  */

void FUN_1047fb654(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fba30(param_1);
  return;
}



/* Entry: 1047fb684; end: 1047fb8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb684(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113090400) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fc1d4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113090408))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090408);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047fb8c8; end: 1047fb8d7; -[SCAdMediaImage location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090400));
  return;
}



/* Entry: 1047fb8d8; end: 1047fb933; -[SCAdMediaImage url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb8d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090408))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090408);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fb934; end: 1047fb99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090400) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090408);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fb9a0; end: 1047fba2f; -[SCAdMediaImage initWithLocation:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fb9a0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113090400) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113090408);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1047fba30; end: 1047fbb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fba30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar7 = &lStack_a0;
  _swift_getObjectType();
  lVar10 = param_1[2];
  if (lVar10 == 1) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    uVar2 = *param_1;
    uVar4 = param_1[1];
    lVar8 = 0;
    FUN_1047fcc14();
    lVar9 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_113090438) = uVar2;
    puVar5 = (undefined8 *)(lVar9 + _DAT_113090440);
    *puVar5 = uVar4;
    puVar5[1] = lVar10;
    puVar5 = (undefined8 *)(lVar9 + _DAT_113090448);
    *puVar5 = uVar1;
    puVar5[1] = uVar3;
    puVar6 = PTR_s_init_1125d9248;
    lStack_a0 = lVar9;
    lStack_98 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(uVar3);
    _objc_msgSendSuper2(&lStack_a0,puVar6);
  }
  *(long **)(unaff_x20 + _DAT_113090400) = plVar7;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113090408);
  puVar5[1] = uStack_68;
  *puVar5 = uStack_70;
  FUN_1047fc0fc(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001017b64d0(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fbb60; end: 1047fbb93; -[SCAdMediaImage hash] */

undefined8 FUN_1047fbb60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047fb684();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fbb94; end: 1047fbc13; -[SCAdMediaImage isEqual:] */

uint FUN_1047fbb94(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047fb744(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047fbc14; end: 1047fbc17; -[SCAdMediaImage copyWithZone:] */

void FUN_1047fbc14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fbc18; end: 1047fbcd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fbc18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4e4f495441434f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441434f4c,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090408))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090408);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047fbcd4; end: 1047fbd23; -[SCAdMediaImage encodeWithCoder:] */

void FUN_1047fbcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047fbc18(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fbd24; end: 1047fbd53;  */

void FUN_1047fbd24(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fbd54(param_1);
  return;
}



/* Entry: 1047fbd54; end: 1047fbf1b;  */

undefined8 FUN_1047fbd54(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
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
  
  iVar2 = (int)&uStack_90;
  uVar6 = 0;
  uVar3 = 0x4e4f495441434f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441434f4c,0xe800000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1047fcc14(0);
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_90;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((uVar6 & 1) != 0) {
      uVar5 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_1047fbed4;
    }
  }
  uVar5 = 0;
LAB_1047fbed4:
  func_0x00010c026c20();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  return unaff_x20;
}



/* Entry: 1047fbf1c; end: 1047fbf43; -[SCAdMediaImage initWithCoder:] */

void FUN_1047fbf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fbd54();
  return;
}



/* Entry: 1047fbf44; end: 1047fbf77; -[SCAdMediaImage description] */

void FUN_1047fbf44(void)

{
  undefined1 auStack_48 [56];
  
  FUN_1047fc030(auStack_48);
  func_0x0001017b64d0(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fbf78; end: 1047fbff3; -[SCAdMediaImage init] */

void FUN_1047fbf78(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaImageWrapper.swift",0x25,2
             ,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fbfc0);
  (*pcVar1)();
}



/* Entry: 1047fbff4; end: 1047fc02f; -[SCAdMediaImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fbff4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090408 + 8))
  ;
  return;
}



/* Entry: 1047fc030; end: 1047fc0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc030(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_2 + _DAT_113090400);
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar6 = 0;
    uVar5 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_113090438);
    uVar2 = *(undefined8 *)(lVar3 + _DAT_113090440);
    uVar5 = ((undefined8 *)(lVar3 + _DAT_113090440))[1];
    uVar7 = *(undefined8 *)(lVar3 + _DAT_113090448);
    uVar4 = ((undefined8 *)(lVar3 + _DAT_113090448))[1];
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_113090408);
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  param_1[4] = uVar4;
  uVar2 = puVar1[1];
  uVar7 = *puVar1;
  param_1[6] = puVar1[1];
  param_1[5] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 1047fc0fc; end: 1047fc143;  */

undefined8 FUN_1047fc0fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047fc144; end: 1047fc163;  */

void FUN_1047fc144(void)

{
  _objc_opt_self(&PTR_PTR_1129d7838);
  return;
}



/* Entry: 1047fc164; end: 1047fc1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc164(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090438) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090440);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090448);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fc1d4; end: 1047fc2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc1d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090438));
  if (((undefined8 *)(unaff_x20 + _DAT_113090440))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090440);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090448))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090448);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047fc2ac; end: 1047fc443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047fc2ac(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113090438);
      iVar2 = *(int *)(lStack_68 + _DAT_113090438);
      lVar5 = ((long *)(unaff_x20 + _DAT_113090440))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113090440))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113090440);
        if (lVar4 == *(long *)(lStack_68 + _DAT_113090440) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113090448))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113090448))[1];
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 == 0) {
LAB_1047fc430:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar6);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar6 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_113090448);
          if (lVar4 == *(long *)(lStack_68 + _DAT_113090448) && lVar5 == lVar6) {
            _objc_release(lStack_68);
            goto LAB_1047fc430;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
        _objc_release(lStack_68);
      }
      if (iVar1 == iVar2) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1047fc384;
      }
    }
  }
  uVar7 = 0;
LAB_1047fc384:
  return uVar7 & 1;
}



/* Entry: 1047fc444; end: 1047fc453; -[SCAdMediaLocation mediaLocationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fc444(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090438);
}



/* Entry: 1047fc454; end: 1047fc45f; -[SCAdMediaLocation mediaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090440))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090440);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fc460; end: 1047fc46b; -[SCAdMediaLocation mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc460(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090448))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090448);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fc46c; end: 1047fc4c3;  */

void FUN_1047fc46c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fc4c4; end: 1047fc54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090438) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090440);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090448);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fc550; end: 1047fc60b; -[SCAdMediaLocation initWithMediaLocationType:mediaInfo:mediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc550(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113090438) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113090440);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113090448);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fc60c; end: 1047fc63f; -[SCAdMediaLocation hash] */

undefined8 FUN_1047fc60c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047fc1d4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fc640; end: 1047fc6bf; -[SCAdMediaLocation isEqual:] */

uint FUN_1047fc640(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047fc2ac(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047fc6c0; end: 1047fc6c3; -[SCAdMediaLocation copyWithZone:] */

void FUN_1047fc6c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fc6c4; end: 1047fc7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fc6c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20f5f0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090440))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090440);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4e495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f414944454d,0xea00000000004f46);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090448))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090448);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f414944454d,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047fc7f4; end: 1047fc843; -[SCAdMediaLocation encodeWithCoder:] */

void FUN_1047fc7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047fc6c4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fc844; end: 1047fc873;  */

void FUN_1047fc844(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fc874(param_1);
  return;
}



/* Entry: 1047fc874; end: 1047fcb13;  */

undefined8 FUN_1047fc874(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar8 = 0xf20f5f0;
  uVar4 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013);
  lVar5 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  FUN_1046b2b84(lVar5);
  if ((uVar8 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar4 = 0x4e495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f414944454d,0xea00000000004f46);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x44495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f414944454d,0xe800000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c029960();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1047fcb14; end: 1047fcb3b; -[SCAdMediaLocation initWithCoder:] */

void FUN_1047fcb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fc874();
  return;
}



/* Entry: 1047fcb3c; end: 1047fcb57; -[SCAdMediaLocation description] */

void FUN_1047fcb3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fcb58; end: 1047fcbd3; -[SCAdMediaLocation init] */

void FUN_1047fcb58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaLocationWrapper.swift",
             0x28,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fcba0);
  (*pcVar1)();
}



/* Entry: 1047fcbd4; end: 1047fcc13; -[SCAdMediaLocation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fcbd4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090440 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090448 + 8))
  ;
  return;
}



/* Entry: 1047fcc14; end: 1047fcc33;  */

void FUN_1047fcc14(void)

{
  _objc_opt_self(&PTR_PTR_1129d7910);
  return;
}



/* Entry: 1047fcc34; end: 1047fcccb; -[SCAdMediaPlayable playableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fcc34(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113815328,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1047fcccc; end: 1047fcd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047fcccc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  lVar1 = _DAT_113815328;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 1047fcd64; end: 1047fce2f; -[SCAdMediaPlayable initWithPlayableURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1047fcd64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_113815328,lVar4,lVar2);
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 1047fce30; end: 1047fceb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047fce30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar1 = _DAT_113815328;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x00010474660c(param_1);
  return puVar3;
}



/* Entry: 1047fceb4; end: 1047fcff3; -[SCAdMediaPlayable hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047fceb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  _objc_retain(param_1);
  uVar1 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1047fcff4; end: 1047fd083; -[SCAdMediaPlayable isEqual:] */

uint FUN_1047fcff4(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047fcf3c(&uStack_40);
  _objc_release(param_1);
  FUN_1047fd3c0(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047fd084; end: 1047fd087; -[SCAdMediaPlayable copyWithZone:] */

void FUN_1047fd084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fd088; end: 1047fd127; -[SCAdMediaPlayable encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  uVar2 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fd128; end: 1047fd157;  */

void FUN_1047fd128(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fd158(param_1);
  return;
}



/* Entry: 1047fd158; end: 1047fd3bf;  */

undefined8 FUN_1047fd158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_90 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  lVar1 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar1);
    _swift_unknownObjectRelease(lVar1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    FUN_1047fd3c0(&uStack_70,0x112d387f8,&UNK_10d902650);
    (**(code **)(lVar6 + 0x38))(lVar4,1,1,lVar2);
  }
  else {
    lVar1 = lVar4;
    _swift_dynamicCast(lVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,lVar2,6);
    (**(code **)(lVar6 + 0x38))(lVar4,(uint)lVar1 ^ 1,1,lVar2);
    lVar1 = lVar4;
    (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar1 != 1) {
      lVar1 = lVar5;
      (**(code **)(lVar6 + 0x20))(lVar5,lVar4,lVar2);
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      func_0x00010c036b80();
      _objc_release(param_1);
      _objc_release(lVar1);
      (**(code **)(lVar6 + 8))(lVar5,lVar2);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  FUN_1047fd3c0(lVar4,0x112d36580,&UNK_10d9016d0);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047fd3c0; end: 1047fd3ff;  */

undefined8 FUN_1047fd3c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1047fd400; end: 1047fd427; -[SCAdMediaPlayable initWithCoder:] */

void FUN_1047fd400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fd158();
  return;
}



/* Entry: 1047fd428; end: 1047fd4bf; -[SCAdMediaPlayable description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd428(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1047425ec();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_113815328;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1 + lVar1,
             lVar2);
  func_0x00010474660c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fd4c0; end: 1047fd53b; -[SCAdMediaPlayable init] */

void FUN_1047fd4c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaPlayableWrapper.swift",
             0x28,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fd508);
  (*pcVar1)();
}



/* Entry: 1047fd53c; end: 1047fd577; -[SCAdMediaPlayable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd53c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113815328;
  lVar2 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x0001047fd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1047fd578; end: 1047fd57f;  */

void FUN_1047fd578(void)

{
  if (lRam00000001130904a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81c298);
  return;
}



/* Entry: 1047fd580; end: 1047fd5b7;  */

void FUN_1047fd580(undefined8 param_1)

{
  if (lRam00000001130904a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81c298);
  return;
}



/* Entry: 1047fd5b8; end: 1047fd623;  */

void FUN_1047fd5b8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 1047fd624; end: 1047fd633; -[SCAdMediaVideo location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130904b0));
  return;
}



/* Entry: 1047fd634; end: 1047fd68f; -[SCAdMediaVideo url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd634(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130904b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130904b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fd690; end: 1047fd6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130904b0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130904b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047fd6fc; end: 1047fd78b; -[SCAdMediaVideo initWithLocation:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd6fc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_1130904b0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_1130904b8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1047fd78c; end: 1047fd7bb;  */

void FUN_1047fd78c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fd7bc(param_1);
  return;
}



/* Entry: 1047fd7bc; end: 1047fd8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd7bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar7 = &lStack_a0;
  _swift_getObjectType();
  lVar10 = param_1[2];
  if (lVar10 == 1) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    uVar2 = *param_1;
    uVar4 = param_1[1];
    lVar8 = 0;
    FUN_1047fcc14();
    lVar9 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_113090438) = uVar2;
    puVar5 = (undefined8 *)(lVar9 + _DAT_113090440);
    *puVar5 = uVar4;
    puVar5[1] = lVar10;
    puVar5 = (undefined8 *)(lVar9 + _DAT_113090448);
    *puVar5 = uVar1;
    puVar5[1] = uVar3;
    puVar6 = PTR_s_init_1125d9248;
    lStack_a0 = lVar9;
    lStack_98 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(uVar3);
    _objc_msgSendSuper2(&lStack_a0,puVar6);
  }
  *(long **)(unaff_x20 + _DAT_1130904b0) = plVar7;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_1130904b8);
  puVar5[1] = uStack_68;
  *puVar5 = uStack_70;
  FUN_1047fdb64(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001017b6504(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}


