/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10431fe6c; end: 10431fe77; -[SCContentProductOperaConfigurations setContentRemovalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fe6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e668;
  _swift_beginAccess(param_1 + _DAT_11306e668,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fe78; end: 10431fecb;  */

void FUN_10431fe78(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fecc; end: 1043200cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10431fecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11306e630;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e630,0);
  lVar3 = _DAT_11306e638;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e638,0);
  lVar4 = _DAT_11306e648;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e648,0);
  lVar5 = _DAT_11306e650;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e650,0);
  lVar6 = _DAT_11306e668;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e668,0);
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_1);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11306e640) = param_3;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_4);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_c8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_11306e658) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306e660) = param_7;
  _swift_beginAccess(unaff_x20 + lVar6,auStack_e0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar6,param_8);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_7);
  puVar7 = auStack_f0;
  _objc_msgSendSuper2(puVar7,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  return puVar7;
}



/* Entry: 1043200cc; end: 10432014f;  */

undefined8
FUN_1043200cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104320320();
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104320150; end: 104320247; -[SCContentProductOperaConfigurations initWithBaseView:presentingViewController:navigationStyle:playbackDelegate:contextPluginDelegate:transitionMode:composerOperaEventProviders:contentRemovalDelegate:] */

undefined8
FUN_104320150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain();
  uVar2 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar3 = param_9;
  _objc_retain(param_9);
  _swift_unknownObjectRetain(param_10);
  FUN_104320320(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar3);
  _swift_unknownObjectRelease(param_10);
  return param_3;
}



/* Entry: 104320248; end: 1043202a7; -[SCContentProductOperaConfigurations init] */

void FUN_104320248(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContentProductPlaybackScope.ContentProductOperaConfigurations",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104320274);
  (*pcVar1)();
}



/* Entry: 1043202a8; end: 10432031f; -[SCContentProductOperaConfigurations .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001043202d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001043202f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043202d8) */
/* WARNING: Removing unreachable block (ram,0x0001043202f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043202a8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11306e630);
  param_1 = param_1 + _DAT_11306e638;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 104320320; end: 1043204d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104320320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  lVar2 = _DAT_11306e630;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e630,0);
  lVar3 = _DAT_11306e638;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e638,0);
  lVar4 = _DAT_11306e648;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e648,0);
  lVar5 = _DAT_11306e650;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e650,0);
  lVar6 = _DAT_11306e668;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306e668,0);
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_1);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11306e640) = param_3;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_4);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_c8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_11306e658) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306e660) = param_7;
  _swift_beginAccess(unaff_x20 + lVar6,auStack_e0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar6,param_8);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&stack0xffffffffffffff10,puVar1);
  return;
}



/* Entry: 1043204d8; end: 1043204f7;  */

void FUN_1043204d8(void)

{
  _objc_opt_self(&PTR_PTR_11299be68);
  return;
}



/* Entry: 1043204f8; end: 10432050b;  */

bool FUN_1043204f8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10432050c; end: 1043205e3;  */

void FUN_10432050c(void)

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



/* Entry: 1043205e4; end: 104320603;  */

void FUN_1043205e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104320604; end: 104320643;  */

void FUN_104320604(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceaf70;
  _swift_getWitnessTable(&UNK_10dceaf70,&UNK_110759d10);
  puRam000000011306e698 = puVar1;
  return;
}



/* Entry: 104320644; end: 104320653;  */

undefined1  [16] FUN_104320644(void)

{
  return ZEXT816(0x110759d10);
}



/* Entry: 104320654; end: 104320663; -[SCContentProductPlaybackBaseConfigurations startingEntryEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104320654(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6a0);
}



/* Entry: 104320664; end: 104320673; -[SCContentProductPlaybackBaseConfigurations pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104320664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6a8);
}



/* Entry: 104320674; end: 104320683; -[SCContentProductPlaybackBaseConfigurations storySessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104320674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6b0);
}



/* Entry: 104320684; end: 104320693; -[SCContentProductPlaybackBaseConfigurations broadcastViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104320684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6b8);
}



/* Entry: 104320694; end: 1043206ef; -[SCContentProductPlaybackBaseConfigurations initialGroupDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104320694(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001000bb420(param_1 + _DAT_11306e6c0,auStack_40);
  func_0x0001006732c8(auStack_40,uStack_28);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000100183ab8(auStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1043206f0; end: 10432073b; -[SCContentProductPlaybackBaseConfigurations initialStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043206f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306e6c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306e6c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432073c; end: 10432074b; -[SCContentProductPlaybackBaseConfigurations autoAdvanceMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432073c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6d0);
}



/* Entry: 10432074c; end: 10432075b; -[SCContentProductPlaybackBaseConfigurations triggeringSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432074c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e6d8);
}



/* Entry: 10432075c; end: 104320963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10432075c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e6a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6b8) = param_4;
  func_0x0001000bb420(param_5,unaff_x20 + _DAT_11306e6c0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e6c8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6d0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6d8) = param_9;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000100183ab8(param_5);
  return puVar2;
}



/* Entry: 104320964; end: 104320a2f; -[SCContentProductPlaybackBaseConfigurations initWithStartingEntryEvents:pageType:storySessionId:broadcastViewLocation:initialGroupDataModel:initialStoryId:autoAdvanceMode:triggeringSection:] */

void FUN_104320964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_80,param_7);
  _swift_unknownObjectRelease(param_7);
  uVar1 = param_8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  _objc_release(param_8);
  func_0x000104320860(param_3,param_4,param_5,param_6,auStack_80,uVar1,param_2,param_9,param_10);
  return;
}



/* Entry: 104320a30; end: 104320a5f;  */

void FUN_104320a30(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104320a60(param_1);
  return;
}



/* Entry: 104320a60; end: 104320b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104320a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306e6a0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e6a8) = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306e6b0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306e6b8) = uVar2;
  func_0x0001000bb420(param_1 + 4,unaff_x20 + _DAT_11306e6c0);
  uVar2 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e6c8);
  *puVar1 = param_1[8];
  puVar1[1] = uVar2;
  uVar2 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11306e6d0) = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11306e6d8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,puVar3);
  FUN_104320b40(param_1);
  return puVar4;
}



/* Entry: 104320b40; end: 104320b73;  */

undefined8 FUN_104320b40(undefined8 param_1)

{
  (*(code *)(undefined *)0x10431ec98)();
  return param_1;
}



