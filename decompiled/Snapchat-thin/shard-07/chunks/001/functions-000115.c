/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052392b0; end: 1052392e3;  */

void FUN_1052392b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052392e4; end: 1052393b3; -[SCComposerSpectaclesHomeLensSectionActionHandler onPresentLensInfoWithLensId:] */

void FUN_1052392e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052393b4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1052393b4; end: 1052393e7;  */

void FUN_1052393b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052393e8; end: 10523948f; -[SCComposerSpectaclesHomeLensSectionActionHandler onPresentManagePins] */

void FUN_1052393e8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105239490;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105239490; end: 105239553;  */

void FUN_105239490(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf22e00(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf9d620();
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105239554; end: 105239557; -[SCComposerSpectaclesHomeLensSectionActionHandler onPresentExploreLenses] */

void FUN_105239554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openLensExplorer_112578e50);
  return;
}



/* Entry: 105239558; end: 10523955b; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouterDidPresentLensExplorer:] */

void FUN_105239558(void)

{
  return;
}



/* Entry: 10523955c; end: 10523955f; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_10523955c(void)

{
  return;
}



/* Entry: 105239560; end: 105239563; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouterDidDismissLensExplorer:] */

void FUN_105239560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshLensSection_11257fb60);
  return;
}



/* Entry: 105239564; end: 105239617; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouterReplyParameters:] */

void FUN_105239564(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar2 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar3 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105239618; end: 10523961b; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouter:didPickItem:selectionTrigger:] */

void FUN_105239618(void)

{
  return;
}



/* Entry: 10523961c; end: 10523961f; -[SCComposerSpectaclesHomeLensSectionActionHandler lensExplorerRouterDidToggleCamera:] */

void FUN_10523961c(void)

{
  return;
}



/* Entry: 105239620; end: 10523969b; -[SCComposerSpectaclesHomeLensSectionActionHandler spectaclesLensManagementScopeDidDismiss:] */

void FUN_105239620(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10523969c; end: 105239717; -[SCComposerSpectaclesHomeLensSectionActionHandler spectaclesLensManagementScopeWantsToDismiss:] */

void FUN_10523969c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105239718; end: 10523971b; -[SCComposerSpectaclesHomeLensSectionActionHandler spectaclesLensManagementScopeDidUpdatePinnedLensData:] */

void FUN_105239718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshLensSection_11257fb60);
  return;
}



/* Entry: 10523971c; end: 105239787; -[SCComposerSpectaclesHomeLensSectionActionHandler _openLensExplorer] */

