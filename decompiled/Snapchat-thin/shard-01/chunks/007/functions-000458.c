/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10137dd74; end: 10137ddc3;  */

undefined8 FUN_10137dd74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10137ddc4; end: 10137de43;  */

void FUN_10137ddc4(long param_1,long param_2)

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



/* Entry: 10137de44; end: 10137decb; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137de44(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d76af0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d76af8) = 0;
  param_1 = param_1 + _DAT_112d76b00;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "TemplateExplorerFeature/TemplateExplorerViewController.swift",0x3c,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137decc);
  (*pcVar1)();
}



/* Entry: 10137decc; end: 10137df57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137decc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d76b00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112d769e0);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5c7d4();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c615e8();
  }
  func_0x00010137e4a8();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137df58; end: 10137df7b; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController dealloc] */

void FUN_10137df58(void)

{
  func_0x000107c61174();
  FUN_10137decc();
  return;
}



/* Entry: 10137df7c; end: 10137e013; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010137dfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137dfbc) */
/* WARNING: Removing unreachable block (ram,0x00010137dfdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137df7c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d76ad0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d76ad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d76ae0));
  return;
}



/* Entry: 10137e014; end: 10137e017; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController preferredStatusBarStyle] */

undefined8 FUN_10137e014(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10137e018; end: 10137e0d3;  */

void FUN_10137e018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010137e4a8();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar2 = puVar1;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c4ecbc();
  func_0x000107c517f0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a9c4(puVar1);
  func_0x000107c61180();
  func_0x000107c4ecd4();
  func_0x000107c4ecc0();
  func_0x000107c517ec(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10137e0d4; end: 10137e0fb; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_10137e0d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10137e018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10137e0fc; end: 10137e14b; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController loadView] */

/* WARNING: Possible PIC construction at 0x00010137e138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137e13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e0fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_10137e1dc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d76af0);
  func_0x000107c61174(uVar1);
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10137e14c; end: 10137e1b7; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController viewWillAppear:] */

void FUN_10137e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010137e4a8();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c56a18(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10137e1b8; end: 10137e1db;  */

void FUN_10137e1b8(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 10137e1dc; end: 10137e47b;  */

/* WARNING: Possible PIC construction at 0x00010137e244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137e2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137e358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137e430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137e2c4) */
/* WARNING: Removing unreachable block (ram,0x00010137e35c) */
/* WARNING: Removing unreachable block (ram,0x00010137e398) */
/* WARNING: Removing unreachable block (ram,0x00010137e344) */
/* WARNING: Removing unreachable block (ram,0x00010137e248) */
/* WARNING: Removing unreachable block (ram,0x00010137e434) */
/* WARNING: Removing unreachable block (ram,0x00010137e43c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e1dc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d76af0) != 0) {
    return;
  }
  func_0x000107c30a40();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d76af8);
  *(undefined8 *)(unaff_x20 + _DAT_112d76af8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10137e47c; end: 10137e4c7; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController initWithNibName:bundle:] */

void FUN_10137e47c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TemplateExplorerFeature.TemplateExplorerViewController",0x36,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137e4a8);
  (*pcVar1)();
}



/* Entry: 10137e4c8; end: 10137e503; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10137e4c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d76af0);
  if ((lVar1 != 0) && (param_3 == lVar1)) {
    func_0x000107c3f42c(lVar1,param_2,1);
    return (uint)lVar1 ^ 1;
  }
  return 1;
}



/* Entry: 10137e504; end: 10137e507; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController cardToExpandTransition] */

void FUN_10137e504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10137e508; end: 10137e513; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController cardTransitionWillBeginWithView:] */

void FUN_10137e508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10137e514; end: 10137e51f; -[_TtC23TemplateExplorerFeature30TemplateExplorerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_10137e514(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 10137e520; end: 10137e5eb;  */

void FUN_10137e520(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "didDismiss()";
  func_0x0001000c10c0("didDismiss()");
  func_0x000107c61180();
  puVar2 = &UNK_1103a8830;
  func_0x000107c613fc(&UNK_1103a8830,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x10137e974;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a8898;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10137e5ec; end: 10137e66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e5ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d76b38;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c420a8(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10137e66c; end: 10137e693; -[_TtC23TemplateExplorerFeature29TemplateExplorerActionHandler didDismiss] */

void FUN_10137e66c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10137e520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10137e694; end: 10137e80f;  */

void FUN_10137e694(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "didSelectTemplate(with:)";
  func_0x0001000c10c0("didSelectTemplate(with:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103a8830;
  func_0x000107c613fc(&UNK_1103a8830,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103a8858;
  func_0x000107c613fc(&UNK_1103a8858,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_10137e950;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a8870;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10137e810; end: 10137e85f; -[_TtC23TemplateExplorerFeature29TemplateExplorerActionHandler didSelectTemplateWithTemplate:] */

/* WARNING: Possible PIC construction at 0x00010137e848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137e84c) */

void FUN_10137e810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10137e694(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10137e860; end: 10137e8c7; -[_TtC23TemplateExplorerFeature29TemplateExplorerActionHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e860(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c61614(param_1 + _DAT_112d76b38,0);
  lVar1 = param_1 + _DAT_112d76b40;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  FUN_10137e930();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10137e8c8; end: 10137e8f7;  */

void FUN_10137e8c8(void)

{
  FUN_10137e930();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137e8f8; end: 10137e92f; -[_TtC23TemplateExplorerFeature29TemplateExplorerActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10137e8f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d76b38);
  param_1 = param_1 + _DAT_112d76b40;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10137e930; end: 10137e94f;  */

void FUN_10137e930(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc270);
  return;
}



/* Entry: 10137e950; end: 10137e97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e950(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112d76b40;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      FUN_10137b054(uVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10137e97c; end: 10137e99f;  */

undefined8 FUN_10137e97c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10137e9a0; end: 10137e9a7;  */

void FUN_10137e9a0(long param_1,long param_2)

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



/* Entry: 10137e9a8; end: 10137e9b3; -[SCTemplateExplorerFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b70;
  func_0x000107c61428(param_1 + _DAT_112d76b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137e9b4; end: 10137e9bf; -[SCTemplateExplorerFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b70;
  func_0x000107c61428(param_1 + _DAT_112d76b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137e9c0; end: 10137e9cb; -[SCTemplateExplorerFeatureEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b78;
  func_0x000107c61428(param_1 + _DAT_112d76b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137e9cc; end: 10137e9d7; -[SCTemplateExplorerFeatureEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b78;
  func_0x000107c61428(param_1 + _DAT_112d76b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137e9d8; end: 10137e9e3; -[SCTemplateExplorerFeatureEntryPoint ctpRepositoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b80;
  func_0x000107c61428(param_1 + _DAT_112d76b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137e9e4; end: 10137e9ef; -[SCTemplateExplorerFeatureEntryPoint setCtpRepositoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b80;
  func_0x000107c61428(param_1 + _DAT_112d76b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137e9f0; end: 10137e9fb; -[SCTemplateExplorerFeatureEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b88;
  func_0x000107c61428(param_1 + _DAT_112d76b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137e9fc; end: 10137ea07; -[SCTemplateExplorerFeatureEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137e9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b88;
  func_0x000107c61428(param_1 + _DAT_112d76b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137ea08; end: 10137ea13; -[SCTemplateExplorerFeatureEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ea08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b90;
  func_0x000107c61428(param_1 + _DAT_112d76b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137ea14; end: 10137ea1f; -[SCTemplateExplorerFeatureEntryPoint setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ea14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b90;
  func_0x000107c61428(param_1 + _DAT_112d76b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137ea20; end: 10137ea2b; -[SCTemplateExplorerFeatureEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ea20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76b98;
  func_0x000107c61428(param_1 + _DAT_112d76b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10137ea2c; end: 10137ea6f;  */

void FUN_10137ea2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10137ea70; end: 10137ea7b; -[SCTemplateExplorerFeatureEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ea70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76b98;
  func_0x000107c61428(param_1 + _DAT_112d76b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137ea7c; end: 10137eacf;  */

void FUN_10137ea7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10137ead0; end: 10137eb17; -[SCTemplateExplorerFeatureEntryPoint useTemplateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ead0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76ba0;
  func_0x000107c61428(param_1 + _DAT_112d76ba0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10137eb18; end: 10137eb7b; -[SCTemplateExplorerFeatureEntryPoint setUseTemplateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137eb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76ba0;
  func_0x000107c61428(param_1 + _DAT_112d76ba0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10137eb7c; end: 10137ee7b;  */

/* WARNING: Possible PIC construction at 0x00010137ed50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ed60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ed70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ed80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ee34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ee44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ee54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ee14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137ee24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137edf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137edd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010137edc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137edd8) */
/* WARNING: Removing unreachable block (ram,0x00010137edf8) */
/* WARNING: Removing unreachable block (ram,0x00010137ee28) */
/* WARNING: Removing unreachable block (ram,0x00010137ee18) */
/* WARNING: Removing unreachable block (ram,0x00010137ee58) */
/* WARNING: Removing unreachable block (ram,0x00010137ee48) */
/* WARNING: Removing unreachable block (ram,0x00010137ee38) */
/* WARNING: Removing unreachable block (ram,0x00010137ed84) */
/* WARNING: Removing unreachable block (ram,0x00010137ed74) */
/* WARNING: Removing unreachable block (ram,0x00010137ed64) */
/* WARNING: Removing unreachable block (ram,0x00010137ed54) */
/* WARNING: Removing unreachable block (ram,0x00010137edc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137eb7c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5d8a0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c40e34();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c40434();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c5c804();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            func_0x000107c5dbac();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar8 = 0;
              FUN_10137b9b8();
              lVar9 = lVar8;
              func_0x000107c610f8();
              func_0x000107c61614(lVar9 + _DAT_112d769d0,0);
              func_0x000107c61614(lVar9 + _DAT_112d769d8,0);
              *(long *)(lVar9 + _DAT_112d769e0) = lVar2;
              *(long *)(lVar9 + _DAT_112d769e8) = lVar3;
              *(long *)(lVar9 + _DAT_112d769f0) = lVar4;
              *(long *)(lVar9 + _DAT_112d769f8) = lVar5;
              *(long *)(lVar9 + _DAT_112d76a00) = lVar6;
              *(long *)(lVar9 + _DAT_112d76a08) = lVar7;
              *(long *)(lVar9 + _DAT_112d76a10) = unaff_x20;
              puVar1 = PTR_s_init_1125d9248;
              lStack_70 = lVar9;
              lStack_68 = lVar8;
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(lVar6);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(unaff_x20);
              func_0x000107c61154(&lStack_70,puVar1);
              func_0x00010137aa3c();
              lVar2 = unaff_x20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10137ee7c; end: 10137eea3; -[SCTemplateExplorerFeatureEntryPoint begin] */

void FUN_10137ee7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10137eb7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10137eea4; end: 10137eee7; -[SCTemplateExplorerFeatureEntryPoint end] */

void FUN_10137eea4(undefined8 param_1)

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



/* Entry: 10137eee8; end: 10137f29b;  */

void FUN_10137eee8(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e37a0)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010ef1c860,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53bc0();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e6230)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53808();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10df490)) {
            uVar2 = 0xd00000000000001b;
            func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
                 (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a46c();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10c69f0)) {
                  uVar2 = 0xd00000000000001b;
                  func_0x000107c605b8(0xd00000000000001b,0x800000010ef39610,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "TemplateExplorerFeature/SCTemplateExplorerFeatureEntryPoint.swift"
                                        ,0x41,2,0x42,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10137f29c);
                    (*pcVar1)();
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a2c8();
              }
              goto LAB_10137ef74;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59c58();
        }
      }
    }
  }
LAB_10137ef74:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10137f29c; end: 10137f347; -[SCTemplateExplorerFeatureEntryPoint setValue:forIvarName:] */

void FUN_10137f29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10137eee8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10137f348; end: 10137f417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137f348(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d76b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76b88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76b90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76b98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d76ba0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76ba8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10137f418; end: 10137f437; -[SCTemplateExplorerFeatureEntryPoint init] */

void FUN_10137f418(void)

{
  FUN_10137f348();
  return;
}



/* Entry: 10137f438; end: 10137f46b;  */

void FUN_10137f438(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10137f46c; end: 10137f503; -[SCTemplateExplorerFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010137f4e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137f4ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137f46c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d76b70);
  func_0x000107c61610(param_1 + _DAT_112d76b78);
  func_0x000107c61610(param_1 + _DAT_112d76b80);
  func_0x000107c61610(param_1 + _DAT_112d76b88);
  func_0x000107c61610(param_1 + _DAT_112d76b90);
  func_0x000107c61610(param_1 + _DAT_112d76b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d76ba0));
  return;
}



/* Entry: 10137f504; end: 10137f523;  */

void FUN_10137f504(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc370);
  return;
}



/* Entry: 10137f524; end: 10137f9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10137f524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  uStack_f0 = param_6;
  uStack_e8 = param_4;
  uStack_e0 = param_3;
  uStack_d8 = param_2;
  uStack_d0 = param_5;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76bd8);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76be0);
  *puVar1 = 0xd00000000000002f;
  puVar1[1] = 0x800000010ef39680;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d76be8);
  *puVar1 = 0x706d65547465472f;
  puVar1[1] = 0xed0000736574616c;
  lVar2 = _DAT_112d76bf0;
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef396b0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
  uVar7 = uStack_d0;
  uVar6 = uStack_d8;
  uVar10 = uStack_e0;
  uVar5 = uStack_e8;
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d76bf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c30) = uStack_d8;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c38) = uStack_e0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c40) = uStack_e8;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c48) = uStack_d0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c50) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c58) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c60) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c68) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c70) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c78) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c80) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c88) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c90) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d76c98) = param_15;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_d8 = uVar6;
  func_0x000107c61174();
  uStack_e0 = uVar10;
  func_0x000107c61174();
  uStack_e8 = uVar5;
  func_0x000107c61174();
  uStack_d0 = uVar7;
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
  puVar8 = auStack_78;
  func_0x000107c61154(puVar8,puVar4);
  uVar10 = *(undefined8 *)(puVar8 + _DAT_112d76c28);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5c7e8();
  func_0x000107c61180();
  uVar5 = uVar10;
  FUN_10137f9f0();
  func_0x000107c61170(uVar10);
  puVar4 = &UNK_1103a89a8;
  func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar8);
  func_0x000107c61170(puVar8);
  func_0x00010075a04c(0,1,FUN_10137ff00,puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar4);
  return puVar8;
}



/* Entry: 10137f9f0; end: 10137fc47;  */

undefined8 FUN_10137f9f0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  uVar9 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112d76ce0,&UNK_10d936788);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = &UNK_1103a9410;
  func_0x000107c613fc(&UNK_1103a9410,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1013858ac;
  *(long *)(puVar3 + 0x18) = lVar2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1013858d0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101380460;
  puStack_88 = &UNK_1103a9428;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_1103a9460;
  func_0x000107c613fc(&UNK_1103a9460,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(long *)(puVar5 + 0x18) = lVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  puVar6 = &UNK_1103a9488;
  func_0x000107c613fc(&UNK_1103a9488,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1013858f0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = FUN_1013858fc;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101380a90;
  puStack_88 = &UNK_1103a94a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(lVar2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c770(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61578(lVar2,2);
  puVar8 = puVar3;
  func_0x000107c61544(puVar3,"",0x68,0x88,0x29,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10137fc44);
    (*pcVar1)();
  }
  puVar3 = puVar6;
  func_0x000107c61544(puVar6,"",0x68,0x8a,0x17,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10137fc48);
  (*pcVar1)();
}



/* Entry: 10137fc48; end: 10137feff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137fc48(ulong *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar10 = *param_1;
  uVar4 = param_1[1];
  puVar9 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar9,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((char)uVar4 == '\x01') {
      lVar2 = param_2;
      func_0x00010518dd7c();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137fefc);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      pcVar5 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar6 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_1103a9280;
      func_0x000107c613fc(&UNK_1103a9280,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(long *)(puVar7 + 0x18) = lVar3;
      *(undefined1 **)(puVar7 + 0x20) = puVar9;
      uStack_68 = 0x101385bd8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a9298;
      ppuVar8 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar6 = puStack_60;
      func_0x000107c61434(puVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(param_2);
    }
    else {
      uVar4 = uVar10;
      func_0x000101380010();
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined8 *)(param_2 + _DAT_112d76bf8);
        *(ulong *)(param_2 + _DAT_112d76bf8) = uVar10;
        func_0x000107c61174(uVar10);
        func_0x000107c61170(uVar11);
        func_0x000101380138(uVar10);
        func_0x000107c61170(param_2);
        return;
      }
      func_0x00010518dd64();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137ff00);
        (*pcVar1)();
      }
      uVar10 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      pcVar5 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar6 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_1103a92d0;
      func_0x000107c613fc(&UNK_1103a92d0,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(ulong *)(puVar7 + 0x18) = uVar10;
      *(undefined1 **)(puVar7 + 0x20) = puVar9;
      uStack_68 = 0x101385bdc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a92e8;
      ppuVar8 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar6 = puStack_60;
      func_0x000107c61434(puVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar9);
    }
    func_0x000107c615e8(pcVar5);
  }
  return;
}



/* Entry: 10137ff00; end: 10137ff07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10137ff00(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar11 = *param_1;
  uVar5 = param_1[1];
  puVar10 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar10,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((char)uVar5 == '\x01') {
      lVar3 = lVar2;
      func_0x00010518dd7c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137fefc);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar2);
      puVar8 = &UNK_1103a9280;
      func_0x000107c613fc(&UNK_1103a9280,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar4;
      *(undefined1 **)(puVar8 + 0x20) = puVar10;
      uStack_68 = 0x101385bd8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a9298;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_60;
      func_0x000107c61434(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c6142c(puVar10);
      func_0x000107c61170(lVar2);
    }
    else {
      uVar5 = uVar11;
      func_0x000101380010();
      if ((uVar5 & 1) != 0) {
        uVar12 = *(undefined8 *)(lVar2 + _DAT_112d76bf8);
        *(ulong *)(lVar2 + _DAT_112d76bf8) = uVar11;
        func_0x000107c61174(uVar11);
        func_0x000107c61170(uVar12);
        func_0x000101380138(uVar11);
        func_0x000107c61170(lVar2);
        return;
      }
      func_0x00010518dd64();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137ff00);
        (*pcVar1)();
      }
      uVar11 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar2);
      puVar8 = &UNK_1103a92d0;
      func_0x000107c613fc(&UNK_1103a92d0,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(ulong *)(puVar8 + 0x18) = uVar11;
      *(undefined1 **)(puVar8 + 0x20) = puVar10;
      uStack_68 = 0x101385bdc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a92e8;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_60;
      func_0x000107c61434(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(puVar10);
    }
    func_0x000107c615e8(pcVar6);
  }
  return;
}



/* Entry: 10137ff08; end: 10138045f;  */

void FUN_10137ff08(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "presentErrorMessage(message:)";
  func_0x0001000c10c0("presentErrorMessage(message:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103a89a8;
  func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103a9230;
  func_0x000107c613fc(&UNK_1103a9230,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x101385bd4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103a9248;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101380460; end: 101380497;  */

void FUN_101380460(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101380498; end: 1013806d3;  */

void FUN_101380498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103a94d8;
  func_0x000107c613fc(&UNK_1103a94d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c6157c(param_4);
  FUN_1013806d4(param_1,param_2,FUN_10138591c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013806d4; end: 101380a8f;  */

/* WARNING: Possible PIC construction at 0x0001013807f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013808ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101380910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138099c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013809d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101380a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013809d4) */
/* WARNING: Removing unreachable block (ram,0x0001013809a0) */
/* WARNING: Removing unreachable block (ram,0x000101380914) */
/* WARNING: Removing unreachable block (ram,0x0001013808f0) */
/* WARNING: Removing unreachable block (ram,0x000101380820) */
/* WARNING: Removing unreachable block (ram,0x0001013807f4) */
/* WARNING: Removing unreachable block (ram,0x000101380934) */
/* WARNING: Removing unreachable block (ram,0x000101380808) */
/* WARNING: Removing unreachable block (ram,0x000101380a54) */
/* WARNING: Removing unreachable block (ram,0x000101380a70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013806d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = _DAT_112d76c00;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d76c00);
  if (lVar5 == 0) {
    FUN_101383984();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c615e8(uVar4);
    lVar5 = *(long *)(unaff_x20 + lVar3);
    if (lVar5 == 0) {
      lVar3 = 0x6574616c706d6574;
      func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
      func_0x000107c5fadc(0xd000000000000046,0x800000010ef398e0);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
  }
  puVar2 = PTR_PTR_1126a6bd8;
  func_0x000107c610f8(PTR_PTR_1126a6bd8);
  func_0x000107c615f0(lVar5);
  func_0x000107c453e4(puVar2);
  lVar3 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x38) = PTR___s10Foundation4DataVN_110350ae0;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  FUN_1013859f4(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c600f0(lVar3);
  func_0x000107c53bb0(puVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101380a90; end: 101380af7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101380a90(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  func_0x000107c61170(uVar2);
  (*pcVar1)(param_2,uVar3);
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 == 1) {
    param_2 = uVar3 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101380af8; end: 1013814b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101380af8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long unaff_x20;
  ulong uVar22;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = unaff_x20;
  uVar22 = param_2;
  func_0x000107c614f0();
  lVar6 = _DAT_112d76c08;
  if (*(long *)(unaff_x20 + _DAT_112d76c08) == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d76c50);
    func_0x000107c5c800();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 == 0) {
      func_0x00010518dd04();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814a8);
        (*pcVar1)();
      }
      lVar6 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      pcVar8 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar9 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = &UNK_1103a8a38;
      func_0x000107c613fc(&UNK_1103a8a38,0x28,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(long *)(puVar10 + 0x18) = lVar6;
      *(ulong *)(puVar10 + 0x20) = uVar22;
      pcStack_88 = (code *)0x101385ba0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1103a8a50;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar9 = puStack_80;
      func_0x000107c61434(uVar22);
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(pcVar8);
      func_0x000107c60bd0(ppuVar11);
    }
    else {
      lVar19 = *(long *)(unaff_x20 + _DAT_112d76c80);
      lVar3 = lVar19;
      func_0x000107c5ddc0();
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar5 == 0) {
        func_0x00010518dd04();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814ac);
          (*pcVar1)();
        }
        lVar6 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        pcVar8 = "presentErrorMessage(message:)";
        func_0x0001000c10c0("presentErrorMessage(message:)");
        func_0x000107c61180();
        puVar9 = &UNK_1103a89a8;
        func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
        func_0x000107c61614(puVar9 + 0x10);
        puVar10 = &UNK_1103a8a88;
        func_0x000107c613fc(&UNK_1103a8a88,0x28,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(long *)(puVar10 + 0x18) = lVar6;
        *(ulong *)(puVar10 + 0x20) = uVar22;
        pcStack_88 = (code *)0x101385ba4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1103a8aa0;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar9 = puStack_80;
        func_0x000107c61434(uVar22);
        func_0x000107c61574(puVar9);
        func_0x000107c4e524(pcVar8);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar4);
      }
      else {
        func_0x000107c450b4();
        func_0x000107c61180();
        lVar3 = lVar19;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar3 == 0) {
          func_0x00010518dd04();
          func_0x000107c61180();
          if (lVar19 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814b0);
            (*pcVar1)();
          }
          lVar6 = lVar19;
          func_0x000107c5faec();
          func_0x000107c61170(lVar19);
          pcVar8 = "presentErrorMessage(message:)";
          func_0x0001000c10c0("presentErrorMessage(message:)");
          func_0x000107c61180();
          puVar9 = &UNK_1103a89a8;
          func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
          func_0x000107c61614(puVar9 + 0x10);
          puVar10 = &UNK_1103a8ad8;
          func_0x000107c613fc(&UNK_1103a8ad8,0x28,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          *(long *)(puVar10 + 0x18) = lVar6;
          *(ulong *)(puVar10 + 0x20) = uVar22;
          pcStack_88 = (code *)0x101385ba8;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1103a8af0;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar9 = puStack_80;
          func_0x000107c61434(uVar22);
          func_0x000107c61574(puVar9);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar5);
        }
        else {
          puVar9 = PTR_PTR_1126b2798;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar20 = *(undefined8 *)(unaff_x20 + lVar6);
          *(undefined **)(unaff_x20 + lVar6) = puVar9;
          func_0x000107c61174();
          func_0x000107c61170(uVar20);
          lVar6 = *(long *)(unaff_x20 + _DAT_112d76c28);
          func_0x000107c4f090();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c61174();
            lVar19 = lVar6;
            while( true ) {
              lVar7 = lVar19;
              func_0x000107c4f078();
              func_0x000107c61180();
              if (lVar7 == 0) break;
              func_0x000107c61170();
              lVar7 = lVar19;
              func_0x000107c4f078();
              func_0x000107c61180();
              if (lVar7 != 0) {
                func_0x000107c61170(lVar19);
                lVar19 = lVar7;
              }
            }
            func_0x000107c61170(lVar6);
            puVar10 = PTR_PTR_1126aff58;
            func_0x000107c610f8();
            func_0x000107c48080();
            puVar13 = PTR_PTR_1126ae820;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c61174();
            puVar12 = puVar10;
            func_0x00010518dd94();
            func_0x000107c61180();
            if (puVar12 == (undefined *)0x0) {
              uVar22 = 0;
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(puVar12);
            }
            puVar12 = puVar10;
            func_0x00010446ebd0(puVar10,puVar13);
            func_0x000107c61170(puVar10);
            func_0x000107c6142c(uVar22);
            func_0x000107c61174();
            uVar20 = 0xd00000000000001b;
            func_0x000107c5fadc(0xd00000000000001b,0x800000010ef39730);
            func_0x000107c520fc(puVar10);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(uVar20);
            if (param_2 >> 0x3e == 0) {
              uVar22 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar22 = param_2 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < param_2) {
                uVar22 = param_2;
              }
              func_0x000107c60480();
            }
            if (!SCARRY8(uVar22,1)) {
              puVar14 = &UNK_1103a8b78;
              func_0x000107c613fc(&UNK_1103a8b78,0x18,7);
              *(undefined8 *)(puVar14 + 0x10) = 0;
              func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d76c70));
              puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar22 != 0) {
                puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x0001013851d4(0,uVar22 & ((long)uVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
                if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814a4);
                  (*pcVar1)();
                }
                uVar21 = 0;
                do {
                  puVar18 = puStack_a8;
                  if ((param_2 & 0xc000000000000001) == 0) {
                    if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) <= (long)uVar21) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101381480);
                      (*pcVar1)();
                    }
                    uVar15 = *(ulong *)(param_2 + uVar21 * 8 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    uVar15 = uVar21;
                    FUN_101351ca4(uVar21,param_2);
                  }
                  uStack_b8 = uVar15;
                  FUN_1013814b4(&uStack_b0,1.0 / (double)(long)(uVar22 + 1),&uStack_b8,lVar4,lVar5,
                                lVar3,puVar9,puVar14,puVar13,lVar2);
                  func_0x000107c61170(uVar15);
                  uVar20 = uStack_b0;
                  uVar15 = *(ulong *)(puVar18 + 0x10);
                  puStack_a8 = puVar18;
                  if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar15) {
                    func_0x0001013851d4(1 < *(ulong *)(puVar18 + 0x18),uVar15 + 1,1);
                  }
                  uVar21 = uVar21 + 1;
                  *(ulong *)(puStack_a8 + 0x10) = uVar15 + 1;
                  *(undefined8 *)(puStack_a8 + uVar15 * 8 + 0x20) = uVar20;
                  puVar18 = puStack_a8;
                } while (uVar22 != uVar21);
              }
              puVar16 = PTR_PTR_1126ae558;
              func_0x000107c61168(PTR_PTR_1126ae558);
              uVar20 = 0x112d74dc8;
              func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
              puVar17 = puVar18;
              func_0x000107c5fc48(puVar18,uVar20);
              func_0x000107c6142c(puVar18);
              func_0x000107c3db10(puVar16);
              func_0x000107c61180();
              func_0x000107c61170(puVar17);
              puVar18 = &UNK_1103a89a8;
              func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
              func_0x000107c61614(puVar18 + 0x10,unaff_x20);
              puVar17 = &UNK_1103a8ba0;
              func_0x000107c613fc(&UNK_1103a8ba0,0x28,7);
              *(undefined **)(puVar17 + 0x10) = puVar18;
              *(undefined **)(puVar17 + 0x18) = puVar9;
              *(undefined8 *)(puVar17 + 0x20) = param_1;
              pcStack_88 = FUN_101385454;
              puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a0 = 0x42000000;
              puStack_98 = &UNK_100bcda3c;
              puStack_90 = &UNK_1103a8bb8;
              ppuVar11 = &puStack_a8;
              puStack_80 = puVar17;
              func_0x000107c60bc4(ppuVar11);
              puVar18 = puStack_80;
              func_0x000107c61174(puVar9);
              func_0x000107c61174(param_1);
              func_0x000107c61574(puVar18);
              func_0x000107c5dc64(puVar16);
              func_0x000107c60bd0(ppuVar11);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar5);
              func_0x000107c615e8(lVar3);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(lVar19);
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar13);
              func_0x000107c61170(puVar12);
              func_0x000107c61574(puVar14);
              func_0x000107c61170(puVar16);
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814a0);
            (*pcVar1)();
          }
          func_0x00010518dd04();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013814b4);
            (*pcVar1)();
          }
          lVar2 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
          pcVar8 = "presentErrorMessage(message:)";
          func_0x0001000c10c0("presentErrorMessage(message:)");
          func_0x000107c61180();
          puVar10 = &UNK_1103a89a8;
          func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
          func_0x000107c61614(puVar10 + 0x10);
          puVar13 = &UNK_1103a8b28;
          func_0x000107c613fc(&UNK_1103a8b28,0x28,7);
          *(undefined **)(puVar13 + 0x10) = puVar10;
          *(long *)(puVar13 + 0x18) = lVar2;
          *(ulong *)(puVar13 + 0x20) = uVar22;
          pcStack_88 = (code *)0x101385bac;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1103a8b40;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar13;
          func_0x000107c60bc4(ppuVar11);
          puVar10 = puStack_80;
          func_0x000107c61434(uVar22);
          func_0x000107c61574(puVar10);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar9);
        }
      }
    }
    func_0x000107c6142c(uVar22);
    func_0x000107c615e8(pcVar8);
  }
  return;
}



/* Entry: 1013814b4; end: 1013815c7;  */

void FUN_1013814b4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar1 = *param_3;
  FUN_1013815c8();
  puVar2 = &UNK_1103a8f38;
  func_0x000107c613fc(&UNK_1103a8f38,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = in_x5;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = in_x6;
  uStack_60 = 0x1013855a8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10138178c;
  puStack_68 = &UNK_1103a8f50;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(in_x5);
  func_0x000107c61174(in_x6);
  func_0x000107c61574(puVar2);
  uVar4 = uVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  *param_1 = uVar4;
  return;
}



/* Entry: 1013815c8; end: 1013816c7;  */

undefined8
FUN_1013815c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_1103a8f88;
  func_0x000107c613fc(&UNK_1103a8f88,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
  uStack_60 = 0x1013855b8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x101385b9c;
  puStack_68 = &UNK_1103a8fa0;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c436a8(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return param_1;
}



/* Entry: 1013816c8; end: 10138178b;  */

void FUN_1013816c8(undefined8 *param_1,double param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
  param_2 = param_2 + *(double *)(param_4 + 0x10);
  *(double *)(param_4 + 0x10) = param_2;
  uVar1 = 0;
  FUN_1013859f4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c60108(param_2);
  func_0x000107c4d664(param_5);
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  FUN_1013859f4(0,0x112d62390,&PTR_PTR_1126aff40);
  param_1[3] = uVar1;
  *param_1 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10138178c; end: 10138180f;  */

void FUN_10138178c(long param_1,undefined8 param_2)

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



/* Entry: 101381810; end: 101381a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101381810(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c49b28();
    if ((param_4 & 1) == 0) {
      if ((param_2 != 0) || (param_1 == 0)) {
        puVar3 = &UNK_1103a89a8;
        func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_3);
        func_0x000107c6157c(puVar3);
        func_0x000101381968(FUN_101385460,puVar3);
        func_0x000107c61170(param_3);
        func_0x000107c61578(puVar3,2);
        return;
      }
      uVar4 = *(undefined8 *)(param_3 + _DAT_112d76c08);
      *(undefined8 *)(param_3 + _DAT_112d76c08) = 0;
      func_0x000107c61174(param_1);
      func_0x000107c61170(uVar4);
      lStack_60 = 0;
      uVar4 = 0;
      FUN_1013859f4(0,0x112d62390,&PTR_PTR_1126aff40);
      func_0x000107c5fc4c(param_1,&lStack_60,uVar4);
      lVar1 = lStack_60;
      if (lStack_60 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101381968);
        (*pcVar2)();
      }
      FUN_101381a9c(param_5,lStack_60);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101381a9c; end: 101381d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101381a9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d76c48);
  lVar1 = lVar8;
  func_0x000107c5b1c8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar5 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000101381968(0x101385490,puVar5);
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d76c98);
    func_0x000107c5b1b4();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      uVar4 = 0;
      FUN_1013859f4(0,0x112d62390,&PTR_PTR_1126aff40);
      func_0x000107c5fc48(param_2,uVar4);
      func_0x000107c42bc4();
      func_0x000107c61180();
      lVar3 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar3 != 0) {
        func_0x000107c4a5c0(lVar3);
        func_0x000107c615e8(lVar3);
      }
      lVar8 = lVar2;
      func_0x000107c40b8c(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      puVar5 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1103a8bf0;
      func_0x000107c613fc(&UNK_1103a8bf0,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar1;
      pcStack_60 = FUN_1013854f0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      uStack_70 = 0x101383914;
      puStack_68 = &UNK_1103a8c08;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c5dc64(lVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar8);
      return;
    }
    puVar5 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000101381968(0x1013854c0,puVar5);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61578(puVar5,2);
  return;
}



/* Entry: 101381d4c; end: 10138250f;  */

undefined *
FUN_101381d4c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined *param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_78;
  
  lStack_78 = 0;
  lVar1 = param_1;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar2 = &UNK_1103a8fd8;
  func_0x000107c613fc(&UNK_1103a8fd8,0x18,7);
  *(long **)(puVar2 + 0x10) = &lStack_78;
  puVar3 = &UNK_1103a9000;
  func_0x000107c613fc(&UNK_1103a9000,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1013855c8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_90 = (code *)0x101385b90;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_101382510;
  puStack_98 = &UNK_1103a9018;
  ppuVar4 = &puStack_b0;
  puStack_88 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar11 = puStack_88;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar11);
  func_0x000107c4c668(lVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar1);
  if (lStack_78 == 0) {
    puStack_b8 = (undefined *)0x0;
    lVar1 = param_1;
    func_0x000107c4c9d4();
    func_0x000107c61180();
    if (lVar1 == 0) {
      puVar11 = (undefined *)0x0;
      pcVar12 = (code *)0x0;
    }
    else {
      puVar11 = &UNK_1103a90f0;
      func_0x000107c613fc(&UNK_1103a90f0,0x18,7);
      *(undefined ***)(puVar11 + 0x10) = &puStack_b8;
      puVar5 = &UNK_1103a9118;
      uVar10 = 0x20;
      func_0x000107c613fc(&UNK_1103a9118,0x20,7);
      pcVar12 = FUN_101385660;
      *(code **)(puVar5 + 0x10) = FUN_101385660;
      *(undefined **)(puVar5 + 0x18) = puVar11;
      pcStack_90 = (code *)0x10138568c;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      pcStack_a0 = FUN_101351610;
      puStack_98 = &UNK_1103a9130;
      ppuVar4 = &puStack_b0;
      puStack_88 = puVar5;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_88);
      func_0x000107c4c5a0(lVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar1);
      if (puStack_b8 != (undefined *)0x0) {
        puVar5 = puStack_b8;
        func_0x000107c61174();
        puVar6 = puVar5;
        func_0x000107c4ca5c();
        if (puVar6 == (undefined *)0x1) {
          uVar10 = 0xd000000000000025;
          func_0x000107c5fadc(0xd000000000000025,0x800000010ef397d0);
          func_0x000107c4e000(param_5);
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          puVar6 = param_5;
          func_0x000107c3f50c(param_5);
          func_0x000107c61180();
          func_0x000107c3d5f8(param_4);
          func_0x000107c615e8(puVar6);
          puVar7 = param_5;
          func_0x000107c43bf4(param_5);
          func_0x000107c61180();
          puVar6 = &UNK_1103a9050;
          func_0x000107c613fc(&UNK_1103a9050,0x30,7);
          *(long *)(puVar6 + 0x10) = param_2;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          *(long *)(puVar6 + 0x20) = param_1;
          *(undefined8 *)(puVar6 + 0x28) = param_6;
          pcStack_90 = FUN_101385648;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          pcStack_a0 = (code *)0x101385b94;
          puStack_98 = &UNK_1103a9068;
          ppuVar4 = &puStack_b0;
          puStack_88 = puVar6;
          func_0x000107c60bc4(ppuVar4);
          puVar6 = puStack_88;
          func_0x000107c61174(puVar5);
          func_0x000107c61174(param_1);
          func_0x000107c615f0(param_2);
          func_0x000107c61574(puVar6);
          puVar6 = puVar7;
          func_0x000107c436a8(puVar7);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(param_5);
        }
        else if (puVar6 == (undefined *)0x2) {
          func_0x00010011df08();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5faec();
          func_0x000107c61170(puVar6);
          puStack_b0 = puVar7;
          uStack_a8 = uVar10;
          func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
          uVar10 = uStack_a8;
          puVar6 = puStack_b0;
          uVar8 = uStack_a8;
          func_0x000107c5fadc(puStack_b0,uStack_a8);
          func_0x000107c6142c(uVar10);
          func_0x000107c43440();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          if (param_2 == 0) {
            param_2 = 0;
            func_0x000107c5faec(0);
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar8);
          }
          puVar9 = PTR_PTR_1126b3070;
          func_0x000107c610f8(PTR_PTR_1126b3070);
          func_0x000107c494bc();
          func_0x000107c61170(param_2);
          func_0x000107c61174(puVar9);
          uVar10 = 0xd000000000000025;
          func_0x000107c5fadc(0xd000000000000025,0x800000010ef39800);
          puStack_98 = (undefined *)0x0;
          pcStack_a0 = (code *)0x0;
          puStack_88 = (undefined *)0x0;
          pcStack_90 = (code *)0x0;
          uStack_a8 = 0;
          puStack_b0 = (undefined *)0x0;
          func_0x000107c4dffc();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar10);
          puVar6 = param_3;
          func_0x000107c3f50c(param_3);
          func_0x000107c61180();
          func_0x000107c3d5f8(param_4);
          func_0x000107c615e8(puVar6);
          puVar7 = param_3;
          func_0x000107c43bf4(param_3);
          func_0x000107c61180();
          puVar6 = &UNK_1103a90a0;
          func_0x000107c613fc(&UNK_1103a90a0,0x30,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(undefined **)(puVar6 + 0x18) = param_3;
          *(long *)(puVar6 + 0x20) = param_1;
          *(undefined8 *)(puVar6 + 0x28) = param_6;
          pcStack_90 = (code *)0x101385654;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          pcStack_a0 = (code *)0x101385b98;
          puStack_98 = &UNK_1103a90b8;
          ppuVar4 = &puStack_b0;
          puStack_88 = puVar6;
          func_0x000107c60bc4(ppuVar4);
          puVar6 = puStack_88;
          func_0x000107c61174(puVar5);
          func_0x000107c61174(param_3);
          func_0x000107c61174(param_1);
          func_0x000107c61574(puVar6);
          puVar6 = puVar7;
          func_0x000107c436a8(puVar7);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(param_3);
        }
        else {
          puVar6 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          uVar8 = 0x6574616c706d6574;
          func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
          uVar10 = 0xd000000000000039;
          func_0x000107c5fadc(0xd000000000000039,0x800000010ef39790);
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar10);
          puVar7 = puVar9;
          func_0x000107c5ed2c(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000107c451ac(puVar6);
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
        }
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puStack_b8);
        pcVar12 = FUN_101385660;
        goto LAB_101382494;
      }
    }
    uVar10 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar8 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef39770);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar8);
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar7 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c451ac(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puStack_b8);
  }
  else {
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    pcVar12 = (code *)0x0;
    puVar11 = (undefined *)0x0;
  }
LAB_101382494:
  lVar1 = lStack_78;
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(lVar1);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x68,0x11d,0x3f,1);
  func_0x000107c61574(puVar3);
  FUN_1013855f4(pcVar12,puVar11);
  if (((ulong)puVar2 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x101382510);
  (*pcVar12)();
}



/* Entry: 101382510; end: 10138254b;  */

void FUN_101382510(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10138254c; end: 1013827fb;  */

undefined * FUN_10138254c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &puStack_80;
  pcStack_60 = FUN_1013827fc;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b61264;
  puStack_68 = &UNK_1103a9158;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar4 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar5 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010ef39830);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar8 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c451ac(puVar7);
    func_0x000107c61180();
  }
  else {
    puVar6 = PTR_PTR_1126aff28;
    func_0x000107c61168(PTR_PTR_1126aff28);
    func_0x000107c42cb8(param_3);
    func_0x000107c424b0(param_3);
    func_0x000107c61180();
    func_0x000107c3f1d4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    lVar2 = param_4;
    func_0x000107c45214();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = param_4;
    func_0x000107c45218(param_4);
    func_0x000107c61180();
    func_0x000107c5d060(param_4);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126aff40;
    func_0x000107c610f8(PTR_PTR_1126aff40);
    func_0x000107c61174(puVar6);
    func_0x000107c46e34(puVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar2);
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 1013827fc; end: 1013827ff;  */

void FUN_1013827fc(void)

{
  return;
}



/* Entry: 101382800; end: 101382c8b;  */

undefined * FUN_101382800(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_101382c8c;
  uStack_60 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100b61264;
  puStack_70 = &UNK_1103a9180;
  ppuVar1 = &puStack_88;
  uVar3 = param_2;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    uVar3 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010ef39850);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar6 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c451ac(puVar5);
    func_0x000107c61180();
  }
  else {
    puVar4 = param_1;
    func_0x00010011df08();
    func_0x000107c61180();
    uVar2 = uVar3;
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c5faec();
      uVar2 = uVar3;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    puStack_88 = (undefined *)0x0;
    func_0x000107c5e908(param_2);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puStack_88;
    uVar3 = param_2;
    func_0x000107c5faec(param_2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    if (puVar4 == (undefined *)0x0) {
      puStack_88 = (undefined *)0x2f2f3a656c6966;
      uStack_80 = 0xe700000000000000;
      func_0x000107c5fb78(uVar3,uVar2);
      func_0x000107c6142c(uVar2);
      uVar3 = uStack_80;
      puVar5 = puStack_88;
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c610f8();
      uVar2 = uVar3;
      func_0x000107c5fadc(puVar5,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c48af4();
      func_0x000107c61170(puVar5);
      if (puVar7 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126aff28;
        func_0x000107c61168(PTR_PTR_1126aff28);
        func_0x000107c3f1d4();
        func_0x000107c61180();
        lVar8 = param_4;
        func_0x000107c45214();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar2);
        }
        lVar9 = param_4;
        func_0x000107c45218(param_4);
        func_0x000107c61180();
        func_0x000107c5d060(param_4);
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126aff40;
        func_0x000107c610f8(PTR_PTR_1126aff40);
        func_0x000107c61174(puVar4);
        func_0x000107c46e34(puVar6);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(param_4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar8);
        puVar5 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        func_0x000107c451b0();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar7);
        goto LAB_101382c40;
      }
    }
    else {
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(uVar2);
    }
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar2 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar3 = 0xd00000000000004d;
    func_0x000107c5fadc(0xd00000000000004d,0x800000010ef39870);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    puVar6 = puVar7;
    func_0x000107c5ed2c(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c451ac(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = param_1;
  }
LAB_101382c40:
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  return puVar6;
}



/* Entry: 101382c8c; end: 101382c8f;  */

void FUN_101382c8c(void)

{
  return;
}



/* Entry: 101382c90; end: 101382ce7;  */

void FUN_101382c90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101382ce8; end: 101382e47;  */

void FUN_101382ce8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010518dd04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101382e48);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    pcVar4 = "presentErrorMessage(message:)";
    func_0x0001000c10c0("presentErrorMessage(message:)");
    func_0x000107c61180();
    puVar5 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    func_0x000107c613fc(param_2,0x28,7);
    *(undefined **)(param_2 + 0x10) = puVar5;
    *(long *)(param_2 + 0x18) = lVar3;
    *(undefined1 **)(param_2 + 0x20) = puVar7;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar6 = &puStack_98;
    uStack_80 = param_4;
    uStack_78 = param_3;
    lStack_70 = param_2;
    func_0x000107c60bc4(ppuVar6);
    lVar2 = lStack_70;
    func_0x000107c61434(puVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar7);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 101382e48; end: 1013830c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101382e48(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c5b1d0();
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5b198(param_1);
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar3);
      func_0x000107c61170(puVar7);
      uVar4 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010ef39750);
      uVar8 = *(undefined8 *)(param_3 + _DAT_112d76bf0);
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_3);
      puVar5 = &UNK_1103a8c40;
      func_0x000107c613fc(&UNK_1103a8c40,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar7;
      *(long *)(puVar5 + 0x18) = param_1;
      pcStack_88 = FUN_101385528;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1013838b0;
      puStack_90 = &UNK_1103a8c58;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4();
      puVar7 = puStack_80;
      func_0x000107c615f0(param_1);
      func_0x000107c61174();
      func_0x000107c61574(puVar7);
      func_0x000107c4228c(param_4);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar8);
    }
    else {
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_3);
      func_0x000107c6157c(puVar7);
      func_0x000101381968(FUN_1013854f8,puVar7);
      func_0x000107c61170(param_3);
      func_0x000107c61578(puVar7,2);
    }
  }
  return;
}



/* Entry: 1013830c8; end: 1013831bb;  */

void FUN_1013830c8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    puVar1 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_4);
    if ((param_1 & 1) == 0) {
      func_0x000107c6157c(puVar1);
      func_0x000101381968(FUN_101385530,puVar1);
      puVar2 = puVar1;
    }
    else {
      puVar2 = &UNK_1103a8c90;
      func_0x000107c613fc(&UNK_1103a8c90,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_5;
      func_0x000107c6157c(puVar1);
      func_0x000107c615f0(param_5);
      func_0x000101381968(FUN_10138558c,puVar2);
    }
    func_0x000107c61170(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1013831bc; end: 10138332f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013831bc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d76c08);
    *(undefined8 *)(param_1 + _DAT_112d76c08) = 0;
    func_0x000107c61170();
    func_0x00010518dd04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101383330);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    pcVar4 = "presentErrorMessage(message:)";
    func_0x0001000c10c0("presentErrorMessage(message:)");
    func_0x000107c61180();
    puVar5 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    func_0x000107c613fc(param_2,0x28,7);
    *(undefined **)(param_2 + 0x10) = puVar5;
    *(long *)(param_2 + 0x18) = lVar3;
    *(undefined1 **)(param_2 + 0x20) = puVar7;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar6 = &puStack_98;
    uStack_80 = param_4;
    uStack_78 = param_3;
    lStack_70 = param_2;
    func_0x000107c60bc4(ppuVar6);
    lVar2 = lStack_70;
    func_0x000107c61434(puVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar7);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 101383330; end: 1013833cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101383330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d76c08);
    *(undefined8 *)(param_1 + _DAT_112d76c08) = 0;
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d76c18);
    *(undefined8 *)(param_1 + _DAT_112d76c18) = param_2;
    func_0x000107c615e8(uVar1);
    func_0x000107c615f0(param_2);
    func_0x000107c5b198();
    func_0x000107c61180();
    FUN_1013833d0();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013833d0; end: 1013838af;  */

/* WARNING: Possible PIC construction at 0x000101383614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138373c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138385c) */
/* WARNING: Removing unreachable block (ram,0x000101383844) */
/* WARNING: Removing unreachable block (ram,0x000101383618) */
/* WARNING: Removing unreachable block (ram,0x000101383740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013833d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  pcVar2 = *(char **)(unaff_x20 + _DAT_112d76c88);
  func_0x000107c4cc34();
  func_0x000107c61180();
  if (pcVar2 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10138387c);
    (*pcVar1)();
  }
  pcVar3 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (pcVar3 == (char *)0x0) {
    func_0x00010518dd04();
    func_0x000107c61180();
    if (pcVar2 == (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101383880);
      (*pcVar1)();
    }
    pcVar6 = pcVar2;
    func_0x000107c5faec();
    func_0x000107c61170(pcVar2);
    pcVar3 = "presentErrorMessage(message:)";
    func_0x0001000c10c0("presentErrorMessage(message:)");
    func_0x000107c61180();
    puVar7 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_1103a8cb8;
    func_0x000107c613fc(&UNK_1103a8cb8,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(char **)(puVar8 + 0x18) = pcVar6;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    uStack_60 = 0x101385bb0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103a8cd0;
    ppuVar9 = &puStack_80;
    puStack_58 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c6142c(param_2);
  }
  else {
    pcVar2 = pcVar3;
    func_0x000107c3ece4();
    func_0x000107c61180();
    if (pcVar2 == (char *)0x0) {
      func_0x00010518dd04();
      func_0x000107c61180();
      if (pcVar2 == (char *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101383884);
        (*pcVar1)();
      }
      pcVar6 = pcVar2;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar2);
      pcVar2 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = &UNK_1103a8d08;
      func_0x000107c613fc(&UNK_1103a8d08,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(char **)(puVar8 + 0x18) = pcVar6;
      *(undefined8 *)(puVar8 + 0x20) = param_2;
      uStack_60 = 0x101385bb4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1103a8d20;
      ppuVar9 = &puStack_80;
      puStack_58 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_58;
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar9);
    }
    else {
      lVar11 = *(long *)(unaff_x20 + _DAT_112d76c28);
      lVar4 = lVar11;
      func_0x000107c4f090();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x00010518dd04();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101383888);
          (*pcVar1)();
        }
        lVar11 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        pcVar2 = "presentErrorMessage(message:)";
        func_0x0001000c10c0("presentErrorMessage(message:)");
        func_0x000107c61180();
        puVar7 = &UNK_1103a89a8;
        func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar8 = &UNK_1103a8d58;
        func_0x000107c613fc(&UNK_1103a8d58,0x28,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(long *)(puVar8 + 0x18) = lVar11;
        *(undefined8 *)(puVar8 + 0x20) = param_2;
        uStack_60 = 0x101385bb8;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1103a8d70;
        ppuVar9 = &puStack_80;
        puStack_58 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar7 = puStack_58;
        func_0x000107c61434(param_2);
        func_0x000107c61574(puVar7);
        func_0x000107c4e524(pcVar2);
        func_0x000107c60bd0(ppuVar9);
      }
      else {
        func_0x000107c61174();
        lVar10 = lVar4;
        while( true ) {
          lVar5 = lVar10;
          func_0x000107c4f078();
          func_0x000107c61180();
          if (lVar5 == 0) break;
          func_0x000107c61170();
          lVar5 = lVar10;
          func_0x000107c4f078();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c61170(lVar10);
            lVar10 = lVar5;
          }
        }
        func_0x000107c61170(lVar4);
        func_0x000107c5df20();
        if (2 < (uint)lVar11) {
          func_0x000101385594(0);
          puStack_80 = (undefined *)CONCAT44(puStack_80._4_4_,(uint)lVar11);
          func_0x000107c60614();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013838b0);
          (*pcVar1)();
        }
        func_0x000107c4efc4(pcVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 1013838b0; end: 101383983;  */

void FUN_1013838b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101383984; end: 101383bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101383984(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d76c60) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef39ac0);
    lVar4 = lVar2;
    func_0x000107c4e60c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae728;
    func_0x000107c61168(PTR_PTR_1126ae728);
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d76bd8);
    func_0x000107c5fadc(uVar3,((undefined8 *)(unaff_x20 + _DAT_112d76bd8))[1]);
    puVar6 = puVar5;
    func_0x000107c545b8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d76be0);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d76be0))[1];
    uVar7 = uVar3;
    func_0x000107c5fadc(uVar3,uVar1);
    puVar6 = puVar5;
    func_0x000107c57df8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c57f3c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c59d5c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    lVar8 = *(long *)(unaff_x20 + _DAT_112d76c68);
    func_0x000107c44588();
    func_0x000107c61180();
    lVar2 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c4c1b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 101383bc8; end: 1013842a7;  */

