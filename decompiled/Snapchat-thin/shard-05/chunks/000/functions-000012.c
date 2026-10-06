/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a2d3b0; end: 103a2d3c7;  */

void FUN_103a2d3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103a2d3c8; end: 103a2d447;  */

void FUN_103a2d3c8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dc3d4e0;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103a2d448; end: 103a2d457; -[_TtC19SCMapPeopleServices19SCMapPeopleServices mapPeopleGroupsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd5e0));
  return;
}



/* Entry: 103a2d458; end: 103a2d4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd5d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd5e0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2d4bc; end: 103a2d51b; -[_TtC19SCMapPeopleServices19SCMapPeopleServices init] */

void FUN_103a2d4bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapPeopleServices.SCMapPeopleServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2d4e8);
  (*pcVar1)();
}



/* Entry: 103a2d51c; end: 103a2d553; -[_TtC19SCMapPeopleServices19SCMapPeopleServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a2d538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2d53c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd5d8));
  return;
}



/* Entry: 103a2d554; end: 103a2d55f; -[SCMapPerson userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d554(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd610);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd610))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d560; end: 103a2d56b; -[SCMapPerson username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d560(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd618);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd618))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d56c; end: 103a2d5b3;  */

void FUN_103a2d56c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d5b4; end: 103a2d5bf; -[SCMapPerson displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d5b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fcd620))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd620);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d5c0; end: 103a2d5cb; -[SCMapPerson bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d5c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fcd628))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd628);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d5cc; end: 103a2d5d7; -[SCMapPerson bitmojiSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d5cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fcd630))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd630);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d5d8; end: 103a2d62f;  */

void FUN_103a2d5d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2d630; end: 103a2d7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd610);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd618);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd620);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd628);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd630);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2d7d8; end: 103a2d90f; -[SCMapPerson initWithUserId:username:displayName:bitmojiAvatarId:bitmojiSelfieId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d7d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c5faec();
  if (param_5 == 0) {
    lVar7 = 0;
    lVar6 = lVar5;
  }
  else {
    lVar7 = lVar5;
    func_0x000107c5faec();
    lVar6 = lVar7;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = lVar6;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar6 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcd610);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcd618);
  *puVar1 = param_4;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_112fcd620);
  *plVar2 = param_5;
  plVar2[1] = lVar7;
  plVar2 = (long *)(param_1 + _DAT_112fcd628);
  *plVar2 = param_6;
  plVar2[1] = lVar3;
  plVar2 = (long *)(param_1 + _DAT_112fcd630);
  *plVar2 = param_7;
  plVar2[1] = lVar6;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2d910; end: 103a2da07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2d910(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [16];
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
  
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd610);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd618);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd620);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd628);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd630);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  func_0x000100402194(&uStack_40,auStack_90);
  func_0x000100402194(&uStack_50,auStack_90);
  func_0x000101223174(&uStack_60,auStack_90);
  func_0x000101223174(&uStack_70,auStack_90);
  func_0x000101223174(&uStack_80,auStack_90);
  FUN_103a2da08(param_1);
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2da08; end: 103a2da3b;  */

undefined8 FUN_103a2da08(undefined8 param_1)

{
  (*(code *)(undefined *)0x103a2ccd4)();
  return param_1;
}



/* Entry: 103a2da3c; end: 103a2da3f; -[SCMapPerson copyWithZone:] */

void FUN_103a2da3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a2da40; end: 103a2da73; -[SCMapPerson description] */

