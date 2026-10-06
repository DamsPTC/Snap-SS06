/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102533468; end: 102533507; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler createEmbeddedMapViewFactoryWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c5faec(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x70);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,param_2,uVar2,lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102533508; end: 1025335a7; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler getCurrentUserLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533508(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea40e8);
  lVar3 = ((long *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0();
  pcVar4 = *(code **)(lVar3 + 0x78);
  func_0x000107c61174(param_1);
  (*pcVar4)(lVar1,lVar3);
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1025335a8; end: 10253360f; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler launchEmojiPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025335a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x80);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102533610; end: 102533697; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler presentDirectionsMenuWithLat:lng:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_3 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x88);
  func_0x000107c61174(param_3);
  (*pcVar3)(param_1,param_2,0,0,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102533698; end: 10253372f; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler handleSearchButtonTapWithSearchFirstFlowEnabled:suggestedPlacesConfig:] */

/* WARNING: Possible PIC construction at 0x000102533710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102533714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x90);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,param_4,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102533730; end: 1025337a3; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler getPinLocationUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533730(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x50);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025337a4; end: 102533803; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler init] */

void FUN_1025337a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardImplementation.MapArrivalNotificationsActionHandler",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025337d0);
  (*pcVar1)();
}



/* Entry: 102533804; end: 102533813; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea40e8));
  return;
}



/* Entry: 102533814; end: 102533833;  */

void FUN_102533814(void)

{
  func_0x000107c61168(&PTR_PTR_11284c818);
  return;
}



/* Entry: 102533834; end: 102533abb;  */

void FUN_102533834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea4118,&UNK_10dab71a0);
  puVar1 = &UNK_11051dce0;
  func_0x000107c613fc(&UNK_11051dce0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102533abc,puVar1);
  return;
}



/* Entry: 102533abc; end: 102533acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533abc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = lVar2;
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_102534388();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea4120);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(lVar6 + _DAT_112ea4128,0);
  lVar4 = _DAT_112ea4130;
  uVar7 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar6 + lVar4) = uVar7;
  *(long *)(lVar6 + _DAT_112ea4138) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112ea4140) = uStack_68;
  *(undefined8 *)(lVar6 + _DAT_112ea4148) = uStack_70;
  *(undefined8 *)(lVar6 + _DAT_112ea4150) = uStack_78;
  *(undefined8 *)(lVar6 + _DAT_112ea4158) = uStack_80;
  *(undefined8 *)(lVar6 + _DAT_112ea4160) = uStack_88;
  *(undefined8 *)(lVar6 + _DAT_112ea4168) = uStack_90;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  func_0x000107c6157c(lVar2);
  plVar8 = &lStack_a0;
  func_0x000107c61154(plVar8,puVar3);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 102533ad0; end: 102533bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea4120);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ea4128,0);
  lVar2 = _DAT_112ea4130;
  uVar3 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4138) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4140) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4148) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4150) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4158) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4160) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4168) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102533c00; end: 102533d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102533c00(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ea4120);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    func_0x000102533c74();
    lVar2 = *plVar1;
    *plVar1 = unaff_x20;
    plVar1[1] = param_2;
    func_0x000107c615f0();
    func_0x000107c615e8(lVar2);
    lVar2 = 0;
  }
  else {
    param_2 = plVar1[1];
    unaff_x20 = lVar2;
  }
  func_0x000107c615f0(lVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}



/* Entry: 102533d18; end: 102533d5f; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533d18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea4128;
  func_0x000107c61428(param_1 + _DAT_112ea4128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102533d60; end: 102533db3; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter setPresentingViewController:] */

/* WARNING: Possible PIC construction at 0x000102533d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102533da0) */

void FUN_102533d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102534298(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102533db4; end: 102534057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102533db4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = _DAT_112ea4128;
  puVar12 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112ea4128,puVar12,0,0);
  lVar8 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar8 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea4168) + _DAT_112fa9350);
    uVar11 = *puVar1;
    uVar2 = puVar1[1];
    uVar4 = uVar2;
    func_0x000107c61434();
    FUN_102533c00();
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ea4160);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ea4148);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4150);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ea4158);
    func_0x000107c4141c();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c41414();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    lVar8 = *(long *)(unaff_x20 + _DAT_112ea4140);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102534058);
      (*pcVar3)();
    }
    lVar9 = 0;
    FUN_102534860();
    lVar10 = lVar9;
    func_0x000107c610f8();
    *(undefined8 *)(lVar10 + _DAT_112ea4198) = 0;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ea41a0);
    *puVar1 = uVar11;
    puVar1[1] = uVar2;
    *(long *)(lVar10 + _DAT_112ea41a8) = unaff_x20;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ea41b0);
    *puVar1 = uVar4;
    puVar1[1] = puVar12;
    *(undefined8 *)(lVar10 + _DAT_112ea41b8) = uVar15;
    *(undefined8 *)(lVar10 + _DAT_112ea41c0) = uVar5;
    *(undefined8 *)(lVar10 + _DAT_112ea41c8) = uVar7;
    *(long *)(lVar10 + _DAT_112ea41d0) = lVar8;
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(lVar8);
    uVar11 = uVar14;
    func_0x000107c3dae4();
    func_0x000107c61180();
    *(undefined8 *)(lVar10 + _DAT_112ea41d8) = uVar11;
    uVar11 = uVar14;
    func_0x000107c4d814();
    func_0x000107c61180();
    *(undefined8 *)(lVar10 + _DAT_112ea41e0) = uVar11;
    func_0x000107c3cfe0();
    func_0x000107c61180();
    *(undefined8 *)(lVar10 + _DAT_112ea41e8) = uVar14;
    plVar13 = &lStack_88;
    lStack_88 = lVar10;
    lStack_80 = lVar9;
    func_0x000107c61154(0,0,0,0,plVar13,PTR_s_initWithFrame__1125e2948);
    func_0x000107c61180();
    FUN_1025345fc();
    func_0x000107c61170(plVar13);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(lVar8);
  }
  return plVar13;
}



