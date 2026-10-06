/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101352cb0; end: 101352d33; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101352cb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x00010135350c();
  puVar1 = PTR_s_loadView_112604be0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  FUN_101352e68();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d75170);
  func_0x000107c61174(uVar3);
  func_0x000107c5a568(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101352d34; end: 101352dcf; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101352d34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010135350c();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51750();
  func_0x000107c61170(puVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112d75168);
  *puVar1 = puVar4;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101352dd0; end: 101352e43; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController viewDidAppear:] */

void FUN_101352dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010135350c();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c56a18(param_1);
  FUN_1013531b8(0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101352e44; end: 101352e67;  */

void FUN_101352e44(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 101352e68; end: 1013531b7;  */

/* WARNING: Possible PIC construction at 0x000101352ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101352fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101352fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101352fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101352ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013530a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013530a4) */
/* WARNING: Removing unreachable block (ram,0x000101353184) */
/* WARNING: Removing unreachable block (ram,0x0001013530d4) */
/* WARNING: Removing unreachable block (ram,0x000101353064) */
/* WARNING: Removing unreachable block (ram,0x000101353038) */
/* WARNING: Removing unreachable block (ram,0x000101353024) */
/* WARNING: Removing unreachable block (ram,0x000101352ff8) */
/* WARNING: Removing unreachable block (ram,0x000101352fe4) */
/* WARNING: Removing unreachable block (ram,0x000101352fb8) */
/* WARNING: Removing unreachable block (ram,0x000101352fa4) */
/* WARNING: Removing unreachable block (ram,0x000101352ef4) */
/* WARNING: Removing unreachable block (ram,0x000101353194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101352e68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d75170) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d75150);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d75150))[1];
  puVar2 = PTR_PTR_1126a6b40;
  func_0x000107c610f8(PTR_PTR_1126a6b40);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c49428(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1013531b8; end: 10135339b;  */

/* WARNING: Possible PIC construction at 0x000101353314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101353344) */
/* WARNING: Removing unreachable block (ram,0x000101353318) */
/* WARNING: Removing unreachable block (ram,0x000101353358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013531b8(double param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_112d75178) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112d75178) = 0;
    if (param_1 <= 0.0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d75170);
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c5def8();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c5db08();
          func_0x000107c61180();
          lVar4 = lVar5;
          if (lVar5 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(param_3);
            lVar4 = lVar5;
          }
          func_0x000107c610f8(PTR_PTR_1126a6b40);
          func_0x000107c49428();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar4);
        return;
      }
    }
    else {
      pcVar1 = "setTextViewFocusedAfterDelay(_:)";
      func_0x0001000c10c0("setTextViewFocusedAfterDelay(_:)");
      func_0x000107c61180();
      puVar2 = &UNK_1103a62b0;
      func_0x000107c613fc(&UNK_1103a62b0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_50 = FUN_101354504;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1103a62c8;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c4e528(param_1,pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 10135339c; end: 1013534df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135339c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar5 = *(undefined **)(param_1 + _DAT_112d75170);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61174();
      puVar1 = puVar5;
      func_0x000107c5def8();
      func_0x000107c61180();
      puVar3 = puVar5;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar2 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar4);
        }
        puVar3 = PTR_PTR_1126a6b40;
        func_0x000107c610f8(PTR_PTR_1126a6b40);
        func_0x000107c49428();
        func_0x000107c61170(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c59ca4(puVar3);
        func_0x000107c61170(puVar2);
        func_0x000107c61174(puVar3);
        func_0x000107c5a588(puVar5);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar3);
      }
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1013534e0; end: 10135352b; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController initWithNibName:bundle:] */

void FUN_1013534e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapTextEditorImpl.SnapTextEditorViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10135350c);
  (*pcVar1)();
}



/* Entry: 10135352c; end: 10135353b; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10135352c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d75180);
}



/* Entry: 10135353c; end: 10135353f; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController cardToExpandTransition] */

void FUN_10135353c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101353540; end: 10135354b; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController cardTransitionWillBeginWithView:] */

void FUN_101353540(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10135354c; end: 10135359f; -[_TtC20SCSnapTextEditorImpl28SnapTextEditorViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x000101353588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135358c) */

void FUN_10135354c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001013543a8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013535a0; end: 1013535a3; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didTapLocationPickerButton] */

void FUN_1013535a0(void)

{
  return;
}



/* Entry: 1013535a4; end: 10135373b;  */

/* WARNING: Possible PIC construction at 0x0001013536a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013536e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013536a8) */
/* WARNING: Removing unreachable block (ram,0x0001013536ec) */
/* WARNING: Removing unreachable block (ram,0x0001013536d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013535a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d751d0;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112d750c8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aff58;
    func_0x000107c610f8(PTR_PTR_1126aff58);
    func_0x000107c48080();
    puVar4 = PTR_PTR_1126b3008;
    func_0x000107c610f8(PTR_PTR_1126b3008);
    func_0x000107c61174(puVar3);
    func_0x000107c488e8(puVar4,param_2,0x51,0,0);
    puVar5 = PTR_PTR_1126c47c8;
    func_0x000107c610f8(PTR_PTR_1126c47c8);
    func_0x000107c488b4();
    puVar6 = PTR_PTR_1126c47d0;
    func_0x000107c610f8(PTR_PTR_1126c47d0);
    func_0x000107c615f0(lVar1);
    func_0x000107c48f34(puVar6,param_2,puVar3,lVar1,0,puVar4,1,puVar5);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10135373c; end: 101353763; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didTapMusicPickerButton] */

void FUN_10135373c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013535a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101353764; end: 1013537bf; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didTapMemoriesPickerButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101353764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d751d0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_101350d10();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013537c0; end: 1013538f3;  */

/* WARNING: Possible PIC construction at 0x0001013538d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013538d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013537c0(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = unaff_x20 + _DAT_112d751d0;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(lVar1 + _DAT_112d750e0) & 1) == 0) {
    *(undefined1 *)(lVar1 + _DAT_112d750e0) = 1;
    FUN_101350204(0x44524143534944,0xe700000000000000);
    pcVar2 = "dismissSnapEditor(with:)";
    func_0x0001000c10c0("dismissSnapEditor(with:)");
    func_0x000107c61180();
    puVar3 = &UNK_1103a61e8;
    func_0x000107c613fc(&UNK_1103a61e8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    pcStack_40 = FUN_101354210;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1103a6200;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1013538f4; end: 10135391b; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didTapCloseButton] */

void FUN_1013538f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013537c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10135391c; end: 101353953; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didRemoveBackgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135391c(long param_1)