/* Entry: 104320b74; end: 104320b77; -[SCContentProductPlaybackBaseConfigurations copyWithZone:] */

void FUN_104320b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104320b78; end: 104320bbf; -[SCContentProductPlaybackBaseConfigurations description] */

void FUN_104320b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104320bc0();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104320bc0; end: 104320c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104320bc0(void)

{
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_70 = *(undefined8 *)(unaff_x20 + _DAT_11306e6a0);
  uStack_68 = *(undefined8 *)(unaff_x20 + _DAT_11306e6a8);
  uStack_60 = *(undefined8 *)(unaff_x20 + _DAT_11306e6b0);
  uStack_58 = *(undefined8 *)(unaff_x20 + _DAT_11306e6b8);
  func_0x0001000bb420(unaff_x20 + _DAT_11306e6c0,auStack_50);
  uStack_20 = *(undefined8 *)(unaff_x20 + _DAT_11306e6d0);
  uStack_18 = *(undefined8 *)(unaff_x20 + _DAT_11306e6d8);
  uStack_30 = *(undefined8 *)(unaff_x20 + _DAT_11306e6c8);
  uStack_28 = ((undefined8 *)(unaff_x20 + _DAT_11306e6c8))[1];
  _swift_bridgeObjectRetain();
  FUN_104320b40(&uStack_70);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104320c6c; end: 104320ce7; -[SCContentProductPlaybackBaseConfigurations init] */

void FUN_104320c6c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContentProductPlaybackScope/SCContentProductPlaybackBaseConfigurationsWrapper.swift"
             ,0x55,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104320cb4);
  (*pcVar1)();
}



/* Entry: 104320ce8; end: 104320d23; -[SCContentProductPlaybackBaseConfigurations .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104320ce8(long param_1)

{
  func_0x000100183ab8(param_1 + _DAT_11306e6c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e6c8 + 8))
  ;
  return;
}



/* Entry: 104320d24; end: 104320d43;  */

void FUN_104320d24(void)

{
  _objc_opt_self(&PTR_PTR_11299bf60);
  return;
}



/* Entry: 104320d44; end: 104320e17;  */

void FUN_104320d44(void)

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



/* Entry: 104320e18; end: 104320e37;  */

void FUN_104320e18(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104320e38; end: 104320e6b;  */

undefined8 FUN_104320e38(undefined8 param_1)

{
  (*(code *)(undefined *)0x10431f0f4)();
  return param_1;
}



/* Entry: 104320e6c; end: 104320ea3; -[SCContentProductPlaybackViewLocationSpecificConfigurations description] */

void FUN_104320e6c(void)

{
  undefined1 auStack_98 [136];
  
  _objc_retain();
  FUN_104322928(auStack_98);
  FUN_104320e38(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104320ea4; end: 104320eeb; -[SCContentProductPlaybackViewLocationSpecificConfigurations init] */

void FUN_104320ea4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContentProductPlaybackScope/SCContentProductPlaybackViewLocationSpecificConfigurationsWrapper.swift"
             ,0x65,2,0x18d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104320eec);
  (*pcVar1)();
}



/* Entry: 104320eec; end: 104320eef; -[SCContentProductPlaybackViewLocationSpecificConfigurations copyWithZone:] */

void FUN_104320eec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104320ef0; end: 104321107; +[SCContentProductPlaybackViewLocationSpecificConfigurations storiesTabConfigWithPlaylistDataModels:storyLoggingFieldsOverrideDict:discoverFeedStories:friendStories:source:layout:firstStoryId:interactionContext:sectionKey:isExpandedFeedController:playbackDataProvider:currentPageSessionId:p2pOptions:managedPlaybackOptions:loggingSourceLocation:] */

void FUN_104320ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_c8;
  long lStack_70;
  
  puVar2 = PTR___sypN_11034f1a8;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  if (param_4 == 0) {
    lStack_70 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_11034da80,puVar2 + 8,PTR___sSSSHsWP_11034da90);
    lStack_70 = param_4;
  }
  uVar3 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar3);
  uVar3 = 0;
  FUN_1043268c0(0,0x112f35048,&PTR_PTR_1126cee88);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_9 == 0) {
    lStack_c8 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_c8 = param_9;
    uVar1 = uVar3;
  }
  if (param_15 == 0) {
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _swift_unknownObjectRetain(param_14);
  _objc_retain();
  _objc_retain();
  uVar4 = param_3;
  func_0x000104323270(param_3,lStack_70,param_5,param_6,param_7,param_8,lStack_c8,uVar1,param_10,
                      param_11,param_12);
  _objc_release(param_11);
  _swift_unknownObjectRelease(param_14);
  _objc_release(param_16);
  _objc_release(param_17);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(lStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104321108; end: 1043211cb; +[SCContentProductPlaybackViewLocationSpecificConfigurations messagingConfigWithPlaylistDataModels:discoverFeedStories:playbackDataProvider:storiesPlugin:] */

void FUN_104321108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  uVar1 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  FUN_1043236e8(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043211cc; end: 104321353; +[SCContentProductPlaybackViewLocationSpecificConfigurations myProfileConfigWithPlaylistDataModels:myStoryPlaybackSequence:isSpotlightManagement:shouldPlaySingleSnap:shouldShowManagementOnOpen:serverIdToViewState:playbackDataProvider:startingClientId:p2pOptions:shouldAddSharedStoryOnboardingPlugin:shouldAddSpotlightPluginsForCommunityStory:isForPendingSnapProSnap:managedPlaybackOptions:] */

void FUN_1043211cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  uVar1 = 0;
  FUN_1043268c0(0,0x112e4db00,&PTR_PTR_1126d9eb8);
  puVar3 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_8,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  if (param_10 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_10);
  }
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_9);
  uVar1 = param_11;
  _objc_retain(param_11);
  _objc_retain(param_14);
  uVar2 = param_3;
  FUN_104323ac4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,puVar3,param_11,
                param_12);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar1);
  _objc_release(param_14);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104321354; end: 1043213bb; +[SCContentProductPlaybackViewLocationSpecificConfigurations communityConfigWithPlaybackDataProvider:storyId:myStoryType:] */

