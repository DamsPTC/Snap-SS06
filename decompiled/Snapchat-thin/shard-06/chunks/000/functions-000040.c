/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10441c9a0; end: 10441c9f7; -[SCContextActionPerformerScope initWithProviderRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441c9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113078248) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10441c9f8; end: 10441ca23; -[SCContextActionPerformerScope init] */

void FUN_10441c9f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextActionPerformerScope.SCContextActionPerformerScope",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441ca24);
  (*pcVar1)();
}



/* Entry: 10441ca24; end: 10441ca3f; -[SCContextActionPerformerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441ca24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078248));
  return;
}



/* Entry: 10441ca40; end: 10441cb37;  */

void FUN_10441ca40(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441cb38; end: 10441cb93; -[_TtC29SCContextActionPerformerScope37SCContextActionPerformerScopeServices buildWithProviderRegistry:] */

void FUN_10441cb38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x00010441ca94(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441cb94; end: 10441cbbf; -[_TtC29SCContextActionPerformerScope37SCContextActionPerformerScopeServices init] */

void FUN_10441cb94(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextActionPerformerScope.SCContextActionPerformerScopeServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441cbc0);
  (*pcVar1)();
}



/* Entry: 10441cbc0; end: 10441cbc3;  */

void FUN_10441cbc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441cbc4; end: 10441cbf7;  */

void FUN_10441cbc4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441cbf8; end: 10441cc1b; -[_TtC29SCContextActionPerformerScope37SCContextActionPerformerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441cbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113078258));
  return;
}



/* Entry: 10441cc1c; end: 10441d077;  */

long FUN_10441cc1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10441d078; end: 10441d087; -[_TtC24SCContextLoggingServices24SCContextLoggingServices loggerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441d078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130782e0));
  return;
}



/* Entry: 10441d088; end: 10441d0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441d088(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130782e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441d0d4; end: 10441d133; -[_TtC24SCContextLoggingServices24SCContextLoggingServices init] */

void FUN_10441d0d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextLoggingServices.SCContextLoggingServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441d100);
  (*pcVar1)();
}



/* Entry: 10441d134; end: 10441d143; -[_TtC24SCContextLoggingServices24SCContextLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441d134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130782e0));
  return;
}



/* Entry: 10441d144; end: 10441d177; +[SCContextLoggingActionTypes commerce] */