void FUN_103a2da40(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a2da74; end: 103a2daef; -[SCMapPerson init] */

void FUN_103a2da74(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPeopleServices/SCMapPersonWrapper.swift",0x2c,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2dabc);
  (*pcVar1)();
}



/* Entry: 103a2daf0; end: 103a2db6b; -[SCMapPerson .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a2db10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a2db38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2db14) */
/* WARNING: Removing unreachable block (ram,0x000103a2db3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2daf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcd610 + 8))
  ;
  return;
}



/* Entry: 103a2db6c; end: 103a2db8b;  */

void FUN_103a2db6c(void)

{
  func_0x000107c61168(&PTR_PTR_112915120);
  return;
}



/* Entry: 103a2db8c; end: 103a2dbd7; -[SCMapUnviewedFriendFeedItem userID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2db8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd660);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd660))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2dbd8; end: 103a2dbe7; -[SCMapUnviewedFriendFeedItem type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a2dbd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fcd668);
}



/* Entry: 103a2dbe8; end: 103a2dc7f; -[SCMapUnviewedFriendFeedItem date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2dbe8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380cc78,lVar1);
  func_0x000107c5ee70();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103a2dc80; end: 103a2ddff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103a2dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd660);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd668) = param_3;
  lVar2 = _DAT_11380cc78;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_4,lVar3);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_4,lVar3);
  return puVar4;
}



/* Entry: 103a2de00; end: 103a2df0f; -[SCMapUnviewedFriendFeedItem initWithUserID:type:date:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103a2de00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  func_0x000107c5ee94(lVar5,param_5);
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcd660);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fcd668) = param_4;
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_11380cc78,lVar5,lVar3);
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 103a2df10; end: 103a2dfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2df10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar7 = auStack_50;
  func_0x000107c610f8();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd660);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd668) = param_1[2];
  lVar6 = 0;
  FUN_103a2d0d8();
  lVar5 = _DAT_11380cc78;
  iVar3 = *(int *)(lVar6 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(unaff_x20 + lVar5,(long)param_1 + (long)iVar3,lVar6);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61434(uVar2);
  func_0x000107c61154(auStack_50,puVar4);
  FUN_103a2dfd8(param_1);
  return puVar7;
}



/* Entry: 103a2dfd8; end: 103a2e013;  */

undefined8 FUN_103a2dfd8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103a2d0d8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103a2e014; end: 103a2e017; -[SCMapUnviewedFriendFeedItem copyWithZone:] */

void FUN_103a2e014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a2e018; end: 103a2e0e7; -[SCMapUnviewedFriendFeedItem description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e018(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  
  lVar4 = 0;
  FUN_103a2d0d8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = _DAT_11380cc78;
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd660))[1];
  *puVar6 = *(undefined8 *)(param_1 + _DAT_112fcd660);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar1;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = *(undefined8 *)(param_1 + _DAT_112fcd668);
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)puVar6 + (long)iVar2,param_1 + lVar3,lVar5);
  func_0x000107c61434(uVar1);
  FUN_103a2dfd8(puVar6);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e0e8; end: 103a2e163; -[SCMapUnviewedFriendFeedItem init] */

void FUN_103a2e0e8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPeopleServices/SCMapUnviewedFriendFeedItemWrapper.swift",0x3c,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2e130);
  (*pcVar1)();
}



/* Entry: 103a2e164; end: 103a2e1b3; -[SCMapUnviewedFriendFeedItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e164(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fcd660 + 8));
  lVar1 = _DAT_11380cc78;
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000103a2e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103a2e1b4; end: 103a2e1bb;  */

void FUN_103a2e1b4(void)

{
  if (lRam0000000112fcd698 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e79d390);
  return;
}



/* Entry: 103a2e1bc; end: 103a2e1f3;  */

void FUN_103a2e1bc(undefined8 param_1)

{
  if (lRam0000000112fcd698 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79d390);
  return;
}



/* Entry: 103a2e1f4; end: 103a2e323;  */

void FUN_103a2e1f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dc3d550;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 103a2e324; end: 103a2e35b;  */

