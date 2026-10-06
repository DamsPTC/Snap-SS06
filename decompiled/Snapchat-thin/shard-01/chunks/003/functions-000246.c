/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f3bbd0; end: 100f3bbf7;  */

void FUN_100f3bbd0(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 100f3bbf8; end: 100f3bc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bbf8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d4cc28);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
      func_0x000107c4dccc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1);
        func_0x000107c60bd0(lVar1);
      }
    }
  }
  return;
}



/* Entry: 100f3bc08; end: 100f3bc3b;  */

void FUN_100f3bc08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f3bc3c; end: 100f3bc9b;  */

void FUN_100f3bc3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f3bc9c; end: 100f3bcf7;  */

void FUN_100f3bc9c(long param_1,long param_2)

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



/* Entry: 100f3bcf8; end: 100f3bcfb; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler composerPayloadClass] */

void FUN_100f3bcf8(void)

{
  func_0x000100f3bc5c(0,0x112d4cc78,&PTR_PTR_1126c97f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f3bcfc; end: 100f3bd07; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler payloadClass] */

void FUN_100f3bcfc(void)

{
  func_0x000100f3bc5c(0,0x112d4cc78,&PTR_PTR_1126c97f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f3bd08; end: 100f3bd0f; -[_TtC29PromotionInsightsPageLauncher35PromotionInsightsTrayViewController pageViewName] */

undefined8 FUN_100f3bd08(void)

{
  return 0xec;
}



/* Entry: 100f3bd10; end: 100f3bd53; -[_TtC29PromotionInsightsPageLauncher35PromotionInsightsTrayViewController initWithValdiView:] */

void FUN_100f3bd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100f3beac();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 100f3bd54; end: 100f3bdff; -[_TtC29PromotionInsightsPageLauncher35PromotionInsightsTrayViewController initWithNibName:bundle:] */

undefined1 * FUN_100f3bd54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  func_0x000100f3beac();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100f3be00; end: 100f3be7b; -[_TtC29PromotionInsightsPageLauncher35PromotionInsightsTrayViewController initWithCoder:] */

undefined1 * FUN_100f3be00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000100f3beac();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100f3be7c; end: 100f3becb;  */

void FUN_100f3be7c(void)

{
  func_0x000100f3beac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f3becc; end: 100f3bf0f; -[_TtC29PromotionInsightsPageLauncher35PromotionInsightsTrayViewController defaultProjectNameV2] */

void FUN_100f3becc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fe18();
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



/* Entry: 100f3bf10; end: 100f3bf1b; -[SCPromotionInsightsPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd08;
  func_0x000107c61428(param_1 + _DAT_112d4cd08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf1c; end: 100f3bf27; -[SCPromotionInsightsPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd08;
  func_0x000107c61428(param_1 + _DAT_112d4cd08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bf28; end: 100f3bf33; -[SCPromotionInsightsPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd10;
  func_0x000107c61428(param_1 + _DAT_112d4cd10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf34; end: 100f3bf3f; -[SCPromotionInsightsPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd10;
  func_0x000107c61428(param_1 + _DAT_112d4cd10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bf40; end: 100f3bf4b; -[SCPromotionInsightsPageLauncherEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd18;
  func_0x000107c61428(param_1 + _DAT_112d4cd18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf4c; end: 100f3bf57; -[SCPromotionInsightsPageLauncherEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd18;
  func_0x000107c61428(param_1 + _DAT_112d4cd18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bf58; end: 100f3bf63; -[SCPromotionInsightsPageLauncherEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd20;
  func_0x000107c61428(param_1 + _DAT_112d4cd20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf64; end: 100f3bf6f; -[SCPromotionInsightsPageLauncherEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd20;
  func_0x000107c61428(param_1 + _DAT_112d4cd20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bf70; end: 100f3bf7b; -[SCPromotionInsightsPageLauncherEntryPoint composerCoreUiServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd28;
  func_0x000107c61428(param_1 + _DAT_112d4cd28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf7c; end: 100f3bf87; -[SCPromotionInsightsPageLauncherEntryPoint setComposerCoreUiServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd28;
  func_0x000107c61428(param_1 + _DAT_112d4cd28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bf88; end: 100f3bf93; -[SCPromotionInsightsPageLauncherEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd30;
  func_0x000107c61428(param_1 + _DAT_112d4cd30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bf94; end: 100f3bf9f; -[SCPromotionInsightsPageLauncherEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bf94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd30;
  func_0x000107c61428(param_1 + _DAT_112d4cd30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bfa0; end: 100f3bfab; -[SCPromotionInsightsPageLauncherEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bfa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd38;
  func_0x000107c61428(param_1 + _DAT_112d4cd38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bfac; end: 100f3bfb7; -[SCPromotionInsightsPageLauncherEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd38;
  func_0x000107c61428(param_1 + _DAT_112d4cd38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3bfb8; end: 100f3bfc3; -[SCPromotionInsightsPageLauncherEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bfb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cd40;
  func_0x000107c61428(param_1 + _DAT_112d4cd40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3bfc4; end: 100f3c007;  */

void FUN_100f3bfc4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f3c008; end: 100f3c013; -[SCPromotionInsightsPageLauncherEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3c008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cd40;
  func_0x000107c61428(param_1 + _DAT_112d4cd40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3c014; end: 100f3c067;  */

void FUN_100f3c014(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f3c068; end: 100f3c583;  */

/* WARNING: Possible PIC construction at 0x000100f3c230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3c490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3c4a4) */
/* WARNING: Removing unreachable block (ram,0x000100f3c4c4) */
/* WARNING: Removing unreachable block (ram,0x000100f3c4f4) */
/* WARNING: Removing unreachable block (ram,0x000100f3c4e4) */
/* WARNING: Removing unreachable block (ram,0x000100f3c524) */
/* WARNING: Removing unreachable block (ram,0x000100f3c514) */
/* WARNING: Removing unreachable block (ram,0x000100f3c504) */
/* WARNING: Removing unreachable block (ram,0x000100f3c554) */
/* WARNING: Removing unreachable block (ram,0x000100f3c544) */
/* WARNING: Removing unreachable block (ram,0x000100f3c534) */
/* WARNING: Removing unreachable block (ram,0x000100f3c450) */
/* WARNING: Removing unreachable block (ram,0x000100f3c440) */
/* WARNING: Removing unreachable block (ram,0x000100f3c430) */
/* WARNING: Removing unreachable block (ram,0x000100f3c420) */
/* WARNING: Removing unreachable block (ram,0x000100f3c410) */
/* WARNING: Removing unreachable block (ram,0x000100f3c3d8) */
/* WARNING: Removing unreachable block (ram,0x000100f3c3c8) */
/* WARNING: Removing unreachable block (ram,0x000100f3c3b4) */
/* WARNING: Removing unreachable block (ram,0x000100f3c3a0) */
/* WARNING: Removing unreachable block (ram,0x000100f3c368) */
/* WARNING: Removing unreachable block (ram,0x000100f3c234) */
/* WARNING: Removing unreachable block (ram,0x000100f3c24c) */
/* WARNING: Removing unreachable block (ram,0x000100f3c258) */
/* WARNING: Removing unreachable block (ram,0x000100f3c494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3c068(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar6 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c3ff8c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c41420();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar6);
            lVar6 = lVar2;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c5b398();
            func_0x000107c61180();
            if (lVar5 != 0) {
              func_0x000107c3ffd0();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar5 = 0;
                FUN_100f39384();
                func_0x000107c610f8();
                *(long *)(lVar5 + _DAT_112d4cbf0) = lVar6;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar4);
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c3fa04();
                func_0x000107c61180();
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3c584);
                  (*pcVar1)();
                }
                lVar6 = -0x2fffffffffffffde;
                func_0x000107c5fadc(0xd000000000000022,0x800000010ef1b4a0);
                func_0x000107c3ebd4(lVar3);
                func_0x000107c615e8(lVar3);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 100f3c584; end: 100f3c5ab; -[SCPromotionInsightsPageLauncherEntryPoint begin] */

void FUN_100f3c584(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f3c068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f3c5ac; end: 100f3c5ef; -[SCPromotionInsightsPageLauncherEntryPoint end] */

void FUN_100f3c5ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3c5f0; end: 100f3ca1b;  */

void FUN_100f3c5f0(long param_1,long param_2,long param_3)

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
    goto LAB_100f3c67c;
  }
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e4a70)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef1b590,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53684();
            }
            else {
              uVar2 = 0;
              if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
                 (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53e98();
              }
              else {
                uVar2 = 0x536f725070616e73;
                if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                   (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5943c();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10e6390)) &&
                     (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "PromotionInsightsPageLauncher/SCPromotionInsightsPageLauncherEntryPoint.swift"
                                        ,0x4d,2,0x44,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3ca1c);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c536a8();
                }
              }
            }
            goto LAB_100f3c67c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536e0();
      }
      goto LAB_100f3c67c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c569f0();
LAB_100f3c67c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f3ca1c; end: 100f3cac7; -[SCPromotionInsightsPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_100f3ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f3c5f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f3cac8; end: 100f3cbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3cac8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cd40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4cd48) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f3cbb4; end: 100f3cbd3; -[SCPromotionInsightsPageLauncherEntryPoint init] */

void FUN_100f3cbb4(void)

{
  FUN_100f3cac8();
  return;
}



/* Entry: 100f3cbd4; end: 100f3cc07;  */

void FUN_100f3cbd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f3cc08; end: 100f3ccaf; -[SCPromotionInsightsPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3cc08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4cd08);
  func_0x000107c61610(param_1 + _DAT_112d4cd10);
  func_0x000107c61610(param_1 + _DAT_112d4cd18);
  func_0x000107c61610(param_1 + _DAT_112d4cd20);
  func_0x000107c61610(param_1 + _DAT_112d4cd28);
  func_0x000107c61610(param_1 + _DAT_112d4cd30);
  func_0x000107c61610(param_1 + _DAT_112d4cd38);
  func_0x000107c61610(param_1 + _DAT_112d4cd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4cd48));
  return;
}



