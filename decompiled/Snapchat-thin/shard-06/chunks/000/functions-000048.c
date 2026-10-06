/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104431ad8; end: 104431ae7; -[SCOperaMediaEventImageStartsToDisplayParams image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078fb0));
  return;
}



/* Entry: 104431ae8; end: 104431afb; -[SCOperaMediaEventImageStartsToDisplayParams imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078fb8));
  return;
}



/* Entry: 104431afc; end: 104431c07; -[SCOperaMediaEventImageStartsToDisplayParams initWithVideoPrepareTimeMs:image:imageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431afc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113078fa8) = param_1;
  *(undefined8 *)(param_2 + _DAT_113078fb0) = param_4;
  *(undefined8 *)(param_2 + _DAT_113078fb8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104431c08; end: 104431c0b; -[SCOperaMediaEventImageStartsToDisplayParams copyWithZone:] */

void FUN_104431c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104431c0c; end: 104431c27; -[SCOperaMediaEventImageStartsToDisplayParams description] */

void FUN_104431c0c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104431c28; end: 104431ca3; -[SCOperaMediaEventImageStartsToDisplayParams init] */

void FUN_104431c28(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefines/OperaMediaEventImageStartsToDisplayParamsWrapper.swift",0x46,2,0x2b,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104431c70);
  (*pcVar1)();
}



/* Entry: 104431ca4; end: 104431cdb; -[SCOperaMediaEventImageStartsToDisplayParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431ca4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078fb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078fb8));
  return;
}



/* Entry: 104431cdc; end: 104431cfb;  */

void FUN_104431cdc(void)

{
  _objc_opt_self(&PTR_PTR_1129b3030);
  return;
}



/* Entry: 104431cfc; end: 104431cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078fa8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078fb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078fb8) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104431d00; end: 104431d0f; -[SCOperaMediaEventMediaStartsToDisplayParams videoPrepareTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078fe8);
}



/* Entry: 104431d10; end: 104431d1f; -[SCOperaMediaEventMediaStartsToDisplayParams videoStartPreparingTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078ff0);
}



/* Entry: 104431d20; end: 104431d2f; -[SCOperaMediaEventMediaStartsToDisplayParams width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078ff8);
}



/* Entry: 104431d30; end: 104431d3f; -[SCOperaMediaEventMediaStartsToDisplayParams height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079000);
}



/* Entry: 104431d40; end: 104431d4f; -[SCOperaMediaEventMediaStartsToDisplayParams videoPlaybackPreparedTimeNonMonotonic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079008);
}



/* Entry: 104431d50; end: 104431d5f; -[SCOperaMediaEventMediaStartsToDisplayParams viewportWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079010);
}



/* Entry: 104431d60; end: 104431d6f; -[SCOperaMediaEventMediaStartsToDisplayParams viewportHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079018);
}



/* Entry: 104431d70; end: 104431d7f; -[SCOperaMediaEventMediaStartsToDisplayParams resolutionWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079020);
}



/* Entry: 104431d80; end: 104431d8f; -[SCOperaMediaEventMediaStartsToDisplayParams resolutionHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104431d80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079028);
}



/* Entry: 104431d90; end: 104431d9f; -[SCOperaMediaEventMediaStartsToDisplayParams videoPlaybackAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079030));
  return;
}



/* Entry: 104431da0; end: 104431daf; -[SCOperaMediaEventMediaStartsToDisplayParams mediaEncrypted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104431da0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079038);
}



/* Entry: 104431db0; end: 104431dbf; -[SCOperaMediaEventMediaStartsToDisplayParams newPITNEventDecouplingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104431db0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079040);
}



/* Entry: 104431dc0; end: 10443200f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104431dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined1 param_11)

{
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078fe8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078ff0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078ff8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113079000) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079008) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113079010) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113079018) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113079020) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113079028) = in_stack_00000000;
  *(undefined8 *)(unaff_x20 + _DAT_113079030) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113079038) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_113079040) = param_11;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104432010; end: 1044320c3; -[SCOperaMediaEventMediaStartsToDisplayParams initWithVideoPrepareTimeMs:videoStartPreparingTimeMs:width:height:videoPlaybackPreparedTimeNonMonotonic:viewportWidth:viewportHeight:resolutionWidth:resolutionHeight:videoPlaybackAsset:mediaEncrypted:newPITNEventDecouplingEnabled:] */

