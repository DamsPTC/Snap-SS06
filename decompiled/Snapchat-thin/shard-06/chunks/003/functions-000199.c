/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104699af4; end: 104699b13;  */

void FUN_104699af4(void)

{
  _objc_opt_self(&PTR_PTR_1129d1488);
  return;
}



/* Entry: 104699b14; end: 104699c7b;  */

int FUN_104699b14(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104699b90;
        goto LAB_104699b74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104699b74:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_104699b90:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104699c7c; end: 104699cbb;  */

void FUN_104699c7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26360;
  _swift_getWitnessTable(&UNK_10dd26360,&UNK_110796728);
  puRam000000011308c890 = puVar1;
  return;
}



/* Entry: 104699cbc; end: 104699ce3;  */

void FUN_104699cbc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 104699ce4; end: 104699d4b;  */

void FUN_104699ce4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  (**(code **)(lVar1 + 0x10))(param_1,lVar1,param_2,param_3 & 1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104699d4c; end: 104699db3;  */

void FUN_104699d4c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2 & 1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104699db4; end: 104699e5b;  */

void FUN_104699db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104699e5c; end: 104699e63;  */

void FUN_104699e5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 104699e64; end: 104699e73; -[SCAdTrackLoggingEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c898));
  return;
}



/* Entry: 104699e74; end: 104699e87; -[SCAdTrackLoggingEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c8a0));
  return;
}



/* Entry: 104699e88; end: 104699f63; -[SCAdTrackLoggingEvent initWithCommon:eventType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699e88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c898) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c8a0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104699f64; end: 104699ff7; -[SCAdTrackLoggingEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104699f64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c898);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_11308c8a0) + _DAT_11308b770);
  __sSu9hashValueSivg(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104699ff8; end: 10469a0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104699ff8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c898);
      func_0x00010c071ae0(uVar3);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c8a0);
      uVar4 = 0;
      FUN_10465f484();
      auStack_50[0] = uVar6;
      lStack_38 = uVar4;
      _objc_retain(uVar6);
      puVar5 = auStack_50;
      FUN_10465f064(puVar5);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      return (uint)uVar3 & (uint)puVar5;
    }
  }
  return 0;
}



/* Entry: 10469a0dc; end: 10469a15b; -[SCAdTrackLoggingEvent isEqual:] */

uint FUN_10469a0dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104699ff8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469a15c; end: 10469a15f; -[SCAdTrackLoggingEvent copyWithZone:] */

void FUN_10469a15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469a160; end: 10469a17b; -[SCAdTrackLoggingEvent description] */

void FUN_10469a160(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469a17c; end: 10469a1f7; -[SCAdTrackLoggingEvent init] */

void FUN_10469a17c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackLoggingEventWrapper.swift",0x39,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469a1c4);
  (*pcVar1)();
}



/* Entry: 10469a1f8; end: 10469a22f; -[SCAdTrackLoggingEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a1f8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c898));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c8a0));
  return;
}



/* Entry: 10469a230; end: 10469a24f;  */

void FUN_10469a230(void)

{
  _objc_opt_self(&PTR_PTR_1129d15d0);
  return;
}



/* Entry: 10469a250; end: 10469a253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a250(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c898) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469a254; end: 10469a283;  */

void FUN_10469a254(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10469a5e8(param_1);
  return;
}



/* Entry: 10469a284; end: 10469a293; -[SCAdTrackParseResult swipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469a284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c8d0);
}



/* Entry: 10469a294; end: 10469a2a3; -[SCAdTrackParseResult botViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469a294(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c8d8);
}



/* Entry: 10469a2a4; end: 10469a2b3; -[SCAdTrackParseResult topsnapViewTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469a2a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c8e0);
}



/* Entry: 10469a2b4; end: 10469a2c3; -[SCAdTrackParseResult returnToAppTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469a2b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c8e8);
}



/* Entry: 10469a2c4; end: 10469a2d3; -[SCAdTrackParseResult lifecycleTsParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c8f0));
  return;
}



/* Entry: 10469a2d4; end: 10469a2e3; -[SCAdTrackParseResult attachmentTriggerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469a2d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c8f8);
}



/* Entry: 10469a2e4; end: 10469a2f3; -[SCAdTrackParseResult isBackgroundExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10469a2e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308c900);
}



/* Entry: 10469a2f4; end: 10469a303; -[SCAdTrackParseResult webViewParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c908));
  return;
}



/* Entry: 10469a304; end: 10469a313; -[SCAdTrackParseResult deeplinkParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c910));
  return;
}



/* Entry: 10469a314; end: 10469a323; -[SCAdTrackParseResult collectionParseResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c918));
  return;
}



/* Entry: 10469a324; end: 10469a52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c8d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8f8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11308c900) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308c908) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308c910) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308c918) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469a52c; end: 10469a5e7; -[SCAdTrackParseResult initWithSwipeCount:botViewTime:topsnapViewTimeMs:returnToAppTimeMs:lifecycleTsParseResult:attachmentTriggerType:isBackgroundExit:webViewParseResult:deeplinkParseResult:collectionParseResult:] */

