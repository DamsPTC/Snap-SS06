/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069bc738; end: 1069bc793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc738(long param_1)

{
  long lVar1;
  
  func_0x00010c0e3c20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c));
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf83e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bc794; end: 1069bc7eb; -[SCModularCallViewController _composerOnMinimize] */

void FUN_1069bc794(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc7ec;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc7ec; end: 1069bc833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc7ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf83e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bc834; end: 1069bc89b; -[SCModularCallViewController _composerOnFullscreenStateChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc834(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  *(undefined1 *)(param_1 + _DAT_112754f4c) = param_3;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069bc89c;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1069bc89c; end: 1069bc8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc89c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d0880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bc8dc; end: 1069bc933; -[SCModularCallViewController _displayWebUpsellSheet] */

void FUN_1069bc8dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bc934;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bc934; end: 1069bc973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc934(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d08e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bc974; end: 1069bca4b; -[SCModularCallViewController _reportSponsoredLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bc974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bdc56e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar3 = param_1;
  func_0x00010bdf76a0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112754f44);
  func_0x00010c1324c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10df40();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bca4c; end: 1069bcb1b; -[SCModularCallViewController _displayAboutAds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bca4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bdc56e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar3 = param_1;
  func_0x00010bdf76a0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112754f44);
  func_0x00010bef2d60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b060();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bcb1c; end: 1069bcb77; -[SCModularCallViewController _retryCall:] */

void FUN_1069bcb1c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069bcb78;
  puStack_28 = &UNK_110868698;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1069bcb78; end: 1069bcb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bcb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_retryCall__11262d740,*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bcb94; end: 1069bcbeb; -[SCModularCallViewController _displayReplyWithSnap] */

void FUN_1069bcb94(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bcbec;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bcbec; end: 1069bcc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bcbec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d08a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bcc24; end: 1069bccab; -[SCModularCallViewController _sendScreenshot:] */

void FUN_1069bcc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069bccac;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bccac; end: 1069bccbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bccac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f2c),
             PTR_s_sendScreenshot__112634c48,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069bccc0; end: 1069bcd87; -[SCModularCallViewController _displayCallFeedbackTrayWithCallId:] */

void FUN_1069bccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1069bcd48;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bcd88; end: 1069bcd8b; -[SCModularCallViewController _onLoadingComplete] */

void FUN_1069bcd88(void)

{
  return;
}



/* Entry: 1069bcd8c; end: 1069bcde3; -[SCModularCallViewController _copyInviteLink] */

void FUN_1069bcd8c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bcde4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bcde4; end: 1069bce23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bcde4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d08c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bce24; end: 1069bce83; -[SCModularCallViewController _onLensSafeRenderZoneChangedWithRect:] */

void FUN_1069bce24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069bce84;
  puStack_40 = &UNK_110870f70;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}



/* Entry: 1069bce84; end: 1069bcecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bce84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d0800(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bcecc; end: 1069bcf2b; -[SCModularCallViewController _onScreenshotCaptureButtonLayoutForLensRenderZoneWithRect:] */

void FUN_1069bcecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069bcf2c;
  puStack_40 = &UNK_110870f70;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}



/* Entry: 1069bcf2c; end: 1069bcf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bcf2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754f24;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d07e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069bcf74; end: 1069bcfcb; -[SCModularCallViewController _dismissTray] */

void FUN_1069bcf74(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bcfcc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bcfcc; end: 1069bcfdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bcfcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f34),
             PTR_s_dismissTray_1125bebe8);
  return;
}



/* Entry: 1069bcfe0; end: 1069bd037; -[SCModularCallViewController _presentLensExplorer] */

void FUN_1069bcfe0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069bd038;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1069bd038; end: 1069bd04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754f34),
             PTR_s_presentLensExplorer_112620cc0);
  return;
}



/* Entry: 1069bd04c; end: 1069bd053; -[SCModularCallViewController pageViewName] */

undefined8 FUN_1069bd04c(void)

