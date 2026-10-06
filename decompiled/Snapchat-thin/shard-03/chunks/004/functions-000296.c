/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028a9eac; end: 1028a9ebb; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec76a8));
  return;
}



/* Entry: 1028a9ebc; end: 1028a9eef; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec76a8);
  *(undefined8 *)(param_1 + _DAT_112ec76a8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028a9ef0; end: 1028a9fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ec7688,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7690,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7698,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec76a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec76a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec76b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec76b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec76c0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a9fc4; end: 1028aa103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9fc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3 + _DAT_112ec7688;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = param_3 + _DAT_112ec7698;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(param_3);
        param_3 = lVar1;
      }
      else {
        func_0x0001005138b4(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar1);
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar2);
        lVar3 = param_3;
        func_0x000107c61174();
        lVar4 = lVar1;
        func_0x000103f580a0(lVar1,param_1,param_2,0,lVar2,param_3);
        func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112ec76b8));
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        param_3 = lVar4;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1028aa104; end: 1028aa177; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028aa104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028aa3b8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028aa178; end: 1028aa18f; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028aa18c) */

void FUN_1028aa178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028aa190; end: 1028aa197; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin pluginType] */

undefined8 FUN_1028aa190(void)

{
  return 0;
}



/* Entry: 1028aa198; end: 1028aa21b; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001028aa1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028aa1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028aa1d8) */
/* WARNING: Removing unreachable block (ram,0x0001028aa1f4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa198(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028aa21c; end: 1028aa27b; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin init] */

void FUN_1028aa21c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsMessageSharePlugin.PublicGroupsMessageSharePlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa248);
  (*pcVar1)();
}



/* Entry: 1028aa27c; end: 1028aa313; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028aa2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028aa2ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa27c(long param_1)

{
  func_0x000100d0d794(param_1 + _DAT_112ec7688);
  func_0x000100d0d794(param_1 + _DAT_112ec7690);
  func_0x000100d0d794(param_1 + _DAT_112ec7698);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec76a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec76a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec76b0));
  return;
}



/* Entry: 1028aa314; end: 1028aa333;  */

void FUN_1028aa314(void)

{
  func_0x000107c61168(&PTR_PTR_11286a550);
  return;
}



/* Entry: 1028aa334; end: 1028aa3b7; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin didDismissChatWithScope:] */

/* WARNING: Possible PIC construction at 0x0001028aa370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028aa38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028aa374) */
/* WARNING: Removing unreachable block (ram,0x0001028aa390) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa334(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028aa3b8; end: 1028aa71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028aa3b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec76c0);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c404a8();
    if ((int)lVar2 == 5) {
      lVar2 = lVar3;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa714);
        (*pcVar1)();
      }
      lVar4 = lVar2;
      func_0x000107c5a960();
      func_0x000107c61170(lVar2);
      if ((int)lVar4 == 0x20) {
        lVar2 = lVar3;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa718);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c4f5d4();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126a65d0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126b1588;
          func_0x000107c610f8(PTR_PTR_1126b1588);
          func_0x000107c453e4();
          func_0x000107c42650(*(undefined8 *)(unaff_x20 + _DAT_112ec76b0));
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c43b74(puVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c55894(puVar5);
          puVar7 = &UNK_110560f50;
          func_0x000107c613fc(&UNK_110560f50,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          pcStack_70 = FUN_1028aa720;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100c75f50;
          puStack_78 = &UNK_110560f68;
          ppuVar8 = &puStack_90;
          puStack_68 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_68);
          func_0x000107c56da8(puVar5);
          func_0x000107c60bd0(ppuVar8);
          lVar2 = lVar4;
          func_0x000107c4cdc4();
          if (lVar2 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa710);
            (*pcVar1)();
          }
          lVar2 = lVar4;
          func_0x000107c40674();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar9 = lVar2;
            func_0x000107c5cb4c();
            func_0x000107c61180();
            func_0x000107c61170(lVar2);
            if (lVar9 != 0) {
              puVar7 = PTR_PTR_1126a65e0;
              func_0x000107c610f8();
              func_0x000107c485e4();
              func_0x000107c61170(lVar9);
              uVar13 = 0x112d67178;
              uVar10 = 0;
              FUN_1028aa744(0,0x112d67178,&PTR_PTR_1126a65d8);
              func_0x000107c614e8();
              func_0x000107c3ff48();
              func_0x000107c61180();
              uVar11 = uVar10;
              func_0x000107c5faec();
              func_0x000107c61170(uVar10);
              uVar10 = 0;
              FUN_1028aa744(0,0x112ec76f0,&PTR_PTR_1126a65e0);
              uVar12 = 0;
              puStack_90 = puVar7;
              puStack_78 = (undefined *)uVar10;
              FUN_1028aa744(0,0x112ec76f8,&PTR_PTR_1126a65d0);
              apuStack_b0[0] = puVar5;
              uStack_98 = uVar12;
              func_0x000107c610f8(PTR_PTR_1126c67d8);
              func_0x000107c61174(puVar7);
              func_0x000107c61174(puVar5);
              FUN_1027efbc4(uVar11,uVar13,&puStack_90,apuStack_b0);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar7);
              func_0x000107c61170(puVar6);
              return uVar11;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa720);
            (*pcVar1)();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028aa71c);
          (*pcVar1)();
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  return 0;
}



/* Entry: 1028aa720; end: 1028aa743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa720(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec7688;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar1 + _DAT_112ec7698;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x0001005138b4(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar2);
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar3);
        lVar4 = lVar1;
        func_0x000107c61174();
        lVar5 = lVar2;
        func_0x000103f580a0(lVar2,param_1,param_2,0,lVar3,lVar1);
        func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112ec76b8));
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar3);
        lVar1 = lVar5;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028aa744; end: 1028aa783;  */

void FUN_1028aa744(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028aa784; end: 1028aa987;  */

void FUN_1028aa784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110560fa0;
  func_0x000107c613fc(&UNK_110560fa0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028aa988,puVar1);
  return;
}



