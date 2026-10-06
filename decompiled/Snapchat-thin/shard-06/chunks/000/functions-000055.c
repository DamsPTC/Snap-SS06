/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104446104; end: 10444617f; -[SCOperaObservablePlaybackEvent init] */

void FUN_104446104(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaObservablePlaybackEventWrapper.swift",0x3e,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444614c);
  (*pcVar1)();
}



/* Entry: 104446180; end: 104446193; -[SCOperaObservablePlaybackEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079d68 + 8))
  ;
  return;
}



/* Entry: 104446194; end: 1044461b3;  */

void FUN_104446194(void)

{
  _objc_opt_self(&PTR_PTR_1129b4aa0);
  return;
}



/* Entry: 1044461b4; end: 1044461b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044461b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079d60) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079d68);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044461b8; end: 104446203; -[SCOperaObservablePlaybackEventsGroup eventTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044461b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079d98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079d98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104446204; end: 10444625f; -[SCOperaObservablePlaybackEventsGroup events] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446204(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079da0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104446194(0);
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



/* Entry: 104446260; end: 10444626f; -[SCOperaObservablePlaybackEventsGroup eventComparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104446260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079da8);
}



/* Entry: 104446270; end: 1044462f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079d98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113079da0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113079da8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044462f4; end: 1044463f7; -[SCOperaObservablePlaybackEventsGroup initWithEventTag:events:eventComparator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044462f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = 0;
  if (param_4 != 0) {
    FUN_104446194();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,lVar3);
    lVar3 = param_4;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113079d98);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(long *)(param_1 + _DAT_113079da0) = lVar3;
  *(undefined8 *)(param_1 + _DAT_113079da8) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044463f8; end: 1044465df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044463f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _swift_getObjectType();
  puVar10 = (undefined8 *)(unaff_x20 + _DAT_113079d98);
  *puVar10 = param_1;
  puVar10[1] = param_2;
  if (param_3 == 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x10);
    if (lVar11 == 0) {
      _swift_bridgeObjectRetain(param_2);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(param_2);
      func_0x0001044443cc(0,lVar11,0);
      puVar9 = puStack_88;
      lVar6 = 0;
      FUN_104446194();
      puVar10 = (undefined8 *)(param_3 + 0x30);
      do {
        uVar12 = puVar10[-2];
        uVar2 = puVar10[-1];
        uVar4 = *puVar10;
        lVar7 = lVar6;
        _objc_allocWithZone();
        *(undefined8 *)(lVar7 + _DAT_113079d60) = uVar12;
        puVar1 = (undefined8 *)(lVar7 + _DAT_113079d68);
        *puVar1 = uVar2;
        puVar1[1] = uVar4;
        puVar5 = PTR_s_init_1125d9248;
        lStack_98 = lVar7;
        lStack_90 = lVar6;
        _swift_bridgeObjectRetain(uVar4);
        plVar8 = &lStack_98;
        _objc_msgSendSuper2(plVar8,puVar5);
        uVar3 = *(ulong *)(puVar9 + 0x10);
        puStack_88 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          func_0x0001044443cc(1 < *(ulong *)(puVar9 + 0x18),uVar3 + 1,1);
        }
        puVar10 = puVar10 + 3;
        *(ulong *)(puStack_88 + 0x10) = uVar3 + 1;
        *(long **)(puStack_88 + uVar3 * 8 + 0x20) = plVar8;
        lVar11 = lVar11 + -1;
        puVar9 = puStack_88;
      } while (lVar11 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113079da0) = puVar9;
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113079da8) = param_4;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044465e0; end: 1044465e3; -[SCOperaObservablePlaybackEventsGroup copyWithZone:] */

void FUN_1044465e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044465e4; end: 10444663b; -[SCOperaObservablePlaybackEventsGroup description] */

void FUN_1044465e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1044466f4();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444663c; end: 1044466b7; -[SCOperaObservablePlaybackEventsGroup init] */

