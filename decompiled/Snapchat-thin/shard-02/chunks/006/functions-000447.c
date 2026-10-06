/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102007524; end: 102007583; -[_TtC31CustomStoryMenuScopeGraphBridge39CustomStoryMenuScopeGraphBridgeServices init] */

void FUN_102007524(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMenuScopeGraphBridge.CustomStoryMenuScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102007550);
  (*pcVar1)();
}



/* Entry: 102007584; end: 10200764b; -[_TtC31CustomStoryMenuScopeGraphBridge39CustomStoryMenuScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020075a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020075c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020075e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020075c4) */
/* WARNING: Removing unreachable block (ram,0x0001020075a4) */
/* WARNING: Removing unreachable block (ram,0x0001020075e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4f378));
  return;
}



/* Entry: 10200764c; end: 102007657;  */

void FUN_10200764c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102007bac,param_1);
  return;
}



/* Entry: 102007658; end: 102007697;  */

void FUN_102007658(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102007bbc,0);
  return;
}



/* Entry: 102007698; end: 1020076a3;  */

void FUN_102007698(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102007ba8,param_1);
  return;
}



/* Entry: 1020076a4; end: 1020076e3;  */

void FUN_1020076a4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102007bc4,0);
  return;
}



/* Entry: 1020076e4; end: 1020076ef;  */

void FUN_1020076e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102007bb0,param_1);
  return;
}



/* Entry: 1020076f0; end: 10200772f;  */

void FUN_1020076f0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102007bc8,0);
  return;
}



/* Entry: 102007730; end: 10200773b;  */

void FUN_102007730(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10200773c,param_1);
  return;
}



/* Entry: 10200773c; end: 1020077af;  */

void FUN_10200773c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1020077b0; end: 1020077bb;  */

void FUN_1020077b0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102007bb4,param_1);
  return;
}



/* Entry: 1020077bc; end: 102007847;  */

void FUN_1020077bc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102007bd0,0);
  return;
}



/* Entry: 102007848; end: 102007853;  */

void FUN_102007848(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102007bb8,param_1);
  return;
}



/* Entry: 102007854; end: 1020078ab;  */

void FUN_102007854(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1020078ac; end: 1020078b3;  */

undefined8 FUN_1020078ac(void)

{
  return 0x1b;
}



/* Entry: 1020078b4; end: 102007a2b;  */

void FUN_1020078b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104baf70;
  func_0x000107c613fc(&UNK_1104baf70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102007a2c,puVar1);
  return;
}



/* Entry: 102007a2c; end: 102007a33;  */

