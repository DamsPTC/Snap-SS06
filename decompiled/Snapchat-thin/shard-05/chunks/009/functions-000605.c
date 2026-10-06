/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104335da0; end: 104335dd3;  */

void FUN_104335da0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104335dd4; end: 104335df7; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope50SCDiscoverFeedUpNextV2PlaybackSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f370));
  return;
}



/* Entry: 104335df8; end: 104335ea3;  */

void FUN_104335df8(void)

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



/* Entry: 104335ea4; end: 104335edb;  */

void FUN_104335ea4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104335edc; end: 104335f0f;  */

undefined8 FUN_104335edc(undefined8 param_1)

{
  (*(code *)(undefined *)0x104335568)();
  return param_1;
}



/* Entry: 104335f10; end: 104335f43; -[SCDiscoverFeedUpNextV2PlaybackEvent description] */

void FUN_104335f10(void)

{
  undefined1 auStack_60 [80];
  
  FUN_104336674(auStack_60);
  FUN_104335edc(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104335f44; end: 104335f8b; -[SCDiscoverFeedUpNextV2PlaybackEvent init] */

void FUN_104335f44(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedUpNextV2PlaybackSessionScope/SCDiscoverFeedUpNextV2PlaybackEventWrapper.swift"
             ,0x5b,2,0x81,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104335f8c);
  (*pcVar1)();
}



/* Entry: 104335f8c; end: 104335f93; -[SCDiscoverFeedUpNextV2PlaybackEvent copyWithZone:] */

void FUN_104335f8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104335f94; end: 1043360f7; +[SCDiscoverFeedUpNextV2PlaybackEvent playbackOpenEventWithInitialDFStories:initialStoryIds:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:triggeringFeedType:presentingViewController:] */

void FUN_104335f94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  __Block_copy();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000101c84db4(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_4,PTR___sSSN_11034da80);
  uVar1 = 0;
  func_0x000101c84db4();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5);
  if (param_8 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar4 = &UNK_11075afe0;
    uVar1 = 0x18;
    _swift_allocObject(&UNK_11075afe0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_8;
    uVar3 = 0x104336f8c;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  _objc_retain(param_12);
  lVar2 = param_3;
  func_0x0001043368b8(param_3,param_4,param_5,param_6,param_7,uVar3,puVar4,param_9,uVar1,param_10);
  _swift_bridgeObjectRelease(uVar1);
  func_0x00010140d504(uVar3,puVar4);
  _objc_release(param_12);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043360f8; end: 1043360fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043360f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104336d40();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306f3c8) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306f3d0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f3d8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f3e0) = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f3e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f3f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f3f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f400);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f408);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306f410) = 0;
  *(long *)(lVar5 + _DAT_11306f418) = param_1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f420);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f428) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306f430) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f438) = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f440);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1043360fc; end: 10433615f; +[SCDiscoverFeedUpNextV2PlaybackEvent paginationEventWithOperaPresenter:lastPlaylistIndexBeforeUpNext:playbackDataProvider:] */

