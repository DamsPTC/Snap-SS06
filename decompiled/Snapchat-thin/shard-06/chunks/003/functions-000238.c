/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047d7054; end: 1047d70d3; -[SCAdMediaSnapcodeInfo isEqual:] */

uint FUN_1047d7054(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047d6ee8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d70d4; end: 1047d70d7; -[SCAdMediaSnapcodeInfo copyWithZone:] */

void FUN_1047d70d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d70d8; end: 1047d71cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d70d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11308f9b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f9b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x45444f434e414353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f434e414353,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f9c0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f9c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e730);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047d71cc; end: 1047d721b; -[SCAdMediaSnapcodeInfo encodeWithCoder:] */

void FUN_1047d71cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d70d8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d721c; end: 1047d724b;  */

void FUN_1047d721c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d724c(param_1);
  return;
}



/* Entry: 1047d724c; end: 1047d7473;  */

undefined8 FUN_1047d724c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
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
  uVar4 = 0x45444f434e414353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f434e414353,0xeb0000000044495f);
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
  uVar6 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e730);
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
  func_0x00010c041980();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1047d7474; end: 1047d749b; -[SCAdMediaSnapcodeInfo initWithCoder:] */

void FUN_1047d7474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d724c();
  return;
}



/* Entry: 1047d749c; end: 1047d74b7; -[SCAdMediaSnapcodeInfo description] */

void FUN_1047d749c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d74b8; end: 1047d7533; -[SCAdMediaSnapcodeInfo init] */

void FUN_1047d74b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaSnapcodeInfoWrapper.swift"
             ,0x2c,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d7500);
  (*pcVar1)();
}



/* Entry: 1047d7534; end: 1047d7573; -[SCAdMediaSnapcodeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7534(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f9b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f9c0 + 8))
  ;
  return;
}



/* Entry: 1047d7574; end: 1047d7593;  */

void FUN_1047d7574(void)

{
  _objc_opt_self(&PTR_PTR_1129d59c0);
  return;
}



/* Entry: 1047d7594; end: 1047d7597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d7598; end: 1047d75e3; -[SCAdMediaAdToPlace placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7598(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f9f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308f9f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d75e4; end: 1047d75e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d75e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d75e8; end: 1047d76a7; -[SCAdMediaAdToPlace initWithPlaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d75e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308f9f0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d76a8; end: 1047d780b; -[SCAdMediaAdToPlace hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d76a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308f9f0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11308f9f0))[1];
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



/* Entry: 1047d780c; end: 1047d788b; -[SCAdMediaAdToPlace isEqual:] */

uint FUN_1047d780c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047d773c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d788c; end: 1047d788f; -[SCAdMediaAdToPlace copyWithZone:] */

void FUN_1047d788c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d7890; end: 1047d7933; -[SCAdMediaAdToPlace encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308f9f0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11308f9f0))[1];
  _objc_retain(param_3);
  _objc_retain(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d7934; end: 1047d7963;  */

void FUN_1047d7934(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d7964(param_1);
  return;
}



/* Entry: 1047d7964; end: 1047d7aa3;  */

undefined8 FUN_1047d7964(long param_1)

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
  uVar1 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
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
      func_0x00010c036360();
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



/* Entry: 1047d7aa4; end: 1047d7acb; -[SCAdMediaAdToPlace initWithCoder:] */

void FUN_1047d7aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d7964();
  return;
}



/* Entry: 1047d7acc; end: 1047d7ae7; -[SCAdMediaAdToPlace description] */

void FUN_1047d7acc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d7ae8; end: 1047d7b63; -[SCAdMediaAdToPlace init] */

void FUN_1047d7ae8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaAdToPlaceWrapper.swift",
             0x29,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d7b30);
  (*pcVar1)();
}



/* Entry: 1047d7b64; end: 1047d7b77; -[SCAdMediaAdToPlace .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f9f0 + 8))
  ;
  return;
}



/* Entry: 1047d7b78; end: 1047d7b97;  */

void FUN_1047d7b78(void)

{
  _objc_opt_self(&PTR_PTR_1129d5a98);
  return;
}



/* Entry: 1047d7b98; end: 1047d7b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7b98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d7b9c; end: 1047d7bab; -[SCAdAppInstallAppPopularityInfo appRating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d7b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fa20);
}



/* Entry: 1047d7bac; end: 1047d7bbb; -[SCAdAppInstallAppPopularityInfo appDownloads] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d7bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fa28);
}



/* Entry: 1047d7bbc; end: 1047d7bcf; -[SCAdAppInstallAppPopularityInfo appRatingCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d7bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fa30);
}



/* Entry: 1047d7bd0; end: 1047d7cc7; -[SCAdAppInstallAppPopularityInfo initWithAppRating:appDownloads:appRatingCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7bd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11308fa20) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308fa28) = param_4;
  *(undefined8 *)(param_2 + _DAT_11308fa30) = param_5;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d7cc8; end: 1047d7d47; -[SCAdAppInstallAppPopularityInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7cc8(long param_1)

{
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308fa20) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308fa20);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308fa28));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308fa30));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d7d48; end: 1047d7e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d7d48(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
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
      dVar6 = *(double *)(unaff_x20 + _DAT_11308fa20);
      dVar7 = *(double *)(lStack_68 + _DAT_11308fa20);
      lVar2 = *(long *)(unaff_x20 + _DAT_11308fa28);
      lVar4 = *(long *)(lStack_68 + _DAT_11308fa28);
      lVar3 = *(long *)(unaff_x20 + _DAT_11308fa30);
      lVar5 = *(long *)(lStack_68 + _DAT_11308fa30);
      _objc_release();
      if (dVar6 != dVar7) {
        return false;
      }
      return lVar2 == lVar4 && lVar3 == lVar5;
    }
  }
  return false;
}



/* Entry: 1047d7e1c; end: 1047d7e9b; -[SCAdAppInstallAppPopularityInfo isEqual:] */

uint FUN_1047d7e1c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d7d48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d7e9c; end: 1047d7e9f; -[SCAdAppInstallAppPopularityInfo copyWithZone:] */

void FUN_1047d7e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d7ea0; end: 1047d7f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d7ea0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fa20);
  uVar1 = 0x495441525f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495441525f505041,0xea0000000000474e);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e574f445f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e574f445f505041,0xed00005344414f4c);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e7b0);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047d7f9c; end: 1047d7feb; -[SCAdAppInstallAppPopularityInfo encodeWithCoder:] */

void FUN_1047d7f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d7ea0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d7fec; end: 1047d802b;  */