{
  param_1 = param_1 + _DAT_112d751d0;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112d750d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 101353954; end: 101353ad7;  */

/* WARNING: Possible PIC construction at 0x0001013539e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101353a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101353a74) */
/* WARNING: Removing unreachable block (ram,0x0001013539ec) */
/* WARNING: Removing unreachable block (ram,0x000101353a88) */
/* WARNING: Removing unreachable block (ram,0x0001013539fc) */
/* WARNING: Removing unreachable block (ram,0x000101353a80) */
/* WARNING: Removing unreachable block (ram,0x000101353a10) */
/* WARNING: Removing unreachable block (ram,0x000101353aa8) */
/* WARNING: Removing unreachable block (ram,0x000101353ab4) */
/* WARNING: Removing unreachable block (ram,0x000101353a4c) */
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
/* WARNING: Removing unreachable block (ram,0x000101353abc) */

void FUN_101353954(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  func_0x000107c5ee08(param_1,param_2,1);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c4635c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101353ad8; end: 101353b8b; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler didTapSendButtonWithSnapshotBase64:completion:] */

void FUN_101353ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1103a6238;
    func_0x000107c613fc(&UNK_1103a6238,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x101354234;
  }
  func_0x000107c61174(param_1);
  FUN_101353954(param_3,param_2,uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101353b8c; end: 101353bd3; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler onSwipeToDismissEnabledChangeWithEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101353b8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  param_1 = param_1 + _DAT_112d751c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112d75180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 101353bd4; end: 101353c3f; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101353bd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112d751c8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = param_1 + _DAT_112d751d0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  FUN_101353ca8();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101353c40; end: 101353c6f;  */

void FUN_101353c40(void)

{
  FUN_101353ca8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101353c70; end: 101353ca7; -[_TtC20SCSnapTextEditorImpl27SnapTextEditorActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101353c70(long param_1)

{
  FUN_100cadb9c(param_1 + _DAT_112d751c8);
  param_1 = param_1 + _DAT_112d751d0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101353ca8; end: 101353cc7;  */

void FUN_101353ca8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ca7f8);
  return;
}



/* Entry: 101353cc8; end: 10135420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101353cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar3 = 0x17;
  func_0x000107c3116c();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135420c);
    (*pcVar2)();
  }
  uVar13 = *(undefined8 *)(param_7 + _DAT_112d75080);
  puVar4 = PTR_PTR_1126afee0;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar13);
  func_0x000107c46120();
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(lVar3);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c59184(puVar4);
    func_0x000107c54d18(puVar4);
    func_0x000107c56498(puVar4);
    func_0x000107c5b078(param_3);
    uVar13 = param_1;
    func_0x000107c51820(param_3);
    func_0x000107c308b0(param_1,param_2,uVar13);
    func_0x000107c56484(puVar4);
    func_0x000107c5b078(param_3);
    func_0x000107c308b4();
    func_0x000107c563f0(puVar4);
    uVar13 = *(undefined8 *)(param_7 + _DAT_112d750b8);
    func_0x000107c5fadc(uVar13,((undefined8 *)(param_7 + _DAT_112d750b8))[1]);
    func_0x000107c59474(puVar4);
    func_0x000107c61170(uVar13);
    func_0x000107c5947c(puVar4);
    func_0x000107c59428(puVar4);
    func_0x000107c5304c(puVar4);
    uVar5 = *(undefined8 *)(param_7 + _DAT_112d75078);
    func_0x000107c4f124(uVar5);
    func_0x000107c61180();
    uVar13 = uVar5;
    func_0x000107c44080();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c549c8(puVar4);
    func_0x000107c615e8(uVar13);
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar13 = 0x30;
    lVar8 = lVar3;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    lVar6 = 0x17;
    func_0x000107c3116c();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101354210);
      (*pcVar2)();
    }
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    *(long *)(lVar8 + 0x20) = lVar7;
    *(undefined8 *)(lVar8 + 0x28) = uVar13;
    lVar6 = lVar8;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(lVar8);
    func_0x000107c61574(lVar8);
    func_0x000107c521ec(puVar4);
    func_0x000107c61170(lVar6);
    FUN_1013506e4();
    puVar12 = puVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    func_0x000107c54060(puVar4);
    func_0x000107c61170(lVar6);
    lVar8 = 0x17;
    func_0x000107c3116c();
    func_0x000107c61180();
    if (lVar8 == 0) {
      lVar3 = 0;
    }
    else {
      lVar6 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      func_0x000107c613fc(lVar3,0x30,7);
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(long *)(lVar3 + 0x20) = lVar6;
      *(undefined **)(lVar3 + 0x28) = puVar12;
      lVar8 = lVar3;
      if (*(char *)(param_7 + _DAT_112d750d8) == '\x01') {
        lVar8 = 1;
        func_0x0001000d182c(1,2,1,lVar3);
        *(undefined8 *)(lVar8 + 0x10) = 2;
        *(undefined8 *)(lVar8 + 0x30) = 0x525f4152454d4143;
        *(undefined8 *)(lVar8 + 0x38) = 0xeb000000004c4c4f;
      }
      lVar3 = lVar8;
      func_0x000107c5fc48(lVar8,PTR___sSSN_11034da80);
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c56490(puVar4);
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(param_7 + _DAT_112d750e8);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_10135450c(0,0x112d60fb0,&PTR_PTR_1126b3568);
      lVar8 = lVar3;
      func_0x000107c61434(lVar3);
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c576e8(puVar4);
    func_0x000107c61170(lVar8);
    func_0x000107c5919c(puVar4);
    func_0x000107c3fe58(puVar4);
    uVar13 = *(undefined8 *)(param_7 + _DAT_112d75060);
    func_0x000107c42d48(uVar13);
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    func_0x000107c5d19c();
    func_0x000107c61180();
    uVar10 = uVar13;
    func_0x000107c42424(uVar13);
    func_0x000107c61180();
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar9);
    uVar11 = *(undefined8 *)(param_7 + _DAT_112d750b0);
    func_0x000107c3ed40(uVar11);
    func_0x000107c61180();
    puVar1 = (undefined8 *)(param_7 + _DAT_112d750d0);
    uVar13 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = param_5;
    puVar1[1] = param_6;
    FUN_101237340(param_5,param_6);
    func_0x000101237350(uVar13,uVar5);
    lVar8 = *(long *)(param_7 + _DAT_112d750a8);
    lVar3 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    func_0x000107c42c1c(lVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 101354210; end: 101354247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354210(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(lVar4 + _DAT_112d75040);
  func_0x000107c5d17c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1103a5e08;
  func_0x000107c613fc(&UNK_1103a5e08,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar4);
  pcStack_40 = FUN_101351f60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1103a5e20;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 101354248; end: 101354503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354248(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar4 = unaff_x20 + _DAT_112d75158;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d75160) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d75170) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d75178) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112d75180) = 1;
  lVar2 = _DAT_112d75188;
  lVar4 = 0x112d75130;
  func_0x0001000285a8(0x112d75130,&UNK_10d935600);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _DAT_112d75190;
  func_0x000107c613fc(lVar4,*(undefined4 *)(lVar4 + 0x30),*(undefined2 *)(lVar4 + 0x34));
  uVar5 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar4 = _DAT_112d75198;
  func_0x0001000285a8(0x112d75138,&UNK_10d9356e0);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar5;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSnapTextEditorImpl/SnapTextEditorViewController.swift",0x37,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013543a8);
  (*pcVar3)();
}



/* Entry: 101354504; end: 10135450b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354504(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar6 = *(undefined **)(lVar1 + _DAT_112d75170);
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c61174();
      puVar2 = puVar6;
      func_0x000107c5def8();
      func_0x000107c61180();
      puVar4 = puVar6;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar5);
        }
        puVar4 = PTR_PTR_1126a6b40;
        func_0x000107c610f8(PTR_PTR_1126a6b40);
        func_0x000107c49428();
        func_0x000107c61170(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c59ca4(puVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61174(puVar4);
        func_0x000107c5a588(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10135450c; end: 10135454b;  */

void FUN_10135450c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10135454c; end: 10135456b;  */

void FUN_10135454c(long param_1,long param_2)

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



/* Entry: 10135456c; end: 101354633;  */

undefined1  [16] FUN_10135456c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6964656d5f646461;
  func_0x000107c5fadc(0x6964656d5f646461,0xe900000000000061);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef38660);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101354634);
  (*pcVar1)();
}



/* Entry: 101354634; end: 10135463f; -[SCSnapTextEditorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354634(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75200;
  func_0x000107c61428(param_1 + _DAT_112d75200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354640; end: 10135464b; -[SCSnapTextEditorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75200;
  func_0x000107c61428(param_1 + _DAT_112d75200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10135464c; end: 101354657; -[SCSnapTextEditorEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135464c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75208;
  func_0x000107c61428(param_1 + _DAT_112d75208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354658; end: 101354663; -[SCSnapTextEditorEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75208;
  func_0x000107c61428(param_1 + _DAT_112d75208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101354664; end: 10135466f; -[SCSnapTextEditorEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354664(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75210;
  func_0x000107c61428(param_1 + _DAT_112d75210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354670; end: 10135467b; -[SCSnapTextEditorEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75210;
  func_0x000107c61428(param_1 + _DAT_112d75210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10135467c; end: 101354687; -[SCSnapTextEditorEntryPoint snapDocManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135467c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75218;
  func_0x000107c61428(param_1 + _DAT_112d75218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354688; end: 101354693; -[SCSnapTextEditorEntryPoint setSnapDocManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354688(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75218;
  func_0x000107c61428(param_1 + _DAT_112d75218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101354694; end: 10135469f; -[SCSnapTextEditorEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354694(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75220;
  func_0x000107c61428(param_1 + _DAT_112d75220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013546a0; end: 1013546ab; -[SCSnapTextEditorEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75220;
  func_0x000107c61428(param_1 + _DAT_112d75220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013546ac; end: 1013546b7; -[SCSnapTextEditorEntryPoint snapDocSaveServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75228;
  func_0x000107c61428(param_1 + _DAT_112d75228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013546b8; end: 1013546c3; -[SCSnapTextEditorEntryPoint setSnapDocSaveServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75228;
  func_0x000107c61428(param_1 + _DAT_112d75228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013546c4; end: 1013546cf; -[SCSnapTextEditorEntryPoint snapDocSendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75230;
  func_0x000107c61428(param_1 + _DAT_112d75230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013546d0; end: 1013546db; -[SCSnapTextEditorEntryPoint setSnapDocSendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75230;
  func_0x000107c61428(param_1 + _DAT_112d75230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013546dc; end: 1013546e7; -[SCSnapTextEditorEntryPoint filterDataProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75238;
  func_0x000107c61428(param_1 + _DAT_112d75238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013546e8; end: 1013546f3; -[SCSnapTextEditorEntryPoint setFilterDataProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75238;
  func_0x000107c61428(param_1 + _DAT_112d75238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013546f4; end: 1013546ff; -[SCSnapTextEditorEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013546f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75240;
  func_0x000107c61428(param_1 + _DAT_112d75240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354700; end: 10135470b; -[SCSnapTextEditorEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75240;
  func_0x000107c61428(param_1 + _DAT_112d75240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10135470c; end: 101354717; -[SCSnapTextEditorEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135470c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75248;
  func_0x000107c61428(param_1 + _DAT_112d75248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354718; end: 101354723; -[SCSnapTextEditorEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75248;
  func_0x000107c61428(param_1 + _DAT_112d75248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101354724; end: 10135472f; -[SCSnapTextEditorEntryPoint memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75250;
  func_0x000107c61428(param_1 + _DAT_112d75250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354730; end: 10135473b; -[SCSnapTextEditorEntryPoint setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75250;
  func_0x000107c61428(param_1 + _DAT_112d75250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10135473c; end: 101354747; -[SCSnapTextEditorEntryPoint previewScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135473c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75258;
  func_0x000107c61428(param_1 + _DAT_112d75258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101354748; end: 10135478b;  */

