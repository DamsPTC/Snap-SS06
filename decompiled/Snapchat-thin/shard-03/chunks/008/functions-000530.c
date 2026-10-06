/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cf3b68; end: 102cf3bab;  */

void FUN_102cf3b68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102cf3bac; end: 102cf3bb7; -[SCLegacyLiveLensPreviewPageLauncherPayload setCameraScopeDismissalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d2b8;
  func_0x000107c61428(param_1 + _DAT_112f0d2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cf3bb8; end: 102cf3c0b;  */

void FUN_102cf3bb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cf3c0c; end: 102cf3da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102cf3c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f0d288;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d288,0);
  lVar3 = _DAT_112f0d2b0;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d2b0,0);
  lVar4 = _DAT_112f0d2b8;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d2b8,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f0d290) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d298) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d2a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d2a8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  puVar5 = auStack_b8;
  func_0x000107c61154(puVar5,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  return puVar5;
}



/* Entry: 102cf3da4; end: 102cf3e73; -[SCLegacyLiveLensPreviewPageLauncherPayload initWithPresentingViewController:replyConfiguration:lensDataProvider:context:cameraViewType:captureWorkflowResultDelegate:cameraScopeDismissalDelegate:] */

undefined8
FUN_102cf3da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  uVar1 = param_3;
  FUN_102cf3f10(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  return uVar1;
}



/* Entry: 102cf3e74; end: 102cf3ea7;  */

void FUN_102cf3e74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cf3ea8; end: 102cf3f0f; -[SCLegacyLiveLensPreviewPageLauncherPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cf3ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf3ef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cf3ea8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f0d288);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d290));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d298));
  param_1 = param_1 + _DAT_112f0d2b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cf3f10; end: 102cf406f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f0d288;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d288,0);
  lVar3 = _DAT_112f0d2b0;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d2b0,0);
  lVar4 = _DAT_112f0d2b8;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d2b8,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f0d290) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d298) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d2a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d2a8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 102cf4070; end: 102cf408f;  */

void FUN_102cf4070(void)

{
  func_0x000107c61168(&PTR_PTR_11289fe50);
  return;
}



/* Entry: 102cf4090; end: 102cf409b; -[OperaPlaylistAdPlugin adDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf4090(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112f0d2e8) != 0) {
    func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf40d8);
  (*pcVar1)();
}



/* Entry: 102cf409c; end: 102cf40a7; -[OperaPlaylistAdPlugin operaAdapter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf409c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112f0d2f0) != 0) {
    func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf40d8);
  (*pcVar1)();
}



/* Entry: 102cf40a8; end: 102cf40b3; -[OperaPlaylistAdPlugin adTrackerHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf40a8(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112f0d2f8) != 0) {
    func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf40d8);
  (*pcVar1)();
}



/* Entry: 102cf40b4; end: 102cf40d7;  */

void FUN_102cf40b4(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + *param_3) != 0) {
    func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf40d8);
  (*pcVar1)();
}