undefined8 FUN_1047d7fec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047d8104(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d802c; end: 1047d8067; -[SCAdAppInstallAppPopularityInfo initWithCoder:] */

undefined8 FUN_1047d802c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047d8104();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047d8068; end: 1047d8083; -[SCAdAppInstallAppPopularityInfo description] */

void FUN_1047d8068(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d8084; end: 1047d80ff; -[SCAdAppInstallAppPopularityInfo init] */

void FUN_1047d8084(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdAppInstallAppPopularityInfoWrapper.swift",0x36,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d80cc);
  (*pcVar1)();
}



/* Entry: 1047d8100; end: 1047d8103; -[SCAdAppInstallAppPopularityInfo .cxx_destruct] */

void FUN_1047d8100(void)

{
  return;
}



/* Entry: 1047d8104; end: 1047d81ef;  */

void FUN_1047d8104(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x495441525f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495441525f505041,0xea0000000000474e);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0x4e574f445f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e574f445f505041,0xed00005344414f4c);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e7b0);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bff35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 1047d81f0; end: 1047d820f;  */

void FUN_1047d81f0(void)

{
  _objc_opt_self(&PTR_PTR_1129d5b68);
  return;
}



/* Entry: 1047d8210; end: 1047d8213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fa20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fa28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fa30) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d8214; end: 1047d821f; -[SCAdAppInstallAppReview reviewId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fa60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308fa60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d8220; end: 1047d822f; -[SCAdAppInstallAppReview rating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fa68));
  return;
}



/* Entry: 1047d8230; end: 1047d8307; -[SCAdAppInstallAppReview date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8230(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1047d8ec4(param_1 + _DAT_113815310,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1047d8308; end: 1047d8313; -[SCAdAppInstallAppReview title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8308(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113815318);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113815318))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d8314; end: 1047d831f; -[SCAdAppInstallAppReview text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113815320);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113815320))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d8320; end: 1047d8367;  */

void FUN_1047d8320(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1047d8368; end: 1047d8467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047d8368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fa60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fa68) = param_3;
  FUN_1047d8ec4(param_4,unaff_x20 + _DAT_113815310,0x112d373d8,&UNK_10d9014c0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815318);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815320);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  func_0x0001047d8f0c(param_4,0x112d373d8,&UNK_10d9014c0);
  return puVar2;
}



/* Entry: 1047d8468; end: 1047d861b; -[SCAdAppInstallAppReview initWithReviewId:rating:date:title:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1047d8468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x112d373d8;
  puVar6 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_70 - extraout_x8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_5);
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  uVar7 = (ulong)(param_5 == 0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,uVar7,1);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar8 = uVar7;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308fa60);
  *puVar1 = param_3;
  puVar1[1] = puVar6;
  *(undefined8 *)(param_1 + _DAT_11308fa68) = param_4;
  FUN_1047d8ec4(lVar3,param_1 + _DAT_113815310,0x112d373d8,&UNK_10d9014c0);
  puVar1 = (undefined8 *)(param_1 + _DAT_113815318);
  *puVar1 = param_6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_113815320);
  *puVar1 = param_7;
  puVar1[1] = uVar8;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_retain(param_4);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar6);
  func_0x0001047d8f0c(lVar3,0x112d373d8,&UNK_10d9014c0);
  return plVar5;
}



/* Entry: 1047d861c; end: 1047d864b;  */

void FUN_1047d861c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d864c(param_1);
  return;
}



/* Entry: 1047d864c; end: 1047d8797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047d864c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar6 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fa60);
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  if (*(char *)(param_1 + 3) == '\x01') {
    _swift_bridgeObjectRetain(uVar3);
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar7 = param_1[2];
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar3);
    func_0x00010c00e360(uVar7);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fa68) = puVar4;
  lVar5 = 0;
  FUN_10470ee30();
  FUN_1047d8ec4((long)param_1 + (long)*(int *)(lVar5 + 0x18),unaff_x20 + _DAT_113815310,0x112d373d8,
                &UNK_10d9014c0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113815318);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113815320);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,puVar4);
  FUN_1047d8798(param_1);
  return puVar6;
}



/* Entry: 1047d8798; end: 1047d87d3;  */

undefined8 FUN_1047d8798(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10470ee30();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1047d87d4; end: 1047d8807; -[SCAdAppInstallAppReview hash] */

undefined8 FUN_1047d87d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047d8808();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d8808; end: 1047d8a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8808(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fa60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fa60))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar5 = *(long *)(unaff_x20 + _DAT_11308fa68);
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar5);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar5);
  }
  FUN_1047d8ec4(unaff_x20 + _DAT_113815310,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar5 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar5);
  if ((int)puVar3 == 1) {
    func_0x0001047d8f0c(puVar4,0x112d373d8,&UNK_10d9014c0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar5);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815318);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113815318))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815320);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113815320))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d8a08; end: 1047d8ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047d8a08(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar13 = unaff_x20;
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar12 - extraout_x8_00;
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12;
  FUN_1047d8ec4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001047d8f0c(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar13,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar13 = *(long *)(unaff_x20 + _DAT_11308fa60);
      puStack_a8 = puVar12;
      if ((lVar13 == *(long *)(lStack_88 + _DAT_11308fa60)) &&
         (((long *)(unaff_x20 + _DAT_11308fa60))[1] == ((long *)(lStack_88 + _DAT_11308fa60))[1])) {
        uStack_9c = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_9c = (uint)lVar13 ^ 1;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fa68);
      lVar13 = *(long *)(lStack_88 + _DAT_11308fa68);
      uVar10 = (uint)(lVar8 == 0 && lVar13 == 0);
      if ((lVar8 != 0) && (lVar13 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar13);
        _objc_retain();
        lVar3 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar3;
        _objc_release(lVar8);
        _objc_release(lVar13);
      }
      lVar13 = _DAT_113815310;
      uStack_a0 = uVar10;
      FUN_1047d8ec4(lStack_88 + _DAT_113815310,lVar16,0x112d373d8,&UNK_10d9014c0);
      lVar14 = (long)*(int *)(lVar14 + 0x30);
      FUN_1047d8ec4(unaff_x20 + lVar13,lVar11,0x112d373d8,&UNK_10d9014c0);
      FUN_1047d8ec4(lVar16,lVar11 + lVar14,0x112d373d8,&UNK_10d9014c0);
      pcVar9 = *(code **)(lVar7 + 0x30);
      lVar13 = lVar11;
      (*pcVar9)(lVar11,1,lVar1);
      if ((int)lVar13 == 1) {
        func_0x0001047d8f0c(lVar16,0x112d373d8,&UNK_10d9014c0);
        lVar14 = lVar11 + lVar14;
        (*pcVar9)(lVar14,1,lVar1);
        if ((int)lVar14 == 1) {
          func_0x0001047d8f0c(lVar11,0x112d373d8,&UNK_10d9014c0);
          uVar10 = 0;
        }
        else {
LAB_1047d8d58:
          func_0x0001047d8f0c(lVar11,0x112d373d0,&UNK_10d90f8f0);
          uVar10 = 1;
        }
      }
      else {
        FUN_1047d8ec4(lVar11,lVar15,0x112d373d8,&UNK_10d9014c0);
        lVar13 = lVar11 + lVar14;
        (*pcVar9)(lVar13,1,lVar1);
        puVar12 = puStack_a8;
        if ((int)lVar13 == 1) {
          func_0x0001047d8f0c(lVar16,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar7 + 8))(lVar15,lVar1);
          goto LAB_1047d8d58;
        }
        puVar4 = puStack_a8;
        (**(code **)(lVar7 + 0x20))(puStack_a8,lVar11 + lVar14,lVar1);
        func_0x000100df4c40();
        lVar14 = lVar15;
        __sSQ2eeoiySbx_xtFZTj(lVar15,puVar12,lVar1,puVar4);
        pcVar9 = *(code **)(lVar7 + 8);
        (*pcVar9)(puVar12,lVar1);
        func_0x0001047d8f0c(lVar16,0x112d373d8,&UNK_10d9014c0);
        (*pcVar9)(lVar15,lVar1);
        func_0x0001047d8f0c(lVar11,0x112d373d8,&UNK_10d9014c0);
        uVar10 = (uint)lVar14 ^ 1;
      }
      lVar14 = *(long *)(unaff_x20 + _DAT_113815318);
      if ((lVar14 == *(long *)(lStack_88 + _DAT_113815318)) &&
         (((long *)(unaff_x20 + _DAT_113815318))[1] == ((long *)(lStack_88 + _DAT_113815318))[1])) {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = (uint)lVar14;
      }
      lVar14 = *(long *)(unaff_x20 + _DAT_113815320);
      if ((lVar14 == *(long *)(lStack_88 + _DAT_113815320)) &&
         (((long *)(unaff_x20 + _DAT_113815320))[1] == ((long *)(lStack_88 + _DAT_113815320))[1])) {
        uVar6 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar6 = (uint)lVar14;
      }
      _objc_release(lStack_88);
      if (((uStack_9c | uStack_a0 ^ 0xffffffff | uVar10) & 1) == 0) {
        uVar5 = uVar5 & uVar6;
        goto LAB_1047d8e98;
      }
    }
  }
  uVar5 = 0;
