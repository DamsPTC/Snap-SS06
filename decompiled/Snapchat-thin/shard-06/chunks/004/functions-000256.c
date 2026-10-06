/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10482ebe0; end: 10482edb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482ebe0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  long lStack_60;
  long lStack_58;
  
  _objc_allocWithZone();
  uVar4 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1130912b0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130912b8) = uVar4;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  lVar1 = 0;
  FUN_1047e0d80();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar7;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130912c0) = plVar3;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482edb8; end: 10482edd7; -[SCAdTapToPauseInteraction hash] */

void FUN_10482edb8(void)

{
  FUN_10482edd8();
  return;
}



/* Entry: 10482edd8; end: 10482eef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482edd8(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_1130912b0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130912b8));
  lVar1 = *(long *)(unaff_x20 + _DAT_1130912c0);
  __ss6HasherVABycfC(auStack_c0);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc38) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc40) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc48) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc50) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482eef4; end: 10482effb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10482eef4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_1130912b0);
      lVar6 = *(long *)(lStack_78 + _DAT_1130912b0);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130912b8);
      uVar8 = *(undefined8 *)(lStack_78 + _DAT_1130912b8);
      uVar4 = *(undefined8 *)(lStack_78 + _DAT_1130912c0);
      uVar2 = 0;
      FUN_1047e0d80();
      auStack_70[0] = uVar4;
      lStack_58 = uVar2;
      _objc_retain(uVar4);
      puVar3 = auStack_70;
      FUN_1047e0630(puVar3);
      _objc_release(lStack_78);
      func_0x00010006e7f4(auStack_70);
      return (uint)(lVar5 == lVar6 && (int)uVar7 == (int)uVar8) & (uint)puVar3;
    }
  }
  return 0;
}



/* Entry: 10482effc; end: 10482f07b; -[SCAdTapToPauseInteraction isEqual:] */

uint FUN_10482effc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482eef4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482f07c; end: 10482f07f; -[SCAdTapToPauseInteraction copyWithZone:] */

void FUN_10482f07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482f080; end: 10482f15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f080(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf92fa0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e4f495449534f50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495449534f50,0xe800000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10482f160; end: 10482f1af; -[SCAdTapToPauseInteraction encodeWithCoder:] */

void FUN_10482f160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10482f080(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482f1b0; end: 10482f1df;  */

void FUN_10482f1b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482f1e0(param_1);
  return;
}



/* Entry: 10482f1e0; end: 10482f38f;  */

undefined8 FUN_10482f1e0(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf66f00(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    uVar1 = 0x4e4f495449534f50;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495449534f50,0xe800000000000000);
    uVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,uVar2);
      _swift_unknownObjectRelease(uVar2);
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    lStack_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 == 0) {
      _objc_release(param_1);
      func_0x00010006e7f4(&uStack_60);
      goto LAB_10482f358;
    }
    uVar1 = 0;
    FUN_1047e0d80(0);
    puVar3 = &uStack_88;
    _swift_dynamicCast(puVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c052b60();
      _objc_release(param_1);
      _objc_release(uStack_88);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
LAB_10482f358:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10482f390; end: 10482f3b7; -[SCAdTapToPauseInteraction initWithCoder:] */

void FUN_10482f390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482f1e0();
  return;
}



/* Entry: 10482f3b8; end: 10482f3d3; -[SCAdTapToPauseInteraction description] */

void FUN_10482f3b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482f3d4; end: 10482f44f; -[SCAdTapToPauseInteraction init] */

void FUN_10482f3d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdTapToPauseInteractionWrapper.swift",0x30,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482f41c);
  (*pcVar1)();
}



/* Entry: 10482f450; end: 10482f45f; -[SCAdTapToPauseInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130912c0));
  return;
}



/* Entry: 10482f460; end: 10482f47f;  */

void FUN_10482f460(void)

{
  _objc_opt_self(&PTR_PTR_1129da378);
  return;
}



/* Entry: 10482f480; end: 10482f48f; -[SCAdTooltipImpression timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482f480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130912f0);
}



/* Entry: 10482f490; end: 10482f49f; -[SCAdTooltipImpression tooltipDisplayType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482f490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130912f8);
}



/* Entry: 10482f4a0; end: 10482f4af; -[SCAdTooltipImpression tooltipSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482f4a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091300);
}



/* Entry: 10482f4b0; end: 10482f4bf; -[SCAdTooltipImpression tooltipPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091308));
  return;
}



/* Entry: 10482f4c0; end: 10482f54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130912f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130912f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091300) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113091308) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482f54c; end: 10482f5e3; -[SCAdTooltipImpression initWithTimestampMs:tooltipDisplayType:tooltipSource:tooltipPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f54c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130912f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130912f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113091300) = param_5;
  *(undefined8 *)(param_1 + _DAT_113091308) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 10482f5e4; end: 10482f613;  */

void FUN_10482f5e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482f614(param_1);
  return;
}



/* Entry: 10482f614; end: 10482f70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f614(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjectType();
  uVar4 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1130912f0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130912f8) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113091300) = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  lVar1 = 0;
  FUN_1047e0d80();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar7;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113091308) = plVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482f710; end: 10482f72f; -[SCAdTooltipImpression hash] */

void FUN_10482f710(void)

{
  FUN_10482f730();
  return;
}



/* Entry: 10482f730; end: 10482f85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482f730(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130912f0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130912f8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091300));
  lVar1 = *(long *)(unaff_x20 + _DAT_113091308);
  __ss6HasherVABycfC(auStack_c0);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc38) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc40) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc48) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc50) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482f860; end: 10482f983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10482f860(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_1130912f0);
      lVar6 = *(long *)(lStack_88 + _DAT_1130912f0);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130912f8);
      uVar8 = *(undefined8 *)(lStack_88 + _DAT_1130912f8);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113091300);
      uVar10 = *(undefined8 *)(lStack_88 + _DAT_113091300);
      uVar4 = *(undefined8 *)(lStack_88 + _DAT_113091308);
      uVar2 = 0;
      FUN_1047e0d80();
      auStack_80[0] = uVar4;
      lStack_68 = uVar2;
      _objc_retain(uVar4);
      puVar3 = auStack_80;
      FUN_1047e0630(puVar3);
      _objc_release(lStack_88);
      func_0x00010006e7f4(auStack_80);
      return (uint)((lVar5 == lVar6 && (int)uVar7 == (int)uVar8) && (int)uVar9 == (int)uVar10) &
             (uint)puVar3;
    }
  }
  return 0;
}



/* Entry: 10482f984; end: 10482fa03; -[SCAdTooltipImpression isEqual:] */

uint FUN_10482f984(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482f860(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482fa04; end: 10482fa07; -[SCAdTooltipImpression copyWithZone:] */

void FUN_10482fa04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482fa08; end: 10482fb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482fa08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210ed0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f5049544c4f4f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5049544c4f4f54,0xee00454352554f53);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210ef0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10482fb48; end: 10482fb97; -[SCAdTooltipImpression encodeWithCoder:] */

void FUN_10482fb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10482fa08(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482fb98; end: 10482fbc7;  */

void FUN_10482fb98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482fbc8(param_1);
  return;
}



/* Entry: 10482fbc8; end: 10482fdff;  */

undefined8 FUN_10482fbc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  uVar4 = 0xf210ed0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  FUN_1046b7e80(lVar2);
  if ((uVar4 & 0xff) != 1) {
    uVar1 = 0x5f5049544c4f4f54;
    uVar4 = 0x52554f53;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5049544c4f4f54);
    lVar2 = param_1;
    func_0x00010bf66f40(param_1);
    _objc_release(uVar1);
    func_0x000102ca6c68(lVar2);
    if ((uVar4 & 0xff) != 1) {
      uVar1 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210ef0);
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
        goto LAB_10482fdb0;
      }
      uVar1 = 0;
      FUN_1047e0d80(0);
      puVar3 = &uStack_98;
      _swift_dynamicCast(puVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010c052b40();
        _objc_release(param_1);
        _objc_release(uStack_98);
        return unaff_x20;
      }
    }
  }
  _objc_release(param_1);
LAB_10482fdb0:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10482fe00; end: 10482fe27; -[SCAdTooltipImpression initWithCoder:] */

void FUN_10482fe00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482fbc8();
  return;
}



/* Entry: 10482fe28; end: 10482fe57; -[SCAdTooltipImpression description] */

void FUN_10482fe28(void)