/* Entry: 102cf40d8; end: 102cf5953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cf40d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined *param_17,
                  undefined8 param_18,long param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
                  undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
                  undefined8 param_30,long param_31,long param_32,undefined8 param_33,
                  undefined8 param_34,long param_35,undefined8 param_36,undefined8 param_37,
                  undefined8 param_38,undefined8 param_39,undefined8 param_40,undefined8 param_41,
                  undefined8 param_42,undefined8 param_43,undefined8 param_44,undefined8 param_45,
                  undefined8 param_46,undefined8 param_47,long param_48,long param_49)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  long unaff_x20;
  undefined8 uStack_280;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  if ((param_48 != 0) && (param_49 != 0)) {
    func_0x000107c615f0(param_48);
    func_0x000107c615f0(param_49);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f109390);
    lVar3 = param_49;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    if ((int)lVar3 == 0) {
      func_0x000107c615e8(param_48);
      lVar3 = param_49;
    }
    else {
      func_0x0001000ab060(0);
      func_0x000100079360(0);
      lVar3 = 0;
      func_0x00010099a028(0);
      func_0x0001048b1f78();
      lVar4 = lVar3;
      func_0x00010099a09c();
      func_0x000107c61170(lVar3);
      uVar2 = 0;
      func_0x0001000aad1c(0);
      func_0x0001000aad3c();
      puVar5 = &UNK_1105c16a0;
      func_0x000107c613fc(&UNK_1105c16a0,0x18,7);
      *(long *)(puVar5 + 0x10) = param_48;
      func_0x000107c615f0(param_48);
      lVar3 = lVar4;
      func_0x000104891d5c(lVar4,uVar2,0,0,FUN_102cf92fc,puVar5);
      func_0x000107c615e8(param_48);
      func_0x000107c615e8(param_49);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c615e8(lVar3);
  }
  if (param_17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5920);
    (*pcVar1)();
  }
  puVar5 = param_17;
  func_0x000107c3d50c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ca130;
  func_0x000107c610f8();
  func_0x000107c46500();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5924);
    (*pcVar1)();
  }
  puVar7 = PTR_PTR_1126ca138;
  func_0x000107c610f8();
  func_0x000107c455b0();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5928);
    (*pcVar1)();
  }
  puVar8 = PTR_PTR_1126ca140;
  func_0x000107c610f8();
  func_0x000107c4714c();
  func_0x000107c61170(puVar7);
  func_0x000107c5def0(param_17);
  puVar7 = param_17;
  func_0x000107c3d278(param_17);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ca148;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c455b4();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf592c);
    (*pcVar1)();
  }
  if (param_6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5930);
    (*pcVar1)();
  }
  if (param_10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5934);
    (*pcVar1)();
  }
  if (param_5 != 0) {
    uVar2 = *(undefined8 *)(param_10 + _DAT_113010c08);
    func_0x000107c61174();
    func_0x000107c61174(uVar2);
    func_0x000107c615f0(param_5);
    func_0x000107c5def0(param_17);
    puVar7 = PTR_PTR_1126ca150;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c45574();
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_5);
    puVar10 = PTR_PTR_1126ca158;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar11 = PTR_PTR_1126ca160;
    func_0x000107c610f8();
    func_0x000107c455a0();
    func_0x000107c4dee4();
    if (param_7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf593c);
      (*pcVar1)();
    }
    if (param_32 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5940);
      (*pcVar1)();
    }
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5944);
      (*pcVar1)();
    }
    puVar12 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c61174();
    func_0x000107c615f0(puVar5);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c453e4(puVar12);
    if (param_19 != 0) {
      func_0x000107c615f0(param_19);
      puVar13 = param_17;
      func_0x000107c408d0();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
        puVar13 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        pcStack_78 = FUN_102cf5954;
        uStack_70 = 0;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        uStack_88 = 0x102cf9330;
        puStack_80 = &UNK_1105c1618;
        ppuVar14 = &puStack_98;
        func_0x000107c60bc4(ppuVar14);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar14);
      }
      pcVar15 = 
      "init(deepLinkId:groupAdDataSource:adNetwork:appImpressionTracker:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:streamingMediaFetcher:adOperationalLoggingServices:adReportEventTrackerProvider:circumstanceEngine:notificationManager:sessionViewingHistory:adEOVTimerProvider:audioSession:dataSourceDependencies:memoryPressureState:applicationLifecycleEvents:boostCoordinator:layerViewControllerFactory:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:skOverlayPreloader:skOverlayLifecycleTracker:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:adTrackFunnelEventTracker:trackSeqNumProvider:adBrowserLifecycleService:applicationPreferences:playbackSessionObservableRepository:attachmentPreloader:sharingPresenterProvider:imageSourceProvider:imageFetchingService:storiesConfigProvider:webBrowserLayerViewControllerFactory:adWebviewOperationEventRepository:userAdIdProvider:deckHierarchyFactory:userPreferences:browserPrivacyConsentInfoManager:localNotificationScheduler:userInfoAdapter:appStartExperimentReader:)"
      ;
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar16 = param_17;
      func_0x000107c422a4();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        puVar16 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        pcStack_78 = (code *)0x102cf5978;
        uStack_70 = 0;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        uStack_88 = 0x102cf932c;
        puStack_80 = &UNK_1105c1640;
        ppuVar14 = &puStack_98;
        func_0x000107c60bc4(ppuVar14);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar14);
      }
      puVar17 = PTR_PTR_1126ca168;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c455a8();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_32);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar12);
      func_0x000107c615e8(param_19);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar13);
      func_0x000107c615e8(pcVar15);
      func_0x000107c61170(puVar16);
      puVar12 = PTR_PTR_1126ae820;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4d664(puVar12);
      func_0x000107c61170(puVar13);
      puVar13 = param_17;
      func_0x000107c5da60();
      func_0x000107c61180();
      func_0x000107c5def0();
      puVar16 = param_17;
      func_0x000107c4df5c();
      func_0x000107c61180();
      puVar18 = param_17;
      func_0x000107c5d390();
      func_0x000107c61180();
      func_0x000107c4dee4();
      puVar19 = param_17;
      func_0x000107c3d278();
      func_0x000107c61180();
      puVar20 = param_17;
      func_0x000107c5cdd8();
      func_0x000107c61180();
      puVar21 = param_17;
      func_0x000107c4f448();
      func_0x000107c61180();
      puVar22 = param_17;
      func_0x000107c4e1f0();
      func_0x000107c61180();
      puVar23 = param_17;
      func_0x000107c444a4();
      func_0x000107c61180();
      lVar3 = _DAT_113010c08;
      uVar2 = *(undefined8 *)(param_10 + _DAT_113010c08);
      func_0x000107c61174();
      puVar24 = param_17;
      func_0x000107c408d0();
      func_0x000107c61180();
      if (param_2 == 0) {
        func_0x000107c61174();
        func_0x000107c61174(puVar12);
        puVar25 = puVar10;
        func_0x000107c61174(puVar10);
        func_0x000107c61174(puVar6);
        func_0x000107c61174();
        func_0x000107c615f0(puVar5);
        func_0x000107c61174(param_7);
        func_0x000107c61174(puVar25);
        func_0x000107c61174(puVar8);
        func_0x000107c61174();
        func_0x000107c615f0(param_12);
        func_0x000107c61174();
        uVar37 = 0;
      }
      else {
        func_0x000107c61174();
        func_0x000107c61174(puVar12);
        func_0x000107c61434(param_2);
        puVar25 = puVar10;
        func_0x000107c61174(puVar10);
        func_0x000107c61174(puVar6);
        func_0x000107c61174();
        func_0x000107c615f0(puVar5);
        func_0x000107c61174(param_7);
        func_0x000107c61174(puVar25);
        func_0x000107c61174(puVar8);
        func_0x000107c61174();
        func_0x000107c615f0(param_12);
        func_0x000107c61174();
        uVar37 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c6142c(param_2);
      }
      puVar25 = PTR_PTR_1126ca170;
      func_0x000107c610f8();
      func_0x000107c4931c();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_15);
      func_0x000107c61170(puVar23);
      func_0x000107c615e8(param_12);
      func_0x000107c61170(param_18);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(param_14);
      func_0x000107c61170(uVar37);
      if (puVar25 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf594c);
        (*pcVar1)();
      }
      if (param_35 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5950);
        (*pcVar1)();
      }
      if (param_31 != 0) {
        func_0x000107c61174();
        func_0x000107c615f0(puVar5);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615f0(param_19);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c4dee4();
        puVar13 = param_17;
        func_0x000107c408d0();
        func_0x000107c61180();
        if (puVar13 == (undefined *)0x0) {
          puVar13 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          pcStack_78 = (code *)0x102cf5980;
          uStack_70 = 0;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          uStack_88 = 0x102cf9330;
          puStack_80 = &UNK_1105c1668;
          ppuVar14 = &puStack_98;
          func_0x000107c60bc4(ppuVar14);
          func_0x000107c3e4fc();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar14);
        }
        puVar16 = PTR_PTR_1126ca180;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c455a4();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(param_32);
        func_0x000107c61170(param_35);
        func_0x000107c615e8(param_19);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(param_31);
        func_0x000107c61170(puVar13);
        puVar13 = param_17;
        func_0x000107c5da60();
        func_0x000107c61180();
        func_0x000107c5def0();
        puVar18 = param_17;
        func_0x000107c4df5c();
        func_0x000107c61180();
        puVar19 = param_17;
        func_0x000107c5d390();
        func_0x000107c61180();
        func_0x000107c4dee4();
        puVar20 = param_17;
        func_0x000107c3d278();
        func_0x000107c61180();
        puVar21 = param_17;
        func_0x000107c42b90();
        func_0x000107c61180();
        uVar2 = *(undefined8 *)(param_10 + lVar3);
        uVar37 = *(undefined8 *)(param_10 + _DAT_113010bf0);
        func_0x000107c61174();
        func_0x000107c61174();
        puVar22 = param_17;
        func_0x000107c3d28c();
        func_0x000107c61180();
        puVar23 = param_17;
        func_0x000107c4e1f0();
        func_0x000107c61180();
        puVar24 = param_17;
        func_0x000107c4d80c();
        func_0x000107c61180();
        puVar26 = param_17;
        func_0x000107c444a4();
        func_0x000107c61180();
        puVar27 = param_17;
        func_0x000107c5da24();
        func_0x000107c61180();
        puVar28 = param_17;
        func_0x000107c3d3c4();
        func_0x000107c61180();
        uVar29 = *(undefined8 *)(param_10 + _DAT_113010c28);
        func_0x000107c61174();
        puVar30 = param_17;
        func_0x000107c40580();
        func_0x000107c61180();
        puVar31 = param_17;
        func_0x000107c408d0();
        func_0x000107c61180();
        puVar32 = param_17;
        func_0x000107c422a4();
        func_0x000107c61180();
        puVar33 = param_17;
        func_0x000107c4e8e4();
        func_0x000107c61180();
        puVar34 = param_17;
        func_0x000107c4f454();
        func_0x000107c61180();
        puVar35 = param_17;
        func_0x000107c4c9d8();
        func_0x000107c61180();
        if (param_2 == 0) {
          func_0x000107c61174();
          func_0x000107c61174(puVar16);
          puVar36 = puVar25;
          func_0x000107c61174(puVar25);
          func_0x000107c61174(puVar6);
          func_0x000107c615f0(param_5);
          func_0x000107c615f0(puVar5);
          func_0x000107c61174(param_7);
          func_0x000107c615f0(param_19);
          func_0x000107c61174(puVar10);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(param_14);
          func_0x000107c615f0(param_12);
          func_0x000107c61174(param_15);
          func_0x000107c61174(param_18);
          func_0x000107c61174(puVar12);
          func_0x000107c61174(puVar7);
          func_0x000107c61174(puVar11);
          func_0x000107c61174(puVar9);
          func_0x000107c61174(puVar36);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c615f0(param_39);
          uStack_280 = 0;
          uStack_190 = param_13;
          uStack_188 = param_4;
          uStack_180 = param_16;
          uStack_178 = param_11;
          uStack_170 = param_20;
          uStack_160 = param_9;
          uStack_158 = param_47;
          uStack_150 = param_40;
        }
        else {
          func_0x000107c61174();
          func_0x000107c61174(puVar16);
          puVar36 = puVar25;
          func_0x000107c61174(puVar25);
          func_0x000107c61174(puVar6);
          func_0x000107c615f0(param_5);
          func_0x000107c615f0(puVar5);
          func_0x000107c61174(param_7);
          func_0x000107c615f0(param_19);
          func_0x000107c61174(puVar10);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(param_14);
          func_0x000107c615f0(param_12);
          func_0x000107c61174(param_15);
          func_0x000107c61174(param_18);
          func_0x000107c61174(puVar12);
          func_0x000107c61174(puVar7);
          func_0x000107c61174(puVar11);
          func_0x000107c61174(puVar9);
          func_0x000107c61174(puVar36);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c615f0(param_39);
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c6142c(param_2);
          uStack_280 = param_1;
          uStack_190 = param_13;
          uStack_188 = param_4;
          uStack_180 = param_16;
          uStack_178 = param_11;
          uStack_170 = param_20;
          uStack_160 = param_9;
          uStack_158 = param_47;
          uStack_150 = param_40;
        }
        puVar36 = PTR_PTR_1126ca188;
        func_0x000107c610f8();
        func_0x000107c49318();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar25);
        func_0x000107c61170(puVar18);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar19);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar37);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(param_7);
        func_0x000107c61170(uStack_178);
        func_0x000107c61170(puVar23);
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar26);
        func_0x000107c61170(uStack_160);
        func_0x000107c61170(puVar27);
        func_0x000107c61170(uStack_190);
        func_0x000107c61170(puVar28);
        func_0x000107c61170(uStack_188);
        func_0x000107c615e8(param_5);
        func_0x000107c615e8(param_12);
        func_0x000107c61170(param_15);
        func_0x000107c61170(param_14);
        func_0x000107c61170(uStack_180);
        func_0x000107c61170(uVar29);
        func_0x000107c61170(param_18);
        func_0x000107c61170(puVar12);
        func_0x000107c615e8(param_19);
        func_0x000107c61170(uStack_170);
        func_0x000107c61170(puVar30);
        func_0x000107c61170(param_26);
        func_0x000107c61170(param_27);
        func_0x000107c61170(puVar31);
        func_0x000107c61170(param_33);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(param_34);
        func_0x000107c61170(param_36);
        func_0x000107c61170(param_38);
        func_0x000107c615e8(param_39);
        func_0x000107c61170(uStack_150);
        func_0x000107c61170(puVar32);
        func_0x000107c61170(puVar33);
        func_0x000107c61170(puVar34);
        func_0x000107c61170(puVar35);
        func_0x000107c61170(uStack_158);
        func_0x000107c61170(uStack_280);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c5def0();
        func_0x000107c455ac();
        func_0x000107c61170(param_3);
        func_0x000107c61170(uStack_188);
        func_0x000107c615e8(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(uStack_160);
        func_0x000107c61170(param_10);
        func_0x000107c61170(uStack_178);
        func_0x000107c615e8(param_12);
        func_0x000107c61170(uStack_190);
        func_0x000107c61170(param_14);
        func_0x000107c61170(param_15);
        func_0x000107c61170(uStack_180);
        func_0x000107c61170(param_17);
        func_0x000107c61170(param_18);
        func_0x000107c615e8(param_19);
        func_0x000107c61170(uStack_170);
        func_0x000107c61170(param_21);
        func_0x000107c61170(param_22);
        func_0x000107c61170(param_23);
        func_0x000107c61170(param_24);
        func_0x000107c61170(param_25);
        func_0x000107c61170(param_26);
        func_0x000107c61170(param_27);
        func_0x000107c61170(param_28);
        func_0x000107c61170(param_29);
        func_0x000107c61170(param_30);
        func_0x000107c61170(param_31);
        func_0x000107c61170(param_32);
        func_0x000107c61170(param_33);
        func_0x000107c61170(param_34);
        func_0x000107c61170(param_35);
        func_0x000107c61170(param_36);
        func_0x000107c61170(param_37);
        func_0x000107c61170(param_38);
        func_0x000107c615e8(param_39);
        func_0x000107c61170(uStack_150);
        func_0x000107c61170(param_41);
        func_0x000107c615e8(param_42);
        func_0x000107c61170(param_43);
        func_0x000107c61170(param_44);
        func_0x000107c61170(param_45);
        func_0x000107c61170(param_46);
        func_0x000107c61170(uStack_158);
        func_0x000107c61170(puVar36);
        func_0x000107c61170(puVar36);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar12);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar25);
        func_0x000107c61170(puVar10);
        func_0x000107c615e8(param_48);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d300);
        *(undefined **)(unaff_x20 + _DAT_112f0d300) = puVar8;
        func_0x000107c61174();
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d308);
        *(undefined **)(unaff_x20 + _DAT_112f0d308) = puVar10;
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d310);
        *(undefined **)(unaff_x20 + _DAT_112f0d310) = puVar16;
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d318);
        *(undefined **)(unaff_x20 + _DAT_112f0d318) = puVar25;
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d320);
        *(long *)(unaff_x20 + _DAT_112f0d320) = param_49;
        func_0x000107c61170(unaff_x20);
        func_0x000107c615e8(uVar2);
        return unaff_x20;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5954);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5948);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf5938);
  (*pcVar1)();
}



/* Entry: 102cf5954; end: 102cf5987;  */

