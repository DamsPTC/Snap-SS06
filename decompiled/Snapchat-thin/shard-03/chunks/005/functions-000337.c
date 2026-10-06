/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102967dc0; end: 10296843f;  */

/* WARNING: Possible PIC construction at 0x000102967f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102967fa8) */
/* WARNING: Removing unreachable block (ram,0x000102967f4c) */
/* WARNING: Removing unreachable block (ram,0x000102967f3c) */
/* WARNING: Removing unreachable block (ram,0x000102967f2c) */
/* WARNING: Removing unreachable block (ram,0x000102967f60) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102967dc0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20 + _DAT_112ecfb08;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c3cfb0();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar2 = PTR_PTR_1126afdb8;
        func_0x000107c61168(PTR_PTR_1126afdb8);
        func_0x000107c6148c(param_1,puVar2);
        if (param_1 != 0) {
          func_0x000107c3cfb0();
          func_0x000107c61180();
          if (param_1 != 0) {
            uVar3 = 0x112d6cab8;
            lStack_58 = param_1;
            func_0x0001000285a8(0x112d6cab8,&UNK_10da47130);
            puVar4 = &uStack_68;
            func_0x000107c6147c(puVar4,&lStack_58,uVar3,PTR___sSSN_11034da80,6);
            if (((ulong)puVar4 & 1) != 0) {
              uVar5 = 0;
              func_0x000104522c9c(0);
              uVar3 = uStack_68;
              func_0x00010452281c(uStack_68,uStack_60,uVar5);
              func_0x000107c6142c(uStack_60);
              func_0x000104523254(0);
              func_0x000107c610f8();
              uVar5 = 0x1a;
              func_0x000104522fdc(0x1a,0,1);
              func_0x000107c610f8(PTR_PTR_1126b3530);
              func_0x000107c4807c();
              func_0x000104520f00(uVar3,uVar5);
              func_0x000107c4ab34(*(undefined8 *)(unaff_x20 + _DAT_112ecfae0));
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102968440; end: 10296849b; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler init] */

void FUN_102968440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsProfileSectionPlugin.MutualFriendsProfileSectionActionHandler",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296846c);
  (*pcVar1)();
}



/* Entry: 10296849c; end: 102968567; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10296849c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfab8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecfac0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecfac8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfad0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfae0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfae8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfaf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfaf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfb00));
  param_1 = param_1 + _DAT_112ecfb08;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102968568; end: 102968587;  */

void FUN_102968568(void)

{
  func_0x000107c61168(&PTR_PTR_112873ac0);
  return;
}



/* Entry: 102968588; end: 10296860b; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler mutualFriendsPageDidDismissWithScope:] */

/* WARNING: Possible PIC construction at 0x0001029685c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029685e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029685c8) */
/* WARNING: Removing unreachable block (ram,0x0001029685e4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102968588(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10296860c; end: 10296861b; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler chatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296860c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ecfae0),PTR_s_endLaunchedFeatureWithScope__1125c2cc8)
  ;
  return;
}



/* Entry: 10296861c; end: 102968633; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler friendProfileDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296861c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112ecfaf0),
               PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 102968634; end: 1029687a7;  */