/* WARNING: Possible PIC construction at 0x000101383c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101383fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101384054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138409c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013840ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013840d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013840e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013840f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101384114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013841a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101384218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138425c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101384250) */
/* WARNING: Removing unreachable block (ram,0x00010138421c) */
/* WARNING: Removing unreachable block (ram,0x0001013841a4) */
/* WARNING: Removing unreachable block (ram,0x000101384118) */
/* WARNING: Removing unreachable block (ram,0x0001013840f8) */
/* WARNING: Removing unreachable block (ram,0x0001013840e8) */
/* WARNING: Removing unreachable block (ram,0x0001013840d8) */
/* WARNING: Removing unreachable block (ram,0x0001013840b0) */
/* WARNING: Removing unreachable block (ram,0x0001013840a0) */
/* WARNING: Removing unreachable block (ram,0x000101384058) */
/* WARNING: Removing unreachable block (ram,0x000101383fb0) */
/* WARNING: Removing unreachable block (ram,0x000101384124) */
/* WARNING: Removing unreachable block (ram,0x000101384128) */
/* WARNING: Removing unreachable block (ram,0x000101383fbc) */
/* WARNING: Removing unreachable block (ram,0x000101384134) */
/* WARNING: Removing unreachable block (ram,0x000101383fc4) */
/* WARNING: Removing unreachable block (ram,0x000101384288) */
/* WARNING: Removing unreachable block (ram,0x000101383fcc) */
/* WARNING: Removing unreachable block (ram,0x000101384298) */
/* WARNING: Removing unreachable block (ram,0x000101383fd4) */
/* WARNING: Removing unreachable block (ram,0x000101383fdc) */
/* WARNING: Removing unreachable block (ram,0x000101383ff4) */
/* WARNING: Removing unreachable block (ram,0x000101384108) */
/* WARNING: Removing unreachable block (ram,0x00010138411c) */
/* WARNING: Removing unreachable block (ram,0x000101384008) */
/* WARNING: Removing unreachable block (ram,0x000101384018) */
/* WARNING: Removing unreachable block (ram,0x000101384110) */
/* WARNING: Removing unreachable block (ram,0x00010138402c) */
/* WARNING: Removing unreachable block (ram,0x0001013842a4) */
/* WARNING: Removing unreachable block (ram,0x000101384044) */
/* WARNING: Removing unreachable block (ram,0x000101383f28) */
/* WARNING: Removing unreachable block (ram,0x000101383f18) */
/* WARNING: Removing unreachable block (ram,0x000101383ee0) */
/* WARNING: Removing unreachable block (ram,0x000101383d7c) */
/* WARNING: Removing unreachable block (ram,0x000101383da8) */
/* WARNING: Removing unreachable block (ram,0x000101383dac) */
/* WARNING: Removing unreachable block (ram,0x000101383cd8) */
/* WARNING: Removing unreachable block (ram,0x000101383d98) */
/* WARNING: Removing unreachable block (ram,0x000101383c60) */
/* WARNING: Removing unreachable block (ram,0x000101384260) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Removing unreachable block (ram,0x000101383e14) */