/* Entry: 100f3ccb0; end: 100f3cccf;  */

void FUN_100f3ccb0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3180);
  return;
}



/* Entry: 100f3ccd0; end: 100f3d00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100f3ccd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c43b5c();
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c4d604();
  func_0x000107c61180();
  uVar6 = param_5;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  if (param_6 == 0) {
    lVar11 = 0;
  }
  else {
    lVar7 = param_6;
    func_0x000107c61174();
    lVar11 = lVar7;
    func_0x000104513428();
    func_0x000107c61170(lVar7);
  }
  puVar8 = &UNK_11036b890;
  func_0x000107c613fc(&UNK_11036b890,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = param_8;
  lVar9 = 0;
  FUN_100f3ee7c();
  lVar7 = lVar9;
  func_0x000107c610f8();
  *(undefined **)(lVar7 + _DAT_112d4ceb0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar7 + _DAT_112d4ceb8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d4cec0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d4cec8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112d4ced0) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d4ced8) = 0;
  *(undefined **)(lVar7 + _DAT_112d4cee0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar7 + _DAT_112d4ce70) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d4ce78) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112d4ce80) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112d4ce88) = uVar6;
  *(long *)(lVar7 + _DAT_112d4ce90) = lVar11;
  *(undefined8 *)(lVar7 + _DAT_112d4cea0) = param_9;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d4cea8);
  *puVar1 = 0x100f3d02c;
  puVar1[1] = puVar8;
  *(undefined8 *)(lVar7 + _DAT_112d4ce98) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar9;
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(lVar11);
  func_0x000107c6157c(puVar8);
  plVar10 = &lStack_70;
  func_0x000107c61154(plVar10,puVar2);
  FUN_100f3dccc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61574(puVar8);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 100f3d00c; end: 100f3d04b;  */

void FUN_100f3d00c(void)

{
  func_0x000102429cd0();
  return;
}



/* Entry: 100f3d04c; end: 100f3d067;  */

void FUN_100f3d04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f3d068; end: 100f3d087;  */

void FUN_100f3d068(void)

{
  func_0x000107c61168(&PTR_PTR_112d4cdb8);
  return;
}