{
  return 0x9b;
}



/* Entry: 1069bd054; end: 1069bd05f; -[SCModularCallViewController defaultProjectNameV2] */

undefined ** FUN_1069bd054(void)

{
  return &PTR____CFConstantStringClassReference_110e66d38;
}



/* Entry: 1069bd060; end: 1069bd073; -[SCModularCallViewController routePickerViewWillBeginPresentingRoutes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112754f2c),PTR_s_setNativeAudioSelectorOpened__1126506b8
             ,1);
  return;
}



/* Entry: 1069bd074; end: 1069bd087; -[SCModularCallViewController routePickerViewDidEndPresentingRoutes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112754f2c),PTR_s_setNativeAudioSelectorOpened__1126506b8
             ,0);
  return;
}



/* Entry: 1069bd088; end: 1069bd09f; -[SCModularCallViewController modularCallAlertDialogUIContainerShouldPresentInNewWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1069bd088(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112754f4c) ^ 0xff) & 1;
}



/* Entry: 1069bd0a0; end: 1069bd22b; -[SCModularCallViewController _addParticipantsToGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112754f40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112754f28);
  func_0x00010bf5e540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = param_2;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  func_0x00010befc1e0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bd22c; end: 1069bd2bb;  */

void FUN_1069bd22c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05c0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bd2bc; end: 1069bd35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd2bc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112754f5c);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_1069bf8b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8df60(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c132880(*(undefined8 *)(param_1 + _DAT_112754f2c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bd360; end: 1069bd4ab; -[SCModularCallViewController _createCallViewFactory:applicationLifecycleEvents:] */

void FUN_1069bd360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf8c8;
  _objc_opt_new(PTR_PTR_1126cf8c8);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf8d0;
  func_0x00010c29cca0(PTR_PTR_1126cf8d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7480(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bd4ac; end: 1069bd507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd4ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112754f2c);
    func_0x00010bf583c0(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069bd508; end: 1069bd5e3; -[SCModularCallViewController _adReportConfigFromSponsoredLensDetails:] */

void FUN_1069bd508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c3ce0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf20f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef4d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff16e0(puVar1,param_2,uVar2,uVar3,uVar4,0x13,0,0,0,0,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bd5e4; end: 1069bd6bf; -[SCModularCallViewController _customContainerForAdReportPages:] */

void FUN_1069bd5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069bd6c0;
  puStack_50 = &UNK_110845c10;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1069bd730;
  puStack_78 = &UNK_110841f50;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar2,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069bd6c0; end: 1069bd72f;  */

void FUN_1069bd6c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_2);
  func_0x00010c1c8b80(puVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069bd730; end: 1069bd73b;  */

void FUN_1069bd730(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 1069bd73c; end: 1069bd74b; -[SCModularCallViewController notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069bd73c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754f78);
}



/* Entry: 1069bd74c; end: 1069bd757; -[SCModularCallViewController setNotificationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd74c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1069bd758; end: 1069bd767; -[SCModularCallViewController isDelayingInAppNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1069bd758(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112754f20);
}



/* Entry: 1069bd768; end: 1069bd777; -[SCModularCallViewController setIsDelayingInAppNotifications:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd768(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112754f20) = param_3;
  return;
}



/* Entry: 1069bd778; end: 1069bd8e3; -[SCModularCallViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069bd778(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754f78,0);
  _objc_storeStrong(param_1 + _DAT_112754f5c,0);
  _objc_storeStrong(param_1 + _DAT_112754f64,0);
  _objc_storeStrong(param_1 + _DAT_112754f60,0);
  _objc_storeStrong(param_1 + _DAT_112754f58,0);
  _objc_storeStrong(param_1 + _DAT_112754f74,0);
  _objc_storeStrong(param_1 + _DAT_112754f70,0);
  _objc_storeStrong(param_1 + _DAT_112754f68,0);
  _objc_storeStrong(param_1 + _DAT_112754f50,0);
  _objc_storeStrong(param_1 + _DAT_112754f48,0);
  _objc_storeStrong(param_1 + _DAT_112754f44,0);
  _objc_storeStrong(param_1 + _DAT_112754f28,0);
  _objc_storeStrong(param_1 + _DAT_112754f40,0);
  _objc_storeStrong(param_1 + _DAT_112754f3c,0);
  _objc_storeStrong(param_1 + _DAT_112754f38,0);
  _objc_storeStrong(param_1 + _DAT_112754f34,0);
  _objc_storeStrong(param_1 + _DAT_112754f30,0);
  _objc_storeStrong(param_1 + _DAT_112754f54,0);
  _objc_storeStrong(param_1 + _DAT_112754f2c,0);
  _objc_destroyWeak(param_1 + _DAT_112754f24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754f6c,0);
  return;
}



/* Entry: 1069bd8e4; end: 1069bd9ff; -[SCIncomingCallRequestHandler initWithTalkManager:identityServices:modularCallLauncher:talkContextFactory:delegate:] */

undefined1 *
FUN_1069bd8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069bda00; end: 1069bdacf; -[SCIncomingCallRequestHandler subscribeToIncomingCallRequests:] */

void FUN_1069bda00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069bdad0; end: 1069bdb17;  */

void FUN_1069bdad0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bdb18; end: 1069bdc6f; -[SCIncomingCallRequestHandler _onIncomingCallRequest:] */

void FUN_1069bdb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c232200();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_2;
    _objc_retain(param_3);
    func_0x00010c06dc20(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069bdc70; end: 1069bdcab;  */

void FUN_1069bdc70(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be814e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bdcac; end: 1069bddaf; -[SCIncomingCallRequestHandler _processIncomingCallRequest:] */

void FUN_1069bdcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  _objc_retain(param_3);
  func_0x00010c114d00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bddb0; end: 1069bddeb;  */

void FUN_1069bddb0(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be47c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069bddec; end: 1069be083; -[SCIncomingCallRequestHandler _launchModularCall:] */

void FUN_1069bddec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0748c0();
  puVar2 = PTR_PTR_1126b55b8;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c15df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ef20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfce840(PTR_PTR_1126b55b8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcb040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = param_3;
  func_0x00010c15df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cf828;
  uVar1 = param_3;
  func_0x00010c268940(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec0a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010bf56780(uVar3);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1069be084; end: 1069be1bf;  */

void FUN_1069be084(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1334e0(param_2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1069be14c;
    puStack_50 = &UNK_110848ba8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar1;
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uStack_40 = uVar2;
    uStack_38 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069be1c0; end: 1069be20f; -[SCIncomingCallRequestHandler .cxx_destruct] */

void FUN_1069be1c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069be210; end: 1069be2a3; -[SCModularCallAlertDialogUIContainer initWithPresentingViewController:delegate:] */

undefined1 *
FUN_1069be210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069be2a4; end: 1069be3b3; -[SCModularCallAlertDialogUIContainer attachUI:] */

void FUN_1069be2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_storeWeak(param_1 + 0x18,param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x00010c0d0640();
    _objc_release(lVar5);
    lVar5 = lVar1;
    if ((int)lVar2 != 0) {
      puVar3 = PTR_PTR_1126b1c10;
      _objc_alloc();
      func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar4);
      puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar3;
      _objc_release(uVar4);
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      _objc_release(lVar1);
    }
    func_0x00010c10eda0(lVar5);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069be3b4; end: 1069be457; -[SCModularCallAlertDialogUIContainer detachUI:] */

void FUN_1069be3b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069be458;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf84b00(lVar1,param_2,1,&puStack_60);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069be458; end: 1069be4cb;  */

void FUN_1069be458(long param_1)

{
  undefined8 uVar1;
  
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x18,0);
  func_0x00010bf6f440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069be4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1069be4cc; end: 1069be513; -[SCModularCallAlertDialogUIContainer .cxx_destruct] */

void FUN_1069be4cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069be514; end: 1069be837; -[SCModularCallLaunchAction toCallInfoWithIsGroup:] */

void FUN_1069be514(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_188 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puStack_178 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puStack_180 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1069be838;
  puStack_e8 = &UNK_110951400;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1069be884;
  puStack_120 = &UNK_110951430;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1069be8cc;
  puStack_158 = &UNK_110934a48;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1069be914;
  puStack_190 = &UNK_110951430;
  puStack_150 = puStack_188;
  puStack_148 = puStack_180;
  puStack_140 = puStack_178;
  puStack_118 = puStack_188;
  puStack_110 = puStack_180;
  puStack_108 = puStack_178;
  puStack_e0 = puStack_188;
  puStack_d8 = puStack_180;
  puStack_d0 = puStack_178;
  puStack_c0 = puStack_180;
  puStack_a0 = puStack_178;
  puStack_80 = puStack_188;
  func_0x00010c0c0280(param_1,param_2,&puStack_100,&puStack_138,&puStack_170,&puStack_1a8);
  puVar2 = PTR_PTR_1126cf8d8;
  _objc_alloc();
  func_0x00010c055880();
  puVar3 = PTR_PTR_1126cf8d8;
  puStack_68 = puVar2;
  _objc_alloc();
  func_0x00010c055880();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cf8e0;
  _objc_alloc(PTR_PTR_1126cf8e0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfe1180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b0e0(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126cf848;
  _objc_alloc(PTR_PTR_1126cf848);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar4;
  func_0x00010c0dfd40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005860(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  puVar7 = &uStack_88;
  __Block_object_dispose(puVar7,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_88);
  __Unwind_Resume();
  *(undefined4 *)(*(long *)(puVar7[4] + 8) + 0x18) = 1;
  uVar9 = 3;
  if (lVar8 != 1) {
    uVar9 = 0;
  }
  uVar1 = 4;
  if (lVar8 != 2) {
    uVar1 = uVar9;
  }
  *(undefined4 *)(*(long *)(puVar7[5] + 8) + 0x18) = uVar1;
  *(undefined4 *)(*(long *)(puVar7[6] + 8) + 0x18) =
       *(undefined4 *)(*(long *)(puVar7[5] + 8) + 0x18);
  return;
}



/* Entry: 1069be838; end: 1069be957;  */

void FUN_1069be838(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar2 = 3;
  if (param_2 != 1) {
    uVar2 = 0;
  }
  uVar1 = 4;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  return;
}



/* Entry: 1069be958; end: 1069be9df; -[SCModularCallNotificationRequest initWithMessage:type:] */

undefined1 *
FUN_1069be958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069be9e0; end: 1069be9e7; -[SCModularCallNotificationRequest message] */

undefined8 FUN_1069be9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069be9e8; end: 1069be9ef; -[SCModularCallNotificationRequest type] */

undefined4 FUN_1069be9e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1069be9f0; end: 1069be9fb; -[SCModularCallNotificationRequest .cxx_destruct] */

void FUN_1069be9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069be9fc; end: 1069bea83; -[SCModularCallNotificationPresenter initWithNotificationPool:] */

undefined1 * FUN_1069be9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069bea84; end: 1069bea8b; -[SCModularCallNotificationPresenter clearQueue] */

void FUN_1069bea84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1069bea8c; end: 1069bea97; -[SCModularCallNotificationPresenter pushToValdiMarshaller:] */

undefined8 FUN_1069bea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da7b0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x000108603dd4();
  return param_3;
}



/* Entry: 1069bea98; end: 1069beb77; -[SCModularCallNotificationPresenter emitNotificationWithMessage:type:] */

void FUN_1069bea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069beb78;
  puStack_58 = &UNK_110870610;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069beb78; end: 1069bebaf;  */

void FUN_1069beb78(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be08060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bebb0; end: 1069beca7; -[SCModularCallNotificationPresenter _emitNotificationWithMessage:type:] */

void FUN_1069bebb0(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,lVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(lVar2);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c27dd80();
      _objc_release(lVar2);
      if (param_4 == iVar1) goto LAB_1069bec90;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126cf8e8;
  _objc_alloc(PTR_PTR_1126cf8e8);
  func_0x00010c02b4e0();
  func_0x00010befa120(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar2);
  _objc_release(param_1);
LAB_1069bec90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069beca8; end: 1069befd3; -[SCModularCallNotificationPresenter containerView] */

void FUN_1069beca8(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x19;
  long lVar16;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    unaff_d8 = *(undefined8 *)PTR__CGRectZero_110347608;
    unaff_d9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(unaff_d8,unaff_d9,uVar17,uVar18);
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x10));
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar15);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(unaff_d8,unaff_d9,uVar17,uVar18);
    uVar15 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + 8));
    func_0x00010c213040(*(undefined8 *)(param_1 + 8));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 8));
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10));
    puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    uStack_b0 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar15;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined8 *)(param_1 + 8);
    uStack_c0 = uVar17;
    uStack_a8 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = *(undefined8 *)(param_1 + 0x10);
    uStack_c8 = unaff_x26;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = *(undefined8 *)(param_1 + 8);
    uStack_a0 = unaff_x26;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x27;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 8);
    uStack_98 = unaff_x25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(long *)(param_1 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar15;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined **)0x4;
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x23;
    func_0x00010beef8c0(puStack_d0);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(uVar15);
    _objc_release(unaff_x25);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x24);
    _objc_release(uStack_c8);
    _objc_release(uStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    lVar16 = *(long *)(param_1 + 0x10);
    unaff_x19 = param_1;
  }
  lVar3 = lVar16;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1069befd4;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = unaff_d9;
  uStack_138 = unaff_d8;
  uStack_130 = unaff_x28;
  uStack_128 = unaff_x27;
  uStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  uStack_110 = unaff_x24;
  puStack_108 = unaff_x23;
  uStack_100 = unaff_x22;
  lStack_f8 = unaff_x21;
  lStack_f0 = lVar16;
  lStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110951460;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  if (param_3 == (undefined *)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    unaff_x21 = *(long *)(lVar3 + 0x18);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      _objc_retain(unaff_x21);
      uVar15 = *(undefined8 *)(lVar3 + 0x20);
      *(long *)(lVar3 + 0x20) = unaff_x21;
      _objc_release(uVar15);
      func_0x00010c12d3c0(*(undefined8 *)(lVar3 + 0x18));
      lVar16 = unaff_x21;
      func_0x00010c0cb140(unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(lVar3 + 8));
      _objc_release(lVar16);
      lVar16 = unaff_x21;
      func_0x00010c27dd80();
      if ((uint)lVar16 < 3) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(lVar3 + 0x10));
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(lVar3 + 8));
        _objc_release(puVar2);
      }
      lVar16 = lVar3;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_3);
      lVar4 = lVar16;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c149040(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = lVar16;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c274200(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar4);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar4 = lVar16;
      lStack_170 = lVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar16;
      lStack_168 = lVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_3;
      func_0x00010c2793a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar16;
      lStack_160 = lVar11;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf494e0(0);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_158 = lVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(puVar5);
      _objc_release(lVar4);
      func_0x00010c08cdc0(param_3);
      func_0x00010c162480(lVar6);
      func_0x00010c162480(lVar7);
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      uStack_188 = 0x1069bf544;
      puStack_180 = &UNK_110842e18;
      _objc_retain(param_3);
      puStack_178 = param_3;
      func_0x00010bf03440(0x3fd3333333333333,0,puVar5);
      _objc_initWeak(auStack_1a0,lVar3);
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_1d8 = puVar2;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_1069bf54c;
      puStack_1c0 = &UNK_110848ba8;
      lStack_1b8 = lVar6;
      lStack_1b0 = lVar7;
      _objc_retain(param_3);
      puStack_1a8 = param_3;
      _objc_copyWeak(auStack_1e0,auStack_1a0);
      _objc_retain(ppuVar1);
      func_0x00010bf03440(0x3fd3333333333333,0x4008000000000000,puVar5);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_1e0);
      _objc_release(puStack_1a8);
      _objc_destroyWeak(auStack_1a0);
      _objc_release(puStack_178);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar16);
    }
    _objc_release(unaff_x21);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 0x30);
  _objc_destroyWeak(auStack_1a0);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 1069befd4; end: 1069bf53f; -[SCModularCallNotificationPresenter presentNotificationOverView:completion:] */

