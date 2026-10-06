/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104453198; end: 1044531bf; -[SCOperaPlaybackAnalyticsEvent description] */

void FUN_104453198(void)

{
  _objc_retain();
  FUN_104453958();
  func_0x000104452c4c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044531c0; end: 104453207; -[SCOperaPlaybackAnalyticsEvent init] */

void FUN_1044531c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaPlaybackAnalyticsAPIDefines/OperaPlaybackAnalyticsEventWrapper.swift",0x49,2,0x3d
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104453208);
  (*pcVar1)();
}



/* Entry: 104453208; end: 10445323b; -[SCOperaPlaybackAnalyticsEvent hash] */

undefined8 FUN_104453208(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10445323c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10445323c; end: 1044533d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445323c(void)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11307ab00));
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab08))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11307ab08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar5 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11307ab10);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab18))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11307ab18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar5 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab20))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11307ab20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar5 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if ((char)((ulong *)(unaff_x20 + _DAT_11307ab28))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11307ab28);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044533d4; end: 10445360f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044533d4(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long unaff_x20;
  double dVar14;
  double dVar15;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar5 = &lStack_68;
    _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar3 = *(byte *)(unaff_x20 + _DAT_11307ab00);
      if (bVar3 != *(byte *)(lStack_68 + _DAT_11307ab00)) goto LAB_1044535e4;
      if (bVar3 < 2) {
        lVar8 = _DAT_11307ab18;
        if (bVar3 == 0) {
          uVar6 = ((ulong *)(unaff_x20 + _DAT_11307ab08))[1];
          uVar9 = ((ulong *)(lStack_68 + _DAT_11307ab08))[1];
          if (uVar6 == 0) {
            if (uVar9 == 0) goto LAB_1044534ac;
          }
          else if ((uVar9 != 0) &&
                  ((uVar10 = *(ulong *)(unaff_x20 + _DAT_11307ab08),
                   uVar10 == *(ulong *)(lStack_68 + _DAT_11307ab08) && uVar6 == uVar9 ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar10 & 1) != 0)))) {
LAB_1044534ac:
            bVar3 = *(byte *)(unaff_x20 + _DAT_11307ab10);
            bVar4 = *(byte *)(lStack_68 + _DAT_11307ab10);
            _objc_release();
            uVar12 = 0;
            if (bVar4 == 2) {
              uVar12 = (uint)(bVar3 == 2);
            }
            if ((bVar3 != 2) && (bVar4 != 2)) {
              uVar12 = (bVar3 ^ bVar4) ^ 1;
            }
            goto LAB_1044535ec;
          }
LAB_1044535e4:
          _objc_release();
          goto LAB_1044535e8;
        }
      }
      else {
        lVar8 = _DAT_11307ab20;
        if (bVar3 != 2) {
          dVar14 = *(double *)(unaff_x20 + _DAT_11307ab28);
          cVar1 = *(char *)((double *)(unaff_x20 + _DAT_11307ab28) + 1);
          dVar15 = *(double *)(lStack_68 + _DAT_11307ab28);
          cVar2 = *(char *)((double *)(lStack_68 + _DAT_11307ab28) + 1);
          _objc_release();
          if (cVar1 == '\x01') {
            uVar12 = (uint)(cVar2 == '\x01');
          }
          else {
            uVar12 = (uint)(dVar14 == dVar15 && cVar2 != '\x01');
          }
          goto LAB_1044535ec;
        }
      }
      lVar7 = ((long *)(unaff_x20 + lVar8))[1];
      lVar13 = ((long *)(lStack_68 + lVar8))[1];
      if (lVar7 != 0) {
        uVar12 = 0;
        if (lVar13 != 0) {
          lVar11 = *(long *)(unaff_x20 + lVar8);
          lVar8 = *(long *)(lStack_68 + lVar8);
          if (lVar11 == lVar8 && lVar7 == lVar13) {
            _objc_release();
            uVar12 = 1;
            goto LAB_1044535ec;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar11,lVar7,lVar8,lVar13,0);
          uVar12 = (uint)lVar11;
        }
        _objc_release(lStack_68);
        goto LAB_1044535ec;
      }
      _swift_bridgeObjectRetain(lVar13);
      _objc_release(lStack_68);
      if (lVar13 == 0) {
        uVar12 = 1;
        goto LAB_1044535ec;
      }
      _swift_bridgeObjectRelease(lVar13);
    }
  }
LAB_1044535e8:
  uVar12 = 0;
LAB_1044535ec:
  return uVar12 & 1;
}