{
  undefined1 auStack_48 [56];
  
  _objc_retain();
  FUN_10482ff2c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482fe58; end: 10482fe9f;  */

void FUN_10482fe58(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10482ff2c(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 10482fea0; end: 10482ff1b; -[SCAdTooltipImpression init] */

void FUN_10482fea0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdTooltipImpressionWrapper.swift"
             ,0x2c,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482fee8);
  (*pcVar1)();
}



/* Entry: 10482ff1c; end: 10482ff2b; -[SCAdTooltipImpression .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482ff1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091308));
  return;
}



/* Entry: 10482ff2c; end: 104830003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482ff2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130912f0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130912f8);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113091300);
  lVar1 = *(long *)(param_2 + _DAT_113091308);
  _objc_retain();
  _objc_release(param_2);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_11308fc38);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_11308fc40);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_11308fc48);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_11308fc50);
  _objc_release(lVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  return;
}



/* Entry: 104830004; end: 104830023;  */

void FUN_104830004(void)

{
  _objc_opt_self(&PTR_PTR_1129da458);
  return;
}



/* Entry: 104830024; end: 10483009f;  */

undefined8 FUN_104830024(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1048331f8(param_1);
  func_0x0001017b67a8(param_1);
  return uVar1;
}



/* Entry: 1048300a0; end: 1048300af; -[SCAdMediaWebviewAttachment webview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048300a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091338));
  return;
}



/* Entry: 1048300b0; end: 1048300bf; -[SCAdMediaWebviewAttachment pdpContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048300b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091340));
  return;
}



/* Entry: 1048300c0; end: 1048300cf; -[SCAdMediaWebviewAttachment blockWebviewPreloading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048300c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091348);
}



/* Entry: 1048300d0; end: 1048300df; -[SCAdMediaWebviewAttachment allowAutoFill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048300d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091350);
}



/* Entry: 1048300e0; end: 1048300ef; -[SCAdMediaWebviewAttachment webBrowserType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048300e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091358);
}



/* Entry: 1048300f0; end: 1048300ff; -[SCAdMediaWebviewAttachment metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048300f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091360));
  return;
}



/* Entry: 104830100; end: 10483010f; -[SCAdMediaWebviewAttachment allowClickId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830100(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091368);
}



/* Entry: 104830110; end: 10483011f; -[SCAdMediaWebviewAttachment enableExtendedLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091370);
}



/* Entry: 104830120; end: 10483012f; -[SCAdMediaWebviewAttachment cidMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091378));
  return;
}



/* Entry: 104830130; end: 10483013f; -[SCAdMediaWebviewAttachment allowDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830130(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091380);
}



/* Entry: 104830140; end: 10483014b; -[SCAdMediaWebviewAttachment displayableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091388))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091388);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483014c; end: 104830157; -[SCAdMediaWebviewAttachment profileIconURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483014c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091390))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091390);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104830158; end: 104830167; -[SCAdMediaWebviewAttachment webViewLifecycleServerConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091398));
  return;
}



/* Entry: 104830168; end: 104830177; -[SCAdMediaWebviewAttachment engagementStreamMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130913a0));
  return;
}



/* Entry: 104830178; end: 104830183; -[SCAdMediaWebviewAttachment reengagedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830178(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130913a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130913a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104830184; end: 10483018f; -[SCAdMediaWebviewAttachment dynamicScriptConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830184(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130913b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130913b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104830190; end: 10483019f; -[SCAdMediaWebviewAttachment disallowPrivacyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830190(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130913b8);
}



/* Entry: 1048301a0; end: 1048301af; -[SCAdMediaWebviewAttachment instantPageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048301a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130913c0));
  return;
}



/* Entry: 1048301b0; end: 1048301bf; -[SCAdMediaWebviewAttachment isShopPayUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048301b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130913c8);
}



/* Entry: 1048301c0; end: 1048301cb; -[SCAdMediaWebviewAttachment storefrontToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048301c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130913d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130913d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048301cc; end: 104830223;  */

void FUN_1048301cc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104830224; end: 104830233; -[SCAdMediaWebviewAttachment enableAppendingClickIdForExb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830224(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130913d8);
}



/* Entry: 104830234; end: 104830243; -[SCAdMediaWebviewAttachment promotionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130913e0));
  return;
}



/* Entry: 104830244; end: 104830253; -[SCAdMediaWebviewAttachment enableSkoverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104830244(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130913e8);
}



/* Entry: 104830254; end: 104830263; -[SCAdMediaWebviewAttachment retargetPromptInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130913f0));
  return;
}



/* Entry: 104830264; end: 1048302bf; -[SCAdMediaWebviewAttachment pharmaDisclaimerCtas] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104830264(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130913f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10483539c(0);
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



/* Entry: 1048302c0; end: 10483055b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048302c0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined1 param_29,undefined4 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091340) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113091348) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113091350) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091358) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113091360) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113091368) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113091370) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113091378) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113091380) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091388);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091390);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113091398) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_1130913a0) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913a8);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913b0);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined1 *)(unaff_x20 + _DAT_1130913b8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_1130913c0) = param_24;
  *(undefined1 *)(unaff_x20 + _DAT_1130913c8) = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913d0);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  *(undefined1 *)(unaff_x20 + _DAT_1130913d8) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_1130913e0) = param_31;
  *(undefined1 *)(unaff_x20 + _DAT_1130913e8) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_1130913f0) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_1130913f8) = param_35;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483055c; end: 10483070f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483055c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined1 param_29,undefined4 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113091338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091340) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113091348) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113091350) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091358) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113091360) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113091368) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113091370) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113091378) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113091380) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091388);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091390);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113091398) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_1130913a0) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913a8);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913b0);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined1 *)(unaff_x20 + _DAT_1130913b8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_1130913c0) = param_24;
  *(undefined1 *)(unaff_x20 + _DAT_1130913c8) = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130913d0);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  *(undefined1 *)(unaff_x20 + _DAT_1130913d8) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_1130913e0) = param_31;
  *(undefined1 *)(unaff_x20 + _DAT_1130913e8) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_1130913f0) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_1130913f8) = param_35;
  FUN_104834c18();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104830710; end: 10483099b; -[SCAdMediaWebviewAttachment initWithWebview:pdpContext:blockWebviewPreloading:allowAutoFill:webBrowserType:metadata:allowClickId:enableExtendedLifecycle:cidMetadata:allowDeeplink:displayableURL:profileIconURL:webViewLifecycleServerConfig:engagementStreamMetadata:reengagedUrl:dynamicScriptConfig:disallowPrivacyPrompt:instantPageData:isShopPayUser:storefrontToken:enableAppendingClickIdForExb:promotionInfo:enableSkoverlay:retargetPromptInfo:pharmaDisclaimerCtas:] */

void FUN_104830710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,long param_14,long param_15)

{
  long lVar1;
  undefined8 uVar2;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000060;
  long in_stack_00000088;
  
  if (param_14 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_15 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (in_stack_00000038 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = in_stack_00000088;
  _objc_retain();
  if (in_stack_00000040 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000040);
  }
  if (in_stack_00000060 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000060);
  }
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_10483539c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000088,uVar2);
    _objc_release(lVar1);
  }
  FUN_10483055c(param_3,param_4,param_5,param_6,param_7,param_8,(undefined1)param_9,param_9._1_1_,
                param_11,param_12);
  return;
}



/* Entry: 10483099c; end: 1048309cf; -[SCAdMediaWebviewAttachment hash] */

