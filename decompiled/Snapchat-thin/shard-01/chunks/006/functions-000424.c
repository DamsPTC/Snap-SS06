/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012c4698; end: 1012c46b7; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController init] */

void FUN_1012c4698(void)

{
  FUN_1012c456c();
  return;
}



/* Entry: 1012c46b8; end: 1012c4753; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c46b8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112d6fd08) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6fd10) = 0;
  *(undefined1 *)(param_1 + _DAT_112d6fd18) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6fd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6fd28);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCProfileCalendarSection/ProfileCalendarListViewController.swift",0x40,2,0x22
                      ,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c4754);
  (*pcVar2)();
}



/* Entry: 1012c4754; end: 1012c475b; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController modalPresentationStyle] */

undefined8 FUN_1012c4754(void)

{
  return 4;
}



/* Entry: 1012c475c; end: 1012c475f; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController setModalPresentationStyle:] */

void FUN_1012c475c(void)

{
  return;
}



/* Entry: 1012c4760; end: 1012c4b6b;  */

/* WARNING: Possible PIC construction at 0x0001012c47f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c48a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c48c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c49a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c4b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012c4a80) */
/* WARNING: Removing unreachable block (ram,0x0001012c4a94) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b18) */
/* WARNING: Removing unreachable block (ram,0x0001012c4a34) */
/* WARNING: Removing unreachable block (ram,0x0001012c4a14) */
/* WARNING: Removing unreachable block (ram,0x0001012c49ac) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b68) */
/* WARNING: Removing unreachable block (ram,0x0001012c49e0) */
/* WARNING: Removing unreachable block (ram,0x0001012c498c) */
/* WARNING: Removing unreachable block (ram,0x0001012c493c) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b64) */
/* WARNING: Removing unreachable block (ram,0x0001012c4970) */
/* WARNING: Removing unreachable block (ram,0x0001012c491c) */
/* WARNING: Removing unreachable block (ram,0x0001012c48cc) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b60) */
/* WARNING: Removing unreachable block (ram,0x0001012c4900) */
/* WARNING: Removing unreachable block (ram,0x0001012c48ac) */
/* WARNING: Removing unreachable block (ram,0x0001012c4838) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b5c) */
/* WARNING: Removing unreachable block (ram,0x0001012c4890) */
/* WARNING: Removing unreachable block (ram,0x0001012c47f4) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b58) */
/* WARNING: Removing unreachable block (ram,0x0001012c4824) */
/* WARNING: Removing unreachable block (ram,0x0001012c4b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4760(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (((*(byte *)(unaff_x20 + _DAT_112d6fd18) & 1) == 0) &&
     (*(long *)(unaff_x20 + _DAT_112d6fd08) != 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112d6fd18) = 1;
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1012c4b58);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1012c4b6c; end: 1012c4cbf; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_1012c4760();
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  pcVar3 = *(code **)(param_1 + _DAT_112d6fd20);
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = ((undefined8 *)(param_1 + _DAT_112d6fd20))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 1012c4cc0; end: 1012c4cef; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController viewDidDisappear:] */

void FUN_1012c4cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001012c4c14(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012c4cf0; end: 1012c4cf3; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController cardToExpandTransition] */

void FUN_1012c4cf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1012c4cf4; end: 1012c4d63; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_1012c4cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001012c4e54(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1012c4d64; end: 1012c4d6f; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController cardTransitionWillBeginWithView:] */

void FUN_1012c4d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1012c4d70; end: 1012c4d73; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1012c4d70(void)

{
  return;
}



/* Entry: 1012c4d74; end: 1012c4dd3; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController initWithNibName:bundle:] */

void FUN_1012c4d74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarListViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012c4da0);
  (*pcVar1)();
}



/* Entry: 1012c4dd4; end: 1012c4e33; -[_TtC24SCProfileCalendarSection33ProfileCalendarListViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012c4e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012c4e18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4dd4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fd08));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fd10));
  if (*(long *)(param_1 + _DAT_112d6fd20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d6fd20))[1]);
    return;
  }
  return;
}



/* Entry: 1012c4e34; end: 1012c4e8f;  */