LAB_1047d8e98:
  return uVar5 & 1;
}



/* Entry: 1047d8ec4; end: 1047d8f4b;  */

undefined8 FUN_1047d8ec4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047d8f4c; end: 1047d8fdb; -[SCAdAppInstallAppReview isEqual:] */

uint FUN_1047d8f4c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d8a08(&uStack_40);
  _objc_release(param_1);
  func_0x0001047d8f0c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047d8fdc; end: 1047d8fdf; -[SCAdAppInstallAppReview copyWithZone:] */

void FUN_1047d8fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d8fe0; end: 1047d9227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d8fe0(undefined8 param_1)

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
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fa60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308fa60))[1]);
  uVar1 = 0x495f574549564552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f574549564552,0xe900000000000044);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x474e49544152;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x474e49544152,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  FUN_1047d8ec4(unaff_x20 + _DAT_113815310,puVar5,0x112d373d8,&UNK_10d9014c0);
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
  uVar2 = 0x45544144;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544144,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113815318);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113815318))[1]);
  uVar1 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113815320);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113815320))[1]);
  uVar1 = 0x54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1047d9228; end: 1047d9277; -[SCAdAppInstallAppReview encodeWithCoder:] */

void FUN_1047d9228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d8fe0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d9278; end: 1047d92a7;  */

void FUN_1047d9278(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d92a8(param_1);
  return;
}



/* Entry: 1047d92a8; end: 1047d98b7;  */

undefined8 FUN_1047d92a8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined *puVar9;
  long extraout_x8;
  code *pcVar10;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_d0 [4];
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
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = (long)auStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12);
  uVar1 = 0x495f574549564552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f574549564552,0xe900000000000044);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
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
  puVar9 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    uVar1 = 0x112d387f8;
    puVar9 = &UNK_10d902650;
    puVar12 = &uStack_80;
  }
  else {
    puVar2 = &uStack_b0;
    _swift_dynamicCast(puVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_a8;
    uVar1 = uStack_b0;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1047d9864;
    }
    uVar3 = 0x474e49544152;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x474e49544152,0xe600000000000000);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
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
      func_0x0001047d8f0c(&uStack_80,0x112d387f8,&UNK_10d902650);
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      func_0x0001002ed07c(0);
      puVar2 = &uStack_b0;
      _swift_dynamicCast(puVar2,&uStack_80,puVar9 + 8,uVar3,6);
      uVar3 = uStack_b0;
      if ((int)puVar2 == 0) {
        uVar3 = 0;
      }
    }
    uVar4 = 0x45544144;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544144,0xe400000000000000);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
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
      func_0x0001047d8f0c(&uStack_80,0x112d387f8,&UNK_10d902650);
      lVar5 = 0;
      __s10Foundation4DateVMa();
      pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar8 = 1;
    }
    else {
      lVar5 = 0;
      __s10Foundation4DateVMa();
      puVar2 = puVar12;
      _swift_dynamicCast(puVar12,&uStack_80,puVar9 + 8,lVar5,6);
      pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar8 = (uint)puVar2 ^ 1;
    }
    (*pcVar10)(puVar12,uVar8,1,lVar5);
    uVar4 = 0x454c544954;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
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
      _objc_release(param_1);
LAB_1047d9800:
      _swift_bridgeObjectRelease(uVar7);
      _objc_release(uVar3);
      func_0x0001047d8f0c(&uStack_80,0x112d387f8,&UNK_10d902650);
    }
    else {
      puVar2 = &uStack_b0;
      _swift_dynamicCast(puVar2,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
      uVar4 = uStack_a8;
      if (((ulong)puVar2 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        auStack_d0[2] = uStack_b0;
        auStack_d0[3] = uVar1;
        uVar1 = 0x54584554;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
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
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar4);
          goto LAB_1047d9800;
        }
        puVar2 = &uStack_b0;
        _swift_dynamicCast(puVar2,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar2 & 1) != 0) {
          auStack_d0[1] = uStack_b0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(auStack_d0[3],uVar7);
          _swift_bridgeObjectRelease(uVar7);
          FUN_1047d8ec4(puVar12,lVar11,0x112d373d8,&UNK_10d9014c0);
          lVar6 = 0;
          __s10Foundation4DateVMa();
          lVar14 = *(long *)(lVar6 + -8);
          lVar5 = lVar11;
          (**(code **)(lVar14 + 0x30))(lVar11,1,lVar6);
          lVar13 = 0;
          if ((int)lVar5 != 1) {
            __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
            (**(code **)(lVar14 + 8))(lVar11,lVar6);
            lVar13 = lVar5;
          }
          uVar7 = auStack_d0[2];
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(auStack_d0[2],uVar4);
          _swift_bridgeObjectRelease(uVar4);
          uVar4 = auStack_d0[1];
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(auStack_d0[1],uStack_a8);
          _swift_bridgeObjectRelease(uStack_a8);
          uVar1 = auStack_d0[3];
          func_0x00010c0401a0();
          _objc_release(uVar1);
          _objc_release(lVar13);
          _objc_release(uVar7);
          _objc_release(uVar4);
          _objc_release(param_1);
          _objc_release(uVar3);
          func_0x0001047d8f0c(puVar12,0x112d373d8,&UNK_10d9014c0);
          return unaff_x20;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar4);
      }
      _swift_bridgeObjectRelease(uVar7);
      _objc_release(uVar3);
    }
    uVar1 = 0x112d373d8;
    puVar9 = &UNK_10d9014c0;
  }
  func_0x0001047d8f0c(puVar12,uVar1,puVar9);