undefined8 FUN_10483099c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048309d0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048309d0; end: 104830f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048309d0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherVABycfC(auStack_c8);
  if (*(long *)(unaff_x20 + _DAT_113091338) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001048121ac();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_113091340);
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_110);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar5 + _DAT_113090b28));
    if ((ulong)((undefined8 *)(lVar5 + _DAT_113090b30))[1] >> 0x3c < 0xf) {
      uVar3 = *(undefined8 *)(lVar5 + _DAT_113090b30);
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3);
      uVar1 = uVar3;
      func_0x00010bfde980();
      _objc_release(uVar3);
    }
    else {
      uVar1 = 0;
    }
    __ss6HasherV8_combineyySuF(uVar1);
    uStack_58 = uStack_e8;
    uStack_60 = uStack_f0;
    uStack_48 = uStack_d8;
    uStack_50 = uStack_e0;
    uStack_40 = uStack_d0;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091348));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091350));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091358);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113091360) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104838830();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091368));
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_113091370);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_113091378) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048353f0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091380));
  if (((undefined8 *)(unaff_x20 + _DAT_113091388))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113091388);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113091390))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113091390);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113091398) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104837e6c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_1130913a0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048368b0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1130913a8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130913a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130913b0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130913b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_1130913b8);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_1130913c0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047ea9b8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130913c8));
  if (((undefined8 *)(unaff_x20 + _DAT_1130913d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130913d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_1130913d8);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_1130913e0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10483ab1c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_1130913e8);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_1130913f0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010483c034();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_1130913f8);
  lVar5 = lVar4;
  if (lVar4 != 0) {
    uVar1 = 0;
    FUN_10483539c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104830f38; end: 10483173f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104830f38(undefined8 param_1)

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
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long unaff_x20;
  uint uVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  uint uStack_f4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_c8;
  uint uStack_b4;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  long alStack_88 [5];
  
  FUN_104834c38(param_1,alStack_88,0x112d387f8,&UNK_10d902650);
  if (alStack_88[3] == 0) {
    func_0x00010006e7f4(alStack_88);
  }
  else {
    FUN_104834c18();
    plVar26 = &lStack_90;
    _swift_dynamicCast(plVar26,alStack_88,PTR___sypN_11034f1a8 + 8,param_1,6);
    if (((ulong)plVar26 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113091338) == 0) {
        uStack_94 = (uint)(*(long *)(lStack_90 + _DAT_113091338) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_113091338);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_104812fc0();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_94 = 0;
        FUN_104812270();
        func_0x00010006e7f4(alStack_88);
      }
      if (*(long *)(unaff_x20 + _DAT_113091340) == 0) {
        uStack_98 = (uint)(*(long *)(lStack_90 + _DAT_113091340) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_113091340);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_104814b28();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_98 = 0;
        FUN_104814518();
        func_0x00010006e7f4(alStack_88);
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_113091348);
      bVar4 = *(byte *)(lStack_90 + _DAT_113091348);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113091350);
      bVar6 = *(byte *)(lStack_90 + _DAT_113091350);
      iVar1 = *(int *)(unaff_x20 + _DAT_113091358);
      iVar2 = *(int *)(lStack_90 + _DAT_113091358);
      if (*(long *)(unaff_x20 + _DAT_113091360) == 0) {
        uStack_b4 = (uint)(*(long *)(lStack_90 + _DAT_113091360) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_113091360);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_10483aa90();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_b4 = 0;
        FUN_104838af4();
        func_0x00010006e7f4(alStack_88);
      }
      bVar7 = *(byte *)(unaff_x20 + _DAT_113091368);
      bVar8 = *(byte *)(lStack_90 + _DAT_113091368);
      bVar9 = *(byte *)(unaff_x20 + _DAT_113091370);
      bVar10 = *(byte *)(lStack_90 + _DAT_113091370);
      if (*(long *)(unaff_x20 + _DAT_113091378) == 0) {
        uStack_c8 = (uint)(*(long *)(lStack_90 + _DAT_113091378) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_113091378);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_1048367d4();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_c8 = 0;
        FUN_104835594();
        func_0x00010006e7f4(alStack_88);
      }
      bVar11 = *(byte *)(unaff_x20 + _DAT_113091380);
      bVar12 = *(byte *)(lStack_90 + _DAT_113091380);
      lVar31 = ((long *)(unaff_x20 + _DAT_113091388))[1];
      lVar27 = ((long *)(lStack_90 + _DAT_113091388))[1];
      uVar21 = (uint)(lVar31 == 0 && lVar27 == 0);
      if ((lVar31 != 0) && (lVar27 != 0)) {
        lVar28 = *(long *)(unaff_x20 + _DAT_113091388);
        if ((lVar28 == *(long *)(lStack_90 + _DAT_113091388)) && (lVar31 == lVar27)) {
          uVar21 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar21 = (uint)lVar28;
        }
      }
      lVar31 = ((long *)(unaff_x20 + _DAT_113091390))[1];
      lVar27 = ((long *)(lStack_90 + _DAT_113091390))[1];
      uVar22 = (uint)(lVar31 == 0 && lVar27 == 0);
      if ((lVar31 != 0) && (lVar27 != 0)) {
        lVar28 = *(long *)(unaff_x20 + _DAT_113091390);
        if ((lVar28 == *(long *)(lStack_90 + _DAT_113091390)) && (lVar31 == lVar27)) {
          uVar22 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar22 = (uint)lVar28;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_113091398) == 0) {
        uStack_dc = (uint)(*(long *)(lStack_90 + _DAT_113091398) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_113091398);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_1048387e0();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_dc = 0;
        FUN_104837f38();
        func_0x00010006e7f4(alStack_88);
      }
      if (*(long *)(unaff_x20 + _DAT_1130913a0) == 0) {
        uStack_e0 = (uint)(*(long *)(lStack_90 + _DAT_1130913a0) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_1130913a0);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_104836f30();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_e0 = 0;
        func_0x00010483697c();
        func_0x00010006e7f4(alStack_88);
      }
      lVar31 = ((long *)(unaff_x20 + _DAT_1130913a8))[1];
      lVar27 = ((long *)(lStack_90 + _DAT_1130913a8))[1];
      uVar23 = (uint)(lVar31 == 0 && lVar27 == 0);
      if ((lVar31 != 0) && (lVar27 != 0)) {
        lVar28 = *(long *)(unaff_x20 + _DAT_1130913a8);
        if ((lVar28 == *(long *)(lStack_90 + _DAT_1130913a8)) && (lVar31 == lVar27)) {
          uVar23 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar23 = (uint)lVar28;
        }
      }
      lVar31 = ((long *)(unaff_x20 + _DAT_1130913b0))[1];
      lVar27 = ((long *)(lStack_90 + _DAT_1130913b0))[1];
      uVar24 = (uint)(lVar31 == 0 && lVar27 == 0);
      if ((lVar31 != 0) && (lVar27 != 0)) {
        lVar28 = *(long *)(unaff_x20 + _DAT_1130913b0);
        if ((lVar28 == *(long *)(lStack_90 + _DAT_1130913b0)) && (lVar31 == lVar27)) {
          uVar24 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar24 = (uint)lVar28;
        }
      }
      bVar13 = *(byte *)(unaff_x20 + _DAT_1130913b8);
      bVar14 = *(byte *)(lStack_90 + _DAT_1130913b8);
      if (*(long *)(unaff_x20 + _DAT_1130913c0) == 0) {
        uStack_f4 = (uint)(*(long *)(lStack_90 + _DAT_1130913c0) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_1130913c0);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_1047ee048();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uStack_f4 = 0;
        FUN_1047eacc4();
        func_0x00010006e7f4(alStack_88);
      }
      bVar15 = *(byte *)(unaff_x20 + _DAT_1130913c8);
      bVar16 = *(byte *)(lStack_90 + _DAT_1130913c8);
      lVar31 = ((long *)(unaff_x20 + _DAT_1130913d0))[1];
      lVar27 = ((long *)(lStack_90 + _DAT_1130913d0))[1];
      uVar33 = (uint)(lVar31 == 0 && lVar27 == 0);
      if ((lVar31 != 0) && (lVar27 != 0)) {
        lVar28 = *(long *)(unaff_x20 + _DAT_1130913d0);
        if ((lVar28 == *(long *)(lStack_90 + _DAT_1130913d0)) && (lVar31 == lVar27)) {
          uVar33 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar33 = (uint)lVar28;
        }
      }
      bVar17 = *(byte *)(unaff_x20 + _DAT_1130913d8);
      bVar18 = *(byte *)(lStack_90 + _DAT_1130913d8);
      if (*(long *)(unaff_x20 + _DAT_1130913e0) == 0) {
        uVar32 = (uint)(*(long *)(lStack_90 + _DAT_1130913e0) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_1130913e0);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_10483b60c();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        uVar32 = 0;
        func_0x00010483abf4();
        func_0x00010006e7f4(alStack_88);
      }
      bVar19 = *(byte *)(unaff_x20 + _DAT_1130913e8);
      bVar20 = *(byte *)(lStack_90 + _DAT_1130913e8);
      if (*(long *)(unaff_x20 + _DAT_1130913f0) == 0) {
        uVar25 = (uint)(*(long *)(lStack_90 + _DAT_1130913f0) == 0);
      }
      else {
        lVar31 = *(long *)(lStack_90 + _DAT_1130913f0);
        if (lVar31 == 0) {
          lVar27 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar27 = 0;
          FUN_10483cd2c();
        }
        alStack_88[0] = lVar31;
        alStack_88[3] = lVar27;
        _objc_retain(lVar31);
        plVar26 = alStack_88;
        FUN_10483c130(plVar26);
        uVar25 = (uint)plVar26;
        func_0x00010006e7f4(alStack_88);
      }
      lVar31 = *(long *)(unaff_x20 + _DAT_1130913f8);
      lVar27 = *(long *)(lStack_90 + _DAT_1130913f8);
      if (lVar31 == 0) {
        _swift_bridgeObjectRetain(lVar27);
        _objc_release(lStack_90);
        if (lVar27 != 0) {
          _swift_bridgeObjectRelease(lVar27);
          goto LAB_104831648;
        }
        uVar30 = 1;
      }
      else if (lVar27 == 0) {
        _objc_release(lStack_90);
LAB_104831648:
        uVar30 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar27);
        lVar28 = lVar31;
        _swift_bridgeObjectRetain(lVar31);
        uVar30 = (uint)lVar28;
        func_0x00010470d490();
        _swift_bridgeObjectRelease(lVar31);
        _swift_bridgeObjectRelease(lVar27);
        _objc_release(lStack_90);
      }
      uVar29 = 0;
      if ((((((uint)(iVar1 == iVar2) &
              (((uint)(bVar3 ^ bVar4) | uStack_94 & uStack_98 ^ 0xffffffff | (uint)(bVar5 ^ bVar6))
              ^ 0xffffffff) & uStack_b4 ^ 1 |
             (uint)(byte)(bVar7 ^ bVar8 | bVar9 ^ bVar10) | uStack_c8 ^ 1 | (uint)(bVar11 ^ bVar12))
            ^ 1) & uVar21 & uVar22 & uStack_dc & uStack_e0 & uVar23 & uVar24 &
                   ((bVar13 ^ bVar14) ^ 1) & uStack_f4 & ((bVar15 ^ bVar16) ^ 0xffffffff) & uVar33 &
            ((bVar17 ^ bVar18) ^ 0xffffffff) & uVar32 & 1) != 0) && (((bVar19 ^ bVar20) & 1) == 0))
      {
        uVar29 = uVar25 & uVar30;
      }
      goto LAB_104830fd8;
    }
  }
  uVar29 = 0;
LAB_104830fd8:
  return uVar29 & 1;
}



/* Entry: 104831740; end: 1048317eb; -[SCAdMediaWebviewAttachment isEqual:] */

uint FUN_104831740(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104830f38(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048317ec; end: 1048317ef; -[SCAdMediaWebviewAttachment copyWithZone:] */

void FUN_1048317ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048317f0; end: 104831fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048317f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = 0x57454956424557;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x57454956424557,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x544e4f435f504450;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e4f435f504450,0xeb00000000545845);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f210f40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x55415f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55415f574f4c4c41,0xef4c4c49465f4f54);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210f60);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x415441444154454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415441444154454d,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4c435f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c435f574f4c4c41,0xee0044495f4b4349);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f210f80);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4154454d5f444943;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4154454d5f444943,0xec00000041544144);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45445f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f574f4c4c41,0xee004b4e494c5045);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113091388))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091388);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4159414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4159414c50534944,0xef4c52555f454c42);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091390))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091390);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210fa0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f210fc0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f210ff0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130913a8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130913a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454741474e454552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454741474e454552,0xed00004c52555f44);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130913b0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130913b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f209ad0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209af0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f211010);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3820);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130913d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130913d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f211030);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f209b10);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f49544f4d4f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f49544f4d4f5250,0xee004f464e495f4e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209b80);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130913f8);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_10483539c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f211050);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104831fa8; end: 104831ff7; -[SCAdMediaWebviewAttachment encodeWithCoder:] */

void FUN_104831fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048317f0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104831ff8; end: 104832027;  */

void FUN_104831ff8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104832028(param_1);
  return;
}



/* Entry: 104832028; end: 104832ffb;  */