void FUN_101383bc8(long param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_78 [3];
  
  if (param_3 == 0) {
    if (param_2 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126a6be0);
      FUN_100de78a0(param_1,param_2);
      FUN_101385934(param_1,param_2);
      lVar2 = param_1;
      func_0x000107c40e20();
      if (lVar2 == 0) {
        alStack_78[0] = 0;
        alStack_78[1] = 0xe000000000000000;
        func_0x000107c602fc(0x52);
        func_0x000107c5fb78(0xd000000000000050,0x800000010ef39a10);
        func_0x000107c417f0(param_1);
        func_0x000107c61180();
        func_0x000107c5faec();
      }
      else {
        func_0x000107c40e1c();
        func_0x000107c61180();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013842a0);
          (*pcVar1)();
        }
        alStack_78[0] = 0;
        uVar3 = 0;
        FUN_1013859f4(0,0x112d76778,&PTR_PTR_1126b0cb8);
        func_0x000107c5fc4c(param_1,alStack_78,uVar3);
        if (alStack_78[0] == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013842a4);
          (*pcVar1)();
        }
      }
    }
    else {
      param_1 = 0x6574616c706d6574;
      func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
      func_0x000107c5fadc(0xd00000000000004e,0x800000010ef39970);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
    }
  }
  else {
    alStack_78[0] = 0;
    alStack_78[1] = 0xe000000000000000;
    func_0x000107c602fc(0x51);
    func_0x000107c5fb78(0xd00000000000004f,0x800000010ef39a70);
    func_0x000107c4cd90(param_3);
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013842a8; end: 1013844e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013842a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  func_0x000107c5c7e0();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000101e37aa4();
  func_0x000107c61170(param_1);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar2 + 0x10);
    if (lVar8 == 0) {
      func_0x000107c6142c(lVar2);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x0001013851b8(0,lVar8,0);
      lVar9 = lVar2 + 0x30;
      do {
        uVar6 = *(ulong *)(lVar9 + -8);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013844e4);
          (*pcVar1)();
        }
        puVar7 = PTR_PTR_1126a6bc8;
        func_0x000107c610f8();
        func_0x000107c474ec((double)uVar6);
        uVar6 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar6) {
          func_0x0001013851b8(1 < *(ulong *)(puVar5 + 0x18),uVar6 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar6 + 1;
        *(undefined **)(puVar5 + uVar6 * 8 + 0x20) = puVar7;
        lVar9 = lVar9 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      func_0x000107c6142c(lVar2);
    }
    puVar7 = PTR_PTR_1126a6bd0;
    func_0x000107c610f8(PTR_PTR_1126a6bd0);
    uVar3 = 0;
    FUN_1013859f4(0,0x112d76cd0,&PTR_PTR_1126a6bc8);
    puVar4 = puVar5;
    func_0x000107c5fc48(puVar5,uVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c48710(puVar7);
    func_0x000107c61170(puVar4);
    lVar8 = *(long *)(unaff_x20 + _DAT_112d76c48);
    func_0x000107c42bc4();
    func_0x000107c61180();
    lVar2 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar2 != 0) {
      func_0x000107c4a5c0(lVar2);
      func_0x000107c615e8(lVar2);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c57ce0(puVar7);
    func_0x000107c61170(puVar5);
  }
  return puVar7;
}