/* Entry: 100f3d088; end: 100f3d0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f3d088(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4ce40;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4ce40);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100f3d0ec();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100f3d0ec; end: 100f3d2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100f3d0ec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  uVar10 = *(undefined8 *)(param_1 + _DAT_112d4ce18);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112d4ce28);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112d4ce28))[1];
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d4ce30);
  lVar5 = 0;
  FUN_100f41704();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = lVar6 + _DAT_112d4cf38;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar4 = _DAT_112d4cf48;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar4) = puVar7;
  lVar4 = _DAT_112d4cf50;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar4) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112d4cf58) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4cf60) = 0;
  *(undefined1 *)(lVar6 + _DAT_112d4cf68) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4cf70) = 1;
  *(undefined8 *)(lVar6 + _DAT_112d4cf20) = uVar10;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d4cf28);
  *puVar2 = uVar9;
  puVar2[1] = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d4cf30) = uVar11;
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_11036b8c8;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c61174(uVar10);
  func_0x000107c615f0();
  func_0x000107c30a3c();
  func_0x000107c61180();
  *(undefined8 *)(lVar6 + _DAT_112d4cf40) = uVar11;
  plVar8 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar8,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  uVar9 = *(undefined8 *)((long)plVar8 + _DAT_112d4cf40);
  func_0x000107c61174();
  func_0x000107c53224(uVar9);
  func_0x000107c5a048(plVar8);
  func_0x000107c5677c(plVar8);
  func_0x000107c61170(plVar8);
  return plVar8;
}



/* Entry: 100f3d2d0; end: 100f3d32f; -[_TtC39SCBillboardRevShareOptInTakeoverFeature30RevShareOptInTakeoverPresenter init] */

void FUN_100f3d2d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBillboardRevShareOptInTakeoverFeature.RevShareOptInTakeoverPresenter",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3d2fc);
  (*pcVar1)();
}



/* Entry: 100f3d330; end: 100f3d3bb; -[_TtC39SCBillboardRevShareOptInTakeoverFeature30RevShareOptInTakeoverPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f3d35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3d360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d330(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4ce10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4ce18));
  return;
}



/* Entry: 100f3d3bc; end: 100f3d3db;  */

void FUN_100f3d3bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3278);
  return;
}



/* Entry: 100f3d3dc; end: 100f3d4d7;  */

/* WARNING: Possible PIC construction at 0x000100f3d498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3d49c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d3dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = unaff_x20 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d4ceb8);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112d4ce78);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4cee0);
        func_0x00010018cc3c(uVar3);
        func_0x000107c5f9dc();
        func_0x000107c6142c(uVar3);
        func_0x000107c4c4bc(lVar4);
        lVar1 = lVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f3d4d8; end: 100f3d4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d4d8(long param_1)

{
  func_0x000107c41864(*(undefined8 *)(param_1 + _DAT_112d4ce10),FUN_100f3ee9c,0);
  param_1 = param_1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f3ee9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f3d4e8; end: 100f3d5f3;  */

/* WARNING: Possible PIC construction at 0x000100f3d5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3d5b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d4e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d4ceb8);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + _DAT_112d4ced8) = 1;
      lVar3 = *(long *)(param_1 + _DAT_112d4ce78);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + _DAT_112d4cee0);
        func_0x00010018cc3c(uVar2);
        func_0x000107c5f9dc();
        func_0x000107c6142c(uVar2);
        func_0x000107c4c4b8(lVar3);
        param_1 = lVar3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f3d5f4; end: 100f3d5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d5f4(long param_1)

{
  func_0x000107c41864(*(undefined8 *)(param_1 + _DAT_112d4ce10),FUN_100f3f494,0);
  param_1 = param_1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f3f494();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f3d600; end: 100f3d687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d600(long param_1,code *param_2)

{
  func_0x000107c41864(*(undefined8 *)(param_1 + _DAT_112d4ce10),param_2,0);
  param_1 = param_1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f3d688; end: 100f3db97;  */

/* WARNING: Possible PIC construction at 0x000100f3da70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3daa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3db40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3db50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3db44) */
/* WARNING: Removing unreachable block (ram,0x000100f3daac) */
/* WARNING: Removing unreachable block (ram,0x000100f3da74) */
/* WARNING: Removing unreachable block (ram,0x000100f3db54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3d688(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long alStack_120 [7];
  undefined1 auStack_e8 [8];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&lStack_e0 - extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar21 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar21 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  lVar20 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar10 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar15 - extraout_x12_00;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar16 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar18 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar13 - extraout_x12_03;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4ce20);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lStack_e0 = lVar15;
    lStack_d0 = lVar21;
    lStack_c8 = lVar10;
    func_0x000107c5edd0(lVar8,param_1,param_2);
    func_0x000100029394(lVar8,lVar13);
    lVar1 = lVar13;
    (**(code **)(lVar7 + 0x30))(lVar13,1,lVar2);
    if ((int)lVar1 == 1) {
      func_0x0001000293e4(lVar8);
      func_0x0001000293e4(lVar13);
      return;
    }
    pcVar11 = *(code **)(lVar7 + 0x20);
    lStack_d8 = lVar19;
    (*pcVar11)(lVar19,lVar13,lVar2);
    pcVar12 = *(code **)(lVar7 + 0x38);
    (*pcVar12)(lVar18,1,1,lVar2);
    (*pcVar12)(lVar16,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar14,1,1,lVar1);
    *(undefined1 *)(lVar8 + -8) = 0;
    *(undefined8 *)(lVar8 + -0x10) = 0;
    *(undefined8 *)(lVar8 + -0x18) = 0;
    *(undefined8 *)(lVar8 + -0x20) = 0;
    *(undefined8 *)(lVar8 + -0x28) = 0;
    *(undefined8 *)(lVar8 + -0x30) = 0;
    *(undefined8 *)(lVar8 + -0x38) = 0;
    *(long *)(lVar8 + -0x40) = lVar14;
    func_0x000104638e24(lStack_c8,0x19,lVar18,0,lVar16,0,0,0,0);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    func_0x000107c43bf4();
    func_0x000107c61180();
    lVar1 = lStack_e0;
    (**(code **)(lVar7 + 0x10))(lStack_e0,lStack_d8,lVar2);
    uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar17 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar4 = &UNK_11036b928;
    func_0x000107c613fc(&UNK_11036b928,uVar17 + lVar20,uVar9 | 7);
    (*pcVar11)(puVar4 + uVar17,lVar1,lVar2);
    pcStack_70 = FUN_100f3dc34;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100e38b5c;
    puStack_78 = &UNK_11036b940;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_68);
    pcVar6 = "openUrlOverTakeover(_:)";
    func_0x0001000c10c0("openUrlOverTakeover(_:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar3);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f3db98; end: 100f3dbe7;  */

