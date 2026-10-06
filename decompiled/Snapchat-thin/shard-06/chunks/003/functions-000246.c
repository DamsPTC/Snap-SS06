/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047fd8ec; end: 1047fd91f; -[SCAdMediaVideo hash] */

undefined8 FUN_1047fd8ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047fd920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fd920; end: 1047fdb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fd920(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_1130904b0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fc1d4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1130904b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130904b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047fdb64; end: 1047fdbab;  */

undefined8 FUN_1047fdb64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047fdbac; end: 1047fdc2b; -[SCAdMediaVideo isEqual:] */

uint FUN_1047fdbac(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047fd9e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047fdc2c; end: 1047fdc2f; -[SCAdMediaVideo copyWithZone:] */

void FUN_1047fdc2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047fdc30; end: 1047fdceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fdc30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4e4f495441434f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441434f4c,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130904b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130904b8);
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



/* Entry: 1047fdcec; end: 1047fdd3b; -[SCAdMediaVideo encodeWithCoder:] */

void FUN_1047fdcec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047fdc30(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fdd3c; end: 1047fdd6b;  */

void FUN_1047fdd3c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fdd6c(param_1);
  return;
}



/* Entry: 1047fdd6c; end: 1047fdf33;  */

undefined8 FUN_1047fdd6c(long param_1)

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
      goto LAB_1047fdeec;
    }
  }
  uVar5 = 0;
LAB_1047fdeec:
  func_0x00010c026c20();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  return unaff_x20;
}



/* Entry: 1047fdf34; end: 1047fdf5b; -[SCAdMediaVideo initWithCoder:] */

void FUN_1047fdf34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fdd6c();
  return;
}



/* Entry: 1047fdf5c; end: 1047fdf8f; -[SCAdMediaVideo description] */

void FUN_1047fdf5c(void)