void FUN_1043360fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_3;
  FUN_104336a84(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104336160; end: 1043361c3; +[SCDiscoverFeedUpNextV2PlaybackEvent boostEventWithBoostedStory:operaPresenter:triggeringAction:] */

void FUN_104336160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  uVar1 = param_3;
  func_0x000104336be0(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043361c4; end: 10433638f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043361c4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306f3c8) == '\0') {
    if (*(long *)(unaff_x20 + _DAT_11306f3d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336368);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f3e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336374);
      (*pcVar1)();
    }
    if (*(char *)((undefined4 *)(unaff_x20 + _DAT_11306f3e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336380);
      (*pcVar1)();
    }
    if (*(char *)((undefined4 *)(unaff_x20 + _DAT_11306f3f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336388);
      (*pcVar1)();
    }
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306f400))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10433638c);
      (*pcVar1)();
    }
    if (*(char *)((undefined4 *)(unaff_x20 + _DAT_11306f408) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336390);
      (*pcVar1)();
    }
    (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11306f3d0),
               *(long *)(unaff_x20 + _DAT_11306f3d8),*(long *)(unaff_x20 + _DAT_11306f3e0),
               *(undefined4 *)(unaff_x20 + _DAT_11306f3e8),
               *(undefined4 *)(unaff_x20 + _DAT_11306f3f0),
               *(undefined8 *)(unaff_x20 + _DAT_11306f3f8),
               ((undefined8 *)(unaff_x20 + _DAT_11306f3f8))[1],
               *(undefined8 *)(unaff_x20 + _DAT_11306f400),lVar2,
               *(undefined4 *)(unaff_x20 + _DAT_11306f408));
  }
  else if (*(char *)(unaff_x20 + _DAT_11306f3c8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11306f418) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336364);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306f420) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336370);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f428) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10433637c);
      (*pcVar1)();
    }
    (*param_3)(*(long *)(unaff_x20 + _DAT_11306f418),*(undefined8 *)(unaff_x20 + _DAT_11306f420));
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11306f430) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10433636c);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f438) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336378);
      (*pcVar1)();
    }
    if (*(char *)((undefined4 *)(unaff_x20 + _DAT_11306f440) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104336384);
      (*pcVar1)();
    }
    (*param_5)(*(long *)(unaff_x20 + _DAT_11306f430),*(long *)(unaff_x20 + _DAT_11306f438),
               *(undefined4 *)(unaff_x20 + _DAT_11306f440));
  }
  return;
}



/* Entry: 104336390; end: 1043363f3; -[SCDiscoverFeedUpNextV2PlaybackEvent matchPlaybackOpenEvent:paginationEvent:boostEvent:] */

void FUN_104336390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1043361c4(0x104336f08,auStack_40,FUN_104336f40,auStack_60,0x104336f58,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 1043363f4; end: 10433657f;  */

void FUN_1043363f4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long in_stack_00000018;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000101c84db4(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  }
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,PTR___sSSN_11034da80);
  uVar1 = 0;
  func_0x000101c84db4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,uVar1);
  ppuVar2 = (undefined **)0x0;
  if (param_6 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f11160;
    puStack_78 = &UNK_11075afa8;
    ppuVar2 = &puStack_90;
    lStack_70 = param_6;
    uStack_68 = param_7;
    __Block_copy(ppuVar2);
    uVar1 = uStack_68;
    _swift_retain(param_7);
    _swift_release(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8,param_9);
  (**(code **)(in_stack_00000018 + 0x10))
            (in_stack_00000018,param_1,param_2,param_3,param_4,param_5,ppuVar2,param_8,param_10);
  _objc_release(param_8);
  __Block_release(ppuVar2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 104336580; end: 1043365b3;  */

void FUN_104336580(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043365b4; end: 104336673; -[SCDiscoverFeedUpNextV2PlaybackEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043365b4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f3d0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f3d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f3e0));
  func_0x00010140d504(*(undefined8 *)(param_1 + _DAT_11306f3f8),
                      ((undefined8 *)(param_1 + _DAT_11306f3f8))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f400 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f410));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f418));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f428));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f430));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306f438));
  return;
}



