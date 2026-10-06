/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10283bf18; end: 10283bf53;  */

void FUN_10283bf18(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010283bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10283bf54; end: 10283bfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bf54(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ec3f60);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c61170(lVar1);
      bStack_49 = (param_1 ^ 0xff) & 1;
      func_0x0001007d6d78(&bStack_49);
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 10283bfb8; end: 10283bfbb; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bfb8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec3f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283bfbc; end: 10283c017; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bfbc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec3f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283c018; end: 10283c01b; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c018(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4008);
  *(undefined8 *)(param_1 + _DAT_112ec4008) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10283c01c; end: 10283c01f; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c01c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4008);
  *(undefined8 *)(param_1 + _DAT_112ec4008) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10283c020; end: 10283c64f;  */

void FUN_10283c020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110556030;
  func_0x000107c613fc(&UNK_110556030,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_12;
  *(undefined8 *)(puVar1 + 0x48) = param_14;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_2;
  *(undefined8 *)(puVar1 + 0x78) = param_11;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_10283c650,puVar1);
  return;
}



/* Entry: 10283c650; end: 10283c68b;  */

void FUN_10283c650(void)

{
  long unaff_x20;
  
  func_0x00010283c168(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10283c68c; end: 10283c69b;  */

undefined1  [16] FUN_10283c68c(void)

{
  return ZEXT816(0x110556058);
}



/* Entry: 10283c69c; end: 10283c7bf;  */

undefined8 FUN_10283c69c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = 0x10283c704;
  func_0x0001000bfde0(0x10283c704,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61574(uVar2);
  uVar2 = uVar1;
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10283c7c0; end: 10283c7d7; +[SCBridgeObservable just:] */

void FUN_10283c7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010283c73c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283c7d8; end: 10283c84b;  */

ulong FUN_10283c7d8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  func_0x000107c61174();
  uVar1 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  while( true ) {
    if (uVar1 == 0) {
      return unaff_x20;
    }
    uVar2 = uVar1;
    func_0x000107c49aa0();
    if ((uVar2 & 1) != 0) break;
    func_0x000107c61170(unaff_x20);
    uVar2 = uVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    unaff_x20 = uVar1;
    uVar1 = uVar2;
  }
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 10283c84c; end: 10283c85b;  */

undefined1  [16] FUN_10283c84c(void)

{
  return ZEXT816(0x1105560f8);
}



/* Entry: 10283c85c; end: 10283c86b; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c85c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4058));
  return;
}



/* Entry: 10283c86c; end: 10283c89f; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4058);
  *(undefined8 *)(param_1 + _DAT_112ec4058) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10283c8a0; end: 10283c8af; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4060));
  return;
}



/* Entry: 10283c8b0; end: 10283c8ef; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_10283c8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10283c8f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10283c8f0; end: 10283cb8f;  */

/* WARNING: Possible PIC construction at 0x00010283c924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283c9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283c9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283c9d8) */
/* WARNING: Removing unreachable block (ram,0x00010283c928) */
/* WARNING: Removing unreachable block (ram,0x00010283ca14) */
/* WARNING: Removing unreachable block (ram,0x00010283c930) */
/* WARNING: Removing unreachable block (ram,0x00010283c9f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283c8f0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4060);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4060) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10283cb90; end: 10283cb9f; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283cb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4068));
  return;
}



/* Entry: 10283cba0; end: 10283cbd3; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283cba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4068);
  *(undefined8 *)(param_1 + _DAT_112ec4068) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10283cbd4; end: 10283cbf3; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283cbd4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283cbf4; end: 10283cc07; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283cbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4070,param_3);
  return;
}



/* Entry: 10283cc08; end: 10283ccf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10283cc08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112ec4110;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4110);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec4088);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = 0x112ea3480;
    func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
    if (lVar2 == 0) {
      func_0x000104886440();
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4b93c();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x0001000b637c();
      func_0x000107c61170();
      func_0x00010487fd98();
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(lVar4);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(uVar5);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10283ccf4; end: 10283ce97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10283ccf4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec40e0);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10283ce98);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x000107c4b8fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      FUN_10283ce98();
      puVar5 = PTR_PTR_1126ab288;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar3 = lVar2;
      FUN_10283cfd8(lVar2,param_2);
      uVar9 = 0x112ec4148;
      uVar6 = 0;
      func_0x000102840e2c(0,0x112ec4148,&PTR_PTR_1126ab290);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      uVar6 = 0;
      func_0x000102840e2c(0,0x112ec4150,&PTR_PTR_1126ab288);
      uVar8 = 0;
      apuStack_70[0] = puVar5;
      uStack_58 = uVar6;
      func_0x000102840e2c(0,0x112ec4158,&PTR_PTR_1126ab298);
      alStack_90[0] = lVar3;
      uStack_78 = uVar8;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      FUN_1027efbc4(uVar7,uVar9,apuStack_70,alStack_90);
      func_0x000107c615e8(lVar2);
      return uVar7;
    }
  }
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 10283ce98; end: 10283cfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283ce98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112ec40e8;
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112ec40e8) == 0) {
    puVar3 = &UNK_1105561c0;
    func_0x000107c613fc(&UNK_1105561c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_102840e6c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100fef460;
    puStack_58 = &UNK_1105565c0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar3);
    func_0x000107c5ca5c(0x403e000000000000);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar2 = puStack_48;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10283cfd8; end: 10283d4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10283cfd8(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126ab298;
  func_0x000107c610f8(PTR_PTR_1126ab298);
  func_0x000107c453e4();
  uVar2 = param_1;
  func_0x000107c4cde0();
  func_0x000107c61180();
  pcVar3 = param_2;
  uVar11 = uVar2;
  func_0x0001070b210c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (pcVar3 == (code *)0x0) {
    return puVar1;
  }
  pcVar4 = pcVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (pcVar4 == (code *)0x0) {
LAB_10283d4ac:
    func_0x000107c61170(pcVar3);
  }
  else {
    pcVar5 = pcVar4;
    func_0x000107c5faec();
    func_0x000107c61170(pcVar4);
    lVar6 = *(long *)(unaff_x20 + _DAT_112ec4088);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c61170(pcVar3);
    }
    else {
      uVar2 = param_1;
      FUN_1028402d0();
      if (param_2 != (code *)0x0) {
        pcVar4 = pcVar3;
        FUN_10283d570();
        if (pcVar4 != (code *)0x0) {
          func_0x000107c562b0(puVar1);
          func_0x000107c615e8(pcVar4);
        }
        puVar7 = &UNK_1105561c0;
        func_0x000107c613fc(&UNK_1105561c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar8 = &UNK_1105561e8;
        func_0x000107c613fc(&UNK_1105561e8,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined8 *)(puVar8 + 0x18) = param_1;
        pcStack_80 = FUN_102840410;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_110556200;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar7 = puStack_78;
        func_0x000107c615f0(param_1);
        func_0x000107c61574(puVar7);
        func_0x000107c54fc4(puVar1);
        func_0x000107c60bd0(ppuVar9);
        puVar7 = &UNK_1105561c0;
        func_0x000107c613fc(&UNK_1105561c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar8 = &UNK_110556238;
        func_0x000107c613fc(&UNK_110556238,0x38,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(code **)(puVar8 + 0x18) = pcVar5;
        *(undefined8 *)(puVar8 + 0x20) = uVar11;
        *(undefined8 *)(puVar8 + 0x28) = uVar2;
        *(code **)(puVar8 + 0x30) = param_2;
        pcStack_80 = (code *)0x102840434;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = (undefined *)0x10283d980;
        puStack_88 = &UNK_110556250;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar7 = puStack_78;
        func_0x000107c61434(param_2);
        func_0x000107c61574(puVar7);
        func_0x000107c54fd4(puVar1);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c40258(param_1);
        func_0x000107c61180();
        func_0x000107c61170();
        pcVar4 = pcVar3;
        FUN_102840444(pcVar3,uVar2,param_2);
        func_0x000107c6142c(param_2);
        func_0x0001004575f0();
        func_0x000107c61574(pcVar4);
        pcVar4 = param_2;
        func_0x000107c5cb24(param_2);
        func_0x000107c61180();
        func_0x000107c54224(puVar1);
        func_0x000107c61170(pcVar4);
        func_0x000107c40258();
        func_0x000107c61180();
        uVar11 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        lVar12 = *(long *)(unaff_x20 + _DAT_112ec4058);
        if (lVar12 == 0) {
          pcVar4 = (code *)PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c4a8a4(pcVar4);
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
        }
        else {
          func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
          func_0x000107c61174(lVar12);
          lVar10 = lVar12;
          func_0x0001000b637c();
          puVar7 = &UNK_110556288;
          func_0x000107c613fc(&UNK_110556288,0x20,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar11;
          *(undefined8 *)(puVar7 + 0x18) = uVar2;
          func_0x000107c61434(uVar2);
          pcVar5 = FUN_102840af8;
          func_0x0001000c0ebc(FUN_102840af8,puVar7);
          func_0x000107c61574(lVar10);
          func_0x000107c61574(puVar7);
          uVar11 = 0;
          func_0x000102840e2c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar4 = FUN_10283da04;
          func_0x0001000bfde0(FUN_10283da04,0,uVar11);
          func_0x000107c61574(pcVar5);
          uVar11 = 0x112d59880;
          FUN_102840b80(0x112d59880,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x0001000c2068();
          func_0x000107c61574(pcVar4);
          func_0x0001004575f0();
          func_0x000107c61170(lVar12);
          func_0x000107c61574(uVar11);
        }
        func_0x000107c6142c(uVar2);
        pcVar5 = pcVar4;
        func_0x000107c5cb24(pcVar4);
        func_0x000107c61180();
        func_0x000107c56660(puVar1);
        func_0x000107c61170(pcVar5);
        func_0x000107c4fd74(0,lVar6);
        func_0x000107c61170(pcVar3);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(param_2);
        pcVar3 = pcVar4;
        goto LAB_10283d4ac;
      }
      func_0x000107c61170(pcVar3);
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c6142c(uVar11);
  }
  return puVar1;
}



/* Entry: 10283d4d8; end: 10283d54f; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10283d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10283ccf4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10283d550; end: 10283d567; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010283d564) */

void FUN_10283d550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10283d568; end: 10283d56f; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin pluginType] */

undefined8 FUN_10283d568(void)

{
  return 0;
}



/* Entry: 10283d570; end: 10283d75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283d570(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4090);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_1105561c0;
      func_0x000107c613fc(&UNK_1105561c0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_110556508;
      func_0x000107c613fc(&UNK_110556508,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      uStack_40 = 0x102840dfc;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f11710;
      puStack_48 = &UNK_110556520;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      puVar3 = puStack_38;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar3);
      func_0x000102840e2c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c614e8();
      func_0x000107c4c214(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10283d75c; end: 10283d8df;  */

/* WARNING: Possible PIC construction at 0x00010283d8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283d8ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283d75c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec4070;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x00010451c820(0);
    func_0x0001045198cc(param_1,param_2,0,0,3,uVar2);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar2 = 6;
    func_0x000104515e00(6,2,0x1c,0xe);
    puVar3 = &UNK_1105561c0;
    func_0x000107c613fc(&UNK_1105561c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1105564b8;
    func_0x000107c613fc(&UNK_1105564b8,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = uVar2;
    *(long *)(puVar4 + 0x28) = lVar1;
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar2);
    func_0x000107c615f0(lVar1);
    func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dae4350,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10283d8e0; end: 10283d9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283d8e0(int param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ec4070;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if (param_1 == 0) {
        FUN_10283dec8(param_3,param_4,1,lVar1);
      }
      func_0x000107c615e8();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10283d9bc; end: 10283da03;  */

undefined8 FUN_10283d9bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10283da04; end: 10283da63;  */

void FUN_10283da04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 10283da64; end: 10283dad3;  */

void FUN_10283da64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283dad4,uVar1,uVar2);
  return;
}