/* Entry: 104453610; end: 10445368f; -[SCOperaPlaybackAnalyticsEvent isEqual:] */

uint FUN_104453610(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044533d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104453690; end: 104453697; -[SCOperaPlaybackAnalyticsEvent copyWithZone:] */

void FUN_104453690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104453698; end: 1044536d7; +[SCOperaPlaybackAnalyticsEvent isPlayingDidChangeWithPageId:isPlaying:] */

void FUN_104453698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x000104453a8c();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044536d8; end: 1044536db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044536d8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104453d7c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307ab00) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307ab08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11307ab10) = 2;
  plVar2 = (long *)(lVar5 + _DAT_11307ab18);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307ab20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307ab28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1044536dc; end: 1044536eb; +[SCOperaPlaybackAnalyticsEvent didReceivePauseRequestWithPageId:] */

void FUN_1044536dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x104453b4c)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044536ec; end: 1044536f7; +[SCOperaPlaybackAnalyticsEvent didReceiveResumeRequestWithPageId:] */

void FUN_1044536ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x104453c0c)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044536f8; end: 104453733;  */

void FUN_1044536f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104453734; end: 104453737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104453734(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  FUN_104453d7c();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab00) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11307ab10) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab28);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104453738; end: 10445374b; +[SCOperaPlaybackAnalyticsEvent playbackRateDidChangeWithPlaybackRate:] */

void FUN_104453738(void)

{
  FUN_104453ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445374c; end: 10445384b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445374c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307ab00);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_11307ab08))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10445383c);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_11307ab10) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10445384c);
        (*pcVar2)();
      }
      (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11307ab08),lVar3,
                 *(byte *)(unaff_x20 + _DAT_11307ab10) & 1);
    }
    else {
      if (((undefined8 *)(unaff_x20 + _DAT_11307ab18))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104453844);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307ab18));
    }
  }
  else if (bVar1 == 2) {
    if (((undefined8 *)(unaff_x20 + _DAT_11307ab20))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104453840);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307ab20));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307ab28) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104453848);
      (*pcVar2)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_11307ab28));
  }
  return;
}



/* Entry: 10445384c; end: 1044538bf; -[SCOperaPlaybackAnalyticsEvent matchIsPlayingDidChange:didReceivePauseRequest:didReceiveResumeRequest:playbackRateDidChange:] */

void FUN_10445384c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10445374c(FUN_104453f44,auStack_40,FUN_104453f8c,auStack_60,0x104453fa0,auStack_80,0x104453f94
                ,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1044538c0; end: 1044538f3;  */

void FUN_1044538c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044538f4; end: 104453947; -[SCOperaPlaybackAnalyticsEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044538f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ab08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ab18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ab20 + 8))
  ;
  return;
}



/* Entry: 104453948; end: 104453957;  */

ulong FUN_104453948(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104453958; end: 104453ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104453958(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_11307ab00);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = ((undefined8 *)(param_1 + _DAT_11307ab08))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104453a7c);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307ab10) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104453a8c);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(param_1 + _DAT_11307ab08);
      _swift_bridgeObjectRetain(lVar3);
      _objc_release(param_1);
    }
    else {
      lVar3 = ((undefined8 *)(param_1 + _DAT_11307ab18))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104453a84);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(param_1 + _DAT_11307ab18);
      _swift_bridgeObjectRetain(lVar3);
      _objc_release(param_1);
    }
  }
  else if (bVar1 == 2) {
    lVar3 = ((undefined8 *)(param_1 + _DAT_11307ab20))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104453a80);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11307ab20);
    _swift_bridgeObjectRetain(lVar3);
    _objc_release(param_1);
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307ab28) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104453a88);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11307ab28);
    _objc_release();
  }
  return uVar4;
}



/* Entry: 104453ccc; end: 104453d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104453ccc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  FUN_104453d7c();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab00) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11307ab10) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab28);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104453d7c; end: 104453d9b;  */

void FUN_104453d7c(void)

{
  _objc_opt_self(&PTR_PTR_1129b6b28);
  return;
}



/* Entry: 104453d9c; end: 104453f03;  */

int FUN_104453d9c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104453e18;
        goto LAB_104453dfc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104453dfc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104453e18:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104453f04; end: 104453f43;  */

void FUN_104453f04(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ab58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00d54;
  _swift_getWitnessTable(&UNK_10dd00d54,&UNK_110770bd8);
  puRam000000011307ab58 = puVar1;
  return;
}



/* Entry: 104453f44; end: 104453f8b;  */

