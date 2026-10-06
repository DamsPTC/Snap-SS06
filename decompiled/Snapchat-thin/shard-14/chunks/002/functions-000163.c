/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b05da94; end: 10b05da9b; -[SCContextServices presenterProvider] */

undefined8 FUN_10b05da94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05da9c; end: 10b05daa7; -[SCContextServices .cxx_destruct] */

void FUN_10b05da9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05daa8; end: 10b05daaf; -[SCContextActionHandlingServices actionHandlingProvider] */

undefined8 FUN_10b05daa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05dab0; end: 10b05dabb; -[SCContextActionHandlingServices .cxx_destruct] */

void FUN_10b05dab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05dabc; end: 10b05dbaf; -[SCContextActionParams initWithLogger:snapParams:conversationParams:contextMenuSource:contextMenuSourceSpecific:operaNavigationStyle:] */

undefined1 *
FUN_10b05dabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_112704f20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05dbb0; end: 10b05dce3; -[SCContextActionParams initWithLogger:snapParams:operaPage:operaEventListener:legacyProperties:conversationParams:viewLocation:contextMenuSource:contextMenuSourceSpecific:spotlightLiveCommentCount:spotlightPendingReplyCount:lensMode:operaNavigationStyle:pairedMusicData:] */

long FUN_10b05dbb0(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_stack_00000038);
  func_0x00010c0275c0();
  if (param_1 != 0) {
    _objc_retain(in_x4);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = in_x4;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x30,in_x5);
    uVar1 = in_x6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x58) = in_stack_00000000;
    *(undefined8 *)(param_1 + 0x60) = in_stack_00000018;
    *(undefined8 *)(param_1 + 0x68) = in_stack_00000020;
    *(undefined4 *)(param_1 + 0xc) = in_stack_00000028;
    _objc_retain(in_stack_00000038);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = in_stack_00000038;
    _objc_release(uVar1);
  }
  _objc_release(in_stack_00000038);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return param_1;
}



/* Entry: 10b05dce4; end: 10b05dceb; -[SCContextActionParams logger] */

undefined8 FUN_10b05dce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05dcec; end: 10b05dcf3; -[SCContextActionParams snapParams] */

undefined8 FUN_10b05dcec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05dcf4; end: 10b05dcfb; -[SCContextActionParams isLaunchedBySnapBackAction] */

undefined1 FUN_10b05dcf4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b05dcfc; end: 10b05dd03; -[SCContextActionParams setIsLaunchedBySnapBackAction:] */

void FUN_10b05dcfc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b05dd04; end: 10b05dd0b; -[SCContextActionParams snapBackLensId] */

undefined8 FUN_10b05dd04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05dd0c; end: 10b05dd13; -[SCContextActionParams setSnapBackLensId:] */

void FUN_10b05dd0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05dd14; end: 10b05dd1b; -[SCContextActionParams operaPage] */

undefined8 FUN_10b05dd14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b05dd1c; end: 10b05dd33; -[SCContextActionParams operaEventListener] */

void FUN_10b05dd1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05dd34; end: 10b05dd3b; -[SCContextActionParams legacyProperties] */

undefined8 FUN_10b05dd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b05dd3c; end: 10b05dd43; -[SCContextActionParams conversationParams] */

undefined8 FUN_10b05dd3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b05dd44; end: 10b05dd4b; -[SCContextActionParams contextMenuSource] */

undefined8 FUN_10b05dd44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b05dd4c; end: 10b05dd53; -[SCContextActionParams contextMenuSourceSpecific] */

undefined8 FUN_10b05dd4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b05dd54; end: 10b05dd5b; -[SCContextActionParams viewLocation] */

undefined8 FUN_10b05dd54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b05dd5c; end: 10b05dd63; -[SCContextActionParams setViewLocation:] */

void FUN_10b05dd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b05dd64; end: 10b05dd6b; -[SCContextActionParams spotlightLiveCommentCount] */

undefined8 FUN_10b05dd64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b05dd6c; end: 10b05dd73; -[SCContextActionParams spotlightPendingReplyCount] */

undefined8 FUN_10b05dd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b05dd74; end: 10b05dd7b; -[SCContextActionParams lensMode] */