/* Entry: 104336674; end: 104336a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104336674(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong uVar8;
  long unaff_x28;
  
  if (*(char *)(param_2 + _DAT_11306f3c8) == '\0') {
    lVar5 = *(long *)(param_2 + _DAT_11306f3d8);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104336890);
      (*pcVar3)();
    }
    uVar6 = *(ulong *)(param_2 + _DAT_11306f3e0);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10433689c);
      (*pcVar3)();
    }
    if (*(char *)((undefined4 *)(param_2 + _DAT_11306f3e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368a8);
      (*pcVar3)();
    }
    if (*(char *)((undefined4 *)(param_2 + _DAT_11306f3f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368b0);
      (*pcVar3)();
    }
    unaff_x23 = ((long *)(param_2 + _DAT_11306f400))[1];
    if (unaff_x23 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368b4);
      (*pcVar3)();
    }
    if ((char)((uint *)(param_2 + _DAT_11306f408))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368b8);
      (*pcVar3)();
    }
    lVar7 = *(long *)(param_2 + _DAT_11306f3d0);
    uVar1 = *(undefined4 *)(param_2 + _DAT_11306f3e8);
    uVar2 = *(undefined4 *)(param_2 + _DAT_11306f3f0);
    unaff_x24 = *(long *)(param_2 + _DAT_11306f3f8);
    unaff_x25 = ((long *)(param_2 + _DAT_11306f3f8))[1];
    lVar4 = *(long *)(param_2 + _DAT_11306f400);
    uVar8 = (ulong)*(uint *)(param_2 + _DAT_11306f408);
    unaff_x26 = *(long *)(param_2 + _DAT_11306f410);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar6);
    func_0x0001018c4fb0(unaff_x24,unaff_x25);
    unaff_x28 = CONCAT44(uVar2,uVar1);
    _swift_bridgeObjectRetain(unaff_x23);
    _objc_retain(unaff_x26);
  }
  else if (*(char *)(param_2 + _DAT_11306f3c8) == '\x01') {
    lVar7 = *(long *)(param_2 + _DAT_11306f418);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10433688c);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_11306f420))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104336898);
      (*pcVar3)();
    }
    uVar6 = *(ulong *)(param_2 + _DAT_11306f428);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368a4);
      (*pcVar3)();
    }
    lVar5 = *(long *)(param_2 + _DAT_11306f420);
    _swift_unknownObjectRetain(lVar7);
    _swift_unknownObjectRetain(uVar6);
    uVar8 = 0x4000000000000000;
    lVar4 = extraout_x8;
  }
  else {
    lVar7 = *(long *)(param_2 + _DAT_11306f430);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104336894);
      (*pcVar3)();
    }
    lVar5 = *(long *)(param_2 + _DAT_11306f438);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368a0);
      (*pcVar3)();
    }
    if ((char)((uint *)(param_2 + _DAT_11306f440))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043368ac);
      (*pcVar3)();
    }
    uVar6 = (ulong)*(uint *)(param_2 + _DAT_11306f440);
    _objc_retain(lVar7);
    _swift_unknownObjectRetain(lVar5);
    uVar8 = 0x8000000000000000;
    lVar4 = extraout_x8_00;
  }
  *param_1 = lVar7;
  param_1[1] = lVar5;
  param_1[2] = uVar6;
  param_1[3] = unaff_x28;
  param_1[4] = unaff_x24;
  param_1[5] = unaff_x25;
  param_1[6] = lVar4;
  param_1[7] = unaff_x23;
  param_1[8] = uVar8;
  param_1[9] = unaff_x26;
  return;
}



/* Entry: 104336a84; end: 104336d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104336a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104336d40();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306f3c8) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306f3d0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f3d8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f3e0) = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f3e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f3f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f3f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f400);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f408);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306f410) = 0;
  *(long *)(lVar5 + _DAT_11306f418) = param_1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306f420);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f428) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306f430) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f438) = 0;
  puVar1 = (undefined4 *)(lVar5 + _DAT_11306f440);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104336d40; end: 104336d5f;  */

void FUN_104336d40(void)

{
  _objc_opt_self(&PTR_PTR_11299e088);
  return;
}



/* Entry: 104336d60; end: 104336ec7;  */

int FUN_104336d60(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104336ddc;
        goto LAB_104336dc0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104336dc0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104336ddc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104336ec8; end: 104336f3f;  */

void FUN_104336ec8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcebecc;
  _swift_getWitnessTable(&UNK_10dcebecc,&UNK_11075af98);
  puRam000000011306f470 = puVar1;
  return;
}