void FUN_100f3db98(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f3dbe8; end: 100f3dc33; -[_TtC39SCBillboardRevShareOptInTakeoverFeature30RevShareOptInTakeoverPresenter webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3dbe8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4ce20);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100f3dc34; end: 100f3dc7f;  */

void FUN_100f3dc34(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f3dc80; end: 100f3dc9b;  */

void FUN_100f3dc80(long param_1,long param_2)

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



/* Entry: 100f3dc9c; end: 100f3dcbf;  */

undefined8 FUN_100f3dc9c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f3dcc0; end: 100f3dccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3dcc0(long param_1)

{
  func_0x000107c41864(*(undefined8 *)(param_1 + _DAT_112d4ce10),FUN_100f3f354,0);
  param_1 = param_1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f3f354();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f3dccc; end: 100f3ddd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3dccc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4cea0);
  pcStack_60 = FUN_100f3ddd4;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f3de1c;
  puStack_68 = &UNK_11036bb10;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = &UNK_11036ba08;
  func_0x000107c613fc(&UNK_11036ba08,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_60 = FUN_100f3ff18;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100ba5314;
  puStack_68 = &UNK_11036bb38;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f3ddd4; end: 100f3de1b;  */

void FUN_100f3ddd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae9f8;
  func_0x000107c610f8();
  func_0x000107c47f70();
  uVar2 = 0;
  FUN_100f3ff20();
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 100f3de1c; end: 100f3de9f;  */

void FUN_100f3de1c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100f3dea0; end: 100f3e123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3dea0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar11 = (ulong *)(param_1 + 0x38);
    uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if (-uVar15 < 0x40) {
      uVar12 = ~(-1L << (-uVar15 & 0x3f));
    }
    uVar12 = uVar12 & *puVar11;
    func_0x000107c61434(param_1);
    lVar13 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar14 = lVar13;
    while( true ) {
      while (uVar12 != 0) {
        uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        func_0x0001007bbd18(*(long *)(param_1 + 0x30) +
                            LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 + lVar13 * 0xa00,
                            &puStack_a0);
        uStack_c8 = uStack_98;
        puStack_d0 = puStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar10 = 0x112d4cf10;
        func_0x0001000285a8(0x112d4cf10,&UNK_10d9138a0);
        plVar5 = &lStack_a8;
        func_0x000107c6147c(plVar5,&puStack_d0,PTR___ss11AnyHashableVN_11034e448,uVar10,6);
        lVar2 = lStack_a8;
        lVar14 = lVar13;
        if ((((ulong)plVar5 & 1) != 0) && (lStack_a8 != 0)) {
          puVar7 = puVar8;
          func_0x000107c61550();
          if (((int)puVar7 == 0) ||
             (((long)puVar8 < 0 || (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar6 = puVar8;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            func_0x000100f3f6e4(0,puVar6 + 1,1,puVar8,0x100f41b70,0x112d4cf10,&UNK_10d9138a0);
          }
          uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar9 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            func_0x000100f3f6e4(puVar8,uVar1 + 1,1,puVar7,0x100f41b70,0x112d4cf10,&UNK_10d9138a0);
            uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
          *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar2;
        }
      }
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3e124);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar15 >> 6) <= lVar13) break;
      uVar12 = puVar11[lVar13];
    }
    func_0x000100ba5608(param_1,puVar11,~uVar15,lVar14,0);
    (**(code **)(param_2 + _DAT_112d4cea8))();
    puStack_a0 = puVar8;
    FUN_100f3f510();
    uVar10 = *(undefined8 *)(param_2 + _DAT_112d4ceb0);
    *(undefined **)(param_2 + _DAT_112d4ceb0) = puStack_a0;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar10);
  }
  return;
}



/* Entry: 100f3e124; end: 100f3e1ab; -[_TtC39SCBillboardRevShareOptInTakeoverFeature29RevShareOptInTakeoverProvider canShowCampaign:] */

uint FUN_100f3e124(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffd9) && (param_2 == -0x7ffffffef10e4920)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0x27;
      func_0x000107c605b8(0xd000000000000027,0x800000010ef1b6e0,param_3,param_2,0);
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 100f3e1ac; end: 100f3e87f;  */

/* WARNING: Possible PIC construction at 0x000100f3e23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3e4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3e5bc) */
/* WARNING: Removing unreachable block (ram,0x000100f3e60c) */
/* WARNING: Removing unreachable block (ram,0x000100f3e61c) */
/* WARNING: Removing unreachable block (ram,0x000100f3e580) */
/* WARNING: Removing unreachable block (ram,0x000100f3e470) */
/* WARNING: Removing unreachable block (ram,0x000100f3e64c) */
/* WARNING: Removing unreachable block (ram,0x000100f3e418) */
/* WARNING: Removing unreachable block (ram,0x000100f3e240) */
/* WARNING: Removing unreachable block (ram,0x000100f3e268) */
/* WARNING: Removing unreachable block (ram,0x000100f3e484) */
/* WARNING: Removing unreachable block (ram,0x000100f3e48c) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4b8) */
/* WARNING: Removing unreachable block (ram,0x000100f3e494) */
/* WARNING: Removing unreachable block (ram,0x000100f3e288) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4e4) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4ec) */
/* WARNING: Removing unreachable block (ram,0x000100f3e338) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4f8) */
/* WARNING: Removing unreachable block (ram,0x000100f3e588) */
/* WARNING: Removing unreachable block (ram,0x000100f3e518) */
/* WARNING: Removing unreachable block (ram,0x000100f3e5c8) */
/* WARNING: Removing unreachable block (ram,0x000100f3e5f8) */
/* WARNING: Removing unreachable block (ram,0x000100f3e52c) */
/* WARNING: Removing unreachable block (ram,0x000100f3e344) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4b0) */
/* WARNING: Removing unreachable block (ram,0x000100f3e4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3e1ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4ceb8);
  *(undefined8 *)(unaff_x20 + _DAT_112d4ceb8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4cec0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4cec0) = param_2;
  func_0x000107c615f0(param_2);
  func_0x000107c615e8(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_112d4cec8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_4;
  func_0x000100b64c10(param_3,param_4);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 100f3e880; end: 100f3ea9f; -[_TtC39SCBillboardRevShareOptInTakeoverFeature29RevShareOptInTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000100f3e924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3e928) */