/* Entry: 1028aa988; end: 1028aa9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa988(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4f5d8();
    if ((int)lVar1 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar1 = lStack_48;
      uVar4 = 0x112ec7680;
      func_0x0001000285a8(0x112ec7680,&UNK_10dae9e00);
      func_0x000107c610f8();
      func_0x00010017da58(lVar1,uVar4);
      puVar2 = PTR_PTR_1126a73e0;
      func_0x000107c610f8(PTR_PTR_1126a73e0);
      func_0x000107c4907c();
      func_0x000107c61170(lVar1);
      func_0x000107c61174(puVar2);
      func_0x000100083b20(&lStack_48);
      uVar4 = *(undefined8 *)(lStack_48 + _DAT_11301aef0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lStack_48);
      FUN_1028aa314(0);
      func_0x000107c610f8();
      FUN_1028a9ef0(lVar3,puVar2,uVar4);
      func_0x000107c61170(puVar2);
      goto LAB_1028aa96c;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar3 = 0;
LAB_1028aa96c:
  *param_1 = lVar3;
  return;
}



/* Entry: 1028aa9a4; end: 1028aa9c3; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa9a4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028aa9c4; end: 1028aa9d7; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7700,param_3);
  return;
}



/* Entry: 1028aa9d8; end: 1028aa9f7; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa9d8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7708);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028aa9f8; end: 1028aaa0b; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aa9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7708,param_3);
  return;
}



/* Entry: 1028aaa0c; end: 1028aaa2b; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin multiDirectionUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aaa0c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028aaa2c; end: 1028aaa3f; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin setMultiDirectionUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aaa2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7710,param_3);
  return;
}



/* Entry: 1028aaa40; end: 1028aaa4f; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aaa40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7718));
  return;
}



/* Entry: 1028aaa50; end: 1028aaa8f; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin setActiveConversationIdObservable:] */

void FUN_1028aaa50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028aaa90(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028aaa90; end: 1028aabcf;  */

/* WARNING: Possible PIC construction at 0x0001028aaac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028aab74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028aab90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028aab78) */
/* WARNING: Removing unreachable block (ram,0x0001028aaac8) */
/* WARNING: Removing unreachable block (ram,0x0001028aabb4) */
/* WARNING: Removing unreachable block (ram,0x0001028aaad0) */
/* WARNING: Removing unreachable block (ram,0x0001028aab94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aaa90(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec7718);
  *(undefined8 *)(unaff_x20 + _DAT_112ec7718) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028aabd0; end: 1028aac47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aabd0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec7740);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c4fe7c(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1028aac48; end: 1028aac57; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aac48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7720));
  return;
}



/* Entry: 1028aac58; end: 1028aac8b; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aac58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7720);
  *(undefined8 *)(param_1 + _DAT_112ec7720) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028aac8c; end: 1028aadab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ec7700,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7708,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7710,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec7718) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7720) = 0;
  lVar1 = _DAT_112ec7740;
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ec7748;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7728) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7738) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028aadac; end: 1028aaebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1028aadac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c5fadc(param_2,param_3);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec7740);
  lVar2 = lVar3;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61170(param_2);
      lVar2 = 0;
      param_3 = 0xf000000000000000;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      lVar1 = lVar2;
      func_0x000107c5ee20(lVar2,param_3);
      func_0x000107c56bcc(lVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x000107c61174();
    func_0x000107c5ee30(lVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar3);
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 1028aaebc; end: 1028ab027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aaebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112ec7700;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = param_1 + _DAT_112ec7710;
      func_0x000107c61618();
      lVar1 = _DAT_112ec7730;
      if (lVar3 == 0) {
        func_0x000107c61170(param_1);
        param_1 = lVar2;
      }
      else {
        lVar4 = *(long *)(param_1 + _DAT_112ec7730);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x0001005138b4();
          func_0x000107c610f8();
          func_0x000107c61174(lVar2);
          func_0x000107c61434(param_3);
          func_0x000107c615f0(lVar3);
          lVar4 = param_1;
          func_0x000107c61174(param_1);
          lVar5 = lVar2;
          func_0x000103f580a0(lVar2,param_2,param_3,0,lVar3,param_1);
          func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1));
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
          param_1 = lVar5;
        }
        else {
          func_0x000107c61170();
          func_0x000107c61170(param_1);
          func_0x000107c615e8(lVar3);
          param_1 = lVar2;
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028ab028; end: 1028ab09b; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028ab028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001028abc90(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ab09c; end: 1028ab0b3; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028ab0b0) */

void FUN_1028ab09c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028ab0b4; end: 1028ab0bb; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin pluginType] */

undefined8 FUN_1028ab0b4(void)

{
  return 0;
}



/* Entry: 1028ab0bc; end: 1028ab13f; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001028ab0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ab114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ab0fc) */
/* WARNING: Removing unreachable block (ram,0x0001028ab118) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ab0bc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028ab140; end: 1028ab19f; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin init] */

void FUN_1028ab140(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SportsGameSharePlugin.SportsGameSharePlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ab16c);
  (*pcVar1)();
}



/* Entry: 1028ab1a0; end: 1028ab257; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028ab1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ab21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ab23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ab220) */
/* WARNING: Removing unreachable block (ram,0x0001028ab1f0) */
/* WARNING: Removing unreachable block (ram,0x0001028ab240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ab1a0(long param_1)

{
  func_0x000100d0d83c(param_1 + _DAT_112ec7700);
  func_0x000100d0d83c(param_1 + _DAT_112ec7708);
  func_0x000100d0d83c(param_1 + _DAT_112ec7710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7718));
  return;
}



/* Entry: 1028ab258; end: 1028ab277;  */

void FUN_1028ab258(void)

{
  func_0x000107c61168(&PTR_PTR_11286a648);
  return;
}



/* Entry: 1028ab278; end: 1028ab2fb; -[_TtC21SportsGameSharePlugin21SportsGameSharePlugin didDismissChatWithScope:] */