undefined8 FUN_104832028(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_148;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
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
  
  uVar2 = 0x57454956424557;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x57454956424557,0xe700000000000000);
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
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_104812fc0(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar3 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar3 = 0;
    }
  }
  uVar2 = 0x544e4f435f504450;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e4f435f504450,0xeb00000000545845);
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
    uVar2 = 0;
    FUN_104814b28(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar5 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f210f40);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x55415f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55415f574f4c4c41,0xef4c4c49465f4f54);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar10 = 0xf210f60;
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_1046b56b0();
  if ((uVar10 & 0xff) == 1) {
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar2 = 0x415441444154454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415441444154454d,0xe800000000000000);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_108 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10483aa90(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_108 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_108 = 0;
    }
  }
  uVar2 = 0x4c435f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c435f574f4c4c41,0xee0044495f4b4349);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f210f80);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x4154454d5f444943;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4154454d5f444943,0xec00000041544144);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_118 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048367d4(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_118 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_118 = 0;
    }
  }
  uVar2 = 0x45445f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f574f4c4c41,0xee004b4e494c5045);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x4159414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4159414c50534944,0xef4c52555f454c42);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_168 = 0;
    lStack_f0 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_168 = lStack_c0;
    lStack_f0 = lStack_b8;
    if ((int)plVar4 == 0) {
      lStack_168 = 0;
      lStack_f0 = 0;
    }
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210fa0);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_170 = 0;
    lStack_f8 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_170 = lStack_c0;
    lStack_f8 = lStack_b8;
    if ((int)plVar4 == 0) {
      lStack_170 = 0;
      lStack_f8 = 0;
    }
  }
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f210fc0);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_128 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048387e0(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_128 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_128 = 0;
    }
  }
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f210ff0);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_130 = 0;
  }
  else {
    uVar2 = 0;
    FUN_104836f30(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_130 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_130 = 0;
    }
  }
  uVar2 = 0x454741474e454552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454741474e454552,0xed00004c52555f44);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lStack_178 = 0;
    lVar11 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_b8;
    lStack_178 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_178 = 0;
      lVar11 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f209ad0);
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
    lStack_180 = 0;
    lStack_148 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_180 = lStack_c0;
    lStack_148 = lStack_b8;
    if ((int)plVar4 == 0) {
      lStack_180 = 0;
      lStack_148 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209af0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f211010);
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
    lStack_e0 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047ee048(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_e0 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_e0 = 0;
    }
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3820);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f211030);
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
    lStack_188 = 0;
    lVar6 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_b8;
    lStack_188 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_188 = 0;
      lVar6 = 0;
    }
  }
  uVar2 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f209b10);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x4f49544f4d4f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f49544f4d4f5250,0xee004f464e495f4e);
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
    FUN_10483b60c(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar7 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar7 = 0;
    }
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209b80);
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
    lVar8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10483cd2c(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar8 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar8 = 0;
    }
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f211050);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    func_0x00010006e7f4(&uStack_90);
    lVar9 = 0;
  }
  else {
    uVar2 = 0x113091400;
    func_0x0001000285a8(0x113091400,&UNK_10dd368c8);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar9 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar9 = 0;
    }
  }
  if (lStack_f0 == 0) {
    lStack_168 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_168,lStack_f0);
    _swift_bridgeObjectRelease(lStack_f0);
  }
  if (lStack_f8 == 0) {
    lStack_170 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_170,lStack_f8);
    _swift_bridgeObjectRelease(lStack_f8);
  }
  if (lVar11 == 0) {
    lStack_178 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_178,lVar11);
    _swift_bridgeObjectRelease(lVar11);
  }
  if (lStack_148 == 0) {
    lStack_180 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_180,lStack_148);
    _swift_bridgeObjectRelease(lStack_148);
  }
  if (lVar6 == 0) {
    lStack_188 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_188,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10483539c(0);
    lVar11 = lVar9;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar9,uVar2);
    _swift_bridgeObjectRelease(lVar9);
  }
  func_0x00010c062fc0();
  _objc_release(lStack_168);
  _objc_release(lStack_170);
  _objc_release(lStack_178);
  _objc_release(lStack_180);
  _objc_release(lStack_188);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lStack_108);
  _objc_release(lStack_118);
  _objc_release(lStack_128);
  _objc_release(lStack_130);
  _objc_release(lStack_e0);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar5);
  return unaff_x20;
}



/* Entry: 104832ffc; end: 104833023; -[SCAdMediaWebviewAttachment initWithCoder:] */

void FUN_104832ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104832028();
  return;
}



/* Entry: 104833024; end: 104833063; -[SCAdMediaWebviewAttachment description] */

void FUN_104833024(void)