{
  undefined1 auStack_48 [56];
  
  FUN_1047fe048(auStack_48);
  func_0x0001017b6504(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047fdf90; end: 1047fe00b; -[SCAdMediaVideo init] */

void FUN_1047fdf90(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaVideoWrapper.swift",0x25,2
             ,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047fdfd8);
  (*pcVar1)();
}



/* Entry: 1047fe00c; end: 1047fe047; -[SCAdMediaVideo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe00c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130904b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130904b8 + 8))
  ;
  return;
}



/* Entry: 1047fe048; end: 1047fe113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe048(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_2 + _DAT_1130904b0);
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
  puVar1 = (undefined8 *)(param_2 + _DAT_1130904b8);
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



/* Entry: 1047fe114; end: 1047fe133;  */

void FUN_1047fe114(void)

{
  _objc_opt_self(&PTR_PTR_1129d7ac8);
  return;
}



/* Entry: 1047fe134; end: 1047fe163;  */

void FUN_1047fe134(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fe8dc(param_1);
  return;
}



/* Entry: 1047fe164; end: 1047fe287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113815330);
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815338);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113815338))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815340));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815348));
  lVar3 = *(long *)(unaff_x20 + _DAT_113815350);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815358));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047fe288; end: 1047fe453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047fe288(undefined8 param_1)

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
  long lVar10;
  uint uVar11;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    FUN_1047ff250(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar9 = &lStack_88;
    _swift_dynamicCast(plVar9,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar9 & 1) != 0) {
      lVar8 = unaff_x20 + _DAT_113815330;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar8,lStack_88 + _DAT_113815330);
      lVar14 = *(long *)(unaff_x20 + _DAT_113815338);
      if (lVar14 == *(long *)(lStack_88 + _DAT_113815338) &&
          ((long *)(unaff_x20 + _DAT_113815338))[1] == ((long *)(lStack_88 + _DAT_113815338))[1]) {
        uVar7 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar14;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113815340);
      bVar2 = *(byte *)(lStack_88 + _DAT_113815340);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113815348);
      bVar4 = *(byte *)(lStack_88 + _DAT_113815348);
      lVar13 = *(long *)(unaff_x20 + _DAT_113815350);
      lVar14 = *(long *)(lStack_88 + _DAT_113815350);
      uVar12 = (uint)(lVar13 == 0 && lVar14 == 0);
      if ((lVar13 != 0) && (lVar14 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar14);
        _objc_retain(lVar13);
        lVar10 = lVar13;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar10;
        _objc_release(lVar13);
        _objc_release(lVar14);
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_113815358);
      bVar6 = *(byte *)(lStack_88 + _DAT_113815358);
      _objc_release(lStack_88);
      uVar11 = 0;
      if (((((uint)lVar8 & uVar7 & 1) != 0) && (((bVar1 ^ bVar2) & 1) == 0)) &&
         (((bVar3 ^ bVar4) & 1) == 0)) {
        uVar11 = uVar12 & ((bVar5 ^ bVar6) ^ 1);
      }
      goto LAB_1047fe360;
    }
  }
  uVar11 = 0;
LAB_1047fe360:
  return uVar11 & 1;
}



/* Entry: 1047fe454; end: 1047fe55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe454(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = _DAT_113815330;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_3 + lVar7,lVar6);
  uVar2 = *(undefined8 *)(param_3 + _DAT_113815338);
  uVar3 = ((undefined8 *)(param_3 + _DAT_113815338))[1];
  lVar7 = 0;
  FUN_104742f28();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x18)) = *(undefined1 *)(param_3 + _DAT_113815340);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) = *(undefined1 *)(param_3 + _DAT_113815348);
  iVar5 = *(int *)(lVar7 + 0x20);
  lVar6 = *(long *)(param_3 + _DAT_113815350);
  if (lVar6 == 0) {
    _swift_bridgeObjectRetain(uVar3);
    param_2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    func_0x00010bf885a0(lVar6);
  }
  puVar1 = (undefined8 *)(param_1 + iVar5);
  *puVar1 = param_2;
  *(bool *)(puVar1 + 1) = lVar6 == 0;
  uVar4 = *(undefined1 *)(param_3 + _DAT_113815358);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) = uVar4;
  return;
}



/* Entry: 1047fe560; end: 1047fe5f7; -[SCAdPlayableInfo playableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe560(long param_1)

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
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113815330,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1047fe5f8; end: 1047fe643; -[SCAdPlayableInfo playableCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe5f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113815338);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113815338))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047fe644; end: 1047fe653; -[SCAdPlayableInfo tileCtaEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047fe644(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815340);
}



/* Entry: 1047fe654; end: 1047fe663; -[SCAdPlayableInfo openPlayableFromTileTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047fe654(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815348);
}



/* Entry: 1047fe664; end: 1047fe673; -[SCAdPlayableInfo playableCtaDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047fe664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815350));
  return;
}



/* Entry: 1047fe674; end: 1047fe683; -[SCAdPlayableInfo chatFeedAccessoryEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047fe674(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815358);
}



/* Entry: 1047fe684; end: 1047fe78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047fe684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113815330;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815338);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113815340) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113815348) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113815350) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113815358) = param_7;
  puVar4 = auStack_70;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 1047fe78c; end: 1047fe8db; -[SCAdPlayableInfo initWithPlayableURL:playableCta:tileCtaEnabled:openPlayableFromTileTap:playableCtaDelay:chatFeedAccessoryEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1047fe78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  uStack_74 = param_8;
  _swift_getObjectType();
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar7,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_113815330,puVar7,lVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_113815338);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_113815340) = param_5;
  *(undefined1 *)(param_1 + _DAT_113815348) = param_6;
  *(undefined8 *)(param_1 + _DAT_113815350) = param_7;
  *(char *)(param_1 + _DAT_113815358) = (char)uStack_74;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_7);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  (**(code **)(lVar6 + 8))(puVar7,lVar4);
  return plVar5;
}



/* Entry: 1047fe8dc; end: 1047fea2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047fe8dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar7 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  lVar5 = _DAT_113815330;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar5,param_1,lVar4);
  lVar5 = 0;
  FUN_104742f28();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113815338);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113815340) = *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x18));
  *(undefined1 *)(unaff_x20 + _DAT_113815348) = *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x20));
  if (*(char *)(puVar1 + 1) == '\x01') {
    _swift_bridgeObjectRetain(uVar3);
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar8 = *puVar1;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar3);
    func_0x00010c00e360(uVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_113815350) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_113815358) = *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24));
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000104710904(param_1);
  return puVar7;
}



/* Entry: 1047fea2c; end: 1047fea5f; -[SCAdPlayableInfo hash] */

undefined8 FUN_1047fea2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047fe164();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047fea60; end: 1047feaef; -[SCAdPlayableInfo isEqual:] */

uint FUN_1047fea60(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047fe288(&uStack_40);
  _objc_release(param_1);
  FUN_1047ff250(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047feaf0; end: 1047feaf3; -[SCAdPlayableInfo copyWithZone:] */

void FUN_1047feaf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047feaf4; end: 1047fecdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047feaf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113815330);
  uVar3 = 0x454c424159414c50;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113815338);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113815338))[1]);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004154435f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f6a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f6c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f6e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f700);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047fecdc; end: 1047fed2b; -[SCAdPlayableInfo encodeWithCoder:] */