void FUN_100f3e880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11036b9e0;
    func_0x000107c613fc(&UNK_11036b9e0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_100f3fce4;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100f3e1ac(param_3,param_4,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f3eaa0; end: 100f3eb73;  */

undefined8 FUN_100f3eaa0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *unaff_x20;
  if (uVar4 >> 0x3e == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eb20);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2;
    func_0x000107c60480();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eb74);
      (*pcVar1)();
    }
    func_0x000107c60480();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eb1c);
      (*pcVar1)();
    }
  }
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eb6c);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x20);
    func_0x000107c615f0(uVar5);
  }
  else {
    uVar5 = 0;
    FUN_100f1cdf4(0,uVar4);
  }
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eb70);
    (*pcVar1)();
  }
  FUN_100f3fe10(0,1);
  return uVar5;
}



/* Entry: 100f3eb74; end: 100f3eca3;  */

/* WARNING: Possible PIC construction at 0x000100f3ec94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3ec98) */

void FUN_100f3eb74(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar7 = param_1;
    func_0x000107c5d918();
    func_0x000107c61180();
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eca0);
      (*pcVar1)();
    }
    uVar2 = uVar7;
    func_0x000107c49ec8();
    func_0x000107c61170(uVar7);
    if ((int)uVar2 != 0) {
      uVar7 = param_1;
      func_0x000107c3ee4c();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3eca4);
        (*pcVar1)();
      }
      uVar2 = uVar7;
      func_0x000107c44fd8();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar2 != 0) {
        uVar6 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        uVar7 = uVar6 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar7 = param_2 >> 0x38 & 0xf;
        }
        if (uVar7 == 0) {
          func_0x000107c61170(param_1);
        }
        else {
          (*param_3)(uVar6,param_2);
          func_0x000107c61170(param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
        return;
      }
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  uVar7 = *(ulong *)(param_5 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    (*param_3)();
  }
  else {
    lVar3 = param_5 + 0x10;
    func_0x000107c61428(lVar3,&puStack_88,0x21,0);
    FUN_100f3eaa0();
    func_0x000107c614a8(&puStack_88);
    puVar4 = &UNK_11036bad0;
    func_0x000107c613fc(&UNK_11036bad0,0x28,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(long *)(puVar4 + 0x20) = param_5;
    pcStack_68 = FUN_100f3ff64;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_100f3eca4;
    puStack_70 = &UNK_11036bae8;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar4);
    func_0x000107c5e06c(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 100f3eca4; end: 100f3ed1b;  */

/* WARNING: Possible PIC construction at 0x000100f3ed00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3ed04) */

void FUN_100f3eca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f3ed1c; end: 100f3ed7b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature29RevShareOptInTakeoverProvider init] */

void FUN_100f3ed1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBillboardRevShareOptInTakeoverFeature.RevShareOptInTakeoverProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3ed48);
  (*pcVar1)();
}



/* Entry: 100f3ed7c; end: 100f3ee7b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature29RevShareOptInTakeoverProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f3ee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3ee20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3ed7c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4ce98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cea0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4cea8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4ceb0));
  return;
}



/* Entry: 100f3ee7c; end: 100f3ee9b;  */

void FUN_100f3ee7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3368);
  return;
}



/* Entry: 100f3ee9c; end: 100f3f353;  */

/* WARNING: Possible PIC construction at 0x000100f3ef68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3f0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3f128) */
/* WARNING: Removing unreachable block (ram,0x000100f3f200) */
/* WARNING: Removing unreachable block (ram,0x000100f3f1f0) */
/* WARNING: Removing unreachable block (ram,0x000100f3f1e0) */
/* WARNING: Removing unreachable block (ram,0x000100f3f1d0) */
/* WARNING: Removing unreachable block (ram,0x000100f3f19c) */
/* WARNING: Removing unreachable block (ram,0x000100f3f18c) */
/* WARNING: Removing unreachable block (ram,0x000100f3f0cc) */
/* WARNING: Removing unreachable block (ram,0x000100f3f0e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3ee9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4ceb8);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d4ced8) = 1;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d4ce78);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    puVar3 = puVar2;
    func_0x000107c4dd4c();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000100f3f234();
      if (puVar4 == (undefined *)0x0) goto code_r0x000107c61170;
      lVar5 = *(long *)(unaff_x20 + _DAT_112d4ce90);
      if (lVar5 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = *(long *)(unaff_x20 + _DAT_112d4cec0);
          if (lVar5 != 0) {
            puVar2 = PTR_PTR_1126aead0;
            func_0x000107c610f8();
            func_0x000107c615f0(lVar5);
            func_0x000107c47994();
            lVar8 = *(long *)(unaff_x20 + _DAT_112d4cec8);
            if (lVar8 == 0) {
              func_0x000107c615f0(lVar5);
              func_0x000107c61174(puVar2);
              func_0x000107c61174(puVar3);
              ppuVar7 = (undefined **)0x0;
            }
            else {
              lVar9 = ((long *)(unaff_x20 + _DAT_112d4cec8))[1];
              puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_88 = 0x42000000;
              puStack_80 = &UNK_1000f6b44;
              puStack_78 = &UNK_11036b9a8;
              ppuVar7 = &puStack_90;
              lStack_70 = lVar8;
              lStack_68 = lVar9;
              func_0x000107c60bc4(ppuVar7);
              lVar1 = lStack_68;
              func_0x000107c615f0(lVar5);
              func_0x000107c61174(puVar2);
              func_0x000107c61174(puVar3);
              func_0x000100b64c10(lVar8,lVar9);
              func_0x000107c61574(lVar1);
            }
            func_0x000107c610f8(PTR_PTR_1126ae9c0);
            func_0x000107c479e8();
            func_0x000107c60bd0(ppuVar7);
            puVar3 = puVar2;
          }
          goto code_r0x000107c61170;
        }
      }
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar4);
    }
    pcVar6 = *(code **)(unaff_x20 + _DAT_112d4cec8);
    puVar3 = puVar2;
    if (pcVar6 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112d4cec8))[1]);
      (*pcVar6)();
    }
  }
  else {
    puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4cee0);
    func_0x00010018cc3c(puVar2);
    puVar3 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4c0(lVar5);
    func_0x000107c615e8(lVar5);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100f3f354; end: 100f3f493;  */