void FUN_104453f44(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104453f8c; end: 104453fa3;  */

void FUN_104453f8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104453fa4; end: 1044540af;  */

void FUN_104453fa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044540b0; end: 1044540cf;  */

void FUN_1044540b0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044540d0; end: 1044540ef; -[SCOperaUILifecycleAnalyticsEvent description] */

void FUN_1044540d0(void)

{
  func_0x000104454c10();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044540f0; end: 104454137; -[SCOperaUILifecycleAnalyticsEvent init] */

void FUN_1044540f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaPlaybackAnalyticsAPIDefines/OperaUILifecycleAnalyticsEventWrapper.swift",0x4c,2,
             0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104454138);
  (*pcVar1)();
}



/* Entry: 104454138; end: 10445416b; -[SCOperaUILifecycleAnalyticsEvent hash] */

undefined8 FUN_104454138(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10445416c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10445416c; end: 104454437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445416c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11307ab60));
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab68))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307ab68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab70))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307ab70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab78))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307ab78);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ab80))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307ab80);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104454438; end: 1044544b7; -[SCOperaUILifecycleAnalyticsEvent isEqual:] */

uint FUN_104454438(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001044542cc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044544b8; end: 1044544bb; -[SCOperaUILifecycleAnalyticsEvent copyWithZone:] */

void FUN_1044544b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044544bc; end: 10445455f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044544bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307ab60) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ab68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ab70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ab78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ab80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 104454560; end: 1044546b3; +[SCOperaUILifecycleAnalyticsEvent pageDidStartWithPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104454560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab60) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab68);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044546b4; end: 10445480b; +[SCOperaUILifecycleAnalyticsEvent pageDidCloseWithPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044546b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab60) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab70);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445480c; end: 104454963; +[SCOperaUILifecycleAnalyticsEvent pageDidResumeWithPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445480c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab60) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab78);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104454964; end: 104454a13; +[SCOperaUILifecycleAnalyticsEvent pageDidPauseWithPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104454964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307ab60) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307ab80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104454a14; end: 104454aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104454a14(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307ab60);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((undefined8 *)(unaff_x20 + _DAT_11307ab68))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104454ae4);
        (*pcVar2)();
      }
      (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11307ab68));
    }
    else {
      if (((undefined8 *)(unaff_x20 + _DAT_11307ab70))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104454aec);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307ab70));
    }
  }
  else if (bVar1 == 2) {
    if (((undefined8 *)(unaff_x20 + _DAT_11307ab78))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104454ae8);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307ab78));
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_11307ab80))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104454af0);
      (*pcVar2)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_11307ab80));
  }
  return;
}



/* Entry: 104454af0; end: 104454b63; -[SCOperaUILifecycleAnalyticsEvent matchPageDidStart:pageDidClose:pageDidResume:pageDidPause:] */

void FUN_104454af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104454a14(FUN_104454e60,auStack_40,FUN_104454e9c,auStack_60,0x104454ea0,auStack_80,0x104454ea4
                ,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 104454b64; end: 104454b97;  */

void FUN_104454b64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104454b98; end: 104454bff; -[SCOperaUILifecycleAnalyticsEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104454b98(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ab68 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ab70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ab78 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ab80 + 8))
  ;
  return;
}



/* Entry: 104454c00; end: 104454c97;  */