/* WARNING: Possible PIC construction at 0x0001028ab2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ab2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ab2b8) */
/* WARNING: Removing unreachable block (ram,0x0001028ab2d4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ab278(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028ab2fc; end: 1028ac0bf;  */

undefined * FUN_1028ab2fc(ulong param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  
  uVar13 = param_1;
  func_0x000107c44ee8();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc2c);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar10 == 0) {
LAB_1028ab388:
    uVar10 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    uVar13 = uVar10;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar13 == 0) goto LAB_1028ab388;
    uVar10 = uVar13;
    func_0x000107c5faec(uVar13);
    func_0x000107c61170(uVar13);
  }
  uVar13 = param_1;
  func_0x000107c44ee8();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc30);
    (*pcVar3)();
  }
  uVar11 = uVar13;
  func_0x000107c3ce94();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc34);
    (*pcVar3)();
  }
  puVar4 = PTR_PTR_1126ab670;
  func_0x000107c610f8(PTR_PTR_1126ab670);
  uVar5 = param_2;
  func_0x000107c5fadc(uVar10);
  func_0x000107c6142c(param_2);
  func_0x000107c48c5c(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar13 = param_1;
  func_0x000107c44ee8();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc38);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c54d10(puVar4);
  func_0x000107c61170(uVar10);
  uVar13 = param_1;
  func_0x000107c44ee8();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc3c);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c4c07c();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc40);
    (*pcVar3)();
  }
  uVar13 = uVar10;
  func_0x000107c5faec();
  uVar11 = uVar5;
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(uVar5);
  uVar13 = uVar13 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar13 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
LAB_1028ab4f0:
    uVar10 = 0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c44ee8();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc6c);
      (*pcVar3)();
    }
    uVar10 = uVar13;
    func_0x000107c4c07c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar10 == 0) goto LAB_1028ab4f0;
  }
  func_0x000107c56124(puVar4);
  func_0x000107c61170(uVar10);
  uVar13 = param_1;
  func_0x000107c3e570();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc44);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar10 == 0) {
LAB_1028ab578:
    uVar10 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    uVar13 = uVar10;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar13 == 0) goto LAB_1028ab578;
    uVar10 = uVar13;
    func_0x000107c5faec(uVar13);
    func_0x000107c61170(uVar13);
  }
  uVar13 = param_1;
  func_0x000107c3e570();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc48);
    (*pcVar3)();
  }
  uVar5 = uVar13;
  func_0x000107c3ce94();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc4c);
    (*pcVar3)();
  }
  puVar6 = PTR_PTR_1126ab670;
  func_0x000107c610f8(PTR_PTR_1126ab670);
  uVar9 = uVar11;
  func_0x000107c5fadc(uVar10);
  func_0x000107c6142c(uVar11);
  func_0x000107c48c5c(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  uVar13 = param_1;
  func_0x000107c3e570();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc50);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c54d10(puVar6);
  func_0x000107c61170(uVar10);
  uVar13 = param_1;
  func_0x000107c3e570();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc54);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c4c07c();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc58);
    (*pcVar3)();
  }
  uVar13 = uVar10;
  func_0x000107c5faec();
  uVar11 = uVar9;
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(uVar9);
  uVar13 = uVar13 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar13 = uVar9 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
LAB_1028ab6dc:
    uVar10 = 0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c3e570();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc70);
      (*pcVar3)();
    }
    uVar10 = uVar13;
    func_0x000107c4c07c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar10 == 0) goto LAB_1028ab6dc;
  }
  func_0x000107c56124(puVar6);
  func_0x000107c61170(uVar10);
  uVar13 = param_1;
  func_0x000107c43cc8();
  ppuVar1 = &PTR_PTR_1133ba6b8;
  if ((int)uVar13 != 3) {
    ppuVar1 = &PTR_PTR_1133ba6a8;
  }
  ppuVar2 = &PTR_PTR_1133ba6b0;
  if ((int)uVar13 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar7 = *ppuVar2;
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar13 = param_1;
  func_0x000107c5ca08();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc5c);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c44a20();
  func_0x000107c61170(uVar13);
  uVar13 = param_1;
  func_0x000107c43cac();
  func_0x000107c61180();
  if (uVar13 == 0) {
LAB_1028ab7ac:
    uVar13 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    uVar5 = uVar13;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar5 == 0) goto LAB_1028ab7ac;
    uVar13 = uVar5;
    func_0x000107c5faec(uVar5);
    func_0x000107c61170(uVar5);
  }
  puVar8 = PTR_PTR_1126ab678;
  func_0x000107c610f8(PTR_PTR_1126ab678);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar6);
  uVar5 = uVar11;
  func_0x000107c5fadc(uVar13);
  func_0x000107c6142c(uVar11);
  func_0x000107c46aec(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar13);
  uVar13 = param_1;
  func_0x000107c448d8();
  if ((int)uVar13 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c44eec();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc74);
      (*pcVar3)();
    }
    func_0x000107c4eaf4();
    func_0x000107c61170(uVar13);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
  }
  func_0x000107c55190(puVar8);
  func_0x000107c61170(puVar12);
  uVar13 = param_1;
  func_0x000107c44750();
  if ((int)uVar13 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c3e574();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc78);
      (*pcVar3)();
    }
    func_0x000107c4eaf4();
    func_0x000107c61170(uVar13);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
  }
  func_0x000107c52b20(puVar8);
  func_0x000107c61170(puVar12);
  if ((int)uVar10 == 0) {
    func_0x000107c57320(puVar8);
LAB_1028ab9d8:
    uVar13 = 0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c5ca08();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc7c);
      (*pcVar3)();
    }
    uVar10 = uVar13;
    func_0x000107c4e610();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc80);
      (*pcVar3)();
    }
    uVar13 = uVar10;
    func_0x000107c4e610();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar13 == 0) {
      func_0x000107c57320(puVar8);
    }
    else {
      func_0x000107c57320(puVar8);
      func_0x000107c61170(uVar13);
    }
    uVar13 = param_1;
    func_0x000107c5ca08();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc84);
      (*pcVar3)();
    }
    uVar10 = uVar13;
    func_0x000107c4e610();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc88);
      (*pcVar3)();
    }
    uVar13 = uVar10;
    func_0x000107c4e614();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar13 == 0) goto LAB_1028ab9d8;
  }
  func_0x000107c57324(puVar8);
  func_0x000107c61170(uVar13);
  uVar13 = param_1;
  func_0x000107c5db60();
  if ((long)uVar13 < 1) {
    puVar12 = (undefined *)0x0;
  }
  else {
    func_0x000107c5db60(param_1);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
  }
  func_0x000107c58c3c(puVar8);
  func_0x000107c61170(puVar12);
  uVar13 = param_1;
  func_0x000107c5cbf4();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc60);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c5faec();
  uVar11 = uVar5;
  func_0x000107c61170(uVar13);
  func_0x000107c6142c(uVar5);
  uVar13 = uVar10 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar13 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