void FUN_103a2e324(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103a2e35c; end: 103a2e377; -[SCMapPeopleFriendsUpdate description] */

void FUN_103a2e35c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e378; end: 103a2e3bf; -[SCMapPeopleFriendsUpdate init] */

void FUN_103a2e378(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPeopleServices/SCMapPeopleFriendsUpdateWrapper.swift",0x39,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2e3c0);
  (*pcVar1)();
}



/* Entry: 103a2e3c0; end: 103a2e3cb; -[SCMapPeopleFriendsUpdate copyWithZone:] */

void FUN_103a2e3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a2e3cc; end: 103a2e3d3; +[SCMapPeopleFriendsUpdate didUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e3cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fcd6a8) = 0;
  *(undefined8 *)(lVar1 + _DAT_112fcd6b0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e3d4; end: 103a2e43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e3d4(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fcd6a8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd6b0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61434(param_1);
  func_0x000107c61154(auStack_30,puVar1);
  return;
}



/* Entry: 103a2e43c; end: 103a2e4cb; +[SCMapPeopleFriendsUpdate didUpdateFriendTypeWithUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e43c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fcd6a8) = 1;
  *(long *)(lVar1 + _DAT_112fcd6b0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e4cc; end: 103a2e4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e4cc(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fcd6a8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd6b0) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2e4d4; end: 103a2e52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e4d4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fcd6a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd6b0) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2e52c; end: 103a2e533; +[SCMapPeopleFriendsUpdate didUpdateFeedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e52c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fcd6a8) = 2;
  *(undefined8 *)(lVar1 + _DAT_112fcd6b0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e534; end: 103a2e5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e534(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fcd6a8) = param_3;
  *(undefined8 *)(lVar1 + _DAT_112fcd6b0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2e5ec; end: 103a2e69b; -[SCMapPeopleFriendsUpdate matchDidUpdate:didUpdateFriendType:didUpdateFeedItems:] */

/* WARNING: Possible PIC construction at 0x000103a2e684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2e688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e5ec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_112fcd6a8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000103a2e658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_112fcd6a8) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112fcd6b0);
    if (lVar1 == 0) {
      func_0x000107c61174();
    }
    else {
      func_0x000107c61174();
      func_0x000107c5fe08(lVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    }
    (**(code **)(param_4 + 0x10))(param_4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103a2e664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 103a2e69c; end: 103a2e6cf;  */

void FUN_103a2e69c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a2e6d0; end: 103a2e6df; -[SCMapPeopleFriendsUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2e6d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcd6b0));
  return;
}



/* Entry: 103a2e6e0; end: 103a2e6ff;  */

void FUN_103a2e6e0(void)

{
  func_0x000107c61168(&PTR_PTR_1129152e8);
  return;
}



/* Entry: 103a2e700; end: 103a2e867;  */

int FUN_103a2e700(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a2e77c;
        goto LAB_103a2e760;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a2e760:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a2e77c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a2e868; end: 103a2e8a7;  */

void FUN_103a2e868(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d5b0;
  func_0x000107c61520(&UNK_10dc3d5b0,&UNK_1106c0e50);
  puRam0000000112fcd6e0 = puVar1;
  return;
}



/* Entry: 103a2e8a8; end: 103a2e8bb;  */

bool FUN_103a2e8a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a2e8bc; end: 103a2e967;  */

void FUN_103a2e8bc(void)

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



/* Entry: 103a2e968; end: 103a2e96b;  */

void FUN_103a2e968(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d650;
  func_0x000107c61520(&UNK_10dc3d650,&UNK_1106c0fb8);
  puRam0000000112fcd6e8 = puVar1;
  return;
}



/* Entry: 103a2e96c; end: 103a2e9ab;  */

void FUN_103a2e96c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d650;
  func_0x000107c61520(&UNK_10dc3d650,&UNK_1106c0fb8);
  puRam0000000112fcd6e8 = puVar1;
  return;
}



/* Entry: 103a2e9ac; end: 103a2e9c3;  */

undefined1 FUN_103a2e9ac(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103a2e9c4; end: 103a2ea03;  */

void FUN_103a2e9c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d700;
  func_0x000107c61520(&UNK_10dc3d700,&UNK_1106c1010);
  puRam0000000112fcd6f0 = puVar1;
  return;
}



/* Entry: 103a2ea04; end: 103a2ea07;  */

void FUN_103a2ea04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d7a0;
  func_0x000107c61520(&UNK_10dc3d7a0,&UNK_1106c1030);
  puRam0000000112fcd6f8 = puVar1;
  return;
}



/* Entry: 103a2ea08; end: 103a2ea47;  */

void FUN_103a2ea08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d7a0;
  func_0x000107c61520(&UNK_10dc3d7a0,&UNK_1106c1030);
  puRam0000000112fcd6f8 = puVar1;
  return;
}



/* Entry: 103a2ea48; end: 103a2eacb;  */

void FUN_103a2ea48(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2eacc; end: 103a2eb1b;  */

undefined1  [16] FUN_103a2eacc(void)

{
  return ZEXT816(0x1106c1010);
}



/* Entry: 103a2eb1c; end: 103a2eb2b; -[_TtC31SCPrimaryLocationDeviceServices31SCPrimaryLocationDeviceServices deviceLocationPrimacyMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2eb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd710));
  return;
}



/* Entry: 103a2eb2c; end: 103a2eb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2eb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd708) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd710) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2eba0; end: 103a2ebff; -[_TtC31SCPrimaryLocationDeviceServices31SCPrimaryLocationDeviceServices init] */

void FUN_103a2eba0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPrimaryLocationDeviceServices.SCPrimaryLocationDeviceServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2ebcc);
  (*pcVar1)();
}