{
  undefined1 auStack_280 [608];
  
  _objc_retain();
  FUN_104833ab4(auStack_280);
  func_0x0001017b67a8(auStack_280);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104833064; end: 1048330db; -[SCAdMediaWebviewAttachment init] */

void FUN_104833064(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaWebviewAttachmentWrapper.swift",0x31,2,0x13a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048330ac);
  (*pcVar1)();
}



/* Entry: 1048330dc; end: 1048331f7; -[SCAdMediaWebviewAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048330dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091338));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091340));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091360));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091378));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091388 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091390 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091398));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130913a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130913a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130913b0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130913c0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130913d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130913e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130913f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130913f8));
  return;
}



/* Entry: 1048331f8; end: 104833ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048331f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined5 uStack_388;
  undefined3 uStack_383;
  undefined5 uStack_380;
  undefined3 uStack_37b;
  undefined5 uStack_378;
  undefined3 uStack_373;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined2 uStack_2c8;
  undefined6 uStack_2c6;
  undefined2 uStack_2c0;
  undefined8 uStack_2be;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined5 uStack_288;
  undefined3 uStack_283;
  undefined5 uStack_280;
  ulong uStack_27b;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [8];
  long *plStack_1d8;
  undefined *apuStack_1d0 [2];
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined8 uStack_14e;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined8 uStack_8e;
  
  lVar11 = param_1[1];
  if (lVar11 == 1) {
    uVar6 = 0;
  }
  else {
    uVar14 = param_1[2];
    uVar6 = *param_1;
    FUN_104812fc0(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(lVar11);
    FUN_1048125bc(uVar6,lVar11,uVar14);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113091338) = uVar6;
  uVar12 = param_1[5];
  if (uVar12 >> 0x3c == 0xb) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar6 = param_1[3];
    uVar14 = param_1[4];
    lVar13 = 0;
    FUN_104814b28();
    lVar11 = lVar13;
    _objc_allocWithZone();
    *(undefined8 *)(lVar11 + _DAT_113090b28) = uVar6;
    puVar16 = (undefined8 *)(lVar11 + _DAT_113090b30);
    *puVar16 = uVar14;
    puVar16[1] = uVar12;
    func_0x000100de78a0(uVar14,uVar12);
    plVar7 = &lStack_3c0;
    lStack_3c0 = lVar11;
    lStack_3b8 = lVar13;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113091340) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_113091348) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(unaff_x20 + _DAT_113091350) = *(undefined1 *)((long)param_1 + 0x31);
  *(undefined8 *)(unaff_x20 + _DAT_113091358) = param_1[7];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_160 = param_1[0x14];
  uStack_158 = (undefined2)param_1[0x15];
  uStack_14e = *(undefined8 *)((long)param_1 + 0xb2);
  uStack_156 = (undefined6)*(undefined8 *)((long)param_1 + 0xaa);
  uStack_150 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0xaa) >> 0x30);
  uStack_1b8 = param_1[9];
  lStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  iVar5 = (int)&lStack_1c0;
  FUN_1047a8760();
  if (iVar5 == 1) {
    plVar7 = (long *)0x0;
  }
  else {
    uStack_2e8 = uStack_178;
    uStack_2f0 = uStack_180;
    uStack_2d8 = uStack_168;
    uStack_2e0 = uStack_170;
    uStack_2c8 = uStack_158;
    uStack_2d0 = uStack_160;
    uStack_2be = uStack_14e;
    uStack_2c6 = uStack_156;
    uStack_2c0 = uStack_150;
    uStack_328 = uStack_1b8;
    lStack_330 = lStack_1c0;
    uStack_318 = uStack_1a8;
    uStack_320 = uStack_1b0;
    uStack_308 = uStack_198;
    uStack_310 = uStack_1a0;
    uStack_2f8 = uStack_188;
    uStack_300 = uStack_190;
    uStack_f8 = uStack_1b8;
    lStack_100 = lStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uStack_8e = uStack_14e;
    uStack_90 = uStack_150;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_96 = uStack_156;
    uStack_a0 = uStack_160;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    FUN_10483aa90(0);
    _objc_allocWithZone();
    func_0x000104834cbc(&lStack_330,&lStack_3b0);
    plVar7 = &lStack_100;
    func_0x0001048393d0();
  }
  *(long **)(unaff_x20 + _DAT_113091360) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_113091368) = *(undefined1 *)((long)param_1 + 0xba);
  *(undefined1 *)(unaff_x20 + _DAT_113091370) = *(undefined1 *)((long)param_1 + 0xbb);
  lVar11 = param_1[0x18];
  if (lVar11 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uStack_3a0 = param_1[0x1a];
    uStack_3a8 = param_1[0x19];
    uStack_390 = param_1[0x1c];
    uStack_398 = param_1[0x1b];
    uStack_300 = param_1[0x1e];
    uStack_308 = param_1[0x1d];
    uStack_380 = (undefined5)uStack_300;
    uStack_37b = (undefined3)((ulong)uStack_300 >> 0x28);
    uStack_388 = (undefined5)uStack_308;
    uStack_383 = (undefined3)((ulong)uStack_308 >> 0x28);
    uStack_2f8 = param_1[0x1f];
    uStack_378 = (undefined5)uStack_2f8;
    uStack_373 = (undefined3)((ulong)uStack_2f8 >> 0x28);
    lStack_3b0 = lVar11;
    lStack_330 = lVar11;
    uStack_328 = uStack_3a8;
    uStack_320 = uStack_3a0;
    uStack_318 = uStack_398;
    uStack_310 = uStack_390;
    FUN_1048367d4(0);
    _objc_allocWithZone();
    func_0x000104834c80(&lStack_3b0,&uStack_2b0);
    plVar7 = &lStack_330;
    func_0x0001048359d4();
  }
  *(long **)(unaff_x20 + _DAT_113091378) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_113091380) = *(undefined1 *)(param_1 + 0x20);
  uStack_108 = param_1[0x22];
  uStack_110 = param_1[0x21];
  puVar16 = (undefined8 *)(unaff_x20 + _DAT_113091388);
  puVar16[1] = uStack_108;
  *puVar16 = uStack_110;
  uStack_118 = param_1[0x24];
  uStack_120 = param_1[0x23];
  puVar16 = (undefined8 *)(unaff_x20 + _DAT_113091390);
  puVar16[1] = uStack_118;
  *puVar16 = uStack_120;
  if (*(char *)((long)param_1 + 0x141) == '\x01') {
    func_0x000104834c38(&uStack_110,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104834c38(&uStack_120,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    uVar6 = 0;
  }
  else {
    uVar14 = param_1[0x27];
    uVar6 = param_1[0x25];
    uVar2 = *(undefined1 *)(param_1 + 0x26);
    uVar3 = *(undefined1 *)(param_1 + 0x28);
    FUN_1048387e0(0);
    _objc_allocWithZone();
    func_0x000104834c38(&uStack_110,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104834c38(&uStack_120,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1048381c8(uVar6,uVar2,uVar14,uVar3);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113091398) = uVar6;
  lVar11 = param_1[0x2a];
  if (lVar11 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar6 = param_1[0x2b];
    uVar14 = param_1[0x2c];
    uVar18 = param_1[0x29];
    lVar8 = 0;
    FUN_104836f30();
    lVar13 = lVar8;
    _objc_allocWithZone();
    lVar9 = 0;
    FUN_10483779c();
    lVar10 = lVar9;
    _objc_allocWithZone();
    puVar16 = (undefined8 *)(lVar10 + _DAT_1130914e8);
    *puVar16 = uVar18;
    puVar16[1] = lVar11;
    puVar16 = (undefined8 *)(lVar10 + _DAT_1130914f0);
    *puVar16 = uVar6;
    puVar16[1] = uVar14;
    puVar15 = PTR_s_init_1125d9248;
    lStack_260 = lVar10;
    lStack_258 = lVar9;
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(uVar14);
    plVar7 = &lStack_260;
    _objc_msgSendSuper2(plVar7,puVar15);
    *(long **)(lVar13 + _DAT_1130914b8) = plVar7;
    plVar7 = &lStack_270;
    lStack_270 = lVar13;
    lStack_268 = lVar8;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_1130913a0) = plVar7;
  uStack_128 = param_1[0x2e];
  uStack_130 = param_1[0x2d];
  puVar16 = (undefined8 *)(unaff_x20 + _DAT_1130913a8);
  puVar16[1] = uStack_128;
  *puVar16 = uStack_130;
  uStack_138 = param_1[0x30];
  uStack_140 = param_1[0x2f];
  puVar16 = (undefined8 *)(unaff_x20 + _DAT_1130913b0);
  puVar16[1] = uStack_138;
  *puVar16 = uStack_140;
  *(undefined1 *)(unaff_x20 + _DAT_1130913b8) = *(undefined1 *)(param_1 + 0x31);
  uStack_2a8 = param_1[0x33];
  uStack_2b0 = param_1[0x32];
  uStack_298 = param_1[0x35];
  uStack_2a0 = param_1[0x34];
  uStack_290 = param_1[0x36];
  uStack_27b = *(ulong *)((long)param_1 + 0x1c5);
  uStack_280 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
  uStack_288 = (undefined5)param_1[0x37];
  uStack_283 = (undefined3)((ulong)param_1[0x37] >> 0x28);
  if ((((uStack_290 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((uStack_27b >> 0x18 & 0xfefefefefe) == 0x6fefefefe)) {
    func_0x000104834c38(&uStack_130,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104834c38(&uStack_140,&lStack_3b0,0x112d35ff8,&UNK_10d900cd0);
    plVar7 = (long *)0x0;
  }
  else {
    uStack_3a8 = param_1[0x33];
    lStack_3b0 = param_1[0x32];
    uStack_398 = param_1[0x35];
    uStack_3a0 = param_1[0x34];
    uStack_390 = param_1[0x36];
    uStack_388 = (undefined5)param_1[0x37];
    uStack_37b = (undefined3)*(undefined8 *)((long)param_1 + 0x1c5);
    uStack_378 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1c5) >> 0x18);
    uStack_383 = (undefined3)*(undefined8 *)((long)param_1 + 0x1bd);
    uStack_380 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1bd) >> 0x18);
    func_0x000104834c38(&uStack_130,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104834c38(&uStack_140,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104834c38(&uStack_2b0,&uStack_250,0x112db3e10,&UNK_10dbce5f0);
    plVar7 = &lStack_3b0;
    FUN_1047eca48();
  }
  *(long **)(unaff_x20 + _DAT_1130913c0) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_1130913c8) = *(undefined1 *)((long)param_1 + 0x1cd);
  uStack_248 = param_1[0x3b];
  uStack_250 = param_1[0x3a];
  puVar16 = (undefined8 *)(unaff_x20 + _DAT_1130913d0);
  puVar16[1] = uStack_248;
  *puVar16 = uStack_250;
  *(undefined1 *)(unaff_x20 + _DAT_1130913d8) = *(undefined1 *)(param_1 + 0x3c);
  lVar11 = param_1[0x3e];
  if (lVar11 == 0) {
    func_0x000104834c38(&uStack_250,apuStack_1d0,0x112d35ff8,&UNK_10d900cd0);
    plVar7 = (long *)0x0;
  }
  else {
    uVar18 = param_1[0x42];
    uVar17 = param_1[0x41];
    uVar6 = param_1[0x3f];
    uVar14 = param_1[0x40];
    uVar19 = param_1[0x3d];
    lVar10 = 0;
    FUN_10483b60c();
    lVar13 = lVar10;
    _objc_allocWithZone();
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091600);
    *puVar16 = uVar19;
    puVar16[1] = lVar11;
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091608);
    *puVar16 = uVar6;
    puVar16[1] = uVar14;
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091610);
    *puVar16 = uVar17;
    puVar16[1] = uVar18;
    func_0x000104834c38(&uStack_250,apuStack_1d0,0x112d35ff8,&UNK_10d900cd0);
    puVar15 = PTR_s_init_1125d9248;
    lStack_210 = lVar13;
    lStack_208 = lVar10;
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar18);
    plVar7 = &lStack_210;
    _objc_msgSendSuper2(plVar7,puVar15);
  }
  *(long **)(unaff_x20 + _DAT_1130913e0) = plVar7;
  *(undefined1 *)(unaff_x20 + _DAT_1130913e8) = *(undefined1 *)(param_1 + 0x43);
  lVar11 = param_1[0x45];
  if (lVar11 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar20 = param_1[0x4a];
    uVar6 = param_1[0x49];
    uVar18 = param_1[0x48];
    uVar14 = param_1[0x47];
    uVar17 = param_1[0x46];
    uVar19 = param_1[0x44];
    lVar10 = 0;
    FUN_10483cd2c();
    lVar13 = lVar10;
    _objc_allocWithZone();
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091678);
    *puVar16 = uVar19;
    puVar16[1] = lVar11;
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091680);
    *puVar16 = uVar17;
    puVar16[1] = uVar14;
    puVar16 = (undefined8 *)(lVar13 + _DAT_113091688);
    *puVar16 = uVar18;
    puVar16[1] = uVar6;
    *(undefined8 *)(lVar13 + _DAT_113091690) = uVar20;
    puVar15 = PTR_s_init_1125d9248;
    lStack_200 = lVar13;
    lStack_1f8 = lVar10;
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar6);
    plVar7 = &lStack_200;
    _objc_msgSendSuper2(plVar7,puVar15);
  }
  *(long **)(unaff_x20 + _DAT_1130913f0) = plVar7;
  lVar11 = param_1[0x4b];
  if (lVar11 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar11 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar13 != 0) {
      apuStack_1d0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c73c4(0,lVar13,0);
      puVar15 = apuStack_1d0[0];
      lVar10 = 0;
      FUN_10483539c();
      puVar16 = (undefined8 *)(lVar11 + 0x30);
      do {
        uVar6 = puVar16[-2];
        uVar14 = puVar16[-1];
        uVar18 = *puVar16;
        lVar11 = lVar10;
        _objc_allocWithZone();
        *(undefined8 *)(lVar11 + _DAT_113091430) = uVar6;
        puVar1 = (undefined8 *)(lVar11 + _DAT_113091438);
        *puVar1 = uVar14;
        puVar1[1] = uVar18;
        puVar4 = PTR_s_init_1125d9248;
        lStack_1f0 = lVar11;
        lStack_1e8 = lVar10;
        _swift_bridgeObjectRetain(uVar18);
        plVar7 = &lStack_1f0;
        _objc_msgSendSuper2(plVar7,puVar4);
        uVar12 = *(ulong *)(puVar15 + 0x10);
        apuStack_1d0[0] = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar12) {
          func_0x0001046c73c4(1 < *(ulong *)(puVar15 + 0x18),uVar12 + 1,1);
        }
        puVar16 = puVar16 + 3;
        *(ulong *)(apuStack_1d0[0] + 0x10) = uVar12 + 1;
        *(long **)(apuStack_1d0[0] + uVar12 * 8 + 0x20) = plVar7;
        lVar13 = lVar13 + -1;
        puVar15 = apuStack_1d0[0];
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_1130913f8) = puVar15;
  FUN_104834c18();
  plStack_1d8 = plVar7;
  _objc_msgSendSuper2(auStack_1e0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104833ab4; end: 104834c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104833ab4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong extraout_x10;
  ulong uVar19;
  ulong extraout_x11;
  undefined *puVar20;
  ulong extraout_x12;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puStack_4c8;
  undefined *puStack_478;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined1 uStack_437;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b6;
  undefined1 uStack_3ae;
  undefined1 uStack_3ad;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined2 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  undefined1 uStack_29c;
  undefined1 uStack_29b;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_196;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar12 = *(long *)(param_2 + _DAT_113091338);
  if (lVar12 == 0) {
    param_4 = 0;
    param_3 = 1;
  }
  else {
    _objc_retain();
    FUN_104812d0c();
  }
  lVar13 = *(long *)(param_2 + _DAT_113091340);
  lStack_468 = lVar12;
  uStack_460 = param_3;
  uStack_458 = param_4;
  if (lVar13 == 0) {
    uVar26 = 0;
    uStack_450 = 0;
    uVar35 = 0xb000000000000000;
  }
  else {
    uStack_450 = *(undefined8 *)(lVar13 + _DAT_113090b28);
    uVar26 = *(undefined8 *)(lVar13 + _DAT_113090b30);
    uVar35 = ((undefined8 *)(lVar13 + _DAT_113090b30))[1];
    func_0x000100de78a0(uVar26,uVar35);
  }
  uStack_438 = *(undefined1 *)(param_2 + _DAT_113091348);
  uStack_437 = *(undefined1 *)(param_2 + _DAT_113091350);
  uStack_430 = *(undefined8 *)(param_2 + _DAT_113091358);
  lVar12 = *(long *)(param_2 + _DAT_113091360);
  uStack_448 = uVar26;
  uStack_440 = uVar35;
  if (lVar12 == 0) {
    func_0x000101553d74(&puStack_148);
    uStack_3e0 = uStack_100;
    uStack_3e8 = uStack_108;
    uStack_3d0 = uStack_f0;
    uStack_3d8 = uStack_f8;
    uStack_3c8 = uStack_e8;
    uStack_3b6 = CONCAT26(uStack_d0,uStack_d6);
    uStack_420 = uStack_140;
    puStack_428 = puStack_148;
    uStack_410 = uStack_130;
    uStack_418 = uStack_138;
    uStack_400 = uStack_120;
    uStack_408 = uStack_128;
    uStack_3f0 = uStack_110;
    uStack_3f8 = uStack_118;
  }
  else {
    _objc_retain();
    FUN_10483a664(&puStack_208);
    _objc_release(lVar12);
    uStack_3e0 = uStack_1c0;
    uStack_3e8 = uStack_1c8;
    uStack_3d0 = uStack_1b0;
    uStack_3d8 = uStack_1b8;
    uStack_3c8 = uStack_1a8;
    uStack_3b6 = uStack_196;
    uStack_420 = uStack_200;
    puStack_428 = puStack_208;
    uStack_410 = uStack_1f0;
    uStack_418 = uStack_1f8;
    uStack_400 = uStack_1e0;
    uStack_408 = uStack_1e8;
    uStack_3f0 = uStack_1d0;
    uStack_3f8 = uStack_1d8;
    func_0x000101553ec4(&puStack_428);
  }
  uStack_3ae = *(undefined1 *)(param_2 + _DAT_113091368);
  uStack_3ad = *(undefined1 *)(param_2 + _DAT_113091370);
  lVar12 = *(long *)(param_2 + _DAT_113091378);
  if (lVar12 == 0) {
    uStack_380 = 0;
    uStack_388 = 0;
    uStack_370 = 0;
    uStack_378 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    uStack_390 = 0;
    uStack_398 = 0;
  }
  else {
    _objc_retain();
    FUN_104836318(&uStack_188);
    _objc_release(lVar12);
    uStack_3a0 = uStack_180;
    uStack_3a8 = uStack_188;
    uStack_390 = uStack_170;
    uStack_398 = uStack_178;
    uStack_380 = uStack_160;
    uStack_388 = uStack_168;
    uStack_370 = uStack_150;
    uStack_378 = uStack_158;
  }
  uStack_368 = *(undefined1 *)(param_2 + _DAT_113091380);
  uStack_360 = *(undefined8 *)(param_2 + _DAT_113091388);
  uVar26 = ((undefined8 *)(param_2 + _DAT_113091388))[1];
  uStack_350 = *(undefined8 *)(param_2 + _DAT_113091390);
  uStack_348 = ((undefined8 *)(param_2 + _DAT_113091390))[1];
  lVar12 = *(long *)(param_2 + _DAT_113091398);
  uStack_358 = uVar26;
  if (lVar12 == 0) {
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0x100;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar26);
  }
  else {
    lVar13 = *(long *)(lVar12 + _DAT_113091550);
    bVar1 = lVar13 == 0;
    uVar35 = uStack_388;
    if (bVar1) {
      _swift_bridgeObjectRetain();
      _objc_retain(lVar12);
      _swift_bridgeObjectRetain(uVar26);
      uStack_340 = 0;
    }
    else {
      _swift_bridgeObjectRetain();
      _objc_retain(lVar12);
      _swift_bridgeObjectRetain(uVar26);
      func_0x00010bf885a0(lVar13);
      uStack_340 = uVar35;
    }
    if (*(long *)(lVar12 + _DAT_113091558) == 0) {
      _objc_release(lVar12);
      uStack_338 = CONCAT71(uStack_338._1_7_,bVar1);
      uStack_330 = 0;
      uStack_328 = 1;
    }
    else {
      func_0x00010bf885a0();
      _objc_release(lVar12);
      uStack_338 = CONCAT71(uStack_338._1_7_,bVar1);
      uStack_328 = 0;
      uStack_330 = uVar35;
    }
  }
  if (*(long *)(param_2 + _DAT_1130913a0) == 0) {
    uVar26 = 0;
    uVar32 = 0;
    uVar35 = 0;
    uVar24 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(param_2 + _DAT_1130913a0) + _DAT_1130914b8);
    puVar28 = (undefined8 *)(lVar12 + _DAT_1130914e8);
    uVar26 = *puVar28;
    uVar32 = puVar28[1];
    puVar28 = (undefined8 *)(lVar12 + _DAT_1130914f0);
    uVar35 = *puVar28;
    uVar24 = puVar28[1];
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar24);
  }
  uStack_300 = *(undefined8 *)(param_2 + _DAT_1130913a8);
  uVar2 = ((undefined8 *)(param_2 + _DAT_1130913a8))[1];
  uStack_2f0 = *(undefined8 *)(param_2 + _DAT_1130913b0);
  uVar3 = ((undefined8 *)(param_2 + _DAT_1130913b0))[1];
  uStack_2e0 = *(undefined1 *)(param_2 + _DAT_1130913b8);
  lVar12 = *(long *)(param_2 + _DAT_1130913c0);
  uStack_320 = uVar26;
  uStack_318 = uVar32;
  uStack_310 = uVar35;
  uStack_308 = uVar24;
  uStack_2f8 = uVar2;
  uStack_2e8 = uVar3;
  if (lVar12 == 0) {
    lStack_2d0 = 0;
    puStack_2d8 = (undefined *)0x0;
    uStack_2c0 = 0;
    puStack_2c8 = (undefined *)0x0;
    uStack_2a8 = 0;
    uStack_2b8 = 0x3000000000000000;
    uStack_2b0 = 0;
    uStack_29c = 6;
    uStack_2a0 = 0xfefefefe;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    goto LAB_104834848;
  }
  if (*(char *)(lVar12 + _DAT_11308fee0) == '\0') {
    lVar13 = ((undefined8 *)(lVar12 + _DAT_11308fee8))[1];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834bf8);
      (*pcVar11)();
    }
    uVar22 = *(ulong *)(lVar12 + _DAT_11308fef0);
    if (uVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c04);
      (*pcVar11)();
    }
    uVar31 = ((ulong *)(lVar12 + _DAT_11308fef8))[1];
    if (0xe < uVar31 >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c10);
      (*pcVar11)();
    }
    uVar30 = ((ulong *)(lVar12 + _DAT_11308ff00))[1];
    if (uVar30 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c14);
      (*pcVar11)();
    }
    lVar29 = *(long *)(lVar12 + _DAT_11308ff08);
    if (lVar29 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c18);
      (*pcVar11)();
    }
    puStack_478 = *(undefined **)(lVar12 + _DAT_11308fee8);
    uVar19 = *(ulong *)(lVar12 + _DAT_11308fef8);
    uVar21 = *(ulong *)(lVar12 + _DAT_11308ff00);
    if (uVar22 >> 0x3e == 0) {
      uVar23 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
      if (uVar23 != 0) goto LAB_1048341d8;
LAB_104834710:
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(lVar12);
      _swift_bridgeObjectRetain(uVar2);
      puStack_4c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar23 = uVar22;
      if (-1 < (long)uVar22) {
        uVar23 = uVar22 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (uVar23 == 0) goto LAB_104834710;
LAB_1048341d8:
      puStack_4c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(lVar12);
      func_0x000101552930(0,uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x104834bf0);
        (*pcVar11)();
      }
      if ((uVar22 & 0xc000000000000001) == 0) {
        puVar28 = (undefined8 *)(uVar22 + 0x20);
        do {
          uVar26 = *puVar28;
          _objc_retain(uVar26);
          FUN_1047f3cc8(&puStack_148);
          _objc_release(uVar26);
          uVar22 = *(ulong *)(puStack_4c8 + 0x10);
          if (*(ulong *)(puStack_4c8 + 0x18) >> 1 <= uVar22) {
            func_0x000101552930(1 < *(ulong *)(puStack_4c8 + 0x18),uVar22 + 1,1);
          }
          *(ulong *)(puStack_4c8 + 0x10) = uVar22 + 1;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x48) = uStack_120;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x40) = uStack_128;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x58) = uStack_110;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x50) = uStack_118;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x28) = uStack_140;
          *(undefined **)(puStack_4c8 + uVar22 * 0xc0 + 0x20) = puStack_148;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x38) = uStack_130;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x30) = uStack_138;
          *(ulong *)(puStack_4c8 + uVar22 * 0xc0 + 0x88) = CONCAT62(uStack_de,uStack_e0);
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x80) = uStack_e8;
          *(ulong *)(puStack_4c8 + uVar22 * 0xc0 + 0x98) = CONCAT62(uStack_ce,uStack_d0);
          *(ulong *)(puStack_4c8 + uVar22 * 0xc0 + 0x90) = CONCAT62(uStack_d6,uStack_d8);
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x68) = uStack_100;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x60) = uStack_108;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x78) = uStack_f0;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0x70) = uStack_f8;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 200) = uStack_a0;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xc0) = uStack_a8;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xd8) = uStack_90;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xd0) = uStack_98;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xa8) = uStack_c0;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xa0) = uStack_c8;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xb8) = uStack_b0;
          *(undefined8 *)(puStack_4c8 + uVar22 * 0xc0 + 0xb0) = uStack_b8;
          uVar23 = uVar23 - 1;
          puVar28 = puVar28 + 1;
        } while (uVar23 != 0);
      }
      else {
        uVar33 = 0;
        do {
          uVar18 = uVar33;
          func_0x0001030b5f18(uVar33,uVar22);
          FUN_1047f3cc8(&puStack_148);
          _swift_unknownObjectRelease(uVar18);
          uVar18 = *(ulong *)(puStack_4c8 + 0x10);
          if (*(ulong *)(puStack_4c8 + 0x18) >> 1 <= uVar18) {
            func_0x000101552930(1 < *(ulong *)(puStack_4c8 + 0x18),uVar18 + 1,1);
          }
          uVar33 = uVar33 + 1;
          *(ulong *)(puStack_4c8 + 0x10) = uVar18 + 1;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x48) = uStack_120;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x40) = uStack_128;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x58) = uStack_110;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x50) = uStack_118;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x28) = uStack_140;
          *(undefined **)(puStack_4c8 + uVar18 * 0xc0 + 0x20) = puStack_148;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x38) = uStack_130;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x30) = uStack_138;
          *(ulong *)(puStack_4c8 + uVar18 * 0xc0 + 0x88) = CONCAT62(uStack_de,uStack_e0);
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x80) = uStack_e8;
          *(ulong *)(puStack_4c8 + uVar18 * 0xc0 + 0x98) = CONCAT62(uStack_ce,uStack_d0);
          *(ulong *)(puStack_4c8 + uVar18 * 0xc0 + 0x90) = CONCAT62(uStack_d6,uStack_d8);
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x68) = uStack_100;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x60) = uStack_108;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x78) = uStack_f0;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0x70) = uStack_f8;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 200) = uStack_a0;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xc0) = uStack_a8;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xd8) = uStack_90;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xd0) = uStack_98;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xa8) = uStack_c0;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xa0) = uStack_c8;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xb8) = uStack_b0;
          *(undefined8 *)(puStack_4c8 + uVar18 * 0xc0 + 0xb0) = uStack_b8;
        } while (uVar23 != uVar33);
      }
    }
    bVar6 = *(byte *)(lVar29 + _DAT_11308ff78);
    cVar7 = *(char *)(lVar29 + _DAT_11308ff80);
    cVar8 = *(char *)(lVar29 + _DAT_11308ff88);
    cVar9 = *(char *)(lVar29 + _DAT_11308ff90);
    cVar10 = *(char *)(lVar29 + _DAT_11308ff98);
    func_0x000100de78a0(uVar19,uVar31);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(lVar13);
    _objc_release(lVar12);
    uVar22 = 0x100;
    if (cVar7 == '\0') {
      uVar22 = 0;
    }
    uVar23 = 0x10000;
    if (cVar8 == '\0') {
      uVar23 = 0;
    }
    uVar33 = 0x1000000;
    if (cVar9 == '\0') {
      uVar33 = 0;
    }
    uVar18 = 0x100000000;
    if (cVar10 == '\0') {
      uVar18 = 0;
    }
    uVar18 = uVar22 | bVar6 | uVar23 | uVar33 | uVar18;
    uStack_2b8 = uVar31 & 0xcfffffffffffffff;
  }
  else if (*(char *)(lVar12 + _DAT_11308fee0) == '\x01') {
    uVar22 = *(ulong *)(lVar12 + _DAT_11308ff10);
    if (uVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834bf4);
      (*pcVar11)();
    }
    puStack_4c8 = (undefined *)((long *)(lVar12 + _DAT_11308ff18))[1];
    if (0xe < (ulong)puStack_4c8 >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c00);
      (*pcVar11)();
    }
    lVar29 = *(long *)(lVar12 + _DAT_11308ff20);
    if (lVar29 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c0c);
      (*pcVar11)();
    }
    lVar13 = *(long *)(lVar12 + _DAT_11308ff18);
    if (uVar22 >> 0x3e == 0) {
      puStack_478 = *(undefined **)((uVar22 & 0xffffffffffffff8) + 0x10);
      if (puStack_478 != (undefined *)0x0) goto LAB_104833ef0;
LAB_104834614:
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(lVar12);
      _swift_bridgeObjectRetain(uVar2);
      puStack_478 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar20 = puStack_478;
    }
    else {
      puStack_478 = (undefined *)uVar22;
      if (-1 < (long)uVar22) {
        puStack_478 = (undefined *)(uVar22 & 0xffffffffffffff8);
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (puStack_478 == (undefined *)0x0) goto LAB_104834614;
LAB_104833ef0:
      puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(lVar12);
      func_0x000101552914(0,(ulong)puStack_478 & ((long)puStack_478 >> 0x3f ^ 0xffffffffffffffffU),0
                         );
      if ((long)puStack_478 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x104834bec);
        (*pcVar11)();
      }
      if ((uVar22 & 0xc000000000000001) == 0) {
        plVar16 = (long *)(uVar22 + 0x20);
        puVar20 = puStack_148;
        do {
          lVar25 = *plVar16;
          uVar14 = *(undefined8 *)(lVar25 + _DAT_11308fe90);
          uVar26 = *(undefined8 *)(lVar25 + _DAT_11308fe98);
          uVar2 = ((undefined8 *)(lVar25 + _DAT_11308fe98))[1];
          uVar35 = *(undefined8 *)(lVar25 + _DAT_11308fea0);
          uVar3 = ((undefined8 *)(lVar25 + _DAT_11308fea0))[1];
          lVar17 = *(long *)(lVar25 + _DAT_11308feb0);
          uVar32 = *(undefined8 *)(lVar25 + _DAT_11308fea8);
          uVar4 = ((undefined8 *)(lVar25 + _DAT_11308fea8))[1];
          uVar15 = *(undefined8 *)(lVar17 + _DAT_11308ffc8);
          uVar24 = *(undefined8 *)(lVar17 + _DAT_11308ffd0);
          uVar5 = ((undefined8 *)(lVar17 + _DAT_11308ffd0))[1];
          uVar27 = *(undefined8 *)(lVar17 + _DAT_11308ffd8);
          uVar34 = *(undefined8 *)(lVar17 + _DAT_11308ffe0);
          uVar36 = *(undefined8 *)(lVar17 + _DAT_11308ffe8);
          uVar37 = *(undefined8 *)(lVar17 + _DAT_11308fff0);
          uVar22 = *(ulong *)(puVar20 + 0x10);
          uVar31 = *(ulong *)(puVar20 + 0x18);
          puStack_148 = puVar20;
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          if (uVar31 >> 1 <= uVar22) {
            func_0x000101552914(1 < uVar31,uVar22 + 1,1);
            puVar20 = puStack_148;
          }
          *(ulong *)(puVar20 + 0x10) = uVar22 + 1;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x20) = uVar14;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x28) = uVar26;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x30) = uVar2;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x38) = uVar35;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x40) = uVar3;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x48) = uVar32;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x50) = uVar4;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x58) = uVar15;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x60) = uVar24;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x68) = uVar5;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x70) = uVar27;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x78) = uVar34;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x80) = uVar36;
          *(undefined8 *)(puVar20 + uVar22 * 0x70 + 0x88) = uVar37;
          puStack_478 = (undefined *)((long)puStack_478 - 1);
          plVar16 = plVar16 + 1;
        } while (puStack_478 != (undefined *)0x0);
      }
      else {
        uVar31 = 0;
        do {
          puVar20 = puStack_148;
          uVar30 = uVar31;
          func_0x0001046c4d50(uVar31,uVar22);
          uVar14 = *(undefined8 *)(uVar30 + _DAT_11308fe90);
          uVar26 = *(undefined8 *)(uVar30 + _DAT_11308fe98);
          uVar2 = ((undefined8 *)(uVar30 + _DAT_11308fe98))[1];
          uVar35 = *(undefined8 *)(uVar30 + _DAT_11308fea0);
          uVar3 = ((undefined8 *)(uVar30 + _DAT_11308fea0))[1];
          uVar32 = *(undefined8 *)(uVar30 + _DAT_11308fea8);
          uVar4 = ((undefined8 *)(uVar30 + _DAT_11308fea8))[1];
          lVar25 = *(long *)(uVar30 + _DAT_11308feb0);
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          _objc_retain();
          _swift_unknownObjectRelease(uVar30);
          uVar15 = *(undefined8 *)(lVar25 + _DAT_11308ffc8);
          uVar24 = *(undefined8 *)(lVar25 + _DAT_11308ffd0);
          uVar5 = ((undefined8 *)(lVar25 + _DAT_11308ffd0))[1];
          uVar27 = *(undefined8 *)(lVar25 + _DAT_11308ffd8);
          uVar34 = *(undefined8 *)(lVar25 + _DAT_11308ffe0);
          uVar36 = *(undefined8 *)(lVar25 + _DAT_11308ffe8);
          uVar37 = *(undefined8 *)(lVar25 + _DAT_11308fff0);
          _swift_bridgeObjectRetain(uVar5);
          _objc_release(lVar25);
          uVar30 = *(ulong *)(puVar20 + 0x10);
          puStack_148 = puVar20;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar30) {
            func_0x000101552914(1 < *(ulong *)(puVar20 + 0x18),uVar30 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puStack_148 + 0x10) = uVar30 + 1;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x20) = uVar14;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x28) = uVar26;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x30) = uVar2;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x38) = uVar35;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x40) = uVar3;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x48) = uVar32;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x50) = uVar4;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x58) = uVar15;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x60) = uVar24;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x68) = uVar5;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x70) = uVar27;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x78) = uVar34;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x80) = uVar36;
          *(undefined8 *)(puStack_148 + uVar30 * 0x70 + 0x88) = uVar37;
          puVar20 = puStack_148;
        } while (puStack_478 != (undefined *)uVar31);
      }
    }
    puStack_478 = puVar20;
    bVar6 = *(byte *)(lVar29 + _DAT_11308ff78);
    cVar7 = *(char *)(lVar29 + _DAT_11308ff80);
    cVar8 = *(char *)(lVar29 + _DAT_11308ff88);
    cVar9 = *(char *)(lVar29 + _DAT_11308ff90);
    cVar10 = *(char *)(lVar29 + _DAT_11308ff98);
    func_0x000100de78a0(lVar13,puStack_4c8);
    _objc_release(lVar12);
    uStack_2b8 = 0;
    uVar19 = 0x100000000;
    if (cVar10 == '\0') {
      uVar19 = 0;
    }
    uVar22 = 0x1000000;
    if (cVar9 == '\0') {
      uVar22 = 0;
    }
    uVar30 = 0x10000;
    if (cVar8 == '\0') {
      uVar30 = 0;
    }
    uVar21 = 0x100;
    if (cVar7 == '\0') {
      uVar21 = 0;
    }
    uVar21 = uVar21 | bVar6;
    uVar19 = uVar21 | uVar30 | uVar22 | uVar19;
    uVar18 = 0x4000000000;
  }
  else {
    lVar13 = ((undefined8 *)(lVar12 + _DAT_11308ff28))[1];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834bfc);
      (*pcVar11)();
    }
    lVar29 = *(long *)(lVar12 + _DAT_11308ff30);
    if (lVar29 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104834c08);
      (*pcVar11)();
    }
    puStack_478 = *(undefined **)(lVar12 + _DAT_11308ff28);
    uVar22 = 0x100000000;
    if (*(char *)(lVar29 + _DAT_11308ff98) == '\0') {
      uVar22 = 0;
    }
    uVar31 = 0x1000000;
    if (*(char *)(lVar29 + _DAT_11308ff90) == '\0') {
      uVar31 = 0;
    }
    uVar30 = 0x10000;
    if (*(char *)(lVar29 + _DAT_11308ff88) == '\0') {
      uVar30 = 0;
    }
    uVar19 = 0x100;
    if (*(char *)(lVar29 + _DAT_11308ff80) == '\0') {
      uVar19 = 0;
    }
    puStack_4c8 = (undefined *)
                  (uVar19 | *(byte *)(lVar29 + _DAT_11308ff78) | uVar30 | uVar31 | uVar22);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar13);
    uStack_2b8 = 0;
    uVar18 = 0x8000000000;
    uVar19 = extraout_x10;
    uVar30 = extraout_x11;
    uVar21 = extraout_x12;
  }
  uStack_2a0 = (undefined4)uVar18;
  uStack_29c = (undefined1)(uVar18 >> 0x20);
  puStack_2d8 = puStack_478;
  lStack_2d0 = lVar13;
  puStack_2c8 = puStack_4c8;
  uStack_2c0 = uVar19;
  uStack_2b0 = uVar21;
  uStack_2a8 = uVar30;
LAB_104834848:
  uStack_29b = *(undefined1 *)(param_2 + _DAT_1130913c8);
  puVar28 = (undefined8 *)(param_2 + _DAT_1130913d0);
  uVar26 = puVar28[1];
  uStack_290 = puVar28[1];
  uStack_298 = *puVar28;
  uStack_288 = *(undefined1 *)(param_2 + _DAT_1130913d8);
  lVar12 = *(long *)(param_2 + _DAT_1130913e0);
  if (lVar12 == 0) {
    uVar35 = 0;
    uVar32 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
  }
  else {
    uStack_280 = *(undefined8 *)(lVar12 + _DAT_113091600);
    uStack_278 = ((undefined8 *)(lVar12 + _DAT_113091600))[1];
    uStack_270 = *(undefined8 *)(lVar12 + _DAT_113091608);
    uVar24 = ((undefined8 *)(lVar12 + _DAT_113091608))[1];
    uVar35 = *(undefined8 *)(lVar12 + _DAT_113091610);
    uVar32 = ((undefined8 *)(lVar12 + _DAT_113091610))[1];
    uStack_268 = uVar24;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar32);
  }
  uStack_250 = *(undefined1 *)(param_2 + _DAT_1130913e8);
  lVar12 = *(long *)(param_2 + _DAT_1130913f0);
  uStack_260 = uVar35;
  uStack_258 = uVar32;
  if (lVar12 == 0) {
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uVar35 = 0;
  }
  else {
    uStack_248 = *(undefined8 *)(lVar12 + _DAT_113091678);
    uStack_240 = ((undefined8 *)(lVar12 + _DAT_113091678))[1];
    uStack_238 = *(undefined8 *)(lVar12 + _DAT_113091680);
    uVar32 = ((undefined8 *)(lVar12 + _DAT_113091680))[1];
    uStack_228 = *(undefined8 *)(lVar12 + _DAT_113091688);
    uVar24 = ((undefined8 *)(lVar12 + _DAT_113091688))[1];
    uVar35 = *(undefined8 *)(lVar12 + _DAT_113091690);
    uStack_230 = uVar32;
    uStack_220 = uVar24;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar24);
  }
  uVar22 = *(ulong *)(param_2 + _DAT_1130913f8);
  uStack_218 = uVar35;
  if (uVar22 == 0) {
    _swift_bridgeObjectRetain(uVar26);
    _objc_release(param_2);
    puStack_210 = (undefined *)0x0;
  }
  else {
    if (uVar22 >> 0x3e == 0) {
      uVar31 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar31 = uVar22;
      if (-1 < (long)uVar22) {
        uVar31 = uVar22 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
    if (uVar31 == 0) {
      _swift_bridgeObjectRetain(uVar26);
      _objc_release(param_2);
      puStack_210 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar26);
      func_0x0001046c73f8(0,uVar31 & ((long)uVar31 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar31 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x104834be8);
        (*pcVar11)();
      }
      if ((uVar22 & 0xc000000000000001) == 0) {
        plVar16 = (long *)(uVar22 + 0x20);
        do {
          uVar32 = *(undefined8 *)(*plVar16 + _DAT_113091430);
          puVar28 = (undefined8 *)(*plVar16 + _DAT_113091438);
          uVar26 = *puVar28;
          uVar35 = puVar28[1];
          uVar22 = *(ulong *)(puVar20 + 0x10);
          uVar30 = *(ulong *)(puVar20 + 0x18);
          _swift_bridgeObjectRetain(uVar35);
          if (uVar30 >> 1 <= uVar22) {
            func_0x0001046c73f8(1 < uVar30,uVar22 + 1,1);
          }
          *(ulong *)(puVar20 + 0x10) = uVar22 + 1;
          *(undefined8 *)(puVar20 + uVar22 * 0x18 + 0x20) = uVar32;
          *(undefined8 *)(puVar20 + uVar22 * 0x18 + 0x28) = uVar26;
          *(undefined8 *)(puVar20 + uVar22 * 0x18 + 0x30) = uVar35;
          uVar31 = uVar31 - 1;
          plVar16 = plVar16 + 1;
        } while (uVar31 != 0);
      }
      else {
        uVar30 = 0;
        do {
          uVar19 = uVar30;
          func_0x0001027f6ce8(uVar30,uVar22);
          uVar32 = *(undefined8 *)(uVar19 + _DAT_113091430);
          uVar26 = *(undefined8 *)(uVar19 + _DAT_113091438);
          uVar35 = ((undefined8 *)(uVar19 + _DAT_113091438))[1];
          _swift_bridgeObjectRetain(uVar35);
          _swift_unknownObjectRelease(uVar19);
          uVar19 = *(ulong *)(puVar20 + 0x10);
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar19) {
            func_0x0001046c73f8(1 < *(ulong *)(puVar20 + 0x18),uVar19 + 1,1);
          }
          uVar30 = uVar30 + 1;
          *(ulong *)(puVar20 + 0x10) = uVar19 + 1;
          *(undefined8 *)(puVar20 + uVar19 * 0x18 + 0x20) = uVar32;
          *(undefined8 *)(puVar20 + uVar19 * 0x18 + 0x28) = uVar26;
          *(undefined8 *)(puVar20 + uVar19 * 0x18 + 0x30) = uVar35;
        } while (uVar31 != uVar30);
      }
      _objc_release(param_2);
      puStack_210 = puVar20;
    }
  }
  _memcpy(param_1,&lStack_468,0x260);
  return;
}



/* Entry: 104834c18; end: 104834c37;  */

void FUN_104834c18(void)

{
  _objc_opt_self(&PTR_PTR_1129da540);
  return;
}



/* Entry: 104834c38; end: 104834cf7;  */

undefined8 FUN_104834c38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104834cf8; end: 104834d07; -[SCAdPharmaDisclaimerCta type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104834cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091430);
}