void FUN_1047fecdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047feaf4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047fed2c; end: 1047fed5b;  */

void FUN_1047fed2c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047fed5c(param_1);
  return;
}



/* Entry: 1047fed5c; end: 1047ff24f;  */

undefined8 FUN_1047fed5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
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
  
  uVar10 = 0x454c424159414c50;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)&uStack_d0 - extraout_x8);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = uVar10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  lVar1 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar1);
    _swift_unknownObjectRelease(lVar1);
  }
  puVar7 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    FUN_1047ff250(&uStack_80,0x112d387f8,&UNK_10d902650);
    (**(code **)(lVar8 + 0x38))(puVar4,1,1,lVar2);
LAB_1047fef0c:
    uVar5 = 0x112d36580;
    puVar7 = &UNK_10d9016d0;
  }
  else {
    puVar3 = puVar4;
    _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    (**(code **)(lVar8 + 0x38))(puVar4,(uint)puVar3 ^ 1,1,lVar2);
    puVar3 = puVar4;
    (**(code **)(lVar8 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 == 1) {
      _objc_release(param_1);
      goto LAB_1047fef0c;
    }
    (**(code **)(lVar8 + 0x20))(lVar9,puVar4,lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004154435f);
    lVar1 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar1 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar1);
      _swift_unknownObjectRelease(lVar1);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar4 = &uStack_b0;
      _swift_dynamicCast(puVar4,&uStack_80,puVar7 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar4 & 1) != 0) {
        uStack_c0 = uStack_b0;
        uVar5 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f6a0)
        ;
        lVar1 = param_1;
        func_0x00010bf66ce0();
        uStack_c4 = (undefined4)lVar1;
        _objc_release(uVar5);
        uVar5 = 0xd00000000000001b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f6c0)
        ;
        func_0x00010bf66ce0(param_1);
        _objc_release(uVar5);
        uVar5 = 0xd000000000000012;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f6e0)
        ;
        lVar1 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar1 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar1);
          _swift_unknownObjectRelease(lVar1);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          FUN_1047ff250(&uStack_80,0x112d387f8,&UNK_10d902650);
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          func_0x0001002ed07c(0);
          puVar4 = &uStack_b0;
          _swift_dynamicCast(puVar4,&uStack_80,puVar7 + 8,uVar5,6);
          uVar5 = uStack_b0;
          if ((int)puVar4 == 0) {
            uVar5 = 0;
          }
        }
        uVar6 = 0xd00000000000001b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f700)
        ;
        func_0x00010bf66ce0(param_1);
        _objc_release(uVar6);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        uVar10 = uStack_c0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,uStack_a8);
        _swift_bridgeObjectRelease(uStack_a8);
        func_0x00010c036bc0(unaff_x20);
        _objc_release(param_1);
        _objc_release(uVar6);
        _objc_release(uVar10);
        _objc_release(uVar5);
        (**(code **)(lVar8 + 8))(lVar9,lVar2);
        return unaff_x20;
      }
      (**(code **)(lVar8 + 8))(lVar9,lVar2);
      _objc_release(param_1);
      goto LAB_1047fef24;
    }
    (**(code **)(lVar8 + 8))(lVar9,lVar2);
    _objc_release(param_1);
    uVar5 = 0x112d387f8;
    puVar7 = &UNK_10d902650;
    puVar4 = &uStack_80;
  }
  FUN_1047ff250(puVar4,uVar5,puVar7);
LAB_1047fef24:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047ff250; end: 1047ff28f;  */

undefined8 FUN_1047ff250(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1047ff290; end: 1047ff2b7; -[SCAdPlayableInfo initWithCoder:] */

void FUN_1047ff290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047fed5c();
  return;
}



/* Entry: 1047ff2b8; end: 1047ff32f; -[SCAdPlayableInfo description] */