void FUN_10523971c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cb00(uVar1,param_2,lVar2,param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105239788; end: 1052397d7; -[SCComposerSpectaclesHomeLensSectionActionHandler _launchLensWithLensId:] */

void FUN_105239788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052397d8; end: 105239923; -[SCComposerSpectaclesHomeLensSectionActionHandler _presentLensInfoCardForLensId:] */

void FUN_1052397d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c095080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c10c800(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105239924; end: 10523994f;  */

void FUN_105239924(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105239950; end: 1052399ef; -[SCComposerSpectaclesHomeLensSectionActionHandler _refreshLensSection] */

void FUN_105239950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  _dispatch_time(0,500000000);
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052399f0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x00010058c530(uVar1,uVar2,&puStack_58);
  _objc_release(uVar2);
  return;
}



/* Entry: 1052399f0; end: 105239a1f;  */

void FUN_1052399f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c125380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105239a20; end: 105239a9b; -[SCComposerSpectaclesHomeLensSectionActionHandler .cxx_destruct] */

void FUN_105239a20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105239a9c; end: 105239c03; -[SCSpectaclesHomePrimaryActionActionHandler initWithDevice:knobsScopeExposer:knobsScopeServices:reportIssueScopeExposer:lensLaunchManager:brieScopeExposer:presentingVCBlock:] */

undefined1 *
FUN_105239a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e7148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105239c04; end: 105239d3b; -[SCSpectaclesHomePrimaryActionActionHandler exposeReportIssueScope] */

void FUN_105239c04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = *(long *)(param_1 + 8);
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b6798;
  _objc_alloc(PTR_PTR_1126b6798);
  lVar3 = param_1;
  func_0x00010c133060(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = uVar7;
  func_0x00010bfd38e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf70e00();
  func_0x00010c058420(puVar4,param_2,puVar2,param_1,lVar3,uVar7,uVar6);
  _objc_release(uVar5);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105239d3c; end: 105239e27; -[SCSpectaclesHomePrimaryActionActionHandler exposeKnobsScope] */

void FUN_105239d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = *(long *)(param_1 + 8);
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf22e20(uVar4,param_2,*(undefined8 *)(param_1 + 0x10),puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105239e28; end: 105239f2f; -[SCSpectaclesHomePrimaryActionActionHandler exposeBrieScope] */

void FUN_105239e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c071800();
  if ((int)puVar2 != 0) {
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(puVar1);
    if (lVar3 != 0) {
      return;
    }
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar4 = *(long *)(param_1 + 8);
    (**(code **)(lVar4 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar1,param_2,lVar4,1);
    _objc_release(lVar4);
    puVar2 = PTR_PTR_1126b67a0;
    _objc_alloc(PTR_PTR_1126b67a0);
    func_0x00010c007060();
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105239f30; end: 105239f77; -[SCSpectaclesHomePrimaryActionActionHandler reportIssueTypeForCurrentDevice] */

undefined8 FUN_105239f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074be0();
  _objc_release(uVar1);
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 105239f78; end: 105239f7b; -[SCSpectaclesHomePrimaryActionActionHandler onTapReport] */

void FUN_105239f78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exposeReportIssueScope_1125c4f20);
  return;
}



/* Entry: 105239f7c; end: 105239fd3; -[SCSpectaclesHomePrimaryActionActionHandler onTapTutorial] */

void FUN_105239f7c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105239fd4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105239fd4; end: 10523a013;  */

void FUN_105239fd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10523a014; end: 10523a06b; -[SCSpectaclesHomePrimaryActionActionHandler onTapHelp] */

void FUN_10523a014(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10523a06c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10523a06c; end: 10523a0db;  */

void FUN_10523a06c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b67a8;
  _objc_alloc(PTR_PTR_1126b67a8);
  func_0x00010c059ea0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523a0dc; end: 10523a133; -[SCSpectaclesHomePrimaryActionActionHandler onTapKnobs] */

void FUN_10523a0dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10523a134;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10523a134; end: 10523a13b;  */

void FUN_10523a134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_exposeKnobsScope_1125c4f00);
  return;
}



/* Entry: 10523a13c; end: 10523a193; -[SCSpectaclesHomePrimaryActionActionHandler onTapRegulatory] */

void FUN_10523a13c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10523a194;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10523a194; end: 10523a203;  */

void FUN_10523a194(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b67a8;
  _objc_alloc(PTR_PTR_1126b67a8);
  func_0x00010c059ea0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523a204; end: 10523a207; -[SCSpectaclesHomePrimaryActionActionHandler onTapMoodboard] */

void FUN_10523a204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exposeBrieScope_1125c4ee0);
  return;
}



/* Entry: 10523a208; end: 10523a20b; -[SCSpectaclesHomePrimaryActionActionHandler spectaclesKnobsScopeWantsToDismiss:] */

void FUN_10523a208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpectaclesKnobsScope_112580ed0);
  return;
}



/* Entry: 10523a20c; end: 10523a20f; -[SCSpectaclesHomePrimaryActionActionHandler spectaclesKnobsScopeDidDismiss:] */

void FUN_10523a20c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpectaclesKnobsScope_112580ed0);
  return;
}



/* Entry: 10523a210; end: 10523a28b; -[SCSpectaclesHomePrimaryActionActionHandler _removeSpectaclesKnobsScope] */

void FUN_10523a210(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10523a28c; end: 10523a28f; -[SCSpectaclesHomePrimaryActionActionHandler spectaclesReportIssueScopeDidDismiss:] */

void FUN_10523a28c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeReportIssueScope__112580de0);
  return;
}