void FUN_1012c4e34(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4088);
  return;
}



/* Entry: 1012c4e90; end: 1012c4ecf;  */

void FUN_1012c4e90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012c4ed0; end: 1012c4eef; -[SCProfileCalendarViewAllCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4ed0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fd58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c4ef0; end: 1012c4f23; -[SCProfileCalendarViewAllCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6fd58);
  *(undefined8 *)(param_1 + _DAT_112d6fd58) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012c4f24; end: 1012c500f; -[SCProfileCalendarViewAllCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4f24(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_112d6fd60;
  func_0x000107c61428(param_1 + _DAT_112d6fd60,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012c5010; end: 1012c50df; -[SCProfileCalendarViewAllCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5010(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  lVar1 = _DAT_112d6fd60;
  func_0x000107c61428(param_1 + _DAT_112d6fd60,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar1,auStack_60);
  func_0x000107c61428(param_1 + lVar1,auStack_90,0x21,0);
  FUN_1012c2668(&uStack_40,param_1 + lVar1);
  func_0x000107c614a8(auStack_90);
  FUN_1012c50e0(auStack_60);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(auStack_60);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1012c50e0; end: 1012c51db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c50e0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = _DAT_112d6fd60;
  uVar4 = 0;
  uVar5 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6fd60,auStack_78,0,0);
  func_0x000100672b50(unaff_x20 + lVar2,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return;
  }
  uVar3 = 0;
  FUN_1012b73f4(0);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&uStack_80,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
  uVar6 = uStack_80;
  if ((uVar4 & 1) == 0) {
    return;
  }
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    func_0x000107c6147c(&uStack_80,auStack_60,puVar1 + 8,uVar3,6);
    if ((uVar5 & 1) != 0) {
      func_0x000107c61170(uVar6);
      uVar6 = uStack_80;
      goto LAB_1012c51c0;
    }
  }
  FUN_1012c51dc(uVar6);
LAB_1012c51c0:
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1012c51dc; end: 1012c567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c51dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112d6fd68;
  if (*(long *)(unaff_x20 + _DAT_112d6fd68) != 0) {
    func_0x000107c4ff34();
  }
  lVar2 = *(long *)(param_1 + _DAT_112d6f8d8);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar3 != 0) {
        func_0x0001012c8af8();
        puVar4 = PTR_PTR_1126a6910;
        func_0x000107c610f8();
        func_0x000107c5fadc(lVar2,param_2);
        func_0x000107c6142c(param_2);
        func_0x000107c48d68(0);
        func_0x000107c61170(lVar2);
        puVar5 = PTR_PTR_1126a6918;
        func_0x000107c610f8(PTR_PTR_1126a6918);
        func_0x000107c453e4();
        puVar6 = &UNK_11039d7c8;
        func_0x000107c613fc(&UNK_11039d7c8,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        pcStack_70 = FUN_1012c5b0c;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_100f7177c;
        puStack_78 = &UNK_11039d7e0;
        ppuVar7 = &puStack_90;
        puStack_68 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_68);
        func_0x000107c56ea0(puVar5);
        func_0x000107c60bd0(ppuVar7);
        puVar6 = PTR_PTR_1126a6920;
        func_0x000107c610f8();
        func_0x000107c49520();
        lVar2 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c3d89c(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c5a050(puVar6);
        func_0x000107c61170(puVar6);
        puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        lVar2 = 0x112d360b8;
        FUN_1012c5b8c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                      &UNK_10d9011a0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x18) = 9;
        *(undefined8 *)(lVar2 + 0x10) = 4;
        puVar9 = puVar6;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        lVar10 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar12 = puVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar11);
        *(undefined **)(lVar2 + 0x20) = puVar12;
        puVar9 = puVar6;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        lVar10 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar12 = puVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar11);
        *(undefined **)(lVar2 + 0x28) = puVar12;
        puVar9 = puVar6;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        lVar10 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar12 = puVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar11);
        *(undefined **)(lVar2 + 0x30) = puVar12;
        puVar9 = puVar6;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        lVar10 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar12 = puVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar11);
        *(undefined **)(lVar2 + 0x38) = puVar12;
        uVar13 = 0;
        FUN_1012c5c54(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar10 = lVar2;
        func_0x000107c5fc48(lVar2,uVar13);
        func_0x000107c61574(lVar2);
        func_0x000107c3d048(puVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar10);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined **)(unaff_x20 + lVar1) = puVar6;
        func_0x000107c61170(uVar13);
      }
    }
  }
  return;
}