LAB_1028aba9c:
    uVar13 = 0;
  }
  else {
    uVar13 = param_1;
    func_0x000107c5cbf4();
    func_0x000107c61180();
    if (uVar13 == 0) goto LAB_1028aba9c;
  }
  func_0x000107c59ed0(puVar8);
  func_0x000107c61170(uVar13);
  uVar13 = param_1;
  func_0x000107c3ec24();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc64);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  func_0x000107c6142c(uVar11);
  uVar13 = uVar10 & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar13 = uVar11 >> 0x38 & 0xf;
  }
  if (uVar13 != 0) {
    uVar13 = param_1;
    func_0x000107c3ec24();
    func_0x000107c61180();
    if (uVar13 != 0) goto LAB_1028abb18;
  }
  uVar13 = 0;
LAB_1028abb18:
  func_0x000107c52e18(puVar8);
  func_0x000107c61170(uVar13);
  uVar13 = param_1;
  func_0x000107c5ca08();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc68);
    (*pcVar3)();
  }
  uVar10 = uVar13;
  func_0x000107c41878();
  func_0x000107c61170(uVar13);
  if ((int)uVar10 == 2) {
    func_0x000107c5ca08();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc8c);
      (*pcVar3)();
    }
    uVar13 = param_1;
    func_0x000107c3e6b0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028abc90);
      (*pcVar3)();
    }
    func_0x000107c3e674(uVar13);
    func_0x000107c3e678(uVar13);
    func_0x000107c3e67c(uVar13);
    puVar12 = PTR_PTR_1126ab680;
    func_0x000107c610f8(PTR_PTR_1126ab680);
    func_0x000107c4591c();
    func_0x000107c61170(uVar13);
    func_0x000107c52bfc(puVar8);
    func_0x000107c61170(puVar12);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  return puVar8;
}



/* Entry: 1028ac0c0; end: 1028ac0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ac0c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_112ec7700;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = lVar3 + _DAT_112ec7710;
      func_0x000107c61618();
      lVar2 = _DAT_112ec7730;
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = *(long *)(lVar3 + _DAT_112ec7730);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x0001005138b4();
          func_0x000107c610f8();
          func_0x000107c61174(lVar4);
          func_0x000107c61434(uVar8);
          func_0x000107c615f0(lVar5);
          lVar6 = lVar3;
          func_0x000107c61174(lVar3);
          lVar7 = lVar4;
          func_0x000103f580a0(lVar4,uVar1,uVar8,0,lVar5,lVar3);
          func_0x000107c42c1c(*(undefined8 *)(lVar3 + lVar2));
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(lVar5);
          lVar3 = lVar7;
        }
        else {
          func_0x000107c61170();
          func_0x000107c61170(lVar3);
          func_0x000107c615e8(lVar5);
          lVar3 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1028ac0e8; end: 1028ac127;  */

void FUN_1028ac0e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028ac128; end: 1028ac137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ac128(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ec7740);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c4fe7c(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1028ac138; end: 1028ac33b;  */

void FUN_1028ac138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110561130;
  func_0x000107c613fc(&UNK_110561130,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028ac33c,puVar1);
  return;
}



/* Entry: 1028ac33c; end: 1028ac357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ac33c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c5b888();
    if ((int)lVar1 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar1 = lStack_48;
      uVar4 = 0x112ec7680;
      func_0x0001000285a8(0x112ec7680,&UNK_10dae9e00);
      func_0x000107c610f8();
      func_0x00010017da58(lVar1,uVar4);
      puVar2 = PTR_PTR_1126a73e0;
      func_0x000107c610f8(PTR_PTR_1126a73e0);
      func_0x000107c4907c();
      func_0x000107c61170(lVar1);
      func_0x000107c61174(puVar2);
      func_0x000100083b20(&lStack_48);
      uVar4 = *(undefined8 *)(lStack_48 + _DAT_11301aef0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lStack_48);
      FUN_1028ab258(0);
      func_0x000107c610f8();
      FUN_1028aac8c(lVar3,puVar2,uVar4);
      func_0x000107c61170(puVar2);
      goto LAB_1028ac320;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar3 = 0;
LAB_1028ac320:
  *param_1 = lVar3;
  return;
}



/* Entry: 1028ac358; end: 1028ac8ab;  */

long FUN_1028ac358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return unaff_x20;
}



/* Entry: 1028ac8ac; end: 1028ac96b;  */

/* WARNING: Possible PIC construction at 0x0001028ac8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ac8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ac8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ac8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ac8dc) */
/* WARNING: Removing unreachable block (ram,0x0001028ac8cc) */
/* WARNING: Removing unreachable block (ram,0x0001028ac8bc) */
/* WARNING: Removing unreachable block (ram,0x0001028ac8ec) */

void FUN_1028ac8ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1028ac96c; end: 1028ac98f;  */

void FUN_1028ac96c(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001028ac474();
  *param_1 = param_2;
  return;
}



/* Entry: 1028ac990; end: 1028ac997;  */

