/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd88bd0; end: 10bd88cbf;  */

void FUN_10bd88bd0(undefined8 param_1)

{
  if (lRam00000001137fe9e0 != -1) {
    FUN_10bd88cc0();
  }
  if (pcRam00000001137fe9d8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd88bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001137fe9d8)(param_1);
    return;
  }
  return;
}



/* Entry: 10bd88cc0; end: 10bd88cfb;  */

void FUN_10bd88cc0(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0x1137fe9d8;
  uStack_38 = 0x10bd88c60;
  (*pcRam00000001136b8688)(0x1137fe9e0,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bd88cfc; end: 10bd88d23;  */

void FUN_10bd88cfc(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 10bd88d24; end: 10bd88e13;  */

void FUN_10bd88d24(undefined8 param_1)

{
  if (lRam00000001137fea00 != -1) {
    FUN_10bd88e14();
  }
  if (pcRam00000001137fe9f8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd88d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001137fe9f8)(param_1);
    return;
  }
  return;
}



/* Entry: 10bd88e14; end: 10bd88e43;  */

void FUN_10bd88e14(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0x1137fe9f8;
  uStack_38 = 0x10bd88db4;
  (*pcRam00000001136b8688)(0x1137fea00,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bd88e44; end: 10bd88fcf;  */

void FUN_10bd88e44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AgeVerificationFeature.AgeVerificationBirthdayBusinessLogic",0x3b,
             "init(initialState:)",0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd88e70);
  (*pcVar1)();
}



/* Entry: 10bd88fd0; end: 10bd8907f; -[_TtC24SCConnectedAccountsScope22ConnectedAccountsScope init] */

void FUN_10bd88fd0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConnectedAccountsScope.ConnectedAccountsScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd88ffc);
  (*pcVar1)();
}



/* Entry: 10bd89080; end: 10bd890ab; -[AuthInitialInfoLoggerServices init] */

void FUN_10bd89080(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthInitialInfoLoggerServices.AuthInitialInfoLoggerServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd890ac);
  (*pcVar1)();
}



/* Entry: 10bd890ac; end: 10bd89103; -[PostRegAgeVerificationScope init] */

void FUN_10bd890ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostRegistrationAgeVerificationAPI.PostRegAgeVerificationScope",0x3e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd890d8);
  (*pcVar1)();
}



/* Entry: 10bd89104; end: 10bd892bb; -[SystemNotificationPermissionScope init] */

void FUN_10bd89104(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SystemNotificationPermissionAPI.SystemNotificationPermissionScope",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89130);
  (*pcVar1)();
}



/* Entry: 10bd892bc; end: 10bd89313; -[_TtC23PreviewStickerPickerAPI27SCPreviewStickerPickerScope init] */

void FUN_10bd892bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PreviewStickerPickerAPI.SCPreviewStickerPickerScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd892e8);
  (*pcVar1)();
}



/* Entry: 10bd89314; end: 10bd893ef; -[_TtC19VenuePickerServices19VenuePickerServices init] */

void FUN_10bd89314(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("VenuePickerServices.VenuePickerServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89340);
  (*pcVar1)();
}



/* Entry: 10bd893f0; end: 10bd89473; -[SCMemoriesChatMediaPlaybackScope init] */

void FUN_10bd893f0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMemoriesChatMediaPlaybackScope.ChatMediaPlaybackScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8941c);
  (*pcVar1)();
}



/* Entry: 10bd89474; end: 10bd8949f; -[SCChatCommandMenuViewController initWithNibName:bundle:] */

void FUN_10bd89474(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCChatCommandMenuUI.SCChatCommandMenuViewController",0x33,"init(nibName:bundle:)",0x15
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd894a0);
  (*pcVar1)();
}



/* Entry: 10bd894a0; end: 10bd8957b; -[SCStreakReminderGroupActionProvider init] */

void FUN_10bd894a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActionSheetActionProviders.StreakReminderGroupActionProvider",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd894cc);
  (*pcVar1)();
}



/* Entry: 10bd8957c; end: 10bd895a7; -[ComposerMusicDependenciesService init] */

void FUN_10bd8957c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerMusicDependencies.ComposerMusicDependenciesService",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd895a8);
  (*pcVar1)();
}