/* Entry: 10283dad4; end: 10283dc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283dad4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0xd0,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x120) = lVar3;
  if (lVar3 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000104515b14(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(uVar1);
    func_0x0001045158a8(uVar5,uVar4,0,uVar1);
    *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
    lVar2 = *(long *)(lVar3 + _DAT_112ec4098);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x130) = lVar2;
    if (lVar2 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10283dc90;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar3,1);
      uVar4 = 0x112ec4188;
      func_0x0001000285a8(0x112ec4188,&UNK_10dae4360);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10283dde8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1105564d0;
      *(long *)(unaff_x22 + 0x70) = lVar3;
      func_0x000107c61174(uVar5);
      func_0x000107c4ab9c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    func_0x00010006e7f4(unaff_x22 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010283dc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283dc90; end: 10283dce3;  */

void FUN_10283dc90(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10283dce4;
  }
  else {
    pcVar1 = FUN_10283dd5c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
  return;
}



/* Entry: 10283dce4; end: 10283dd5b;  */

void FUN_10283dce4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000100102924(unaff_x22 + 0xb0,unaff_x22 + 0x90);
  func_0x00010006e7f4(unaff_x22 + 0x90);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010283dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283dd5c; end: 10283dde7;  */

void FUN_10283dd5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  func_0x00010006e7f4();
                    /* WARNING: Could not recover jumptable at 0x00010283dde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283dde8; end: 10283dec7;  */