LAB_1047d9864:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d98b8; end: 1047d98df; -[SCAdAppInstallAppReview initWithCoder:] */

void FUN_1047d98b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d92a8();
  return;
}



/* Entry: 1047d98e0; end: 1047d9957; -[SCAdAppInstallAppReview description] */

void FUN_1047d98e0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10470ee30();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047d9958(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1047d8798(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d9958; end: 1047d9a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9958(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = ((undefined8 *)(param_3 + _DAT_11308fa60))[1];
  *param_1 = *(undefined8 *)(param_3 + _DAT_11308fa60);
  param_1[1] = uVar2;
  lVar5 = *(long *)(param_3 + _DAT_11308fa68);
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain();
    param_2 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x00010bf885a0(lVar5);
  }
  param_1[2] = param_2;
  *(bool *)(param_1 + 3) = lVar5 == 0;
  lVar5 = _DAT_113815310;
  lVar4 = 0;
  FUN_10470ee30();
  FUN_1047d8ec4(param_3 + lVar5,(long)param_1 + (long)*(int *)(lVar4 + 0x18),0x112d373d8,
                &UNK_10d9014c0);
  uVar2 = ((undefined8 *)(param_3 + _DAT_113815318))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
  *puVar1 = *(undefined8 *)(param_3 + _DAT_113815318);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + _DAT_113815320);
  uVar3 = ((undefined8 *)(param_3 + _DAT_113815320))[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_release(param_3);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1047d9a54; end: 1047d9acf; -[SCAdAppInstallAppReview init] */

void FUN_1047d9a54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdAppInstallAppReviewWrapper.swift",0x2e,2,0x69,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d9a9c);
  (*pcVar1)();
}



/* Entry: 1047d9ad0; end: 1047d9b53; -[SCAdAppInstallAppReview .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9ad0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fa60 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fa68));
  func_0x0001047d8f0c(param_1 + _DAT_113815310,0x112d373d8,&UNK_10d9014c0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815318 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815320 + 8))
  ;
  return;
}



/* Entry: 1047d9b54; end: 1047d9b5b;  */

void FUN_1047d9b54(void)

{
  if (lRam000000011308fa98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81b8d4);
  return;
}



/* Entry: 1047d9b5c; end: 1047d9b93;  */

void FUN_1047d9b5c(undefined8 param_1)

{
  if (lRam000000011308fa98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81b8d4);
  return;
}



/* Entry: 1047d9b94; end: 1047d9c17;  */

void FUN_1047d9b94(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dd35a80;
  puStack_40 = &UNK_10dd35a98;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd35a80;
    puStack_28 = &UNK_10dd35a80;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 1047d9c18; end: 1047d9c63; -[SCAdSnapAppInstall appId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9c18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308faa8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308faa8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d9c64; end: 1047d9c6f; -[SCAdSnapAppInstall appTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9c64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fab0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fab0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d9c70; end: 1047d9c7f; -[SCAdSnapAppInstall icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fab8));
  return;
}



/* Entry: 1047d9c80; end: 1047d9c8f; -[SCAdSnapAppInstall appPopularityInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fac0));
  return;
}



/* Entry: 1047d9c90; end: 1047d9c9b; -[SCAdSnapAppInstall productPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9c90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fac8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fac8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d9c9c; end: 1047d9cf3;  */

void FUN_1047d9c9c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1047d9cf4; end: 1047d9d03; -[SCAdSnapAppInstall enableSKOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047d9cf4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308fad0);
}



/* Entry: 1047d9d04; end: 1047d9d13; -[SCAdSnapAppInstall appPrice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fad8));
  return;
}



/* Entry: 1047d9d14; end: 1047d9d27; -[SCAdSnapAppInstall screenshots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9d14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308fae0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047fc144(0);
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



/* Entry: 1047d9d28; end: 1047d9d3b; -[SCAdSnapAppInstall reviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9d28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308fae8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047d9b5c(0);
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



/* Entry: 1047d9d3c; end: 1047d9d4f; -[SCAdSnapAppInstall titleReviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9d3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308faf0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047d9b5c(0);
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



/* Entry: 1047d9d50; end: 1047d9da7;  */

void FUN_1047d9d50(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*param_4)(0);
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



/* Entry: 1047d9da8; end: 1047d9db7; -[SCAdSnapAppInstall playableInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308faf8));
  return;
}



/* Entry: 1047d9db8; end: 1047da037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d9db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308faa8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fab0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fab8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308fac0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fac8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11308fad0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308fad8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308fae0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11308fae8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11308faf0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308faf8) = param_15;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047da038; end: 1047da1d3; -[SCAdSnapAppInstall initWithAppId:appTitle:icon:appPopularityInfo:productPageId:enableSKOverlay:appPrice:screenshots:reviews:titleReviews:playableInfo:] */

void FUN_1047da038(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,long param_13)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    uStack_90 = 0;
    lStack_88 = 0;
    uVar4 = param_2;
  }
  else {
    uStack_90 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uStack_90;
    lStack_88 = param_4;
  }
  if (param_7 == 0) {
    lStack_98 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_98 = param_7;
  }
  if (param_11 != 0) {
    uVar1 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_11,uVar1);
  }
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain();
  lVar2 = param_12;
  _objc_retain();
  lVar3 = param_13;
  _objc_retain();
  _objc_retain();
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_12,uVar1);
    _objc_release(lVar2);
  }
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_13,uVar1);
    _objc_release(lVar3);
  }
  func_0x0001047d9ef8(param_3,param_2,lStack_88,uStack_90,param_5,param_6,lStack_98,uVar4,param_8);
  return;
}