void FUN_1047ff2b8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_104742f28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047fe454(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000104710904(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ff330; end: 1047ff3ab; -[SCAdPlayableInfo init] */

void FUN_1047ff330(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdPlayableInfoWrapper.swift",0x27
             ,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ff378);
  (*pcVar1)();
}



/* Entry: 1047ff3ac; end: 1047ff40b; -[SCAdPlayableInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff3ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113815330;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815338 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113815350));
  return;
}



/* Entry: 1047ff40c; end: 1047ff413;  */

void FUN_1047ff40c(void)

{
  if (lRam0000000113090510 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81c33c);
  return;
}



/* Entry: 1047ff414; end: 1047ff44b;  */

void FUN_1047ff414(undefined8 param_1)

{
  if (lRam0000000113090510 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81c33c);
  return;
}



/* Entry: 1047ff44c; end: 1047ff4d7;  */

void FUN_1047ff44c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dd36158;
    puStack_40 = &UNK_10dd36170;
    puStack_38 = &UNK_10dd36170;
    puStack_30 = &UNK_10dd36188;
    puStack_28 = &UNK_10dd36170;
    _swift_updateClassMetadata2(param_1,0x100,6,&lStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1047ff4d8; end: 1047ff4e7; -[SCAdSnapCtaConfig foregroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090520));
  return;
}



/* Entry: 1047ff4e8; end: 1047ff4f7; -[SCAdSnapCtaConfig backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090528));
  return;
}



/* Entry: 1047ff4f8; end: 1047ff507; -[SCAdSnapCtaConfig cardCtaAnimationDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090530));
  return;
}



/* Entry: 1047ff508; end: 1047ff517; -[SCAdSnapCtaConfig pillButtonAnimationDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090538));
  return;
}



/* Entry: 1047ff518; end: 1047ff527; -[SCAdSnapCtaConfig pillButtonAnimationDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090540));
  return;
}



/* Entry: 1047ff528; end: 1047ff537; -[SCAdSnapCtaConfig additionalTouchAreaTopPt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090548));
  return;
}



/* Entry: 1047ff538; end: 1047ff547; -[SCAdSnapCtaConfig additionalTouchAreaBottomPt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090550));
  return;
}



/* Entry: 1047ff548; end: 1047ff557; -[SCAdSnapCtaConfig infoCardConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090558));
  return;
}



/* Entry: 1047ff558; end: 1047ff567; -[SCAdSnapCtaConfig preferredImageSizeDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090560));
  return;
}



/* Entry: 1047ff568; end: 1047ff577; -[SCAdSnapCtaConfig disablePillButtonAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090568));
  return;
}



/* Entry: 1047ff578; end: 1047ff587; -[SCAdSnapCtaConfig enableColorExtractionSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090570));
  return;
}



/* Entry: 1047ff588; end: 1047ff7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090520) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090528) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090530) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090538) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090540) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090548) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113090550) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113090558) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113090560) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113090568) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113090570) = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ff7a8; end: 1047ff89b; -[SCAdSnapCtaConfig initWithForegroundColor:backgroundColor:cardCtaAnimationDelayMs:pillButtonAnimationDelayMs:pillButtonAnimationDurationMs:additionalTouchAreaTopPt:additionalTouchAreaBottomPt:infoCardConfig:preferredImageSizeDp:disablePillButtonAnimation:enableColorExtractionSpotlight:] */

void FUN_1047ff7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x0001047ff698(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13);
  return;
}



/* Entry: 1047ff89c; end: 1047ff8cb;  */

void FUN_1047ff89c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047ff8cc(param_1);
  return;
}