void FUN_10469a52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010469a428(param_1,param_2,param_3,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 10469a5e8; end: 10469a9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469a5e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  undefined1 auStack_710 [464];
  undefined *puStack_540;
  undefined1 auStack_528 [352];
  undefined1 auStack_3c8 [464];
  undefined1 auStack_1f8 [360];
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11308c8d0) = *param_1;
  uVar15 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11308c8d8) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308c8e0) = uVar15;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8e8) = param_1[3];
  if (*(char *)(param_1 + 9) == '\x01') {
    plVar6 = (long *)0x0;
  }
  else {
    uVar16 = param_1[7];
    uVar15 = param_1[8];
    uVar13 = param_1[5];
    uVar11 = param_1[6];
    uVar17 = param_1[4];
    lVar14 = 0;
    func_0x0001046855e4();
    lVar10 = lVar14;
    _objc_allocWithZone();
    *(undefined8 *)(lVar10 + _DAT_11308c100) = uVar17;
    *(undefined8 *)(lVar10 + _DAT_11308c108) = uVar13;
    *(undefined8 *)(lVar10 + _DAT_11308c110) = uVar11;
    *(undefined8 *)(lVar10 + _DAT_11308c118) = uVar16;
    *(undefined8 *)(lVar10 + _DAT_11308c120) = uVar15;
    plVar6 = &lStack_740;
    lStack_740 = lVar10;
    lStack_738 = lVar14;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308c8f0) = plVar6;
  *(undefined8 *)(unaff_x20 + _DAT_11308c8f8) = param_1[10];
  *(undefined1 *)(unaff_x20 + _DAT_11308c900) = *(undefined1 *)(param_1 + 0xb);
  _memcpy(auStack_528,param_1 + 0xc,0x160);
  iVar5 = (int)auStack_528;
  func_0x0001046632e8();
  if (iVar5 == 1) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_1f8,auStack_528,0x160);
    FUN_1046a363c(0);
    _objc_allocWithZone();
    _memcpy(auStack_3c8,auStack_528,0x160);
    func_0x00010467f5e8(auStack_3c8,auStack_710);
    puVar7 = auStack_1f8;
    FUN_1046a3240();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11308c908) = puVar7;
  lVar10 = param_1[0x3c];
  if (lVar10 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar11 = param_1[0x3e];
    bVar4 = *(byte *)(param_1 + 0x3d);
    uVar13 = param_1[0x3b];
    uVar3 = *(undefined4 *)(param_1 + 0x3a);
    uVar15 = param_1[0x38];
    uVar16 = param_1[0x39];
    lVar8 = 0;
    FUN_1046824ec();
    lVar14 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar14 + _DAT_11308bed8) = uVar15;
    *(undefined8 *)(lVar14 + _DAT_11308bee0) = uVar16;
    *(byte *)(lVar14 + _DAT_11308bee8) = (byte)uVar3 & 1;
    *(byte *)(lVar14 + _DAT_11308bef0) = (byte)((uint)uVar3 >> 8) & 1;
    puVar1 = (undefined8 *)(lVar14 + _DAT_11308bef8);
    *puVar1 = uVar13;
    puVar1[1] = lVar10;
    *(byte *)(lVar14 + _DAT_11308bf00) = bVar4 & 1;
    *(undefined8 *)(lVar14 + _DAT_11308bf08) = uVar11;
    puVar12 = PTR_s_init_1125d9248;
    lStack_730 = lVar14;
    lStack_728 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    plVar6 = &lStack_730;
    _objc_msgSendSuper2(plVar6,puVar12);
  }
  *(long **)(unaff_x20 + _DAT_11308c910) = plVar6;
  lVar10 = param_1[0x3f];
  if (lVar10 == 0) {
    func_0x00010466f3d0(param_1);
    plVar6 = (long *)0x0;
  }
  else {
    lVar9 = 0;
    FUN_104680280();
    lVar8 = lVar9;
    _objc_allocWithZone();
    lVar14 = *(long *)(lVar10 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar14 != 0) {
      puStack_540 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_104670708(0,lVar14,0);
      puVar12 = puStack_540;
      lVar10 = lVar10 + 0x20;
      uVar15 = 0;
      FUN_10467f7b8(0);
      do {
        _memcpy(auStack_3c8,lVar10,0x1d0);
        _objc_allocWithZone(uVar15);
        FUN_10466343c(auStack_3c8,auStack_710);
        puVar7 = auStack_3c8;
        FUN_10467edac();
        uVar2 = *(ulong *)(puVar12 + 0x10);
        puStack_540 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
          FUN_104670708(1 < *(ulong *)(puVar12 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_540 + 0x10) = uVar2 + 1;
        *(undefined1 **)(puStack_540 + uVar2 * 8 + 0x20) = puVar7;
        lVar10 = lVar10 + 0x1d0;
        lVar14 = lVar14 + -1;
        puVar12 = puStack_540;
      } while (lVar14 != 0);
    }
    *(undefined **)(lVar8 + _DAT_11308bde0) = puVar12;
    plVar6 = &lStack_720;
    lStack_720 = lVar8;
    lStack_718 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    func_0x00010466f3d0(param_1);
  }
  *(long **)(unaff_x20 + _DAT_11308c918) = plVar6;
  _objc_msgSendSuper2(&stack0xfffffffffffffac8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469aa00; end: 10469aa33; -[SCAdTrackParseResult hash] */

undefined8 FUN_10469aa00(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10469aa34();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469aa34; end: 10469ac67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469aa34(void)

{
  double dVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c8d0));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c8d8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c8d8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c8e0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c8e0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c8e8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c8e8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (*(long *)(unaff_x20 + _DAT_11308c8f0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046852c8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c8f8));
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_11308c900);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308c908) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046a2ec8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c910) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104681d40();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11308c918);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_11308bde0);
    uVar3 = 0;
    FUN_10467f7b8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar5,uVar3);
    uVar3 = uVar5;
    func_0x00010bfde980();
    _objc_release(uVar5);
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469ac68; end: 10469afcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469ac68(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long unaff_x20;
  uint uVar15;
  long lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long lStack_b8;
  long alStack_b0 [4];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_b0);
  if (alStack_b0[3] == 0) {
    FUN_10469ba4c(alStack_b0,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar8 = &lStack_b8;
    _swift_dynamicCast(plVar8,alStack_b0,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar8 & 1) != 0) {
      lVar14 = *(long *)(unaff_x20 + _DAT_11308c8d0);
      lVar12 = *(long *)(lStack_b8 + _DAT_11308c8d0);
      dVar18 = *(double *)(unaff_x20 + _DAT_11308c8d8);
      dVar19 = *(double *)(lStack_b8 + _DAT_11308c8d8);
      dVar20 = *(double *)(unaff_x20 + _DAT_11308c8e0);
      dVar22 = *(double *)(lStack_b8 + _DAT_11308c8e0);
      dVar21 = *(double *)(unaff_x20 + _DAT_11308c8e8);
      dVar23 = *(double *)(lStack_b8 + _DAT_11308c8e8);
      if (*(long *)(unaff_x20 + _DAT_11308c8f0) == 0) {
        uVar15 = (uint)(*(long *)(lStack_b8 + _DAT_11308c8f0) == 0);
      }
      else {
        lVar16 = *(long *)(lStack_b8 + _DAT_11308c8f0);
        if (lVar16 == 0) {
          lVar9 = 0;
          alStack_b0[1] = 0;
          alStack_b0[2] = 0;
        }
        else {
          lVar9 = 0;
          func_0x0001046855e4();
        }
        alStack_b0[0] = lVar16;
        alStack_b0[3] = lVar9;
        _objc_retain(lVar16);
        uVar15 = 0;
        FUN_1046853a8();
        FUN_10469ba4c(alStack_b0,0x112d387f8,&UNK_10d902650);
      }
      iVar2 = *(int *)(unaff_x20 + _DAT_11308c8f8);
      iVar3 = *(int *)(lStack_b8 + _DAT_11308c8f8);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11308c900);
      bVar5 = *(byte *)(lStack_b8 + _DAT_11308c900);
      if (*(long *)(unaff_x20 + _DAT_11308c908) == 0) {
        uVar17 = (uint)(*(long *)(lStack_b8 + _DAT_11308c908) == 0);
      }
      else {
        lVar16 = *(long *)(lStack_b8 + _DAT_11308c908);
        if (lVar16 == 0) {
          lVar9 = 0;
          alStack_b0[1] = 0;
          alStack_b0[2] = 0;
        }
        else {
          lVar9 = 0;
          FUN_1046a363c();
        }
        alStack_b0[0] = lVar16;
        alStack_b0[3] = lVar9;
        _objc_retain(lVar16);
        uVar17 = 0;
        FUN_1046a2f98();
        FUN_10469ba4c(alStack_b0,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11308c910) == 0) {
        uVar6 = (uint)(*(long *)(lStack_b8 + _DAT_11308c910) == 0);
      }
      else {
        lVar16 = *(long *)(lStack_b8 + _DAT_11308c910);
        if (lVar16 == 0) {
          lVar9 = 0;
          alStack_b0[1] = 0;
          alStack_b0[2] = 0;
        }
        else {
          lVar9 = 0;
          FUN_1046824ec();
        }
        alStack_b0[0] = lVar16;
        alStack_b0[3] = lVar9;
        _objc_retain(lVar16);
        plVar8 = alStack_b0;
        FUN_104681e38(plVar8);
        uVar6 = (uint)plVar8;
        FUN_10469ba4c(alStack_b0,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11308c918) == 0) {
        lVar9 = *(long *)(lStack_b8 + _DAT_11308c918);
        lVar16 = lVar9;
        _objc_retain(lVar9);
        _objc_release(lStack_b8);
        if (lVar9 == 0) {
          uVar7 = 1;
        }
        else {
          _objc_release(lVar16);
          uVar7 = 0;
        }
      }
      else {
        lVar16 = *(long *)(lStack_b8 + _DAT_11308c918);
        if (lVar16 == 0) {
          uVar10 = 0;
          alStack_b0[1] = 0;
          alStack_b0[2] = 0;
        }
        else {
          uVar10 = 0;
          FUN_104680280();
        }
        alStack_b0[0] = lVar16;
        alStack_b0[3] = uVar10;
        _objc_retain(lVar16);
        plVar8 = alStack_b0;
        func_0x00010467fb04(plVar8);
        uVar7 = (uint)plVar8;
        _objc_release(lStack_b8);
        FUN_10469ba4c(alStack_b0,0x112d387f8,&UNK_10d902650);
      }
      uVar11 = 0;
      uVar13 = 0;
      if (dVar20 == dVar22) {
        uVar13 = (uint)(dVar18 == dVar19);
      }
      uVar1 = 0;
      if (lVar14 == lVar12) {
        uVar1 = uVar13;
      }
      uVar13 = 0;
      if (dVar21 == dVar23) {
        uVar13 = uVar1;
      }
      if ((((uVar13 & uVar15) == 1 && iVar2 == iVar3) && (((bVar4 ^ bVar5) & 1) == 0)) &&
         (((uVar17 ^ 1) & 1) == 0)) {
        uVar11 = uVar6 & uVar7;
      }
      goto LAB_10469ad68;
    }
  }
  uVar11 = 0;