void FUN_102007a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4f358,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4f358,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bb188;
  func_0x000107c613fc(&UNK_1104bb188,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102007ba0;
  func_0x00010058fa64(0x102007ba0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102007a34; end: 102007a8f;  */

void FUN_102007a34(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4f358,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4f358,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102007a90; end: 102007bd3;  */

undefined ** FUN_102007a90(void)

{
  return &PTR_DAT_11306f1e8;
}



/* Entry: 102007bd4; end: 102007c1b; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007bd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f3f0;
  func_0x000107c61428(param_1 + _DAT_112e4f3f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102007c1c; end: 102007c73; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f3f0;
  func_0x000107c61428(param_1 + _DAT_112e4f3f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102007c74; end: 102007cbb; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCCustomStoryMembersScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007c74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f3f8;
  func_0x000107c61428(param_1 + _DAT_112e4f3f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007cbc; end: 102007cc7; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCCustomStoryMembersScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f3f8;
  func_0x000107c61428(param_1 + _DAT_112e4f3f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007cc8; end: 102007d0f; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCCustomStorySettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007cc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f400;
  func_0x000107c61428(param_1 + _DAT_112e4f400,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007d10; end: 102007d1b; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCCustomStorySettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f400;
  func_0x000107c61428(param_1 + _DAT_112e4f400,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007d1c; end: 102007d63; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCSaveStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007d1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f408;
  func_0x000107c61428(param_1 + _DAT_112e4f408,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007d64; end: 102007d6f; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCSaveStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f408;
  func_0x000107c61428(param_1 + _DAT_112e4f408,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007d70; end: 102007db7; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCSendToListsEditScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007d70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f410;
  func_0x000107c61428(param_1 + _DAT_112e4f410,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007db8; end: 102007dc3; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCSendToListsEditScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f410;
  func_0x000107c61428(param_1 + _DAT_112e4f410,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007dc4; end: 102007e0b; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCSharedStoryMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007dc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f418;
  func_0x000107c61428(param_1 + _DAT_112e4f418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007e0c; end: 102007e17; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCSharedStoryMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f418;
  func_0x000107c61428(param_1 + _DAT_112e4f418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007e18; end: 102007e5f; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint sCSharedStoryProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f420;
  func_0x000107c61428(param_1 + _DAT_112e4f420,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007e60; end: 102007e6b; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setSCSharedStoryProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f420;
  func_0x000107c61428(param_1 + _DAT_112e4f420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007e6c; end: 102007eb3; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint customStoryMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007e6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f428;
  func_0x000107c61428(param_1 + _DAT_112e4f428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102007eb4; end: 102007ebf; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setCustomStoryMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f428;
  func_0x000107c61428(param_1 + _DAT_112e4f428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102007ec0; end: 102007f1f;  */

void FUN_102007ec0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102007f20; end: 1020083b7;  */

/* WARNING: Possible PIC construction at 0x0001020081f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200836c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200837c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200838c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200833c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200834c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200830c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200831c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020082ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020082fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020082dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102008300) */
/* WARNING: Removing unreachable block (ram,0x0001020082f0) */
/* WARNING: Removing unreachable block (ram,0x000102008320) */
/* WARNING: Removing unreachable block (ram,0x000102008310) */
/* WARNING: Removing unreachable block (ram,0x000102008350) */
/* WARNING: Removing unreachable block (ram,0x000102008340) */
/* WARNING: Removing unreachable block (ram,0x000102008390) */
/* WARNING: Removing unreachable block (ram,0x000102008380) */
/* WARNING: Removing unreachable block (ram,0x000102008370) */
/* WARNING: Removing unreachable block (ram,0x00010200827c) */
/* WARNING: Removing unreachable block (ram,0x00010200826c) */
/* WARNING: Removing unreachable block (ram,0x00010200825c) */
/* WARNING: Removing unreachable block (ram,0x00010200824c) */
/* WARNING: Removing unreachable block (ram,0x000102008228) */
/* WARNING: Removing unreachable block (ram,0x000102008218) */
/* WARNING: Removing unreachable block (ram,0x000102008208) */
/* WARNING: Removing unreachable block (ram,0x0001020081f8) */
/* WARNING: Removing unreachable block (ram,0x0001020082e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007f20(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50ce0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ce8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51248();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c51298();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c512cc();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c512d0();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              func_0x000107c4112c();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar6 = 0;
                FUN_102006dc4();
                lVar4 = lVar6;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar5 = lVar3;
                FUN_102007168();
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020083b8);
                  (*pcVar2)();
                }
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uStack_68);
                *(long *)(lVar4 + _DAT_112e4f218) = lVar5;
                *(long *)(lVar4 + _DAT_112e4f220) = unaff_x20;
                lStack_80 = lVar4;
                lStack_78 = lVar6;
                func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1020083b8; end: 1020083df; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1020083b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102007f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020083e0; end: 102008423; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_1020083e0(undefined8 param_1)

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



/* Entry: 102008424; end: 102008837;  */

void FUN_102008424(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0faa420)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010f055be0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58288();
    }
    else {
      uVar2 = 0xd000000000000021;
      if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0faa3f0)) ||
         (func_0x000107c605b8(0xd000000000000021,0x800000010f055c10,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58290();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef0faa3c0)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010f055c40,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c587f0();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0faa3a0)) {
            uVar2 = 0xd00000000000001d;
            func_0x000107c605b8(0xd00000000000001d,0x800000010f055c60,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0faa380)) {
                uVar2 = 0xd00000000000001d;
                func_0x000107c605b8(0xd00000000000001d,0x800000010f055c80,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0faa360)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000020,0x800000010f055ca0,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0;
                      if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0faa330)) &&
                         (func_0x000107c605b8(0xd00000000000002e,0x800000010f055cd0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "CustomStoryMenuScopeGraphBridge/SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint.swift"
                                            ,0x56,2,0x4c,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102008838);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53d5c();
                      goto LAB_1020084b0;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58878();
                  goto LAB_1020084b0;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58874();
              goto LAB_1020084b0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58840();
        }
      }
    }
  }
LAB_1020084b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102008838; end: 1020088e3; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102008838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102008424(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1020088e4; end: 102008997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020088e4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e4f3f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e4f3f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f400) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f408) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f410) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f428) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f430) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102008998; end: 1020089b7; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_102008998(void)

{
  FUN_1020088e4();
  return;
}



/* Entry: 1020089b8; end: 1020089eb;  */

void FUN_1020089b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020089ec; end: 102008a93; -[SCCustomStoryMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102008a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102008a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102008a5c) */
/* WARNING: Removing unreachable block (ram,0x000102008a3c) */
/* WARNING: Removing unreachable block (ram,0x000102008a1c) */
/* WARNING: Removing unreachable block (ram,0x000102008a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020089ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4f3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f3f8));
  return;
}



/* Entry: 102008a94; end: 102008ab3;  */