/* Entry: 10bd895a8; end: 10bd895d3; -[ValdiMusicAudioRecordingServices init] */

void FUN_10bd895a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ValdiMusicAudioRecording.ValdiMusicAudioRecordingServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd895d4);
  (*pcVar1)();
}



/* Entry: 10bd895d4; end: 10bd895ff; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter init] */

void FUN_10bd895d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMusicTopicPagePresenter.MusicTopicPagePresenter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89600);
  (*pcVar1)();
}



/* Entry: 10bd89600; end: 10bd8962b; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController initWithNibName:bundle:] */

void FUN_10bd89600(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlusSendFriendBuddyPassImplementation.PlusSendFriendBuddyPassViewController",0x4b,
             "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8962c);
  (*pcVar1)();
}



/* Entry: 10bd8962c; end: 10bd89657; -[_TtC38StreakRemindersServiceV2Implementation38StreakRemindersServiceV2Implementation init] */

void FUN_10bd8962c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StreakRemindersServiceV2Implementation.StreakRemindersServiceV2Implementation",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89658);
  (*pcVar1)();
}



/* Entry: 10bd89658; end: 10bd89683; -[_TtC40SCGroupProfileBitmojiSectionActionModels28SCGroupProfileLensAvatarInfo init] */

void FUN_10bd89658(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGroupProfileBitmojiSectionActionModels.SCGroupProfileLensAvatarInfo",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89684);
  (*pcVar1)();
}



/* Entry: 10bd89684; end: 10bd89707; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel init] */

void FUN_10bd89684(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGroupProfileBitmojiSectionActionModels.SCGroupProfileShareActionModel",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd896b0);
  (*pcVar1)();
}



/* Entry: 10bd89708; end: 10bd8978b; -[InAppAppealScope init] */

void FUN_10bd89708(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("InAppAppealScope.InAppAppealScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89734);
  (*pcVar1)();
}



/* Entry: 10bd8978c; end: 10bd897e3; -[ComposerMemberRolesService init] */

void FUN_10bd8978c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerMemberRolesService.ComposerMemberRolesService",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd897b8);
  (*pcVar1)();
}



/* Entry: 10bd897e4; end: 10bd89893; -[ComposerSendToReplyDataStoreService init] */

void FUN_10bd897e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerSendToReplyDataStoreService.ComposerSendToReplyDataStoreService",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89810);
  (*pcVar1)();
}



/* Entry: 10bd89894; end: 10bd898bf; -[SCAIRemixActionPerformer init] */

void FUN_10bd89894(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AIRemixActionPerformer.AIRemixActionPerformer",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd898c0);
  (*pcVar1)();
}



/* Entry: 10bd898c0; end: 10bd898eb; -[SCSoundProfileActionPerformer init] */

void FUN_10bd898c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SoundProfileActionPerformer.SoundProfileActionPerformer",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd898ec);
  (*pcVar1)();
}



/* Entry: 10bd898ec; end: 10bd8996f; -[SCStickerCutoutActionPerformer init] */

void FUN_10bd898ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StickerCutoutActionPerformer.StickerCutoutActionPerformer",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89918);
  (*pcVar1)();
}



/* Entry: 10bd89970; end: 10bd8999b; -[_TtC31SCRegistrationDataResumingScope31SCRegistrationDataResumingScope init] */

void FUN_10bd89970(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCRegistrationDataResumingScope.SCRegistrationDataResumingScope",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8999c);
  (*pcVar1)();
}



/* Entry: 10bd8999c; end: 10bd89bab; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener init] */

void FUN_10bd8999c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCApplicationLifeCycleListener.SCApplicationLifeCycleListener",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd899c8);
  (*pcVar1)();
}



/* Entry: 10bd89bac; end: 10bd89bd7; -[_TtC46ValdiNetworkStatusProviderSaberServiceProvider26ValdiNetworkStatusProvider init] */

void FUN_10bd89bac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ValdiNetworkStatusProviderSaberServiceProvider.ValdiNetworkStatusProvider",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89bd8);
  (*pcVar1)();
}



/* Entry: 10bd89bd8; end: 10bd89c03; -[SCComposerDynamicDeliveryMetadataStore init] */