/* Entry: 1013844e4; end: 10138478b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013844e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar10 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar10,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d76c28);
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x00010518dd04();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10138478c);
        (*pcVar1)();
      }
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_1);
      puVar8 = &UNK_1103a93c0;
      func_0x000107c613fc(&UNK_1103a93c0,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar5;
      *(undefined1 **)(puVar8 + 0x20) = puVar10;
      uStack_68 = 0x101385be4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a93d8;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_60;
      func_0x000107c61434(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar10);
      func_0x000107c615e8(pcVar6);
    }
    else {
      func_0x000107c61174();
      lVar5 = lVar2;
      while( true ) {
        lVar3 = lVar5;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar3 == 0) break;
        func_0x000107c61170();
        lVar3 = lVar5;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar3;
        }
      }
      func_0x000107c61170(lVar2);
      puVar7 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c48080();
      uVar11 = *(undefined8 *)(param_1 + _DAT_112d76c38);
      puVar8 = PTR_PTR_1126aff78;
      func_0x000107c61168(PTR_PTR_1126aff78);
      func_0x000107c61174(uVar11);
      func_0x000107c61174(puVar7);
      func_0x000107c41548(puVar8);
      func_0x000107c61180();
      puVar4 = puVar7;
      func_0x000103b95ba4(puVar7,param_2,puVar8);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d76c30));
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar4);
    }
  }
  return;
}



/* Entry: 10138478c; end: 101384ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138478c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar13 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar13,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d76c28);
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x00010518dd04();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101384ba8);
        (*pcVar1)();
      }
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_1);
      puVar8 = &UNK_1103a91b8;
      func_0x000107c613fc(&UNK_1103a91b8,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar5;
      *(undefined1 **)(puVar8 + 0x20) = puVar13;
      pcStack_88 = (code *)0x101385bd0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1103a91d0;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_80;
      func_0x000107c61434(puVar13);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar13);
      func_0x000107c615e8(pcVar6);
    }
    else {
      func_0x000107c61174();
      lVar5 = lVar2;
      while( true ) {
        lVar3 = lVar5;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar3 == 0) break;
        func_0x000107c61170();
        lVar3 = lVar5;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar3;
        }
      }
      func_0x000107c61170(lVar2);
      puVar7 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      lVar3 = *(long *)(param_1 + _DAT_112d76c58);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar5);
      }
      else {
        lVar3 = lVar2;
        func_0x000107c4c1e0();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x00010518dd34();
        func_0x000107c61180();
        if (lVar4 == 0) {
          lVar12 = 0;
          puVar13 = (undefined1 *)0x0;
        }
        else {
          lVar12 = lVar4;
          func_0x000107c5faec();
          func_0x000107c61170();
        }
        func_0x00010518dd4c();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101384ba4);
          (*pcVar1)();
        }
        if (puVar13 == (undefined1 *)0x0) {
          lVar12 = 0;
        }
        else {
          func_0x000107c5fadc(lVar12,puVar13);
          func_0x000107c6142c(puVar13);
        }
        puVar10 = PTR_PTR_1126b30b0;
        func_0x000107c610f8(PTR_PTR_1126b30b0);
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c48da8(puVar10);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar4);
        uVar11 = *(undefined8 *)(param_1 + _DAT_112d76c20);
        *(long *)(param_1 + _DAT_112d76c20) = lVar3;
        func_0x000107c615f0(lVar3);
        func_0x000107c615e8(uVar11);
        puVar8 = &UNK_1103a89a8;
        func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,param_1);
        pcStack_88 = FUN_1013856ac;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100288f10;
        puStack_90 = &UNK_1103a91f8;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        func_0x000107c4ee9c(lVar3);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar3);
        puVar7 = puVar10;
      }
      func_0x000107c61170(puVar7);
    }
  }
  return;
}



/* Entry: 101384ba8; end: 101384c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101384ba8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d76c20);
    *(undefined8 *)(param_2 + _DAT_112d76c20) = 0;
    func_0x000107c61170();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101384c08; end: 101384c67; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint init] */