/* Entry: 1047ff8cc; end: 1047ffc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ff8cc(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  plVar3 = &lStack_b0;
  _swift_getObjectType();
  if (*(char *)(param_1 + 4) == '\x01') {
    plVar3 = (long *)0x0;
  }
  else {
    uVar7 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = *param_1;
    uVar8 = param_1[1];
    lVar5 = 0;
    FUN_1047b3ccc();
    lVar4 = lVar5;
    _objc_allocWithZone();
    *(undefined8 *)(lVar4 + _DAT_11308ef48) = uVar10;
    *(undefined8 *)(lVar4 + _DAT_11308ef50) = uVar8;
    *(undefined8 *)(lVar4 + _DAT_11308ef58) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_11308ef60) = uVar9;
    lStack_b0 = lVar4;
    lStack_a8 = lVar5;
    _objc_msgSendSuper2(&lStack_b0,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113090520) = plVar3;
  if (*(char *)(param_1 + 9) == '\x01') {
    plVar3 = (long *)0x0;
  }
  else {
    uVar7 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[5];
    uVar8 = param_1[6];
    lVar5 = 0;
    FUN_1047b3ccc();
    lVar4 = lVar5;
    _objc_allocWithZone();
    *(undefined8 *)(lVar4 + _DAT_11308ef48) = uVar10;
    *(undefined8 *)(lVar4 + _DAT_11308ef50) = uVar8;
    *(undefined8 *)(lVar4 + _DAT_11308ef58) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_11308ef60) = uVar9;
    plVar3 = &lStack_a0;
    lStack_a0 = lVar4;
    lStack_98 = lVar5;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113090528) = plVar3;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[10];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090530) = puVar6;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[0xc];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090538) = puVar6;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[0xe];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090540) = puVar6;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[0x10];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090548) = puVar6;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[0x12];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090550) = puVar6;
  if (*(char *)((long)param_1 + 0xb9) == '\x01') {
    uVar7 = 0;
  }
  else {
    uVar8 = param_1[0x16];
    uVar7 = param_1[0x14];
    uVar1 = *(undefined1 *)(param_1 + 0x15);
    uVar2 = *(undefined1 *)(param_1 + 0x17);
    uVar9 = 0;
    FUN_104802258(0);
    _objc_allocWithZone();
    FUN_104801c70(uVar7,uVar1,uVar8,uVar2,uVar9);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113090558) = uVar7;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar9 = param_1[0x18];
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_113090560) = puVar6;
  if (*(char *)((long)param_1 + 0xc9) == '\x02') {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_113090568) = puVar6;
  if (*(char *)((long)param_1 + 0xca) == '\x02') {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_113090570) = puVar6;
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ffc28; end: 1047ffc5b; -[SCAdSnapCtaConfig hash] */

undefined8 FUN_1047ffc28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047ffc5c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ffc5c; end: 1048000cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ffc5c(void)

{
  double dVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  __ss6HasherVABycfC(auStack_a8);
  lVar2 = *(long *)(unaff_x20 + _DAT_113090520);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_138);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef48) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef48);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef50) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef50);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef58) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef58);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef60) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef60);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090528);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_f0);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef48) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef48);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef50) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef50);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef58) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef58);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef60) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef60);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090530);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090538);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090540);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090548);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090550);
  if (lVar2 == 0) {
    lVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_113090558) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104801914();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090560);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090568);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090570);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048000d0; end: 1048006b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048000d0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,alStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113090520) == 0) {
        uVar12 = (uint)(*(long *)(lStack_88 + _DAT_113090520) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113090520);
        if (lVar8 == 0) {
          lVar2 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1047b3ccc();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = lVar2;
        _objc_retain(lVar8);
        uVar12 = 0;
        FUN_1047b37d0();
        func_0x00010006e7f4(alStack_80);
      }
      if (*(long *)(unaff_x20 + _DAT_113090528) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_113090528) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113090528);
        if (lVar8 == 0) {
          lVar2 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1047b3ccc();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = lVar2;
        _objc_retain(lVar8);
        uVar13 = 0;
        FUN_1047b37d0();
        func_0x00010006e7f4(alStack_80);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090530);
      lVar8 = *(long *)(lStack_88 + _DAT_113090530);
      uVar14 = (uint)(lVar2 == 0 && lVar8 == 0);
      if (lVar2 != 0 && lVar8 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar14 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090538);
      lVar8 = *(long *)(lStack_88 + _DAT_113090538);
      uVar11 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090540);
      lVar8 = *(long *)(lStack_88 + _DAT_113090540);
      uStack_8c = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090548);
      lVar8 = *(long *)(lStack_88 + _DAT_113090548);
      uStack_90 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_90 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090550);
      lVar8 = *(long *)(lStack_88 + _DAT_113090550);
      uVar9 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      if (*(long *)(unaff_x20 + _DAT_113090558) == 0) {
        uVar7 = (uint)(*(long *)(lStack_88 + _DAT_113090558) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113090558);
        if (lVar8 == 0) {
          lVar2 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_104802258();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = lVar2;
        _objc_retain(lVar8);
        uVar7 = 0;
        FUN_1048019e0();
        func_0x00010006e7f4(alStack_80);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090560);
      lVar8 = *(long *)(lStack_88 + _DAT_113090560);
      uVar10 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090568);
      lVar8 = *(long *)(lStack_88 + _DAT_113090568);
      uVar5 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c();
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090570);
      lVar8 = *(long *)(lStack_88 + _DAT_113090570);
      if (lVar2 == 0) {
        lVar3 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_88);
        if (lVar8 != 0) {
          uVar6 = 0;
          goto LAB_10480063c;
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        lVar3 = lStack_88;
        if (lVar8 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar8);
          _objc_retain(lVar2);
          lVar4 = lVar2;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar6 = (uint)lVar4;
          _objc_release(lVar2);
          _objc_release(lVar8);
        }