void FUN_10283dde8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [32];
  long alStack_50 [3];
  long lStack_38;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_2 != 0) {
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar5);
    return;
  }
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x000107c614f0();
    alStack_50[0] = param_3;
    lStack_38 = lVar3;
    func_0x000100102924(alStack_50,auStack_70);
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x40) + 0x28);
    func_0x000107c615f0(param_3);
    func_0x000100102924(auStack_70,uVar5);
    func_0x000107c61450(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10283dec8);
  (*pcVar1)();
}



/* Entry: 10283dec8; end: 10283e0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283dec8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = _DAT_112ec4118;
  if (*(long *)(unaff_x20 + _DAT_112ec4118) == 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    lVar1 = unaff_x20;
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x000103a28f00();
    uStack_70 = param_4;
    func_0x00010008a7c8(&uStack_68,&uStack_70);
    func_0x000100083b20(&uStack_70);
    func_0x000107c61574(uStack_68);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = uStack_70;
    func_0x000107c615e8(uVar2);
    if (*(long *)(unaff_x20 + lVar4) != 0) {
      func_0x000107c4ee7c();
    }
    lVar4 = ((undefined8 *)(lVar1 + _DAT_112ec40f8))[1];
    if ((lVar4 != 0) && ((param_3 & 1) != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112ec40f8);
      puVar3 = &UNK_110556418;
      func_0x000107c613fc(&UNK_110556418,0x38,7);
      *(long *)(puVar3 + 0x10) = lVar1;
      *(undefined8 *)(puVar3 + 0x18) = uVar2;
      *(long *)(puVar3 + 0x20) = lVar4;
      *(undefined8 *)(puVar3 + 0x28) = param_1;
      *(undefined8 *)(puVar3 + 0x30) = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c61174(lVar1);
      func_0x000107c61434(lVar4);
      uVar2 = 0x50;
      func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dae4330,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10283e0a4; end: 10283e113;  */

void FUN_10283e0a4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(long *)(unaff_x22 + 0x18) = param_3;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(long *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10283e114;
  plVar1[0x12] = param_4;
  plVar1[0x13] = param_2;
  plVar1[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e394,0,0);
  return;
}



/* Entry: 10283e114; end: 10283e163;  */

void FUN_10283e114(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e164,0,0);
  return;
}



/* Entry: 10283e164; end: 10283e25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283e164(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  if (lVar5 != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0x28);
    FUN_10283e538(uVar1,*(undefined8 *)(unaff_x22 + 0x30));
    if ((uVar1 & 1) == 0) {
      plVar4 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x48) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10283e260;
      plVar4[10] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e6d4,0,0);
      return;
    }
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ec40d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      FUN_10283e814();
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
        func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0x20));
        func_0x000107c51e00(lVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010283e224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283e260; end: 10283e2af;  */

void FUN_10283e260(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e2b0,0,0);
  return;
}



/* Entry: 10283e2b0; end: 10283e377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283e2b0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    uVar1 = *(ulong *)(unaff_x22 + 0x28);
    FUN_10283e538(uVar1,*(undefined8 *)(unaff_x22 + 0x30));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ec40d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x22 + 0x40);
        FUN_10283e814();
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
          func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x22 + 0x20));
          func_0x000107c51e00(lVar2);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(lVar3);
        }
        func_0x000107c615e8(lVar2);
      }
    }
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010283e374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283e378; end: 10283e393;  */

void FUN_10283e378(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e394,0,0);
  return;
}



/* Entry: 10283e394; end: 10283e4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283e394(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ec40d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10283e4c4;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    func_0x000107c5fadc(uVar4,uVar1);
    puVar5 = &UNK_110556468;
    func_0x000107c613fc(&UNK_110556468,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar5 + 0x10) = lVar3;
    *(code **)(unaff_x22 + 0x70) = FUN_102840d3c;
    *(undefined **)(unaff_x22 + 0x78) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100e46b24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110556480;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43050(lVar2);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010283e4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283e4c4; end: 10283e537;  */

void FUN_10283e4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10283e504,0,0);
  return;
}



/* Entry: 10283e538; end: 10283e6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283e538(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec40b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec40a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ec40a0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ec40b0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126c7238;
          func_0x000107c61168(PTR_PTR_1126c7238);
          func_0x000107c5fadc(param_1,param_2);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec4080);
          func_0x000107c5fadc(uVar6,((undefined8 *)(unaff_x20 + _DAT_112ec4080))[1]);
          func_0x000107c4b920(puVar5);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          return;
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10283e6bc; end: 10283e6d3;  */

void FUN_10283e6bc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e6d4,0,0);
  return;
}



/* Entry: 10283e6d4; end: 10283e7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283e6d4(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x58;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10283e7c8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  plVar2 = (long *)0x1;
  func_0x00010061b458();
  puVar3 = &UNK_110556440;
  func_0x000107c613fc(&UNK_110556440,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  pcVar4 = FUN_102840d20;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102840d20);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(plVar2);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x18))(*(undefined8 *)(lVar7 + _DAT_112ec4108),pcVar5,puVar6);
  func_0x000107c615e8(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10283e7c8; end: 10283e807;  */

void FUN_10283e7c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e808,0,0);
  return;
}



/* Entry: 10283e808; end: 10283e813;  */