/* Entry: 104336f40; end: 104336f93;  */

void FUN_104336f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104336f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1,param_2,param_3);
  return;
}



/* Entry: 104336f94; end: 10433701f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104336f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f478);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f480);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306f488) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104337020; end: 10433703f;  */

void FUN_104337020(void)

{
  _objc_opt_self(&PTR_PTR_11299e1c0);
  return;
}



/* Entry: 104337040; end: 1043370d7; -[SCAddFriendsTrayLoggingInfo initWithSource:placement:impressionCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f478);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f480);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  *(undefined8 *)(param_1 + _DAT_11306f488) = param_5;
  FUN_104337020();
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043370d8; end: 104337133; -[SCAddFriendsTrayLoggingInfo init] */

void FUN_1043370d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AddFriendsTrayScope.AddFriendsTrayLoggingInfo",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104337104);
  (*pcVar1)();
}



/* Entry: 104337134; end: 104337173; -[SCAddFriendsTrayLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337134(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f478 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306f480 + 8))
  ;
  return;
}



/* Entry: 104337174; end: 104337183; -[AddFriendsTrayScope trayStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f490));
  return;
}



/* Entry: 104337184; end: 1043371af; -[AddFriendsTrayScope init] */

void FUN_104337184(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AddFriendsTrayScope.AddFriendsTrayScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043371b0);
  (*pcVar1)();
}



/* Entry: 1043371b0; end: 104337247; -[AddFriendsTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043371b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f490));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f4a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306f4a8));
  return;
}



/* Entry: 104337248; end: 104337383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104337248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *aplStack_88 [2];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x00010020d794();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f490;
  puVar5 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_3);
  _objc_retain();
  _objc_retain();
  func_0x00010bfee200();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  *(bool *)(lVar4 + _DAT_11306f498) = *(char *)(param_1 + _DAT_11306f540) == '\x01';
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306f4a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306f4a8) = param_4;
  plVar6 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  _objc_release(param_1);
  aplStack_88[0] = plVar6;
  func_0x00010008a7c8(&uStack_78,aplStack_88);
  func_0x000100083b20(aplStack_88);
  _swift_release(uStack_78);
  _swift_unknownObjectRelease(aplStack_88[0]);
  return plVar6;
}



/* Entry: 104337384; end: 104337427; -[_TtC19AddFriendsTrayScope27AddFriendsTrayScopeServices buildWithType:urlString:loggingInfo:] */

void FUN_104337384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104337248(param_3,param_4,param_2,param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104337428; end: 104337453; -[_TtC19AddFriendsTrayScope27AddFriendsTrayScopeServices init] */

void FUN_104337428(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AddFriendsTrayScope.AddFriendsTrayScopeServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104337454);
  (*pcVar1)();
}



/* Entry: 104337454; end: 104337457;  */

void FUN_104337454(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104337458; end: 10433748b;  */

void FUN_104337458(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433748c; end: 1043374c3; -[_TtC19AddFriendsTrayScope27AddFriendsTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433748c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f4b8));
  return;
}



/* Entry: 1043374c4; end: 10433756f;  */

void FUN_1043374c4(void)

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



/* Entry: 104337570; end: 104337573;  */

void FUN_104337570(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec020;
  _swift_getWitnessTable(&UNK_10dcec020,&UNK_11075b210);
  puRam000000011306f538 = puVar1;
  return;
}



/* Entry: 104337574; end: 1043375b3;  */

void FUN_104337574(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec020;
  _swift_getWitnessTable(&UNK_10dcec020,&UNK_11075b210);
  puRam000000011306f538 = puVar1;
  return;
}



/* Entry: 1043375b4; end: 1043375cb;  */