/* Entry: 1047da1d4; end: 1047da203;  */

void FUN_1047da1d4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047da204(param_1);
  return;
}



/* Entry: 1047da204; end: 1047daec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047da204(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long alStack_1a0 [3];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  lVar5 = 0;
  lStack_170 = lVar6;
  FUN_104742f28();
  lStack_180 = *(long *)(lVar5 + -8);
  lStack_178 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar5 = (long)alStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_1a0[1] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lVar6 = 0x112dcbf00;
  alStack_1a0[0] = lVar5;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  lVar6 = 0;
  lStack_188 = lVar5;
  FUN_10470ee30();
  alStack_1a0[2] = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_1a0[2] + 0x40));
  puVar14 = (undefined8 *)(lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)(lVar15 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar16 - extraout_x12_02;
  uVar21 = param_1[1];
  puVar22 = (undefined8 *)(unaff_x20 + _DAT_11308faa8);
  *puVar22 = *param_1;
  puVar22[1] = uVar21;
  uVar20 = param_1[3];
  uVar25 = param_1[2];
  puVar22 = (undefined8 *)(unaff_x20 + _DAT_11308fab0);
  puVar22[1] = param_1[3];
  *puVar22 = uVar25;
  lVar17 = param_1[10];
  puStack_168 = param_1;
  if (lVar17 == 1) {
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar21);
    plVar7 = (long *)0x0;
  }
  else {
    uVar25 = param_1[4];
    uVar4 = param_1[5];
    lVar12 = param_1[6];
    uVar3 = param_1[7];
    uVar18 = param_1[8];
    uVar23 = param_1[9];
    lVar8 = 0;
    FUN_1047fc144();
    lVar19 = lVar8;
    _objc_allocWithZone();
    if (lVar12 == 1) {
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar21);
      plVar7 = (long *)0x0;
    }
    else {
      lVar9 = 0;
      FUN_1047fcc14();
      lVar10 = lVar9;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_113090438) = uVar25;
      puVar22 = (undefined8 *)(lVar10 + _DAT_113090440);
      *puVar22 = uVar4;
      puVar22[1] = lVar12;
      puVar22 = (undefined8 *)(lVar10 + _DAT_113090448);
      *puVar22 = uVar3;
      puVar22[1] = uVar18;
      puVar24 = PTR_s_init_1125d9248;
      lStack_110 = lVar10;
      lStack_108 = lVar9;
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar18);
      plVar7 = &lStack_110;
      _objc_msgSendSuper2(plVar7,puVar24);
    }
    *(long **)(lVar19 + _DAT_113090400) = plVar7;
    puVar22 = (undefined8 *)(lVar19 + _DAT_113090408);
    *puVar22 = uVar23;
    puVar22[1] = lVar17;
    puVar24 = PTR_s_init_1125d9248;
    lStack_100 = lVar19;
    lStack_f8 = lVar8;
    _swift_bridgeObjectRetain(lVar17);
    plVar7 = &lStack_100;
    _objc_msgSendSuper2(plVar7,puVar24);
    param_1 = puStack_168;
  }
  *(long **)(unaff_x20 + _DAT_11308fab8) = plVar7;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    plVar7 = (long *)0x0;
  }
  else {
    uVar21 = param_1[0xc];
    uVar20 = param_1[0xd];
    uVar25 = param_1[0xb];
    lVar19 = 0;
    FUN_1047d81f0();
    lVar17 = lVar19;
    _objc_allocWithZone();
    *(undefined8 *)(lVar17 + _DAT_11308fa20) = uVar25;
    *(undefined8 *)(lVar17 + _DAT_11308fa28) = uVar21;
    *(undefined8 *)(lVar17 + _DAT_11308fa30) = uVar20;
    plVar7 = &lStack_f0;
    lStack_f0 = lVar17;
    lStack_e8 = lVar19;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308fac0) = plVar7;
  uVar21 = param_1[0x10];
  uVar20 = param_1[0xf];
  puVar22 = (undefined8 *)(unaff_x20 + _DAT_11308fac8);
  puVar22[1] = param_1[0x10];
  *puVar22 = uVar20;
  *(undefined1 *)(unaff_x20 + _DAT_11308fad0) = *(undefined1 *)(param_1 + 0x11);
  lVar17 = param_1[0x14];
  if (lVar17 == 1) {
    _swift_bridgeObjectRetain(uVar21);
    plVar7 = (long *)0x0;
  }
  else {
    uVar2 = param_1[0x12];
    uVar20 = param_1[0x13];
    lVar8 = 0;
    FUN_1047dda50();
    lVar19 = lVar8;
    _objc_allocWithZone();
    if ((uVar2 & 0xff00000000) == 0x100000000) {
      _swift_bridgeObjectRetain(uVar21);
      FUN_10470fbb8(uVar2,uVar20,lVar17);
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar21);
      FUN_10470fbb8(uVar2,uVar20,lVar17);
      param_1 = puStack_168;
      func_0x00010c0138c0(uVar2 & 0xffffffff);
    }
    *(undefined **)(lVar19 + _DAT_11308fb38) = puVar24;
    puVar22 = (undefined8 *)(lVar19 + _DAT_11308fb40);
    *puVar22 = uVar20;
    puVar22[1] = lVar17;
    plVar7 = &lStack_e0;
    lStack_e0 = lVar19;
    lStack_d8 = lVar8;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308fad8) = plVar7;
  lVar17 = param_1[0x15];
  if (lVar17 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    lVar19 = *(long *)(lVar17 + 0x10);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c730c(0,lVar19,0);
      puVar24 = puStack_90;
      lVar8 = 0;
      FUN_1047fc144();
      puVar22 = (undefined8 *)(lVar17 + 0x28);
      do {
        uVar21 = puVar22[-1];
        uVar25 = *puVar22;
        lVar17 = puVar22[1];
        uVar3 = puVar22[2];
        uVar20 = puVar22[3];
        uVar4 = puVar22[4];
        uVar18 = puVar22[5];
        lVar12 = lVar8;
        _objc_allocWithZone();
        if (lVar17 == 1) {
          func_0x00010470dc90(uVar21,uVar25,1,uVar3,uVar20);
          _swift_bridgeObjectRetain(uVar18);
          plVar7 = (long *)0x0;
        }
        else {
          lVar9 = 0;
          FUN_1047fcc14();
          lVar10 = lVar9;
          _objc_allocWithZone();
          *(undefined8 *)(lVar10 + _DAT_113090438) = uVar21;
          puVar1 = (undefined8 *)(lVar10 + _DAT_113090440);
          *puVar1 = uVar25;
          puVar1[1] = lVar17;
          puVar1 = (undefined8 *)(lVar10 + _DAT_113090448);
          *puVar1 = uVar3;
          puVar1[1] = uVar20;
          func_0x00010470dc90(uVar21,uVar25,lVar17,uVar3,uVar20);
          puVar11 = PTR_s_init_1125d9248;
          lStack_d0 = lVar10;
          lStack_c8 = lVar9;
          _swift_bridgeObjectRetain(uVar18);
          _swift_bridgeObjectRetain(lVar17);
          _swift_bridgeObjectRetain(uVar20);
          plVar7 = &lStack_d0;
          _objc_msgSendSuper2(plVar7,puVar11);
        }
        *(long **)(lVar12 + _DAT_113090400) = plVar7;
        puVar1 = (undefined8 *)(lVar12 + _DAT_113090408);
        *puVar1 = uVar4;
        puVar1[1] = uVar18;
        _swift_bridgeObjectRetain(uVar18);
        func_0x000101553c50(uVar21,uVar25,lVar17,uVar3,uVar20);
        _swift_bridgeObjectRelease(uVar18);
        plVar7 = &lStack_c0;
        lStack_c0 = lVar12;
        lStack_b8 = lVar8;
        _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
        uVar2 = *(ulong *)(puVar24 + 0x10);
        puStack_90 = puVar24;
        if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar2) {
          func_0x0001046c730c(1 < *(ulong *)(puVar24 + 0x18),uVar2 + 1,1);
        }
        puVar22 = puVar22 + 7;
        *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
        *(long **)(puStack_90 + uVar2 * 8 + 0x20) = plVar7;
        lVar19 = lVar19 + -1;
        puVar24 = puStack_90;
        param_1 = puStack_168;
      } while (lVar19 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11308fae0) = puVar24;
  lVar17 = param_1[0x16];
  if (lVar17 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    lVar19 = *(long *)(lVar17 + 0x10);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c72d8(0,lVar19,0);
      lVar17 = lVar17 + ((ulong)*(byte *)(alStack_1a0[2] + 0x50) + 0x20 &
                        ((ulong)*(byte *)(alStack_1a0[2] + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(alStack_1a0[2] + 0x48);
      do {
        puVar24 = puStack_90;
        func_0x0001047dcfd4(lVar17,lVar5,FUN_10470ee30);
        func_0x0001047dcfd4(lVar5,puVar16,FUN_10470ee30);
        lVar10 = 0;
        FUN_1047d9b5c();
        lVar12 = lVar10;
        _objc_allocWithZone();
        uVar21 = puVar16[1];
        puVar22 = (undefined8 *)(lVar12 + _DAT_11308fa60);
        *puVar22 = *puVar16;
        puVar22[1] = uVar21;
        if (*(char *)(puVar16 + 3) == '\x01') {
          _swift_bridgeObjectRetain(uVar21);
          puVar11 = (undefined *)0x0;
        }
        else {
          uVar20 = puVar16[2];
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_allocWithZone();
          _swift_bridgeObjectRetain(uVar21);
          func_0x00010c00e360(uVar20);
        }
        *(undefined **)(lVar12 + _DAT_11308fa68) = puVar11;
        func_0x0001047dd054((long)puVar16 + (long)*(int *)(lVar6 + 0x18),lVar12 + _DAT_113815310,
                            0x112d373d8,&UNK_10d9014c0);
        puVar22 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar6 + 0x1c));
        uVar21 = puVar22[1];
        puVar1 = (undefined8 *)(lVar12 + _DAT_113815318);
        *puVar1 = *puVar22;
        puVar1[1] = uVar21;
        puVar22 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar6 + 0x20));
        uVar21 = puVar22[1];
        puVar1 = (undefined8 *)(lVar12 + _DAT_113815320);
        *puVar1 = *puVar22;
        puVar1[1] = uVar21;
        puVar11 = PTR_s_init_1125d9248;
        lStack_b0 = lVar12;
        lStack_a8 = lVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        plVar7 = &lStack_b0;
        _objc_msgSendSuper2(plVar7,puVar11);
        func_0x0001047dd018(puVar16,FUN_10470ee30);
        func_0x0001047dd018(lVar5,FUN_10470ee30);
        uVar2 = *(ulong *)(puVar24 + 0x10);
        puStack_90 = puVar24;
        if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar2) {
          func_0x0001046c72d8(1 < *(ulong *)(puVar24 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
        *(long **)(puStack_90 + uVar2 * 8 + 0x20) = plVar7;
        lVar17 = lVar17 + lVar8;
        lVar19 = lVar19 + -1;
        param_1 = puStack_168;
        puVar24 = puStack_90;
      } while (lVar19 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11308fae8) = puVar24;
  lVar5 = param_1[0x17];
  if (lVar5 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    lVar17 = *(long *)(lVar5 + 0x10);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar17 != 0) {
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c72d8(0,lVar17,0);
      lVar5 = lVar5 + ((ulong)*(byte *)(alStack_1a0[2] + 0x50) + 0x20 &
                      ((ulong)*(byte *)(alStack_1a0[2] + 0x50) ^ 0xffffffffffffffff));
      lVar19 = *(long *)(alStack_1a0[2] + 0x48);
      do {
        puVar24 = puStack_90;
        func_0x0001047dcfd4(lVar5,lVar15,FUN_10470ee30);
        func_0x0001047dcfd4(lVar15,puVar14,FUN_10470ee30);
        lVar12 = 0;
        FUN_1047d9b5c();
        lVar8 = lVar12;
        _objc_allocWithZone();
        uVar21 = puVar14[1];
        puVar22 = (undefined8 *)(lVar8 + _DAT_11308fa60);
        *puVar22 = *puVar14;
        puVar22[1] = uVar21;
        if (*(char *)(puVar14 + 3) == '\x01') {
          _swift_bridgeObjectRetain(uVar21);
          puVar11 = (undefined *)0x0;
        }
        else {
          uVar20 = puVar14[2];
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_allocWithZone();
          _swift_bridgeObjectRetain(uVar21);
          func_0x00010c00e360(uVar20);
        }
        *(undefined **)(lVar8 + _DAT_11308fa68) = puVar11;
        func_0x0001047dd054((long)puVar14 + (long)*(int *)(lVar6 + 0x18),lVar8 + _DAT_113815310,
                            0x112d373d8,&UNK_10d9014c0);
        puVar22 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar6 + 0x1c));
        uVar21 = puVar22[1];
        puVar16 = (undefined8 *)(lVar8 + _DAT_113815318);
        *puVar16 = *puVar22;
        puVar16[1] = uVar21;
        puVar22 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar6 + 0x20));
        uVar21 = puVar22[1];
        puVar16 = (undefined8 *)(lVar8 + _DAT_113815320);
        *puVar16 = *puVar22;
        puVar16[1] = uVar21;
        puVar11 = PTR_s_init_1125d9248;
        lStack_a0 = lVar8;
        lStack_98 = lVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        plVar7 = &lStack_a0;
        _objc_msgSendSuper2(plVar7,puVar11);
        func_0x0001047dd018(puVar14,FUN_10470ee30);
        func_0x0001047dd018(lVar15,FUN_10470ee30);
        uVar2 = *(ulong *)(puVar24 + 0x10);
        puStack_90 = puVar24;
        if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar2) {
          func_0x0001046c72d8(1 < *(ulong *)(puVar24 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
        *(long **)(puStack_90 + uVar2 * 8 + 0x20) = plVar7;
        lVar5 = lVar5 + lVar19;
        lVar17 = lVar17 + -1;
        param_1 = puStack_168;
        puVar24 = puStack_90;
      } while (lVar17 != 0);
    }
  }
  lVar15 = lStack_188;
  *(undefined **)(unaff_x20 + _DAT_11308faf0) = puVar24;
  lVar6 = 0;
  FUN_10470fbcc();
  func_0x0001047dd054((long)param_1 + (long)*(int *)(lVar6 + 0x38),lVar15,0x112dcbf00,&UNK_10dd317c0
                     );
  lVar17 = lVar15;
  (**(code **)(lStack_180 + 0x30))(lVar15,1,lStack_178);
  lVar6 = alStack_1a0[0];
  lVar5 = 0;
  if ((int)lVar17 != 1) {
    func_0x0001047dd09c(lVar15,alStack_1a0[0],FUN_104742f28);
    lVar5 = alStack_1a0[1];
    func_0x0001047dcfd4(lVar6,alStack_1a0[1],FUN_104742f28);
    FUN_1047ff414(0);
    _objc_allocWithZone();
    FUN_1047fe8dc();
    func_0x0001047dd018(lVar6,FUN_104742f28);
  }
  *(long *)(unaff_x20 + _DAT_11308faf8) = lVar5;
  lStack_80 = lStack_170;
  puVar13 = auStack_88;
  _objc_msgSendSuper2(puVar13,PTR_s_init_1125d9248);
  func_0x0001047dd018(param_1,FUN_10470fbcc);
  return puVar13;
}



/* Entry: 1047daec4; end: 1047daef7; -[SCAdSnapAppInstall hash] */