void FUN_10283e808(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010283e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10283e814; end: 10283ea2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10283e814(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000102840e2c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4080);
  lVar5 = ((long *)(unaff_x20 + _DAT_112ec4080))[1];
  func_0x000107c61434(lVar5);
  func_0x000103c1912c(lVar2,lVar5);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1a40;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5e7ec();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar6 = puVar3;
    func_0x000107c5e4a4();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x00010011df08();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    puVar4 = puVar3;
    func_0x000107c5e870(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar6 = puVar3;
    func_0x000107c5e5b0(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000108605f20(param_1,lVar2);
    func_0x000107c61180();
    func_0x000107c61174();
    puVar6 = puVar3;
    func_0x000107c5e500(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    puVar6 = puVar3;
    func_0x000107c3ecc8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  return puVar6;
}



/* Entry: 10283ea2c; end: 10283ee07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10283ea2c(ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar3 = PTR_PTR_1126ab2a0;
  uVar7 = param_2;
  func_0x000107c610f8(PTR_PTR_1126ab2a0);
  func_0x000107c453e4();
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4080);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112ec4080))[1];
  func_0x000107c61434(uVar2);
  uVar8 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar9 = uVar7;
  uVar6 = uVar2;
  if (uVar8 != 0) {
    uVar6 = uVar8;
    func_0x000107c5faec();
    uVar9 = uVar7;
    func_0x000107c61170(uVar8);
    if (uVar1 != uVar6 || uVar2 != uVar7) {
      uVar9 = uVar2;
      func_0x000107c605b8(uVar1,uVar2,uVar6,uVar7,0);
    }
    func_0x000107c6142c(uVar2);
    uVar6 = uVar7;
  }
  func_0x000107c6142c(uVar6);
  func_0x000107c55818(puVar3);
  uVar8 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar8 == 0) {
LAB_10283eb40:
    uVar7 = 0;
  }
  else {
    uVar7 = uVar8;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (uVar7 == 0) goto LAB_10283eb40;
  }
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(uVar7);
  uVar8 = param_1;
  func_0x000107c5d984(param_1);
  func_0x000107c61180();
  func_0x000107c5a344(puVar3);
  func_0x000107c61170(uVar8);
  if (param_4 == '\x02') {
    uVar8 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar8 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uVar8 = uVar9;
    }
    uVar9 = uVar8;
    FUN_10283ee08(uVar7,uVar8,param_2,param_3);
    func_0x000107c6142c(uVar8);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5923c(puVar3);
  func_0x000107c61170(puVar4);
  uVar6 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  uVar7 = uVar9;
  uVar8 = param_1;
  if (uVar6 != 0) {
    uVar5 = uVar6;
    func_0x000107c5faec();
    uVar7 = uVar9;
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar9);
    uVar6 = uVar5 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar6 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      func_0x000107c42120();
      func_0x000107c61180();
      goto joined_r0x00010283ec88;
    }
  }
  func_0x000107c5db08();
  func_0x000107c61180();
joined_r0x00010283ec88:
  if (uVar8 == 0) {
    uVar9 = 0;
    uVar7 = 0xe000000000000000;
  }
  else {
    uVar9 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
  }
  uVar6 = uVar7;
  func_0x000107c5fadc(uVar9,uVar7);
  func_0x000107c6142c(uVar7);
  uVar8 = uVar9;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (uVar8 == 0) {
    uVar7 = 0;
    uVar6 = 0xe000000000000000;
  }
  else {
    uVar7 = uVar8;
    func_0x000107c5faec(uVar8);
    func_0x000107c61170(uVar8);
  }
  uVar8 = uVar6;
  func_0x000107c5fadc(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c54230(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar7 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if (((param_2 == uVar1) && (param_3 == uVar2)) ||
       (func_0x000107c605b8(param_2,param_3,uVar1,uVar2,0), (param_2 & 1) != 0)) {
      FUN_10283e538(uVar7,uVar8);
      func_0x000107c6142c(uVar8);
    }
    else {
      func_0x000107c6142c(uVar8);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52ec0(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar3;
}



/* Entry: 10283ee08; end: 10283ef13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10283ee08(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4088);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    if (param_2 != 0) {
      uVar3 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      lVar4 = lVar2;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (lVar4 != 0) {
        func_0x000107c61170(lVar4);
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112ec4080);
        uVar1 = ((ulong *)(unaff_x20 + _DAT_112ec4080))[1];
        if ((param_1 == uVar3 && param_2 == uVar1) ||
           (func_0x000107c605b8(param_1,param_2,uVar3,uVar1,0), (param_1 & 1) != 0)) {
          FUN_10283e538(param_3,param_4);
          func_0x000107c615e8(lVar2);
          if ((param_3 & 1) == 0) {
            return 1;
          }
        }
        else {
          func_0x000107c615e8(lVar2);
        }
        return 0;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return 1;
}



/* Entry: 10283ef14; end: 10283efab;  */

void FUN_10283ef14(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10283ea2c(param_4,param_5,param_6,2);
    func_0x000107c61170(param_3);
  }
  *param_1 = param_4;
  return;
}



/* Entry: 10283efac; end: 10283f1af;  */

void FUN_10283efac(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  byte bStack_71;
  
  uVar10 = *param_2;
  bStack_71 = 2;
  puVar5 = &UNK_110556378;
  func_0x000107c613fc(&UNK_110556378,0x40,7);
  *(byte **)(puVar5 + 0x10) = &bStack_71;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  puVar6 = &UNK_1105563a0;
  func_0x000107c613fc(&UNK_1105563a0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102840c54;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x102840ec0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b938;
  puStack_90 = &UNK_1105563b8;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  pcStack_88 = FUN_10283f318;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b93c;
  puStack_90 = &UNK_1105563e0;
  ppuVar8 = &puStack_a8;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  func_0x000107c4c600(uVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  bVar3 = bStack_71;
  func_0x000107c61574(puVar5);
  *param_1 = bVar3 == 2 | bVar3 & 1;
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x60,0x196,0x38,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10283f1ac);
    (*pcVar4)();
  }
  uVar9 = 0;
  func_0x000107c61544(0,"",0x60,0x19b,0x32,1);
  if ((uVar9 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10283f1b0);
  (*pcVar4)();
}



/* Entry: 10283f1b0; end: 10283f317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283f1b0(undefined8 param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar5 = 2;
    goto LAB_10283f2f4;
  }
  lVar2 = *(long *)(param_3 + _DAT_112ec4088);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_10283f2d0:
    func_0x000107c61170(param_3);
  }
  else {
    uVar3 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    lVar4 = lVar2;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar2);
      goto LAB_10283f2d0;
    }
    func_0x000107c61170(lVar4);
    uVar3 = *(ulong *)(param_3 + _DAT_112ec4080);
    uVar1 = ((ulong *)(param_3 + _DAT_112ec4080))[1];
    if ((param_4 != uVar3 || param_5 != uVar1) &&
       (func_0x000107c605b8(param_4,param_5,uVar3,uVar1,0), (param_4 & 1) == 0)) {
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_3);
LAB_10283f2f0:
      uVar5 = 0;
      goto LAB_10283f2f4;
    }
    FUN_10283e538(param_6,param_7);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
    if ((param_6 & 1) != 0) goto LAB_10283f2f0;
  }
  uVar5 = 1;
LAB_10283f2f4:
  *param_2 = uVar5;
  return;
}



/* Entry: 10283f318; end: 10283f31b;  */

void FUN_10283f318(void)

{
  return;
}



/* Entry: 10283f31c; end: 10283f4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283f31c(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
LAB_10283f3d8:
    uVar3 = 1;
  }
  else {
    lVar1 = *(long *)(param_3 + _DAT_112ec4088);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar3 = 1;
    }
    else {
      func_0x000107c5fadc(param_4,param_5);
      lVar2 = lVar1;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar1);
      if (lVar2 == 0) goto LAB_10283f3d8;
      uVar3 = 0;
      param_3 = lVar2;
    }
    func_0x000107c61170(param_3);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10283f4a4; end: 10283f50f;  */

undefined8 FUN_10283f4a4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_10283f510(param_2);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 10283f510; end: 10283f9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283f510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  double dVar13;
  long alStack_98 [2];
  undefined8 uStack_88;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4088);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c615e8(lVar1);
    return;
  }
  lVar2 = param_3;
  func_0x000107c5faec();
  lVar3 = lVar1;
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    func_0x000107c6142c(param_4);
    return;
  }
  func_0x000100343d2c(0);
  func_0x000107c610f8();
  lVar4 = 0;
  func_0x00010297c83c(0,0,0,0);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ec40c0) + _DAT_112ed0d38);
  alStack_98[0] = lVar4;
  func_0x000107c6157c(uVar12);
  func_0x00010008a7c8(&uStack_88,alStack_98);
  func_0x000107c61574(uVar12);
  func_0x000100083b20(alStack_98);
  func_0x000107c61574(uStack_88);
  lVar6 = alStack_98[0];
  lVar11 = _DAT_112ec4078;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec4078);
  *(long *)(unaff_x20 + _DAT_112ec4078) = alStack_98[0];
  func_0x000107c615f0(alStack_98[0]);
  func_0x000107c615e8(uVar12);
  if (lVar6 == 0) {
LAB_10283f6b8:
    func_0x000107c4077c(lVar3);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    lVar7 = lVar6;
    func_0x000107c6148c(lVar6,puVar5);
    if (lVar7 == 0) {
      func_0x000107c61170(lVar6);
      goto LAB_10283f6b8;
    }
    func_0x000107c4077c(lVar3);
    func_0x000107c438d4(lVar7);
  }
  uVar12 = 0x402a000000000000;
  func_0x000108d31608(0x402a000000000000,param_1);
  lVar6 = 0;
  func_0x000103b354c8();
  func_0x000107c610f8();
  func_0x000103b3520c(param_1,param_2,0,0,uVar12,0x4051800000000000,0x4049000000000000,
                      0x4034000000000000);
  lVar7 = *(long *)(unaff_x20 + lVar11);
  if (lVar7 == 0) {
LAB_10283f7ac:
    lVar7 = *(long *)(unaff_x20 + lVar11);
    if (*(double *)(lVar6 + _DAT_112fed000) <= 0.0) {
      if (lVar7 != 0) {
        func_0x000107c4c458();
        func_0x000107c61180();
        func_0x000107c532c0(param_1,param_2,0);
        goto LAB_10283f810;
      }
    }
    else if (lVar7 != 0) {
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c52fa4();
LAB_10283f810:
      func_0x000107c615e8(lVar7);
      lVar11 = *(long *)(unaff_x20 + lVar11);
      if (lVar11 != 0) goto LAB_10283f820;
    }
LAB_10283f950:
    func_0x000107c6142c(param_4);
  }
  else {
    func_0x000107c3f140();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c49cd8();
    if ((int)lVar8 == 0) {
      func_0x000107c61170(lVar7);
      goto LAB_10283f7ac;
    }
    puVar5 = PTR_PTR_1126c5ba8;
    func_0x000107c610f8();
    func_0x000107c470e4(param_1,param_2);
    lVar8 = _DAT_112fed000;
    dVar13 = *(double *)(lVar6 + _DAT_112fed000);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    if (dVar13 <= 0.0) {
      func_0x000107c46ed0();
    }
    else {
      func_0x000107c466c0(0x402a000000000000);
    }
    puVar10 = PTR_PTR_1126d55f8;
    func_0x000107c610f8(PTR_PTR_1126d55f8);
    func_0x000107c49600();
    uVar12 = 0;
    if (*(double *)(lVar6 + lVar8) <= 0.0) {
      uVar12 = 0;
      func_0x000102840e2c(0,0x112ea31c8,&PTR_PTR_1126d5600);
      func_0x000103b328b4();
    }
    func_0x000107c4d150(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar12);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (lVar11 == 0) goto LAB_10283f950;
LAB_10283f820:
    func_0x000107c3eca4();
    func_0x000107c61180();
    lVar7 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(long *)(lVar7 + 0x20) = lVar2;
    *(undefined8 *)(lVar7 + 0x28) = param_4;
    lVar2 = lVar7;
    func_0x000107c5fc48();
    func_0x000107c61574(lVar7);
    func_0x000107c5a3c8(lVar11);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10283f9a4; end: 10283fc03;  */

/* WARNING: Possible PIC construction at 0x00010283fae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283fb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283fba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283fb18) */
/* WARNING: Removing unreachable block (ram,0x00010283fba8) */
/* WARNING: Removing unreachable block (ram,0x00010283fb24) */
/* WARNING: Removing unreachable block (ram,0x00010283fae4) */
/* WARNING: Removing unreachable block (ram,0x00010283fba4) */
/* WARNING: Removing unreachable block (ram,0x00010283fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010283fbe4) */

void FUN_10283f9a4(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_1 + 0x40);
  uVar6 = *puVar9;
  uVar8 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar1 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar1 = ~(-1L << (-uVar8 & 0x3f));
  }
  puVar5 = param_2;
  func_0x000107c61434();
  lVar11 = 0;
  lVar7 = 0;
  uVar10 = uVar1 & uVar6;
  do {
    if (uVar10 != 0) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                       lVar11 * 0x200);
      func_0x000107c61174();
      lVar11 = lVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar13 = 0;
        puVar12 = (undefined8 *)0x0;
        puVar4 = puVar5;
      }
      else {
        lVar13 = lVar11;
        func_0x000107c5faec();
        puVar4 = puVar5;
        func_0x000107c61170(lVar11);
        puVar12 = puVar5;
      }
      func_0x000107c4cde0();
      func_0x000107c61180();
      lVar11 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x000101d102f4(param_1,puVar9,~uVar8,0,uVar1 & uVar6);
      }
      else if ((lVar13 == lVar11) && (puVar12 == puVar4)) {
        func_0x000107c61170(lVar7);
        puVar4 = puVar12;
      }
      else {
        func_0x000107c605b8(uVar10 - 1,lVar13,puVar12,lVar11,puVar4,0);
        puVar4 = puVar12;
      }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
      return;
    }
    lVar11 = lVar7 + 1;
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10283fc04);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar8 >> 6) <= lVar11) {
      func_0x000101d102f4(param_1,puVar9,~uVar8,0,0);
      puVar4 = (undefined8 *)param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      goto code_r0x000107c6142c;
    }
    uVar10 = puVar9[lVar11];
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 10283fc04; end: 10283fc6b;  */

