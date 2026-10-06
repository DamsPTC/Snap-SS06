/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10438d830; end: 10438d877;  */

undefined8 FUN_10438d830(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10438d878; end: 10438da6f;  */

long FUN_10438d878(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10438da70; end: 10438da83;  */

bool FUN_10438da70(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10438da84; end: 10438db2f;  */

void FUN_10438da84(void)

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



/* Entry: 10438db30; end: 10438db33;  */

void FUN_10438db30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf29c0;
  _swift_getWitnessTable(&UNK_10dcf29c0,&UNK_110762088);
  puRam0000000113072fe8 = puVar1;
  return;
}



/* Entry: 10438db34; end: 10438db73;  */

void FUN_10438db34(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf29c0;
  _swift_getWitnessTable(&UNK_10dcf29c0,&UNK_110762088);
  puRam0000000113072fe8 = puVar1;
  return;
}



/* Entry: 10438db74; end: 10438dceb;  */

int FUN_10438db74(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10438dbf0;
        goto LAB_10438dbd4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10438dbd4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10438dbf0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10438dcec; end: 10438dd97;  */

void FUN_10438dcec(void)

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



/* Entry: 10438dd98; end: 10438ddbf;  */

void FUN_10438dd98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10438ddc0; end: 10438de0b; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ddc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072ff0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072ff0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438de0c; end: 10438de1b; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438de0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072ff8));
  return;
}



/* Entry: 10438de1c; end: 10438de2b; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438de1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073000);
}



/* Entry: 10438de2c; end: 10438de4b; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope presentingUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438de2c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438de4c; end: 10438de93; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope mapStoryPresentationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438de4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073010;
  _swift_beginAccess(param_1 + _DAT_113073010,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438de94; end: 10438deeb; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope setMapStoryPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438de94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073010;
  _swift_beginAccess(param_1 + _DAT_113073010,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438deec; end: 10438df47; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope playbackStorySequences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438deec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113073018);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b2684(0);
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



/* Entry: 10438df48; end: 10438df57; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope playbackStorySequencesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438df48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073020));
  return;
}



/* Entry: 10438df58; end: 10438df67; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope playlistRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438df58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073028));
  return;
}



/* Entry: 10438df68; end: 10438df77; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope playbackCommandObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438df68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073030));
  return;
}



/* Entry: 10438df78; end: 10438df87; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope analytics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438df78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073038));
  return;
}



/* Entry: 10438df88; end: 10438df97; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope playbackUIMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438df88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073040);
}



/* Entry: 10438df98; end: 10438dfa7; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope shouldAutoReplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438df98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073048);
}



/* Entry: 10438dfa8; end: 10438e003; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope initialClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438dfa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073050))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073050);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438e004; end: 10438e02f; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope init] */

void FUN_10438e004(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapStoryPlaybackScope.SCMapStoryPlaybackScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438e030);
  (*pcVar1)();
}



/* Entry: 10438e030; end: 10438e113; -[_TtC23SCMapStoryPlaybackScope23SCMapStoryPlaybackScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438e030(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072ff0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072ff8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073008));
  func_0x00010438e0f0(param_1 + _DAT_113073010);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073020));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073030));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073038));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073050 + 8))
  ;
  return;
}



/* Entry: 10438e114; end: 10438e17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438e114(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100375538();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073060) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438e180; end: 10438e187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438e180(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100375538();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073060) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10438e188; end: 10438e1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438e188(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073060) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438e1d4; end: 10438e3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438e1d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100374a4c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113073010;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073010,0);
  *(long *)(lVar5 + _DAT_113073008) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113072ff8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113073000) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072ff0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(lVar5 + _DAT_113073038) = param_6;
  *(undefined8 *)(lVar5 + _DAT_113073040) = param_7;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_8);
  *(undefined8 *)(lVar5 + _DAT_113073030) = param_9;
  *(undefined8 *)(lVar5 + _DAT_113073028) = param_10;
  *(undefined8 *)(lVar5 + _DAT_113073018) = 0;
  *(undefined8 *)(lVar5 + _DAT_113073020) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073050);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113073048) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10438e3b0; end: 10438e3e3; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices buildWithPresentingUIContainer:baseView:transitionMode:storyId:analytics:playbackUIMode:mapStoryPresenterDelegate:playbackCommandObservable:playlistRequest:] */