LAB_10480063c:
        _objc_release(lVar3);
      }
      if ((uVar12 & uVar13 & uVar14 & uVar11 & uStack_8c & uStack_90 & uVar9 & uVar7 & uVar10 & 1)
          != 0) {
        uVar5 = uVar5 & uVar6;
        goto LAB_104800684;
      }
    }
  }
  uVar5 = 0;
LAB_104800684:
  return uVar5 & 1;
}



/* Entry: 1048006b4; end: 104800733; -[SCAdSnapCtaConfig isEqual:] */

uint FUN_1048006b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048000d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104800734; end: 104800737; -[SCAdSnapCtaConfig copyWithZone:] */

void FUN_104800734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104800738; end: 104800a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104800738(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f750);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1bd5b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f770);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f20f790);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20f7b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20f7e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20f800);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f820);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1e30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20f840);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20f860);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104800a3c; end: 104800a8b; -[SCAdSnapCtaConfig encodeWithCoder:] */

void FUN_104800a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104800738(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104800a8c; end: 104800acb;  */

undefined8 FUN_104800a8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10480101c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104800acc; end: 104800b07; -[SCAdSnapCtaConfig initWithCoder:] */

undefined8 FUN_104800acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10480101c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104800b08; end: 104800b4b; -[SCAdSnapCtaConfig description] */

void FUN_104800b08(undefined8 param_1)

{
  undefined1 auStack_f0 [208];
  
  _objc_retain();
  FUN_104800c90(auStack_f0);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104800b4c; end: 104800bc7; -[SCAdSnapCtaConfig init] */

void FUN_104800b4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSnapCtaConfigWrapper.swift",
             0x28,2,0xab,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104800b94);
  (*pcVar1)();
}