void FUN_10283fc04(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  func_0x000102840e2c(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10283fc6c; end: 10283fd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283fc6c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112ec4088);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c4fd74(0,lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10283fd0c; end: 10283fd6b; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin init] */

void FUN_10283fd0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LocationShareMessagePlugin.LocationShareMessagePlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10283fd38);
  (*pcVar1)();
}



/* Entry: 10283fd6c; end: 10283ff1b; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010283fdc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283fe9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283fdcc) */
/* WARNING: Removing unreachable block (ram,0x00010283fea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283fd6c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4058));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4060));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4068));
  func_0x000100e3b598(param_1 + _DAT_112ec4070);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4078));
  return;
}



/* Entry: 10283ff1c; end: 10283ff3b;  */

void FUN_10283ff1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128659e0);
  return;
}



/* Entry: 10283ff3c; end: 10283ff53; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283ff3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4118);
  *(undefined8 *)(param_1 + _DAT_112ec4118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10283ff54; end: 10283ff9b; -[_TtC26LocationShareMessagePlugin26LocationShareMessagePlugin onShareLocationActionCompletedWith:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283ff54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uStack_21;
  
  uStack_21 = param_4;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10283ff9c; end: 102840003;  */

/* WARNING: Possible PIC construction at 0x00010283ffcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283ffd0) */
/* WARNING: Removing unreachable block (ram,0x00010283ffd4) */