undefined8 FUN_1047daec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047daef8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047daef8; end: 1047db24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047daef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308faa8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308faa8))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fab0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fab0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308fab8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11308fac0);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    dVar6 = 0.0;
    if (*(double *)(lVar4 + _DAT_11308fa20) != 0.0) {
      dVar6 = *(double *)(lVar4 + _DAT_11308fa20);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar6);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar4 + _DAT_11308fa28));
    uVar2 = *(undefined8 *)(lVar4 + _DAT_11308fa30);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308fac8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fac8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11308fad0);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11308fad8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047dd1b0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11308fae0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar4 = *(long *)(unaff_x20 + _DAT_11308fae8);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar4 = *(long *)(unaff_x20 + _DAT_11308faf0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (*(long *)(unaff_x20 + _DAT_11308faf8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fe164();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047db24c; end: 1047db6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047db24c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x20;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047dd054(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,alStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11308faa8);
      if (lVar7 == *(long *)(lStack_88 + _DAT_11308faa8) &&
          ((long *)(unaff_x20 + _DAT_11308faa8))[1] == ((long *)(lStack_88 + _DAT_11308faa8))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar7;
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_11308fab0))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308fab0))[1];
      if (lVar7 == 0 || lVar8 == 0) {
        uStack_90 = (uint)(lVar7 == 0 && lVar8 == 0);
      }
      else {
        lVar5 = *(long *)(unaff_x20 + _DAT_11308fab0);
        if (lVar5 == *(long *)(lStack_88 + _DAT_11308fab0) && lVar7 == lVar8) {
          uStack_90 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_90 = (uint)lVar5;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_11308fab8) == 0) {
        uStack_94 = (uint)(*(long *)(lStack_88 + _DAT_11308fab8) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_88 + _DAT_11308fab8);
        if (lVar7 == 0) {
          lVar8 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_1047fc144();
        }
        alStack_80[0] = lVar7;
        alStack_80[3] = lVar8;
        _objc_retain(lVar7);
        uStack_94 = 0;
        func_0x0001047fb744();
        func_0x00010006e7f4(alStack_80);
      }
      if (*(long *)(unaff_x20 + _DAT_11308fac0) == 0) {
        uStack_98 = (uint)(*(long *)(lStack_88 + _DAT_11308fac0) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_88 + _DAT_11308fac0);
        if (lVar7 == 0) {
          lVar8 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_1047d81f0();
        }
        alStack_80[0] = lVar7;
        alStack_80[3] = lVar8;
        _objc_retain(lVar7);
        uStack_98 = 0;
        FUN_1047d7d48();
        func_0x00010006e7f4(alStack_80);
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_11308fac8))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308fac8))[1];
      uVar12 = (uint)(lVar7 == 0 && lVar8 == 0);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11308fac8);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_11308fac8)) && (lVar7 == lVar8)) {
          uVar12 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar5;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308fad0);
      bVar2 = *(byte *)(lStack_88 + _DAT_11308fad0);
      if (*(long *)(unaff_x20 + _DAT_11308fad8) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_11308fad8) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_88 + _DAT_11308fad8);
        if (lVar7 == 0) {
          lVar8 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_1047dda50();
        }
        alStack_80[0] = lVar7;
        alStack_80[3] = lVar8;
        _objc_retain(lVar7);
        uVar13 = 0;
        FUN_1047dd278();
        func_0x00010006e7f4(alStack_80);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fae0);
      lVar7 = *(long *)(lStack_88 + _DAT_11308fae0);
      uVar14 = (uint)(lVar8 == 0 && lVar7 == 0);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        _swift_bridgeObjectRetain(lVar7);
        lVar5 = lVar8;
        _swift_bridgeObjectRetain();
        uVar14 = (uint)lVar5;
        func_0x00010470d328();
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(lVar7);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fae8);
      lVar7 = *(long *)(lStack_88 + _DAT_11308fae8);
      uVar10 = (uint)(lVar8 == 0 && lVar7 == 0);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        _swift_bridgeObjectRetain(lVar7);
        lVar5 = lVar8;
        _swift_bridgeObjectRetain();
        uVar10 = (uint)lVar5;
        func_0x00010470d33c();
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(lVar7);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308faf0);
      lVar7 = *(long *)(lStack_88 + _DAT_11308faf0);
      uVar11 = (uint)(lVar8 == 0 && lVar7 == 0);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        _swift_bridgeObjectRetain(lVar7);
        lVar5 = lVar8;
        _swift_bridgeObjectRetain(lVar8);
        uVar11 = (uint)lVar5;
        func_0x00010470d33c();
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(lVar7);
      }
      if (*(long *)(unaff_x20 + _DAT_11308faf8) == 0) {
        lVar8 = *(long *)(lStack_88 + _DAT_11308faf8);
        lVar7 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_88);
        if (lVar8 == 0) {
          uVar3 = 1;
        }
        else {
          _objc_release(lVar7);
          uVar3 = 0;
        }
      }
      else {
        lVar7 = *(long *)(lStack_88 + _DAT_11308faf8);
        if (lVar7 == 0) {
          uVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar6 = 0;
          FUN_1047ff414();
        }
        alStack_80[0] = lVar7;
        alStack_80[3] = uVar6;
        _objc_retain(lVar7);
        plVar4 = alStack_80;
        FUN_1047fe288(plVar4);
        uVar3 = (uint)plVar4;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      uVar9 = 0;
      if (((((uStack_8c & uStack_90 & uStack_94 & uStack_98 & uVar12 & 1) != 0) &&
           (((bVar1 ^ bVar2) & 1) == 0)) && (((uVar13 ^ 1) & 1) == 0)) &&
         ((((uVar14 ^ 1) & 1) == 0 && (((uVar10 ^ 1) & 1) == 0)))) {
        uVar9 = uVar11 & uVar3;
      }
      goto LAB_1047db30c;
    }
  }
  uVar9 = 0;