void FUN_101354748(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10135478c; end: 101354797; -[SCSnapTextEditorEntryPoint setPreviewScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135478c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75258;
  func_0x000107c61428(param_1 + _DAT_112d75258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101354798; end: 1013547eb;  */

void FUN_101354798(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013547ec; end: 101354833; -[SCSnapTextEditorEntryPoint musicPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013547ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75260;
  func_0x000107c61428(param_1 + _DAT_112d75260,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101354834; end: 10135483f; -[SCSnapTextEditorEntryPoint setMusicPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354834(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75260;
  func_0x000107c61428(param_1 + _DAT_112d75260,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101354840; end: 101354887; -[SCSnapTextEditorEntryPoint memoriesPickerV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354840(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75268;
  func_0x000107c61428(param_1 + _DAT_112d75268,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101354888; end: 101354893; -[SCSnapTextEditorEntryPoint setMemoriesPickerV2ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75268;
  func_0x000107c61428(param_1 + _DAT_112d75268,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101354894; end: 1013548db; -[SCSnapTextEditorEntryPoint previewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d75270;
  func_0x000107c61428(param_1 + _DAT_112d75270,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013548dc; end: 1013548e7; -[SCSnapTextEditorEntryPoint setPreviewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013548dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75270;
  func_0x000107c61428(param_1 + _DAT_112d75270,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013548e8; end: 101354947;  */

void FUN_1013548e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101354948; end: 101355387;  */

/* WARNING: Possible PIC construction at 0x000101354e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101354fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013552e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013551c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013550c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013550d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013550e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013550a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013550b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101355028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135503c) */
/* WARNING: Removing unreachable block (ram,0x00010135505c) */
/* WARNING: Removing unreachable block (ram,0x00010135508c) */
/* WARNING: Removing unreachable block (ram,0x00010135507c) */
/* WARNING: Removing unreachable block (ram,0x0001013550bc) */
/* WARNING: Removing unreachable block (ram,0x0001013550ac) */
/* WARNING: Removing unreachable block (ram,0x00010135509c) */
/* WARNING: Removing unreachable block (ram,0x0001013550ec) */
/* WARNING: Removing unreachable block (ram,0x0001013550dc) */
/* WARNING: Removing unreachable block (ram,0x0001013550cc) */
/* WARNING: Removing unreachable block (ram,0x00010135512c) */
/* WARNING: Removing unreachable block (ram,0x00010135511c) */
/* WARNING: Removing unreachable block (ram,0x00010135510c) */
/* WARNING: Removing unreachable block (ram,0x00010135517c) */
/* WARNING: Removing unreachable block (ram,0x00010135516c) */
/* WARNING: Removing unreachable block (ram,0x00010135515c) */
/* WARNING: Removing unreachable block (ram,0x00010135514c) */
/* WARNING: Removing unreachable block (ram,0x0001013551cc) */
/* WARNING: Removing unreachable block (ram,0x0001013551bc) */
/* WARNING: Removing unreachable block (ram,0x0001013551ac) */
/* WARNING: Removing unreachable block (ram,0x00010135519c) */
/* WARNING: Removing unreachable block (ram,0x00010135518c) */
/* WARNING: Removing unreachable block (ram,0x00010135521c) */
/* WARNING: Removing unreachable block (ram,0x00010135520c) */
/* WARNING: Removing unreachable block (ram,0x0001013551fc) */
/* WARNING: Removing unreachable block (ram,0x0001013551ec) */
/* WARNING: Removing unreachable block (ram,0x0001013551dc) */
/* WARNING: Removing unreachable block (ram,0x00010135527c) */
/* WARNING: Removing unreachable block (ram,0x00010135526c) */
/* WARNING: Removing unreachable block (ram,0x00010135525c) */
/* WARNING: Removing unreachable block (ram,0x00010135524c) */
/* WARNING: Removing unreachable block (ram,0x00010135523c) */
/* WARNING: Removing unreachable block (ram,0x0001013552ec) */
/* WARNING: Removing unreachable block (ram,0x0001013552dc) */
/* WARNING: Removing unreachable block (ram,0x0001013552cc) */
/* WARNING: Removing unreachable block (ram,0x0001013552bc) */
/* WARNING: Removing unreachable block (ram,0x0001013552ac) */
/* WARNING: Removing unreachable block (ram,0x00010135529c) */
/* WARNING: Removing unreachable block (ram,0x00010135535c) */
/* WARNING: Removing unreachable block (ram,0x00010135534c) */
/* WARNING: Removing unreachable block (ram,0x00010135533c) */
/* WARNING: Removing unreachable block (ram,0x00010135532c) */
/* WARNING: Removing unreachable block (ram,0x00010135531c) */
/* WARNING: Removing unreachable block (ram,0x00010135530c) */
/* WARNING: Removing unreachable block (ram,0x0001013552fc) */
/* WARNING: Removing unreachable block (ram,0x000101354fe4) */
/* WARNING: Removing unreachable block (ram,0x000101354fd4) */
/* WARNING: Removing unreachable block (ram,0x000101354fc0) */
/* WARNING: Removing unreachable block (ram,0x000101354fb0) */
/* WARNING: Removing unreachable block (ram,0x000101354fa0) */
/* WARNING: Removing unreachable block (ram,0x000101354f90) */
/* WARNING: Removing unreachable block (ram,0x000101354f80) */
/* WARNING: Removing unreachable block (ram,0x000101354f70) */
/* WARNING: Removing unreachable block (ram,0x000101354f50) */
/* WARNING: Removing unreachable block (ram,0x000101354f38) */
/* WARNING: Removing unreachable block (ram,0x000101354f20) */
/* WARNING: Removing unreachable block (ram,0x000101354f08) */
/* WARNING: Removing unreachable block (ram,0x000101354eec) */
/* WARNING: Removing unreachable block (ram,0x000101354edc) */
/* WARNING: Removing unreachable block (ram,0x000101354ecc) */
/* WARNING: Removing unreachable block (ram,0x000101354ebc) */
/* WARNING: Removing unreachable block (ram,0x000101354e74) */
/* WARNING: Removing unreachable block (ram,0x00010135502c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101354948(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar15;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  puVar5 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = unaff_x20;
    func_0x000107c5d9b4();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = unaff_x20;
      func_0x000107c5b1d8();
      func_0x000107c61180();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = unaff_x20;
        func_0x000107c5b1bc();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c61170(puVar4);
          puVar4 = puVar5;
        }
        else {
          puVar9 = unaff_x20;
          func_0x000107c5b1ec();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
            func_0x000107c61170(puVar4);
            puVar4 = puVar5;
          }
          else {
            puVar10 = unaff_x20;
            func_0x000107c5b1f0();
            func_0x000107c61180();
            if (puVar10 != (undefined *)0x0) {
              puVar11 = unaff_x20;
              puStack_90 = puVar10;
              func_0x000107c434a8();
              func_0x000107c61180();
              if (puVar11 != (undefined *)0x0) {
                puVar10 = unaff_x20;
                puStack_98 = puVar11;
                func_0x000107c3fa0c();
                func_0x000107c61180();
                if (puVar10 == (undefined *)0x0) {
                  func_0x000107c61170(puVar4);
                  puVar4 = puVar5;
                }
                else {
                  puVar11 = unaff_x20;
                  puStack_a0 = puVar10;
                  func_0x000107c5d900();
                  func_0x000107c61180();
                  if (puVar11 == (undefined *)0x0) {
                    func_0x000107c61170(puVar4);
                    puVar4 = puVar5;
                  }
                  else {
                    puVar10 = unaff_x20;
                    puStack_a8 = puVar11;
                    func_0x000107c4d238();
                    func_0x000107c61180();
                    if (puVar10 != (undefined *)0x0) {
                      puVar11 = unaff_x20;
                      puStack_b0 = puVar10;
                      func_0x000107c4cc24();
                      func_0x000107c61180();
                      if (puVar11 != (undefined *)0x0) {
                        puVar10 = unaff_x20;
                        puStack_b8 = puVar11;
                        func_0x000107c4cc2c();
                        func_0x000107c61180();
                        if (puVar10 == (undefined *)0x0) {
                          func_0x000107c61170(puVar4);
                          puVar4 = puVar5;
                        }
                        else {
                          puVar11 = unaff_x20;
                          puStack_c0 = puVar10;
                          func_0x000107c4f188();
                          func_0x000107c61180();
                          if (puVar11 == (undefined *)0x0) {
                            func_0x000107c61170(puVar4);
                            puVar4 = puVar5;
                          }
                          else {
                            puStack_c8 = puVar11;
                            func_0x000107c4f184();
                            func_0x000107c61180();
                            if (unaff_x20 != (undefined *)0x0) {
                              uVar12 = 0;
                              puStack_d0 = unaff_x20;
                              FUN_10134fc08();
                              func_0x000107c613fc();
                              uStack_d8 = uVar12;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              puStack_e0 = puStack_c0;
                              func_0x000107c61174();
                              puStack_e8 = puStack_b8;
                              func_0x000107c61174();
                              puStack_f0 = puStack_b0;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              puStack_b0 = puStack_90;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              puStack_b8 = puVar7;
                              func_0x000107c61174();
                              puStack_c0 = puVar6;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c3fa04();
                              func_0x000107c61180();
                              if (puStack_a0 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                                pcVar2 = (code *)SoftwareBreakpoint(1,0x101355388);
                                (*pcVar2)();
                              }
                              uVar12 = *(undefined8 *)(puStack_a8 + _DAT_113083868);
                              lVar13 = 0;
                              puStack_90 = puStack_a0;
                              FUN_101350cf0();
                              lStack_f8 = lVar13;
                              func_0x000107c610f8();
                              uVar14 = 0;
                              func_0x000107c61614(lVar13 + _DAT_112d750c8);
                              puVar1 = (undefined8 *)(lVar13 + _DAT_112d750d0);
                              *puVar1 = 0;
                              puVar1[1] = 0;
                              *(undefined8 *)(lVar13 + _DAT_112d750e8) = 0;
                              *(undefined **)(lVar13 + _DAT_112d75040) = puVar4;
                              *(undefined **)(lVar13 + _DAT_112d75048) = puVar5;
                              *(undefined **)(lVar13 + _DAT_112d75050) = puStack_c0;
                              *(undefined **)(lVar13 + _DAT_112d75058) = puStack_b8;
                              *(undefined **)(lVar13 + _DAT_112d75060) = puVar8;
                              *(undefined **)(lVar13 + _DAT_112d75068) = puVar9;
                              *(undefined **)(lVar13 + _DAT_112d75070) = puStack_b0;
                              *(undefined **)(lVar13 + _DAT_112d75078) = puStack_98;
                              *(undefined **)(lVar13 + _DAT_112d75080) = puStack_90;
                              *(undefined8 *)(lVar13 + _DAT_112d75088) = uVar12;
                              *(undefined **)(lVar13 + _DAT_112d75090) = puStack_f0;
                              *(undefined **)(lVar13 + _DAT_112d75098) = puStack_e8;
                              *(undefined **)(lVar13 + _DAT_112d750a0) = puStack_e0;
                              *(undefined **)(lVar13 + _DAT_112d750a8) = puStack_c8;
                              *(undefined **)(lVar13 + _DAT_112d750b0) = puStack_d0;
                              func_0x000107c61174();
                              uStack_128 = uVar12;
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
                              uVar12 = uStack_128;
                              func_0x000107c61174();
                              uStack_120 = uVar12;
                              func_0x000107c615f0();
                              func_0x000107c5eec4(auStack_130 +
                                                  -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
                              puVar4 = puStack_90;
                              func_0x000107c5eeac();
                              (**(code **)(lVar15 + 8))
                                        (auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                                         lVar3);
                              puVar1 = (undefined8 *)(lVar13 + _DAT_112d750b8);
                              *puVar1 = puVar4;
                              puVar1[1] = uVar14;
                              puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
                              func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
                              func_0x000107c453e4();
                              func_0x000107c5c9e4();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101355388; end: 1013553af; -[SCSnapTextEditorEntryPoint begin] */

void FUN_101355388(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101354948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013553b0; end: 1013553f3; -[SCSnapTextEditorEntryPoint end] */

void FUN_1013553b0(undefined8 param_1)

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



/* Entry: 1013553f4; end: 101355ac7;  */

void FUN_1013553f4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar3 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar3 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (uVar2 = uVar3, func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef5f0)) ||
            (func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0),
            (uVar3 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a368();
    }
    else {
      uVar3 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e21d0)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef1de30,param_2,param_3,0),
         (uVar3 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59368();
      }
      else {
        uVar3 = 0xd000000000000015;
        if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e2010)) ||
           (func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0),
           (uVar3 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5935c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10c7980)) {
            uVar3 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef38680,param_2,param_3,0);
            if ((uVar3 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10c7be0)) {
                uVar3 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010ef38420,param_2,param_3,0);
                if ((uVar3 & 1) == 0) {
                  uVar3 = 0;
                  if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d7330)) ||
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010ef28cd0,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c549cc();
                  }
                  else {
                    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
                      uVar3 = 0;
                      func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = 0;
                        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610))
                           || (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,
                                                   param_3,0), (uVar3 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5a2fc();
                        }
                        else {
                          uVar3 = 0xd00000000000001d;
                          if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e5620))
                             || (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a9e0,param_2,
                                                     param_3,0), (uVar3 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c565a0();
                          }
                          else {
                            uVar3 = 0xd00000000000001b;
                            if (((param_2 == -0x2fffffffffffffe5) &&
                                (param_3 == -0x7ffffffef10d7310)) ||
                               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef28cf0,param_2,
                                                    param_3,0), (uVar3 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c577cc();
                            }
                            else {
                              uVar3 = 0xd000000000000017;
                              if (((param_2 == -0x2fffffffffffffe9) &&
                                  (param_3 == -0x7ffffffef10e0990)) ||
                                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef1f670,param_2,
                                                      param_3,0), (uVar3 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c5684c();
                              }
                              else {
                                uVar3 = 0;
                                if (((param_2 == -0x2fffffffffffffe4) &&
                                    (param_3 == -0x7ffffffef10e5600)) ||
                                   (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1aa00,
                                                        param_2,param_3,0), (uVar3 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c56598();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffed) ||
                                     (param_3 != -0x7ffffffef10d72f0)) {
                                    uVar3 = 0xd000000000000013;
                                    func_0x000107c605b8(0xd000000000000013,0x800000010ef28d10,
                                                        param_2,param_3,0);
                                    if ((uVar3 & 1) == 0) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "SCSnapTextEditorImpl/SCSnapTextEditorEntryPoint.swift"
                                                  ,0x35,2,0x68,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101355ac8);
                                      (*pcVar1)();
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c577d0();
                                }
                              }
                            }
                          }
                        }
                        goto LAB_101355480;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53414();
                  }
                  goto LAB_101355480;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59384();
              goto LAB_101355480;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5937c();
        }
      }
    }
  }
LAB_101355480:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101355ac8; end: 101355b73; -[SCSnapTextEditorEntryPoint setValue:forIvarName:] */

void FUN_101355ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013553f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101355b74; end: 101355cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101355b74(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d75200,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75208,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75210,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75218,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75220,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75228,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75230,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75238,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75240,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75248,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75250,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d75258,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d75260) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d75268) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d75270) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d75278) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101355cd4; end: 101355cf3; -[SCSnapTextEditorEntryPoint init] */

void FUN_101355cd4(void)

{
  FUN_101355b74();
  return;
}



/* Entry: 101355cf4; end: 101355d27;  */

void FUN_101355cf4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101355d28; end: 101355e3f; -[SCSnapTextEditorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101355d28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d75200);
  func_0x000107c61610(param_1 + _DAT_112d75208);
  func_0x000107c61610(param_1 + _DAT_112d75210);
  func_0x000107c61610(param_1 + _DAT_112d75218);
  func_0x000107c61610(param_1 + _DAT_112d75220);
  func_0x000107c61610(param_1 + _DAT_112d75228);
  func_0x000107c61610(param_1 + _DAT_112d75230);
  func_0x000107c61610(param_1 + _DAT_112d75238);
  func_0x000107c61610(param_1 + _DAT_112d75240);
  func_0x000107c61610(param_1 + _DAT_112d75248);
  func_0x000107c61610(param_1 + _DAT_112d75250);
  func_0x000107c61610(param_1 + _DAT_112d75258);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75260));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75268));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75270));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d75278));
  return;
}