/* Entry: 102534058; end: 10253408b; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter presentView] */

void FUN_102534058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102533db4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10253408c; end: 1025340cb;  */

void FUN_10253408c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1025340cc; end: 102534147; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter heightUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025340cc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c61174(param_1);
  pcVar2 = FUN_10253408c;
  func_0x0001000bfde0(FUN_10253408c,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 102534148; end: 10253417f; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter notifyMapViewCellWillRender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534148(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102531538(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102534180; end: 1025341df; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter init] */

void FUN_102534180(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardImplementation.MapFriendProfileCardPresenter",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025341ac);
  (*pcVar1)();
}



/* Entry: 1025341e0; end: 102534297; -[_TtC34MapFriendProfileCardImplementation29MapFriendProfileCardPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025341fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253423c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253425c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102534240) */
/* WARNING: Removing unreachable block (ram,0x000102534200) */
/* WARNING: Removing unreachable block (ram,0x000102534260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025341e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea4160));
  return;
}



/* Entry: 102534298; end: 102534377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534298(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ea4128;
  func_0x000107c61428(unaff_x20 + _DAT_112ea4128,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  lVar5 = *(long *)(unaff_x20 + _DAT_112ea4160);
  lVar3 = unaff_x20 + lVar2;
  func_0x000107c61618();
  lVar1 = _DAT_112ea3fd8;
  func_0x000107c61428(lVar5 + _DAT_112ea3fd8,auStack_70,1,0);
  lVar4 = lVar3;
  func_0x000107c61604(lVar5 + lVar1);
  func_0x000107c61170(lVar3);
  FUN_102533c00();
  func_0x000107c614f0();
  func_0x000107c61618(unaff_x20 + lVar2);
  (**(code **)(lVar4 + 0x10))();
  func_0x000107c615e8(lVar3);
  return;
}



/* Entry: 102534378; end: 102534387;  */

undefined1  [16] FUN_102534378(void)

{
  return ZEXT816(0x11051dd08);
}



/* Entry: 102534388; end: 1025343a7;  */

void FUN_102534388(void)

{
  func_0x000107c61168(&PTR_PTR_11284c8d8);
  return;
}



/* Entry: 1025343a8; end: 102534597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025343a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4198) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea41a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea41a8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea41b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea41b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea41c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea41c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ea41d0) = param_10;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  uVar2 = param_7;
  func_0x000107c3dae4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112ea41d8) = uVar2;
  uVar2 = param_7;
  func_0x000107c4d814();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112ea41e0) = uVar2;
  uVar2 = param_7;
  func_0x000107c3cfe0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112ea41e8) = uVar2;
  puVar3 = auStack_70;
  func_0x000107c61154(0,0,0,0,puVar3,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1025345fc();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  return puVar3;
}



/* Entry: 102534598; end: 1025345fb; -[_TtC34MapFriendProfileCardImplementation24MapFriendProfileCardView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534598(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea4198) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapFriendProfileCardImplementation/MapFriendProfileCardView.swift",0x41,2,
                      0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025345fc);
  (*pcVar1)();
}



/* Entry: 1025345fc; end: 10253485f;  */

/* WARNING: Possible PIC construction at 0x0001025346d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253472c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102534780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025347a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025347dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253481c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025347e0) */
/* WARNING: Removing unreachable block (ram,0x0001025347ac) */
/* WARNING: Removing unreachable block (ram,0x000102534784) */
/* WARNING: Removing unreachable block (ram,0x000102534730) */
/* WARNING: Removing unreachable block (ram,0x0001025346dc) */
/* WARNING: Removing unreachable block (ram,0x000102534820) */

void FUN_1025345fc(long param_1)

{
  undefined *puVar1;
  
  FUN_102534880();
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c3d89c();
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar1 = &SUB_100847984;
    FUN_102535040(&SUB_100847984,0x112d36e78,&UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 9;
    *(undefined8 *)(puVar1 + 0x10) = 4;
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c40280(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102534860; end: 10253487f;  */

void FUN_102534860(void)

{
  func_0x000107c61168(&PTR_PTR_11284c9e0);
  return;
}



/* Entry: 102534880; end: 102534d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534880(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined1 *puVar14;
  long unaff_x20;
  long lVar15;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar13 = &lStack_b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea41c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea41a0);
      uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112ea41a0))[1];
      puVar4 = PTR_PTR_1126aaa30;
      func_0x000107c610f8(PTR_PTR_1126aaa30);
      func_0x000107c5fadc(uVar5,uVar7);
      func_0x000107c46a18(puVar4);
      func_0x000107c61170(uVar5);
      puVar6 = PTR_PTR_1126aaa38;
      func_0x000107c610f8(PTR_PTR_1126aaa38);
      func_0x000107c453e4();
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea41b0);
      lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ea41b0))[1];
      uVar7 = uVar5;
      func_0x000107c614f0(uVar5);
      (**(code **)(lVar2 + 0x30))();
      func_0x000107c59234(puVar6);
      lVar8 = 0;
      FUN_102533814();
      lVar10 = lVar8;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar10 + _DAT_112ea40e8);
      *puVar1 = uVar5;
      puVar1[1] = lVar2;
      puVar11 = PTR_s_init_1125d9248;
      lStack_70 = lVar10;
      lStack_68 = lVar8;
      func_0x000107c615f0(uVar5);
      plVar9 = &lStack_70;
      func_0x000107c61154(plVar9,puVar11);
      func_0x000107c528ec(puVar6);
      func_0x000107c61170(plVar9);
      lVar10 = *(long *)(unaff_x20 + _DAT_112ea41e8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar10;
        func_0x000107c4c1dc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c52188(puVar6);
      func_0x000107c615e8(lVar8);
      lVar10 = *(long *)(unaff_x20 + _DAT_112ea41d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar10;
        func_0x000107c4c1dc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c52604(puVar6);
      func_0x000107c615e8(lVar8);
      lVar10 = *(long *)(unaff_x20 + _DAT_112ea41e0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar10;
        func_0x000107c4c1dc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c56b20(puVar6);
      func_0x000107c615e8(lVar8);
      FUN_102534df8();
      func_0x000107c53e94(puVar6);
      func_0x000107c615e8(lVar8);
      uVar5 = uVar7;
      (**(code **)(lVar2 + 0x40))(uVar7,lVar2);
      func_0x000107c54480(puVar6);
      func_0x000107c61170(uVar5);
      puVar11 = &UNK_11051dd28;
      func_0x000107c613fc(&UNK_11051dd28,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      pcStack_80 = FUN_10253501c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f7177c;
      puStack_88 = &UNK_11051dd40;
      ppuVar12 = &puStack_a0;
      puStack_78 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61574(puStack_78);
      func_0x000107c56f5c(puVar6);
      func_0x000107c60bd0(ppuVar12);
      lVar15 = *(long *)(unaff_x20 + _DAT_112ea41b8);
      lVar8 = 0;
      FUN_10252f680();
      lVar10 = lVar8;
      func_0x000107c610f8();
      *(long *)(lVar10 + _DAT_112ea3f88) = lVar15;
      puVar11 = PTR_s_init_1125d9248;
      lStack_b0 = lVar10;
      lStack_a8 = lVar8;
      func_0x000107c61174();
      func_0x000107c61154(&lStack_b0,puVar11);
      func_0x000107c56040(puVar6);
      func_0x000107c61170(plVar13);
      FUN_102531984();
      func_0x000102531a88();
      func_0x000102531bb8();
      func_0x0001004575f0();
      puVar14 = (undefined1 *)plVar13;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(plVar13);
      func_0x000107c54c18(puVar6);
      func_0x000107c61170(puVar14);
      (**(code **)(lVar2 + 0x48))(uVar7,lVar2);
      func_0x000107c57410(puVar6);
      func_0x000107c61170(uVar7);
      puVar1 = (undefined8 *)(*(long *)(lVar15 + _DAT_112ea40b0) + _DAT_112fa9358);
      uVar5 = *puVar1;
      uVar7 = puVar1[1];
      func_0x000107c61434(uVar7);
      func_0x000107c5fadc(uVar5,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c57904(puVar6);
      func_0x000107c61170(uVar5);
      puVar11 = PTR_PTR_1126aaa40;
      func_0x000107c610f8(PTR_PTR_1126aaa40);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar6);
      func_0x000107c49520(puVar11);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 102534d5c; end: 102534df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534d5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ea41a8);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uStack_60 = param_1;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102534df8; end: 102534ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534df8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea41c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = _DAT_112ea4128;
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ea41a8);
    func_0x000107c61428(lVar3 + _DAT_112ea4128,auStack_48,0,0);
    lVar3 = lVar3 + lVar2;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c409cc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar3);
      }
      else {
        func_0x000107c40978();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 102534ef4; end: 102534f4f; -[_TtC34MapFriendProfileCardImplementation24MapFriendProfileCardView initWithFrame:] */

void FUN_102534ef4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardImplementation.MapFriendProfileCardView",0x3b,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102534f20);
  (*pcVar1)();
}



/* Entry: 102534f50; end: 10253501b; -[_TtC34MapFriendProfileCardImplementation24MapFriendProfileCardView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102534f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102534fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102534fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102534ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102534fc4) */
/* WARNING: Removing unreachable block (ram,0x000102534fa4) */
/* WARNING: Removing unreachable block (ram,0x000102534f84) */
/* WARNING: Removing unreachable block (ram,0x000102534ff4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102534f50(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea41a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea41c0));
  return;
}



/* Entry: 10253501c; end: 10253503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253501c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ea41a8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uStack_60 = param_1;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102535040; end: 1025350ab;  */

void FUN_102535040(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1025350ac; end: 102535293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025350ac(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ea4230;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102536a44();
  lVar3 = 0x112ea4218;
  puStack_58 = puVar2;
  func_0x0001000285a8(0x112ea4218,&UNK_10dab7220);
  func_0x000107c613fc();
  ppuVar4 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar4;
  lVar1 = _DAT_112ea4228;
  puVar2 = puVar6;
  FUN_102536a44();
  puStack_58 = puVar2;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar4 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar4;
  lVar3 = _DAT_112ea4240;
  puVar2 = puVar6;
  FUN_102536a44();
  uVar5 = 0x112ea4220;
  puStack_58 = puVar2;
  func_0x0001000285a8(0x112ea4220,&UNK_10dab7228);
  func_0x000107c613fc();
  ppuVar4 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar3) = ppuVar4;
  lVar3 = _DAT_112ea4238;
  puVar2 = puVar6;
  FUN_102536a44();
  puStack_58 = puVar2;
  func_0x000107c613fc(uVar5,0x20,7);
  ppuVar4 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar3) = ppuVar4;
  lVar3 = _DAT_112ea4258;
  puVar2 = puVar6;
  func_0x000100bcbf04();
  uVar5 = 0x112e07f78;
  puStack_58 = puVar2;
  func_0x0001000285a8(0x112e07f78,&UNK_10dab7230);
  func_0x000107c613fc();
  ppuVar4 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar3) = ppuVar4;
  lVar3 = _DAT_112ea4248;
  func_0x000100bcbf04();
  puStack_58 = puVar6;
  func_0x000107c613fc(uVar5,0x20,7);
  ppuVar4 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar3) = ppuVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4260) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102535294; end: 1025352eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102535294(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  lVar1 = _DAT_112ea4238;
  if ((param_1 & 1) != 0) {
    lVar1 = _DAT_112ea4240;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar2);
  return uStack_28;
}



/* Entry: 1025352ec; end: 10253542f;  */

void FUN_1025352ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar2 = (param_3 & 1) == 0;
  plVar1 = (long *)&DAT_112ea4230;
  if (bVar2) {
    plVar1 = (long *)&DAT_112ea4228;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + *plVar1);
  plVar1 = (long *)&DAT_112ea4258;
  if (bVar2) {
    plVar1 = (long *)&DAT_112ea4248;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + *plVar1);
  plVar1 = (long *)&DAT_112ea4240;
  if (bVar2) {
    plVar1 = (long *)&DAT_112ea4238;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + *plVar1);
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_4;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  uVar3 = 0x112ea4250;
  func_0x0001000285a8(0x112ea4250,&UNK_10dab7238);
  func_0x000100075034(&uStack_58,FUN_102536b38,auStack_80,uVar3);
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000100075034(0x102536b54,auStack_80,PTR___sytN_11034f1b0 + 8);
  auStack_80[0] = uStack_58;
  func_0x0001007d6d78(auStack_80);
  func_0x000107c6142c(uStack_58);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102535430; end: 1025354b3;  */

void FUN_102535430(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  func_0x000107c61558(uVar1);
  uVar2 = *param_2;
  FUN_102536500(param_5,param_3,param_4,uVar1);
  *param_2 = uVar2;
  *param_1 = uVar2;
  func_0x000107c6157c();
  return;
}



/* Entry: 1025354b4; end: 102535577;  */

void FUN_1025354b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c61434(param_3);
  func_0x000107c5eea0(puVar2);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,0,1,lVar1);
  func_0x000100fd88c8(puVar2,param_2,param_3);
  return;
}