void FUN_10bd89bd8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCComposerDynamicDeliveryMetadataStore.ComposerDynamicDeliveryMetadataStore",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89c04);
  (*pcVar1)();
}



/* Entry: 10bd89c04; end: 10bd89c2f; -[SCComposerLatexRendererModule init] */

void FUN_10bd89c04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCComposerLatexRenderer.ComposerLatexRendererModule",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89c30);
  (*pcVar1)();
}



/* Entry: 10bd89c30; end: 10bd89c5b; -[SCCameraApplicationStateImpl init] */

void FUN_10bd89c30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraApplicationStateImpl.CameraApplicationStateImpl",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89c5c);
  (*pcVar1)();
}



/* Entry: 10bd89c5c; end: 10bd89c87; -[_TtC36StartupCompleteTrackerImplementation36StartupCompleteTrackerImplementation init] */

void FUN_10bd89c5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StartupCompleteTrackerImplementation.StartupCompleteTrackerImplementation",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89c88);
  (*pcVar1)();
}



/* Entry: 10bd89c88; end: 10bd89cb3; -[_TtC27CppAppStartExperimentReaderP33_BF8AD0E596057DF272DE316F417672B839CppAppStartExperimentReaderProviderImpl init] */

void FUN_10bd89c88(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CppAppStartExperimentReader.CppAppStartExperimentReaderProviderImpl",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89cb4);
  (*pcVar1)();
}



/* Entry: 10bd89cb4; end: 10bd89cdf; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter init] */

void FUN_10bd89cb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CppAppStartExperimentReader.CppAppStartExperimentReaderAdapter",0x3e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89ce0);
  (*pcVar1)();
}



/* Entry: 10bd89ce0; end: 10bd89e97; -[_TtC22SCLocalizationServices22SCLocalizationServices init] */

void FUN_10bd89ce0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLocalizationServices.SCLocalizationServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89d0c);
  (*pcVar1)();
}



/* Entry: 10bd89e98; end: 10bd8a0d3; -[_TtC21SnapAirNetworkingImpl24SCSnapAirNetworkExecutor init] */

void FUN_10bd89e98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapAirNetworkingImpl.SCSnapAirNetworkExecutor",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd89ec4);
  (*pcVar1)();
}



/* Entry: 10bd8a0d4; end: 10bd8a0ff; -[AuthFlowTreatmentInfoServices init] */

void FUN_10bd8a0d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthFlowTreatmentInfoServices.AuthFlowTreatmentInfoServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a100);
  (*pcVar1)();
}



/* Entry: 10bd8a100; end: 10bd8a157; -[SCNotificationTrackingDataParser init] */

void FUN_10bd8a100(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NotificationTrackingDataParser.NotificationTrackingDataParser",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a12c);
  (*pcVar1)();
}



/* Entry: 10bd8a158; end: 10bd8a183; -[ChangeUsernameCOFConfigServices init] */

void FUN_10bd8a158(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChangeUsernameCOFConfigServices.ChangeUsernameCOFConfigServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a184);
  (*pcVar1)();
}



/* Entry: 10bd8a184; end: 10bd8a1af; -[ChangeUsernameStorageServices init] */

void FUN_10bd8a184(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChangeUsernameStorageServices.ChangeUsernameStorageServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a1b0);
  (*pcVar1)();
}



/* Entry: 10bd8a1b0; end: 10bd8a1db; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever init] */

void FUN_10bd8a1b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OAuthLoginAB.OAuthLoginABRetriever",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a1dc);
  (*pcVar1)();
}



/* Entry: 10bd8a1dc; end: 10bd8a207; -[SCRegistrationDisplayNameBirthdayScope init] */

void FUN_10bd8a1dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCRegistrationDisplayNameBirthdayAPI.SCRegistrationDisplayNameBirthdayScope",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a208);
  (*pcVar1)();
}



/* Entry: 10bd8a208; end: 10bd8a233; -[_TtC28SCConnectedLensLogoutCleanupP33_62A9B4E6061975F25EAA29A8244E0FF735SCConnectedLensLogoutCleanupHandler init] */

void FUN_10bd8a208(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConnectedLensLogoutCleanup.SCConnectedLensLogoutCleanupHandler",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a234);
  (*pcVar1)();
}