undefined8 FUN_102968634(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if (param_2 != 0) {
    lVar7 = param_2;
    func_0x000107c61174();
    lVar1 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      FUN_102968814(lVar2,lVar7);
      if (((uint)lVar2 & 0xff) != 4) {
        pcVar3 = "handleActionWithSender(_:actionModel:fromSourceView:)";
        func_0x0001000c10c0("handleActionWithSender(_:actionModel:fromSourceView:)");
        func_0x000107c61180();
        puVar4 = &UNK_110573688;
        func_0x000107c613fc(&UNK_110573688,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_1105736b0;
        func_0x000107c613fc(&UNK_1105736b0,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        puVar5[0x18] = (char)lVar2;
        *(long *)(puVar5 + 0x20) = param_2;
        pcStack_50 = FUN_1029687e8;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_1105736c8;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        puVar4 = puStack_48;
        func_0x000107c61174(param_2);
        func_0x000107c61574(puVar4);
        func_0x000107c4e524(pcVar3);
        func_0x000107c61170(param_2);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(pcVar3);
        return 1;
      }
    }
    func_0x000107c61170(param_2);
  }
  return 0;
}



/* Entry: 1029687a8; end: 1029687e7;  */

undefined8 FUN_1029687a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1029687e8; end: 102968813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029687e8(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        lVar2 = lVar4 + _DAT_112ecfb08;
        func_0x000107c61618();
        if (lVar2 != 0) {
          puVar3 = PTR_PTR_1126b3530;
          func_0x000107c610f8(PTR_PTR_1126b3530);
          func_0x000107c4807c();
          lVar6 = *(long *)(lVar4 + _DAT_112ecfad8);
          uVar5 = *(undefined8 *)(lVar4 + _DAT_112ecfac8);
          func_0x000107c5fadc(uVar5,((undefined8 *)(lVar4 + _DAT_112ecfac8))[1]);
          func_0x000107c3ed34(lVar6);
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112ecfad0));
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar3);
          lVar4 = lVar6;
        }
      }
      else {
        FUN_102967dc0(uVar5);
      }
    }
    else if (bVar1 == 2) {
      func_0x000102967fcc();
    }
    else {
      func_0x000102968224(uVar5);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102968814; end: 102968877;  */

ulong FUN_102968814(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102968878; end: 102968897; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102968878(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ecfbe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102968898; end: 1029688ab; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102968898(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ecfbe8,param_3);
  return;
}



/* Entry: 1029688ac; end: 1029688cb; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029688ac(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ecfbf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029688cc; end: 1029688d7; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029688cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecfbf0);
  *(undefined8 *)(param_1 + _DAT_112ecfbf0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1029688d8; end: 1029688f7; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029688d8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ecfbf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029688f8; end: 102968903; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029688f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecfbf8);
  *(undefined8 *)(param_1 + _DAT_112ecfbf8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102968904; end: 102968933;  */

void FUN_102968904(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102968934; end: 102968a0b;  */

/* WARNING: Possible PIC construction at 0x0001029689b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029689f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029689b8) */
/* WARNING: Removing unreachable block (ram,0x0001029689d0) */
/* WARNING: Removing unreachable block (ram,0x0001029689f0) */
/* WARNING: Removing unreachable block (ram,0x0001029689f8) */

void FUN_102968934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdb8;
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  puVar2 = PTR_PTR_1126b02a8;
  func_0x000107c610f8(PTR_PTR_1126b02a8);
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0cfd10);
  func_0x000107c46d50(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102968a0c; end: 102968a4f;  */

/* WARNING: Possible PIC construction at 0x000102968a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102968adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102968b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102968ae0) */
/* WARNING: Removing unreachable block (ram,0x000102968af8) */
/* WARNING: Removing unreachable block (ram,0x000102968b18) */
/* WARNING: Removing unreachable block (ram,0x000102968a98) */
/* WARNING: Removing unreachable block (ram,0x000102968b20) */

void FUN_102968a0c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5fadc(param_1,param_2,0x746168436e65706f,0xec00000065676150);
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102968a50; end: 102968c23;  */

/* WARNING: Possible PIC construction at 0x000102968a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102968adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102968b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102968ae0) */
/* WARNING: Removing unreachable block (ram,0x000102968af8) */
/* WARNING: Removing unreachable block (ram,0x000102968b18) */
/* WARNING: Removing unreachable block (ram,0x000102968a98) */
/* WARNING: Removing unreachable block (ram,0x000102968b20) */

void FUN_102968a50(undefined8 param_1)

{
  func_0x000107c5fadc();
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102968c24; end: 102968c7f; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider init] */

void FUN_102968c24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsProfileSectionPlugin.MutualFriendsProfileSectionComposerContextProvider"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102968c50);
  (*pcVar1)();
}



/* Entry: 102968c80; end: 102968d1f; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102968cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102968d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102968cc8) */
/* WARNING: Removing unreachable block (ram,0x000102968d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102968c80(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecfbc0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecfbc8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecfbd0));
  return;
}



/* Entry: 102968d20; end: 102968d3f;  */

void FUN_102968d20(void)

{
  func_0x000107c61168(&PTR_PTR_112873c30);
  return;
}



/* Entry: 102968d40; end: 10296916f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102968d40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  if (*(long *)(unaff_x20 + _DAT_112ecfbf0) != 0) {
    func_0x000107c3e208();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ecfbc0);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ecfbc0))[1];
  puVar2 = PTR_PTR_1126aba58;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c45cd0();
  func_0x000107c61170(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112ecfbc8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ecfbc8);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c53184(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c57914(puVar2);
  func_0x000107c61170(puVar5);
  func_0x0001000d224c(auStack_80);
  puVar4 = &UNK_110573700;
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_110573700,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = puVar4;
  func_0x000107c613fc(&UNK_110573700,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = puVar4;
  func_0x000107c613fc(&UNK_110573700,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  func_0x000107c613fc(&UNK_110573700,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar9 = PTR_PTR_1126aba60;
  func_0x000107c610f8();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x1029692bc;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110573718;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(ppuVar10);
  pcStack_c0 = FUN_1029692c4;
  puStack_e0 = puVar5;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_100c75f50;
  puStack_c8 = &UNK_110573740;
  ppuVar11 = &puStack_e0;
  puStack_b8 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  uStack_f0 = 0x1029692e4;
  puStack_110 = puVar5;
  uStack_108 = 0x42000000;
  puStack_100 = &UNK_100c75f50;
  puStack_f8 = &UNK_110573768;
  ppuVar12 = &puStack_110;
  puStack_e8 = puVar8;
  func_0x000107c60bc4(ppuVar12);
  uStack_120 = 0x102969304;
  puStack_140 = puVar5;
  uStack_138 = 0x42000000;
  puStack_130 = &UNK_100c75f50;
  puStack_128 = &UNK_110573790;
  ppuVar13 = &puStack_140;
  puStack_118 = puVar4;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar4);
  func_0x000107c463a4();
  func_0x000107c615e8(auStack_80[0]);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puStack_118);
  func_0x000107c61574(puStack_e8);
  func_0x000107c61574(puStack_b8);
  puVar5 = puStack_88;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  lVar14 = *(long *)(unaff_x20 + _DAT_112ecfbd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar14 == 0) {
    func_0x000107c61170(puVar9);
  }
  else {
    lVar15 = lVar14;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
    if (lVar15 != 0) {
      FUN_102969340(0);
      func_0x000107c614e8();
      lVar14 = lVar15;
      func_0x000107c40994(lVar15);
      func_0x000107c61180();
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar9);
      return lVar14;
    }
    func_0x000107c61170(puVar9);
  }
  func_0x000107c61170(puVar2);
  return 0;
}



/* Entry: 102969170; end: 1029691c3;  */

void FUN_102969170(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102968934();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029691c4; end: 102969237;  */

void FUN_1029691c4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    (*param_4)(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102969238; end: 10296926b; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider valdiContext] */

void FUN_102969238(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102968d40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10296926c; end: 1029692b7; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider setUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296926c(long param_1)

{
  param_1 = param_1 + _DAT_112ecfbe8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5dbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1029692b8; end: 1029692c3; -[_TtC33MutualFriendsProfileSectionPlugin50MutualFriendsProfileSectionComposerContextProvider tearDown] */

void FUN_1029692b8(void)

{
  return;
}



/* Entry: 1029692c4; end: 102969323;  */

void FUN_1029692c4(void)

{
  FUN_1029691c4();
  return;
}



/* Entry: 102969324; end: 10296933f;  */

void FUN_102969324(long param_1,long param_2)

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



/* Entry: 102969340; end: 102969383;  */

void FUN_102969340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecfc28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aba68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ecfc28 = puVar1;
  return;
}



/* Entry: 102969384; end: 1029693a7;  */

undefined8 FUN_102969384(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029693a8; end: 1029693bf;  */

void FUN_1029693a8(long param_1,long param_2)

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



/* Entry: 1029693c0; end: 10296981f;  */

void FUN_1029693c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_1105737c8;
  func_0x000107c613fc(&UNK_1105737c8,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_13;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_7;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_102969820,puVar1);
  return;
}



/* Entry: 102969820; end: 10296985b;  */

void FUN_102969820(void)

{
  long unaff_x20;
  
  func_0x0001029694fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10296985c; end: 10296986b;  */

undefined1  [16] FUN_10296985c(void)

{
  return ZEXT816(0x1105737f0);
}



/* Entry: 10296986c; end: 102969bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296986c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc68) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc70) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc78) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc80) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc88) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc90) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfc98) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfca0) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102969bc4; end: 102969be7;  */

void FUN_102969bc4(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  func_0x000107c6158c(1,0xffffffffffffffff);
  uRam0000000112ecfcf8 = uVar1;
  return;
}



/* Entry: 102969be8; end: 102969edf;  */

void FUN_102969be8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *param_2;
  cVar1 = (char)param_2[1];
  if (cVar1 == '\x01' || lVar9 == 0) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_10296aaf0();
    func_0x000107c613fc();
    param_2[3] = 3;
    param_2[2] = 1;
    puVar3 = &UNK_110573838;
    func_0x000107c613fc(&UNK_110573838,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar4 = &UNK_110573860;
    func_0x000107c613fc(&UNK_110573860,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    *(long *)(puVar4 + 0x28) = lVar9;
    *(undefined8 *)(puVar4 + 0x30) = param_7;
    func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
    func_0x000107c613fc();
    func_0x00010296ab14(lVar9,cVar1);
    func_0x00010296ab14(lVar9,cVar1);
    func_0x000107c61434(param_5);
    func_0x000107c6157c(param_7);
    uVar5 = 0x10296ab04;
    func_0x0001000bdd8c(0x10296ab04,puVar4);
    puVar3 = &UNK_110573838;
    func_0x000107c613fc(&UNK_110573838,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar4 = &UNK_110573888;
    func_0x000107c613fc(&UNK_110573888,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    *(long *)(puVar4 + 0x28) = lVar9;
    func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
    func_0x000107c613fc();
    func_0x00010296ab14(lVar9,cVar1);
    func_0x000107c61434(param_5);
    uVar6 = 0x10296ab28;
    func_0x0001000bdd8c(0x10296ab28,puVar4);
    FUN_10296a4e8(param_4,param_5,param_6);
    uVar7 = param_4;
    func_0x0001000bf56c();
    uVar8 = uVar7;
    func_0x0001000bf56c();
    puVar3 = PTR_PTR_1126aba70;
    func_0x000107c610f8();
    func_0x000107c454fc();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x0001004575f0();
    func_0x000107c53724(puVar3);
    func_0x000107c61170(uVar8);
    lVar2 = lRam0000000112ecfcf0;
    func_0x000107c61174();
    if (lVar2 != -1) {
      func_0x000107c61568(0x112ecfcf0,FUN_102969bc4);
    }
    func_0x000107c61188(puVar3,uRam0000000112ecfcf8,param_3,1);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(param_4);
    func_0x000107c61170(puVar3);
    func_0x00010296ab34(lVar9,cVar1);
    param_2[4] = (long)puVar3;
  }
  *param_1 = (long)param_2;
  return;
}



/* Entry: 102969ee0; end: 102969eef;  */

void FUN_102969ee0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar11 = *param_2;
  cVar2 = (char)param_2[1];
  if (cVar2 == '\x01' || lVar11 == 0) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_10296aaf0();
    func_0x000107c613fc();
    param_2[3] = 3;
    param_2[2] = 1;
    puVar4 = &UNK_110573838;
    func_0x000107c613fc(&UNK_110573838,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar1);
    puVar5 = &UNK_110573860;
    func_0x000107c613fc(&UNK_110573860,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    *(long *)(puVar5 + 0x28) = lVar11;
    *(undefined8 *)(puVar5 + 0x30) = uVar10;
    func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
    func_0x000107c613fc();
    func_0x00010296ab14(lVar11,cVar2);
    func_0x00010296ab14(lVar11,cVar2);
    func_0x000107c61434(uVar8);
    func_0x000107c6157c(uVar10);
    uVar10 = 0x10296ab04;
    func_0x0001000bdd8c(0x10296ab04,puVar5);
    puVar4 = &UNK_110573838;
    func_0x000107c613fc(&UNK_110573838,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar1);
    puVar5 = &UNK_110573888;
    func_0x000107c613fc(&UNK_110573888,0x30,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    *(long *)(puVar5 + 0x28) = lVar11;
    func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
    func_0x000107c613fc();
    func_0x00010296ab14(lVar11,cVar2);
    func_0x000107c61434(uVar8);
    uVar6 = 0x10296ab28;
    func_0x0001000bdd8c(0x10296ab28,puVar5);
    FUN_10296a4e8(uVar7,uVar8,uVar9);
    uVar8 = uVar7;
    func_0x0001000bf56c();
    uVar9 = uVar8;
    func_0x0001000bf56c();
    puVar4 = PTR_PTR_1126aba70;
    func_0x000107c610f8();
    func_0x000107c454fc();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x0001004575f0();
    func_0x000107c53724(puVar4);
    func_0x000107c61170(uVar9);
    lVar3 = lRam0000000112ecfcf0;
    func_0x000107c61174();
    if (lVar3 != -1) {
      func_0x000107c61568(0x112ecfcf0,FUN_102969bc4);
    }
    func_0x000107c61188(puVar4,uRam0000000112ecfcf8,uVar1,1);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(puVar4);
    func_0x00010296ab34(lVar11,cVar2);
    param_2[4] = (long)puVar4;
  }
  *param_1 = (long)param_2;
  return;
}



/* Entry: 102969ef0; end: 102969f8b;  */

void FUN_102969ef0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_102969f8c(param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 102969f8c; end: 10296a297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102969f8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  long lStack_90;
  long lStack_88;
  
  plVar6 = &lStack_90;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecfc40);
  lVar10 = param_2;
  func_0x000107c42120();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar12 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc58);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_102968d20();
  lVar3 = lVar5;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ecfbe8,0);
  *(undefined8 *)(lVar3 + _DAT_112ecfbf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ecfbf8) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ecfbc0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  plVar2 = (long *)(lVar3 + _DAT_112ecfbc8);
  *plVar2 = lVar12;
  plVar2[1] = lVar10;
  *(undefined8 *)(lVar3 + _DAT_112ecfbd0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ecfbd8) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112ecfbe0) = param_4;
  puVar9 = PTR_s_init_1125d9248;
  lStack_90 = lVar3;
  lStack_88 = lVar5;
  func_0x000107c61434(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_90,puVar9);
  puVar7 = (undefined1 *)plVar6;
  FUN_10296ab90();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  puVar8 = puVar7;
  func_0x000108f728c0(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar9 = PTR_PTR_1126b0c00;
  func_0x000107c610f8(PTR_PTR_1126b0c00);
  func_0x000107c48538();
  lVar10 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecfc48) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    func_0x000107c61170(plVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar4 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f0cfdf0);
    lVar3 = lVar10;
    func_0x000107c4e60c(lVar10);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar11 = PTR_PTR_1126b2b48;
    func_0x000107c610f8(PTR_PTR_1126b2b48);
    func_0x000107c61174(plVar6);
    func_0x000107c61174(puVar9);
    func_0x000107c45f10(0,0x4030000000000000,0x4038000000000000,0x4030000000000000,puVar11);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c615e8(lVar3);
  }
  return puVar11;
}



/* Entry: 10296a298; end: 10296a32b;  */

void FUN_10296a298(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_10296a32c(param_3,param_4,param_5);
    func_0x000107c61170(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 10296a32c; end: 10296a4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296a32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc58);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc68);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc70);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc78);
  func_0x000107c3f934();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc98);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecfc80);
  func_0x000107c439c8();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecfca0);
  lVar5 = 0;
  FUN_102968568();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ecfb00) = 0;
  func_0x000107c61614(lVar6 + _DAT_112ecfb08,0);
  *(undefined8 *)(lVar6 + _DAT_112ecfab8) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112ecfac0) = param_3;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ecfac8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar6 + _DAT_112ecfad0) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_112ecfad8) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_112ecfae0) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ecfae8) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112ecfaf0) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112ecfaf8) = uVar10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61154(&lStack_70,puVar2);
  return;
}