LAB_10469ad68:
  return uVar11 & 1;
}



/* Entry: 10469afd0; end: 10469b05f; -[SCAdTrackParseResult isEqual:] */

uint FUN_10469afd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469ac68(&uStack_40);
  _objc_release(param_1);
  FUN_10469ba4c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10469b060; end: 10469b063; -[SCAdTrackParseResult copyWithZone:] */

void FUN_10469b060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469b064; end: 10469b0a3; -[SCAdTrackParseResult description] */

void FUN_10469b064(void)

{
  undefined1 auStack_220 [512];
  
  _objc_retain();
  FUN_10469b178(auStack_220);
  func_0x00010466f3d0(auStack_220);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469b0a4; end: 10469b11f; -[SCAdTrackParseResult init] */

void FUN_10469b0a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackParseResultWrapper.swift",0x38,2,0x73,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469b0ec);
  (*pcVar1)();
}



/* Entry: 10469b120; end: 10469b177; -[SCAdTrackParseResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469b120(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c8f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c908));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c910));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c918));
  return;
}



/* Entry: 10469b178; end: 10469ba2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469b178(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_d30;
  undefined8 uStack_d20;
  undefined8 uStack_d10;
  undefined8 uStack_d00;
  undefined8 uStack_cf0;
  undefined8 uStack_ce0;
  undefined1 auStack_cc8 [56];
  undefined *puStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined1 uStack_c78;
  undefined1 uStack_c77;
  undefined6 uStack_c76;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined1 uStack_c60;
  undefined7 uStack_c5f;
  undefined8 uStack_c58;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 uStack_a78;
  undefined1 uStack_a77;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 auStack_838 [296];
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  long lStack_6f0;
  undefined1 uStack_6e8;
  undefined8 uStack_6e0;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 auStack_688 [352];
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined1 auStack_4c8 [352];
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [296];
  undefined8 auStack_1c8 [45];
  
  FUN_10465ec9c(auStack_1c8);
  _memcpy(auStack_4c8,auStack_1c8,0x160);
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_338 = 0;
  uStack_348 = 1;
  uStack_340 = 0;
  uStack_520 = *(undefined8 *)(param_2 + _DAT_11308c8d8);
  uStack_518 = *(undefined8 *)(param_2 + _DAT_11308c8e0);
  uStack_510 = *(undefined8 *)(param_2 + _DAT_11308c8e8);
  uStack_528 = *(undefined8 *)(param_2 + _DAT_11308c8d0);
  lVar16 = *(long *)(param_2 + _DAT_11308c8f0);
  uStack_4e0 = lVar16 == 0;
  if ((bool)uStack_4e0) {
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
  }
  else {
    uStack_508 = *(undefined8 *)(lVar16 + _DAT_11308c100);
    uStack_500 = *(undefined8 *)(lVar16 + _DAT_11308c108);
    uStack_4f8 = *(undefined8 *)(lVar16 + _DAT_11308c110);
    uStack_4f0 = *(undefined8 *)(lVar16 + _DAT_11308c118);
    uStack_4e8 = *(undefined8 *)(lVar16 + _DAT_11308c120);
  }
  uStack_4d8 = *(undefined8 *)(param_2 + _DAT_11308c8f8);
  uStack_4d0 = *(undefined1 *)(param_2 + _DAT_11308c900);
  lVar16 = *(long *)(param_2 + _DAT_11308c908);
  if (lVar16 == 0) {
    puVar14 = auStack_1c8;
  }
  else {
    _objc_retain();
    FUN_1046a355c(&uStack_a88);
    _objc_release(lVar16);
    _memcpy(&uStack_888,&uStack_a88,0x160);
    FUN_10467108c(&uStack_888);
    puVar14 = &uStack_888;
  }
  _memcpy(auStack_688,puVar14,0x160);
  FUN_10469ba4c(auStack_4c8,0x11308b8c8,&UNK_10dd24d70);
  _memcpy(auStack_4c8,auStack_688,0x160);
  if (*(long *)(param_2 + _DAT_11308c910) == 0) {
    uStack_2f8 = 0;
    uStack_cf0 = 0;
    uStack_ce0 = 1;
    uStack_d30 = 0;
    uStack_d20 = 0;
    uStack_d10 = 0;
    uStack_d00 = 0;
  }
  else {
    _objc_retain();
    FUN_1046823dc(&uStack_328);
    auVar10._8_8_ = uStack_310;
    auVar10._0_8_ = uStack_318;
    auVar27._8_8_ = uStack_310;
    auVar27._0_8_ = uStack_318;
    auVar9._8_8_ = uStack_320;
    auVar9._0_8_ = uStack_328;
    auVar26._8_8_ = uStack_320;
    auVar26._0_8_ = uStack_328;
    uStack_cf0 = uStack_328;
    uStack_ce0 = auStack_308._0_8_;
    auVar25 = NEON_ext(auStack_308,auStack_308,8,1);
    uStack_d10 = auVar25._0_8_;
    uStack_d00 = uStack_318;
    auVar27 = NEON_ext(auVar27,auVar10,8,1);
    auVar26 = NEON_ext(auVar26,auVar9,8,1);
    uStack_d30 = auVar26._0_8_;
    uStack_d20 = auVar27._0_8_;
  }
  func_0x0001046632d4(uStack_368,uStack_360,uStack_358,uStack_350,uStack_348,uStack_340,uStack_338);
  uStack_360 = uStack_d30;
  uStack_368 = uStack_cf0;
  uStack_350 = uStack_d20;
  uStack_358 = uStack_d00;
  uStack_340 = uStack_d10;
  uStack_348 = uStack_ce0;
  lVar16 = *(long *)(param_2 + _DAT_11308c918);
  uStack_338 = uStack_2f8;
  if (lVar16 == 0) {
    _objc_release(param_2);
    puStack_330 = (undefined *)0x0;
  }
  else {
    uVar21 = *(ulong *)(lVar16 + _DAT_11308bde0);
    if (uVar21 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uVar21 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar21) {
        uVar19 = uVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar19 != 0) {
      puStack_c90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _objc_retain();
      func_0x00010467073c(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10469ba2c);
        (*pcVar11)();
      }
      lVar23 = 0;
      puVar17 = puStack_c90;
      if ((uVar21 & 0xc000000000000001) == 0) goto LAB_10469b4bc;
LAB_10469b4ac:
      lVar12 = lVar23;
      func_0x000104670500(lVar23,uVar21);
      do {
        uStack_888 = *(undefined8 *)(lVar12 + _DAT_11308bd88);
        uStack_880 = *(undefined8 *)(lVar12 + _DAT_11308bd90);
        uStack_878 = *(undefined8 *)(lVar12 + _DAT_11308bd98);
        lVar15 = *(long *)(lVar12 + _DAT_11308bda0);
        if (lVar15 == 0) {
          uStack_858 = 0;
          uStack_860 = 0;
          uStack_868 = 0;
          uStack_870 = 0;
          uStack_850 = 1;
          uStack_848 = 0;
          uStack_840 = 0;
        }
        else {
          uStack_c88 = *(undefined8 *)(lVar15 + _DAT_11308bed8);
          uStack_c80 = *(undefined8 *)(lVar15 + _DAT_11308bee0);
          uStack_c78 = *(undefined1 *)(lVar15 + _DAT_11308bee8);
          uStack_c77 = *(undefined1 *)(lVar15 + _DAT_11308bef0);
          uStack_c70 = *(undefined8 *)(lVar15 + _DAT_11308bef8);
          uStack_c68 = ((undefined8 *)(lVar15 + _DAT_11308bef8))[1];
          uStack_c60 = *(undefined1 *)(lVar15 + _DAT_11308bf00);
          uStack_c58 = *(undefined8 *)(lVar15 + _DAT_11308bf08);
          uStack_a88 = uStack_c88;
          uStack_a80 = uStack_c80;
          uStack_a78 = uStack_c78;
          uStack_a77 = uStack_c77;
          uStack_a70 = uStack_c70;
          uStack_a68 = uStack_c68;
          uStack_a60 = uStack_c60;
          uStack_a58 = uStack_c58;
          _swift_bridgeObjectRetain();
          FUN_104663fa0(&uStack_c88,auStack_cc8);
          FUN_104662df8(&uStack_a88);
          uStack_860 = CONCAT62(uStack_c76,CONCAT11(uStack_c77,uStack_c78));
          uStack_868 = uStack_c80;
          uStack_870 = uStack_c88;
          uStack_858 = uStack_c70;
          uStack_848 = CONCAT71(uStack_c5f,uStack_c60);
          uStack_850 = uStack_c68;
          uStack_840 = uStack_c58;
        }
        lVar15 = *(long *)(lVar12 + _DAT_11308bda8);
        if (lVar15 == 0) {
          _memcpy(auStack_838,auStack_1c8,0x160);
        }
        else {
          lVar20 = *(long *)(lVar15 + _DAT_11308cce0);
          if (lVar20 == 0) {
            func_0x000104671090(&uStack_a88);
            _memcpy(auStack_838,&uStack_a88,0x121);
            _objc_retain(lVar15);
          }
          else {
            _objc_retain(lVar15);
            _objc_retain(lVar20);
            FUN_1046a2878(auStack_2f0);
            _memcpy(auStack_838,auStack_2f0,0x121);
            func_0x0001046710c8(auStack_838);
          }
          lVar20 = *(long *)(lVar15 + _DAT_11308cce8);
          if (lVar20 == 0) {
            uStack_6e8 = 0;
            uStack_710 = 1;
            lStack_700 = 0;
            uStack_6f8 = 0;
            uStack_708 = 0;
          }
          else {
            uVar22 = *(undefined8 *)(lVar20 + _DAT_11308cf70);
            uVar3 = *(undefined1 *)(lVar20 + _DAT_11308cf78);
            uVar4 = *(undefined1 *)(lVar20 + _DAT_11308cf80);
            lVar24 = *(long *)(lVar20 + _DAT_11308cf88);
            bVar1 = lVar24 == 0;
            if (bVar1) {
              _swift_bridgeObjectRetain(uVar22);
              _objc_retain(lVar20);
            }
            else {
              _swift_bridgeObjectRetain(uVar22);
              _objc_retain(lVar20);
              func_0x00010c0b4ca0();
            }
            lVar13 = *(long *)(lVar20 + _DAT_11308cf90);
            if (lVar13 != 0) {
              func_0x00010c0b4ca0();
              _objc_release(lVar20);
              uStack_708._0_2_ = CONCAT11(uVar4,uVar3);
              uStack_6f8 = CONCAT71(uStack_6f8._1_7_,bVar1);
              uStack_6e8 = 0;
              uVar18 = *(undefined8 *)(lVar15 + _DAT_11308ccf0);
              uStack_710 = uVar22;
              lStack_700 = lVar24;
              lStack_6f0 = lVar13;
              _objc_release(lVar15);
              uStack_6e0 = uVar18;
              FUN_10467108c(auStack_838);
              goto LAB_10469b820;
            }
            _objc_release(lVar20);
            uStack_708._0_2_ = CONCAT11(uVar4,uVar3);
            uStack_6e8 = 1;
            uStack_6f8 = CONCAT71(uStack_6f8._1_7_,bVar1);
            uStack_710 = uVar22;
            lStack_700 = lVar24;
          }
          lStack_6f0 = 0;
          uVar22 = *(undefined8 *)(lVar15 + _DAT_11308ccf0);
          _objc_release(lVar15);
          uStack_6e0 = uVar22;
          FUN_10467108c(auStack_838);
        }
LAB_10469b820:
        lVar15 = *(long *)(lVar12 + _DAT_11308bdb0);
        if (lVar15 == 0) {
          _objc_release(lVar12);
          uVar22 = 0;
          uStack_6c8 = 0;
          uVar18 = 0;
          uStack_6d8 = 2;
        }
        else {
          bVar5 = *(byte *)(lVar15 + _DAT_11308bce8);
          cVar6 = *(char *)(lVar15 + _DAT_11308bcf0);
          uVar22 = *(undefined8 *)(lVar15 + _DAT_11308bcf8);
          bVar7 = *(byte *)(lVar15 + _DAT_11308bd00);
          cVar8 = *(char *)(lVar15 + _DAT_11308bd08);
          uVar18 = *(undefined8 *)(lVar15 + _DAT_11308bd10);
          _objc_release(lVar12);
          uStack_6d8 = 0x100;
          if (cVar6 == '\0') {
            uStack_6d8 = 0;
          }
          uStack_6d8 = uStack_6d8 | bVar5;
          uStack_6c8 = 0x100;
          if (cVar8 == '\0') {
            uStack_6c8 = 0;
          }
          uStack_6c8 = uStack_6c8 | bVar7;
        }
        uStack_6d0 = uVar22;
        uStack_6c0 = uVar18;
        _memcpy(&uStack_a88,&uStack_888,0x1d0);
        uVar2 = *(ulong *)(puVar17 + 0x10);
        puStack_c90 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar2) {
          func_0x00010467073c(1 < *(ulong *)(puVar17 + 0x18),uVar2 + 1,1);
        }
        puVar17 = puStack_c90;
        *(ulong *)(puStack_c90 + 0x10) = uVar2 + 1;
        _memcpy(puStack_c90 + uVar2 * 0x1d0 + 0x20,&uStack_a88,0x1d0);
        if (uVar19 - 1 == lVar23) {
          _objc_release(param_2);
          _objc_release(lVar16);
          puStack_330 = puVar17;
          goto LAB_10469b9c0;
        }
        lVar23 = lVar23 + 1;
        if ((uVar21 & 0xc000000000000001) != 0) goto LAB_10469b4ac;
LAB_10469b4bc:
        lVar12 = *(long *)(uVar21 + lVar23 * 8 + 0x20);
        _objc_retain();
      } while( true );
    }
    _objc_release(param_2);
    puStack_330 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_10469b9c0:
  _memcpy(&uStack_a88,&uStack_528,0x200);
  _memcpy(&uStack_888,&uStack_528,0x200);
  func_0x00010466f39c(&uStack_a88,&uStack_c88);
  func_0x00010466f3d0(&uStack_888);
  _memcpy(param_1,&uStack_a88,0x200);
  return;
}



/* Entry: 10469ba2c; end: 10469ba4b;  */