LAB_1047db30c:
  return uVar9 & 1;
}



/* Entry: 1047db6f8; end: 1047db777; -[SCAdSnapAppInstall isEqual:] */

uint FUN_1047db6f8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047db24c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047db778; end: 1047db77b; -[SCAdSnapAppInstall copyWithZone:] */

void FUN_1047db778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047db77c; end: 1047dbb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047db77c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308faa8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308faa8))[1]);
  uVar1 = 0x44495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fab0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fab0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4c5449545f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4e4f4349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4349,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e840);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fac8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fac8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xef44495f45474150);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0x434952505f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434952505f505041,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fae0);
  if (lVar3 != 0) {
    uVar2 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
  }
  uVar2 = 0x48534e4545524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x48534e4545524353,0xeb0000000053544f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fae8);
  if (lVar3 != 0) {
    uVar2 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
  }
  uVar2 = 0x53574549564552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53574549564552,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308faf0);
  if (lVar3 != 0) {
    uVar2 = 0;
    FUN_1047d9b5c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
  }
  uVar2 = 0x45525f454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f454c544954,0xed00005357454956);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar2);
  uVar2 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xed00004f464e495f);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047dbb60; end: 1047dbbaf; -[SCAdSnapAppInstall encodeWithCoder:] */

void FUN_1047dbb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047db77c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047dbbb0; end: 1047dbbdf;  */