void FUN_1028ac990(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1028acb84(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028ac998; end: 1028aca27;  */

void FUN_1028ac998(undefined8 param_1)

{
  if (lRam0000000112ec77b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6fa728);
  return;
}



/* Entry: 1028aca28; end: 1028aca43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028aca28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec78c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec78c8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (*(code *)&SUB_1000c6560)();
    func_0x000107c613fc();
    (*(code *)&SUB_1000c6580)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 1028aca44; end: 1028acb27;  */

long FUN_1028aca44(long *param_1,code *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c613fc();
    (*param_3)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 1028acb28; end: 1028acb83;  */

void FUN_1028acb28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1028acb84(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1028acb84; end: 1028acdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028acb84(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112ec7898));
  puVar3 = &UNK_110561258;
  func_0x000107c613fc(&UNK_110561258,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110561280;
  func_0x000107c613fc(&UNK_110561280,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1028ae7a0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1028ae7a8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de6bdc;
  puStack_88 = &UNK_110561298;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1105612d0;
  func_0x000107c613fc(&UNK_1105612d0,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_1105612f8;
  func_0x000107c613fc(&UNK_1105612f8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1028ae7e4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x1028ae8c8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de6bdc;
  puStack_88 = &UNK_110561310;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5b4(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6a,0x43,0xd,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028acdac);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6a,0x47,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028acdb0);
  (*pcVar2)();
}



/* Entry: 1028acdb0; end: 1028ace57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028acdb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_102d82ee4();
  FUN_102d829f8();
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112ec7898));
  uVar2 = *(undefined8 *)(param_3 + _DAT_112ec78e0);
  *(undefined8 *)(param_3 + _DAT_112ec78e0) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(*(undefined8 *)(param_3 + _DAT_112ec78a0));
  func_0x000107c61170(uVar1);
  FUN_1028ace58(param_1,param_2);
  return;
}



/* Entry: 1028ace58; end: 1028ad017;  */

/* WARNING: Possible PIC construction at 0x0001028acf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028acf84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028acf30) */
/* WARNING: Removing unreachable block (ram,0x0001028acf88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ace58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7898);
  func_0x000107c3e208(uVar4);
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec78a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lVar1;
    func_0x000107c42fb0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      uVar3 = 0x112ec01d0;
      func_0x0001000285a8(0x112ec01d0,&UNK_10daddbc0);
      func_0x0001000b637c(lVar2,uVar3);
      func_0x000107c615f0(uVar4);
      func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1028ad018; end: 1028ad0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ad018(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_102d82ee4();
  FUN_102d829f8();
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112ec7898));
  uVar3 = *(undefined8 *)(param_3 + _DAT_112ec78e0);
  *(undefined8 *)(param_3 + _DAT_112ec78e0) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c4d664(*(undefined8 *)(param_3 + _DAT_112ec78a0));
  func_0x000107c61170(uVar1);
  puVar2 = &DAT_112ec78d0;
  FUN_1028aca44(&DAT_112ec78d0,&SUB_1005f60b4,&SUB_1005f60d4);
  func_0x000100c82230();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1028ad0cc; end: 1028ad19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ad0cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c3e208(*(undefined8 *)(param_2 + _DAT_112ec7898));
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec78e0);
    lStack_70 = param_2;
    uStack_68 = uVar2;
    lStack_50 = param_2;
    uStack_48 = uVar2;
    func_0x000107c61174(uVar1);
    func_0x000102d82d38(FUN_1028ae7f4,auStack_60,FUN_1028ad4a0,0,0x1028ad4a4,0,0x1028ad4a8,0,
                        0x1028ae818,auStack_80);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1028ad19c; end: 1028ad49f;  */

/* WARNING: Possible PIC construction at 0x0001028ad20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ad460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ad43c) */
/* WARNING: Removing unreachable block (ram,0x0001028ad374) */
/* WARNING: Removing unreachable block (ram,0x0001028ad30c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001028ad2dc) */
/* WARNING: Removing unreachable block (ram,0x0001028ad488) */
/* WARNING: Removing unreachable block (ram,0x0001028ad490) */
/* WARNING: Removing unreachable block (ram,0x0001028ad2e4) */
/* WARNING: Removing unreachable block (ram,0x0001028ad2ec) */
/* WARNING: Removing unreachable block (ram,0x0001028ad328) */
/* WARNING: Removing unreachable block (ram,0x0001028ad47c) */
/* WARNING: Removing unreachable block (ram,0x0001028ad344) */
/* WARNING: Removing unreachable block (ram,0x0001028ad304) */
/* WARNING: Removing unreachable block (ram,0x0001028ad22c) */
/* WARNING: Removing unreachable block (ram,0x0001028ad464) */
/* WARNING: Removing unreachable block (ram,0x0001028ad240) */
/* WARNING: Removing unreachable block (ram,0x0001028ad250) */
/* WARNING: Removing unreachable block (ram,0x0001028ad278) */
/* WARNING: Removing unreachable block (ram,0x0001028ad294) */
/* WARNING: Removing unreachable block (ram,0x0001028ad25c) */
/* WARNING: Removing unreachable block (ram,0x0001028ad210) */
/* WARNING: Removing unreachable block (ram,0x0001028ad454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ad19c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec7898);
  func_0x000107c3e208(uVar2);
  uVar1 = 0;
  FUN_102d82ee4();
  func_0x000102d82a0c();
  func_0x000107c3e208(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec78e0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec78e0) = uVar1;
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028ad4a0; end: 1028ad4ab;  */

void FUN_1028ad4a0(void)

{
  return;
}



/* Entry: 1028ad4ac; end: 1028ad6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ad4ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112ec7898));
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec78b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c40674(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar3 = &UNK_110561348;
    func_0x000107c613fc(&UNK_110561348,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_1028ae83c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1028ad9c0;
    puStack_48 = &UNK_110561360;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar5 = lVar1;
    func_0x000107c431e8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1028ad6f4; end: 1028ad74f;  */

void FUN_1028ad6f4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028ad750(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028ad750; end: 1028ad9bf;  */

/* WARNING: Possible PIC construction at 0x0001028ad858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ad85c) */
/* WARNING: Removing unreachable block (ram,0x0001028ad8c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ad750(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112ec7898));
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ad9c0);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar4);
    }
    else {
      uVar4 = 0;
      param_2 = param_1;
      func_0x000101681cac(0,param_1);
    }
    uVar5 = uVar4;
    func_0x000107c40258();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec(uVar5);
    func_0x000107c61170(uVar5);
    FUN_1028ada54();
    if ((param_1 & 1) != 0) {
      uVar5 = 0;
      FUN_102d82ee4(0);
      FUN_102d82a1c(uVar4,param_2,uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1028ad9c0; end: 1028ada53;  */

void FUN_1028ad9c0(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_1028ae84c(0,0x112dbe420,&PTR_PTR_1126b2d28);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1028ada54; end: 1028adc2b;  */

bool FUN_1028ada54(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ef64();
  lStack_70 = *(long *)(lVar2 + -8);
  lStack_68 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar7 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  uVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar8 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar10 = uVar8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    if (uVar10 == uVar6) break;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028adc14);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar6;
      func_0x000101681cac(uVar6,param_1);
    }
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028adc10);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c4ce20(uVar3);
    func_0x000107c61180();
    func_0x000107c40c30();
    func_0x000107c61170(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c61168();
    func_0x000107c41348();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028adc2c);
      (*pcVar1)();
    }
    func_0x000107c5ee94(uVar9);
    func_0x000107c61170(puVar5);
    func_0x000107c5ef54(lVar7);
    uVar4 = uVar9;
    func_0x000107c5ef20();
    func_0x000107c61170(uVar3);
    (**(code **)(lStack_70 + 8))(lVar7,lStack_68);
    (**(code **)(lStack_80 + 8))(uVar9,lStack_78);
    uVar3 = uVar6 + 1;
  } while ((uVar4 & 1) == 0);
  return uVar10 != uVar6;
}



/* Entry: 1028adc2c; end: 1028add4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028adc2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec7898);
      func_0x000107c61434(param_1);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar1);
      puVar2 = &UNK_110561438;
      func_0x000107c613fc(&UNK_110561438,0x28,7);
      *(long *)(puVar2 + 0x10) = param_3;
      *(long *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      uStack_68 = 0x1028ae894;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110561450;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_60;
      func_0x000107c6157c(param_3);
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 1028add4c; end: 1028addc3;  */

void FUN_1028add4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4aafc(param_3);
    FUN_1028addc4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028addc4; end: 1028ae0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028addc4(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar3 = 0;
  FUN_102d82ee4();
  func_0x000102d82a0c();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec7898);
  func_0x000107c3e208(uVar6);
  lVar2 = _DAT_112ec78e0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec78e0);
  *(ulong *)(unaff_x20 + _DAT_112ec78e0) = uVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec78a0);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170();
  FUN_1028ae0bc();
  if (((((uVar3 & 1) == 0) && (uVar3 = param_2, FUN_1028ae270(), (uVar3 & 1) == 0)) &&
      (uVar3 = param_2, func_0x0001028ae3d4(param_2,param_3), (uVar3 & 1) == 0)) &&
     (uVar3 = param_2, func_0x0001028ae51c(), (uVar3 & 1) == 0)) {
    uVar3 = param_2;
    FUN_1028ada54();
    if ((uVar3 & 1) == 0) {
      FUN_102d82c4c();
    }
    else {
      if (param_2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = param_2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_2) {
          uVar3 = param_2;
        }
        func_0x000107c60480();
      }
      if (uVar3 == 0) {
        return;
      }
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ae0bc);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(param_2 + 0x20);
        func_0x000107c61174();
        param_2 = param_3;
      }
      else {
        uVar3 = 0;
        func_0x000101681cac(0,param_2);
      }
      uVar4 = uVar3;
      func_0x000107c40258();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      func_0x000102d82b34(uVar3,param_2);
      func_0x000107c6142c(param_2);
    }
    func_0x000107c3e208(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(ulong *)(unaff_x20 + lVar2) = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(uVar3);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec78b8);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = 0;
    if (lVar2 != 0) {
      func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_78);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1);
      uVar6 = 0xd00000000000002a;
      func_0x000107c5fadc(0xd00000000000002a,0x800000010f0c6c00);
      func_0x000107c56bcc(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x0001028acabc();
    func_0x000108460990();
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1028ae0bc; end: 1028ae26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae0bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec78b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f0c6c00);
    lVar4 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar2 = lVar4;
      func_0x000107c6148c(lVar4,puVar5);
      if (lVar2 != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ec78c0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c4223c(lVar2);
          func_0x000107c5ee88(lVar8);
          func_0x000107c5eea0(puVar9);
          func_0x000107c5ee68(lVar8);
          pcVar7 = *(code **)(lVar10 + 8);
          (*pcVar7)(puVar9,lVar1);
          func_0x000107c3d8ec(lVar6);
          func_0x000107c615e8(lVar6);
          func_0x000107c615e8(lVar4);
          (*pcVar7)(lVar8,lVar1);
          return;
        }
      }
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1028ae270; end: 1028ae653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028ae270(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar8 = 0;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec7890);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ec7890))[1];
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1028ae398);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x000101681cac(uVar8,param_1);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1028ae394);
        (*pcVar4)();
      }
      uVar6 = uVar2;
      func_0x000107c5fadc(uVar2,uVar3);
      uVar7 = uVar5;
      func_0x000107c4a3c8();
      func_0x000107c61170(uVar6);
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar2;
        func_0x000107c5fadc(uVar2,uVar3);
        uVar7 = uVar5;
        func_0x000107c4a2d0();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        if ((uVar7 & 1) == 0) {
          return 1;
        }
      }
      else {
        func_0x000107c61170(uVar5);
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar9);
  }
  return 0;
}