void FUN_1043375b4(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1043375cc; end: 10433772f;  */

undefined8 * FUN_1043375cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 104337730; end: 1043379af;  */

int FUN_104337730(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1043379b0; end: 1043379f7; -[SCAddFriendsTrayStatus description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043379b0(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_11306f548)) && (*(long *)(param_1 + _DAT_11306f550 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1043379f8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043379f8; end: 104337a3f; -[SCAddFriendsTrayStatus init] */

void FUN_1043379f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AddFriendsTrayScope/AddFriendsTrayStatusWrapper.swift",0x35,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104337a40);
  (*pcVar1)();
}



/* Entry: 104337a40; end: 104337a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337a40(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306f548) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f550);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104337a48; end: 104337a57; +[SCAddFriendsTrayStatus dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337a48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11306f548) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306f550);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337a58; end: 104337ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337a58(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306f548) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f550);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104337ab4; end: 104337abb; +[SCAddFriendsTrayStatus success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337ab4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11306f548) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306f550);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337abc; end: 104337b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337abc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11306f548) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306f550);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337b1c; end: 104337b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306f548) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 104337b94; end: 104337c13; +[SCAddFriendsTrayStatus learnMoreWithUrlString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11306f548) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11306f550);
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



/* Entry: 104337c14; end: 104337cc3; -[SCAddFriendsTrayStatus matchDismiss:success:learnMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337c14(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_11306f548) == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  }
  else {
    if (*(char *)(param_1 + _DAT_11306f548) != '\x01') {
      lVar1 = ((undefined8 *)(param_1 + _DAT_11306f550))[1];
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_11306f550);
        _objc_retain();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
        (**(code **)(param_5 + 0x10))(param_5,uVar2);
        _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x104337cc4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000104337c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 104337cc4; end: 104337cc7;  */

void FUN_104337cc4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104337cc8; end: 104337cdb; -[SCAddFriendsTrayStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306f550 + 8))
  ;
  return;
}



/* Entry: 104337cdc; end: 104337d5f;  */

void FUN_104337cdc(void)

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



/* Entry: 104337d60; end: 104337d7f;  */

void FUN_104337d60(undefined1 *param_1,long *param_2)

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



/* Entry: 104337d80; end: 104337d9b; -[SCAddFriendsTrayType description] */

void FUN_104337d80(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337d9c; end: 104337de3; -[SCAddFriendsTrayType init] */

void FUN_104337d9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AddFriendsTrayScope/AddFriendsTrayStatusWrapper.swift",0x35,2,0x88,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104337de4);
  (*pcVar1)();
}



/* Entry: 104337de4; end: 104337deb; +[SCAddFriendsTrayType add] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337de4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306f540) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337dec; end: 104337df3; +[SCAddFriendsTrayType accept] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337dec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306f540) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337df4; end: 104337e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337df4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306f540) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104337e44; end: 104337e5f; -[SCAddFriendsTrayType matchAdd:accept:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104337e44(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11306f540) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000104337e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 104337e60; end: 104337ed3;  */

void FUN_104337e60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104337ed4; end: 10433817f;  */

int FUN_104337ed4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104337f50;
        goto LAB_104337f34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104337f34:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104337f50:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104338180; end: 1043381bf;  */

void FUN_104338180(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec14c;
  _swift_getWitnessTable(&UNK_10dcec14c,&UNK_11075b368);
  puRam000000011306f5a8 = puVar1;
  return;
}



/* Entry: 1043381c0; end: 1043381c3;  */

void FUN_1043381c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec1ec;
  _swift_getWitnessTable(&UNK_10dcec1ec,&UNK_11075b2d8);
  puRam000000011306f5b0 = puVar1;
  return;
}



/* Entry: 1043381c4; end: 104338203;  */

void FUN_1043381c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec1ec;
  _swift_getWitnessTable(&UNK_10dcec1ec,&UNK_11075b2d8);
  puRam000000011306f5b0 = puVar1;
  return;
}



/* Entry: 104338204; end: 10433823b;  */