/* Entry: 10296a4e8; end: 10296a737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10296a4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecfc90);
  func_0x000107c5b478();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      func_0x000100bf119c(param_3);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      pcVar1 = (code *)&puStack_58;
      puStack_58 = puVar7;
      func_0x000100854cb0(pcVar1);
      func_0x000107c61170(puVar7);
    }
    else {
      lVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 *)(lVar2 + 0x20) = param_1;
      *(undefined8 *)(lVar2 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar2);
      lVar2 = lVar3;
      func_0x000107c4b820(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      lVar4 = lVar2;
      func_0x0001000b637c(lVar2);
      uVar5 = 0x112e17d68;
      func_0x0001000285a8(0x112e17d68,&UNK_10daf6410);
      pcVar1 = FUN_10296a738;
      func_0x0001000d5158(FUN_10296a738,0,uVar5);
      func_0x000107c61574(lVar4);
      puVar7 = &UNK_1105738b0;
      func_0x000107c613fc(&UNK_1105738b0,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = param_1;
      *(undefined8 *)(puVar7 + 0x18) = param_2;
      func_0x000107c61434(param_2);
      uVar5 = 0x10296ab48;
      func_0x0001000c0ebc(0x10296ab48,puVar7);
      func_0x000107c61574(pcVar1);
      func_0x000107c61574(puVar7);
      uVar6 = 0;
      FUN_10296ab50(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar1 = FUN_10296a8a0;
      func_0x0001000bfde0(FUN_10296a8a0,0,uVar6);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar5);
    }
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296a738);
  (*pcVar1)();
}



/* Entry: 10296a738; end: 10296a793;  */