void FUN_1069befd4(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long unaff_x21;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110951460;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  if (param_3 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    unaff_x21 = *(long *)(param_1 + 0x18);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      _objc_retain(unaff_x21);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = unaff_x21;
      _objc_release(uVar2);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x18));
      lVar3 = unaff_x21;
      func_0x00010c0cb140(unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + 8));
      _objc_release(lVar3);
      lVar3 = unaff_x21;
      func_0x00010c27dd80();
      if ((uint)lVar3 < 3) {
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10));
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_1 + 8));
        _objc_release(puVar4);
      }
      lVar3 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_3);
      lVar5 = lVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c149040(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      lVar5 = lVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c274200(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar5 = lVar3;
      lStack_a0 = lVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      lStack_98 = lVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_3;
      func_0x00010c2793a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar3;
      lStack_90 = lVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf494e0(0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar6);
      _objc_release(lVar5);
      func_0x00010c08cdc0(param_3);
      func_0x00010c162480(lVar8);
      func_0x00010c162480(lVar7);
      puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x1069bf544;
      puStack_b0 = &UNK_110842e18;
      _objc_retain(param_3);
      lStack_a8 = param_3;
      func_0x00010bf03440(0x3fd3333333333333,0,puVar15);
      _objc_initWeak(auStack_d0,param_1);
      puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_108 = puVar4;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1069bf54c;
      puStack_f0 = &UNK_110848ba8;
      lStack_e8 = lVar8;
      lStack_e0 = lVar7;
      _objc_retain(param_3);
      lStack_d8 = param_3;
      _objc_copyWeak(auStack_110,auStack_d0);
      _objc_retain(ppuVar1);
      func_0x00010bf03440(0x3fd3333333333333,0x4008000000000000,puVar15);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_110);
      _objc_release(lStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(lStack_a8);
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar3);
    }
    _objc_release(unaff_x21);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 0x30);
  _objc_destroyWeak(auStack_d0);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 1069bf540; end: 1069bf54b;  */