undefined8 FUN_102cf5954(void)

{
  return 0;
}



/* Entry: 102cf5988; end: 102cf59a7;  */

void FUN_102cf5988(void)

{
  long unaff_x20;
  
  func_0x000107c43f54(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102cf59a8; end: 102cf6a57; -[OperaPlaylistAdPlugin initWithDeepLinkId:groupAdDataSource:adNetwork:appImpressionTracker:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:streamingMediaFetcher:adOperationalLoggingServices:adReportEventTrackerProvider:circumstanceEngine:notificationManager:sessionViewingHistory:adEOVTimerProvider:audioSession:dataSourceDependencies:memoryPressureState:applicationLifecycleEvents:boostCoordinator:layerViewControllerFactory:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:skOverlayPreloader:skOverlayLifecycleTracker:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:adTrackFunnelEventTracker:trackSeqNumProvider:adBrowserLifecycleService:applicationPreferences:playbackSessionObservableRepository:attachmentPreloader:sharingPresenterProvider:imageSourceProvider:imageFetchingService:storiesConfigProvider:webBrowserLayerViewControllerFactory:adWebviewOperationEventRepository:userAdIdProvider:deckHierarchyFactory:userPreferences:browserPrivacyConsentInfoManager:localNotificationScheduler:userInfoAdapter:appStartExperimentReader:] */

void FUN_102cf59a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50)

{
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  
  if (param_3 == 0) {
    uStack_1a8 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_1a8 = param_2;
    uStack_1a0 = param_3;
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c615f0(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c615f0(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c615f0(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c615f0(param_49);
  func_0x000107c615f0();
  FUN_102cf40d8(uStack_1a0,uStack_1a8,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36,param_37,
                param_38,param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,
                param_47,param_48,param_49,param_50);
  return;
}



/* Entry: 102cf6a58; end: 102cf6a5f;  */

void FUN_102cf6a58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102cf6a60; end: 102cf6a97;  */

void FUN_102cf6a60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102cf6a98; end: 102cf6cdb; -[OperaPlaylistAdPlugin initWithAdDataSource:adSession:operaAdapter:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:viewLocation:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:layerViewControllerFactory:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:adBrowserLifecycleService:adTrackFunnelEventTracker:adTrackerHelper:playbackSessionObservableRepository:trackSeqNumProvider:webBrowserLayerViewControllerFactory:adWebviewOperationEventRepository:userAdIdProvider:deckHierarchyFactory:userPreferences:circumstanceEngine:browserPrivacyConsentInfoManager:] */

void FUN_102cf6a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c615f0(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c615f0(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c615f0(param_28);
  func_0x000107c61174(param_29);
  func_0x000102cf6408(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                      param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,
                      param_28,param_29);
  return;
}



/* Entry: 102cf6cdc; end: 102cf718b;  */

/* WARNING: Possible PIC construction at 0x000102cf6d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf6ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf7068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf70c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf7100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf7144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf7104) */
/* WARNING: Removing unreachable block (ram,0x000102cf7108) */
/* WARNING: Removing unreachable block (ram,0x000102cf7110) */
/* WARNING: Removing unreachable block (ram,0x000102cf7114) */
/* WARNING: Removing unreachable block (ram,0x000102cf7174) */
/* WARNING: Removing unreachable block (ram,0x000102cf7130) */
/* WARNING: Removing unreachable block (ram,0x000102cf706c) */
/* WARNING: Removing unreachable block (ram,0x000102cf7078) */
/* WARNING: Removing unreachable block (ram,0x000102cf707c) */
/* WARNING: Removing unreachable block (ram,0x000102cf7090) */
/* WARNING: Removing unreachable block (ram,0x000102cf70a4) */
/* WARNING: Removing unreachable block (ram,0x000102cf70c8) */
/* WARNING: Removing unreachable block (ram,0x000102cf70b4) */
/* WARNING: Removing unreachable block (ram,0x000102cf6ffc) */
/* WARNING: Removing unreachable block (ram,0x000102cf7148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf6cdc(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adLifecycleEventObservable_11259a640);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c3d31c();
    func_0x000107c61180();
    if (uVar1 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
      if (lVar3 != 0) {
        func_0x000107c615f0(lVar3);
        func_0x000107c52310();
        goto code_r0x000107c615e8;
      }
      func_0x000107c61170(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adAppInstallEventObservable_11259a098);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c3d200(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c52258();
      goto code_r0x000107c615e8;
    }
    func_0x000107c61170(uVar1);
  }
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adAdToMessageEventObservable_11259a080);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c3d1f8(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c52254();
      goto code_r0x000107c615e8;
    }
    func_0x000107c61170(uVar1);
  }
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adDeepLinkEventObservable_11259a368);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c3d2b0(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c522b8();
      goto code_r0x000107c615e8;
    }
    func_0x000107c61170(uVar1);
  }
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adDeepLinkEventObservableV2_11259a370);
  if ((uVar1 & 1) != 0) {
    func_0x000107c3d2b4(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c522bc();
      goto code_r0x000107c615e8;
    }
    func_0x000107c61170(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d308) != 0) {
    func_0x000107c3e7b8();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d368);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e7b8();
      goto code_r0x000107c615e8;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d328) != 0) {
    func_0x000107c3e7b8();
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d2e8) != 0) {
    func_0x000107c3e7b8();
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d3c0);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e7b8();
      goto code_r0x000107c615e8;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d370);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e7b8();
      goto code_r0x000107c615e8;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d3e8) != 0) {
    func_0x000107c3e7b8();
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d310);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3e7b8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    func_0x000107c61170(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d388);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5fadc(0xd000000000000035,0x800000010f1093b0);
      func_0x000107c3ebdc(lVar3);
      goto code_r0x000107c615e8;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d390);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c42600();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 102cf718c; end: 102cf7197; -[OperaPlaylistAdPlugin beginObservationWithAdUnifiedEventObservableBus:] */

void FUN_102cf718c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf6cdc(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7198; end: 102cf7227; -[OperaPlaylistAdPlugin setEventListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0d338);
  *(undefined8 *)(param_1 + _DAT_112f0d338) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  lVar1 = param_1 + _DAT_112f0d348;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c54690();
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7228; end: 102cf723f; -[OperaPlaylistAdPlugin setAdPlaybackConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7228(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d2e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c163e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d2e8),PTR_s_setAdPlaybackConfig__1126369a8);
    return;
  }
  return;
}



/* Entry: 102cf7240; end: 102cf7257; -[OperaPlaylistAdPlugin markAsCollectionViewAutoPlaySession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7240(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d318) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0bb070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d318),PTR_s_markAsCollectionViewAutoPlay_11260c630);
    return;
  }
  return;
}



/* Entry: 102cf7258; end: 102cf72d7;  */

/* WARNING: Possible PIC construction at 0x000102cf7290: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7258(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f0d340,param_1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d328);
  if (lVar1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112f0d2e8) != 0) {
      func_0x000107c5752c();
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
    if (lVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1dddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setPlaylistItemController__1126551a0,param_1);
  return;
}



/* Entry: 102cf72d8; end: 102cf72e3; -[OperaPlaylistAdPlugin setPlaylistItemController:] */

void FUN_102cf72d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf7258(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf72e4; end: 102cf744b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf72e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_112f0d328;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d328);
  if (lVar2 != 0) {
    if (param_1 == 0) {
      func_0x000107c615f0(lVar2);
      lVar3 = 0;
    }
    else {
      func_0x000107c615f0(lVar2);
      lVar3 = param_1;
      func_0x000107c49854(param_1);
      func_0x000107c61180();
    }
    func_0x000107c5700c(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar3);
  }
  if (param_1 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112f0d2e8) != 0) {
      func_0x000107c57008();
    }
  }
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c57008();
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d2f0) != 0) {
    func_0x000107c57008();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d398);
  if (lVar1 == 0) goto LAB_102cf7428;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) goto LAB_102cf7428;
  if (param_1 == 0) {
LAB_102cf7408:
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c4df5c();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_102cf7408;
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c574e0(lVar1);
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(lVar3);
LAB_102cf7428:
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_112f0d350,param_1);
  return;
}



/* Entry: 102cf744c; end: 102cf7493; -[OperaPlaylistAdPlugin setOperaControlling:] */

void FUN_102cf744c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf72e4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7494; end: 102cf74b3; -[OperaPlaylistAdPlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7494(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f0d2e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cf74b4; end: 102cf793b; -[OperaPlaylistAdPlugin updateOperaDependencies:] */

/* WARNING: Removing unreachable block (ram,0x000102cf7574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf74b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010444e818(0);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x00010444c308(param_3);
  func_0x00010444c30c(*(undefined8 *)(param_1 + _DAT_112f0d3f8));
  func_0x000107c61170();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0d400);
  func_0x00010444c344(uVar2);
  func_0x000107c61170();
  func_0x00010444cba8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cf793c; end: 102cf7997; -[OperaPlaylistAdPlugin updateOperaConfiguration:] */

void FUN_102cf793c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102cf7594(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cf7998; end: 102cf79eb;  */

/* WARNING: Possible PIC construction at 0x000102cf79bc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7998(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d328);
  if ((lVar1 == 0) && (lVar1 = *(long *)(unaff_x20 + _DAT_112f0d2e8), lVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d5370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setOperaConfiguration__112652f00,param_1);
  return;
}



/* Entry: 102cf79ec; end: 102cf7a3b; -[OperaPlaylistAdPlugin didFinishOperaConfigurationSetup:] */

/* WARNING: Possible PIC construction at 0x000102cf7a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf7a28) */

void FUN_102cf79ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf7998(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cf7a3c; end: 102cf7a3f; -[OperaPlaylistAdPlugin extraPropertiesProvider] */

void FUN_102cf7a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cf7a40; end: 102cf7b47;  */

/* WARNING: Possible PIC construction at 0x000102cf7b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf7b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7a40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112f0d328;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f0d328) != 0) {
    func_0x000107c5c7a8();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c615e8(uVar1);
  lVar2 = _DAT_112f0d2e8;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f0d2e8) != 0) {
    func_0x000107c5c7ac();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c615e8(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d3c0);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3d47c();
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d3d0);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3d3bc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      uVar1 = 0;
      func_0x00010468d158(0);
      func_0x00010468d04c();
      func_0x000107c4d664(lVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 102cf7b48; end: 102cf7b6f; -[OperaPlaylistAdPlugin teardown] */

void FUN_102cf7b48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cf7a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7b70; end: 102cf7c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7b70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f0d348,param_1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d2f0);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c615f4(lVar2,2);
    func_0x000107c4fcec();
    func_0x000107c61180();
    func_0x000107c3d744(param_1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0d360);
    if (lVar1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c3e824();
        func_0x000107c615e8(lVar2);
        lVar2 = lVar1;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d338) != 0) {
    func_0x000107c54690();
  }
  if (*(long *)(unaff_x20 + _DAT_112f0d328) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c197690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f0d328),PTR_s_setEventAnnouncing__1126437c0,param_1);
    return;
  }
  return;
}