ulong FUN_104454c00(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104454c98; end: 104454cb7;  */

void FUN_104454c98(void)

{
  _objc_opt_self(&PTR_PTR_1129b6c10);
  return;
}



/* Entry: 104454cb8; end: 104454e1f;  */

int FUN_104454cb8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104454d34;
        goto LAB_104454d18;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104454d18:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104454d34:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104454e20; end: 104454e5f;  */

void FUN_104454e20(void)

{
  undefined *puVar1;
  
  if (puRam000000011307abb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00e58;
  _swift_getWitnessTable(&UNK_10dd00e58,&UNK_110770cc0);
  puRam000000011307abb0 = puVar1;
  return;
}



/* Entry: 104454e60; end: 104454e63;  */

void FUN_104454e60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104454e64; end: 104454e9b;  */

void FUN_104454e64(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104454e9c; end: 104454ebb;  */

void FUN_104454e9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104454ebc; end: 104454f93;  */

void FUN_104454ebc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104454f94; end: 104454fb3;  */

void FUN_104454f94(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104454fb4; end: 104454ff3;  */

void FUN_104454fb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307abb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00f00;
  _swift_getWitnessTable(&UNK_10dd00f00,&UNK_110770db8);
  puRam000000011307abb8 = puVar1;
  return;
}



/* Entry: 104454ff4; end: 104455017;  */

undefined1  [16] FUN_104454ff4(void)

{
  return ZEXT816(0x110770db8);
}



/* Entry: 104455018; end: 1044550ef;  */

void FUN_104455018(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044550f0; end: 10445510f;  */

void FUN_1044550f0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104455110; end: 10445514f;  */

void FUN_104455110(void)

{
  undefined *puVar1;
  
  if (puRam000000011307abc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00fc8;
  _swift_getWitnessTable(&UNK_10dd00fc8,&UNK_110770e30);
  puRam000000011307abc0 = puVar1;
  return;
}



/* Entry: 104455150; end: 10445515f;  */

undefined1  [16] FUN_104455150(void)

{
  return ZEXT816(0x110770e30);
}



/* Entry: 104455160; end: 10445516f;  */

undefined1  [16] FUN_104455160(void)

{
  return ZEXT816(0x110770f28);
}



/* Entry: 104455170; end: 1044551cb; -[SCOperaPage properties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104455170(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307abc8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044551cc; end: 1044551cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044551cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307abc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044551d0; end: 10445524b; -[SCOperaPage initWithProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044551d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  *(undefined8 *)(param_1 + _DAT_11307abc8) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445524c; end: 104455297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445524c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307abc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104455298; end: 10445529b; -[SCOperaPage copyWithZone:] */

void FUN_104455298(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10445529c; end: 1044552b7; -[SCOperaPage description] */

void FUN_10445529c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044552b8; end: 1044552ff; -[SCOperaPage init] */

void FUN_1044552b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OperaPage/OperaPageWrapper.swift",0x20,2,0x22
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104455300);
  (*pcVar1)();
}



/* Entry: 104455300; end: 10445531b; +[SCOperaPageBuilder operaPage] */

void FUN_104455300(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445531c; end: 10445535b; +[SCOperaPageBuilder operaPageWithExistingOperaPage:] */

void FUN_10445531c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10445560c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445535c; end: 1044553c7; -[SCOperaPageBuilder withProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445535c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307abd0);
  *(undefined8 *)(param_1 + _DAT_11307abd0) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044553c8; end: 104455483; -[SCOperaPageBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044553c8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  
  lVar5 = *(long *)(param_1 + _DAT_11307abd0);
  if (lVar5 != 0) {
    FUN_10445584c();
    lVar3 = param_1;
    _objc_allocWithZone();
    *(long *)(lVar3 + _DAT_11307abc8) = lVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_48 = lVar3;
    lStack_40 = param_1;
    _swift_bridgeObjectRetain(lVar5);
    _objc_msgSendSuper2(&lStack_48,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  _objc_retain();
  uVar4 = 0x69747265706f7270;
  FUN_1044556a4(0x69747265706f7270,0xea00000000007365);
  _swift_willThrow();
  _swift_unexpectedError(uVar4,"OperaPage/OperaPageWrapper.swift",0x20,1,0x4b);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104455484);
  (*pcVar2)();
}



/* Entry: 104455484; end: 10445556b; -[SCOperaPageBuilder safeBuildAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104455484(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  
  lVar5 = *(long *)(param_1 + _DAT_11307abd0);
  if (lVar5 == 0) {
    _objc_retain();
    uVar3 = 0x69747265706f7270;
    FUN_1044556a4(0x69747265706f7270,0xea00000000007365);
    _swift_willThrow();
    _objc_release(param_1);
    if (param_3 == (undefined8 *)0x0) {
      _swift_errorRelease(uVar3);
    }
    else {
      uVar4 = uVar3;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _swift_errorRelease(uVar3);
      _objc_autorelease(uVar4);
      *param_3 = uVar4;
    }
  }
  else {
    FUN_10445584c();
    lVar2 = param_1;
    _objc_allocWithZone();
    *(long *)(lVar2 + _DAT_11307abc8) = lVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_48 = lVar2;
    lStack_40 = param_1;
    _swift_bridgeObjectRetain(lVar5);
    _objc_msgSendSuper2(&lStack_48,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445556c; end: 1044555b3; -[SCOperaPageBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445556c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307abd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044555b4; end: 1044555b7;  */

void FUN_1044555b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044555b8; end: 1044555c7; -[SCOperaPageBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044555b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307abd0));
  return;
}



/* Entry: 1044555c8; end: 1044555fb;  */

void FUN_1044555c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044555fc; end: 10445560b; -[SCOperaPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044555fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307abc8));
  return;
}



/* Entry: 10445560c; end: 1044556a3;  */

/* WARNING: Possible PIC construction at 0x000104455640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104455644) */

void FUN_10445560c(long param_1)

{
  if (param_1 == 0) {
    func_0x00010445586c();
    _objc_allocWithZone();
  }
  else {
    func_0x00010445586c();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044556a4; end: 10445584b;  */

undefined * FUN_1044556a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 10445584c; end: 10445588b;  */

void FUN_10445584c(void)

{
  _objc_opt_self(&PTR_PTR_1129b6cf0);
  return;
}



/* Entry: 10445588c; end: 104455897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445588c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307abc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104455898; end: 1044558d7;  */

void FUN_104455898(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd010c0;
  _swift_getWitnessTable(&UNK_10dd010c0,&UNK_110770f88);
  puRam000000011307ac28 = puVar1;
  return;
}



/* Entry: 1044558d8; end: 1044558db;  */

void FUN_1044558d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01160;
  _swift_getWitnessTable(&UNK_10dd01160,&UNK_110770fa8);
  puRam000000011307ac30 = puVar1;
  return;
}



/* Entry: 1044558dc; end: 10445591b;  */

void FUN_1044558dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01160;
  _swift_getWitnessTable(&UNK_10dd01160,&UNK_110770fa8);
  puRam000000011307ac30 = puVar1;
  return;
}



/* Entry: 10445591c; end: 10445591f;  */

void FUN_10445591c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01200;
  _swift_getWitnessTable(&UNK_10dd01200,&UNK_110770fc8);
  puRam000000011307ac38 = puVar1;
  return;
}



/* Entry: 104455920; end: 10445595f;  */

void FUN_104455920(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01200;
  _swift_getWitnessTable(&UNK_10dd01200,&UNK_110770fc8);
  puRam000000011307ac38 = puVar1;
  return;
}



/* Entry: 104455960; end: 104455963;  */

void FUN_104455960(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd012a0;
  _swift_getWitnessTable(&UNK_10dd012a0,&UNK_110770fe8);
  puRam000000011307ac40 = puVar1;
  return;
}



/* Entry: 104455964; end: 1044559a3;  */

void FUN_104455964(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd012a0;
  _swift_getWitnessTable(&UNK_10dd012a0,&UNK_110770fe8);
  puRam000000011307ac40 = puVar1;
  return;
}



/* Entry: 1044559a4; end: 1044559a7;  */

void FUN_1044559a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01340;
  _swift_getWitnessTable(&UNK_10dd01340,&UNK_110771008);
  puRam000000011307ac48 = puVar1;
  return;
}