void FUN_104432010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  func_0x000104431ee8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1044320c4; end: 1044321e3;  */

void FUN_1044320c4(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001044320f4(param_1);
  return;
}



/* Entry: 1044321e4; end: 1044321e7; -[SCOperaMediaEventMediaStartsToDisplayParams copyWithZone:] */

void FUN_1044321e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044321e8; end: 10443221b; -[SCOperaMediaEventMediaStartsToDisplayParams description] */

void FUN_1044321e8(void)

{
  undefined1 auStack_68 [88];
  
  func_0x0001044322a8(auStack_68);
  FUN_104432360(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443221c; end: 104432297; -[SCOperaMediaEventMediaStartsToDisplayParams init] */

void FUN_10443221c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefines/OperaMediaEventMediaStartsToDisplayParamsWrapper.swift",0x46,2,0x4f,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104432264);
  (*pcVar1)();
}



/* Entry: 104432298; end: 10443235f; -[SCOperaMediaEventMediaStartsToDisplayParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104432298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079030));
  return;
}



/* Entry: 104432360; end: 104432393;  */

undefined8 FUN_104432360(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044306c0)();
  return param_1;
}



/* Entry: 104432394; end: 1044323b3;  */

void FUN_104432394(void)

{
  _objc_opt_self(&PTR_PTR_1129b3108);
  return;
}



/* Entry: 1044323b4; end: 1044323c3; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams durationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044323b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079070);
}



/* Entry: 1044323c4; end: 1044323d7; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams currentPositionMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044323c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079078);
}



/* Entry: 1044323d8; end: 10443243b; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams initWithDurationMs:currentPositionMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044323d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_113079070) = param_1;
  *(undefined8 *)(param_3 + _DAT_113079078) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443243c; end: 104432497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443243c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079070) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079078) = param_2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104432498; end: 10443249b; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams copyWithZone:] */

void FUN_104432498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10443249c; end: 1044324b7; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams description] */

void FUN_10443249c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044324b8; end: 104432553; -[SCOperaMediaEventVideoPlaybackProgressDidUpdateParams init] */

void FUN_1044324b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefines/OperaMediaEventVideoPlaybackProgressDidUpdateParamsWrapper.swift",0x50
             ,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104432500);
  (*pcVar1)();
}



/* Entry: 104432554; end: 104432557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104432554(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079070) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079078) = param_2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104432558; end: 104432567; -[SCOperaPresentingConfig groupDisplaySequence] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104432558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130790a8);
}



/* Entry: 104432568; end: 104432577; -[SCOperaPresentingConfig unarchiveBeforePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104432568(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790b0);
}



/* Entry: 104432578; end: 104432587; -[SCOperaPresentingConfig fallBackOnLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104432578(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790b8);
}



/* Entry: 104432588; end: 104432597; -[SCOperaPresentingConfig navigationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104432588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130790c0);
}



/* Entry: 104432598; end: 1044325a7; -[SCOperaPresentingConfig showBaseViewWhileDismissing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104432598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790c8);
}



/* Entry: 1044325a8; end: 1044325b7; -[SCOperaPresentingConfig topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044325a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130790d0);
}



/* Entry: 1044325b8; end: 1044325c7; -[SCOperaPresentingConfig transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044325b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130790d8);
}



/* Entry: 1044325c8; end: 1044325d7; -[SCOperaPresentingConfig verticalNavigationCanSwipeLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044325c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790e0);
}



/* Entry: 1044325d8; end: 1044325e7; -[SCOperaPresentingConfig verticalNavigationSwipeLeftToShowAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044325d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790e8);
}



/* Entry: 1044325e8; end: 1044325f7; -[SCOperaPresentingConfig swipeRightToProfileEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044325e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130790f0);
}



/* Entry: 1044325f8; end: 104432607; -[SCOperaPresentingConfig thumbnailTransitionDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1044325f8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1130790f8);
}



/* Entry: 104432608; end: 104432837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104432608(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130790a8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130790b0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_1130790b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130790c0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130790c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130790d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130790d8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_1130790e0) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_1130790e8) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_1130790f0) = param_10;
  *(undefined4 *)(unaff_x20 + _DAT_1130790f8) = param_11;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104432838; end: 1044329b7; -[SCOperaPresentingConfig initWithGroupDisplaySequence:unarchiveBeforePresenting:fallBackOnLoadingView:navigationStyle:showBaseViewWhileDismissing:topInset:transitionMode:verticalNavigationCanSwipeLeft:verticalNavigationSwipeLeftToShowAttachment:swipeRightToProfileEnabled:thumbnailTransitionDurationMs:] */