void FUN_104321354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar1 = param_3;
  _swift_unknownObjectRetain(param_3);
  FUN_104323f08();
  _swift_unknownObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043213bc; end: 1043214c3; +[SCContentProductPlaybackViewLocationSpecificConfigurations publicProfileConfigWithPlaylistDataModels:discoverFeedStories:loggingSourceLocation:storyLoggingFieldsOverrideDict:playbackDataProvider:managedPlaybackOptions:] */

void FUN_1043213bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  uVar2 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  if (param_6 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  _swift_unknownObjectRetain(param_7);
  uVar2 = param_8;
  _objc_retain(param_8);
  uVar3 = param_3;
  FUN_1043242d8(param_3,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043214c4; end: 1043214db; +[SCContentProductPlaybackViewLocationSpecificConfigurations mapConfig] */

void FUN_1043214c4(void)

{
  func_0x0001043255f0(5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043214dc; end: 10432153f; +[SCContentProductPlaybackViewLocationSpecificConfigurations storiesDeepLinkConfigWithDeepLinkId:commerceOriginType:loggingSourceLocation:] */

void FUN_1043214dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  FUN_1043246d0();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104321540; end: 10432157b; +[SCContentProductPlaybackViewLocationSpecificConfigurations lensExplorerConfigWithDataSource:] */

void FUN_104321540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  FUN_104324a98(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10432157c; end: 10432167b; +[SCContentProductPlaybackViewLocationSpecificConfigurations chatConfigWithPlaylistDataModels:storyLoggingFieldsOverrideDict:initialClientId:loggingSourceLocation:currentPageSessionId:isSponsoredSnapSource:] */

void FUN_10432157c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR___sypN_11034f1a8;
  puVar3 = PTR___sypN_11034f1a8 + 8;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,puVar3);
  if (param_4 != 0) {
    puVar3 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_5 == 0) {
    param_5 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    puVar1 = puVar3;
  }
  if (param_7 == 0) {
    param_7 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  uVar2 = param_3;
  FUN_104324e44(param_3,param_4,param_5,puVar1,param_6,param_7,puVar3,param_8);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432167c; end: 1043216df; +[SCContentProductPlaybackViewLocationSpecificConfigurations spotlightPublicStoryFromStoryRingConfigWithStoryLoggingFieldsOverrideDict:] */

void FUN_10432167c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  lVar1 = param_3;
  FUN_104325244(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1043216e0; end: 1043216f7; +[SCContentProductPlaybackViewLocationSpecificConfigurations lensCreatorConfig] */

void FUN_1043216e0(void)

{
  func_0x0001043255f0(10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043216f8; end: 10432177b; +[SCContentProductPlaybackViewLocationSpecificConfigurations commentSnapRepliesConfigWithPlaybackDataProvider:playlistDataModels:loggingInfo:] */

void FUN_1043216f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_4,PTR___sypN_11034f1a8 + 8);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  uVar2 = param_3;
  FUN_10432598c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432177c; end: 10432177f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432177c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_3;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 0xc;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(long *)(lVar4 + _DAT_11306e8d0) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104321780; end: 1043217f7; +[SCContentProductPlaybackViewLocationSpecificConfigurations collectionViewAutoPlayConfigWithOperaViewSize:discoverFeedStory:loggingInfo:] */

void FUN_104321780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  FUN_104325d58(param_1,param_2,param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043217f8; end: 104321843; +[SCContentProductPlaybackViewLocationSpecificConfigurations massSnapManagementConfigWithAllGroupDataModels:startingGroupIndex:] */

void FUN_1043217f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  uVar1 = param_3;
  FUN_104326128();
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104321844; end: 104321eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104321844(code *param_1,undefined1 *param_2,code *param_3,undefined1 *param_4,code *param_5
                  ,code *param_6,code *param_7,undefined8 *param_8,code *param_9,
                  undefined1 *param_10,code *param_11,undefined4 param_12,undefined4 param_13,
                  code *param_14,code *param_15,code *param_16,undefined4 param_17,
                  undefined4 param_18,code *param_19,undefined8 param_20,code *param_21,
                  undefined8 param_22,code *param_23,undefined8 param_24,code *param_25,
                  undefined8 *param_26,code *param_27,code *param_28,code *param_29,code *param_30)

{
  code *pcVar1;
  code *pcVar2;
  code **ppcVar3;
  code **ppcVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  long unaff_x20;
  code *apcStack_100 [4];
  undefined1 auStack_e0 [16];
  code *pcStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  code **ppcStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  uVar8 = (uint)param_24;
  cVar7 = (char)param_22;
  uStack_70 = param_20;
  pcStack_78 = param_19;
  ppcVar4 = (code **)&UNK_100db5bb8;
  ppcVar3 = (code **)(long)*(int *)(&UNK_100db5bb8 +
                                   (ulong)*(byte *)(unaff_x20 + _DAT_11306e708) * 4);
  ppcVar5 = ppcVar3 + 0x20864316;
  pcVar2 = param_28;
  pcVar1 = param_30;
  puVar6 = param_26;
  pcStack_88 = param_5;
  pcStack_80 = param_6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(unaff_x20 + _DAT_11306e708)) {
  default:
    if (*(long *)(unaff_x20 + _DAT_11306e710) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e34);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e720) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e58);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e728) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e7c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e730) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e8c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e738) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e98);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e748) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321ea0);
      (*pcVar1)();
    }
    if (*(char *)(unaff_x20 + _DAT_11306e758) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321ea8);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e780) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321eb0);
      (*pcVar1)();
    }
    pcStack_d0 = *(code **)(unaff_x20 + _DAT_11306e748);
    puStack_c8 = *(ulong **)(unaff_x20 + _DAT_11306e750);
    pcStack_90 = *(code **)(unaff_x20 + _DAT_11306e780);
    puStack_98 = *(undefined8 **)(unaff_x20 + _DAT_11306e778);
    uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_11306e770);
    uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_11306e768);
    ppcStack_a8 = (code **)((undefined8 *)(unaff_x20 + _DAT_11306e768))[1];
    puStack_b8 = *(undefined1 **)(unaff_x20 + _DAT_11306e760);
    uStack_c0 = CONCAT71(uStack_c0._1_7_,*(char *)(unaff_x20 + _DAT_11306e758)) & 0xffffffffffffff01
    ;
    (*param_1)(param_2,*(long *)(unaff_x20 + _DAT_11306e710),
               *(undefined8 *)(unaff_x20 + _DAT_11306e718),*(long *)(unaff_x20 + _DAT_11306e720),
               *(long *)(unaff_x20 + _DAT_11306e728),*(undefined8 *)(unaff_x20 + _DAT_11306e730),
               *(undefined8 *)(unaff_x20 + _DAT_11306e738),
               *(undefined8 *)(unaff_x20 + _DAT_11306e740),
               ((undefined8 *)(unaff_x20 + _DAT_11306e740))[1]);
    break;
  case 1:
    if (*(long *)(unaff_x20 + _DAT_11306e788) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e38);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e790) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e60);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e7a0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e84);
      (*pcVar1)();
    }
    (*param_3)(param_4,*(long *)(unaff_x20 + _DAT_11306e788),*(long *)(unaff_x20 + _DAT_11306e790),
               *(undefined8 *)(unaff_x20 + _DAT_11306e798));
    break;
  case 2:
    param_1 = *(code **)(unaff_x20 + _DAT_11306e7a8);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e28);
      (*pcVar1)();
    }
    param_2 = *(undefined1 **)(unaff_x20 + _DAT_11306e7b0);
    if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e54);
      (*pcVar1)();
    }
    pcVar1 = (code *)(ulong)*(byte *)(unaff_x20 + _DAT_11306e7b8);
    if (*(byte *)(unaff_x20 + _DAT_11306e7b8) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e78);
      (*pcVar1)();
    }
    puVar6 = (undefined8 *)(ulong)*(byte *)(unaff_x20 + _DAT_11306e7c0);
    if (*(byte *)(unaff_x20 + _DAT_11306e7c0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e90);
      (*pcVar1)();
    }
    param_10 = (undefined1 *)(ulong)*(byte *)(unaff_x20 + _DAT_11306e7c8);
    if (*(byte *)(unaff_x20 + _DAT_11306e7c8) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e94);
      (*pcVar1)();
    }
    if (*(code ***)(unaff_x20 + _DAT_11306e7d0) == (code **)0x0) goto code_r0x000104321e98;
    param_7 = *(code **)(unaff_x20 + _DAT_11306e7d8);
    if (param_7 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321ea4);
      (*pcVar1)();
    }
    cVar7 = *(char *)(unaff_x20 + _DAT_11306e7f0);
    if (cVar7 == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321eac);
      (*pcVar1)();
    }
    uVar8 = (uint)*(byte *)(unaff_x20 + _DAT_11306e7f8);
    ppcVar4 = *(code ***)(unaff_x20 + _DAT_11306e7d0);
  case 0x1a:
    ppcVar3 = ppcVar4;
    if (uVar8 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321eb4);
      (*pcVar1)();
    }
    if (*(char *)(unaff_x20 + _DAT_11306e800) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321eb8);
      (*pcVar1)();
    }
    param_8 = *(undefined8 **)(unaff_x20 + _DAT_11306e7e0);
    pcStack_d0 = (code *)((undefined8 *)(unaff_x20 + _DAT_11306e7e0))[1];
    puStack_c8 = *(ulong **)(unaff_x20 + _DAT_11306e7e8);
    puStack_b8 = *(undefined1 **)(unaff_x20 + _DAT_11306e808);
    uStack_c0 = CONCAT71(CONCAT61(CONCAT51(uStack_c0._3_5_,*(char *)(unaff_x20 + _DAT_11306e800)),
                                  (char)uVar8),cVar7) & 0xffffffffff010101;
    param_3 = (code *)(ulong)((uint)pcVar1 & 1);
    param_4 = (undefined1 *)(ulong)((uint)puVar6 & 1);
    pcVar2 = (code *)(ulong)((uint)param_10 & 1);
    param_15 = param_5;
  case 0x17:
    (*param_15)(param_1,param_2,param_3,param_4,pcVar2,ppcVar3,param_7,param_8);
    break;
  case 3:
    param_1 = *(code **)(unaff_x20 + _DAT_11306e810);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e2c);
      (*pcVar1)();
    }
    ppcVar4 = (code **)(unaff_x20 + _DAT_11306e818);
    param_3 = ppcVar4[1];
    if (param_3 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e5c);
      (*pcVar1)();
    }
    ppcVar5 = (code **)&DAT_11306e000;
  case 0x10:
    if ((ppcVar5[0x104] + unaff_x20)[8] == (code)0x1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e80);
      (*pcVar1)();
    }
    (*param_7)(param_1,*ppcVar4,param_3,*(undefined8 *)(ppcVar5[0x104] + unaff_x20));
    break;
  case 4:
    param_1 = *(code **)(unaff_x20 + _DAT_11306e828);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e20);
      (*pcVar1)();
    }
    param_2 = *(undefined1 **)(unaff_x20 + _DAT_11306e830);
    if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e4c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e838) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e70);
      (*pcVar1)();
    }
    param_3 = *(code **)(unaff_x20 + _DAT_11306e838);
    param_4 = *(undefined1 **)(unaff_x20 + _DAT_11306e840);
    pcVar2 = *(code **)(unaff_x20 + _DAT_11306e848);
    ppcVar4 = (code **)&DAT_11306e000;
  case 0x19:
    (*param_9)(param_1,param_2,param_3,param_4,pcVar2,*(undefined8 *)(ppcVar4[0x10a] + unaff_x20));
    break;
  case 5:
    (*param_11)();
    break;
  case 6:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e860) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e40);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e868) + 1) == '\x01')
    goto code_r0x000104321e64;
    (*param_14)(*(undefined8 *)(unaff_x20 + _DAT_11306e858),
                ((undefined8 *)(unaff_x20 + _DAT_11306e858))[1],
                *(undefined8 *)(unaff_x20 + _DAT_11306e860),
                *(undefined8 *)(unaff_x20 + _DAT_11306e868));
    break;
  case 7:
    if (*(long *)(unaff_x20 + _DAT_11306e870) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e30);
      (*pcVar1)();
    }
    (*param_16)();
    break;
  case 8:
    param_1 = *(code **)(unaff_x20 + _DAT_11306e878);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e44);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e890) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e6c);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11306e8a0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e88);
      (*pcVar1)();
    }
    param_2 = *(undefined1 **)(unaff_x20 + _DAT_11306e880);
    param_3 = *(code **)(unaff_x20 + _DAT_11306e888);
    param_4 = (undefined1 *)((undefined8 *)(unaff_x20 + _DAT_11306e888))[1];
    pcVar2 = *(code **)(unaff_x20 + _DAT_11306e890);
    ppcVar3 = *(code ***)(unaff_x20 + _DAT_11306e898);
    param_7 = (code *)((undefined8 *)(unaff_x20 + _DAT_11306e898))[1];
    param_8 = (undefined8 *)(ulong)(*(byte *)(unaff_x20 + _DAT_11306e8a0) & 1);
  case 0x11:
    (*param_19)(param_1,param_2,param_3,param_4,pcVar2,ppcVar3,param_7,param_8);
    break;
  case 9:
    ppcVar4 = _DAT_11306e8a8;
  case 0x12:
    (*param_21)(*(undefined8 *)(unaff_x20 + (long)ppcVar4));
    break;
  case 10:
    (*param_23)();
    break;
  case 0xb:
    if (*(long *)(unaff_x20 + _DAT_11306e8b0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e1c);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e8b8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e48);
      (*pcVar1)();
    }
    (*param_25)(*(long *)(unaff_x20 + _DAT_11306e8b0),*(long *)(unaff_x20 + _DAT_11306e8b8),
                *(undefined8 *)(unaff_x20 + _DAT_11306e8c0));
    break;
  case 0xc:
    puVar6 = (undefined8 *)(unaff_x20 + _DAT_11306e8c8);
    if (*(char *)(puVar6 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e24);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e8d0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e50);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306e8d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e74);
      (*pcVar1)();
    }
    (*param_27)(*puVar6,puVar6[1]);
    break;
  case 0xd:
    if (*(long *)(unaff_x20 + _DAT_11306e8e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e3c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306e8e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e64);
      (*pcVar1)();
    }
    (*param_29)(*(long *)(unaff_x20 + _DAT_11306e8e0),*(undefined8 *)(unaff_x20 + _DAT_11306e8e8));
    break;
  case 0xf:
code_r0x000104321e98:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e9c);
    (*pcVar1)();
  case 0x13:
  case 0x1b:
    puStack_68 = &param_16;
    pcStack_78 = (code *)&param_21;
    pcVar1 = (code *)&param_25;
    puVar6 = &param_29;
    uStack_70 = 0x104326a48;
    ppcVar4 = apcStack_100;
    param_10 = auStack_e0;
    pcStack_80 = FUN_1043267ec;
  case 0x14:
    puStack_c8 = &uStack_c0;
    param_2 = &stack0xffffffffffffffc0;
    pcStack_90 = FUN_1043267c8;
    param_4 = &stack0xffffffffffffffa0;
    ppcVar3 = &pcStack_80;
    uStack_a0 = 0x1043267b8;
    uStack_b0 = 0x1043267b0;
    param_1 = (code *)0x1043266a8;
    uStack_c0 = 0x1043267a4;
    param_3 = FUN_1043266f4;
    pcVar2 = FUN_1043266fc;
    pcStack_d0 = FUN_10432679c;
    param_7 = FUN_104326744;
    param_8 = &uStack_a0;
    puStack_b8 = param_10;
    ppcStack_a8 = ppcVar4;
    puStack_98 = puVar6;
    pcStack_88 = pcVar1;
  case 0x18:
    FUN_104321844(param_1,param_2,param_3,param_4,pcVar2,ppcVar3,param_7,param_8);
    _objc_release();
    return;
  case 0x15:
code_r0x000104321e64:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104321e68);
    (*pcVar1)();
  case 0x16:
    return;
  }
  return;
}



/* Entry: 104321eb8; end: 104322003; -[SCContentProductPlaybackViewLocationSpecificConfigurations matchStoriesTabConfig:messagingConfig:myProfileConfig:communityConfig:publicProfileConfig:mapConfig:storiesDeepLinkConfig:lensExplorerConfig:chatConfig:spotlightPublicStoryFromStoryRingConfig:lensCreatorConfig:commentSnapRepliesConfig:collectionViewAutoPlayConfig:massSnapManagementConfig:] */

void FUN_104321eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104321844(0x1043266a8,auStack_40,FUN_1043266f4,auStack_60,FUN_1043266fc,auStack_80,
                FUN_104326744,auStack_a0,FUN_10432679c,auStack_c0,0x1043267a4,auStack_e0,0x1043267b0
                ,auStack_100,0x1043267b8,auStack_120,FUN_1043267c8,auStack_140,FUN_1043267ec,
                auStack_160,0x104326a48,auStack_180,FUN_1043267f4,auStack_1a0,FUN_104326858,
                auStack_1c0,FUN_10432686c,auStack_1e0);
  _objc_release(param_1);
  return;
}



/* Entry: 104322004; end: 1043221bf;  */

void FUN_104322004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000048;
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  if (param_2 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_2,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  uVar2 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,uVar2);
  uVar2 = 0;
  FUN_1043268c0(0,0x112f35048,&PTR_PTR_1126cee88);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_4,uVar2);
  uVar2 = 0;
  if (param_8 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
    uVar2 = param_7;
  }
  uVar3 = 0;
  if (in_stack_00000028 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(in_stack_00000020,in_stack_00000028);
    uVar3 = in_stack_00000020;
  }
  (**(code **)(in_stack_00000048 + 0x10))
            (in_stack_00000048,param_1,param_2,param_3,param_4,param_5,param_6,uVar2,param_9,
             param_10,param_11 & 1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1043221c0; end: 10432225b;  */

void FUN_1043221c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  uVar1 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar1);
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,param_3,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10432225c; end: 10432238b;  */

void FUN_10432225c(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,byte param_11)

{
  undefined8 uVar1;
  long in_stack_00000020;
  
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  uVar1 = 0;
  FUN_1043268c0(0,0x112e4db00,&PTR_PTR_1126d9eb8);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_6,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  if (param_9 == 0) {
    param_8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8,param_9);
  }
  (**(code **)(in_stack_00000020 + 0x10))
            (in_stack_00000020,param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,param_6,param_7,
             param_8,param_10,param_11 & 1);
  _objc_release(param_1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10432238c; end: 10432246b;  */

void FUN_10432238c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  uVar2 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar2);
  if (param_4 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(param_7 + 0x10))(param_7,param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10432246c; end: 1043224c7;  */

void FUN_10432246c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043224c8; end: 1043225bf;  */

void FUN_1043224c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,uint param_8,long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  if (param_2 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_2,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  uVar3 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar3 = param_3;
  }
  uVar2 = 0;
  if (param_7 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
    uVar2 = param_6;
  }
  (**(code **)(param_9 + 0x10))(param_9,param_1,param_2,uVar3,param_5,uVar2,param_8 & 1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1043225c0; end: 10432261f;  */

void FUN_1043225c0(long param_1,long param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104322620; end: 104322653;  */

void FUN_104322620(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104322654; end: 104322917; -[SCContentProductPlaybackViewLocationSpecificConfigurations .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104322654(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e710));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e718));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e720));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e728));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e740 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e750));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e760));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e768 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e770));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e778));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e788));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e790));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e798));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e7a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e7a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e7b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e7d0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e7d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e7e0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e7e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e808));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e810));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e818 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e828));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e830));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e840));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e848));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e850));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e858 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e870));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e878));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e880));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e888 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e898 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e8a8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e8b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e8b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e8c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e8d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e8d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e8e0));
  return;
}