void FUN_10444663c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaObservablePlaybackEventsGroupWrapper.swift",0x44,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104446684);
  (*pcVar1)();
}



/* Entry: 1044466b8; end: 1044466f3; -[SCOperaObservablePlaybackEventsGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044466b8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079d98 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079da0));
  return;
}



/* Entry: 1044466f4; end: 10444693b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044466f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079d98);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113079d98))[1];
  uVar10 = *(ulong *)(param_1 + _DAT_113079da0);
  if (uVar10 == 0) {
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar9 = uVar10;
      if (-1 < (long)uVar10) {
        uVar9 = uVar10 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
    if (uVar9 == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    else {
      _swift_bridgeObjectRetain(uVar3);
      func_0x000104444404(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10444693c);
        (*pcVar6)();
      }
      if ((uVar10 & 0xc000000000000001) == 0) {
        plVar8 = (long *)(uVar10 + 0x20);
        do {
          uVar12 = *(undefined8 *)(*plVar8 + _DAT_113079d60);
          puVar1 = (undefined8 *)(*plVar8 + _DAT_113079d68);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          uVar10 = *(ulong *)(puVar5 + 0x10);
          uVar11 = *(ulong *)(puVar5 + 0x18);
          _swift_bridgeObjectRetain(uVar4);
          if (uVar11 >> 1 <= uVar10) {
            func_0x000104444404(1 < uVar11,uVar10 + 1,1);
          }
          *(ulong *)(puVar5 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puVar5 + uVar10 * 0x18 + 0x20) = uVar12;
          *(undefined8 *)(puVar5 + uVar10 * 0x18 + 0x28) = uVar3;
          *(undefined8 *)(puVar5 + uVar10 * 0x18 + 0x30) = uVar4;
          uVar9 = uVar9 - 1;
          plVar8 = plVar8 + 1;
        } while (uVar9 != 0);
      }
      else {
        uVar11 = 0;
        do {
          uVar7 = uVar11;
          func_0x000102e8f964(uVar11,uVar10);
          uVar12 = *(undefined8 *)(uVar7 + _DAT_113079d60);
          uVar3 = *(undefined8 *)(uVar7 + _DAT_113079d68);
          uVar4 = ((undefined8 *)(uVar7 + _DAT_113079d68))[1];
          _swift_bridgeObjectRetain(uVar4);
          _swift_unknownObjectRelease(uVar7);
          uVar7 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
            func_0x000104444404(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
          }
          *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
          *(undefined8 *)(puVar5 + uVar7 * 0x18 + 0x20) = uVar12;
          uVar11 = uVar11 + 1;
          *(undefined8 *)(puVar5 + uVar7 * 0x18 + 0x28) = uVar3;
          *(undefined8 *)(puVar5 + uVar7 * 0x18 + 0x30) = uVar4;
        } while (uVar9 != uVar11);
      }
    }
  }
  return uVar2;
}



/* Entry: 10444693c; end: 10444695b;  */

void FUN_10444693c(void)

{
  _objc_opt_self(&PTR_PTR_1129b4b70);
  return;
}



/* Entry: 10444695c; end: 104446973; -[SCOperaVideoSubRectConfig subrectPct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444695c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079dd8);
}



/* Entry: 104446974; end: 104446983; -[SCOperaVideoSubRectConfig videoAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104446974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079de0);
}



/* Entry: 104446984; end: 104446993; -[SCOperaVideoSubRectConfig cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104446984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079de8);
}



/* Entry: 104446994; end: 1044469a3; -[SCOperaVideoSubRectConfig referenceContainerAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104446994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079df0);
}



/* Entry: 1044469a4; end: 104446af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044469a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079dd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079de0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113079de8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113079df0) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104446af4; end: 104446ba3; -[SCOperaVideoSubRectConfig initWithSubrectPct:videoAspectRatio:cornerRadius:referenceContainerAspectRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_8;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_8 + _DAT_113079dd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(param_8 + _DAT_113079de0) = param_5;
  *(undefined8 *)(param_8 + _DAT_113079de8) = param_6;
  *(undefined8 *)(param_8 + _DAT_113079df0) = param_7;
  lStack_70 = param_8;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104446ba4; end: 104446c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446ba4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079dd8);
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar4 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar2;
  puVar1[2] = uVar4;
  uVar4 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113079de0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113079de8) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113079df0) = param_1[6];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104446c24; end: 104446c27; -[SCOperaVideoSubRectConfig copyWithZone:] */