/* Entry: 102535578; end: 1025355eb; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider updateStateWithFriendId:isLiveLocationRequest:state:] */

void FUN_102535578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1025352ec(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025355ec; end: 10253563b;  */

void FUN_1025355ec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x101) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253563c,0,0);
  return;
}



/* Entry: 10253563c; end: 1025358ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253563c(void)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = unaff_x22 + 0x50;
  lVar6 = *(long *)(unaff_x22 + 200);
  bVar2 = *(char *)(unaff_x22 + 0x100) == '\0';
  plVar1 = (long *)&DAT_112ea4240;
  if (bVar2) {
    plVar1 = (long *)&DAT_112ea4238;
  }
  uVar5 = *(undefined8 *)(lVar6 + *plVar1);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  plVar1 = (long *)&DAT_112ea4258;
  if (bVar2) {
    plVar1 = (long *)&DAT_112ea4248;
  }
  uVar8 = *(undefined8 *)(lVar6 + *plVar1);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
  if ((*(byte *)(unaff_x22 + 0x101) & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar8);
    uVar9 = 0x112d5e960;
    func_0x0001000285a8(0x112d5e960,&UNK_10d9258e0);
    func_0x000100075034(unaff_x22 + 0x78,0x102536b6c,lVar4,uVar9);
    if (*(char *)(unaff_x22 + 0x80) == '\x01') {
      lVar6 = *(long *)(unaff_x22 + 200);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000100075034(unaff_x22 + 0x78,FUN_102536b9c,lVar4,PTR___sSbN_11034dd40);
      lVar6 = *(long *)(unaff_x22 + 200);
      if ((*(byte *)(unaff_x22 + 0x78) & 1) == 0) {
        FUN_1025352ec(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
                      *(undefined1 *)(unaff_x22 + 0x100),uVar9);
        uVar7 = 0;
        goto LAB_102535874;
      }
    }
  }
  else {
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar8);
  }
  lVar3 = *(long *)(lVar6 + _DAT_112ea4260);
  func_0x000107c5dc04();
  func_0x000107c61180();
  lVar6 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  func_0x000107c61170(lVar3);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c5fadc(uVar5,*(undefined8 *)(unaff_x22 + 0xc0));
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
    *(long *)(unaff_x22 + 0x38) = lVar4;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025358ac;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,1);
    uVar5 = 0x112ea4268;
    func_0x0001000285a8(0x112ea4268,&UNK_10dab7250);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
    *(long *)(unaff_x22 + 0x98) = lVar4;
    *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
    *(code **)(unaff_x22 + 0x88) = FUN_102535c48;
    *(undefined **)(unaff_x22 + 0x90) = &UNK_11051ddf0;
    func_0x000107c3f424(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar9 = 0;
  uVar7 = 1;
LAB_102535874:
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001025358a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar7);
  return;
}



/* Entry: 1025358ac; end: 102535903;  */