void FUN_104432838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  func_0x000104432720(param_3,param_4,param_5,param_6,param_7,param_8,(undefined1)param_9,
                      param_9._1_1_);
  return;
}



/* Entry: 1044329b8; end: 104432af7; -[SCOperaPresentingConfig hash] */

void FUN_1044329b8(void)

{
  func_0x0001044329d8();
  return;
}



/* Entry: 104432af8; end: 104432ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104432af8(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x20;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar18 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar19 = &lStack_98;
    _swift_dynamicCast(plVar19,auStack_90,PTR___sypN_11034f1a8 + 8,lVar18,6);
    if (((ulong)plVar19 & 1) != 0) {
      iVar2 = *(int *)(unaff_x20 + _DAT_1130790a8);
      iVar3 = *(int *)(lStack_98 + _DAT_1130790a8);
      bVar6 = *(byte *)(unaff_x20 + _DAT_1130790b0);
      bVar7 = *(byte *)(lStack_98 + _DAT_1130790b0);
      bVar8 = *(byte *)(unaff_x20 + _DAT_1130790b8);
      bVar9 = *(byte *)(lStack_98 + _DAT_1130790b8);
      uVar21 = *(undefined8 *)(unaff_x20 + _DAT_1130790c0);
      uVar20 = *(undefined8 *)(lStack_98 + _DAT_1130790c0);
      bVar10 = *(byte *)(unaff_x20 + _DAT_1130790c8);
      bVar11 = *(byte *)(lStack_98 + _DAT_1130790c8);
      dVar24 = *(double *)(unaff_x20 + _DAT_1130790d0);
      dVar25 = *(double *)(lStack_98 + _DAT_1130790d0);
      uVar22 = *(undefined8 *)(unaff_x20 + _DAT_1130790d8);
      uVar23 = *(undefined8 *)(lStack_98 + _DAT_1130790d8);
      bVar12 = *(byte *)(unaff_x20 + _DAT_1130790e0);
      bVar13 = *(byte *)(lStack_98 + _DAT_1130790e0);
      bVar14 = *(byte *)(unaff_x20 + _DAT_1130790e8);
      bVar15 = *(byte *)(lStack_98 + _DAT_1130790e8);
      bVar16 = *(byte *)(unaff_x20 + _DAT_1130790f0);
      bVar17 = *(byte *)(lStack_98 + _DAT_1130790f0);
      iVar4 = *(int *)(unaff_x20 + _DAT_1130790f8);
      iVar5 = *(int *)(lStack_98 + _DAT_1130790f8);
      _objc_release();
      bVar1 = 0;
      if ((int)uVar21 == (int)uVar20) {
        bVar1 = iVar2 == iVar3 & (bVar6 ^ bVar7 ^ 0xff) & (bVar8 ^ bVar9 ^ 0xff);
      }
      bVar6 = 0;
      if (dVar24 == dVar25) {
        bVar6 = bVar1 & (bVar10 ^ bVar11 ^ 0xff);
      }
      bVar1 = 0;
      if ((int)uVar22 == (int)uVar23) {
        bVar1 = bVar6;
      }
      if (iVar4 != iVar5) {
        return 0;
      }
      return bVar1 & (bVar12 ^ bVar13 ^ 0xff) & (bVar14 ^ bVar15 ^ 0xff) & (bVar16 ^ bVar17 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 104432cd0; end: 104432d4f; -[SCOperaPresentingConfig isEqual:] */