/* Entry: 102cf7c70; end: 102cf7c7b; -[OperaPlaylistAdPlugin addEventListenersWithEventAnnouncing:] */

void FUN_102cf7c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf7b70(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7c7c; end: 102cf7ccf;  */

void FUN_102cf7c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7cd0; end: 102cf7d13; -[OperaPlaylistAdPlugin type] */

void FUN_102cf7cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000103b7d088();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cf7d14; end: 102cf7dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0d330);
  *(undefined8 *)(unaff_x20 + _DAT_112f0d330) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d358) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f0d348);
  func_0x000107c61618();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x000103b81490();
    uVar4 = *puVar3;
    uVar1 = puVar3[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4df78(puVar2);
    func_0x000107c615e8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 102cf7dc8; end: 102cf7e2b; -[OperaPlaylistAdPlugin adPlaybackDidRegisterFeaturePlugIns:] */

void FUN_102cf7dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f07820;
  func_0x0001000285a8(0x112f07820,&UNK_10db3ac20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102cf7d14(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cf7e2c; end: 102cf7eff; -[OperaPlaylistAdPlugin reloadPageWithItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7e2c(long param_1)

{
  param_1 = param_1 + _DAT_112f0d340;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102cf7f00; end: 102cf7f27; -[OperaPlaylistAdPlugin dismissViewFromCloseButton] */

void FUN_102cf7f00(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102cf7e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf7f28; end: 102cf8033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf7f28(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    lVar2 = unaff_x20 + _DAT_112f0d350;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5df08();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar1 != 0) {
        func_0x000107c4e1cc(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  lVar2 = unaff_x20 + _DAT_112f0d350;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5df08();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      uVar3 = 0x112f0d418;
      lVar2 = 0;
      FUN_102cf9234(0,0x112f0d418,&PTR_PTR_1126ca0f8);
      func_0x000107c614e8();
      func_0x000107c60b14();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar3);
      }
      func_0x000107c4e484(lVar1);
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102cf8034; end: 102cf8063; -[OperaPlaylistAdPlugin pausePlaybackWithOverride:] */

void FUN_102cf8034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102cf7f28(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf8064; end: 102cf8117;  */

/* WARNING: Possible PIC construction at 0x000102cf80a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf80b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf80e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf80a8) */
/* WARNING: Removing unreachable block (ram,0x000102cf80ac) */
/* WARNING: Removing unreachable block (ram,0x000102cf80e8) */
/* WARNING: Removing unreachable block (ram,0x000102cf80ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf8064(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    lVar1 = unaff_x20 + _DAT_112f0d350;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5df08();
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
  }
  lVar1 = unaff_x20 + _DAT_112f0d350;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5df08();
  func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102cf8118; end: 102cf81e3; -[OperaPlaylistAdPlugin resumePlaybackWithResetOverride:] */

void FUN_102cf8118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102cf8064(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf81e4; end: 102cf8213; -[OperaPlaylistAdPlugin overridePauseStateWithPause:] */

void FUN_102cf81e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102cf8148(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf8214; end: 102cf822b; -[OperaPlaylistAdPlugin setChromeInteractionSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf8214(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d300) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c17c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d300),PTR_s_setChromeInteractionSession__11263cb58);
    return;
  }
  return;
}



/* Entry: 102cf822c; end: 102cf8243; -[OperaPlaylistAdPlugin setAdPageRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf822c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d2e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c163d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d2e8),PTR_s_setAdPageRegistry__112636970);
    return;
  }
  return;
}



/* Entry: 102cf8244; end: 102cf825b; -[OperaPlaylistAdPlugin setOperaEventSubscriber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf8244(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d328) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c197b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d328),PTR_s_setEventSubscriber__1126438f0);
    return;
  }
  return;
}



/* Entry: 102cf825c; end: 102cf828f;  */

void FUN_102cf825c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cf8290; end: 102cf84e7; -[OperaPlaylistAdPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cf84bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf84c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cf8290(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d2e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d2f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d2f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d328));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d318));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d308));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d310));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d300));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d320));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d360));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d368));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d370));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d380));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d388));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d390));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d398));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d3e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d3f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d400));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d408));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d410));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0d330));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d338));
  param_1 = param_1 + _DAT_112f0d340;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cf84e8; end: 102cf85cf; -[OperaPlaylistAdPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x000102cf85a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf85b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf85a4) */
/* WARNING: Removing unreachable block (ram,0x000102cf85b4) */

void FUN_102cf84e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105c1768;
    func_0x000107c613fc(&UNK_1105c1768,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_102cf922c;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102cf8c9c(param_3,param_4,pcVar3,puVar2);
  FUN_1024a96c0(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102cf85d0; end: 102cf8717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102cf85d0(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x0001042b0804(0);
  func_0x000107c610f8();
  uVar2 = 0;
  func_0x0001042b02a4(0,0,0,0);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f0d330);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf8718);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar3);
    uVar6 = 0;
    uVar4 = uVar2;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
        func_0x000107c615f0(uVar7);
      }
      else {
        uVar7 = uVar6;
        FUN_102cf87a0(uVar6,uVar3);
      }
      uVar6 = uVar6 + 1;
      uVar2 = uVar7;
      func_0x000107c3d4ec(uVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar7);
      uVar4 = uVar2;
    } while (uVar5 != uVar6);
    func_0x000107c6142c(uVar3);
  }
  return uVar2;
}



/* Entry: 102cf8718; end: 102cf8787; -[OperaPlaylistAdPlugin adTrackInfoContextForAdResponse:snapIndex:isExitingAd:] */

void FUN_102cf8718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cf85d0(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cf8788; end: 102cf879f; -[OperaPlaylistAdPlugin fireProfileOpenTerminalTrackForPageId:swipeStartLocation:swipeEndLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf8788(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f0d310) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f0d310),PTR_s_triggerProfileOpenTerminalAdTrac_11267ca80)
    ;
    return;
  }
  return;
}



/* Entry: 102cf87a0; end: 102cf8943;  */

ulong FUN_102cf87a0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf8878);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf887c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f109460);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf8944);
  (*pcVar2)();
}



/* Entry: 102cf8944; end: 102cf8c9b;  */

void FUN_102cf8944(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar4 = 0;
  do {
    if (uVar10 == 0) {
      uVar10 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar10 = lVar4 + 1;
      }
      lVar3 = uVar10 - 1;
      lVar9 = lVar4;
      do {
        lVar4 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf8c84);
          (*pcVar1)();
        }
        if ((long)uVar6 <= lVar4) {
          uVar10 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_e8 = 0;
          uStack_f0 = 0;
          goto LAB_102cf8a80;
        }
        uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
        lVar9 = lVar9 + 1;
      } while (uVar10 == 0);
    }
    uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar8 * 0x28,&uStack_100);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar8 * 0x20,&uStack_d8);
    lVar3 = lVar4;
LAB_102cf8a80:
    func_0x000102cf92b4(&uStack_100,&uStack_148,0x112d55e70,&UNK_10d92d170);
    if (lStack_130 == 0) {
      func_0x000102cf9274(&uStack_100,0x112d55e70,&UNK_10d92d170);
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
LAB_102cf8c4c:
      func_0x000107c61574(param_3);
      func_0x000107c61574(param_1);
      return;
    }
    uStack_168 = uStack_120;
    uStack_170 = uStack_128;
    uStack_158 = uStack_110;
    uStack_160 = uStack_118;
    uStack_150 = uStack_108;
    uStack_188 = uStack_140;
    uStack_190 = uStack_148;
    lStack_178 = lStack_130;
    uStack_180 = uStack_138;
    (*param_2)(&uStack_b0,&uStack_190);
    func_0x000102cf9274(&uStack_190,0x112d69838,&UNK_10d92d0b0);
    func_0x000102cf9274(&uStack_100,0x112d55e70,&UNK_10d92d170);
    if (lStack_98 == 0) goto LAB_102cf8c4c;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    lStack_e8 = lStack_98;
    uStack_f0 = uStack_a0;
    uStack_e0 = uStack_90;
    uVar8 = 0;
    func_0x000100102924(&uStack_88);
    lVar9 = *param_5;
    puVar2 = &uStack_100;
    func_0x000100df95d0();
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar8 & 1;
    if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf8c88);
      (*pcVar1)();
    }
    if (*(long *)(lVar9 + 0x18) < (long)(lVar4 + uVar7)) {
      param_4 = param_4 & 1;
      func_0x0001012283cc();
      puVar2 = &uStack_100;
      func_0x000100df95d0();
      if (((uint)uVar8 & 1) != (param_4 & 1)) {
        func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf8c9c);
        (*pcVar1)();
      }
    }
    else if ((param_4 & 1) == 0) {
      func_0x000101228228();
    }
    lVar4 = *param_5;
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar4 + ((ulong)puVar2 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x30) + (long)puVar2 * 0x28);
      puVar5[4] = uStack_e0;
      puVar5[1] = uStack_f8;
      *puVar5 = uStack_100;
      puVar5[3] = lStack_e8;
      puVar5[2] = uStack_f0;
      func_0x000100102924(&uStack_148,*(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20);
      if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf8c8c);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    }
    else {
      func_0x0001007bbff0(&uStack_100);
      lVar4 = *(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20;
      func_0x000100183ab8(lVar4);
      func_0x000100102924(&uStack_148,lVar4);
    }
    param_4 = 1;
    lVar4 = lVar3;
  } while( true );
}