/* WARNING: Possible PIC construction at 0x000100f3f41c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3f354(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  if (((*(byte *)(unaff_x20 + _DAT_112d4ced8) & 1) == 0) &&
     (lVar2 = *(long *)(unaff_x20 + _DAT_112d4ceb8), lVar2 != 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112d4ced8) = 1;
    lVar5 = *(long *)(unaff_x20 + _DAT_112d4ce78);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4cee0);
      func_0x00010018cc3c(uVar3);
      uVar4 = uVar3;
      func_0x000107c5f9dc();
      func_0x000107c6142c(uVar3);
      func_0x000107c4c4b8(lVar5);
      func_0x000107c615e8(lVar5);
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar2);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4cec8);
  pcVar6 = (code *)*puVar1;
  if (pcVar6 == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar6)();
    func_0x00010058d43c(pcVar6,uVar4);
    uVar4 = *puVar1;
  }
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar4,uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4ced0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4ced0) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100f3f494; end: 100f3f50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3f494(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4cec8);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
    uVar3 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar3,uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4ced0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4ced0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f3f510; end: 100f3f613;  */

void FUN_100f3f510(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_100f3f614(uVar2 + uVar4,1,0x100f41b70,0x112d4cf10,&UNK_10d9138a0);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_100f3f9dc(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3f610);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3f614);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3f60c);
  (*pcVar1)();
}



/* Entry: 100f3f614; end: 100f3f82b;  */

void FUN_100f3f614(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000100f3f6e4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100f3f82c; end: 100f3f8ab;  */

undefined * FUN_100f3f82c(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100f3f8ac; end: 100f3f9bf;  */

long FUN_100f3f8ac(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3f9bc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      lVar5 = param_1;
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3f9c0);
        (*pcVar3)();
      }
      do {
        lVar1 = lVar5 + 1;
        uVar4 = param_5;
        func_0x0001000285a8(param_5,param_6);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e != 0) {
    uVar2 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8
    )(param_1,param_2,param_3,uVar2);
    return param_1;
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3f9b8);
    (*pcVar3)();
  }
  func_0x0001000285a8(param_5,param_6);
  func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,
                      param_5);
  func_0x000107c6142c(param_4);
  return param_3 + (param_2 - param_1) * 8;
}



/* Entry: 100f3f9c0; end: 100f3f9db;  */

void FUN_100f3f9c0(long param_1,long param_2)

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



/* Entry: 100f3f9dc; end: 100f3fb3f;  */

ulong FUN_100f3f9dc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3fb40);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3fb34);
        (*pcVar1)();
      }
      uVar3 = 0x112d4cf10;
      func_0x0001000285a8(0x112d4cf10,&UNK_10d9138a0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3fb38);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3fb3c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          FUN_100f3fb40(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100f3fb40; end: 100f3fce3;  */

ulong FUN_100f3fb40(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3fc18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3fc1c);
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
  func_0x000107c5fb78(0xd000000000000018,0x800000010ef1b670);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3fce4);
  (*pcVar2)();
}



/* Entry: 100f3fce4; end: 100f3fd07;  */

void FUN_100f3fce4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f3fcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100f3fd08; end: 100f3fe0f;  */

void FUN_100f3fd08(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f3fdec);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0x112d4bd28;
  func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f3fdf0);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f3fe08);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f3fe0c);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f3fe10);
    (*pcVar5)();
  }
  return;
}



/* Entry: 100f3fe10; end: 100f3feeb;  */

/* WARNING: Removing unreachable block (ram,0x000100f3fe0c) */

void FUN_100f3fe10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fec8);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fee0);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fee4);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3feec);
      (*pcVar3)();
    }
    FUN_100f3f614(uVar6 + lVar1,1,0x100f41b84,0x112d4bd28,&UNK_10d9127e0);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fdec);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fdf0);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fe08);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fe0c);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3fee8);
  (*pcVar3)();
}



/* Entry: 100f3feec; end: 100f3ff17;  */

void FUN_100f3feec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f3ff18; end: 100f3ff1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3ff18(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if (-uVar16 < 0x40) {
      uVar13 = ~(-1L << (-uVar16 & 0x3f));
    }
    uVar13 = uVar13 & *puVar12;
    func_0x000107c61434(param_1);
    lVar14 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar15 = lVar14;
    while( true ) {
      while (uVar13 != 0) {
        uVar1 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 - 1 & uVar13;
        func_0x0001007bbd18(*(long *)(param_1 + 0x30) +
                            LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 + lVar14 * 0xa00,
                            &puStack_a0);
        uStack_c8 = uStack_98;
        puStack_d0 = puStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar11 = 0x112d4cf10;
        func_0x0001000285a8(0x112d4cf10,&UNK_10d9138a0);
        plVar6 = &lStack_a8;
        func_0x000107c6147c(plVar6,&puStack_d0,PTR___ss11AnyHashableVN_11034e448,uVar11,6);
        lVar2 = lStack_a8;
        lVar15 = lVar14;
        if ((((ulong)plVar6 & 1) != 0) && (lStack_a8 != 0)) {
          puVar8 = puVar9;
          func_0x000107c61550();
          if (((int)puVar8 == 0) ||
             (((long)puVar9 < 0 || (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            func_0x000100f3f6e4(0,puVar7 + 1,1,puVar9,0x100f41b70,0x112d4cf10,&UNK_10d9138a0);
          }
          uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x000100f3f6e4(puVar9,uVar1 + 1,1,puVar8,0x100f41b70,0x112d4cf10,&UNK_10d9138a0);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar2;
        }
      }
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f3e124);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar16 >> 6) <= lVar14) break;
      uVar13 = puVar12[lVar14];
    }
    func_0x000100ba5608(param_1,puVar12,~uVar16,lVar15,0);
    (**(code **)(lVar5 + _DAT_112d4cea8))();
    puStack_a0 = puVar9;
    FUN_100f3f510();
    uVar11 = *(undefined8 *)(lVar5 + _DAT_112d4ceb0);
    *(undefined **)(lVar5 + _DAT_112d4ceb0) = puStack_a0;
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(uVar11);
  }
  return;
}