/* Entry: 104800bc8; end: 104800c8f; -[SCAdSnapCtaConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104800bc8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090520));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090528));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090530));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090538));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090540));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090548));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090550));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090558));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090560));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090568));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090570));
  return;
}



/* Entry: 104800c90; end: 10480101b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104800c90(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar9 = *(long *)(param_3 + _DAT_113090520);
  if (lVar9 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)(lVar9 + _DAT_11308ef48);
    uStack_c8 = *(undefined8 *)(lVar9 + _DAT_11308ef50);
    uStack_c0 = *(undefined8 *)(lVar9 + _DAT_11308ef58);
    uStack_d0 = *(undefined8 *)(lVar9 + _DAT_11308ef60);
  }
  lVar10 = *(long *)(param_3 + _DAT_113090528);
  if (lVar10 == 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    uStack_e0 = *(undefined8 *)(lVar10 + _DAT_11308ef48);
    uStack_e8 = *(undefined8 *)(lVar10 + _DAT_11308ef50);
    uStack_f0 = *(undefined8 *)(lVar10 + _DAT_11308ef58);
    uStack_f8 = *(undefined8 *)(lVar10 + _DAT_11308ef60);
  }
  uVar17 = 0;
  bVar1 = *(long *)(param_3 + _DAT_113090530) == 0;
  if (bVar1) {
    uVar18 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar18 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_113090538) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar17 = param_2;
  }
  uVar19 = 0;
  bVar3 = *(long *)(param_3 + _DAT_113090540) == 0;
  if (bVar3) {
    uVar20 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar20 = param_2;
  }
  bVar4 = *(long *)(param_3 + _DAT_113090548) == 0;
  if (!bVar4) {
    func_0x00010bf885a0();
    uVar19 = param_2;
  }
  uVar21 = 0;
  bVar5 = *(long *)(param_3 + _DAT_113090550) == 0;
  if (bVar5) {
    uVar22 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar22 = param_2;
  }
  lVar11 = *(long *)(param_3 + _DAT_113090558);
  if (lVar11 == 0) {
    uVar13 = 0;
    uVar15 = 0;
    uVar14 = 1;
    uVar23 = 0;
  }
  else {
    lVar12 = *(long *)(lVar11 + _DAT_1130905a0);
    if (lVar12 == 0) {
      _objc_retain(lVar11);
      uVar23 = 0;
      uVar16 = param_2;
    }
    else {
      _objc_retain(lVar11);
      func_0x00010bf885a0(lVar12);
      uVar16 = param_2;
      uVar23 = param_2;
    }
    uVar13 = (ulong)(lVar12 == 0);
    if (*(long *)(lVar11 + _DAT_1130905a8) == 0) {
      _objc_release(lVar11);
      uVar14 = 0;
      uVar15 = 1;
      param_2 = uVar16;
    }
    else {
      func_0x00010bf885a0();
      param_2 = uVar16;
      _objc_release(lVar11);
      uVar14 = 0;
      uVar15 = 0;
      uVar21 = uVar16;
    }
  }
  bVar6 = *(long *)(param_3 + _DAT_113090560) == 0;
  if (bVar6) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  lVar11 = *(long *)(param_3 + _DAT_113090568);
  if (lVar11 == 0) {
    uVar7 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uVar7 = (undefined1)lVar11;
  }
  lVar11 = *(long *)(param_3 + _DAT_113090570);
  if (lVar11 == 0) {
    uVar8 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uVar8 = (undefined1)lVar11;
  }
  *param_1 = uStack_b8;
  param_1[1] = uStack_c8;
  param_1[2] = uStack_c0;
  param_1[3] = uStack_d0;
  *(bool *)(param_1 + 4) = lVar9 == 0;
  param_1[5] = uStack_e0;
  param_1[6] = uStack_e8;
  param_1[7] = uStack_f0;
  param_1[8] = uStack_f8;
  *(bool *)(param_1 + 9) = lVar10 == 0;
  param_1[10] = uVar18;
  *(bool *)(param_1 + 0xb) = bVar1;
  param_1[0xc] = uVar17;
  *(bool *)(param_1 + 0xd) = bVar2;
  param_1[0xe] = uVar20;
  *(bool *)(param_1 + 0xf) = bVar3;
  param_1[0x10] = uVar19;
  *(bool *)(param_1 + 0x11) = bVar4;
  param_1[0x12] = uVar22;
  *(bool *)(param_1 + 0x13) = bVar5;
  param_1[0x14] = uVar23;
  param_1[0x15] = uVar13;
  param_1[0x16] = uVar21;
  *(undefined1 *)(param_1 + 0x17) = uVar15;
  *(undefined1 *)((long)param_1 + 0xb9) = uVar14;
  param_1[0x18] = param_2;
  *(bool *)(param_1 + 0x19) = bVar6;
  *(undefined1 *)((long)param_1 + 0xc9) = uVar7;
  *(undefined1 *)((long)param_1 + 0xca) = uVar8;
  return;
}



/* Entry: 10480101c; end: 10480189b;  */

undefined8 FUN_10480101c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f750);
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
    func_0x00010006e7f4(&uStack_90);
    uStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047b3ccc(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_c8 = uStack_b8;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
    }
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1bd5b0);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d0 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047b3ccc(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_d0 = uStack_b8;
    if ((int)puVar4 == 0) {
      uStack_d0 = 0;
    }
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20f770);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_d8 = uStack_b8;
    if ((int)puVar4 == 0) {
      uStack_d8 = 0;
    }
  }
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f20f790);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_e0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_e0 = uStack_b8;
    if ((int)puVar4 == 0) {
      uStack_e0 = 0;
    }
  }
  uVar2 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20f7b0);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uVar2 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20f7e0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar5,6);
    uVar5 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20f800);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar6,6);
    uVar6 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f820);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_104802258(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar7,6);
    uVar7 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1e30);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar8,6);
    uVar8 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar9 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20f840);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar9,6);
    uVar9 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
    }
  }
  uVar10 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20f860);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (param_1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar10,6);
    uVar10 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
    }
  }
  func_0x00010c013cc0();
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  return unaff_x20;
}