undefined4 FUN_10b05dd74(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b05dd7c; end: 10b05dd83; -[SCContextActionParams operaNavigationStyle] */

undefined8 FUN_10b05dd7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b05dd84; end: 10b05dd8b; -[SCContextActionParams pairedMusicData] */

undefined8 FUN_10b05dd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b05dd8c; end: 10b05ddbb; -[SCContextActionParams setPairedMusicData:] */

void FUN_10b05dd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b05ddbc; end: 10b05ddc3; -[SCContextActionParams rankingResultsId] */

undefined8 FUN_10b05ddbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b05ddc4; end: 10b05ddcb; -[SCContextActionParams setRankingResultsId:] */

void FUN_10b05ddc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05ddcc; end: 10b05ddd3; -[SCContextActionParams playbackPositionMs] */

undefined8 FUN_10b05ddcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b05ddd4; end: 10b05de03; -[SCContextActionParams setPlaybackPositionMs:] */

void FUN_10b05ddd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b05de04; end: 10b05de8f; -[SCContextActionParams .cxx_destruct] */

void FUN_10b05de04(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05de90; end: 10b05de97; -[SCContextPairedMusicDataProvider associatedSoundProfileAction] */

undefined8 FUN_10b05de90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05de98; end: 10b05dec7; -[SCContextPairedMusicDataProvider setAssociatedSoundProfileAction:] */

void FUN_10b05de98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b05dec8; end: 10b05ded3; -[SCContextPairedMusicDataProvider .cxx_destruct] */

void FUN_10b05dec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05ded4; end: 10b05df3b; +[SCCTXSendChatString descriptor] */

void FUN_10b05ded4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63850,
                        &PTR____CFConstantStringClassReference_110f54238,&PTR_DAT_1133685e0,0,0,4,
                        0x1c);
    puRam00000001137f3e08 = puVar1;
  }
  return;
}



/* Entry: 10b05df3c; end: 10b05dfa3; +[SCCTXReplyToRecipientString descriptor] */

void FUN_10b05df3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c638a0,
                        &PTR____CFConstantStringClassReference_110f54258,&PTR_DAT_1133685e0,
                        &PTR_DAT_1133685f8,1,0x10,0x1c);
    puRam00000001137f3e10 = puVar1;
  }
  return;
}



/* Entry: 10b05dfa4; end: 10b05e00b; +[SCCTXReplyToGroupString descriptor] */

void FUN_10b05dfa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c638f0,
                        &PTR____CFConstantStringClassReference_110f54278,&PTR_DAT_1133685e0,
                        &PTR_DAT_113368618,1,0x10,0x1c);
    puRam00000001137f3e18 = puVar1;
  }
  return;
}



/* Entry: 10b05e00c; end: 10b05e073; +[SCCTXPlaySnappableString descriptor] */

void FUN_10b05e00c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63940,
                        &PTR____CFConstantStringClassReference_110f54298,&PTR_DAT_1133685e0,
                        &PTR_DAT_113368638,1,0x10,0x1c);
    puRam00000001137f3e20 = puVar1;
  }
  return;
}



/* Entry: 10b05e074; end: 10b05e0db; +[SCCTXReplyWithSnapString descriptor] */

void FUN_10b05e074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63990,
                        &PTR____CFConstantStringClassReference_110f542b8,&PTR_DAT_1133685e0,0,0,4,
                        0x1c);
    puRam00000001137f3e28 = puVar1;
  }
  return;
}



/* Entry: 10b05e0dc; end: 10b05e167; +[SCCTXLocalizedString descriptor] */

undefined * FUN_10b05e0dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c639e0,
                        &PTR____CFConstantStringClassReference_110e58938,&PTR_DAT_1133685e0,
                        &PTR_DAT_113368658,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001137f3e30 = puVar1;
  }
  return puRam00000001137f3e30;
}



/* Entry: 10b05e168; end: 10b05e207; -[SCObservableRegistry init] */