/* Entry: 102cf8c9c; end: 102cf920b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf8c9c(undefined8 param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *apuStack_d8 [3];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *apuStack_98 [5];
  undefined8 *puStack_70;
  
  if (param_3 == (code *)0x0) {
    return;
  }
  puVar5 = param_2;
  func_0x000107c6157c(param_4);
  puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0d328);
  if (lVar4 == 0) {
LAB_102cf8d88:
    if (param_2 == (undefined8 *)0x0) goto LAB_102cf90f8;
LAB_102cf8d90:
    puVar12 = param_2;
    func_0x000107c615f0();
    func_0x000107c5d0f0();
    func_0x000107c61180();
    puVar13 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x000103b7d088();
    if ((puVar13 == (undefined8 *)*puVar12) && (puVar5 == (undefined8 *)puVar12[1])) {
      func_0x000107c6142c(puVar5);
    }
    else {
      func_0x000107c605b8(puVar13,puVar5,(undefined8 *)*puVar12,(undefined8 *)puVar12[1],0);
      func_0x000107c6142c(puVar5);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c615e8(param_2);
        goto LAB_102cf90f8;
      }
    }
    puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    puVar12 = *(undefined8 **)(unaff_x20 + _DAT_112f0d330);
    puStack_70 = puVar5;
    if ((ulong)puVar12 >> 0x3e == 0) {
      puVar13 = *(undefined8 **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
      puVar6 = puVar5;
      if (puVar13 != (undefined8 *)0x0) {
LAB_102cf8e40:
        func_0x000107c61434(puVar12);
        lVar4 = 4;
        do {
          uVar11 = lVar4 - 4;
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf91f0);
              (*pcVar2)();
            }
            uVar9 = puVar12[lVar4];
            func_0x000107c615f0(uVar9);
          }
          else {
            uVar9 = uVar11;
            FUN_102cf87a0(uVar11,puVar12);
          }
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf91ec);
            (*pcVar2)();
          }
          puVar10 = (undefined8 *)(lVar4 + -3);
          puVar6 = param_2;
          func_0x000107c3b9ac(param_2);
          func_0x000107c61180();
          uVar11 = uVar9;
          func_0x000107c4e2b0();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          if (uVar11 == 0) {
LAB_102cf8e74:
            func_0x000107c615e8(uVar9);
          }
          else {
            uVar7 = uVar11;
            func_0x000107c5f9e8(uVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                PTR___sSSSHsWP_11034da90);
            func_0x000107c61170(uVar11);
            if (*(long *)(uVar7 + 0x10) == 0) {
              func_0x000107c6142c(uVar7);
              goto LAB_102cf8e74;
            }
            uVar11 = uVar7;
            func_0x00010018cc3c(uVar7);
            func_0x000107c6142c(uVar7);
            puVar6 = puVar5;
            func_0x000107c61558(puVar5);
            apuStack_98[0] = puVar5;
            FUN_102cf8944(uVar11,&UNK_1012281f8,0,puVar6,apuStack_98);
            func_0x000107c615e8(uVar9);
            func_0x000107c6142c(uVar11);
            puVar5 = apuStack_98[0];
          }
          lVar4 = lVar4 + 1;
        } while (puVar10 != puVar13);
        puStack_70 = puVar5;
        func_0x000107c6142c();
        puVar6 = puVar12;
      }
    }
    else {
      puVar13 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar12) {
        puVar13 = puVar12;
      }
      func_0x000107c60480();
      if (puVar13 != (undefined8 *)0x0) goto LAB_102cf8e40;
      puVar6 = (undefined8 *)0x0;
    }
    func_0x00010404c618();
    uStack_b8 = *puVar6;
    uVar1 = puVar6[1];
    uStack_b0 = uVar1;
    func_0x000107c61438(uVar1,2);
    func_0x000107c602d4(apuStack_98,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    lVar4 = 0;
    FUN_102cf9234(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    apuStack_d8[0] = puVar12;
    lStack_c0 = lVar4;
    if (lVar4 == 0) {
      func_0x000102cf9274(apuStack_d8,0x112d387f8,&UNK_10d902650);
      func_0x00010192bcf8(&uStack_b8,apuStack_98);
      func_0x0001007bbff0(apuStack_98);
      func_0x000102cf9274(&uStack_b8,0x112d387f8,&UNK_10d902650);
      func_0x000107c6142c(uVar1);
      func_0x000107c615e8(param_2);
      puVar5 = puStack_70;
    }
    else {
      func_0x000100102924(apuStack_d8,&uStack_b8);
      puVar12 = puVar5;
      func_0x000107c61558(puVar5);
      apuStack_d8[0] = puVar5;
      func_0x00010192c094(&uStack_b8,apuStack_98,puVar12);
      func_0x0001007bbff0(apuStack_98);
      func_0x000107c6142c(uVar1);
      func_0x000107c615e8(param_2);
      puVar5 = apuStack_d8[0];
    }
  }
  else {
    func_0x000107c42cf4();
    func_0x000107c61180();
    if (lVar4 == 0) goto LAB_102cf8d88;
    lVar8 = lVar4;
    func_0x000107c5f9e8();
    func_0x000107c61170(lVar4);
    puVar12 = puVar3;
    func_0x000107c61558(puVar3);
    puVar5 = (undefined8 *)&UNK_1012281f8;
    apuStack_98[0] = puVar3;
    FUN_102cf8944(lVar8,&UNK_1012281f8,0,puVar12,apuStack_98);
    func_0x000107c6142c(lVar8);
    puVar3 = apuStack_98[0];
    if (param_2 != (undefined8 *)0x0) goto LAB_102cf8d90;
LAB_102cf90f8:
    puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  puVar12 = puVar3;
  func_0x000107c61558(puVar3);
  apuStack_98[0] = puVar3;
  FUN_102cf8944(puVar5,&UNK_1012281f8,0,puVar12,apuStack_98);
  func_0x000107c6142c(puVar5);
  puVar5 = apuStack_98[0];
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0d328);
  if (lVar4 != 0) {
    func_0x000107c42ce4();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar8 = lVar4;
      func_0x000107c5f9e8();
      func_0x000107c61170(lVar4);
      goto LAB_102cf919c;
    }
  }
  lVar8 = 0;
LAB_102cf919c:
  (*param_3)(puVar5,lVar8);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(lVar8);
  FUN_1024a96c0(param_3,param_4);
  return;
}



/* Entry: 102cf920c; end: 102cf922b;  */

void FUN_102cf920c(void)

{
  func_0x000107c61168(&PTR_PTR_11289ff40);
  return;
}



/* Entry: 102cf922c; end: 102cf9233;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_102cf922c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf9234; end: 102cf92fb;  */

void FUN_102cf9234(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102cf92fc; end: 102cf9333;  */

void FUN_102cf92fc(void)

{
  long unaff_x20;
  
  func_0x000107c43f54(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102cf9334; end: 102cf9603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102cf9334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f0d448;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f0d450) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d458) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d468) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d478) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d480) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d488) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d490) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d498) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4a8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4b0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4b8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4c0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4c8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4d0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4d8) = param_17;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  return puVar3;
}



/* Entry: 102cf9604; end: 102cf980b; -[SnapAdTrackHandler initWithAdDataSource:adConfigProvider:adConfigProviderV2:adTrackerHelper:operaEventStateTracker:chromeInteractionSession:sharingSession:dismissTracker:sKViewThroughImpressionTracker:trackSeqNumProvider:playbackSessionObservableRepository:applicationLifecycleEvents:operaAdaptor:adTrackFunnelEventTracker:navigationStyle:crashLogger:analyticsSession:] */

undefined8
FUN_102cf9604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_14);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_102cfbf20(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_15,param_16,param_17,param_18,param_19);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(param_14);
  return uVar1;
}



/* Entry: 102cf980c; end: 102cf9b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf980c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  uVar2 = param_1;
  func_0x000107c3d320();
  func_0x000107c61180();
  puVar3 = &UNK_1105c1838;
  func_0x000107c613fc(&UNK_1105c1838,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x102cfc140;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1020620fc;
  puStack_88 = &UNK_1105c1850;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adWebviewNavigationEventObservab_11259b318);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x000107c3d550(param_1);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c421ac();
    func_0x000107c61180();
    puVar3 = &UNK_1105c1838;
    func_0x000107c613fc(&UNK_1105c1838,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_80 = FUN_102cfc8c8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x102cfd0e0;
    puStack_88 = &UNK_1105c18c8;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    uVar7 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c3e924(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
  }
  uVar2 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adWebviewUserEventObservableV2_11259b348);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x000107c3d560(param_1);
    func_0x000107c61180();
    puVar3 = &UNK_1105c1838;
    func_0x000107c613fc(&UNK_1105c1838,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_80 = FUN_102cfc7c0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x102cfd0e4;
    puStack_88 = &UNK_1105c18a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c3e924(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
  }
  uVar2 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adDeepLinkEventObservableV2_11259a370);
  if ((uVar2 & 1) != 0) {
    func_0x000107c3d2b4(param_1);
    func_0x000107c61180();
    puVar3 = &UNK_1105c1838;
    func_0x000107c613fc(&UNK_1105c1838,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_80 = FUN_102cfc768;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x102cfd0e8;
    puStack_88 = &UNK_1105c1878;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    uVar2 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c3e924(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102cf9b94; end: 102cfa07b;  */