void FUN_10469ba2c(void)

{
  _objc_opt_self(&PTR_PTR_1129d16a0);
  return;
}



/* Entry: 10469ba4c; end: 10469ba8b;  */

undefined8 FUN_10469ba4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10469ba8c; end: 10469ba97; -[SCAdTrackParserAttribution adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ba8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c948);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308c948))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469ba98; end: 10469baa3; -[SCAdTrackParserAttribution adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ba98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c950);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308c950))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469baa4; end: 10469baeb;  */

void FUN_10469baa4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10469baec; end: 10469bafb; -[SCAdTrackParserAttribution adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469baec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c958);
}



/* Entry: 10469bafc; end: 10469bb0b; -[SCAdTrackParserAttribution adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469bafc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c960);
}



/* Entry: 10469bb0c; end: 10469bb1b; -[SCAdTrackParserAttribution trackSeqNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469bb0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c968);
}



/* Entry: 10469bb1c; end: 10469bbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469bb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c948);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c950);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308c958) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308c960) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308c968) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469bbd0; end: 10469bc97; -[SCAdTrackParserAttribution initWithAdId:adServeItemId:adType:adProductType:trackSeqNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469bbd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308c948);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308c950);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_11308c958) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308c960) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308c968) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469bc98; end: 10469bd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469bc98(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c948);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c950);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_11308c958) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11308c960) = param_1[5];
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x000100402194(&uStack_50,auStack_60);
  FUN_10469bd5c(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308c968) = param_1[6];
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469bd5c; end: 10469bd8f;  */

