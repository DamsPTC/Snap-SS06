/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c01470; end: 100c01513; -[SCComposerBitmojiSelfieDownloader initWithBitmojiImageFetcher:bitmojiSelfieFetcher:] */

undefined1 *
FUN_100c01470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9c08;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c01514; end: 100c01517;  */

void FUN_100c01514(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c01518; end: 100c0155f;  */

/* WARNING: Possible PIC construction at 0x000100c0154c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c01550) */

void FUN_100c01518(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4fcd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c01560; end: 100c01617; -[SCComposerUserSessionEntryPoint registerVideoLoaders:] */

/* WARNING: Possible PIC construction at 0x000100c015ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c015e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c01600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c015b0) */
/* WARNING: Removing unreachable block (ram,0x000100c015e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if ((*(byte *)(param_1 + _DAT_112724b08) & 1) == 0) {
    lVar2 = (long)_DAT_112724b18;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c01618; end: 100c0168b; -[SCCTPPersistenceServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01618(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301d210,0);
  func_0x000107c61614(param_1 + _DAT_11301d218,0);
  *(undefined8 *)(param_1 + _DAT_11301d220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0168c; end: 100c01737; -[SCCTPPersistenceServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0168c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c01738(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c01738; end: 100c018cf;  */

void FUN_100c01738(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e3c2c0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f1c3d40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserSessionScopeGraphBridge/SCCTPPersistenceServicesSaberServiceProvider.swift"
                            ,0x54,2,0x54,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c018d0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c018d0; end: 100c018db; -[SCCTPPersistenceServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c018d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d210;
  func_0x000107c61428(param_1 + _DAT_11301d210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c018dc; end: 100c0192f;  */

void FUN_100c018dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c01930; end: 100c0193b; -[SCCTPPersistenceServicesSaberServiceProvider setCreateUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d218;
  func_0x000107c61428(param_1 + _DAT_11301d218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0193c; end: 100c0196f; -[SCCTPPersistenceServicesSaberServiceProvider __safeProvide] */

void FUN_100c0193c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c01970();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c01970; end: 100c01a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01970(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40c10();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c01ab4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11301ce18);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301d220);
      *(long *)(unaff_x20 + _DAT_11301d220) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c01a58; end: 100c01a63; -[SCCTPPersistenceServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01a58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d210;
  func_0x000107c61428(param_1 + _DAT_11301d210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c01a64; end: 100c01aa7;  */

void FUN_100c01a64(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c01aa8; end: 100c01ab3; -[SCCTPPersistenceServicesSaberServiceProvider createUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01aa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d218;
  func_0x000107c61428(param_1 + _DAT_11301d218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c01ab4; end: 100c01b2f;  */

void FUN_100c01ab4(undefined8 param_1)

{
  if (lRam000000011301b418 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cb518);
  return;
}



/* Entry: 100c01b30; end: 100c01b37; -[SCLensMetadataUnlockablesAttachment deepLink] */

undefined8 FUN_100c01b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c01b38; end: 100c01b3f; -[SCLensMetadataUnlockablesAttachment longFormVideoAttachment] */

undefined8 FUN_100c01b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c01b40; end: 100c01b47; -[SCLensMetadataUnlockablesAttachment webViewAttachment] */

undefined8 FUN_100c01b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c01b48; end: 100c01b4f; -[SCLensMetadataUnlockablesWebViewAttachment webViewUrl] */

undefined8 FUN_100c01b48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c01b50; end: 100c01b57; -[SCLensMetadataUnlockablesWebViewAttachment shouldAutoFill] */

undefined8 FUN_100c01b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c01b58; end: 100c01c03; -[SCUnlockablesWebViewAttachment initWithWebViewUrl:shouldAutoFill:] */

undefined1 *
FUN_100c01b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270adc8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c01c04; end: 100c01c0b; -[SCLensMetadataUnlockablesAttachment appInstallAttachment] */

undefined8 FUN_100c01c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c01c0c; end: 100c01c13; -[SCLensMetadataUnlockablesAttachment attachmentType] */

undefined8 FUN_100c01c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c01c14; end: 100c01c1b; -[SCLensMetadataUnlockablesAttachment ctaText] */

undefined8 FUN_100c01c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c01c1c; end: 100c01c23; -[SCLensMetadataUnlockablesAttachment localizedCtaText] */

undefined8 FUN_100c01c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c01c24; end: 100c01dbb; -[SCUnlockablesAttachment initWithAttachmentType:longFormVideo:webView:ctaText:appInstall:deepLink:localizedCtaText:] */

undefined1 *
FUN_100c01c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_11270adb8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c01dbc; end: 100c01ddf; -[SCUnlockablesWebViewAttachment copyWithZone:] */

undefined8 FUN_100c01dbc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c01de0; end: 100c01e03; -[SCUnlockablesAttachment copyWithZone:] */

undefined8 FUN_100c01de0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c01e04; end: 100c01e77; -[SCCTKmpStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c01e04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301d090,0);
  func_0x000107c61614(param_1 + _DAT_11301d098,0);
  *(undefined8 *)(param_1 + _DAT_11301d0a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c01e78; end: 100c01f23; -[SCCTKmpStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c01e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c01f24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c01f24; end: 100c020bb;  */

void FUN_100c01f24(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e3c2c0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f1c3d40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserSessionScopeGraphBridge/SCCTKmpStorageServicesSaberServiceProvider.swift"
                            ,0x52,2,0x54,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c020bc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c020bc; end: 100c020c7; -[SCCTKmpStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c020bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d090;
  func_0x000107c61428(param_1 + _DAT_11301d090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c020c8; end: 100c0211b;  */

void FUN_100c020c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0211c; end: 100c02127; -[SCCTKmpStorageServicesSaberServiceProvider setCreateUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0211c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d098;
  func_0x000107c61428(param_1 + _DAT_11301d098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02128; end: 100c0215b; -[SCCTKmpStorageServicesSaberServiceProvider __safeProvide] */

void FUN_100c02128(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0215c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0215c; end: 100c02243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0215c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40c10();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c022a0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11301ce00);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301d0a0);
      *(long *)(unaff_x20 + _DAT_11301d0a0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c02244; end: 100c0224f; -[SCCTKmpStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02244(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d090;
  func_0x000107c61428(param_1 + _DAT_11301d090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02250; end: 100c02293;  */

void FUN_100c02250(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02294; end: 100c0229f; -[SCCTKmpStorageServicesSaberServiceProvider createUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d098;
  func_0x000107c61428(param_1 + _DAT_11301d098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c022a0; end: 100c0231b;  */

void FUN_100c022a0(undefined8 param_1)

{
  if (lRam000000011301b278 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cb450);
  return;
}



/* Entry: 100c0231c; end: 100c0238f; -[SCSCCrashServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0231c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130533b0,0);
  func_0x000107c61614(param_1 + _DAT_1130533b8,0);
  *(undefined8 *)(param_1 + _DAT_1130533c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c02390; end: 100c0243b; -[SCSCCrashServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c02390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c0243c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0243c; end: 100c025d3;  */

void FUN_100c0243c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e1adf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f1e5210,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AppinsSystemScopeGraphBridge/SCSCCrashServicesSaberServiceProvider.swift"
                            ,0x48,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c025d4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5281c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c025d4; end: 100c025df; -[SCSCCrashServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c025d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130533b0;
  func_0x000107c61428(param_1 + _DAT_1130533b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c025e0; end: 100c02633;  */

void FUN_100c025e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02634; end: 100c0263f; -[SCSCCrashServicesSaberServiceProvider setAppinsSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130533b8;
  func_0x000107c61428(param_1 + _DAT_1130533b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02640; end: 100c02673; -[SCSCCrashServicesSaberServiceProvider __safeProvide] */

void FUN_100c02640(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c02674();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c02674; end: 100c0275b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02674(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3df28();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c027b8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113053170);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130533c0);
      *(long *)(unaff_x20 + _DAT_1130533c0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0275c; end: 100c02767; -[SCSCCrashServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0275c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130533b0;
  func_0x000107c61428(param_1 + _DAT_1130533b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02768; end: 100c027ab;  */

void FUN_100c02768(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c027ac; end: 100c027b7; -[SCSCCrashServicesSaberServiceProvider appinsSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c027ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130533b8;
  func_0x000107c61428(param_1 + _DAT_1130533b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c027b8; end: 100c02833;  */

void FUN_100c027b8(undefined8 param_1)

{
  if (lRam0000000113052c98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7e804c);
  return;
}



/* Entry: 100c02834; end: 100c028a7; -[SCSCCreativeToolsABServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02834(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301da50,0);
  func_0x000107c61614(param_1 + _DAT_11301da58,0);
  *(undefined8 *)(param_1 + _DAT_11301da60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c028a8; end: 100c02953; -[SCSCCreativeToolsABServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c028a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c02954(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c02954; end: 100c02aeb;  */

void FUN_100c02954(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e3c2c0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f1c3d40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserSessionScopeGraphBridge/SCSCCreativeToolsABServicesSaberServiceProvider.swift"
                            ,0x57,2,0x54,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c02aec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c02aec; end: 100c02af7; -[SCSCCreativeToolsABServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301da50;
  func_0x000107c61428(param_1 + _DAT_11301da50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02af8; end: 100c02b4b;  */

void FUN_100c02af8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02b4c; end: 100c02b57; -[SCSCCreativeToolsABServicesSaberServiceProvider setCreateUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301da58;
  func_0x000107c61428(param_1 + _DAT_11301da58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c02b58; end: 100c02b8b; -[SCSCCreativeToolsABServicesSaberServiceProvider __safeProvide] */

void FUN_100c02b58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c02b8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c02b8c; end: 100c02c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02b8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40c10();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c02cd0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11301ce78);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301da60);
      *(long *)(unaff_x20 + _DAT_11301da60) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c02c74; end: 100c02c7f; -[SCSCCreativeToolsABServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02c74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301da50;
  func_0x000107c61428(param_1 + _DAT_11301da50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02c80; end: 100c02cc3;  */

void FUN_100c02c80(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02cc4; end: 100c02ccf; -[SCSCCreativeToolsABServicesSaberServiceProvider createUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02cc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301da58;
  func_0x000107c61428(param_1 + _DAT_11301da58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c02cd0; end: 100c02d4b;  */

void FUN_100c02cd0(undefined8 param_1)

{
  if (lRam000000011301bd08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cb964);
  return;
}



/* Entry: 100c02d4c; end: 100c0300b; -[CTPItemsDeltaSyncProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c02d4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar10 = (long)_DAT_112725b70;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  func_0x000107c61170(uVar9);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x000107c5ae00();
  func_0x000107c61170(uVar2);
  if ((int)uVar9 == 0) {
    puVar1 = PTR_PTR_1126badd8;
    func_0x000107c610f4(PTR_PTR_1126badd8);
    lVar3 = param_1 + _DAT_112725b80;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c4a7dc();
    func_0x000107c61180();
    lVar10 = param_1 + _DAT_112725b84;
    func_0x000107c61148(lVar10);
    lVar5 = lVar10;
    func_0x000107c4a7f0();
    func_0x000107c61180();
    lVar6 = param_1 + _DAT_112725b84;
    func_0x000107c61148(lVar6);
    lVar7 = lVar6;
    func_0x000107c42f64();
    func_0x000107c61180();
    lVar8 = param_1;
    func_0x000107c3bf8c(param_1);
    func_0x000107c47a54(puVar1);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
  }
  else {
    lVar10 = param_1 + _DAT_112725b8c;
    func_0x000107c61148(lVar10);
    lVar3 = lVar10;
    func_0x000107c41778();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar1 = PTR_PTR_1126badd0;
    func_0x000107c610f4(PTR_PTR_1126badd0);
    lVar4 = param_1;
    func_0x000107c3bf8c(param_1);
    lVar10 = param_1 + _DAT_112725b74;
    func_0x000107c61148(lVar10);
    lVar5 = lVar10;
    func_0x000107c408d0();
    func_0x000107c61180();
    func_0x000107c470b0(puVar1);
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  param_1 = param_1 + _DAT_112725b7c;
  func_0x000107c61148(param_1);
  lVar10 = param_1;
  func_0x000107c4fd24();
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100c0300c; end: 100c03117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0300c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar3 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    func_0x000107c61148();
    puVar4 = PTR_PTR_1126bad58;
    func_0x000107c610f4(PTR_PTR_1126bad58);
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1 + _DAT_112725b78;
      func_0x000107c61148(lVar3);
    }
    lVar1 = lVar3;
    func_0x000107c3fa04(lVar3);
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1 + _DAT_112725b90;
      func_0x000107c61148(lVar5);
    }
    lVar2 = lVar5;
    func_0x000107c40c94(lVar5);
    func_0x000107c61180();
    func_0x000107c45ddc(puVar4,param_2,lVar1,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c03118; end: 100c031bb; -[CTPRepositoryExperimentsABTweak initWithCircumstanceEngine:creativeToolsABProvider:] */

undefined1 *
FUN_100c03118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8fc0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c031bc; end: 100c0320b; -[CTPRepositoryExperimentsABTweak shouldUseKMPDeltaSyncForPreviewBitmoji] */

undefined8 FUN_100c031bc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c09d0;
  func_0x000107c5d388();
  if (ppuVar1 == (undefined **)0x2) {
    uVar2 = 0;
  }
  else {
    if (ppuVar1 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldUseKMPDeltaSync_AB_11258b648);
      return param_1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 100c0320c; end: 100c03223; -[CTPRepositoryExperimentsABTweak _shouldUseKMPDeltaSync_AB] */

void FUN_100c0320c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110deac38,0,0);
  return;
}



/* Entry: 100c03224; end: 100c0322b; -[CTPNetworkServices itemsClient] */

undefined8 FUN_100c03224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c0322c; end: 100c032e3; -[CTPItemsDeltaSyncProcessorEntryPoint _newDeltaSyncForceFullSyncManager] */

undefined * FUN_100c0322c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return puVar1;
}



/* Entry: 100c032e4; end: 100c03433; -[CTPItemsDeltaSyncProcessor initWithNetworkItemsClient:itemsPersistenceService:feedsPersistenceService:forceFullSyncVersionManager:] */

undefined1 *
FUN_100c032e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e9008;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b0448;
    func_0x000107c610f4();
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c61158(puVar1);
    func_0x000107c3fbe0();
    func_0x000107c61180();
    func_0x000107c478bc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c03434; end: 100c0343f; +[CTPItemsDeltaSyncProcessor clientTypeName] */

undefined ** FUN_100c03434(void)

{
  return &PTR____CFConstantStringClassReference_110deb1d8;
}



/* Entry: 100c03440; end: 100c03447; -[SCDeltaSyncProcessorScope registry] */

undefined8 FUN_100c03440(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c03448; end: 100c0350f; -[CTPSearchQueriesDeltaSyncProcessorEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c0348c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c034e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c034f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c034e4) */
/* WARNING: Removing unreachable block (ram,0x000100c03490) */
/* WARNING: Removing unreachable block (ram,0x000100c034ac) */
/* WARNING: Removing unreachable block (ram,0x000100c034c0) */
/* WARNING: Removing unreachable block (ram,0x000100c034f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c03448(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272a0f8;
    func_0x000107c61148(param_1);
  }
  func_0x000107c3fa04(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c03510; end: 100c03597; -[CTPSearchQueriesDeltaSyncProcessor initWithCircumstanceEngine:] */

undefined1 * FUN_100c03510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ea6a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c03598; end: 100c0361f; -[SCAddFriendQRCodeSyncProcessorEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c03598(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6e610,0);
  func_0x000107c61614(param_1 + _DAT_112d6e618,0);
  func_0x000107c61614(param_1 + _DAT_112d6e620,0);
  *(undefined8 *)(param_1 + _DAT_112d6e628) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c03620; end: 100c036cb; -[SCAddFriendQRCodeSyncProcessorEntryPoint setValue:forIvarName:] */

void FUN_100c03620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c036cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c036cc; end: 100c038cf;  */

void FUN_100c036cc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10cd380)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef32c80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10ecd10)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef132f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCAddFriendQRCodeServicesImplementation/SCAddFriendQRCodeSyncProcessorEntryPoint.swift"
                              ,0x56,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c038d0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c527b4();
        goto LAB_100c03758;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5247c();
  }
LAB_100c03758:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c038d0; end: 100c038db; -[SCAddFriendQRCodeSyncProcessorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c038d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e610;
  func_0x000107c61428(param_1 + _DAT_112d6e610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c038dc; end: 100c0392f;  */

void FUN_100c038dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c03930; end: 100c039cb; -[SCAddFriendQRCodeServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c03930(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6e530,0);
  func_0x000107c61614(param_1 + _DAT_112d6e538,0);
  func_0x000107c61614(param_1 + _DAT_112d6e540,0);
  func_0x000107c61614(param_1 + _DAT_112d6e548,0);
  *(undefined8 *)(param_1 + _DAT_112d6e550) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c039cc; end: 100c03a77; -[SCAddFriendQRCodeServiceProvider setValue:forIvarName:] */

void FUN_100c039cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c03a78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c03a78; end: 100c03cef;  */

void FUN_100c03a78(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x53656761726f7473;
  if ((param_2 == 0x53656761726f7473 && param_3 == -0x108c9a9c96898d9b) ||
     (func_0x000107c605b8(0x53656761726f7473,0xef73656369767265,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c598dc();
  }
  else {
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10cd3a0)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef32c60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCAddFriendQRCodeServicesImplementation/SCAddFriendQRCodeServiceProvider.swift"
                                    ,0x4e,2,0x3b,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100c03cf0);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54f40();
            goto LAB_100c03b0c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a3f8();
        goto LAB_100c03b0c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54000();
  }
LAB_100c03b0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c03cf0; end: 100c03cfb; -[SCAddFriendQRCodeServiceProvider setStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c03cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e530;
  func_0x000107c61428(param_1 + _DAT_112d6e530,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c03cfc; end: 100c03d4f;  */

void FUN_100c03cfc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c03d50; end: 100c03dc3; -[SCSCDeltaSyncServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c03d50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11303f240,0);
  func_0x000107c61614(param_1 + _DAT_11303f248,0);
  *(undefined8 *)(param_1 + _DAT_11303f250) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c03dc4; end: 100c03e6f; -[SCSCDeltaSyncServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c03dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c03e70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c03e70; end: 100c04007;  */

void FUN_100c03e70(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e27380)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1d8c80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MmUserSessionScopeGraphBridge/SCSCDeltaSyncServicesSaberServiceProvider.swift"
                            ,0x4d,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c04008);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c04008; end: 100c04013; -[SCSCDeltaSyncServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303f240;
  func_0x000107c61428(param_1 + _DAT_11303f240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04014; end: 100c04067;  */

void FUN_100c04014(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04068; end: 100c04073; -[SCSCDeltaSyncServicesSaberServiceProvider setMmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303f248;
  func_0x000107c61428(param_1 + _DAT_11303f248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04074; end: 100c040a7; -[SCSCDeltaSyncServicesSaberServiceProvider __safeProvide] */

void FUN_100c04074(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c040a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c040a8; end: 100c0418f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c040a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d014();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c041ec();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11303f078);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11303f250);
      *(long *)(unaff_x20 + _DAT_11303f250) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c04190; end: 100c0419b; -[SCSCDeltaSyncServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04190(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303f240;
  func_0x000107c61428(param_1 + _DAT_11303f240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0419c; end: 100c041df;  */

void FUN_100c0419c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c041e0; end: 100c041eb; -[SCSCDeltaSyncServicesSaberServiceProvider mmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c041e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303f248;
  func_0x000107c61428(param_1 + _DAT_11303f248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c041ec; end: 100c04267;  */

void FUN_100c041ec(undefined8 param_1)

{
  if (lRam000000011303ec78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7de3f0);
  return;
}



/* Entry: 100c04268; end: 100c04273; -[SCAddFriendQRCodeServiceProvider setDeltaSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e538;
  func_0x000107c61428(param_1 + _DAT_112d6e538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