void FUN_10296a738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_10296ab50(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10296a794; end: 10296a89f;  */

uint FUN_10296a794(ulong *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar3 = param_2;
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar2 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10296a8a0);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(uVar5 + 0x20);
      func_0x000107c61174();
      uVar5 = uVar3;
    }
    else {
      uVar2 = 0;
      func_0x00010103193c();
    }
    uVar3 = uVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if ((uVar2 == param_2) && (uVar5 == param_3)) {
        uVar4 = 1;
      }
      else {
        func_0x000107c605b8(uVar2,uVar5,param_2,param_3,0);
        uVar4 = (uint)uVar2;
      }
      func_0x000107c6142c(uVar5);
      goto LAB_10296a874;
    }
  }
  uVar4 = 0;
LAB_10296a874:
  return uVar4 & 1;
}



/* Entry: 10296a8a0; end: 10296a96b;  */

void FUN_10296a8a0(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar5 = *param_2;
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  else {
    uVar2 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar2 = uVar5;
    }
    func_0x000107c60480();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar4;
  if (uVar2 == 0) {
    func_0x000107c610f8();
    func_0x000107c45a48();
  }
  else {
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10296a96c);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar5 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x00010103193c(0,uVar5);
    }
    func_0x000100bf119c();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    func_0x000107c61170(uVar3);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10296a96c; end: 10296a9cb; -[_TtC33MutualFriendsProfileSectionPlugin38MutualFriendsProfileSectionRegistrator init] */