/* Entry: 104322918; end: 104322927;  */

ulong FUN_104322918(ulong param_1)

{
  if (0xd < param_1) {
    param_1 = 0xe;
  }
  return param_1;
}



/* Entry: 104322928; end: 1043236e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104322928(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  byte bStack_130;
  undefined7 uStack_12f;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + _DAT_11306e708)) {
  case 0:
    lVar16 = *(long *)(param_2 + _DAT_11306e710);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231ec);
      (*pcVar10)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306e720);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323210);
      (*pcVar10)();
    }
    uVar17 = *(ulong *)(param_2 + _DAT_11306e728);
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323234);
      (*pcVar10)();
    }
    if ((char)((long *)(param_2 + _DAT_11306e730))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323244);
      (*pcVar10)();
    }
    if ((char)((long *)(param_2 + _DAT_11306e738))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323250);
      (*pcVar10)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11306e748))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323258);
      (*pcVar10)();
    }
    bVar3 = *(byte *)(param_2 + _DAT_11306e758);
    if (bVar3 == 2) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323260);
      (*pcVar10)();
    }
    if ((char)((long *)(param_2 + _DAT_11306e780))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323268);
      (*pcVar10)();
    }
    lVar21 = *(long *)(param_2 + _DAT_11306e718);
    lVar25 = *(long *)(param_2 + _DAT_11306e730);
    lVar23 = *(long *)(param_2 + _DAT_11306e738);
    lVar19 = *(long *)(param_2 + _DAT_11306e740);
    uVar2 = ((long *)(param_2 + _DAT_11306e740))[1];
    uVar11 = *(ulong *)(param_2 + _DAT_11306e748);
    lVar22 = *(long *)(param_2 + _DAT_11306e750);
    lVar12 = *(long *)(param_2 + _DAT_11306e780);
    lVar14 = *(long *)(param_2 + _DAT_11306e778);
    lVar24 = *(long *)(param_2 + _DAT_11306e770);
    lVar20 = *(long *)(param_2 + _DAT_11306e768);
    lVar18 = ((long *)(param_2 + _DAT_11306e768))[1];
    lVar15 = *(long *)(param_2 + _DAT_11306e760);
    _objc_retain(lVar14);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar2);
    _objc_retain(lVar22);
    _swift_unknownObjectRetain(lVar15);
    _swift_bridgeObjectRetain(lVar18);
    _objc_retain(lVar24);
    _objc_release(param_2);
    bStack_130 = bVar3 & 1;
    lStack_180 = lVar16;
    lStack_178 = lVar21;
    uStack_170 = uVar13;
    uStack_168 = uVar17;
    lStack_160 = lVar25;
    lStack_158 = lVar23;
    lStack_150 = lVar19;
    uStack_148 = uVar2;
    uStack_140 = uVar11;
    lStack_138 = lVar22;
    lStack_128 = lVar15;
    lStack_120 = lVar20;
    lStack_118 = lVar18;
    lStack_110 = lVar24;
    lStack_108 = lVar14;
    lStack_100 = lVar12;
    func_0x000104326a38(&lStack_180);
    break;
  case 1:
    lVar16 = *(long *)(param_2 + _DAT_11306e788);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231f0);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e790);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323218);
      (*pcVar10)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306e7a0);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432323c);
      (*pcVar10)();
    }
    uVar17 = *(ulong *)(param_2 + _DAT_11306e798);
    _swift_unknownObjectRetain(uVar17);
    _objc_retain();
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar19);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar17;
    uStack_168 = uVar13;
    func_0x000104326a24(&lStack_180);
    break;
  case 2:
    lVar16 = *(long *)(param_2 + _DAT_11306e7a8);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231e0);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e7b0);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432320c);
      (*pcVar10)();
    }
    cVar9 = *(char *)(param_2 + _DAT_11306e7b8);
    if (cVar9 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323230);
      (*pcVar10)();
    }
    cVar4 = *(char *)(param_2 + _DAT_11306e7c0);
    if (cVar4 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323248);
      (*pcVar10)();
    }
    cVar5 = *(char *)(param_2 + _DAT_11306e7c8);
    if (cVar5 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432324c);
      (*pcVar10)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306e7d0);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323254);
      (*pcVar10)();
    }
    lVar20 = *(long *)(param_2 + _DAT_11306e7d8);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432325c);
      (*pcVar10)();
    }
    cVar6 = *(char *)(param_2 + _DAT_11306e7f0);
    if (cVar6 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323264);
      (*pcVar10)();
    }
    cVar7 = *(char *)(param_2 + _DAT_11306e7f8);
    if (cVar7 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432326c);
      (*pcVar10)();
    }
    cVar8 = *(char *)(param_2 + _DAT_11306e800);
    if (cVar8 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323270);
      (*pcVar10)();
    }
    lVar18 = *(long *)(param_2 + _DAT_11306e7e0);
    lVar25 = ((long *)(param_2 + _DAT_11306e7e0))[1];
    uVar17 = *(ulong *)(param_2 + _DAT_11306e7e8);
    lVar23 = *(long *)(param_2 + _DAT_11306e808);
    _objc_retain(lVar23);
    _swift_bridgeObjectRetain(lVar16);
    _objc_retain();
    _swift_bridgeObjectRetain(uVar13);
    _swift_unknownObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar25);
    _objc_retain(uVar17);
    _objc_release(param_2);
    uStack_170 = CONCAT71(uStack_170._1_7_,cVar9) & 0xffffffffffffff01;
    uStack_170 = CONCAT62(uStack_170._2_6_,CONCAT11(cVar4,(undefined1)uStack_170)) &
                 0xffffffffffff01ff;
    uStack_170 = CONCAT53(uStack_170._3_5_,CONCAT12(cVar5,(undefined2)uStack_170)) &
                 0xffffffffff01ffff;
    uStack_140 = CONCAT71(uStack_140._1_7_,cVar6) & 0xffffffffffffff01;
    uStack_140 = CONCAT62(uStack_140._2_6_,CONCAT11(cVar7,(undefined1)uStack_140)) &
                 0xffffffffffff01ff;
    uStack_140 = CONCAT53(uStack_140._3_5_,CONCAT12(cVar8,(undefined2)uStack_140)) &
                 0xffffffffff01ffff;
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_168 = uVar13;
    lStack_160 = lVar20;
    lStack_158 = lVar18;
    lStack_150 = lVar25;
    uStack_148 = uVar17;
    lStack_138 = lVar23;
    func_0x000104326a10(&lStack_180);
    break;
  case 3:
    lVar16 = *(long *)(param_2 + _DAT_11306e810);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231e4);
      (*pcVar10)();
    }
    uVar13 = ((long *)(param_2 + _DAT_11306e818))[1];
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323214);
      (*pcVar10)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11306e820))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323238);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e818);
    uVar17 = *(ulong *)(param_2 + _DAT_11306e820);
    _swift_unknownObjectRetain(lVar16);
    _swift_bridgeObjectRetain(uVar13);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar13;
    uStack_168 = uVar17;
    func_0x0001043269fc(&lStack_180);
    break;
  case 4:
    lVar16 = *(long *)(param_2 + _DAT_11306e828);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231d8);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e830);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323204);
      (*pcVar10)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11306e838))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323228);
      (*pcVar10)();
    }
    uVar17 = *(ulong *)(param_2 + _DAT_11306e838);
    uVar13 = *(ulong *)(param_2 + _DAT_11306e840);
    lVar20 = *(long *)(param_2 + _DAT_11306e848);
    lVar18 = *(long *)(param_2 + _DAT_11306e850);
    _objc_retain(lVar18);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar19);
    _swift_bridgeObjectRetain(uVar13);
    _swift_unknownObjectRetain(lVar20);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar17;
    uStack_168 = uVar13;
    lStack_160 = lVar20;
    lStack_158 = lVar18;
    func_0x0001043269e8(&lStack_180);
    break;
  case 5:
    _objc_release();
    func_0x0001043269c0(&lStack_f0);
    goto code_r0x000104323188;
  case 6:
    if ((char)((ulong *)(param_2 + _DAT_11306e860))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231f8);
      (*pcVar10)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11306e868))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323220);
      (*pcVar10)();
    }
    lVar16 = *(long *)(param_2 + _DAT_11306e858);
    lVar19 = ((long *)(param_2 + _DAT_11306e858))[1];
    uVar13 = *(ulong *)(param_2 + _DAT_11306e860);
    uVar17 = *(ulong *)(param_2 + _DAT_11306e868);
    _swift_bridgeObjectRetain(lVar19);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar13;
    uStack_168 = uVar17;
    func_0x0001043269ac(&lStack_180);
    break;
  case 7:
    lVar16 = *(long *)(param_2 + _DAT_11306e870);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231e8);
      (*pcVar10)();
    }
    lStack_180 = lVar16;
    func_0x000104326998(&lStack_180);
    _swift_unknownObjectRetain(lVar16);
    _objc_release(param_2);
    break;
  case 8:
    lVar16 = *(long *)(param_2 + _DAT_11306e878);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231fc);
      (*pcVar10)();
    }
    if ((char)((long *)(param_2 + _DAT_11306e890))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323224);
      (*pcVar10)();
    }
    cVar9 = *(char *)(param_2 + _DAT_11306e8a0);
    if (cVar9 == '\x02') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323240);
      (*pcVar10)();
    }
    lVar18 = *(long *)(param_2 + _DAT_11306e880);
    uVar13 = *(ulong *)(param_2 + _DAT_11306e888);
    uVar17 = ((ulong *)(param_2 + _DAT_11306e888))[1];
    lVar25 = *(long *)(param_2 + _DAT_11306e890);
    lVar19 = *(long *)(param_2 + _DAT_11306e898);
    lVar20 = ((long *)(param_2 + _DAT_11306e898))[1];
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(uVar17);
    _objc_release(param_2);
    uStack_148 = CONCAT71(uStack_148._1_7_,cVar9) & 0xffffffffffffff01;
    lStack_180 = lVar16;
    lStack_178 = lVar18;
    uStack_170 = uVar13;
    uStack_168 = uVar17;
    lStack_160 = lVar25;
    lStack_158 = lVar19;
    lStack_150 = lVar20;
    func_0x000104326984(&lStack_180);
    break;
  case 9:
    lVar16 = *(long *)(param_2 + _DAT_11306e8a8);
    lStack_180 = lVar16;
    func_0x000104326970(&lStack_180);
    _swift_bridgeObjectRetain(lVar16);
    _objc_release(param_2);
    break;
  case 10:
    _objc_release();
    func_0x00010432693c(&lStack_f0);
    goto code_r0x000104323188;
  case 0xb:
    lVar16 = *(long *)(param_2 + _DAT_11306e8b0);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231d4);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e8b8);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323200);
      (*pcVar10)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306e8c0);
    _objc_retain(uVar13);
    _swift_unknownObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar19);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar13;
    func_0x000104326928(&lStack_180);
    break;
  case 0xc:
    plVar1 = (long *)(param_2 + _DAT_11306e8c8);
    if ((char)plVar1[2] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231dc);
      (*pcVar10)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306e8d0);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104323208);
      (*pcVar10)();
    }
    uVar17 = *(ulong *)(param_2 + _DAT_11306e8d8);
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432322c);
      (*pcVar10)();
    }
    lVar19 = plVar1[1];
    lVar16 = *plVar1;
    _objc_retain();
    _objc_retain();
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    uStack_170 = uVar13;
    uStack_168 = uVar17;
    func_0x000104326914(&lStack_180);
    break;
  case 0xd:
    lVar16 = *(long *)(param_2 + _DAT_11306e8e0);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1043231f4);
      (*pcVar10)();
    }
    if ((char)((long *)(param_2 + _DAT_11306e8e8))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10432321c);
      (*pcVar10)();
    }
    lVar19 = *(long *)(param_2 + _DAT_11306e8e8);
    _swift_bridgeObjectRetain(lVar16);
    _objc_release(param_2);
    lStack_180 = lVar16;
    lStack_178 = lVar19;
    FUN_104326900(&lStack_180);
  }
  lStack_88 = lStack_118;
  lStack_90 = lStack_120;
  lStack_78 = lStack_108;
  lStack_80 = lStack_110;
  lStack_70 = lStack_100;
  lStack_c8 = lStack_158;
  lStack_d0 = lStack_160;
  uStack_b8 = uStack_148;
  lStack_c0 = lStack_150;
  lStack_a0 = CONCAT71(uStack_12f,bStack_130);
  lStack_a8 = lStack_138;
  uStack_b0 = uStack_140;
  lStack_98 = lStack_128;
  lStack_e8 = lStack_178;
  lStack_f0 = lStack_180;
  uStack_d8 = uStack_168;
  uStack_e0 = uStack_170;
code_r0x000104323188:
  param_1[0xd] = lStack_88;
  param_1[0xc] = lStack_90;
  param_1[0xf] = lStack_78;
  param_1[0xe] = lStack_80;
  param_1[0x10] = lStack_70;
  param_1[5] = lStack_c8;
  param_1[4] = lStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = lStack_c0;
  param_1[9] = lStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = lStack_98;
  param_1[10] = lStack_a0;
  param_1[1] = lStack_e8;
  *param_1 = lStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 1043236e8; end: 104323ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043236e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306e788) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104323ac4; end: 104323f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104323ac4(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(long *)(lVar4 + _DAT_11306e7a8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = param_2;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = param_3;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = param_4;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = param_6;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = param_7;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = param_10;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = (undefined1)param_11;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = param_11._1_1_;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = param_11._2_1_;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = param_13;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 104323f08; end: 1043242d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104323f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 3;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(long *)(lVar4 + _DAT_11306e810) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1043242d8; end: 1043246cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043242d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 4;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306e828) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = param_5;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = param_6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1043246d0; end: 104324a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043246d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_1043264e0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306e708) = 6;
  *(undefined8 *)(lVar5 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e850) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306e858);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e860);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e868);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104324a98; end: 104324e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104324a98(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 7;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306e870) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104324e44; end: 104325243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104324e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 8;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(long *)(lVar4 + _DAT_11306e878) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = param_8;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_7);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 104325244; end: 10432598b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104325244(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 9;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(long *)(lVar4 + _DAT_11306e8a8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 10432598c; end: 104325d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432598c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 0xb;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(long *)(lVar4 + _DAT_11306e8b0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104325d58; end: 104326127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104325d58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_3;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 0xc;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(long *)(lVar4 + _DAT_11306e8d0) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306e8e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104326128; end: 1043264df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326128(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_1043264e0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306e708) = 0xd;
  *(undefined8 *)(lVar4 + _DAT_11306e710) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e718) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e720) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e728) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e738);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e740);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e748);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e750) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e758) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e760) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e768);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e770) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e778) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e780);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e788) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e790) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e798) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7b8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7c8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e7d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7d8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e7e8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e7f0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e7f8) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306e800) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e808) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e810) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e840) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e848) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e850) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e858);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e870) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e878) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e880) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_11306e8a0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306e8a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8b8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8c0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306e8d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306e8d8) = 0;
  *(long *)(lVar4 + _DAT_11306e8e0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306e8e8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043264e0; end: 1043264ff;  */