void FUN_104446c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104446c28; end: 104446c43; -[SCOperaVideoSubRectConfig description] */

void FUN_104446c28(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104446c44; end: 104446cdf; -[SCOperaVideoSubRectConfig init] */

void FUN_104446c44(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaVideoSubRectConfigWrapper.swift",0x39,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104446c8c);
  (*pcVar1)();
}



/* Entry: 104446ce0; end: 104446cef; -[SCOperaAnimationConfig animationDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079e20));
  return;
}



/* Entry: 104446cf0; end: 104446cff; -[SCOperaAnimationConfig curve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079e28));
  return;
}



/* Entry: 104446d00; end: 104446dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446d00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079e20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079e28) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104446dc8; end: 104446e3f; -[SCOperaAnimationConfig initWithAnimationDurationSec:curve:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113079e20) = param_3;
  *(undefined8 *)(param_1 + _DAT_113079e28) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104446e40; end: 104446e6f;  */

void FUN_104446e40(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104446e70(param_1);
  return;
}



/* Entry: 104446e70; end: 104446f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104446e70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar6 = *param_1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar6);
  }
  *(undefined **)(unaff_x20 + _DAT_113079e20) = puVar2;
  if (*(char *)(param_1 + 6) == '\x01') {
    plVar3 = (long *)0x0;
  }
  else {
    uVar7 = param_1[4];
    uVar6 = param_1[5];
    uVar9 = param_1[2];
    uVar8 = param_1[3];
    lVar4 = 0;
    func_0x000104447358();
    lVar5 = lVar4;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar5 + _DAT_113079e58);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar5 + _DAT_113079e60);
    *puVar1 = uVar7;
    puVar1[1] = uVar6;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113079e28) = plVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104446f74; end: 104446f77; -[SCOperaAnimationConfig copyWithZone:] */

void FUN_104446f74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104446f78; end: 104446fbb; -[SCOperaAnimationConfig description] */

void FUN_104446f78(undefined8 param_1)

{
  undefined1 auStack_58 [56];
  
  _objc_retain();
  func_0x000104447070(auStack_58);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104446fbc; end: 104447037; -[SCOperaAnimationConfig init] */

void FUN_104446fbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaAnimationConfigWrapper.swift",0x36,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104447004);
  (*pcVar1)();
}



/* Entry: 104447038; end: 104447107; -[SCOperaAnimationConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447038(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113079e20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079e28));
  return;
}



/* Entry: 104447108; end: 104447127;  */

void FUN_104447108(void)

{
  _objc_opt_self(&PTR_PTR_1129b4d28);
  return;
}



/* Entry: 104447128; end: 10444713b; -[SCOperaAnimationCurve controlPoint1] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104447128(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113079e58);
}



/* Entry: 10444713c; end: 104447153; -[SCOperaAnimationCurve controlPoint2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10444713c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113079e60);
}



/* Entry: 104447154; end: 1044471c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044471c8; end: 1044471cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044471c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044471cc; end: 104447247; -[SCOperaAnimationCurve initWithControlPoint1:controlPoint2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044471cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_5 + _DAT_113079e58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_5 + _DAT_113079e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104447248; end: 1044472bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044472bc; end: 1044472bf; -[SCOperaAnimationCurve copyWithZone:] */

void FUN_1044472bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044472c0; end: 1044472db; -[SCOperaAnimationCurve description] */

void FUN_1044472c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044472dc; end: 104447377; -[SCOperaAnimationCurve init] */

void FUN_1044472dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaAnimationCurveWrapper.swift",0x35,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104447324);
  (*pcVar1)();
}