/* WARNING: Possible PIC construction at 0x000102cf9f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf9de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfa044) */
/* WARNING: Removing unreachable block (ram,0x000102cf9dec) */
/* WARNING: Removing unreachable block (ram,0x000102cf9db8) */
/* WARNING: Removing unreachable block (ram,0x000102cfa000) */
/* WARNING: Removing unreachable block (ram,0x000102cfa008) */
/* WARNING: Removing unreachable block (ram,0x000102cf9dd4) */
/* WARNING: Removing unreachable block (ram,0x000102cf9d88) */
/* WARNING: Removing unreachable block (ram,0x000102cf9ff8) */
/* WARNING: Removing unreachable block (ram,0x000102cf9fe8) */
/* WARNING: Removing unreachable block (ram,0x000102cf9eb4) */
/* WARNING: Removing unreachable block (ram,0x000102cf9e80) */
/* WARNING: Removing unreachable block (ram,0x000102cf9fa4) */
/* WARNING: Removing unreachable block (ram,0x000102cf9fac) */
/* WARNING: Removing unreachable block (ram,0x000102cf9e9c) */
/* WARNING: Removing unreachable block (ram,0x000102cf9e50) */
/* WARNING: Removing unreachable block (ram,0x000102cf9f20) */
/* WARNING: Removing unreachable block (ram,0x000102cfa054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf9b94(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long unaff_x20;
  int iVar8;
  long alStack_70 [5];
  undefined1 uStack_48;
  ulong uVar9;
  
  uVar7 = *(ulong *)(param_1 + _DAT_11308bea0);
  uVar4 = uVar7;
  func_0x000107c30b00();
  uVar9 = uVar7;
  func_0x000107c30b00();
  if ((int)uVar9 == 10) {
    uVar9 = uVar7;
    func_0x000107c30b04();
    bVar2 = (int)uVar9 == 5;
  }
  else {
    bVar2 = false;
  }
  uVar9 = uVar7;
  func_0x000107c30b00();
  if (((int)uVar9 == 5) && (uVar9 = uVar7, func_0x000107c30b04(), (int)uVar9 == 5)) {
    uVar9 = *(ulong *)(param_1 + _DAT_11308bea8);
    iVar8 = (int)uVar9;
    func_0x000107c30b48();
    if (iVar8 != 2) goto LAB_102cf9c54;
    func_0x000107c30b54();
    if ((!(bool)((uVar4 & 0xffffffff) == 6 | bVar2)) && ((uVar9 & 1) == 0)) {
      return;
    }
  }
  else {
LAB_102cf9c54:
    if (!(bool)((uVar4 & 0xffffffff) == 6 | bVar2)) {
      return;
    }
  }
  lVar3 = *(long *)(param_1 + _DAT_11308bea8);
  func_0x000107c30b48();
  lVar5 = 5;
  if (lVar3 < 5) {
    if (lVar3 < 2) {
      if (lVar3 != 0) {
        if (lVar3 != 1) goto LAB_102cfa058;
        lVar3 = *(long *)(unaff_x20 + _DAT_112f0d468);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar5 = lVar3;
          func_0x000107c42558();
          func_0x000107c615e8(lVar3);
          if ((int)lVar5 != 0) {
            func_0x000107c30af8();
            func_0x000107c61180();
            uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0d458);
            *(ulong *)(unaff_x20 + _DAT_112f0d458) = uVar7;
            goto code_r0x000107c61170;
          }
        }
LAB_102cf9f2c:
        lVar5 = 5;
      }
    }
    else {
      if (lVar3 != 2) {
        if (lVar3 == 3) {
          lVar3 = *(long *)(unaff_x20 + _DAT_112f0d470);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 == 0) {
LAB_102cf9f24:
            func_0x000102cfbc0c(uVar7);
            goto LAB_102cf9f2c;
          }
          pcVar6 = "snapads_ios_disable_ad_track_handler_deeplink_fallback_SCB";
        }
        else {
          if (lVar3 != 4) goto LAB_102cfa058;
          lVar3 = *(long *)(unaff_x20 + _DAT_112f0d470);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 == 0) goto LAB_102cf9f24;
          pcVar6 = "snapads_ios_disable_ad_track_handler_deeplink_fallback_EXB";
        }
        uVar4 = 0xd00000000000003a;
        goto LAB_102cf9ef8;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112f0d468);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c42560();
        func_0x000107c615e8(lVar3);
        if ((int)lVar5 != 0) {
          func_0x000107c30af8();
          func_0x000107c61180();
          uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0d458);
          *(ulong *)(unaff_x20 + _DAT_112f0d458) = uVar7;
          goto code_r0x000107c61170;
        }
      }
      lVar5 = 4;
    }
  }
  else if (2 < lVar3 - 6U) {
    if (lVar3 != 5) {
      if (lVar3 == 9) {
        return;
      }
LAB_102cfa058:
      alStack_70[0] = lVar3;
      func_0x000107c60614(&UNK_110799da0,alStack_70,&UNK_110799da0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cfa07c);
      (*pcVar1)();
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0d470);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_102cf9f24;
    pcVar6 = "snapads_ios_disable_ad_track_handler_deeplink_fallback_app_install";
    uVar4 = 0xd000000000000042;
LAB_102cf9ef8:
    func_0x000107c5fadc(uVar4,(ulong)(pcVar6 + -0x20) | 0x8000000000000000);
    func_0x000107c3ebdc(lVar3);
    func_0x000107c615e8(lVar3);
    goto code_r0x000107c61170;
  }
  alStack_70[2] = 0;
  alStack_70[1] = 0;
  alStack_70[4] = 0;
  alStack_70[3] = 0;
  uStack_48 = 1;
  alStack_70[0] = lVar5;
  FUN_102cfce08(uVar7);
  func_0x000102cfbae4(alStack_70,uVar7);
  uVar4 = uVar7;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 102cfa07c; end: 102cfa087; -[SnapAdTrackHandler beginObservationWithAdUnifiedEventStreams:] */