void FUN_101384c08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UseTemplateFlowFeature.UseTemplateFlowFeatureEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101384c34);
  (*pcVar1)();
}



/* Entry: 101384c68; end: 101384e1b; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101384dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101384df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101384dd4) */
/* WARNING: Removing unreachable block (ram,0x000101384df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101384c68(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d76bd8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d76be0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d76be8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76c98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d76c00));
  return;
}



/* Entry: 101384e1c; end: 101384e4f;  */

void FUN_101384e1c(void)

{
  return;
}



/* Entry: 101384e50; end: 101384f3b; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint memoriesPickerV2DidSelectItemsWithMediaSegments:] */

/* WARNING: Possible PIC construction at 0x000101384f14: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101384e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d74dc8;
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar3 = *(long *)(param_1 + _DAT_112d76bf8);
  if (lVar3 == 0) {
    func_0x000107c61174();
    func_0x00010518dd04();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101384f3c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    param_3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_10137ff08(lVar3,param_3);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar3);
    FUN_101380af8();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101384f3c; end: 101384fc7;  */

/* WARNING: Possible PIC construction at 0x000101384f7c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101384f3c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d76c30);
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d76c28);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5d89c();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101384fc8; end: 101384fef; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint memoriesPickerV2DidDismiss] */

void FUN_101384fc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101384f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101384ff0; end: 10138501f; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint progressOverlayScopeDidCancel:] */

void FUN_101384ff0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101381968(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101385020; end: 101385037; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint didCancelFromPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385020(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d76c18);
  *(undefined8 *)(param_1 + _DAT_112d76c18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}