void FUN_10296a96c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsProfileSectionPlugin.MutualFriendsProfileSectionRegistrator",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296a998);
  (*pcVar1)();
}



/* Entry: 10296a9cc; end: 10296aab3; -[_TtC33MutualFriendsProfileSectionPlugin38MutualFriendsProfileSectionRegistrator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010296a9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296aa08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296aa48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296aa68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296aa88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010296aa6c) */
/* WARNING: Removing unreachable block (ram,0x00010296aa4c) */
/* WARNING: Removing unreachable block (ram,0x00010296aa2c) */
/* WARNING: Removing unreachable block (ram,0x00010296aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010296a9ec) */
/* WARNING: Removing unreachable block (ram,0x00010296aa8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296a9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecfc40));
  return;
}



/* Entry: 10296aab4; end: 10296aad3;  */

void FUN_10296aab4(void)

{
  func_0x000107c61168(&PTR_PTR_112873d90);
  return;
}



/* Entry: 10296aad4; end: 10296aaef; -[_TtC33MutualFriendsProfileSectionPlugin38MutualFriendsProfileSectionRegistrator sectionCreator:canShowContentForValue:] */

uint FUN_10296aad4(void)

{
  undefined8 in_x3;
  
  func_0x000107c3ebcc(in_x3);
  return (uint)in_x3 ^ 1;
}



/* Entry: 10296aaf0; end: 10296ab4f;  */

void FUN_10296aaf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecfd00 == (undefined *)0x0 || ((ulong)puRam0000000112ecfd00 & 1) != 0) {
    puVar1 = &UNK_10e932b72;
    func_0x000107c61518(&UNK_10e932b72,0x26,0,0);
    puRam0000000112ecfd00 = puVar1;
  }
  return;
}



/* Entry: 10296ab50; end: 10296ab8f;  */

void FUN_10296ab50(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10296ab90; end: 10296ac5b;  */

undefined1  [16] FUN_10296ab90(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0cfe30);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0cfe50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296ac5c);
  (*pcVar1)();
}



/* Entry: 10296ac5c; end: 10296ac7f;  */

void FUN_10296ac5c(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  func_0x000107c6158c(1,0xffffffffffffffff);
  uRam00000001134d2e20 = uVar1;
  return;
}



/* Entry: 10296ac80; end: 10296b1cb;  */

void FUN_10296ac80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_110573960;
  func_0x000107c613fc(&UNK_110573960,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000823a8(0x10296adbc,puVar1);
  return;
}



/* Entry: 10296b1cc; end: 10296b1db;  */

undefined1  [16] FUN_10296b1cc(void)

{
  return ZEXT816(0x110573988);
}



/* Entry: 10296b1dc; end: 10296b5af;  */

void FUN_10296b1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfd10,&UNK_10daf6470);
  puVar1 = &UNK_110573a50;
  func_0x000107c613fc(&UNK_110573a50,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000823a8(FUN_10296b5b0,puVar1);
  return;
}



/* Entry: 10296b5b0; end: 10296b5f3;  */

void FUN_10296b5b0(void)