/* Entry: 101355e40; end: 101355e5f;  */

void FUN_101355e40(void)

{
  func_0x000107c61168(&PTR_PTR_1127ca920);
  return;
}



/* Entry: 101355e60; end: 1013561cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101355e60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lStack_e0;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  lVar2 = param_1;
  func_0x000107c4168c();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_101373174();
  func_0x000107c613fc();
  *(long *)(lVar3 + 0x40) = lVar2;
  auStack_88[0] = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  puVar4 = auStack_88;
  func_0x000103dbf4dc();
  lVar5 = 0;
  func_0x000101372cf4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = 0;
  func_0x0001000c6560(0);
  lVar11 = 0x20;
  func_0x000107c613fc();
  puVar6 = puVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined1 **)(lVar5 + 0x60) = puVar6;
  puVar7 = PTR_PTR_1126af108;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined1 **)(lVar5 + 0x68) = puVar4;
  *(undefined **)(lVar5 + 0x18) = puVar7;
  *(long *)(lVar5 + 0x20) = param_1;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4d97c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar11;
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    lVar2 = lVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar11);
  }
  lVar11 = param_1;
  func_0x000107c4a938();
  func_0x000107c61180();
  lVar12 = lVar2;
  if (lVar11 == 0) {
    func_0x000107c5faec();
    lVar12 = lVar2;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c4d97c();
  func_0x000107c61180();
  lVar8 = lVar2;
  func_0x000107c52060();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar8 == 0) {
    lStack_e0 = 0;
    lVar12 = 0;
  }
  else {
    lStack_e0 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
  }
  func_0x000107c4a930();
  func_0x000107c4a934();
  func_0x000107c49e20();
  func_0x000107c49dc8();
  func_0x000107c61170(param_1);
  uVar9 = *(undefined8 *)(param_3 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar10 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  if (lVar12 == 0) {
    lStack_e0 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_e0,lVar12);
    func_0x000107c6142c(lVar12);
  }
  puVar7 = PTR_PTR_1126b5840;
  func_0x000107c610f8();
  func_0x000107c45e58();
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lStack_e0);
  if (puVar7 != (undefined *)0x0) {
    *(undefined **)(lVar5 + 0x38) = puVar7;
    *(undefined8 *)(lVar5 + 0x40) = param_4;
    *(undefined8 *)(lVar5 + 0x28) = param_5;
    *(undefined8 *)(lVar5 + 0x30) = param_6;
    *(undefined8 *)(lVar5 + 0x48) = param_7;
    *(undefined8 *)(lVar5 + 0x50) = param_8;
    uVar10 = 0;
    func_0x00010136e7d4(0);
    func_0x000107c613fc();
    uVar9 = param_2;
    FUN_10136e85c(param_2,param_9,uVar10);
    func_0x000107c61170(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_2);
    *(undefined8 *)(lVar5 + 0x58) = uVar9;
    *(undefined8 *)(lVar5 + 0x70) = param_10;
    *(undefined8 *)(lVar5 + 0x78) = param_11;
    *(undefined8 *)(lVar5 + 0x80) = param_12;
    *(undefined8 *)(lVar5 + 0x88) = param_13;
    *(undefined8 *)(lVar5 + 0x90) = param_14;
    *(long *)(unaff_x20 + 0x10) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013561cc);
  (*pcVar1)();
}



/* Entry: 1013561cc; end: 1013561ef;  */

void FUN_1013561cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013561f0; end: 101356213;  */

void FUN_1013561f0(void)

{
  FUN_101371bcc();
  return;
}



/* Entry: 101356214; end: 10135621b;  */

undefined8 FUN_101356214(void)

{
  return 0;
}



/* Entry: 10135621c; end: 10135623b;  */

void FUN_10135621c(void)

{
  func_0x000107c61168(&PTR_PTR_112d752e8);
  return;
}



/* Entry: 10135623c; end: 10135624f;  */

bool FUN_10135623c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101356250; end: 1013562fb;  */

void FUN_101356250(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013562fc; end: 101356aab;  */

undefined * FUN_1013562fc(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x58);
  func_0x000107c5b310();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_10135b6e4(0,0x112d75618,&PTR_PTR_1126be098);
  uVar4 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar4);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar8,0);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013564b4);
      (*pcVar1)();
    }
    uVar11 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar4 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
        uVar9 = uVar8;
      }
      else {
        uVar5 = uVar11;
        uVar9 = uVar4;
        FUN_10136f434();
      }
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
LAB_1013564c4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013564c8);
        (*pcVar1)();
      }
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar8 = uVar9;
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      if (uVar9 == 0) goto LAB_1013564c4;
      uVar6 = *(ulong *)(puVar10 + 0x10);
      uVar5 = uVar6 + 1;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
        uVar8 = uVar5;
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar5,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar5;
      *(ulong *)(puVar10 + uVar6 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar10 + uVar6 * 0x10 + 0x28) = uVar9;
    } while (uVar2 != uVar11);
    func_0x000107c6142c(uVar4);
  }
  return puVar10;
}



/* Entry: 101356aac; end: 101356c1f;  */