/* Entry: 1012c567c; end: 1012c56e7; +[SCProfileCalendarViewAllCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1012c567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_4);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_4);
  }
  func_0x00010006e7f4(&uStack_50);
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012c56e8; end: 1012c57bf;  */

void FUN_1012c56e8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11039d7c8;
    func_0x000107c613fc(&UNK_11039d7c8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uStack_48 = 0x1012c5c4c;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d808;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d9314a0,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012c57c0; end: 1012c5913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c57c0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d6fd60;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112d6fd60,auStack_80,0,0);
    func_0x000100672b50(param_1 + lVar3,auStack_68);
    if (lStack_50 == 0) {
      func_0x000107c61170(param_1);
      func_0x00010006e7f4(auStack_68);
    }
    else {
      uVar1 = 0;
      FUN_1012b73f4(0);
      plVar2 = &lStack_88;
      func_0x000107c6147c(plVar2,auStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)plVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112d6fd58);
        if (lVar3 != 0) {
          uVar1 = *(undefined8 *)(lStack_88 + _DAT_112d6f8c8);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c61174(uVar1);
          func_0x000107c445ac(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(param_1);
        param_1 = lStack_88;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1012c5914; end: 1012c59ab; -[SCProfileCalendarViewAllCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d6fd58) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112d6fd60);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_5 + _DAT_112d6fd68) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1012c59ac; end: 1012c5a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012c59ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6fd58) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fd60);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fd68) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 1012c5a48; end: 1012c5a6f; -[SCProfileCalendarViewAllCell initWithCoder:] */

void FUN_1012c5a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1012c59ac();
  return;
}



/* Entry: 1012c5a70; end: 1012c5aa3;  */

void FUN_1012c5a70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012c5aa4; end: 1012c5aeb; -[SCProfileCalendarViewAllCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5aa4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fd58));
  func_0x00010006e7f4(param_1 + _DAT_112d6fd60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fd68));
  return;
}



/* Entry: 1012c5aec; end: 1012c5b0b;  */

void FUN_1012c5aec(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4160);
  return;
}



/* Entry: 1012c5b0c; end: 1012c5b2f;  */