void FUN_102008a94(void)

{
  func_0x000107c61168(&PTR_PTR_1128160c8);
  return;
}



/* Entry: 102008ab4; end: 102008abf; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102008ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f460;
  func_0x000107c61428(param_1 + _DAT_112e4f460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102008ac0; end: 102008acb; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102008ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f460;
  func_0x000107c61428(param_1 + _DAT_112e4f460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102008acc; end: 102008ad7; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider customStoryMenuScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102008acc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f468;
  func_0x000107c61428(param_1 + _DAT_112e4f468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102008ad8; end: 102008b1b;  */

void FUN_102008ad8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102008b1c; end: 102008b27; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider setCustomStoryMenuScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102008b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f468;
  func_0x000107c61428(param_1 + _DAT_112e4f468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102008b28; end: 102008b7b;  */

void FUN_102008b28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102008b7c; end: 102008d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102008b7c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c41128();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102006e74();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e4f378);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e4f470);
      *(long *)(unaff_x20 + _DAT_112e4f470) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CustomStoryMenuScopeGraphBridge/SCSCCustomStorySettingsScopeServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102008ca8);
  (*pcVar1)();
}



/* Entry: 102008d90; end: 102008dc3; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider provide] */

void FUN_102008d90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102008b7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102008dc4; end: 102008df7; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider __safeProvide] */

void FUN_102008dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102008ca8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102008df8; end: 102008e3b; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider end] */

void FUN_102008df8(undefined8 param_1)

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



/* Entry: 102008e3c; end: 102008fd3;  */

void FUN_102008e3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0faa240)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f055dc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CustomStoryMenuScopeGraphBridge/SCSCCustomStorySettingsScopeServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102008fd4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53d58();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102008fd4; end: 10200907f; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102008fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102008e3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102009080; end: 1020090f3; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009080(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4f460,0);
  func_0x000107c61614(param_1 + _DAT_112e4f468,0);
  *(undefined8 *)(param_1 + _DAT_112e4f470) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020090f4; end: 102009127;  */

void FUN_1020090f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102009128; end: 10200916f; -[SCSCCustomStorySettingsScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009128(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4f460);
  func_0x000107c61610(param_1 + _DAT_112e4f468);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4f470));
  return;
}



/* Entry: 102009170; end: 10200918f;  */

void FUN_102009170(void)

{
  func_0x000107c61168(&PTR_PTR_112e4f4b8);
  return;
}



/* Entry: 102009190; end: 1020091d7; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009190(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f520;
  func_0x000107c61428(param_1 + _DAT_112e4f520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020091d8; end: 10200922f; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020091d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f520;
  func_0x000107c61428(param_1 + _DAT_112e4f520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102009230; end: 102009307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009230(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102007148();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4f320) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102009308);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4f328);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4f528);
    *(long **)(unaff_x20 + _DAT_112e4f528) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102009308; end: 10200932f; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint begin] */

void FUN_102009308(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102009230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102009330; end: 1020094a7;  */

/* WARNING: Possible PIC construction at 0x000102009398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102009430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200939c) */
/* WARNING: Removing unreachable block (ram,0x000102009434) */
/* WARNING: Removing unreachable block (ram,0x00010200944c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009330(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4f528);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1020094a8; end: 1020094af;  */

void FUN_1020094a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020094b0; end: 1020094e3; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint end] */

void FUN_1020094b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102009330();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020094e4; end: 102009603;  */

void FUN_1020094e4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "CustomStoryMenuScopeGraphBridge/SCSCCustomStoryMenuScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102009604);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102009604; end: 1020096af; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102009604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020094e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1020096b0; end: 10200970f; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020096b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4f520,0);
  *(undefined8 *)(param_1 + _DAT_112e4f528) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102009710; end: 102009743;  */

void FUN_102009710(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102009744; end: 10200977b; -[SCSCCustomStoryMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009744(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4f520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f528));
  return;
}



/* Entry: 10200977c; end: 10200979b;  */

void FUN_10200977c(void)

{
  func_0x000107c61168(&PTR_PTR_112816208);
  return;
}



/* Entry: 10200979c; end: 102009807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200979c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102009b90();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4f560) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102009808; end: 102009873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102009808(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f560) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102009874; end: 1020098d3; -[_TtC47CustomStorySettingsScopedFactoryServiceProvider35SCCustomStorySettingsScopedServices init] */

void FUN_102009874(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStorySettingsScopedFactoryServiceProvider.SCCustomStorySettingsScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020098a0);
  (*pcVar1)();
}