void FUN_1043264e0(void)

{
  _objc_opt_self(&PTR_PTR_11299c060);
  return;
}



/* Entry: 104326500; end: 104326667;  */

int FUN_104326500(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10432657c;
        goto LAB_104326560;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104326560:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_10432657c:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104326668; end: 1043266f3;  */

void FUN_104326668(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceb0e0;
  _swift_getWitnessTable(&UNK_10dceb0e0,&UNK_110759df8);
  puRam000000011306e918 = puVar1;
  return;
}



/* Entry: 1043266f4; end: 1043266fb;  */

void FUN_1043266f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  uVar1 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2,param_3,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1043266fc; end: 104326743;  */

void FUN_1043266fc(void)

{
  FUN_10432225c();
  return;
}



/* Entry: 104326744; end: 10432679b;  */

void FUN_104326744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10432679c; end: 1043267c7;  */

void FUN_10432679c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  uVar2 = 0;
  FUN_1043268c0(0,0x112e0fd70,&PTR_PTR_1126c2098);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar2);
  if (param_4 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1043267c8; end: 1043267eb;  */

void FUN_1043267c8(void)

{
  FUN_1043224c8();
  return;
}



/* Entry: 1043267ec; end: 1043267f3;  */

void FUN_1043267ec(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043267f4; end: 104326857;  */

void FUN_1043267f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,PTR___sypN_11034f1a8 + 8);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104326858; end: 10432686b;  */

void FUN_104326858(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104326868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10432686c; end: 1043268bf;  */

void FUN_10432686c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sypN_11034f1a8 + 8);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043268c0; end: 1043268ff;  */

void FUN_1043268c0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104326900; end: 104326a4b;  */

void FUN_104326900(long param_1)

{
  *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0x50) & 1 | 0xb000000000000000;
  return;
}



/* Entry: 104326a4c; end: 104326a63; -[SCContentProductPlaybackLoggingInfo actionStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104326a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e920);
}



/* Entry: 104326a64; end: 104326ab7; -[SCContentProductPlaybackLoggingInfo initWithActionStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326a64(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11306e920) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104326ab8; end: 104326b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326ab8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e920) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104326b50; end: 104326b53; -[SCContentProductPlaybackLoggingInfo copyWithZone:] */

void FUN_104326b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104326b54; end: 104326b6f; -[SCContentProductPlaybackLoggingInfo description] */

void FUN_104326b54(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104326b70; end: 104326c0b; -[SCContentProductPlaybackLoggingInfo init] */

void FUN_104326b70(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContentProductPlaybackScope/SCContentProductPlaybackLoggingInfoWrapper.swift",0x4e,2
             ,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104326bb8);
  (*pcVar1)();
}



/* Entry: 104326c0c; end: 104326c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104326c0c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e920) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104326c10; end: 104326c67;  */

void FUN_104326c10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110759ea8;
  if (lRam000000011306e950 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011306e950 = param_1;
  }
  return;
}