undefined8 FUN_10469bd5c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1046720ec)();
  return param_1;
}



/* Entry: 10469bd90; end: 10469bdc3; -[SCAdTrackParserAttribution hash] */

undefined8 FUN_10469bd90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10469bdc4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469bdc4; end: 10469bea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469bdc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c948);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308c948))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c950);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308c950))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c958));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c960));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c968));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469bea4; end: 10469c007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469bea4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11308c948);
      if (lVar5 == *(long *)(lStack_88 + _DAT_11308c948) &&
          ((long *)(unaff_x20 + _DAT_11308c948))[1] == ((long *)(lStack_88 + _DAT_11308c948))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar5;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11308c950);
      if (lVar5 == *(long *)(lStack_88 + _DAT_11308c950) &&
          ((long *)(unaff_x20 + _DAT_11308c950))[1] == ((long *)(lStack_88 + _DAT_11308c950))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar5;
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11308c958);
      uVar7 = *(undefined8 *)(lStack_88 + _DAT_11308c958);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11308c960);
      uVar9 = *(undefined8 *)(lStack_88 + _DAT_11308c960);
      lVar5 = *(long *)(unaff_x20 + _DAT_11308c968);
      lVar10 = *(long *)(lStack_88 + _DAT_11308c968);
      _objc_release(lStack_88);
      uVar1 = 0;
      if ((int)uVar8 == (int)uVar9) {
        uVar1 = uVar2 & uVar3 & (uint)((int)uVar6 == (int)uVar7);
      }
      if (lVar5 != lVar10) {
        return 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 10469c008; end: 10469c087; -[SCAdTrackParserAttribution isEqual:] */

uint FUN_10469c008(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469bea4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469c088; end: 10469c08b; -[SCAdTrackParserAttribution copyWithZone:] */

void FUN_10469c088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469c08c; end: 10469c0bf; -[SCAdTrackParserAttribution description] */

void FUN_10469c08c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10469c0c0; end: 10469c13b; -[SCAdTrackParserAttribution init] */

void FUN_10469c0c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackParserAttributionWrapper.swift",0x3e,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469c108);
  (*pcVar1)();
}



/* Entry: 10469c13c; end: 10469c17b; -[SCAdTrackParserAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c13c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c948 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308c950 + 8))
  ;
  return;
}



/* Entry: 10469c17c; end: 10469c19b;  */

void FUN_10469c17c(void)

{
  _objc_opt_self(&PTR_PTR_1129d17b0);
  return;
}



/* Entry: 10469c19c; end: 10469c1e7; -[SCAdTrackViewIdentifier adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c19c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c998);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308c998))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469c1e8; end: 10469c1fb; -[SCAdTrackViewIdentifier viewSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469c1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c9a0);
}



/* Entry: 10469c1fc; end: 10469c2db; -[SCAdTrackViewIdentifier initWithAdIdentifier:viewSeqNum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308c998);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308c9a0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469c2dc; end: 10469c463; -[SCAdTrackViewIdentifier hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469c2dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c998);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308c998))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c9a0);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10469c464; end: 10469c4e3; -[SCAdTrackViewIdentifier isEqual:] */

uint FUN_10469c464(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010469c384(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469c4e4; end: 10469c4e7; -[SCAdTrackViewIdentifier copyWithZone:] */

void FUN_10469c4e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469c4e8; end: 10469c503; -[SCAdTrackViewIdentifier description] */

void FUN_10469c4e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469c504; end: 10469c57f; -[SCAdTrackViewIdentifier init] */

void FUN_10469c504(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackViewIdentifierWrapper.swift",0x3b,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469c54c);
  (*pcVar1)();
}



/* Entry: 10469c580; end: 10469c593; -[SCAdTrackViewIdentifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308c998 + 8))
  ;
  return;
}



/* Entry: 10469c594; end: 10469c5b3;  */

void FUN_10469c594(void)

{
  _objc_opt_self(&PTR_PTR_1129d1898);
  return;
}



/* Entry: 10469c5b4; end: 10469c5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c998);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9a0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469c5b8; end: 10469c63b;  */

void FUN_10469c5b8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10469d28c(param_1);
  return;
}



/* Entry: 10469c63c; end: 10469c8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469c63c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308c9d0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c9d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c9d8));
  lVar3 = *(long *)(unaff_x20 + _DAT_11308c9e0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  dVar4 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c9e8) != 0.0) {
    dVar4 = *(double *)(unaff_x20 + _DAT_11308c9e8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_11308c9f0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c9f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308c9f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c9f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca00));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca08));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca10));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca18));
  if (((undefined8 *)(unaff_x20 + _DAT_11308ca20))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ca20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca28));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ca30));
  if (((undefined8 *)(unaff_x20 + _DAT_11308ca38))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ca38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469c8c4; end: 10469ccd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469c8c4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  uint uStack_b4;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  FUN_10469d8f0(param_1,auStack_90,0x112d387f8,&UNK_10d902650);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
    return 0;
  }
  plVar12 = &lStack_98;
  _swift_dynamicCast(plVar12,auStack_90,PTR___sypN_11034f1a8 + 8,lVar16,6);
  if (((ulong)plVar12 & 1) == 0) {
    return 0;
  }
  lVar16 = ((long *)(unaff_x20 + _DAT_11308c9d0))[1];
  lVar17 = ((long *)(lStack_98 + _DAT_11308c9d0))[1];
  uVar10 = (uint)(lVar16 == 0 && lVar17 == 0);
  if (lVar16 != 0 && lVar17 != 0) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11308c9d0);
    if (lVar13 == *(long *)(lStack_98 + _DAT_11308c9d0) && lVar16 == lVar17) {
      uVar10 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar13;
    }
  }
  lVar19 = *(long *)(unaff_x20 + _DAT_11308c9d8);
  lVar13 = *(long *)(lStack_98 + _DAT_11308c9d8);
  lVar17 = *(long *)(unaff_x20 + _DAT_11308c9e0);
  lVar16 = *(long *)(lStack_98 + _DAT_11308c9e0);
  if (lVar17 == 0 || lVar16 == 0) {
    uStack_b4 = (uint)(lVar17 == 0 && lVar16 == 0);
  }
  else {
    func_0x0001002ed07c(0);
    _objc_retain(lVar16);
    _objc_retain();
    lVar14 = lVar17;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uStack_b4 = (uint)lVar14;
    _objc_release(lVar17);
    _objc_release(lVar16);
  }
  dVar25 = *(double *)(unaff_x20 + _DAT_11308c9e8);
  dVar26 = *(double *)(lStack_98 + _DAT_11308c9e8);
  lVar16 = ((long *)(unaff_x20 + _DAT_11308c9f0))[1];
  lVar17 = ((long *)(lStack_98 + _DAT_11308c9f0))[1];
  uVar11 = (uint)(lVar16 == 0 && lVar17 == 0);
  if ((lVar16 != 0) && (lVar17 != 0)) {
    lVar14 = *(long *)(unaff_x20 + _DAT_11308c9f0);
    if ((lVar14 == *(long *)(lStack_98 + _DAT_11308c9f0)) && (lVar16 == lVar17)) {
      uVar11 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar11 = (uint)lVar14;
    }
  }
  lVar16 = ((long *)(unaff_x20 + _DAT_11308c9f8))[1];
  lVar17 = ((long *)(lStack_98 + _DAT_11308c9f8))[1];
  uVar23 = (uint)(lVar16 == 0 && lVar17 == 0);
  if ((lVar16 != 0) && (lVar17 != 0)) {
    lVar14 = *(long *)(unaff_x20 + _DAT_11308c9f8);
    if ((lVar14 == *(long *)(lStack_98 + _DAT_11308c9f8)) && (lVar16 == lVar17)) {
      uVar23 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar23 = (uint)lVar14;
    }
  }
  lVar20 = *(long *)(unaff_x20 + _DAT_11308ca00);
  lVar14 = *(long *)(lStack_98 + _DAT_11308ca00);
  lVar21 = *(long *)(unaff_x20 + _DAT_11308ca08);
  lVar18 = *(long *)(lStack_98 + _DAT_11308ca08);
  iVar2 = *(int *)(unaff_x20 + _DAT_11308ca10);
  iVar3 = *(int *)(lStack_98 + _DAT_11308ca10);
  iVar4 = *(int *)(unaff_x20 + _DAT_11308ca18);
  iVar5 = *(int *)(lStack_98 + _DAT_11308ca18);
  lVar16 = ((long *)(unaff_x20 + _DAT_11308ca20))[1];
  lVar17 = ((long *)(lStack_98 + _DAT_11308ca20))[1];
  uVar24 = (uint)(lVar16 == 0 && lVar17 == 0);
  if ((lVar16 != 0) && (lVar17 != 0)) {
    lVar15 = *(long *)(unaff_x20 + _DAT_11308ca20);
    if ((lVar15 == *(long *)(lStack_98 + _DAT_11308ca20)) && (lVar16 == lVar17)) {
      uVar24 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar24 = (uint)lVar15;
    }
  }
  iVar6 = *(int *)(unaff_x20 + _DAT_11308ca28);
  iVar7 = *(int *)(lStack_98 + _DAT_11308ca28);
  iVar8 = *(int *)(unaff_x20 + _DAT_11308ca30);
  iVar9 = *(int *)(lStack_98 + _DAT_11308ca30);
  lVar16 = ((long *)(unaff_x20 + _DAT_11308ca38))[1];
  lVar17 = ((long *)(lStack_98 + _DAT_11308ca38))[1];
  if (lVar16 == 0) {
    _swift_bridgeObjectRetain(lVar17);
    _objc_release(lStack_98);
    if (lVar17 != 0) {
      _swift_bridgeObjectRelease(lVar17);
      uVar22 = 0;
      goto LAB_10469cc40;
    }
LAB_10469cc20:
    uVar22 = 1;
  }
  else {
    uVar22 = 0;
    if (lVar17 != 0) {
      lVar15 = *(long *)(unaff_x20 + _DAT_11308ca38);
      if ((lVar15 == *(long *)(lStack_98 + _DAT_11308ca38)) && (lVar16 == lVar17)) {
        _objc_release(lStack_98);
        goto LAB_10469cc20;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar22 = (uint)lVar15;
    }
    _objc_release(lStack_98);
  }
LAB_10469cc40:
  uVar1 = 0;
  if (dVar25 == dVar26) {
    uVar1 = uVar10 & lVar19 == lVar13 & uStack_b4;
  }
  uVar10 = 0;
  if (lVar20 == lVar14) {
    uVar10 = uVar1 & uVar11 & uVar23;
  }
  uVar11 = 0;
  if (lVar21 == lVar18) {
    uVar11 = uVar10;
  }
  uVar10 = 0;
  if (iVar2 == iVar3) {
    uVar10 = uVar11;
  }
  uVar11 = 0;
  if (iVar4 == iVar5) {
    uVar11 = uVar10;
  }
  uVar10 = 0;
  if (iVar6 == iVar7) {
    uVar10 = uVar11 & uVar24;
  }
  uVar11 = 0;
  if (iVar8 == iVar9) {
    uVar11 = uVar10;
  }
  return uVar11 & uVar22;
}



/* Entry: 10469ccd4; end: 10469ccdf; -[SCAdTrackCommon adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ccd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308c9d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308c9d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469cce0; end: 10469ccef; -[SCAdTrackCommon snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cce0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c9d8);
}



/* Entry: 10469ccf0; end: 10469ccff; -[SCAdTrackCommon collectionItemIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ccf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c9e0));
  return;
}



/* Entry: 10469cd00; end: 10469cd0f; -[SCAdTrackCommon timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c9e8);
}



/* Entry: 10469cd10; end: 10469cd1b; -[SCAdTrackCommon adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469cd10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308c9f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308c9f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469cd1c; end: 10469cd27; -[SCAdTrackCommon adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469cd1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308c9f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308c9f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469cd28; end: 10469cd37; -[SCAdTrackCommon trackSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca00);
}



/* Entry: 10469cd38; end: 10469cd47; -[SCAdTrackCommon viewSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca08);
}



/* Entry: 10469cd48; end: 10469cd57; -[SCAdTrackCommon adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca10);
}



/* Entry: 10469cd58; end: 10469cd67; -[SCAdTrackCommon adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca18);
}



/* Entry: 10469cd68; end: 10469cd73; -[SCAdTrackCommon pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469cd68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308ca20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308ca20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469cd74; end: 10469cd83; -[SCAdTrackCommon preferredAttachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca28);
}



/* Entry: 10469cd84; end: 10469cd93; -[SCAdTrackCommon actualAttachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469cd84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ca30);
}



/* Entry: 10469cd94; end: 10469cd9f; -[SCAdTrackCommon source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469cd94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308ca38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308ca38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10469cda0; end: 10469cdf7;  */

void FUN_10469cda0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10469cdf8; end: 10469d11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469cdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9e8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9f0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9f8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca00) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca08) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca10) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca18) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ca20);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca28) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca30) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ca38);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469d120; end: 10469d28b; -[SCAdTrackCommon initWithAdIdentifier:snapIndex:collectionItemIndex:timestamp:adServeItemId:adId:trackSeqNum:viewSeqNum:adType:adProductType:pageId:preferredAttachmentType:actualAttachmentType:source:] */