void FUN_102cfa07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf980c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cfa088; end: 102cfa1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfa088(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c3d308();
  func_0x000107c61180();
  puVar1 = &UNK_1105c1838;
  func_0x000107c613fc(&UNK_1105c1838,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x102cfcb74;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x102cfd0ec;
  puStack_48 = &UNK_1105c18f0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar3 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102cfa1c0; end: 102cfa1cb; -[SnapAdTrackHandler beginObservationWithAdInstantPageEventStreams:] */

void FUN_102cfa1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cfa088(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cfa1cc; end: 102cfa21f;  */

void FUN_102cfa1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cfa220; end: 102cfb7bf;  */

/* WARNING: Possible PIC construction at 0x000102cfa2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfadc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfaac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfac88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfa558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfa698) */
/* WARNING: Removing unreachable block (ram,0x000102cfb7b4) */
/* WARNING: Removing unreachable block (ram,0x000102cfac8c) */
/* WARNING: Removing unreachable block (ram,0x000102cfaacc) */
/* WARNING: Removing unreachable block (ram,0x000102cfadc4) */
/* WARNING: Removing unreachable block (ram,0x000102cfaf54) */
/* WARNING: Removing unreachable block (ram,0x000102cfb2b0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb218) */
/* WARNING: Removing unreachable block (ram,0x000102cfb23c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb228) */
/* WARNING: Removing unreachable block (ram,0x000102cfb240) */
/* WARNING: Removing unreachable block (ram,0x000102cfb180) */
/* WARNING: Removing unreachable block (ram,0x000102cfb10c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb798) */
/* WARNING: Removing unreachable block (ram,0x000102cfb724) */
/* WARNING: Removing unreachable block (ram,0x000102cfb688) */
/* WARNING: Removing unreachable block (ram,0x000102cfb738) */
/* WARNING: Removing unreachable block (ram,0x000102cfb68c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb774) */
/* WARNING: Removing unreachable block (ram,0x000102cfb6f4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb5d0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb5c0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb5b0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb5a0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb590) */
/* WARNING: Removing unreachable block (ram,0x000102cfb474) */
/* WARNING: Removing unreachable block (ram,0x000102cfb480) */
/* WARNING: Removing unreachable block (ram,0x000102cfb488) */
/* WARNING: Removing unreachable block (ram,0x000102cfb494) */
/* WARNING: Removing unreachable block (ram,0x000102cfb514) */
/* WARNING: Removing unreachable block (ram,0x000102cfb50c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb52c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb410) */
/* WARNING: Removing unreachable block (ram,0x000102cfb374) */
/* WARNING: Removing unreachable block (ram,0x000102cfb378) */
/* WARNING: Removing unreachable block (ram,0x000102cfb380) */
/* WARNING: Removing unreachable block (ram,0x000102cfb3a4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb38c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb3ac) */
/* WARNING: Removing unreachable block (ram,0x000102cfb41c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb604) */
/* WARNING: Removing unreachable block (ram,0x000102cfb61c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb624) */
/* WARNING: Removing unreachable block (ram,0x000102cfb630) */
/* WARNING: Removing unreachable block (ram,0x000102cfb634) */
/* WARNING: Removing unreachable block (ram,0x000102cfb434) */
/* WARNING: Removing unreachable block (ram,0x000102cfb3cc) */
/* WARNING: Removing unreachable block (ram,0x000102cfb07c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb0b0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb0dc) */
/* WARNING: Removing unreachable block (ram,0x000102cfb12c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb130) */
/* WARNING: Removing unreachable block (ram,0x000102cfb144) */
/* WARNING: Removing unreachable block (ram,0x000102cfb184) */
/* WARNING: Removing unreachable block (ram,0x000102cfb188) */
/* WARNING: Removing unreachable block (ram,0x000102cfb1b4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb1cc) */
/* WARNING: Removing unreachable block (ram,0x000102cfb1c0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb1d8) */
/* WARNING: Removing unreachable block (ram,0x000102cfb164) */
/* WARNING: Removing unreachable block (ram,0x000102cfb0f4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb0c4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb110) */
/* WARNING: Removing unreachable block (ram,0x000102cfb124) */
/* WARNING: Removing unreachable block (ram,0x000102cfb0d4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb2fc) */
/* WARNING: Removing unreachable block (ram,0x000102cfb314) */
/* WARNING: Removing unreachable block (ram,0x000102cfb354) */
/* WARNING: Removing unreachable block (ram,0x000102cfb334) */
/* WARNING: Removing unreachable block (ram,0x000102cfb358) */
/* WARNING: Removing unreachable block (ram,0x000102cfb04c) */
/* WARNING: Removing unreachable block (ram,0x000102cfb014) */
/* WARNING: Removing unreachable block (ram,0x000102cfaebc) */
/* WARNING: Removing unreachable block (ram,0x000102cfaab8) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa2c) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa1c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa7dc) */
/* WARNING: Removing unreachable block (ram,0x000102cfa7c4) */
/* WARNING: Removing unreachable block (ram,0x000102cfa77c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa780) */
/* WARNING: Removing unreachable block (ram,0x000102cfa7a0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb7a4) */
/* WARNING: Removing unreachable block (ram,0x000102cfb7ac) */
/* WARNING: Removing unreachable block (ram,0x000102cfa7a8) */
/* WARNING: Removing unreachable block (ram,0x000102cfa704) */
/* WARNING: Removing unreachable block (ram,0x000102cfadcc) */
/* WARNING: Removing unreachable block (ram,0x000102cfa708) */
/* WARNING: Removing unreachable block (ram,0x000102cfa724) */
/* WARNING: Removing unreachable block (ram,0x000102cfa734) */
/* WARNING: Removing unreachable block (ram,0x000102cfa7f4) */
/* WARNING: Removing unreachable block (ram,0x000102cfa73c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa4bc) */
/* WARNING: Removing unreachable block (ram,0x000102cfa4ac) */
/* WARNING: Removing unreachable block (ram,0x000102cfa3f0) */
/* WARNING: Removing unreachable block (ram,0x000102cfa2bc) */
/* WARNING: Removing unreachable block (ram,0x000102cfa55c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa5b8) */
/* WARNING: Removing unreachable block (ram,0x000102cfa560) */
/* WARNING: Removing unreachable block (ram,0x000102cfa584) */
/* WARNING: Removing unreachable block (ram,0x000102cfa5c8) */
/* WARNING: Removing unreachable block (ram,0x000102cfa598) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa68) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa84) */
/* WARNING: Removing unreachable block (ram,0x000102cfaae8) */
/* WARNING: Removing unreachable block (ram,0x000102cfab00) */
/* WARNING: Removing unreachable block (ram,0x000102cfab14) */
/* WARNING: Removing unreachable block (ram,0x000102cfacb4) */
/* WARNING: Removing unreachable block (ram,0x000102cfadd4) */
/* WARNING: Removing unreachable block (ram,0x000102cfadd8) */
/* WARNING: Removing unreachable block (ram,0x000102cfacc4) */
/* WARNING: Removing unreachable block (ram,0x000102cfaccc) */
/* WARNING: Removing unreachable block (ram,0x000102cfada8) */
/* WARNING: Removing unreachable block (ram,0x000102cfadfc) */
/* WARNING: Removing unreachable block (ram,0x000102cfab24) */
/* WARNING: Removing unreachable block (ram,0x000102cfabd4) */
/* WARNING: Removing unreachable block (ram,0x000102cfabec) */
/* WARNING: Removing unreachable block (ram,0x000102cfadac) */
/* WARNING: Removing unreachable block (ram,0x000102cfac38) */
/* WARNING: Removing unreachable block (ram,0x000102cfae3c) */
/* WARNING: Removing unreachable block (ram,0x000102cfae44) */
/* WARNING: Removing unreachable block (ram,0x000102cfae5c) */
/* WARNING: Removing unreachable block (ram,0x000102cfaee4) */
/* WARNING: Removing unreachable block (ram,0x000102cfae60) */
/* WARNING: Removing unreachable block (ram,0x000102cfae48) */
/* WARNING: Removing unreachable block (ram,0x000102cfae64) */
/* WARNING: Removing unreachable block (ram,0x000102cfae84) */
/* WARNING: Removing unreachable block (ram,0x000102cfaec4) */
/* WARNING: Removing unreachable block (ram,0x000102cfaf78) */
/* WARNING: Removing unreachable block (ram,0x000102cfafb8) */
/* WARNING: Removing unreachable block (ram,0x000102cfaf98) */
/* WARNING: Removing unreachable block (ram,0x000102cfafbc) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa48) */
/* WARNING: Removing unreachable block (ram,0x000102cfa830) */
/* WARNING: Removing unreachable block (ram,0x000102cfa818) */
/* WARNING: Removing unreachable block (ram,0x000102cfa808) */
/* WARNING: Removing unreachable block (ram,0x000102cfa820) */
/* WARNING: Removing unreachable block (ram,0x000102cfa844) */
/* WARNING: Removing unreachable block (ram,0x000102cfac7c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa82c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa854) */
/* WARNING: Removing unreachable block (ram,0x000102cfa848) */
/* WARNING: Removing unreachable block (ram,0x000102cfa850) */
/* WARNING: Removing unreachable block (ram,0x000102cfa858) */
/* WARNING: Removing unreachable block (ram,0x000102cfa874) */
/* WARNING: Removing unreachable block (ram,0x000102cfa894) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa44) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa58) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa5c) */
/* WARNING: Removing unreachable block (ram,0x000102cfaa64) */
/* WARNING: Removing unreachable block (ram,0x000102cfaad0) */
/* WARNING: Removing unreachable block (ram,0x000102cfaabc) */
/* WARNING: Removing unreachable block (ram,0x000102cfaac4) */
/* WARNING: Removing unreachable block (ram,0x000102cfa880) */
/* WARNING: Removing unreachable block (ram,0x000102cfa898) */
/* WARNING: Removing unreachable block (ram,0x000102cfa928) */
/* WARNING: Removing unreachable block (ram,0x000102cfa90c) */
/* WARNING: Removing unreachable block (ram,0x000102cfa978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfa220(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f0d480);
  uVar5 = uVar3;
  func_0x000107c4e9cc();
  func_0x000107c61180();
  if (uVar5 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4e9d8(uVar5);
    func_0x000107c61180();
    goto code_r0x000107c61170;
  }
  func_0x000107c40f5c();
  func_0x000107c61180();
  uVar5 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar5 = param_4 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) goto LAB_102cfa50c;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d4d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    FUN_102cfd080(0,0x112dcf430,&PTR_PTR_1126b3e90);
    func_0x000103dec290(3);
    func_0x000107c602fc(0x33);
    func_0x000107c5fb78(0xd00000000000002f,0x800000010f109620);
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(0xe000000000000000);
    if (uVar3 == 0) {
      func_0x000107c5fb78(0x296c6c756e28,0xe600000000000000);
      func_0x000107c6142c(0xe600000000000000);
      func_0x000107c61434(0xe000000000000000);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f109650);
      func_0x000107c6142c(0x800000010f109650);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c6142c(0xe000000000000000);
      param_3 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f109670);
      func_0x000107c3e200(lVar1);
    }
    else {
      func_0x000107c615f4(uVar3,2);
      func_0x000107c3b9ac();
      func_0x000107c61180();
      func_0x000107c5faec();
      param_3 = uVar3;
    }
    goto code_r0x000107c61170;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d468);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
LAB_102cfa50c:
    if (uVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0d460);
      param_3 = uVar3;
      func_0x000107c615f0(uVar3);
      func_0x000107c3b9ac();
      func_0x000107c61180();
      func_0x000107c3d468(uVar4);
      func_0x000107c61180();
      func_0x000107c615e8(uVar3);
      goto code_r0x000107c61170;
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c41eac();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 == 0) goto LAB_102cfa50c;
    func_0x000107c615e8(uVar3);
  }
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112f0d460);
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adResponseForAdRequestClientId__11259ac50);
  if ((uVar5 & 1) != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0d470);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c3ebdc();
      func_0x000107c615e8(lVar1);
      if ((int)lVar2 != 0) {
        uVar5 = param_3 & 0xffffffffffff;
        if ((param_4 & 0x2000000000000000) != 0) {
          uVar5 = param_4 >> 0x38 & 0xf;
        }
        if (uVar5 == 0) {
          param_3 = *(ulong *)(unaff_x20 + _DAT_112f0d480);
          func_0x000107c40fa8();
          func_0x000107c61180();
          if (param_3 != 0) {
            func_0x000107c5faec();
            goto code_r0x000107c61170;
          }
          param_4 = 0xe000000000000000;
        }
        else {
          func_0x000107c61434(param_4);
        }
        uVar5 = param_3 & 0xffffffffffff;
        if ((param_4 & 0x2000000000000000) != 0) {
          uVar5 = param_4 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0d4b8);
          func_0x000107c5fadc();
          func_0x000107c6142c(param_4);
          func_0x000107c3d4e8(uVar4);
          func_0x000107c61180();
          goto code_r0x000107c61170;
        }
        func_0x000107c6142c(param_4);
      }
    }
  }
  param_3 = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cfb7c0; end: 102cfb86b; -[SnapAdTrackHandler triggerAdTrack:option:pageId:collectionItemIndex:] */

void FUN_102cfb7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_4);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_102cfa220(param_3,param_4,param_5,param_2,param_6,0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cfb86c; end: 102cfba3f;  */

/* WARNING: Possible PIC construction at 0x000102cfb908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfb9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfba1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfb9e0) */
/* WARNING: Removing unreachable block (ram,0x000102cfb90c) */
/* WARNING: Removing unreachable block (ram,0x000102cfba20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfb86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  if ((param_5 == 0) || (param_6 == 0)) {
    func_0x00010443f8c4(0);
    param_6 = 7;
    func_0x00010443f8e4(7);
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0d480);
    func_0x000107c4debc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c49854();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        func_0x000107c55ab0(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
    puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112f0d470);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
      func_0x00010420d1dc();
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      FUN_102cfa220(5,uVar4,param_3,param_4,0,0);
    }
    else {
      param_6 = -0x2fffffffffffffcd;
      func_0x000107c5fadc(0xd000000000000033,0x800000010f109480);
      func_0x000107c4dfc0(puVar3);
      func_0x000107c615e8(puVar3);
    }
  }
  else {
    func_0x00010443f8c4(0);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c3ab34(param_5);
    uVar4 = param_1;
    uVar5 = param_2;
    func_0x000107c3ab34(param_6);
    func_0x00010443f334(param_1,param_2,uVar4,uVar5,7,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 102cfba40; end: 102cfbae3; -[SnapAdTrackHandler triggerProfileOpenTerminalAdTrackForPageId:swipeStartLocation:swipeEndLocation:] */

void FUN_102cfba40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102cfb86c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cfbae4; end: 102cfbd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfbae4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f0d470);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010f1093b0);
    uVar3 = uVar1;
    func_0x000107c3ebdc();
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  func_0x000104699af4(0);
  FUN_102cfcffc(param_1,auStack_70);
  func_0x000104696a90(param_1);
  func_0x000104696a70(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000104696530();
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0d4c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4d698();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102cfbd64; end: 102cfbdb3; -[SnapAdTrackHandler _onAdDeeplinkEventV2:] */

/* WARNING: Possible PIC construction at 0x000102cfbd9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfbda0) */

void FUN_102cfbd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cf9b94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cfbdb4; end: 102cfbde7;  */

void FUN_102cfbdb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cfbde8; end: 102cfbf1f; -[SnapAdTrackHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cfbe14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbe44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbe84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfbee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfbec8) */
/* WARNING: Removing unreachable block (ram,0x000102cfbea8) */
/* WARNING: Removing unreachable block (ram,0x000102cfbe88) */
/* WARNING: Removing unreachable block (ram,0x000102cfbe68) */
/* WARNING: Removing unreachable block (ram,0x000102cfbe48) */
/* WARNING: Removing unreachable block (ram,0x000102cfbe18) */
/* WARNING: Removing unreachable block (ram,0x000102cfbee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfbde8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d460));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0d468));
  return;
}



/* Entry: 102cfbf20; end: 102cfc74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfbf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f0d448;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f0d450) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d458) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d468) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d478) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d480) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d488) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d490) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d498) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4a8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4b0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4b8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4c0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4c8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4d0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d4d8) = param_16;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar2);
  return;
}



/* Entry: 102cfc74c; end: 102cfc767;  */

void FUN_102cfc74c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102cfc768; end: 102cfc7bf;  */

void FUN_102cfc768(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cf9b94(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102cfc7c0; end: 102cfc8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfc7c0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar5 = *(undefined8 **)(param_1 + _DAT_11308cf40);
    puVar2 = puVar5;
    func_0x000107c30be8();
    if ((((int)puVar2 == 3) && (puVar2 = puVar5, func_0x000107c30bec(), (int)puVar2 == 0x17)) &&
       ((puVar2 = puVar5, func_0x000107c30bf0(), (int)puVar2 == 1 ||
        (func_0x000107c30bf0(), puVar2 = puVar5, (int)puVar5 == 2)))) {
      func_0x00010420d12c();
      uVar3 = *puVar2;
      uVar4 = *(undefined8 *)(param_1 + _DAT_11308cf38);
      func_0x000107c61174(uVar3);
      func_0x000107c30af8(uVar4);
      func_0x000107c61180();
      FUN_102cfa220(10,uVar3,0,0xe000000000000000,uVar4,0);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102cfc8c8; end: 102cfcde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfc8c8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puVar11 = auStack_98;
  func_0x000107c61428(unaff_x20 + 0x10,puVar11,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar10 = *(undefined8 **)(param_1 + _DAT_11308cf00);
    iVar7 = (int)*(undefined8 *)(param_1 + _DAT_11308cf08);
    iVar1 = iVar7;
    func_0x000107c30c30();
    if (iVar1 == 2) {
      puVar3 = puVar10;
      func_0x000107c30b00();
      if ((int)puVar3 == 3) {
        func_0x00010420d12c();
        puVar3 = (undefined8 *)*puVar3;
        func_0x000107c61174();
        puVar8 = puVar3;
        func_0x00010420d1dc();
        uVar4 = *puVar8;
        func_0x000107c61174(uVar4);
        uVar5 = uVar4;
        func_0x00010420d350();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar3);
        puVar3 = puVar10;
        func_0x000107c30ae8();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
          puVar11 = (undefined1 *)0xe000000000000000;
        }
        else {
          puVar8 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        func_0x000107c30af8(puVar10);
        func_0x000107c61180();
        FUN_102cfa220(7,uVar5,puVar8,puVar11,puVar10,0);
        func_0x000107c61170(puVar10);
        func_0x000107c6142c(puVar11);
        func_0x000107c61170(uVar5);
      }
    }
    else {
      func_0x000107c30c30();
      if (iVar7 == 10) {
        uStack_80 = 3;
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_58 = 1;
        puVar3 = puVar10;
        FUN_102cfce08(puVar10);
        puVar8 = puVar3;
        FUN_102cfbae4(&uStack_80,puVar3);
        func_0x000107c61170(puVar3);
        puVar3 = puVar10;
        func_0x000107c30ae8();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          puVar8 = (undefined8 *)0xe000000000000000;
        }
        else {
          puVar9 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        func_0x000107c30b00();
        puVar3 = *(undefined8 **)(lVar2 + _DAT_112f0d470);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar3 != (undefined8 *)0x0) {
          uVar5 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f1096a0);
          puVar6 = puVar3;
          func_0x000107c3ebdc();
          func_0x000107c61170(uVar5);
          func_0x000107c615e8();
          if (((int)puVar6 != 0) && (((ulong)puVar10 & 0xffffffff) == 3)) {
            func_0x00010420d1dc();
            uVar5 = *puVar3;
            func_0x000107c61174(uVar5);
            FUN_102cfa220(2,uVar5,puVar9,puVar8,0,0);
            func_0x000107c61170(uVar5);
          }
        }
        func_0x000107c6142c(puVar8);
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102cfcde8; end: 102cfce07;  */

void FUN_102cfcde8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0128);
  return;
}



/* Entry: 102cfce08; end: 102cfcffb;  */

void FUN_102cfce08(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar1 = param_2;
  func_0x000107c30adc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  uVar10 = param_3;
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c30afc();
  lVar3 = param_2;
  func_0x000107c30af8();
  func_0x000107c61180();
  func_0x000107c30b10(param_2);
  lVar4 = param_2;
  func_0x000107c30ae0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uVar14 = uVar10;
  }
  else {
    uStack_a0 = lVar4;
    func_0x000107c5faec();
    uVar14 = uVar10;
    func_0x000107c61170(lVar4);
    uStack_a8 = uVar10;
  }
  lVar4 = param_2;
  func_0x000107c30ae4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar10 = uVar14;
  }
  else {
    uStack_b0 = lVar4;
    func_0x000107c5faec();
    uVar10 = uVar14;
    func_0x000107c61170(lVar4);
    uStack_b8 = uVar14;
  }
  lVar4 = param_2;
  func_0x000107c30aec();
  lVar5 = param_2;
  func_0x000107c30af0();
  lVar6 = param_2;
  func_0x000107c30b00();
  lVar7 = param_2;
  func_0x000107c30b0c();
  lVar8 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar11 = 0;
    uVar13 = 0;
    uVar14 = uVar10;
  }
  else {
    lVar11 = lVar8;
    func_0x000107c5faec();
    uVar14 = uVar10;
    func_0x000107c61170(lVar8);
    uVar13 = uVar10;
  }
  lVar8 = param_2;
  func_0x000107c30b04();
  lVar9 = param_2;
  func_0x000107c30b08();
  func_0x000107c30b14();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar12 = 0;
    uVar14 = 0;
  }
  else {
    lVar12 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  uVar10 = 0;
  func_0x00010469d938(0);
  func_0x000107c610f8();
  func_0x00010469cf8c(uVar10,param_1,lVar2,param_3,lVar1,lVar3,uStack_a0,uStack_a8,uStack_b0,
                      uStack_b8,lVar4,lVar5,lVar6,lVar7,lVar11,uVar13,lVar8,lVar9,lVar12,uVar14);
  return;
}