/* Entry: 1028ae654; end: 1028ae6b3; -[_TtC29AddToGroupCardServiceProvider26AddToGroupCardStateManager init] */

void FUN_1028ae654(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupCardServiceProvider.AddToGroupCardStateManager",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ae680);
  (*pcVar1)();
}



/* Entry: 1028ae6b4; end: 1028ae77f; -[_TtC29AddToGroupCardServiceProvider26AddToGroupCardStateManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028ae6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ae714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ae734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ae764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ae738) */
/* WARNING: Removing unreachable block (ram,0x0001028ae718) */
/* WARNING: Removing unreachable block (ram,0x0001028ae6f8) */
/* WARNING: Removing unreachable block (ram,0x0001028ae768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae6b4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec7890 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7898));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec78a0));
  return;
}



/* Entry: 1028ae780; end: 1028ae79f;  */

void FUN_1028ae780(void)

{
  func_0x000107c61168(&PTR_PTR_11286a750);
  return;
}



/* Entry: 1028ae7a0; end: 1028ae7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_102d82ee4();
  FUN_102d829f8();
  func_0x000107c3e208(*(undefined8 *)(lVar2 + _DAT_112ec7898));
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec78e0);
  *(undefined8 *)(lVar2 + _DAT_112ec78e0) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c4d664(*(undefined8 *)(lVar2 + _DAT_112ec78a0));
  func_0x000107c61170(uVar1);
  FUN_1028ace58(param_1,param_2);
  return;
}



/* Entry: 1028ae7a8; end: 1028ae7c7;  */