void FUN_10438e3b0(void)

{
  FUN_10438ec80();
  return;
}



/* Entry: 10438e3e4; end: 10438e5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438e3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100374a4c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113073010;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073010,0);
  *(long *)(lVar5 + _DAT_113073008) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113072ff8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113073000) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072ff0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(lVar5 + _DAT_113073038) = param_6;
  *(undefined8 *)(lVar5 + _DAT_113073040) = param_7;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_8);
  *(undefined8 *)(lVar5 + _DAT_113073030) = param_9;
  *(undefined8 *)(lVar5 + _DAT_113073028) = param_10;
  *(undefined8 *)(lVar5 + _DAT_113073018) = 0;
  *(undefined8 *)(lVar5 + _DAT_113073020) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073050);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(lVar5 + _DAT_113073048) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _swift_bridgeObjectRetain(param_12);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10438e5e0; end: 10438e91f; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices buildWithPresentingUIContainer:baseView:transitionMode:storyId:analytics:playbackUIMode:mapStoryPresenterDelegate:playbackCommandObservable:playlistRequest:initialClientId:] */

void FUN_10438e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_12 == 0) {
    param_12 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_9);
  uVar2 = param_10;
  _objc_retain(param_10);
  _objc_retain();
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_10438e3e4(param_3,param_4,param_5,param_6,param_2,param_7,param_8,param_9,param_10,param_11,
                param_12,uVar4);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar2);
  _objc_release(param_11);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10438e920; end: 10438ec4b; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices buildWithPresentingUIContainer:baseView:transitionMode:storyId:analytics:playbackUIMode:mapStoryPresenterDelegate:playbackCommandObservable:playbackStorySequences:shouldAutoReplay:] */

void FUN_10438e920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = 0;
  FUN_1044b2684(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_11,uVar1);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_9);
  uVar2 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_1);
  uVar3 = param_3;
  func_0x00010438e730(param_3,param_4,param_5,param_6,param_2,param_7,param_8,param_9,param_10,
                      param_11,param_12);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10438ec4c; end: 10438ec7f; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices buildWithPresentingUIContainer:baseView:transitionMode:storyId:analytics:playbackUIMode:mapStoryPresenterDelegate:playbackCommandObservable:playbackStorySequencesObservable:] */

void FUN_10438ec4c(void)

{
  FUN_10438ec80();
  return;
}



/* Entry: 10438ec80; end: 10438edb7;  */

void FUN_10438ec80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,code *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_9);
  uVar2 = param_10;
  _objc_retain(param_10);
  _objc_retain();
  _objc_retain(param_1);
  uVar3 = param_3;
  (*param_12)(param_3,param_4,param_5,param_6,param_2,param_7,param_8,param_9,param_10,param_11);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar2);
  _objc_release(param_11);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10438edb8; end: 10438ede3; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices init] */

void FUN_10438edb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapStoryPlaybackScope.SCMapStoryPlaybackScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438ede4);
  (*pcVar1)();
}



/* Entry: 10438ede4; end: 10438ede7;  */

void FUN_10438ede4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438ede8; end: 10438ee1b;  */

void FUN_10438ede8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438ee1c; end: 10438ee2f; -[_TtC23SCMapStoryPlaybackScope31SCMapStoryPlaybackScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ee1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073060));
  return;
}



/* Entry: 10438ee30; end: 10438ee6f;  */

void FUN_10438ee30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113073068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2a58;
  _swift_getWitnessTable(&UNK_10dcf2a58,&UNK_1107620e8);
  puRam0000000113073068 = puVar1;
  return;
}



/* Entry: 10438ee70; end: 10438eeab;  */

undefined1  [16] FUN_10438ee70(void)

{
  return ZEXT816(0x1107620e8);
}



/* Entry: 10438eeac; end: 10438eeeb;  */

void FUN_10438eeac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130730c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2ba0;
  _swift_getWitnessTable(&UNK_10dcf2ba0,&UNK_110762188);
  puRam00000001130730c0 = puVar1;
  return;
}



/* Entry: 10438eeec; end: 10438ef97;  */

void FUN_10438eeec(void)

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



/* Entry: 10438ef98; end: 10438efcf;  */

void FUN_10438ef98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10438efd0; end: 10438f07b;  */

void FUN_10438efd0(void)

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



/* Entry: 10438f07c; end: 10438f0bb;  */