void FUN_1025358ac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102535904;
  }
  else {
    pcVar1 = FUN_1025359a4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102535904; end: 1025359a3;  */

void FUN_102535904(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar3 = lVar5 - 1;
  if (uVar3 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10dab7318 + uVar3 * 8);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_1025352ec(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
                *(undefined1 *)(unaff_x22 + 0x100),uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001025359a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,0);
  return;
}



/* Entry: 1025359a4; end: 102535a27;  */

void FUN_1025359a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61654();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar4);
  func_0x000107c614ac(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102535a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,1);
  return;
}



/* Entry: 102535a28; end: 102535abb;  */

void FUN_102535a28(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
    bVar2 = true;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    bVar2 = (param_4 & 1) == 0;
    if (bVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 102535abc; end: 102535c47;  */

void FUN_102535abc(undefined8 param_1,double param_2,long *param_3,long param_4,ulong param_5)

{
  long lVar1;
  bool bVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12_00;
  lVar8 = *param_3;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    func_0x000100029284(param_4);
    if ((param_5 & 1) != 0) {
      (**(code **)(lVar3 + 0x10))
                (lVar7,*(long *)(lVar8 + 0x38) + *(long *)(lVar3 + 0x48) * param_4,lVar1);
      func_0x000107c6142c(lVar8);
      (**(code **)(lVar3 + 0x20))(lVar6,lVar7,lVar1);
      func_0x000107c5eea0(puVar5);
      func_0x000107c5ee68(lVar6);
      pcVar4 = *(code **)(lVar3 + 8);
      (*pcVar4)(puVar5,lVar1);
      (*pcVar4)(lVar6,lVar1);
      bVar2 = 300.0 < param_2;
      goto LAB_102535c1c;
    }
    func_0x000107c6142c(lVar8);
  }
  bVar2 = true;
LAB_102535c1c:
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 102535c48; end: 102535ce3;  */

void FUN_102535c48(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102535ce4; end: 102535d43; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider init] */

void FUN_102535ce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationRequestStateServicesImplementation.LocationRequestStateProvider",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102535d10);
  (*pcVar1)();
}



/* Entry: 102535d44; end: 102535dcb; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102535d44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4230));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4228));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4240));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4238));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4258));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4248));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea4260));
  return;
}



/* Entry: 102535dcc; end: 102535df7;  */

void FUN_102535dcc(ulong param_1)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = (long *)&DAT_112ea4230;
  if ((param_1 & 1) == 0) {
    plVar1 = (long *)&DAT_112ea4228;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + *plVar1));
  return;
}