code * FUN_101356aac(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  long lVar24;
  long unaff_x20;
  undefined **ppuVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_10135820c();
    }
    else if (bVar1 == 1) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar24 = param_2;
      func_0x000107c4fb10();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170();
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar19 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001013564c8();
      uVar5 = uVar3;
      func_0x000101371300();
      func_0x000107c6142c();
      func_0x0001013567f0();
      FUN_1013574c8(uVar4,lVar24,0,0,uVar11,uVar19,0,(uint)uVar5 & 1);
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c(uVar3);
    }
    return (code *)0x0;
  }
  if (bVar1 == 3) {
    FUN_10135b030();
    return (code *)0x0;
  }
  if (bVar1 == 5) {
    FUN_101358438();
    return (code *)0x0;
  }
  if (bVar1 != 7) {
    return (code *)0x0;
  }
  if ((param_1[2] == 0 && param_1[3] == 0) && (*param_1 == 0 && param_1[1] == 0)) {
    ppuVar21 = &puStack_78;
    func_0x000107c61428(unaff_x20 + 0xd0,ppuVar21,0,0);
    ppuVar25 = *(undefined ***)(unaff_x20 + 0xd0);
    if ((ulong)ppuVar25 >> 0x3e == 0) {
      ppuVar27 = *(undefined ***)(((ulong)ppuVar25 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppuVar27 = (undefined **)((ulong)ppuVar25 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar25) {
        ppuVar27 = ppuVar25;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (ppuVar27 != (undefined **)0x0) {
      if ((long)ppuVar27 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101357024);
        (*pcVar2)();
      }
      func_0x000107c61434(ppuVar25);
      ppuVar28 = (undefined **)0x0;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (((ulong)ppuVar25 & 0xc000000000000001) == 0) {
          ppuVar6 = (undefined **)ppuVar25[(long)ppuVar28 + 4];
          func_0x000107c61174();
          ppuVar22 = ppuVar21;
        }
        else {
          ppuVar6 = ppuVar28;
          ppuVar22 = ppuVar25;
          func_0x00010136f448();
        }
        ppuVar7 = ppuVar6;
        func_0x000107c4a118();
        ppuVar21 = ppuVar22;
        if (((int)ppuVar7 != 0) &&
           (ppuVar7 = ppuVar6, func_0x000107c4e638(), ppuVar21 = ppuVar22,
           ppuVar7 == (undefined **)0x0)) {
          ppuVar7 = ppuVar6;
          func_0x000107c4e620();
          func_0x000107c61180();
          ppuVar8 = ppuVar7;
          func_0x000107c5faec();
          ppuVar21 = ppuVar22;
          func_0x000107c61170(ppuVar7);
          puVar10 = puVar9;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            ppuVar21 = (undefined **)(*(long *)(puVar9 + 0x10) + 1);
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,ppuVar21,1,puVar9);
            puVar9 = puVar10;
          }
          uVar23 = *(ulong *)(puVar9 + 0x10);
          ppuVar7 = (undefined **)(uVar23 + 1);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar23) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            ppuVar21 = ppuVar7;
            func_0x0001000d182c(puVar9,ppuVar7,1);
          }
          *(undefined ***)(puVar9 + 0x10) = ppuVar7;
          *(undefined ***)(puVar9 + uVar23 * 0x10 + 0x20) = ppuVar8;
          *(undefined ***)(puVar9 + uVar23 * 0x10 + 0x28) = ppuVar22;
        }
        ppuVar28 = (undefined **)((long)ppuVar28 + 1);
        func_0x000107c61170(ppuVar6);
      } while (ppuVar27 != ppuVar28);
      func_0x000107c6142c(ppuVar25);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar19 = uVar11;
    func_0x000107c3e058(uVar11);
    func_0x000107c61180();
    uVar4 = uVar19;
    func_0x000107c5faec();
    func_0x000107c61170(uVar19);
    func_0x000107c4fb10(uVar11);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001013564c8();
    func_0x000101371300();
    func_0x000107c6142c(uVar11);
    func_0x0001013567f0();
    FUN_10136e974(uVar4,ppuVar21);
    func_0x000107c6142c(ppuVar21);
    func_0x000107c6142c(uVar11);
    pcVar2 = FUN_101357024;
    func_0x0001000bfde0(FUN_101357024,0,&UNK_1103a6488);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(uVar4);
    return pcVar2;
  }
  if (*param_1 != 1) {
    return (code *)0x0;
  }
  if ((param_1[2] != 0 || param_1[3] != 0) || param_1[1] != 0) {
    return (code *)0x0;
  }
  lVar26 = *(long *)(unaff_x20 + 0x58);
  lVar24 = lVar26;
  func_0x000107c49970();
  if ((int)lVar24 == 0) {
    lStack_98 = 0;
    lVar24 = 0;
    lVar12 = param_2;
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0xc0);
    func_0x000107c5c818();
    func_0x000107c61180();
    lVar24 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar24 == 0) {
      lStack_98 = 0;
      lVar24 = 0;
      lVar12 = param_2;
    }
    else {
      lVar13 = lVar24;
      func_0x000107c4ab04();
      func_0x000107c61180();
      func_0x000107c615e8(lVar24);
      lStack_98 = lVar13;
      func_0x000107c5faec();
      lVar12 = param_2;
      func_0x000107c61170(lVar13);
      lVar24 = param_2;
    }
  }
  lVar29 = *(long *)(unaff_x20 + 0x60);
  lVar13 = lVar26;
  func_0x000107c3e058();
  func_0x000107c61180();
  lVar15 = lVar12;
  if (lVar13 == 0) {
    func_0x000107c5faec();
    lVar15 = lVar12;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c3fb8c();
  func_0x000107c61180();
  lVar12 = lVar15;
  lVar14 = lVar26;
  if (lVar26 == 0) {
    func_0x000107c5faec();
    lVar12 = lVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c5faec();
  lVar15 = lVar26;
  func_0x0001013564c8();
  lVar16 = lVar15;
  func_0x0001013567f0();
  lVar18 = lVar16;
  func_0x0001013564c8();
  lVar17 = lVar18;
  func_0x000101371300();
  func_0x000107c6142c(lVar18);
  uVar11 = 0x112d75608;
  func_0x0001000285a8(0x112d75608,&UNK_10d935908);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar18 = *(long *)(lVar29 + 0x10);
  if (lVar18 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar18 != 0) {
      uVar19 = 0;
      FUN_10135b6e4(0,0x112d75610,&PTR_PTR_1126be0a0);
      lVar20 = lVar15;
      func_0x000107c5fc48(lVar15,uVar19);
      uVar19 = 0;
      FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar9 = &UNK_1103a6790;
      func_0x000107c613fc(&UNK_1103a6790,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,lVar29);
      puVar10 = &UNK_1103a67b8;
      func_0x000107c613fc(&UNK_1103a67b8,0x50,7);
      *(long *)(puVar10 + 0x10) = lVar26;
      *(long *)(puVar10 + 0x18) = lVar12;
      *(undefined8 *)(puVar10 + 0x20) = uVar11;
      *(undefined **)(puVar10 + 0x28) = puVar9;
      puVar10[0x30] = (byte)lVar17 & 1;
      *(long *)(puVar10 + 0x38) = lVar16;
      *(long *)(puVar10 + 0x40) = lStack_98;
      *(long *)(puVar10 + 0x48) = lVar24;
      pcStack_70 = FUN_10135b6a8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_10135a0dc;
      puStack_78 = &UNK_1103a67d0;
      ppuVar21 = &puStack_90;
      puStack_68 = puVar10;
      func_0x000107c60bc4(ppuVar21);
      puVar9 = puStack_68;
      func_0x000107c61434(lVar24);
      func_0x000107c61434(lVar12);
      func_0x000107c6157c(uVar11);
      func_0x000107c61434(lVar16);
      func_0x000107c61574(puVar9);
      func_0x000107c5c2e4(lVar18);
      func_0x000107c615e8(lVar18);
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(lVar16);
      func_0x000107c6142c(lVar15);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar19);
      goto LAB_1013573cc;
    }
  }
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar14);
  puStack_90 = (undefined *)0xd000000000000032;
  uStack_88 = 0x800000010ef38810;
  pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
  func_0x0001002a64a8(&puStack_90);
  func_0x000107c6142c(lVar12);
  func_0x000107c6142c(lVar16);
  func_0x000107c6142c(lVar15);
LAB_1013573cc:
  puVar9 = &UNK_1103a6768;
  func_0x000107c613fc(&UNK_1103a6768,0x20,7);
  *(long *)(puVar9 + 0x10) = lStack_98;
  *(long *)(puVar9 + 0x18) = lVar24;
  func_0x000107c61434(lVar24);
  pcVar2 = (code *)0x10135b6a0;
  func_0x0001000bfde0(0x10135b6a0,puVar9,&UNK_1103a6488);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar9);
  func_0x000107c6142c(lVar24);
  return pcVar2;
}



/* Entry: 101356c20; end: 101356dcb;  */

/* WARNING: Possible PIC construction at 0x000101356d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101356d8c) */

void FUN_101356c20(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  
  lVar8 = *(long *)(unaff_x20 + 0x58);
  lVar5 = lVar8;
  func_0x000107c3ddb4();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  func_0x000107c3f71c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar3 = PTR_PTR_1126b08a8;
  func_0x000107c610f8(PTR_PTR_1126b08a8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460f4(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  lVar5 = *(long *)(unaff_x20 + 0x90);
  func_0x000107c423b0();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
      func_0x000107c61170(puVar3);
      lVar6 = *(long *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
    }
    else {
      func_0x000107c3ddb4();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c4766c();
      func_0x000107c61170(lVar8);
      func_0x000107c409f4(lVar6);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101356dcc);
  (*pcVar1)();
}



/* Entry: 101356dcc; end: 101357023;  */

code * FUN_101356dcc(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0xd0,puVar10,0,0);
  puVar13 = *(undefined1 **)(unaff_x20 + 0xd0);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar14 = *(undefined1 **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = (undefined1 *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar13) {
      puVar14 = puVar13;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (puVar14 != (undefined1 *)0x0) {
    if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101357024);
      (*pcVar1)();
    }
    func_0x000107c61434(puVar13);
    puVar15 = (undefined1 *)0x0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)puVar13 & 0xc000000000000001) == 0) {
        puVar2 = *(undefined1 **)(puVar13 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
        puVar11 = puVar10;
      }
      else {
        puVar2 = puVar15;
        puVar11 = puVar13;
        func_0x00010136f448();
      }
      puVar3 = puVar2;
      func_0x000107c4a118();
      puVar10 = puVar11;
      if (((int)puVar3 != 0) &&
         (puVar3 = puVar2, func_0x000107c4e638(), puVar10 = puVar11, puVar3 == (undefined1 *)0x0)) {
        puVar3 = puVar2;
        func_0x000107c4e620();
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c5faec();
        puVar10 = puVar11;
        func_0x000107c61170(puVar3);
        puVar6 = puVar5;
        func_0x000107c61558();
        if (((ulong)puVar6 & 1) == 0) {
          puVar10 = (undefined1 *)(*(long *)(puVar5 + 0x10) + 1);
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,puVar10,1,puVar5);
          puVar5 = puVar6;
        }
        uVar12 = *(ulong *)(puVar5 + 0x10);
        puVar3 = (undefined1 *)(uVar12 + 1);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          puVar10 = puVar3;
          func_0x0001000d182c(puVar5,puVar3,1);
        }
        *(undefined1 **)(puVar5 + 0x10) = puVar3;
        *(undefined1 **)(puVar5 + uVar12 * 0x10 + 0x20) = puVar4;
        *(undefined1 **)(puVar5 + uVar12 * 0x10 + 0x28) = puVar11;
      }
      puVar15 = puVar15 + 1;
      func_0x000107c61170(puVar2);
    } while (puVar14 != puVar15);
    func_0x000107c6142c(puVar13);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = uVar9;
  func_0x000107c3e058(uVar9);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000107c4fb10(uVar9);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x0001013564c8();
  func_0x000101371300();
  func_0x000107c6142c(uVar9);
  func_0x0001013567f0();
  FUN_10136e974(uVar8,puVar10);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(uVar9);
  pcVar1 = FUN_101357024;
  func_0x0001000bfde0(FUN_101357024,0,&UNK_1103a6488);
  func_0x000107c6142c(puVar5);
  func_0x000107c61574(uVar8);
  return pcVar1;
}