/* Entry: 10bd8a234; end: 10bd8a51f; -[_TtC34ComposerJobSchedulerPluginProvider26ComposerJobSchedulerPlugin init] */

void FUN_10bd8a234(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerJobSchedulerPluginProvider.ComposerJobSchedulerPlugin",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a260);
  (*pcVar1)();
}



/* Entry: 10bd8a520; end: 10bd8a577; -[_TtC30SponsoredSnapAttachmentBuilder30SponsoredSnapAttachmentBuilder init] */

void FUN_10bd8a520(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapAttachmentBuilder.SponsoredSnapAttachmentBuilder",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a54c);
  (*pcVar1)();
}



/* Entry: 10bd8a578; end: 10bd8a5a3; -[_TtC23BitmojiComposerServices23BitmojiComposerServices init] */

void FUN_10bd8a578(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiComposerServices.BitmojiComposerServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a5a4);
  (*pcVar1)();
}



/* Entry: 10bd8a5a4; end: 10bd8a5cf; -[_TtC45SCBitmojiFashionTrayPresentingServiceProvider27BitmojiFashionTrayPresenter init] */

void FUN_10bd8a5a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiFashionTrayPresentingServiceProvider.BitmojiFashionTrayPresenter",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a5d0);
  (*pcVar1)();
}



/* Entry: 10bd8a5d0; end: 10bd8a5fb; -[_TtC28BlizzardLoggerPluginProvider20BlizzardLoggerPlugin init] */

void FUN_10bd8a5d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BlizzardLoggerPluginProvider.BlizzardLoggerPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a5fc);
  (*pcVar1)();
}



/* Entry: 10bd8a5fc; end: 10bd8a627; -[_TtC25FriendStorePluginProvider17FriendStorePlugin init] */

void FUN_10bd8a5fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendStorePluginProvider.FriendStorePlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a628);
  (*pcVar1)();
}



/* Entry: 10bd8a628; end: 10bd8a653; -[_TtC25LocalUserIdPluginProvider17LocalUserIdPlugin init] */

void FUN_10bd8a628(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocalUserIdPluginProvider.LocalUserIdPlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a654);
  (*pcVar1)();
}



/* Entry: 10bd8a654; end: 10bd8a67f; -[_TtC35NotificationPresenterPluginProvider27NotificationPresenterPlugin init] */

void FUN_10bd8a654(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NotificationPresenterPluginProvider.NotificationPresenterPlugin",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a680);
  (*pcVar1)();
}



/* Entry: 10bd8a680; end: 10bd8a6ab; -[_TtC26CircumstanceEngineServices28ManualExposureCofStorePlugin init] */

void FUN_10bd8a680(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CircumstanceEngineServices.ManualExposureCofStorePlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a6ac);
  (*pcVar1)();
}



/* Entry: 10bd8a6ac; end: 10bd8a6d7; -[_TtC30UserInfoProviderPluginProvider22UserInfoProviderPlugin init] */

void FUN_10bd8a6ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UserInfoProviderPluginProvider.UserInfoProviderPlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a6d8);
  (*pcVar1)();
}



/* Entry: 10bd8a6d8; end: 10bd8a703; -[_TtC26UserProviderPluginProvider18UserProviderPlugin init] */

void FUN_10bd8a6d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UserProviderPluginProvider.UserProviderPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a704);
  (*pcVar1)();
}



/* Entry: 10bd8a704; end: 10bd8a72f; -[_TtC26DuplexClientPluginProvider18DuplexClientPlugin init] */

void FUN_10bd8a704(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DuplexClientPluginProvider.DuplexClientPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a730);
  (*pcVar1)();
}



/* Entry: 10bd8a730; end: 10bd8a75b; -[SCMyAICameraBitmojiFetcher init] */

void FUN_10bd8a730(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MyAICameraBitmojiFetcherImpl.MyAICameraBitmojiFetcher",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a75c);
  (*pcVar1)();
}



/* Entry: 10bd8a75c; end: 10bd8a787; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore init] */

void FUN_10bd8a75c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSEPrefetchedMediaServicesImplementation.NSEPrefetchedMediaStore",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a788);
  (*pcVar1)();
}