/* Entry: 10480189c; end: 1048018bb;  */

void FUN_10480189c(void)

{
  _objc_opt_self(&PTR_PTR_1129d7ca0);
  return;
}



/* Entry: 1048018bc; end: 104801913;  */

void FUN_1048018bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_104801c70(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104801914; end: 1048019df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801914(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_1130905a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130905a8);
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



/* Entry: 1048019e0; end: 104801b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048019e0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_1130905a0);
      lVar7 = *(long *)(lStack_68 + _DAT_1130905a0);
      uVar4 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_1130905a8);
      lVar7 = *(long *)(lStack_68 + _DAT_1130905a8);
      if (lVar6 == 0) {
        lVar2 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 != 0) {
          uVar5 = 0;
          goto LAB_104801b44;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_68;
        if (lVar7 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar7);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
LAB_104801b44:
        _objc_release(lVar2);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_104801b50;
    }
  }
  uVar4 = 0;
LAB_104801b50:
  return uVar4 & 1;
}



/* Entry: 104801b74; end: 104801b83; -[SCAdSnapInfoCardConfig width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130905a0));
  return;
}



/* Entry: 104801b84; end: 104801b93; -[SCAdSnapInfoCardConfig height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130905a8));
  return;
}



/* Entry: 104801b94; end: 104801bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801b94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130905a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130905a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104801bf8; end: 104801c6f; -[SCAdSnapInfoCardConfig initWithWidth:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130905a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130905a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104801c70; end: 104801d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801c70(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_1130905a0) = puVar1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_1130905a8) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104801d48; end: 104801d7b; -[SCAdSnapInfoCardConfig hash] */

undefined8 FUN_104801d48(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104801914();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104801d7c; end: 104801dfb; -[SCAdSnapInfoCardConfig isEqual:] */

uint FUN_104801d7c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048019e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104801dfc; end: 104801dff; -[SCAdSnapInfoCardConfig copyWithZone:] */

void FUN_104801dfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104801e00; end: 104801ebf; -[SCAdSnapInfoCardConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104801ec0; end: 104801eff;  */

undefined8 FUN_104801ec0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1048020a4(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104801f00; end: 104801f3b; -[SCAdSnapInfoCardConfig initWithCoder:] */

undefined8 FUN_104801f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048020a4();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104801f3c; end: 104801f73; -[SCAdSnapInfoCardConfig description] */

void FUN_104801f3c(undefined8 param_1)

{
  _objc_retain();
  FUN_104802028();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104801f74; end: 104801fef; -[SCAdSnapInfoCardConfig init] */

void FUN_104801f74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdSnapInfoCardConfigWrapper.swift",0x2d,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104801fbc);
  (*pcVar1)();
}



/* Entry: 104801ff0; end: 104802027; -[SCAdSnapInfoCardConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104801ff0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130905a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130905a8));
  return;
}



/* Entry: 104802028; end: 1048020a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104802028(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_1130905a0) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  if (*(long *)(param_2 + _DAT_1130905a8) != 0) {
    func_0x00010bf885a0();
  }
  return param_1;
}



/* Entry: 1048020a4; end: 104802257;  */

undefined8 FUN_1048020a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  
  uVar2 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar2,6);
    uVar2 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
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
  func_0x00010c0630e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 104802258; end: 104802277;  */

void FUN_104802258(void)

{
  _objc_opt_self(&PTR_PTR_1129d7dc0);
  return;
}



/* Entry: 104802278; end: 104802287; -[SCAdSnapTopMedia mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104802278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130905d8);
}



/* Entry: 104802288; end: 104802297; -[SCAdSnapTopMedia mediaDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104802288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130905e0);
}



/* Entry: 104802298; end: 1048022a7; -[SCAdSnapTopMedia webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104802298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130905e8));
  return;
}



/* Entry: 1048022a8; end: 1048022b7; -[SCAdSnapTopMedia video] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048022a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130905f0));
  return;
}



/* Entry: 1048022b8; end: 1048022c7; -[SCAdSnapTopMedia image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048022b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130905f8));
  return;
}



/* Entry: 1048022c8; end: 1048022d7; -[SCAdSnapTopMedia playable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048022c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090600));
  return;
}



/* Entry: 1048022d8; end: 1048022e7; -[SCAdSnapTopMedia arExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048022d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090608));
  return;
}