/* Entry: 100f3ff20; end: 100f3ff63;  */

void FUN_100f3ff20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4cf18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae9f8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4cf18 = puVar1;
  return;
}



/* Entry: 100f3ff64; end: 100f3ff87;  */

/* WARNING: Possible PIC construction at 0x000100f3ec94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f3ec98) */

void FUN_100f3ff64(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar9 = param_1;
    func_0x000107c5d918();
    func_0x000107c61180();
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3eca0);
      (*pcVar2)();
    }
    uVar3 = uVar9;
    func_0x000107c49ec8();
    func_0x000107c61170(uVar9);
    if ((int)uVar3 != 0) {
      uVar9 = param_1;
      func_0x000107c3ee4c();
      func_0x000107c61180();
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3eca4);
        (*pcVar2)();
      }
      uVar3 = uVar9;
      func_0x000107c44fd8();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      if (uVar3 != 0) {
        uVar7 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
        uVar9 = uVar7 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar9 = param_2 >> 0x38 & 0xf;
        }
        if (uVar9 == 0) {
          func_0x000107c61170(param_1);
        }
        else {
          (*pcVar2)(uVar7,param_2);
          func_0x000107c61170(param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
        return;
      }
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_58,0,0);
  uVar9 = *(ulong *)(lVar8 + 0x10);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    (*pcVar2)();
  }
  else {
    lVar4 = lVar8 + 0x10;
    func_0x000107c61428(lVar4,&puStack_88,0x21,0);
    FUN_100f3eaa0();
    func_0x000107c614a8(&puStack_88);
    puVar5 = &UNK_11036bad0;
    func_0x000107c613fc(&UNK_11036bad0,0x28,7);
    *(code **)(puVar5 + 0x10) = pcVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(long *)(puVar5 + 0x20) = lVar8;
    pcStack_68 = FUN_100f3ff64;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_100f3eca4;
    puStack_70 = &UNK_11036bae8;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_60;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(lVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c5e06c(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 100f3ff88; end: 100f3ffef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f3ff88(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4cf70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4cf70);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    FUN_100f3fff0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174();
    func_0x000100f41a34(uVar4);
    lVar3 = param_1;
  }
  func_0x000100f41a44(lVar2);
  return lVar3;
}



/* Entry: 100f3fff0; end: 100f403c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3fff0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long unaff_x20;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d4cf20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf28);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d4cf28))[1];
      puVar5 = PTR_PTR_1126a5fe8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar6,uVar1);
      func_0x000107c4814c();
      func_0x000107c61170(uVar6);
      puVar11 = &UNK_11036bbc8;
      puVar7 = puVar11;
      func_0x000107c613fc(&UNK_11036bbc8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = puVar11;
      func_0x000107c613fc(&UNK_11036bbc8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = puVar11;
      func_0x000107c613fc(&UNK_11036bbc8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = puVar11;
      func_0x000107c613fc(&UNK_11036bbc8,0x18,7);
      func_0x000107c61614(puVar10 + 0x10);
      func_0x000107c613fc(&UNK_11036bbc8,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar12 = PTR_PTR_1126a5ff0;
      func_0x000107c610f8();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_100f41a54;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11036bbe0;
      ppuVar13 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar13);
      uStack_b8 = 0x100f41a8c;
      puStack_d8 = puVar2;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_11036bc08;
      ppuVar14 = &puStack_d8;
      puStack_b0 = puVar8;
      func_0x000107c60bc4(ppuVar14);
      uStack_e8 = 0x100f41ac4;
      puStack_108 = puVar2;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_1000f6b44;
      puStack_f0 = &UNK_11036bc30;
      ppuVar15 = &puStack_108;
      puStack_e0 = puVar9;
      func_0x000107c60bc4(ppuVar15);
      uStack_118 = 0x100f41afc;
      puStack_138 = puVar2;
      uStack_130 = 0x42000000;
      puStack_128 = &UNK_1000f6b44;
      puStack_120 = &UNK_11036bc58;
      ppuVar16 = &puStack_138;
      puStack_110 = puVar10;
      func_0x000107c60bc4(ppuVar16);
      pcStack_148 = FUN_100f41b34;
      puStack_168 = puVar2;
      uStack_160 = 0x42000000;
      pcStack_158 = FUN_100c75f50;
      puStack_150 = &UNK_11036bc80;
      ppuVar17 = &puStack_168;
      puStack_140 = puVar11;
      func_0x000107c60bc4(ppuVar17);
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar10);
      func_0x000107c6157c(puVar11);
      func_0x000107c47bd4();
      func_0x000107c60bd0(ppuVar17);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61574(puStack_140);
      func_0x000107c61574(puStack_110);
      func_0x000107c61574(puStack_e0);
      func_0x000107c61574(puStack_b0);
      puVar2 = puStack_80;
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar2);
      puVar11 = PTR_PTR_1126a5ff8;
      func_0x000107c610f8(PTR_PTR_1126a5ff8);
      func_0x000107c61174(puVar5);
      func_0x000107c61174(puVar12);
      func_0x000107c49520(puVar11);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 100f403c4; end: 100f404d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f403c4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d4cf38;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar2 = _DAT_112d4cf48;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar3 = _DAT_112d4cf50;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  lVar4 = _DAT_112d4cf58;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cf58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cf60) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d4cf68) = 0;
  lVar5 = _DAT_112d4cf70;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cf70) = 1;
  func_0x000100f41c58(lVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x000100f41a34(*(undefined8 *)(unaff_x20 + lVar5));
  func_0x000107c61464();
  return 0;
}



/* Entry: 100f404d4; end: 100f404ff; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController initWithCoder:] */

undefined8 FUN_100f404d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100f403c4();
  return 0;
}