void FUN_10469d120(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined8 param_14,undefined8 param_15,long param_16)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_4 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_3;
    uStack_98 = param_4;
  }
  if (param_7 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = param_3;
    uStack_a8 = param_7;
  }
  if (param_8 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = param_3;
    uStack_b8 = param_8;
  }
  _objc_retain();
  lVar1 = param_13;
  _objc_retain();
  lVar2 = param_16;
  _objc_retain();
  if (lVar1 == 0) {
    param_13 = 0;
    uVar3 = 0;
    uVar4 = param_3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = param_3;
    _objc_release(lVar1);
    uVar3 = param_3;
  }
  if (lVar2 == 0) {
    param_16 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
  }
  func_0x00010469cf8c(param_1,uStack_98,uStack_a0,param_5,param_6,uStack_a8,uStack_b0,uStack_b8,
                      uStack_c0,param_9,param_10,param_11,param_12,param_13,uVar3,param_14,param_15,
                      param_16,uVar4);
  return;
}



/* Entry: 10469d28c; end: 10469d493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d28c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
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
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9d0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9d8) = param_1[2];
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_10469d8f0(&uStack_50,&uStack_60,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_10469d8f0(&uStack_50,&uStack_60,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308c9e0) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c9e8) = param_1[5];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9f0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c9f8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uVar3 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca00) = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca08) = uVar3;
  uVar3 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca10) = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca18) = uVar3;
  uVar3 = param_1[0xe];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ca20);
  puVar1[1] = param_1[0xf];
  *puVar1 = uVar3;
  uVar3 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca28) = param_1[0x10];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11308ca30) = uVar3;
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uVar3 = param_1[0x12];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ca38);
  puVar1[1] = param_1[0x13];
  *puVar1 = uVar3;
  FUN_10469d8f0(&uStack_60,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10469d8f0(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10469d8f0(&uStack_80,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10469d8f0(&uStack_90,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000102c62d10(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469d494; end: 10469d4c7; -[SCAdTrackCommon hash] */

undefined8 FUN_10469d494(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469d4c8; end: 10469d547; -[SCAdTrackCommon isEqual:] */

uint FUN_10469d4c8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469c8c4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469d548; end: 10469d54b; -[SCAdTrackCommon copyWithZone:] */

void FUN_10469d548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469d54c; end: 10469d583; -[SCAdTrackCommon description] */

void FUN_10469d54c(void)

{
  undefined1 auStack_b0 [160];
  
  _objc_retain();
  FUN_10469d68c(auStack_b0);
  func_0x000102c62d10(auStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