/* Entry: 104447378; end: 10444737b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444737c; end: 10444738b; -[SCOperaTransitionConfig direction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444737c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079e90));
  return;
}



/* Entry: 10444738c; end: 10444739b; -[SCOperaTransitionConfig animationConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444738c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079e98));
  return;
}



/* Entry: 10444739c; end: 104447463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444739c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079e90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079e98) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104447464; end: 10444757f; -[SCOperaTransitionConfig initWithDirection:animationConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113079e90) = param_3;
  *(undefined8 *)(param_1 + _DAT_113079e98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104447580; end: 104447583; -[SCOperaTransitionConfig copyWithZone:] */

void FUN_104447580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104447584; end: 1044475c7; -[SCOperaTransitionConfig description] */

void FUN_104447584(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  _objc_retain();
  FUN_10444767c(auStack_68);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044475c8; end: 104447643; -[SCOperaTransitionConfig init] */

void FUN_1044475c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaTransitionConfigWrapper.swift",0x37,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104447610);
  (*pcVar1)();
}



/* Entry: 104447644; end: 10444767b; -[SCOperaTransitionConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447644(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113079e90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079e98));
  return;
}



/* Entry: 10444767c; end: 10444776f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444767c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar3 = *(long *)(param_2 + _DAT_113079e90);
  if (*(char *)(lVar3 + _DAT_113079ef8) == '\x01') {
    puVar4 = (undefined8 *)(lVar3 + _DAT_113079f00);
    if (*(char *)(puVar4 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10444776c);
      (*pcVar1)();
    }
    uVar5 = 1;
  }
  else {
    puVar4 = (undefined8 *)(lVar3 + _DAT_113079f08);
    if (*(char *)(puVar4 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104447770);
      (*pcVar1)();
    }
    uVar5 = 0;
  }
  uVar6 = *puVar4;
  uVar2 = *(undefined8 *)(param_2 + _DAT_113079e98);
  _objc_retain(uVar2);
  func_0x000104447070(&uStack_88);
  _objc_release(uVar2);
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar5;
  param_1[2] = uStack_88;
  *(undefined1 *)(param_1 + 3) = uStack_80;
  param_1[5] = uStack_70;
  param_1[4] = uStack_78;
  param_1[7] = uStack_60;
  param_1[6] = uStack_68;
  *(undefined1 *)(param_1 + 8) = uStack_58;
  return;
}



/* Entry: 104447770; end: 10444778f;  */

void FUN_104447770(void)

{
  _objc_opt_self(&PTR_PTR_1129b4ec8);
  return;
}



/* Entry: 104447790; end: 104447877; -[SCOperaPageTransitionConfig transitionConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447790(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079ec8);
  FUN_104447770(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104447878; end: 1044478e3; -[SCOperaPageTransitionConfig initWithTransitionConfigs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_104447770(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  *(undefined8 *)(param_1 + _DAT_113079ec8) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044478e4; end: 104447913;  */

void FUN_1044478e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104447914(param_1);
  return;
}