void FUN_1028ae7a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028ae7c8; end: 1028ae7f3;  */

void FUN_1028ae7c8(long param_1,long param_2)

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



/* Entry: 1028ae7f4; end: 1028ae83b;  */

void FUN_1028ae7f4(void)

{
  long unaff_x20;
  
  FUN_1028ad19c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028ae83c; end: 1028ae84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae83c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec7898);
      func_0x000107c61434(param_1);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar1);
      puVar2 = &UNK_110561398;
      func_0x000107c613fc(&UNK_110561398,0x20,7);
      *(long *)(puVar2 + 0x10) = unaff_x20;
      *(long *)(puVar2 + 0x18) = param_1;
      uStack_58 = 0x1028ae844;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1105613b0;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_50;
      func_0x000107c6157c();
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 1028ae84c; end: 1028ae88b;  */

void FUN_1028ae84c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028ae88c; end: 1028ae8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae88c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
    lVar3 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112ec7898);
      func_0x000107c61434(param_1);
      func_0x000107c615f0(uVar6);
      func_0x000107c61170(lVar3);
      puVar4 = &UNK_110561438;
      func_0x000107c613fc(&UNK_110561438,0x28,7);
      *(long *)(puVar4 + 0x10) = lVar1;
      *(long *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = uVar2;
      uStack_68 = 0x1028ae894;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110561450;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_60;
      func_0x000107c6157c(lVar1);
      func_0x000107c61174(uVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(uVar6);
    }
  }
  return;
}



/* Entry: 1028ae8cc; end: 1028ae913; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae8cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7910;
  func_0x000107c61428(param_1 + _DAT_112ec7910,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028ae914; end: 1028ae977; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7910;
  func_0x000107c61428(param_1 + _DAT_112ec7910,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1028ae978; end: 1028ae9bf; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae978(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7918;
  func_0x000107c61428(param_1 + _DAT_112ec7918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028ae9c0; end: 1028aea17; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ae9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7918;
  func_0x000107c61428(param_1 + _DAT_112ec7918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028aea18; end: 1028aebcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aea18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7910) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ec7918,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec7920) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7928) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7930) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7938) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ec7940) = 0;
  *(undefined **)(unaff_x20 + _DAT_112ec7948) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7950) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7958) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7960) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7968) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7970) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7978) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7980) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7988) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7990) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7998) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ec79a0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ec79a8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ec79b0) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028aebcc; end: 1028aedcb;  */

undefined * FUN_1028aebcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  
  uVar1 = 0x112d3bec8;
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x0001000b637c(param_1,uVar1);
  func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
  uVar1 = param_2;
  func_0x0001000b637c(param_2);
  uVar2 = uVar1;
  func_0x0001006c733c();
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar1);
  puVar7 = &UNK_110561530;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110561558;
  func_0x000107c613fc(&UNK_110561558,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1028aee58;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar1 = 0x112ec79b8;
  func_0x0001000285a8(0x112ec79b8,&UNK_10dae9ec0);
  pcVar5 = FUN_1028af180;
  func_0x0001000bfde0(FUN_1028af180,puVar4,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  pcVar6 = FUN_1028af1b8;
  func_0x00010487de38(FUN_1028af1b8,0);
  func_0x000107c61574(pcVar5);
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar4 = &UNK_110561580;
  func_0x000107c613fc(&UNK_110561580,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar7;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar7 = &UNK_1105615a8;
  func_0x000107c613fc(&UNK_1105615a8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1028af2a0;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  func_0x000107c61174(param_2);
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar5 = FUN_1028af4b4;
  func_0x0001000bfde0(FUN_1028af4b4,puVar7,uVar1);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar5);
  return puVar7;
}



/* Entry: 1028aedcc; end: 1028aee57;  */

uint FUN_1028aedcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 auStack_48 [24];
  undefined8 uVar2;
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = param_1;
    FUN_1028aee60(param_1,param_2);
    uVar1 = (uint)uVar2;
    func_0x000107c61170(param_3);
  }
  func_0x000107c61174(param_1);
  return uVar1 & 1;
}



/* Entry: 1028aee58; end: 1028aee5f;  */

uint FUN_1028aee58(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uVar3;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_1;
    FUN_1028aee60(param_1,param_2);
    uVar1 = (uint)uVar3;
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61174(param_1);
  return uVar1 & 1;
}