void FUN_1012c5b0c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039d7c8;
    func_0x000107c613fc(&UNK_11039d7c8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uStack_48 = 0x1012c5c4c;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d808;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d9314a0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012c5b30; end: 1012c5b8b;  */

void FUN_1012c5b30(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1012aeb90();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d6fda8;
  plVar5 = (long *)&UNK_10d9314e8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1012c5b8c; end: 1012c5c03;  */

void FUN_1012c5b8c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1012c5c54(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1012c5c04; end: 1012c5c53;  */

void FUN_1012c5c04(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d6fda0;
  plVar5 = (long *)&UNK_10d9314e0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1012c5c54(0,0x112d6f760,&PTR_PTR_1126a68d8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1012c5c54; end: 1012c5c93;  */

void FUN_1012c5c54(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012c5c94; end: 1012c5c9b;  */

void FUN_1012c5c94(long param_1,long param_2)

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



/* Entry: 1012c5c9c; end: 1012c5ca7; -[SCProfileCalendarMyProfileSectionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5c9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdb0;
  func_0x000107c61428(param_1 + _DAT_112d6fdb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5ca8; end: 1012c5cb3; -[SCProfileCalendarMyProfileSectionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdb0;
  func_0x000107c61428(param_1 + _DAT_112d6fdb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5cb4; end: 1012c5cbf; -[SCProfileCalendarMyProfileSectionEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdb8;
  func_0x000107c61428(param_1 + _DAT_112d6fdb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5cc0; end: 1012c5ccb; -[SCProfileCalendarMyProfileSectionEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdb8;
  func_0x000107c61428(param_1 + _DAT_112d6fdb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5ccc; end: 1012c5cd7; -[SCProfileCalendarMyProfileSectionEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5ccc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdc0;
  func_0x000107c61428(param_1 + _DAT_112d6fdc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5cd8; end: 1012c5ce3; -[SCProfileCalendarMyProfileSectionEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdc0;
  func_0x000107c61428(param_1 + _DAT_112d6fdc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5ce4; end: 1012c5cef; -[SCProfileCalendarMyProfileSectionEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5ce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdc8;
  func_0x000107c61428(param_1 + _DAT_112d6fdc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5cf0; end: 1012c5cfb; -[SCProfileCalendarMyProfileSectionEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdc8;
  func_0x000107c61428(param_1 + _DAT_112d6fdc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5cfc; end: 1012c5d07; -[SCProfileCalendarMyProfileSectionEntryPoint countdownsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdd0;
  func_0x000107c61428(param_1 + _DAT_112d6fdd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d08; end: 1012c5d13; -[SCProfileCalendarMyProfileSectionEntryPoint setCountdownsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdd0;
  func_0x000107c61428(param_1 + _DAT_112d6fdd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d14; end: 1012c5d1f; -[SCProfileCalendarMyProfileSectionEntryPoint calendarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdd8;
  func_0x000107c61428(param_1 + _DAT_112d6fdd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d20; end: 1012c5d2b; -[SCProfileCalendarMyProfileSectionEntryPoint setCalendarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdd8;
  func_0x000107c61428(param_1 + _DAT_112d6fdd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d2c; end: 1012c5d37; -[SCProfileCalendarMyProfileSectionEntryPoint countdownsNetworkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fde0;
  func_0x000107c61428(param_1 + _DAT_112d6fde0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d38; end: 1012c5d43; -[SCProfileCalendarMyProfileSectionEntryPoint setCountdownsNetworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fde0;
  func_0x000107c61428(param_1 + _DAT_112d6fde0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d44; end: 1012c5d4f; -[SCProfileCalendarMyProfileSectionEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fde8;
  func_0x000107c61428(param_1 + _DAT_112d6fde8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d50; end: 1012c5d5b; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fde8;
  func_0x000107c61428(param_1 + _DAT_112d6fde8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d5c; end: 1012c5d67; -[SCProfileCalendarMyProfileSectionEntryPoint composerPeopleBridgeFriendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdf0;
  func_0x000107c61428(param_1 + _DAT_112d6fdf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d68; end: 1012c5d73; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerPeopleBridgeFriendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdf0;
  func_0x000107c61428(param_1 + _DAT_112d6fdf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d74; end: 1012c5d7f; -[SCProfileCalendarMyProfileSectionEntryPoint composerPeopleBridgeGroupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fdf8;
  func_0x000107c61428(param_1 + _DAT_112d6fdf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d80; end: 1012c5d8b; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerPeopleBridgeGroupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fdf8;
  func_0x000107c61428(param_1 + _DAT_112d6fdf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5d8c; end: 1012c5d97; -[SCProfileCalendarMyProfileSectionEntryPoint universalSearchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe00;
  func_0x000107c61428(param_1 + _DAT_112d6fe00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5d98; end: 1012c5da3; -[SCProfileCalendarMyProfileSectionEntryPoint setUniversalSearchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe00;
  func_0x000107c61428(param_1 + _DAT_112d6fe00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5da4; end: 1012c5daf; -[SCProfileCalendarMyProfileSectionEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe08;
  func_0x000107c61428(param_1 + _DAT_112d6fe08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5db0; end: 1012c5dbb; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe08;
  func_0x000107c61428(param_1 + _DAT_112d6fe08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5dbc; end: 1012c5dc7; -[SCProfileCalendarMyProfileSectionEntryPoint composerPeopleBridgeUserServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5dbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe10;
  func_0x000107c61428(param_1 + _DAT_112d6fe10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5dc8; end: 1012c5dd3; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerPeopleBridgeUserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe10;
  func_0x000107c61428(param_1 + _DAT_112d6fe10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5dd4; end: 1012c5ddf; -[SCProfileCalendarMyProfileSectionEntryPoint composerSafetyReportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5dd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe18;
  func_0x000107c61428(param_1 + _DAT_112d6fe18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5de0; end: 1012c5deb; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerSafetyReportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe18;
  func_0x000107c61428(param_1 + _DAT_112d6fe18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5dec; end: 1012c5df7; -[SCProfileCalendarMyProfileSectionEntryPoint composerPeopleUserActionHandlerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5dec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe20;
  func_0x000107c61428(param_1 + _DAT_112d6fe20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5df8; end: 1012c5e03; -[SCProfileCalendarMyProfileSectionEntryPoint setComposerPeopleUserActionHandlerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe20;
  func_0x000107c61428(param_1 + _DAT_112d6fe20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5e04; end: 1012c5e0f; -[SCProfileCalendarMyProfileSectionEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe28;
  func_0x000107c61428(param_1 + _DAT_112d6fe28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5e10; end: 1012c5e1b; -[SCProfileCalendarMyProfileSectionEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe28;
  func_0x000107c61428(param_1 + _DAT_112d6fe28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5e1c; end: 1012c5e27; -[SCProfileCalendarMyProfileSectionEntryPoint blizzardUserServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe30;
  func_0x000107c61428(param_1 + _DAT_112d6fe30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5e28; end: 1012c5e33; -[SCProfileCalendarMyProfileSectionEntryPoint setBlizzardUserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe30;
  func_0x000107c61428(param_1 + _DAT_112d6fe30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5e34; end: 1012c5e3f; -[SCProfileCalendarMyProfileSectionEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe38;
  func_0x000107c61428(param_1 + _DAT_112d6fe38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5e40; end: 1012c5e4b; -[SCProfileCalendarMyProfileSectionEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe38;
  func_0x000107c61428(param_1 + _DAT_112d6fe38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5e4c; end: 1012c5e57; -[SCProfileCalendarMyProfileSectionEntryPoint storageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe40;
  func_0x000107c61428(param_1 + _DAT_112d6fe40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5e58; end: 1012c5e63; -[SCProfileCalendarMyProfileSectionEntryPoint setStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe40;
  func_0x000107c61428(param_1 + _DAT_112d6fe40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5e64; end: 1012c5e6f; -[SCProfileCalendarMyProfileSectionEntryPoint kronosCalendarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5e64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe48;
  func_0x000107c61428(param_1 + _DAT_112d6fe48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c5e70; end: 1012c5eb3;  */

void FUN_1012c5e70(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012c5eb4; end: 1012c5ebf; -[SCProfileCalendarMyProfileSectionEntryPoint setKronosCalendarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe48;
  func_0x000107c61428(param_1 + _DAT_112d6fe48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5ec0; end: 1012c5f13;  */

void FUN_1012c5ec0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c5f14; end: 1012c6403;  */

/* WARNING: Possible PIC construction at 0x0001012c6298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c62a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c62b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c62c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c62e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c63bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c63cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c63dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c638c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c639c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c635c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c636c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c633c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c634c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012c632c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012c6350) */
/* WARNING: Removing unreachable block (ram,0x0001012c6340) */
/* WARNING: Removing unreachable block (ram,0x0001012c6370) */
/* WARNING: Removing unreachable block (ram,0x0001012c6360) */
/* WARNING: Removing unreachable block (ram,0x0001012c63a0) */
/* WARNING: Removing unreachable block (ram,0x0001012c6390) */
/* WARNING: Removing unreachable block (ram,0x0001012c63e0) */
/* WARNING: Removing unreachable block (ram,0x0001012c63d0) */
/* WARNING: Removing unreachable block (ram,0x0001012c63c0) */
/* WARNING: Removing unreachable block (ram,0x0001012c62cc) */
/* WARNING: Removing unreachable block (ram,0x0001012c62bc) */
/* WARNING: Removing unreachable block (ram,0x0001012c62ac) */
/* WARNING: Removing unreachable block (ram,0x0001012c629c) */
/* WARNING: Removing unreachable block (ram,0x0001012c6330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c5f14(void)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d9b4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5b490();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3fa0c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c40848();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c3ef90();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c40844();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c40014();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  lVar9 = unaff_x20;
                  func_0x000107c3ffdc();
                  func_0x000107c61180();
                  lVar10 = unaff_x20;
                  func_0x000107c3ffe0();
                  func_0x000107c61180();
                  lVar11 = unaff_x20;
                  func_0x000107c5d268();
                  func_0x000107c61180();
                  lVar12 = unaff_x20;
                  func_0x000107c3ff88();
                  func_0x000107c61180();
                  lVar13 = unaff_x20;
                  func_0x000107c3ffe8();
                  func_0x000107c61180();
                  lVar14 = unaff_x20;
                  func_0x000107c40000();
                  func_0x000107c61180();
                  lVar15 = unaff_x20;
                  func_0x000107c3ffec();
                  func_0x000107c61180();
                  lVar16 = unaff_x20;
                  func_0x000107c41420();
                  func_0x000107c61180();
                  lVar17 = unaff_x20;
                  func_0x000107c3eae0();
                  func_0x000107c61180();
                  lVar18 = unaff_x20;
                  func_0x000107c5dbac();
                  func_0x000107c61180();
                  lVar19 = unaff_x20;
                  func_0x000107c5bec4();
                  func_0x000107c61180();
                  func_0x000107c4a93c();
                  func_0x000107c61180();
                  lVar20 = 0;
                  FUN_1012ae7e0();
                  lVar21 = lVar20;
                  func_0x000107c610f8();
                  *(long *)(lVar21 + _DAT_112d6f568) = lVar1;
                  *(long *)(lVar21 + _DAT_112d6f570) = lVar2;
                  *(long *)(lVar21 + _DAT_112d6f578) = lVar3;
                  *(long *)(lVar21 + _DAT_112d6f580) = lVar4;
                  *(long *)(lVar21 + _DAT_112d6f588) = lVar5;
                  *(long *)(lVar21 + _DAT_112d6f590) = lVar6;
                  *(long *)(lVar21 + _DAT_112d6f598) = lVar7;
                  *(long *)(lVar21 + _DAT_112d6f5a0) = lVar8;
                  *(long *)(lVar21 + _DAT_112d6f5a8) = lVar9;
                  *(long *)(lVar21 + _DAT_112d6f5b0) = lVar10;
                  *(long *)(lVar21 + _DAT_112d6f5b8) = lVar11;
                  *(long *)(lVar21 + _DAT_112d6f5c0) = lVar12;
                  *(long *)(lVar21 + _DAT_112d6f5c8) = lVar13;
                  *(long *)(lVar21 + _DAT_112d6f5d0) = lVar14;
                  *(long *)(lVar21 + _DAT_112d6f5d8) = lVar15;
                  *(long *)(lVar21 + _DAT_112d6f5e0) = lVar16;
                  *(long *)(lVar21 + _DAT_112d6f5e8) = lVar17;
                  *(long *)(lVar21 + _DAT_112d6f5f0) = lVar18;
                  *(long *)(lVar21 + _DAT_112d6f5f8) = lVar19;
                  *(long *)(lVar21 + _DAT_112d6f600) = unaff_x20;
                  lStack_70 = lVar21;
                  lStack_68 = lVar20;
                  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
                  func_0x0001012ad86c();
                  lVar1 = lVar8;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012c6404; end: 1012c642b; -[SCProfileCalendarMyProfileSectionEntryPoint begin] */

void FUN_1012c6404(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012c5f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012c642c; end: 1012c646f; -[SCProfileCalendarMyProfileSectionEntryPoint end] */

void FUN_1012c642c(undefined8 param_1)

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



/* Entry: 1012c6470; end: 1012c6d67;  */

void FUN_1012c6470(long param_1,long param_2,long param_3)

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
    goto LAB_1012c6500;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000013;
      if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10e3670)) ||
         (func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10cc040)) ||
             (func_0x000107c605b8(0xd000000000000012,0x800000010ef33fc0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53a10();
          }
          else {
            if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10cc690)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000010,0x800000010ef33970,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd000000000000019;
                if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10cc020)) ||
                   (func_0x000107c605b8(0xd000000000000019,0x800000010ef33fe0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c53a0c();
                  goto LAB_1012c6500;
                }
                if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d2c00)) ||
                       (func_0x000107c605b8(0xd000000000000022,0x800000010ef2d400,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c536b4();
                    }
                    else {
                      uVar2 = 0xd000000000000021;
                      if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10cc000)) ||
                         (func_0x000107c605b8(0xd000000000000021,0x800000010ef34000,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c536b8();
                      }
                      else {
                        uVar2 = 0xd000000000000017;
                        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10cbfd0))
                           || (func_0x000107c605b8(0xd000000000000017,0x800000010ef34030,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5a194();
                        }
                        else {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0))
                             || (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c53680();
                          }
                          else {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffe0) &&
                                (param_3 == -0x7ffffffef10d3e20)) ||
                               (func_0x000107c605b8(0xd000000000000020,0x800000010ef2c1e0,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c536c0();
                            }
                            else {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffe4) &&
                                  (param_3 == -0x7ffffffef10d2b90)) ||
                                 (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2d470,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c536d0();
                              }
                              else {
                                uVar2 = 0xd000000000000027;
                                if (((param_2 == -0x2fffffffffffffd9) &&
                                    (param_3 == -0x7ffffffef10d2c30)) ||
                                   (func_0x000107c605b8(0xd000000000000027,0x800000010ef2d3d0,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c536c4();
                                }
                                else {
                                  uVar2 = 0;
                                  if (((param_2 == 0x767265536b636564) &&
                                      (param_3 == -0x13ffffff8c9a9c97)) ||
                                     (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c53e98();
                                  }
                                  else {
                                    uVar2 = 0;
                                    if (((param_2 == -0x2fffffffffffffec) &&
                                        (param_3 == -0x7ffffffef10cbfb0)) ||
                                       (func_0x000107c605b8(0xd000000000000014,0x800000010ef34050,
                                                            param_2,param_3,0), (uVar2 & 1) != 0)) {
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c52d84();
                                    }
                                    else {
                                      if ((param_2 != -0x2fffffffffffffe4) ||
                                         (param_3 != -0x7ffffffef10e4100)) {
                                        uVar2 = 0;
                                        func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = 0x53656761726f7473;
                                          if (((param_2 == 0x53656761726f7473) &&
                                              (param_3 == -0x108c9a9c96898d9b)) ||
                                             (func_0x000107c605b8(0x53656761726f7473,
                                                                  0xef73656369767265,param_2,param_3
                                                                  ,0), (uVar2 & 1) != 0)) {
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c598dc();
                                          }
                                          else {
                                            if ((param_2 != -0x2fffffffffffffea) ||
                                               (param_3 != -0x7ffffffef10cbf90)) {
                                              uVar2 = 0;
                                              func_0x000107c605b8(0xd000000000000016,
                                                                  0x800000010ef34070,param_2,param_3
                                                                  ,0);
                                              if ((uVar2 & 1) == 0) {
                                                func_0x000107c602fc(0x15);
                                                func_0x000107c6142c(0xe000000000000000);
                                                func_0x000107c5fb78(param_2,param_3);
                                                func_0x000107c60450("Fatal error",0xb,2,
                                                                    0xd000000000000013,
                                                                    0x800000010ef0fc20,
                                                                                                                                        
                                                  "SCProfileCalendarSection/SCProfileCalendarMyProfileSectionEntryPoint.swift"
                                                  ,0x4a,2,0x83,0);
                    /* WARNING: Does not return */
                                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1012c6d68);
                                                (*pcVar1)();
                                              }
                                            }
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c559dc();
                                          }
                                          goto LAB_1012c6500;
                                        }
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c5a46c();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1012c6500;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c536e0();
                goto LAB_1012c6500;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52f2c();
          }
        }
      }
      goto LAB_1012c6500;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a368();
LAB_1012c6500:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012c6d68; end: 1012c6e13; -[SCProfileCalendarMyProfileSectionEntryPoint setValue:forIvarName:] */

void FUN_1012c6d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012c6470(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012c6e14; end: 1012c6fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c6e14(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fde0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fde8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fdf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6fe48,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6fe50) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012c6ff0; end: 1012c700f; -[SCProfileCalendarMyProfileSectionEntryPoint init] */

void FUN_1012c6ff0(void)

{
  FUN_1012c6e14();
  return;
}



/* Entry: 1012c7010; end: 1012c7043;  */

void FUN_1012c7010(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012c7044; end: 1012c71ab; -[SCProfileCalendarMyProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7044(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6fdb0);
  func_0x000107c61610(param_1 + _DAT_112d6fdb8);
  func_0x000107c61610(param_1 + _DAT_112d6fdc0);
  func_0x000107c61610(param_1 + _DAT_112d6fdc8);
  func_0x000107c61610(param_1 + _DAT_112d6fdd0);
  func_0x000107c61610(param_1 + _DAT_112d6fdd8);
  func_0x000107c61610(param_1 + _DAT_112d6fde0);
  func_0x000107c61610(param_1 + _DAT_112d6fde8);
  func_0x000107c61610(param_1 + _DAT_112d6fdf0);
  func_0x000107c61610(param_1 + _DAT_112d6fdf8);
  func_0x000107c61610(param_1 + _DAT_112d6fe00);
  func_0x000107c61610(param_1 + _DAT_112d6fe08);
  func_0x000107c61610(param_1 + _DAT_112d6fe10);
  func_0x000107c61610(param_1 + _DAT_112d6fe18);
  func_0x000107c61610(param_1 + _DAT_112d6fe20);
  func_0x000107c61610(param_1 + _DAT_112d6fe28);
  func_0x000107c61610(param_1 + _DAT_112d6fe30);
  func_0x000107c61610(param_1 + _DAT_112d6fe38);
  func_0x000107c61610(param_1 + _DAT_112d6fe40);
  func_0x000107c61610(param_1 + _DAT_112d6fe48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fe50));
  return;
}



/* Entry: 1012c71ac; end: 1012c71cb;  */

void FUN_1012c71ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4228);
  return;
}



/* Entry: 1012c71cc; end: 1012c71d7; -[SCProfileCalendarFriendProfileSectionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c71cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe80;
  func_0x000107c61428(param_1 + _DAT_112d6fe80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c71d8; end: 1012c71e3; -[SCProfileCalendarFriendProfileSectionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c71d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe80;
  func_0x000107c61428(param_1 + _DAT_112d6fe80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c71e4; end: 1012c71ef; -[SCProfileCalendarFriendProfileSectionEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c71e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe88;
  func_0x000107c61428(param_1 + _DAT_112d6fe88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c71f0; end: 1012c71fb; -[SCProfileCalendarFriendProfileSectionEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c71f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe88;
  func_0x000107c61428(param_1 + _DAT_112d6fe88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c71fc; end: 1012c7207; -[SCProfileCalendarFriendProfileSectionEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c71fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe90;
  func_0x000107c61428(param_1 + _DAT_112d6fe90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c7208; end: 1012c7213; -[SCProfileCalendarFriendProfileSectionEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe90;
  func_0x000107c61428(param_1 + _DAT_112d6fe90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c7214; end: 1012c721f; -[SCProfileCalendarFriendProfileSectionEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fe98;
  func_0x000107c61428(param_1 + _DAT_112d6fe98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c7220; end: 1012c722b; -[SCProfileCalendarFriendProfileSectionEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fe98;
  func_0x000107c61428(param_1 + _DAT_112d6fe98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c722c; end: 1012c7237; -[SCProfileCalendarFriendProfileSectionEntryPoint countdownsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c722c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fea0;
  func_0x000107c61428(param_1 + _DAT_112d6fea0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c7238; end: 1012c7243; -[SCProfileCalendarFriendProfileSectionEntryPoint setCountdownsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fea0;
  func_0x000107c61428(param_1 + _DAT_112d6fea0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012c7244; end: 1012c724f; -[SCProfileCalendarFriendProfileSectionEntryPoint calendarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7244(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6fea8;
  func_0x000107c61428(param_1 + _DAT_112d6fea8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c7250; end: 1012c725b; -[SCProfileCalendarFriendProfileSectionEntryPoint setCalendarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c7250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6fea8;
  func_0x000107c61428(param_1 + _DAT_112d6fea8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