/* Entry: 104447914; end: 104447c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447914(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  
  _swift_getObjectType();
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104444420(0,lVar16,0);
    puVar14 = puStack_a0;
    lVar6 = 0;
    FUN_104447770();
    puVar15 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar17 = puVar15[-2];
      cVar5 = *(char *)(puVar15 + -1);
      uVar18 = *puVar15;
      cVar3 = *(char *)(puVar15 + 1);
      uVar21 = puVar15[2];
      uVar22 = puVar15[3];
      uVar19 = puVar15[4];
      uVar20 = puVar15[5];
      cVar4 = *(char *)(puVar15 + 6);
      lVar7 = lVar6;
      _objc_allocWithZone();
      lVar8 = 0;
      FUN_1044486f8();
      lVar9 = lVar8;
      _objc_allocWithZone();
      if (cVar5 == '\x01') {
        *(undefined1 *)(lVar9 + _DAT_113079ef8) = 1;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113079f08);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113079f00);
        *puVar1 = uVar17;
        *(undefined1 *)(puVar1 + 1) = 0;
        plVar11 = &lStack_b0;
        lStack_b0 = lVar9;
        lStack_a8 = lVar8;
      }
      else {
        *(undefined1 *)(lVar9 + _DAT_113079ef8) = 0;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113079f08);
        *puVar1 = uVar17;
        *(undefined1 *)(puVar1 + 1) = 0;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113079f00);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        plVar11 = &lStack_100;
        lStack_100 = lVar9;
        lStack_f8 = lVar8;
      }
      _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
      *(long **)(lVar7 + _DAT_113079e90) = plVar11;
      lVar8 = 0;
      FUN_104447108();
      lVar9 = lVar8;
      _objc_allocWithZone();
      puVar10 = (undefined *)0x0;
      if (cVar3 != '\x01') {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_allocWithZone();
        func_0x00010c00e360(uVar18);
      }
      *(undefined **)(lVar9 + _DAT_113079e20) = puVar10;
      if (cVar4 == '\x01') {
        plVar11 = (long *)0x0;
      }
      else {
        lVar12 = 0;
        func_0x000104447358();
        lVar13 = lVar12;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar13 + _DAT_113079e58);
        *puVar1 = uVar21;
        puVar1[1] = uVar22;
        puVar1 = (undefined8 *)(lVar13 + _DAT_113079e60);
        *puVar1 = uVar19;
        puVar1[1] = uVar20;
        plVar11 = &lStack_f0;
        lStack_f0 = lVar13;
        lStack_e8 = lVar12;
        _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
      }
      *(long **)(lVar9 + _DAT_113079e28) = plVar11;
      plVar11 = &lStack_c0;
      lStack_c0 = lVar9;
      lStack_b8 = lVar8;
      _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
      *(long **)(lVar7 + _DAT_113079e98) = plVar11;
      plVar11 = &lStack_d0;
      lStack_d0 = lVar7;
      lStack_c8 = lVar6;
      _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar14 + 0x10);
      puStack_a0 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
        func_0x000104444420(1 < *(ulong *)(puVar14 + 0x18),uVar2 + 1,1);
      }
      puVar14 = puStack_a0;
      puVar15 = puVar15 + 9;
      *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
      *(long **)(puStack_a0 + uVar2 * 8 + 0x20) = plVar11;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113079ec8) = puVar14;
  _objc_msgSendSuper2(auStack_e0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104447c1c; end: 104447c1f; -[SCOperaPageTransitionConfig copyWithZone:] */

void FUN_104447c1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104447c20; end: 104447c5b; -[SCOperaPageTransitionConfig description] */

void FUN_104447c20(undefined8 param_1)

{
  _objc_retain();
  FUN_104447ce8();
  _swift_bridgeObjectRelease();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104447c5c; end: 104447cd7; -[SCOperaPageTransitionConfig init] */

void FUN_104447c5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPageTransitionConfigWrapper.swift",0x3b,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104447ca4);
  (*pcVar1)();
}