void FUN_10283ff9c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112ec4180;
    plVar5 = (long *)&UNK_10dae4320;
  }
  else {
    puVar3 = (ulong *)0x112ec4160;
    plVar5 = (long *)&UNK_10dae4318;
    unaff_x30 = 0x10283ffd0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102840004; end: 10284012b;  */

ulong FUN_102840004(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284012c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10284012c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102840128);
      (*pcVar1)();
    }
    FUN_1028401ac(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10284012c; end: 1028401ab;  */

undefined * FUN_10284012c(undefined *param_1,undefined *param_2)

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
    FUN_10283ff9c();
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



/* Entry: 1028401ac; end: 1028402cf;  */

long FUN_1028401ac(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028402cc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028402d0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ec4160;
        func_0x0001000285a8(0x112ec4160,&UNK_10dae4318);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ec4160;
      func_0x0001000285a8(0x112ec4160,&UNK_10dae4318);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028402c8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1028402d0; end: 10284040f;  */

undefined1  [16] FUN_1028402d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_80;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4 = &UNK_110556558;
  func_0x000107c613fc(&UNK_110556558,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_50;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar5 = &UNK_110556580;
  func_0x000107c613fc(&UNK_110556580,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102840e04;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_102840e0c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10283fc04;
  puStack_68 = &UNK_110556598;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c6d0(param_2);
  func_0x000107c60bd0(ppuVar6);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x60,0x22f,0x1f,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102840410);
  (*pcVar3)();
}



/* Entry: 102840410; end: 102840443;  */

void FUN_102840410(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = auStack_48;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4cde0(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    FUN_10283d75c(uVar3,puVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 102840444; end: 102840af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_102840444(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x20;
  ulong uVar22;
  ulong uStack_80;
  ulong uStack_68;
  
  uVar2 = param_1;
  uVar21 = param_2;
  FUN_10283ea2c();
  uVar22 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uStack_68 = uVar2;
  if (uVar22 != 0) {
    uVar19 = uVar22;
    func_0x000107c5faec();
    func_0x000107c61170(uVar22);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec40b8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112ec40b0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
        lVar5 = lVar3;
        func_0x000107c4ec88(lVar3);
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x0001000b637c();
        func_0x000107c61170(lVar5);
        puVar7 = &UNK_1105561c0;
        func_0x000107c613fc(&UNK_1105561c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar10 = &UNK_1105562b0;
        func_0x000107c613fc(&UNK_1105562b0,0x30,7);
        *(undefined **)(puVar10 + 0x10) = puVar7;
        *(ulong *)(puVar10 + 0x18) = param_1;
        *(ulong *)(puVar10 + 0x20) = param_2;
        *(undefined8 *)(puVar10 + 0x28) = param_3;
        uVar8 = 0;
        func_0x000102840e2c(0,0x112ec4168,&PTR_PTR_1126ab2a0);
        func_0x000107c61174();
        func_0x000107c61434(param_3);
        uVar9 = 0x102840b00;
        func_0x0001000d5158(0x102840b00,puVar10,uVar8);
        func_0x000107c61574(lVar6);
        func_0x000107c61574(puVar10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c6157c(uVar9);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar10 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar10 = puVar7;
          }
          func_0x000107c60480(puVar10);
        }
        uVar11 = 0;
        FUN_102840004(0,puVar10 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar22 = uVar11 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar22 + 0x10);
        uStack_80 = uVar11;
        if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar1) {
          uStack_80 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
          FUN_102840004(uStack_80,uVar1 + 1,1,uVar11);
          uVar22 = uStack_80 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar22 + 0x10) = uVar1 + 1;
        *(undefined8 *)(uVar22 + uVar1 * 8 + 0x20) = uVar9;
        uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4080);
        uVar11 = ((ulong *)(unaff_x20 + _DAT_112ec4080))[1];
        uVar20 = uStack_80;
        if (((uVar19 == uVar1) && (uVar21 == uVar11)) ||
           (uVar12 = uVar19, func_0x000107c605b8(uVar19,uVar21,uVar1,uVar11,0), (uVar12 & 1) != 0))
        {
          func_0x0001000285a8(0x112eafb88,&UNK_10dac3fb0);
          lVar5 = lVar4;
          func_0x000107c4e640(lVar4);
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x0001000b637c();
          func_0x000107c61170(lVar5);
          puVar7 = &UNK_1105561c0;
          puVar18 = puVar7;
          func_0x000107c613fc(&UNK_1105561c0,0x18,7);
          func_0x000107c61614(puVar18 + 0x10);
          puVar10 = &UNK_110556328;
          func_0x000107c613fc(&UNK_110556328,0x38,7);
          *(undefined **)(puVar10 + 0x10) = puVar18;
          *(ulong *)(puVar10 + 0x18) = uVar19;
          *(ulong *)(puVar10 + 0x20) = uVar21;
          *(ulong *)(puVar10 + 0x28) = param_2;
          *(undefined8 *)(puVar10 + 0x30) = param_3;
          func_0x000107c61434(param_3);
          uVar16 = 0x112dc3dc8;
          func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
          pcVar13 = FUN_102840bf4;
          func_0x0001000d5158(FUN_102840bf4,puVar10,uVar16);
          func_0x000107c61574(lVar6);
          func_0x000107c61574(puVar10);
          func_0x000107c613fc(&UNK_1105561c0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          puVar10 = &UNK_110556350;
          func_0x000107c613fc(&UNK_110556350,0x30,7);
          *(undefined **)(puVar10 + 0x10) = puVar7;
          *(ulong *)(puVar10 + 0x18) = param_1;
          *(ulong *)(puVar10 + 0x20) = param_2;
          *(undefined8 *)(puVar10 + 0x28) = param_3;
          func_0x000107c61174();
          func_0x000107c61434(param_3);
          uVar16 = 0x102840c38;
          func_0x0001000d5158(0x102840c38,puVar10,uVar8);
          func_0x000107c61574(pcVar13);
          func_0x000107c61574(puVar10);
          func_0x000107c6157c(uVar16);
          if (uStack_80 >> 0x3e != 0) {
            if (0x7fffffffffffffff < uStack_80) {
              uVar22 = uStack_80;
            }
            func_0x000107c60480(uVar22);
            uVar20 = 0;
            FUN_102840004(0,uVar22 + 1,1,uStack_80);
            uVar22 = uVar20 & 0xffffffffffffff8;
          }
          uVar21 = *(ulong *)(uVar22 + 0x10);
          uVar19 = *(ulong *)(uVar22 + 0x18);
          lVar5 = uVar21 + 1;
          if (uVar21 < uVar19 >> 1) goto LAB_1028407e4;
        }
        else {
          FUN_10283cc08();
          puVar7 = &UNK_1105561c0;
          func_0x000107c613fc(&UNK_1105561c0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          puVar10 = &UNK_1105562d8;
          func_0x000107c613fc(&UNK_1105562d8,0x28,7);
          *(undefined **)(puVar10 + 0x10) = puVar7;
          *(ulong *)(puVar10 + 0x18) = uVar19;
          *(ulong *)(puVar10 + 0x20) = uVar21;
          uVar16 = 0x112dc3dc8;
          func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
          uVar17 = 0x102840b0c;
          func_0x0001000bfde0(0x102840b0c,puVar10,uVar16);
          func_0x000107c61574(uVar12);
          func_0x000107c61574(puVar10);
          FUN_102840b18();
          func_0x0001000c2068();
          func_0x000107c61574(uVar17);
          puVar7 = &UNK_1105561c0;
          func_0x000107c613fc(&UNK_1105561c0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          puVar18 = &UNK_110556300;
          func_0x000107c613fc(&UNK_110556300,0x30,7);
          *(undefined **)(puVar18 + 0x10) = puVar7;
          *(ulong *)(puVar18 + 0x18) = param_1;
          *(ulong *)(puVar18 + 0x20) = param_2;
          *(undefined8 *)(puVar18 + 0x28) = param_3;
          func_0x000107c61174();
          func_0x000107c61434(param_3);
          uVar16 = 0x102840e7c;
          func_0x0001000d5158(0x102840e7c,puVar18,uVar8);
          func_0x000107c61574(puVar10);
          func_0x000107c61574(puVar18);
          func_0x000107c6157c(uVar16);
          if (uStack_80 >> 0x3e != 0) {
            if (0x7fffffffffffffff < uStack_80) {
              uVar22 = uStack_80;
            }
            func_0x000107c60480(uVar22);
            uVar20 = 0;
            FUN_102840004(0,uVar22 + 1,1,uStack_80);
            uVar22 = uVar20 & 0xffffffffffffff8;
          }
          uVar21 = *(ulong *)(uVar22 + 0x10);
          uVar19 = *(ulong *)(uVar22 + 0x18);
          lVar5 = uVar21 + 1;
          if (uVar21 < uVar19 >> 1) goto LAB_1028407e4;
        }
        uVar19 = (ulong)(1 < uVar19);
        FUN_102840004(uVar19,lVar5,1,uVar20);
        uVar22 = uVar19 & 0xffffffffffffff8;
        uVar20 = uVar19;
LAB_1028407e4:
        *(long *)(uVar22 + 0x10) = lVar5;
        *(undefined8 *)(uVar22 + uVar21 * 8 + 0x20) = uVar16;
        func_0x000107c61574(uVar16);
        func_0x0001000285a8(0x112ec4160,&UNK_10dae4318);
        uVar22 = uVar20;
        func_0x0001000c19f0(uVar20);
        puVar15 = &uStack_68;
        func_0x0001006c71a4(puVar15);
        func_0x000107c61574(uVar22);
        puVar14 = (ulong *)0x112ec4178;
        FUN_102840b80(0x112ec4178,0x112ec4168,&PTR_PTR_1126ab2a0);
        func_0x0001000c2068();
        func_0x000107c6142c(uVar20);
        func_0x000107c61574(puVar15);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61574(uVar9);
        return puVar14;
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c6142c(uVar21);
  }
  func_0x0001000285a8(0x112ec4160,&UNK_10dae4318);
  puVar15 = &uStack_68;
  func_0x000100854cb0(puVar15);
  func_0x000107c61170(uVar2);
  return puVar15;
}



/* Entry: 102840af8; end: 102840b17;  */

undefined8 FUN_102840af8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102840b18; end: 102840b7f;  */

void FUN_102840b18(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112ec4170 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc3dc8;
  func_0x00010002969c(0x112dc3dc8,&UNK_10d9813a0);
  puStack_18 = PTR___sSbSQsWP_11034dd50;
  puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&puStack_18);
  puRam0000000112ec4170 = puVar2;
  return;
}



/* Entry: 102840b80; end: 102840bbf;  */

void FUN_102840b80(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000102840e2c(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102840bc0; end: 102840bf3;  */

void FUN_102840bc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102840bf4; end: 102840c03;  */

void FUN_102840bf4(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  byte bStack_71;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *param_2;
  bStack_71 = 2;
  puVar9 = &UNK_110556378;
  func_0x000107c613fc(&UNK_110556378,0x40,7);
  *(byte **)(puVar9 + 0x10) = &bStack_71;
  *(undefined8 *)(puVar9 + 0x18) = uVar1;
  *(undefined8 *)(puVar9 + 0x20) = uVar3;
  *(undefined8 *)(puVar9 + 0x28) = uVar2;
  *(undefined8 *)(puVar9 + 0x30) = uVar4;
  *(undefined8 *)(puVar9 + 0x38) = uVar14;
  puVar10 = &UNK_1105563a0;
  func_0x000107c613fc(&UNK_1105563a0,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_102840c54;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x102840ec0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b938;
  puStack_90 = &UNK_1105563b8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar6 = puStack_80;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar14);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar6);
  pcStack_88 = FUN_10283f318;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar5;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b93c;
  puStack_90 = &UNK_1105563e0;
  ppuVar12 = &puStack_a8;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_80);
  func_0x000107c4c600(uVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  bVar7 = bStack_71;
  func_0x000107c61574(puVar9);
  *param_1 = bVar7 == 2 | bVar7 & 1;
  puVar9 = puVar10;
  func_0x000107c61544(puVar10,"",0x60,0x196,0x38,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10283f1ac);
    (*pcVar8)();
  }
  uVar13 = 0;
  func_0x000107c61544(0,"",0x60,0x19b,0x32,1);
  if ((uVar13 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10283f1b0);
  (*pcVar8)();
}



/* Entry: 102840c04; end: 102840c53;  */

void FUN_102840c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102840c54; end: 102840c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102840c54(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(ulong *)(unaff_x20 + 0x20);
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  uVar10 = *(ulong *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uVar11 = 2;
    goto LAB_10283f2f4;
  }
  lVar6 = *(long *)(lVar5 + _DAT_112ec4088);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_10283f2d0:
    func_0x000107c61170(lVar5);
  }
  else {
    uVar7 = uVar9;
    func_0x000107c5fadc(uVar9,uVar3);
    lVar8 = lVar6;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (lVar8 == 0) {
      func_0x000107c615e8(lVar6);
      goto LAB_10283f2d0;
    }
    func_0x000107c61170(lVar8);
    uVar7 = *(ulong *)(lVar5 + _DAT_112ec4080);
    uVar2 = ((ulong *)(lVar5 + _DAT_112ec4080))[1];
    if ((uVar9 != uVar7 || uVar3 != uVar2) &&
       (func_0x000107c605b8(uVar9,uVar3,uVar7,uVar2,0), (uVar9 & 1) == 0)) {
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar5);
LAB_10283f2f0:
      uVar11 = 0;
      goto LAB_10283f2f4;
    }
    FUN_10283e538(uVar10,uVar4);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar5);
    if ((uVar10 & 1) != 0) goto LAB_10283f2f0;
  }
  uVar11 = 1;
LAB_10283f2f4:
  *puVar1 = uVar11;
  return;
}



/* Entry: 102840c64; end: 102840ce3;  */

void FUN_102840c64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102840ce4;
  plVar6[5] = lVar4;
  plVar6[6] = lVar7;
  plVar6[3] = lVar3;
  plVar6[4] = lVar2;
  plVar6[2] = lVar1;
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  plVar6[7] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_10283e114;
  plVar5[0x12] = lVar2;
  plVar5[0x13] = lVar1;
  plVar5[0x11] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283e394,0,0);
  return;
}



/* Entry: 102840ce4; end: 102840d1f;  */

void FUN_102840ce4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102840d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102840d20; end: 102840d3b;  */

void FUN_102840d20(undefined1 *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102840d3c; end: 102840d6b;  */

void FUN_102840d3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102840d6c; end: 102840de3;  */

void FUN_102840d6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102840ec4;
  plVar5[0x1f] = lVar3;
  plVar5[0x20] = lVar2;
  plVar5[0x1d] = lVar4;
  plVar5[0x1e] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x21] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x22] = lVar3;
  plVar5[0x23] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283dad4,lVar3,lVar4);
  return;
}



/* Entry: 102840de4; end: 102840e0b;  */

long FUN_102840de4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102840e0c; end: 102840e6b;  */

void FUN_102840e0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102840e6c; end: 102840ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102840e6c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ec4088);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c4fd74(0,lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102840ec8; end: 1028414b7;  */

void FUN_102840ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110556620;
  func_0x000107c613fc(&UNK_110556620,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_12;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_13;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_1;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028414b8,puVar1);
  return;
}



/* Entry: 1028414b8; end: 1028414f3;  */

void FUN_1028414b8(void)

{
  long unaff_x20;
  
  func_0x000102841010(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1028414f4; end: 102841503;  */

undefined1  [16] FUN_1028414f4(void)

{
  return ZEXT816(0x110556648);
}



/* Entry: 102841504; end: 102841513; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4190));
  return;
}



/* Entry: 102841514; end: 102841547; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4190);
  *(undefined8 *)(param_1 + _DAT_112ec4190) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102841548; end: 102841557; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4198));
  return;
}