uint FUN_104432cd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104432af8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104432d50; end: 104432d53; -[SCOperaPresentingConfig copyWithZone:] */

void FUN_104432d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104432d54; end: 104432d7f; -[SCOperaPresentingConfig description] */

void FUN_104432d54(void)

{
  undefined1 auStack_48 [56];
  
  FUN_104432dfc(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104432d80; end: 104432dfb; -[SCOperaPresentingConfig init] */

void FUN_104432d80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefines/OperaPresentingConfigWrapper.swift",0x32,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104432dc8);
  (*pcVar1)();
}



/* Entry: 104432dfc; end: 104432eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104432dfc(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(undefined1 *)(param_2 + _DAT_1130790b0);
  uVar3 = *(undefined1 *)(param_2 + _DAT_1130790b8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_1130790c0);
  uVar4 = *(undefined1 *)(param_2 + _DAT_1130790c8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_1130790d0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_1130790d8);
  uVar5 = *(undefined1 *)(param_2 + _DAT_1130790e0);
  uVar6 = *(undefined1 *)(param_2 + _DAT_1130790e8);
  uVar7 = *(undefined1 *)(param_2 + _DAT_1130790f0);
  uVar1 = *(undefined4 *)(param_2 + _DAT_1130790f8);
  *param_1 = *(undefined8 *)(param_2 + _DAT_1130790a8);
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 9) = uVar3;
  param_1[2] = uVar8;
  *(undefined1 *)(param_1 + 3) = uVar4;
  param_1[4] = uVar10;
  param_1[5] = uVar9;
  *(undefined1 *)(param_1 + 6) = uVar5;
  *(undefined1 *)((long)param_1 + 0x31) = uVar6;
  *(undefined1 *)((long)param_1 + 0x32) = uVar7;
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  return;
}



/* Entry: 104432eb0; end: 104432ecf;  */

void FUN_104432eb0(void)

{
  _objc_opt_self(&PTR_PTR_1129b32f8);
  return;
}



/* Entry: 104432ed0; end: 1044337d7;  */

void FUN_104432ed0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  _objc_release(*(undefined8 *)(param_1 + 0x98));
  _objc_release(*(undefined8 *)(param_1 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xd0));
  _objc_release(*(undefined8 *)(param_1 + 0xe0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf0));
  _objc_release(*(undefined8 *)(param_1 + 0x168));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x198));
  return;
}