/* Entry: 10bd8a788; end: 10bd8a7b3; -[_TtC41SCAppThemeBootstrapServicesImplementation25SCAppThemeBootstrapEngine init] */

void FUN_10bd8a788(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAppThemeBootstrapServicesImplementation.SCAppThemeBootstrapEngine",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a7b4);
  (*pcVar1)();
}



/* Entry: 10bd8a7b4; end: 10bd8a913; -[_TtC31SCNativeComplianceEngineAdapter31SCNativeComplianceEngineAdapter init] */

void FUN_10bd8a7b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNativeComplianceEngineAdapter.SCNativeComplianceEngineAdapter",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a7e0);
  (*pcVar1)();
}



/* Entry: 10bd8a914; end: 10bd8a9c3; -[AdShake2ReportLoggerSwift init] */

void FUN_10bd8a914(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdOperationalLoggingServicesEntryPointSwift.AdShake2ReportLoggerSwift",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a940);
  (*pcVar1)();
}



/* Entry: 10bd8a9c4; end: 10bd8aa73; -[AdTrackBindingsParserServices init] */

void FUN_10bd8a9c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdTrackBindingsParserServices.AdTrackBindingsParserServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8a9f0);
  (*pcVar1)();
}



/* Entry: 10bd8aa74; end: 10bd8ab4f; -[AdUnlockableTrackerSwift init] */

void FUN_10bd8aa74(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnlockableAdTrackSwift.AdUnlockableTrackerSwift",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8aaa0);
  (*pcVar1)();
}



/* Entry: 10bd8ab50; end: 10bd8abd3; -[_TtC18AdAssertEntryPoint18AdAssertEntryPoint init] */

void FUN_10bd8ab50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAssertEntryPoint.AdAssertEntryPoint",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ab7c);
  (*pcVar1)();
}



/* Entry: 10bd8abd4; end: 10bd8b0cf; -[AdOnDeviceFeatureGatingProvider init] */

void FUN_10bd8abd4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdOnDeviceSwift.AdOnDeviceFeatureGatingProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ac00);
  (*pcVar1)();
}



/* Entry: 10bd8b0d0; end: 10bd8b127; -[SCStreakMetadataProvider init] */

void FUN_10bd8b0d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StreakMetadataProvider.SCStreakMetadataProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b0fc);
  (*pcVar1)();
}



/* Entry: 10bd8b128; end: 10bd8b153; -[_TtC34UserPropertyDelegateImplementation34UserPropertyDelegateImplementation init] */

void FUN_10bd8b128(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UserPropertyDelegateImplementation.UserPropertyDelegateImplementation",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b154);
  (*pcVar1)();
}



/* Entry: 10bd8b154; end: 10bd8b1ab; -[_TtC21NativeContentDelegate25NativeContentDelegateImpl init] */

void FUN_10bd8b154(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NativeContentDelegate.NativeContentDelegateImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b180);
  (*pcVar1)();
}



/* Entry: 10bd8b1ac; end: 10bd8b203; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger init] */

void FUN_10bd8b1ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMessagingCrashLogger.SCMessagingCrashLogger",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b1d8);
  (*pcVar1)();
}



/* Entry: 10bd8b204; end: 10bd8b3e7; -[_TtC24SnapMeStickerInjectorAPI29SnapMeStickerInjectorServices init] */

void FUN_10bd8b204(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapMeStickerInjectorAPI.SnapMeStickerInjectorServices",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b230);
  (*pcVar1)();
}



/* Entry: 10bd8b3e8; end: 10bd8b413; -[SCLensFetchTypeProvider init] */

void FUN_10bd8b3e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFetchTypeProvider.LensFetchTypeProvider",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b414);
  (*pcVar1)();
}



/* Entry: 10bd8b414; end: 10bd8b5f7; -[_TtC41LensDeviceDependentAssetAnalyticsServices41LensDeviceDependentAssetAnalyticsServices init] */

void FUN_10bd8b414(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensDeviceDependentAssetAnalyticsServices.LensDeviceDependentAssetAnalyticsServices",
             0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b440);
  (*pcVar1)();
}



/* Entry: 10bd8b5f8; end: 10bd8bb1f; -[SCUnderAgeLocationPermissionViewController initWithNibName:bundle:] */