/* Entry: 104834d08; end: 104834d53; -[SCAdPharmaDisclaimerCta url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104834d08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091438);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091438))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104834d54; end: 104834d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104834d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091430) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091438);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104834d58; end: 104834dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104834d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091430) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091438);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104834dc4; end: 104834e37; -[SCAdPharmaDisclaimerCta initWithType:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104834dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_113091430) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091438);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104834e38; end: 104834fbf; -[SCAdPharmaDisclaimerCta hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104834e38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113091430));
  uVar1 = *(undefined8 *)(param_1 + _DAT_113091438);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113091438))[1];
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



/* Entry: 104834fc0; end: 10483503f; -[SCAdPharmaDisclaimerCta isEqual:] */

uint FUN_104834fc0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104834ee0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104835040; end: 104835043; -[SCAdPharmaDisclaimerCta copyWithZone:] */

void FUN_104835040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104835044; end: 10483510f; -[SCAdPharmaDisclaimerCta encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113091438);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(param_1 + _DAT_113091438))[1]);
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



/* Entry: 104835110; end: 10483513f;  */

void FUN_104835110(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104835140(param_1);
  return;
}



/* Entry: 104835140; end: 1048352c7;  */

undefined8 FUN_104835140(long param_1)

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
  uVar1 = 0x45505954;
  uVar4 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001046b3754(lVar2);
  if ((uVar4 & 0xff) != 1) {
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
      goto LAB_104835290;
    }
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c056320();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
LAB_104835290:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1048352c8; end: 1048352ef; -[SCAdPharmaDisclaimerCta initWithCoder:] */

void FUN_1048352c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104835140();
  return;
}



/* Entry: 1048352f0; end: 10483530b; -[SCAdPharmaDisclaimerCta description] */

void FUN_1048352f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483530c; end: 104835387; -[SCAdPharmaDisclaimerCta init] */

void FUN_10483530c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPharmaDisclaimerCtaWrapper.swift",0x2e,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104835354);
  (*pcVar1)();
}