void FUN_10441d144(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x725064656e65706f,0xed0000746375646f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d178; end: 10441d1a7; +[SCContextLoggingActionTypes store] */

void FUN_10441d178(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x745364656e65706f,0xeb0000000065726f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d1a8; end: 10441d1d3; +[SCContextLoggingActionTypes attachment] */

void FUN_10441d1a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1fca80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d1d4; end: 10441d1ff; +[SCContextLoggingActionTypes genericDeeplink] */

void FUN_10441d1d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fcaa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d200; end: 10441d22f; +[SCContextLoggingActionTypes joinTheChat] */

void FUN_10441d200(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x436568546e696f6a,0xeb00000000746168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d230; end: 10441d23b;  */

undefined * FUN_10441d230(void)

{
  return &UNK_11076c958;
}



/* Entry: 10441d23c; end: 10441d267; +[SCContextLoggingActionTypes mention] */

void FUN_10441d23c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1fcac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d268; end: 10441d293; +[SCContextLoggingActionTypes openMentionedUserStory] */

void FUN_10441d268(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fcae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d294; end: 10441d2bf; +[SCContextLoggingActionTypes ourStoryCreator] */

void FUN_10441d294(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1fcb00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d2c0; end: 10441d2eb; +[SCContextLoggingActionTypes mentionNotFound] */

void FUN_10441d2c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1fcb20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d2ec; end: 10441d317; +[SCContextLoggingActionTypes place] */

void FUN_10441d2ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fcb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d318; end: 10441d343; +[SCContextLoggingActionTypes lens] */

void FUN_10441d318(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1fcb60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d344; end: 10441d36f; +[SCContextLoggingActionTypes odgFilter] */

void FUN_10441d344(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fcb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d370; end: 10441d39b; +[SCContextLoggingActionTypes mapMarker] */

void FUN_10441d370(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fcba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d39c; end: 10441d3c7; +[SCContextLoggingActionTypes appInstall] */

void FUN_10441d39c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fcbc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d3c8; end: 10441d3f3; +[SCContextLoggingActionTypes placeReviewRanking] */

void FUN_10441d3c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fcbe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d3f4; end: 10441d41f; +[SCContextLoggingActionTypes placeReview] */

void FUN_10441d3f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1fcc10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d420; end: 10441d44b; +[SCContextLoggingActionTypes placeTripAdvisorLink] */

void FUN_10441d420(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1fcc30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d44c; end: 10441d477; +[SCContextLoggingActionTypes placeFoursquareLink] */

void FUN_10441d44c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1fcc60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d478; end: 10441d4a3; +[SCContextLoggingActionTypes placeEditorial] */

void FUN_10441d478(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1fcc90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d4a4; end: 10441d4cf; +[SCContextLoggingActionTypes groupInvite] */

void FUN_10441d4a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fccb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d4d0; end: 10441d4fb; +[SCContextLoggingActionTypes relatedStory] */

void FUN_10441d4d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1fccd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d4fc; end: 10441d527; +[SCContextLoggingActionTypes publisher] */

void FUN_10441d4fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fccf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d528; end: 10441d553; +[SCContextLoggingActionTypes topic] */

void FUN_10441d528(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fcd10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d554; end: 10441d57f; +[SCContextLoggingActionTypes appPage] */

void FUN_10441d554(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fcd30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d580; end: 10441d58b;  */

undefined * FUN_10441d580(void)

{
  return &UNK_11076c968;
}



/* Entry: 10441d58c; end: 10441d5b7; +[SCContextLoggingActionTypes snapReply] */

void FUN_10441d58c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fcd50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d5b8; end: 10441d5e3; +[SCContextLoggingActionTypes storyInvite] */

void FUN_10441d5b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1fcd70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d5e4; end: 10441d5ef;  */

undefined * FUN_10441d5e4(void)

{
  return &UNK_11076c978;
}



/* Entry: 10441d5f0; end: 10441d61b; +[SCContextLoggingActionTypes publicProfile] */

void FUN_10441d5f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fcd90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d61c; end: 10441d627;  */

undefined * FUN_10441d61c(void)

{
  return &UNK_11076c988;
}



/* Entry: 10441d628; end: 10441d653; +[SCContextLoggingActionTypes quickAddStory] */

void FUN_10441d628(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fcdb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d654; end: 10441d67f; +[SCContextLoggingActionTypes game] */

void FUN_10441d654(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x614764656e65706f,0xea0000000000656d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d680; end: 10441d6ab; +[SCContextLoggingActionTypes cameosOnboarding] */

void FUN_10441d680(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1fcdd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d6ac; end: 10441d6db; +[SCContextLoggingActionTypes music] */

void FUN_10441d6ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x754d646570706174,0xeb00000000636973);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d6dc; end: 10441d707; +[SCContextLoggingActionTypes originalSound] */

void FUN_10441d6dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fcdf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d708; end: 10441d73b; +[SCContextLoggingActionTypes musicPlay] */

void FUN_10441d708(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x754d646570706174,0xef79616c50636973);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d73c; end: 10441d76f; +[SCContextLoggingActionTypes snappable] */

void FUN_10441d73c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e53646570706174,0xef656c6261707061);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d770; end: 10441d79b; +[SCContextLoggingActionTypes creativeToolsStickers] */

void FUN_10441d770(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1fce10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d79c; end: 10441d7c7; +[SCContextLoggingActionTypes astrologyProfile] */

void FUN_10441d79c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fce30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d7c8; end: 10441d7d3;  */

undefined * FUN_10441d7c8(void)

{
  return &UNK_10dcfc580;
}



/* Entry: 10441d7d4; end: 10441d803; +[SCContextLoggingActionTypes share] */

void FUN_10441d7d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6853646570706174,0xeb00000000657261);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d804; end: 10441d80f;  */

undefined * FUN_10441d804(void)

{
  return &UNK_11076c998;
}



/* Entry: 10441d810; end: 10441d83b; +[SCContextLoggingActionTypes upsellShare] */

void FUN_10441d810(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1fce50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d83c; end: 10441d847;  */

undefined * FUN_10441d83c(void)

{
  return &UNK_11076c9a8;
}



/* Entry: 10441d848; end: 10441d873; +[SCContextLoggingActionTypes tappedSpotlightReplyOnContextMenu] */

void FUN_10441d848(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1fce70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d874; end: 10441d87f;  */

undefined * FUN_10441d874(void)

{
  return &UNK_11076c9b8;
}



/* Entry: 10441d880; end: 10441d8ab; +[SCContextLoggingActionTypes tappedSpotlightCTABelowPlaybackComment] */

void FUN_10441d880(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1fce90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d8ac; end: 10441d8d7; +[SCContextLoggingActionTypes tappedCreateStickerSpotlightAddComment] */

void FUN_10441d8ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1fcec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d8d8; end: 10441d903; +[SCContextLoggingActionTypes poll] */

void FUN_10441d8d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f50646570706174,0xea00000000006c6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d904; end: 10441d92f; +[SCContextLoggingActionTypes question] */

void FUN_10441d904(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fcef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d930; end: 10441d95b; +[SCContextLoggingActionTypes shareYours] */

void FUN_10441d930(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fcf10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d95c; end: 10441d987; +[SCContextLoggingActionTypes snapMe] */

void FUN_10441d95c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fcf30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d988; end: 10441d9b3; +[SCContextLoggingActionTypes subscribeOurStoryCreator] */

void FUN_10441d988(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1fcf50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d9b4; end: 10441d9df; +[SCContextLoggingActionTypes unsubscribeOurStoryCreator] */

void FUN_10441d9b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fcf70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441d9e0; end: 10441d9eb;  */

undefined * FUN_10441d9e0(void)

{
  return &UNK_11076c9c8;
}



/* Entry: 10441d9ec; end: 10441da17; +[SCContextLoggingActionTypes tappedFriendAdd] */

void FUN_10441d9ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fcfa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441da18; end: 10441da23;  */

undefined * FUN_10441da18(void)

{
  return &UNK_11076c9d8;
}



/* Entry: 10441da24; end: 10441da4f; +[SCContextLoggingActionTypes genAiFeaturedStory] */

void FUN_10441da24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fcfc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441da50; end: 10441da5b;  */

undefined * FUN_10441da50(void)

{
  return &UNK_10dcfc590;
}



/* Entry: 10441da5c; end: 10441da7f; +[SCContextLoggingActionTypes boost] */

void FUN_10441da5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74736f6f62,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441da80; end: 10441da8b;  */

undefined * FUN_10441da80(void)

{
  return &UNK_10dcfc5a0;
}



/* Entry: 10441da8c; end: 10441dab3; +[SCContextLoggingActionTypes unboost] */

void FUN_10441da8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74736f6f626e75,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dab4; end: 10441dadf; +[SCContextLoggingActionTypes subscribe] */

void FUN_10441dab4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6269726373627573,0xe900000000000065);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dae0; end: 10441db0f; +[SCContextLoggingActionTypes unsubscribe] */

void FUN_10441dae0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7263736275736e75,0xeb00000000656269);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441db10; end: 10441db1b;  */

undefined * FUN_10441db10(void)

{
  return &UNK_10dcfc5b0;
}



/* Entry: 10441db1c; end: 10441db3f; +[SCContextLoggingActionTypes reply] */

void FUN_10441db1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x796c706572,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441db40; end: 10441db63; +[SCContextLoggingActionTypes report] */

void FUN_10441db40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74726f706572,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441db64; end: 10441db6f;  */

undefined * FUN_10441db64(void)

{
  return &UNK_10dcfc5c0;
}



/* Entry: 10441db70; end: 10441db8f; +[SCContextLoggingActionTypes edit] */

void FUN_10441db70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74696465,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441db90; end: 10441dbb3; +[SCContextLoggingActionTypes deleteSnap] */

void FUN_10441db90(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6574656c6564,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dbb4; end: 10441dbd3; +[SCContextLoggingActionTypes save] */

void FUN_10441dbb4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65766173,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dbd4; end: 10441dbdf;  */

undefined * FUN_10441dbd4(void)

{
  return &UNK_10dcfc5d0;
}



/* Entry: 10441dbe0; end: 10441dc0f; +[SCContextLoggingActionTypes saveInChat] */

void FUN_10441dbe0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f6e695f65766173,0xec00000074616863);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dc10; end: 10441dc43; +[SCContextLoggingActionTypes unsaveInChat] */

void FUN_10441dc10(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x695f657661736e75,0xee00746168635f6e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dc44; end: 10441dc77; +[SCContextLoggingActionTypes deleteInChat] */

void FUN_10441dc44(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x695f6574656c6564,0xee00746168635f6e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dc78; end: 10441dc9f; +[SCContextLoggingActionTypes getInfo] */

void FUN_10441dc78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f666e695f746567,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dca0; end: 10441dccf; +[SCContextLoggingActionTypes exportSnap] */

void FUN_10441dca0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x735f74726f707865,0xeb0000000070616e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dcd0; end: 10441dcff; +[SCContextLoggingActionTypes copyLink] */

void FUN_10441dcd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF_110350f90)
            (0x6f43646570706174,0xee006b6e694c7970);
  return;
}



/* Entry: 10441dd00; end: 10441dd23; +[SCContextLoggingActionTypes remix] */

void FUN_10441dd00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x78696d6572,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dd24; end: 10441dd4b; +[SCContextLoggingActionTypes aiRemix] */

void FUN_10441dd24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x78696d65725f6961,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dd4c; end: 10441dd77; +[SCContextLoggingActionTypes challenge] */

void FUN_10441dd4c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e656c6c616863,0xe900000000000065);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dd78; end: 10441dd97; +[SCContextLoggingActionTypes meo] */

void FUN_10441dd78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f656d,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441dd98; end: 10441ddc3; +[SCContextLoggingActionTypes subtitles] */

void FUN_10441dd98(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974627573,0xe900000000000073);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441ddc4; end: 10441ddeb; +[SCContextLoggingActionTypes dislike] */

void FUN_10441ddc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656b696c736964,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441ddec; end: 10441de17; +[SCContextLoggingActionTypes unfavorite] */

void FUN_10441ddec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69726f7661666e75,0xea00000000006574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