/* Entry: 102cfcffc; end: 102cfd037;  */

undefined8 FUN_102cfcffc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10466ef60)(param_2,param_1);
  return param_2;
}



/* Entry: 102cfd038; end: 102cfd07f;  */

void FUN_102cfd038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  uint uVar1;
  
  if (param_6 == 0xff) {
    return;
  }
  uVar1 = (uint)param_6;
  if (((1 < uVar1 - 3) && (param_5 = param_3, uVar1 != 6)) && (param_5 = param_4, uVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102cfd080; end: 102cfd0bf;  */

void FUN_102cfd080(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102cfd0c0; end: 102cfd0ef;  */

void FUN_102cfd0c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102cfd0f0; end: 102cfd0ff; -[AdItemLoadStatus loadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102cfd0f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f0d508);
}



/* Entry: 102cfd100; end: 102cfd10f; -[AdItemLoadStatus setLoadedOnEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfd100(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f0d508) = param_3;
  return;
}



/* Entry: 102cfd110; end: 102cfd11f; -[AdItemLoadStatus loadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102cfd110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f0d510);
}



/* Entry: 102cfd120; end: 102cfd12f; -[AdItemLoadStatus setLoadedOnExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfd120(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f0d510) = param_3;
  return;
}



/* Entry: 102cfd130; end: 102cfd16f; -[AdItemLoadStatus mediaWaitTimeInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102cfd130(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_112f0d528;
  if (*(char *)(param_1 + _DAT_112f0d510) == '\0') {
    plVar1 = (long *)&DAT_112f0d518;
  }
  return *(double *)(param_1 + *plVar1) - *(double *)(param_1 + _DAT_112f0d520);
}



/* Entry: 102cfd170; end: 102cfd23f; -[AdItemLoadStatus initWithItemId:itemOpenTimestampInSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cfd170(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec(param_4);
  *(undefined1 *)(param_2 + _DAT_112f0d508) = 0;
  *(undefined1 *)(param_2 + _DAT_112f0d510) = 0;
  *(undefined8 *)(param_2 + _DAT_112f0d528) = 0;
  *(undefined8 *)(param_2 + _DAT_112f0d518) = 0;
  *(undefined8 *)(param_2 + _DAT_112f0d520) = param_1;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_3);
  lStack_50 = param_2;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,&lStack_50,PTR_s_initWithItemId_itemOpenTimestamp_1125e5998,param_4);
  func_0x000107c61170(param_4);
  if (plVar3 != (long *)0x0) {
    return (undefined1 *)plVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cfd240);
  (*pcVar1)();
}



/* Entry: 102cfd240; end: 102cfd25f; -[AdItemLoadStatus updateItemLoadedTimestampInSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfd240(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + _DAT_112f0d510) = 1;
  *(undefined8 *)(param_2 + _DAT_112f0d528) = param_1;
  return;
}