/* Entry: 1044337d8; end: 1044337e7; -[SCOperaConfiguration navigationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044337d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079128);
}



/* Entry: 1044337e8; end: 1044337f7; -[SCOperaConfiguration ngsActionBarContentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044337e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079130);
}



/* Entry: 1044337f8; end: 104433807; -[SCOperaConfiguration pageHorizontalMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044337f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079138);
}



/* Entry: 104433808; end: 104433817; -[SCOperaConfiguration pageVerticalMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079140);
}



/* Entry: 104433818; end: 104433827; -[SCOperaConfiguration backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079148));
  return;
}



/* Entry: 104433828; end: 104433837; -[SCOperaConfiguration primaryColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079150));
  return;
}



/* Entry: 104433838; end: 10443384f; -[SCOperaConfiguration bounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079158);
}



/* Entry: 104433850; end: 10443385f; -[SCOperaConfiguration defaultRoundedCornersRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433850(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079160);
}



/* Entry: 104433860; end: 10443386f; -[SCOperaConfiguration extendedAttachmentBoundsInsetsValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079168));
  return;
}



/* Entry: 104433870; end: 10443387f; -[SCOperaConfiguration rotationDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104433870(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079170);
}



/* Entry: 104433880; end: 10443388f; -[SCOperaConfiguration zoomEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104433880(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079178);
}



/* Entry: 104433890; end: 10443389f; -[SCOperaConfiguration recognizeLeftTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104433890(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079180);
}



/* Entry: 1044338a0; end: 1044338af; -[SCOperaConfiguration tapLeftWidthRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044338a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079188);
}



/* Entry: 1044338b0; end: 1044338bf; -[SCOperaConfiguration fullContentEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044338b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079190);
}



/* Entry: 1044338c0; end: 10443391b; -[SCOperaConfiguration disabledGesturesOnLoadingLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044338c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079198);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10443391c; end: 10443392b; -[SCOperaConfiguration nextViewModelPageMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443391c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130791a0);
}



/* Entry: 10443392c; end: 10443393b; -[SCOperaConfiguration previousViewModelPageMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443392c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130791a8);
}



/* Entry: 10443393c; end: 10443394b; -[SCOperaConfiguration loopMediaWhilePaging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10443393c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791b0);
}



/* Entry: 10443394c; end: 10443395b; -[SCOperaConfiguration loopDisabledWhileDismissing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10443394c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791b8);
}



/* Entry: 10443395c; end: 10443396b; -[SCOperaConfiguration presentationAnimationDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10443395c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791c0);
}



/* Entry: 10443396c; end: 10443397b; -[SCOperaConfiguration initialKeepMuteOverrideOnDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10443396c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791c8);
}



/* Entry: 10443397c; end: 10443398b; -[SCOperaConfiguration allowLoadingScreens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10443397c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791d0);
}



/* Entry: 10443398c; end: 10443399b; -[SCOperaConfiguration customLoadingScreenBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443398c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130791d8));
  return;
}



/* Entry: 10443399c; end: 1044339ab; -[SCOperaConfiguration edgesWithZeroSafeAreaInsetOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443399c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130791e0);
}



/* Entry: 1044339ac; end: 1044339bb; -[SCOperaConfiguration disableHorizontalAutoPageAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044339ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791e8);
}



/* Entry: 1044339bc; end: 1044339cb; -[SCOperaConfiguration responsiveLayoutRules] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044339bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130791f0));
  return;
}



/* Entry: 1044339cc; end: 1044339db; -[SCOperaConfiguration doubleTapGestureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044339cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130791f8);
}



/* Entry: 1044339dc; end: 1044339eb; -[SCOperaConfiguration doubleTapGestureRecognitionDelaySec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044339dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079200);
}



/* Entry: 1044339ec; end: 1044339fb; -[SCOperaConfiguration doubleTapGestureMaximumIntervalBetweenSuccessiveTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044339ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079208);
}



/* Entry: 1044339fc; end: 104433a53; -[SCOperaConfiguration customLayerViewControllerFactories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044339fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079210);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 104433a54; end: 104433a6b; -[SCOperaConfiguration defaultLayerViewControllerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433a54(long param_1)

{
  if (*(long *)(param_1 + _DAT_113079218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
    return;
  }
  return;
}



/* Entry: 104433a6c; end: 104433a7b; -[SCOperaConfiguration customLayerViewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079220));
  return;
}



/* Entry: 104433a7c; end: 104433ad7; -[SCOperaConfiguration automationAccessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104433a7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113079228))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113079228);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104433ad8; end: 104433ae7; -[SCOperaConfiguration pageViewNameDEPRECATED] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079230);
}



/* Entry: 104433ae8; end: 104433af7; -[SCOperaConfiguration longPressMinimumPressDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433ae8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079238);
}



/* Entry: 104433af8; end: 104433b07; -[SCOperaConfiguration actionMenuEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104433af8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079240);
}



/* Entry: 104433b08; end: 104433b17; -[SCOperaConfiguration actionMenuAnimationDurationLong] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433b08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079248);
}



/* Entry: 104433b18; end: 104433b27; -[SCOperaConfiguration actionMenuAnimationDurationMedium] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433b18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079250);
}



/* Entry: 104433b28; end: 104433b37; -[SCOperaConfiguration actionMenuAnimationDurationShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433b28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079258);
}



/* Entry: 104433b38; end: 104433b47; -[SCOperaConfiguration springDampening] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104433b38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079260);
}