{
  long unaff_x20;
  
  func_0x00010296b378(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10296b5f4; end: 10296b6c7;  */

void FUN_10296b5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  *(undefined8 *)(unaff_x20 + 0x88) = param_6;
  *(undefined8 *)(unaff_x20 + 0x70) = param_7;
  *(undefined8 *)(unaff_x20 + 0x78) = param_8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_10;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x10) = param_12;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_13;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0x40) = param_17;
  *(undefined8 *)(unaff_x20 + 0x48) = param_14;
  *(undefined8 *)(unaff_x20 + 0x60) = param_16;
  *(undefined8 *)(unaff_x20 + 0x68) = param_18;
  return;
}



/* Entry: 10296b6c8; end: 10296b83f;  */

undefined * FUN_10296b6c8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112ecfe40,&UNK_10daf65a8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_10296bef4;
  func_0x0001000bdd8c();
  puVar2 = &UNK_110573a98;
  func_0x000107c613fc(&UNK_110573a98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(code **)(puVar2 + 0x18) = pcVar1;
  func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar1);
  uVar3 = 0x10296bf18;
  func_0x0001000bdd8c(0x10296bf18,puVar2);
  func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  uVar4 = 0x10296bf44;
  func_0x0001000bdd8c(0x10296bf44,pcVar1);
  uVar5 = uVar4;
  func_0x0001000bf56c();
  uVar6 = uVar5;
  func_0x0001000bf56c();
  puVar2 = PTR_PTR_1126afda8;
  func_0x000107c610f8(PTR_PTR_1126afda8);
  func_0x000107c47cac();
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  return puVar2;
}



/* Entry: 10296b840; end: 10296bdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10296b840(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c451f8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c45200();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c45204();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
    lVar2 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61174(uVar5);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10296ba54);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c3e550(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c43980(uVar7);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126aba88;
    func_0x000107c61168();
    uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c4f624();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x0001003d1364(*(undefined8 *)(unaff_x20 + 0x80));
    uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c4ac44();
    func_0x000107c61180();
    func_0x000107c4ac90();
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126aba90;
    func_0x000107c610f8(PTR_PTR_1126aba90);
    func_0x000107c49374();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
  }
  return puVar12;
}



/* Entry: 10296be00; end: 10296bec3;  */

void FUN_10296be00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10296bec4; end: 10296bed3;  */

undefined1  [16] FUN_10296bec4(void)

{
  return ZEXT816(0x110573a78);
}



/* Entry: 10296bed4; end: 10296bef3;  */

void FUN_10296bed4(void)

{
  func_0x000107c61168(&PTR_PTR_112ecfd58);
  return;
}



/* Entry: 10296bef4; end: 10296bfc3;  */

void FUN_10296bef4(undefined8 *param_1,undefined8 param_2)

{
  FUN_10296b840();
  *param_1 = param_2;
  return;
}



/* Entry: 10296bfc4; end: 10296c083;  */

void FUN_10296bfc4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296b6c8();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296c084; end: 10296c09b;  */