/* Entry: 101357024; end: 10135704b;  */

void FUN_101357024(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = 1;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar2 = 2;
  }
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10135704c; end: 10135744b;  */

undefined8 FUN_10135704c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar16 = *(long *)(unaff_x20 + 0x58);
  lVar1 = lVar16;
  func_0x000107c49970();
  if ((int)lVar1 == 0) {
    lStack_98 = 0;
    uVar15 = 0;
    uVar14 = param_2;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0xc0);
    func_0x000107c5c818();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      lStack_98 = 0;
      uVar15 = 0;
      uVar14 = param_2;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c4ab04();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      lStack_98 = lVar2;
      func_0x000107c5faec();
      uVar14 = param_2;
      func_0x000107c61170(lVar2);
      uVar15 = param_2;
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar1 = lVar16;
  func_0x000107c3e058();
  func_0x000107c61180();
  uVar7 = uVar14;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    uVar7 = uVar14;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
  }
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar14 = uVar7;
  lVar3 = lVar16;
  if (lVar16 == 0) {
    func_0x000107c5faec();
    uVar14 = uVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c5faec();
  lVar4 = lVar16;
  func_0x0001013564c8();
  lVar5 = lVar4;
  func_0x0001013567f0();
  lVar8 = lVar5;
  func_0x0001013564c8();
  lVar6 = lVar8;
  func_0x000101371300();
  func_0x000107c6142c(lVar8);
  uVar7 = 0x112d75608;
  func_0x0001000285a8(0x112d75608,&UNK_10d935908);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar8 = *(long *)(lVar2 + 0x10);
  if (lVar8 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar9 = 0;
      FUN_10135b6e4(0,0x112d75610,&PTR_PTR_1126be0a0);
      lVar10 = lVar4;
      func_0x000107c5fc48(lVar4,uVar9);
      uVar9 = 0;
      FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar11 = &UNK_1103a6790;
      func_0x000107c613fc(&UNK_1103a6790,0x18,7);
      func_0x000107c61644(puVar11 + 0x10,lVar2);
      puVar12 = &UNK_1103a67b8;
      func_0x000107c613fc(&UNK_1103a67b8,0x50,7);
      *(long *)(puVar12 + 0x10) = lVar16;
      *(undefined8 *)(puVar12 + 0x18) = uVar14;
      *(undefined8 *)(puVar12 + 0x20) = uVar7;
      *(undefined **)(puVar12 + 0x28) = puVar11;
      puVar12[0x30] = (byte)lVar6 & 1;
      *(long *)(puVar12 + 0x38) = lVar5;
      *(long *)(puVar12 + 0x40) = lStack_98;
      *(undefined8 *)(puVar12 + 0x48) = uVar15;
      pcStack_70 = FUN_10135b6a8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_10135a0dc;
      puStack_78 = &UNK_1103a67d0;
      ppuVar13 = &puStack_90;
      puStack_68 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      puVar11 = puStack_68;
      func_0x000107c61434(uVar15);
      func_0x000107c61434(uVar14);
      func_0x000107c6157c(uVar7);
      func_0x000107c61434(lVar5);
      func_0x000107c61574(puVar11);
      func_0x000107c5c2e4(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar9);
      goto LAB_1013573cc;
    }
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  puStack_90 = (undefined *)0xd000000000000032;
  uStack_88 = 0x800000010ef38810;
  pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
  func_0x0001002a64a8(&puStack_90);
  func_0x000107c6142c(uVar14);
  func_0x000107c6142c(lVar5);
  func_0x000107c6142c(lVar4);
LAB_1013573cc:
  puVar11 = &UNK_1103a6768;
  func_0x000107c613fc(&UNK_1103a6768,0x20,7);
  *(long *)(puVar11 + 0x10) = lStack_98;
  *(undefined8 *)(puVar11 + 0x18) = uVar15;
  func_0x000107c61434(uVar15);
  uVar14 = 0x10135b6a0;
  func_0x0001000bfde0(0x10135b6a0,puVar11,&UNK_1103a6488);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar11);
  func_0x000107c6142c(uVar15);
  return uVar14;
}



/* Entry: 10135744c; end: 1013574c7;  */

void FUN_10135744c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(char *)(param_2 + 2) == '\x01') {
    param_3 = 0;
    param_4 = 0;
    uVar3 = 4;
  }
  else {
    func_0x000107c61434(param_4);
    func_0x000107c61174(uVar1);
    uVar3 = 3;
  }
  func_0x000107c61434(uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}