/* Entry: 102535df8; end: 102535e6b;  */

void FUN_102535df8(long param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102535e6c;
  plVar1[0x18] = param_2;
  plVar1[0x19] = unaff_x20;
  *(undefined1 *)((long)plVar1 + 0x101) = param_4;
  *(undefined1 *)(plVar1 + 0x20) = param_3;
  plVar1[0x17] = param_1;
  func_0x000107c614f0();
  plVar1[0x1a] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253563c,0,0);
  return;
}



/* Entry: 102535e6c; end: 102535eb7;  */

void FUN_102535e6c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102535eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 102535eb8; end: 102536037;  */

void FUN_102535eb8(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar12 = *param_2;
  func_0x0001000285a8(0x112d5f6c0,&UNK_10d93d7c0);
  lVar6 = lVar12;
  func_0x000107c6048c();
  lVar13 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar12 + 0x40);
  if (uVar14 == 0) goto LAB_102535f58;
  do {
    uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar14 = uVar14 - 1 & uVar14;
    while( true ) {
      uVar7 = LZCOUNT(uVar7);
      uVar8 = uVar7 | lVar13 << 6;
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar8 * 0x10);
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar8 * 8);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar10 = (uVar7 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
      *(ulong *)(lVar6 + 0x40 + uVar10) = *(ulong *)(lVar6 + 0x40 + uVar10) | 1L << (uVar7 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = uVar11;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102536038);
        (*pcVar5)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      func_0x000107c61434();
      if (uVar14 != 0) break;
LAB_102535f58:
      do {
        lVar1 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102536034);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar1) {
          lVar13 = lVar6;
          func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c61574(lVar6);
          *param_1 = lVar13;
          return;
        }
        uVar14 = ((ulong *)(lVar12 + 0x40))[lVar1];
        lVar13 = lVar13 + 1;
      } while (uVar14 == 0);
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar1;
    }
  } while( true );
}



/* Entry: 102536038; end: 1025360db; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider objcStateObservableWithIsLiveLocationRequest:] */

void FUN_102536038(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)&DAT_112ea4230;
  if (param_3 == 0) {
    plVar1 = (long *)&DAT_112ea4228;
  }
  uVar5 = *(undefined8 *)(param_1 + *plVar1);
  uVar2 = 0;
  func_0x000101c68d90(0);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar5);
  pcVar3 = FUN_102535eb8;
  func_0x0001000bfde0(FUN_102535eb8,0,uVar2);
  pcVar4 = pcVar3;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
  return;
}