void FUN_10438f07c(undefined1 *param_1,long *param_2)

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



/* Entry: 10438f0bc; end: 10438f0d7; -[SCMapStoryPlaybackCommand description] */

void FUN_10438f0bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438f0d8; end: 10438f11f; -[SCMapStoryPlaybackCommand init] */

void FUN_10438f0d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStoryPlaybackScope/SCMapStoryPlaybackCommandWrapper.swift",0x3e,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438f120);
  (*pcVar1)();
}



/* Entry: 10438f120; end: 10438f123; -[SCMapStoryPlaybackCommand copyWithZone:] */

void FUN_10438f120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438f124; end: 10438f12b; +[SCMapStoryPlaybackCommand play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f124(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130730c8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438f12c; end: 10438f133; +[SCMapStoryPlaybackCommand pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f12c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130730c8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438f134; end: 10438f183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f134(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130730c8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438f184; end: 10438f19f; -[SCMapStoryPlaybackCommand matchPlay:pause:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f184(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_1130730c8) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010438f19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10438f1a0; end: 10438f1f3;  */

void FUN_10438f1a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438f1f4; end: 10438f35b;  */

int FUN_10438f1f4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10438f270;
        goto LAB_10438f254;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10438f254:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10438f270:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10438f35c; end: 10438f39b;  */

void FUN_10438f35c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130730f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2cb0;
  _swift_getWitnessTable(&UNK_10dcf2cb0,&UNK_110762270);
  puRam00000001130730f8 = puVar1;
  return;
}



/* Entry: 10438f39c; end: 10438f3ab; -[SCMapStoryPlaybackAnalytics mapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f39c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073100);
}



/* Entry: 10438f3ac; end: 10438f3bb; -[SCMapStoryPlaybackAnalytics mapViewportSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073108);
}



/* Entry: 10438f3bc; end: 10438f3cb; -[SCMapStoryPlaybackAnalytics placeSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073110);
}



/* Entry: 10438f3cc; end: 10438f3db; -[SCMapStoryPlaybackAnalytics sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073118);
}



/* Entry: 10438f3dc; end: 10438f3eb; -[SCMapStoryPlaybackAnalytics contentViewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073120);
}



/* Entry: 10438f3ec; end: 10438f3fb; -[SCMapStoryPlaybackAnalytics mapStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073128);
}



/* Entry: 10438f3fc; end: 10438f40b; -[SCMapStoryPlaybackAnalytics mapSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073130);
}



/* Entry: 10438f40c; end: 10438f467; -[SCMapStoryPlaybackAnalytics mapPlaceComponentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f40c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073138))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073138);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438f468; end: 10438f62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073100) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073108) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073110) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073118) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113073120) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113073128) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113073130) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073138);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438f630; end: 10438f727; -[SCMapStoryPlaybackAnalytics initWithMapSessionId:mapViewportSessionId:placeSessionId:sourceType:contentViewSource:mapStoryType:mapSourceType:mapPlaceComponentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f630(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_10 == 0) {
    param_10 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113073100) = param_3;
  *(undefined8 *)(param_1 + _DAT_113073108) = param_4;
  *(undefined8 *)(param_1 + _DAT_113073110) = param_5;
  *(undefined8 *)(param_1 + _DAT_113073118) = param_6;
  *(undefined8 *)(param_1 + _DAT_113073120) = param_7;
  *(undefined8 *)(param_1 + _DAT_113073128) = param_8;
  *(undefined8 *)(param_1 + _DAT_113073130) = param_9;
  plVar1 = (long *)(param_1 + _DAT_113073138);
  *plVar1 = param_10;
  plVar1[1] = param_2;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438f728; end: 10438f7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f728(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113073100) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073108) = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113073110) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113073118) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113073120) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113073128) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113073130) = param_1[6];
  uVar2 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073138);
  puVar1[1] = param_1[8];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438f7dc; end: 10438f7df; -[SCMapStoryPlaybackAnalytics copyWithZone:] */

void FUN_10438f7dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438f7e0; end: 10438f813; -[SCMapStoryPlaybackAnalytics description] */

void FUN_10438f7e0(void)

{
  undefined1 auStack_58 [72];
  
  func_0x00010438f8a4(auStack_58);
  FUN_10438f924(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438f814; end: 10438f88f; -[SCMapStoryPlaybackAnalytics init] */

void FUN_10438f814(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStoryPlaybackScope/SCMapStoryPlaybackAnalyticsWrapper.swift",0x40,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438f85c);
  (*pcVar1)();
}



/* Entry: 10438f890; end: 10438f923; -[SCMapStoryPlaybackAnalytics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073138 + 8))
  ;
  return;
}



/* Entry: 10438f924; end: 10438f957;  */

undefined8 FUN_10438f924(undefined8 param_1)

{
  (*(code *)(undefined *)0x10438d8a4)();
  return param_1;
}



/* Entry: 10438f958; end: 10438f977;  */

void FUN_10438f958(void)

{
  _objc_opt_self(&PTR_PTR_1129a6060);
  return;
}



/* Entry: 10438f978; end: 10438f987; -[_TtC14SCMapViewScope14SCMapViewScope maxMapZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438f978(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073168);
}



/* Entry: 10438f988; end: 10438f9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f988(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073168) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438f9d4; end: 10438fa27; -[_TtC14SCMapViewScope14SCMapViewScope initWithMaxMapZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438f9d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113073168) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438fa28; end: 10438fa73;  */

void FUN_10438fa28(undefined8 param_1)

{
  func_0x0001000285a8(0x113073170,&UNK_10dcf2d70);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_10438fa74,param_1);
  return;
}



/* Entry: 10438fa74; end: 10438fadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438fa74(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10438fc7c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073178) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438fadc; end: 10438fb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438fadc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073178) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438fb28; end: 10438fbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438fb28(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_10438fc04();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073168) = param_1;
  plVar2 = &lStack_40;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  aplStack_58[0] = plVar2;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar2;
}



/* Entry: 10438fbc0; end: 10438fc03; -[_TtC14SCMapViewScope22SCMapViewScopeServices buildWithMaxMapZoomLevel:] */

void FUN_10438fbc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_10438fb28(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10438fc04; end: 10438fc23;  */

void FUN_10438fc04(void)

{
  _objc_opt_self(&PTR_PTR_1129a6160);
  return;
}



/* Entry: 10438fc24; end: 10438fc27;  */

void FUN_10438fc24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438fc28; end: 10438fc5b;  */

void FUN_10438fc28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438fc5c; end: 10438fc7b; -[_TtC14SCMapViewScope22SCMapViewScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438fc5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073178));
  return;
}



/* Entry: 10438fc7c; end: 10438fc9b;  */

void FUN_10438fc7c(void)

{
  _objc_opt_self(&PTR_PTR_1129a6220);
  return;
}



/* Entry: 10438fc9c; end: 10438fc9f;  */

void FUN_10438fc9c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438fca0; end: 10438ff17;  */

long FUN_10438fca0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10438ff18; end: 10438ff37; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ff18(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130731d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438ff38; end: 10438ff47; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope showPhotoLibrary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438ff38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130731d8);
}



/* Entry: 10438ff48; end: 10438ff8f; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ff48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130731e0;
  _swift_beginAccess(param_1 + _DAT_1130731e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438ff90; end: 10438ffe7; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ff90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130731e0;
  _swift_beginAccess(param_1 + _DAT_1130731e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438ffe8; end: 1043900b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10438ffe8(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1130731e0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130731e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130731d0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_1130731d8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 1043900b4; end: 104390167; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope initWithUiContainer:showPhotoLibrary:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043900b4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_1130731e0;
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130731e0,0);
  *(undefined8 *)(param_1 + _DAT_1130731d0) = param_3;
  *(undefined1 *)(param_1 + _DAT_1130731d8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 104390168; end: 1043901c7; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope init] */

void FUN_104390168(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPhotoPickerScope.SCPhotoPickerScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104390194);
  (*pcVar1)();
}



/* Entry: 1043901c8; end: 104390223; -[_TtC18SCPhotoPickerScope18SCPhotoPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043901c8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130731d0));
  param_1 = param_1 + _DAT_1130731e0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104390224; end: 10439028f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390224(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002b19f0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073218) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104390290; end: 104390297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390290(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002b19f0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073218) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104390298; end: 1043902e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390298(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073218) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043902e4; end: 1043903f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043902e4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

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
  
  lVar3 = 0;
  func_0x0001002a7a18();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130731e0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130731e0,0);
  *(undefined8 *)(lVar4 + _DAT_1130731d0) = param_1;
  *(undefined1 *)(lVar4 + _DAT_1130731d8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}