/* Entry: 103a2ec00; end: 103a2ec47; -[_TtC31SCPrimaryLocationDeviceServices31SCPrimaryLocationDeviceServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a2ec2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2ec30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2ec00(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fcd700));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd708));
  return;
}



/* Entry: 103a2ec48; end: 103a2eccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2ec48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa32e0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fcd740) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fcd748) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2ecd0);
  (*pcVar1)();
}



/* Entry: 103a2ecd0; end: 103a2ed2f; -[_TtC35MeActiveUserSessionScopeGraphBridge50MeActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a2ecd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MeActiveUserSessionScopeGraphBridge.MeActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2ecfc);
  (*pcVar1)();
}



/* Entry: 103a2ed30; end: 103a2ed67; -[_TtC35MeActiveUserSessionScopeGraphBridge50MeActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a2ed4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2ed50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2ed30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd740));
  return;
}



/* Entry: 103a2ed68; end: 103a2ed8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2ed68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fcd748),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fcd740));
  return;
}



/* Entry: 103a2ed90; end: 103a2ee2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2ed90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fce510);
  *(undefined8 *)(unaff_x20 + _DAT_112fcd778) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd780) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a2ee2c; end: 103a2ee8b; -[_TtC35MeActiveUserSessionScopeGraphBridge37SCCustomVolumeServicesSaberEntryPoint init] */

void FUN_103a2ee2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MeActiveUserSessionScopeGraphBridge.SCCustomVolumeServicesSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2ee58);
  (*pcVar1)();
}



/* Entry: 103a2ee8c; end: 103a2ef1f; -[_TtC35MeActiveUserSessionScopeGraphBridge37SCCustomVolumeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2ee8c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fcd778));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd780));
  return;
}



/* Entry: 103a2ef20; end: 103a2ef27;  */

undefined8 FUN_103a2ef20(void)

{
  return 0;
}



/* Entry: 103a2ef28; end: 103a2efc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2ef28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fce530);
  *(undefined8 *)(unaff_x20 + _DAT_112fcd7b0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd7b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a2efc4; end: 103a2f023; -[_TtC35MeActiveUserSessionScopeGraphBridge36SCLegacyMediaServicesSaberEntryPoint init] */

void FUN_103a2efc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MeActiveUserSessionScopeGraphBridge.SCLegacyMediaServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2eff0);
  (*pcVar1)();
}



/* Entry: 103a2f024; end: 103a2f0b7; -[_TtC35MeActiveUserSessionScopeGraphBridge36SCLegacyMediaServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2f024(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fcd7b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd7b8));
  return;
}



/* Entry: 103a2f0b8; end: 103a2f0bf;  */

undefined8 FUN_103a2f0b8(void)

{
  return 0;
}



/* Entry: 103a2f0c0; end: 103a2f123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f0c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce4f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a2f124; end: 103a2f12b;  */

void FUN_103a2f124(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a2f12c; end: 103a2f1cb;  */

void FUN_103a2f12c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a2f1cc; end: 103a2f1eb;  */

void FUN_103a2f1cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a2f1ec; end: 103a2f24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f1ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce500);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a2f250; end: 103a2f257;  */

void FUN_103a2f250(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a2f258; end: 103a2f27b;  */

void FUN_103a2f258(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a2f27c; end: 103a2f29b;  */

void FUN_103a2f27c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a2f29c; end: 103a2f2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f29c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce508);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a2f300; end: 103a2f307;  */

void FUN_103a2f300(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a2f308; end: 103a2f3a7;  */

void FUN_103a2f308(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a2f3a8; end: 103a2f3c7;  */

void FUN_103a2f3a8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a2f3c8; end: 103a2f42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f3c8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce518);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a2f42c; end: 103a2f433;  */

void FUN_103a2f42c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a2f434; end: 103a2f4d3;  */

void FUN_103a2f434(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a2f4d4; end: 103a2f4f3;  */

void FUN_103a2f4d4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a2f4f4; end: 103a2f557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f4f4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce520);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a2f558; end: 103a2f55f;  */

void FUN_103a2f558(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a2f560; end: 103a2f5ff;  */

void FUN_103a2f560(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a2f600; end: 103a2f61f;  */

void FUN_103a2f600(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a2f620; end: 103a2f683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a2f620(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fce528);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}