void FUN_10bd8b5f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnderAgeLocationPermissionModal.UnderAgeLocationPermissionViewController",0x48,
             "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8b624);
  (*pcVar1)();
}



/* Entry: 10bd8bb20; end: 10bd8bd03; -[_TtC24FamilyCenterTweakActions33FamilyCenterTweakActionEntryPoint init] */

void FUN_10bd8bb20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FamilyCenterTweakActions.FamilyCenterTweakActionEntryPoint",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8bb4c);
  (*pcVar1)();
}



/* Entry: 10bd8bd04; end: 10bd8bd2f; -[_TtC25SnapEditorMusicDataLoader30SnapEditorValdiMusicDataLoader init] */

void FUN_10bd8bd04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapEditorMusicDataLoader.SnapEditorValdiMusicDataLoader",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8bd30);
  (*pcVar1)();
}



/* Entry: 10bd8bd30; end: 10bd8bd5b; -[_TtC28SnapEditorStickerImageLoader33SnapEditorStickerValdiImageLoader init] */

void FUN_10bd8bd30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapEditorStickerImageLoader.SnapEditorStickerValdiImageLoader",0x3e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8bd5c);
  (*pcVar1)();
}



/* Entry: 10bd8bd5c; end: 10bd8c6a3; -[SCCameraFingerDownWarmerImpl init] */

void FUN_10bd8bd5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFingerDownWarmerImpl.CameraFingerDownWarmerImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8bd88);
  (*pcVar1)();
}



/* Entry: 10bd8c6a4; end: 10bd8c6fb; -[SponsoredLensEncryptedUserDataUpdater init] */

void FUN_10bd8c6a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSponsoredLensServicesImplementationSwift.SponsoredLensEncryptedUserDataUpdater",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c6d0);
  (*pcVar1)();
}



/* Entry: 10bd8c6fc; end: 10bd8c727; -[SCBitmojiUnlinkWithEditOptionDialogPresenter init] */

void FUN_10bd8c6fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiUIControllersSIGDialog.SCBitmojiUnlinkWithEditOptionDialogPresenter",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c728);
  (*pcVar1)();
}



/* Entry: 10bd8c728; end: 10bd8c753; -[_TtC24GroupStorePluginProvider16GroupStorePlugin init] */

void FUN_10bd8c728(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GroupStorePluginProvider.GroupStorePlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c754);
  (*pcVar1)();
}



/* Entry: 10bd8c754; end: 10bd8c77f; -[_TtC24TranscoderPluginProvider16TranscoderPlugin init] */

void FUN_10bd8c754(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("TranscoderPluginProvider.TranscoderPlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c780);
  (*pcVar1)();
}



/* Entry: 10bd8c780; end: 10bd8c7ab; -[_TtC12SCTranscoder18TranscoderServices init] */

void FUN_10bd8c780(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCTranscoder.TranscoderServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c7ac);
  (*pcVar1)();
}



/* Entry: 10bd8c7ac; end: 10bd8c7d7; -[_TtC22UploaderPluginProvider14UploaderPlugin init] */

void FUN_10bd8c7ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UploaderPluginProvider.UploaderPlugin",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c7d8);
  (*pcVar1)();
}



/* Entry: 10bd8c7d8; end: 10bd8c803; -[_TtC29ActivityFeedBadgeServicesImpl29ActivityFeedBadgeServicesImpl init] */

void FUN_10bd8c7d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivityFeedBadgeServicesImpl.ActivityFeedBadgeServicesImpl",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c804);
  (*pcVar1)();
}



/* Entry: 10bd8c804; end: 10bd8c82f; -[_TtC32NotificationCenterButtonProvider32NotificationCenterButtonProvider init] */

void FUN_10bd8c804(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NotificationCenterButtonProvider.NotificationCenterButtonProvider",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c830);
  (*pcVar1)();
}



/* Entry: 10bd8c830; end: 10bd8c8df; -[_TtC34ActivityFeedDuplexMessagingHandler34ActivityFeedDuplexMessagingHandler init] */

void FUN_10bd8c830(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivityFeedDuplexMessagingHandler.ActivityFeedDuplexMessagingHandler",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c85c);
  (*pcVar1)();
}