void FUN_1047dbbb0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047dbbe0(param_1);
  return;
}



/* Entry: 1047dbbe0; end: 1047dc54b;  */

undefined8 FUN_1047dbbe0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x44495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
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
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_b8;
    lVar3 = lStack_c0;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x4c5449545f505041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_100 = 0;
        lStack_d8 = 0;
      }
      else {
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_100 = lStack_c0;
        lStack_d8 = lStack_b8;
        if ((int)plVar4 == 0) {
          lStack_100 = 0;
          lStack_d8 = 0;
        }
      }
      uVar2 = 0x4e4f4349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4349,0xe400000000000000);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_c8 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047fc144(0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lStack_c8 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_c8 = 0;
        }
      }
      uVar2 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e840);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_e0 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047d81f0(0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lStack_e0 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_e0 = 0;
        }
      }
      uVar2 = 0x5f544355444f5250;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xef44495f45474150);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_108 = 0;
        lVar8 = 0;
      }
      else {
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar8 = lStack_b8;
        lStack_108 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_108 = 0;
          lVar8 = 0;
        }
      }
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0x434952505f505041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434952505f505041,0xe900000000000045);
      lVar10 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar10 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
        _swift_unknownObjectRelease(lVar10);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_f0 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047dda50(0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lStack_f0 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_f0 = 0;
        }
      }
      uVar2 = 0x48534e4545524353;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x48534e4545524353,0xeb0000000053544f);
      lVar10 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar10 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
        _swift_unknownObjectRelease(lVar10);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lVar10 = 0;
      }
      else {
        uVar2 = 0x11308fb08;
        func_0x0001000285a8(0x11308fb08,&UNK_10dd35ac0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar10 = lStack_c0;
        if ((int)plVar4 == 0) {
          lVar10 = 0;
        }
      }
      uVar2 = 0x53574549564552;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53574549564552,0xe700000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lVar5 = 0;
      }
      else {
        uVar2 = 0x11308fb00;
        func_0x0001000285a8(0x11308fb00,&UNK_10dd35ab8);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar5 = lStack_c0;
        if ((int)plVar4 == 0) {
          lVar5 = 0;
        }
      }
      uVar2 = 0x45525f454c544954;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f454c544954,0xed00005357454956);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
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
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lVar6 = 0;
      }
      else {
        uVar2 = 0x11308fb00;
        func_0x0001000285a8(0x11308fb00,&UNK_10dd35ab8);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar6 = lStack_c0;
        if ((int)plVar4 == 0) {
          lVar6 = 0;
        }
      }
      uVar2 = 0x454c424159414c50;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xed00004f464e495f);
      lVar7 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
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
        func_0x00010006e7f4(&uStack_90);
        lVar7 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047ff414(0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar7 = lStack_c0;
        if ((int)plVar4 == 0) {
          lVar7 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,lVar9);
      _swift_bridgeObjectRelease(lVar9);
      if (lStack_d8 == 0) {
        lStack_100 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_100,lStack_d8);
        _swift_bridgeObjectRelease(lStack_d8);
      }
      if (lVar8 == 0) {
        lStack_108 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_108,lVar8);
        _swift_bridgeObjectRelease(lVar8);
      }
      if (lVar10 == 0) {
        lVar9 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047fc144(0);
        lVar9 = lVar10;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar10,uVar2);
        _swift_bridgeObjectRelease(lVar10);
      }
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047d9b5c(0);
        lVar8 = lVar5;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar2);
        _swift_bridgeObjectRelease(lVar5);
      }
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1047d9b5c(0);
        lVar10 = lVar6;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar2);
        _swift_bridgeObjectRelease(lVar6);
      }
      func_0x00010bff33c0(unaff_x20);
      _objc_release(lVar3);
      _objc_release(lStack_100);
      _objc_release(lStack_108);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar10);
      _objc_release(param_1);
      _objc_release(lStack_c8);
      _objc_release(lStack_e0);
      _objc_release(lStack_f0);
      _objc_release(lVar7);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}