/* Entry: 1013574c8; end: 101358197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013574c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long unaff_x20;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  long lStack_190;
  long lStack_188;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  uStack_15c = param_8;
  uStack_128 = param_5;
  uStack_120 = param_6;
  uStack_118 = param_3;
  uStack_110 = param_4;
  func_0x000107c5f7fc();
  lStack_138 = *(long *)(lVar3 + -8);
  lStack_130 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar15 = (long)&lStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_140 = lVar15;
  func_0x000107c5f824();
  lStack_150 = *(long *)(lVar3 + -8);
  lStack_148 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_158 = lVar15;
  func_0x000107c5ec24();
  lStack_f8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  lStack_100 = lVar15;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_02;
  lVar5 = 0;
  lStack_f0 = lVar15;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_170 = extraout_x13;
  lStack_168 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar6 = 0;
  func_0x000107c5ebbc();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_188 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (lVar17 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar18 - extraout_x12_02;
  lVar3 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar22 - extraout_x8_04;
  lVar3 = *(long *)(unaff_x20 + 0x58);
  lStack_190 = *(long *)(unaff_x20 + 0x60);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar21 = lVar3;
  func_0x000107c49970();
  uStack_17c = (undefined4)lVar21;
  lStack_108 = *(long *)(unaff_x20 + 200);
  func_0x000107c6157c();
  func_0x000107c5ec14(lVar23,param_1,param_2);
  func_0x000107c5ebb0(lVar22,0x6574617473,0xe500000000000000,uStack_128,uStack_120);
  uVar7 = 0;
  FUN_1012d3170(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = *(ulong *)(uVar7 + 0x10);
  uVar14 = uVar7;
  lStack_e8 = lVar5;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1012d3170(uVar14,uVar9 + 1,1,uVar7);
  }
  *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
  uVar24 = (ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff);
  lVar21 = *(long *)(lVar19 + 0x48);
  pcVar20 = *(code **)(lVar19 + 0x20);
  (*pcVar20)(uVar14 + uVar24 + lVar21 * uVar9,lVar22,lVar6);
  func_0x000107c5ebb0(lVar18,0x65646f63,0xe400000000000000,uStack_118,uStack_110);
  uVar9 = *(ulong *)(uVar14 + 0x10);
  uVar7 = uVar14;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar9) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_1012d3170(uVar7,uVar9 + 1,1,uVar14);
  }
  *(ulong *)(uVar7 + 0x10) = uVar9 + 1;
  (*pcVar20)(uVar7 + uVar24 + uVar9 * lVar21,lVar18,lVar6);
  lVar19 = lVar3;
  func_0x000107c4e6c8();
  func_0x000107c61180();
  lVar5 = lVar18;
  uVar9 = uVar7;
  if (lVar19 != 0) {
    lVar22 = lVar19;
    func_0x000107c5faec();
    func_0x000107c61170(lVar19);
    lVar5 = lStack_188;
    func_0x000107c5ebb0(lStack_188,0xd00000000000001e,0x800000010ef387f0,lVar22,lVar18);
    func_0x000107c6142c(lVar18);
    uVar14 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar14) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1012d3170(uVar9,uVar14 + 1,1,uVar7);
    }
    *(ulong *)(uVar9 + 0x10) = uVar14 + 1;
    (*pcVar20)(uVar9 + uVar24 + uVar14 * lVar21,lVar5,lVar6);
  }
  lVar18 = lVar3;
  func_0x000107c52060();
  func_0x000107c61180();
  uVar14 = uVar9;
  if (lVar18 != 0) {
    lVar19 = lVar18;
    func_0x000107c5faec();
    func_0x000107c61170(lVar18);
    func_0x000107c5ebb0(lVar17,0x5f6e6f6973736573,0xea00000000006469,lVar19,lVar5);
    func_0x000107c6142c(lVar5);
    uVar7 = *(ulong *)(uVar9 + 0x10);
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_1012d3170(uVar14,uVar7 + 1,1,uVar9);
    }
    *(ulong *)(uVar14 + 0x10) = uVar7 + 1;
    (*pcVar20)(uVar14 + uVar24 + uVar7 * lVar21,lVar17,lVar6);
  }
  lVar21 = lStack_f8;
  pcVar20 = *(code **)(lStack_f8 + 0x30);
  lVar6 = lVar23;
  (*pcVar20)(lVar23,1,lVar4);
  lVar5 = lStack_e8;
  if ((int)lVar6 == 0) {
    func_0x000107c61434(uVar14);
    func_0x000107c5ebc8();
  }
  lVar17 = lVar23;
  (*pcVar20)(lVar23,1,lVar4);
  lVar18 = lStack_f0;
  lVar6 = lStack_100;
  if ((int)lVar17 != 0) {
    (**(code **)(lVar16 + 0x38))(lStack_f0,1,1,lVar5);
LAB_101358128:
    FUN_10135b650(lVar18,0x112d36580,&UNK_10d9016d0);
    *(undefined4 *)(lVar23 + -8) = 0;
    *(undefined8 *)(lVar23 + -0x10) = 0x30;
    func_0x000107c60450("Fatal error",0xb,2,0x6e207369206c7275,0xea00000000006c69,
                        "SCOAuth2Feature/OAuth2RedirectHandler.swift",0x2b,2);
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x101358198);
    (*pcVar20)();
  }
  (**(code **)(lVar21 + 0x10))(lStack_100,lVar23,lVar4);
  lVar18 = lStack_f0;
  func_0x000107c5ebe8(lStack_f0);
  (**(code **)(lVar21 + 8))(lVar6,lVar4);
  lVar21 = lVar18;
  (**(code **)(lVar16 + 0x30))(lVar18,1,lVar5);
  if ((int)lVar21 == 1) goto LAB_101358128;
  pcVar20 = *(code **)(lVar16 + 0x20);
  (*pcVar20)(lVar15,lVar18,lVar5);
  lVar21 = *(long *)(lStack_108 + _DAT_1130837d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if ((param_7 & 1) == 0) {
    if (lVar21 != 0) {
      func_0x000107c4b9f0(lVar21);
      goto LAB_101357ab0;
    }
  }
  else if (lVar21 != 0) {
    func_0x000107c4b9f4(lVar21);
LAB_101357ab0:
    func_0x000107c615e8(lVar21);
  }
  lVar21 = lVar3;
  func_0x000107c4a39c();
  if ((int)lVar21 != 0) {
    if ((param_7 & 1) == 0) {
      puStack_a8 = (undefined *)0x2;
      uStack_a0 = 0;
      pcStack_98 = (code *)0x0;
      puStack_90 = (undefined *)0x0;
      pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,7);
      func_0x0001000285a8(0x112d75600,&UNK_10d9358f8);
      ppuVar11 = &puStack_a8;
      func_0x000100854cb0(ppuVar11);
      func_0x000103dbf524();
      func_0x000107c61574(unaff_x20);
      func_0x000107c61574(ppuVar11);
      (**(code **)(lVar16 + 8))(lVar15,lVar5);
      goto LAB_101358044;
    }
    puVar8 = &UNK_1103a66c8;
    func_0x000107c613fc(&UNK_1103a66c8,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10135b5c0;
    *(long *)(puVar8 + 0x18) = unaff_x20;
    lVar4 = *(long *)(lStack_190 + 0x18);
    func_0x000107c6157c(unaff_x20);
    func_0x000107c44f60();
    func_0x000107c61180();
    lVar21 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar21 == 0) {
      puStack_a8 = (undefined *)0x2;
      uStack_a0 = 0;
      pcStack_98 = (code *)0x0;
      puStack_90 = (undefined *)0x0;
      pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,7);
      func_0x0001000285a8(0x112d75600,&UNK_10d9358f8);
      ppuVar11 = &puStack_a8;
      func_0x000100854cb0(ppuVar11);
      func_0x000103dbf524();
      func_0x000107c61574(ppuVar11);
      func_0x000107c61574(puVar8);
    }
    else {
      func_0x000107c5ed90();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x101365b00;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_101365b04;
      puStack_90 = &UNK_1103a66e0;
      ppuVar11 = &puStack_a8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_80);
      lVar6 = lVar21;
      func_0x000107c3ecec(lVar21);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(lVar21);
      func_0x000107c61170(lVar4);
      uVar9 = 0;
      func_0x000107c61544(0,"",0x56,0x192,0x20,1);
      func_0x000107c61574(0);
      lVar21 = lStack_190;
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x101358108);
        (*pcVar20)();
      }
      lVar18 = *(long *)(lStack_190 + 0x18);
      func_0x000107c44f4c();
      func_0x000107c61180();
      lVar4 = lVar18;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar18);
      if (lVar4 == 0) {
        func_0x000107c61170(lVar6);
        func_0x000107c61574(puVar8);
      }
      else {
        lVar21 = *(long *)(lVar21 + 0x20);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        if (lVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10135810c);
          (*pcVar20)();
        }
        puVar10 = &UNK_1103a6718;
        func_0x000107c613fc(&UNK_1103a6718,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_10135b690;
        *(undefined **)(puVar10 + 0x18) = puVar8;
        pcStack_88 = (code *)0x10135b698;
        puStack_a8 = puVar2;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_101365b40;
        puStack_90 = &UNK_1103a6730;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar2 = puStack_80;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar2);
        lVar18 = lVar4;
        func_0x000107c5c2f4(lVar4);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        func_0x000107c61574(puVar8);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar18);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar21);
      }
    }
  }
  lVar4 = 0;
  FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  lVar21 = lStack_168;
  lStack_f0 = lVar4;
  (**(code **)(lVar16 + 0x10))(lStack_168,lVar15,lVar5);
  uVar9 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar7 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar24 = lStack_170 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_1103a6678;
  func_0x000107c613fc(&UNK_1103a6678,uVar24 + 0x30,uVar9 | 7);
  (*pcVar20)(puVar8 + uVar7,lVar21,lVar5);
  uVar12 = uStack_178;
  puVar1 = (undefined8 *)(puVar8 + uVar24);
  *puVar1 = uStack_178;
  *(byte *)(puVar1 + 1) = param_7 & 1;
  *(byte *)((long)puVar1 + 9) = (byte)uStack_15c & 1;
  *(char *)((long)puVar1 + 10) = (char)uStack_17c;
  *(long *)(puVar8 + uVar24 + 0x10) = lVar3;
  *(undefined8 *)(puVar8 + uVar24 + 0x18) = param_9;
  *(undefined8 *)(puVar8 + uVar24 + 0x20) = 0x10135b5c0;
  *(long *)((long)(puVar8 + uVar24 + 0x20) + 8) = unaff_x20;
  pcStack_88 = FUN_10135b5c8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_1103a6690;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar11);
  puVar8 = puStack_80;
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(lVar3);
  func_0x000107c61434(param_9);
  func_0x000107c61574(puVar8);
  lVar3 = lStack_158;
  func_0x000107c5f808(lStack_158);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar12 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = uVar12;
  func_0x0001001c7f30();
  lVar4 = lStack_130;
  lVar21 = lStack_140;
  func_0x000107c60264(lStack_140,&puStack_a8,uVar12,uVar13,lStack_130,puVar8);
  lVar6 = lStack_f0;
  func_0x000107c5ffe8(0,lVar3,lVar21,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61574(unaff_x20);
  func_0x000107c61170(lVar6);
  (**(code **)(lStack_138 + 8))(lVar21,lVar4);
  (**(code **)(lStack_150 + 8))(lVar3,lStack_148);
  (**(code **)(lVar16 + 8))(lVar15,lVar5);
LAB_101358044:
  func_0x000107c6142c(uVar14);
  FUN_10135b650(lVar23,0x112d4b5b0,&UNK_10d912140);
  return;
}



/* Entry: 101358198; end: 10135820b;  */

void FUN_101358198(void)

{
  undefined8 *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_58 = 2;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 7;
  func_0x0001000285a8(0x112d75600,&UNK_10d9358f8);
  puVar1 = &uStack_58;
  func_0x000100854cb0(puVar1);
  func_0x000103dbf524();
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 10135820c; end: 101358437;  */

void FUN_10135820c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0xd0,puVar7,0,0);
  puVar9 = *(undefined1 **)(unaff_x20 + 0xd0);
  if (((ulong)puVar9 & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135842c);
      (*pcVar2)();
    }
    if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101358434);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(puVar9 + param_1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61434(puVar9);
    uVar3 = param_1;
    puVar7 = puVar9;
    func_0x00010136f448(param_1,puVar9);
    func_0x000107c6142c(puVar9);
  }
  func_0x000107c4e638(uVar3);
  uVar4 = uVar3;
  func_0x000107c4e61c();
  func_0x000107c61180();
  puVar9 = puVar7;
  if (uVar4 == 0) {
    func_0x000107c5faec();
    puVar9 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  uVar10 = uVar3;
  func_0x000107c450f0(uVar3);
  func_0x000107c61180();
  func_0x000107c4a5ec(uVar3);
  func_0x000107c4a118(uVar3);
  uVar5 = uVar3;
  func_0x000107c4e620();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  puVar6 = PTR_PTR_1126a6b58;
  func_0x000107c610f8();
  func_0x000107c47e58();
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_90,0x21,0);
  uVar10 = *(ulong *)(unaff_x20 + 0xd0);
  func_0x000107c61174();
  uVar4 = uVar10;
  func_0x000107c61550();
  *(ulong *)(unaff_x20 + 0xd0) = uVar10;
  if ((((int)uVar4 == 0) || ((long)uVar10 < 0)) || ((uVar10 >> 0x3e & 1) != 0)) {
    FUN_10135a154();
    *(ulong *)(unaff_x20 + 0xd0) = uVar10;
  }
  if (-1 < (long)param_1) {
    if (param_1 < *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10)) {
      lVar1 = (uVar10 & 0xffffffffffffff8) + param_1 * 8;
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined **)(lVar1 + 0x20) = puVar6;
      *(ulong *)(unaff_x20 + 0xd0) = uVar10;
      func_0x000107c614a8(auStack_90);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101358438);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101358430);
  (*pcVar2)();
}



/* Entry: 101358438; end: 101358537;  */

void FUN_101358438(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = *(long *)(unaff_x20 + 0xb8);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    uVar4 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef38790);
    func_0x000107c56bcc(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  }
  return;
}



/* Entry: 101358538; end: 10135877b;  */

bool FUN_101358538(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0xb8);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    uVar4 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef38790);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar4);
    if (lVar3 != 0) {
      uVar4 = 0x112d373e8;
      lStack_68 = lVar3;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      puVar5 = puVar8;
      func_0x000107c6147c(puVar8,&lStack_68,uVar4,lVar2,6);
      (**(code **)(lVar10 + 0x38))(puVar8,(uint)puVar5 ^ 1,1,lVar2);
      puVar5 = puVar8;
      (**(code **)(lVar10 + 0x30))(puVar8,1,lVar2);
      if ((int)puVar5 != 1) {
        (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar2);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x000107c453e4();
        puVar7 = puVar6;
        func_0x000107c5ee70();
        func_0x000107c5c9ec(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        (**(code **)(lVar10 + 8))(lVar9,lVar2);
        return 604800.0 < param_1;
      }
      goto LAB_101358740;
    }
  }
  (**(code **)(lVar10 + 0x38))(puVar8,1,1,lVar2);