/* Entry: 100f40500; end: 100f40d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f40500(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar15 = &puStack_a0;
  func_0x000107c614f0();
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar2,PTR_s_loadView_112604be0);
  FUN_100f3ff88();
  if (puVar2 == (undefined1 *)0x0) {
    lVar12 = unaff_x20 + _DAT_112d4cf38;
    func_0x000107c61618();
    if (lVar12 != 0) {
      pcVar13 = "handleContentUnavailable()";
      func_0x0001000c10c0("handleContentUnavailable()");
      func_0x000107c61180();
      puVar14 = &UNK_11036be98;
      func_0x000107c613fc(&UNK_11036be98,0x18,7);
      *(long *)(puVar14 + 0x10) = lVar12;
      pcStack_80 = FUN_100f41c10;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11036beb0;
      puStack_78 = puVar14;
      func_0x000107c60bc4(&puStack_a0);
      puVar14 = puStack_78;
      func_0x000107c61174(lVar12);
      func_0x000107c61574(puVar14);
      func_0x000107c4e590(pcVar13);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(pcVar13);
    }
  }
  else {
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40cfc);
      (*pcVar1)();
    }
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar3 = puVar14;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(0x3fd999999999999a);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c52b50(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar4);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf48);
    puVar3 = puVar14;
    func_0x000107c5af88(puVar14);
    func_0x000107c61180();
    func_0x000107c52b50(uVar16);
    func_0x000107c61170(puVar3);
    uVar18 = uVar16;
    func_0x000107c4aba4(uVar16);
    func_0x000107c61180();
    func_0x000107c539d4(0x4030000000000000);
    func_0x000107c61170(uVar18);
    uVar18 = uVar16;
    func_0x000107c4aba4(uVar16);
    func_0x000107c61180();
    func_0x000107c562f8();
    func_0x000107c61170(uVar18);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf50);
    func_0x000107c5af88(puVar14);
    func_0x000107c61180();
    func_0x000107c52b50(uVar17);
    func_0x000107c61170(puVar14);
    uVar18 = uVar17;
    func_0x000107c4aba4(uVar17);
    func_0x000107c61180();
    func_0x000107c539d4(0x4004000000000000);
    func_0x000107c61170(uVar18);
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40d00);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar12);
    func_0x000107c5a050(uVar16);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(uVar16);
    func_0x000107c5a050(puVar2);
    func_0x000107c3d89c(uVar16);
    func_0x000107c5a050(uVar17);
    uVar18 = uVar16;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar5 = uVar18;
    func_0x000107c40290(0);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf58);
    *(undefined8 *)(unaff_x20 + _DAT_112d4cf58) = uVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar18);
    lVar12 = 0x112d360b8;
    FUN_100f41b98(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 0x19;
    *(undefined8 *)(lVar12 + 0x10) = 0xc;
    uVar18 = uVar16;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40d04);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar8 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar12 + 0x20) = uVar8;
    uVar18 = uVar16;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40d08);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar8 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar12 + 0x28) = uVar8;
    uVar18 = uVar16;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40d0c);
      (*pcVar1)();
    }
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar8 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar12 + 0x30) = uVar8;
    *(undefined8 *)(lVar12 + 0x38) = uVar5;
    func_0x000107c61174(uVar5);
    puVar9 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar18 = uVar16;
    func_0x000107c4acb0(uVar16);
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar18);
    *(undefined1 **)(lVar12 + 0x40) = puVar10;
    puVar9 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar18 = uVar16;
    func_0x000107c5ce8c(uVar16);
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar18);
    *(undefined1 **)(lVar12 + 0x48) = puVar10;
    puVar9 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar18 = uVar16;
    func_0x000107c3ec1c(uVar16);
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar18);
    *(undefined1 **)(lVar12 + 0x50) = puVar10;
    puVar9 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar18 = uVar17;
    func_0x000107c3ec1c(uVar17);
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40284(0x4024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar18);
    *(undefined1 **)(lVar12 + 0x58) = puVar10;
    uVar18 = uVar17;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar8 = uVar16;
    func_0x000107c3f75c(uVar16);
    func_0x000107c61180();
    uVar11 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar12 + 0x60) = uVar11;
    uVar18 = uVar17;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c5cbe4(uVar16);
    func_0x000107c61180();
    uVar8 = uVar18;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar16);
    *(undefined8 *)(lVar12 + 0x68) = uVar8;
    uVar18 = uVar17;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar16 = uVar18;
    func_0x000107c40290(0x4042000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    *(undefined8 *)(lVar12 + 0x70) = uVar16;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar18 = uVar17;
    func_0x000107c40290(0x4014000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    *(undefined8 *)(lVar12 + 0x78) = uVar18;
    uVar18 = 0;
    FUN_100f41c18(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar12;
    func_0x000107c5fc48(lVar12,uVar18);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar14);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 100f40d0c; end: 100f40d33; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController loadView] */

void FUN_100f40d0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f40500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f40d34; end: 100f40f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f40d34(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40f04);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  lVar2 = unaff_x20;
  dVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40f08);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c609b0(dVar3,param_2,param_3,param_4);
  if (((0.0 < param_1) && (0.0 < dVar3)) &&
     ((param_1 != *(double *)(unaff_x20 + _DAT_112d4cf60) ||
      ((*(byte *)(unaff_x20 + _DAT_112d4cf68) & 1) == 0)))) {
    *(double *)(unaff_x20 + _DAT_112d4cf60) = param_1;
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f40f0c);
      (*pcVar1)();
    }
    func_0x000107c515a0();
    func_0x000107c61170();
    dVar5 = dVar3 * 0.6;
    FUN_100f3ff88();
    if (lVar2 != 0) {
      dVar4 = 1.79769313486232e+308;
      func_0x000107c5b098(param_1);
      func_0x000107c61170(lVar2);
      if (120.0 <= dVar4) {
        dVar5 = param_3 + 23.0 + dVar4;
        *(undefined1 *)(unaff_x20 + _DAT_112d4cf68) = 1;
      }
    }
    if (*(long *)(unaff_x20 + _DAT_112d4cf58) != 0) {
      dVar4 = dVar3 * 0.7;
      if (dVar5 <= dVar3 * 0.7) {
        dVar4 = dVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (dVar4,*(long *)(unaff_x20 + _DAT_112d4cf58),PTR_s_setConstant__11263de70);
      return;
    }
  }
  return;
}



/* Entry: 100f40f0c; end: 100f40f67; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController viewWillLayoutSubviews] */

void FUN_100f40f0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillLayoutSubviews_112526958;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100f40d34();
  func_0x000107c61170(param_1);
  return;
}