/* Entry: 1020098d4; end: 1020098e3; -[_TtC47CustomStorySettingsScopedFactoryServiceProvider35SCCustomStorySettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020098d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4f560));
  return;
}



/* Entry: 1020098e4; end: 10200994f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020098e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bb3a0;
  func_0x000107c613fc(&UNK_1104bb3a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102009c28,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102009950; end: 1020099eb;  */

void FUN_102009950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bb2b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bb2b0;
  return;
}



/* Entry: 1020099ec; end: 102009a23;  */

void FUN_1020099ec(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102009a24; end: 102009a2b;  */

undefined8 FUN_102009a24(void)

{
  return 0x1b;
}



/* Entry: 102009a2c; end: 102009b5f;  */

void FUN_102009a2c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bb3c8;
  func_0x000107c613fc(&UNK_1104bb3c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102009c00;
  func_0x00010058fa64(FUN_102009c00,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102009b60; end: 102009b8f;  */

undefined ** FUN_102009b60(void)

{
  return &PTR_DAT_113066a90;
}



/* Entry: 102009b90; end: 102009baf;  */

void FUN_102009b90(void)

{
  func_0x000107c61168(&PTR_PTR_1128162c8);
  return;
}



/* Entry: 102009bb0; end: 102009bff;  */

undefined1  [16] FUN_102009bb0(void)

{
  return ZEXT816(0x1104bb300);
}



/* Entry: 102009c00; end: 102009c27;  */

void FUN_102009c00(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102009c28; end: 102009c2b;  */

void FUN_102009c28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102009c2c; end: 102009cd7;  */

void FUN_102009c2c(void)

{
  func_0x0001000285a8(0x112e4f5c8,&UNK_10da4c630);
  func_0x0001000823a8(0x102009c6c,0);
  return;
}



/* Entry: 102009cd8; end: 102009ce7;  */

undefined1  [16] FUN_102009cd8(void)

{
  return ZEXT816(0x1104bb408);
}



/* Entry: 102009ce8; end: 102009fbb;  */

void FUN_102009ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e4f5d8,&UNK_10da4c680);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e4f5e0,&UNK_10da4c690);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_102009fbc;
  func_0x0001000823a8(FUN_102009fbc,puVar1);
  pcVar3 = "CustomStorySettingsEntryPointWrapperServiceProvider";
  func_0x000100082720("CustomStorySettingsEntryPointWrapperServiceProvider",0x33,2);
  FUN_10200aabc();
  func_0x000100082720("CustomStorySettingsScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1020099ec;
  func_0x0001000823a8(FUN_1020099ec,0);
  func_0x000100082720("SCCustomStorySettingsScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4f5e8,&UNK_10da4c688);
  puVar5 = &UNK_1104bb428;
  func_0x000107c613fc(&UNK_1104bb428,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar2;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(char **)(puVar5 + 0x20) = pcVar3;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x102009fc4;
  func_0x0001000823a8(0x102009fc4,puVar5);
  func_0x000100082720("SCCustomStorySettingsScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e4f568,&UNK_10da4c410);
  func_0x000107c6157c(uVar8);
  uVar6 = 0x102009fd0;
  func_0x0001000823a8(0x102009fd0,uVar8);
  func_0x000100082720("SCCustomStorySettingsScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e4f558,&UNK_10da4c400);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102009fd8;
  func_0x0001000823a8(0x102009fd8,uVar6);
  func_0x000100082720("SCCustomStorySettingsScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104bb450;
  func_0x000107c613fc(&UNK_1104bb450,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102009fe0;
  func_0x0001000823a8(0x102009fe0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCCustomStorySettingsScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102009fbc; end: 102009fe7;  */

void FUN_102009fbc(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10200a1a4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10200ba84(0);
  func_0x000107c613fc();
  FUN_10200ba48(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102009fe8; end: 10200a0c3;  */

void FUN_102009fe8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10200a1a4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10200ba84(0);
  func_0x000107c613fc();
  FUN_10200ba48(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 10200a0c4; end: 10200a0e7;  */

void FUN_10200a0c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10200a0e8; end: 10200a0ef;  */

undefined8 FUN_10200a0e8(void)

{
  return 0x1b;
}



/* Entry: 10200a0f0; end: 10200a173;  */

void FUN_10200a0f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10200a1e4,param_2,FUN_10200a1e8,param_2,0x10200a210,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10200a174; end: 10200a1a3;  */

undefined ** FUN_10200a174(void)

{
  return &PTR_DAT_113066a90;
}



/* Entry: 10200a1a4; end: 10200a1c3;  */

void FUN_10200a1a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e4f658);
  return;
}



/* Entry: 10200a1c4; end: 10200a1e7;  */

undefined1  [16] FUN_10200a1c4(void)

{
  return ZEXT816(0x1104bb4a8);
}