undefined1 * FUN_10b05e168(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b05e208; end: 10b05e3af; -[SCObservableRegistry register:] */

void FUN_10b05e208(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00(uVar2);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_38,param_1);
    _objc_initWeak(auStack_40,param_3);
    puVar3 = PTR_PTR_1126df4d8;
    _objc_alloc(PTR_PTR_1126df4d8);
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_copyWeak(auStack_48,auStack_40);
    func_0x00010c059480(puVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
  }
  else {
    __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b05e3b0; end: 10b05e47b;  */

void FUN_10b05e3b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      __ZNSt3__15mutex4lockEv(lVar1 + 0x18);
      func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x10),param_2,param_1);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010bf51e00(uVar2);
      __ZNSt3__15mutex6unlockEv(lVar1 + 0x18);
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 8),param_2,uVar2);
      _objc_release(uVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b05e47c; end: 10b05e4d7;  */

void FUN_10b05e47c(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 10b05e4d8; end: 10b05e4ff; -[SCObservableRegistry registeryObservable] */

void FUN_10b05e4d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b05e500; end: 10b05e537; -[SCObservableRegistry .cxx_destruct] */

void FUN_10b05e500(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05e538; end: 10b05e557; -[SCObservableRegistry .cxx_construct] */

void FUN_10b05e538(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10b05e558; end: 10b05e5cf; -[SCObservableRegistryDeregister initWithUnregisterBlock:] */

undefined1 * FUN_10b05e558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05e5d0; end: 10b05e60f; -[SCObservableRegistryDeregister deregister] */

void FUN_10b05e5d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b05e610; end: 10b05e653; -[SCObservableRegistryDeregister dealloc] */

void FUN_10b05e610(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6e180();
  puStack_28 = PTR_PTR_112704f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b05e654; end: 10b05e65f; -[SCObservableRegistryDeregister .cxx_destruct] */

void FUN_10b05e654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05e660; end: 10b05e663; +[SCCGetRecentReactions modulePath] */

undefined ** FUN_10b05e660(void)

{
  return &PTR____CFConstantStringClassReference_110f542d8;
}



/* Entry: 10b05e664; end: 10b05e66b; +[SCCGetRecentReactions asyncStrictMode] */

undefined8 FUN_10b05e664(void)

{
  return 0;
}



/* Entry: 10b05e66c; end: 10b05e6cb; -[SCCGetRecentReactions getRecentReactionsWithCount:includeBitmoji:] */

void FUN_10b05e66c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  (**(code **)(param_2 + 0x10))(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b05e6cc; end: 10b05e78f; +[SCCGetRecentReactions invokeWithJSRuntimeProvider:count:includeBitmoji:completionHandler:] */

void FUN_10b05e6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_6);
  (**(code **)(param_4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b05e790;
  puStack_68 = &UNK_1108af7e0;
  lStack_60 = param_4;
  uStack_58 = param_6;
  uStack_50 = param_1;
  uStack_48 = param_5;
  func_0x00010b05eed4();
  _objc_retain(param_4);
  func_0x00010bf85140(param_4,param_3,&puStack_80);
  func_0x00010b05eee8();
  _objc_release(lStack_60);
  func_0x00010b05ee8c();
  func_0x00010b05eec0();
  return;
}



/* Entry: 10b05e790; end: 10b05e813;  */

void FUN_10b05e790(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df4e0;
  func_0x00010bfbc0e0(PTR_PTR_1126df4e0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar2);
  _objc_release(puVar2);
  func_0x00010b05eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b05e814; end: 10b05e84f; +[SCCGetRecentReactions valdiMarshallableObjectDescriptor] */

void FUN_10b05e814(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3f00;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb3f30;
  param_1[2] = &PTR_DAT_110cb3ed0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b05e850; end: 10b05e8c3;  */

void FUN_10b05e850(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b05ee20;
  puStack_30 = &UNK_110cb4040;
  uStack_28 = param_1;
  func_0x00010b05eed4();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x00010b05eee8();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b05e8c4; end: 10b05e8c7; +[SCCHandleReactionSent modulePath] */

undefined ** FUN_10b05e8c4(void)

{
  return &PTR____CFConstantStringClassReference_110f542d8;
}



/* Entry: 10b05e8c8; end: 10b05e8cf; +[SCCHandleReactionSent asyncStrictMode] */

undefined8 FUN_10b05e8c8(void)

{
  return 0;
}



/* Entry: 10b05e8d0; end: 10b05e90f; -[SCCHandleReactionSent handleReactionSentWithReactionType:] */

void FUN_10b05e8d0(void)

{
  long unaff_x20;
  
  func_0x00010b05ee64();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(unaff_x20 + 0x10))();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10b05e910; end: 10b05ea4b; +[SCCHandleReactionSent invokeWithJSRuntimeProvider:reactionType:completionHandler:] */

void FUN_10b05e910(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b05e9e4;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010b05eed4();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010b05eee8();
  _objc_release(param_5);
  func_0x00010b05ee8c();
  func_0x00010b05eec0();
  return;
}



/* Entry: 10b05ea4c; end: 10b05ea67; +[SCCHandleReactionSent valdiMarshallableObjectDescriptor] */

void FUN_10b05ea4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3f48;
  param_1[1] = &PTR_DAT_110cb3f78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b05ea68; end: 10b05ea7b; +[SCCChatReactionMetadataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b05ea68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3f88;
  param_1[1] = &PTR_DAT_110cb3fe8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b05ea7c; end: 10b05ea8f; +[SCCChatReactionSearching valdiMarshallableObjectDescriptor] */

void FUN_10b05ea7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4000;
  param_1[1] = &PTR_DAT_110cb4030;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b05ea90; end: 10b05ea9b; +[SCCChatReactionDetailCellView componentPath] */

undefined ** FUN_10b05ea90(void)

{
  return &PTR____CFConstantStringClassReference_110f542f8;
}



/* Entry: 10b05ea9c; end: 10b05eabb; -[SCCChatReactionDetailCellView initWithViewModel:componentContext:runtime:] */

void FUN_10b05ea9c(void)

{
  FUN_10b05ee50(PTR_PTR_112704f38);
  return;
}



/* Entry: 10b05eabc; end: 10b05eaef; -[SCCChatReactionDetailCellView setViewModel:] */

void FUN_10b05eabc(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05eaf0; end: 10b05eb27; -[SCCChatReactionDetailCellView viewModel] */

void FUN_10b05eaf0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05eb28; end: 10b05eb33; +[SCCChatReactionsBelowMessageView componentPath] */

undefined ** FUN_10b05eb28(void)

{
  return &PTR____CFConstantStringClassReference_110f54318;
}



/* Entry: 10b05eb34; end: 10b05eb53; -[SCCChatReactionsBelowMessageView initWithViewModel:componentContext:runtime:] */

void FUN_10b05eb34(void)

{
  FUN_10b05ee50(PTR_PTR_112704f40);
  return;
}



/* Entry: 10b05eb54; end: 10b05eb87; -[SCCChatReactionsBelowMessageView setViewModel:] */

void FUN_10b05eb54(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05eb88; end: 10b05ebbf; -[SCCChatReactionsBelowMessageView viewModel] */

void FUN_10b05eb88(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05ebc0; end: 10b05ebcb; +[SCCChatReactionsDetailListView componentPath] */

undefined ** FUN_10b05ebc0(void)

{
  return &PTR____CFConstantStringClassReference_110f54338;
}



/* Entry: 10b05ebcc; end: 10b05ebeb; -[SCCChatReactionsDetailListView initWithViewModel:componentContext:runtime:] */

void FUN_10b05ebcc(void)

{
  FUN_10b05ee50(PTR_PTR_112704f48);
  return;
}



/* Entry: 10b05ebec; end: 10b05ec1f; -[SCCChatReactionsDetailListView setViewModel:] */

void FUN_10b05ebec(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05ec20; end: 10b05ec57; -[SCCChatReactionsDetailListView viewModel] */

void FUN_10b05ec20(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05ec58; end: 10b05ec63; +[SCCReactionSelectionMenu componentPath] */

undefined ** FUN_10b05ec58(void)

{
  return &PTR____CFConstantStringClassReference_110f54358;
}



/* Entry: 10b05ec64; end: 10b05ec83; -[SCCReactionSelectionMenu initWithViewModel:componentContext:runtime:] */

void FUN_10b05ec64(void)

{
  FUN_10b05ee50(PTR_PTR_112704f50);
  return;
}



/* Entry: 10b05ec84; end: 10b05ecb7; -[SCCReactionSelectionMenu setViewModel:] */

void FUN_10b05ec84(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05ecb8; end: 10b05ecef; -[SCCReactionSelectionMenu viewModel] */

void FUN_10b05ecb8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05ecf0; end: 10b05ecfb; +[SCCReactionSelectionMenuTray componentPath] */

undefined ** FUN_10b05ecf0(void)

{
  return &PTR____CFConstantStringClassReference_110f54378;
}



/* Entry: 10b05ecfc; end: 10b05ed1b; -[SCCReactionSelectionMenuTray initWithViewModel:componentContext:runtime:] */

void FUN_10b05ecfc(void)

{
  FUN_10b05ee50(PTR_PTR_112704f58);
  return;
}



/* Entry: 10b05ed1c; end: 10b05ed4f; -[SCCReactionSelectionMenuTray setViewModel:] */

void FUN_10b05ed1c(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05ed50; end: 10b05ed87; -[SCCReactionSelectionMenuTray viewModel] */

void FUN_10b05ed50(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05ed88; end: 10b05ed93; +[SCCReactionSelectionMenuTraySheet componentPath] */

undefined ** FUN_10b05ed88(void)

{
  return &PTR____CFConstantStringClassReference_110f54398;
}



/* Entry: 10b05ed94; end: 10b05edb3; -[SCCReactionSelectionMenuTraySheet initWithViewModel:componentContext:runtime:] */

void FUN_10b05ed94(void)

{
  FUN_10b05ee50(PTR_PTR_112704f60);
  return;
}



/* Entry: 10b05edb4; end: 10b05ede7; -[SCCReactionSelectionMenuTraySheet setViewModel:] */

void FUN_10b05edb4(void)

{
  func_0x00010b05ee64();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee80();
  func_0x00010b05ee8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05ede8; end: 10b05ee1f; -[SCCReactionSelectionMenuTraySheet viewModel] */

void FUN_10b05ede8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05ee20; end: 10b05ee4f;  */

void FUN_10b05ee20(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b05ee50; end: 10b05eefb;  */

void FUN_10b05ee50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10b05eefc; end: 10b05ef17; +[SCCChatMessageDisplayStateLogging valdiMarshallableObjectDescriptor] */

void FUN_10b05eefc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4070;
  param_1[1] = &PTR_DAT_110cb4100;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b05ef18; end: 10b05ef2b; +[SCCChatScrollHandling valdiMarshallableObjectDescriptor] */

void FUN_10b05ef18(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb4110;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b05ef2c; end: 10b05ef83;  */

undefined8 FUN_10b05ef2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df4f0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_10b05f0d4();
  return param_1;
}



/* Entry: 10b05ef84; end: 10b05ef8f; +[SCCAddFriendCtaButton componentPath] */

undefined ** FUN_10b05ef84(void)

{
  return &PTR____CFConstantStringClassReference_110f543b8;
}



/* Entry: 10b05ef90; end: 10b05efb3; -[SCCAddFriendCtaButton initWithViewModel:componentContext:runtime:] */

void FUN_10b05ef90(void)

{
  func_0x00010b05f0e0(PTR_PTR_112704f68);
  return;
}



/* Entry: 10b05efb4; end: 10b05efef; -[SCCAddFriendCtaButton setViewModel:] */

void FUN_10b05efb4(void)

{
  func_0x00010b05f0f4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05f110();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05eff0; end: 10b05f02b; -[SCCAddFriendCtaButton viewModel] */

void FUN_10b05eff0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b05f0d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05f02c; end: 10b05f037; +[SCCChatCtaButton componentPath] */

undefined ** FUN_10b05f02c(void)

{
  return &PTR____CFConstantStringClassReference_110f543d8;
}



/* Entry: 10b05f038; end: 10b05f05b; -[SCCChatCtaButton initWithViewModel:componentContext:runtime:] */

void FUN_10b05f038(void)

{
  func_0x00010b05f0e0(PTR_PTR_112704f70);
  return;
}