/* Entry: 1044559a8; end: 1044559e7;  */

void FUN_1044559a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01340;
  _swift_getWitnessTable(&UNK_10dd01340,&UNK_110771008);
  puRam000000011307ac48 = puVar1;
  return;
}



/* Entry: 1044559e8; end: 1044559eb;  */

void FUN_1044559e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd013e0;
  _swift_getWitnessTable(&UNK_10dd013e0,&UNK_110771028);
  puRam000000011307ac50 = puVar1;
  return;
}



/* Entry: 1044559ec; end: 104455a2b;  */

void FUN_1044559ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd013e0;
  _swift_getWitnessTable(&UNK_10dd013e0,&UNK_110771028);
  puRam000000011307ac50 = puVar1;
  return;
}



/* Entry: 104455a2c; end: 104455a2f;  */

void FUN_104455a2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01480;
  _swift_getWitnessTable(&UNK_10dd01480,&UNK_110771048);
  puRam000000011307ac58 = puVar1;
  return;
}



/* Entry: 104455a30; end: 104455a6f;  */

void FUN_104455a30(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01480;
  _swift_getWitnessTable(&UNK_10dd01480,&UNK_110771048);
  puRam000000011307ac58 = puVar1;
  return;
}



/* Entry: 104455a70; end: 104455af3;  */

void FUN_104455a70(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104455af4; end: 104455c0b;  */

undefined1  [16] FUN_104455af4(void)

{
  return ZEXT816(0x110770f88);
}



/* Entry: 104455c0c; end: 104455e07;  */

void FUN_104455c0c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 104455e08; end: 104455e1b;  */

bool FUN_104455e08(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104455e1c; end: 104455ef3;  */

void FUN_104455e1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104455ef4; end: 104455f13;  */

void FUN_104455ef4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104455f14; end: 104455f53;  */

void FUN_104455f14(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01690;
  _swift_getWitnessTable(&UNK_10dd01690,&UNK_1107711d0);
  puRam000000011307ac60 = puVar1;
  return;
}