void FUN_104338204(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10433823c; end: 10433823f; -[SCAddFriendsTrayType copyWithZone:] */

void FUN_10433823c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104338240; end: 104338247; -[SCAddFriendsTrayStatus copyWithZone:] */

void FUN_104338240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104338248; end: 104338267; -[SCContactPermissionResumeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338248(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f5b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104338268; end: 104338277; -[SCContactPermissionResumeScope contactPermissionResumeFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f5c0));
  return;
}



/* Entry: 104338278; end: 1043382bf; -[SCContactPermissionResumeScope contactPermissionResumeWorkflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338278(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f5c8;
  _swift_beginAccess(param_1 + _DAT_11306f5c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043382c0; end: 104338317; -[SCContactPermissionResumeScope setContactPermissionResumeWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043382c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f5c8;
  _swift_beginAccess(param_1 + _DAT_11306f5c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104338318; end: 10433831b;  */

void FUN_104338318(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433831c; end: 104338387; -[SCContactPermissionResumeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10433831c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f5b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f5c0));
  param_1 = param_1 + _DAT_11306f5c8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104338388; end: 1043383ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338388(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033f678();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f5d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043383f0; end: 10433843b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043383f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f5d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433843c; end: 104338543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10433843c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100334cb0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f5c8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f5c8,0);
  *(long *)(lVar4 + _DAT_11306f5b8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306f5c0) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104338544; end: 1043385db; -[_TtC35SCContactPermissionResumeSaberScope38SCContactPermissionResumeScopeServices buildWithUIContainer:contactPermissionResumeFlow:contactPermissionResumeWorkflowDelegate:] */

void FUN_104338544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10433843c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043385dc; end: 10433860f;  */

void FUN_1043385dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104338610; end: 104338633; -[_TtC35SCContactPermissionResumeSaberScope38SCContactPermissionResumeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f5d8));
  return;
}



/* Entry: 104338634; end: 104338653; -[_TtC18ContactUpsellScope20SCContactUpsellScope viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338634(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f630));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104338654; end: 1043386ab; -[_TtC18ContactUpsellScope20SCContactUpsellScope initWithViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306f630) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043386ac; end: 1043386af;  */

void FUN_1043386ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043386b0; end: 1043386bf; -[_TtC18ContactUpsellScope20SCContactUpsellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043386b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306f630));
  return;
}



/* Entry: 1043386c0; end: 104338727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043386c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033f750();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f640) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104338728; end: 104338773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338728(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f640) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104338774; end: 104338817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104338774(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000100334dd4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11306f630) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_1);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 104338818; end: 104338873; -[_TtC18ContactUpsellScope28SCContactUpsellScopeServices buildWithViewContainer:] */

void FUN_104338818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104338774(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104338874; end: 1043388a7;  */

void FUN_104338874(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043388a8; end: 1043388cb; -[_TtC18ContactUpsellScope28SCContactUpsellScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043388a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f640));
  return;
}



/* Entry: 1043388cc; end: 104338917; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope candidateUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043388cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306f698);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306f698))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104338918; end: 104338927; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f6a0));
  return;
}



/* Entry: 104338928; end: 10433896f; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f6a8;
  _swift_beginAccess(param_1 + _DAT_11306f6a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104338970; end: 1043389c7; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f6a8;
  _swift_beginAccess(param_1 + _DAT_11306f6a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043389c8; end: 104338a97; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope initWithCandidateUserId:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043389c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = _DAT_11306f6a8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11306f6a8,0);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f698);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306f6a0) = param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_78,puVar2);
  return;
}



/* Entry: 104338a98; end: 104338ac3; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope init] */

void FUN_104338a98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MutualFriendsPageScope.MutualFriendsPageScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104338ac4);
  (*pcVar1)();
}



/* Entry: 104338ac4; end: 104338b0f; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104338ac4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f698 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f6a0));
  param_1 = param_1 + _DAT_11306f6a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}