/* Entry: 1028aee60; end: 1028af17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028aee60(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_70;
  long alStack_68 [3];
  
  uVar9 = param_1;
  uVar6 = param_2;
  func_0x000107c4a494();
  if ((int)uVar9 == 0) {
    return;
  }
  func_0x0001000d224c(alStack_68);
  lVar1 = *(long *)(alStack_68[0] + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(alStack_68[0]);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  uVar9 = param_1;
  func_0x000107c5ae14();
  func_0x000107c61170(lVar2);
  if ((int)uVar9 == 0) {
    return;
  }
  uVar9 = param_1;
  FUN_1028af680(param_1,param_2);
  lVar2 = _DAT_112ec7948;
  if ((uVar9 & 1) == 0) {
    return;
  }
  plVar7 = alStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112ec7948,plVar7,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61434(uVar6);
  uVar9 = param_1;
  func_0x000107c40258();
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  plVar4 = plVar7;
  func_0x0001000f66f0(uVar8,plVar7,uVar6);
  func_0x000107c6142c(plVar7);
  func_0x000107c6142c(uVar6);
  if ((uVar8 & 1) != 0) {
    return;
  }
  func_0x0001000d224c(&lStack_70);
  lVar2 = lStack_70;
  uVar8 = *(ulong *)(lStack_70 + _DAT_11301aef0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lVar2);
  uVar9 = uVar8;
  func_0x000107c4ce08();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  uVar8 = uVar9;
  func_0x000107c4c930();
  func_0x000107c61180();
  func_0x000107c615e8(uVar9);
  if (uVar8 == 0) {
    uVar9 = 0;
    plVar7 = (long *)0xe000000000000000;
  }
  else {
    uVar3 = uVar8;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (uVar3 == 0) {
      uVar9 = 0;
      plVar7 = (long *)0xe000000000000000;
      plVar5 = plVar4;
    }
    else {
      uVar9 = uVar3;
      func_0x000107c5faec();
      plVar5 = plVar4;
      func_0x000107c61170(uVar3);
      plVar7 = plVar4;
    }
    plVar4 = plVar5;
    uVar3 = uVar8;
    func_0x000107c4c9b8();
    if (uVar3 == 0xffffffffffffffff) {
      func_0x000107c6142c(plVar7);
      goto LAB_1028af170;
    }
  }
  func_0x000107c6142c(plVar7);
  uVar9 = uVar9 & 0xffffffffffff;
  if (((ulong)plVar7 & 0x2000000000000000) != 0) {
    uVar9 = (ulong)plVar7 >> 0x38 & 0xf;
  }
  if ((uVar9 != 0) && (uVar9 = param_1, func_0x000107c44ae4(), (uVar9 & 1) == 0)) {
    func_0x0001000d224c(&lStack_70);
    lVar1 = *(long *)(lStack_70 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_70);
    lVar2 = lVar1;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar4);
    }
    uVar9 = param_1;
    func_0x000107c4a128();
    func_0x000107c61170(lVar2);
    if ((uVar9 & 1) == 0) {
      func_0x000107c4a384(param_1);
    }
  }
LAB_1028af170:
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 1028af180; end: 1028af1b7;  */

void FUN_1028af180(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  bVar1 = (byte)*param_2;
  uVar2 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = bVar1 & 1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}



/* Entry: 1028af1b8; end: 1028af1cf;  */

byte FUN_1028af1b8(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 1028af1d0; end: 1028af29f;  */

/* WARNING: Possible PIC construction at 0x0001028af248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028af24c) */

void FUN_1028af1d0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      puVar1 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      FUN_1028af2a8(param_2,param_4);
      func_0x000107c5b58c(puVar1);
      goto code_r0x000107c61180;
    }
  }
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
code_r0x000107c61180:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1028af2a0; end: 1028af2a7;  */

/* WARNING: Possible PIC construction at 0x0001028af248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028af24c) */

void FUN_1028af2a0(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      FUN_1028af2a8(param_2,uVar1);
      func_0x000107c5b58c(puVar3);
      goto code_r0x000107c61180;
    }
  }
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
code_r0x000107c61180:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1028af2a8; end: 1028af4b3;  */

void FUN_1028af2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126c6b40;
  func_0x000107c610f8();
  func_0x000107c45ad4();
  uVar2 = 2;
  func_0x000107c60660(2);
  func_0x000107c52ea8(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000108f58d74();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126c6b48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = &UNK_110561530;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1105615d0;
  func_0x000107c613fc(&UNK_1105615d0,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcStack_60 = FUN_1028b17c0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_102827bd8;
  puStack_68 = &UNK_1105615e8;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = 0x112ec3b20;
  uVar7 = 0;
  FUN_1028b1934(0,0x112ec3b20,&PTR_PTR_1126c6b50);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = 0;
  FUN_1028b1934(0,0x112ec3b28,&PTR_PTR_1126c6b40);
  uVar9 = 0;
  puStack_80 = puVar1;
  puStack_68 = (undefined *)uVar7;
  FUN_1028b1934(0,0x112ec3b30,&PTR_PTR_1126c6b48);
  apuStack_a0[0] = puVar3;
  uStack_88 = uVar9;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar8,uVar2,&puStack_80,apuStack_a0);
  return;
}



/* Entry: 1028af4b4; end: 1028af4e7;  */

void FUN_1028af4b4(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,*(undefined8 *)(param_2 + 8));
  *param_1 = uVar1;
  return;
}



/* Entry: 1028af4e8; end: 1028af623; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_1028af4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028aebcc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028af624; end: 1028af67f; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_1028af624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001028af560(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1028af680; end: 1028af7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028af680(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x000107c406c0();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x0001070b2918();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61174();
  func_0x000107c4cde0();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  lVar2 = lVar1;
  lVar5 = param_1;
  func_0x0001070b210c(lVar1,param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x0001000d224c(&uStack_48);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5b37c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar6 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c5fadc(lVar6,lVar5);
      func_0x000107c6142c(lVar5);
      goto LAB_1028af794;
    }
  }
  lVar6 = 0;
LAB_1028af794:
  uVar4 = uStack_48;
  func_0x000107c4a2e4(uStack_48);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return uVar4;
}



/* Entry: 1028af7e0; end: 1028af7e7; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin pluginType] */

undefined8 FUN_1028af7e0(void)

{
  return 2;
}