/* Entry: 10bd8c8e0; end: 10bd8c90b; -[_TtC35MapArrivalNotificationsBillboardFHP51MapArrivalNotificationsBillboardFHPUIConfigProvider init] */

void FUN_10bd8c8e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapArrivalNotificationsBillboardFHP.MapArrivalNotificationsBillboardFHPUIConfigProvider"
             ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c90c);
  (*pcVar1)();
}



/* Entry: 10bd8c90c; end: 10bd8c937; -[SCMapSaberFriendCompassView initWithFrame:] */

void FUN_10bd8c90c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapFriendCompassImplementation.MapFriendCompassView",0x33,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c938);
  (*pcVar1)();
}



/* Entry: 10bd8c938; end: 10bd8c963; -[_TtC41MapNavBarTooltipComplianceServiceProvider33MapNavBarTooltipComplianceChecker init] */

void FUN_10bd8c938(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapNavBarTooltipComplianceServiceProvider.MapNavBarTooltipComplianceChecker",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c964);
  (*pcVar1)();
}



/* Entry: 10bd8c964; end: 10bd8c98f; -[_TtC43ContentUnderstandBackfillCursorServicesImpl34ContentUnderstandBackfillProxyImpl init] */

void FUN_10bd8c964(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ContentUnderstandBackfillCursorServicesImpl.ContentUnderstandBackfillProxyImpl",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c990);
  (*pcVar1)();
}



/* Entry: 10bd8c990; end: 10bd8c9bb; -[_TtC46ContentUnderstandBackfillSnapCountServicesImpl46ContentUnderstandBackfillSnapCountProviderImpl init] */

void FUN_10bd8c990(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ContentUnderstandBackfillSnapCountServicesImpl.ContentUnderstandBackfillSnapCountProviderImpl"
             ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c9bc);
  (*pcVar1)();
}



/* Entry: 10bd8c9bc; end: 10bd8c9e7; -[_TtC27FaceTaggingDataServicesImpl23FaceTaggingDataProvider init] */

void FUN_10bd8c9bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FaceTaggingDataServicesImpl.FaceTaggingDataProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8c9e8);
  (*pcVar1)();
}



/* Entry: 10bd8c9e8; end: 10bd8ca13; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager init] */

void FUN_10bd8c9e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FaceTaggingPermissionsServiceImpl.FaceTaggingPermissionsManager",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ca14);
  (*pcVar1)();
}



/* Entry: 10bd8ca14; end: 10bd8ca3f; -[_TtC28MemTwoAiSnapsTabServicesImpl34MemTwoAiSnapsTabContextBuilderImpl init] */

void FUN_10bd8ca14(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemTwoAiSnapsTabServicesImpl.MemTwoAiSnapsTabContextBuilderImpl",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ca40);
  (*pcVar1)();
}



/* Entry: 10bd8ca40; end: 10bd8ca6b; -[_TtC30MemoriesSearchTagsServicesImpl26MemoriesSearchTagsProvider init] */

void FUN_10bd8ca40(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesSearchTagsServicesImpl.MemoriesSearchTagsProvider",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ca6c);
  (*pcVar1)();
}



/* Entry: 10bd8ca6c; end: 10bd8ca97; -[_TtC47MemTwoLegacySnapThumbnailProviderImplementation33MemTwoLegacySnapThumbnailProvider init] */

void FUN_10bd8ca6c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemTwoLegacySnapThumbnailProviderImplementation.MemTwoLegacySnapThumbnailProvider",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8ca98);
  (*pcVar1)();
}



/* Entry: 10bd8ca98; end: 10bd8cac3; -[_TtC40SCPlusBillboardFHPUIConfigImplementation32PlusBillboardFHPUIConfigProvider init] */

void FUN_10bd8ca98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPlusBillboardFHPUIConfigImplementation.PlusBillboardFHPUIConfigProvider",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8cac4);
  (*pcVar1)();
}



/* Entry: 10bd8cac4; end: 10bd8cb1b; -[_TtC35SpotlightDraftsGatingImplementation25SpotlightDraftsGatingImpl init] */

void FUN_10bd8cac4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SpotlightDraftsGatingImplementation.SpotlightDraftsGatingImpl",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd8caf0);
  (*pcVar1)();
}