/* Entry: 104447cd8; end: 104447ce7; -[SCOperaPageTransitionConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104447cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079ec8));
  return;
}



/* Entry: 104447ce8; end: 104447f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104447ce8(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar7 = *(ulong *)(param_2 + _DAT_113079ec8);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    uStack_90 = param_1;
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uStack_90 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x000104444458(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104447f88);
      (*pcVar3)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) <= (long)uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104447f6c);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar9;
        func_0x00010444415c(uVar9,uVar7);
      }
      lVar5 = *(long *)(uVar4 + _DAT_113079e90);
      if (*(char *)(lVar5 + _DAT_113079ef8) == '\x01') {
        puVar6 = (undefined8 *)(lVar5 + _DAT_113079f00);
        if (*(char *)(puVar6 + 1) == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104447f8c);
          (*pcVar3)();
        }
        uVar12 = 1;
      }
      else {
        puVar6 = (undefined8 *)(lVar5 + _DAT_113079f08);
        if (*(char *)(puVar6 + 1) == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104447f90);
          (*pcVar3)();
        }
        uVar12 = 0;
      }
      uVar11 = *puVar6;
      lVar10 = *(long *)(uVar4 + _DAT_113079e98);
      lVar5 = *(long *)(lVar10 + _DAT_113079e20);
      bVar1 = lVar5 == 0;
      if (bVar1) {
        _objc_retain(lVar10);
        _objc_release(uVar4);
        uVar15 = 0;
      }
      else {
        _objc_retain();
        _objc_retain();
        _objc_retain(lVar10);
        func_0x00010bf885a0(lVar5);
        _objc_release(lVar5);
        _objc_release(lVar5);
        _objc_release(uVar4);
        uVar15 = uStack_90;
      }
      lVar5 = *(long *)(lVar10 + _DAT_113079e28);
      if (lVar5 == 0) {
        uVar13 = 0;
        uVar14 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        uStack_88 = ((undefined8 *)(lVar5 + _DAT_113079e58))[1];
        uStack_90 = *(undefined8 *)(lVar5 + _DAT_113079e58);
        uVar14 = ((undefined8 *)(lVar5 + _DAT_113079e60))[1];
        uVar13 = *(undefined8 *)(lVar5 + _DAT_113079e60);
      }
      _objc_release(lVar10);
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x000104444458(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x20) = uVar11;
      uVar9 = uVar9 + 1;
      puVar2[uVar4 * 0x48 + 0x28] = uVar12;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x30) = uVar15;
      puVar2[uVar4 * 0x48 + 0x38] = bVar1;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x48) = uStack_88;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x40) = uStack_90;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x58) = uVar14;
      *(undefined8 *)(puVar2 + uVar4 * 0x48 + 0x50) = uVar13;
      puVar2[uVar4 * 0x48 + 0x60] = lVar5 == 0;
    } while (uVar8 != uVar9);
  }
  return puVar2;
}



/* Entry: 104447f90; end: 104447faf;  */

void FUN_104447f90(void)

{
  _objc_opt_self(&PTR_PTR_1129b4f98);
  return;
}



/* Entry: 104447fb0; end: 10444805b;  */

void FUN_104447fb0(void)

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



/* Entry: 10444805c; end: 10444809b;  */

void FUN_10444805c(undefined1 *param_1,long *param_2)

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



/* Entry: 10444809c; end: 104448103; -[SCOperaTransitionDirection description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444809c(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113079ef8) == '\x01') {
    if (*(char *)(param_1 + _DAT_113079f00 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044480cc);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_113079f08 + 8) == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104448104);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104448104; end: 10444814b; -[SCOperaTransitionDirection init] */

void FUN_104448104(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaTransitionDirectionWrapper.swift",0x3a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444814c);
  (*pcVar1)();
}



/* Entry: 10444814c; end: 10444816b; -[SCOperaTransitionDirection hash] */

void FUN_10444814c(void)

{
  FUN_10444816c();
  return;
}



/* Entry: 10444816c; end: 104448347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444816c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113079ef8));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113079f08) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113079f08);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113079f00) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113079f00);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104448348; end: 1044483c7; -[SCOperaTransitionDirection isEqual:] */

uint FUN_104448348(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104448244(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044483c8; end: 1044483cb; -[SCOperaTransitionDirection copyWithZone:] */

void FUN_1044483c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044483cc; end: 104448443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044483cc(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113079ef8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f08);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f00);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104448444; end: 104448537; +[SCOperaTransitionDirection fromDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113079ef8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113079f08);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113079f00);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104448538; end: 1044485b3; +[SCOperaTransitionDirection toDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113079ef8) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113079f08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113079f00);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044485b4; end: 10444861f; -[SCOperaTransitionDirection matchFrom:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044485b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113079ef8) != '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113079f08) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000104448614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113079f08));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104448620);
    (*pcVar1)();
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_113079f00) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001044485ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + _DAT_113079f00));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444861c);
  (*pcVar1)();
}