/* Entry: 10523a290; end: 10523a293; -[SCSpectaclesHomePrimaryActionActionHandler spectaclesReportIssueScopeWantsToDismiss:] */

void FUN_10523a290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeReportIssueScope__112580de0);
  return;
}



/* Entry: 10523a294; end: 10523a32b; -[SCSpectaclesHomePrimaryActionActionHandler _removeReportIssueScope:] */

void FUN_10523a294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar2 != param_3) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10523a32c; end: 10523a337; -[SCSpectaclesHomePrimaryActionActionHandler pushToValdiMarshaller:] */

void FUN_10523a32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 10523a338; end: 10523a3b3; -[SCSpectaclesHomePrimaryActionActionHandler briePageExited] */

void FUN_10523a338(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10523a3b4; end: 10523a413; -[SCSpectaclesHomePrimaryActionActionHandler .cxx_destruct] */

void FUN_10523a3b4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10523a414; end: 10523a467; -[SCSpectaclesComposerPageViewController initWithValdiView:] */

undefined1 * FUN_10523a414(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10523a468; end: 10523a8c7; -[SCSpectaclesHomeComposerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523a468(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar14 = (long)_DAT_1127203a8;
  uVar1 = param_1 + lVar14;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c074be0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar5 = PTR_PTR_1126b67b0;
    _objc_alloc_init(PTR_PTR_1126b67b0);
    lVar13 = param_1;
    func_0x00010bdf3a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ab00(puVar5);
    _objc_release(lVar13);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10523a8c8;
    puStack_88 = &UNK_110868578;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c166b20(puVar5);
    lVar13 = param_1;
    func_0x00010bdea4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161e00(puVar5);
    _objc_release(lVar13);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c1fe220(puVar5);
    puVar6 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar13 = (long)_DAT_1127203b4;
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar6;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c272120(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c880(puVar5);
    _objc_release(uVar12);
    lVar13 = param_1 + lVar14;
    _objc_loadWeakRetained(lVar13);
    lVar10 = lVar13;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be88560(param_1);
    _objc_release(lVar10);
    _objc_release(lVar13);
    lVar13 = param_1 + _DAT_1127203b8;
    _objc_loadWeakRetained(lVar13);
    lVar10 = lVar13;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar13);
    puVar6 = PTR_PTR_1126afe50;
    _objc_alloc(PTR_PTR_1126afe50);
    func_0x00010c040b80();
    _objc_opt_class(PTR_PTR_1126b67b8);
    func_0x00010c181960(puVar6);
    func_0x00010c1cba60(puVar5);
    puVar8 = PTR_PTR_1126b67c0;
    _objc_alloc(PTR_PTR_1126b67c0);
    func_0x00010c061d40();
    puVar9 = PTR_PTR_1126b67c8;
    _objc_alloc(PTR_PTR_1126b67c8);
    func_0x00010c00a580();
    lVar14 = param_1 + lVar14;
    _objc_loadWeakRetained(lVar14);
    lVar13 = lVar14;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar13);
    _objc_release(lVar14);
    func_0x00010c1c1bc0(puVar6);
    _objc_storeWeak(param_1 + _DAT_1127203b0,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_78);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127203ac) = 1;
  lVar13 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar13);
  lVar10 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar11 = lVar14;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d320(param_1);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 10523a8c8; end: 10523a907;  */

void FUN_10523a8c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523a908; end: 10523a963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523a908(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127203b0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18eca0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10523a964; end: 10523aa03; -[SCSpectaclesHomeComposerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523a964(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(char *)(param_1 + _DAT_1127203bc) == '\x01') {
    lVar1 = param_1 + _DAT_1127203a8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126e7158;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523aa04; end: 10523ab93; -[SCSpectaclesHomeComposerEntryPoint _createAlertPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523aa04(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10523ab94;
  puStack_78 = &UNK_110849680;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0311a0(puVar1);
  param_1 = param_1 + _DAT_1127203c0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10523ab94; end: 10523ac0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ab94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127203b0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c10eda0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10523ac0c; end: 10523ad2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ac0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_1127203b0;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = param_1 + lVar4;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar4 = param_1 + lVar4;
        _objc_loadWeakRetained(lVar4);
        _objc_retain(param_2);
        func_0x00010bf84b00(lVar4);
        _objc_release(lVar4);
        _objc_release(param_2);
        goto LAB_10523ad08;
      }
    }
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
LAB_10523ad08:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10523ad30; end: 10523ad43;  */

void FUN_10523ad30(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010523ad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10523ad44; end: 10523ae5b; -[SCSpectaclesHomeComposerEntryPoint _createActionSheetPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ad44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_1127203c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar3 = lVar2;
  func_0x00010c0b7640(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10523ae5c; end: 10523aeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ae5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_1127203b0;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523aeac; end: 10523af3f; -[SCSpectaclesHomeComposerEntryPoint _refreshDeviceContextWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523aeac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127203c4;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127203b4);
    func_0x00010bdecf40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10523af40; end: 10523b60b; -[SCSpectaclesHomeComposerEntryPoint _createDeviceContextWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523af40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_3;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b67d0;
  _objc_alloc_init(PTR_PTR_1126b67d0);
  lVar4 = param_1;
  func_0x00010bdf3a40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdef680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b67d8;
  _objc_alloc(PTR_PTR_1126b67d8);
  lVar1 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037f20(puVar6);
  func_0x00010c1df920(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdf0a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6aa0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdf1c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df900(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bded040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cea0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bded020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ce60(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdeeae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab0e0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdeeac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab0c0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bded000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cde0(puVar3);
  _objc_release(lVar1);
  func_0x00010c1bc8e0(puVar3);
  lVar1 = param_1 + _DAT_1127203c8;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdef340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba8e0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdecf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c8a0(puVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c2734a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  _objc_release(lVar1);
  if (lVar8 != 0) {
    lVar1 = param_1;
    func_0x00010bdf4f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218e00(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bdf1ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2940(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdf01c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db160(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdecfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ca00(puVar3);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b67e0;
  _objc_alloc(PTR_PTR_1126b67e0);
  lVar1 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c119e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0282a0(puVar6);
  func_0x00010c1e54c0(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10523b60c;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d3e80(puVar3);
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10523b638;
  puStack_c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_3);
  lStack_b8 = param_3;
  func_0x00010c1d3b80(puVar3);
  puStack_100 = puVar6;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10523b66c;
  puStack_e8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e0,auStack_80);
  func_0x00010c1d3a00(puVar3);
  puStack_128 = puVar6;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x10523b698;
  puStack_110 = &UNK_1108434b0;
  _objc_copyWeak(auStack_108,auStack_80);
  func_0x00010c1d5040(puVar3);
  _objc_copyWeak(auStack_130,auStack_80);
  _objc_retain(param_3);
  func_0x00010c1d4f60(puVar3);
  func_0x00010bdf5c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225920(puVar3);
  _objc_release(param_1);
  _objc_retain(0);
  _objc_release(0);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_release(lStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10523b60c; end: 10523b6c3;  */

void FUN_10523b60c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6be80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10523b6c4; end: 10523b767;  */

void FUN_10523b6c4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10523b768;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10523b768; end: 10523b79b;  */

void FUN_10523b768(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10523b79c; end: 10523b833; -[SCSpectaclesHomeComposerEntryPoint _createDeviceInfoProviderWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523b79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b67e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127203cc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c0c0(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523b834; end: 10523b9d7; -[SCSpectaclesHomeComposerEntryPoint _createPrimaryActionActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523b834(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b67f0;
  _objc_alloc(PTR_PTR_1126b67f0);
  lVar7 = (long)_DAT_1127203c4;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112720440);
  _objc_retain(uVar5);
  lVar2 = param_1 + _DAT_1127203d0;
  _objc_loadWeakRetained(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112720444);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfa1c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112720448);
  _objc_retain(uVar8);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c00bec0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523b9d8; end: 10523ba17;  */

void FUN_10523b9d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523ba18; end: 10523bb37; -[SCSpectaclesHomeComposerEntryPoint _createMirroringManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ba18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b67f8;
  _objc_alloc(PTR_PTR_1126b67f8);
  lVar2 = param_1 + _DAT_1127203b8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127203c4);
  func_0x00010bfa1c80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0faee0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127203d4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c040ca0(puVar1,param_2,lVar5,uVar7,param_1);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523bb38; end: 10523bc77; -[SCSpectaclesHomeComposerEntryPoint _createSpectaclesHomeTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523bb38(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar4;
  long lVar5;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b6800;
  _objc_alloc_init(PTR_PTR_1126b6800);
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c194e00();
  func_0x00010c1950e0(puVar2,param_2,puVar4);
  puVar3 = puVar2;
  func_0x00010c194e20(puVar2,param_2,PTR____kCFBooleanFalse_11034ab60);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = (uint)puVar3;
  func_0x00010b6fc238();
  func_0x00010c0df760(puVar4,param_2,uVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195080(puVar2,param_2,puVar4);
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010b6fc278();
  if (puVar4 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    if (param_1 != 0) {
      param_1 = *(long *)(param_1 + _DAT_112720448);
    }
    _objc_retain(param_1);
    lVar5 = param_1;
    func_0x00010c071800(param_1);
  }
  func_0x00010c0df760(puVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194ee0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    _objc_release(param_1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194fe0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10523bc78; end: 10523bd0b; -[SCSpectaclesHomeComposerEntryPoint _createOTAStateManagerWithDevice:] */

void FUN_10523bc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6808;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0eddc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032600(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523bd0c; end: 10523be67; -[SCSpectaclesHomeComposerEntryPoint _createDeviceStatusProviderWithDevice:] */

void FUN_10523bd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b6810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_10523be68(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010523be8c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2a54c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ae80(puVar1,param_2,param_3,uVar3,uVar4,uVar6,puVar8);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523be68; end: 10523beaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523be68(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127203cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523beb0; end: 10523bf53; -[SCSpectaclesHomeComposerEntryPoint _createDeviceStatusActionHandlerWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523beb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6818;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127203cc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a600(puVar1,param_2,param_1,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523bf54; end: 10523bfeb; -[SCSpectaclesHomeComposerEntryPoint _createImportStatusProviderWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523bf54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b6820;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127203d8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bd60(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523bfec; end: 10523c0e3; -[SCSpectaclesHomeComposerEntryPoint _createImportStatusActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523bfec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b6828;
  _objc_alloc(PTR_PTR_1126b6828);
  lVar2 = param_1 + _DAT_1127203d8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4d720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127203dc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2a56a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127203e0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003be0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523c0e4; end: 10523c17b; -[SCSpectaclesHomeComposerEntryPoint _createPowerStateActionHandlerWithDevice:] */

void FUN_10523c0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6830;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_10523be68(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007020(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523c17c; end: 10523c293; -[SCSpectaclesHomeComposerEntryPoint _createDeviceSetupActionHandlerWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b6838;
  _objc_alloc(PTR_PTR_1126b6838);
  param_1 = param_1 + _DAT_1127203e8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c007000(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523c294; end: 10523c2d3;  */

void FUN_10523c294(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523c2d4; end: 10523c333; -[SCSpectaclesHomeComposerEntryPoint _createPresentingUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c2d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523c334; end: 10523c38b; -[SCSpectaclesHomeComposerEntryPoint _onTapTitle] */

void FUN_10523c334(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10523c38c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10523c38c; end: 10523c393;  */

void FUN_10523c38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentDeviceSelector_11257c570);
  return;
}



/* Entry: 10523c394; end: 10523c547; -[SCSpectaclesHomeComposerEntryPoint _presentDeviceSelector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126b6840;
  _objc_alloc(PTR_PTR_1126b6840);
  lVar11 = param_1 + _DAT_1127203dc;
  _objc_loadWeakRetained(lVar11);
  lVar2 = lVar11;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127203cc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127203ec;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127203a8;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c480(puVar1,param_2,lVar2,lVar4,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar11);
  puVar9 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar11 = (long)_DAT_1127203f0;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar9;
  _objc_release(uVar10);
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar11),param_2,10);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  lVar11 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c27b3a0(PTR_PTR_1126b6848);
  func_0x00010c10c5a0(uVar10,param_2,lVar11,2);
  _objc_release(lVar11);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523c548; end: 10523c5df; -[SCSpectaclesHomeComposerEntryPoint _presentStatusInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127203d4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523c5e0; end: 10523c61f; -[SCSpectaclesHomeComposerEntryPoint _onTapBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c5e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248c80(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10523c620; end: 10523c66b; -[SCSpectaclesHomeComposerEntryPoint _openSystemSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c620(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127203e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10523c66c; end: 10523c763; -[SCSpectaclesHomeComposerEntryPoint _openPairingWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b6850;
  _objc_alloc(PTR_PTR_1126b6850);
  uVar4 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bf70e00(uVar4);
  func_0x00010c056ae0(puVar3,param_2,puVar1,uVar5,0,param_1,3);
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127203f4),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523c764; end: 10523c7f3; -[SCSpectaclesHomeComposerEntryPoint _onTapMoreButtonWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  func_0x00010be0d320(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523c7f4; end: 10523c8c7; -[SCSpectaclesHomeComposerEntryPoint _exposeSettingsScope:device:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127203f8;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = param_1 + _DAT_1127203fc;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bf22e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10523c8c8; end: 10523c95b; -[SCSpectaclesHomeComposerEntryPoint _createSpectaclesHomePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523c8c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112720400;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10523c95c; end: 10523caa7; -[SCSpectaclesHomeComposerEntryPoint _createDeviceControlManagerWithDevice:performer:] */

void FUN_10523c95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b6858;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf212a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034be0(puVar1,param_2,param_4,param_3,uVar3,uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010523be8c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523caa8; end: 10523cb3b; -[SCSpectaclesHomeComposerEntryPoint _createTouchpadActionHandlerWithDevice:] */

void FUN_10523caa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6738;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2734a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054040(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523cb3c; end: 10523cb5b; -[SCSpectaclesHomeComposerEntryPoint _getHomeViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523cb3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127203b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523cb5c; end: 10523cc07; -[SCSpectaclesHomeComposerEntryPoint _createWiFiManagerWithDevice:] */

void FUN_10523cb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b6860;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2a54c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063000(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523cc08; end: 10523ce03; -[SCSpectaclesHomeComposerEntryPoint _createLensProviderWithLensLaunchManager:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523cc08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272040c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar11;
  func_0x00010c281240();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010c281220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = 0;
  if (param_1 != 0) {
    lVar11 = param_1 + _DAT_112720408;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar11;
  func_0x00010c150160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6868;
  _objc_alloc();
  func_0x00010c02dd60();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c15f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126b6870;
  _objc_alloc();
  uVar6 = param_4;
  uVar7 = param_3;
  lVar11 = lVar4;
  func_0x00010c034dc0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    _objc_retain(lVar11);
    _objc_initWeak(auStack_f0,lVar9);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10523d0c0;
    puStack_100 = &UNK_110871368;
    _objc_copyWeak(auStack_f8,auStack_f0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar9 + _DAT_112720404;
      _objc_loadWeakRetained(lVar8);
    }
    lVar1 = lVar8;
    func_0x00010c293740(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x10523d100;
    puStack_128 = &UNK_1108606f8;
    _objc_copyWeak(auStack_120,auStack_f0);
    ppuVar5 = &puStack_140;
    _objc_retainBlock(ppuVar5);
    puVar2 = PTR_PTR_1126b6878;
    _objc_alloc(PTR_PTR_1126b6878);
    lVar8 = lVar1;
    func_0x00010c2923e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      _objc_retain(0);
      lVar10 = 0;
      uVar12 = 0;
      lVar9 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar9 + _DAT_11272043c);
      _objc_retain(uVar12);
      lVar10 = lVar9 + _DAT_11272042c;
      _objc_loadWeakRetained();
      lVar9 = lVar9 + _DAT_112720410;
      _objc_loadWeakRetained();
    }
    lVar4 = lVar9;
    func_0x00010c0936e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c140(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(uVar12);
    _objc_release(lVar8);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_120);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(lVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10523ce04; end: 10523d0bf; -[SCSpectaclesHomeComposerEntryPoint _createLensActionWithDevice:lensLaunchManager:spectaclesHomeLensCacheManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ce04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10523d0c0;
  puStack_90 = &UNK_110871368;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112720404;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c293740(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10523d100;
  puStack_b8 = &UNK_1108606f8;
  _objc_copyWeak(auStack_b0,auStack_80);
  ppuVar3 = &puStack_d0;
  _objc_retainBlock(ppuVar3);
  puVar4 = PTR_PTR_1126b6878;
  _objc_alloc(PTR_PTR_1126b6878);
  lVar6 = lVar2;
  func_0x00010c2923e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar7 = 0;
    uVar8 = 0;
    param_1 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11272043c);
    _objc_retain(uVar8);
    lVar7 = param_1 + _DAT_11272042c;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112720410;
    _objc_loadWeakRetained();
  }
  lVar5 = param_1;
  func_0x00010c0936e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c140(puVar4);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10523d0c0; end: 10523d14f;  */

void FUN_10523d0c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523d150; end: 10523d48b; -[SCSpectaclesHomeComposerEntryPoint _createLensInfoCardScopePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d150(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = param_1;
  FUN_10523d48c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    lVar1 = param_1;
    func_0x00010523d4b0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010523d4d4();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = param_1;
        func_0x00010523d4f8();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = param_1;
          func_0x00010523d51c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          _objc_release(lVar8);
          if (lVar4 != 0) {
            _objc_initWeak(auStack_68,param_1);
            puVar5 = PTR_PTR_1126ae720;
            _objc_copyWeak(auStack_70,auStack_68);
            func_0x00010bf11fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126ae720;
            func_0x00010bf11fe0(PTR_PTR_1126ae720);
            _objc_retainAutoreleasedReturnValue();
            if (param_1 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = param_1 + _DAT_112720414;
              _objc_loadWeakRetained(lVar8);
            }
            lVar1 = lVar8;
            func_0x00010c094900(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010bf54520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            _objc_release(lVar1);
            _objc_release(lVar8);
            puVar7 = PTR_PTR_1126b6888;
            _objc_alloc(PTR_PTR_1126b6888);
            lVar8 = param_1;
            FUN_10523d48c(param_1);
            _objc_retainAutoreleasedReturnValue();
            if (param_1 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(param_1 + _DAT_112720438);
            }
            _objc_retain(uVar9);
            lVar1 = param_1;
            func_0x00010523d4b0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_1;
            func_0x00010523d4d4(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            func_0x00010523d4f8(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010523d51c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c042180(puVar7);
            _objc_release(param_1);
            _objc_release(lVar4);
            _objc_release(lVar2);
            _objc_release(lVar1);
            _objc_release(uVar9);
            _objc_release(lVar8);
            _objc_release(lVar3);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_destroyWeak(auStack_70);
            _objc_destroyWeak(auStack_68);
            goto LAB_10523d430;
          }
          goto LAB_10523d42c;
        }
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
    }
    _objc_release(lVar8);
  }
LAB_10523d42c:
  puVar7 = (undefined *)0x0;
LAB_10523d430:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10523d48c; end: 10523d53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d48c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112720418);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523d540; end: 10523d57f;  */

void FUN_10523d540(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf6060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10523d580; end: 10523d59b;  */

void FUN_10523d580(void)

{
  _objc_opt_new(PTR_PTR_1126b6880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523d59c; end: 10523d633; -[SCSpectaclesHomeComposerEntryPoint _creatorProfilePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d59c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6890;
  _objc_alloc(PTR_PTR_1126b6890);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar2 = 0;
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112720430);
    _objc_retain(uVar2);
    param_1 = param_1 + _DAT_112720434;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010c042040(puVar1,param_2,uVar2,param_1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10523d634; end: 10523d6b7; -[SCSpectaclesHomeComposerEntryPoint spectaclesHomeViewControllerWantsToDetachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d634(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_1127203bc) = 1;
  lVar3 = (long)_DAT_1127203a8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248c40(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