/* Entry: 1025360dc; end: 102536293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025360dc(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lStack_58;
  
  lVar12 = _DAT_112ea4238;
  if ((param_1 & 1) != 0) {
    lVar12 = _DAT_112ea4240;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c6157c(uVar11);
  func_0x0001000c74f0(&lStack_58);
  func_0x000107c61574(uVar11);
  func_0x0001000285a8(0x112d5f6c0,&UNK_10d93d7c0);
  lVar5 = lStack_58;
  func_0x000107c6048c();
  lVar12 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(lStack_58 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lStack_58 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lStack_58 + 0x40);
  if (uVar13 == 0) goto LAB_1025361ac;
  do {
    uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar13 = uVar13 - 1 & uVar13;
    while( true ) {
      uVar6 = LZCOUNT(uVar6);
      uVar7 = uVar6 | lVar12 << 6;
      puVar2 = (undefined8 *)(*(long *)(lStack_58 + 0x30) + uVar7 * 0x10);
      uVar10 = *(undefined8 *)(*(long *)(lStack_58 + 0x38) + uVar7 * 8);
      uVar11 = *puVar2;
      uVar3 = puVar2[1];
      uVar9 = (uVar6 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
      *(ulong *)(lVar5 + 0x40 + uVar9) = *(ulong *)(lVar5 + 0x40 + uVar9) | 1L << (uVar6 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar7 * 0x10);
      *puVar2 = uVar11;
      puVar2[1] = uVar3;
      *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 8) = uVar10;
      if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102536294);
        (*pcVar4)();
      }
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      func_0x000107c61434();
      if (uVar13 != 0) break;
LAB_1025361ac:
      do {
        lVar1 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102536290);
          (*pcVar4)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar1) {
          func_0x000107c6142c(lStack_58);
          lVar12 = lVar5;
          func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c61574(lVar5);
          return lVar12;
        }
        uVar13 = ((ulong *)(lStack_58 + 0x40))[lVar1];
        lVar12 = lVar12 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar1;
    }
  } while( true );
}



/* Entry: 102536294; end: 1025362cf; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider objcCurrentStateWithIsLiveLocationRequest:] */

void FUN_102536294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1025360dc(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1025362d0; end: 102536343;  */

void FUN_1025362d0(undefined8 param_1,long param_2,long param_3,long param_4,undefined1 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102536344;
  plVar1[0x18] = param_4;
  plVar1[0x19] = param_2;
  *(undefined1 *)((long)plVar1 + 0x101) = 0;
  *(undefined1 *)(plVar1 + 0x20) = param_5;
  plVar1[0x17] = param_3;
  func_0x000107c614f0();
  plVar1[0x1a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253563c,0,0);
  return;
}



/* Entry: 102536344; end: 1025363db;  */

void FUN_102536344(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined1 *)(lVar1 + 0x30) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102536398,0,0);
  return;
}



/* Entry: 1025363dc; end: 1025364ff; -[_TtC45MapLocationRequestStateServicesImplementation28LocationRequestStateProvider fetchAndUpdateIfNeededWithFriendId:isLiveLocationRequest:completion:] */

void FUN_1025363dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar1 = &UNK_11051de70;
  func_0x000107c613fc(&UNK_11051de70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_11051de98;
  func_0x000107c613fc(&UNK_11051de98,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_4;
  *(code **)(puVar2 + 0x30) = FUN_102536c28;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar1);
  uVar3 = 0x71;
  func_0x0001001ca524(0x71,0,0x3c,4,0,0,&UNK_10dab7300,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102536500; end: 1025367af;  */

void FUN_102536500(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025365d0);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_1025367b0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025365a0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102536648();
    lVar6 = *unaff_x20;
    goto joined_r0x0001025365e4;
  }
  lVar6 = *unaff_x20;
joined_r0x0001025365e4:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102536648);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1025367b0; end: 102536a43;  */

void FUN_1025367b0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ea42a0;
  func_0x0001000285a8(0x112ea42a0,&UNK_10dab7310);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_102536a10:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102536a40);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_102536a10;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102536a44);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102536a44; end: 102536b37;  */

undefined * FUN_102536a44(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ea42a0,&UNK_10dab7310);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102536b34);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102536b38);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102536b38; end: 102536b83;  */