/* Entry: 104448620; end: 104448653;  */

void FUN_104448620(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104448654; end: 1044486f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448654(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar6 = param_1;
  FUN_1044486f8();
  lVar7 = lVar6;
  _objc_allocWithZone();
  bVar5 = param_2 == '\x01';
  plVar3 = alStack_40;
  lVar2 = param_1;
  lVar4 = 0;
  if (!bVar5) {
    lVar2 = 0;
    plVar3 = alStack_50;
    lVar4 = param_1;
  }
  *(bool *)(lVar7 + _DAT_113079ef8) = bVar5;
  plVar1 = (long *)(lVar7 + _DAT_113079f08);
  *plVar1 = lVar4;
  *(bool *)(plVar1 + 1) = bVar5;
  plVar1 = (long *)(lVar7 + _DAT_113079f00);
  *plVar1 = lVar2;
  *(bool *)(plVar1 + 1) = !bVar5;
  *plVar3 = lVar7;
  plVar3[1] = lVar6;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044486f8; end: 104448717;  */

void FUN_1044486f8(void)

{
  _objc_opt_self(&PTR_PTR_1129b5060);
  return;
}



/* Entry: 104448718; end: 10444887f;  */

int FUN_104448718(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104448794;
        goto LAB_104448778;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104448778:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104448794:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104448880; end: 1044488bf;  */

void FUN_104448880(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00020;
  _swift_getWitnessTable(&UNK_10dd00020,&UNK_11076ffa0);
  puRam0000000113079f38 = puVar1;
  return;
}



/* Entry: 1044488c0; end: 1044488cf; -[SCOperaMediaBundleAttribution viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044488c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079f40);
}



/* Entry: 1044488d0; end: 1044488df; -[SCOperaMediaBundleAttribution mediaContextType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044488d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079f48);
}



/* Entry: 1044488e0; end: 1044488f7; -[SCOperaMediaBundleAttribution pageInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044488e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079f50));
  return;
}



/* Entry: 1044488f8; end: 104448a5f; -[SCOperaMediaBundleAttribution initWithViewLocation:mediaContextType:pageInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044488f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113079f40) = param_3;
  *(undefined8 *)(param_1 + _DAT_113079f48) = param_4;
  *(undefined8 *)(param_1 + _DAT_113079f50) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104448a60; end: 104448a63; -[SCOperaMediaBundleAttribution copyWithZone:] */

void FUN_104448a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104448a64; end: 104448a7f; -[SCOperaMediaBundleAttribution description] */

void FUN_104448a64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104448a80; end: 104448afb; -[SCOperaMediaBundleAttribution init] */

void FUN_104448a80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaMediaBundleAttributionWrapper.swift",0x3d,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104448ac8);
  (*pcVar1)();
}



/* Entry: 104448afc; end: 104448b0b; -[SCOperaMediaBundleAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079f50));
  return;
}



/* Entry: 104448b0c; end: 104448b2b;  */

void FUN_104448b0c(void)

{
  _objc_opt_self(&PTR_PTR_1129b5130);
  return;
}



/* Entry: 104448b2c; end: 104448b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079f40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079f48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113079f50) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104448b30; end: 104448b3f; -[SCOperaMediaItemDescriptor mediaItemIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079f80));
  return;
}



/* Entry: 104448b40; end: 104448b4f; -[SCOperaMediaItemDescriptor mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104448b40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079f88);
}



/* Entry: 104448b50; end: 104448b5b; -[SCOperaMediaItemDescriptor encKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448b50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113079f90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113079f90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104448b5c; end: 104448b67; -[SCOperaMediaItemDescriptor encIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113079f98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113079f98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104448b68; end: 104448bbf;  */

void FUN_104448b68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104448bc0; end: 104448d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079f80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079f88) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f98);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}