void FUN_10296c084(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296b6c8();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296c09c; end: 10296c0e3; -[SCPlusMerlinFriendProfileSectionActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296c09c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecfe48;
  func_0x000107c61428(param_1 + _DAT_112ecfe48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296c0e4; end: 10296c1cb; -[SCPlusMerlinFriendProfileSectionActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296c0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecfe48;
  func_0x000107c61428(param_1 + _DAT_112ecfe48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10296c1cc; end: 10296c35f; -[SCPlusMerlinFriendProfileSectionActionHandler initWithBioPageScopeFactoryServices:merlinSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296c1cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecfe50,0);
  func_0x000107c61614(param_1 + _DAT_112ecfe48,0);
  *(undefined8 *)(param_1 + _DAT_112ecfe58) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ecfe60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10296c360; end: 10296c423; -[SCPlusMerlinFriendProfileSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_10296c360(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10296c638(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10296c424; end: 10296c483; -[SCPlusMerlinFriendProfileSectionActionHandler init] */

void FUN_10296c424(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusMerlinFriendProfileSection.SCPlusMerlinFriendProfileSectionActionHandler"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296c450);
  (*pcVar1)();
}



/* Entry: 10296c484; end: 10296c4db; -[SCPlusMerlinFriendProfileSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10296c484(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfe58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfe60));
  func_0x000107c61610(param_1 + _DAT_112ecfe50);
  param_1 = param_1 + _DAT_112ecfe48;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10296c4dc; end: 10296c60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296c4dc(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112ecfe50;
  uVar2 = unaff_x20 + _DAT_112ecfe50;
  func_0x000107c61618();
  lVar6 = _DAT_112ecfe48;
  if (uVar2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ecfe48,auStack_68,0,0);
    uVar3 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar4 != 0) {
        func_0x0001012ea70c(0);
        uVar3 = uVar2;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
        if (((uVar5 & 1) != 0) && (func_0x000107c49aa0(), (uVar3 & 1) == 0)) {
          lVar6 = unaff_x20 + lVar6;
          func_0x000107c61618();
          if (lVar6 != 0) {
            func_0x000107c420a8();
            func_0x000107c61170(lVar6);
          }
        }
      }
    }
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61604(unaff_x20 + lVar1,0);
  return;
}



/* Entry: 10296c610; end: 10296c637; -[SCPlusMerlinFriendProfileSectionActionHandler merlinBioPageDidDismiss] */

void FUN_10296c610(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10296c4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10296c638; end: 10296c6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10296c638(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      lVar4 = 0x112d3cde0;
      func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
      func_0x000107c61538();
      func_0x000107c604c4();
      func_0x000107c6142c(lVar1);
      lVar1 = _DAT_112ecfe48;
      if (lVar4 == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112ecfe48,auStack_48,0,0);
        lVar1 = unaff_x20 + lVar1;
        func_0x000107c61618();
        if (lVar1 != 0) {
          func_0x0001003444bc(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          uVar2 = 0;
          func_0x000102d83480(0,unaff_x20);
          uVar3 = uVar2;
          func_0x000102d836f0();
          func_0x000107c61604(unaff_x20 + _DAT_112ecfe50,uVar3);
          lVar4 = lVar1;
          func_0x000107c61174(lVar1);
          func_0x000107c4f018();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(uVar3);
        }
        return lVar1 != 0;
      }
    }
  }
  return false;
}



/* Entry: 10296c6d8; end: 10296c6f7;  */

void FUN_10296c6d8(void)

{
  func_0x000107c61168(&PTR_PTR_112873eb0);
  return;
}



/* Entry: 10296c6f8; end: 10296c867;  */

void FUN_10296c6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfed0,&UNK_10daf6660);
  puVar1 = &UNK_110573b68;
  func_0x000107c613fc(&UNK_110573b68,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10296c868,puVar1);
  return;
}



/* Entry: 10296c868; end: 10296c877;  */

void FUN_10296c868(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = lVar1;
  func_0x000100083b20(&uStack_58);
  FUN_10296d100();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  *(long *)(lVar6 + 0x38) = lVar1;
  *(undefined8 *)(lVar6 + 0x10) = uStack_58;
  *(undefined8 *)(lVar6 + 0x18) = uVar4;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  *param_1 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  return;
}



/* Entry: 10296c878; end: 10296c8db;  */

void FUN_10296c878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  return;
}



/* Entry: 10296c8dc; end: 10296cc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10296c8dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ed0ac8);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x00010901c54c();
  if (((int)uVar2 != 0) && (uVar2 = uVar1, func_0x000100bf119c(), (int)uVar2 != 0)) {
    func_0x000100083b20(&puStack_a0);
    puVar4 = puStack_a0;
    puVar3 = puStack_a0;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x000107c4cd7c();
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      puVar3 = puVar5;
      func_0x000107c5bcc0();
      func_0x000107c61170(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x000107c4cd80();
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar3 = puVar5;
        func_0x000107c5bcc0();
        func_0x000107c61170(puVar5);
        if (puVar3 != (undefined *)0x0) {
          func_0x000100083b20(&puStack_a0);
          puVar8 = puStack_a0;
          puVar6 = PTR_PTR_1126ae720;
          func_0x000107c61168(PTR_PTR_1126ae720);
          puVar3 = &UNK_110573bb0;
          func_0x000107c613fc(&UNK_110573bb0,0x20,7);
          *(undefined **)(puVar3 + 0x10) = puStack_a0;
          *(undefined8 *)(puVar3 + 0x18) = uVar1;
          puVar5 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_80 = FUN_10296d120;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x10296d15c;
          puStack_88 = &UNK_110573bc8;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar3;
          func_0x000107c60bc4(ppuVar7);
          puVar3 = puStack_78;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61574(puVar3);
          func_0x000107c3e4fc(puVar6);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000100083b20(&puStack_a0);
          puVar11 = puStack_a0;
          func_0x000100083b20(&puStack_a0);
          puVar10 = puStack_a0;
          func_0x000100083b20(&puStack_a0);
          puVar12 = puStack_a0;
          puVar9 = PTR_PTR_1126ae720;
          func_0x000107c61168(PTR_PTR_1126ae720);
          puVar3 = &UNK_110573c00;
          func_0x000107c613fc(&UNK_110573c00,0x30,7);
          *(undefined **)(puVar3 + 0x10) = puVar10;
          *(undefined **)(puVar3 + 0x18) = puVar11;
          *(undefined8 *)(puVar3 + 0x20) = uVar1;
          *(undefined **)(puVar3 + 0x28) = puVar12;
          pcStack_80 = (code *)0x10296d144;
          puStack_a0 = puVar5;
          uStack_98 = 0x42000000;
          uStack_90 = 0x10296d158;
          puStack_88 = &UNK_110573c18;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar3;
          func_0x000107c60bc4(ppuVar7);
          puVar3 = puStack_78;
          func_0x000107c61174(uVar1);
          func_0x000107c61174(puVar10);
          func_0x000107c61174(puVar11);
          func_0x000107c61174(puVar12);
          func_0x000107c61574(puVar3);
          func_0x000107c3e4fc(puVar9);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          puVar3 = PTR_PTR_1126afda8;
          func_0x000107c610f8(PTR_PTR_1126afda8);
          func_0x000107c47cac();
          func_0x000107c615e8(puVar4);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(puVar8);
          return puVar3;
        }
      }
      func_0x000107c615e8(puVar4);
    }
  }
  func_0x000107c61170(uVar1);
  return (undefined *)0x0;
}



/* Entry: 10296cc54; end: 10296cd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296cc54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_10296c6d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ecfe50,0);
  func_0x000107c61614(lVar3 + _DAT_112ecfe48,0);
  *(undefined8 *)(lVar3 + _DAT_112ecfe58) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ecfe60) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10296cd04; end: 10296d06b;  */

/* WARNING: Removing unreachable block (ram,0x00010296d008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10296cd04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_c0 [80];
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar11 = auStack_c0;
  lVar12 = *(long *)(param_1 + _DAT_113093a98);
  lVar2 = lVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar3 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010daf6650);
    lVar4 = lVar2;
    func_0x000107c4e60c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c42eac();
    func_0x000107c61180();
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10296d06c);
      (*pcVar1)();
    }
    puVar5 = (undefined *)0x0;
    FUN_10296e090();
    puVar6 = puVar5;
    func_0x000107c610f8();
    lVar10 = _DAT_112ecffa0;
    puVar13 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(puVar6 + lVar10) = puVar13;
    *(undefined8 *)(puVar6 + _DAT_112ecffa8) = 0;
    func_0x000107c61614(puVar6 + _DAT_112ecffb0,0);
    *(undefined8 *)(puVar6 + _DAT_112ecffb8) = 0;
    *(undefined8 *)(puVar6 + _DAT_112ecffc0) = 0;
    *(undefined8 *)(puVar6 + _DAT_112ecffc8) = param_2;
    *(long *)(puVar6 + _DAT_112ecffd0) = lVar12;
    *(undefined8 *)(puVar6 + _DAT_112ecffd8) = param_3;
    *(long *)(puVar6 + _DAT_112ecffe0) = param_4;
    puVar13 = PTR_s_init_1125d9248;
    puStack_70 = puVar6;
    puStack_68 = puVar5;
    func_0x000107c61174(lVar12);
    func_0x000107c61174(param_3);
    ppuVar7 = &puStack_70;
    func_0x000107c61154(ppuVar7,puVar13);
    ppuVar8 = &PTR____CFConstantStringClassReference_110f123f8;
    func_0x000107c61174();
    lVar12 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar12 + 0x18) = 2;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    ppuVar9 = &PTR____CFConstantStringClassReference_110eb4ff8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar12 + 0x20) = ppuVar9;
    *(undefined1 **)(lVar12 + 0x28) = puVar11;
    uVar3 = 0;
    func_0x0001000e2834();
    *(undefined8 *)(lVar12 + 0x48) = uVar3;
    *(undefined ***)(lVar12 + 0x30) = ppuVar8;
    func_0x000107c61174(ppuVar8);
    lVar10 = lVar12;
    func_0x000100214a84(lVar12);
    func_0x000107c61588(lVar12);
    func_0x000100f15a0c((undefined8 *)(lVar12 + 0x20));
    func_0x000107c61174(ppuVar7);
    lVar12 = lVar10;
    func_0x00010018cc3c(lVar10);
    func_0x000107c6142c(lVar10);
    puVar13 = PTR_PTR_1126b2b48;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar4);
    lVar10 = lVar12;
    func_0x000107c5f9dc(lVar12,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar12);
    func_0x000107c45f0c();
    func_0x000107c61170(ppuVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar10);
    if (puVar13 == (undefined *)0x0) {
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(ppuVar7);
    }
    else {
      func_0x000107c5a1fc(puVar13);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(ppuVar8);
      func_0x000107c615e8(lVar4);
      ppuVar8 = ppuVar7;
    }
    func_0x000107c61170(ppuVar8);
  }
  return puVar13;
}



/* Entry: 10296d06c; end: 10296d0a3;  */

void FUN_10296d06c(long param_1)

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



/* Entry: 10296d0a4; end: 10296d0ef;  */

void FUN_10296d0a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10296d0f0; end: 10296d0ff;  */

undefined1  [16] FUN_10296d0f0(void)

{
  return ZEXT816(0x110573b90);
}



/* Entry: 10296d100; end: 10296d11f;  */

void FUN_10296d100(void)

{
  func_0x000107c61168(&PTR_PTR_112ecff18);
  return;
}



/* Entry: 10296d120; end: 10296d15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_10296c6d8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ecfe50,0);
  func_0x000107c61614(lVar5 + _DAT_112ecfe48,0);
  *(undefined8 *)(lVar5 + _DAT_112ecfe58) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112ecfe60) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 10296d160; end: 10296d24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ecffa0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffa8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ecffb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ecffb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffd8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffe0) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10296d24c; end: 10296d293; -[SCPlusMerlinFriendProfileSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d24c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecffb0;
  func_0x000107c61428(param_1 + _DAT_112ecffb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296d294; end: 10296d2eb; -[SCPlusMerlinFriendProfileSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecffb0;
  func_0x000107c61428(param_1 + _DAT_112ecffb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10296d2ec; end: 10296d2f7; -[SCPlusMerlinFriendProfileSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d2ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecffb8;
  func_0x000107c61428(param_1 + _DAT_112ecffb8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296d2f8; end: 10296d303; -[SCPlusMerlinFriendProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecffb8;
  func_0x000107c61428(param_1 + _DAT_112ecffb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10296d304; end: 10296d30f; -[SCPlusMerlinFriendProfileSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecffc0;
  func_0x000107c61428(param_1 + _DAT_112ecffc0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296d310; end: 10296d353;  */

void FUN_10296d310(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296d354; end: 10296d35f; -[SCPlusMerlinFriendProfileSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecffc0;
  func_0x000107c61428(param_1 + _DAT_112ecffc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}