void FUN_1069bf540(void)

{
  return;
}



/* Entry: 1069bf54c; end: 1069bf5d3;  */

void FUN_1069bf54c(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1069bf5d4; end: 1069bf5df; -[SCModularCallNotificationPresenter debugInfo] */

undefined ** FUN_1069bf5d4(void)

{
  return &PTR____CFConstantStringClassReference_110e66d58;
}



/* Entry: 1069bf5e0; end: 1069bf62f; -[SCModularCallNotificationPresenter .cxx_destruct] */

void FUN_1069bf5e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069bf630; end: 1069bf6e7; -[SCModularCallScreenCaptureMonitor startMonitoring] */

void FUN_1069bf630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  puVar1 = PTR_s__didDetectScreenRecording_11255ce70;
  func_0x00010befa240(puVar3,param_2,param_1,PTR_s__didDetectScreenRecording_11255ce70,
                      &PTR____CFConstantStringClassReference_110f789f8,0);
  puVar4 = puVar3;
  func_0x00010befa240(puVar3,param_2,param_1,puVar1,&PTR____CFConstantStringClassReference_110f78a18
                      ,0);
  iVar2 = (int)puVar4;
  func_0x00010b738460();
  if (iVar2 != 0) {
    func_0x00010bdfd340(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1069bf6e8; end: 1069bf727; -[SCModularCallScreenCaptureMonitor stopMonitoring] */

void FUN_1069bf6e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069bf728; end: 1069bf75b; -[SCModularCallScreenCaptureMonitor _didDetectScreenshot] */

void FUN_1069bf728(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d07a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bf75c; end: 1069bf78f; -[SCModularCallScreenCaptureMonitor _didDetectScreenRecording] */

void FUN_1069bf75c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d0780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069bf790; end: 1069bf7a7; -[SCModularCallScreenCaptureMonitor delegate] */

void FUN_1069bf790(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069bf7a8; end: 1069bf7b3; -[SCModularCallScreenCaptureMonitor setDelegate:] */

void FUN_1069bf7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1069bf7b4; end: 1069bf7bb; -[SCModularCallScreenCaptureMonitor .cxx_destruct] */

void FUN_1069bf7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069bf7bc; end: 1069bf8b7; +[SCTCallInfo emptyCallInfo] */

void FUN_1069bf7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126cf8e0;
  _objc_alloc(PTR_PTR_1126cf8e0);
  func_0x00010c05b0e0();
  puVar2 = PTR_PTR_1126cf848;
  _objc_alloc(PTR_PTR_1126cf848);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar4 = PTR_PTR_1126cf8d8;
  _objc_alloc(PTR_PTR_1126cf8d8);
  func_0x00010c055880();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010c005860(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,puVar1,
                      puVar3,puVar4,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069bf8b8; end: 1069bf8cf;  */

void FUN_1069bf8b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e66d78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e66d78,
                      &PTR____CFConstantStringClassReference_110e66d98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1069bf8d0; end: 1069bf973; -[SCConnectedLensInTalkController initWithLensTalkVideoHandlingScopeExposer:scopeServices:] */

undefined1 *
FUN_1069bf8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f41a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069bf974; end: 1069bf9bb; -[SCConnectedLensInTalkController dealloc] */

void FUN_1069bf974(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126f41a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069bf9bc; end: 1069bf9c7; -[SCConnectedLensInTalkController setDelegate:] */

void FUN_1069bf9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1069bf9c8; end: 1069bfafb; -[SCConnectedLensInTalkController startForLensId:completion:] */

void FUN_1069bf9c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bee36e0(param_1,param_2,0);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010be0cf40(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c12e1c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069bfafc;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c2a4ae0(uVar3,param_2,&puStack_68);
    _objc_release(uVar3);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bfafc; end: 1069bfb0b;  */

void FUN_1069bfafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeLensTalkVideoHandlingScop_112560d70,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1069bfb0c; end: 1069bfcab; -[SCConnectedLensInTalkController _exposeLensTalkVideoHandlingScope:completion:] */

void FUN_1069bfb0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c12a280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  lVar1 = lVar4;
  func_0x00010c2656e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf232a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069bfcac; end: 1069bfd93;  */

void FUN_1069bfcac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c07b860();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c29b1c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bfd94; end: 1069bfe37; -[SCConnectedLensInTalkController _streamForVideoSinkId:] */

void FUN_1069bfd94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069bfe38;
  puStack_48 = &UNK_11084f340;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bfe38; end: 1069bffbf;  */

void FUN_1069bfe38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1069bffc0;
  uStack_60 = 0x1069bffd0;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1069bffc0;
  uStack_90 = 0x1069bffd0;
  uStack_88 = 0;
  puStack_58 = puVar1;
  func_0x00010c0bf0a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0d9840(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069bffc0; end: 1069bffd7;  */

void FUN_1069bffc0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069bffd8; end: 1069c00bb;  */

void FUN_1069bffd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar6 = lVar6 + 0x18;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  func_0x00010bf487e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar1;
  _objc_release(uVar4);
  _objc_release(lVar6);
  func_0x00010c251c20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126cf8f0;
  _objc_alloc(PTR_PTR_1126cf8f0);
  func_0x00010c060e00();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0ec800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069c00bc; end: 1069c00cb;  */

void FUN_1069c00bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),PTR_s_stop_112673008);
  return;
}