void FUN_102536b38(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102535430(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102536b84; end: 102536b9b;  */

long FUN_102536b84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102536b9c; end: 102536c27;  */

void FUN_102536b9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102535abc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102536c28; end: 102536c37;  */

void FUN_102536c28(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102536c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102536c38; end: 102536c6b;  */

void FUN_102536c38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102536c6c; end: 102536cfb;  */

void FUN_102536c6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102536cfc;
  plVar7[2] = lVar1;
  plVar7[3] = lVar3;
  plVar6 = (long *)0x110;
  func_0x000107c615b8();
  plVar7[4] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_102536344;
  plVar6[0x18] = lVar8;
  plVar6[0x19] = lVar5;
  *(undefined1 *)((long)plVar6 + 0x101) = 0;
  *(undefined1 *)(plVar6 + 0x20) = uVar4;
  plVar6[0x17] = lVar2;
  func_0x000107c614f0();
  plVar6[0x1a] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253563c,0,0);
  return;
}



/* Entry: 102536cfc; end: 102536d37;  */

void FUN_102536cfc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102536d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102536d38; end: 102536e9f;  */

void FUN_102536d38(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x0001000285a8(0x112ea42b0,&UNK_10dab7380);
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_102536f0c;
  func_0x0001000823a8(FUN_102536f0c,param_2);
  func_0x0001000285a8(0x112ea42b8,&UNK_10dab7388);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  pcVar3 = FUN_102536f14;
  func_0x0001000bdd8c(FUN_102536f14,pcVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_50 = FUN_102536f50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102536f74;
  puStack_58 = &UNK_11051ded8;
  pcStack_48 = pcVar2;
  func_0x000107c60bc4(&puStack_70);
  pcVar1 = pcStack_48;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar6 = 0;
  func_0x000100325350(0);
  func_0x000107c610f8();
  func_0x0001038b7cc4(pcVar3,puVar4,uVar6);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102536ea0; end: 102536eb7;  */

void FUN_102536ea0(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x0001000285a8(0x112ea42b0,&UNK_10dab7380);
  func_0x000107c6157c();
  pcVar2 = FUN_102536f0c;
  func_0x0001000823a8();
  func_0x0001000285a8(0x112ea42b8,&UNK_10dab7388);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  pcVar3 = FUN_102536f14;
  func_0x0001000bdd8c(FUN_102536f14,pcVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_50 = FUN_102536f50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102536f74;
  puStack_58 = &UNK_11051ded8;
  pcStack_48 = pcVar2;
  func_0x000107c60bc4(&puStack_70);
  pcVar1 = pcStack_48;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar6 = 0;
  func_0x000100325350(0);
  func_0x000107c610f8();
  func_0x0001038b7cc4(pcVar3,puVar4,uVar6);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102536eb8; end: 102536f0b;  */

void FUN_102536eb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000102536bb8(0);
  func_0x000107c610f8();
  FUN_1025350ac(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102536f0c; end: 102536f13;  */

void FUN_102536f0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000102536bb8(0);
  func_0x000107c610f8();
  FUN_1025350ac(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102536f14; end: 102536f4f;  */

void FUN_102536f14(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  param_1[1] = &PTR_DAT_11051de18;
  return;
}



/* Entry: 102536f50; end: 102536f73;  */

undefined8 FUN_102536f50(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 102536f74; end: 102536fab;  */

void FUN_102536f74(long param_1)

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



/* Entry: 102536fac; end: 102536fc7;  */

void FUN_102536fac(long param_1,long param_2)

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



/* Entry: 102536fc8; end: 102537113;  */

/* WARNING: Possible PIC construction at 0x00010253709c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025370ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025370bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025370cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025370dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025370ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025370e0) */
/* WARNING: Removing unreachable block (ram,0x0001025370d0) */
/* WARNING: Removing unreachable block (ram,0x0001025370c0) */
/* WARNING: Removing unreachable block (ram,0x0001025370b0) */
/* WARNING: Removing unreachable block (ram,0x0001025370a0) */
/* WARNING: Removing unreachable block (ram,0x0001025370f0) */

void FUN_102536fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar12 = &UNK_11051e000;
  func_0x000107c613fc(&UNK_11051e000,0x70,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar6;
  *(undefined8 *)(puVar12 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined8 *)(puVar12 + 0x30) = uVar2;
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined8 *)(puVar12 + 0x40) = uVar3;
  *(undefined8 *)(puVar12 + 0x48) = uVar9;
  *(undefined8 *)(puVar12 + 0x50) = uVar4;
  *(undefined8 *)(puVar12 + 0x58) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar5;
  *(undefined8 *)(puVar12 + 0x68) = uVar11;
  uVar13 = 0x112ea42c8;
  func_0x0001000285a8(0x112ea42c8,&UNK_10dab73d8);
  func_0x000107c613fc();
  pcVar14 = FUN_1025371a0;
  func_0x0001000841fc(FUN_1025371a0,puVar12,uVar13);
  func_0x000100084214(&UNK_10dab73a0,0x31,2);
  *param_1 = pcVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102537114; end: 102537123;  */

undefined1  [16] FUN_102537114(void)

{
  return ZEXT816(0x11051dfe0);
}



/* Entry: 102537124; end: 10253719f;  */

void FUN_102537124(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025371a0; end: 1025374df;  */

void FUN_1025371a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ea42d0,&UNK_10dab73e0);
  puVar11 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec(puVar11);
  func_0x0001025372bc(uVar12,uVar13,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4);
  func_0x000100082720("MapCloudFooterTrayScopedFactoryServiceProvider",0x2e,2);
  FUN_10253c87c(uVar13,uVar12,uVar9,uVar5,uVar10,puVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(puVar11);
  func_0x000100082720("MapLocationSearchTrayPresenterEntryPointProvider",0x30,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 1025374e0; end: 1025374ef;  */

undefined1  [16] FUN_1025374e0(void)

{
  return ZEXT816(0x11051e0f8);
}



/* Entry: 1025374f0; end: 102537553;  */

void FUN_1025374f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102537554; end: 1025378bb;  */

void FUN_102537554(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x0001000285a8(0x112ea42e8,&UNK_10dab7438);
  func_0x0001000838ec(param_2);
  FUN_102538e14(uVar6,uVar2,uVar7,uVar3,uVar1,param_2);
  func_0x000100082720("MapLocationSearchFriendConfigProviderServiceProvider",0x34,2);
  uVar7 = uVar4;
  func_0x00010253a368(uVar4,param_2);
  func_0x000100082720("MapLocationSearchRecentlyViewedConfigProviderServiceProvider",0x3c,2);
  func_0x000102537690(uVar8,uVar5,uVar6,uVar4,uVar9,uVar7,param_2);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(param_2);
  func_0x000100082720("MapCloudFooterSearchContextProviderEntryPointProvider",0x35,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1025378bc; end: 1025378cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025378bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar9 = &lStack_b0;
  lVar7 = lVar2;
  func_0x000100083b20(&uStack_68,lVar2,uVar4,*(undefined8 *)(unaff_x20 + 0x20),uVar5,uVar3,
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(auStack_a0);
  FUN_102538920();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ea42f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar8 + _DAT_112ea4300) = lVar2;
  *(undefined8 *)(lVar8 + _DAT_112ea4308) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ea4310) = uStack_68;
  *(undefined8 *)(lVar8 + _DAT_112ea4318) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112ea4320) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112ea4328) = uStack_70;
  FUN_102538204(auStack_a0,lVar8 + _DAT_112ea4330);
  puVar6 = PTR_s_init_1125d9248;
  lStack_b0 = lVar8;
  lStack_a8 = lVar7;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_b0,puVar6);
  func_0x000102538240(auStack_a0);
  *param_1 = plVar9;
  return;
}



/* Entry: 1025378d0; end: 1025379c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025378d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea42f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4300) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4308) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4310) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4318) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4320) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4328) = param_6;
  FUN_102538204(param_7,unaff_x20 + _DAT_112ea4330);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000102538240(param_7);
  return puVar2;
}



/* Entry: 1025379c8; end: 102537b37;  */

void FUN_1025379c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    puVar1 = &UNK_11051e230;
    func_0x000107c613fc(&UNK_11051e230,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    puVar2 = &UNK_11051e2a8;
    func_0x000107c613fc(&UNK_11051e2a8,0x30,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    func_0x000107c6157c(param_1);
    func_0x000107c61434(param_4);
    uVar3 = 0x11;
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dab74f8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102537b38; end: 102537c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102537b38(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11051e230;
  func_0x000107c613fc(&UNK_11051e230,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar2 = 0x112dc70e0;
  func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
  func_0x000107c613fc();
  pcVar3 = FUN_102538940;
  func_0x0001000b64ac(FUN_102538940,puVar1,uVar2);
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c437cc();
  func_0x000107c61170(uStack_38);
  uStack_39 = (undefined1)uVar2;
  puVar4 = &uStack_39;
  func_0x0001006c71a4(puVar4);
  func_0x000107c61574(pcVar3);
  return puVar4;
}



/* Entry: 102537c10; end: 102537c47;  */

void FUN_102537c10(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102537c48; end: 102537e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102537c48(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    func_0x000100083b20(&puStack_98);
    puVar6 = puStack_98;
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar2 = lVar1;
    func_0x000100403a6c();
    func_0x000100bcb1dc(lVar1 + 0x20);
    lVar1 = lVar2;
    func_0x000107c5fe08(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar2);
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    uStack_78 = 0x102538948;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1019e993c;
    puStack_80 = &UNK_11051e248;
    ppuVar4 = &puStack_98;
    uStack_70 = param_1;
    func_0x000107c60bc4(ppuVar4);
    uVar7 = uStack_70;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar7);
    puVar5 = puVar6;
    func_0x000107c4da68();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    puVar6 = &UNK_11051e280;
    func_0x000107c613fc(&UNK_11051e280,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    uVar7 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0x10253896c,puVar6,uVar7);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102537e4c; end: 102537f07;  */

void FUN_102537e4c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uStack_51;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434();
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffe9;
    func_0x000100029284(0xd000000000000017);
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_50);
      func_0x000107c6142c(param_1);
      puVar2 = &uStack_51;
      func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)puVar2 & 1) != 0) {
        auStack_50[0] = uStack_51;
        func_0x000100087f6c(auStack_50);
      }
    }
  }
  return;
}



/* Entry: 102537f08; end: 102537f23;  */

void FUN_102537f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102537f24,0,0);
  return;
}



/* Entry: 102537f24; end: 10253808f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102537f24(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x90,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000100083b20(unaff_x22 + 0x50);
    func_0x000107c61170(lVar2);
    lVar3 = *(long *)(unaff_x22 + 0x50);
    lVar2 = lVar3;
    func_0x000107c4f0f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xd8) = lVar3;
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0xd0));
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102538090;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,1);
      uVar1 = 0x112ea3ee8;
      func_0x0001000285a8(0x112ea3ee8,&UNK_10dab7500);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
      *(long *)(unaff_x22 + 0x70) = lVar2;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0x60) = 0x10252b0f4;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11051e2c0;
      func_0x000107c4324c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x00010253808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102538090; end: 1025380e7;  */

void FUN_102538090(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1025380e8;
  }
  else {
    pcVar1 = FUN_10253819c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1025380e8; end: 10253819b;  */

void FUN_1025380e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar3);
  lVar2 = lVar1;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar4 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  func_0x000100087f6c(unaff_x22 + 0x50);
  func_0x000107c6142c(param_2);
  func_0x000100c7f554();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102538198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253819c; end: 102538203;  */

void FUN_10253819c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000100c7f554();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102538200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102538204; end: 102538273;  */

undefined8 FUN_102538204(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038b7ef0)(param_2,param_1);
  return param_2;
}