LAB_101358740:
  FUN_10135b650(puVar8,0x112d373d8,&UNK_10d9014c0);
  return true;
}



/* Entry: 10135877c; end: 101358807;  */

/* WARNING: Possible PIC construction at 0x0001013587d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013587d4) */

void FUN_10135877c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101358808; end: 1013588ab;  */

long FUN_101358808(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x78));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x80));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x88));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + 200));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0xd0));
  return param_1;
}



/* Entry: 1013588ac; end: 1013589b3;  */

void FUN_1013588ac(undefined8 param_1)

{
  FUN_101358808();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xd8,7);
  return;
}



/* Entry: 1013589b4; end: 101358a0f;  */

void FUN_1013589b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = *(undefined1 *)(param_2 + 4);
  FUN_10135ae90(&uStack_88,&uStack_50);
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  param_1[5] = uStack_60;
  param_1[4] = uStack_68;
  param_1[6] = uStack_58;
  return;
}



/* Entry: 101358a10; end: 101358a13;  */

code * FUN_101358a10(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  long lVar24;
  long unaff_x20;
  undefined **ppuVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_10135820c();
    }
    else if (bVar1 == 1) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar24 = param_2;
      func_0x000107c4fb10();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170();
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar19 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001013564c8();
      uVar5 = uVar3;
      func_0x000101371300();
      func_0x000107c6142c();
      func_0x0001013567f0();
      FUN_1013574c8(uVar4,lVar24,0,0,uVar11,uVar19,0,(uint)uVar5 & 1);
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c(uVar3);
    }
    return (code *)0x0;
  }
  if (bVar1 == 3) {
    FUN_10135b030();
    return (code *)0x0;
  }
  if (bVar1 == 5) {
    FUN_101358438();
    return (code *)0x0;
  }
  if (bVar1 != 7) {
    return (code *)0x0;
  }
  if ((param_1[2] == 0 && param_1[3] == 0) && (*param_1 == 0 && param_1[1] == 0)) {
    ppuVar21 = &puStack_78;
    func_0x000107c61428(unaff_x20 + 0xd0,ppuVar21,0,0);
    ppuVar25 = *(undefined ***)(unaff_x20 + 0xd0);
    if ((ulong)ppuVar25 >> 0x3e == 0) {
      ppuVar27 = *(undefined ***)(((ulong)ppuVar25 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppuVar27 = (undefined **)((ulong)ppuVar25 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar25) {
        ppuVar27 = ppuVar25;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (ppuVar27 != (undefined **)0x0) {
      if ((long)ppuVar27 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101357024);
        (*pcVar2)();
      }
      func_0x000107c61434(ppuVar25);
      ppuVar28 = (undefined **)0x0;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (((ulong)ppuVar25 & 0xc000000000000001) == 0) {
          ppuVar6 = (undefined **)ppuVar25[(long)ppuVar28 + 4];
          func_0x000107c61174();
          ppuVar22 = ppuVar21;
        }
        else {
          ppuVar6 = ppuVar28;
          ppuVar22 = ppuVar25;
          func_0x00010136f448();
        }
        ppuVar7 = ppuVar6;
        func_0x000107c4a118();
        ppuVar21 = ppuVar22;
        if (((int)ppuVar7 != 0) &&
           (ppuVar7 = ppuVar6, func_0x000107c4e638(), ppuVar21 = ppuVar22,
           ppuVar7 == (undefined **)0x0)) {
          ppuVar7 = ppuVar6;
          func_0x000107c4e620();
          func_0x000107c61180();
          ppuVar8 = ppuVar7;
          func_0x000107c5faec();
          ppuVar21 = ppuVar22;
          func_0x000107c61170(ppuVar7);
          puVar10 = puVar9;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            ppuVar21 = (undefined **)(*(long *)(puVar9 + 0x10) + 1);
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,ppuVar21,1,puVar9);
            puVar9 = puVar10;
          }
          uVar23 = *(ulong *)(puVar9 + 0x10);
          ppuVar7 = (undefined **)(uVar23 + 1);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar23) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            ppuVar21 = ppuVar7;
            func_0x0001000d182c(puVar9,ppuVar7,1);
          }
          *(undefined ***)(puVar9 + 0x10) = ppuVar7;
          *(undefined ***)(puVar9 + uVar23 * 0x10 + 0x20) = ppuVar8;
          *(undefined ***)(puVar9 + uVar23 * 0x10 + 0x28) = ppuVar22;
        }
        ppuVar28 = (undefined **)((long)ppuVar28 + 1);
        func_0x000107c61170(ppuVar6);
      } while (ppuVar27 != ppuVar28);
      func_0x000107c6142c(ppuVar25);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar19 = uVar11;
    func_0x000107c3e058(uVar11);
    func_0x000107c61180();
    uVar4 = uVar19;
    func_0x000107c5faec();
    func_0x000107c61170(uVar19);
    func_0x000107c4fb10(uVar11);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001013564c8();
    func_0x000101371300();
    func_0x000107c6142c(uVar11);
    func_0x0001013567f0();
    FUN_10136e974(uVar4,ppuVar21);
    func_0x000107c6142c(ppuVar21);
    func_0x000107c6142c(uVar11);
    pcVar2 = FUN_101357024;
    func_0x0001000bfde0(FUN_101357024,0,&UNK_1103a6488);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(uVar4);
    return pcVar2;
  }
  if (*param_1 != 1) {
    return (code *)0x0;
  }
  if ((param_1[2] != 0 || param_1[3] != 0) || param_1[1] != 0) {
    return (code *)0x0;
  }
  lVar26 = *(long *)(unaff_x20 + 0x58);
  lVar24 = lVar26;
  func_0x000107c49970();
  if ((int)lVar24 == 0) {
    lStack_98 = 0;
    lVar24 = 0;
    lVar12 = param_2;
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0xc0);
    func_0x000107c5c818();
    func_0x000107c61180();
    lVar24 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar24 == 0) {
      lStack_98 = 0;
      lVar24 = 0;
      lVar12 = param_2;
    }
    else {
      lVar13 = lVar24;
      func_0x000107c4ab04();
      func_0x000107c61180();
      func_0x000107c615e8(lVar24);
      lStack_98 = lVar13;
      func_0x000107c5faec();
      lVar12 = param_2;
      func_0x000107c61170(lVar13);
      lVar24 = param_2;
    }
  }
  lVar29 = *(long *)(unaff_x20 + 0x60);
  lVar13 = lVar26;
  func_0x000107c3e058();
  func_0x000107c61180();
  lVar15 = lVar12;
  if (lVar13 == 0) {
    func_0x000107c5faec();
    lVar15 = lVar12;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c3fb8c();
  func_0x000107c61180();
  lVar12 = lVar15;
  lVar14 = lVar26;
  if (lVar26 == 0) {
    func_0x000107c5faec();
    lVar12 = lVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c5faec();
  lVar15 = lVar26;
  func_0x0001013564c8();
  lVar16 = lVar15;
  func_0x0001013567f0();
  lVar18 = lVar16;
  func_0x0001013564c8();
  lVar17 = lVar18;
  func_0x000101371300();
  func_0x000107c6142c(lVar18);
  uVar11 = 0x112d75608;
  func_0x0001000285a8(0x112d75608,&UNK_10d935908);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar18 = *(long *)(lVar29 + 0x10);
  if (lVar18 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar18 != 0) {
      uVar19 = 0;
      FUN_10135b6e4(0,0x112d75610,&PTR_PTR_1126be0a0);
      lVar20 = lVar15;
      func_0x000107c5fc48(lVar15,uVar19);
      uVar19 = 0;
      FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar9 = &UNK_1103a6790;
      func_0x000107c613fc(&UNK_1103a6790,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,lVar29);
      puVar10 = &UNK_1103a67b8;
      func_0x000107c613fc(&UNK_1103a67b8,0x50,7);
      *(long *)(puVar10 + 0x10) = lVar26;
      *(long *)(puVar10 + 0x18) = lVar12;
      *(undefined8 *)(puVar10 + 0x20) = uVar11;
      *(undefined **)(puVar10 + 0x28) = puVar9;
      puVar10[0x30] = (byte)lVar17 & 1;
      *(long *)(puVar10 + 0x38) = lVar16;
      *(long *)(puVar10 + 0x40) = lStack_98;
      *(long *)(puVar10 + 0x48) = lVar24;
      pcStack_70 = FUN_10135b6a8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_10135a0dc;
      puStack_78 = &UNK_1103a67d0;
      ppuVar21 = &puStack_90;
      puStack_68 = puVar10;
      func_0x000107c60bc4(ppuVar21);
      puVar9 = puStack_68;
      func_0x000107c61434(lVar24);
      func_0x000107c61434(lVar12);
      func_0x000107c6157c(uVar11);
      func_0x000107c61434(lVar16);
      func_0x000107c61574(puVar9);
      func_0x000107c5c2e4(lVar18);
      func_0x000107c615e8(lVar18);
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(lVar16);
      func_0x000107c6142c(lVar15);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar19);
      goto LAB_1013573cc;
    }
  }
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar14);
  puStack_90 = (undefined *)0xd000000000000032;
  uStack_88 = 0x800000010ef38810;
  pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
  func_0x0001002a64a8(&puStack_90);
  func_0x000107c6142c(lVar12);
  func_0x000107c6142c(lVar16);
  func_0x000107c6142c(lVar15);
LAB_1013573cc:
  puVar9 = &UNK_1103a6768;
  func_0x000107c613fc(&UNK_1103a6768,0x20,7);
  *(long *)(puVar9 + 0x10) = lStack_98;
  *(long *)(puVar9 + 0x18) = lVar24;
  func_0x000107c61434(lVar24);
  pcVar2 = (code *)0x10135b6a0;
  func_0x0001000bfde0(0x10135b6a0,puVar9,&UNK_1103a6488);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar9);
  func_0x000107c6142c(lVar24);
  return pcVar2;
}


